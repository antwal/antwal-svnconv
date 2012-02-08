#include "cox_serial.h"
#include "STM32_USART.h"
#include <stm32_pio.h>
#include "stm32f10x.h"
#include "buffer.h"
#include "stdio.h"
#include <CoOS.h>			              /*!< CoOS header file	         */



#include <stm_spi_master.h>
#include "di_msd.h"
#include "watchdog.h"
#include "main.h"
/*----------------------------------------------------------------------*/
	/* FatFs sample project for generic microcontrollers (C)ChaN, 2010      */
	/*----------------------------------------------------------------------*/
#include "ff.h"
#include "diskio.h"
#include "modem.h"
#include "WSNPacket.h"

// This flag is set in RTime.c; if restart is due to Watchdog
uint8_t Dog = 0;

/*-----------------------------SD card Variable-----------------------------*/
MSD_Dev sd_var;
MSD_Dev *sd= &sd_var;							// MSD instance

#define MaxRx   100     			// Maximum size of receive buffer

// USed for appending data from send.xml to alldata.xml
uint8_t lclbuff[100];

cBuffer modem_buffer;								// Receive Buffer for modem
unsigned char mBuffer[MaxRx];

//Decleration of   serial Ports
COX_SERIAL_PI *myUSART3 = &pi_serial3;
COX_SERIAL_PI *myUSART2 = &pi_serial2;


void TIME_SET(uint16_t a){ TIME_TICK=a;}                      	// Set 10 millisecond counter to value 'a'


//attach and initilize the leds on stm32 board
COX_PIO_Dev LED0 = COX_PIN(2,8);
COX_PIO_Dev LED1 = COX_PIN(2,9);


void *MailQueue[MAIL_QUEUE_SIZE];

extern void Read_Data(unsigned char );
extern char* wsnPacketDecoding(dogDebug *dptr );
extern FRESULT SDInterface(char *);

uint8_t sdConfig(void)
{
	uint8_t ret;
	COX_PIO_Dev CS = COX_PIN(2,7);			// PORTC7
	COX_SPI_PI *SPI = &pi_spi1;
	COX_PIO_PI *PI = &pi_pio;

	sd-> cs_pin = CS;
	sd-> pio = PI;
	sd-> spi = SPI;

	sd->pio->Init(sd->cs_pin);
	sd->pio->Dir(sd->cs_pin,1);

	sd->spi->Cfg(COX_SPI_CFG_MODE,COX_SPI_MODE0,0);
	sd->spi->Cfg(COX_SPI_CFG_RATE,SPI_BaudRatePrescaler_2,0);
	sd->spi->Cfg(COX_SPI_CFG_BITS,8,0);
	sd->spi->Cfg(COX_SPI_CFG_FSB,COX_MSPI_FSB_MSB,0);
	ret = sd->spi->Init(COX_SPI_MODE0, 2);

	return ret;
}

void modemConfig(void)
{
	COX_PIO_Dev DTR = COX_PIN(2,6);			// PORTC6
	COX_PIO_PI *PI = &pi_pio;

	modm.dtr_pin = DTR;
	modm.pio = PI;

	modm.pio->Init(modm.dtr_pin);
	modm.pio->Dir(modm.dtr_pin,1);
}

/*Mote data receive handler*/
void USART2_IRQHandler(void)
{
	char ch;
	static char count = 0;
	StatusType result;
	CoEnterISR ();

	//RXNE interrupt occured
	//printf("uart%x\n\r",USART2->SR);
	if(( USART2->SR & 0x20) != (u16)RESET )
	{
		//count ++;
		ch = (USART2->DR & (us16)0x01FF);
		//printf("0x%x  ",ch);
		Read_Data(ch);

	}
	else if(( USART2->SR & 0x08) != (u16)RESET )		// Handling overrun error
	{
		ch = (USART2->DR & (us16)0x01FF);
	}
	CoExitISR ( );
}



/* Used For printf function*/
void pchar(unsigned char c)
{
	USART3->DR =  (c & (us16)0x01FF);
	while (!(USART3->SR & 0x0080));
}


void initSerial(void){

	//Initilize the buffer for Modem
	bufferInit(&modem_buffer, mBuffer, MaxRx);

	// For mote
	myUSART2->Init(9600);
	myUSART2->Cfg( COX_SERIAL_INT_CONF, RXNE_ENABLE,0);


	//Usart for printf-debugging purpose
	myUSART3->Init(115200);

	//Usart for communication with the Modem
	myUSART1->Init(9600);
	myUSART1->Cfg( COX_SERIAL_INT_CONF, RXNE_ENABLE,0);

}


