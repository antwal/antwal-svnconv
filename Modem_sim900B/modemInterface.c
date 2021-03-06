/* This file keeps the functions related to modem */

#include <stdio.h>
	#include <unistd.h>
	#include <string.h>
	#include <stdlib.h>
	#include <sys/types.h>
	#include <fcntl.h>
	#include <pthread.h>
	#include <errno.h>   /* Error number definitions */
	#include <termios.h> /* POSIX terminal control definitions */
	#include <stdint.h>

	#define MaxRx   100     			// Maximum size of receive buffer
	#define MaxTx   100      			// Maximum size of transmit buffer

	#include "buffer.h"
	#include "ntp.h"
	#include "http.h"

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
	unsigned char retry=0;
	

	enum {
	SHUT = 0,
	PDPDEACT,
	INIT,
	NWATT,
	APN,
	NWUP,
	IPCONFIG,
	IPGPRSACT,
	IP,
	CONNECTING,
	CONNECT,
	ERROR,
	CLOSE,
	FORCED,
	SIGLVL
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
		unsigned char lbuff,res;
		while(1){
			res = read(fd, &lbuff, 1);
			if(res < 0)
				perror("Read error:");
			else{
				//if(lbuff != 0xa)
				{
					if(bufferIsNotFull(&modem_buffer))
					bufferAddToEnd(&modem_buffer, lbuff);					// Keeping data into the buffer	
					else
					printf("Buffer Full\n");			
				}
			}	
		}
		
	}

typedef struct{
	char 			*ip_addr;		// Point to the ip address(192:168:51:28)
	char 			*provider;		// Points to the signal provider name
	uint8_t 		signal;			// Holds the signal strngth
	char 			*msgCentreNo;	// Message center number
} mdmInfo;

typedef struct {
	uint16_t dtr_pin;				// Pin used for dtr signaling
	//COX_SERIAL_PI *uart;			// Uart used to communcate with Modem
	mdmInfo *minfo;					// Modem informations
}mdmIface ;

typedef struct sockaddr_in {
	char 	*port;					// Contains the port string
	char 	*addr;					// Contains the address wether it is ip or URL
}server;


typedef enum {
	mdmOK	=0,						// Everything is OK
	mdmFail,						// Operation failed 
	mdmInitFail,					// Init failed
	mdmAttFail,						// CGATT Failed
	mdmApnFail,						// ApN setting failed
	mdmIPFail,						// IP unable to get
	mdmConnectFail,					// Socket conncetion failed
	mdmTimeOut,						// Response timedout
	mdmSendFail,					// If sending fails
	mdmReadFail
	
}mdmStatus;

// Takes the return values
mdmStatus res;

/* used to indicate if any write operation is done or not
	toggle = 0; // write not done or same payload is requested to be read in small chunk
	toggle = 1; // write done so new packet is available to be read
*/
uint8_t toggle = 0, count;

/* Function Declarations*/
mdmStatus mdmInit(mdmIface *mdm);
mdmStatus mdmNWControl(mdmIface *mdm,uint8_t attach);
mdmStatus mdmIPup(mdmIface *mdm);
mdmStatus mdmClose(mdmIface *mdm);
mdmStatus mdmShut(mdmIface *mdm);
mdmStatus mdmTCPConnect(mdmIface *mdm, server *obj);
mdmStatus mdmUDPConnect(mdmIface *mdm, server *obj);
mdmStatus mdmRead(mdmIface *mdm, char *buffer, uint32_t len);
mdmStatus mdmWrite(mdmIface *mdm, char *buffer, uint32_t len,uint8_t send);


