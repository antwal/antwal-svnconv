/**
 * MDA300CounterC is a top-level access component for the
 * ADC channels available on the mda300ca sensorboard
 *
 * @author P Sowjanya <sowjanyap@cdac.in>
 * @version $Revision: 1.0
 */

module MDA300CounterLogicP {
    provides {
	interface Init as CounterInit;
        interface SplitControl as CounterControl;
        interface Dio as Counter;
        command error_t Plugged();
    }
    uses {
        interface Leds;
	interface BusyWait<TMicro, uint16_t>;
        interface GeneralIO as IntPin;
        interface GeneralIO as Power;
        interface HplAtm128Interrupt as Interrupt;
    }
}

implementation {

    uint16_t count;
    uint8_t state;
    uint8_t mode;
    error_t boardConnected;

    command error_t CounterInit.init() {
        bool c;
        call Interrupt.disable();
        call Power.makeOutput();
        call Power.clr();
	call BusyWait.wait(1);		// TOSH_uwait(1);
        c = call IntPin.get();          // PORTE pin 5
        call Power.set();
	call BusyWait.wait(1);
        if(c == (call IntPin.get())) boardConnected=FALSE;
        else boardConnected=TRUE;
	//if(boardConnected == TRUE) { call Leds.led1On(); }
        call Power.clr();
        atomic {
        mode=RISING_EDGE;
        count=0;
        state=0;
        }
        call IntPin.makeInput();            //Making INT pin input
        call IntPin.set();   		    //and pull-up so that when the board is not there still operates
	return SUCCESS;
    }

    command error_t CounterControl.start() {
        call Power.clr();
        atomic {
        count=0;
        state=0;
        }
        call Interrupt.enable();
        signal CounterControl.startDone(SUCCESS);
        return SUCCESS;
    }
    
    command error_t CounterControl.stop() {
        call Interrupt.disable();
        signal CounterControl.stopDone(SUCCESS);
     return SUCCESS;
    }
    
  command error_t Counter.setParam(uint8_t modeToSet)
      {    
          //The available INT that is IN0-INT4 are not configurable
          //io is always input
          atomic{
          mode=modeToSet;
            if( ((mode & RISING_EDGE) == 0) & ((mode & FALLING_EDGE) == 0) ) 
                mode |= RISING_EDGE;
          }
          return SUCCESS;  
      }

  command error_t Plugged(){
      return boardConnected;
  }
  
  command error_t Counter.high()
      {
          return SUCCESS;
      }
  
  command error_t Counter.low()
      {
          return SUCCESS;
      }

  command error_t Counter.Toggle()
      {
          return SUCCESS;
      }
  
  command error_t Counter.read()
      {             
            uint16_t counter;
            atomic { 
                counter = count;
                if(RESET_ZERO_AFTER_READ & mode) count=0;
            }
            signal Counter.readDone(counter);
            return SUCCESS;
      } 
  
  default event void Counter.readDone(uint16_t data) 
      {
           return ;
      } 
  
  task void count_ready()
      {
            uint16_t counter;
            atomic { 
                counter = count;
            }
          signal Counter.readDone(counter);
      }

async event void Interrupt.fired()
      {           
          atomic {
              //call Interrupt.disable();
          if(state==0){
               call Power.clr();
               state=1;
               if(mode & FALLING_EDGE) {
                   count++;
                   if(EVENT & mode) post count_ready();
               }
           }
           else {
               call Power.set();
               state=0;
               if(mode & RISING_EDGE) {
                   count++;
                   if(EVENT & mode) post count_ready();
               }
           }
          //call Interrupt.enable();
          }
           return;
      }      
}
