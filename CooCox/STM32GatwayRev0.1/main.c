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
#include "powermgmnt.h"
#include "power.h"
#include "task.h"
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
// used in system check
__IO uint8_t chk[2];

// Debug structure for tasks
extern dogDebug myDogDebug[];
extern uint32_t dogStatus;

/*-----------------------------SD card Variable-----------------------------*/
MSD_Dev sd_var;
MSD_Dev *sd= &sd_var;							// MSD instance



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
extern void* wsnPacketDecoding(void* dptr );
void * setTaskWsnProfile(void);
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
	COX_PIO_Dev RST = COX_PIN(1,5);			// PORTB5
	COX_PIO_Dev SWRTS = COX_PIN(1,8);		// PORTB8 ; Software RTS
	COX_PIO_PI *PI = &pi_pio;

	modm.dtr_pin = DTR;
	modm.sw_rts = SWRTS;
	modm.reset_pin = RST;
	modm.pio = PI;

	modm.pio->Init(modm.dtr_pin);
	modm.pio->Dir(modm.dtr_pin,1);
	modm.pio->Init(modm.sw_rts);
	modm.pio->Dir(modm.sw_rts,1);
	modm.pio->Out(modm.sw_rts, 1);			// Keeping it LOW = 1

	modm.pio->Init(modm.reset_pin);
	modm.pio->Out(modm.reset_pin, 0);		// Pull up reset pin
	modm.pio->Dir(modm.reset_pin,1);
	modm.pio->Out(modm.reset_pin, 0);		// Pull up reset pin

}

void powerconfig(void)
{
	pi_spi2.Cfg(COX_SPI_CFG_BITS,8,0);
	pi_spi2.Cfg(COX_SPI_CFG_FSB,COX_MSPI_FSB_MSB,0);
	pi_spi2.Init(COX_SPI_MODE0, SPI_BaudRatePrescaler_16);
	bufferInit(&spi_buff,spi_buffer,30);
}


void debugLedInit(void)
{
	//Initilize the LED0 and LED1 structure
	pi_pio.Init(LED0);
	pi_pio.Init(LED1);

	//configure the port as o/p port
	pi_pio.Dir(LED0,1);
	pi_pio.Dir(LED1,1);
}

