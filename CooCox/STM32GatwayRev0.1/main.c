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
#include "ff.h"
#include "diskio.h"
#include "modem.h"
#include "WSNPacket.h"
#include "cmdline.h"
#include "vt100.h"
#include "command.h"
#include "config.h"
#include "http.h"
#include "string.h"
#include "debug.h"

//------------------------Debug task variables for cmdline--------------------------

/* Variable used for command line   */
volatile uint8_t Run;
uint8_t debug_buffer[15];
cBuffer cmdBuffer;

//structure containing system configurations
extern struct config sysconf;
extern struct config sysconfdup ;



// This flag is set in RTime.c; if restart is due to Watchdog
uint8_t Dog = 0;

// Debug structure for tasks
extern dogDebug myDogDebug[];
extern uint32_t dogStatus;

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
	COX_PIO_Dev CS = COX_PIN(2,7);				// PORTC7
	COX_PIO_Dev SDD = COX_PIN(2,10);			// PORTC10
	COX_SPI_PI *SPI = &pi_spi1;
	COX_PIO_PI *PI = &pi_pio;


	sd-> cs_pin = CS;
	sd-> sd_detect = SDD;
	sd-> pio = PI;
	sd-> spi = SPI;

	sd->pio->Init(sd->cs_pin);
	sd->pio->Init(sd->sd_detect);
	sd->pio->Dir(sd->cs_pin,1);
	sd->pio->Dir(sd->sd_detect,0);

	sd->pio->Cfg(sd->sd_detect,1,0,0);			// Pull up

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

/**
  * @brief  This handler is for handling command line uart
  * @param  None
  * @retval None
  */

