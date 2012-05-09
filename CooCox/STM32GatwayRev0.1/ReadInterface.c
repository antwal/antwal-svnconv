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
#include "watchdog.h"
#include "debug.h"
#include <stm32_pio.h>
#include "powermgmnt.h"

// Length of each queue used to hold the WSN data
#define QUEUE_LENGTH 32

// Buffer that keeps the XML formatted WSN data
char destdata[250];
uint16_t pktcount = 0;

typedef struct Message {
	unsigned char  DataBuffer[QUEUE_LENGTH];
}MSG;

// Message to be added on to queue , taken 16 buffer packet //
MSG DataMsg[MAIL_QUEUE_SIZE];
MSG Data;

extern COX_PIO_Dev LED0;
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

//    static uint8_t cur,last;

	if (PktStartRecd) {
		if ((i == 1) && (ch == START_BYTE)) {
			return ;
		}
		// Reading data from the Port
		DataMsg[buf].DataBuffer[i++] = ch;

		if (ch == STOP_BYTE) {

			//printf("\nData is: ");

			//for (j=0; j < i; j++){
			//	printf("\t%x ",DataMsg[buf].DataBuffer[j]);
			//}
			//printf(" \n");
			/* Calling from Interrupt context*/
			result = isr_PostQueueMail (raw_queue_id, (void *) &DataMsg[buf]);
			if (result != E_OK){
				 if (result == E_INVALID_ID){
					 debug(LOG,"%s\n\r","WSN:Queue ID invalid");
				 }
				 else if (result == E_SEV_REQ_FULL){
                     debug(LOG,"%s\n\r","WSN:Queue Full");
				 }
			}
			PktStartRecd = 0;
			i = 0;
			buf += 1 ;  				//change the buffer to be used

			if( !(buf % MAIL_QUEUE_SIZE) )
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
char * wsnPacketDecoding(dogDebug *dptr){

	StatusType result;
	void *msg;
	uint8_t j,i;
	uint8_t BaseStnNo = BaseStnId;
	Tos_Msg *ToSMessage;		// Tos_Msg received //
	SensedData *DataVal;
	TIME cur_time;
	UINT bw,res;

	 /* Wait for a mail, time-out:30seconds */
	WDG_setTaskState(dptr , WAIT);
	msg = CoPendQueueMail (raw_queue_id, 3000, &result);
	if (result != E_OK){
        if (result == E_INVALID_ID){
        	debug(LOG,"%s\n\r","WSN:QueueID invalid");
        }
    }
    else{
    	memcpy(&Data.DataBuffer[0], (uint8_t *)msg, 30);
		pktcount++;
		/******** Check type of the Raw Packet *******/
		if (Data.DataBuffer[1] == P_PACKET_NO_ACK ) {
			WDG_setTaskState(dptr , SAVE_DATA);
			/***** Parsing the Raw Packet ****/
			ParsePkt((INT8U *)&Data.DataBuffer[0]);

			/********* Get Tos_Msg from the Raw Packet ******/
			ToSMessage = (Tos_Msg *)&Data.DataBuffer[RAWPKT_HEADER_LEN];


			memmove(&Data.DataBuffer[0], &ToSMessage->data[0 + ROUTE_HEADER_LEN], sizeof(struct SensedData));
//DONE		Time stamp + BaseStnIdneeds to be added over here

			Cur_Time( &cur_time);							// Get the current time

			DataVal= (SensedData *)&Data.DataBuffer[0];
			//sprintf(&destdata[0], packet, pktcount, BaseStnNo, DataVal->crop_id[0],DataVal->crop_id[1], DataVal->plot_id, DataVal->node_id, DataVal->sensor_id, DataVal->value,cur_time.YYYY,cur_time.MM,cur_time.DD,cur_time.hh,cur_time.mm,cur_time.ss);
			if(DataVal->sensor_id == 2)
			sprintf(&destdata[0], packet, pktcount, BaseStnNo, DataVal->crop_id[0],DataVal->crop_id[1], DataVal->plot_id, DataVal->node_id, DataVal->sensor_id, (float)power.bat2,cur_time.YYYY,cur_time.MM,cur_time.DD,cur_time.hh,cur_time.mm,cur_time.ss);
			else
			sprintf(&destdata[0], packet, pktcount, BaseStnNo, DataVal->crop_id[0],DataVal->crop_id[1], DataVal->plot_id, DataVal->node_id, DataVal->sensor_id, DataVal->value,cur_time.YYYY,cur_time.MM,cur_time.DD,cur_time.hh,cur_time.mm,cur_time.ss);
			debug(CONSOLE,"%s:%d:%02x:%08x\n\r","WSN:Packet Recvd",DataVal->node_id,DataVal->sensor_id,DataVal->value);
			pi_pio.Out(LED0,(pktcount & 0x01));

			/* Lock the Mutex*/
			CoEnterMutexSection(file_mutex);

			rc = f_open(&store, "./root/store.xml", FA_WRITE|FA_READ);
			if(!rc)
			f_sync(&store);
			if (rc) die(rc);
			if(rc != 0)
			{
				if(rc == 4)				// If file is not found
				{
					debug(CONSOLE,"%s\n\r","WSN:store.xml not Found");
					rc = f_open(&store, "./root/store.xml", FA_WRITE|FA_READ|FA_CREATE_ALWAYS);
					f_sync(&store);
					//if (rc) die(rc);
				}
			}
			else{
				debug(LOG,"WSN:Packet Number:%d\n\r",pktcount);
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
				//if (rc) die(rc);
			}

			rc = f_write(&store, destdata, strlen(destdata),&bw);
			f_sync(&store);
			//if (rc) die(rc);

			rc = f_write(&store, ENDTAG, strlen(ENDTAG),&bw);
			f_sync(&store);
			//if (rc) die(rc);

			rc = f_close(&store);
			//if (rc) die(rc);
			}

			/* Release the lock */
			CoLeaveMutexSection(file_mutex);
			WDG_setTaskState(dptr , SAVE_DONE);

		}
		else{
			debug(LOG,"%s\n\r","WSN:Msg Discarded");
			for(i =0; i < (RAWPKT_HEADER_LEN + ROUTE_HEADER_LEN + 8 + 11); i++)
			{
				dbg_printf("0x%x\t",Data.DataBuffer[i]);
			}
		}
		return 0;
    }
}






