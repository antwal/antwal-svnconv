/*
 * Name           : uAgriP.nc
 * Authors        : u-Agri Team 
 * Organization   : C-DAC, Hyderabad
 * Project        : NUCRC, u-Agri
 * Date           : 2007/12/18, 2009/07/31
 *
 *
 * Description    :
 *** The aim of the Module is to sense parameters at specified Periodicities,
 *** packetlize data collected and send it through radio to the BaseStation (sink node).
 *
 *
 *** Contains initializing sensors with default periodicities (Defined at sensors.h), 
 *** setting channels and flags for individual sensor, checking for proper installation 
 *** of MDA300 and creating records for the sensors in the sampler module. 
 *** The module handles readDone events from the sampler, packetilizes the data, 
 *** sends the packet out of radio using the choosen routing module.
 *
 *
 *** The module is capable of handling control data from dissemination component (if choosen),
 *** to take the requested action accordingly. Reactions to the control data can be either a change 
 *** in the sensor periodicities/making a snapshot of the current status of parameters (sensors) 
 *** available to the user. The set of parameters that the module currently supports are temperature,
 *** humidity, rainfall, solar radiation, wind speed & direction. The module avoids overwriting of
 *** packets sent to the radio module by maintaining a queue kind of mechanism at its level and 
 *** checking for the status of the radio before calling 'send'. When no routing module is selected, 
 *** the module takes the overhead of forwarding the data packets to UART, at the sink node. 
 *
 */

/* ------------------------------
 * Headers ( Component Specific )
 * ------------------------------
 */
#include "uAgri.h"
#include "sensorboard.h"

module uAgriP {
  uses {
    interface Boot;

   //Sampler Communication
    interface Init as SamplerInit;
    interface SplitControl as SamplerControl;
    interface Sample;
    command error_t PlugPlay();			 // support for plug and play
 
    // Interfaces for Routing and Data Queuing
    interface Init as RoutingInit;
    interface DataQueueManage;

    // Miscalleny:
    interface Leds;
  }
  
}

