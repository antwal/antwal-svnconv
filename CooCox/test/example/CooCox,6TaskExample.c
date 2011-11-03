void function()
{

	// Obviously, you not going to call this function, remove the wraper arround this and use it as you main app. 

	/*---------------------------- Inlcude ---------------------------------------*/
	#include "lpc_types.h"
	#include "system_LPC17xx.h"
	#include "lpc17xx_uart.h"
	#include "lpc17xx_pinsel.h"
	#include "lpc17xx_gpio.h"
	#include "lpc17xx_clkpwr.h"
	#include "lpc_lowlayer.h"
	#include "lpc_pio.h"
	//#include "lpc_serial.h"
	#include <stdio.h>
	#include <string.h>
	#include <CoOS.h>			              /*!< CoOS header file	         */
	#include <stdio.h>


	/*---------------------------- Symbol Define -------------------------------*/
	#define STACK_SIZE_DEFAULT 512              /*!< Define a Default task size */

	unsigned int a,b,c,d;

	LPC_UART_TypeDef *UARTx = (LPC_UART_TypeDef *)LPC_UART0;
	COX_PIO_Dev LED0 = COX_PIN(0, 0);     /* Define a LED assigned to P2.5 */

	unsigned int hours;
	unsigned char minutes, seconds;

	/*---------------------------- Variable Define -------------------------------*/
	OS_STK     task1_stk[STACK_SIZE_DEFAULT];	  /*!< Define "taskA" task stack */
	OS_STK     task2_stk[STACK_SIZE_DEFAULT];	  /*!< Define "taskB" task stack */
	OS_STK     task3_stk[STACK_SIZE_DEFAULT];	  /*!< Define "led" task stack   */
	OS_STK     task4_stk[STACK_SIZE_DEFAULT];	  /*!< Define "led" task stack   */
	OS_STK     SystemStatus_stk[STACK_SIZE_DEFAULT];	  /*!< Define "led" task stack   */
	OS_STK     HeartBeat_stk[STACK_SIZE_DEFAULT];	  /*!< Define "led" task stack   */
	/**
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
		  CoTickDelay (1);
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
		CoTickDelay (10);
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
		CoTickDelay (100);
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
		  //	printf("Tasks: %5u - %5u - %5u-%5u\r\n",a,b,c,d++);

		  sprintf(string,"Tasks: %5u - %5u - %5u - %5u  --  Time: %06u:%02u:%02u\r\n",a,b,c,d++,hours,minutes,seconds);
		  UART_Send(UARTx, (uint8_t *)string, strlen(string), BLOCKING);

		  CoTickDelay (125);
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
		  pi_pio.Out(LED0, 1);      /* Output hign level to turn on LED0 */
		  CoTickDelay (250);

		  pi_pio.Out(LED0, 0);      /* Output low level to turn off LED0 */
		  CoTickDelay (250);
	  }
	}
	/**
	 *******************************************************************************
	 * @brief       "UART_PrintExp" task code
	 * @param[in]   None
	 * @param[out]  None
	 * @retval      None
	 * @par Description
	 * @details    Initialize the Uarts
	 *******************************************************************************
	 */
	void UART_PrintExp(void)
	{

		/* UART Configuration structure variable */
		UART_CFG_Type UARTConfigStruct;
		/* UART FIFO configuration Struct variable */
		UART_FIFO_CFG_Type UARTFIFOConfigStruct;
		/* Pin configuration for UART0 */
		PINSEL_CFG_Type PinCfg;

		if((uint32_t)UARTx == (uint32_t)LPC_UART0) {
			/*
			 * Initialize UART0 pin connect
			 */
			PinCfg.Funcnum = 1;
			PinCfg.OpenDrain = 0;
			PinCfg.Pinmode = 0;
			PinCfg.Pinnum = 2;
			PinCfg.Portnum = 0;
			PINSEL_ConfigPin(&PinCfg);
			PinCfg.Pinnum = 3;
			PINSEL_ConfigPin(&PinCfg);
		}
		else if ((uint32_t)UARTx == (uint32_t)LPC_UART1) {
			/*
			 * Initialize UART1 pin connect
			 */
			PinCfg.Funcnum = 2;
			PinCfg.OpenDrain = 0;
			PinCfg.Pinmode = 0;
			PinCfg.Pinnum = 0;
			PinCfg.Portnum = 2;
			PINSEL_ConfigPin(&PinCfg);
			PinCfg.Pinnum = 1;
			PINSEL_ConfigPin(&PinCfg);
		}

		/* Initialize UART Configuration parameter structure to default state:
		 * Baudrate = 9600bps
		 * 8 data bit
		 * 1 Stop bit
		 * None parity
		 */
		UART_ConfigStructInit(&UARTConfigStruct);

		/* Set Baudrate to 115200 */
		UARTConfigStruct.Baud_rate = 115200;

		/* Initialize UART0 peripheral with given to corresponding parameter */
		UART_Init(UARTx, &UARTConfigStruct);

		/* Initialize FIFOConfigStruct to default state:
		 * 				- FIFO_DMAMode = DISABLE
		 * 				- FIFO_Level = UART_FIFO_TRGLEV0
		 * 				- FIFO_ResetRxBuf = ENABLE
		 * 				- FIFO_ResetTxBuf = ENABLE
		 * 				- FIFO_State = ENABLE
		 */
		UART_FIFOConfigStructInit(&UARTFIFOConfigStruct);

		/* Initialize FIFO for UART0 peripheral */
		UART_FIFOConfig(UARTx, &UARTFIFOConfigStruct);

		/*  Enable UART Transmit */
		UART_TxCmd(UARTx, ENABLE);

	}
	/**
	 *******************************************************************************
	 * @brief		main function
	 * @param[in] 	None
	 * @param[out] 	None
	 * @retval		None
	 *******************************************************************************
	 */
	int main (void)
	{
		//Initialize the system stuff
		SystemInit();

		/*!< Initial CooCox CoOS          */
		CoInitOS();

		// Set up the Uart
		UART_PrintExp();

		// Configure the I/O pin being used
		pi_pio.Init(LED0);          /* Initializes the PIO */
		pi_pio.Dir(LED0, 1);        /* Direction : Output */


	    a=b=c=d=0;


	    /*!< Create three tasks	*/
	    CoCreateTask (task1,0,0,&task1_stk[STACK_SIZE_DEFAULT-1],STACK_SIZE_DEFAULT);
	    CoCreateTask (task2,0,1,&task2_stk[STACK_SIZE_DEFAULT-1],STACK_SIZE_DEFAULT);
	    CoCreateTask (task3,0,2,&task3_stk[STACK_SIZE_DEFAULT-1],STACK_SIZE_DEFAULT);
	    CoCreateTask (task4,0,3,&task4_stk[STACK_SIZE_DEFAULT-1],STACK_SIZE_DEFAULT);
	    CoCreateTask (SystemStatus,0,4,&SystemStatus_stk[STACK_SIZE_DEFAULT-1],STACK_SIZE_DEFAULT);
	    CoCreateTask (HeartBeat,0,5,&HeartBeat_stk[STACK_SIZE_DEFAULT-1],STACK_SIZE_DEFAULT);



	    CoStartOS ();			    /*!< Start multitask	           */


	    while (1);                /*!< The code don''t reach here	   */
	}


	
}