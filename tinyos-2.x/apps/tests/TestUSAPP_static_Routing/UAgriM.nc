module UAgriM
{
		// Init Interface
	provides interface Init;

	uses {
		interface Boot;
		interface Timer<TMilli> as SamplingTimer;
		interface Leds;

		// ADC 	
		interface Read<uint16_t> as Temperature;
		interface Read<uint16_t> as LeafWetness;
		interface Read<uint16_t> as Excitation;


		//interface RHSensor;
		interface Read<uint16_t> as RHSensorTemp;
		interface Read<uint16_t> as RHSensorHum ;

		
                // For Static Routing   
		interface StaticSend as Radio;
		interface StdControl as RadioControl;
		interface StaticControl as RouteControl;

                // For AMSenderC   
		interface Packet as SubPacket;
	}	
}

implementation
{
	// Structure for Sensor Records holding the periodcity of sensor and time left
	struct SampleRecords
	{
		uint8_t ID;
		uint32_t ticks_left;		// Time left in Minutes for the next Period
		uint32_t sampling_interval;	// Periodicity at which sensor is read
	}SampleRecord[NUM_RECORDS];


	// Global Variables
	message_t Packet[NUM_RECORDS];		// TinyOS Message Structures(for each sensor) used to store data, 
						//till it is actually sent 
	uint8_t packet_ready;                   // Bitmap of the packets filled of the array(Packet[NUM_RECORDS]) 
	uint8_t next_packet;                    // Next packet to send from Packet array

	message_t Msg;				// TinyOS Message Structure used to send data to Radio/UART
	message_t *transmitPacket;		// Pointer to TinyOS Message Struture(Msg)
	SensedData *SData;			// Temporary Buffer to Sensed Data 

	uint8_t Next_ADC;

	uint16_t WetnessCount;			// Leaf Wetness count (Max value=30)
	uint8_t LWetCounter;			// LWetCounter Max value 30( 30 readings for an hour) 

        int16_t SensorFrequency=0;		// HTF3223 Humdity Sensor Frequency Reading
        uint8_t PrevCaptureVal=-1, PresentCaptureVal=0;	// Timer3 Previous & Present Counter values on Capture Events
	uint8_t HumCounter=5;			// 128 samples of Humidity Sensor Frequency 
        uint8_t FrequencyAttempts = 0;

        uint16_t SensorExcitation=0;		// Excitation provided to HTF3223 & Leaf Wetness Sensors (ADC Value)
	uint8_t RadioStatus = IDLE;		// Radio RadioStatus Varible (IDLE/ Sending)

	// Functions
	void schedule();			// Function to decrement(1sec) the time left to sense, for each of the sensing records
	void addRecord(uint8_t, uint32_t); 	// Function to create a Sensor Record
	void sampleRecord(uint8_t);		// Function that calls a read command on the sensor, whose record index is passed as argument		
	task void sendPacketTask();		// Task function that sends a packet to the Radio
		
	
	// Called by the Init Interface of the Component
	// To Initiliaze the Sensor Record Structures with default values (Indicating them as Free Records)	
	void initializeRecords()
	{	
		uint8_t i;
		for(i=0; i<NUM_RECORDS; i++)
		{
			SampleRecord[i].ID = 0;
			SampleRecord[i].ticks_left = 0xffff;
			SampleRecord[i].sampling_interval = SAMPLE_RECORD_FREE;
		}
		transmitPacket = &Msg;	
	}

	// Function to create a Sensor Record	
	void addRecord(uint8_t Sensor, uint32_t period) 
	{	
	    atomic{
		SampleRecord[Sensor].ID = Sensor;
		SampleRecord[Sensor].ticks_left = period;
		SampleRecord[Sensor].sampling_interval = period;
	    }
	}
	
	// Init Interface does 
	// Sensors Initialization

	// Enabling ADC channels used by externally connected sensors(Creates Records in the ADCDma Component)
	// Initialize Sensor Record Structures
	// Initialize the Packet structures with NODE_ID and other default values
	// Initialize Packet Bitmap and related variables
	command error_t Init.init()
	{
		// Sensirion (SHT75) initialization
		// Uses the Pins 0,1,2 of PORT0. 0 -> Data, 1 -> SCK, 2 -> PWR_Enable
	
		// Initialize Sensor Record Structures
		initializeRecords();

		packet_ready = 0; // Initialize Packet Bitmap and next Packet to send with zero
		next_packet = 0;

		// Intialize Counters for Humidity and Leaf Wetness Sensors
		HumCounter = 5;
		LWetCounter =  LWETNESS_COUNT;
		WetnessCount = 0;

		return SUCCESS; 
	}

	// Boot Interface does
        // Create Sensor Records
	// Radio Settings
	// Start Timer for Sensing 	
	event void Boot.booted()
	{


        	// Create Sensor Records with Periodicities set
		addRecord(SHT_TEMP, SHT_TEMP_PERIODICITY);
		addRecord(SHT_HUMID, SHT_HUMI_PERIODICITY);
		addRecord(HTF_TEMP, HTF_TEMP_PERIODICITY);
		addRecord(HTF_HUMID, HTF_HUMI_PERIODICITY);
		addRecord(LEAF_WET, WETNESS_PERIODICITY);
		call RadioControl.start();
		// Start Timer for Sensing
		schedule();
		if(TOS_NODE_ID != 0)
		  call SamplingTimer.startPeriodic(SAMPLING_TIMER_PERIOD);
	}

        


	// Function that calls a read command on the sensor, whose record index is passed as argument
	void sampleRecord(uint8_t i)
	{
		switch(i)
		{
			case SHT_TEMP:
				call RHSensorTemp.read();
				break;

			case SHT_HUMID:
				call RHSensorHum.read();
				break;

			case LEAF_WET:
				// Pull-down the ADC pin
				//P0_4 = 0;
				call LeafWetness.read();  
				break;

			case HTF_TEMP:
				//P0_5 = 0;
				Next_ADC = HTF_TEMP;
				call Excitation.read();  
				break;

			case HTF_HUMID:	
				Next_ADC = HTF_HUMID;
				call Excitation.read();  
				break;

			default:
				break;	
		}
	}
	

	// Timer Fire Event
	// Check for the Sensor Records with time left as zero
	// and initiate sensing from corresponding sensors(using sampleRecord function) 
	// async event void SamplingTimer.fired()
	event void SamplingTimer.fired()
	{
		uint8_t i;
		for(i=0; i<NUM_RECORDS; i++)
		    atomic{
			if(SampleRecord[i].sampling_interval != SAMPLE_RECORD_FREE)
				if(SampleRecord[i].ticks_left == 0)
				{
					SampleRecord[i].ticks_left = SampleRecord[i].sampling_interval;
					sampleRecord(i);
				}
		    }
		// Decrement(1sec) the time left to sense, for each of the sensing records
		schedule();
	
	}

	// Function to decrement(1sec) the time left to sense, for each of the sensing records
	void schedule()
	{
		uint8_t i;
		for(i=0; i<NUM_RECORDS; i++)
		    atomic{
			if(SampleRecord[i].sampling_interval != SAMPLE_RECORD_FREE)
				SampleRecord[i].ticks_left = SampleRecord[i].ticks_left - 1;
				
		     }
		
	}

	// Function that sends a packet to the Radio	
	task void sendPacketTask()
	{
		uint8_t i;
		error_t result;

		SensedData *Data;

		// Send Packet if Radio is Idle else return
		if(RadioStatus) 
		   return;

		atomic RadioStatus = SENDING;

		// Increment the data packet sequence number
		call SubPacket.setPayloadLength(transmitPacket, ROUTING_HEADER_LEN + sizeof(SensedData));
		Data = (SensedData *)(call SubPacket.getPayload(transmitPacket, call SubPacket.maxPayloadLength())+ROUTING_HEADER_LEN);
		//Data = (SensedData*)&transmitPacket->data[ROUTING_HEADER_LEN];

	        for (i=0; i < NUM_RECORDS; i++) {
		  if(packet_ready & (1 << i)){    // Find the next packet to send from the array(Packet[NUM_RECORDS])
			next_packet = i;
			break;
		  }
		}

		if(i >= NUM_RECORDS){					// No packet is ready/filled to send, so return
		  atomic RadioStatus = IDLE;
         	  return;
		}

	        // Fill the data buffer.  
		SData = (SensedData *)&Packet[next_packet].data[0];
		atomic {
	        for (i = 0; i < sizeof(SensedData); i++)
	           ((uint8_t*)Data)[i] = ((uint8_t*)SData)[i];
		}

		Data->node_id = TOS_NODE_ID;
		Data->crop_id[0] = 'C';
		Data->crop_id[1] = '1';
		Data->plot_id    = 1;
		result = call Radio.send(transmitPacket, sizeof(SensedData));		// Send the Data Packet
		//result = call Radio.send(0x001, transmitPacket, sizeof(SensedData));		// Send the Data Packet
		if (result != SUCCESS) {
		   atomic RadioStatus = IDLE;
		   post sendPacketTask();                              	// Post the task to send the next data packet
		}

	}


	// Packet SendDone Event 
	event error_t Radio.sendDone(message_t *pMsg, error_t result)
	//event void Radio.sendDone(message_t *pMsg, error_t result)
	{
		uint8_t clear_bit;
		if(result == SUCCESS) {
			 atomic {
			      transmitPacket = pMsg;
			      clear_bit = ~(1 << next_packet);
			      packet_ready = packet_ready & clear_bit;	// Clear the bit for the packet sent
			 }
		}

		call Leds.led2Toggle();
 	        RadioStatus = IDLE;			// Set Radio Status as Idle 
		post sendPacketTask();
		return SUCCESS;
	}


	// Sensirion Temperature Sensor readDone event
        event void RHSensorTemp.readDone(error_t result, uint16_t temp)
	//event  SensirionSht11.readTempDone[uint8_t client](error_t result,uint16_t temp)
	{
		SData = (SensedData *)&Packet[SHT_TEMP].data[0];
		atomic {
		  SData->sensor_id = TEMPERATURE;			// Fill in the Sensor ID
		  SData->value  = temp;
		
		  packet_ready = packet_ready | (1 << SHT_TEMP);       // Set bit in packet_ready bitmap 
		}
		// Send Packet if Radio is Idle else return
		if(RadioStatus) 
		   return ;
		//call Leds.led0Toggle();
		post sendPacketTask();
		return ;
	}

	// Sensirion Relative Humidity Sensor readDone event
        event void RHSensorHum.readDone(error_t result, uint16_t humi)
	//event error_t SensirionSht11.readHumidityDone[uint8_t client](error_t result,uint16_t humi) 
	{
		SData = (SensedData *)&Packet[SHT_HUMID].data[0];
		atomic {
		  SData->sensor_id = RELATIVE_HUMIDITY;
		  SData->value  = humi;
		  packet_ready  = packet_ready | (1 << SHT_HUMID);    
		}
		
		// Send Packet if Radio is Idle else return
		if(RadioStatus) 
		   return;
                //call Leds.led1Toggle();
		post sendPacketTask();
		return ;
	}

	// Excitation Read Done event
	// Store the excitation value read from ADC in the global variable
	// Used for leaf wetness & HTF temperature data calibration
	event void Excitation.readDone( error_t result, uint16_t val )
	{
		error_t Result;
		
		switch(Next_ADC)
		{

			case HTF_TEMP:
				//P0_5 = 0;
				Result = call Temperature.read();
				//if (Result == FAIL)		
				break;

			case HTF_HUMID:	
		                if(HumCounter == 5) {
		                   //T3CCTL0 |= 0x79;				// Enable Input Capture Interrupts
				   						// Set Channel mode as Input Capture 
				   						// Compare output not used
				   SensorFrequency = 0;
				   //T3CTL |= (1 << CC2430_T34CTL_CLR);		// Reseting the timer value before start
		                   //T3CTL |= _BV(CC2430_T34CTL_START);		// Timer3 start
                		   //T3IE = 1;					// Timer3 events Enabled
				   //call HumTimer.startOneShot(HUM_SENSING_PERIOD);	
	                        }

				break;

			default:
				break;	
		
		}
                // ADC gives VDD/3 with Reference voltage 1.25v                 
                // Vadc = (ReferenceVoltage * ADCReading)/2048 (for 12-bit)
                // VDD = Vadc * 3; 
                // Multiply Vadc with 100 to get a integer value instead of float
                SensorExcitation = (1.25*val*100)/2048;		
/*
		SData = (SensedData *)&Packet[EXT_VOLTAGE].data[0];
		atomic {
		  SData->sensor_id = VOLTAGE;
		  SData->value =  SensorExcitation;
		  packet_ready = packet_ready | (1 << EXT_VOLTAGE);        
	        	}

		// Send Packet if Radio is Idle else return
		if(RadioStatus) {
		 //  return;
		}
		post sendPacketTask();
*/
	}	

	// Leaf wetness readDone event
	event void LeafWetness.readDone( error_t result, uint16_t val )
	{
		LWetCounter--;
                // With Reference voltage 1.25v
                // Vadc = (ReferenceVoltage * ADCReading)/2048 (for 12-bit)
                // Multiply Vadc with 1000 to get voltage(Vs) in milliVolts
                val = (1.25*val*1000)/2048;
                if(val > WETNESS_THRESHOLD)
		  WetnessCount++;

		if(LWetCounter)
		  return;	
		
		SData = (SensedData *)&Packet[LEAF_WET].data[0];
		atomic {
		  SData->sensor_id = LEAF_WETNESS;
		  SData->value  = WetnessCount << 8 ;
		  SData->value |=  ((WetnessCount >> 8) & 0x00FF);
		  packet_ready = packet_ready | (1 << LEAF_WET);        
		  LWetCounter = LWETNESS_COUNT;
		  WetnessCount = 0;
		}

		// Send Packet if Radio is Idle else return
		if(RadioStatus) 
		   return;

		post sendPacketTask();


	}

	// Humirel Temperature Sensor readDone event
	event void Temperature.readDone( error_t result, uint16_t val )
	{
   		uint16_t Temp;

		// SensorExcitation = 330;
                // With Reference voltage 1.25v
                // Vadc = (ReferenceVoltage * ADCReading)/2048 (for 12-bit)
                // Multiply Vadc with 100 to get a integer value instead of float
                val = (1.25*val*100)/2048;

		Temp = (3*SensorExcitation*100)/val;		// Value to send Gateway = (V_Excitation/V_adc) * 100;

		SData = (SensedData *)&Packet[HTF_TEMP].data[0];
		atomic {
		  SData->sensor_id = HTF_TEMPERATURE;;
		  SData->value = Temp;				
		  packet_ready = packet_ready | (1 << HTF_TEMP);        
		}

		// Send Packet if Radio is Idle else return
		if(RadioStatus) 
		   return;

		post sendPacketTask();

	}	

	// Humirel Relative Humidity Sensor 
	// Task to collect 128 samples of Sensor Frequency, Average  
         task void ReadFrequency(){
	    //uint16_t Humidity = 0;
            uint8_t SensorFrequency_tmp = 0;	 

            if(HumCounter--) {   
		if(PrevCaptureVal == -1) { PrevCaptureVal = PresentCaptureVal; return; }     
		// Handle Timer Overflow Conditions    
                if(PrevCaptureVal < PresentCaptureVal) {
                      SensorFrequency_tmp = (PresentCaptureVal - PrevCaptureVal);
                } else {
                      SensorFrequency_tmp = (256 + PresentCaptureVal - PrevCaptureVal);
                }

                PrevCaptureVal = PresentCaptureVal;

                if((SensorFrequency_tmp + 12) > 68){
                       HumCounter++;
                       return;
                }

	
		/* 
		 * As at 2 Mhz the counter value is more that 256, the Sensorfrequency_temp value is very less 
		 * or more than 200. We'll add that value and do the average of it and then to the 
                 * average value add 256 to get the original value.
		 */
		if(SensorFrequency_tmp > 200) {
			SensorFrequency += SensorFrequency_tmp - 256;		// Result will be in Negative
		} else { 	
			SensorFrequency += SensorFrequency_tmp;
		}

            } else {

		SensorFrequency = SensorFrequency >>  2;			// Averaging the samples; Dividing by 4
		
		/* Error in Frequency value due to some reason. 
		 * Frequency value cannot be more than 53 and lesser than -12.
		 * If such condition occurs redo the calculation
		 */
		if(((SensorFrequency > 52) || (SensorFrequency < -12)) && (FrequencyAttempts < 3)) {
			SensorFrequency = 0;
                	HumCounter = 5; PrevCaptureVal=-1; PresentCaptureVal=0;
			SensorFrequency_tmp = 0;
			FrequencyAttempts++;
			return;
		}	
		else{/*
			call HumTimer.stop();
	  		atomic {
				T3IE = 0;				// Timer3 events Disabled   
		                T3CCTL0 &= ~0x40;			// Disable Input Capture Interrupts
        		        T3CTL &= ~_BV(CC2430_T34CTL_START);	// Stop Timer3 (Once Frequency measurement is done)
			}*/
	                HumCounter = 5; PrevCaptureVal=-1; PresentCaptureVal=0;

			SensorFrequency += 12;				// Ensure that Sensor Frequency is not negative
									// A negative will require 16-bits.

			if(FrequencyAttempts == 3)
				SensorFrequency	= 100;			// Error indicating that sensor is faulty
							
			FrequencyAttempts = 0;
			SData = (SensedData *)&Packet[HTF_HUMID].data[0];
			atomic {
			  SData->sensor_id = HTF_RELATIVE_HUMIDITY;
			  //SData->value = Humidity << 8;				
			  //SData->value |= ((Humidity >> 8) & 0x00FF);
			  SData->value = SensorFrequency;
			  SData->value |= (SensorExcitation << 8); 	
			  packet_ready = packet_ready | (1 << HTF_HUMID);        
			
			}
		
			// Send Packet if Radio is Idle else return
			if(RadioStatus) 
			   return;

			post sendPacketTask();
		}
	    }  
	}	


/*
	// Timer3 Interrupt Handling
        MCS51_INTERRUPT(SIG_T3) {
	 // If Input capture Interrupts are enabled and Channel0 Capture flag is set	
         if( (T3CCTL0 & _BV(CC2430_T1CCTLx_IM)) && (T3CH0IF) ) {
            T4CH0IF = 0;						// Clear Timer3 Channel0 Input Capture flag 
            PresentCaptureVal = T3CC0;					// Collect the Timer3 Counter value
            post ReadFrequency();			// Post task to calculate Humidity Sensor Frequency	
         }
        }
*/

}