implementation {

    #define LWET_THRESHOLD 21                           // Leaf Wetness Threshold 21 for uncoated sensor and 30 for coated/painted one    
    #define LWET_THRESHOLD1 1536                        // For Abhishek's sensors 1536

    // Sensor Types //          
    enum {
      TEMP_TYPE    = 0,
      HUMID_TYPE   = 1,
      BATTERY_TYPE = 2,
      RAIN_TYPE    = 3,
      SMOIST_TYPE  = 4,
      STEMP_TYPE   = 5,
      WSPEED_TYPE  = 6,
      WDIR_TYPE    = 7,
      LWET_TYPE    = 8,
      SOLAR_TYPE   = 9,
      LWET_TYPE1   = 10, 	                        // Furture Purpose      
    };

    static void start_sampling();
    static void fatal_problem();
    static void report_problem();
    static void report_sent();
    static void report_received();

    /* Messages Buffers */
    SensedData_t packet[MAX_SENSORS];                     // Data Buffers for individual sensors
    SensedData_t *tmpdatapack;                             

    uint8_t  ChNo[MAX_SENSORS], Channel[MAX_SENSORS], Flags[MAX_SENSORS]; // ADC/Digital Channel Numbers, Channel Names, Flags to IBADC 
    uint32_t periodicity[MAX_SENSORS];                  // Sensor Periodicities  
    int8_t   record[MAX_SENSORS];                                // Sampler Records 

    uint16_t sensor_bitmap;                             // Bitmap of the Sensors connected to the Mote
    uint16_t bitmap;                                    // Bitmap of the Sensors for which Periodicity is to be changed according to Control Data

    uint16_t packet_ready;                              // Bitmap of the pkts filled in array (packet[10]) 

    /* One Shot Messages Buffers */
    #ifdef DISSMN    
      OneShotData_t oneshotpacket;
      OneShotData_t  *tmpsnapshot;
    #endif

    uint8_t oneshotflag = 0;                            // Flag indicating the oneshot event
    uint16_t lcount[2]={0,0}, lcountMax[2]={0,0};	// Leaf Wetness Counter, Counter Max Value
    uint16_t lwet[2]={0,0};             		// Leaf Wetness Value    

   /* ----------------------------------------------------
    * Initialize the Sensor Channel Names, Numbers & Flags      
    * ----------------------------------------------------
    */  
    static void init_sensorflags()
    {
    
        // Sensor Channel Names and Numbers
          Channel[TEMP_TYPE]    = TEMPERATURE; ChNo[TEMP_TYPE]    = 0;
          Channel[HUMID_TYPE]   = HUMIDITY;    ChNo[HUMID_TYPE]   = 0;
          Channel[BATTERY_TYPE] = BATTERY;     ChNo[BATTERY_TYPE] = 0;
          Channel[RAIN_TYPE]    = DIGITAL;     ChNo[RAIN_TYPE]    = 0;
          Channel[SMOIST_TYPE]  = ANALOG;      ChNo[SMOIST_TYPE]  = 3;
          Channel[STEMP_TYPE]   = ANALOG;      ChNo[STEMP_TYPE]   = 2;
          Channel[WSPEED_TYPE]  = COUNTER;     ChNo[WSPEED_TYPE]  = 0;
          Channel[WDIR_TYPE]    = ANALOG;      ChNo[WDIR_TYPE]    = 1;
          Channel[LWET_TYPE]    = ANALOG;      ChNo[LWET_TYPE]    = 6;
          Channel[SOLAR_TYPE]   = ANALOG;      ChNo[SOLAR_TYPE]   = 0;
          Channel[LWET_TYPE1]   = ANALOG;      ChNo[LWET_TYPE1]   = 5;


        // Sensor Flags used by IBADC
          Flags[TEMP_TYPE]    = SAMPLER_DEFAULT;
          Flags[HUMID_TYPE]   = SAMPLER_DEFAULT;
          Flags[BATTERY_TYPE] = SAMPLER_DEFAULT;
          Flags[RAIN_TYPE]    = RESET_ZERO_AFTER_READ | RISING_EDGE;
          Flags[SMOIST_TYPE]  = EXITATION_25 | AVERAGE_EIGHT;
          Flags[STEMP_TYPE]   = EXITATION_25;
          Flags[WSPEED_TYPE]  = RESET_ZERO_AFTER_READ;
          Flags[WDIR_TYPE]    = EXITATION_50 | AVERAGE_EIGHT | EXITATION_ALWAYS_ON;
          Flags[LWET_TYPE]    = EXITATION_25 | AVERAGE_EIGHT; 
          Flags[SOLAR_TYPE]   = AVERAGE_SIXTEEN; 
          Flags[LWET_TYPE1]   = EXITATION_33 | AVERAGE_EIGHT; 

    }


   /* -----------------------------------
    * Initialize the Sensor Periodicities       
    * -----------------------------------
    */  
    static void initialize()
    {
          uint16_t i, j;

          // Initialize Sensors with Default Periodicities (Defined in sensors.h)
          periodicity[TEMP_TYPE]    = TEMP_SAMPLING_TIME;
          periodicity[HUMID_TYPE]   = HUMID_SAMPLING_TIME;
          periodicity[BATTERY_TYPE] = BATTERY_SAMPLING_TIME;
          periodicity[RAIN_TYPE]    = RAIN_SAMPLING_TIME;
          periodicity[SMOIST_TYPE]  = SMOIST_SAMPLING_TIME;
          periodicity[STEMP_TYPE]   = STEMP_SAMPLING_TIME;
          periodicity[WSPEED_TYPE]  = WSPEED_SAMPLING_TIME;
          periodicity[WDIR_TYPE]    = WDIR_SAMPLING_TIME;
          periodicity[LWET_TYPE]    = LWET_SAMPLING_TIME;
          periodicity[SOLAR_TYPE]   = SOLAR_SAMPLING_TIME;
          periodicity[LWET_TYPE1]   = LWET_SAMPLING_TIME;

          if (periodicity[LWET_TYPE] != 0) {
            lcountMax[0] = 36000U/periodicity[LWET_TYPE];       // LWET_SAMPLING_TIME when multiplied with lcountMax 
          }                                                     // should give 1 Hour of Sampling Time  

          if (periodicity[LWET_TYPE1] != 0) {
            lcountMax[1] = 36000U/periodicity[LWET_TYPE1];      // LWET_SAMPLING_TIME when multiplied with lcountMax 
          }                                                     // should give 1 Hour of Sampling Time  

          sensor_bitmap = 0;
          for (i=0, j=0x01; i < MAX_SENSORS; i++, j*=2) {
            if (periodicity[i] != 0) {
                sensor_bitmap |= j;
            }
          }

          for (i=0; i < MAX_SENSORS; i++) {
	    packet[i].crop_id = CROP_ID;
	    packet[i].plot_id = PLOT_ID;     
	  }

    }

    // 
    // On bootup, initialize radio and serial communications, and our
    // own state variables.
    //
    event void Boot.booted() {
      // Beginning our initialization phases:
      call RoutingInit.init();
      call SamplerInit.init();                                  // Initialize Sampler
      init_sensorflags();                                       // Initialize Flags, Channels
      initialize();                                             // Initialize Sensor Periodicities

      if (TOS_NODE_ID != BASE_STATION_ADDR) {
        call SamplerControl.start();
      }

      packet_ready = 0;          

    }

    static void start_sampling() {
      uint8_t i=0;

      if (call PlugPlay())                                 // Check for Proper Installation of MDA300
      {
        for (i=0; i < MAX_SENSORS; i++) {                        // Create Records of each Sensor in Sampler for Sampling
          if (periodicity[i] != 0)
            record[i] = call Sample.getSample(ChNo[i],Channel[i],periodicity[i],Flags[i]);
        }
        call Leds.led1On();  	                                  // Green Led on when MDA300 Check says OK
        call Sample.start();                                    //******* Start Sampling Data **********/       

      } else {
        fatal_problem();  	                                  // Red Led on when MDA300 Check says OK
      }
    }

    event void SamplerControl.startDone(error_t error) {
	if (error != SUCCESS) {
          fatal_problem();
	} else {
          start_sampling();	
	}
    }    

    event void SamplerControl.stopDone(error_t error) { }

         
    void addPendingDataToSendQueue() {
	uint8_t i, clear_bit;

	if (oneshotflag) {
            if (call DataQueueManage.addToQueue(&oneshotpacket, sizeof(oneshotpacket)) != SUCCESS) { return; }
	    oneshotflag = 0;		
	}

        for (i=0; i < 11; i++) {
          if (packet_ready & (1 << i)){                         // Find the next packet to send from the array  (packet[10])
            if (call DataQueueManage.addToQueue(&packet[i], sizeof(packet[i])) == SUCCESS) {
              clear_bit = ~(1 << i);
              packet_ready = packet_ready & clear_bit;		// Clear the bit for the packet sent
            } else { return; } 
          }
        }

    }

    event void DataQueueManage.addLocalDataToQueue()
    {
       addPendingDataToSendQueue();
    }

   /* -----------------------------------
    * Handle readDone events for Sensors 
    * -----------------------------------
    */
    event error_t
    Sample.readDone(uint8_t channel,uint8_t channelType,uint16_t data)
    {

	for (i=0; i < MAX_SENSORS; i++) {
	  if ((Channel[i] == channelType) && (ChNo[i] == channel)) { break; }
	}

	if (i >= MAX_SENSORS) { return SUCCESS; }

	if (oneshotflag & ((1 << i) & bitmap)) {
	  atomic {
	    oneshotpacket.value[i] = data;
	    bitmap &= ~(1 << i); 	
	  }

	  if (bitmap) { return SUCCESS; }
	}	

	packet[i].value = data;
	atomic {
	  packet_ready = packet_ready | (1 << i);
	}
	
        switch (channelType) {
         case ANALOG:                                            // ANALOG case
             switch (channel) {
             case 0:                                             // ADC Channel '0'
             case 7:                                             // ADC Channel '7' 
                 if (oneshotflag & ((1 << SOLAR_TYPE) & bitmap)) {
		    atomic {
		      oneshotpacket.value[SOLAR_TYPE] = data;
		      bitmap &= ~(1 << SOLAR_TYPE); 	
		    }

		    if (bitmap) { return SUCCESS; }
		 }	

                 packet[SOLAR_TYPE].value = data;
                 atomic {
                   packet_ready = packet_ready | (1 << SOLAR_TYPE);
                 }
                 break;

             case 5:                                             // ADC Channel '5'
                 lcount[1]++;                                    // Increment Leaf Wetness Counter till lcountMax 
                 if(data > LWET_THRESHOLD1)                      // Check if ADC value crosses LWet Threshold('1536' C-DAC) 
                      lwet[1] = lwet[1] + 1; 

                 if(lcount != lcountMax) 
                    return SUCCESS;              
                 
                 //Fill the packet when LWet counter reaches <30> (Every Hour)
                 packet[LWET_TYPE1].value = lwet[1];  
                 atomic {
                  packet_ready = packet_ready | (1 << LWET_TYPE1);
                  lcount[1] = 0;                                 // Set LWet Counter, Values to zero  
                  lwet[1] = 0;
                 }
                 break;

             case 6:                                             // ADC Channel '6'
                 lcount[0]++;                                    // Increment Leaf Wetness Counter till lcountMax 
                 if(data > LWET_THRESHOLD)                       // Check if ADC value crosses LWet Threshold('21' Campbell) 
                      lwet[0] = lwet[0] + 1; 

                 if(lcount != lcountMax) 
                    return SUCCESS;              
                 
                 //Fill the packet when LWet counter reaches <30> (Every Hour)
                 packet[LWET_TYPE].value = lwet[0];  
                 atomic {
                  packet_ready = packet_ready | (1 << LWET_TYPE);
                  lcount[0] = 0;                                 // Set LWet Counter, Values to zero  
                  lwet[0] = 0;
                 }
                 break;

             case 1:                                             // ADC Channel '1'
                 if (oneshotflag & ((1 << WDIR_TYPE) & bitmap)) {
		    atomic {
		      oneshotpacket.value[WDIR_TYPE] = data;
		      bitmap &= ~(1 << WDIR_TYPE); 	
		    }

		    if (bitmap) { return SUCCESS; }
		 }	

                 packet[WDIR_TYPE].value = data;
                 atomic {
                  packet_ready = packet_ready | (1 << WDIR_TYPE);
                 }
                 break;

             case 2:                                             // ADC Channel '2'
                 if (oneshotflag & ((1 << STEMP_TYPE) & bitmap)) {
		    atomic {
		      oneshotpacket.value[STEMP_TYPE] = data;
		      bitmap &= ~(1 << STEMP_TYPE); 	
		    }

		    if (bitmap) { return SUCCESS; }
		 }
	
                 packet[STEMP_TYPE].value = data;
                 atomic {
                  packet_ready = packet_ready | (1 << STEMP_TYPE);
                 }
                 break;

             case 3:                                             // ADC Channel '3'
                 if (oneshotflag & ((1 << SMOIST_TYPE) & bitmap)) {
		    atomic {
		      oneshotpacket.value[SMOIST_TYPE] = data;
		      bitmap &= ~(1 << SMOIST_TYPE); 	
		    }

		    if (bitmap) { return SUCCESS; }
		 }	

                 packet[SMOIST_TYPE].value = data;
                 atomic {
                  packet_ready = packet_ready | (1 << SMOIST_TYPE);
                 }
                 break;

             default:
                 break;
             }                                                   // Closing case ANALOG (channel) 
             break;
         /* --------------------------------------------------------------------- */

         case DIGITAL:                                           // DIGITAL case
             switch (channel) {
             case 0:
                 if (oneshotflag & ((1 << RAIN_TYPE) & bitmap)) {
		    atomic {
		      oneshotpacket.value[RAIN_TYPE] = data;
		      bitmap &= ~(1 << RAIN_TYPE); 	
		    }

		    if (bitmap) { return SUCCESS; }
		 }	

                 packet[RAIN_TYPE].value = data;                      // Fill in the data value       
                 atomic {
                  packet_ready = packet_ready | (1 << RAIN_TYPE);        // Set bit in packet_ready bitmap               
                 }
                 break;

             default:
                 break;
             }  
             break;
         /* --------------------------------------------------------------------- */

         case BATTERY:                                           // BATTERY
                 if (oneshotflag & ((1 << BATTERY_TYPE) & bitmap)) {
		    atomic {
		      oneshotpacket.value[BATTERY_TYPE] = data;
		      bitmap &= ~(1 << BATTERY_TYPE); 	
		    }

		    if (bitmap) { return SUCCESS; }
		 }	

                 packet[BATTERY_TYPE].value = data;
                 atomic {
                  packet_ready = packet_ready | (1 << BATTERY_TYPE);
                 }
                 break;

         case HUMIDITY:                                          // HUMDITY
                 if (oneshotflag & ((1 << HUMID_TYPE) & bitmap)) {
		    atomic {
		      oneshotpacket.value[HUMID_TYPE] = data;
		      bitmap &= ~(1 << HUMID_TYPE); 	
		    }

		    if (bitmap) { return SUCCESS; }
		 }	
                 if(oneshotflag)
                   return SUCCESS;

                 packet[HUMID_TYPE].value = data;
                 atomic {
                  packet_ready = packet_ready | (1 << HUMID_TYPE);
                 }
                 break;

         case TEMPERATURE:                                       // TEMPERATURE  
                 if (oneshotflag & ((1 << TEMP_TYPE) & bitmap)) {
		    atomic {
		      oneshotpacket.value[TEMP_TYPE] = data;
		      bitmap &= ~(1 << TEMP_TYPE); 	
		    }

		    if (bitmap) { return SUCCESS; }
		 }	

                 packet[TEMP_TYPE].value = data;
                 atomic {
                  packet_ready = packet_ready | (1 << TEMP_TYPE);
                 }
                 break;

         case COUNTER:                                           // COUNTER
                 if (oneshotflag & ((1 << WSPEED_TYPE) & bitmap)) {
		    atomic {
		      oneshotpacket.value[WSPEED_TYPE] = data;
		      bitmap &= ~(1 << WSPEED_TYPE); 	
		    }

		    if (bitmap) { return SUCCESS; }
		 }	

                 packet[WSPEED_TYPE].value = data;
                 atomic {
                  packet_ready = packet_ready | (1 << WSPEED_TYPE);
                 }
                 break;

         default:
             break;

      }  // switch (channelType) 
         /* --------------------------------------------------------------------- */
      	
      addPendingDataToSendQueue();

      return SUCCESS;
    }

   /* -----------------------------------
    * To set Sensor Periodicities with
    * specified Remote Configuration Data
    * -----------------------------------
    */
    void sampler_retask() {
      int i,j;
      for (i=0, j=0x01; i < MAX_SENSORS; i++, j*=0x02) {
        if (bitmap & j) {                                         // Use bitmap to change periodicities of requested sensors only
           call Sample.reTask(record[i], periodicity[i]);
        } 
      }
    }

    event message_t* CmdReceive.receive(message_t* msg, void* payload, uint8_t len)
    {
	
      DissmnCtrlMsg *pCtrlMsg = (DissmnCtrlMsg *)payload;        // Get pointer to payload of Control Msg
      uint16_t i, k;

      switch(pCtrlMsg->type) {
	// case to Change Sensor Periodicities    
	case DISSMN_TYPE_SETRATE:

	    // Sensors for which periodicities are not to be changed are indicated with '0'(zero) periods
	    // in the Control Msg. Using this bits in "bitmap" are set only for those sensors that require change 
	    bitmap = 0;
	    for (i=0, k=0; i < MAX_SENSORS; i++, k++) {
		if ((sensor_bitmap & (1 << i)) && (pCtrlMsg->period[i] != 0)) {
		   bitmap |= j;
		   periodicity[k] = (pCtrlMsg->period[i] * 600); // Set periocicity variables
		}
	    }

	    sampler_retask();					 // Change Periodicities of the Sample Records
	    break;

	// case to Get OneShot Data
	case DISSMN_TYPE_ONESHOT:

	    atomic { oneshotflag = 1; }				 // Set to identify data ready events as OneShot Data events

	    bitmap = pCtrlMsg->bitmap;
	    memset(&oneshotpacket, 0, sizeof(oneshotpacket)); 
	    // Check for the available/connected sensors
	    for (i=0; i < MAX_SENSORS; i++) {
		if (sensor_bitmap & bitmap & (1 << i)) {
		   call Sample.readSample(record[i]);
		}
	    }
	    break;

	default:
	    break;
      }
      return msg;

    }

    // Use LEDs to report various status issues.
    static void fatal_problem() { 
      call Leds.led0On(); 
    /*  call Leds.led1On();
      call Leds.led2On();*/
    }

    static void report_problem() { call Leds.led0Toggle(); }
    static void report_sent() { call Leds.led1Toggle(); }
    static void report_received() { call Leds.led2Toggle(); }
}
