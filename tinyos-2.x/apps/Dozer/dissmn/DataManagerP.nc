/*
 * Name           : DataManagerP.nc
 * Authors        : u-Agri Team 
 * Organization   : C-DAC, Hyderabad
 * Project        : NUCRC, u-Agri
 * Date           : 2007/12/18, 2009/07/31
 *
 */

module DataManagerP {
  uses {
    interface TDMASchedule;
    command error_t chooseParent();	

    // Interfaces for communication, multihop and serial:
    interface Packet;
    interface AMPacket;
    interface AMSend as DataSend;
    interface AMSend as SerialSend;
    interface Receive as DataReceive;

    interface Queue<message_t *> as DataQueue;
    interface Pool<message_t> as DataMessagePool;

    // Miscalleny:
    interface Leds;
  }
 
  provides interface DataQueueManage;
}

implementation {

    void sendAvailableData();

    static void fatal_problem();
    static void report_problem();
    static void report_sent();
    static void report_received();

    /* Messages Buffers */
    message_t msg_send_buffer;                          // Argument to Send/SendMsg (Final Pkt sent out) 
    message_t *msg_ptr = &msg_send_buffer;              // Pointer to msg_send_buffer
    message_t uart_msg_send_buffer;                          // Argument to Send/SendMsg (Final Pkt sent out) 
    message_t *uart_msg_ptr = &uart_msg_send_buffer;              // Pointer to msg_send_buffer

    uint16_t parent_id = 0xFF, child_id = 0xFF;		// Parent and Child Node Addresses	
    uint16_t dest;					// Destination Node Address (child_id/parent_id)	
	
    bool ackPending = FALSE;				// Indication of Pending Ack(for the Data Pkt set) from Parent	
    uint8_t missedAcks = 0;				// Acknowledgments missed from the Parent Node consecutively	
        
    bool sending_packet; 	                        // Flag indicating the status of Radio/UART (Busy/Free)
    bool RadioOn = FALSE;    				// Radio Status, indicated by Scheduler 
    bool DataSent = TRUE;    				 


    event void TDMASchedule.radioWakeup(uint8_t type, uint16_t node_id) {
	switch (type)
        {
	  case TSLOT_DATA_SEND:
	    RadioOn = TRUE;	
	    parent_id = node_id;
	    sendAvailableData();
 	    break;

	  case TSLOT_DATA_SEND_STOP:
	    RadioOn = FALSE;	
	    if (ackPending) {
      	      message_t *newmsg = call DataMessagePool.get();
              if (newmsg == NULL) {
                 // drop the message on the floor if we run out of queue space.
                 report_problem();
	      } else {
	        memcpy(newmsg, msg_ptr, sizeof(message_t));	
	        call DataQueue.enqueue(newmsg);	
	      }	

	      missedAcks++;
	      if (missedAcks >= MAX_CONSECUTIVE_MISSED_ACKS) {
		call TDMASchedule.clearTableEntry(parent_id, 1);
		call chooseParent();
	        missedAcks = 0;
	      }
	    }
	    break;

          case TSLOT_LISTEN:
            atomic child_id = node_id;
            break;

          case TSLOT_LISTEN_STOP:
            atomic child_id = INVALID_VALUE;
            break;

	  default:
	    break;
        }
    }
  /* -------------------------------
   * Tasks and Functions to Queue and
   * Transmit Radio Messages
   * -------------------------------
   */
    command error_t DataQueueManage.addToQueue(void *in, uint8_t len) {
      dozer_data_header_t *dmsg;
      uint8_t *payload;	

      message_t *newmsg = call DataMessagePool.get();
      if (newmsg == NULL) {
          // drop the message on the floor if we run out of queue space.
        report_problem();
        return FAIL;
      }

      //Data Enqueue
      payload = call DataSend.getPayload(newmsg, len + sizeof(dozer_data_header_t));
      dmsg = (dozer_data_header_t *)payload; 	
      dmsg->type = DATA_MSG; 	
      dmsg->more = call DataQueue.size(); 	
      
      memcpy(payload + sizeof(dozer_data_header_t), in, len);
      call Packet.setPayloadLength(newmsg, len + sizeof(dozer_data_header_t));	

      if (call DataQueue.enqueue(newmsg) != SUCCESS) {
        // drop the message on the floor and hang if we run out of
        // queue space without running out of queue space first (this
        // should not occur).
        call DataMessagePool.put(newmsg);
        fatal_problem();
        return FAIL; 
      }
       
      return SUCCESS; 
    }

    task void sendTask() {
      if (call DataSend.send(dest, msg_ptr, call Packet.payloadLength(msg_ptr)) != SUCCESS) {
        report_problem();
	post sendTask();
      } else {
        sending_packet = TRUE;
      }
    }

    task void uartSendTask() {
      if (call SerialSend.send(0xffff, uart_msg_ptr, call Packet.payloadLength(msg_ptr)) != SUCCESS) {
        report_problem();
	post uartSendTask();
      } else {
//        sending_packet = TRUE;
	;
      }
    }


    void sendAvailableData() { 

	if (call DataQueue.empty()) {
	  signal DataQueueManage.addLocalDataToQueue();
	}

	if (call DataQueue.empty() == FALSE) {
	  // non-empty Queue.  Let's start a new one.
	  message_t *queuemsg = call DataQueue.dequeue();
	  if (queuemsg == NULL) {
            fatal_problem();
	    return; 	
          }

	  if (TOS_NODE_ID == 0)  
	    memcpy(uart_msg_ptr, queuemsg, call Packet.payloadLength(queuemsg));
	  else
	    memcpy(msg_ptr, queuemsg, call Packet.payloadLength(queuemsg));

	  if (call DataMessagePool.put(queuemsg) != SUCCESS) {
	    fatal_problem();
	  }
		
	  if (TOS_NODE_ID != 0) { 
	    dest = parent_id;
	    post sendTask();
            DataSent = TRUE;     
	  } else {
            post uartSendTask();
	  }
	}

    }	

    event message_t*
    DataReceive.receive(message_t* msg, void *payload, uint8_t len) {
      dozer_data_header_t *out;	
      dozer_data_header_t *in;	
      uint16_t src;	

      src = call AMPacket.source(msg); 	
      in = (dozer_data_header_t *)payload;

      switch (in->type) {
	case DATA_MSG:
	  if(src != child_id) { return msg;}

	  if (call DataQueueManage.addToQueue((uint8_t *)payload+sizeof(dozer_data_header_t), len-sizeof(dozer_data_header_t)) == SUCCESS) {
	    out = (dozer_data_header_t *)call DataSend.getPayload(msg_ptr, sizeof(dozer_data_header_t));	
            memcpy(out, in, sizeof(dozer_data_header_t));
	    call Packet.setPayloadLength(msg_ptr, sizeof(dozer_data_header_t));
	    out->type = DATA_ACK;
	    out->more = DATA_QUEUE_SIZE - call DataQueue.size();
	    dest = child_id;
            post sendTask(); 
 	    if (TOS_NODE_ID == 0)	
	      sendAvailableData();
	  }
	  break;

        case DATA_ACK:
	  if(src != parent_id) { return msg;}
	  missedAcks = 0;
	  ackPending = FALSE;
	  if (!(in->more) | !RadioOn) { return msg; }
	  sendAvailableData();
          break;

	default:  	
          break;
      }
      return msg;
    }
		

   /* ----------------------------------------
    * Handle completion of sent RF Data packet
    * ----------------------------------------
    */
    event void DataSend.sendDone(message_t* msg, error_t error) {
      if (DataSent) {
        ackPending = TRUE;	
        DataSent = FALSE;
      }
      sending_packet = FALSE;                                   // Set Radio Flag to free 
    }

   /* ----------------------------------------
    * Handle completion of sent UART Data packet
    * ----------------------------------------
    */
    event void SerialSend.sendDone(message_t* msg, error_t error) {
      sendAvailableData();
    }

    default event void DataQueueManage.addLocalDataToQueue() {
      return;	       
    }	

    // Use LEDs to report various status issues.
    static void fatal_problem() { 
      call Leds.led0On(); 
    /*  call Leds.led1On();
      call Leds.led2On();*/
    }

    static void report_problem() { call Leds.led0Toggle(); }
    static void report_sent() { call Leds.led1Toggle(); }
    static void report_received() { call Leds.led2Toggle(); }
}
