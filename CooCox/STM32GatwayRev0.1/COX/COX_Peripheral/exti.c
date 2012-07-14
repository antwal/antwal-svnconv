/***************************************************************************//**
 * @file      : stm32_exti.c
 * @brief     : STM32xx EXTI Interface
 * @version   : V1.0
 * @date      : 2. March. 2011
 * @author    : CooCox
*******************************************************************************/
#include "exti.h"
#include "stm32f10x.h"


static EXTI_Handler stm32_exti_handler = COX_NULL;     /* !<Interrupt Handler */


/***************************************************************************//**
 * @brief     Get pointer to GPIO peripheral due to GPIO port
 * @param[in] portNum : Port Number value, should be in range from 0 to 6.
 * @return    Pointer to GPIO peripheral
*******************************************************************************/
static GPIO_TypeDef* STM32_GetGPIO(uint8_t port)
{
	GPIO_TypeDef* pGPIO = (void *)0;

	switch(port)
	{
		case 0: pGPIO = GPIOA; break;
		case 1: pGPIO = GPIOB; break;
		case 2: pGPIO = GPIOC; break;
		case 3: pGPIO = GPIOD; break;
		case 4: pGPIO = GPIOE; break;
		default: break;
	}
	return pGPIO;
}


/***************************************************************************//**
 * @brief     External Interrupt 0 Handler
 * @param[in] None
 * @return    None
*******************************************************************************/
void EXTI0_IRQHandler(void)
{
	/* Clear the interrupt */
	EXTI->PR |= EXTI_PR_PR0;

	if(stm32_exti_handler != COX_NULL)
	{
		stm32_exti_handler(COX_PIN(0,0));			// PA0
	}
}


/***************************************************************************//**
 * @brief     External Interrupt 1 Handler
 * @param[in] None
 * @return    None
*******************************************************************************/
void EXTI1_IRQHandler(void)
{
	/* Clear the interrupt */
	EXTI->PR |= EXTI_PR_PR1;

	if(stm32_exti_handler != COX_NULL)
	{

	}
}


/***************************************************************************//**
 * @brief     External Interrupt 2 Handler
 * @param[in] None
 * @return    None
*******************************************************************************/
void EXTI2_IRQHandler(void)
{
	/* Clear the interrupt */
	EXTI->PR |= EXTI_PR_PR2;

	if(stm32_exti_handler != COX_NULL)
	{

	}
}


/***************************************************************************//**
 * @brief     External Interrupt 3 Handler
 * @param[in] None
 * @return    None
*******************************************************************************/
void EXTI3_IRQHandler(void)
{
	/* Clear the interrupt */
	EXTI->PR |= EXTI_PR_PR3;

	if(stm32_exti_handler != COX_NULL)
	{

	}
}


/***************************************************************************//**
 * @brief     External Interrupt 4 Handler
 * @param[in] None
 * @return    None
*******************************************************************************/
void EXTI4_IRQHandler(void)
{
	/* Clear the interrupt */
	EXTI->PR |= EXTI_PR_PR4;

	if(stm32_exti_handler != COX_NULL)
	{

	}
}


/***************************************************************************//**
 * @brief     External Interrupt 9_5 Handler
 * @param[in] None
 * @return    None
*******************************************************************************/
void EXTI9_5_IRQHandler(void)
{
	/* Clear the interrupt */
	EXTI->PR |= EXTI_PR_PR5 | EXTI_PR_PR6 | EXTI_PR_PR7 | EXTI_PR_PR8 |  \
			EXTI_PR_PR9 ;

	if(stm32_exti_handler != COX_NULL)
	{
		stm32_exti_handler(COX_PIN(1, 9));
	}
}


/***************************************************************************//**
 * @brief     External Interrupt 15_10 Handler
 * @param[in] None
 * @return    None
*******************************************************************************/
void EXTI15_10_IRQHandler(void)
{
	/* Clear the interrupt */
	EXTI->PR |= EXTI_PR_PR10 | EXTI_PR_PR11 | EXTI_PR_PR12 | EXTI_PR_PR13 |  \
			EXTI_PR_PR14 | EXTI_PR_PR15 ;

	if(stm32_exti_handler != COX_NULL)
	{
		stm32_exti_handler(COX_PIN(2, 10));
	}
}