void systemCheck(mdmIface *mdm)
{
	chk[0] = SDCheck();
	chk[1] = mdmCheck(mdm);
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
	myUSART1->Init(sysconfdup.baud_uart1);
	myUSART1->Cfg( COX_SERIAL_INT_CONF, RXNE_ENABLE,0);

	// For mote
	myUSART2->Init(sysconfdup.baud_uart2);
	myUSART2->Cfg( COX_SERIAL_INT_CONF, RXNE_ENABLE,0);

	//Usart for printf-debugging purpose
	myUSART3->Init(sysconfdup.baud_uart3);
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
		taskPwr *pptr;
		debug(LOG,"%s\n\r","taskUpload started");
		/*
		 * initilize the watch dog debugging structure
		 *	debug structure for task 2, periodicity 30 minutes
		 */
		WDG_initDebug(dptr , TCBRunning->taskID , 1800100, 1);

		pptr=(taskPwr *)setTaskUploadProfile();
		for(;;)
		{
			 pwrExecFunction(pptr, (void *)dptr );

			 while(PERIOD)
			 {
				 if(PERIOD < 30000 )				// 5 minutes
				 {
					 CoTickDelay (PERIOD);
					 PERIOD = 0;
				 }
				 else
				 {
					 PERIOD = PERIOD - 30000;
					 CoTickDelay(30000);
					 if(powerLevel < powerMedium)
					 {
						 PERIOD = 0;
					 }
				 }
				 WDG_setTaskState(dptr , WAIT);
			 }
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
		taskPwr *pptr;
		sdConfig();
		//debug structure for task 3, periodicity 2 minutes
		debug(LOG,"%s\n\r","taskWSN started");
		WDG_initDebug(dptr , 3 , 120000 , 1);
		pptr=(taskPwr *)setTaskWsnProfile();

		 for (;;){
			// wsnPacketDecoding(dptr);
			 pwrExecFunction(pptr, (void *)dptr );
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
	uint8_t tog = 1,count=0,pwrVar =0,pwrInterval = 4;
	systemCheck(&modm);
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

		  ////////////////////////////////////////////////////////////////
		  /* Resource status check */
		  // SD card is having some problem
		  // Toggle @ 5sec
		  if((chk[0] != 0) ){
			  //debug(CONSOLE,"%s%d\n\r","SD Problem=",chk[0]);
			  if(tog == 1)
			  {
				  count++;
				  pi_pio.Out(LED1,1);
				  if(count == 5)
				  {
					  tog = ~tog;
					  count =0;
				  }
			  }
			  else
			  {
				  pi_pio.Out(LED1,0);
				  count ++;
				  if(count == 2)
				  {
					  tog = ~tog;
					  count =0;
				  }
			  }
		  }
		 else
		// Modem is having some problem
		// Togle @ 1 sec
		if(chk[1] != 0){
			//debug(CONSOLE,"%s\n\r","Modem Problem");
			if(tog == 1){
				pi_pio.Out(LED1,1);
				tog = ~tog;
			}
			else{
				pi_pio.Out(LED1,0);
				tog = ~tog;
			}
		 }
		else{
			 pi_pio.Out(LED1,1);					// Switch off the LED
		}
/////////////////////////////////////////////////////////////////////////////

		  /* Power down will be implemented after this */
		  pwrVar++;
		  if(pwrVar >= pwrInterval)					// 20 Secs
		  {
			  pwrInterval = 20;
			  pwrVar = 0;
			  powerLevel = powerHandler();
			  pwrUpdateSwitchs(powerLevel);				// Check battery status

		  }
		  /*
		   * If modem is in use or not
		   * If it is in use wake up the modem
		   * else put modem in sleep
		   */
		  if(modm.lock == 1){
			  mdmWakeUp(&modm);
		  }else{
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

	uint8_t res, send[30], balChk=0;
	uint8_t cflag;//flag for command line
	uint16_t Bal = 255;
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
	debug(LOG, "%s\n\r","taskDebug started");

	// Default value to the run is 0 , in order to use the command line interface
	// a button press should change the state of this variable.
	Run = 1;

	for (;;) {
		cflag = 0;
		while(Run){
			if(cflag == 0 ){
				//TO DO
				//Turn on the debug LED ON
				debug(CONSOLE,"%s\n\r","In command line mode");
				cflag = 1;
			}
			// pass characters received on the uart (serial port)
			// into the cmdline processor
			while(bufferDataAvail(&cmdBuffer)){
				cmdlineInputFunc(bufferGetFromFront(&cmdBuffer));
				// run the cmdline execution functions
				cmdlineMainLoop();
			}
		}

		mdmLock(&modm);

		res = smsDebugInit(&modm);
		if(res == mdmOK)
			smsDebugLoop(&modm);
		if(balChk >= 20){
			mdmBalance(&modm, &Bal);
			debug(LOG, "Balance Low: Rs.%d :(",Bal);
			/*if(Bal < 10)
			{
				smsSend(&modm, (char*)&sysconfdup.err_phoneno[1],&send[0]);
			}*/
			balChk = 0;
		}
		else{
			balChk++;
		}

		mdmUnLock(&modm);

		// Polling Period 10 seconds
		CoTickDelay (1000);

	}
}

int main(void)
{
	OS_TCID sftmr;

	//copy the system configurations to the duplicate structure which is in ram
	sysconfdup = sysconf;

	debugLedInit();

	//Initilize serial configuration
	initSerial();

	sdConfig();
	// SD card plug in detection
	EXTIenable();
	//buttonEnable();

	powerconfig();

	// Initializing RTC clk
	RTC_Timer();
	// Initialise modem configuration
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

    //Used to get the mutual access to the printf logging function defined in debug.h
    printf_mutex = CoCreateMutex( );

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



