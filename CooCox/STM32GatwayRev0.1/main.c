#include "cox_serial.h"
#include "STM32_USART.h"
#include <stm32_pio.h>
#include "stm32f10x.h"
#include "buffer.h"
#include "stdio.h"
#include <CoOS.h>			              /*!< CoOS header file	         */



#include <stm_spi_master.h>
#include "di_msd.h"

/*----------------------------------------------------------------------*/
	/* FatFs sample project for generic microcontrollers (C)ChaN, 2010      */
	/*----------------------------------------------------------------------*/
//#include "Type.h"
#include "ff.h"
#include "diskio.h"
#include "modem.h"
#include "http.h"
#include "WSNPacket.h"
// Basestaion ID
uint8_t BaseStnId = 11;


/*---------------------------- Symbol Define -------------------------------*/
#define STACK_SIZE_DEFAULT 100             /*!< Define a Default task size */
//#define STACK_SIZE_DEFAULT1 400             /*!< Define a Default task size */


/*---------------------------- Variable Define -------------------------------*/
	//OS_STK     task1_stk[STACK_SIZE_DEFAULT];	  /*!< Define "taskA" task stack */
	OS_STK     task2_stk[300];	  /*!< Define "taskB" task stack */
	OS_STK     task3_stk[STACK_SIZE_DEFAULT+400];	  /*!< Define "led" task stack   */
	//OS_STK     task4_stk[STACK_SIZE_DEFAULT];	  /*!< Define "led" task stack   */



/*-----------------------------SD card Variable-----------------------------*/
MSD_Dev sd_var;
MSD_Dev *sd= &sd_var;							// MSD instance

#define MaxRx   100     			// Maximum size of receive buffer
#define MaxTx   100      			// Maximum size of transmit buffer


//cBuffer recvBuffer;
//unsigned char buffer[50];
cBuffer modem_buffer;								// Receive Buffer for modem
unsigned char mBuffer[MaxRx];



//Decleration of   serial Ports
COX_SERIAL_PI *myUSART1 = &pi_serial1;
COX_SERIAL_PI *myUSART2 = &pi_serial2;
extern COX_SERIAL_PI *myUSART3;

uint32_t TIME_TICK;									// 10 millseconds counter
void TIME_SET(uint16_t a){ TIME_TICK=a;}                      	// Set 10 millisecond counter to value 'a'


//attach and initilize the leds on stm32 board
COX_PIO_Dev LED0 = COX_PIN(2,8);
COX_PIO_Dev LED1 = COX_PIN(2,9);

//Usart event flag
OS_FlagID flag;

//The mutex is used to get mutual access to the data file  storing the WSN data
OS_MutexID file_mutex;

//Used to get the mutual access to GSM Gprs Modem
OS_MutexID modem_mutex;

//Used to get the mutual access to the Uart2 used for printf
OS_MutexID printf_mutex;

//Queue for Processing the data recieved
#define MAIL_QUEUE_SIZE 8
OS_EventID raw_queue_id;				// Queue for raw packet forwading between task 1 and 2
OS_EventID sd_queue_id;					// Queue for data packet forwarding between task 2 and 3
void *MailQueue[MAIL_QUEUE_SIZE];
void *SDQueue[MAIL_QUEUE_SIZE];

extern void Read_Data(unsigned char );
extern char* wsnPacketDecoding(void );
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


void USART1_IRQHandler(void)
{
	char ch;
	static char count = 0;
	StatusType result;
	CoEnterISR ();

	//RXNE interrupt occured
	//printf("uart%x\n\r",USART1->SR);
	if((USART1->SR & 0x20) != (u16)RESET )
	{
		//count ++;
		ch = (USART1->DR & (us16)0x01FF);
		//printf("%x\t",ch);
		Read_Data(ch);

	}
	CoExitISR ( );
}



/* Used For printf function*/
void pchar(unsigned char c)
{
	USART2->DR =  (c & (us16)0x01FF);
	while (!(USART2->SR & 0x0080));
}


