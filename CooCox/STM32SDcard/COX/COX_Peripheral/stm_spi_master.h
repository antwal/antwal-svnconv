/***************************************************************************//**
 * @file      : stm_spi_master.h
 * @brief     : stm32f1xx SPI Interface
 * @version   : V1.0
 * @date      : 4. March. 2011
 * @author    : CooCox
*******************************************************************************/

#ifndef __STM_SPI_MASTER_H
#define __STM_SPI_MASTER_H

#include "cox_spi.h"

/**
    STM32xx COX SPI MASTER Peripheral Interface based on SPIx                \n
                                                                             \n
	  Configuration Support:                                                 \n
	  COX_MSPI_CFG_MODE, support parameter:                                  \n
        - COX_SPI_MODE0                                                      \n
        - COX_SPI_MODE1                                                      \n
        - COX_SPI_MODE2                                                      \n
        - COX_SPI_MODE3                                                      \n
                                                                             \n
	  COX_MSPI_CFG_RATE : Transfer Speed  clock:18000000                     \n
	  COX_MSPI_CFG_BITS, support parameter:    8 OR 16                       \n
	  COX_SPI_CFG_FSB  : MSB or LSB                                          \n
*******************************************************************************/
#define SPI_PORT1 0
#define SPI_PORT2 1
#define SPI_PORT3 2


/** SPI BaudRate Definition */
typedef enum {
	SPI_BaudRatePrescaler_2  = 0,
	SPI_BaudRatePrescaler_4  = 1,
	SPI_BaudRatePrescaler_8  = 2,
	SPI_BaudRatePrescaler_16  = 3,
	SPI_BaudRatePrescaler_32  = 4,
	SPI_BaudRatePrescaler_64  = 5,
	SPI_BaudRatePrescaler_128  = 6,
	SPI_BaudRatePrescaler_256  = 7,
} COX_SPI_BAUD_Def;

//typedef unsigned long  ul32;
//typedef unsigned short us16;
//typedef unsigned char  ui8;

/** Define STM32xx CoX SPI  Peripheral Interface based on SPI1
*******************************************************************************/
extern COX_SPI_PI pi_spi1;
/** Define STM32xx CoX SPI  Peripheral Interface based on SPI2
*******************************************************************************/
extern COX_SPI_PI pi_spi2;
/** Define STM32xx CoX SPI  Peripheral Interface based on SPI3
*******************************************************************************/
extern COX_SPI_PI pi_spi3;


#endif
