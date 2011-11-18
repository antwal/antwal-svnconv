/*-----------------------------------------------------------------------*/
/*					Function which interfaces with SD card				 */
/*-----------------------------------------------------------------------*/

#include "ff.h"
#include "di_msd.h"
#include "WSNPacket.h"
#include <CoOS.h>
#include <stdio.h>
#include <string.h>
#include "stm32_rtc.h"

extern void rc(FRESULT);
extern void die(FRESULT);

extern OS_EventID sd_queue_id;


FRESULT SDInterface(char *Data)
{
	//COX_Status ret;
	//uint32_t Size;

	FRESULT rc;				/* Result code */
	FATFS fatfs;			/* File system object */
	FIL fil;				/* File object */
//	FILINFO fno;			/* File information object */
	UINT bw;


	/* Register volume work area (never fails) */
	f_mount(0, &fatfs);

	//printf("Open\r\n");
	rc = f_open(&fil, "./root/Data.txt", FA_WRITE);//| FA_CREATE_ALWAYS);
	if (rc) die(rc);
	if(rc == 4){
		// There is no any file with this name
		rc = f_open(&fil,"./root/Data.txt",FA_OPEN_ALWAYS);
	}
	//printf("OSize=%d\n\r",(uint16_t)f_size(&fil));

	//If file is opened successfully then only go ahead
	if(!rc){
		// Reaching to the end of the file
		f_lseek(&fil, f_size(&fil));

	// Appending the data
		rc = f_write(&fil, &Data[0], DATA_LEN, &bw);
		if (rc) die(rc);

		printf("NSize=%d\n\r",(uint16_t)f_size(&fil));

		rc = f_close(&fil);
		if (rc) die(rc);
	}
	else{
		printf("Problem with SDcard\n\r");

	}

	return rc;
}
