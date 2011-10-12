
/**
 * MDA300DigitalC is a top-level access component for the 
 * ADC channels available on the mda300ca sensorboard
 *
 * @author P Sowjanya <sowjanyap@cdac.in>
 * @version $Revision: 1.0
 */

generic configuration MDA300DigitalC() {
  provides interface Init;
  provides interface SplitControl;
  provides interface Dio[uint8_t channel];
}
implementation {

  components HalMDA300DigitalC;

  Dio = HalMDA300DigitalC;
  Init = HalMDA300DigitalC;
  SplitControl = HalMDA300DigitalC;
}
