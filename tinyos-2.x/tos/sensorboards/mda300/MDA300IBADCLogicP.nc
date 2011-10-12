/**
 * MDA300IBADCC is a top-level access component for the 
 * ADC channels available on the mda300ca sensorboard
 *
 * @author P Sowjanya <sowjanyap@cdac.in>
 * @version $Revision: 1.0
 */
includes sensorboard;

module MDA300IBADCLogicP
{
  provides {
    interface ADConvert[uint8_t port];
    interface SetParam[uint8_t port];
    interface Power as EXITATION25;
    interface Power as EXITATION33;
    interface Power as EXITATION50;
  }
  uses interface GeneralIO as Exitation50;
  uses interface GeneralIO as Exitation33;
  uses interface GeneralIO as VoltageBuffer;
  uses interface GeneralIO as VoltageBooster;
  uses interface GeneralIO as Amplifier;
  uses interface I2CPacket<TI2CBasicAddr>;
  uses interface Resource as I2CResource;
  uses interface Timer<TMilli> as PowerStabalizingTimer;
  uses interface Switch;
  uses interface Leds;
}
implementation
{
    enum {IDLE, PICK_CHANNEL, GET_SAMPLE, CONTINUE_SAMPLE , START_CONVERSION_PROCESS};
  
    #define VOLTAGE_STABLE_TIME 50           //Time it takes for the supply voltage to be stable enough
    #define MAX_ANALOG_CHNNELS 13
    #define MAX_CHANNELS MAX_ANALOG_CHNNELS + 1 //The last channel is not an analog channel but we keep it only for the sake of exciation.

    //set of bitwise functions
    #define  testbit(var, bit)   ((var) & (1 <<(bit)))      //if zero then return zero and if one not equal zero
    #define  setbit(var, bit)    ((var) |= (1 << (bit)))
    #define  clrbit(var, bit)    ((var) &= ~(1 << (bit)))

    /*Note:we do not do anything inside async part so all parts are synchronous and
      there is no synchronization hazard.Now ADC runs in the round-robin fashin so it
      is fair.*/
    
    uint8_t state = IDLE;       /* current state of the i2c request */
    uint16_t value;
    uint8_t buff[3];   /* value of the incoming ADC reading */
    uint8_t chan;
    uint8_t param[MAX_CHANNELS];  /*we reserve last param for excitation of digital channels*/
    uint16_t adc_bitmap = 0;
    int8_t conversionNumber;
    //Note "condition" should be a global variable.Since It is passed by address to I2CPacketM.nc and so
    //should be valid even out of the scope of that function since I2CPacketM.nc uses it by its address.
    uint8_t condition;   // set the condition command byte.

    /*declaration of function convert*/
    error_t convert();

 
    void setExcitation()
    {
	call VoltageBooster.clr();
        if (param[chan] & EXITATION_25) call VoltageBuffer.set();
        if (param[chan] & EXITATION_33) 
        {
          call Exitation33.set();
        }
        if (param[chan] & EXITATION_50)
        {
          call Exitation50.set();
        }
    }
    
    void resetExcitation()
    {    
        uint8_t i;
        uint8_t flag25=0,flag33=0,flag50=0;

        for (i=0 ; i < MAX_CHANNELS ;i++) 
        {
           if (param[i] & EXITATION_ALWAYS_ON)
           {
              if (param[i] & EXITATION_25) flag25=1;
              if (param[i] & EXITATION_33) flag33=1;
              if (param[i] & EXITATION_50) flag50=1;
           }
        }

        if (flag25==0) call VoltageBuffer.clr();
        if (flag33==0) call Exitation33.clr();
        if (flag50==0) call Exitation50.clr();

        if (!flag25 && !flag33 && !flag50)
	{
	  call VoltageBooster.set();
	}
    }

    void setNumberOfConversions()
    {
        atomic {
	  conversionNumber = 1;
          if (param[chan] & AVERAGE_FOUR) conversionNumber = 4;
          if (param[chan] & AVERAGE_EIGHT) conversionNumber = 8;
          if (param[chan] & AVERAGE_SIXTEEN) conversionNumber = 16;
	}
        return;
    }

    command void EXITATION25.on()
    {
        param[MAX_CHANNELS - 1] |= EXITATION_25;
        param[MAX_CHANNELS - 1] |= EXITATION_ALWAYS_ON;
        call VoltageBooster.clr();
        call VoltageBuffer.set();
    }

    command void EXITATION25.off()
    {
        param[MAX_CHANNELS - 1] &= !EXITATION_25;
        atomic { if (state == IDLE) resetExcitation(); }  //otherwise the fuction will be called at the end of conversion
    }

    command void EXITATION33.on()
    {
        param[MAX_CHANNELS - 1] |= EXITATION_33;
        param[MAX_CHANNELS - 1] |= EXITATION_ALWAYS_ON;
        call VoltageBooster.clr();
        call Exitation33.set();
    }

    command void EXITATION33.off()
    {
        param[MAX_CHANNELS - 1] &= !EXITATION_33;
        atomic { if (state == IDLE) resetExcitation(); }  //otherwise the fuction will be called at the end of conversion
    }

    command void EXITATION50.on()
    {
        param[MAX_CHANNELS - 1] |= EXITATION_50;
        param[MAX_CHANNELS - 1] |= EXITATION_ALWAYS_ON;
        call VoltageBooster.clr();
        call Exitation50.set();
    }

    command void EXITATION50.off()
    {
        param[MAX_CHANNELS-1] &= !EXITATION_50;
        atomic { if (state == IDLE) resetExcitation(); }  //otherwise the fuction will be called at the end of conversion
    }


    command error_t SetParam.setParam[uint8_t id](uint8_t mode){
	atomic param[id]=mode;
	return SUCCESS;
    }


    task void adc_get_data()
    {
	uint8_t myIndex;
 	uint8_t count;
	uint16_t my_bitmap;

	atomic { if(state != IDLE) return; } // That means the component is busy in a conversion process.
					     // When conversion done either successfull or fail it is gauranteed 
					     // that this task will be posted so we can safely return.     
	if (!call I2CResource.isOwner()) {
	  call I2CResource.request();
	  return;
	} 
      
	atomic {
	  value=0;    
	  state=START_CONVERSION_PROCESS; 
	  my_bitmap = adc_bitmap;
	}

	//This gaurantees a round robin fair scheduling of ADC conversions.
	count=0;
	myIndex=chan+1;
	if (myIndex > MAX_ANALOG_CHNNELS) myIndex=0;

	while (!testbit(my_bitmap,myIndex))
	{
	   myIndex++;
	   if (myIndex > MAX_ANALOG_CHNNELS) myIndex=0;
	   count++;
	   if (count > MAX_ANALOG_CHNNELS) {
	     atomic state=IDLE;
   	     call I2CResource.release();
	     return;
	   }   //no one waiting for conversion
	}

	atomic chan=myIndex;
	setExcitation();
	setNumberOfConversions();
	//if among the instrumentation channels we set the MUX	
	if (chan == 7 || chan==8 || chan==9 || chan==10) 
	{
	  uint8_t muxChannel;

	  call Amplifier.set();		    
	  switch (chan) {
	    default:			// should never happen
	    case 7:
		 muxChannel = MUX_CHANNEL_SEVEN;
		 break;
	    case 8:
		 muxChannel = MUX_CHANNEL_EIGHT;
		 break;
	    case 9:
		 muxChannel = MUX_CHANNEL_NINE;
		 break;
	    case 10:
		 muxChannel = MUX_CHANNEL_TEN;
		 break;
	  };
			  
	  if ((call Switch.setAll(muxChannel)) == FAIL)
	  {	
	    // Can not select channel
	    atomic state = IDLE;
	    call Amplifier.clr(); 
	    post adc_get_data();
	    resetExcitation();
	  }
	}
	else {
	  //If the conversions happens fast there is no need to
	  //wait for settling of the power supply,note that power supply should be set ON by user using the excitation command
	  if (param[chan] & DELAY_BEFORE_MEASUREMENT) {
	    call PowerStabalizingTimer.startOneShot(VOLTAGE_STABLE_TIME);
	  }
	  else {
	    convert();
	  }
	}
	return ;
    }
 
    error_t convert()
    {
      atomic {
	if (state == START_CONVERSION_PROCESS || state == CONTINUE_SAMPLE)
	{
	  state = PICK_CHANNEL;
	  // figure out which channel is to be set
	  switch (chan) {
	    default:			// should never happen
	    case 0:
	      condition = 8;
	      break;
	    case 1:
	      condition = 12;
	      break;
	    case 2:
   	      condition = 9;
	      break;
 	    case 3:
	      condition = 13;
	      break;
	    case 4:
	      condition = 10;
	      break;
	    case 5:
	      condition = 14;
	      break;
	    case 6:
	      condition = 11;
	      break;
	    case 7:
	    case 8:
	    case 9:
	    case 10:
	    //these channels all use ADC channel 7 and multiplex it.
	      condition = 15;
	      break;
	    case 11:
	      condition = 0;
	      break;
	    case 12:
	      condition = 1;
	      break;
	    case 13:
	      condition = 2;
	      break;
	  }
	}
	// shift the channel and single-ended input bits over
	condition = (condition << 4) & 0xf0;
	condition = condition | 0x0f;
      }
      //tell the ADC to start converting 
      if ((call I2CPacket.write(0x03, TOS_IBADC_I2C_ADDR, 1, (uint8_t*)(&condition)) != SUCCESS))
      {
	atomic state = IDLE;
	post adc_get_data();
	resetExcitation();
	return FAIL;
      }

      return SUCCESS;
      call Amplifier.clr();
    }
			
    // get a single reading from id we
    command error_t ADConvert.read[uint8_t id]()
    {	  
        if (id>13) return FAIL;  //should never happen unless wiring is wrong.
        atomic {
	  setbit(adc_bitmap,id);
        }
	post adc_get_data();
	return SUCCESS; 
    }

    event void I2CResource.granted()
    {
	post adc_get_data();
    }
 
    //Setting the MUX has been done.
    event void Switch.setAllDone(bool r) 
    {
	if (!r) {
	  atomic state=IDLE;
	  call Amplifier.clr(); 
	  post adc_get_data();
	  resetExcitation();
	  return ;
	}
	 
	//If the conversions happens fast there is no need to
	//wait for settling of the power supply,note that power supply should be set ON by user using the excitation command
	if (param[chan] & DELAY_BEFORE_MEASUREMENT) {
	  call PowerStabalizingTimer.startOneShot(VOLTAGE_STABLE_TIME);
	  return ;
	}
	else {
	  convert();
	}	
	  
	return ;
    }
 
    event void PowerStabalizingTimer.fired() {	  
        convert();
    }

    async event void I2CPacket.readDone(error_t error, uint16_t addr, uint8_t length, uint8_t* data)
    {
        //call Leds.led1Toggle();
        if (length != 3)
	{
	  atomic state = IDLE;
	  call Amplifier.clr();
	  atomic { clrbit(adc_bitmap,chan); }
	  post adc_get_data();
	  signal ADConvert.readDone[chan](ADC_ERROR);
	  resetExcitation();
	  return ;
	}
   
        if (state == GET_SAMPLE)
	{
	  value += (data[2] & 0xff) + ((data[1] << 8) & 0x0f00);
	  conversionNumber--;
	  //value = (data[0] << 8) & 0x0f00;
	  //value += (data[1] & 0xff);		
	  if (conversionNumber==0) {
	    atomic state = IDLE;
	    if (param[chan] & AVERAGE_SIXTEEN)
 	       value = ((value+8) >>4) & 0x0fff;  //the addition is for more percision 
	    else if(param[chan] &  AVERAGE_EIGHT )
	       value = ((value+4) >>3) & 0x0fff;  //the addition is for more percision 
	    else if(param[chan] &  AVERAGE_FOUR ) 
	       value = ((value+2) >>2) & 0x0fff;  //the addition is for more percision 
	    else { ; }				  //do nothing since no averaging 

	    call Amplifier.clr();
	    atomic { clrbit(adc_bitmap,chan); }
	    post adc_get_data();
	    signal ADConvert.readDone[chan](value);
	    resetExcitation();
	  }
	  else {
	    atomic state = CONTINUE_SAMPLE;
	    convert();
	  }
	}
        return ;
    }
 
    async event void I2CPacket.writeDone(error_t error, uint16_t addr, uint8_t length, uint8_t* data)
    {
        if (error)
        {
          atomic state = IDLE;
          call Amplifier.clr();
          atomic { clrbit(adc_bitmap,chan); }
          post adc_get_data();
          signal ADConvert.readDone[chan](ADC_ERROR);
          resetExcitation();
        }
   
       if (state == PICK_CHANNEL)
       {
          atomic state = GET_SAMPLE;
          if ((call I2CPacket.read(0x03, TOS_IBADC_I2C_ADDR, 3, buff)) == FAIL)
          {
            //reading from the bus failed
            atomic state = IDLE;
            post adc_get_data();
            resetExcitation();
          }
        }
    }

 
    default event void ADConvert.readDone[uint8_t port](uint16_t data)
    {
	return;
    }  

    event void Switch.getDone(uint8_t val) 
    {
        return ;
    }
  
    event void Switch.setDone(bool r) 
    {
        return ;
    }
  
}
