/**
 * MDA300DigitalC is a top-level access component for the
 * ADC channels available on the mda300ca sensorboard
 *
 * @author P Sowjanya <sowjanyap@cdac.in>
 * @version $Revision: 1.0
 */

#include "I2C.h"
configuration HplMDA300DigitalC {
  provides {
    interface GeneralIO as IntPin;
    interface HplAtm128Interrupt as Interrupt;
    interface I2CPacket<TI2CBasicAddr>;
    interface Resource as I2CResource;
//    interface Timer<TMilli> as PowerStabalizingTimer;	
  }
}
implementation {
  components MicaBusC, HplAtm128GeneralIOC as Pins,
    HplAtm128InterruptC as IntPins,
    new Atm128I2CMasterC() as I2C,
    new TimerMilliC() as WarmupTimer;

//  PowerStabalizingTimer = WarmupTimer.Timer;

  IntPin  = Pins.PortE4;
  Interrupt = IntPins.Int4;
  
  I2CPacket = I2C;
  I2CResource = I2C.Resource;
}
