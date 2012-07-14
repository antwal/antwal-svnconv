includes sensorboard;
includes Timer;

module SamplerM
{
    provides interface Init as SamplerInit;	
    provides interface SplitControl as SamplerControl;
    provides interface Sample;
    provides command error_t PlugPlay();

  uses {
      interface Leds;
      interface Timer<TMilli> as SamplerTimer;

      //Analog channels
      interface Init as IBADCinit;
      interface SplitControl as IBADCcontrol;
      interface ADConvert as ADC0;
      interface ADConvert as ADC1;
      interface ADConvert as ADC2;
      interface ADConvert as ADC3;
      interface ADConvert as ADC4;
      interface ADConvert as ADC5;
      interface ADConvert as ADC6;
      interface ADConvert as ADC7;
      interface ADConvert as ADC8;
      interface ADConvert as ADC9;
      interface ADConvert as ADC10;
      interface ADConvert as ADC11;
      interface ADConvert as ADC12;
      interface ADConvert as ADC13;
      //ADC parameters
      interface SetParam as SetParam0;
      interface SetParam as SetParam1;
      interface SetParam as SetParam2;
      interface SetParam as SetParam3;
      interface SetParam as SetParam4;
      interface SetParam as SetParam5;
      interface SetParam as SetParam6;
      interface SetParam as SetParam7;
      interface SetParam as SetParam8;
      interface SetParam as SetParam9;
      interface SetParam as SetParam10;
      interface SetParam as SetParam11;
      interface SetParam as SetParam12;
      interface SetParam as SetParam13;


      //Health channels 
      interface Read<uint16_t> as Battery;

      //Temperature and Humidity	
      interface SplitControl as TempHumControl;
      interface Read<uint16_t> as Temp;
      interface Read<uint16_t> as Hum;

      //Digital and Relay channels
      interface Init as DioInit;
      interface SplitControl as DioControl;
      interface Dio as Dio0;
      interface Dio as Dio1;
      interface Dio as Dio2;
      interface Dio as Dio3;
      interface Dio as Dio4;
      interface Dio as Dio5;

      //Counter channels
      interface Init as CounterInit;
      interface SplitControl as CounterControl;
      interface Dio as Counter;
      
      command error_t Plugged();
  }
}

