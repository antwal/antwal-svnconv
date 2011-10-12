/*
 * Copyright (c) 2010 C-DAC
 * All rights reserved.
 *
 */

// @author Sowjanya P

#ifndef DOZER_H
#define DOZER_H

//Root NodeID
#define ROOT_NODE_ID 0x00

enum {
  // Default Beacon Interval 
  DEFAULT_BEACON_INTERVAL = 30720,
  // TDMA Schedule Random Jitter Seed value
  DEFAULT_SEED_VALUE = 0,	
  // Active Message Types	
  AM_DOZER_BEACON = 0x99,
  AM_DOZER_CONNREQ = 0x98,
  AM_DOZER_CONNREP = 0x97,
  AM_DATA_MSG = 0x33,			

  MAX_POTENTIAL_PARENTS = 5,
  MAX_CHILDREN = 5,
  INVALID_VALUE = 0xFF,
};

typedef nx_struct dozer_child {
  nx_uint16_t child_id;
  //nx_uint8_t tdma_slot; // Slot assigned to a child by the parent is the index itself
} dozer_child_t;

typedef nx_struct dozer_child_schedule {
  nx_uint16_t child_id;
  nx_uint8_t tdma_slot; // Slot assigned to a child by the parent 
  nx_uint32_t time_stamp;
} dozer_child_schedule_t;

typedef nx_struct dozer_parent {
  nx_uint16_t parent_id;
  dozer_beacon_t beacon;
} dozer_parent_t;

typedef nx_struct dozer_parent_schedule {
  nx_uint16_t parent_id;
  nx_uint32_t time_stamp;
} dozer_parent_schedule_t;

typedef nx_struct dozer_beacon {
  nx_uint8_t children; 	// Mote id of sending mote. 
  nx_uint8_t hopcount;  // The depth of node in the tree
  nx_uint16_t seed; 	// Seed for Random number generation used as jitter 
} dozer_beacon_t;

typedef nx_struct dozer_conn_req {
  nx_uint16_t parent_id;
} dozer_conn_req_t;

typedef nx_struct dozer_conn_rep{
  nx_uint8_t tdma_slot; // Slot assigned to a child by the parent 
} dozer_conn_rep_t;

#endif
