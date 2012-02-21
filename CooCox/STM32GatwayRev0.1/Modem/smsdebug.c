#ifdef SMS_DEBUG

#include "string.h"
#include "modem.h"
#include "buffer.h"
//#include "cmdline.h"



#ifndef NULL
#define NULL (void *)0
#endif

#define MAX_SMS  30

typedef struct recvMsg{
	char phone[11];		//10 digit phone number + \0 for string termination
	char message[163];	//160 bytes of message + <CR><LF> + \0 for string termination
}recvMsg;




// function pointer to single character output routine
typedef void (*voidFuncPtru08)(unsigned char);
volatile static voidFuncPtru08 smsCmdOutputFunc = NULL;

// function pointer to void function
typedef void (*voidFuncPtruVoid)(void);
volatile static voidFuncPtruVoid smsCmdLoopFunc = NULL;

//queue for processing the messages
extern cBuffer smsIndexQueue;

//list of sms to be processed
uint8_t list[MAX_SMS]={0};

//for temporary storage of the message
recvMsg msg={0};

//set a new output function for
void smsDebugSetOutputFunc(void (*output_func)(unsigned char c)){
	smsCmdOutputFunc = output_func;
}
//set the cmdline loop function
void smsDebugSetLoopFunc(void (*loop_func)(void)){
	smsCmdLoopFunc = loop_func;
}

void smsDebugInit(mdmIface *mdm){

	//initllize the msg queue for keeping the index of sms msg
	bufferInit(&smsIndexQueue, &list[0], sizeof(list));
	//Make connection to the cmdline library
	//smsDebugSetOutputFunc(cmdlineInputFunc);
	//smsDebugSetLoopFunc(cmdlineMainLoop);
	mdmWakeUp(mdm);
	mdmSwitch(mdm, COMMAND);

	//configure the modem in text mode
	sendwait(mdm, "|AT+CMGF=1\r","OK", 300);
	//configure the CNMI option
	sendwait(mdm, "AT+CNMI=0,0,0,0,0\r","OK", 300);
	//Delete all the  sms
	//4 : Delete all messages from preferred message storage including unread messages
	sendwait(mdm, "AT+CMGD=1,4\r","OK", 300);
	//sendwait(mdm, "AT+CMGD=1\r","OK", 300);

}

void smsDebugLoop(mdmIface *mdm){
	char *ptr;
	//flush the sms index Msg Queue
	bufferFlush(&smsIndexQueue);
	//extract the index number of all the unread sms and put them in to queue
	//with out changing the status of sms "AT+CMGL="REC UNREAD",1
	//readAllUnreadSms(mdm,&smsIndexQueue);

	while(bufferDataAvail(&smsIndexQueue)){
		memset(&msg,'\0',sizeof(msg));
		readDelSms(mdm ,bufferGetFromFront(&smsIndexQueue),&msg);
		if(isPhoneRegistered(&msg->phone[0])){
			ptr = &msg->message[0];
			while(*ptr != 0 ){
				smsCmdOutputFunc(*ptr++);
				smsCmdLoopFunc();
			}
		}
	}
}

void readAllUnreadSms(mdmIface *mdm,cBuffer *queue){
	//TO DO
	//extract the index number of all the unread sms without changing their status  and enqueue them
}

void readDelSms(mdmIface *mdm, uint8_t index , recvMsg *ptr ){
	//To Do
	//read the message
	//extract the phone number and cpy in ptr->phone
	//extract the message and cpy in ptr->message and append <CR><LF> at the end
	//delete the message

}

uint8_t isPhoneRegistered(char *str){
	//TO DO
	//compare 10 digit phone number with list of registered phone
	//if matches return 1 else 0

}

#endif
