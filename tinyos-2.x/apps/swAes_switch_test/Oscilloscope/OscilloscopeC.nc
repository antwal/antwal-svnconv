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
#include "AES.h"

#define AES_SW_SECURITY
module OscilloscopeC
{
  uses {
    interface Boot;
    interface SplitControl as RadioControl;
    interface Receive;
    interface AMSend;
    interface Timer<TMilli>;
    interface Leds;
    interface AMPacket;
    interface AFWA_AESI;
  }
}


implementation
{
  message_t sendbuf;
  bool sendbusy;
  message_t tmp;
  
  am_addr_t x;
  uint8_t *localKey; 
  uint8_t j,val=1;  

  // example from FIPS 197
  uint8_t aes_key0[16] = {
    0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
    0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F,
  };

   uint8_t aes_key1[16] = {
    0xde, 0xde, 0xde, 0xde, 0xde, 0xde, 0xde, 0xde,
    0xde, 0xde, 0xde, 0xde, 0xde, 0xde, 0xde, 0xde,
  };

  uint8_t aes_plaintext[16] = {
    0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77,
    0x88, 0x99, 0xAA, 0xBB, 0xCC, 0xDD, 0xEE, 0xFF,		
    
  };

  // the ciphertext should be 
  //  69c4e0d86a7b0430d8cdb78070b4c55a with key0
  //  ee0eeb49058d91525b27d7164704b8d4 with key1
  
  uint8_t aes_ciphertext[TOSH_DATA_LENGTH] = {0};
  error_t error;
 
  /* Current local state - interval, version and accumulated readings */
  oscilloscope_t local;

  uint8_t reading; /* 0 to NREADINGS */
  bool suppress_count_change;

  // Use LEDs to report various status issues.
  void report_problem() { call Leds.led0Toggle();   }
  void report_sent() { call Leds.led1Toggle();   }
  void report_received() { call Leds.led2Toggle();   }

  event void Boot.booted() {
    if (call RadioControl.start() != SUCCESS)
      report_problem();
  }

  void startTimer() {
    call Timer.startPeriodic(DEFAULT_INTERVAL);
    reading = 0;
  }

  event void RadioControl.startDone(error_t err) {

      error_t status;

          //              			       KeySize_in_bits
	  // 						   ^
	  //						   |		 
          call AFWA_AESI.AFWAupdateKey((uint8_t *)aes_key0,128);

          /* AES Encryption Only */ 
          //call AFWA_AESI.AFWAsetTransmitMode( AES_ENCRYPT , 0 );


          /* CBC-MAC Mode                no.of bytes in authenticated Field */		         
          //                                               ^                   
	  //			               	           |    // no. of bytes to be authenticated                
          call AFWA_AESI.AFWAsetTransmitMode( CBC_MAC | SEC_M5, 12  );
          //call AFWA_AESI.AFWAsetTransmitMode( CBC_MAC | SEC_M4, 12  );
        
          /* CTR Mode                      no.of bytes not to be encrypted       */
          //                                          ^
	  //                                          |  
          //call AFWA_AESI.AFWAsetTransmitMode( CTR, 14 );
          //call AFWA_AESI.AFWAsetTransmitMode( CTR, 20 );
         
          /* CCM Mode        no.of bytes to be authenticated but not encrypted */
	  //		 			        ^	
	  //                                            | 
          //call AFWA_AESI.AFWAsetTransmitMode(  CCM  , 19 );
          //call AFWA_AESI.AFWAsetTransmitMode(  CCM  , 19 );


      startTimer();
  }
  
  event void RadioControl.stopDone(error_t err) {

  }

 event message_t* Receive.receive(message_t* msg, void* payload, uint8_t len) {
     
    //memcpy( aes_ciphertext , call Receive.getPayload(msg,&len), sizeof aes_ciphertext );
    report_received();
    return msg;
  }

  
  event void Timer.fired() {
     
   uint8_t i,size;

   if (!sendbusy && sizeof aes_key1 <= call AMSend.maxPayloadLength()) {
                    
        	   //call AFWA_AESI.AFWAenc((uint8_t *)aes_plaintext );  
                   memcpy( call AMSend.getPayload(&sendbuf), aes_plaintext, sizeof aes_plaintext );
		   if( call AFWA_AESI.AFWAsend(AM_BROADCAST_ADDR,&sendbuf, sizeof aes_plaintext) == SUCCESS ) 
                   
                       sendbusy = TRUE;

    }
  
    aes_plaintext[0] = 0;

    for(i=1;i<16;i++ ) 
         aes_plaintext[i] =  aes_plaintext[i-1] + 0x11;

    if (!sendbusy)
            report_problem();

       sendbusy = TRUE; 
       
  }


  event void AFWA_AESI.updateKeyDone(uint8_t * key) {
  }
 
  event void AFWA_AESI.AFWAsendDone(message_t* msg, error_t err) {
 	   if (err == SUCCESS)
 	     report_sent();
 	   else
 	     report_problem();
 	   sendbusy = FALSE;
  }
 
  event void AMSend.sendDone(message_t* msg, error_t err) { }

}
