
/***************************************************************************//**
 * @file      : stm32_exti.h
 * @brief     : STM32xx EXTI Interface
 * @version   : V1.0
 * @date      : 2. March. 2011
 * @author    : CooCox
*******************************************************************************/
#ifndef __STM32_EXTI_H
#define __STM32_EXTI_H

#include "cox_exti.h"

typedef enum
{
	GPA = 0,
	GPB = 1 ,
	GPC = 2,
	GPD = 3,
	GPE	= 4
} port;

/**
 *       Define STM32xx CoX EXTI Interface based on GPIO    \n
 *                                                         \n
 *Valid Pin :                                              \n
 *  PA.14 - ENIT0                                          \n
 *  PA.15 - ENIT1                                          \n
 *                                                         \n
 *Valid Event :                                            \n
 *  -COX_EXTI_NONE                : None interrupt         \n
 *  -COX_EXTI_EDGE_RISING         : Rising edge interrupt  \n
 *  -COX_EXTI_EDGE_FALLING        : Falling edge interrupt \n
 *  -COX_EXTI_EDGE_RISING_FALLING : Both edge interrupt (Rising and Falling)
*******************************************************************************/
extern COX_EXTI_PI pi_exti;

#endif
