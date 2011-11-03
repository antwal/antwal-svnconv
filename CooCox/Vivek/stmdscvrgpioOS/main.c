//void GPIO_example(void);
#include<stm32_pio.h>

#include <stdio.h>
#include <string.h>
#include <CoOS.h>			              /*!< CoOS header file	         */
#include <stdio.h>


/*---------------------------- Symbol Define -------------------------------*/
#define STACK_SIZE_DEFAULT 100             /*!< Define a Default task size */

unsigned int a,b,c,d;
unsigned int hours;
unsigned char minutes, seconds;

//attach and initilize the leds on stm32 board

COX_PIO_Dev LED0 = COX_PIN(2,8);
COX_PIO_Dev LED1 = COX_PIN(2,9);


/*---------------------------- Variable Define -------------------------------*/
	OS_STK     task1_stk[STACK_SIZE_DEFAULT];	  /*!< Define "taskA" task stack */
	OS_STK     task2_stk[STACK_SIZE_DEFAULT];	  /*!< Define "taskB" task stack */
	OS_STK     task3_stk[STACK_SIZE_DEFAULT];	  /*!< Define "led" task stack   */
	OS_STK     task4_stk[STACK_SIZE_DEFAULT];	  /*!< Define "led" task stack   */
	OS_STK     SystemStatus_stk[STACK_SIZE_DEFAULT];	  /*!< Define "led" task stack   */
	OS_STK     HeartBeat_stk[STACK_SIZE_DEFAULT];	  /*!< Define "led" task stack   */

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
		hours = minutes = seconds = 0;
		uint32_t flag = 0;
		for (;;)
		{
			if(++seconds == 60)
			{
				seconds =0;
				if(++minutes == 60)
				{
					minutes=0;
					hours++;
				}

			}

			// Delay 1 second
			if(flag)
				pi_pio.Out(LED0,0);
			else
				pi_pio.Out(LED0,1);


			flag = ~flag;

			CoTickDelay (1000);
		}
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

	  for (;;)
	  {
		  a++;
		//  CoTickDelay (500);
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
	  for (;;)
	  {
		  b++;
		//CoTickDelay (10);
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
	  for (;;)
	  {
		  c++;
		//CoTickDelay (100);
	  }
	}

	/**
	 *******************************************************************************
	 * @brief       "System Status" task code
	 * @param[in]   None
	 * @param[out]  None
	 * @retval      None
	 * @par Description
	 * @details    Send out to UART0 the system running status
	 *******************************************************************************
	 */
	void SystemStatus (void* pdata)
	{
		char string[128];

	  for (;;)
	  {
		  ++string[0];
		  //CoTickDelay (125);
	  }
	}
	/**
	 *******************************************************************************
	 * @brief       "HeartBeat" task code
	 * @param[in]   None
	 * @param[out]  None
	 * @retval      None
	 * @par Description
	 * @details    Toggle P0.0 port pin which on my board has a led hanging on it.
	 *******************************************************************************
	 */
	void HeartBeat (void* pdata)
	{
	  for (;;)
	  {
		  pi_pio.Out(LED1, 1);      /* Output hign level to turn on LED0 */
		  CoTickDelay (1000);

		  pi_pio.Out(LED1, 0);      /* Output low level to turn off LED0 */
		  CoTickDelay (1000);
	  }
	}
int main(void)
{




	//Initilize the LED0 and LED1 structure
	pi_pio.Init(LED0);
	pi_pio.Init(LED1);

	//configure the port as o/p port
	pi_pio.Dir(LED0,1);
	pi_pio.Dir(LED1,1);

	/* Setup the microcontroller system. */
	//  SystemInit();  //normally done in startup cmsis boot file

	/*!< Initial CooCox CoOS          */
	CoInitOS();



    a=b=c=d=0;


    /*!< Create three tasks	*/
    CoCreateTask (task1,0,0,&task1_stk[STACK_SIZE_DEFAULT-1],STACK_SIZE_DEFAULT);
    CoCreateTask (task2,0,0,&task2_stk[STACK_SIZE_DEFAULT-1],STACK_SIZE_DEFAULT);
    CoCreateTask (task3,0,0,&task3_stk[STACK_SIZE_DEFAULT-1],STACK_SIZE_DEFAULT);
    CoCreateTask (task4,0,0,&task4_stk[STACK_SIZE_DEFAULT-1],STACK_SIZE_DEFAULT);
    CoCreateTask (SystemStatus,0,0,&SystemStatus_stk[STACK_SIZE_DEFAULT-1],STACK_SIZE_DEFAULT);
    CoCreateTask (HeartBeat,0,0,&HeartBeat_stk[STACK_SIZE_DEFAULT-1],STACK_SIZE_DEFAULT);

    CoStartOS ();			    /*!< Start multitask	           */


    while (1);                /*!< The code don''t reach here	   */

}


