/**
  * File                 : 
  *
  * Project              : Adaptive Framework for Wireless Sensor Network Application
  *
  * Author               : Trilok Inakota 
  *
  * Organization         : C-DAC,Hyderabad
  *
  * Date                 :       
  *
  * Revision History     :  version 0.1
**/

/**
  * Description          :  
  *                         
  *
  *
**/

#include "message.h"

generic module AFWA_AESP(am_id_t id)
{
  provides {
    interface Init;
    interface SplitControl;
    interface AFWA_AESI;
  }

  uses {
    
    interface Resource;
    interface CC2420Register as CC2420_SECCTRL0;
    interface CC2420Register as CC2420_SECCTRL1;
    interface CC2420Ram      as CC2420_RAM_KEY0;
    interface CC2420Ram      as CC2420_RAM_KEY1;
    interface CC2420Ram      as CC2420_RAM_SABUF;
    interface CC2420Ram      as CC2420_RAM_TXFIFO;
    interface CC2420Ram      as CC2420_RAM_RXFIFO;   
    interface CC2420Strobe   as CC2420_SAES;
    interface CC2420Strobe   as CC2420_SNOP;
    interface CC2420Strobe   as CC2420_STXENC;
    interface CC2420Strobe   as CC2420_STXON;   
    interface CC2420Strobe   as CC2420_SRXDEC;
    interface CC2420Strobe   as SFLUSHRX;
    interface CC2420Ram      as CC2420_RAM_TXNONCE;
    interface CC2420Ram      as CC2420_RAM_RXNONCE;
    
    interface SplitControl   as CC2420Control;
    interface GeneralIO      as CSN;
    interface Leds;
    interface AMSend;
    interface CC2420PacketBody;
    interface AesSecurity;
        
  }
}