/*
	*	This function copies the string from start to one before the end character
	*	@lBuff Buffer with copied string 
	*	@start starting character
	*	@end end character
	*	@return success or failure
	*/
	mdmStatus serialCopy(char* lbuff, char start, char end)
	{
		char i=0;
		
		if (serial_rx_ready()) 
		{
			serial_get(addr4);                  					// get character
			if(addr4 == start)
			{
			// Copy till it matches the end character
				do{
					if(serial_rx_ready()){
					serial_get(addr4);
					lbuff[i++] = addr4;
					}
					
				}
				while(addr4 != end);
				lbuff[i-1] = '\0';									// Overwriting the end character with the null character
				
				return mdmOK;
			}
		}
		return mdmFail;
	}

	/*
	* This function matches the data received with the res buffer
	* @res buffer with which rcvd data to be matched
	* @timeout Time to wait for response
	* @return If matched SUCCESS else FAIL
	*/
	mdmStatus serialMatch(mdmIface *mdm, const char *resp, unsigned timeout)
	{
		addr2 = addr4 = 0;
		
		for (TIME_SET(0); TIME<timeout; )           						// loop until time runs out
		{	
				if (serial_rx_ready()) 
				{
					serial_get(addr4);                  					// get character
	#ifdef PC
					if(addr4 != '\r')
					fprintf(stdout,"%c",addr4);
					//else
					//fprintf(stdout,"\n");
	#endif
					if (resp[addr2] == addr4) 
					{
						addr2++;  					// does char match response string
						if (!resp[addr2]){										// All char are matched 	
						fprintf(stderr,"\n");
						return mdmOK;  }    							// finished if string matches
					}	
					else addr2 = 0;													// otherwise reset match pointer
					TIME_SET(0);

					if (!resp[addr2]){										// All char are matched 	
						return mdmOK;            							// finished if string matches
					}
				}
		}
		if(TIME >= timeout)
			return mdmTimeOut;
			
		return mdmFail;
	}

	

	
	mdmStatus sendwait(mdmIface *mdm,const char *send, const char * resp, unsigned int timeout) {
		addr2=addr3=0;
		// Sending commands to the modem 
		printf("\n");
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
		
			switch (state)
			{
				
				case SIGLVL:
						res = serialMatch(mdm, "+CSQ: ",timeout);
						serial_get(signal[0]);
						serial_get(signal[1]);
						res = serialMatch(mdm, "OK",10);
						printf("SIGNAL: %s\n",signal);
						break;
					
				case IP:
						//res = serialMatch(mdm, "ERROR", timeout);
						//if(res != mdmOK){										// that means error has not occured					
						//strncpy(mdm->minfo->ip_addr,mBuffer,15);
						do{
							if(serial_rx_ready())
							{
								serial_get(res);
								//printf("0x%x\n",res);
							}
						}
						while(res == '\r' || res == '\n');
						
						do{
							if(serial_rx_ready())
							{
								mdm->minfo->ip_addr[addr2++]= res; 
								serial_get(res);
								//printf("0x%x\n",res);
							}
						}
						while(res != '\r');
						
						printf("IP:%s\n",mdm->minfo->ip_addr);
						res = mdmOK;
						//}
						//else	res = mdmFail;

						break;
				case ERROR:
						res = serialMatch(mdm, "STATE: ", timeout);
						break;

				default:
						res = serialMatch(mdm, resp,timeout);
						break;
			}

		return res;
	}

	mdmStatus mdmState(mdmIface *mdm)
	{
		char lBuff[20];
		
		do{
			do{
			res = sendwait(mdm, "AT+CIPSTATUS\r", "STATE:",200);
			}
			while(res != mdmOK);
			
			count = 0;
			/* CIPSTATUS output is like- STATE: IP INITIAL*/
			res = serialCopy(lBuff, ' ', '\r');
			printf("\n\nstatus is %s\n\n",lBuff);
		
			if(!strcmp(lBuff, "IP INITIAL"))
				state = FORCED;
			else	
			if(!strcmp(lBuff,"PDP DEACT"))
				state = PDPDEACT;
			else 
			if(!strcmp(lBuff,"TCP CLOSED"))
			{	
				state = CLOSE;
			}
			else
			if(!strcmp(lBuff,"UDP CLOSED"))
			{	
				state = CLOSE;
			}
			else
			if(!strcmp(lBuff, "IP START"))
				state = INIT;
			else
			if(!strcmp(lBuff, "IP STATUS"))
			{
				state = IP;
			}
			else
			if(!strcmp(lBuff, "IP CONFIG"))
				state = IPCONFIG;
			else
			if(!strcmp(lBuff, "IP GPRSACT"))
				state = IPGPRSACT;
			else
			if(!strcmp(lBuff, "CONNECT OK"))
				state = CONNECT;
			else
				count = 1;
		}
		while(count ==1);
		
		return res;
	}



	mdmStatus mdmFSM(mdmIface *mdm)
	{		
		res = mdmInit(mdm);
		state = CLOSE;
		
	res = mdmState(mdm);
	count = 8;
	do{	
		switch(state)
		{
			case SHUT:
			case FORCED:
				res = mdmInit(mdm);
				break;
			
			case INIT:
				res = mdmNWControl(mdm, 1);								
				break;
				
			case NWATT:
				res = mdmIPup(mdm);
				break;
				
			case PDPDEACT:
				res = mdmShut(mdm);
				break;
			
			case IPGPRSACT:
			case IPCONFIG:
				state = IP;
				res = sendwait(mdm, "AT+CIPHEAD=1\r", "OK", 200);
				res = sendwait(mdm, "AT+CIFSR\r", "", 500);
				break;
					
			case IP:
				res = sendwait(mdm, "AT+CIPHEAD=1\r", "OK", 200);
				res = sendwait(mdm, "AT+CIFSR\r", "", 500);
				
				break;
			
			case CONNECT:
				res = mdmClose(mdm);
				break;
			case CLOSE:
				state = IPGPRSACT;
				break;
				
			default:
				break;
		
		}
	}
	while(state != IP && count-- > 0);
	
	
	if(count > 0)
		return mdmOK;
	else
		return res;
	}


