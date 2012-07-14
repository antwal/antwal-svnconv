/*
 * Name           : StaticMultiHop.h
 * Authors        : u-Agri Team 
 * Organization   : C-DAC, Hyderabad
 * Project        : NUCRC, u-Agri
 * Date           : 2008/08/31, 2009/07/31
 *
 * 
 * Description    :
 * Header defining routing MultiHop Structure
 *
 */


#ifndef _STAT_MULTIHOP_H
#define _STAT_MULTIHOP_H

enum {
//	  TOS_BCAST_ADDR = 0xffff,
	  TOS_UART_ADDR = 0x007e,
};

#ifndef TOSH_DATA_LENGTH
#define TOSH_DATA_LENGTH 29
#endif

typedef struct MultihopMsg {
  uint16_t sourceaddr;
  uint16_t originaddr;
  uint8_t data[(TOSH_DATA_LENGTH - 4)]; 
} __attribute__ ((packed)) TOS_MHopMsg;


#endif /* _TOS_MULTIHOP_H */