implementation
{
  enum mode op,p;
  enum modeSet setKey;

  uint8_t  *localKey;
  uint8_t  *plainText, *cipherText;
 

  uint16_t tx_ctrl0,tx_ctrl1;
  uint16_t rx_ctrl0,rx_ctrl1;
  uint16_t setMode0,setMode1;
 
  norace uint8_t nonceValue[16] = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
                                   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01};
  uint32_t fc = 0;
  uint8_t  fcLen = 4;
  
  uint8_t inverseKey[16] = {0};
  uint8_t appLen;
 
  // prototypes
  task void updateKey();
  task void standAlone_encryption();
  task void inline_encryption();
  void setMode();
  error_t getSpiResource();
  void    freeSpiResource();

  command error_t Init.init() {
  
    tx_ctrl0 = tx_ctrl1 = 0;
    rx_ctrl0 = rx_ctrl1 = 0;
    setMode0 = setMode1 = appLen = 0;
    p = DONE;
    localKey = plainText = cipherText = NULL;
    return SUCCESS;
  }

  command error_t SplitControl.start() {
    return call CC2420Control.start();
  }

  command error_t SplitControl.stop() {
    return call CC2420Control.stop();
  }

  event void CC2420Control.startDone(error_t err) {
  
   if (SUCCESS == err) {
      signal SplitControl.startDone(SUCCESS);
    } else {
      call CC2420Control.start();
    }
  }

  event void CC2420Control.stopDone(error_t err) {
    
    if (SUCCESS == err) {
      signal SplitControl.stopDone(SUCCESS);
    } else {
      call CC2420Control.stop();
    }
  }

  command error_t AFWA_AESI.AFWAupdateKey(uint8_t * key, enum modeSet KEY ) {
   
   uint8_t i;
   atomic{
     // KEY is KEY0 or KEY1
     for (i = 0; i <=15; i++)                 
          //key[15-i] = ( key[i]+key[15-i] ) - (key[i]=key[15-i]);  
          inverseKey[15-i] = key[i];

     setKey = KEY;
     op = AES_KEY_UPDATE;
     localKey = inverseKey;
     getSpiResource();
   }
    return SUCCESS;
  }

  command error_t AFWA_AESI.AFWAenc( uint8_t *plaintext ) {
   
      op = AES_TRANSMIT;
      plainText = plaintext;
      getSpiResource();

      return SUCCESS;
  }

  command error_t AFWA_AESI.AFWAsetTransmitMode( uint16_t ctrl0, uint8_t len ) {
    
         uint16_t  sec_txl=0;  
         appLen = ctrl0 & 0x1C; 
         tx_ctrl0  = ctrl0;  

         if( ( ctrl0 & 0x0003 ) != 0x0000 ) {
              sec_txl   = len; 
              sec_txl   = sec_txl << 8;
              tx_ctrl1  = tx_ctrl1 | sec_txl;
 
              if( ((ctrl0 & 0x0003) == 0x0002) || ((ctrl0 & 0x0003) == 0x0003) )
                 p = AES_TXNONCE;  
         }
         return SUCCESS;             
   }

   command error_t AFWA_AESI.AFWAsetReceiveMode( uint16_t rctrl0,  uint8_t sec_rxl ){
                call AesSecurity.AFWAsetReceivePMode( rctrl0, sec_rxl );
   } 
 
   command error_t AFWA_AESI.AFWAsend( am_addr_t addr, message_t* msg,  uint8_t len )  {

         sec_msg_t smsg = { 0,{0}};

         cc2420_header_t* header = (cc2420_header_t*)msg->header;
         //header->fcf |= 1 << IEEE154_FCF_SECURITY_ENABLED;
       
         if( ((tx_ctrl0 & 0x0003) == 0x0002) || ((tx_ctrl0 & 0x0003) == 0x0003) ) {
 	       smsg.fc = fc;   
               memcpy( smsg.data , call AMSend.getPayload(msg), len );
	       memcpy( call AMSend.getPayload(msg), &smsg, fcLen + len );
               if((tx_ctrl0 & 0x0003) == 0x0003)   
	               return call AMSend.send( addr, msg, fcLen + len + (appLen/2) + 2   );
   	       else
                       return call AMSend.send( addr, msg, fcLen + len );
         } else {

		if((tx_ctrl0 & 0x0003) == 0x0001)   
	               return call AMSend.send( addr, msg, len + (appLen/2) + 2   );
   	        else
                       return call AMSend.send( addr, msg, len );
         }          
                   
   }

   event void AMSend.sendDone(message_t *msg, error_t error) { 
 
         signal AFWA_AESI.AFWAsendDone(msg, error); 
   } 

   event void Resource.granted() {
  
    atomic {

        if ( op == AES_KEY_UPDATE ) {
            post updateKey();

        } else if( op == AES_TRANSMIT ) {
        
            setMode0 = tx_ctrl0 ;
            setMode1 = tx_ctrl1 ; 
            setMode();

            if( ( tx_ctrl0 & 0x0003 ) != 0x0000 ) 
		   post inline_encryption();
	    else  	
	           post standAlone_encryption();
        } 
     } // atomic
   } // granted

  task void updateKey() {

      atomic {
    		call CSN.clr();
 		if( setKey == KEY0 )
		    call CC2420_RAM_KEY0.write(0, localKey, 16) ;
		else if( setKey == KEY1 ) 
	   	    call CC2420_RAM_KEY1.write(0, localKey, 16) ;  
   	        call CSN.set();
		signal AFWA_AESI.updateKeyDone(localKey);
		freeSpiResource();
      }
   }

  task void standAlone_encryption() {

    call CSN.clr();
    atomic call CC2420_RAM_SABUF.write(0, plainText, 16);
    call CSN.set();

    call CSN.clr();
    atomic call CC2420_SAES.strobe();
    while ( ( call CC2420_SNOP.strobe() ) & CC2420_STATUS_ENC_BUSY);

    atomic call CC2420_RAM_SABUF.read(0, plainText, 16);
    call CSN.set();
    freeSpiResource();
  }

  task void inline_encryption() {
         
         atomic {  
               call CSN.clr();
             //call CC2420_STXON.strobe();
               call CC2420_STXENC.strobe();
               call CSN.set();
               freeSpiResource();
          }
   } 

   error_t getSpiResource() {
       call Resource.request();
       return EBUSY;//error;
   }

  void freeSpiResource() {
    call Resource.release();
  }

  void setMode() {
                
     atomic {
 
        call CSN.clr();
        call CC2420_SECCTRL0.write( 0x0000  );
        call CC2420_SECCTRL1.write( 0x0000  ); 
      
	call CC2420_SECCTRL0.write( setMode0 ); // see Header File AES.h for Various mode settings 
        call CC2420_SECCTRL1.write( setMode1 );
           
        if( p == AES_TXNONCE ) {

              call CSN.set();
              call CSN.clr(); 
              call CC2420_RAM_TXNONCE.write(0, nonceValue, 16);
              fc++;  
              memcpy(&nonceValue[3], &fc,4 );
              call CSN.set();  
        } 
     } //atomic
  } // setMode

}