/*
*	This function initialises the modem to its default state
*/
mdmStatus mdmInit(mdmIface *mdm)
{
	res = mdmOK;
	if(state == SHUT || state == CLOSE || state == FORCED)
	{
		res = sendwait(mdm,"\rATH\r", "OK", 200);
		res = sendwait(mdm,"ATZ\r", "OK",200);
		res = sendwait(mdm,"\rAT S7=45 S0=0 L1 V1 X4 &c1 E0 Q0\r", "OK", 100);
		//res = sendwait(mdm,"AT&FS11=55\r", "OK", 300);	 	
		res = sendwait(mdm, "ATE0\r", "OK",100);
		
	}
	state = INIT;
	if(res != mdmOK)
		return mdmInitFail;
		
	return res;
	
}

/*
*	This function controls the network related jobs like:
*	- Attaching/dettaching to/from the network 
*	- Setting apn address
*/
mdmStatus mdmNWControl(mdmIface *mdm,uint8_t attach)
{
	// This is used for APN address update
	char CMD[26 + 10]="AT+CSTT=";
	
	res = mdmOK;
	
		if(attach == 1)
		res = sendwait(mdm, "AT+CGATT=1\r", "OK", 300);
		else{
		res = sendwait(mdm, "AT+CGATT=0\r", "OK", 300);
		state = CLOSE;
		return res;
		}
	
		if(res != mdmOK)
			return mdmAttFail;
	
	if (state == INIT || state == FORCED)
	{
		//Setting APN adddress for GSM
		strcat(CMD,APaddr);
		res = sendwait(mdm, CMD,"OK", 200);
	
		if(res != mdmOK)
			return mdmApnFail;
	}
	state = NWATT;
		
	return res;


}


/*
*	This function ups the Interface and get a new IP
*/
mdmStatus mdmIPup(mdmIface *mdm)
{
	res = mdmOK;
	if(state == NWATT)
	{
		res = sendwait(mdm, "AT+CIICR\r","OK", 1000);
		count = 3;
		do
		{
			sleep(1);
			res = mdmState(mdm);
			count --;
			
		}
		while(state != IPGPRSACT && count > 0);
		
		if(!(count > 0))
			return mdmIPFail;
	
	
	/* Display IP head in RECV data(e.g. +IPD,5:test1)
	*  It let us to distinguish between data and AT response
	*  number after IPD is length of the payload
	*  Payload follows after colon.
	*/
		res = sendwait(mdm, "AT+CIPHEAD=1\r", "OK", 200);
		if(res != mdmOK)
			return mdmFail;
	
	// If till this point things are successful that means we reach IP state
		state = IP;
		res = sendwait(mdm, "AT+CIFSR\r", "", 500);
	
		if(res != mdmOK)
			return mdmIPFail;
	
	}
	
	return res;
}

/*
*	This function connects to the TCP server
*	It takes server object which keeps ipaddr and port
*/
mdmStatus mdmTCPConnect(mdmIface *mdm, server *obj)
{
	char *cmd = (char *)malloc(50);
	
	count = 3;
	do{
	printf("IN tcp connect\n");
		state = CONNECTING;
		mdmState(mdm);
		count --;
		if(state == IP || state == CLOSE)
		{
			state = CONNECTING;
			sprintf(cmd, "AT+CIPSTART=\"TCP\",\"%s\",%s\r",obj->addr, obj->port);
			res = sendwait(mdm, cmd, "NNECT OK", 1000);
	
			if(res == mdmTimeOut)
				printf("Timeout\n");
		}
	}
	while(res != mdmOK && count > 0);
	
	if(count > 0)
		state = CONNECT;
	
	return res;
}

