/**
  * File                 : Application Interfaces - Implementation  
  *
  * Project              : Adaptive Framework for Wireless Sensor Network Application
  *
  * Author               : Trilok Inakota 
  *
  * Organization         : C-DAC,Hyderabad
  *
  * Date                 :       
  *
  * Revision History     :  version 0.1
**/

/**
  * Description          :  
  *                         
  *
  *
**/

#include "CC2420.h"

generic configuration AFWA_AESC(am_id_t id)
{
  provides {
    interface SplitControl;
    interface AFWA_AESI;

  }
}

implementation
{
  components new AFWA_AESP(id),MainC , ActiveMessageC, HplCC2420PinsC, CC2420SpiWireC as SpiWireC            
  ,new CC2420SpiC() as SpiC,LedsC
  ,new AMSenderC(id), CC2420ReceiveC,CC2420PacketC ;

  SplitControl = AFWA_AESP.SplitControl;
  AFWA_AESI = AFWA_AESP.AFWA_AESI;
  
  MainC.SoftwareInit            -> AFWA_AESP.Init;
  

  AFWA_AESP.CC2420_RAM_KEY0     -> SpiWireC.Ram[CC2420_RAM_KEY0];
  AFWA_AESP.CC2420_RAM_KEY1     -> SpiWireC.Ram[CC2420_RAM_KEY1];
  AFWA_AESP.CC2420_RAM_SABUF    -> SpiWireC.Ram[CC2420_RAM_SABUF];
  AFWA_AESP.CC2420_SECCTRL0     -> SpiWireC.Reg[CC2420_SECCTRL0];
  AFWA_AESP.CC2420_SECCTRL1     -> SpiWireC.Reg[CC2420_SECCTRL1];
  AFWA_AESP.CC2420_SNOP         -> SpiWireC.Strobe[CC2420_SNOP];
  AFWA_AESP.CC2420_SAES         -> SpiWireC.Strobe[CC2420_SAES];
  AFWA_AESP.CC2420_STXENC       -> SpiWireC.Strobe[CC2420_STXENC];
  AFWA_AESP.CC2420_STXON        -> SpiWireC.Strobe[CC2420_STXON];
  AFWA_AESP.CC2420_RAM_TXFIFO   -> SpiWireC.Ram[CC2420_RAM_TXFIFO];
  AFWA_AESP.CC2420_RAM_RXFIFO   -> SpiWireC.Ram[CC2420_RAM_RXFIFO];
  AFWA_AESP.CC2420_SRXDEC       -> SpiWireC.Strobe[CC2420_SRXDEC];
  AFWA_AESP.CC2420_RAM_TXNONCE  -> SpiWireC.Ram[CC2420_RAM_TXNONCE];
  AFWA_AESP.CC2420_RAM_RXNONCE  -> SpiWireC.Ram[CC2420_RAM_RXNONCE];


  AFWA_AESP.Resource            -> SpiC;
  AFWA_AESP.CC2420Control       -> ActiveMessageC;
  AFWA_AESP.CSN                 -> HplCC2420PinsC.CSN;
  
  AFWA_AESP.Leds                -> LedsC;
  AFWA_AESP.AMSend              -> AMSenderC;
  AFWA_AESP.CC2420PacketBody    -> CC2420PacketC;
  AFWA_AESP.AesSecurity         -> CC2420ReceiveC;
 
 
}
