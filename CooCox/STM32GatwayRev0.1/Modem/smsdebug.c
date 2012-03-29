//#ifdef SMS_DEBUG
#include <stdio.h>
#include "string.h"
#include "modem.h"
#include "buffer.h"
#include "cmdline.h"
#include "config.h"
#include "debug.h"


#ifndef NULL
#define NULL (void *)0
#endif

#define MAX_SMS  30

typedef struct recvMsg{
	char phone[11];		//10 digit phone number + \0 for string termination
	char message[163];	//160 bytes of message + <CR><LF> + \0 for string termination
}recvMsg;

/* external variables */
extern	cBuffer modem_buffer;
extern volatile uint32_t TIME_TICK;


/* private function declerations */
void smsDebugSetOutputFunc(void (*output_func)(unsigned char c));
void smsDebugSetLoopFunc(void (*loop_func)(void));
void readAllUnreadSms(mdmIface *mdm,cBuffer *queue);
void readDelSms(mdmIface *mdm, uint8_t index , char *phone ,char *msg );
uint8_t isPhoneRegistered(char *str);

/* Public function decleration */
mdmStatus smsDebugInit(mdmIface *mdm);
void smsDebugConnect(mdmIface *mdm);
void smsDebugLoop(mdmIface *mdm);



// function pointer to single character output routine
typedef void (*voidFuncPtru08)(unsigned char);
volatile static voidFuncPtru08 smsCmdOutputFunc = NULL;

// function pointer to void function
typedef void (*voidFuncPtruVoid)(void);
volatile static voidFuncPtruVoid smsCmdLoopFunc = NULL;

//queue for processing the messages
cBuffer smsIndexQueue;

//list of sms to be processed
uint8_t list[MAX_SMS]={0};

//for temporary storage of the message
recvMsg msg ;

//set a new output function for
void smsDebugSetOutputFunc(void (*output_func)(unsigned char c)){
	smsCmdOutputFunc = output_func;
}
//set the cmdline loop function
void smsDebugSetLoopFunc(void (*loop_func)(void)){
	smsCmdLoopFunc = loop_func;
}

mdmStatus smsDebugInit(mdmIface *mdm){

	uint8_t res;
	//initllize the msg queue for keeping the index of sms msg
	bufferInit(&smsIndexQueue, &list[0], sizeof(list));
	//Make connection to the cmdline library
	smsDebugSetOutputFunc(cmdlineInputFunc);
	smsDebugSetLoopFunc(cmdlineMainLoop);

	mdmSwitch(mdm, COMMAND);
	mdmInit(mdm);
	//configure the modem in text mode
	sendwait(mdm, "|AT+CMGF=1\r","OK", 300);
	//configure the CNMI option
	sendwait(mdm, "AT+CNMI=0,0,0,0,0\r","OK", 300);
	//show text mode sms parameters, required to know the length of received sms
	res = sendwait(mdm,"AT+CSDH=1\r","OK",100);
	//Delete all the  sms except unread sms
	//3 : Delete all messages from preferred message storage excluding unread messages
	sendwait(mdm, "AT+CMGD=1,3\r","OK", 300);

	return res;

}

void smsDebugConnect(mdmIface *mdm){
	//configure the modem in text mode
	sendwait(mdm, "|AT+CMGF=1\r","OK", 300);
	//show text mode sms parameters, required to know the length of received sms
	sendwait(mdm,"AT+CSDH=1\r","OK",100);

	/*
	Delete all read messages from preferred message storage,
	sent and unsent mobile originated messages leaving unread
	messages untouched
	*/
	//sendwait(mdm, "AT+CMGD=1,3\r","OK", 300);

}

void smsDebugLoop(mdmIface *mdm){
	char *ptr;
	//flush the sms index Msg Queue
	bufferFlush(&smsIndexQueue);
	//extract the index number of all the unread sms and put them in to queue
	//with out changing the status of sms "AT+CMGL="REC UNREAD",1
	readAllUnreadSms(mdm,&smsIndexQueue);

	while(bufferDataAvail(&smsIndexQueue)){
		memset(&msg,'\0',sizeof(msg));
		readDelSms(mdm, bufferGetFromFront(&smsIndexQueue),&msg.phone[0],&msg.message[0]);
		if(isPhoneRegistered(( char * )&msg.phone[0])){
			ptr = &msg.message[0];
			debug(CONSOLE,"%s\n\r","SMS:Ph no. Regd");
			while(*ptr != 0 ){
				// Function separator; Currently two functions are separated by \n
				if(*ptr == '\n')
				{
					smsCmdOutputFunc('\r');
					*ptr++;
				}
				else{
				smsCmdOutputFunc(*ptr++);
				smsCmdLoopFunc();
				}
			}
		}
	}
}


/*
*	ascii to integer conversion
*/