/*
*	This function connects to the UDP server
*`	It takes server object which keeps ipadddr and port
*/
mdmStatus mdmUDPConnect(mdmIface *mdm, server *obj)
{
	char *cmd = (char *)malloc(50);
	
	count =3;
	do
	{
	printf("IN udp connect\n");
		state = CONNECTING;
		mdmState(mdm);
		count --;
		if(state == IP|| state == CLOSE)
		{
			
			sprintf(cmd, "AT+CIPSTART=\"UDP\",\"%s\",%s\r",obj->addr, obj->port);
			res = sendwait(mdm, cmd, "NNECT OK",1000);
	
			if(res == mdmTimeOut)
				printf("Timeout\n");
		}
	}
	while(res != mdmOK && count > 0);
	
	if(count > 0)
	state = CONNECT;
	
	return res;
}

/*
*	This function should be used after connect
*	It writes the data to the open socket whether it is UDP or TCP
*	@buffer - this is the buffer which will be sent
*	@len	- length of the buffer
*	@send   - this tells if the buffer should be sent or just kept in the modem buffer
*/
mdmStatus mdmWrite(mdmIface *mdm, char *buffer, uint32_t len, uint8_t send)
{
	uint8_t i;									// Number of retries to send the PAcket
	count = 3;
	
if(state == CONNECT){
	do{
		i = 3;
		do
		{
			i --;
			res = sendwait(mdm, "AT+CIPSEND\r", ">", 200);
		}
		while(res != mdmOK && count > 0);
		
		if(i > 0)
		{
			for(i = 0; i< len; i++)
			{
				serial_send(buffer[i]);
			}
			
		}
		else
		{
			count = 0;
			break;
		}
		
		if(send == 1)
		{	
			i = 0x1a;
			serial_send(i);									// Sending Ctrl+Z
			res = serialMatch(mdm, "SEND OK", 5000);
			count--;
		}
	}
	while(res != mdmOK && count > 0);
	
	if(count > 0){
		toggle = 1;
		printf("write success\n");
		return mdmOK;
	}
	else
	return mdmSendFail;
 }
 return mdmSendFail;
	
}

/*
*	This function is used to read data from the open socket
*	@buffer	- this buffer returns the data obtained
*	@len	- this is the length which is expected to be read
*/
mdmStatus mdmRead(mdmIface *mdm, char *buffer, uint32_t len)
{
	char data = 0, i= 0;
	static uint32_t paylen = 0;
	static uint32_t dataRead = 0;
	
	
	
	printf("IN read\n");
	if(toggle == 1){
		count = 3;
		toggle = 0;
		do{
			count --;
			res = serialMatch(mdm, "+IPD,", 2000);
		}
		while(res != mdmOK && count > 0);
	
		if(count > 0)
		{
			count = 0;
			do
			{
				if(serial_rx_ready())
				{
					serial_get(data);							// Payload length
					if(data == ':')
						break;
				
			
					if(i!= 0)
						paylen *=10;
				
					paylen += (char)atoi(&data);
					i++;
				}
			}
			while(1);
			printf("PAYLOAD len=%d\n",paylen);
		}
		else 
		return mdmReadFail;
	}
	
	if(paylen <= dataRead)
	{	
		dataRead = 0;
		return mdmReadFail;
	}
			
	if(paylen < len)							// Data received is lesser than requested	
		len = paylen;	
	
	i = 0;
	TIME_SET(0);
		
	do{
		if(serial_rx_ready())
		{
			serial_get(buffer[i]);
			printf("%c", (char)buffer[i]);
			i++;
			TIME_SET(0);
		}
				
	}
	while((len != i) && (TIME < 1000));
		
	dataRead += i;
	
	
	if(i == 0)
		count ++;
	// This means data is not there in the buffer; time to tell
	if(count > 2)
		return mdmReadFail;
	
	printf("\ntotal=%d read=%d\n",paylen,dataRead);
	return i;									// Number of bytes read

}

