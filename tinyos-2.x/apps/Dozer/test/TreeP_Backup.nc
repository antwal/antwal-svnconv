includes Dozer;

module TreeP {
  uses {
    interface Boot;
    interface SplitControl as RadioControl;
    interface AMSend as BeaconSend;
    interface Receive as BeaconReceive;
    interface Timer<TMilli> as BeaconTimer;
    interface Timer<TMilli> as BeaconWaitTimer;
    interface Random;
    interface ParameterInit<uint16_t> as SeedInit;
    interface Leds;

    interface TDMASchedule;
  }
}

implementation {
  uint32_t beacon_interval;     // Beacon Transmission Interval as Parent 

  message_t sendBuf;            // Message Buffer used for Beacon/ConnRequest/ConnReply transmissions
  bool radioOn, sendBusy;       // Radio is ON and Sending (when both are TRUE)
  bool TreeConnected=FALSE;	// Connected to the Tree Network (Initially only the Root Node is connected)
  bool PendingJob = FALSE;	// Used for Testing

  // Beacon Messages
  dozer_beacon_t local;         // Beacon Msg to transmit as Parent
  dozer_beacon_t parent;        // Beacon Msg to transmit as Parent

  task void send_beacon();
  void startTimer();
  void start_radio();
  void stop_radio();

  // Use LEDs to report various status issues.
  void report_problem() { ; }
 // void report_problem() { //call Leds.led0Toggle(); }
  void report_sent() { call Leds.led1Toggle(); }
  void report_received() { call Leds.led2Toggle(); }

  event void Boot.booted() {

    beacon_interval = DEFAULT_BEACON_INTERVAL;
    local.seed = DEFAULT_SEED_VALUE;
    local.hopcount = INVALID_VALUE;
    local.children = 0;

    radioOn = FALSE;
    sendBusy = FALSE;

    start_radio();

    if(TOS_NODE_ID == ROOT_MOTE_ID) {
      local.hopcount = 0;
      TreeConnected = TRUE;
      post send_beacon();
    }

  }

  void startTimer() {
    call SeedInit.init(local.seed);             
    local.seed = call Random.rand16() & 0x1ff; 
    call BeaconTimer.startOneShot(beacon_interval+local.seed);
  }

  void start_radio() {
    if(radioOn) return;
    if (call RadioControl.start() != SUCCESS)
      report_problem();
  }

  void stop_radio() {
    if(!radioOn) return;
    if (call RadioControl.stop() != SUCCESS)
      report_problem();
  }

  event void RadioControl.startDone(error_t error) {
    radioOn = TRUE;
    call Leds.led0Off();

/*    if (PendingJob) {
      if (TreeConnected) {
        post send_beacon();
      } else {
        call BeaconWaitTimer.startOneShot(2*CLOCK_DRIFT_COMPENSATION);
      }
    }
*/
  }

  event void RadioControl.stopDone(error_t error) {
    radioOn = FALSE;
    call Leds.led0On();
  }

  event void BeaconTimer.fired() {
    if (!radioOn) {
        start_radio();
    }
    PendingJob = TRUE;

    if (TreeConnected) {
      post send_beacon();
    } else {
      /*
	 Guard Time = twice Clock Drift Compensation over the Period
	 Clock Drift Compensation = 100ppm
	 Clock Drift Compensation = (100 * (Clock_Frequency = 7.32MHz)/Million)Hz			
	 			  = 100 * 7.32 = 732 Hz
	 Clock Drift Compensation(Millisec) = (732/7.32)* 10^-6* 10^3 
					    = 0.1 MilliSec per Sec
	 A Delay of "1ms" is provided for the Radio to Stabilize after starting
     */	
      call BeaconWaitTimer.startOneShot(2*CLOCK_DRIFT_COMPENSATION + 1);
    }
  }

  void startBeaconListenTimer() {
    uint32_t next_beacon_period;

    call SeedInit.init(parent.seed);             
    parent.seed = call Random.rand16() & 0x1ff;	
    next_beacon_period =  beacon_interval + parent.seed - CLOCK_DRIFT_COMPENSATION;
    PendingJob = FALSE;
    call BeaconTimer.startOneShot(next_beacon_period);
  }

  event void BeaconWaitTimer.fired() {
    stop_radio();
    startBeaconListenTimer();
  }
  
  task void send_beacon() {
    if (radioOn && !sendBusy && sizeof local <= call BeaconSend.maxPayloadLength())
    {
      PendingJob = FALSE;
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
    dozer_beacon_t *bmsg = (dozer_beacon_t*) payload;

    call BeaconWaitTimer.stop();
    report_received();
    memcpy(&parent, bmsg, sizeof(bmsg));
    parent.seed = bmsg->seed;
    stop_radio();
    startBeaconListenTimer();
    return msg;	
  }

  event void BeaconSend.sendDone(message_t* msg, error_t error) {
    if (error == SUCCESS) {
      report_sent();
      // Wait for an Activation Pulse from child 
      // if no activty is observed put the radio off.    
    }else
      report_problem();

    startTimer();
    if (local.children <= MAX_CHILDREN) {
      call ConnReqListenTimer.startOneShot(ACTIVATION_WAIT_PERIOD);
    } else {	
      stop_radio();
    }
    sendBusy = FALSE;

  }

}
