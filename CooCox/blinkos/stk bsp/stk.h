/**************************************************************************//**
 * @file
 * @brief STK Starter Kit Board Support Header File
 * @author Energy Micro AS
 * @version 1.2.0
 ******************************************************************************
 * @section License
 * <b>(C) Copyright 2009 Energy Micro AS, http://www.energymicro.com</b>
 ******************************************************************************
 *
 * This source code is the property of Energy Micro AS. The source and compiled
 * code may only be used on Energy Micro "EFM32" microcontrollers.
 *
 * This copyright notice may not be removed from the source code nor changed.
 *
 * DISCLAIMER OF WARRANTY/LIMITATION OF REMEDIES: Energy Micro AS has no
 * obligation to support this Software. Energy Micro AS is providing the
 * Software "AS IS", with no express or implied warranties of any kind,
 * including, but not limited to, any implied warranties of merchantability
 * or fitness for any particular purpose or warranties against infringement
 * of any proprietary rights of a third party.
 *
 * Energy Micro AS will not be liable for any consequential, incidental, or
 * special damages, or any other relief, or for any claim by any third party,
 * arising from your use of this Software.
 *
 *****************************************************************************/
#ifndef __STK_H
#define __STK_H
#include <stdint.h>
#include <stdbool.h>
#include "stk_packet.h"

void STK_SendPacket(STK_Packet *pkt);
bool STK_ReceivePacket(STK_Packet *pkt);
void STK_Init(void);

void STK_StdOut(char *buffer, int length);
float STK_Current(void);
float STK_Voltage(void);
bool STK_Ready(void);
bool STK_EnergyMode(uint8_t em);

#endif