void TmrCallBack(void)
{
	// Feed the dog
	if(feedDog == DOG_FEED){
		//IWDG_ReloadCounter();
	}

	TIME_TICK ++;

}

	/**
	 *******************************************************************************
	 * @brief       "task2" task code
	 * @param[in]   None
	 * @param[out]  None
	 * @retval      None
	 * @par Description
	 * @details    task example to increment a variable
	 *
	 *******************************************************************************
	 */
	void task2 (void* pdata)
	{
		dogDebug *dptr = (dogDebug *) pdata;
		char buff[16]= "0.0.0.0";
		modm.ip_addr = buff;
		uint8_t res, ntp_update =0;
		uint16_t br, bw;
		server tcp;

		TIME_SET(0);
		tcp.port ="80";
		tcp.addr = "14.96.145.172";

		sdConfig();

		CoTickDelay (2000);
		setTaskState(dptr , NTP_TIME);
		mdmWakeUp(&modm);
		res = ntp_time(&modm);

		for(;;)
		{
			mdmWakeUp(&modm);
			ntp_update ++;
			if(ntp_update > 10){ 			// Update time after each 10 uploads
				ntp_update = 0;
				setTaskState(dptr , NTP_TIME);
				res = ntp_time(&modm);
			}
		/*
				 *  If send.xml file exists that means last uploading was unsuccessful.
				 *  so  first upload the send.xml data of previous failed
				 *  upload trial.
				 * 	If file is not present that means last upload is successful
				 * 	so rename the store.xml to send.xml and try to upload.
				 *  once send.xml is uploaded, append the send.xml to alldata.xml.
				 *  Then delete the send.xml file.
				 */
			rc = f_open(&send, "./root/send.xml", FA_READ);
			f_close(&send);

			// If send.xml file does not exists
			if(rc == FR_NO_FILE)
			{
				CoEnterMutexSection(file_mutex);
				// Copy store.xml to send.xml
				rc = f_rename("./root/store.xml", "./root/send.xml");
				CoLeaveMutexSection(file_mutex);
				printf("rename=%d\n\r",rc);

				if(rc == 0){
					setTaskState(dptr , UPLOADING);
					rc = uploadFile(&modm, "./root/send.xml", &tcp);
				}
				else if (rc == 4){
					// Store.xml is not present
					printf("store.xml not present\n\r");
				}
				else{
					// Some problem with SDcard
					printf("Problem With SD card\n\r");
				}
			}
			else if(rc == FR_OK)
				{
					setTaskState(dptr , UPLOADING);
					printf("send.xml present=%d\n\r",rc);
					rc = uploadFile(&modm, "./root/send.xml", &tcp);
				}
				else if(rc == 3){
					printf("SD card not present\n\r");
				}
				else{
					printf("Some problem With SDCard\n\r");
				}

				setTaskState(dptr , MODEM_FREE);
				// If file is uploaded successfully
				if(rc == mdmOK)
				{
					// Appending send.xml data to alldata.xml
					printf("Open a send.xml to read\r\n");
					rc = f_open(&send, "./root/send.xml", FA_READ );
					if (rc) die(rc);
					f_sync(&send);

					printf("\r\nWrite to file alldata.xml\r\n");
					rc = f_open(&alldata, "./root/alldata.xml", FA_WRITE|FA_READ);//| FA_CREATE_ALWAYS);
					if (rc) die(rc);
					f_sync(&alldata);

					if( rc == FR_NO_FILE)
					{
						printf("Creating alldata.xml\n\r");
						rc = f_open(&alldata, "./root/alldata.xml", FA_WRITE|FA_READ| FA_CREATE_ALWAYS);
						if (rc) die(rc);
						f_sync(&alldata);
					}

					// If the alldata.xml has already some data present
					if(!(f_size(&alldata) == 0))
					{
						printf("appending data to alldata.xml\n\r");
						// Overwriting the Endtag
						res = f_lseek(&alldata, f_size(&alldata)- strlen(ENDTAG)-1);
						// Read after the head tag
						rc = f_read(&send, lclbuff, strlen(STARTTAG)+2, &br);
						if (rc || !br) die(rc);
						for(res = 0; res < br;res++)
							printf(" %c",lclbuff[res]);

						rc = f_write(&alldata, "\t", 1,&bw);
						if (rc) die(rc);
						f_sync(&alldata);
					}
					//If nothing is present in the file
					else{
						printf("alldata.xml is empty\n\r");
						rc = f_write(&alldata, STARTTAG, strlen(STARTTAG), &bw);
						if (rc) die(rc);
						f_sync(&alldata);
					}

					printf("\n\rcopying content\n\r");
					// Start copying content from send.xml to alldata.xml
					do {
						setTaskState(dptr , APPEND);
						//printf("File size=%d\n\r",f_size(&send));
						rc = f_read(&send, lclbuff, sizeof(lclbuff), &br);	/* Read a chunk of file */
						printf("rc=%d,br=%d\n\r",rc,br);
						if (rc || !br) break;								/* Error or end of file */
						//for(res = 0;res < br ;res++)
							//printf(" %c",lclbuff[res]);
						//res = f_lseek(&fil2, f_size(&fil2));

						rc = f_write(&alldata, lclbuff, br, &bw);
						if (rc) break;
						f_sync(&alldata);
					}
					while(f_eof(&send)!= 1);

					rc = f_close(&send);
					if (rc) die(rc);

					rc = f_close(&alldata);
					if (rc) die(rc);

					printf("Deleting send.xml\n\r");
					f_unlink("./root/send.xml");		// Delete the file

				}
			  setTaskState(dptr , WAIT);
			  CoTickDelay (6000);		// For 1 MInute
		 }

	}


	/**
	 *******************************************************************************
	 * @brief       "task3" task code
	 * @param[in]   None
	 * @param[out]  None
	 * @retval      None
	 * @par Description
	 * @details    task example to increment a variable
	 *******************************************************************************
	 */

	void task3 (void* pdata)
	{
		dogDebug *dptr = (dogDebug *) pdata;
		sdConfig();
		 for (;;)
		 {
			 wsnPacketDecoding(dptr);
		 }
	}

	/**
	 *******************************************************************************
	 * @brief       "WatchDog" task code
	 * @param[in]   None
	 * @param[out]  None
	 * @retval      None
	 * @par Description
	 * @details    This function use to monitor  "task2" and "task3".
	 *******************************************************************************
	 */

	void taskWatchDog (void* pdata){
	dogDebug *dptr;
	intimateState(&modm);// place some where else
	CoTickDelay (1000);

	  feedDog = DOG_FEED;
	  /* configure and start the watch dog timer */
	  IWDG_dogStart();
	  CoTickDelay (10);
	  for (;;) {

		  /* perform the sanity check  */
		  WDG_dogCheck();
	    	 dptr = (dogDebug *)&myDogDebug[UPLOAD - 2];
	    	 /*
	    	  * state of upload task when it does not use modem
	    	  * at this time we can put in the sleep state
	    	  * Waking is left to the upload task when it wants to
	    	  * wpload it will wake up the modem
	    	  */
	    	 if(dptr->state == WAIT || dptr->state == MODEM_FREE || dptr->state == APPEND)
	    	 {
	    		 mdmSleep(&modm);
	    	 }
	    	 else
	    	 {
	    		 mdmWakeUp(&modm);
	    	 }
		  CoTickDelay (10); //delay of 100 milli seconds
	  }
	}