/*
*	To close the TCP or UDP connection
*	After this if reconnection is required than all the  init 
*	process should be followed again
*/
mdmStatus mdmClose(mdmIface *mdm)
{
	count = 5;
	
	res = mdmState(mdm);
	if(state == CONNECT)
	{// TCP connection closing takes more time than the UDP
		do{
			mdmState(mdm);
			count --;
			if(state == CONNECT)
			{
				res = sendwait(mdm, "AT+CIPCLOSE\r", "LOSE OK", 1000);
			}
			else if(state == CLOSE)
				{
					res = mdmOK;
					break;
				}
		}
		while(res != mdmOK && count > 0);
		
		if(count > 0 || res == mdmOK)
		state = CLOSE;
		else 
		state = PDPDEACT;			// SHUT the connection
	}
	return res;
	
}

/*
*	This function shuts down the connection
*	Puts the modem in IP INITIAL state
*/
mdmStatus mdmShut(mdmIface *mdm)
{
	count = 5;
	do{
		count --;
		res = sendwait(mdm, "AT+CIPSHUT", "SHUT OK", 1000);
	}
	while(res != mdmOK && count > 0);
	
	state = SHUT;
	return res;
}



/* Serial intiailisation in PC*/
	void serialInit(void){
		fd = open ("/dev/ttyS0", O_RDWR|O_NOCTTY); //|O_NONBLOCK);
			if(fd < 0){
					perror("Opening:");
			 
		}
		options.c_cflag |= (CS8);  								// RTS flow control of input
		cfsetspeed(&options, B115200);    						// Set 19200 baud
	}


	/* Main Function */
	int main(void) {
		char *get,*host;
		pthread_t timer_thread;											// timer thread which keeps updating timer at 10ms
		pthread_t read_thread;											// Reads data from serial port and keeps in the modem buffer
		
		server *udp = (server *)malloc(sizeof(server));
		server *tcp = (server *)malloc(sizeof(server));
		if(udp == NULL)
			printf("Mmmry Err\n");
		
		tcp->port = malloc(4);
		tcp->addr = malloc(20);
		
		tcp->port = "80";
		tcp->addr = "www.ubicomp.in";
		
		udp->port = malloc(4);
		udp->addr = malloc(20);
		
		udp->port = "123";
		udp->addr = "1.in.pool.ntp.org";
		
		// NTP msg structure
		ntpMsg *ntp = (ntpMsg *)malloc(48);
		
		mdmIface modm;
		
		modm.minfo = (mdmInfo *)malloc(sizeof(mdmInfo));
		modm.minfo->ip_addr = malloc(15);
		
		bufferInit(&modem_buffer, mBuffer, MaxRx);

		serialInit();													// Serial init
		TIME_SET(0);													// Initialising timer
		pthread_create(&timer_thread, NULL, timer, NULL);				// Thread for Timer
		pthread_create(&read_thread, NULL, read_serial, NULL);			// Thread for Serial Read

		/*res = mdmInit(&modm);											// Do till modem gets connected
		if(res != mdmOK)
			errorHandle(&modm);
			
		res = mdmNWControl(&modm, 1);
		if(res != mdmOK)
			errorHandle(&modm);
			
		res = mdmIPup(&modm);
		if(res != mdmOK)
			errorHandle(&modm);
		*/
		
		res = mdmFSM(&modm);
		
		if(res == mdmOK){
		printf("Modem initialised successfully\n");
		//printf("\nIP:%s\n",modm.minfo->ip_addr);
		res = mdmUDPConnect(&modm, udp);
		printf("\n");
		
		sendNTPRequest(ntp); 		// Initialise the ntp structure
		
		res = mdmWrite(&modm,(char *) ntp, 48,1);
		
		res = mdmRead(&modm,(char *) ntp, 48);
		
		if(res != mdmReadFail)
		NtpDCall(ntp);
		
		res = mdmClose(&modm);
		}
		
		if(res == mdmOK){
		
		res = mdmFSM(&modm);
		
		host = modm.minfo->ip_addr;
		printf("ip:%s\n",host);
		
		// Build Login Query	
	    get = build_get_query(host, LOGINPAGE, FORMDATA, "name="USERNAME"&pass="PASSWORD"&form_id=user_login&op=Log%20in");
	    fprintf(stderr, "Query is:\n<<START>>\n%s\n<<END>>\n", get);
		
		res = mdmTCPConnect(&modm, tcp);
		
		res = mdmWrite(&modm, get, strlen(get), 1);
		
		do{
		res = mdmRead(&modm, get, 20);
		//printf("Data Read=%d\n",res);
		}
		while(res != mdmReadFail);
	
		}
		else
	  printf("Modem initialised FAiled\n");
	
		
		
		//sleep(5);
		//res = mdmNWControl(&modm,0);				// Disconnecting network connection
		
		return 0;
	}