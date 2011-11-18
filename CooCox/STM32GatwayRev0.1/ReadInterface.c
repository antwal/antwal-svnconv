/*****************************************************************************************************
 *			 FUNTION THAT READS THE DATA ARRIVED AT THE PORT			     *
 *****************************************************************************************************/

#include <CoOS.h>
#include "WSNPacket.h"
#include "TypeDefs.h"
#include "stdint.h"
#include "string.h"
#include <stdio.h>
#include "stm32_rtc.h"

#define MAX_BUFF_SIZE 64


typedef struct Message {
	unsigned char  DataBuffer[MAX_BUFF_SIZE];
}MSG;

extern OS_EventID raw_queue_id;
extern OS_EventID sd_queue_id;

// Message to be added on to queue , taken two buffer packet //
MSG DataMsg[8];

extern uint8_t BaseStnId;
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
				printf("MISSED: 0x%x\n",DataMsg[buf].DataBuffer[2]);
			}
			last = DataMsg[buf].DataBuffer[2];
			printf("RCVD=%d\n\r",DataMsg[buf].DataBuffer[2]);
		//	printf("\nData is: ");

			//for (j=0; j < i; j++){
				//printf("\t%x ",DataMsg[buf].DataBuffer[j]);
			//}
			//printf(" \n");
			//result = CoPostQueueMail (raw_queue_id, (void *) &DataMsg[buf]);
			/* Calling from Interrupt context*/
			result = isr_PostQueueMail (raw_queue_id, (void *) &DataMsg[buf]);
			if (result != E_OK){
				 if (result == E_INVALID_ID){
					 printf("Invalid Queue ID ! \n");
				 }
				 else if (result == E_MBOX_FULL){
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
			} //else {printf(" %c", ch); }
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
	Tos_Msg *ToSMessage;		// Tos_Msg received //
	uint8_t j;
	TIME cur_time;

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

			/*
			 * Here we'll add 0xA5A5 to the beginning of teh packet such that we can discriminate
			 * between number of packets
			 */


			DataMsg.DataBuffer[0] = 0xA5;
			DataMsg.DataBuffer[1] = 0xA5;
			memmove(&DataMsg.DataBuffer[2], &ToSMessage->data[0 + ROUTE_HEADER_LEN], sizeof(struct SensedData));
//DONE		Time stamp + BaseStnIdneeds to be added over here

			DataMsg.DataBuffer[sizeof(struct SensedData) + 2] = BaseStnId;

			Cur_Time( &cur_time);							// Get the current time


			// Appneding the timestamp to the data packet
			memcpy(&DataMsg.DataBuffer[sizeof(struct SensedData) + 3], &cur_time, sizeof(TIME));

			/*
			 *  Here Add 0xA5A5 to the end to make the complete Packet
			 */
			DataMsg.DataBuffer[DATA_LEN-2] = 0xA5;
			DataMsg.DataBuffer[DATA_LEN-1] = 0xA5;

			/* Now data looks like 0xA5A5 + data + basestnid + Timestamp + 0xA5A5
			 * Data PAcket Formation is done
			 * Now its time to store the data in the SDcard
			 */
			// Printf What we've got

			printf("Data= %d",DataMsg.DataBuffer[6]);
			/*for (j=0; j < DATA_LEN; j++){
				printf("\t%x ",DataMsg.DataBuffer[j]);
			}*/
			printf("\n\r");

		//	SDInterface(&DataMsg.DataBuffer[0]);
		}
		else{
			printf("Discarded\n");
		}

		// return the Data Buffer
		return &DataMsg.DataBuffer[0];

    }




}