uint8_t atoin(char *ascii)
{
	uint8_t integer = 0,i=0;

	do{
		integer*=10;
		integer += (ascii[i] - 48);
	}
	while(ascii[++i] != 0);

	return integer;

}

/*
*	Integer to ascii conversion
*/

void itoam(uint8_t integer, char *lbuff)
{
	if((integer / 10) == 0)
		{
			lbuff[0] = integer + 48;
			lbuff[1] = '\0';
		}
		else{
			lbuff[0] = integer/10 + 48;
			lbuff[1] = (integer % 10) + 48;
			lbuff[2] = '\0';
		}
}

void readAllUnreadSms(mdmIface *mdm,cBuffer *queue){

	mdmStatus res;
	char lbuff[14], index;
	//res = sendwait(mdm, "AT+CMGF=1\r", "OK",100);

	res = sendwait(mdm, "AT+CMGL=\"REC UNREAD\", 1\r","",100);

	while(1)
	{
		res = serialMatch(mdm, "+CMGL:",100);
		if(res == mdmTimeOut)
		break;
		serialCopy(lbuff,' ', ',');
		index = atoin(lbuff);

		// Taking out the index number of the messages
		memset(lbuff,0,14);
		res = serialCopy(lbuff,'"',',');

		// Seeing if the messages are READ or UNREAD
		// If the messages are UNREAD then only go ahead
		// For read messages comaparison sud be with REC READ
		// For unread messages comaparison sud be with REC UNREAD
		if(!strcmp(&lbuff[0], "REC UNREAD\""))
		{
			memset(lbuff,0,14);
			res = serialCopy(lbuff, '"','"');

			// Consider those messages only which are registered
		//	if(isPhoneRegistered(lbuff))
			{
				bufferAddToEnd(queue, index);
			}
		}

	}


}

void readDelSms(mdmIface *mdm, uint8_t index , char *phone ,char *msg ){

	char lbuff[163], count = 9;
	unsigned char addr4;
	mdmStatus res=0;
	uint8_t j;
	if(index == 0)
	return;
	itoam(index, lbuff);


	// Reading message of particular index number
	sendwait(mdm, "AT+CMGR=","",0);
	sendwait(mdm, lbuff, "",0);
	sendwait(mdm, "\r\n", "",100);

	res = serialMatch(mdm, "+CMGR: ",100);
	memset(lbuff,0,14);
	res = serialCopy(lbuff,'"',',');

	memset(lbuff,0,14);
	res = serialCopy(&lbuff[0], '"','"');

	//copy the phone number excluding +91
	memcpy(phone, &lbuff[3], 10);

	debug(CONSOLE,"SMS:Ph No=%s\r\n",phone);

	TIME_SET(0);
	do
	{
		res = serialMatch(mdm, ",", 100);
		if (res == mdmOK){
			TIME_SET(0);
			count--;
		}
	}
	while(count != 0 && TIME_TICK < 100);

	if(count == 0)
	{
		memset(lbuff, 0,14);
		res = serialCopy(lbuff, ',','\r');
		res = atoin(lbuff);
		debug(CONSOLE,"SMS:lengthSMS=%d\n\r",res);

		for(j = 0; j <= res; j++)
		{
		TIME_SET(0);
			do{
				if(serial_rx_ready())
       	        		{
       		 	       		serial_get(addr4);
					lbuff[j] = addr4;
					TIME_TICK = 100;
				}
			}
			while(TIME_TICK < 10 );
		}
		//add carriage return and line feed at the end
		lbuff[j++] = '\r';
		lbuff[j++] = '\n';
		lbuff[j]='\0';
		//copy the message to  msg
		memcpy(msg, &lbuff[0], res+3);

		debug(LOG,"SMS:MSG=%s",lbuff);
	}
	serialMatch(mdm, "OK", 100);

	//Now delete the msg from the modem
	itoam(index, lbuff);
	sendwait(mdm, "AT+CMGD=","",0);
	sendwait(mdm, lbuff, "",0);
	sendwait(mdm, "\r", "OK",100);

}

/*
void readAllUnreadSms(mdmIface *mdm,cBuffer *queue){
	//TO DO
	//extract the index number of all the unread sms without changing their status  and enqueue them
	//"AT+CMGL="REC UNREAD",1
}

void readDelSms(mdmIface *mdm, uint8_t index , recvMsg *ptr ){
	//To Do
	//read the message
	//extract the phone number and cpy in ptr->phone
	//extract the message and cpy in ptr->message and append <CR><LF> at the end
	//delete the message

}
*/

uint8_t isPhoneRegistered(char *str){
	//compare 10 digit phone number with list of registered phone
	//if matches return 1 else 0
	extern struct config sysconf;

	if(strncmp(str,(const char *)&sysconf.reg_phoneno[0], 10) == 0){
		return 1;
	}
	else if(strncmp(str,(const char *)&sysconf.reg_phoneno[1], 10) == 0){
		return 1;
	}
	return 0;
}

//#endif /* SMS DEBUG */
