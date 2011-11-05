/*-----------------------------------------------------------------------*/
/*					Function which interfaces with SD card				 */
/*-----------------------------------------------------------------------*/

#include "ff.h"
#include "di_msd.h"
#include "WSNPacket.h"
#include <CoOS.h>
#include <stdio.h>
#include <string.h>

extern void rc(FRESULT);
extern void die(FRESULT);

extern OS_EventID sd_queue_id;

FRESULT SdInterface(void)
{
	//COX_Status ret;
	//uint32_t Size;

	FRESULT rc;				/* Result code */
	FATFS fatfs;			/* File system object */
	FIL fil;				/* File object */
//	FILINFO fno;			/* File information object */
	UINT bw;

	StatusType result;
	void *msg;
	BYTE Data[UAGRI_DATA_LEN];
	uint16_t DataLen;

	DataLen = sizeof(struct SensedData);

//TODO: Two buffers are reqd

	/* Wait for a mail, time-out:0 */
	msg = CoPendQueueMail (sd_queue_id, 0, &result);
	if (result != E_OK){
		if (result == E_INVALID_ID){
			printf("IQID !\n");
		}
	}
	else
	{
		// Copying data from the received buffer to local buffer making the buufer free
		memcpy(&Data[0], (uint8_t *)msg, DataLen);
		Data[DataLen] = '\n';
		Data[DataLen + 1] = '\r';
	}

	/* Register volume work area (never fails) */
	f_mount(0, &fatfs);

	//printf("Open\r\n");
	rc = f_open(&fil, "./root/Data.txt", FA_WRITE | FA_CREATE_NEW );//| FA_CREATE_ALWAYS);
	if (rc) die(rc);

	//printf("OSize=%d\n\r",(uint16_t)f_size(&fil));

	// Reaching to the end of the file
	f_lseek(&fil, f_size(&fil));

	// Appending the data
	rc = f_write(&fil, &Data[0], UAGRI_DATA_LEN, &bw);
	if (rc) die(rc);

	printf("NSize=%d\n\r",(uint16_t)f_size(&fil));


	rc = f_close(&fil);
	if (rc) die(rc);

	return rc;
}