/***************************************************************************//**
 * @brief     Setup EXTI Interrupt Service Routine Call-Back Function
 * @param[in] handler : Pointer to the call-back function
 * @return    None
*******************************************************************************/
static void STM32_EXTI_Handler (EXTI_Handler handler)
{
	stm32_exti_handler = handler;

	/* enable NVIC */
	if(handler != COX_NULL)
	{
		NVIC_EnableIRQ(EXTI0_IRQn);
		NVIC_EnableIRQ(EXTI1_IRQn);
		NVIC_EnableIRQ(EXTI2_IRQn);
		NVIC_EnableIRQ(EXTI3_IRQn);
		NVIC_EnableIRQ(EXTI4_IRQn);
		NVIC_EnableIRQ(EXTI9_5_IRQn);
		NVIC_EnableIRQ(EXTI15_10_IRQn);
	}
	else
	{
		NVIC_DisableIRQ(EXTI0_IRQn);
		NVIC_DisableIRQ(EXTI1_IRQn);
		NVIC_DisableIRQ(EXTI2_IRQn);
		NVIC_DisableIRQ(EXTI3_IRQn);
		NVIC_DisableIRQ(EXTI4_IRQn);
		NVIC_DisableIRQ(EXTI9_5_IRQn);
		NVIC_DisableIRQ(EXTI15_10_IRQn);
	}
}


/***************************************************************************//**
 * @brief     Select Trigger mode
 * @param[in] pin : Specifie the EXTI line
 * @param[in] trigger : Specifie the trigger signal active mode, should be
 *              - COX_EXTI_NONE : None interrupt and event
 *              - COX_EXTI_EDGE_RISING : Rising edge interrupt and event
 *              - COX_EXTI_EDGE_FALLING : Falling edge interrupt and event
 *              - COX_EXTI_EDGE_RISING_FALLING : Both edge interrupt (Rising and Falling)
 * @return    COX_SUCCESS : Success
 *            COX_ERROR : Error, parament error
*******************************************************************************/
COX_Status STM32_EXTI_Trigger_Event_Interrupt (COX_PIN_Dev pin, uint8_t event)
{
	uint8_t port_num;
	uint8_t pin_num;

	port_num = COX_PORT_NUM(pin); /* Get Port Number */
	pin_num  = COX_PIN_NUM(pin);  /* Get Pin Number  */

	/* Clear Rising Falling edge configuration */
	EXTI->RTSR &= ~(EXTI_RTSR_TR0 << pin_num);
	EXTI->FTSR &= ~(EXTI_FTSR_TR0 << pin_num);

	switch(event) {

	case COX_EXTI_EDGE_RISING:

		/* Interrupt Enable  for Rising  Edge */
		EXTI->RTSR |= (EXTI_RTSR_TR0 << pin_num);

		break;

	case COX_EXTI_EDGE_FALLING:

      	/* Interrupt Enable  for Falling  Edge */
		EXTI->FTSR |= (EXTI_FTSR_TR0 << pin_num);

         break;

	case COX_EXTI_EDGE_RISING_FALLING:

      	/* Interrupt Enable  for Rising Edge */
		EXTI->RTSR |= (EXTI_RTSR_TR0 << pin_num);
      	/* Interrupt Enable for Falling Edge */
		EXTI->FTSR |= (EXTI_FTSR_TR0 << pin_num);

		break;

	default : return COX_ERROR;
	};

	return COX_SUCCESS;
}


/***************************************************************************//**
 * @brief     Initialize the EXTI line
 * @param[in] pin : Specifies the EXTI line
 * @return    COX_SUCCESS : Success
 *            COX_ERROR : Error, parament error
*******************************************************************************/
static COX_Status STM32_EXTI_Init (uint16_t pin)
{
	GPIO_TypeDef* pGPIO = (void *)0;
	uint8_t port_num;
	uint8_t pin_num;

	port_num = COX_PORT_NUM(pin); /* Get Port Number */
	pin_num  = COX_PIN_NUM(pin);  /* Get Pin Number  */

	pGPIO = STM32_GetGPIO(port_num);

	/* Enable GPIOA~E and AFIO clock */
  	RCC->APB2ENR |= ((RCC_APB2ENR_IOPAEN << port_num) | RCC_APB2ENR_AFIOEN) ;

  	/* Set Direction as input:GPIO_Mode_IN_FLOATING */
	if(pin_num > 7)
	{
		pGPIO->CRH &= ~(GPIO_CRH_MODE8 <<(pin_num - 8)*4);
		pGPIO->CRH |= (GPIO_CRH_CNF8_0 <<(pin_num - 8)*4);
	}
	else
	{
		pGPIO->CRL &= ~(GPIO_CRL_MODE0 << pin_num *4);
		pGPIO->CRL |= (GPIO_CRL_CNF0_0 << pin_num *4);
	}

	 /* Connect EXTI Line */
	AFIO->EXTICR[pin_num >> 0x02] |= (uint32_t)port_num <<((pin_num%4)*4);

	/* Enable interrupt mask */
	EXTI->IMR |= 1 << pin_num;

	/* Enable Event mask */
	EXTI->EMR |= 1 << pin_num;

	return COX_SUCCESS;
}


/***************************************************************************//**
 * Define STM32xx COX EXTI Interface based on GPIO
*******************************************************************************/
COX_EXTI_PI pi_exti = {
	STM32_EXTI_Handler,
	STM32_EXTI_Init,
	STM32_EXTI_Trigger_Event_Interrupt,
};
