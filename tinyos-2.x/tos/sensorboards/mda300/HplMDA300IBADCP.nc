/**
 * MDA300IBADCC is a top-level access component for the 
 * ADC channels available on the mda300ca sensorboard
 *
 * @author P Sowjanya <sowjanyap@cdac.in>
 * @version $Revision: 1.0
 */

module HplMDA300IBADCP {
  provides interface Init;
  provides interface SplitControl;
  uses interface GeneralIO as Exitation50;
  uses interface GeneralIO as Exitation33;
  uses interface GeneralIO as VoltageBuffer;
  uses interface GeneralIO as VoltageBooster;
  uses interface GeneralIO as Amplifier;
  uses interface GeneralIO as Power;
  uses interface SplitControl as SwitchControl;
}

implementation {

command error_t SplitControl.start() {
    call SwitchControl.start();
    return SUCCESS;
}

command error_t Init.init() {
//  call VoltageBooster.makeOutput();
  call VoltageBuffer.makeOutput();
  call Exitation33.makeOutput();
  call Exitation50.makeOutput();
  call Amplifier.makeOutput();
  call Power.makeOutput();
  call Amplifier.clr();           
  call VoltageBooster.set();
  call Exitation50.clr();
  call Exitation33.clr();
  call VoltageBuffer.clr();
  return SUCCESS;	
}

event void SwitchControl.startDone(error_t error) {
  signal SplitControl.startDone( SUCCESS );
}

command error_t SplitControl.stop() {
   call SwitchControl.stop();
   return SUCCESS;
}
 

event void SwitchControl.stopDone(error_t error) {
/*
  call VoltageBuffer.makeInput();
  call Exitation33.makeInput();
  call Exitation50.makeInput();
  call Amplifier.makeInput();
  call Amplifier.set();           
  call VoltageBooster.set();
  call Exitation50.set();
  call Exitation33.set();
  call VoltageBuffer.set();
*/
  signal SplitControl.stopDone( SUCCESS );
}

}
