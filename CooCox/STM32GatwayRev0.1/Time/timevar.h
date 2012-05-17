#ifndef __TIMEVAR_H__
#define __TIMEVAR_H__

#include "stm32_rtc.h"

extern TIME *tm;

#define EQUAL 	0
#define LESSER	1
#define GREATER	2

#define START	0
#define END		1

uint16_t timeInterval(uint8_t id, uint8_t action);
uint8_t isTime(uint8_t hr, uint8_t min, uint8_t decsn);

#endif
