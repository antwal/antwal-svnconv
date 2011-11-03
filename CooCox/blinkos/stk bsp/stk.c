/**************************************************************************//**
 * @file
 * @brief STK Board Support Package
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
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include "efm32.h"
#include "stk.h"

/**************************************************************************//**
 * @brief Receive a packet over the UART interface
 * @return false on failure, or true on success
 *****************************************************************************/
bool STK_ReceivePacket(STK_Packet *pkt)
{
  USART_TypeDef *usart = UART0;
  uint8_t       *rxPtr = (uint8_t *) pkt;
  int length;

  /* Receive packet magic */
  while (!(usart->STATUS & USART_STATUS_RXDATAV));
  *rxPtr++ = usart->RXDATA;
  if ( pkt->magic!=STK_MAGIC ) 
  {
    /* Invalid packet */
    memset(pkt, 0x00, sizeof(STK_Packet));
    return false;
  }

  /* Receive packet type */
  while (! (usart->STATUS & USART_STATUS_RXDATAV) );
  *rxPtr++ = usart->RXDATA;
  if ( (pkt->type < STK_PACKETTYPE_FIRST) || (pkt->type > STK_PACKETTYPE_LAST)) 
  {
    /* Invalid packet */
    memset(pkt, 0x00, sizeof(STK_Packet));
    return false;
  }

  /* Receive packet length */  
  while (! (usart->STATUS & USART_STATUS_RXDATAV) );
  *rxPtr++ = usart->RXDATA;
  if ( pkt->payloadLength>STK_PACKET_SIZE ) 
  {
    /* Invalid packet */
    memset(pkt, 0x00, sizeof(STK_Packet));
    return false;
  }
  /* Receive packet data */
  length = pkt->payloadLength;
  while (length)
  {    
    while (! (usart->STATUS & USART_STATUS_RXDATAV) );
    *rxPtr++ = usart->RXDATA;
    length--;
  }

  return true;
}


/**************************************************************************//**
 * @brief Transmit single byte with given USART
 * @param data Character to transmit
 *****************************************************************************/
static inline void USART_TxByte(USART_TypeDef *usart, uint8_t data)
{
  /* Check that transmit buffer is empty */
  while (!(usart->STATUS & USART_STATUS_TXBL)) ;
  usart->TXDATA = (uint32_t) data;
}


/**************************************************************************//**
 * @brief Transmit packet to board controller
 * @param pkt Packet to transmit
 *****************************************************************************/
void STK_SendPacket(STK_Packet *pkt)
{
  int i;
  
  /* Apply magic */
  pkt->magic = 0xf1;

  /* Transmit packet magic */
  USART_TxByte(UART0, pkt->magic);  
  /* Transmit packet type */
  USART_TxByte(UART0, pkt->type);
  /* Transmit packet length */
  USART_TxByte(UART0, pkt->payloadLength);
  /* Transmit packet payload */
  for (i = 0; i < pkt->payloadLength; i++)
  {
    USART_TxByte(UART0, pkt->data[i]);
  }
}

/**************************************************************************//**
 * @brief Transmit packets to transport output to Board Controller
 *****************************************************************************/
void STK_StdOut(char *buffer, int length)
{
  STK_Packet pkt;
  int        pktLength;

  /* Split buffer into multiple packets if necessary */
  while (length)
  {
    pkt.type = STK_PACKETTYPE_STDOUT;
    if (length > STK_PACKET_SIZE)
    {
      pktLength = STK_PACKET_SIZE;
    }
    else
    {
      pktLength = length;
    }
    pkt.payloadLength = pktLength;
    memcpy(pkt.data, buffer, pktLength);

    /* Transfer packet */
    STK_SendPacket(&pkt);
    if( ! STK_ReceivePacket(&pkt) ) return;
    
    /* Update pointers */
    length -= pktLength;
    buffer += pktLength;
  }
}


/**************************************************************************//**
 * @brief STK Check if Board Controller is alive
 *****************************************************************************/
bool STK_Ready(void)
{
  STK_Packet pkt;

  /* Transfer Echo packet */
  pkt.type          = STK_PACKETTYPE_ECHO_REQ;
  pkt.payloadLength = 0;

  /* Send Request/Get reply */
  STK_SendPacket(&pkt);
  STK_ReceivePacket(&pkt);

  if (pkt.type == STK_PACKETTYPE_ECHO_REPLY)
  {
    return true;
  }
  return false;
}

/**************************************************************************//**
 * @brief Inform board controller about current energy mode for AEM display
 *****************************************************************************/
bool STK_EnergyMode(uint8_t em)
{
  STK_Packet pkt;

  /* Transfer Echo packet */
  pkt.type          = STK_PACKETTYPE_ENERGYMODE;
  pkt.payloadLength = 1;
  pkt.data[0] = em;

  /* Send Request/Get reply */
  STK_SendPacket(&pkt);
  STK_ReceivePacket(&pkt);

  if (pkt.type == STK_PACKETTYPE_ACK)
  {
    return true;
  }
  return false;
}


/**************************************************************************//**
 * @brief Request AEM current from Board Controller
 *****************************************************************************/
