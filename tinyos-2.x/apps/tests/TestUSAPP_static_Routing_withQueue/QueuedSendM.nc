// $Id: QueuedSendM.nc,v 1.16 2006/04/28 18:04:26 idgay Exp $

/*									tab:4
 * "Copyright (c) 2000-2003 The Regents of the University  of California.  
 * All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation for any purpose, without fee, and without written agreement is
 * hereby granted, provided that the above copyright notice, the following
 * two paragraphs and the author appear in all copies of this software.
 * 
 * IN NO EVENT SHALL THE UNIVERSITY OF CALIFORNIA BE LIABLE TO ANY PARTY FOR
 * DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES ARISING OUT
 * OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF THE UNIVERSITY OF
 * CALIFORNIA HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 * THE UNIVERSITY OF CALIFORNIA SPECIFICALLY DISCLAIMS ANY WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS FOR A PARTICULAR PURPOSE.  THE SOFTWARE PROVIDED HEREUNDER IS
 * ON AN "AS IS" BASIS, AND THE UNIVERSITY OF CALIFORNIA HAS NO OBLIGATION TO
 * PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS."
 *
 * Copyright (c) 2002-2003 Intel Corporation
 * All rights reserved.
 *
 * This file is distributed under the terms in the attached INTEL-LICENSE     
 * file. If you do not find these files, copies can be found by writing to
 * Intel Research Berkeley, 2150 Shattuck Avenue, Suite 1300, Berkeley, CA, 
 * 94704.  Attention:  Intel License Inquiry.
 */

/*
 * Authors: Phil Buonadonna, David Culler, Matt Welsh
 * 
 * $Revision: 1.16 $
 *
 * This MODULE implements queued send with optional retransmit.  
 * NOTE: This module only queues POINTERS to the application messages.
 * IT DOES NOT COPY THE MESSAGE DATA ITSELF! Applications must maintain 
 * their own data queues if more than one outstanding message is required.
 * 
 */

/**
 * @author Phil Buonadonna
 * @author David Culler
 * @author Matt Welsh
 */


includes AM;

#ifndef SEND_QUEUE_SIZE
#define SEND_QUEUE_SIZE 32
#endif

module QueuedSendM {
  provides {
    interface Init;
    interface StdControl;
    interface QueueSendMsg;
    interface QueueReceiveMsg;
    interface QueueControl;
  }

  uses {

    interface AMSend;
    interface Receive;

    interface Leds;
  }
}

