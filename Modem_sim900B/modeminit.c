#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>
#include <pthread.h>
#include <errno.h>   /* Error number definitions */
#include <termios.h> /* POSIX terminal control definitions */

#define MaxRx   46      																									// Maximum size of receive buffer
#define MaxTx   46      																									// Maximum size of transmit buffer

#include "buffer.h"

#define serial_tx_ready()       1               													// Transmitter empty
#define serial_send(a)          write(fd, &a, 1)        									// Transmit char a
#define serial_rx_ready()       bufferDataAvail(&modem_buffer) 						// Receiver full
#define serial_get(buff)        buff = bufferGetFromFront(&modem_buffer)   // Receive char from modem
#define serial_error()          0                               					// USART error
#define serial_fix()            1               													// Clear error


struct termios  options;
int fd;
unsigned char state = 0;

unsigned int TIME;                              													// 10 millseconds counter
#define TIME_SET(a) TIME=a                      													// Set 10 millisecond counter to value 'a'
unsigned char addr1, addr2, addr3, addr4;      														// Assigned IP address

void *timer(void *arg);

void *read_serial(void *arg);
cBuffer modem_buffer;																											// Receive Buffer for modem 
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
	unsigned char res =0, lbuff;
	while(1){
		res = read(fd, &lbuff, 1);
		if(res <= 0)
			perror("Read error:");
		else{
			if(lbuff != 0x00 && lbuff != 0xa)
			{
				fprintf(stderr,"%c",lbuff);
				if(bufferIsNotFull(&modem_buffer))
				bufferAddToEnd(&modem_buffer, lbuff);																	// Keeping data into the buffer	
				else
				printf("Buffer Full\n");			
			}
		}	
	}
	
}

/*
*	This function checks the response from the modem 
*	@timeout It takes the timeout for that command
* @returns Success if command response is what is expected else returns error
*/
unsigned char response(unsigned int timeout)
{
	
}

char sendwait(const char *send, const char *response, unsigned int timeout) {
	char sent = 1;	
	addr2=addr3=0;
	printf("\nto Send = %s\n", send);
  
 	for (TIME_SET(0); TIME<timeout; )           														// loop until time runs out
	{	
		
		//while(!sent)																														// Reciving the response from modem
		//{
			if (serial_rx_ready()) 
			{
				serial_get(addr4);                      														// get character
				//if(addr4 != 0xa)
				printf("%c",addr4);
				// Checking if response string is checked already
 				if(!response[addr2]){
						sent = 1;
				}
				
				if (response[addr2] == addr4) addr2++;       													// does char match response string
   	   	else addr2 = 0;									                          						// otherwise reset match pointer
 				
				if (!response[addr2]){																								// All char are matched 
						sent = 1;
						printf("\n");
						if(!send[addr3])
						return 0;            																							// finished if string matches
     	 }
			}
		//}
	
	// Sending commands to the modem 
		if (send[addr3] ) {  																											// if char to send and Tx ready	
		    if (send[addr3]=='|') { 																							// if pause character
	      		TIME_SET(0);	
						while (TIME < 100);                      													// Polling; has 1 second expired yet?
 	    			TIME_SET(0);					      		               										// if yes clear timer
 	      		addr3++;              					          	        							// and point to next character
 	     	}
			  else {
	      		TIME_SET(0);	
	      		serial_send(send[addr3]);																   				// send the character
 	    	 		addr3++;                    																			// point to next char in tx string
 	     	}
	// All characters are sent			  
				if(!send[addr3]){
					sent = 0;
				}
 	   }
	}
	return FAIL;																																	// Timed Out; Some error
}

/* Modem initialisation function */
unsigned char modem_init(void){
	unsigned char result; 
	switch(state){
	case INIT:           
			result = sendwait("\rATH\r|","OK", 200);
			result = sendwait("ATZ\r|","OK", 200);
			result = sendwait("AT&FS11=55\r","OK",300);	 																					// Init modem
			result = sendwait("AT S7=45 S0=0 L1 V1 X4 &c1 E1 Q0\r","OK",100);
			
	result = sendwait("AT+CGATT=1\r","OK",300);
	result = sendwait("AT+CSQ\r","OK",100);
	result = sendwait("AT+CSTT=\"gprssouth.cellone.in\"\r","OK",200);
	result = sendwait("AT+CIICR\r","OK",300);
	result = sendwait("AT+CIFSR\r","",200);
					// Error occurred in connection
	return 0;
}

/* Serial intiailisation in PC*/
void serialInit(void){
	fd = open ("/dev/ttyS0", O_RDWR|O_NOCTTY); //|O_NONBLOCK);
        if(fd < 0){
                perror("Opening:");
         
	}
	options.c_cflag |= (CS8);  							// RTS flow control of input
	cfsetspeed(&options, B9600);    						// Set 19200 baud
}

void display_data(unsigned char* data){
	unsigned char i;
	for(i = 0; i < MaxTx; i++)
		printf("0x%02x\t", data[i]);
	printf("\n");
}


/* Main Function */
int main(void) {
	
 	pthread_t timer_thread;																										// timer thread which keeps updating timer at 10ms
	pthread_t read_thread;																										// Reads data from serial port and keeps in the modem buffer

	bufferInit(&modem_buffer, mBuffer, MaxRx);

	serialInit();																																// Serial init
	TIME_SET(0);																																// Initialising timer
 	pthread_create(&timer_thread, NULL, timer, NULL);													// Thread for Timer
 	pthread_create(&read_thread, NULL, read_serial, NULL);										// Thread for Serial Read


//  	sendwait("at\r", "OK", 100);
	while(modem_init());								// Do till modem gets connected
        printf("Modem initialised successfully\n");

	return 1;
}
