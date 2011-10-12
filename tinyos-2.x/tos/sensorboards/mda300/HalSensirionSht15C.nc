
/**
 * HalSensirionSht15C is an advanced access component for the
 * Sensirion SHT15 model humidity and temperature sensor, available on
 * the mda300CA sensor board. This component provides the SensirionSht15
 * interface, which offers full control over the device. Please
 * acquire the Resource before using it.
 *
 * @author P Sowjanya <sowjanyap@cdac.in>
 * @author Gilman Tolle <gtolle@archrock.com>
 * @author Phil Buonadonna <pbuonadonna@archrock.com>
 * @version $Revision: 1.0 $
 */

configuration HalSensirionSht15C {
  provides interface SplitControl;
  provides interface Resource[ uint8_t client ];
  provides interface SensirionSht15[ uint8_t client ];
}
implementation {
  components new SensirionSht15LogicP();
  SensirionSht15 = SensirionSht15LogicP;

  components HplSensirionSht15C;
  SplitControl = HplSensirionSht15C;
  Resource = HplSensirionSht15C.Resource;
  SensirionSht15LogicP.DATA -> HplSensirionSht15C.DATA;
  SensirionSht15LogicP.CLOCK -> HplSensirionSht15C.SCK;
  SensirionSht15LogicP.InterruptDATA -> HplSensirionSht15C.InterruptDATA;

  
  components new TimerMilliC();
  SensirionSht15LogicP.Timer -> TimerMilliC;

  components NoLedsC;
  SensirionSht15LogicP.Leds -> NoLedsC;
}