void initSerial(void){
	//bufferInit(&recvBuffer, buffer, 50);

	//Initilize the buffer for Modem
	bufferInit(&modem_buffer, mBuffer, MaxRx);

	// For mote
	//myUSART1->Init(57600);
	//myUSART1->Cfg( COX_SERIAL_INT_CONF, RXNE_ENABLE,0);


	//Usart for printf-debugging purpose
	myUSART2->Init(115200);

	//Usart for communication with the Modem
	myUSART3->Init(9600);

	myUSART3->Cfg( COX_SERIAL_INT_CONF, RXNE_ENABLE,0);

	//enable the interrupts for usart3
	NVIC_Configuration_uart(myUSART3);
}


void TmrCallBack(void)
{
	TIME_TICK ++;
}
/**
 *
	 *******************************************************************************
	 * @brief       "taskA" task code
	 * @param[in]   None
	 * @param[out]  None
	 * @retval      None
	 * @par Description
	 * @details    Just a task example of a clock
	 *
	 *******************************************************************************
*/
	void task1 (void* pdata)
	{

	}//end task 1


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
		OS_TCID sftmr;
		mdmIface modm;
		sftmr = CoCreateTmr(TMR_TYPE_PERIODIC,
		                                  1,
		                                  1,
		                                  TmrCallBack);
		CoStartTmr (sftmr);
		TIME_SET(0);
		uint8_t lclbuff[100];
		FATFS fatfs;			/* File system object */
		FRESULT rc;				/* Result code */
		FIL fil1, fil2;				/* File object */
		uint8_t res;
		uint16_t br, bw;

		uint8_t tcpport[4]= "80";
		//uint8_t tcpaddr[20] = "14.99.68.74";
		uint8_t tcpaddr[20] = "14.96.195.248";

		server tcp;

		tcp.port = tcpport;
		tcp.addr = tcpaddr;

		sdConfig();
		ntp_time(&modm);


		/*
		 *  If send.xml file exists that means last uploading was unsuccessful.
		 *  so  first upload the send.xml data of previous failed
		 *  upload trial.
		 * 	If file is not present that means last upload is successful
		 * 	so rename the store.xml to send.xml and try to upload.
		 *  once send.xml is uploaded, append the send.xml to alldata.xml.
		 *  Then delete the send.xml file.
		 */
		f_mount(0, &fatfs);		/* Register volume work area (never fails) */

		rc = f_open(&fil1, "./root/send.xml", FA_READ);
		f_close(&fil1);
		if(rc == FR_NO_FILE)		// If send.xml file does not exists
		{
			CoEnterMutexSection(file_mutex);
			rc = f_rename("./root/store.xml", "./root/send.xml");
			printf("rename=%d\n\r",rc);
			CoLeaveMutexSection(file_mutex);
			f_mount(0, NULL);		/* UnRegister volume work area (never fails) */

		}
		else
		{
			printf("file present=%d\n\r",rc);
			f_mount(0, NULL);		/* UnRegister volume work area (never fails) */
			rc = uploadFile(&modm, "./root/send.xml", &tcp);
		}

		// If file is uploaded successfully
		if(rc == SUCCESS)
		{
			f_mount(0, &fatfs);		/* Register volume work area (never fails) */
			printf("Open a send.xml to read\r\n");
			rc = f_open(&fil1, "./root/send.xml", FA_READ );
			if (rc) die(rc);

			printf("\r\nWrite to file alldata.xml\r\n");
			rc = f_open(&fil2, "./root/alldata.xml", FA_WRITE|FA_READ);//| FA_CREATE_ALWAYS);
			if (rc) die(rc);
			if( rc == 4)
			{
				printf("Creating alldata.xml\n\r");
				rc = f_open(&fil2, "./root/alldata.xml", FA_WRITE|FA_READ| FA_CREATE_ALWAYS);
				if (rc) die(rc);
			}

			// If the alldata.xml has already some data present
			if(!(f_size(&fil2) == 0))
			{
				printf("appending data to alldata.xml\n\r");
				// Overwriting the Endtag
				res = f_lseek(&fil2, f_size(&fil2)- strlen(ENDTAG)-1);
				// Read after the head tag
				rc = f_read(&fil1, lclbuff, strlen(STARTTAG), &br);
				if (rc || !br) die(rc);
				for(res = 0; res < br;res++)
					printf(" %c",lclbuff[res]);

				rc = f_write(&fil2, "\t", 1,&bw);
				if (rc) die(rc);
			}
			//If nothing is present in the file
			else{
				printf("alldata.xml is empty\n\r");
				rc = f_write(&fil2, STARTTAG, strlen(STARTTAG), &bw);
				if (rc) die(rc);
			}

			// Start copying content from send.xml to alldata.xml
			do {
				printf("copying content\n\r");
				printf("File size=%d\n\r",f_size(&fil1));
				rc = f_read(&fil1, lclbuff, sizeof(lclbuff), &br);	/* Read a chunk of file */
				printf("rc=%d,br=%d\n\r",rc,br);
				if (rc || !br) break;								/* Error or end of file */
				for(res = 0;res < br ;res++)
					printf(" %c",lclbuff[res]);
				//res = f_lseek(&fil2, f_size(&fil2));

				rc = f_write(&fil2, lclbuff, br, &bw);
				if (rc) die(rc);
			}
			while(f_eof(&fil1)!= 1);

			rc = f_close(&fil1);
			if (rc) die(rc);

			rc = f_close(&fil2);
			if (rc) die(rc);

			printf("Deleting send.xml\n\r");
			f_unlink("./root/send.xml");		// Delete the file
			if (rc) die(rc);
			f_mount(0, NULL);		/* UnRegister volume work area (never fails) */
		}

		for (;;)
		  {
			  if(TIME_TICK > 200){
			   pi_pio.Out(LED1, 1);      /* Output hign level to turn on LED0 */
			  //CoTickDelay (100);
			  TIME_SET(0);
			  }

			  if(TIME_TICK == 100)
			  pi_pio.Out(LED1, 0);      /* Output low level to turn off LED0 */

			  CoTickDelay (100);
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
		sdConfig();
		  for (;;)
		  {
			  wsnPacketDecoding();

		  }
	}
	/**
	 *******************************************************************************
	 * @brief       "task4" task code
	 * @param[in]   None
	 * @param[out]  None
	 * @retval      None
	 * @par Description
	 * @details    task example to increment a variable
	 *******************************************************************************
	 */
	void task4 (void* pdata)
	{
		//StatusType result;
		//void *msg;

	  for (;;)
	  	  {

		 // wsnPacketDecoding();

	  	  }
	}