implementation
{

#define SCHEDULER_RESPONSE_TIME 150  //18000
#define TIME_SCALE 100                 //this means we have resolution of 0.1 sec
#define FLAG_SET 1
#define FLAG_NOT_SET 0

    //Flag for power saving
    //uint8_t flag25,flag33,flag50;

    //Main data structure 10 byte per recorde
    struct SampleRecords{
      uint8_t channel;              
      uint8_t channelType;         
      //uint8_t param;
      int32_t ticks_left;         // used for keeping the monostable timer 
      uint32_t sampling_interval; // Sampling interval set by command above, It is in second, SampleRecord in no use if set to zero.
    } SampleRecord[MAX_SAMPLERECORD];
    
    bool ADCStatus, DioStatus, CounterStatus;
    bool HumRead = 0, TempRead = 0;	
    uint16_t Temp_Data = 0; 	 // For Humidity compensation	
    
    //check what is the SampleRecords that are avilable and return one that is available
    static inline int8_t get_avilable_SampleRecord()
    {
      int8_t i;
      for(i=0; i<MAX_SAMPLERECORD; i++) if( SampleRecord[i].sampling_interval == SAMPLE_RECORD_FREE ) return i;
        return -1; //not available SampleRecord
    }
    
    //find the next channel which should be serviced. 
    void next_schedule(){
        int8_t i;
        uint32_t min=SCHEDULER_RESPONSE_TIME;   //minimum time set to 15Sec so that if a new sampling request comes we reply with 15sec delay.

        for(i=0; i<MAX_SAMPLERECORD; i++) //find out any one who should be serviced before next 15 second.
        {
           if(SampleRecord[i].sampling_interval != SAMPLE_RECORD_FREE)
           {
              if(SampleRecord[i].ticks_left < min) { min = SampleRecord[i].ticks_left; }
           }
        }

        for(i=0; i<MAX_SAMPLERECORD; i++) //set the next time accordingly
        {
           if(SampleRecord[i].sampling_interval != SAMPLE_RECORD_FREE)
           {
              SampleRecord[i].ticks_left = SampleRecord[i].ticks_left-min;
           }
        }

        min=min * TIME_SCALE ;   //since timer gets input in milisecond and we get command in 0.1sec.
        call SamplerTimer.startOneShot(min);
    }

    static inline void setparam_analog(uint8_t i,uint8_t param)
    {
       switch(SampleRecord[i].channel){
         case 0:
             call SetParam0.setParam(param);
             break;
         case 1:
             call SetParam1.setParam(param);
             break;
         case 2:
             call SetParam2.setParam(param);
             break;
         case 3:
             call SetParam3.setParam(param);
             break;
         case 4:
             call SetParam4.setParam(param);
             break;
         case 5:
             call SetParam5.setParam(param);
             break;
         case 6:
             call SetParam6.setParam(param);
             break;
         case 7:
             call SetParam7.setParam(param);
             break;
         case 8:
             call SetParam8.setParam(param);
             break;
         case 9:
             call SetParam9.setParam(param);
             break;
         case 10:
             call SetParam10.setParam(param);
             break;
         case 11:
             call SetParam11.setParam(param);
             break;
         case 12:
             call SetParam12.setParam(param);
             break;
         case 13:
             call SetParam13.setParam(param);
             break;
          default:
       }
       return;
    }

    static inline void setparam_digital(int8_t i,uint8_t param)
    {
       switch(SampleRecord[i].channel){
         case 0:
             call Dio0.setParam(param);
             break;
         case 1:
             call Dio1.setParam(param);
             break;
         case 2:
             call Dio2.setParam(param);
             break;
         case 3:
             call Dio3.setParam(param);
             break;
         case 4:
             call Dio4.setParam(param);
             break;
         case 5:
             call Dio5.setParam(param);
             break;
         default:
       }
       return;
    }
    
    static inline void setparam_counter(int8_t i,uint8_t param)
    {
       call Counter.setParam(param);
       return;
    }
    
    void sampleRecord(uint8_t i)
    {
       if(SampleRecord[i].channelType == ANALOG) { 
         switch (SampleRecord[i].channel){
           case 0:       
               call ADC0.read();
               break;
           case 1:
               call ADC1.read();                 
               break;
           case 2:
               call ADC2.read();                 
               break;
           case 3:       
               call ADC3.read();                 
               break;
           case 4:
               call ADC4.read();                 
               break;
           case 5:
               call ADC5.read();                 
               break;
           case 6:       
               call ADC6.read();                 
               break;
           case 7:
               call ADC7.read();
               break;
           case 8:
               call ADC8.read();                 
               break;
           case 9:       
               call ADC9.read();                 
               break;
           case 10:
               call ADC10.read();
               break;
           case 11:
               call ADC11.read();
               break;
           case 12:
               call ADC12.read();                 
               break;
           case 13:
               call ADC13.read();                 
               break;
           default:
         }
         return;
       }

       if(SampleRecord[i].channelType == BATTERY) { 
           call Battery.read();
           return;
       }

       if(SampleRecord[i].channelType == TEMPERATURE || SampleRecord[i].channelType == HUMIDITY ) { 
         if(SampleRecord[i].channelType == TEMPERATURE) { TempRead = 1; call Temp.read(); }               
         if(SampleRecord[i].channelType == HUMIDITY) { HumRead=1; }               
         return; 
       }
       
       if(SampleRecord[i].channelType == DIGITAL) { 
         switch (SampleRecord[i].channel){
           case 0:       
               call Dio0.read();                 
               break;
           case 1:
               call Dio1.read();                 
               break;
           case 2:
               call Dio2.read();                 
               break;
           case 3:       
               call Dio3.read();                 
               break;
           case 4:
               call Dio4.read();                 
               break;
           case 5:
               call Dio5.read();                 
               break;
           default:
           }
           return;
       }

       if(SampleRecord[i].channelType == COUNTER) { 
         call Counter.read();
         return;
       }         
       return;
    }
    
    command error_t SamplerInit.init() {
        int i;

	DioStatus = CounterStatus = ADCStatus = FALSE;

        call CounterInit.init();
        call DioInit.init();
        call IBADCinit.init();

        for(i=0;i<MAX_SAMPLERECORD;i++){ 
            SampleRecord[i].sampling_interval=SAMPLE_RECORD_FREE;
            SampleRecord[i].ticks_left=0xffff;
        }
        /*atomic {
          flag25=FLAG_NOT_SET;
          flag33=FLAG_NOT_SET;
          flag50=FLAG_NOT_SET;
        }*/
        return SUCCESS;
   }
    
    command error_t SamplerControl.start() {
        call TempHumControl.start();
        //post next_schedule();
        //next_schedule();
        return SUCCESS;
    }

    command error_t SamplerControl.stop() {
        call CounterControl.stop();
        call DioControl.stop();
        call IBADCcontrol.stop();
        call TempHumControl.stop();
        return SUCCESS;
    }

    event void CounterControl.startDone(error_t error) {
	CounterStatus = TRUE;
    } 	
 
    event void DioControl.startDone(error_t error) {
	DioStatus = TRUE;
    } 	
 
    event void IBADCcontrol.startDone(error_t error) {
	ADCStatus = TRUE;
    } 	
 
    event void TempHumControl.startDone(error_t error) {
	//call Leds.led1On();
	signal SamplerControl.startDone(SUCCESS);
    } 	
 
    event void CounterControl.stopDone(error_t error) {
	CounterStatus = FALSE;
    } 	
 
    event void DioControl.stopDone(error_t error) {
	DioStatus = FALSE;
    } 	
 
    event void IBADCcontrol.stopDone(error_t error) {
	ADCStatus = FALSE;
    } 	
 
    event void TempHumControl.stopDone(error_t error) {
    } 	
 
    command error_t PlugPlay()
    {
        return call Plugged();
    }
    
    command error_t Sample.readSample(int8_t record)
    {	
        uint8_t i;
        //sample record which is requested to be sampled
        for(i=0;i<MAX_SAMPLERECORD;i++)
            {
                if(i == record) {
                   sampleRecord(i);
		   return SUCCESS;
		}
            }

	return FAIL;
    }

    event void SamplerTimer.fired()
    {
        uint8_t i;
        //sample anyone which is supposed to be sampled
        for(i=0;i<MAX_SAMPLERECORD;i++)
            {
                if( SampleRecord[i].sampling_interval != SAMPLE_RECORD_FREE )
                    {
                        if(SampleRecord[i].ticks_left == 0 ) 
                            {
                                SampleRecord[i].ticks_left = SampleRecord[i].sampling_interval; 
                                sampleRecord(i);
                            }
                    }
            }
        //now see when timer should be fired for new samples
        //post next_schedule();
        next_schedule();
    }
    


    command error_t Sample.set_digital_output(uint8_t channel,uint8_t state)
    {
            
    }

    command error_t Sample.start()
    {
        next_schedule();
	return SUCCESS;
    }
 
    command int8_t Sample.getSample(uint8_t channel,uint8_t channelType,uint32_t interval,uint8_t param)
    {
        int8_t i;
        i=get_avilable_SampleRecord();
        if (i==-1) return i;
        SampleRecord[i].channel=channel;              
        SampleRecord[i].channelType=channelType;         
        SampleRecord[i].ticks_left=interval;          //used for keeping the monostable timer 
        SampleRecord[i].sampling_interval=interval;  //Sampling interval set by command above,SampleRecord in no use if set to zero
        //SampleRecord[i].param=param;

        if (SampleRecord[i].channelType == DIGITAL) { 
	  setparam_digital(i,param); 
	  if (!DioStatus) { call DioControl.start(); }
	}

        if (SampleRecord[i].channelType == COUNTER) {
	  setparam_counter(i,param);
	  if (!CounterStatus) { call CounterControl.start(); }
	}

        if (SampleRecord[i].channelType == ANALOG) {
	  setparam_analog(i,param);
	  if (!ADCStatus) { call IBADCcontrol.start(); }
	}

        return i;            
    }

    command error_t Sample.reTask(int8_t record,uint32_t interval)
    {
        if(record<0 || record>MAX_SAMPLERECORD) return FAIL;
        SampleRecord[record].sampling_interval=interval;
        SampleRecord[record].ticks_left=interval;          //used for keeping the monostable timer 
        return SUCCESS;
    }

    command error_t Sample.stop(int8_t record)
    {
        if(record<0 || record>MAX_SAMPLERECORD) return FAIL;
        SampleRecord[record].sampling_interval= SAMPLE_RECORD_FREE;
        return SUCCESS;
    }

    default event error_t Sample.readDone(uint8_t channel,uint8_t channelType,uint16_t data)
    {
        return SUCCESS;
    }
    
    event void ADC0.readDone(uint16_t data) {
      if(data != ADC_ERROR) signal Sample.readDone(0,ANALOG,data); 
    }
    
    event void ADC1.readDone(uint16_t data) {
      if(data != ADC_ERROR) signal Sample.readDone(1,ANALOG,data); 
    }
    
    event void ADC2.readDone(uint16_t data) {
      if(data != ADC_ERROR) signal Sample.readDone(2,ANALOG,data); 
    }
    
    event void ADC3.readDone(uint16_t data) {
      if(data != ADC_ERROR) signal Sample.readDone(3,ANALOG,data); 
    }
    
    event void ADC4.readDone(uint16_t data) {
      if(data != ADC_ERROR) signal Sample.readDone(4,ANALOG,data); 
    }
    
    event void ADC5.readDone(uint16_t data) {
      if(data != ADC_ERROR) signal Sample.readDone(5,ANALOG,data); 
    }
    
    event void ADC6.readDone(uint16_t data) {
      if(data != ADC_ERROR) signal Sample.readDone(6,ANALOG,data); 
    }
    
    event void ADC7.readDone(uint16_t data) {
      if(data != ADC_ERROR) signal Sample.readDone(7,ANALOG,data); 
    }
    
    event void ADC8.readDone(uint16_t data) {
      if(data != ADC_ERROR) signal Sample.readDone(8,ANALOG,data); 
    }

    event void ADC9.readDone(uint16_t data) {
      if(data != ADC_ERROR) signal Sample.readDone(9,ANALOG,data); 
    }
    
    event void ADC10.readDone(uint16_t data) {
      if(data != ADC_ERROR) signal Sample.readDone(10,ANALOG,data); 
    }

    event void ADC11.readDone(uint16_t data) {
      if(data != ADC_ERROR) signal Sample.readDone(11,ANALOG,data); 
    }
    
    event void ADC12.readDone(uint16_t data) {
      if(data != ADC_ERROR) signal Sample.readDone(12,ANALOG,data); 
    }
    
    event void ADC13.readDone(uint16_t data) {
      if(data != ADC_ERROR) signal Sample.readDone(13,ANALOG,data); 
    }
    
    
    event void Battery.readDone(error_t result, uint16_t data) {
      signal Sample.readDone(0,BATTERY,data); 
    }
  
    event void Temp.readDone(error_t result, uint16_t data) {
      if (HumRead) {
	Temp_Data = data;
        HumRead = 0;	
	call Hum.read();
      }

      if (TempRead) {	
	TempRead = 0;
        signal Sample.readDone(0,TEMPERATURE,data); //data type problem      
      }	
    }
  
    event void Hum.readDone(error_t result, uint16_t data) {
      const float C1=-4.0; // for 12 Bit
      const float C2= 0.0405; // for 12 B
      const float C3=-0.0000028; // for 12 Bit 
      const float T1=0.01; // for 14 Bit @ 5V
      const float T2=0.00008; // for 14 Bit @ 5V

      float rh = data; //rh: Humidity [Ticks] 
      float t = Temp_Data; //t: Temperature [Ticks] 
      float rh_lin; //rh_lin: Humidity linear
      float rh_true; //rh_true: Temperature compensated humidity
      float t_C; //t_C: Temperature [DegreeC]

      if (t == 0) { return; }

      t_C = t*0.01 - 40; //calc. Temperature from ticks to [DegreeC]
      rh_lin = C3*rh*rh + C2*rh + C1; //calc. Humidity from ticks to [%RH]
      rh_true = (t_C-25)*(T1+T2*rh) + rh_lin; //calc. Temperature compensated humidity [%RH]
      if (rh_true > 100) rh_true=100; //cut if the value is outside of
      if (rh_true < 0.1) rh_true=0.1; //the physical possible range*/
      Temp_Data = 0;	
 	
      signal Sample.readDone(0,HUMIDITY, (uint16_t)rh_true); 
      //signal Sample.readDone(0,HUMIDITY,data); 
    }
  
    event void Dio0.readDone(uint16_t data) {
      signal Sample.readDone(0,DIGITAL,data); 
    }
  
    event void Dio1.readDone(uint16_t data) {
      signal Sample.readDone(1,DIGITAL,data); 
    }

    event void Dio2.readDone(uint16_t data) {
      signal Sample.readDone(2,DIGITAL,data); 
    }
  
    event void Dio3.readDone(uint16_t data) {
      signal Sample.readDone(3,DIGITAL,data); 
    }

    event void Dio4.readDone(uint16_t data) {
      signal Sample.readDone(4,DIGITAL,data); 
    }

    event void Dio5.readDone(uint16_t data) {
      signal Sample.readDone(5,DIGITAL,data); 
    }

    event void Counter.readDone(uint16_t data) {
      signal Sample.readDone(0,COUNTER,data);         
    }

}
