
/**
 * HplSensirionSht15C is a low-level component, intended to provide
 * the physical resources used by the Sensirion SHT15 sensor on the
 * mda300CA sensor board so that the chip driver can make use of them. You
 * really shouldn't be wiring to this, unless you're writing a new
 * Sensirion SHT15 driver.
 *
 * @author P Sowjanya <sowjanyap@cdac.in>
 * @author Gilman Tolle <gtolle@archrock.com>
 * @author Phil Buonadonna <pbuonadonna@archrock.com>
 * @version $Revision: 1.0 $
 */
#include <mda300.h>

configuration HplSensirionSht15C {
  provides interface SplitControl;
  provides interface Resource[ uint8_t id ];
  provides interface GeneralIO as DATA;
  provides interface GeneralIO as SCK;
  provides interface GpioInterrupt as InterruptDATA;
}
implementation {
  components  MicaBusC, new Atm128GpioInterruptC() as Int, HplAtm128InterruptC as IntPins, HplAtm128GeneralIOC as Pins;

  DATA = MicaBusC.Int3;
  SCK = MicaBusC.PW0;
  Int.Atm128Interrupt -> IntPins.Int7; 
  InterruptDATA = Int.Interrupt;

  components HplSensirionSht15P;
  SplitControl = HplSensirionSht15P;

  components new TimerMilliC();
  HplSensirionSht15P.Timer -> TimerMilliC;
  HplSensirionSht15P.DATA -> Pins.PortE7;
  HplSensirionSht15P.SCK -> Pins.PortC0; 

  components new SimpleFcfsArbiterC( "Sht15.Resource" ) as Arbiter;
  Resource = Arbiter;
}