void USART3_IRQHandler(void)
{
	char data;
	CoEnterISR ();
    //if ((USART3->SR & USART_FLAG_RXNE) != (u16)RESET)
	if ((USART3->SR & 0x20) != (u16)RESET)
	{
			//do something with the recieved data
    		data = USART3->DR ;
    		if(bufferIsNotFull(&cmdBuffer)){
    			bufferAddToEnd(&cmdBuffer, (char)data);
    		}
    		else if(( USART3->SR & 0x08) != (u16)RESET ){		// Handling overrun error
    			data = (USART3->DR & (us16)0x01FF);
    		}

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

	//Usart for communication with the Modem
	myUSART1->Init(115200);
	myUSART1->Cfg( COX_SERIAL_INT_CONF, RXNE_ENABLE,0);

	// For mote
	myUSART2->Init(57600);
	myUSART2->Cfg( COX_SERIAL_INT_CONF, RXNE_ENABLE,0);

	//Usart for printf-debugging purpose
	myUSART3->Init(115200);
	myUSART3->Cfg( COX_SERIAL_INT_CONF, RXNE_ENABLE,0);



}

/*
 * 	This function increments a counter at each systick
 * 	It is used for the timeout
 */

void TmrCallBack(void)
{
	TIME_TICK ++;
}

	/**
	 *******************************************************************************
	 * @brief       "taskUpload" task code
	 * @param[in]   None
	 * @param[out]  None
	 * @retval      None
	 * @par Description
	 * @details    task example to increment a variable
	 *
	 *******************************************************************************
	 */
	void taskUpload (void* pdata)
	{
		dogDebug *dptr = (dogDebug *) pdata;
		char buff[16]= "0.0.0.0";
		modm.ip_addr = buff;
		uint8_t res, ntp_update =0;
		uint32_t br, bw;
		server tcp;

		TIME_SET(0);
		tcp.port ="80";
		tcp.addr = "14.96.145.172";

		sdConfig();

		debug(LOG,"%s\n\r","taskUpload started");
		WDG_setTaskState(dptr , NTP_TIME);
		mdmLock(&modm);
		res = ntp_time(&modm);
		mdmUnLock(&modm);

		/*
		 * initilize the watch dog debugging structure
		 *	debug structure for task 2, periodicity 30 minutes
		 */
		WDG_initDebug(dptr , TCBRunning->taskID , 1800000  , 1);
		for(;;)
		{
			mdmLock(&modm);					// Get modem lock
			ntp_update ++;
			if(ntp_update > 10){ 			// Update time after each 10 uploads
				ntp_update = 0;
				WDG_setTaskState(dptr , NTP_TIME);
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
				debug(CONSOLE,"rename=%d\n\r",rc);

				if(rc == 0){
					WDG_setTaskState(dptr , UPLOADING);
					rc = uploadFile(&modm, "./root/send.xml", &tcp);
				}
				else if (rc == 4){
					// Store.xml is not present
					debug(CONSOLE,"%s\n\r","store.xml not present");
				}
				else{
					// Some problem with SDcard
					debug(LOG,"%s\n\r","Problem With SD card");
				}
			}
			else if(rc == FR_OK)
				{
					WDG_setTaskState(dptr , UPLOADING);
					debug(CONSOLE,"%s\n\r","send.xml present");
					rc = uploadFile(&modm, "./root/send.xml", &tcp);
				}
				else if(rc == 3){
					debug(LOG,"%s\n\r","SD card not present");
				}
				else{
					debug(LOG,"%s\n\r","Some problem With SDCard");
				}

				// Modem Work is over; Release it
				mdmUnLock(&modm);

				WDG_setTaskState(dptr , MODEM_FREE);
				// If file is uploaded successfully
				if(rc == mdmOK)
				{
					// Appending send.xml data to alldata.xml
					debug(CONSOLE,"%s\n\r","Open read send.xml");
					rc = f_open(&send, "./root/send.xml", FA_READ );
					if (rc) die(rc);
					f_sync(&send);

					debug(CONSOLE,"%s\n\r","Write alldata.xml");
					rc = f_open(&alldata, "./root/alldata.xml", FA_WRITE|FA_READ);//| FA_CREATE_ALWAYS);
					if (rc) die(rc);
					f_sync(&alldata);

					if( rc == FR_NO_FILE)
					{
						debug(CONSOLE,"%s\n\r","Creating alldata.xml");
						rc = f_open(&alldata, "./root/alldata.xml", FA_WRITE|FA_READ| FA_CREATE_ALWAYS);
						if (rc) die(rc);
						f_sync(&alldata);
					}

					// If the alldata.xml has already some data present
					if(!(f_size(&alldata) == 0))
					{
						debug(CONSOLE,"%s\n\r","append alldata.xml");
						// Overwriting the Endtag
						res = f_lseek(&alldata, f_size(&alldata)- strlen(ENDTAG)-1);
						// Read after the head tag
						rc = f_read(&send, lclbuff, strlen(STARTTAG)+2, &br);
						if (rc || !br) die(rc);
						//for(res = 0; res < br;res++)
							//printf(" %c",lclbuff[res]);
						rc = f_write(&alldata, "\t", 1,&bw);
						if (rc) die(rc);
						f_sync(&alldata);
					}
					//If nothing is present in the file
					else{
						debug(CONSOLE,"%s\n\r","alldata.xml empty");
						rc = f_write(&alldata, STARTTAG, strlen(STARTTAG), &bw);
						if (rc) die(rc);
						f_sync(&alldata);
					}

					debug(LOG,"%s\n\r","copying content");
					// Start copying content from send.xml to alldata.xml
					do {
						WDG_setTaskState(dptr , APPEND);
						rc = f_read(&send, lclbuff, sizeof(lclbuff), &br);	/* Read a chunk of file */

						if (rc || !br) break;								/* Error or end of file */
						rc = f_write(&alldata, lclbuff, br, &bw);
						if (rc) break;
						f_sync(&alldata);
					}
					while(f_eof(&send)!= 1);

					rc = f_close(&send);
					if (rc) die(rc);

					rc = f_close(&alldata);
					if (rc) die(rc);

					debug(CONSOLE,"%s\n\r","Deleting send.xml\n\r");
					f_unlink("./root/send.xml");		// Delete the file

				}
			  WDG_setTaskState(dptr , WAIT);
			  CoTickDelay (12000);		// For 2 MInute
		 }

	}


	/**
	 *******************************************************************************
	 * @brief       "taskWSN" task code
	 * @param[in]   None
	 * @param[out]  None
	 * @retval      None
	 * @par Description
	 * @details    task example to increment a variable
	 *******************************************************************************
	 */

	void taskWSN (void* pdata)
	{
		dogDebug *dptr = (dogDebug *) pdata;
		sdConfig();
		//debug structure for task 3, periodicity 2 minutes
		debug(LOG,"%s\n\r","taskWSN started");
		WDG_initDebug(dptr , 3 , 120000 , 1);
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
	 * @details    This function use to monitor  "taskUpload" and "taskWSN".
	 *******************************************************************************
	 */

	void taskWatchDog (void* pdata){
	//dogDebug *dptr;
	debugInit();
	mdmLock(&modm);
	intimateState(&modm);// place some where else
	mdmUnLock(&modm);
	debug(LOG, "%s\n\r","taskWDOG started");
	/* configure and start the watch dog timer */
	IWDG_dogStart();

	for (;;) {
	  /* perform the sanity check  */
		  if(dogStatus == 1){
			  WDG_dogCheck();
		  }
		  else{
		    //feed the dog
		    IWDG_ReloadCounter();
		  }

		  /*
		   * If modem is in use or not
		   * If it is in use wake up the modem
		   * else put modem in sleep
		   */
		  if(modm.lock == 1)
		  {
			  mdmWakeUp(&modm);
		  }else
		  {
			  mdmSleep(&modm);
		  }

		  CoTickDelay (100); //delay of 1000 milli seconds
	}
}
/**
*******************************************************************************
* @brief       "DebugTask" task code
* @param[in]   None
* @param[out]  None
* @retval      None
* @par Description
* @details    This function use to monitor  "taskUpload" and "taskWSN".
*******************************************************************************
*/
void taskDebug (void* pdata){

	uint8_t res;
	//initialize the buffer that will be used for command
	bufferInit( &cmdBuffer, &debug_buffer[0], sizeof(debug_buffer) );

	// initialize vt100 terminal
	vt100Init();
	vt100ClearScreen();
	vt100SetCursorPos(1,0);
	// initialize cmdline system
	cmdlineInit();
	// direct cmdline output to uart (serial port function)
	cmdlineSetOutputFunc(pchar);
	// add commands to the command database
	addAllcommand();

	// send a CR to cmdline input to stimulate a prompt
	cmdlineInputFunc('\r');
	// set state to run
	Run = 1;

	for (;;) {
/*		while(Run){
			// pass characters received on the uart (serial port)
			// into the cmdline processor
			while(bufferDataAvail(&cmdBuffer)){
				cmdlineInputFunc(bufferGetFromFront(&cmdBuffer));
				// run the cmdline execution functions
				cmdlineMainLoop();
			}
		}
		//printf("Exited From the app...\r");

 */
		mdmLock(&modm);
		res = smsDebugInit(&modm);
		if(res == mdmOK)
			smsDebugLoop(&modm);
		mdmUnLock(&modm);

		// Polling Period
		CoTickDelay (1000);

	}
}

int main(void)
{
	OS_TCID sftmr;

	//copy the system configurations to the duplicate structure which is in ram
	sysconfdup = sysconf;

	//Initilize serial configuration
	initSerial();
	sdConfig();

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

    /*!< Create three tasks	*/
	WATCH = CoCreateTask (taskWatchDog,0,1,&watchdog_stk[STACK_SIZE_WATCHDOG-1],STACK_SIZE_WATCHDOG);
	UPLOAD = CoCreateTask (taskUpload,&myDogDebug[0],3,&upload_stk[STACK_SIZE_UPLOAD-1],STACK_SIZE_UPLOAD);
  	WSN = CoCreateTask (taskWSN,&myDogDebug[1],2,&wsn_stk[STACK_SIZE_WSN-1],STACK_SIZE_WSN);
    DEBUG = CoCreateTask (taskDebug,0,4,&debug_stk[STACK_SIZE_DEBUG-1],STACK_SIZE_DEBUG);

    /* Create a mutex: used by the file handling ReadInterface Function */
    file_mutex = CoCreateMutex( );

    /* Mutex for modem*/
    mdmCreateLock(&modm);

    // Create a message queue for storing the received characters
    raw_queue_id = CoCreateQueue(MailQueue,MAIL_QUEUE_SIZE,EVENT_SORT_TYPE_FIFO);
    if (raw_queue_id == E_CREATE_FAIL){
    	debug(LOG,"%s\n\r","wsnqueuefail!");
    }

    sftmr = CoCreateTmr(TMR_TYPE_PERIODIC, 1,1, TmrCallBack);
    CoStartTmr (sftmr);
    CoStartOS ();			    /*!< Start multitask	           */


   while (1);                /*!< The code don''t reach here	   */
}



