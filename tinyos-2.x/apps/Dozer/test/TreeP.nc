includes Dozer;

module TreeP {
  uses {
    interface Boot;
    interface SplitControl as RadioControl;
    interface AMPacket;
    interface AMSend as BeaconSend;
    interface Receive as BeaconReceive;
    interface AMSend as DataSend;
    interface Receive as DataReceive;
    interface Timer<TMilli> as BeaconTimer;
    interface Timer<TMilli> as BeaconWaitTimer;
    interface Timer<TMilli> as ConnReqListenTimer;
    interface LocalTime<TMilli> as LocalTime;
    interface Random;
    interface ParameterInit<uint16_t> as SeedInit;
    interface Leds;

    interface TDMASchedule;
  }
}

implementation {
  // Beacon Messages
  dozer_beacon_t local;         // Beacon Msg to transmit as Parent
//  dozer_beacon_t parent;        // Beacon Msg to transmit as Parent
  uint16_t seed;

  uint32_t beacon_interval;     // Beacon Transmission Interval as Parent 
  uint16_t gParent_id = 0; 	// Node's Parent ID
  uint16_t listen_id;		// Parent's Node ID whose Beacon we are expecting

  message_t sendBuf;            // Message Buffer used for Beacon/ConnRequest/ConnReply transmissions
  bool radioOn, sendBusy;       // Radio is ON and Sending (when both are TRUE)
  bool TreeConnected=FALSE;	// Connected to the Tree Network (Initially only the Root Node is connected)
  bool ConnRequestPending = FALSE;	// Used to indicate a Pending Connection Request which requires the Radio to be 'ON'.

  task void send_beacon();
  void startTimer();
  void start_radio();
  void stop_radio();

  // Use LEDs to report various status issues.
  void report_problem() { return; }
 // void report_problem() { //call Leds.led0Toggle(); }
  void report_sent() { call Leds.led1Toggle(); }
  void report_received() { call Leds.led2Toggle(); }

  event void Boot.booted() {

    // Initial Values of Nodes Beacon Msg
    beacon_interval = DEFAULT_BEACON_INTERVAL;
    local.seed = DEFAULT_SEED_VALUE;
    local.hopcount = INVALID_VALUE;
    local.children = 0;

    // Initially set the Radio State as OFF and Unused 	
    radioOn = FALSE;
    sendBusy = FALSE;

    // Initalize the ParentNodes and ChildNodes Tables of Scheduler 	
    call TDMASchedule.clearTableEntry(INVALID_VALUE, INVALID_VALUE);
 
    // Starts the Radio 
    start_radio();

    // If the Node is a Sink/Root Node of the Network, start sending Beacon Msgs
    if(TOS_NODE_ID == ROOT_MOTE_ID) {
      local.hopcount = 0;
      TreeConnected = TRUE;
      post send_beacon();
      call TDMASchedule.allocChildTimeSlot(2); // Testing
      call TDMASchedule.allocChildTimeSlot(1); // Testing
    } else {
      if (TOS_NODE_ID == 1)	
       call TDMASchedule.setParentTDMASlot(1);  // Testing	
	
      if (TOS_NODE_ID == 2)	
       call TDMASchedule.setParentTDMASlot(0);  // Testing	
    }
  }

  // Function to start a Timer to send the Next Beacon Msg
  void startTimer() {
    call SeedInit.init(local.seed);             
    local.seed = call Random.rand16() &  0x1ff; 
    call BeaconTimer.startOneShot(beacon_interval+local.seed);
  }

  // Function to start Radio
  void start_radio() {
    if(radioOn) return;
    if (call RadioControl.start() != SUCCESS)
      report_problem();
  }

  // Function to Stop Radio
  void stop_radio() {
    if(!radioOn) return;
    if (call RadioControl.stop() != SUCCESS)
      report_problem();
  }

  // Radio start and stop split phase events 
  event void RadioControl.startDone(error_t error) {
    radioOn = TRUE;
    call Leds.led0Off();
  }

  event void RadioControl.stopDone(error_t error) {
    radioOn = FALSE;
    call Leds.led0On();
  }

  // This send_data task is only for Testing
  task void send_data() {
    if (radioOn && !sendBusy && sizeof local <= call DataSend.maxPayloadLength())
    {
      // Don't need to check for null because we've already checked length
      // above
      memcpy(call DataSend.getPayload(&sendBuf, sizeof(local)), &local, sizeof(local));
      if (call DataSend.send(gParent_id, &sendBuf, sizeof local) == SUCCESS)
        sendBusy = TRUE;
    } else { post send_data(); }

    if (!sendBusy)
      report_problem();
  }

  event void TDMASchedule.radioWakeup(uint8_t type, uint16_t node_id) {
    uint8_t rounds = 1;

    if (!radioOn) {
        start_radio();
    }

    switch (type)
    { 
      case BEACON_LISTEN:
        listen_id = node_id;
	if (node_id != gParent_id) {
	  rounds = (PARENTS_UPDATE_INTERVAL/DEFAULT_BEACON_INTERVAL);
	}
	call BeaconWaitTimer.startOneShot(2*rounds*CLOCK_DRIFT_COMPENSATION + 1);
	break;

      case TSLOT_LISTEN:
	call BeaconWaitTimer.startOneShot(TDMA_SLOT_LEN/2);	// Only for Testing
 	break;

      case TSLOT_LISTEN_STOP:
        stop_radio();
 	break;

      case TSLOT_DATA_SEND:
        local.seed = node_id;
	post send_data();	// Only for Testing
	break;

      default:
	break;
    } 
  }

  event void BeaconTimer.fired() {
    if (!radioOn) {
        start_radio();
    }

    if (TreeConnected) {
      post send_beacon();
    }/* else {
	 Guard Time = twice Clock Drift Compensation over the Period
	 Clock Drift Compensation = 100ppm
	 Clock Drift Compensation = (100 * (Clock_Frequency = 7.32MHz)/Million)Hz			
	 			  = 100 * 7.32 = 732 Hz
	 Clock Drift Compensation(Millisec) = (732/7.32)* 10^-6* 10^3 
					    = 0.1 MilliSec per Sec
	 A Delay of "1ms" is provided for the Radio to Stabilize after starting
     
      call BeaconWaitTimer.startOneShot(2*CLOCK_DRIFT_COMPENSATION + 1);
    }*/
  }

  event void BeaconWaitTimer.fired() {
    // Increment Missed Beacons Count
    stop_radio();
    if (TOS_NODE_ID == 0) { return; } 
    if (listen_id == gParent_id) {
      call TDMASchedule.setParentTimeStamp(listen_id, TRUE, INVALID_VALUE, call LocalTime.get());
    } else 
      call TDMASchedule.setParentTimeStamp(listen_id, FALSE, INVALID_VALUE, call LocalTime.get());
    //startBeaconListenTimer();
  }

  event void ConnReqListenTimer.fired() {
    if (!ConnRequestPending)
      stop_radio();
  }
  
  task void send_beacon() {
    if (radioOn && !sendBusy && sizeof local <= call BeaconSend.maxPayloadLength())
    {
      // Don't need to check for null because we've already checked length
      // above
      memcpy(call BeaconSend.getPayload(&sendBuf, sizeof(local)), &local, sizeof(local));
      if (call BeaconSend.send(AM_BROADCAST_ADDR, &sendBuf, sizeof local) == SUCCESS)
        sendBusy = TRUE;
    } else { post send_beacon(); }

    if (!sendBusy)
      report_problem();
  }

  event message_t* BeaconReceive.receive(message_t* msg, void* payload, uint8_t len) {
    dozer_beacon_t *bmsg = call BeaconSend.getPayload(msg, sizeof(dozer_beacon_t)); //(dozer_beacon_t*) payload;
    uint16_t src =  call AMPacket.source(msg);

    call BeaconWaitTimer.stop();
    report_received(); 

    seed = bmsg->seed;
    stop_radio(); // To be called from inside the if condition
    if (TreeConnected) { 	 
      // Give the Beacon Reception Timestamp to Scheduler Module	
      if (src == gParent_id) {
        call TDMASchedule.setParentTimeStamp(src, TRUE, seed, call LocalTime.get());
      } else 
        call TDMASchedule.setParentTimeStamp(src, FALSE, seed, call LocalTime.get());
    } else { 
      call TDMASchedule.setParentTimeStamp(src, TRUE, seed, call LocalTime.get());
      //Update_Neighbour(); 	
      //Choose_Parent();	
    }
    return msg;	
  }

  event void BeaconSend.sendDone(message_t* msg, error_t error) {
    if (error == SUCCESS) {
      report_sent();
      // Wait for an Activation Pulse from child 
      // if no activty is observed put the radio off.    
    }else {
      report_problem();
    }

    startTimer();
    call TDMASchedule.setBeaconTimeStamp(call LocalTime.get());
    if (local.children <= MAX_CHILDREN) {
      call ConnReqListenTimer.startOneShot(ACTIVATION_WAIT_PERIOD);
    } else {	
      stop_radio();
    }
    sendBusy = FALSE;

  }

  event message_t* DataReceive.receive(message_t* msg, void* payload, uint8_t len) {
    call BeaconWaitTimer.stop();
    report_received();

    stop_radio(); // To be called from inside the if condition
    return msg;	
  }

  event void DataSend.sendDone(message_t* msg, error_t error) {
    if (error == SUCCESS) {
      report_sent();
      // Wait for an Activation Pulse from child 
      // if no activty is observed put the radio off.    
    }else {
      report_problem();
    }
    // This if condition is for Testing
    stop_radio();
    sendBusy = FALSE;
  }
}
