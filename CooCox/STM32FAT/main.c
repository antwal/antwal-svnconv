

//#include "mmc.h"
#include "cox_spi.h"
#include "cox_pio.h"
#include "STM32_USART.h"
#include <stdio.h>
#include "stm32_pio.h"
#include <stm_spi_master.h>
#include "di_msd.h"
#include "Packet.h"
#include "debug.h"

#define packet "\n\t<WSN_DATA_PKT>\n\t"\
                                        "\t<COUNT>%04x</COUNT>\n\t"\
                                        "\t<BSID>%02x</BSID>\n\t"\
                                        "\t<CROPID>%02x%02x</CROPID>\n\t"\
                                        "\t<PLOTID>%04x</PLOTID>\n\t"\
                                        "\t<MOTEID>%04x</MOTEID>\n\t"\
                                        "\t<PARAID>%02x</PARAID>\n\t"\
                                        "\t<PARAVAL>%04x</PARAVAL>\n\t"\
                                        "\t<TIME>%04x%02x%02x%02x%02x%02x</TIME>\n\t"\
                                "</WSN_DATA_PKT>\n"

SensedData Data ={0x65, 1, 12, 0x1111, 0x1000 };
char destdata[250];
/*----------------------------------------------------------------------*/
	/* FatFs sample project for generic microcontrollers (C)ChaN, 2010      */
	/*----------------------------------------------------------------------*/
//#include "Type.h"
#include "ff.h"
#include "diskio.h"
#include "exti.h"

uint8_t event = COX_EXTI_EDGE_RISING;
void exti_handler(void)
{
	COX_PIO_Dev led1 = COX_PIN(2,8);
	COX_PIO_Dev led2 = COX_PIN(2,9);
	COX_PIO_Dev SD = COX_PIN(2,10);

	pi_pio.Init(led1);
	pi_pio.Init(led2);

	pi_pio.Dir(led1,1);
	pi_pio.Dir(led2,1);

	if(event == COX_EXTI_EDGE_RISING )			// when sd card is removed
	{
		pi_pio.Out(led1,1);
		pi_pio.Out(led2,0);
		event = COX_EXTI_EDGE_FALLING;
		pi_exti.Event(SD, event);
	}
	else if (event == COX_EXTI_EDGE_FALLING)		// when sd card is inserted
	{
		pi_pio.Out(led1,0);
		pi_pio.Out(led2,1);
		event = COX_EXTI_EDGE_RISING;
		pi_exti.Event(SD, event);
	}

}

void EXTIenable(void)
{
	COX_PIO_Dev SD = COX_PIN(2,10);
	pi_exti.Init(SD);
	pi_exti.Event(SD, event);
	pi_exti.Handler(exti_handler);

}


