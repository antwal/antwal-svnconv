

//#include "mmc.h"
#include "cox_spi.h"
#include "cox_pio.h"
#include "STM32_USART.h"
#include <stdio.h>
#include "stm32_pio.h"
#include <stm_spi_master.h>
#include "di_msd.h"

/*----------------------------------------------------------------------*/
	/* FatFs sample project for generic microcontrollers (C)ChaN, 2010      */
	/*----------------------------------------------------------------------*/
//#include "Type.h"
#include "ff.h"
#include "diskio.h"


COX_SERIAL_PI *UART = &pi_serial2;
MSD_Dev sd_var;
//sMSD_CID *cid;
MSD_Dev *sd= &sd_var;							// MSD instance


	void die (		/* Stop with dying message */
		FRESULT rc	/* FatFs return value */
	)
	{
		printf("Failed with rc=%d\r\n",rc);
		SS_HIGH(sd);
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
	                for(j=0;j<10;j++);
	}




	// Initializing the variables required for MSD

int main(void)
{
	COX_Status ret;
	uint32_t Size;


	FRESULT rc;				/* Result code */
	FATFS fatfs;			/* File system object */
	FIL fil;				/* File object */
	DIR dir;				/* Directory object */
	FILINFO fno;			/* File information object */
	UINT bw, br, i;
	BYTE buff[12];

	COX_PIO_Dev CS = COX_PIN(2,7);			// PORTC7
	COX_SPI_PI *SPI = &pi_spi1;
	COX_PIO_PI *PI = &pi_pio;

	UART->Init(115200);
	const char start[] = "start\n\r";
	printf("%s",start);

	sd-> cs_pin = CS;
	sd-> pio = PI;
	sd-> spi = SPI;

	sd->pio->Init(sd->cs_pin);
	sd->pio->Dir(sd->cs_pin,1);


	sd->spi->Cfg(COX_SPI_CFG_MODE,COX_SPI_MODE0,0);
	sd->spi->Cfg(COX_SPI_CFG_RATE,SPI_BaudRatePrescaler_128,0);
	sd->spi->Cfg(COX_SPI_CFG_BITS,8,0);
	sd->spi->Cfg(COX_SPI_CFG_FSB,COX_MSPI_FSB_MSB,0);
	ret = sd->spi->Init(COX_SPI_MODE0, 128);
		if(ret == COX_SUCCESS)
			printf("Spi INit done\n\r");

	//ret = initialize(sd);				// uses SDCARD.c
	ret = MSD_Init(sd);					// mmc_driver.c


		//Size = MSD_GetChipSize(sd);
	//printf("SD Card Size is=%d\n\r",Size);

//	ret = MSD_GetCIDRegister(sd, cid);
	//if(ret == COX_SUCCESS)
		//printf("CID Succes\n\r");
	//else
	//printf("CID Failed\n\r");

		f_mount(0, &fatfs);		/* Register volume work area (never fails) */

		printf("Open a file \r\n");

		rc = f_open(&fil, "./root/HELLO.TXT", FA_READ );
		if (rc) die(rc);

		printf("\r\nType the file content.\r\n");
		do {
			rc = f_read(&fil, buff, sizeof(buff), &br);	/* Read a chunk of file */
			if (rc || !br) break;			/* Error or end of file */

			printf("%s\n\r",buff);
		}
		while(f_eof(&fil)!= 1);
			//for (i = 0; i < br; i++)		/* Type the data */
				//putchar_uart1(buff[i]);
//		}
//		if (rc) die(rc);
		const char buff1[] = "\r\nClose the file.\r\n";
		printf("%s",buff1);
		rc = f_close(&fil);
		if (rc) die(rc);

		printf("\r\nCreate a new file (hello.txt).\r\n");
		rc = f_open(&fil, "./root/hello.txt", FA_WRITE );//| FA_CREATE_ALWAYS);
		if (rc) die(rc);

		printf("OSize=%d\n\r",(uint16_t)f_size(&fil));
		uint8_t res;
		res = f_lseek(&fil, f_size(&fil));

		printf("\r\nWrite a text data. (Hello world!)\r\n");
		rc = f_write(&fil, "Hello world!\r\n", 14, &bw);
		if (rc) die(rc);

		if(res == FR_OK)
		{
			printf("NSize=%d\n\r",(uint16_t)f_size(&fil));
		}
		//printf("%u bytes written.\r\n", bw);
	 	//printf("bytes written.\r\n");
		//printf("\r\nClose the file.\r\n");
		rc = f_close(&fil);
		if (rc) die(rc);

	/*	printf("\r\nOpen dir\r\n");
		rc = f_opendir(&dir, "./root/");
		if (rc) die(rc);
*/
//		printf("\r\nls:\r\n");
		//for (;;) {
//			rc = f_readdir(&dir, &fno);		/* Read a directory item */
//			if (rc || !fno.fname[0]) break;	/* Error or end of dir */
//			if (fno.fattrib & AM_DIR)
//				printf("   <dir>  \r\n");

//			else
//				printf("   <dir>  \r\n");
				//rprintf("%u  %s\r\n", fno.fsize, fno.fname);
//		}
		if (rc) die(rc);

		printf("\r\ncompleted.\r\n");
		for (;;) ;

}