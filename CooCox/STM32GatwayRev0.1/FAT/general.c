#include <stdio.h>
#include "diskio.h"
#include "di_msd.h"
#include "ff.h"
#include "debug.h"
#include "string.h"

extern MSD_Dev *sd;
extern TIME *tm;

void die (		/* Stop with dying message */
		FRESULT rc	/* FatFs return value */
	)
	{
		debug(LOG,"SDreturn =%d\r\n",rc);
		if(rc == 9)
		{
			MSD_Init(sd);			// To initialise SD card
		}
		SS_HIGH(sd);

		return;
	}

	/*---------------------------------------------------------*/
	/* User Provided Timer Function for FatFs module           */
	/*---------------------------------------------------------*/

	DWORD get_fattime (void)
	{
		Cur_Time(tm);
		return	  ((DWORD)(tm->YYYY - 1980) << 25)	/* Current Time */
				| ((DWORD)tm->MM << 21)
				| ((DWORD)tm->DD << 16)
				| ((DWORD)tm->hh << 11)
				| ((DWORD)tm->mm << 5)
				| ((DWORD)tm->ss >> 1);
	}


	void delay(){
	        int i,j;

	        for(i=0;i<10;i++)
	                for(j=0;j<10;j++);
	}

