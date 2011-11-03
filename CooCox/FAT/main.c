/*----------------------------------------------------------------------*/
/* FatFs sample project for generic microcontrollers (C)ChaN, 2010      */
/*----------------------------------------------------------------------*/


#include "lpc23xx.h"
#include "Type.h"
#include "UART1.h"
#include "SystemInit.h"

//#include <stdio.h>
#include "ff.h"
#include "diskio.h"





void die (		/* Stop with dying message */
	FRESULT rc	/* FatFs return value */
)
{
	rprintfStr("Failed with rc\r\n");
	for (;;) ;
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

        for(i=0;i<1000;i++)
                for(j=0;j<100;j++);
}

/*-----------------------------------------------------------------------*/
/* Program Main                                                          */
/*-----------------------------------------------------------------------*/

int main (void)
{
	FRESULT rc;				/* Result code */
	FATFS fatfs;			/* File system object */
	FIL fil;				/* File object */
	DIR dir;				/* Directory object */
	FILINFO fno;			/* File information object */
	UINT bw, br, i;
	BYTE buff[128];

	SYS_TargetResetInit();
	
	InitUart1();
	
	//gpioInit();			/*add the configuration for gpio*/

	
	f_mount(0, &fatfs);		/* Register volume work area (never fails) */

	rprintfStr("\r\nOpen a test file (hola.txt).\r\n");

	rc = f_open(&fil, "hola.txt", FA_READ);
	if (rc) die(rc);

	rprintfStr("\r\nType the file content.\r\n");
	for (;;) {
		rc = f_read(&fil, buff, sizeof(buff), &br);	/* Read a chunk of file */
		if (rc || !br) break;			/* Error or end of file */
		for (i = 0; i < br; i++)		/* Type the data */
			putchar_uart1(buff[i]);
	}
	if (rc) die(rc);

	rprintfStr("\r\nClose the file.\r\n");
	rc = f_close(&fil);
	if (rc) die(rc);

	rprintfStr("\r\nCreate a new file (hello.txt).\r\n");
	rc = f_open(&fil, "hello.txt", FA_WRITE | FA_CREATE_ALWAYS);
	if (rc) die(rc);

	rprintfStr("\r\nWrite a text data. (Hello world!)\r\n");
	rc = f_write(&fil, "Hello world!\r\n", 14, &bw);
	if (rc) die(rc);
	//rprintfStr("%u bytes written.\r\n", bw);
 	rprintfStr("bytes written.\r\n");
	rprintfStr("\r\nClose the file.\r\n");
	rc = f_close(&fil);
	if (rc) die(rc);

	rprintfStr("\r\nOpen root directory.\r\n");
	rc = f_opendir(&dir, "");
	if (rc) die(rc);

	rprintfStr("\r\nDirectory listing...\r\n");
	for (;;) {
		rc = f_readdir(&dir, &fno);		/* Read a directory item */
		if (rc || !fno.fname[0]) break;	/* Error or end of dir */
		if (fno.fattrib & AM_DIR)
			rprintfStr("   <dir>  \r\n");			

		else
			rprintfStr("   <dir>  \r\n");
			//rprintf("%u  %s\r\n", fno.fsize, fno.fname);
	}
	if (rc) die(rc);

	rprintfStr("\r\nTest completed.\r\n");
	for (;;) ;
}




