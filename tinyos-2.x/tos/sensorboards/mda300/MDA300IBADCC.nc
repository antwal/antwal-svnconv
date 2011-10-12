
/**
 * MDA300IBADCC is a top-level access component for the 
 * ADC channels available on the mda300ca sensorboard
 *
 * @author P Sowjanya <sowjanyap@cdac.in>
 * @version $Revision: 1.0
 */

generic configuration MDA300IBADCC() {
  provides {
    interface Init;
    interface SplitControl;
    interface ADConvert[uint8_t port];
    interface SetParam[uint8_t port];
    interface Power as EXITATION25;
    interface Power as EXITATION33;
    interface Power as EXITATION50;
  }
}
implementation {

  components HalMDA300IBADCC;

  Init = HalMDA300IBADCC;
  SplitControl = HalMDA300IBADCC;
  ADConvert = HalMDA300IBADCC;
  SetParam = HalMDA300IBADCC;
  EXITATION25 = HalMDA300IBADCC.EXITATION25;
  EXITATION33 = HalMDA300IBADCC.EXITATION33;
  EXITATION50 = HalMDA300IBADCC.EXITATION50;
}
