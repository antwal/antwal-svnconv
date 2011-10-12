/**
 * HplSensirionSht15P is a low-level component that controls power for
 * the Sensirion SHT15 sensor on the mda300CA sensor board
 *
 * @author P Sowjanya <sowjanyap@cdac.in>
 * @author Phil Buonadonna <pbuonadonna@archrock.com>
 * @version $Revision: 1.0 $
 */


#include "Timer.h"

module HplSensirionSht15P {
  provides interface SplitControl;
  uses interface Timer<TMilli>;
  uses interface GeneralIO as DATA;
  uses interface GeneralIO as SCK;
}

implementation {
  task void stopTask();

  command error_t SplitControl.start() {
    call DATA.makeOutput();
    call DATA.set();
    call SCK.makeInput();
    call SCK.clr();
    call Timer.startOneShot( 11 );
    return SUCCESS;
  }
  
  event void Timer.fired() {
    signal SplitControl.startDone( SUCCESS );
  }

  command error_t SplitControl.stop() {
    call SCK.makeInput();
    call SCK.clr();
    call DATA.makeInput();
    call DATA.clr();
    post stopTask();
    return SUCCESS;
  }

  task void stopTask() {
    signal SplitControl.stopDone( SUCCESS );
  }

//  async event void DATA.interruptGPIOPin() { return; }
//  async event void SCK.interruptGPIOPin() { return; }
}

