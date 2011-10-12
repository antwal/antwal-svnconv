
/**
 * MDA300CounterC is a top-level access component for the 
 * ADC channels available on the mda300ca sensorboard
 *
 * @author P Sowjanya <sowjanyap@cdac.in>
 * @version $Revision: 1.0
 */

generic configuration MDA300CounterC() {
  provides interface Init as CounterInit;
  provides interface SplitControl as CounterControl;
  provides interface Dio as Counter;
  provides command error_t Plugged();
}
implementation {

  components HalMDA300CounterC;

  Counter = HalMDA300CounterC;
  Plugged = HalMDA300CounterC;
  CounterInit = HalMDA300CounterC;
  CounterControl = HalMDA300CounterC;
}
