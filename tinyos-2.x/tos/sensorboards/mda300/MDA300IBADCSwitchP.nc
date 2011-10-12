/**
 * MDA300IBADCC is a top-level access component for the
 * ADC channels available on the mda300ca sensorboard
 *
 * @author P Sowjanya <sowjanyap@cdac.in>
 * @version $Revision: 1.0
 */
includes sensorboard;

module MDA300IBADCSwitchP
{
    provides {
        interface SplitControl as SwitchControl;
        interface Switch;
    }
    uses interface Resource as I2CResource;
    uses interface I2CPacket<TI2CBasicAddr>;
}
implementation
{

  enum { GET_SWITCH, SET_SWITCH, SET_SWITCH_ALL, 
         SET_SWITCH_GET, IDLE};

  uint8_t sw_state; /* current state of the switch */
  uint8_t state;    /* current state of the i2c request */
//  uint8_t addr;     /* destination address */
  uint8_t position;
  uint8_t value;

  
  command error_t SwitchControl.start() {
      atomic state = IDLE;
      signal SwitchControl.startDone(SUCCESS);	
      return SUCCESS;
  }
  
  command error_t SwitchControl.stop() {
      signal SwitchControl.stopDone(SUCCESS);	
      return SUCCESS;
  }

  
  command error_t Switch.get() {
      /*
      if (state == IDLE)
          {
              state = GET_SWITCH;
              return call I2CPacket.readPacket(1, 0x01);
          }
      */
      return FAIL;
  }

  command error_t Switch.set(uint8_t l_position, uint8_t l_value) {
      /*
      if (state == IDLE)
          {
              state = SET_SWITCH_GET;
              value = l_value;
              position = l_position;
              return call I2CPacket.readPacket(1,0x01);
          }
      */
      return FAIL;
  }

  command error_t Switch.setAll(uint8_t val)
  {
      atomic {	
        if (state == IDLE)
        {
	  state = SET_SWITCH_ALL;
	  sw_state = val;
	  return call I2CResource.request();
        }
      }
      return FAIL;
  }
 
  event void I2CResource.granted()
  {
      if (call I2CPacket.write(0x03, TOS_SWITCH_I2C_ADDR, 1, (uint8_t*)(&sw_state)) == FAIL)
      {
        atomic state = IDLE;
        return;
      }
  }
  
  async event void I2CPacket.writeDone(error_t error, uint16_t addr, uint8_t length, uint8_t* data)
  {
     if (state == SET_SWITCH)
     {
       atomic state = IDLE;
       signal Switch.setDone(error);
     }
     else if (state == SET_SWITCH_ALL) {
       atomic state = IDLE;
       signal Switch.setAllDone(error);
     }
     call I2CResource.release();
     return ;
  }
 
  async event void I2CPacket.readDone(error_t error, uint16_t addr, uint8_t length, uint8_t* data)
  {
     /*
       if (state == GET_SWITCH)
          {
          if (length != 1)
          {
          state = IDLE;
          signal Switch.getDone(0);
                      return SUCCESS;
                      }
                      else {
                      state = IDLE;
                      signal Switch.getDone(data[0]);
                      return SUCCESS;
                      }
                      }
                      if (state == SET_SWITCH_GET)
          {
          if (length != 1)
          {
          state = IDLE;
          signal Switch.getDone(0);
          return SUCCESS;
          }
          
          sw_state = data[0];
          
          if (position == 1) {
          sw_state = sw_state & 0xFE;
          sw_state = sw_state | value;
          }
          if (position == 2) {
          sw_state = sw_state & 0xFD;
          sw_state = sw_state | (value << 1);
          }
          if (position == 3) {
          sw_state = sw_state & 0xFB;
                  sw_state = sw_state | (value << 2);
                  }
                  if (position == 4) {
                  sw_state = sw_state & 0xF7;
                  sw_state = sw_state | (value << 3);
                  }
                  if (position == 5) {
                  sw_state = sw_state & 0xEF;
                  sw_state = sw_state | (value << 4);
                  }
                  if (position == 6) {
                  sw_state = sw_state & 0xDF;
                  sw_state = sw_state | (value << 5);
                  }
                  if (position == 7) {
                  sw_state = sw_state & 0xBF;
                  sw_state = sw_state | (value << 6);
                  }
                  if (position == 8) {
                  sw_state = sw_state & 0x7F;
                  sw_state = sw_state | (value << 7);
                  }
                  data[0] = sw_state;
                  state = SET_SWITCH;
                  call I2CPacket.writePacket(1, (uint8_t*)&sw_state, 0x01);
                  return SUCCESS;
                  } 
     */
     return ;
  }
 

  default event void Switch.getDone(uint8_t val) 
  {
      return ;
  }
  
  default event void Switch.setDone(bool r) 
  {
      return ;
  }
  
  default event void Switch.setAllDone(bool r) 
  {
      return ;
  }
  
}