int main(void)
{
	OS_TCID sftmr;

	//Initilize serial configuration
	initSerial();


	//Initilize the LED0 and LED1 structure
	pi_pio.Init(LED0);
	pi_pio.Init(LED1);

	//configure the port as o/p port
	pi_pio.Dir(LED0,1);
	pi_pio.Dir(LED1,1);

	// Initialising RTC clk
	RTC_Timer();
	modemConfig();
	// Mount Filesystem
	mount(fatfs);

	/*!< Initial CooCox CoOS          */
	CoInitOS();

	// initilize the debug structure for the two task
	WDG_initDebug(&myDogDebug[0] , 2 , 1800000  , 1);//debug structure for task 2, periodicity 15 minutes
	WDG_initDebug(&myDogDebug[1] , 3 , 120000 , 1);//debug structure for task 3, periodicity 1 minutes

    /*!< Create three tasks	*/
	WATCH = CoCreateTask (taskWatchDog,0,1,&watchdog_stk[STACK_SIZE_WATCHDOG-1],STACK_SIZE_WATCHDOG);
    UPLOAD = CoCreateTask (task2,&myDogDebug[0],3,&upload_stk[STACK_SIZE_UPLOAD-1],STACK_SIZE_UPLOAD);
    WSN = CoCreateTask (task3,&myDogDebug[1],2,&wsn_stk[STACK_SIZE_WSN-1],STACK_SIZE_WSN);

    /* Create a mutex: used by the file handling ReadInterface Function */
    file_mutex = CoCreateMutex( );
    // Create a message queue for storing the received characters
    raw_queue_id = CoCreateQueue(MailQueue,MAIL_QUEUE_SIZE,EVENT_SORT_TYPE_FIFO);
    if (raw_queue_id == E_CREATE_FAIL){
    	printf("Cqfail !\n");
    }
    else{
    	printf("QID%d\n", raw_queue_id);
    }

    sftmr = CoCreateTmr(TMR_TYPE_PERIODIC, 1,1, TmrCallBack);
    CoStartTmr (sftmr);
    CoStartOS ();			    /*!< Start multitask	           */


   while (1);                /*!< The code don''t reach here	   */
}



