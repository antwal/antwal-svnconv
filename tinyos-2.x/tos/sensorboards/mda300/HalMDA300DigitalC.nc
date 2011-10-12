
/**
 * MDA300DigitalC is a top-level access component for the 
 * ADC channels available on the mda300ca sensorboard
 *
 * @author P Sowjanya <sowjanyap@cdac.in>
 * @version $Revision: 1.0
 */

configuration HalMDA300DigitalC {
  provides interface Init;
  provides interface SplitControl;
  provides interface Dio[uint8_t channel];
}
implementation {
  components MDA300DigitalLogicP, LedsC;
  components BusyWaitMicroC;
 
  Dio = MDA300DigitalLogicP;
  Init = MDA300DigitalLogicP;
  SplitControl = MDA300DigitalLogicP;
  
//  MDA300DigitalLogicP.Leds -> LedsC;

  components HplMDA300DigitalC;

  MDA300DigitalLogicP.Interrupt -> HplMDA300DigitalC.Interrupt;
  MDA300DigitalLogicP.I2CPacket -> HplMDA300DigitalC;
  MDA300DigitalLogicP.I2CResource -> HplMDA300DigitalC;
  MDA300DigitalLogicP.IntPin -> HplMDA300DigitalC;

  MDA300DigitalLogicP.BusyWait -> BusyWaitMicroC;  

}

