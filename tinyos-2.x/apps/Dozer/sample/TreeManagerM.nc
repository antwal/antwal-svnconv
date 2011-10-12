/*
 * Copyright (c) 2010 C-DAC
 * All rights reserved.
 *
 */

 // @author Sowjanya P

#include "Timer.h"
#include "Dozer.h"

module TreeManagerM 
{
  uses {
    interface Boot;
    interface SplitControl as RadioControl;
    interface AMSend as BeaconSend;
    interface Receive as BeaconReceive;
    interface AMSend as ConnectReqSend;
    interface Receive as ConnectReqReceive;
    interface AMSend as ConnectRepSend;
    interface Receive as ConnectRepReceive;
    interface Timer<TMilli> as BeaconTimer;
    interface TDMASchedule;
    interface Random;
    interface ParameterInit<uint16_t> as SeedInit;
    interface Leds;
  }
}
implementation
{
  uint16_t beacon_interval;	// Beacon Transmission Interval as Parent 
  uint8_t gtdma_slot;		// Slot in node Parent's TDMA Schedule
  message_t sendBuf;		// Message Buffer used for Beacon/ConnRequest/ConnReply transmissions
  bool radioOn, sendBusy;	// Radio is ON and Sending (when both are TRUE)
  bool TreeConnected=FALSE;     // Connected to the Tree Network (Initially only the Root Node is connected)
  bool ConnectRequestPending;   // Connection Request to Parent is to be Send (when TRUE)
   
  // Beacon Messages
  dozer_beacon_t local;		// Beacon Msg to transmit as Parent
  dozer_parent_t parentNode[MAX_POTENTIAL_PARENTS], *gparentNode=NULL;	// Node's Parent
  dozer_child_t childNode[MAX_CHILDREN];	// Node's Children
  dozer_conn_req_t requestBuf;	// Connection Request Msg (Sent as Child)
  dozer_conn_rep_t replyBuf;	// Connection Reply Msg (Sent as Parent)

  // TOS_NODE_ID of the node that just sent a connection request to me
  uint16_t conn_req_node_id;

  task void send_beacon();
  task void send_connectRequest();
  task void send_connectReply();

  void start_radio();
  void stop_radio();

  // Use LEDs to report various status issues.
  void report_problem() { call Leds.led0Toggle(); }
  void report_sent() { call Leds.led1Toggle(); }
  void report_received() { call Leds.led2Toggle(); }

  event void Boot.booted() {
    uint8_t i;

    beacon_interval = DEFAULT_BEACON_INTERVAL;
    local.seed = DEFAULT_SEED_VALUE;
    local.hopcount = INVALID_VALUE;
    local.children = 0;
  
    for (i=0; i < MAX_POTENTIAL_PARENTS, i++){
      parentNode[i].parent_id = INVALID_VALUE;
      parentNode[i].beacon.hopcount = INVALID_VALUE;
    }

    for (i=0; i < MAX_CHILDREN, i++){
      childNode[i].child_id = INVALID_VALUE;
      childNode[i].tdma_slot = INVALID_VALUE;
    }

    ConnectRequestPending = FALSE;
    radioOn = FALSE;	
    sendBusy = FALSE;

    start_radio();

    if(TOS_NODE_ID == ROOT_NODE_ID) {	
      local.hopcount = 0;
      TreeConnected = TRUE;	
      post send_beacon();	
      startTimer();
    }

  }

  void startTimer() {
    call SeedInit.init(local.seed); 
    local.seed = call Random.rand16() & 0x01ff; 
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
  }

  event void RadioControl.stopDone(error_t error) {
    radioOn = FALSE;
  }

  uint8_t searchChildTable(uint8_t node_id) 
  {
    uint8_t i;
    for (i=0; i < MAX_CHILDREN, i++)
    {
      if (childNode[i].child_id == node_id){
	return TRUE;
      }
    } 
    return FALSE;
  }

  uint8_t findAvailableTimeSlot(uint8_t node_id) 
  {
    uint8_t i;
    dozer_child_t *dc;
    	
    for (i=0; i < MAX_CHILDREN, i++)
    {
      dc = &childNode[i];	
      if (dc->child_id == INVALID_VALUE){
        dc->child_id = node_id;
	return i;
      }
    } 
    return INVALID_VALUE;
  }

  uint8_t searchParentTable(uint8_t node_id) 
  {
    uint8_t i;
    for (i=0; i < MAX_POTENTIAL_PARENTS, i++)
    {
      if (parentNode[i].parent_id == node_id){
	return TRUE;
      }
    } 
    return FALSE;
  }

  uint8_t findAvailableParentIndex() 
  {
    uint8_t i;
    dozer_parent_t *dp;
    	
    for (i=0; i < MAX_POTENTIAL_PARENTS, i++)
    {
      dp = &parentNode[i];	
      if (dp->parent_id == INVALID_VALUE){
	return i;
      }
    } 
    return INVALID_VALUE;
  }

  task void choose_parent()
  {
    uint8_t i;
    dozer_parent_t *dNewParent;
    dozer_parent_t *dp;
    dozer_beacon_t *db;
    uint8_t dNewHopCount = INVALID_VALUE;
    uint8_t dchildren = INVALID_VALUE;
    	
    for (i=0; i < MAX_POTENTIAL_PARENTS, i++)
    {
      dp = &parentNode[i];	
      db = &(dp->beacon);	
      if (dp->parent_id == INVALID_VALUE) continue;
      if ((db->hopcount != 0) && (db->children >= 5)) continue;
      if ((db->hopcount < dNewHopCount) ||
          ((db->hopcount == dNewHopCount) && (db->children < dchildren))) {
	dchildren = db->children;
        dNewParent = dp;
        dNewHopCount = db->hopcount;
      }
    }

    if (dNewParent) {
      atomic {
        gParentNode = dNewParent;
        local.hopCount = dNewHopCount + 1;
	ConnectRequestPending = TRUE;
      }
    }

  }	
  
  event TDMASchedule.wakeup() {
    start_radio();
  }

  event message_t* BeaconReceive.receive(message_t* msg, void* payload, uint8_t len) {
    dozer_beacon_t *bmsg = payload;
    uint8_t res, index;

    report_received();
    if (TOS_NODE_ID == ROOT_NODE_ID)
      return msg;

    if ((gParentNode->parent_id == msg->src) && ConnectRequestPending) {
      // Send an Activation Pulse to Parent before sending Connection request
      post send_connectRequest(); 
    }
 
    res = searchParentTable(msg->src);
    if (res)
      return msg;
    
    insert_intoParentTable(msg->src, bms);

    return msg;
  } 
 
  void insert_intoParentTable(uint16_t node_id, dozer_beacon_t *bmsg) {

    index = findAvailableParentIndex();
    if (index == INVALID_VALUE) {
      return;
    } else {
       parentNode[index].parent_id = node_id;
       memcpy(&(parentNode[index].beacon), bmsg, sizeof dozer_beacon_t); 	
       call TDMASchedule.beaconTimestamp(node_id, time_stamp); 
    }
     
    if (gparentNode == NULL) {
      post choose_parent(); 	
    }

  }

  event void BeaconTimer.fired() {
    if (TreeConnected) {
      if (!radioOn) {
	start_radio();
      }
      post send_beacon();
      startTimer();
    }
     
    if (gparentNode == NULL) {
      choose_parent(); 	
    }
  }
 
  task void send_beacon() {
    if (radioOn && !sendBusy && sizeof local <= call AMSend.maxPayloadLength())
    {
      // Don't need to check for null because we've already checked length
      // above
      memcpy(call BeaconSend.getPayload(&sendBuf, sizeof(local)), &local, sizeof(local));
      if (call BeaconSend.send(AM_BROADCAST_ADDR, &sendBuf, sizeof local) == SUCCESS)
        sendBusy = TRUE;
    }

    if (!sendBusy)
      report_problem();
  }

  task void send_connectRequest() {
    if (radioOn && !sendBusy)
    {
      requestBuf.parent_id = gParentNode->parent_id;	
      memcpy(call ConnectReqSend.getPayload(&sendBuf, sizeof(requestBuf)), &requestBuf, sizeof(requestBuf));
      if (call ConnectReqSend.send(gParentNode->parent_id, &sendBuf, sizeof requestBuf) == SUCCESS)
        sendBusy = TRUE;
    }

    if (!sendBusy)
      report_problem();
    
  }	

  task void send_connectReply() {
    uint8_t tdma_slot;

    tdma_slot = searchChildTable(conn_req_node_id);
    if (tdma_slot == INVALID_VALUE) {
      tdma_slot = findAvailableTimeSlot(conn_req_node_id);	
      if (tdma_slot == INVALID_VALUE) 
        return;
    }

    if (radioOn && !sendBusy)
    {
      replyBuf.tdma_slot = tdma_slot;	
      memcpy(call ConnectRepSend.getPayload(&sendBuf, sizeof(replyBuf)), &replyBuf, sizeof(replyBuf));
      if (call ConnectRepSend.send(conn_req_node_id, &sendBuf, sizeof replyBuf) == SUCCESS)
        sendBusy = TRUE;
    }

    if (!sendBusy)
      report_problem();
    
  }	

  event void BeaconSend.sendDone(message_t* msg, error_t error) {
    if (error == SUCCESS) {
      report_sent();
      // Wait for an Activation Pulse from child 
      // if no activty is observed put the radio off. 	 
    }else
      report_problem();

    sendBusy = FALSE;
  }

  event message_t* ConnectReqReceive.receive(message_t* msg, void* payload, uint8_t len) {
    dozer_conn_req_t *bmsg = payload;

    if ((bmsg->parent_id == TOS_NODE_ID)) {
      conn_req_node_id = msg->src;
      send_connectReply();
    }
 
    return msg;
  }

  event void ConnectReqSend.sendDone(message_t* msg, error_t error) {
    if (error == SUCCESS) {
      report_sent();
    } else
      report_problem();

    sendBusy = FALSE;
  }

  event message_t* ConnectRepReceive.receive(message_t* msg, void* payload, uint8_t len) {
    dozer_conn_rep_t *bmsg = payload;

    ConnectRequestPending = FALSE;
    gtdma_slot = bmsg->tdma_slot;
    stop_radio();
    call TDMASchedule.setParentSlot(gtdma_slot);
    startTimer();     
  
    return msg;
  }

  event void ConnectRepSend.sendDone(message_t* msg, error_t error) {
    if (error == SUCCESS) {
      report_sent();
      stop_radio();	
      call TDMASchedule.childTimeSlot(msg->dest, searchChildTable(msg->dest)); 
    } else
      report_problem();

    sendBusy = FALSE;
  }

}
