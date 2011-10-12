/*
 * Copyright (c) 2010 C-DAC
 * All rights reserved.
 *
 */

/*
 * @author Trilok I, Sowjanya P
 * triloki@cdac.in, sowjanyap@cdac.in
 *
 */


module SchedulerP {
  provides interface TDMASchedule;
  provides interface Init;

  uses {
    command error_t chooseParent();

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

  dozer_parent_t gParentNode;
  dozer_parent_t *ParentNodes[MAX_POTENTIAL_PARENTS];
  dozer_child_t  ChildNodes[MAX_CHILDREN];

  uint8_t gParentTSlot = INVALID_VALUE, gChildTSlot;
  bool DataSend = FALSE;                                // Indicating that the Node(as Child) is sending data to its parent Node
  bool DataListen = FALSE;                              // Indicating that the Node(as Parent) is receiving data from its child Node

  command error_t Init.init()
  {
    gParentNode.flag          =  INVALID_VALUE;
    gParentNode.missed        =  0;
    gParentNode.parent_id     =  INVALID_VALUE;
    gParentNode.timestamp     =  0;
    gParentNode.retries       =  0;
    gParentNode.rounds        =  1;
    memset(&gParentNode.beacon, 0, sizeof(dozer_beacon_t));
    gParentNode.beacon.hopcount = INVALID_VALUE;
    return SUCCESS;	
  }

  command error_t TDMASchedule.setPPB(uint8_t *Index, dozer_parent_t *ppb, uint8_t count) 
  {
    uint8_t i, j;

    if (gParentNode.parent_id != INVALID_VALUE) {
      for (i=0, j=1; i<count; i++) {
  	 if (ppb[Index[i]].parent_id == gParentNode.parent_id) {
	   ParentNodes[0] = &ppb[Index[i]]; 
	 } else {
	   ParentNodes[j] = &ppb[Index[i]];
	   j++;
	 }	
      }

      i = j;		
    }
    else {
      for (i=0; i<count; i++) {	
        ParentNodes[i] = &ppb[Index[i]]; 
      }   	
    }
	
    for ( ;i < MAX_POTENTIAL_PARENTS; i++)
       ParentNodes[i] = NULL;

    if (gParentNode.parent_id != INVALID_VALUE) 
      call TDMASchedule.startTimers();

    return SUCCESS;
  }

  command error_t TDMASchedule.getPPB(dozer_parent_t **gParent) 
  {
    dozer_parent_t *tmp;
    uint8_t i, Index=0;

    atomic gParentTSlot = INVALID_VALUE;
    gParentNode.parent_id = INVALID_VALUE;

    if ((ParentNodes[0]->flag != INVALID_VALUE) &&
	 (ParentNodes[0]->beacon.hopcount != 0) &&
	 (ParentNodes[0]->retries == MAX_RETRIES)) {
      ParentNodes[0]->flag = INVALID_VALUE;
    }

    for (i=0; i<MAX_POTENTIAL_PARENTS; i++) {
       if ((ParentNodes[i] == NULL) || (ParentNodes[i]->flag == INVALID_VALUE) || (ParentNodes[i]->missed >= 1)) {	
          continue;
       }
	
       if (ParentNodes[i]->beacon.hopcount == 0) { 
	 Index = i; 
	 break;
       }

       if (ParentNodes[Index]->beacon.hopcount == ParentNodes[i]->beacon.hopcount)
       {
	    if (ParentNodes[Index]->retries == ParentNodes[i]->retries)
	    {
                  if (ParentNodes[Index]->beacon.children <= ParentNodes[i]->beacon.children){
	             Index = Index;
	          } else {
	      	     Index = i;
	          }
	    }
	    else if (ParentNodes[Index]->retries < ParentNodes[i]->retries) { 
	           Index = Index;
	    }
	    else {
		   Index = i;
	    }
       } else {
	   Index = i;
       }

    }

    *gParent = ParentNodes[Index]; 
    if (ParentNodes[Index]->flag == INVALID_VALUE) { return FAIL; }

    ParentNodes[Index]->flag = 1;
    ParentNodes[Index]->retries++;

    ParentNodes[Index]->missed = 0;

    if (Index) { 				// If Index of the parent Node is not zero, make it zero
      tmp = ParentNodes[0];	
      ParentNodes[0] = ParentNodes[Index]; 	
      ParentNodes[Index] = tmp;	
    }

    call TDMASchedule.startTimers();

    return SUCCESS;
  }  

  command error_t TDMASchedule.clearTableEntry(uint16_t node_id, uint8_t parent) 
  {
    uint8_t i;
    
    switch (parent) {
      // From the Parent Table, Clear a Node Entry	
      case 1:
	if (node_id == INVALID_VALUE) {
	  call TDMASchedule.stopTimers();
	  for (i=0; i < MAX_POTENTIAL_PARENTS; i++) { ParentNodes[i]->flag = INVALID_VALUE; }
	  return SUCCESS;
        }

	for (i=0; i < MAX_POTENTIAL_PARENTS; i++) {
	  if (ParentNodes[i]->parent_id == node_id) {
	    ParentNodes[i]->flag = INVALID_VALUE;
    	    switch(i) {
	      case 0:
		call PPBListenTimer0.stop();
		break;
	  
	      case 1:
		call PPBListenTimer1.stop();
		break;
	  
	      case 2:
		call PPBListenTimer2.stop();
		break;
	  
	      case 3:
		call PPBListenTimer3.stop();
		break;
	    }
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
	call TDMASchedule.stopTimers();
	for (i=0; i < MAX_POTENTIAL_PARENTS; i++) { ParentNodes[i]->flag = INVALID_VALUE; }
	for (i=0; i < MAX_CHILDREN; i++) { atomic ChildNodes[i].child_id = INVALID_VALUE; }
	return SUCCESS;

      default:
        return FAIL;
    }

  }

  void startBeaconListenTimer(uint8_t parent_index) {
    uint8_t rounds, tmp;
    uint32_t next_beacon_period;
    uint32_t next_time_slot;
    uint16_t seed_val, seed_sum=0;

    // Check if the Node is the "Current Parent of the Node"	
    // Calculate when to start listening for the Next Beacon from the Node
    // ---- For the Node acting as a parent currently, immediately in the Next Beacon Interval 	 	
    // ---- For a Potential Parent Available, every 15 Minutes or as defined in "PARENTS_UPDATE_INTERVAL"	
    // Calculate the Random Jitter to be added, Based on the Number of Beacon intervals(rounds) within the Interval	
    rounds = ParentNodes[parent_index]->rounds;

    atomic {
      tmp = rounds*(ParentNodes[parent_index]->missed + 1);
      seed_val = ParentNodes[parent_index]->beacon.seed;

      while(tmp--) {
        call SeedInit.init(seed_val);
        seed_val = call Random.rand16() & 0x1ff;
        seed_sum += seed_val;
      }

    }

    next_beacon_period = (DEFAULT_BEACON_INTERVAL-CLOCK_DRIFT_COMPENSATION)*rounds*(ParentNodes[parent_index]->missed+1) + seed_sum;
    ParentNodes[parent_index]->flag = 0;
    

    switch(parent_index) {
      case 0:
	call PPBListenTimer0.stop();
	call PPBListenTimer0.startOneShotAt(ParentNodes[0]->timestamp, next_beacon_period);
	break;
	  
      case 1:
	call PPBListenTimer1.stop();
	call PPBListenTimer1.startOneShotAt(ParentNodes[1]->timestamp, next_beacon_period);
	break;
	  
      case 2:
	call PPBListenTimer2.stop();
	call PPBListenTimer2.startOneShotAt(ParentNodes[2]->timestamp, next_beacon_period);
	break;
	  
      case 3:
	call PPBListenTimer3.stop();
	call PPBListenTimer3.startOneShotAt(ParentNodes[3]->timestamp, next_beacon_period);
	break;
	  
      default: 
	break;
    }		

    if ((gParentTSlot != INVALID_VALUE) && !(ParentNodes[parent_index]->missed) &&
	 (ParentNodes[parent_index]->parent_id == gParentNode.parent_id)) { 
      memcpy(&gParentNode, ParentNodes[parent_index], sizeof(dozer_parent_t));// gParentNode); 	
      atomic next_time_slot = CHILD_CONNECTION_PERIOD + gParentTSlot*(TDMA_SLOT_LEN);	
      call TDMASlotTimer.startOneShotAt(ParentNodes[parent_index]->timestamp, next_time_slot);
    }
  }

  command error_t TDMASchedule.startTimers() 
  {
    uint8_t i;
    for (i=0; i < MAX_POTENTIAL_PARENTS; i++) {
      if ((ParentNodes[i] != NULL) && (ParentNodes[i]->flag != INVALID_VALUE)) {
	if (ParentNodes[i]->flag == 1)	
          startBeaconListenTimer(i); 
      } else {
        switch(i) {
 	 case 0:
	   call PPBListenTimer0.stop();
	   break;
	  
	 case 1:
 	   call PPBListenTimer1.stop();
	   break;
	  
	 case 2:
	   call PPBListenTimer2.stop();
	   break;
	  
	 case 3:
	   call PPBListenTimer3.stop();
	   break;
	}
      }	
    } 		
    return SUCCESS;	
  }
	
  command error_t TDMASchedule.stopTimers() 
  {
    uint8_t i;	   
  	
    for (i=1; i < MAX_POTENTIAL_PARENTS; i++) {
      if (ParentNodes[i] != NULL) { 
	ParentNodes[i]->flag = 1;	
      }	
    }	 
   
    if (call PPBListenTimer1.isRunning())
      call PPBListenTimer1.stop();	

    if (call PPBListenTimer2.isRunning())
      call PPBListenTimer2.stop();	

    if (call PPBListenTimer3.isRunning())
      call PPBListenTimer3.stop();	

    return SUCCESS;	
  }
	
  command error_t TDMASchedule.setParentTimeStamp(uint16_t node_id, dozer_beacon_t *bmsg, uint32_t timestamp)
  {
    uint8_t i;

    // Find an existing/Empty entry for the Node, in the Potential Parents Table
    for (i=0; i < MAX_POTENTIAL_PARENTS; i++) {
      if ((ParentNodes[i] != NULL) && (ParentNodes[i]->parent_id == node_id)) {
	//atomic {
	  if (bmsg != NULL) {
	    memcpy(&ParentNodes[i]->beacon, bmsg, sizeof(dozer_beacon_t));
	    ParentNodes[i]->timestamp = timestamp;
	    ParentNodes[i]->missed = 0;
	  } else {
	    ParentNodes[i]->missed++;
	    if (node_id == gParentNode.parent_id) {
	      if (ParentNodes[i]->missed >= 2) { //MAX_CONSECUTIVE_MISSED_BEACONS) {
//	        call Leds.led1Toggle();	
	        call TDMASchedule.clearTableEntry(ParentNodes[i]->parent_id, 1); 
	        call chooseParent();	
		break;
	      } 
	    } else {
	      call TDMASchedule.clearTableEntry(ParentNodes[i]->parent_id, 1);
	      break;	 
	    } 	
	  }
          startBeaconListenTimer(i); 
	//}
	break;
      }
    } 		
     
    if (i == MAX_POTENTIAL_PARENTS) {	
      // Node Entry is not available in Parents Table	
       return FAIL;
    }
    return SUCCESS;
  }
	
  event void PPBListenTimer0.fired() {
    ParentNodes[0]->flag = 1;
    signal TDMASchedule.radioWakeup(BEACON_LISTEN, ParentNodes[0]->parent_id);
  }

  event void PPBListenTimer1.fired() {
    ParentNodes[1]->flag = 1;
    if (ParentNodes[1]->rounds == (PARENTS_UPDATE_INTERVAL/DEFAULT_BEACON_INTERVAL)) {
      signal TDMASchedule.radioWakeup(BEACON_LISTEN, ParentNodes[1]->parent_id);
    } else {
      ParentNodes[1]->rounds++;
      startBeaconListenTimer(1);
    }	
  }

  event void PPBListenTimer2.fired() {
    ParentNodes[2]->flag = 1;
    if (ParentNodes[2]->rounds == (PARENTS_UPDATE_INTERVAL/DEFAULT_BEACON_INTERVAL)) {
      signal TDMASchedule.radioWakeup(BEACON_LISTEN, ParentNodes[2]->parent_id);
    } else {
      ParentNodes[2]->rounds++;
      startBeaconListenTimer(2);
    }
  }

  event void PPBListenTimer3.fired() {
    ParentNodes[3]->flag = 1;
    if (ParentNodes[3]->rounds == (PARENTS_UPDATE_INTERVAL/DEFAULT_BEACON_INTERVAL)) {
      signal TDMASchedule.radioWakeup(BEACON_LISTEN, ParentNodes[3]->parent_id);
    } else {
      ParentNodes[3]->rounds++;
      startBeaconListenTimer(3);
    }
  }

  event void TDMAScheduleTimer.fired() {
    // Check if the slot is occupied by any Child Node
    // If so Wakeup the Radio
    // If so Wakeup the Radio
    atomic {
      if (DataListen) {
        DataListen = FALSE;
        signal TDMASchedule.radioWakeup(TSLOT_LISTEN_STOP, ChildNodes[gChildTSlot-1].child_id);
        call TDMAScheduleTimer.startOneShot(GUARD_TIME);
	return;
      }

      if (gChildTSlot == MAX_CHILDREN) { return; }

      if (ChildNodes[gChildTSlot].child_id != INVALID_VALUE) {
        DataListen = TRUE;
        signal TDMASchedule.radioWakeup(TSLOT_LISTEN, ChildNodes[gChildTSlot].child_id);
      }
    }
    // Check for the end of Contention Free Period
    gChildTSlot++;	
    call TDMAScheduleTimer.startOneShot(TDMA_SLOT_LEN - GUARD_TIME);
  }

  event void TDMASlotTimer.fired() {
    if (!DataSend) {
      signal TDMASchedule.radioWakeup(TSLOT_DATA_SEND, gParentNode.parent_id);
      call TDMASlotTimer.startOneShot(TDMA_SLOT_LEN - 2*GUARD_TIME);
      DataSend = TRUE;
    } else {
      signal TDMASchedule.radioWakeup(TSLOT_DATA_SEND_STOP,  gParentNode.parent_id);
      DataSend = FALSE;
    }
  }

  command void TDMASchedule.setBeaconTimeStamp(uint32_t timestamp)
  {
    atomic gChildTSlot = 0;	
    DataListen = FALSE;
    call TDMAScheduleTimer.startOneShotAt(timestamp, CHILD_CONNECTION_PERIOD - GUARD_TIME);	
  }
 
  command void TDMASchedule.setParentTDMASlot(uint8_t tslot) 
  {
    atomic gParentTSlot = tslot;
    memcpy(&gParentNode, ParentNodes[0], sizeof(dozer_parent_t)); 	
    startBeaconListenTimer(0); 
  } 

  async command uint8_t TDMASchedule.allocChildTimeSlot(uint16_t node_id, dozer_beacon_t *local)
  {
    uint8_t i, slot = INVALID_VALUE;

  //  local->children = 0;	
	
    for (i=0; i < MAX_CHILDREN; i++) {
  /*  if (ChildNodes[i].child_id != INVALID_VALUE) {
	 local->children++;
      }	 
   */	
      atomic {
        if (ChildNodes[i].child_id == node_id) {
          slot = i;
	  break;
	}
      }
    } 	

    if (slot != INVALID_VALUE) { return slot; }

    for (i=0; i < MAX_CHILDREN; i++) {
      if (ChildNodes[i].child_id == INVALID_VALUE) {
        atomic {
          ChildNodes[i].child_id = node_id;
	  local->children++;
          slot = i;
	}
	break;  
      }
    }
    
    return slot;
  }

  default event void TDMASchedule.radioWakeup(uint8_t type, uint16_t node_id)
  { 
    return;
  }
 	 
}
