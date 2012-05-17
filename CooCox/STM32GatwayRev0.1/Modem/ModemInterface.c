#include <stdio.h>
#include "string.h"
#include <CoOS.h>     /*!< CoOS header file	         */
#include "cox_serial.h"
#include "STM32_USART.h"
#include <stm32_pio.h>
#include "stm32f10x.h"
#include "buffer.h"
#include "main.h"
#include "modem.h"
#include "ntp.h"
#include "debug.h"
#include "config.h"

	COX_SERIAL_PI *myUSART1 = &pi_serial1;


	extern uint8_t chk[2];
	unsigned char signal[2];							// Stores signal strength
	char ipAddr[20] = {'\0'};							// used to store ip address

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
	unsigned char addr1, addr2, addr3, addr4;      				// Assigned IP address
	extern	cBuffer modem_buffer;								// Receive Buffer for modem
	extern 	unsigned char *mBuffer;

	extern struct config sysconfdup ;


	// Takes the return values
	mdmStatus res;

	mdmStatus sendwait(mdmIface *mdm,const char *send, const char * resp, unsigned int timeout);
	/*
	 *  This function creates mutes which will be used to
	 *  get mutually exclusive access of modem
	 */
	mdmStatus mdmCreateLock(mdmIface * mdm)
	{
		modem_mutex = CoCreateMutex();
		return modem_mutex;
	}

	/*
	 *  This function gets the lock for modem before using it
	 *  If lock is assigned it changes lock var in mdmiface to 1
	 *  which indicates modem in use
	 */
	mdmStatus mdmLock(mdmIface *mdm)
	{
		uint8_t res;
		/* Lock the Mutex*/
		res = CoEnterMutexSection(modem_mutex);
		// If lock is assigned indicate it by lock var in mdmiface
		if(res == E_OK)
		{
			mdm->lock = 1;
			// If modem is locked it's time to wake it up
			mdmWakeUp(mdm);
			sendwait(mdm, "|AT+CFUN=1,0\r", "OK", 200);
			sendwait(mdm, "|AT+CFUN=1,0\r", "OK", 200);
		}
		return res;
	}

	/*
	 *  This function releases the lock for modem after using it
	 *  If lock is released it changes lock var in mdmiface to 0
	 *  which indicates modem is free
	 */
	mdmStatus mdmUnLock(mdmIface *mdm)
	{
		uint8_t res;
		/* Unlock the Mutex*/
		res = CoLeaveMutexSection(modem_mutex);
		// If lock is unassigned indicate it by lock var in mdmiface
		if(res == E_OK)
			mdm->lock = 0;

		mdmNWControl(mdm, 0);
		sendwait(mdm, "AT+CFUN=4,0\r", "OK", 500);
		return res;
	}

	/*
	 * putting modem in sleep by pulling DTR pin low
	 */
	void mdmSleep(mdmIface *mdm)
	{
		mdm->pio->Out(mdm->dtr_pin, 0);			// Setting low on dtr pin
	}

	/*
	 * Waking up modem by pulling DTR pin high
	 */
	void mdmWakeUp(mdmIface *mdm)
	{
		mdm->pio->Out(mdm->dtr_pin, 1);			// Setting high on dtr pin

	}

	mdmStatus mdmCheck(mdmIface *mdm)
	{
		uint8_t res,count=0;
		res = sendwait(mdm,"\r|+++|\r", "OK", 200);
		do{
			count ++;
			res = sendwait(mdm, "AT\r", "OK", 100);
		}
		while(res != mdmOK && count < 3);
		sendwait(mdm, "ATE0\r", "OK", 100);
		return res;

	}
	/* used to indicate if any write operation is done or not
		toggle = 0; // write not done or same payload is requested to be read in small chunk
		toggle = 1; // write done so new packet is available to be read
	*/
	uint8_t toggle = 0;
	char  count;

	void USART1_IRQHandler(void)
	{
		char ch;
		uint16_t data =0;
		CoEnterISR ();

		//RXNE interrupt occured
		//printf("uart%x\n\r",USART1->SR);

		if((USART1->SR & 0x20) != (u16)RESET )
		{
			//count ++;
			ch = (USART1->DR & (us16)0x01FF);
			if(bufferIsNotFull(&modem_buffer)){
				bufferAddToEnd(&modem_buffer, ch);					// Keeping data into the buffer
				data = bufferDataAvail(&modem_buffer);
				if(data > (MaxRx - 10))
				{
					//modm.pio->Out(modm.sw_rts, 0);			// Making it High
					//debug(CONSOLE,"maxrx=%d\n\r",data);
				}

			}
			else{
				data = bufferDataAvail(&modem_buffer);
				debug(CONSOLE,"Buffer Full %d\n\r",data);
			}
		}
		else if((USART1->SR & 0x08) != (u16)RESET)			// Handling overrun error
		{
			debug(CONSOLE,"%s\n\r","Overrun");
			ch = (USART1->DR & (us16)0x01FF);
			if(bufferIsNotFull(&modem_buffer)){
				bufferAddToEnd(&modem_buffer, ch);					// Keeping data into the buffer
				//printf("-%c",ch);
			}
			else{
				debug(CONSOLE,"Buffer Full %c\n\r",ch);
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
			uint16_t i=0;
			TIME_SET(0);
			do{
				if(serial_rx_ready())
				{
					serial_get(addr4);                  					// get character
					if(addr4 == start)
					{
						addr4 = 0;
				// Copy till it matches the end character or timeout occurs
						TIME_SET(0);
						do{
							if(serial_rx_ready()){
								TIME_SET(0);
								serial_get(addr4);
								lbuff[i++] = addr4;
						}

					}
					while(addr4 != end && TIME_TICK < 500);
					lbuff[i-1] = '\0';									// Overwriting the end character with the null character

					return mdmOK;
					}
				}

			}
			while(TIME_TICK < 1000);
			return mdmFail;
		}

		extern char ServerRes[8];
		/*
		* This function matches the data received with the res buffer
		* @res buffer with which rcvd data to be matched
		* @timeout Time to wait for response
		* @return If matched SUCCESS else FAIL
		*/
		mdmStatus serialMatch(mdmIface *mdm, const char *resp, unsigned int timeout)
		{
			addr2 = addr4 = 0;
			char err[10]="ERROR\r\n";
			char cls[11]="CLOSED\r\n";
			uint8_t errVar = 0, clsVar = 0, serVar = 0;
			debug(CONSOLE,"%s","<<== ");
            for (TIME_SET(0); TIME_TICK<timeout; )           						// loop until time runs out
			{
					if (serial_rx_ready())
					{
						serial_get(addr4);                  					// get character

						if(addr4 != '\r' && addr4 != '\n')
						dbg_printf("%c ",addr4);
						if (resp[addr2] == addr4)
						{
							addr2++;  											// does char match response string
							if (!resp[addr2]){										// All char are matched
							dbg_printf("%s","\n\r");
							return mdmOK;  }    									// finished if string matches
						}
						else addr2 = 0;

						// To match error Condition
						if(err[errVar] == addr4)
						{
							errVar++;  											// does char match response string
							if (!err[errVar]){										// All char are matched
								dbg_printf("%s","\n\r");
								return mdmErr;
							}
						}
						else errVar = 0;													// otherwise reset match pointer

						// To match close condition

					if(cls[clsVar] == addr4)
						{
							clsVar++;  											// does char match response string
							if (!cls[clsVar]){									// All CLOSED char are matched
								dbg_printf("%s","\n\r");
								return mdmErr;
							}
						}
						else clsVar = 0;													// otherwise reset match pointer

					if(ServerRes[serVar] == addr4)
						{
							serVar++;  											// does char match response string
							if (!ServerRes[serVar]){							// All Server response char are matched
								dbg_printf("%s","\n\r");
								return httpSent;
							}
						}
						else serVar = 0;
						TIME_SET(0);

						if (!resp[addr2]){										// All char are matched
							return mdmOK;            							// finished if string matches
						}
					}
			}
			if(TIME_TICK >= timeout)
			{
				dbg_printf("%s","\n\r");
				return mdmTimeOut;
			}

			return mdmFail;
		}


		mdmStatus sendwait(mdmIface *mdm,const char *send, const char * resp, unsigned int timeout) {
			addr2=addr3=0;
			// Sending commands to the modem
			debug(CONSOLE,"%s","==>> ");
			do{
				if (serial_tx_ready() ) {  													// if char to send and Tx ready
					if(send[addr3] != '\r')
						dbg_printf("%c ", send[addr3]);
					else
						dbg_printf("%s","\n\r");
					if (send[addr3]=='|') { 												// if pause character
						TIME_SET(0);
						while (TIME_TICK < 50);     									// Polling; has 1 second expired yet?
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
							debug(CONSOLE,"SIGNAL:%s\n\r",signal);
							break;

					case IP:

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
								}
							}
							while(TIME_TICK < 1000 && res != '\r');

							if(addr2 < 6){
								state = IPGPRSACT;						// IPaddress cannot be retrieved
							}
							else
							{
								mdm->ip_addr[addr2]= '\0';
								debug(CONSOLE,"IPlen=%d\n\r",addr2);
								debug(LOG,"IP=%s\n\r",mdm->ip_addr);
							}
							res = mdmOK;

							break;

					default:
							if(resp != NULL)
							{
								res = serialMatch(mdm, resp,timeout);
							}
							else
							{
								dbg_printf("%s","\n\r");
								res = mdmOK;
							}
							break;
				}

			return res;
		}

		mdmStatus mdmState(mdmIface *mdm)
		{
			char lBuff[20];
			int8_t try;
			static unsigned char var = 0;
			uint8_t count = 0;
			do{
				try = 4;
				do{
				do{
					if(state == CONNECT || state == CLOSE)
						sendwait(mdm, "||+++|\r","OK",100);

					res = sendwait(mdm, "AT+CIPSTATUS\r", "STATE:",100);
					try-- ;
				}
				while(res != mdmOK && try > 0);

				if(res == mdmErr)
				{
					//modm.pio->Out(modm.reset_pin, 1);		// Resetting Modem
					//CoTickDelay (10);						// For 100ms
					//modm.pio->Out(modm.reset_pin, 0);		// Resetting Modem
					sendwait(mdm,"AT+CFUN=1,1","",300);
					debug(LOG,"%s\n\r","Resetting Modem");
					mdmInit(mdm);
				}
				try = 0;
				count++;
				}
				while(count < 3 && res != mdmOK);
				try = 0;

				/* CIPSTATUS output is like- STATE: IP INITIAL*/
				if(res == mdmOK){
				res = serialCopy(lBuff, ' ', '\r');
				debug(CONSOLE,"Status is %s\n\r",lBuff);

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
					count += 1;
					if(var > 2){
						state = CLOSING;
						var = 0;
						try = 0;
					}
				}
				else
				{
					count += 1;
					try = 1;
				}
			}
			}
			while((count > 0 && count < 3) && (try == 1) );

			// This means Modem is not responding; some problem with modem; reset the modem
			if(count >=3)
			{
				// Reset the modem
				debug(LOG,"%s\n\r","Modem Not responding");
			}

			return res;
		}



	mdmStatus mdmFSM(mdmIface *mdm)
	{
		int8_t var;
		state = CLOSE;
		res = mdmInit(mdm);

		res = mdmState(mdm);
		var = 20;
		if(res == mdmOK){
		do{
			debug(CONSOLE,"step=%d\n\r",var);
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
					res = sendwait(mdm, "|AT+CIFSR\r", "", 500);
					break;

				case IP:
					//res = sendwait(mdm, "AT+CIPHEAD=1\r", "OK", 200);
					res = sendwait(mdm, "|AT+CIFSR\r", "", 500);

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
		if(var > 0){
			debug(LOG,"%s\n\r","Modem intialised successfully");
			return mdmOK;
		}
		else
			return mdmFail;
		}
		return res;
	}

	/*
	*	This function initialises the modem to its default state
	*/
	mdmStatus mdmInit(mdmIface *mdm)
	{
		uint8_t count = 0;
		res = mdmOK;

		// Independent of state execution
		do{
			count ++;
			res = sendwait(mdm,"\r||+++|\r", "OK", 200);
			res = sendwait(mdm, "AT\r", "OK", 300);
		}
		while(res != mdmOK && count < 3);

		if(res != mdmOK)
			chk[1] = 1;					// indicating modem is not responding
		res = sendwait(mdm, "|ATE0\r", "OK",500);
		if(state == SHUT || state == CLOSE || state == FORCED)
		{
			if(res != mdmOK)
			{
				modm.pio->Out(modm.reset_pin, 1);		// Resetting Modem
				CoTickDelay (10);		// For 2 MInute
				modm.pio->Out(modm.reset_pin, 0);		// Resetting Modem
				debug(LOG,"%s\n\r","Resetting Modem");
			}
			res	= sendwait(mdm,"ATZ\r", "OK",200);
			res = sendwait(mdm,"|AT S7=45 S0=0 L1 V1 X4 &c1 E0 Q0\r", "OK", 1000);


			//res = sendwait(mdm,"AT&FS11=55\r", "OK", 300);
			res = sendwait(mdm,"|AT+IFC=2,2\r","OK",300); //for configuring h/w flow control
			res = sendwait(mdm, "|ATE0\r", "OK",500);
			res = sendwait(mdm, "AT+CMEE=0\r", "OK", 100);
			count =0;
			do{
				count ++;
				res = sendwait(mdm, "||AT+CIPMODE=1\r","OK",200);
			}
			while(res != mdmOK && count < 2);
		}
		state = INIT;
		if(res != mdmOK){
			return mdmInitFail;
		}
		chk[1] = 0;						// Indicating modem is working fine
		return res;

	}

	/*
	*	This function controls the network related jobs like:
	*	- Attaching/dettaching to/from the network
	*	- Setting apn address
	*/
	mdmStatus mdmNWControl(mdmIface *mdm,uint8_t attach)
	{
		res = mdmOK;

		if(attach == 1)
		res = sendwait(mdm, "|AT+CGATT=1\r", "OK", 500);
		else{
		res = sendwait(mdm, "|AT+CGATT=0\r", "OK", 300);
		state = CLOSE;
		return res;
		}

		if(res != mdmOK)
		return mdmAttFail;
		mdmState(mdm);
		if (state == INIT || state == FORCED)
		{
			//Setting APN adddress for GSM
			sendwait(mdm,"AT+CSTT=\"",NULL,0);			// Sending the command
			sendwait(mdm, &sysconfdup.APN[0], NULL, 0);			// Send AP addr
			res = sendwait(mdm,"\"\r","OK", 200);

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
			res = sendwait(mdm, "|AT+CIICR\r","OK", 3000);
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
			res = sendwait(mdm, "|AT+CIFSR\r", "", 500);

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

		char count = 4;
		do{
		debug(CONSOLE,"%s%d\n\r","InTCPConnect=",count);
			mdmState(mdm);
			count --;
			// If state is one among the these start connecting
			if(state == IP || state == IPGPRSACT || state == CLOSE)
			{
				state = CONNECTING;

				sendwait(mdm, "AT+CIPSTART=\"TCP\",\"",NULL,0);
				sendwait(mdm, obj->addr,NULL,0);
				sendwait(mdm,"\",",NULL, 0);
				sendwait(mdm, obj->port, NULL, 0);
				res = sendwait(mdm, "\r","CONNECT\r\n",3000);

				//dbg_printf("TCPret=%d\n\r",res);
				// If timeout occured and connection does not succeded
				if(res == mdmTimeOut){
					debug(LOG,"%s\n\r","TCPConnectionFailed");
					mdmSwitch(mdm,COMMAND);
					mdmClose(mdm);
					mdmShut(mdm);
					if(count > 0)			// All retries are not over yet
					mdmFSM(mdm);
					res = mdmTimeOut;
				}

			}
			else if(state == CLOSING)
			{
				res = mdmClose(mdm);
				//count ++;
				res = mdmFail;
			}
			// If state is not among the above considered state, start from begining and get IP
			else{
				mdmFSM(mdm);
				res = mdmFail;
			}
		}
		while(res != mdmOK && count > 0);

		if(res == mdmOK)
			state = CONNECT;
		else
			state = CONNECTING;
		return res;
	}

	/*
	*	This function connects to the UDP server
	*`	It takes server object which keeps ipadddr and port
	*/
	mdmStatus mdmUDPConnect(mdmIface *mdm, server *obj)
	{

		char var;
		res = mdmFail;
		var =1;
		do
		{
			debug(CONSOLE,"%s%d\n\r","InUDPConnect=",var);
			mdmState(mdm);
			var --;
			if(state == IP|| state == CLOSE || state == IPGPRSACT )
			{
				state = CONNECTING;

				sendwait(mdm, "AT+CIPSTART=\"UDP\",\"",NULL,0);
				sendwait(mdm, obj->addr,NULL,0);
				sendwait(mdm,"\",",NULL, 0);
				sendwait(mdm, obj->port, NULL, 0);
				res = sendwait(mdm, "\r","CONNECT\r\n",2000);

				if(res == mdmTimeOut){
					debug(LOG,"%s\n\r","UDPConnectionFailed");
					mdmSwitch(mdm,COMMAND);
					mdmClose(mdm);
					mdmShut(mdm);
					mdmFSM(mdm);
					res = mdmTimeOut;
				}
			}
			else if(state == CLOSING)
			{
				res = mdmClose(mdm);
				count ++;
				res = mdmFail;
			}
			else{
				res = mdmFail;
			}
		}
		while(res != mdmOK && var > 0);

		if(res == mdmOK)
		state = CONNECT;
		else
		state = CONNECTING;

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

		debug(CONSOLE,"%s\n\r","IN write");
	  if(state == CONNECT){
		count = 3;
		do{
			for(i = 0; i< len; i++)
			{
				serial_send(buffer[i]);
				dbg_printf(" %c",buffer[i]);
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
			debug(CONSOLE,"%s\n\r","write success");
			return mdmOK;
		}
		else{
			debug(CONSOLE,"%s\n\r","write failed");
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
		uint32_t i =0;
		//debug(CONSOLE,"%s\n\r","In TransSend");

		  if(state == CONNECT){
				for(i = 0; i< len; i++)
				{
					//dbg_printf(" %c",buffer[i]);
					serial_send(buffer[i]);
					// If while sending modem returns error transsend should exit
					if(serial_rx_ready())
					{
						res = serialMatch(mdm, "CLOSED", 100);
						if(res == mdmOK || res == mdmErr)
						{
							debug(LOG,"%s\n\r","Connection Closed or Error Returned");
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
	*	This function is used to read data from the open socket
	*	@buffer	- this buffer returns the data obtained
	*	@len	- this is the length which is expected to be read
	*/
	mdmStatus mdmRead(mdmIface *mdm, char *buffer, uint32_t len)
	{
		char data = 0, i= 0;
		static uint32_t paylen = 0;
		static uint32_t dataRead = 0;

		debug(CONSOLE,"%s\n\r","In mdmRead");
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
				debug(CONSOLE,"PAYLOAD len=%d\n\r",paylen);
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
				dbg_printf("%c ", (char)buffer[i]);
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
		 * This function is used to read data in transparent mode
		 * from the open UDP or TCP socket
		 * Paramters
		 * @mdm: Modem Interface
		 * @buffer: Data will be read into this
		 * @len: address of length of data to read
		 * @returns: Success or Fail
		 */
		mdmStatus mdmTransRead(mdmIface *mdm, char *buffer, uint32_t *len)
		{
			uint32_t i = 0;
			char err[8]="ERROR\r", errVar= 0;
			TIME_SET(0);

			do{
				if(serial_rx_ready())
				{
					serial_get(buffer[i]);
					dbg_printf("%c\t", buffer[i]);

					// To match error Condition
					/*if(serial_rx_ready())
					{
						res = serialMatch(mdm, "CLOSED", 100);
						if(res == mdmOK || res == mdmErr)
						{
							printf("Connection Closed or Error Returned\n\r");
							mdmSwitch(mdm,COMMAND);
							return mdmSendFail;
						}
					}*/
					i++;
					TIME_SET(0);
				}
			}
			while((*len != i) && (TIME_TICK < 1000));


			if(TIME_TICK >= 1000)
			{
				*len = i;					// returning the amount of data read
				mdmSwitch(mdm,COMMAND);		// Come out of the command mode
				//mdmClose(mdm);
				return mdmReadFail;
			}


		mdmSwitch(mdm,COMMAND);		// Come out of the command mode
		//mdmClose(mdm);
		return mdmOK;
	}

	/*
	 * This function brings modem from data mode to command mode and vice-vesa
	 * based on the @arg mode
	 * For mode = COMMAND- to command mode from data
	 * mode = DATA - to data mode from command mode
	 */
	mdmStatus mdmSwitch(mdmIface *mdm, uint8_t mode)
	{
			debug(CONSOLE,"%s\n\r","Switching");
			if(mode == COMMAND)
				res = sendwait(mdm, "||+++|\r", "OK", 500);				// For command mode
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
		if(state == CONNECT || state == CLOSING || state == CONNECTING)
		{// TCP connection closing takes more time than the UDP
			count = 2;
			do{
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
				else{
					res = sendwait(mdm, "AT+CIPCLOSE=1\r", "LOSE OK", 1000);
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

	/* To know the balance using USSD service */
	mdmStatus mdmBalance(mdmIface *mdm, uint16_t *Balance)
	{
		uint8_t lbuff[8], j=0;
	    uint16_t bal =0;

	    res = sendwait(mdm, "AT+CUSD=1,\"*123#\",0\r","OK",100);

	    res = serialMatch(mdm, "Rs.",1000);                     // Find out the Rs. tag
	    addr4 = 0;
	    if(res == mdmOK)
	    {
	    	while(addr4 != '.'){
	    		if(serial_rx_ready())
	    		{
	    			serial_get(addr4);
	                lbuff[j++] = addr4;
	            }
	    	}
	    	lbuff[--j] = '\0';
	    	*Balance = atoin(&lbuff[0]);

	        debug(LOG,"Balance=%d\n\r", *Balance);
	    }
	    else{
	    	*Balance = 255;
	    }
	}

