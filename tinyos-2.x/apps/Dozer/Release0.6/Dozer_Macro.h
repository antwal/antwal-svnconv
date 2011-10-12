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
 
//#ifndef DOZER_H
//#define DOZER_H

// Active Message Types	
#define AM_DOZER_MSG   0x32			
#define AM_DATA_MSG    0x33
// Dozer Message Types			
#define DOZER_BEACON   0x96
#define DOZER_CONNREQ  0x97
#define DOZER_CONNREP  0x98
#define DOZER_CONNACK  0x99
// Data Message Types
#define DATA_MSG       0xA0
#define DATA_ACK       0xA1
//Invalid Value
#define INVALID_VALUE  0xFF
//Root NodeID
#define ROOT_MOTE_ID 0x00
// Default Beacon Interval 
#define DEFAULT_BEACON_INTERVAL 30720U	// 122880U, //61440U,//,30720U
// Potential Parent Update Interval
#define PARENTS_UPDATE_INTERVAL 921600U	// 921600U,
// TDMA Schedule Random Jitter Seed value
//#define DEFAULT_SEED_VALUE TOS_NODE_ID	// Not Working
#define MAX_POTENTIAL_PARENTS 4
#define MAX_CHILDREN 1 //5,
#define MAX_RETRIES MAX_CHILDREN

#define CLOCK_DRIFT 100				// Points Per Million
#define CLOCK_DRIFT_COMPENSATION ((DEFAULT_BEACON_INTERVAL/1024)*CLOCK_DRIFT)/1000	// In MilliSec

#define TDMA_SLOT_LEN 50			// Time Slot Length(MilliSec)	
#define ACTIVATION_WAIT_PERIOD 5
#define CHILD_CONNECTION_PERIOD TDMA_SLOT_LEN
#define GUARD_TIME 1				// MilliSec

#define NBR_LISTEN_PERIOD DEFAULT_BEACON_INTERVAL
#define NBR_UPDATION_PERIOD 3686400U
#define NBR_TABLE_SIZE 6			// Neighbour Table Size

#define DATA_QUEUE_SIZE 25
#define MAX_CONSECUTIVE_MISSED_BEACONS 5
#define MAX_CONSECUTIVE_MISSED_ACKS MAX_CONSECUTIVE_MISSED_BEACONS

enum { INV=0, HC };			// Sorting Neighbour table entries(using Quick Sort)
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
  uint8_t       missed;			// Number of consecutive Beacons missed by the node from one of its parents  	
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

//#endif
