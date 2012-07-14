/***************************************************************************//**
 * @file      : stm32_pio.c
 * @brief     : STM32F1xx CoX PIO Peripheral Interface
 * @version   : V1.0
 * @date      : 28 Feb. 2011
 * @author    : CooCox
 ******************************************************************************/
#include "stm32_pio.h"
#include "stm32f10x.h"


/***************************************************************************//**
 * @brief     Get pointer to GPIO peripheral due to GPIO port
 * @param[in] portNum : Port Number value, should be in range from 0 to 6.
 * @return    Pointer to GPIO peripheral
*******************************************************************************/
static GPIO_TypeDef* STM32_GetGPIO(uint8_t port)
{
	GPIO_TypeDef *pGPIO = COX_NULL;

	switch(port)
	{
		case 0: pGPIO = GPIOA; break;
		case 1: pGPIO = GPIOB; break;
		case 2: pGPIO = GPIOC; break;
		case 3: pGPIO = GPIOD; break;
		case 4: pGPIO = GPIOE; break;
		case 5: pGPIO = GPIOF; break;
		case 6: pGPIO = GPIOG; break;
		default: break;
	}

	return pGPIO;
}


/***************************************************************************//**
 * @brief     Initializes the PIO peripheral
 * @param[in] pio : The specified peripheral
 * @return    Result, may be :
 *              -COX_ERROR : Error occurred, parameter is not supported
 *              -COX_SUCCESS : Previous argument of the specified option
*******************************************************************************/
static COX_Status STM32_PIO_Init (COX_PIO_Dev pio)
{

	GPIO_TypeDef* pGPIO = COX_NULL;
	uint8_t port, pin;

	port = (pio >> 8) & 0xFF;
	pin  = (pio >> 0) & 0xFF;

	pGPIO = STM32_GetGPIO(port);

	if(port >6 || port<0 || pin<0 || pin > 15)
		return COX_ERROR;

	/* Enable GPIO and AFIO clocks */
	switch(port)
	{
		case 0: RCC->APB2ENR |= (RCC_APB2ENR_IOPAEN | RCC_APB2ENR_AFIOEN); break;
		case 1: RCC->APB2ENR |= (RCC_APB2ENR_IOPBEN | RCC_APB2ENR_AFIOEN); break;
		case 2: RCC->APB2ENR |= (RCC_APB2ENR_IOPCEN | RCC_APB2ENR_AFIOEN); break;
		case 3: RCC->APB2ENR |= (RCC_APB2ENR_IOPDEN | RCC_APB2ENR_AFIOEN); break;
		case 4: RCC->APB2ENR |= (RCC_APB2ENR_IOPEEN | RCC_APB2ENR_AFIOEN); break;
		default: break;
	}
  return COX_SUCCESS;
}


/***************************************************************************//**
 * @brief     Set direction (Input or Output)
 * @param[in] pio : The specified PIO peripheral
 * @param[in] dir : Direction, should be
 *             -0: Input
 *             -1: Output
 * @return    Result, may be :
 *              -COX_ERROR : Error occurred, parameter is not supported
 *              -COX_SUCCESS : Previous argument of the specified option
*******************************************************************************/
static COX_Status STM32_PIO_SetDir(COX_PIO_Dev pio, uint8_t dir)
{

	GPIO_TypeDef* pGPIO = COX_NULL;
	uint8_t port, pin;

	port = (pio >> 8) & 0xFF;
	pin  = (pio >> 0) & 0xFF;

	pGPIO = STM32_GetGPIO(port);

	/* Direction is input:GPIO_Mode_IN_FLOATING */
	if(dir == 0){
		if(pin>7)
		{
			/* Configure the eight high port pins */
			pin = pin-8;
			/* MODE[1:0]=00 */
			pGPIO -> CRH &= ~(0x3 << (pin*4));
			/* CNF[1:0] =01 */
			pGPIO -> CRH &= ~(0x8 << (pin*4));
			pGPIO -> CRH |=  (0x4 <<(pin*4));
		}

		else
		{
			/* Configure the eight low port pins */
			pGPIO -> CRL &= ~(0x3 << (pin*4));
			pGPIO -> CRL &= ~(0x8 << (pin*4));
			pGPIO -> CRL |=  (0x4 << (pin*4));
		}
	}

	/* Direction is output:GPIO_Mode_Out_PP */
	else {
		if(pin>7)
		{
			pin = pin-8;
			/* MODE[1:0]=11 */
			pGPIO -> CRH |=  (0x3 <<(pin*4));
			/* CNF[1:0] =00 */
	  		pGPIO -> CRH &= ~(0xc <<(pin*4));
		}
		else
		{
			pGPIO -> CRL |=  (0x3 << (pin*4));
			pGPIO -> CRL &= ~(0xc<<(pin*4));
		}
	}
	return COX_SUCCESS;
}


