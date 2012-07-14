/***************************************************************************//**
 * @file      : stm_rtc.h
 * @brief     : stm32f1xx RTC Interface
 * @version   : V1.0
 * @date      : 21. February. 2011
 * @author    : CooCox
*******************************************************************************/
#ifndef __COX_STM32_RTC_H
#define __COX_STM32_RTC_H

#include "cox_rtc.h"

typedef unsigned long  ul32;
typedef unsigned short us16;
typedef unsigned char  ui8;

/** RCC registers bit address in the alias region  */
#define RCC_OFFSET                (RCC_BASE - PERIPH_BASE)
#define CR_OFFSET                 (RCC_OFFSET + 0x00)
#define PWR_OFFSET               (PWR_BASE - PERIPH_BASE)
#define CR_OFFSET1                (PWR_OFFSET + 0x00)
#define CR_DBP_BB                (PERIPH_BB_BASE + (CR_OFFSET1 * 32) + (0x08 * 4))
#define BDCR_OFFSET               (RCC_OFFSET + 0x20)
#define BDCR_BDRST_BB             (PERIPH_BB_BASE + (BDCR_OFFSET * 32) + (0x10 * 4))
#define RCC_LSE_OFF                      ((uint8_t)0x00)
#define RCC_LSE_ON                       ((uint8_t)0x01)
#define RTCEN_BitNumber           0x0F
#define BDCR_RTCEN_BB             (PERIPH_BB_BASE + (BDCR_OFFSET * 32) + (RTCEN_BitNumber * 4))


/** BDCR register base address */
#define BDCR_BASE                 (PERIPH_BASE + BDCR_OFFSET)
#define FLAG_Mask                 ((uint8_t)0x1F)
#define RCC_APB1Periph_BKP               ((ul32)0x08000000)
#define RCC_APB1Periph_PWR               ((ul32)0x10000000)
#define RCC_FLAG_LSERDY                  ((ui8)0x41)
#define RCC_RTCCLKSource_LSE             ((ul32)0x00000100)


/** RTC Value Write to regsiter*/
#define RTC_LSB_Mask     ((ul32)0x0000FFFF)  /* !< RTC LSB Mask */
#define RTC_MSB_Mask     ((ul32)0xFFFF0000)  /* !< RTC MSB Mask */
#define RTC_FLAG_RSF         ((us16)0x0008)  /* !< Registers Synchronized flag */


/** RTC interrupts flags */
#define RTC_FLAG_RTOFF       ((us16)0x0020)  /* !< RTC Operation OFF flag */


/** RTC interrupts define*/
#define RTC_IT_OW            ((us16)0x0004)  /* !< Overflow interrupt */
#define RTC_IT_ALR           ((us16)0x0002)  /* !< Alarm interrupt */
#define RTC_IT_SEC           ((us16)0x0001)  /* !< Second interrupt */


/**RTC Configuration Enable*/
#define CRL_CNF_Set      ((us16)0x0010)      /* !< Configuration Flag Enable Mask */
#define CRL_CNF_Reset    ((us16)0xFFEF)      /* !< Configuration Flag Disable Mask */
#define PRLH_MSB_Mask    ((ul32)0x000F0000)  /* !< RTC Prescaler MSB Mask */
#define GPIO_Pin_6                 ((u16)0x0040)  /* !< Pin 6 selected */


/**
 *@brief LPC RTC Increase Event Definition
 * Note : Only one event is available at the same time */
typedef enum {
	RTC_EVENT_IT_OW   = 0,   /* !<Overflow interrupt Event  */
	RTC_EVENT_IT_ALR  = 1,   /* !<Alarm interrupt Event     */
	RTC_EVENT_IT_SEC  = 2,   /* !<Second interrupt  Event   */
} LPC_RTC_EVENT_Def;

extern COX_RTC_PI pi_rtc;

#endif
