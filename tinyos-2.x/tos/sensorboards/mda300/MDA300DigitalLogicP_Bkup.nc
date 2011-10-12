/**
 * MDA300DigitalC is a top-level access component for the 
 * ADC channels available on the mda300ca sensorboard
 *
 * @author P Sowjanya <sowjanyap@cdac.in>
 * @version $Revision: 1.0
 */
includes sensorboard;
module MDA300DigitalLogicP {
    provides {
        interface SplitControl;
        interface Dio[uint8_t channel];
    }
    uses {
        interface I2CPacket<TI2CBasicAddr>;
        interface Resource as I2CResource;
        interface GeneralIO as IntPin;
        interface HplAtm128Interrupt as Interrupt; 
    }
}

implementation {

    //Note we have no async code here so there is no possibility of any race condition

    uint8_t state;      //keep state of our State Machine 
    uint8_t io_value;   //keep track of what is actually on the chip
    uint8_t mode[8];    //keep track of the mode of each channel
    uint16_t count[8];  //we can count the number of pulses 
    uint8_t bitmap_high,bitmap_low,bitmap_toggle;   //the param setting we get this is for channel number
    uint8_t i2c_data, buff;    //the data read from the chip

    #define XOR(a,b)  ((a) & ~(b))|(~(a) & (b))

    //set of bitwise functions
    #define  testbit(var, bit)   ((var) & (1 <<(bit)))      //if zero then return zero and if one not equal zero
    #define  setbit(var, bit)    ((var) |= (1 << (bit)))
    #define  clrbit(var, bit)    ((var) &= ~(1 << (bit)))


    enum {GET_DATA, SET_OUTPUT_HIGH, SET_OUTPUT_LOW, SET_OUTPUT_TOGGLE , GET_THEN_SET_INPUT, IDLE , INIT};

    task void init_io()
    {
        if (call I2CPacket.read(0x03, TOS_DIGITAL_I2C_ADDR, 1, &buff) == FAIL) {
          post init_io();
        } else        
          signal SplitControl.startDone(SUCCESS); 
    }	

    event void I2CResource.granted()
    {
        post init_io();
    }

    command error_t SplitControl.start() {
        atomic {
          mode[0] = RISING_EDGE;
          mode[1] = RISING_EDGE;
          mode[2] = RISING_EDGE;
          mode[3] = RISING_EDGE;
          mode[4] = RISING_EDGE;
          mode[5] = RISING_EDGE;
          mode[6] = DIG_OUTPUT;		    // Relay Channels		
          mode[7] = DIG_OUTPUT;
          io_value=0xff;         	    //set all inputs to high and relays OFF (we know chip boots to 0xff)
          state=INIT;             
	}
        call IntPin.makeInput();            // Making INT pin input
        call I2CResource.request(); 
        return SUCCESS;
    }
   
    command error_t SplitControl.stop() {
        signal SplitControl.stopDone(SUCCESS); 
        return SUCCESS;
    }
        
    command error_t Dio.setParam[uint8_t channel](uint8_t modeToSet)
    {    
        //we only set INT flag if we set any channel to input otherwise we do not touch it.
        atomic mode[channel]=modeToSet;
        if (((modeToSet & RISING_EDGE) == 0) && ((modeToSet & FALLING_EDGE) == 0)) {atomic mode[channel] |= RISING_EDGE;}
        return FAIL;
    }
    
    task void set_io_high()
    {
        uint8_t i;
        atomic {
	  if (state==IDLE)
            state= SET_OUTPUT_HIGH; 
          else { post set_io_high(); return; }
	}

        atomic i2c_data=io_value;
        for (i=0; i<=7; i++) {
          if (testbit(bitmap_high,i)) {    
            atomic setbit(i2c_data,i);
          }
          if (!(mode[i] & DIG_OUTPUT)) { atomic setbit(i2c_data,i); }          //if we set them to High as week input
        }
        //we should leave inputs as high and outputs either high or low
        if ((call I2CPacket.write(0x01, TOS_DIGITAL_I2C_ADDR, 1, (uint8_t*)&i2c_data)) == FAIL)
        {
          atomic state=IDLE;
          post set_io_high();
        } else { bitmap_high=0x0; }
    }
    
    task void set_io_low()
    {
        uint8_t i;
        atomic {
	  if (state==IDLE)
            state= SET_OUTPUT_LOW; 
          else { post set_io_low(); return; }
	}

        atomic i2c_data=io_value;
        //we should leave inputs as high and outputs either high or low
        for (i=0; i<=7; i++) {
          if (testbit(bitmap_low,i)) {
            atomic clrbit(i2c_data,i);
          }
          if(!(mode[i] & DIG_OUTPUT)) { atomic setbit(i2c_data,i); }            //if we set them to High as week input
        }
        if ((call I2CPacket.write(0x01, TOS_DIGITAL_I2C_ADDR, 1, (uint8_t*)&i2c_data)) == FAIL)
        {
          atomic state=IDLE;
          post set_io_low();
        } else { bitmap_low=0x0; }
    }
    
    task void set_io_toggle()
    {
        uint8_t i;
        atomic {
	  if(state==IDLE)
            state= SET_OUTPUT_TOGGLE; 
          else { post set_io_toggle(); return; }
	}

        atomic i2c_data=io_value;
        //we should leave inputs as high and outputs either high or low
        for (i=0; i<=7; i++) {
          if (testbit(bitmap_toggle,i)) {
	    atomic {	
              if (testbit(i2c_data,i)) {
                clrbit(i2c_data,i);
              } else {
                setbit(i2c_data,i);
              }
	    }
          }
          if(!(mode[i] & DIG_OUTPUT)) { atomic setbit(i2c_data,i); }           //if we set them to High as week input
        }       
              
        if ((call I2CPacket.write(0x01, TOS_DIGITAL_I2C_ADDR, 1, (uint8_t*)&i2c_data)) == FAIL)
        {
          atomic state=IDLE;
          post set_io_toggle();
        } else { bitmap_toggle=0x0; }
    }
    
    command error_t Dio.Toggle[uint8_t channel]()
    {
        if (DIG_OUTPUT & mode[channel])
        {
          setbit(bitmap_toggle,channel); 
          post set_io_toggle();
          return SUCCESS;
        }
        else { return FALSE; }
    }
    
    command error_t Dio.high[uint8_t channel]()
    {
        if (DIG_OUTPUT & mode[channel])
        {
          setbit(bitmap_high,channel);            
          post set_io_high();
          return SUCCESS;
        }
        else { return FALSE; }
    }
    
    command error_t Dio.low[uint8_t channel]()
    {
        if (DIG_OUTPUT & mode[channel])
        {
          setbit(bitmap_low,channel);
          post set_io_low();
          return SUCCESS;
        }
        else { return FALSE; }
    }
    
    command error_t Dio.read[uint8_t channel]()
    {    
        uint16_t counter;

        atomic counter = count[channel];
        if (RESET_ZERO_AFTER_READ & mode[channel]) {atomic count[channel]=0;}
        signal Dio.readDone[channel](counter);
        return SUCCESS;
    } 
    
    default event void Dio.readDone[uint8_t channel](uint16_t data) 
    {
        return;
    } 

    task void read_io()
    {
	atomic {
          if (state==IDLE)
	    state=GET_DATA; 
          else { post read_io(); return;}
	}

        if (call I2CPacket.read(0x03, TOS_DIGITAL_I2C_ADDR, 1, &buff) == FAIL)
        {
          atomic state=IDLE;
          post read_io();
        }
     }

     async event void I2CPacket.writeDone(error_t error, uint16_t addr, uint8_t length, uint8_t* data)
     {
        if(!error) {
	  atomic {
            if ( state == SET_OUTPUT_HIGH || state == SET_OUTPUT_LOW || state == SET_OUTPUT_TOGGLE) {
              //io_value=i2c_data;
              state = IDLE;
              //call Interrupt.disable();
              //if(!post read_io()) call Interrupt.enable();
            }
	  }
        }
        return ;
    }
   
    async event void I2CPacket.readDone(error_t error, uint16_t addr, uint8_t length, uint8_t* data)
    {
       uint8_t ChangedState;
       int i;

       i2c_data=*data;
       if (length != 1)
       {
         atomic state = IDLE;
         call Interrupt.enable();
         return ;
       } 

       if (state==INIT)
       {
	 atomic {
           io_value=i2c_data;
           state=IDLE;
	 }
         call Interrupt.enable();
       }
       
       if (state==GET_DATA) {
         ChangedState = XOR(io_value,i2c_data);     //see those one who has changed               
         for (i=0; i<8; i++) {
           if (!( mode[i] & DIG_OUTPUT)) {       //we only care about channels which are not output (input channels)
             if (testbit(ChangedState,i)) {       //find the channels which are realy changed
               if (mode[i] & RISING_EDGE)
               {
                 if (testbit(io_value,i)==0 && testbit(i2c_data,i)!=0) { 
                   if (EVENT & mode[i]) { signal Dio.readDone[i](count[i]); }
                     // if (count[i] == 0xffff) signal Dio.dataOverflow[i]();
                   atomic count[i]++; 
                 }
               }

               if (mode[i] & FALLING_EDGE)
               {
                   if(testbit(io_value,i)!=0 && testbit(i2c_data,i)==0) {
                     if(EVENT & mode[i]) { signal Dio.readDone[i](count[i]); }
                     //                           if (count[i] == 0xffff) signal Dio.dataOverflow[i]();
                     atomic count[i]++;
                   }
               }
             }               
           }
         }
         atomic io_value=i2c_data;
         call Interrupt.enable();
         atomic state = IDLE;
       }
       return ;
    }

    async event void Interrupt.fired()                
    {
        call Interrupt.disable();
        if(!post read_io()) { call Interrupt.enable(); }
        return;
    }   

}