implementation {

  enum {
    MESSAGE_QUEUE_SIZE = SEND_QUEUE_SIZE,
    MAX_RETRANSMIT_COUNT = 5
  };

  struct _msgq_entry {
    uint16_t address;
    uint8_t length;
    uint8_t id;
    uint8_t xmit_count;
    message_t *pMsg;
  } msgqueue[MESSAGE_QUEUE_SIZE];

  uint16_t enqueue_next, dequeue_next;
  bool retransmit;
  bool fQueueIdle;

  command error_t Init.init() {
    int i;
    for (i = 0; i < MESSAGE_QUEUE_SIZE; i++) {
      msgqueue[i].length = 0;
      msgqueue[i].pMsg = NULL;
    }

#ifdef QRETRANSMITS
    retransmit = TRUE;
#else
    retransmit = FALSE;  // Set to TRUE to enable retransmission
#endif

    enqueue_next = 0;
    dequeue_next = 0;
    fQueueIdle = TRUE;
    return SUCCESS;
  }

  command error_t StdControl.start() {
    return SUCCESS;
  }
  command error_t StdControl.stop() {
    return SUCCESS;
  }

  /* Queue data structure
     Circular Buffer
     enqueue_next indexes first empty entry
     buffer full if incrementing enqueue_next would wrap to dequeue
     empty if dequeue_next == enqueue_next
     or msgqueue[dequeue_next].length == 0
  */

  task void QueueServiceTask() {
    uint8_t id;
    // Try to send next message (ignore xmit_count)
    //call Led1.toggle();
    if (msgqueue[dequeue_next].pMsg != NULL) {
      id = msgqueue[dequeue_next].id;
      if(call AMSend.send(msgqueue[dequeue_next].address, msgqueue[dequeue_next].pMsg, msgqueue[dequeue_next].length) 
                          != SUCCESS )
       {
#ifndef PLATFORM_PC
	post QueueServiceTask();
#endif
      }
    }
    else {
      fQueueIdle = TRUE;
    }
  }

  command error_t QueueSendMsg.send(uint16_t address, message_t *msg, uint8_t length) {

    if (((enqueue_next + 1) % MESSAGE_QUEUE_SIZE) == dequeue_next) {
      // Fail if queue is full
      return FAIL;
    }

    if (length > TOSH_DATA_LENGTH) {
      return FAIL;
    }

    if (msg == NULL) {
      return FAIL;
    }

    msgqueue[enqueue_next].address = address;
    msgqueue[enqueue_next].length = length;
    msgqueue[enqueue_next].id = AM_UAGRI_MSG;
    msgqueue[enqueue_next].pMsg = msg;
    msgqueue[enqueue_next].xmit_count = 0;

    enqueue_next++; enqueue_next %= MESSAGE_QUEUE_SIZE;

#if 0
    {
      uint16_t i;
      for (i = dequeue_next; i != enqueue_next; i = (i + 1) % MESSAGE_QUEUE_SIZE)
	dbg(DBG_USR2, "qent %d: addr 0x%x, len %d, amid %d, xmit_cnt %d\n", 
	    i, msgqueue[i].address, msgqueue[i].length, msgqueue[i].id, msgqueue[i].xmit_count);
    }
#endif    
    if (fQueueIdle) {
      fQueueIdle = FALSE;
      post QueueServiceTask();
    }
    return SUCCESS;

  }

  event void AMSend.sendDone(message_t *msg, error_t success) {
    //uint8_t id;
    if (msg != msgqueue[dequeue_next].pMsg) {
      return;		// This would be internal error
    }
    
    // filter out non-queuesend msgs
    if (!retransmit || msgqueue[dequeue_next].address == TOS_UART_ADDR ||
      msgqueue[dequeue_next].address == TOS_BCAST_ADDR) {
      //signal sendSucceed(msgqueue[dequeue_next].address);
      //id = msg->type;
      signal QueueSendMsg.sendDone(msg,success);
      msgqueue[dequeue_next].pMsg = NULL; 
      dequeue_next++; dequeue_next %= MESSAGE_QUEUE_SIZE;
#if 0
      {
	uint16_t i;
	for (i = dequeue_next; i != enqueue_next; i = (i + 1) % MESSAGE_QUEUE_SIZE)
	  dbg(DBG_USR2, "qent %d: addr 0x%x, len %d, amid %d, xmit_cnt %d\n", 
	      i, msgqueue[i].address, msgqueue[i].length, msgqueue[i].id, msgqueue[i].xmit_count);
      }
#endif
    }
    else {
      if ((++(msgqueue[dequeue_next].xmit_count) > MAX_RETRANSMIT_COUNT)) {
	// Tried to send too many times, just drop
	//signal sendFail(msgqueue[dequeue_next].address);
        //id = msg->type;
	signal QueueSendMsg.sendDone(msg,FAIL);
	msgqueue[dequeue_next].pMsg = NULL; 
	dequeue_next++; dequeue_next %= MESSAGE_QUEUE_SIZE;
      } 
    }
    
    // Send next
    post QueueServiceTask();

    return;
  }

  event message_t *Receive.receive(message_t* pMsg, void* payload, uint8_t len) {
    //uint8_t id = pMsg->type;
    signal QueueReceiveMsg.receive(pMsg,payload,len);
    return pMsg;	 
  }
 
  command uint16_t QueueControl.getOccupancy() {
    uint16_t uiOutstanding = enqueue_next - dequeue_next;
    uiOutstanding %= MESSAGE_QUEUE_SIZE;

    return uiOutstanding;
  }
  
  command uint8_t QueueControl.getXmitCount() {
    if (msgqueue[dequeue_next].pMsg != NULL)
      return msgqueue[dequeue_next].xmit_count;
    return 0;
  }
  
  default event void QueueSendMsg.sendDone(message_t *msg, error_t success) {
    return ;
  }
 
  default event message_t* QueueReceiveMsg.receive(message_t* pMsg, void* payload, uint8_t len) {
    return pMsg;	
  }
}

