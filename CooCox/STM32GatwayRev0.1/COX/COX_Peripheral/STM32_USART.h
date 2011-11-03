/***************************************************************************//**
 * @file      : STM32_USART.h
 * @brief     : STM32F103x Serial Peripheral Interface
 * @version   : V1.0
 * @date      : 17. Feb. 2011
 * @author    : CooCox
*******************************************************************************/

#include "cox_serial.h"


#ifndef STM32_SERIAL_H

typedef unsigned short us16;
typedef unsigned long  ul32;
typedef unsigned char uint8_t;

/**  GPIO_pins_define  */
#define GPIO_Pin_2                 ((uint16_t)0x0004)  /*!< Pin 2 selected */
#define GPIO_Pin_3                 ((uint16_t)0x0008)  /*!< Pin 3 selected */
#define GPIO_Pin_9                 ((uint16_t)0x0200)  /*!< Pin 9 selected */
#define GPIO_Pin_10                ((uint16_t)0x0400)  /*!< Pin 10 selected */
#define GPIO_Pin_11                ((uint16_t)0x0800)  /*!< Pin 11 selected */

#define RCC_APB2Periph_GPIOA             ((uint32_t)0x00000004)
#define RCC_APB2Periph_GPIOB             ((uint32_t)0x00000008)

#define CR1_CLEAR_Mask            ((us16)0xE9F3)  /*!<  USART CR1 Mask */
#define CR2_CLEAR_Mask            ((us16)0xC0FF)  /*!<  USART CR2 Mask */
#define CR3_CLEAR_Mask            ((us16)0xFCFF)  /*!<  USART CR3 Mask */


/** USART RUN Mask */
#define CR1_RUN_Set               ((us16)0x2000)  /*!<  USART Enable Mask */
#define CR1_RUN_Reset             ((us16)0xDFFF)  /*!<  USART Disable Mask */

/** CFGR register bit mask */
#define CFGR_PLLMull_Mask         ((ul32)0x003C0000)
#define CFGR_PLLSRC_Mask          ((ul32)0x00010000)
#define CFGR_PLLXTPRE_Mask        ((ul32)0x00020000)
#define CFGR_SWS_Mask             ((ul32)0x0000000C)
#define CFGR_SW_Mask              ((ul32)0xFFFFFFFC)
#define CFGR_HPRE_Reset_Mask      ((ul32)0xFFFFFF0F)
#define CFGR_HPRE_Set_Mask        ((ul32)0x000000F0)
#define CFGR_PPRE1_Reset_Mask     ((ul32)0xFFFFF8FF)
#define CFGR_PPRE1_Set_Mask       ((ul32)0x00000700)
#define CFGR_PPRE2_Reset_Mask     ((ul32)0xFFFFC7FF)
#define CFGR_PPRE2_Set_Mask       ((ul32)0x00003800)
#define CFGR_ADCPRE_Reset_Mask    ((ul32)0xFFFF3FFF)
#define CFGR_ADCPRE_Set_Mask      ((ul32)0x0000C000)

/** CR register bit mask */
#define CR_HSEBYP_Reset           ((uint32_t)0xFFFBFFFF)
#define CR_HSEON_Reset            ((uint32_t)0xFFFEFFFF)
#define CR_HSEON_Set              ((uint32_t)0x00010000)


/** RCC Flag Mask */
#define FLAG_Mask                 ((uint8_t)0x1F)

#define RCC_FLAG_HSERDY                  ((uint8_t)0x31)

/** defgroup AHB_clock_source*/
#define RCC_SYSCLK_Div1                  ((uint32_t)0x00000000)
#define RCC_SYSCLK_Div2                  ((uint32_t)0x00000080)

#define RCC_HCLK_Div1                    ((uint32_t)0x00000000)
#define RCC_HCLK_Div2                    ((uint32_t)0x00000400)

#define ACR_PRFTBE_Mask          ((ul32)0xFFFFFFEF)
#define FLASH_Latency_2                ((ul32)0x00000002)  /*!<  FLASH Two Latency cycles */
/** Prefetch Buffer Enable/Disable */
#define FLASH_PrefetchBuffer_Enable    ((ul32)0x00000010)  /*!<  FLASH Prefetch Buffer Enable */

/**  RCC registers bit address in the alias region  */
#define RCC_OFFSET                (RCC_BASE - PERIPH_BASE)
#define RCC_FLAG_PLLRDY                  ((uint8_t)0x39)
#define RCC_SYSCLKSource_PLLCLK          ((uint32_t)0x00000002)

