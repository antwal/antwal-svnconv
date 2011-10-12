includes Timer;
includes Dozer;

module SchedulerP {
  provides interface TDMASchedule;

  uses {
    interface Timer<TMilli> as PPBListenTimer0;		//Potential Parent Beacon Timer
    interface Timer<TMilli> as PPBListenTimer1;
    interface Timer<TMilli> as PPBListenTimer2;		
    interface Timer<TMilli> as PPBListenTimer3;
    interface Timer<TMilli> as TDMAScheduleTimer;
    interface Timer<TMilli> as TDMASlotTimer;
    interface LocalTime<TMilli> as LocalTime;
    interface Random;
    interface ParameterInit<uint16_t> as SeedInit;
    interface Leds;
  }
}

implementation {

  dozer_parent_schedule_t ParentNodes[MAX_POTENTIAL_PARENTS];
  dozer_child_t ChildNodes[MAX_CHILDREN];

  uint8_t gParentTSlot, gChildTSlot;
  bool DataSend = FALSE;				// Indicating that the Node(as Child) is sending data to its parent Node

  command error_t TDMASchedule.clearTableEntry(uint16_t node_id, uint8_t parent) 
  {
    uint8_t i;
    
    switch (parent) {
      // From the Parent Table, Clear a Node Entry	
      case 1:
	if (node_id == INVALID_VALUE) {
	  for (i=0; i < MAX_POTENTIAL_PARENTS; i++) { ParentNodes[i].parent_id = INVALID_VALUE; }
	  return SUCCESS;
        }

	for (i=0; i < MAX_POTENTIAL_PARENTS; i++) {
	  if (ParentNodes[i].parent_id == node_id) {
	    ParentNodes[i].parent_id = INVALID_VALUE;
	    return SUCCESS;
          } 
        }

      // From the Child Table, Clear a Node Entry	
      case 0:
	if (node_id == INVALID_VALUE) {
	  for (i=0; i < MAX_CHILDREN; i++) { atomic ChildNodes[i].child_id = INVALID_VALUE; }
	  return SUCCESS;
        }

	for (i=0; i < MAX_CHILDREN; i++) {
          atomic { 
	    if (ChildNodes[i].child_id == node_id) {
	      ChildNodes[i].child_id = INVALID_VALUE;
	      return SUCCESS;
            } 
	  }        
        }

      // Clear all the entries from Parent and Child Tables	
      case INVALID_VALUE:
	for (i=0; i < MAX_POTENTIAL_PARENTS; i++) { ParentNodes[i].parent_id = INVALID_VALUE; }
	for (i=0; i < MAX_CHILDREN; i++) { atomic ChildNodes[i].child_id = INVALID_VALUE; }
	return SUCCESS;

      default:
        return FAIL;
    }

  }

  void startBeaconListenTimer(uint8_t parent_index) {
    uint8_t rounds = 1, tmp;
    uint32_t next_beacon_period;
    uint32_t next_time_slot;
    uint16_t seed_val, seed_sum=0;
    // Check if the Node is the "Current Parent of the Node"	
    // Calculate when to start listening for the Next Beacon from the Node
    // For the Node acting as a parent currently, immediately in the Next Beacon Interval 	 	
    // For a Potential Parent Available, every 15 Minutes or as defined in "PARENTS_UPDATE_INTERVAL"	
    // Calculate the Random Jitter to be added, Based on the Number of Beacon intervals(rounds) within the Update Interval	
    if (!ParentNodes[parent_index].parent) {
      rounds = (PARENTS_UPDATE_INTERVAL/DEFAULT_BEACON_INTERVAL);
    }
  
    tmp = rounds;
    seed_val = ParentNodes[parent_index].seed;
    while(tmp--) {
      call SeedInit.init(seed_val);	
      seed_val = call Random.rand16() & 0x1ff; 
      seed_sum += seed_val;	 
    }

    ParentNodes[parent_index].seed = seed_val;
    next_beacon_period = (DEFAULT_BEACON_INTERVAL-CLOCK_DRIFT_COMPENSATION)*rounds + seed_sum;
    switch(parent_index) {
      case 0:
	call PPBListenTimer0.startOneShotAt(ParentNodes[0].timestamp, next_beacon_period);
	break;
	  
      case 1:
	call PPBListenTimer1.startOneShotAt(ParentNodes[1].timestamp, next_beacon_period);
	break;
	  
      case 2:
	call PPBListenTimer2.startOneShotAt(ParentNodes[2].timestamp, next_beacon_period);
	break;
	  
      case 3:
	call PPBListenTimer3.startOneShotAt(ParentNodes[3].timestamp, next_beacon_period);
	break;
	  
      default: 
	break;
    }		

    if (ParentNodes[parent_index].parent) {
      atomic next_time_slot = CHILD_CONNECTION_PERIOD + (gParentTSlot*TDMA_SLOT_LEN);	
      call TDMASlotTimer.startOneShotAt(ParentNodes[parent_index].timestamp, next_time_slot);
    }
  }
	
  command error_t  TDMASchedule.setParentTimeStamp(uint16_t node_id, bool parent, uint16_t parent_seed, uint32_t timestamp)
  {
    uint8_t i;

    // Find an existing/Empty entry for the Node, in the Potential Parents Table
    for (i=0; i < MAX_POTENTIAL_PARENTS; i++) {
      if ((ParentNodes[i].parent_id == node_id) || (ParentNodes[i].parent_id == INVALID_VALUE)) {
	ParentNodes[i].parent_id = node_id;
	if (parent_seed != INVALID_VALUE) {
	   ParentNodes[i].seed = parent_seed;
	} else { ;}
	ParentNodes[i].parent = parent;
	ParentNodes[i].timestamp = timestamp;
	break;
      }
    } 		
     
    if (i != MAX_POTENTIAL_PARENTS) {	
      // Node Entry is available in Parents Table	
      startBeaconListenTimer(i); 
      return SUCCESS;
    }
    return FAIL;
  }
	
  event void PPBListenTimer0.fired() {
    signal TDMASchedule.radioWakeup(BEACON_LISTEN, ParentNodes[0].parent_id);
  }

  event void PPBListenTimer1.fired() {
    signal TDMASchedule.radioWakeup(BEACON_LISTEN, ParentNodes[1].parent_id);
  }

  event void PPBListenTimer2.fired() {
    signal TDMASchedule.radioWakeup(BEACON_LISTEN, ParentNodes[2].parent_id);
  }

  event void PPBListenTimer3.fired() {
    signal TDMASchedule.radioWakeup(BEACON_LISTEN, ParentNodes[3].parent_id);
  }

  event void TDMAScheduleTimer.fired() {
    // Check if the slot is occupied by any Child Node
    // If so Wakeup the Radio
    atomic {
      if (ChildNodes[gChildTSlot].child_id != INVALID_VALUE) 	
        signal TDMASchedule.radioWakeup(TSLOT_LISTEN, ChildNodes[gChildTSlot].child_id);
    } 	
    // Check for the end of Contention Free Period
    gChildTSlot++;
    if (gChildTSlot != MAX_CHILDREN)
      call TDMAScheduleTimer.startOneShot(TDMA_SLOT_LEN);  
  }

  event void TDMASlotTimer.fired() {
    if (!DataSend) { 
      signal TDMASchedule.radioWakeup(TSLOT_DATA_SEND, ParentNodes[0].seed);
      call TDMASlotTimer.startOneShot(TDMA_SLOT_LEN);
      DataSend = TRUE;
    } else {
      signal TDMASchedule.radioWakeup(TSLOT_DATA_SEND_STOP, ParentNodes[0].seed);
      DataSend = FALSE;
    }	 
  }

  command void TDMASchedule.setBeaconTimeStamp(uint32_t timestamp)
  {
    atomic gChildTSlot = 0;	
    call TDMAScheduleTimer.startOneShotAt(timestamp, CHILD_CONNECTION_PERIOD);	
  }
 
  async command void TDMASchedule.setParentTDMASlot(uint8_t tslot) 
  {
    atomic gParentTSlot = tslot;
  } 

  async command uint8_t TDMASchedule.allocChildTimeSlot(uint16_t node_id)
  {
    uint8_t i;
	
    for (i=0; i < MAX_CHILDREN; i++) {
      atomic {  	
        if ((ChildNodes[i].child_id == INVALID_VALUE) || (ChildNodes[i].child_id == node_id)) {
	  ChildNodes[i].child_id = node_id;
	  return i;
        } 
      } 	
    }
    
    return FAIL;	
  }

  default event void TDMASchedule.radioWakeup(uint8_t type, uint16_t node_id)
  { 
    return;
  }
 	 
}
