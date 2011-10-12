/**
 * MDA300CounterC is a top-level access component for the
 * ADC channels available on the mda300ca sensorboard
 *
 * @author P Sowjanya <sowjanyap@cdac.in>
 * @version $Revision: 1.0
 */

#include "I2C.h"
configuration HplMDA300CounterC {
  provides {
    interface GeneralIO as IntPin;
    interface GeneralIO as Power;
    interface HplAtm128Interrupt as Interrupt;
  }
}
implementation {
  components MicaBusC, HplAtm128GeneralIOC as Pins,
    HplAtm128InterruptC as IntPins,
    new Atm128I2CMasterC() as I2C;

  IntPin  = Pins.PortE5;
  Power  = MicaBusC.PW4;
  Interrupt = IntPins.Int5;
  
}
