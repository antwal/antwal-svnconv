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
 
#ifndef DOZER_H
#define DOZER_H

enum {
  //Root NodeID
  ROOT_MOTE_ID = 0x00,
  // Default Beacon Interval 
  DEFAULT_BEACON_INTERVAL = 30720U,	// 122880U, //61440U,//,30720U
  // Potential Parent Update Interval
  PARENTS_UPDATE_INTERVAL = 921600U,	// 921600U,
  // TDMA Schedule Random Jitter Seed value
  DEFAULT_SEED_VALUE = 0, //TOS_NODE_ID,	// Not Working
  // Active Message Types	
  AM_DOZER_MSG = 0x32,			
  AM_DATA_MSG = 0x33,
  // Dozer Message Types			
  DOZER_BEACON = 0x96,
  DOZER_CONNREQ = 0x97,
  DOZER_CONNREP = 0x98,
  DOZER_CONNACK = 0x99,
  // Data Message Types
  DATA_MSG = 0xA0,
  DATA_ACK = 0xA1,

  INVALID_VALUE = 0xFF,
  MAX_POTENTIAL_PARENTS = 4,
  MAX_CHILDREN = 5,
  MAX_RETRIES = MAX_CHILDREN,

  TDMA_SLOT_LEN = 50,			// Time Slot Length(MilliSec)	
  ACTIVATION_WAIT_PERIOD = 5,
  CHILD_CONNECTION_PERIOD = TDMA_SLOT_LEN,
  CLOCK_DRIFT = 100,			// Points Per Million
  CLOCK_DRIFT_COMPENSATION = ((DEFAULT_BEACON_INTERVAL/1024)*CLOCK_DRIFT)/1000,	// In MilliSec
  GUARD_TIME = 1,			// MilliSec

  NBR_LISTEN_PERIOD = DEFAULT_BEACON_INTERVAL,
  NBR_UPDATION_PERIOD = 3686400U,
  NBR_TABLE_SIZE = 6,			// Neighbour Table Size

  DATA_QUEUE_SIZE = 25,
  MAX_CONSECUTIVE_MISSED_ACKS = 5,
};

enum{ INV=0, HC };			// Sorting Neighbour table entries(using Quick Sort)
					// Based on Invalid flag entries or Hopcount

// Types of Radio Wakeup events from Scheduler to Tree Manager
enum {
  BEACON_LISTEN = 0,
  TSLOT_LISTEN,
  TSLOT_LISTEN_STOP,
  TSLOT_DATA_SEND,
  TSLOT_DATA_SEND_STOP,
};

// Beacon Msg 
typedef struct dozer_beacon {
  uint16_t	children;		// Mote id of sending mote 
  uint16_t	seed;			// Seed for Random number generation used as jitter 
  uint8_t	hopcount;		// The depth of node in the tree
//} dozer_beacon_t;
}__attribute__ ((packed)) dozer_beacon_t;

// Connection Request Msg
typedef struct dozer_conn_req {
  uint16_t	parent_id;			// Dozer Message Type	
} dozer_conn_req_t;

// Connection Reply Msg
typedef struct dozer_conn_rep {
  uint8_t 	tdma_slot; 		// Slot assigned to a child by the parent 
} dozer_conn_rep_t;

typedef struct dozer_parent {
  uint8_t	flag;			// Flag indicating the validity of Neighbour entry 
  uint8_t 	retries;
  uint16_t 	parent_id;
  uint32_t	timestamp;	
  dozer_beacon_t beacon;
} dozer_parent_t;

typedef struct dozer_child {
  uint16_t	child_id;
//uint8_t	tdma_slot;		// Slot assigned to a child by the parent is the index itself
} dozer_child_t;

typedef union dozer_data_t {
  dozer_beacon_t beacon;
  dozer_conn_req_t req;
  dozer_conn_rep_t rep;
} dozer_data_t;

// Dozer Control Msg
typedef struct dozer_msg {
  uint8_t  type;			// Dozer Message Type
  uint8_t  dozer_data[sizeof(dozer_beacon_t)];
//} dozer_msg_t;
}__attribute__ ((packed)) dozer_msg_t;

#endif
