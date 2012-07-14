/**
 * MDA300RelayP is a module component that uses Digital  
 * channels 6 & 7 to function as Relay Control Channels. Allowing 
 * opening and closing of the relays. By default one relay is closed 
 * and the other is open.
 *
 * @author P Sowjanya <sowjanyap@cdac.in>
 * @version $Revision: 1.0
 */

module MDA300RelayP {
  provides {
    interface Relay as relay_normally_closed;
    interface Relay as relay_normally_open;
    interface SplitControl as RelayControl;  //if u use Digital I/O no and initialize them no need to this.
  }
  uses {
    interface Dio as Dio6;
    interface Dio as Dio7;
    interface SplitControl as DioControl;
  }
}
implementation {


  command error_t RelayControl.start() {
    call DioControl.start();
    return SUCCESS;
  }

  event void DioControl.startDone(error_t error) {
    signal RelayControl.startDone(SUCCESS);
  }
  
  command error_t RelayControl.stop() {
    signal RelayControl.stopDone(SUCCESS);
    return SUCCESS;
  }

  command error_t relay_normally_closed.open()
    {
      call Dio7.low();      
      return SUCCESS;
    }
  
  command error_t relay_normally_closed.close()
    {
      call Dio7.high();
      return SUCCESS;
    }
  
  command error_t relay_normally_closed.toggle()
    {
      call Dio7.Toggle();
      return SUCCESS;
    }
  
  command error_t relay_normally_open.open()
    {
      call Dio6.high();
      return SUCCESS;
    }
  
  command error_t relay_normally_open.close()
    {
      call Dio6.low();
      return SUCCESS;
    }
  
  command error_t relay_normally_open.toggle()
    {
      call Dio6.Toggle();
      return SUCCESS;
    }

   event void Dio6.readDone(uint16_t data) {
      return SUCCESS;
  }

   event void Dio7.readDone(uint16_t data) {
      return SUCCESS;
  }

}