float STK_Current(void)
{
  STK_Packet pkt;
  float current;

  pkt.type          = STK_PACKETTYPE_CURRENT_REQ;
  pkt.payloadLength = 0;

  /* Send Request/Get reply */
  STK_SendPacket(&pkt);
  STK_ReceivePacket(&pkt);

  /* Process reply */
  if ( pkt.type == STK_PACKETTYPE_CURRENT_REPLY )
  {
    memcpy(&current, pkt.data, sizeof(float));
    return current;
  } else {
    return (float)0.0;
  }
}

/**************************************************************************//**
 * @brief Request AEM current from Board Controller
 *****************************************************************************/
float STK_Voltage(void)
{
  STK_Packet pkt;
  float voltage;

  pkt.type          = STK_PACKETTYPE_VOLTAGE_REQ;
  pkt.payloadLength = 0;

  /* Send Request/Get reply */
  STK_SendPacket(&pkt);
  STK_ReceivePacket(&pkt);

  /* Process reply */
  if ( pkt.type == STK_PACKETTYPE_VOLTAGE_REPLY )
  {
    memcpy(&voltage, pkt.data, sizeof(float));
    return voltage;
  } else {
    return (float)0.0;
  }
}

/**************************************************************************//**
 * @brief Intializes STK Clock Management Unit
 *****************************************************************************/
static void STK_CMUInit(void)
{
  CMU_TypeDef *cmu = CMU;

  /* Enable High Frequency Peripherals */
  cmu->HFPERCLKDIV |= CMU_HFPERCLKDIV_HFPERCLKEN;

  /* Enable clocks to UART0 and GPIO */
  cmu->HFPERCLKEN0 |= (CMU_HFPERCLKEN0_UART0 | CMU_HFPERCLKEN0_GPIO);
}


/**************************************************************************//**
 * @brief Intializes STK GPIO Pin Usage
 *****************************************************************************/
static void STK_GPIOInit(void)
{
  GPIO_TypeDef *gpio = GPIO;
  uint32_t     gpiomode;

  /* TX - PE0, RX - PE1 */
  /* Configure GPIO pins LOCATION 1 */
  /* To avoid false start, configure output as high   */
  gpio->P[4].DOUT |= (1 << 0);
  gpiomode         = gpio->P[4].MODEL;
  gpiomode        &= ~(
    _GPIO_P_MODEL_MODE0_MASK |
    _GPIO_P_MODEL_MODE1_MASK);
  gpiomode        |= GPIO_P_MODEL_MODE0_PUSHPULL;
  gpiomode        |= GPIO_P_MODEL_MODE1_INPUT;
  gpio->P[4].MODEL = gpiomode;

  /* Enable switch U602A - See board schematics */
  gpiomode         = gpio->P[3].MODEH;
  gpiomode        &= ~(_GPIO_P_MODEH_MODE13_MASK);
  gpiomode        |= GPIO_P_MODEH_MODE13_PUSHPULL;
  gpio->P[3].MODEH = gpiomode;
  gpio->P[3].DOUT |= (1 << 13);
}


/**************************************************************************//**
 * @brief Intializes STK UART0 for UART mode towards Board Controller
 *****************************************************************************/
static void STK_UART0Init(void)
{
  const int     baudrate = STK_BAUDRATE;
  USART_TypeDef *usart   = UART0;
  uint32_t      clk;
  uint32_t      clkdiv;

  /* Configure UART as STK_BAUDRATE 8-N-1 */
  usart->FRAME &= (
    _USART_FRAME_DATABITS_MASK |
    _USART_FRAME_PARITY_MASK |
    _USART_FRAME_STOPBITS_MASK);
  usart->FRAME |= (
    USART_FRAME_DATABITS_EIGHT |
    USART_FRAME_PARITY_NONE |
    USART_FRAME_STOPBITS_ONE
    );

  /* Set baud rate clock divisor - 16x oversampling and given baud rate. */
  /* See ref.manual section 16.3.2.2 Clock Generation */
  clk = (SystemCoreClockGet() >> ((CMU->HFPERCLKDIV & _CMU_HFPERCLKDIV_HFPERCLKDIV_MASK) >>
                                  _CMU_HFPERCLKDIV_HFPERCLKDIV_SHIFT));
  
  clkdiv = ((16 * clk) / baudrate);
  /* Check for underflow */
  if ( clkdiv > 256) 
  {
    clkdiv -= 256;
  } 
  else 
  {
    clkdiv = 0;
  }
  /* Make sure we don't clock higher than desired data rate */
  if ( clkdiv & 0x3f ) clkdiv += 0x40;
  usart->CLKDIV = clkdiv;

  /* Clear RX/TX buffers */
  usart->CMD = USART_CMD_CLEARRX | USART_CMD_CLEARTX;
  /* Enable location 1 */
  usart->ROUTE = USART_ROUTE_RXPEN | USART_ROUTE_TXPEN |
                 USART_ROUTE_LOCATION_LOC1;

  /* Enable RX/TX */
  usart->CMD |= USART_CMD_RXEN | USART_CMD_TXEN;
}

/**************************************************************************//**
 * @brief Intializes STK
 * @note If HFPERCLK is changed, this routine needs to be called again
 *****************************************************************************/
void STK_Init(void)
{
  /* Enable CMU clocks */
  STK_CMUInit();
  /* Enable GPIO pins, for USART - E0/E1, and analog switch D13 */
  STK_GPIOInit();
  /* Enable UART0 */
  STK_UART0Init();
}
