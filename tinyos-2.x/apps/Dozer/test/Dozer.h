/*
 * Copyright (c) 2010 C-DAC
 * All rights reserved.
 *
 */

// @author Sowjanya P

#ifndef DOZER_H
#define DOZER_H

enum {
  //Root NodeID
  ROOT_MOTE_ID = 0x00,
  // Default Beacon Interval 
  DEFAULT_BEACON_INTERVAL = 30720U, //122880U, //61440U,//,30720U
  // Potential Parent Update Interval
  PARENTS_UPDATE_INTERVAL = 921600U, //921600,
  // TDMA Schedule Random Jitter Seed value
  DEFAULT_SEED_VALUE = 0, //TOS_NODE_ID,
  // Active Message Types	
  AM_DOZER_BEACON = 0x99,
  AM_DOZER_CONNREQ = 0x98,
  AM_DOZER_CONNREP = 0x97,
  AM_DATA_MSG = 0x33,			

  INVALID_VALUE = 0xFF,
  MAX_POTENTIAL_PARENTS = 4,
  MAX_CHILDREN = 5,
  TDMA_SLOT_LEN = 50, // Time Slot Length(MilliSec)	
  ACTIVATION_WAIT_PERIOD = 2,
  CHILD_CONNECTION_PERIOD = TDMA_SLOT_LEN,
  CLOCK_DRIFT = 100,	// Points Per Million
  CLOCK_DRIFT_COMPENSATION =((DEFAULT_BEACON_INTERVAL/1024)*CLOCK_DRIFT)/1000,	// In MilliSec
  GUARD_TIME = 3, // MilliSec
};

// Types of Radio Wakeup events from Scheduler to Tree Manager
enum {
 BEACON_LISTEN = 0,
 TSLOT_LISTEN,
 TSLOT_LISTEN_STOP,
 TSLOT_DATA_SEND,
 TSLOT_DATA_SEND_STOP,
};

typedef struct dozer_beacon {
  uint8_t children; 	// Mote id of sending mote. 
  uint8_t hopcount;  // The depth of node in the tree
  uint16_t seed; 	// Seed for Random number generation used as jitter 
} dozer_beacon_t;

typedef struct dozer_child {
  uint16_t child_id;
  //uint8_t tdma_slot; // Slot assigned to a child by the parent is the index itself
} dozer_child_t;

typedef struct dozer_child_schedule {
  uint16_t child_id;
  uint8_t tdma_slot; // Slot assigned to a child by the parent 
  uint32_t time_stamp;
} dozer_child_schedule_t;

typedef struct dozer_parent {
  uint16_t parent_id;
  dozer_beacon_t beacon;
} dozer_parent_t;

typedef struct dozer_parent_schedule {
  uint16_t parent_id;
  uint16_t seed;
  bool parent;
  uint32_t timestamp;
} dozer_parent_schedule_t;

typedef nx_struct dozer_conn_req {
  nx_uint16_t parent_id;
} dozer_conn_req_t;

typedef nx_struct dozer_conn_rep{
  nx_uint8_t tdma_slot; // Slot assigned to a child by the parent 
} dozer_conn_rep_t;

#endif
