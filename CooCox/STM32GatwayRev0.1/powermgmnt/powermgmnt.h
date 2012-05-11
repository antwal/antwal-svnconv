#ifndef _POWERMGMNT_H_
#define _POWERMGMNT_H_

#include "buffer.h"

extern cBuffer spi_buff;
extern unsigned char spi_buffer[30];


#define spi_read()		bufferGetFromFront(&spi_buff)
#define SPI_RESET()		SPI2->CR1 |= 0x100; SPI2->CR1 &= ~0x100

typedef struct power_status{
uint16_t bat1;
uint16_t bat2;
uint32_t sol;
uint8_t charge_status;
uint8_t supply;
}__attribute__ ((packed)) power_status;

typedef struct batt_percentage{
	int8_t bat1;
	int8_t bat2;
	int8_t sol;
} batt_percentage;

extern power_status power;
extern batt_percentage charge;

// size of packet after parsing
#define PACKET_SIZE  (sizeof(power_status) + 2 + 1)		// + CHKSM + start + END

/*
 * Synchronisation BITS
 */
#define START_BYTE 0X7E
#define STOP_BYTE  0X7E
#define ESC_CHAR  0X7D

#define BAT_MAX			8450				// 8.45V
#define BAT_MIN			7200				// 7.2V
#define BAT_30			7560				// 7.4V
#define BAT_15			7400				// 7.4V
#define SOL_MAX			19000				// 19V
#define SOL_MIN			12000				// 12V
#define VCC				50					// 5.3V
#define IDLE_VOL		7000				// 6.8V

typedef enum
{
	powerInvalid = 0,
	powerGood,
	powerMedium,
	powerLow,
	powerCritical,
	powerDown
}powerState;

extern powerState powerLevel;
powerState powerHandler(void);

#endif
