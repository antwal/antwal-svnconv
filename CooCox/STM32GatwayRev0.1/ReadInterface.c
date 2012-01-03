/*****************************************************************************************************
 *			 FUNTION THAT READS THE DATA ARRIVED AT THE PORT			     *
 *****************************************************************************************************/

#include <CoOS.h>
#include "WSNPacket.h"
#include "TypeDefs.h"
#include "string.h"
#include <stdio.h>
#include "stm32_rtc.h"
#include "ff.h"
#include "di_msd.h"
#include "main.h"

#define MAX_BUFF_SIZE 64

char destdata[250];
typedef struct Message {
	unsigned char  DataBuffer[MAX_BUFF_SIZE];
}MSG;

extern OS_EventID raw_queue_id;
extern OS_EventID sd_queue_id;

// Message to be added on to queue , taken 8 buffer packet //
MSG DataMsg[8];


extern uint8_t BaseStnId;
extern OS_MutexID file_mutex;
extern MSD_Dev *sd;

/*
 * The function is called by the WSN Decoder Engine to parse
 * the raw Data packet received from the MIB(Mote Interafce Board)510/600.
 * The Code parses ( 0x7D followed by 0x5D to 0x7D ) & ( 0x7D followed by 0x5E to 0x7E )
 */

void ParsePkt(INT8U *Packet)
{
	int32_t i=1, j=1;

	for(; Packet[i] != STOP_BYTE; ) {
    	if (Packet[i] == ESC_CHAR) {
			Packet[j++] = Packet[++i] ^ 0X20;
			i++;
    	} else {
	    	Packet[j++] = Packet[i++];
		}
	}

}


//This function is called by task one so that it can packetize the data from 0x7E - 0x7E
void Read_Data(unsigned char ch){
	static uint8_t buf = 0;
    static unsigned char  PktStartRecd = 0;
    static int i = 0, j, res; //, Status;
    StatusType result;

    static uint8_t cur,last;

	if (PktStartRecd) {
		if ((i == 1) && (ch == START_BYTE)) {
			return ;
		}
		// Reading data from the Port
		DataMsg[buf].DataBuffer[i++] = ch;

		if (ch == STOP_BYTE) {
			cur = DataMsg[buf].DataBuffer[2];
			if(!(cur == last+1)){
				printf("MISSED: %d\n",DataMsg[buf].DataBuffer[2]);
			}
			last = DataMsg[buf].DataBuffer[2];
			printf("RCVD=%d\n\r",DataMsg[buf].DataBuffer[2]);
			//printf("\nData is: ");

			//for (j=0; j < i; j++){
			//	printf("\t%x ",DataMsg[buf].DataBuffer[j]);
			//}
			//printf(" \n");
			//result = CoPostQueueMail (raw_queue_id, (void *) &DataMsg[buf]);
			/* Calling from Interrupt context*/
			result = isr_PostQueueMail (raw_queue_id, (void *) &DataMsg[buf]);
			if (result != E_OK){
				 if (result == E_INVALID_ID){
					 printf("Invalid Queue ID ! \n");
				 }
				 else if (result == E_SEV_REQ_FULL){
                     printf("The Queue is full !\n");
				 }
			}
			printf("len=%d\n\r",i);
			PktStartRecd = 0;
			i = 0;
			buf += 1 ;  				//change the buffer to be used

			if( !(buf%8) )			// If buffer is 8
				buf = 0;

		}
	}
		else {
			if (ch == START_BYTE) {
				PktStartRecd = 1;
				DataMsg[buf].DataBuffer[i++] = START_BYTE;
			} else {printf(" %c", ch); }
		}

	//}
}


/*----------------------------------------------------------------------------*/
/*	  This is called by task 2 to eat the MsgQ of created by read interface   */
/*----------------------------------------------------------------------------*/
char * wsnPacketDecoding(void ){
	MSG DataMsg;
	StatusType result;
	void *msg;
	uint8_t j;
	Tos_Msg *ToSMessage;		// Tos_Msg received //
	SensedData *Data;
	TIME cur_time;
	static int32_t count = 0;
	UINT bw,res;

	 /* Wait for a mail, time-out:0 */
	msg = CoPendQueueMail (raw_queue_id, 0, &result);
	if (result != E_OK){
        if (result == E_INVALID_ID){
            printf("Invalid Queue ID !\n");
        }
    }
    else{
    	memcpy(&DataMsg.DataBuffer[0], (uint8_t *)msg, MAX_BUFF_SIZE);
		/******** Check type of the Raw Packet *******/
		if (DataMsg.DataBuffer[1] == P_PACKET_NO_ACK ) {

			/***** Parsing the Raw Packet ****/
			ParsePkt((INT8U *)&DataMsg.DataBuffer[0]);

			/********* Get Tos_Msg from the Raw Packet ******/
			ToSMessage = (Tos_Msg *)&DataMsg.DataBuffer[RAWPKT_HEADER_LEN];
			count = DataMsg.DataBuffer[2];
			/*
			 * Here we'll add 0xA5A5 to the beginning of teh packet such that we can discriminate
			 * between number of packets
			 */
			memmove(&DataMsg.DataBuffer[0], &ToSMessage->data[0 + ROUTE_HEADER_LEN], sizeof(struct SensedData));
//DONE		Time stamp + BaseStnIdneeds to be added over here

			Cur_Time( &cur_time);							// Get the current time

			Data = (SensedData *)&DataMsg.DataBuffer[0];
			sprintf(&destdata[0], packet, count, BaseStnId, Data->crop_id[0],Data->crop_id[1], Data->plot_id, Data->node_id, Data->sensor_id, Data->value,cur_time.YYYY,cur_time.MM,cur_time.DD,cur_time.hh,cur_time.mm,cur_time.ss);
			// Appneding the timestamp to the data packet
			//memcpy(&DataMsg.DataBuffer[sizeof(struct SensedData) + 3], &cur_time, sizeof(TIME));

			/* Lock the Mutex*/
			CoEnterMutexSection(file_mutex);


			printf("\r\nWrite to file (test.txt).\r\n");
			rc = f_open(&store, "./root/store.xml", FA_WRITE|FA_READ);//| FA_CREATE_ALWAYS);
			f_sync(&store);
			if (rc) die(rc);
			if(rc != 0)
			{
				if(rc == 4)				// If file is not found
				{
					rc = f_open(&store, "./root/store.xml", FA_WRITE|FA_READ|FA_CREATE_ALWAYS);
					f_sync(&store);
				}
			}
			printf("OSize=%d\n\r",(uint16_t)f_size(&store));

			// IF something is there in destn file
			if(!(f_size(&store) == 0))
			{
			// Overwriting the Endtag
				res = f_lseek(&store, f_size(&store)- strlen(ENDTAG)-1);
			}
			//If nothing is present in the file
			else{
				rc = f_write(&store, STARTTAG, strlen(STARTTAG), &bw);
				f_sync(&store);
				if (rc) die(rc);
			}

			rc = f_write(&store, destdata, strlen(destdata),&bw);
			f_sync(&store);
			if (rc) die(rc);

			rc = f_write(&store, ENDTAG, strlen(ENDTAG),&bw);
			f_sync(&store);
			if (rc) die(rc);

			rc = f_close(&store);
			if (rc) die(rc);

			/* Release the lock */
			CoLeaveMutexSection(file_mutex);
		}
		else{
			printf("Discarded\n");
		}

		// return the Data Buffer
		return &DataMsg.DataBuffer[0];

    }




}






