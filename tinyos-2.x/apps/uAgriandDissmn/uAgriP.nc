/*
 * Name           : uAgriP.nc
 * Authors        : u-Agri Team 
 * Organization   : C-DAC, Hyderabad
 * Project        : NUCRC, u-Agri
 * Date           : 2007/12/18, 2009/07/31, 2011/09/22
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

module uAgriP {
  uses {
    // Interfaces for initialization:
    interface Boot;
    interface SplitControl as RadioControl;
    interface SplitControl as SerialControl;
    interface StdControl as RoutingControl;
   
    // Sampler Communication
    interface Init as SamplerInit;
    interface SplitControl as SamplerControl;
    interface Sample;
    command error_t PlugPlay(); // support for plug and play

 
    // Interfaces for communication, multihop and serial:
    interface Send as DataSend;
    interface Receive;
    interface AMSend as SerialSend;
    interface CollectionPacket;
    interface RootControl;

    interface Queue<message_t *> as UARTQueue;
    interface Pool<message_t> as UARTMessagePool;

    // Interfaces for Dissemination of Control Data	
    interface StdControl as DisseminationControl;
    interface DisseminationValue<DissmnCtrlMsg> as CtrlDataValue;
    interface DisseminationUpdate<DissmnCtrlMsg> as UpdateCtrlData;

    // Miscalleny:
    interface Leds;
    interface LowPowerListening;
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

    task void uartSendTask();
    static void start_sampling();
    static void fatal_problem();
    static void report_problem();
    static void report_sent();
    static void report_received();
    
    uint8_t  ChNo[MAX_SENSORS], Channel[MAX_SENSORS], Flags[MAX_SENSORS]; // ADC/Digital Channel Numbers, Channel Names, Flags to IBADC 
    uint32_t periodicity[MAX_SENSORS];                  // Sensor Periodicities  
    int8_t   record[25];                                // Sampler Records 

    uint16_t sensor_bitmap;                             // Bitmap of Sensors connected to the Mote
    uint16_t bitmap;                                    // Bitmap of Sensors for which Period is to be changed, as requested in Ctrl Data

    uint16_t lcount[2]={0,0}, lcountMax[2]={0,0};	// Leaf Wetness Counter, Counter Max Value
    uint16_t lwet[2]={0,0};             		// Leaf Wetness Value    

    /* Data Message Buffers */
    SensedData packet[MAX_SENSORS];                     // Data Buffers for individual sensors
    message_t msg_send_buffer;                          // Argument to Send/SendMsg (Final Pkt sent out) 
    message_t *msg_ptr;                                 // Pointer to msg_send_buffer
    SensedData *tmpdatapack;                            // Temporary Buffer 

    /* One Shot Message Buffers */
    #ifdef DISSMN    
    OneShotData oneshotpacket;				// Oneshot Data Buffer
    message_t one_shot_buffer;
    message_t *oneshotmsg_ptr;					
    OneShotData *tmpsnapshot;
    #endif

    uint8_t oneshotflag = 0;                            // Flag indicating the Oneshot event

    bool sending_packet;    	                        // Flag indicating the status of Radio (Busy/Free)
    uint16_t packet_ready;      	                // Bitmap of the pkts filled in array ( packet[MAX_SENSORS] ) 
    uint8_t next_packet;                	        // Next packet to send from packet array

    uint8_t uartlen;						
    message_t uartbuf;					// Buffer used at BS node for Serial Comm	
    bool uartbusy=FALSE;				// Flag indicating the status of UART (Busy/Free)


   /* ----------------------------------------------------
    * Initialize the Sensor Channel Names, Numbers & Flags      
    * ----------------------------------------------------
    */  
    static void init_sensorflags() {
     
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
    static void init_sensor_period() {
    
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

      bitmap = 0;
      sensor_bitmap = 0;
      for (i=0, j=0x01; i < MAX_SENSORS; i++, j*=2) {
        if (periodicity[i] != 0) {
          sensor_bitmap |= j;
	  packet[i].sensor_id = i;
        }
      }
    }


   /* -----------------------------------
    * Initialize the Sensor Periodicities       
    * -----------------------------------
    */  
    static void init_data_buffers() {
      uint16_t i;

      // Initialize Flags & Pointers and Default Values
      msg_ptr = &msg_send_buffer;
      packet_ready = 0;          
      next_packet = 0;
      sending_packet = FALSE;

      for (i=0; i < MAX_SENSORS; i++) {
	packet[i].node_id = TOS_NODE_ID;
	packet[i].crop_id = CROP_ID;
	packet[i].plot_id = PLOT_ID;     
      }

      #ifdef DISSMN    
      oneshotpacket.node_id = TOS_NODE_ID;
      oneshotpacket.crop_id = CROP_ID;
      oneshotpacket.plot_id = PLOT_ID;
      oneshotmsg_ptr = &one_shot_buffer;	
      #endif 

    }

    /*------------------------------------------------------ 
     * On bootup, initialize radio and serial communications,
     * and our own state variables.
     *------------------------------------------------------
     */
    event void Boot.booted() {
      // Beginning our initialization phases:
      call SamplerInit.init();                                  // Initialize Sampler
      init_sensorflags();                                       // Initialize Flags, Channels
      init_sensor_period();                                     // Initialize Sensor Periodicities
      init_data_buffers();                                      // Initialize Data Buffers

      if (call RadioControl.start() != SUCCESS)
        fatal_problem();

      if (call RoutingControl.start() != SUCCESS)
        fatal_problem();

    }

    event void RadioControl.startDone(error_t error) {
      if (error != SUCCESS) { fatal_problem(); }

      call LowPowerListening.setLocalDutyCycle(3000);

      // Start Drip Dissemination Component
      if (call DisseminationControl.start() != SUCCESS) { fatal_problem(); }			 
      // Start Serial Comnn Component	 
      if (call SerialControl.start() != SUCCESS) { fatal_problem(); }
    }

    event void SerialControl.startDone(error_t error) {
      if (error != SUCCESS)
        fatal_problem();

      // Set Base Station as a root to the collection layer
      // Start Sampler Component
      if (TOS_NODE_ID == BASE_STATION_ADDR) {
        call RootControl.setRoot();
      } else {
        call SamplerControl.start();
      }
    }

    event void SamplerControl.startDone(error_t error) {
      if (error != SUCCESS) {
        fatal_problem();
      } else {
	//call Leds.led2On();
        start_sampling();	
      }
    }    

    static void start_sampling() {
      uint8_t i=0;

      if (call PlugPlay()) {                                   // Check for Proper Installation of MDA300
        for (i=0; i < MAX_SENSORS; i++) {                      // Create Records of each Sensor in Sampler for Sampling
          if (periodicity[i] != 0)
            record[i] = call Sample.getSample(ChNo[i],Channel[i],periodicity[i],Flags[i]);
        }
        call Leds.led1On();  	                               // Green Led on when MDA300 Check says OK
        call Sample.start();                                   //******* Start Sampling Data **********/       
      }
      else {
        fatal_problem();  	                               // Red Led on when MDA300 Check says OK
      }
    }

    event void SamplerControl.stopDone(error_t error) { }
    event void RadioControl.stopDone(error_t error) { }
    event void SerialControl.stopDone(error_t error) { }


   /* -------------------------------
    * Task to Transmit Radio Message
    * -------------------------------
    */
    task void send_radio_msg()
    {
      SensedData *data;
      uint8_t i;

      if (sending_packet)                                      // Check if Radio is Free , return if Busy
        return;

      atomic sending_packet=TRUE;                             // Set Radio Flag to Busy before sending data
      for (i=0; i < MAX_SENSORS; i++) {
        if (packet_ready & (1 << i)) {                          // Find the next packet to send from the array  (packet[10])
          next_packet = i;
          break;
        }
      }
      if (i >= MAX_SENSORS){                                            // No packet is ready/filled to send, so return
        atomic sending_packet=FALSE;
        return;
      }

      // Get pointer to data part of TOS_Msg
      // Send the data packet         
      // Send to listener with sleep interval like us //
      data = (SensedData *)call DataSend.getPayload(msg_ptr, sizeof(SensedData));
      if (data == NULL) {
        fatal_problem();
        atomic sending_packet=FALSE;
        return;
      }

      memcpy(data, &packet[next_packet], sizeof(SensedData));
      call LowPowerListening.setRxDutyCycle(msg_ptr, 3000);
      if (call DataSend.send(msg_ptr, sizeof(SensedData)) == SUCCESS) {
        atomic sending_packet = FALSE;
        post send_radio_msg();                              // Post the task to send the next data packet
      }

    }

    /*----------------------------------------------------------------
     * Only the root will receive messages from this interface; its job
     * is to forward them to the serial uart for processing on the pc
     * connected to the sensor network.
     *----------------------------------------------------------------
     */
    event message_t*
    Receive.receive(message_t* msg, void *payload, uint8_t len) {
      SensedData *in = (SensedData*)payload;
      SensedData *out;

      if (uartbusy == FALSE) {

        out = (SensedData* )call SerialSend.getPayload(&uartbuf, sizeof(SensedData));
        if (len != sizeof(SensedData) || out == NULL) {
	  return msg;
        } else {
	  memcpy(out, in, sizeof(SensedData));
        }
        uartlen = sizeof(SensedData);
        post uartSendTask();

      } else {
        // The UART is busy; queue up messages and service them when the
        // UART becomes free.
        message_t *newmsg = call UARTMessagePool.get();
        if (newmsg == NULL) {
          // drop the message on the floor if we run out of queue space.
          report_problem();
          return msg;
        }

        //Serial port busy, so enqueue.
        out = (SensedData* )call SerialSend.getPayload(newmsg, sizeof(SensedData));
        if (out == NULL) {
  	  return   msg;
        }
        memcpy(out, in, sizeof(SensedData));

        if (call UARTQueue.enqueue(newmsg) != SUCCESS) {
          // drop the message on the floor and hang if we run out of
          // queue space without running out of queue space first (this
          // should not occur).
          call UARTMessagePool.put(newmsg);
          fatal_problem();
          return msg;
        }
      }

      return msg;
    }

    task void uartSendTask() {
      if (call SerialSend.send(0xffff, &uartbuf, uartlen) != SUCCESS) {
        report_problem();
      } else {
        uartbusy = TRUE;
      }
    }

    event void SerialSend.sendDone(message_t *msg, error_t error) {
      uartbusy = FALSE;

      if (call UARTQueue.empty() == FALSE) {
        // We just finished a UART send, and the uart queue is
        // non-empty.  Let's start a new one.
        message_t *queuemsg = call UARTQueue.dequeue();
        if (queuemsg == NULL) {
          fatal_problem();
          return;
        }
        memcpy(&uartbuf, queuemsg, sizeof(message_t));
        if (call UARTMessagePool.put(queuemsg) != SUCCESS) {
          fatal_problem();
          return;
        }
        post uartSendTask();
      }
    }


   /* ----------------------------------------
    * Handle completion of sent RF Data packet
    * ----------------------------------------
    */
    event void DataSend.sendDone(message_t* msg, error_t error) {
      uint8_t clear_bit;

      if (error == SUCCESS) {
        report_sent();

	if (msg_ptr == msg) {
   	  atomic {
            clear_bit = ~(1 << next_packet);
            packet_ready = packet_ready & clear_bit;                // Clear the bit for the packet sent
          }
	}
      } else { report_problem(); }
      
      sending_packet = FALSE;                                   // Set Radio Flag to free 
      post send_radio_msg();                                    // Post the task to send the next data packet 
    }


   /* ---------------------------------
    * Task to send One Shot Data Packet 
    * ---------------------------------
    */
    task void Send_OneShot_Data() {
      OneShotData *data;

      if (sending_packet)					// Check if Radio is Busy, if so return	
       return;

      atomic sending_packet=TRUE;				// Set Radio Flag to Busy

      // Get Pointer to data field of TOS_Msg
      data = (OneShotData* )call DataSend.getPayload(oneshotmsg_ptr, sizeof(OneShotData));
      if (data == NULL) {
        fatal_problem();
        atomic sending_packet=FALSE;
        return;
      }

      // Fill the data buffer with contents in oneshotpacket  
      memcpy(data, &oneshotpacket, sizeof(OneShotData));
      if (call DataSend.send(oneshotmsg_ptr, sizeof(OneShotData)) == SUCCESS) {
        atomic sending_packet = FALSE;
        post Send_OneShot_Data();                               
      }

   }

   /* -----------------------------------
    * Handle readDone events for Sensors 
    * -----------------------------------
    */
    event error_t
    Sample.readDone(uint8_t channel,uint8_t channelType,uint16_t data)
    {
	uint8_t i, ls = 0;					// 'ls' gives the LeafWetness Sensor type (0 -> Campbell, 1 -> C-DAC)	
	uint16_t lthreshold;					// LWet Threshold(21->Campbell, 1536->C-DAC)

	for (i=0; i < MAX_SENSORS; i++) {
	  if ((Channel[i] == channelType) && (ChNo[i] == channel)) { break; }
	}
	if (i >= MAX_SENSORS) { return SUCCESS; }

	if ((i == LWET_TYPE) || (i == LWET_TYPE1)) {
	  // Check the Leafwetness Sensor type (CDAC/Campbell)
	  // to decide the Threshold
	  lthreshold = LWET_THRESHOLD; 
	  if (i == LWET_TYPE1) { ls = 1; lthreshold = LWET_THRESHOLD1; }
          if (data > lthreshold)                        	// Check if ADC value crosses LWet Threshold(21->Campbell, 1536->C-DAC) 
            lwet[ls] = lwet[ls] + 1;

          if (++lcount[ls] == lcountMax[ls]) {
	    data = lwet[ls];
	    lwet[ls] = 0; lcount[ls] = 0; 	
	  } else { return SUCCESS; }

	}

	if (oneshotflag & ((1 << i) & bitmap)) {
	  atomic {
	    oneshotpacket.value[i] = data;
	    bitmap &= ~(1 << i); 	
	  }
	  if (!bitmap) { post Send_OneShot_Data(); }
	  return SUCCESS;	  
	}	

	atomic {
	  packet[i].value = data;
	  packet_ready = packet_ready | (1 << i);
	}

        if (sending_packet) {                                  // Check if Radio is Busy, if so return
          return SUCCESS;
        }
        post send_radio_msg();                                // Post the task to send the next data packet

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

    event void CtrlDataValue.changed() {
      const DissmnCtrlMsg* pCtrlMsg = call CtrlDataValue.get();
      uint16_t i, k;

      if ((pCtrlMsg->node_id != AM_BROADCAST_ADDR) && (pCtrlMsg->node_id != TOS_NODE_ID)) { return; }

      switch(pCtrlMsg->type) {
        // case to Change Sensor Periodicities    
        case DISSMN_TYPE_DEFAULTRATE:
	    init_sensor_period();
	    bitmap = sensor_bitmap;
	    sampler_retask();
	    break;	

        case DISSMN_TYPE_SETRATE:
            // Sensors for which periodicities are not to be changed are indicated with '0'(zero) periods
            // in the Control Msg. Using this bits in "bitmap" are set only for those sensors that require change 
            bitmap = 0;
            for (i=0; i < MAX_SENSORS; i++) {
                if ((sensor_bitmap & (1 << i)) && (pCtrlMsg->period[i] != 0)) {
                   bitmap |= (1 << i);
                   periodicity[i] = (pCtrlMsg->period[i]);// * 600); // Set periocicity variables
                }
            }

            sampler_retask();                                    // Change Periodicities of the Sample Records
            break;

        // case to Get OneShot Data
        case DISSMN_TYPE_ONESHOT:
            atomic { oneshotflag = 1; }                          // Set to identify data ready events as OneShot Data events
            bitmap = pCtrlMsg->bitmap;
            memset(&oneshotpacket, 0, sizeof(oneshotpacket));
            // Check for the available/connected sensors
            for (i=0; i < MAX_SENSORS; i++) {
                if (sensor_bitmap & bitmap & (1 << i)) {
                   call Sample.readSample(record[i]);
                }
            }
            break;

        // case to Set Transmission Power
        case DISSMN_TYPE_SETTXPWR:
            break;
	    	    
        // case to Set the Radio Frequency Channel 
        case DISSMN_TYPE_SETCHNL:
            break;

        default:
            break;
      }

      call Leds.led1Toggle();
    }

    // Use LEDs to report various status issues.
    static void fatal_problem() { 

     // call Leds.led0On(); 
    /*  call Leds.led1On();
      call Leds.led2On();*/
    }

    static void report_problem() { ; }//call Leds.led0Toggle(); }
    static void report_sent() { call Leds.led1Toggle(); }
    static void report_received() { call Leds.led2Toggle(); }
}
