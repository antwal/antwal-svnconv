	#include <stdio.h>
	#include <unistd.h>
	#include <string.h>
	#include <stdlib.h>
	#include <sys/types.h>
	#include <fcntl.h>
	#include <pthread.h>
	#include <errno.h>   /* Error number definitions */
	#include <termios.h> /* POSIX terminal control definitions */

	#define MaxRx   46      			// Maximum size of receive buffer
	#define MaxTx   46      			// Maximum size of transmit buffer

	#include "buffer.h"

	#define serial_tx_ready()       1               							// Transmitter empty
	#define serial_send(a)          write(fd, &a, 1)        					// Transmit char a
	#define serial_rx_ready()       bufferDataAvail(&modem_buffer) 				// Receiver full
	#define serial_get(buff)        buff = bufferGetFromFront(&modem_buffer)   	// Receive char from modem
	#define serial_error()          0                               			// USART error
	#define serial_fix()            1               							// Clear error


	unsigned char err;									// Stores the error number
	char APaddr[] = "\"gprssouth.cellone.in\"\r";

	unsigned char signal[2];							// Stores signal strength
	char ipAddr[20] = {'\0'};								// used to store ip address
	unsigned char res, retry=0;

	enum {
	SHUT = 0,
	INIT,
	SIGLVL,
	NWATT,
	APN,
	NWUP,
	IP,
	DONE,
	ERROR,
	};
		
	struct termios  options;
	int fd;
	unsigned char state = SHUT;

	unsigned int TIME;									// 10 millseconds counter
	#define TIME_SET(a) TIME=a                      	// Set 10 millisecond counter to value 'a'
	unsigned char addr1, addr2, addr3, addr4;      		// Assigned IP address

	void *timer(void *arg);

	void *read_serial(void *arg);
	cBuffer modem_buffer;								// Receive Buffer for modem 
	unsigned char mBuffer[MaxRx];

	void *timer(void *arg){
			while(1){
			 usleep(10000);
					TIME++;
	//		printf("Time: %d\n",TIME);
			}
	}

	void *read_serial(void *arg)
	{
		unsigned char lbuff;
		while(1){
			res = read(fd, &lbuff, 1);
			if(res <= 0)
				perror("Read error:");
			else{
				if(lbuff != 0x00 && lbuff != 0xa)
				{
					if(bufferIsNotFull(&modem_buffer))
					bufferAddToEnd(&modem_buffer, lbuff);					// Keeping data into the buffer	
					else
					printf("Buffer Full\n");			
				}
			}	
		}
		
	}
	/*
	*	This function copies the string from start to one before the end character
	*	@lBuff Buffer with copied string 
	*	@start starting character
	*	@end end character
	*	@return success or failure
	*/
	unsigned char serialCopy(char* lBuff, char start, char end)
	{
		char i=0;
		if (serial_rx_ready()) 
		{
			serial_get(addr4);                  					// get character
			if(addr4 == start)
			{
			// Copy till it matches the end character
				do{
					serial_get(addr4);
					lbuff[i++] = addr4;
				}
				while(addr4 != end)
				
				lbuff[i-2] = '\0';									// Overwriting the end character with the null character
				return SUCCESS;
			}
		}
		return FAIL;
	}

	/*
	* This function matches the data received with the res buffer
	* @res buffer with which rcvd data to be matched
	* @timeout Time to wait for response
	* @return If matched SUCCESS else FAIL
	*/
	unsigned char serialMatch(const char *resp, unsigned timeout)
	{
		addr2 = addr4 = 0;
		for (TIME_SET(0); TIME<timeout; )           						// loop until time runs out
		{	
				if (serial_rx_ready()) 
				{
					serial_get(addr4);                  					// get character
	#ifdef PC
					if(addr4 != '\r')
					fprintf(stderr,"%c",addr4);
					else
					fprintf(stderr,"\n");
	#endif
					if (resp[addr2] == addr4) addr2++;  					// does char match response string
					else addr2 = 0;													// otherwise reset match pointer
					TIME_SET(0);

					if (!resp[addr2]){										// All char are matched 	
						return SUCCESS;            							// finished if string matches
					}
				}
		}
		return FAIL;
	}

	/*
	*	This function checks the response from the modem 
	*	@timeout It takes the timeout for that command
	* 	@returns Success if command response is what is expected else returns error
	*/
	unsigned char response(const char * response, unsigned int timeout)
	{
			switch (state)
			{
				case SIGLVL:
						res = serialMatch("+CSQ: ",timeout);
						serial_get(signal[0]);
						serial_get(signal[1]);
						res = serialMatch("OK",10);
						printf("SIGNAL: %s\n",signal);
						break;
				case IP:
						res = serialMatch("ERROR", timeout);
						if(res != SUCCESS){										// that means error has not occured					
						strncpy(ipAddr,mBuffer,15);
						res = !res;
						}
						else	res = !res;

						break;
				case ERROR:
						res = serialMatch("STATE: ", timeout);
						break;

				default:
						res = serialMatch(response,timeout);
						break;
			}
			return res;
	}

	char sendwait(const char *send, const char * resp, unsigned int timeout) {
		addr2=addr3=0;
		// Sending commands to the modem 
		do{
			if (serial_tx_ready() ) {  													// if char to send and Tx ready	
				if(send[addr3] != '\r')
					printf("%c", send[addr3]);
				else
					printf("\n");
				if (send[addr3]=='|') { 												// if pause character
					TIME_SET(0);	
					while (TIME < 100);     									// Polling; has 1 second expired yet?
					TIME_SET(0);													// if yes clear timer
					addr3++;              				       							// and point to next character
				}
				else {
					TIME_SET(0);	
					serial_send(send[addr3]);							   				// send the character
					addr3++;                    									// point to next char in tx string
				}
			}
		   }
		   // While there is something to send
		   while(send[addr3]);
		
		   res = response(resp, timeout); 	   

		return res;
	}

	unsigned char errorHandle(void)
	{
		char lBuff[20];
		bufferFlush();
		res = sendwait("AT+CIPSTATUS\r", "STATE:",200);
		// CIPSTATUS output is like- STATE: IP INITIAL
		if(res == SUCCESS)
		{
			res = serialCopy(lBuff, ' ', '\r');				// this should give the status
			if(res == SUCCESS)
			{
				if(strcmp(lBuff,"PDP DEACT"))
					state = SHUT;
				else 
				// If TCP connection is closed restart the TCP connection using CIPSTART
				if(strcmp(lBuff,"CONNECTION CLOSED"))
					
					
			}
		}
		
		
	}

	unsigned char connect(char *server, )
	{
		
	}

	/* Modem initialisation function */
	unsigned char modem_init(void){

	// This is used for APN address update
		char CMD[26 + 10]="AT+CSTT=";

			do{
			switch(state){
			case SHUT:
				res = sendwait("AT+CIPSHUT\r", "OK", 500);
			break;

			case INIT:           
				res = sendwait("\rATH\r", "OK", 200);
				res = sendwait("ATZ\r", "OK",200);
				res = sendwait("AT&FS11=55\r", "OK", 300);	 									// Init modem
				res = sendwait("\rAT S7=45 S0=0 L1 V1 X4 &c1 E0 Q0\r", "OK", 100);
				break;

			case NWATT:
				res = sendwait("AT+CGATT=1\r", "OK", 300);
				break;

			case SIGLVL:		
				res = sendwait("AT+CSQ\r", "", 100);
				break;

			case APN:
				//Setting APN adddress for GSM
				strcat(CMD,APaddr);
				res = sendwait(CMD,"OK", 200);
				break;

		case NWUP:
				res = sendwait("AT+CIICR\r","OK", 500);
				break;

		case IP:
				bufferFlush(&modem_buffer);
				res = sendwait("AT+CIFSR\r", "", 200);
				break;
		
		case DONE:
				break;

		default:
				break;
			}
		
			// Error occurred in connection
			if(res == FAIL )
				{
					err = state;
					state = ERROR;		
				}
			else 
				state ++;		
		}
		// Do this till Done or retries are over
		while(state != DONE && retry < 3);
		
		
		return res;
	}

	/* Serial intiailisation in PC*/
	void serialInit(void){
		fd = open ("/dev/ttyS0", O_RDWR|O_NOCTTY); //|O_NONBLOCK);
			if(fd < 0){
					perror("Opening:");
			 
		}
		options.c_cflag |= (CS8);  								// RTS flow control of input
		cfsetspeed(&options, B9600);    						// Set 19200 baud
	}


	/* Main Function */
	int main(void) {

		pthread_t timer_thread;											// timer thread which keeps updating timer at 10ms
		pthread_t read_thread;											// Reads data from serial port and keeps in the modem buffer

		bufferInit(&modem_buffer, mBuffer, MaxRx);

		serialInit();													// Serial init
		TIME_SET(0);													// Initialising timer
		pthread_create(&timer_thread, NULL, timer, NULL);				// Thread for Timer
		pthread_create(&read_thread, NULL, read_serial, NULL);			// Thread for Serial Read

		res = modem_init();												// Do till modem gets connected
		if(res == SUCCESS){
	  printf("Modem initialised successfully\n");
		printf("IP:%s\n",ipAddr);
		}
		else
	  printf("Modem initialised FAiled\n");

		return 1;
	}