/***************************************************************************//**
 * @brief     Get the current state
 * @param[in] pio : The specified peripheral
 * @return    The current state
*******************************************************************************/
static uint8_t STM32_PIO_Read(COX_PIO_Dev pio)
{
	GPIO_TypeDef* pGPIO = (void *)0;
	uint8_t port, pin;
	uint8_t level;

	port = (pio >> 8) & 0xFF;
	pin  = (pio >> 0) & 0xFF;

	pGPIO = STM32_GetGPIO(port);

	if(pin>7)
    {
		if((((pGPIO -> CRH)>>((pin-8)*4)) & 0x3) == 0)
		{
			/* input state */
			if((((pGPIO -> IDR) & (1 << pin))&& 1) == 0x0)
				level = 0;
			else
				level = 1;
		}
		else
		{
			/* output state */
			if((pGPIO -> ODR)>>pin == 0x0)
				level = 0;
			else
				level = 1;
		}
    }

    else
    {
    	if((((pGPIO -> CRL)>>(pin*4)) & 0x3) == 0)
    	{
			/* input state */
			if((((pGPIO -> IDR) & (1 << pin))&& 1) == 0x0)
				level = 0;
			else
				level = 1;
    	}
    	else
    	{
    		if((pGPIO -> ODR)>>pin == 0x0)
    			level = 0;
    		else
    			level = 1;
    	}
	}

	return level;
}


/***************************************************************************//**
 * @brief     Output
 * @param[in] pio : The specified peripheral
 * @param[in] level : Output level, should be
 *             -0 : Output low level
 *             -1 : Output high level
 * @return    Previous PIO status
*******************************************************************************/
static uint8_t STM32_PIO_Out(COX_PIO_Dev pio, uint8_t level)
{
	GPIO_TypeDef* pGPIO = (void *)0;
	uint8_t port, pin;
	uint8_t plevel;

	port = (pio >> 8) & 0xFF;
	pin  = (pio >> 0) & 0xFF;

	pGPIO  = STM32_GetGPIO(port);
	plevel = STM32_PIO_Read(pio);

	if(level == 0)
		/* set the bit */
		pGPIO -> BSRR |= 0x1<<pin;
	else
		/* clear the bit */
		pGPIO -> BRR |= 0x1<<pin;

	return plevel;
}


/***************************************************************************//**
 * @brief     Cofigure the PIO peripheral
 * @param[in] pio : The specified peripheral
 * @return    Result, may be
 *              -COX_ERROR
 *              -COX_SUCCESS
*******************************************************************************/
#define PULL_UP		1
#define PULL_DOWN	2

static COX_Status STM32_PIO_Cfg (COX_PIO_Dev pio, uint8_t index, uint32_t arg, uint32_t *pre_arg)
{
	GPIO_TypeDef* pGPIO = (void *)0;
	uint8_t port, pin;
	uint8_t plevel;

	port = (pio >> 8) & 0xFF;
	pin  = (pio >> 0) & 0xFF;

	pGPIO  = STM32_GetGPIO(port);
	(pGPIO -> ODR) |= (1<<pin);		// Pulling up
	switch(index)
	{

	case PULL_UP:
		if(pin>7)
		{
			/* Configure the eight high port pins */
			pin = pin-8;

			/* CNF[1:0] =10 */
			pGPIO -> CRH |= (0x8 << (pin*4));
			pGPIO -> CRH &= ~(0x4 <<(pin*4));
		}

		else
		{
			/* Configure the eight low port pins */
			pGPIO -> CRL |= (0x8 << (pin*4));
			pGPIO -> CRL &= ~(0x4 << (pin*4));
		}

		break;

	case PULL_DOWN:
		if(pin>7)
		{
			/* Configure the eight high port pins */
			pin = pin-8;

			/* CNF[1:0] =10 */
			pGPIO -> CRH |= (0x8 << (pin*4));
			pGPIO -> CRH &= ~(0x4 <<(pin*4));
		}

		else
		{
			/* Configure the eight low port pins */
			pGPIO -> CRL |= (0x8 << (pin*4));
			pGPIO -> CRL &= ~(0x4 << (pin*4));
		}
		(pGPIO -> ODR) &= ~(1<<pin);		// Pulling down
		break;

	default:
		break;
	}

	return COX_SUCCESS;
}

/***************************************************************************//**
 * Define STM32F1xx CoX PIO Peripheral Interface
*******************************************************************************/
COX_PIO_PI pi_pio = {
	STM32_PIO_Init,
	STM32_PIO_SetDir,
	STM32_PIO_Out,
	STM32_PIO_Read,
	STM32_PIO_Cfg,
};