#define RCC_APB2Periph_USART1            ((uint32_t)0x00004000)
#define RCC_APB1Periph_USART2            ((uint32_t)0x00020000)
#define RCC_APB1Periph_USART3            ((uint32_t)0x00040000)
/** CR Register*/
/** Alias word address of HSION bit */
#define CR_OFFSET                 (RCC_OFFSET + 0x00)
#define RCC_PLLSource_HSE_Div1           ((uint32_t)0x00010000)
#define CFGR_PLL_Mask           ((uint32_t)0xFFC2FFFF)
#define RCC_PLLMul_9                    ((uint32_t)0x001C0000)
#define CR_PLLON_BB               (PERIPH_BB_BASE + (CR_OFFSET * 32) + (0x18 * 4))
/** Exported types	*/
typedef struct
{
  ul32 SYSCLK_Frequency;
  ul32 HCLK_Frequency;
  ul32 PCLK1_Frequency;
  ul32 PCLK2_Frequency;
  ul32 ADCCLK_Frequency;
}RCC_ClockTypeDef;


/** USART Hardware Flow Control */
typedef enum {
	USART_HardwareFlowControl_None  = 0x0000,
	USART_HardwareFlowControl_RTS   = 0x0100,
	USART_HardwareFlowControl_CTS   = 0x0200,
	USART_HardwareFlowControl_RTS_CTS = 0x0300,
} SERIAL_DATAFLOWCONTROL_Def;


/** USART Mode */
typedef enum {
	USART_Mode_Rx  = 0x0004,
	USART_Mode_Tx  = 0x0008,
} SERIAL_MODE_Def;


/** USART CLOCK */
typedef enum {
	USART_Clock_Disable  = 0,
	USART_Clock_Enable   = 1,
} SERIAL_CLOCK_Def;


/** USART CPOL */
typedef enum {
	USART_CPOL_Low  = 0,
	USART_CPOL_High   = 1,
} SERIAL_CPOL_Def;


/** USART CPHA */
typedef enum {
	USART_CPHA_1Edge  = 0,
	USART_CPHA_2Edge   = 1,
} SERIAL_CPHA_Def;


/** USART LASTBIT */
typedef enum {
	USART_LastBit_Disable  = 0,
	USART_LastBit_Enable   = 1,
} SERIAL_LASTBIT_Def;


/** GPIO Output Maximum frequency selection */
typedef enum
{
  GPIO_Speed_10MHz = 1,
  GPIO_Speed_2MHz,
  GPIO_Speed_50MHz
}GPIOSpeed_TypeDef;

/** GPIOConfiguration Mode enumeration  */
typedef enum
{ GPIO_Mode_AIN = 0x0,
  GPIO_Mode_IN_FLOATING = 0x04,
  GPIO_Mode_IPD = 0x28,
  GPIO_Mode_IPU = 0x48,
  GPIO_Mode_Out_OD = 0x14,
  GPIO_Mode_Out_PP = 0x10,
  GPIO_Mode_AF_OD = 0x1C,
  GPIO_Mode_AF_PP = 0x18
}GPIOMode_TypeDef;

typedef struct
{
  uint16_t GPIO_Pin;             /*!< Specifies the GPIO pins to be configured.
                                      This parameter can be any value of @ref GPIO_pins_define */
  GPIOSpeed_TypeDef GPIO_Speed;  /*!< Specifies the speed for the selected pins.
                                      This parameter can be a value of @ref GPIOSpeed_TypeDef */
  GPIOMode_TypeDef GPIO_Mode;    /*!< Specifies the operating mode for the selected pins.
                                      This parameter can be a value of @ref GPIOMode_TypeDef */
}GPIO_InitTypeDef;

typedef struct {
	unsigned long USART_BaudRate;
	SERIAL_DATA_BITS_Def USART_WordLength;
	SERIAL_STOP_BITS_Def USART_StopBits;
	SERIAL_PARITY_MODE_Def USART_Parity;
	SERIAL_DATAFLOWCONTROL_Def USART_HardwareFlowControl;
	SERIAL_MODE_Def USART_Mode;
	SERIAL_CLOCK_Def USART_Clock;
	SERIAL_CPOL_Def USART_CPOL;
	SERIAL_CPHA_Def USART_CPHA;
	SERIAL_LASTBIT_Def USART_LastBit;
}USART_InitTypeDef;

/** Define STM32 USART1 Peripheral Interface
*******************************************************************************/
extern COX_SERIAL_PI pi_serial1;

/** Define STM32 USART2 Peripheral Interface
*******************************************************************************/
extern COX_SERIAL_PI pi_serial2;

/** Define STM32 USART2 Peripheral Interface
*******************************************************************************/
extern COX_SERIAL_PI pi_serial3;

#endif