COX_SERIAL_PI *UART = &pi_serial3;
MSD_Dev sd_var;
//sMSD_CID *cid;
MSD_Dev *sd= &sd_var;
//attach and initilize the leds on stm32 board
	COX_PIO_Dev LED0 = COX_PIN(2,8);// MSD instance


	void die (		/* Stop with dying message */
		FRESULT rc	/* FatFs return value */

	)
	{
		printf("Failed with rc=%d\r\n",rc);
		SS_HIGH(sd);
		pi_pio.Out(LED0, 1);      /* Output hign level to turn on LED0 */
		//for (;;) ;
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


	FIL fil1, fil2;				/* File object */

	// Initializing the variables required for MSD

int main(void)
{
	COX_Status ret;
	uint32_t Size;

	FATFS fatfs;			/* File system object */
    DWORD plist[] = {100, 0, 0, 0};  /* Divide drive into two partitions */
    BYTE work[_MAX_SS];

	DIR dir;				/* Directory object */
	FILINFO fno;			/* File information object */
	UINT bw, br, i;
	BYTE buff[16];

	COX_PIO_Dev CS = COX_PIN(2,7);			// PORTC7
	COX_SPI_PI *SPI = &pi_spi1;
	COX_PIO_PI *PI = &pi_pio;

	UART->Init(115200);
	const char start[] = "start\n\r";
	printf("%s",start);

	//Initilize the LED0 and LED1 structure
		pi_pio.Init(LED0);
		//pi_pio.Init(LED1);

		//configure the port as o/p port
		pi_pio.Dir(LED0,1);

		//pi_pio.Dir(LED1,1);
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
		EXTIenable();
	ret = MSD_Init(sd);					// mmc_driver.c
	Size = MSD_GetChipSize(sd);

	/* Initialize a brand-new disk drive mapped to physical drive 0 */



	    //f_fdisk(0, plist, work);  /* Divide physical drive 0 */


	    /*
	    f_mount(0, &Fatfs);
	    f_mkfs(0, 0, 0);
	    f_mount(0, 0);
*/

		f_mount(0, &fatfs);		//* Register volume work area (never fails)
		debugInit();
		debug(LOG,"SD Card Size is=%d\n\r",Size);

		printf("Open a store.xml to read\r\n");
		//rc = f_open(&fil1, "./root/store.xml", FA_READ );
		//if (rc) die(rc);

		printf("Write to file (alldata.xml).\r\n");
		rc = f_open(&fil2, "./root/alldata.xml", FA_WRITE|FA_READ);//| FA_CREATE_ALWAYS);
		if (rc) die(rc);
		if(rc == 4)
			rc = f_open(&fil2, "./root/alldata.xml", FA_WRITE|FA_READ| FA_CREATE_ALWAYS);
		//rc = f_sync(&fil2);
		//if (rc) die(rc);
		if(rc == 5)
		{
			rc = f_mkdir("root");
			if(rc) die(rc);

		}
		rc = f_open(&fil2, "./root/alldata.xml", FA_WRITE|FA_READ| FA_CREATE_ALWAYS);
		//if (rc) die(rc);

		printf("OSize=%d\n\r",(uint16_t)f_size(&fil2));

		sprintf(destdata, packet, 1, 10, Data.crop_id[0],Data.crop_id[1], Data.plot_id, Data.node_id, Data.sensor_id, Data.value,1,2,3,4,5,6);
		printf("%s",destdata);
#define ENDTAG "</DATA>"
#define STARTTAG "<DATA>"
		uint8_t res;
		// IF something is there in destn file
		if(!(f_size(&fil2) == 0))
		{
			// Overwriting the Endtag
			res = f_lseek(&fil2, f_size(&fil2)- strlen(ENDTAG)-1);
			// Read after the head tag
	//		rc = f_read(&fil1, buff, strlen(STARTTAG), &br);
	//		if (rc || !br) die(rc);
	//		for(res = 0; res < br;res++)
	//		printf(" %c",buff[res]);


			//rc = f_write(&fil2, "\t", br,&bw);
			//if (rc) die(rc);
		}
		//If nothing is present in the file
		else{
			rc = f_write(&fil2, STARTTAG, strlen(STARTTAG), &bw);
			if (rc) die(rc);
			rc = f_sync(&fil2);
			if (rc) die(rc);
		}


		//do {
			//rc = f_read(&fil1, buff, sizeof(buff), &br);	//* Read a chunk of file
			//if (rc || !br) break;							//* Error or end of file
			//for(res = 0; res < 16;res++)
			//printf(" %c",buff[res]);
			//res = f_lseek(&fil2, f_size(&fil2));

			rc = f_write(&fil2, destdata, strlen(destdata),&bw);
			if (rc) die(rc);
			//rc = f_sync(&fil2);
			//if (rc) die(rc);
		//}
		//while(f_eof(&fil1)!= 1);

		// Add the ENDTAG at the end
		rc = f_write(&fil2, ENDTAG, strlen(ENDTAG),&bw);
		if (rc) die(rc);
		//rc = f_sync(&fil2);
		if (rc) die(rc);

//		rc = f_close(&fil1);
//		if (rc) die(rc);

		rc = f_close(&fil2);
		if (rc) die(rc);

		printf("opening(test.txt).\r\n");
		rc = f_open(&fil2, "./root/log.txt",FA_READ);
		if (rc) die(rc);
		//printf("\r\nNSize=%d\n\r",(uint16_t)f_size(&fil2));
		res = f_lseek(&fil2, 0);

		do {
			rc = f_read(&fil2, buff, sizeof(buff), &br);	//* Read a chunk of file
			if (rc || !br) break;			//* Error or end of file
			for(res = 0; res < br;res++)
			printf(" %c",buff[res]);
		}
		while(f_eof(&fil2)!= 1);


		printf("%s", "\r\nClose the file.\r\n");

		rc = f_close(&fil2);
		if (rc) die(rc);


		printf("\r\ncompleted.\r\n");
		for (;;) ;

}
