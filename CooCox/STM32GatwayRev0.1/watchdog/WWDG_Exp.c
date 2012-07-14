#include "stm32f10x_gpio.h"
#include "stm32f10x_rcc.h"
#include "stm32f10x_wwdg.h"
#include "misc.h"
#include "watchdog.h"

/***************************************************************************//**
 * Declare function prototypes
 ******************************************************************************/
void RCC_Configuration(void);
void NVIC_Configuration(void);
void GPIO_Configuration(void);
void WWDG_IRQHandler(void);


extern uint32_t feedDog;


/***************************************************************************//**
 * @brief  SysTick is configured to generate an interrupt every 262 ms.
 *         In the SysTick interrupt service routine (ISR), the WWDG counter
 *         is reloaded to prevent an WWDG reset. The EXTI Line is used to simulate
 *         a software failure: when the EXTI Line event is triggered (by pressing
 *         the TAMP push-button on the board), the corresponding interrupt is served.
 *         In the ISR, the LED(PB9)turns off and the EXTI line pending bit is not
 *         cleared. So the CPU executes the EXTI line ISR indefinitely and the
 *         SysTick ISR is never entered (WWDG counter not reloaded).
 *
 *         By naini -
 *         In this example no Systick timer is being used , instead of that early
 *         wakeup interrupt of watchdof is enabled and the dog is fed inside the
 *         wakeup handler.
 ******************************************************************************/
void WWDG_Exp(void)
{
    /* GPIO configuration */
    GPIO_Configuration();

#ifdef jh
    /* Check if the system has resumed from WWDG reset */
    if (RCC_GetFlagStatus(RCC_FLAG_WWDGRST) != RESET)
    { /* WWDGRST flag set */
        /* Turn on led connected to PC9 */
        GPIO_WriteBit(GPIOC, GPIO_Pin_9, Bit_SET);

        /* Clear reset flags */
        RCC_ClearFlag();
    }
    else
    { /* WWDGRST flag is not set */
        /* Turn off led connected to PC9 */
        GPIO_WriteBit(GPIOC, GPIO_Pin_9, Bit_RESET);
    }
#endif
    /* Configure EXTI Line9 to generate an interrupt on falling edge -----------*/
    //EXTI_Configuration();

    /* NVIC configuration --------------------------------------------------------*/
    NVIC_Configuration();

    /* WWDG configuration --------------------------------------------------------*/

    /* In Debug mode when cpu halts also halt watchdog clk
     * This is done by setting DBG_WWDG_STOP bit(9th bit) in DBGMCU_CR
     * register  whose address is 0xE0042004
     * (*( __IO uint32_t *)0xE0042004) |= (1<< 9);
     */

	#define DBGMCU_CR   	(*( __IO uint32_t *)0xE0042004)
	#define DBG_WWDG_STOP 	(1 << 9)

    //set the bit
    DBGMCU_CR  |= DBG_WWDG_STOP ;
    //clear the bit
    //DBGMCU_CR  &= ~DBG_WWDG_STOP ;


    /* Enable WWDG clock */
    RCC_APB1PeriphClockCmd(RCC_APB1Periph_WWDG, ENABLE);

    /* WWDG clock counter = (PCLK1/4096)/8 = 244 Hz (~4 ms)  */
    WWDG_SetPrescaler(WWDG_Prescaler_8);

    /* Set Window value to 0x41 */
    WWDG_SetWindowValue(0x7F);

    /* Enable WWDG and set counter value to 0x7F, WWDG timeout = ~4 ms * 64 = 262 ms */
    WWDG_Enable(0x7F);

    /* Clear EWI flag */
    WWDG_ClearFlag();

    /* Enable EW interrupt */
    WWDG_EnableIT();

}

/*******************************************************************************
 * @brief : RCC_Configuration
 *          Configures the different system clocks.
 *******************************************************************************/
void RCC_Configuration(void)
{
    ErrorStatus HSEStartUpStatus;
    /* RCC system reset(for debug purpose) */
    RCC_DeInit();

    /* Enable HSE */
    RCC_HSEConfig(RCC_HSE_ON);

    /* Wait till HSE is ready */
    HSEStartUpStatus = RCC_WaitForHSEStartUp();

    if (HSEStartUpStatus == SUCCESS)
    {
        /* HCLK = SYSCLK */
        RCC_HCLKConfig(RCC_SYSCLK_Div1);

        /* PCLK2 = HCLK */
        RCC_PCLK2Config(RCC_HCLK_Div1);

        /* PCLK1 = HCLK */
        RCC_PCLK1Config(RCC_HCLK_Div2);

        /* Select HSE as system clock source */
        RCC_PLLConfig(0x00010000, RCC_PLLMul_3);

        /* Enable PLL */
        RCC_PLLCmd(ENABLE);

        /* Wait till PLL is ready */
        while(RCC_GetFlagStatus(RCC_FLAG_PLLRDY) == RESET){}

        /* Select PLL as system clock source */
        RCC_SYSCLKConfig(RCC_SYSCLKSource_PLLCLK);

        /* Wait till HSE is used as system clock source */
        while (RCC_GetSYSCLKSource() != 0x08){}
    }

    /* Enable GPIOC, GPIOB and AFIO clock */
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC | RCC_APB2Periph_GPIOB
            | RCC_APB2Periph_AFIO, ENABLE);

}

/*******************************************************************************
 * @brief  : GPIO_Configuration
 *           Configures the different GPIO ports.
 *******************************************************************************/
void GPIO_Configuration(void)
{
    GPIO_InitTypeDef GPIO_InitStructure;

    /* Configure PC8 and PC9 as Output push-pull */
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8 | GPIO_Pin_9;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_Init(GPIOC, &GPIO_InitStructure);

    /* Configure PC13 as input floating (EXTI Line13) */
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_13;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
    GPIO_Init(GPIOC, &GPIO_InitStructure);
}


/*******************************************************************************
 * @brief : NVIC_Configuration
 *          Configures NVIC and Vector Table base location.
 *******************************************************************************/
void NVIC_Configuration(void)
{
    NVIC_InitTypeDef NVIC_InitStructure;

    /* 2 bits for Preemption Priority and  2 bits for Sub Priority */
    NVIC_PriorityGroupConfig(NVIC_PriorityGroup_0);
    NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;
    NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
    NVIC_Init(&NVIC_InitStructure);

    /* Set up the priority of watch dog interrupt  */
    NVIC_InitStructure.NVIC_IRQChannel = WWDG_IRQn;
    NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;
    NVIC_Init(&NVIC_InitStructure);

}



/***************************************************************************//**
* @brief : WWDG_IRQHandler
*          This function handles WWDG interrupt request.
*******************************************************************************/
// Currently it's not used; Feeding of the watch dog is done in tmrCallback function of systick
void WWDG_IRQHandler(void)
{

		WWDG_SetCounter(0x7F);
	    /* Clear EWI flag */
	    WWDG_ClearFlag();

	    /* Toggle led connected to PC9 */
	  //  GPIO_WriteBit(GPIOC, GPIO_Pin_9, (BitAction)(1-GPIO_ReadOutputDataBit(GPIOB, GPIO_Pin_9)));
}



