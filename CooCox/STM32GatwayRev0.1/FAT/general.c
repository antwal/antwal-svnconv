#include <stdio.h>
#include "diskio.h"
#include "di_msd.h"
#include "ff.h"
#include "debug.h"

extern MSD_Dev *sd;

void die (		/* Stop with dying message */
		FRESULT rc	/* FatFs return value */
	)
	{
		debug(LOG,"SD =%d\r\n",rc);
		SS_HIGH(sd);
		//for (;;) ;
		return;
	}

	/*---------------------------------------------------------*/
	/* User Provided Timer Function for FatFs module           */
	/*---------------------------------------------------------*/

	DWORD get_fattime (void)
	{
		return	  ((DWORD)(2010 - 1980) << 25)	/* Fixed to Jan. 1, 2010 */
				| ((DWORD)1 << 21)
				| ((DWORD)1 << 16)
				| ((DWORD)0 << 11)
				| ((DWORD)0 << 5)
				| ((DWORD)0 >> 1);
	}


	void delay(){
	        int i,j;

	        for(i=0;i<10;i++)
	                for(j=0;j<10;j++);
	}

