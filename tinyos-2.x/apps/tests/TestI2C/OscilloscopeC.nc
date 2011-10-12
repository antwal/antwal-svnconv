/*
 * Copyright (c) 2006 Intel Corporation
 * All rights reserved.
 *
 * This file is distributed under the terms in the attached INTEL-LICENSE     
 * file. If you do not find these files, copies can be found by writing to
 * Intel Research Berkeley, 2150 Shattuck Avenue, Suite 1300, Berkeley, CA, 
 * 94704.  Attention:  Intel License Inquiry.
 */

/**
 * Oscilloscope demo application. See README.txt file in this directory.
 *
 * @author David Gay
 */
#include "Timer.h"
#include "Oscilloscope.h"

module OscilloscopeC
{
  uses {
    interface Boot;
    interface SplitControl as RadioControl;
    interface AMSend;
    interface Receive;
    interface Timer<TMilli>;
    interface Resource as I2CResource;
    interface I2CPacket<TI2CBasicAddr>;
    interface Leds;
  }
}
implementation
{

  uint8_t buff[3];   /* value of the incoming ADC reading */
  //Note "condition" should be a global variable.Since It is passed by address to I2CPacketM.nc and so
  //should be valid even out of the scope of that function since I2CPacketM.nc uses it by its address.
  uint8_t condition;   // set the condition command byte.

  message_t sendbuf;
  bool sendbusy;

  /* Current local state - interval, version and accumulated readings */
  oscilloscope_t local;

  uint8_t reading; /* 0 to NREADINGS */
  uint8_t param; 

  /* When we head an Oscilloscope message, we check it's sample count. If
     it's ahead of ours, we "jump" forwards (set our count to the received
     count). However, we must then suppress our next count increment. This
     is a very simple form of "time" synchronization (for an abstract
     notion of time). */
  bool suppress_count_change;

  // Use LEDs to report various status issues.
  void report_problem() { call Leds.led0Toggle(); }
  void report_sent() { call Leds.led1Toggle(); }
  void report_received() { call Leds.led2Toggle(); }

  event void Boot.booted() {
    local.interval = DEFAULT_INTERVAL;
    local.id = TOS_NODE_ID;
    condition = 8;
    // shift the channel and single-ended input bits over
    condition = (condition << 4) & 0xf0;
    condition = condition | 0x0f;
    if (call RadioControl.start() != SUCCESS)
      report_problem();
  }

  void startTimer() {
    call Timer.startOneShot(local.interval);
    reading = 0;
  }

  event void RadioControl.startDone(error_t error) {
    call I2CResource.request();
  }

  event void I2CResource.granted() {
    startTimer();
  }

  event void RadioControl.stopDone(error_t error) {
  }

  event message_t* Receive.receive(message_t* msg, void* payload, uint8_t len) {
    oscilloscope_t *omsg = payload;

    report_received();

    /* If we receive a newer version, update our interval. 
       If we hear from a future count, jump ahead but suppress our own change
    */
    if (omsg->version > local.version)
      {
	local.version = omsg->version;
	local.interval = omsg->interval;
	startTimer();
      }
    if (omsg->count > local.count)
      {
	local.count = omsg->count;
	suppress_count_change = TRUE;
      }

    return msg;
  }

  /* At each sample period:
     - if local sample buffer is full, send accumulated samples
     - read next sample
  */
  event void Timer.fired() {
    if (reading == NREADINGS)
      {
	if (!sendbusy && sizeof local <= call AMSend.maxPayloadLength())
	  {
	    memcpy(call AMSend.getPayload(&sendbuf, sizeof(local)), &local, sizeof local);
	    if (call AMSend.send(AM_BROADCAST_ADDR, &sendbuf, sizeof local) == SUCCESS)
	      sendbusy = TRUE;
	  }
	if (!sendbusy)
	  report_problem();

	reading = 0;
	/* Part 2 of cheap "time sync": increment our count if we didn't
	   jump ahead. */
	if (!suppress_count_change)
	  local.count++;
	suppress_count_change = FALSE;
      } 
 
    //tell the ADC to start converting 
    if ((call I2CPacket.write(0x03, 0x4A, 2, (uint8_t*)(&condition)) != SUCCESS))
      report_problem();
  }

  event void AMSend.sendDone(message_t* msg, error_t error) {
    if (error == SUCCESS)
      report_sent();
    else
      report_problem();

    sendbusy = FALSE;
  }

  async event void I2CPacket.writeDone(error_t error, uint16_t addr, uint8_t length, uint8_t* data) {
    if ((call I2CPacket.read(0x03, 0x4A, 3, buff)) == FAIL)   	
      report_problem();
  }

  async event void I2CPacket.readDone(error_t error, uint16_t addr, uint8_t length, uint8_t* data)
  {
	if (length != 3)
	  report_problem();
        else {  
	  local.readings[reading++] = (data[2] & 0xff) + ((data[1] << 8) & 0x0f00);
          report_received();	
        }
        call Timer.startOneShot(local.interval);
  }

}