int main(void)
{
	OS_TID task_2,task_3;


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
	/*!< Initial CooCox CoOS          */
	CoInitOS();


    /*!< Create three tasks	*/
   // task_1 = CoCreateTask (task1,0,0,&task1_stk[STACK_SIZE_DEFAULT-1],STACK_SIZE_DEFAULT);
    task_2 = CoCreateTask (task2,0,0,&task2_stk[500-1],500);
    task_3 = CoCreateTask (task3,0,1,&task3_stk[STACK_SIZE_DEFAULT+400-1],STACK_SIZE_DEFAULT+400);
   // task_4 = CoCreateTask (task4,0,2,&task4_stk[STACK_SIZE_DEFAULT-1],STACK_SIZE_DEFAULT);

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
          	// Message queue for forwarding data packet from wsn decoding to SDcard writer task
          	sd_queue_id = CoCreateQueue(SDQueue,MAIL_QUEUE_SIZE,EVENT_SORT_TYPE_FIFO);
          	if (raw_queue_id == E_CREATE_FAIL){
          			printf("Cqfail\n");
          		}
          	else{
          			printf("QID%d\n", sd_queue_id);
          		}

    CoStartOS ();			    /*!< Start multitask	           */


   while (1);                /*!< The code don''t reach here	   */
}



