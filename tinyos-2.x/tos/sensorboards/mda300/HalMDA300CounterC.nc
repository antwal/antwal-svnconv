
/**
 * MDA300CounterC is a top-level access component for the 
 * ADC channels available on the mda300ca sensorboard
 *
 * @author P Sowjanya <sowjanyap@cdac.in>
 * @version $Revision: 1.0
 */

configuration HalMDA300CounterC {
  provides interface Init as CounterInit;
  provides interface SplitControl as CounterControl;
  provides interface Dio as Counter;
  provides command error_t Plugged();
}
implementation {
  components MDA300CounterLogicP, LedsC;
  components BusyWaitMicroC;
  
  Counter = MDA300CounterLogicP;
  Plugged = MDA300CounterLogicP;
  CounterInit = MDA300CounterLogicP;
  CounterControl = MDA300CounterLogicP;
  
  MDA300CounterLogicP.Leds -> LedsC;

  components HplMDA300CounterC;

  MDA300CounterLogicP.Interrupt -> HplMDA300CounterC.Interrupt;
  MDA300CounterLogicP.IntPin -> HplMDA300CounterC.IntPin;
  MDA300CounterLogicP.Power -> HplMDA300CounterC.Power;
  MDA300CounterLogicP.BusyWait -> BusyWaitMicroC;

}

