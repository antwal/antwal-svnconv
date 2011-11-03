/**
* 	IMplementation of the Soil Moisture Sensor by Decagon
*	ECH2O EM-TE/TC. 
*	Four Sensors can be connected and all the four will use the same uart0.
*	Who will use the uart0 will be decided by the SoilS<n> signal which uses
*	PORTA(1-4) to select the Sensor to be sensed.
*
*	Whomto Blame for this code:
*	@author Abhishek Kumar Singh <sabhishek@cdac.in>
*	@version 0.1
*	@date 12:10:2011
**/

module SoilMoistLogicP {
	provides {
		interface Init as SoilInit;
		interface SplitControl as SoilSplitControl;
		interface SoilMoistInterface;
	}
	
	uses {
		
		interface StdControl as Uart0Ctrl;
		interface UartStream as Uart0Stream;
		interface UartByte as Uart0Byte;
		interface GeneralIO as SoilS1;
		interface GeneralIO as SoilS2;
		interface GeneralIO as SoilS3;
		interface GeneralIO as SoilS4;
		interface GeneralIO as SoilSelect;
		interface GeneralIO as Rx0;

	}
}

implementation {

task void sensorData();
uint8_t hex2num(uint8_t hex);
uint16_t ascii2num( uint8_t *buffer, uint8_t *len);
// States
enum{
	INIT = 0,
	READ = 1,
	WATER = 2,
	ECOND = 3,
	STEMP = 4,
	END  = 5, 
	DONE = 6,
};


#define No_Sensor	255
#define BUF_LEN 	16
#define LIST_SIZE	8

#define	 Vol		0				// Keeps Volumetric WATER Content
#define  EC		1				// Electric Conductivity
#define	 SoilTemp	2				// Soil temperature
#define INVALID		255				// Data invalid

uint8_t waitSensor[LIST_SIZE];				// Wait list for the sensor
uint8_t list_end, list_head;				// Wait list head and tail
uint8_t CUR_SENSOR;
uint8_t state;
uint8_t retry;						// Max 3 numbers of retries for any sensor
uint16_t data[3];					// To store the Data Values



uint8_t buf[BUF_LEN];					// Buffer for storing the Data

	command error_t SoilInit.init(){
	atomic{
		state = INIT;
		CUR_SENSOR = No_Sensor;
		list_end = 0;
		list_head = 0;
		retry = 0;
		}
		return SUCCESS;
	}

	command error_t SoilSplitControl.start(){
		call SoilS1.makeOutput();
		call SoilS2.makeOutput();
		call SoilS3.makeOutput();
		call SoilS4.makeOutput();
		call SoilSelect.makeOutput();
		call Rx0.makeOutput();
		
// No sensors are selected
		call SoilS1.clr();
		call SoilS2.clr();
		call SoilS3.clr();
		call SoilS4.clr();
		call SoilSelect.set();		
		call Rx0.clr();	
		signal SoilSplitControl.startDone(SUCCESS);
		return SUCCESS;
	}
	
	command error_t SoilSplitControl.stop(){
		signal SoilSplitControl.stopDone(SUCCESS);
	        return SUCCESS;
	}

// Dont KNow this is required or not
/*	command error_t SoilMoistInterface.selectSensor[uint8_t sensor](){
		if(state = )
		atomic{
		
		Sensor = sensor;			// Sensor to be sensed is recorded for now	
		}
		return SUCCESS;		
	}
*/

	command error_t SoilMoistInterface.readSensor(uint8_t sensor){	
		uint8_t ret;
		if(state >= READ)						// Means already one read is ongoing
		{
			atomic{
			waitSensor[list_end++] = sensor;				// We should tell and wait for that read to get complete

// FIXME: Not checking that if head and end are colliding. Assuming that buffer will never get full
			if(list_end == 8 )
				list_end = 0;
			}
			return EBUSY;						// return for now.
		}	
		atomic{
		CUR_SENSOR=sensor;						// Keeps which sensor is under probe
		state = READ;
		}
		ret =  call Uart0Stream.receive(buf, BUF_LEN);			// passing the buffer and length to read to UART reveice function
		if(ret != SUCCESS)
		{
			printf("UArt: FAiled\n");
			printfflush();
			return ret;
		}
		
		post sensorData();						// calling function which will do rest of the work
		return SUCCESS;

	}


// Task which takes care of Sensor excitation takes input as sensor to be probed
	task void sensorData(){
		
		call Uart0Ctrl.start();						// Uart0 Started
		printf("UArt started,Sensor:%d\n",CUR_SENSOR);
		switch(CUR_SENSOR)	{
			case 1:
				call SoilS1.set();
				break;
			
			case 2:
				call SoilS2.set();
				break;
		
			case 3:
				call SoilS3.set();
				break;
			
			case 4:
				call SoilS4.set();
				break;
			
			default:
				return ;
		}
		
		call SoilSelect.clr();							// Activating the Sensor
		return ;
	}


	async event void Uart0Stream.receiveDone( uint8_t* buffer, uint16_t len, error_t error )
	{
		uint8_t i, var=len, temp=0;
	if(error == SUCCESS && len >=9){						// Checking if data is successfuly read or not and generally data length is 15
		while(var--){
			if(buffer[temp++] >= 0xF0 && buffer[temp] != 0xFF)                    // Start Byte check
        	        {
               	       		atomic{
			 	state = WATER;             	             		 // First bytes are WATER Volumteric Content
				}
                       		while(1){
                              	 	switch (state)
                                	{
                                	 case WATER:
                                       	         data[Vol] = ascii2num(buffer,&temp);       // returns the Number
                                       	         state = ECOND;
                                     	         break;
                                         case ECOND:            	         // 2nd Bytes are Electrcal Conductivity
                                              	  data[EC] = ascii2num(buffer,&temp);
                                               	 state = STEMP;
                                              	  break;
                                     	 case STEMP:
                                       	         data[SoilTemp] = ascii2num(buffer,&temp);             // 3rd Bytes are temperature
                                       	         state = END;
                                       	         break;
                                         case END:             		                  // At the end 5bytes are there to show end of data
                                               	 for(i = 0; i<=4; i++){
                                               	// Thinking it is required or not         
                                               	 }
                                               	 state = DONE;
                                         default:
                                                break;
					
                                	}

				// Checking If data has successfully read
	                        	if(state == DONE || state == END)                // break from the internal while loop
					{
						state = INIT;
						retry = 0;
						call Uart0Ctrl.stop();
						call SoilSelect.set();			// Disabling the sensor
						call SoilS1.clr();
						call SoilS2.clr();
						call SoilS3.clr();
						call SoilS4.clr();
						call Rx0.makeOutput();
						call Rx0.clr();
						signal SoilMoistInterface.readDone(CUR_SENSOR, data, SUCCESS);
        	                        	break;
					}
				// Else if data reading is interrupted in between only
					else if(temp == 0)				// Buffer is zero before full data has been read
					{
						state = READ;
						call Uart0Ctrl.stop();
					 	call SoilSelect.set();			// Disabling the sensor
						call SoilS1.clr();
						call SoilS2.clr();
						call SoilS3.clr();
						call SoilS4.clr();
						call Rx0.makeOutput();
						call Rx0.clr();
						if(retry == 3)				// Not able to read data prpoperly after retries also
						{
							retry = 0;
							data[Vol] = INVALID;
							data[EC] = INVALID;
							data[SoilTemp] = INVALID;
							state = INIT;
							signal SoilMoistInterface.readDone(CUR_SENSOR, data, FAIL);
							break;
						}
						else retry++;				// Upto 3 retrials
						post sensorData();		// try again
						break;
					}
	                       	}
				var = 0;						
                	}

		}	
		}
		// Check if Data is pending or not 
		if(state == INIT && list_head != list_end)		// that means Sensor requests are pending and last read was successful
		{
			state = READ;
			CUR_SENSOR = (uint8_t)waitSensor[list_head++];			
			// FIXME: Not checking that if head and end are colliding. Assuming that buffer will never get full
			if(list_head == 8 )
				list_head = 0;
				post sensorData();
			}

	}

/* Functions required to parse the UART data coming from Soil Moisture Sensor*/
	uint8_t hex2num(uint8_t hex){
        	return (hex - 48);
	}

	uint16_t ascii2num( uint8_t *buffer, uint8_t *len)
	{
       		uint8_t loop, temp = 100;
       		uint16_t local = 0,val = 0;
       		for (loop = 3; loop >= 0; loop --)
        	{
        	        val = buffer[*len++];
        	        if (val == 0x20 || val == 0x0D|| len == 0)                       // For 1st two data bytes end is 0x20 and for 3rd data bytes end is 0x0D
        	        {
        	                return local;
        	        }
               		val = hex2num((uint8_t)val);
                	val = val * temp;
               		temp /= 10;
                	local = local + val;
        	}
        	return local;
	}


default async event void SoilMoistInterface.readDone(uint8_t Sensor, uint16_t *val, error_t err){}

 async event void Uart0Stream.sendDone( uint8_t* buff, uint16_t len, error_t error ){}
 async event void Uart0Stream.receivedByte( uint8_t byte ){}

	
}		// END on Implementation
