#include "cox_serial.h"
#include "STM32_USART.h"
#include <stm32_pio.h>
#include "stm32f10x.h"
#include "buffer.h"
#include <stdio.h>
#include <CoOS.h>			              /*!< CoOS header file	         */



	#include "modem.h"
	#include "buffer.h"
	#include "ntp.h"
	//#include "http.h"
	COX_SERIAL_PI *myUSART3 = &pi_serial3;

	#define serial_tx_ready()       1               							// Transmitter empty
	#define serial_send(a)          myUSART3->Write(&a, 1)      				// Transmit char a
	#define serial_rx_ready()       bufferDataAvail(&modem_buffer) 				// Receiver full
	#define serial_get(buff)        buff = bufferGetFromFront(&modem_buffer)   	// Receive char from modem
	#define serial_error()          0                               			// USART error
	#define serial_fix()            1               							// Clear error


	unsigned char err;									// Stores the error number
	const char APaddr[] = "\"gprssouth.cellone.in\"\r\n";
	//const char APaddr[] = "\"aircelwap\"\r\n";

	unsigned char signal[2];							// Stores signal strength
	char ipAddr[20] = {'\0'};								// used to store ip address
	//unsigned char retry=0;
	extern char *data_packet;
	extern uint32_t TIME_TICK;


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
	CLOSE,
	FORCED,
	SIGLVL,
	CLOSING
	};

	unsigned char state = SHUT;
	unsigned char addr1, addr2, addr3, addr4;      		// Assigned IP address
	extern	cBuffer modem_buffer;								// Receive Buffer for modem
	extern 	unsigned char *mBuffer;


	// Takes the return values
	mdmStatus res;

	/* used to indicate if any write operation is done or not
		toggle = 0; // write not done or same payload is requested to be read in small chunk
		toggle = 1; // write done so new packet is available to be read
	*/
	uint8_t toggle = 0;
	char  count;

	void USART3_IRQHandler(void)
	{
		char ch;
		CoEnterISR ();

		//RXNE interrupt occured
		//printf("uart%x\n\r",USART1->SR);

		if((USART3->SR & 0x20) != (u16)RESET )
		{
			//count ++;
			ch = (USART3->DR & (us16)0x01FF);
			if(bufferIsNotFull(&modem_buffer)){
				bufferAddToEnd(&modem_buffer, ch);					// Keeping data into the buffer
				//printf("-%c",ch);
			}
			else{
				printf("Buffer Full %c\n",ch);
			}
		}
		else if((USART3->SR & 0x08) != (u16)RESET)			// Handling overrun error
		{
			printf("Overrun3\n\r");
			ch = (USART3->DR & (us16)0x01FF);
			if(bufferIsNotFull(&modem_buffer)){
				bufferAddToEnd(&modem_buffer, ch);					// Keeping data into the buffer
				//printf("-%c",ch);
			}
			else{
				printf("Buffer Full %c\n",ch);
			}
		}
		CoExitISR ( );
	}
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
			TIME_SET(0);
			do{
				if(serial_rx_ready())
				{
					serial_get(addr4);                  					// get character
					if(addr4 == start)
					{
				// Copy till it matches the end character or timeout occurs
						TIME_SET(0);
						do{
							if(serial_rx_ready()){
								TIME_SET(0);
								serial_get(addr4);
								lbuff[i++] = addr4;
						}

					}
					while(addr4 != end && TIME_TICK < 2000);
					lbuff[i-1] = '\0';									// Overwriting the end character with the null character

					return mdmOK;
					}
				}

			}
			while(TIME_TICK < 3000);
			return mdmFail;
		}

		/*
		* This function matches the data received with the res buffer
		* @res buffer with which rcvd data to be matched
		* @timeout Time to wait for response
		* @return If matched SUCCESS else FAIL
		*/
		mdmStatus serialMatch(mdmIface *mdm, const char *resp, unsigned int timeout)
		{
			addr2 = addr4 = 0;

			for (TIME_SET(0); TIME_TICK<timeout; )           						// loop until time runs out
			{
					if (serial_rx_ready())
					{
						serial_get(addr4);                  					// get character
		//#ifdef PC
						if(addr4 != '\r')
						printf("%c ",addr4);
						//else
						//fprintf(stdout,"\n");
		//#endif
						if (resp[addr2] == addr4)
						{
							TIME_SET(0);
							addr2++;  											// does char match response string
							if (!resp[addr2]){										// All char are matched
							printf(" \n ");
							return mdmOK;  }    									// finished if string matches
						}
						else addr2 = 0;													// otherwise reset match pointer
						TIME_SET(0);

						if (!resp[addr2]){										// All char are matched
							return mdmOK;            							// finished if string matches
						}
					}
			}
			if(TIME_TICK >= timeout)
				return mdmTimeOut;

			return mdmFail;
		}




		mdmStatus sendwait(mdmIface *mdm,const char *send, const char * resp, unsigned int timeout) {
			addr2=addr3=0;
			// Sending commands to the modem
			printf(" \n");
			do{
				if (serial_tx_ready() ) {  													// if char to send and Tx ready
					if(send[addr3] != '\r')
						printf(" %c ", send[addr3]);
					else
						printf(" \n ");
					if (send[addr3]=='|') { 												// if pause character
						TIME_SET(0);
						while (TIME_TICK < 100);     									// Polling; has 1 second expired yet?
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
							TIME_SET(0);
							do{
								if(serial_rx_ready())
								{
									serial_get(res);
									//printf("0x%x\n",res);
								}
							}
							while(TIME_TICK < 100 && (res == '\r' || res == '\n' ));

							TIME_SET(0);
							do{
								if(serial_rx_ready())
								{
									if( (res >= 0x30 && res <= 0x39) || res == '.')
									mdm->ip_addr[addr2++]= res;
									serial_get(res);
									//printf("0x%x\n",res);
								}
							}
							while(TIME_TICK < 1000 && res != '\r');
							mdm->ip_addr[addr2]= '\0';
							printf("iplen=%d\n",addr2);
							printf("IP:%s\n\r",mdm->ip_addr);
							if(addr2 < 6)
								state = IPGPRSACT;						// IPaddress cannot be retrieved
							res = mdmOK;
							//}
							//else	res = mdmFail;
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
			static unsigned char var = 0;
			printf("in mdmState\n");

			do{
				count = 5;
				do{
					if(state == CONNECT || state == CLOSE)
						sendwait(mdm, "|+++|","OK",100);

					res = sendwait(mdm, "AT+CIPSTATUS\r", "STATE:",100);
					count-- ;
				}
				while(res != mdmOK && count > 0);

				count = 0;
				/* CIPSTATUS output is like- STATE: IP INITIAL*/
				res = serialCopy(lBuff, ' ', '\r');
				printf("\n\nstatus is %s\n\n",lBuff);

				if(!strcmp(lBuff, "IP INITIAL"))
					state = INIT;
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
				if(!strcmp(lBuff,"CLOSED"))
				{
					state = CLOSE;
				}
				else
				if(!strcmp(lBuff, "IP START"))
					state = NWATT;
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
				if(!strcmp(lBuff, "TCP CONNECTING")){
					var++;
					count = 1;
					if(var > 5){
						state = CLOSING;
						var = 0;
						count = 0;
					}
				}
				else
					count = 1;
			}
			while(count ==1);

			// This means Modem is not responding; some problem with modem; reset the modem
			if(count >=10)
			{
				// Reset the modem
			}

			return res;
		}



		mdmStatus mdmFSM(mdmIface *mdm)
		{
			uint8_t var;
			res = mdmInit(mdm);
			state = CLOSE;

		res = mdmState(mdm);
		var = 20;
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
					//res = sendwait(mdm, "AT+CIPHEAD=1\r", "OK", 200);
					res = sendwait(mdm, "AT+CIFSR\r", "", 500);
					break;

				case IP:
					//res = sendwait(mdm, "AT+CIPHEAD=1\r", "OK", 200);
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
		while(state != IP && var-- > 0);


		if(var > 0)
			return mdmOK;
		else
			return res;
		}


	/*
	*	This function initialises the modem to its default state
	*/
	mdmStatus mdmInit(mdmIface *mdm)
	{
		uint8_t count = 0;
		res = mdmOK;
		if(state == SHUT || state == CLOSE || state == FORCED)
		{
			do{
				count ++;
				res = sendwait(mdm,"\r|+++|\r", "OK", 200);
				res = sendwait(mdm, "AT\r", "OK", 300);
			}
			while(res != mdmOK && count < 3);
			res	= sendwait(mdm,"ATZ\r", "OK",200);
			res = sendwait(mdm,"\rAT S7=45 S0=0 L1 V1 X4 &c1 E0 Q0\r", "OK", 1000);

			if(res != mdmOK)
			{
				// reset the modem; It's not responding
			}
			//res = sendwait(mdm,"AT&FS11=55\r", "OK", 300);
			res = sendwait(mdm,"AT+IFC=2,2\r","OK",300); //for configuring h/w flow control
			res = sendwait(mdm, "ATE0\r", "OK",500);
			res = sendwait(mdm, "AT+CIPMODE=1\r","OK",300);

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
		char CMD[28 + 10]="AT+CSTT=";
		//char CMD[17 + 10]="AT+CSTT=";

		res = mdmOK;

		//res = sendwait(mdm, "AT+CIPMODE=1\r","OK",300);						// For Transparent mode
		if(attach == 1)
		res = sendwait(mdm, "AT+CGATT=1\r", "OK", 500);
		else{
		res = sendwait(mdm, "AT+CGATT=0\r", "OK", 300);
		state = CLOSE;
		return res;
		}

		if(res != mdmOK)
		return mdmAttFail;
		mdmState(mdm);
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
		uint8_t var;
		res = mdmOK;
		if(state == NWATT)
		{
			res = sendwait(mdm, "AT+CIICR\r","OK", 1000);
			var = 3;
			do
			{
				mdmState(mdm);
				var --;

			}
			while(state != IPGPRSACT && var > 0);

			if(!(var > 0))
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
		char cmd[50];

		char count = 3;
		do{
		printf("IN tcp connect\n");
			mdmState(mdm);
			count --;
			if(state == IP || state == IPGPRSACT || state == CLOSE)
			{
				state = CONNECTING;
				sprintf(cmd, "AT+CIPSTART=\"TCP\",\"%s\",%s\r",obj->addr, obj->port);
				res = sendwait(mdm, cmd, "CONNECT\r\n", 5000);

				if(res == mdmTimeOut){
					printf("Timeout\n");
					mdmSwitch(mdm,COMMAND);
					mdmClose(mdm);
					//mdmShut(mdm);
					//mdmFSM(mdm);
					res = mdmTimeOut;
				}

			}
			else if(state == CLOSING)
			{
				res = mdmClose(mdm);
				count ++;
			}
			else{
				res = mdmConnectFail;
				return res;
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
		char cmd[50];
		char var;
		res = mdmFail;
		var =3;
		do
		{
			printf("IN udp connect\n\r");
			mdmState(mdm);
			var --;
			if(state == IP|| state == CLOSE || state == IPGPRSACT )
			{
				state = CONNECTING;
				sprintf(cmd, "AT+CIPSTART=\"UDP\",\"%s\",%s\r",obj->addr, obj->port);
				res = sendwait(mdm, cmd, "CONNECT\r\n",2000);

				if(res == mdmTimeOut){
					printf("Timeout\n");
					mdmSwitch(mdm,COMMAND);
					mdmClose(mdm);
					//mdmShut(mdm);
					//mdmFSM(mdm);
					res = mdmTimeOut;
				}
			}
			else{
				res = mdmFail;
			}
		}
		while(res != mdmOK && var > 0);

		if(var > 0)
		state = CONNECT;

		return res;
	}

	/*
	 *  W
	 */
	mdmStatus mdmSend(mdmIface *mdm)
	{

		res = mdmState(mdm);
		count = 3;
		if(state == CONNECT){
		do
		{
			count --;
			res = sendwait(mdm, "AT+CIPSEND\r", ">", 1000);
		}
		while(res != mdmOK && count > 0);
		}
		else
		{
			return mdmConnectFail;
		}

		if(!(count > 0))
		{
			state = SHUT;
			res = mdmTimeOut;
		}

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
		uint16_t i;									// Number of retries to send the PAcket
		char var =0;

		printf("\n\rIN write\n\r");
	  if(state == CONNECT){
		count = 3;
		do{
			for(i = 0; i< len; i++)
			{
				serial_send(buffer[i]);
				printf(" %c",buffer[i]);
			}

			count--;
			if(send == 1)
			{
				var = 3;
				do{
					var --;
					i = 0x1a;
					serial_send(i);									// Sending Ctrl+Z
					res = serialMatch(mdm, "SEND OK", 2000);
				}
				while(res!= mdmOK && var > 0);

			}
			else
			res = mdmOK;
			//printf("res=%d,count=%d\n",res,count);
		}
		while(res != mdmOK && count > 0);

		if(count > 0){
			toggle = 1;
			printf("\nwrite success\n");
			return mdmOK;
		}
		else{
			printf("write failed\r\n");
			i = 0x1a;
			serial_send(i);									// Sending Ctrl+Z
			serial_send(i);									// Sending Ctrl+Z
			serial_send(i);									// Sending Ctrl+Z
			return mdmSendFail;
		}
	 }
	 return mdmSendFail;

	}

	/*
	 * This function is used to write data to the
	 * open TCP or UDP socket.
	 * This should be used with transparent mode.
	 * parameters:
	 * @mdm: MOdem Interface
	 * @buffer: Data to be sent
	 * @len: length of bytes to be written
	 * @returns success or fail
	 */
	mdmStatus mdmTransSend(mdmIface *mdm, char *buffer, uint32_t len)
	{
			uint32_t i;
			printf("\n\rIN Trans write\n\r");
		  if(state == CONNECT){

				for(i = 0; i< len; i++)
				{
					serial_send(buffer[i]);
					printf(" %c",buffer[i]);
					// If while sending modem returns error transsend should exit
					if(serial_rx_ready())
					{
						res = serialMatch(mdm, "ERROR,", 100);
						if(res == mdmOK)
						{
							mdmSwitch(mdm,COMMAND);
							return mdmSendFail;
						}
					}
				}
				toggle = 1;

			return mdmOK;
		}
		  else if( state == CONNECTING)
		  {
			  mdmSwitch(mdm,COMMAND);
			  return mdmSendFail;
		  }
	}

	/*
	 * This function is used to read data in transparent mode
	 * from the open UDP or TCP socket
	 * Paramters
	 * @mdm: Modem Interface
	 * @buffer: Data will be read into this
	 * @len: length of data to read
	 * @returns: Success or Fail
	 */
	mdmStatus mdmTransRead(mdmIface *mdm, char *buffer, uint32_t len)
		{
			uint32_t i = 0;
			TIME_SET(0);

			do{
				if(serial_rx_ready())
				{
					serial_get(buffer[i]);
					printf("%c\t", buffer[i]);
					i++;
					TIME_SET(0);
				}

			}
			while((len != i) && (TIME_TICK < 1000));
			mdmSwitch(mdm,COMMAND);		// Come out of the command mode
			printf("\nlen=%d\n",i);
			return mdmOK;
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
				res = serialMatch(mdm, "+IPD,", 1000);
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
				printf(" %c ", (char)buffer[i]);
				i++;
				TIME_SET(0);
			}

		}
		while((len != i) && (TIME_TICK < 100));

		dataRead += i;


		if(i == 0)
			count ++;

		mdmSwitch(mdm,COMMAND);		// Come out of the command mode
		// This means data is not there in the buffer; time to tell
		if(count > 2)
			return mdmReadFail;

		//printf("\ntotal=%d read=%d\n",paylen,dataRead);
		return i;									// Number of bytes read

	}

	/*
	 * This function brings modem from data mode to command mode and vice-vesa
	 * based on the @arg mode
	 * For mode = COMMAND- to command mode from data
	 * mode = DATA - to data mode from command mode
	 */
	mdmStatus mdmSwitch(mdmIface *mdm, uint8_t mode)
	{
			printf("\n\r Switching\n\r");
			if(mode == COMMAND)
				res = sendwait(mdm, "|+++|", "OK", 500);				// For command mode
			else if(mode == DATA)
				res = sendwait(mdm, "ATO\r", "OK", 500);					// For data mode

				if(res != mdmOK)
					return mdmFail;

				return res;
	}


	/*
	 * To know the amount of data sent and remaining in the buffer
	 */
	mdmStatus mdmSentData(mdmIface *mdm)
	{
		res = sendwait(mdm, "AT+CIPACK\r", "OK", 1000);
	}

	/*
	*	To close the TCP or UDP connection
	*	After this if reconnection is required than all the  init
	*	process should be followed again
	*/
	mdmStatus mdmClose(mdmIface *mdm)
	{
		char count;
		res = mdmState(mdm);
		if(state == CONNECT)
		{// TCP connection closing takes more time than the UDP
			count = 2;
			do{
				mdmState(mdm);
				count --;
				if(state == CONNECT)
				{
					res = sendwait(mdm, "AT+CIPCLOSE=1\r", "LOSE OK", 1000);
				}
				else if(state == CLOSE)
					{
						res = mdmOK;
						break;
					}
				//printf("In close=%d\n",count);
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
			res = sendwait(mdm, "AT+CIPSHUT\r", "SHUT OK", 1000);
		}
		while(res != mdmOK && count > 0);

		state = SHUT;
		return res;
	}


