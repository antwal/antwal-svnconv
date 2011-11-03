#include "cox_serial.h"
#include "STM32_USART.h"
#include <stm32_pio.h>
#include "stm32f10x.h"
#include "buffer.h"
#include <stdio.h>
#include <CoOS.h>			              /*!< CoOS header file	         */


#include <stm_spi_master.h>
#include "di_msd.h"

/*----------------------------------------------------------------------*/
	/* FatFs sample project for generic microcontrollers (C)ChaN, 2010      */
	/*----------------------------------------------------------------------*/
//#include "Type.h"
#include "ff.h"
#include "diskio.h"



/*---------------------------- Symbol Define -------------------------------*/
#define STACK_SIZE_DEFAULT 200             /*!< Define a Default task size */
//#define STACK_SIZE_DEFAULT1 400             /*!< Define a Default task size */


/*---------------------------- Variable Define -------------------------------*/
	OS_STK     task1_stk[STACK_SIZE_DEFAULT];	  /*!< Define "taskA" task stack */
	OS_STK     task2_stk[100];	  /*!< Define "taskB" task stack */
	OS_STK     task3_stk[100];	  /*!< Define "led" task stack   */
	OS_STK     task4_stk[STACK_SIZE_DEFAULT];	  /*!< Define "led" task stack   */



/*-----------------------------SD card Variable-----------------------------*/
MSD_Dev sd_var;
MSD_Dev *sd= &sd_var;							// MSD instance

cBuffer recvBuffer;
unsigned char buffer[50];

//Decleration of   serial Ports
COX_SERIAL_PI *myUSART1 = &pi_serial1;
COX_SERIAL_PI *myUSART2 = &pi_serial2;

//attach and initilize the leds on stm32 board
COX_PIO_Dev LED0 = COX_PIN(2,8);
COX_PIO_Dev LED1 = COX_PIN(2,9);

//Usart event flag
OS_FlagID flag;

//Queue for Processing the data recieved
#define MAIL_QUEUE_SIZE 8
OS_EventID raw_queue_id;				// Queue for raw packet forwading between task 1 and 2
OS_EventID sd_queue_id;					// Queue for data packet forwarding between task 2 and 3
void *MailQueue[MAIL_QUEUE_SIZE];
void *SDQueue[MAIL_QUEUE_SIZE];

extern void Read_Data(unsigned char );
extern void wsnPacketDecoding(void );
extern FRESULT SdInterface(MSD_Dev *sd);

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
	sd->spi->Cfg(COX_SPI_CFG_RATE,SPI_BaudRatePrescaler_128,0);
	sd->spi->Cfg(COX_SPI_CFG_BITS,8,0);
	sd->spi->Cfg(COX_SPI_CFG_FSB,COX_MSPI_FSB_MSB,0);
	ret = sd->spi->Init(COX_SPI_MODE0, 128);

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
		count ++;
		ch = (USART1->DR & (us16)0x01FF);
		bufferAddToEnd(&recvBuffer, ch);
		//if(count > 10){
			/* Set a flag that created by other test */
			result = isr_SetFlag (flag);
			count = 0;
		//}
		if (result != E_OK)
		{
		     if (result == E_SEV_REQ_FULL)
		     {
		          printf("Service request queue is full !\n");
		     }
		}
	}
	CoExitISR ( );
}

void pchar(unsigned char c)
{
	USART2->DR =  (c & (us16)0x01FF);
	while (!(USART2->SR & 0x0080));
}




void initSerial(void){
	bufferInit(&recvBuffer, buffer, 50);
	myUSART1->Init(57600);
	myUSART2->Init(115200);
	myUSART1->Cfg( COX_SERIAL_INT_CONF, RXNE_ENABLE,0);
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
		unsigned char ch;
		StatusType result;

	// Create a flag with mannual reset, initial state: 0
	      flag = CoCreateFlag (0, 0);
	      if (flag != E_OK){
	            if (flag == E_CREATE_FAIL){
	            	printf("Failed to create a flag!\n");
	            }
	      }
	      else{
	            printf("Flag ID : %d \n", flag);
	      }

	  // Create a message queue for storing the received characters
	      raw_queue_id = CoCreateQueue(MailQueue,MAIL_QUEUE_SIZE,EVENT_SORT_TYPE_FIFO);
      	  if (raw_queue_id == E_CREATE_FAIL){
                printf("Create a queue fail !\n");
      	  }
          else{
                printf("Queue ID : %d \n", raw_queue_id);
          }
      	// Message queue for forwarding data packet from wsn decoding to SDcard writer task
      	sd_queue_id = CoCreateQueue(SDQueue,MAIL_QUEUE_SIZE,EVENT_SORT_TYPE_FIFO);
      	if (raw_queue_id == E_CREATE_FAIL){
      			printf("Create a queue fail !\n");
      		}
      	else{
      			printf("Queue ID : %d \n", sd_queue_id);
      		}

		for(;;){
			// Waiting for a flag, time-out:indefinetely
			 	  pi_pio.Out(LED0, 1);      /*Output hign level to turn on LED0 */
			      result = CoWaitForSingleFlag (flag, 0);
			      pi_pio.Out(LED0, 0);      /*Output hign level to turn off LED0 */
			      if (result != E_OK){
			            if (result == E_INVALID_ID){
			                  printf("Invalid Flag ID !\n");
			            }
			            else if (result == E_CALL){
			                  printf("Error call in ISR !\n");
			            }
			            else if (result == E_TIMEOUT){
			                  printf("Time Out !\n");
			            }
			      }
			      else {
			            //process Flag here
		        	   if(!bufferIsNotFull(&recvBuffer)){
	        	       		printf("Buffer error \n\r");
	        	       		while(0);
	        	       	}
		        	   do{
			        		ch = bufferGetFromFront(&recvBuffer);
			        		result = CoClearFlag (flag);
			        		if (result != E_OK){
			        			if (result == E_INVALID_ID){
			        				printf("Invalid flag ID !\n");
			        			}
			        		}
			        		//printf("\t%x ",ch);
			        		//put the messaage in the queue
			        		 Read_Data(ch);

		        	   }while(bufferDataAvail(&recvBuffer));


			      }

		}//end for

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

		  for (;;)
		  {
			  pi_pio.Out(LED1, 1);      /* Output hign level to turn on LED0 */
			  CoTickDelay (100);

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
			  SdInterface(sd);
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

		  wsnPacketDecoding();

	  	  }
	}







int main(void)
{
	//Initilize serial configuration
	initSerial();

	//Initilize the LED0 and LED1 structure
	pi_pio.Init(LED0);
	pi_pio.Init(LED1);

	//configure the port as o/p port
	pi_pio.Dir(LED0,1);
	pi_pio.Dir(LED1,1);

	/*!< Initial CooCox CoOS          */
	CoInitOS();


    /*!< Create three tasks	*/
    CoCreateTask (task1,0,0,&task1_stk[STACK_SIZE_DEFAULT-1],STACK_SIZE_DEFAULT);
    CoCreateTask (task2,0,1,&task2_stk[100-1],100);
    CoCreateTask (task3,0,2,&task3_stk[100-1],100);
    CoCreateTask (task4,0,3,&task4_stk[STACK_SIZE_DEFAULT-1],STACK_SIZE_DEFAULT);


    CoStartOS ();			    /*!< Start multitask	           */


   while (1);                /*!< The code don''t reach here	   */
}



