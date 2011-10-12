/**
 * MDA300IBADCC is a top-level access component for the
 * ADC channels available on the mda300ca sensorboard
 *
 * @author P Sowjanya <sowjanyap@cdac.in>
 * @version $Revision: 1.0
 */

#include "I2C.h"
configuration HplMDA300IBADCC {
  provides {
    interface Init;
    interface SplitControl; 
    interface GeneralIO as Exitation50;
    interface GeneralIO as Exitation33;
    interface GeneralIO as VoltageBuffer;
    interface GeneralIO as VoltageBooster;
    interface GeneralIO as Amplifier;
    interface I2CPacket<TI2CBasicAddr>;
    interface Resource as I2CResource;
    interface Timer<TMilli> as PowerStabalizingTimer;	
  }
  uses interface SplitControl as SwitchControl; 
}
implementation {
  components MicaBusC, HplAtm128GeneralIOC as Pins,
    new Atm128I2CMasterC() as I2C,
    new TimerMilliC() as WarmupTimer;
/*
    new RoundRobinArbiterC(UQ_MDA300_ANALOG) as AnalogArbiter,
    new SplitControlPowerManagerC() as IBADCPower,
*/
  PowerStabalizingTimer = WarmupTimer.Timer;

  Exitation50  = MicaBusC.PW5;
  Exitation33  = MicaBusC.PW3;

  VoltageBuffer  = MicaBusC.PW2;	
  VoltageBooster = MicaBusC.PW1;	
  Amplifier = MicaBusC.PW6;
  
  I2CPacket = I2C;
  I2CResource = I2C.Resource;

  components HplMDA300IBADCP;
  Init = HplMDA300IBADCP;
  SplitControl = HplMDA300IBADCP;
  SwitchControl = HplMDA300IBADCP;
/*
  IBADCPower.ResourceDefaultOwner -> AnalogArbiter;
  IBADCPower.ArbiterInfo -> AnalogArbiter;
  IBADCPower.SplitControl -> HplMDA300IBADCP;
*/
  HplMDA300IBADCP.Exitation50    -> MicaBusC.PW5;
  HplMDA300IBADCP.Exitation33    -> MicaBusC.PW3;
  HplMDA300IBADCP.VoltageBuffer  -> MicaBusC.PW2;
  HplMDA300IBADCP.VoltageBooster -> MicaBusC.PW1;
  HplMDA300IBADCP.Amplifier      -> MicaBusC.PW6;
  HplMDA300IBADCP.Power          -> MicaBusC.PW4;

}
