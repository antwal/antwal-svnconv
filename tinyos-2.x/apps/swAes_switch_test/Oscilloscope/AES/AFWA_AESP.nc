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

#ifdef AES_SW_SECURITY
#undef AES_HW_SECURITY
#endif

generic module AFWA_AESP(am_id_t id)
{
  provides {
    interface Init;
    interface SplitControl;
    interface AFWA_AESI;
  }

  uses {
   
    interface AMSend;
    //interface AesSecurity;
    interface OmacI;
    interface CtrI;
    interface CcmI;
    interface Leds;
        
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
  uint16_t  sec_txl=0;  
  uint16_t setMode0,setMode1;
			         //---- BC -- // KSC  // --------- FC --------  //----  
  norace uint8_t nonceValue[16] = {0x01, 0x00,  0x00,   0x00, 0x00, 0x00, 0x00,   0x00, 
                                   0x00, 0x00,  0x00,   0x00, 0x00, 0x00, 0x00,   0x01};
				 //--------------------- SA ------------------- // Flag	
  uint32_t fc = 0;
  uint8_t  fcLen = 4, tagBytes;
  

  uint8_t inverseKey[16] = {0};
  uint8_t appLen;
 
   // prototypes
   uint8_t sBox(uint8_t num);
   void RotWord(uint8_t *x);
   void KeyExpansion();   
   void SubWord(uint8_t *y);  
   void AddRoundKey(uint8_t round);  
   void SubBytes(); 
   void ShiftRows();
   void InvShiftRows();   
   void MixColumns();
   void InvMixColumns();    
   void Cipher(); 
   void startAes(uint8_t bits);
   void checkmode(uint8_t len);
   //void reverse(uint8_t *arr, uint8_t narr);
   //void rotate(uint8_t *arr, uint8_t narr, uint8_t shift);
   //uint8_t xtime(uint8_t x); 

  uint8_t state[4][4];
  uint8_t *inPut, *tag;  
  uint8_t *outPut;
  uint8_t *Key,w[KES]= {0};
  uint8_t KeySizeW,KeySizeB,rounds,coloumns=4;
  uint8_t mode;
  

   uint8_t Rcon[255] = {  
       0x8d, 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x1b, 0x36, 0x6c, 0xd8, 0xab, 0x4d, 0x9a,   
       0x2f, 0x5e, 0xbc, 0x63, 0xc6, 0x97, 0x35, 0x6a, 0xd4, 0xb3, 0x7d, 0xfa, 0xef, 0xc5, 0x91, 0x39,   
       0x72, 0xe4, 0xd3, 0xbd, 0x61, 0xc2, 0x9f, 0x25, 0x4a, 0x94, 0x33, 0x66, 0xcc, 0x83, 0x1d, 0x3a,   
       0x74, 0xe8, 0xcb, 0x8d, 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x1b, 0x36, 0x6c, 0xd8,   
       0xab, 0x4d, 0x9a, 0x2f, 0x5e, 0xbc, 0x63, 0xc6, 0x97, 0x35, 0x6a, 0xd4, 0xb3, 0x7d, 0xfa, 0xef,   
       0xc5, 0x91, 0x39, 0x72, 0xe4, 0xd3, 0xbd, 0x61, 0xc2, 0x9f, 0x25, 0x4a, 0x94, 0x33, 0x66, 0xcc,   
       0x83, 0x1d, 0x3a, 0x74, 0xe8, 0xcb, 0x8d, 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x1b,   
       0x36, 0x6c, 0xd8, 0xab, 0x4d, 0x9a, 0x2f, 0x5e, 0xbc, 0x63, 0xc6, 0x97, 0x35, 0x6a, 0xd4, 0xb3,   
       0x7d, 0xfa, 0xef, 0xc5, 0x91, 0x39, 0x72, 0xe4, 0xd3, 0xbd, 0x61, 0xc2, 0x9f, 0x25, 0x4a, 0x94,   
       0x33, 0x66, 0xcc, 0x83, 0x1d, 0x3a, 0x74, 0xe8, 0xcb, 0x8d, 0x01, 0x02, 0x04, 0x08, 0x10, 0x20,   
       0x40, 0x80, 0x1b, 0x36, 0x6c, 0xd8, 0xab, 0x4d, 0x9a, 0x2f, 0x5e, 0xbc, 0x63, 0xc6, 0x97, 0x35,   
       0x6a, 0xd4, 0xb3, 0x7d, 0xfa, 0xef, 0xc5, 0x91, 0x39, 0x72, 0xe4, 0xd3, 0xbd, 0x61, 0xc2, 0x9f,   
       0x25, 0x4a, 0x94, 0x33, 0x66, 0xcc, 0x83, 0x1d, 0x3a, 0x74, 0xe8, 0xcb, 0x8d, 0x01, 0x02, 0x04,   
       0x08, 0x10, 0x20, 0x40, 0x80, 0x1b, 0x36, 0x6c, 0xd8, 0xab, 0x4d, 0x9a, 0x2f, 0x5e, 0xbc, 0x63,   
       0xc6, 0x97, 0x35, 0x6a, 0xd4, 0xb3, 0x7d, 0xfa, 0xef, 0xc5, 0x91, 0x39, 0x72, 0xe4, 0xd3, 0xbd,   
       0x61, 0xc2, 0x9f, 0x25, 0x4a, 0x94, 0x33, 0x66, 0xcc, 0x83, 0x1d, 0x3a, 0x74, 0xe8, 0xcb 
  };   
 
   uint8_t sBoxInvert(uint8_t num)  
   {  
         uint8_t rsbox[256] = {  
         0x52, 0x09, 0x6a, 0xd5, 0x30, 0x36, 0xa5, 0x38, 0xbf, 0x40, 0xa3, 0x9e, 0x81, 0xf3, 0xd7, 0xfb,  
         0x7c, 0xe3, 0x39, 0x82, 0x9b, 0x2f, 0xff, 0x87, 0x34, 0x8e, 0x43, 0x44, 0xc4, 0xde, 0xe9, 0xcb,  
         0x54, 0x7b, 0x94, 0x32, 0xa6, 0xc2, 0x23, 0x3d, 0xee, 0x4c, 0x95, 0x0b, 0x42, 0xfa, 0xc3, 0x4e,  
         0x08, 0x2e, 0xa1, 0x66, 0x28, 0xd9, 0x24, 0xb2, 0x76, 0x5b, 0xa2, 0x49, 0x6d, 0x8b, 0xd1, 0x25,  
         0x72, 0xf8, 0xf6, 0x64, 0x86, 0x68, 0x98, 0x16, 0xd4, 0xa4, 0x5c, 0xcc, 0x5d, 0x65, 0xb6, 0x92,  
         0x6c, 0x70, 0x48, 0x50, 0xfd, 0xed, 0xb9, 0xda, 0x5e, 0x15, 0x46, 0x57, 0xa7, 0x8d, 0x9d, 0x84,  
         0x90, 0xd8, 0xab, 0x00, 0x8c, 0xbc, 0xd3, 0x0a, 0xf7, 0xe4, 0x58, 0x05, 0xb8, 0xb3, 0x45, 0x06,  
         0xd0, 0x2c, 0x1e, 0x8f, 0xca, 0x3f, 0x0f, 0x02, 0xc1, 0xaf, 0xbd, 0x03, 0x01, 0x13, 0x8a, 0x6b,  
         0x3a, 0x91, 0x11, 0x41, 0x4f, 0x67, 0xdc, 0xea, 0x97, 0xf2, 0xcf, 0xce, 0xf0, 0xb4, 0xe6, 0x73,  
         0x96, 0xac, 0x74, 0x22, 0xe7, 0xad, 0x35, 0x85, 0xe2, 0xf9, 0x37, 0xe8, 0x1c, 0x75, 0xdf, 0x6e,  
         0x47, 0xf1, 0x1a, 0x71, 0x1d, 0x29, 0xc5, 0x89, 0x6f, 0xb7, 0x62, 0x0e, 0xaa, 0x18, 0xbe, 0x1b,  
         0xfc, 0x56, 0x3e, 0x4b, 0xc6, 0xd2, 0x79, 0x20, 0x9a, 0xdb, 0xc0, 0xfe, 0x78, 0xcd, 0x5a, 0xf4,  
         0x1f, 0xdd, 0xa8, 0x33, 0x88, 0x07, 0xc7, 0x31, 0xb1, 0x12, 0x10, 0x59, 0x27, 0x80, 0xec, 0x5f,  
         0x60, 0x51, 0x7f, 0xa9, 0x19, 0xb5, 0x4a, 0x0d, 0x2d, 0xe5, 0x7a, 0x9f, 0x93, 0xc9, 0x9c, 0xef,  
         0xa0, 0xe0, 0x3b, 0x4d, 0xae, 0x2a, 0xf5, 0xb0, 0xc8, 0xeb, 0xbb, 0x3c, 0x83, 0x53, 0x99, 0x61,  
         0x17, 0x2b, 0x04, 0x7e, 0xba, 0x77, 0xd6, 0x26, 0xe1, 0x69, 0x14, 0x63, 0x55, 0x21, 0x0c, 0x7d 
         };  
         return rsbox[num];  
     }  

    uint8_t sBox(uint8_t num) {  

     uint8_t sbox[256] =   {  
       0x63, 0x7c, 0x77, 0x7b, 0xf2, 0x6b, 0x6f, 0xc5, 0x30, 0x01, 0x67, 0x2b, 0xfe, 0xd7, 0xab, 0x76,  
       0xca, 0x82, 0xc9, 0x7d, 0xfa, 0x59, 0x47, 0xf0, 0xad, 0xd4, 0xa2, 0xaf, 0x9c, 0xa4, 0x72, 0xc0, 
       0xb7, 0xfd, 0x93, 0x26, 0x36, 0x3f, 0xf7, 0xcc, 0x34, 0xa5, 0xe5, 0xf1, 0x71, 0xd8, 0x31, 0x15, 
       0x04, 0xc7, 0x23, 0xc3, 0x18, 0x96, 0x05, 0x9a, 0x07, 0x12, 0x80, 0xe2, 0xeb, 0x27, 0xb2, 0x75, 
       0x09, 0x83, 0x2c, 0x1a, 0x1b, 0x6e, 0x5a, 0xa0, 0x52, 0x3b, 0xd6, 0xb3, 0x29, 0xe3, 0x2f, 0x84, 
       0x53, 0xd1, 0x00, 0xed, 0x20, 0xfc, 0xb1, 0x5b, 0x6a, 0xcb, 0xbe, 0x39, 0x4a, 0x4c, 0x58, 0xcf, 
       0xd0, 0xef, 0xaa, 0xfb, 0x43, 0x4d, 0x33, 0x85, 0x45, 0xf9, 0x02, 0x7f, 0x50, 0x3c, 0x9f, 0xa8, 
       0x51, 0xa3, 0x40, 0x8f, 0x92, 0x9d, 0x38, 0xf5, 0xbc, 0xb6, 0xda, 0x21, 0x10, 0xff, 0xf3, 0xd2, 
       0xcd, 0x0c, 0x13, 0xec, 0x5f, 0x97, 0x44, 0x17, 0xc4, 0xa7, 0x7e, 0x3d, 0x64, 0x5d, 0x19, 0x73, 
       0x60, 0x81, 0x4f, 0xdc, 0x22, 0x2a, 0x90, 0x88, 0x46, 0xee, 0xb8, 0x14, 0xde, 0x5e, 0x0b, 0xdb, 
       0xe0, 0x32, 0x3a, 0x0a, 0x49, 0x06, 0x24, 0x5c, 0xc2, 0xd3, 0xac, 0x62, 0x91, 0x95, 0xe4, 0x79, 
       0xe7, 0xc8, 0x37, 0x6d, 0x8d, 0xd5, 0x4e, 0xa9, 0x6c, 0x56, 0xf4, 0xea, 0x65, 0x7a, 0xae, 0x08, 
       0xba, 0x78, 0x25, 0x2e, 0x1c, 0xa6, 0xb4, 0xc6, 0xe8, 0xdd, 0x74, 0x1f, 0x4b, 0xbd, 0x8b, 0x8a, 
       0x70, 0x3e, 0xb5, 0x66, 0x48, 0x03, 0xf6, 0x0e, 0x61, 0x35, 0x57, 0xb9, 0x86, 0xc1, 0x1d, 0x9e, 
       0xe1, 0xf8, 0x98, 0x11, 0x69, 0xd9, 0x8e, 0x94, 0x9b, 0x1e, 0x87, 0xe9, 0xce, 0x55, 0x28, 0xdf, 
       0x8c, 0xa1, 0x89, 0x0d, 0xbf, 0xe6, 0x42, 0x68, 0x41, 0x99, 0x2d, 0x0f, 0xb0, 0x54, 0xbb, 0x16
      }; 
       return sbox[num];  
   }  

  command error_t Init.init() {
  
    tx_ctrl0 = tx_ctrl1 = 0;
    rx_ctrl0 = rx_ctrl1 = 0;
    setMode0 = setMode1 = appLen = 0;
    p = DONE;
    localKey = plainText = cipherText = NULL;
    return SUCCESS;
  }

  command error_t SplitControl.start() {
    return 0;
  }

  command error_t SplitControl.stop() {
    return 0;
  }
                                                         // keysize in bits
  command error_t AFWA_AESI.AFWAupdateKey(uint8_t * key, uint8_t KeySize ) {
   
   uint8_t i;
   KeySizeB = KeySize / 8;
   atomic localKey = key;
   atomic signal AFWA_AESI.updateKeyDone(localKey);
   return SUCCESS;
  }

  command error_t AFWA_AESI.AFWAsetTransmitMode( uint16_t ctrl0, uint8_t len ) {
    

         appLen = ctrl0 & 0x1C;
         appLen = (appLen/2)+2;
         tx_ctrl0  = ctrl0;  

         if( ( ctrl0 & 0x0003 ) != 0x0000 ) {
              sec_txl   = len; 
              //sec_txl   = sec_txl << 8;
              tx_ctrl1  = tx_ctrl1 | sec_txl;
         }

         return SUCCESS;             
   }

   command error_t AFWA_AESI.AFWAsetReceiveMode( uint16_t rctrl0,  uint8_t sec_rxl ){
         
             rx_ctrl0 = rx_ctrl1 = 0;
             setMode0 = setMode1 = 0;
             rx_ctrl0 = rctrl0 | RXFIFO_PROTECTION | SEC_CBC_HEAD ;
                       
             if( ( rx_ctrl0 & 0x0003 ) != 0x0000 )  
                   rx_ctrl1 = rx_ctrl1 | sec_rxl;
             else{
                  #ifdef CC2420_HW_SECURITY
	          #undef CC2420_HW_SECURITY
                  #endif 
             }
                        
             setMode0 = rx_ctrl0 ;
             setMode1 = rx_ctrl1 ; 

         return SUCCESS;   
   } 
 
   				            		
  command error_t AFWA_AESI.AFWAenc( uint8_t *text ) {
        
	// payloadLenB = nBytes; -- Future use
        inPut = text;
        mode  = 1;

        startAes(KeySizeB);

        return SUCCESS;  
  }

  command error_t AFWA_AESI.AFWAdec( uint8_t *text, uint8_t len ) {
         
        inPut  = text; 
	mode   = 0;

        if( (tx_ctrl0 & 0x0003) == 0x0000 ) 
	        startAes(KeySizeB);
        else
		checkmode(len);	
        //startAes(KeySizeB);

        return SUCCESS; 
  }

  command uint8_t AFWA_AESI.AFWAgetKeySize() {

	 return KeySizeB;
  }

  command error_t AFWA_AESI.AFWAsend( am_addr_t addr, message_t* msg,  uint8_t len )  
  {

	 //sec_msg_t smsg = {0,{0},{0}};
         uint8_t trueLen = 0 ; 
	 sec_msg_t smsg = {0,{0}}; 
         uint16_t  tag = 0;
         //cc2420_header_t* header = (cc2420_header_t*)msg->header;
         //header->fcf |= 1 << IEEE154_FCF_SECURITY_ENABLED;

         trueLen = len;

      atomic{

         switch ( tx_ctrl0 & 0x0003 )
         {
	  
            case 0x0003 : // CCM mode
 		                                                 // no.of bytes to be authenticated
	/*	       						 // but not encrypted 
		       call CcmI.AESccm_nonce(nonceValue); 	
 		       call CcmI.AESccm_auth( (uint8_t *)msg, len, KeySizeB ); 
       		       call CcmI.truncateTag( (uint8_t *)smsg.data,len, appLen );	
                       call CcmI.AESccm_encrypt((uint8_t *)msg, len, nonceValue );
	*/		
		       memcpy( &fc, &nonceValue[3], 4 );	
                       smsg.fc = fc;   
                       memcpy( smsg.data, call AMSend.getPayload(msg), len );	 
                       memcpy( call AMSend.getPayload(msg), &smsg, fcLen + len + appLen );	
		       
	               return call AMSend.send( addr, msg, fcLen + len + appLen );
                       break;
                
   	     case 0x0002: // CTR mode 
		                                                // no. of bytes to be encrypted
                       call CtrI.AESctr_encrypt((uint8_t *)msg, len, nonceValue );
                       memcpy( &fc, &nonceValue[3], 4 );	
                       smsg.fc = fc;   
                       memcpy( smsg.data, call AMSend.getPayload(msg), len );	 
                       memcpy( call AMSend.getPayload(msg), &smsg, fcLen + len );	

                       return call AMSend.send( addr, msg, fcLen + len );
                       break;
               
            case 0x0001: // CBC-MAC mode

                      memcpy( smsg.data, call AMSend.getPayload(msg), len );    
		                          			       // no.of bytes to be authenticated
 		      call OmacI.cbcmacGenerate( (uint8_t *)smsg.data, len, KeySizeB );
       		      call OmacI.truncateTag( (uint8_t *)smsg.data, len, appLen );
                      memcpy( call AMSend.getPayload(msg), (uint8_t *)&smsg.data, len + appLen );
                      return call AMSend.send( addr, msg, len + appLen );
                      break;

	     case 0x0000:
                      startAes(KeySizeB);
                      return call AMSend.send( addr, msg, len );
                      break;
 
                    
         } 
       }
        
        return SUCCESS; 
   }

   event void AMSend.sendDone(message_t *msg, error_t error) { 
 
         signal AFWA_AESI.AFWAsendDone(msg, error); 
   } 

   void checkmode(uint8_t len)
   {
	uint8_t macBuff[16] = {0} ;
	//sec_msg_t smsg = {0,{0},{0}} ;
	sec_msg_t smsg = {0,{0}} ;
        atomic {

         memcpy( &smsg, (uint8_t *)inPut, len );

         switch(rx_ctrl0 & 0x0003)    
         {



	     case 0x0003 : // CCM mode

                        memcpy( &nonceValue[3], &smsg.data, 4  );
 
 		        call CcmI.AESccm_nonce(nonceValue); 	
 		        call CcmI.AESccm_auth( (uint8_t *)smsg.data, len - fcLen - appLen , KeySizeB  ); 
       		        call CcmI.truncateTag( (uint8_t *)macBuff, appLen );
/*
                        if(call CcmI.integrityCheck((uint8_t *)smsg.mac,(uint8_t *)macBuff,appLen)) 
                           memcpy(smsg.mac, "00",1);
       		        else {	 
                           memcpy(smsg.mac, "FF",1); 
        		   memcpy(inPut,(uint8_t *)&smsg,len);	   
			   return ;
                        }

*/		        memcpy(inPut,(uint8_t *)&smsg,len);	  

                        call CcmI.AESccm_decrypt((uint8_t *)inPut, len, nonceValue );
			
		        memcpy( &fc, &nonceValue[3], 4 );	
                        smsg.fc = fc;   
                        memcpy( smsg.data, inPut, len );	 
                        memcpy( inPut, (uint8_t *)&smsg, fcLen + len + appLen );	
                        break;
            
	    case 0x0002 : // CTR mode

                        memcpy( &nonceValue[3], &smsg.data, 4  );
                        call CtrI.AESctr_decrypt((uint8_t *)smsg.data, len-fcLen-appLen, nonceValue );
			memcpy( inPut, (uint8_t *)&smsg.data[4], len-fcLen-appLen );
                        break;
          
            case 0x0001 : // CBC-MAC mode

   /*                    call OmacI.cbcmacGenerate((uint8_t *)smsg.data, len - fcLen - appLen, KeySizeB  );
                       call OmacI.truncateTag((uint8_t *)macBuff, appLen ); 

		       if(call OmacI.integrityCheck((uint8_t *)smsg.mac,(uint8_t *)macBuff,appLen))
                           memcpy(smsg.mac, "00",1);
		       else	 
                           memcpy(smsg.mac, "FF",1); 

		       memcpy(inPut,(uint8_t *)&smsg,len);	
		       break;
*/		
         }

      }// atomic
     
   } 

 

// ----------------------------------------  AES Algorithm ----------------------------------------

  void startAes(uint8_t bytes ){
     atomic{
       
        KeySizeW  = (bytes*8)/32;
	rounds    = KeySizeW + 6;
        KeyExpansion();
        Cipher();
     }
  }

   void KeyExpansion()  
   {  
       uint8_t i,j;  
       uint8_t temp[4];
       //uint8_t k;  
       
      
    atomic{

       for(i=0;i<KeySizeW;i++) {  

           w[i*4+0] = localKey[i*4+0];  
           w[i*4+1] = localKey[i*4+1];  
           w[i*4+2] = localKey[i*4+2];  
           w[i*4+3] = localKey[i*4+3];  
       }  
      
       for( i=4; i < ( coloumns*(rounds+1)); i++ ) { 
                
           for(j=0;j<4;j++)  
              temp[j] = w[(i-1) * 4 + j];  

          if (i % KeySizeW == 0) {
   
              // This function rotates the 4 bytes in a word to the left once  
              // [a0,a1,a2,a3] becomes [a1,a2,a3,a0]  
     
              RotWord(temp);  
              SubWord(temp);  
   
              temp[0] =  temp[0] ^ Rcon[i/KeySizeW];  
          }  
          else if ( KeySizeW > 6 && i % KeySizeW == 4)  
              SubWord(temp);

          w[i*4+0] = w[(i-KeySizeW)*4+0] ^ temp[0];  
          w[i*4+1] = w[(i-KeySizeW)*4+1] ^ temp[1];  
          w[i*4+2] = w[(i-KeySizeW)*4+2] ^ temp[2];  
          w[i*4+3] = w[(i-KeySizeW)*4+3] ^ temp[3];  
       }
     }  	     
   }

    void RotWord(uint8_t *x)  
    {  
	//uint8_t temp;  
        //uint8_t narr = 4 / sizeof state[0][0] ;
        //uint8_t narr = 4 ;
        //rotate(x, narr, 1);
          

               uint8_t temp;  
               temp = x[0];  
               x[0] = x[1];  
               x[1] = x[2];  
               x[2] = x[3];  
               x[3] = temp;  

	       
    }  
          
    void SubWord(uint8_t *y)  
    {  
         atomic {

               y[0]=sBox(y[0]);  
               y[1]=sBox(y[1]);  
               y[2]=sBox(y[2]);  
               y[3]=sBox(y[3]);  
         }
    }  
     
    void AddRoundKey(uint8_t round)   
    {  
	uint8_t i,j;  
	
        atomic {

        for(i=0;i<4;i++)   
           for(j=0;j<4;j++)  
               state[j][i] ^= w[round * coloumns * 4 + i * coloumns + j];  
        }
    }  

   void SubBytes()  
   {  
      uint8_t i,j;  
 
      atomic {

      for(i=0;i<4;i++)  
          for(j=0;j<4;j++)    
           if(mode)
              state[i][j] = sBox(state[i][j]);  
           else
	      state[i][j] = sBoxInvert(state[i][j]);  
      } 
   }

/*
   void reverse(uint8_t *arr, uint8_t narr)
   {
       uint8_t i, tmp;
       //uint8_t j;
       
       atomic {

       for (i=0; i < narr / 2; ++i) {
         tmp = arr[i];
         arr[i] = arr[narr-i-1];
         arr[narr-i-1] = tmp;
       }
      } 
   }
   
   void rotate(uint8_t *arr, uint8_t narr, uint8_t shift)
   {
      reverse(arr, shift);
      reverse(arr + shift, narr - shift);
      reverse(arr, narr); 
   }
  
  */     
   void ShiftRows()  
   {  
      uint8_t temp;  
      //uint8_t narr = 4 / sizeof state[1][0];
 /*    //uint8_t narr = 4 ;

      rotate(&state[1][0], narr, 1);
      rotate(&state[2][0], narr, 2);
      rotate(&state[2][0], narr, 3);

*/
      temp=state[1][0];  
      state[1][0]=state[1][1];  
      state[1][1]=state[1][2];  
      state[1][2]=state[1][3];  
      state[1][3]=temp;  
    
      temp=state[2][0];  
      state[2][0]=state[2][2];  
      state[2][2]=temp;  
     
      temp=state[2][1];  
      state[2][1]=state[2][3];  
      state[2][3]=temp;  
     
      temp=state[3][0];  
      state[3][0]=state[3][3];  
      state[3][3]=state[3][2];  
      state[3][2]=state[3][1];  
      state[3][1]=temp;  

   }  
     
  void MixColumns()  
  {  
      uint8_t i;  
      uint8_t Tmp,Tm,t; 

      atomic { 
      for(i=0;i<4;i++) {
        
          t   = state[0][i];  
          Tmp = state[0][i] ^ state[1][i] ^ state[2][i] ^ state[3][i] ;  
          Tm  = state[0][i] ^ state[1][i] ; Tm = xtime(Tm); state[0][i] ^= Tm ^ Tmp ;  
          Tm  = state[1][i] ^ state[2][i] ; Tm = xtime(Tm); state[1][i] ^= Tm ^ Tmp ;  
          Tm  = state[2][i] ^ state[3][i] ; Tm = xtime(Tm); state[2][i] ^= Tm ^ Tmp ;  
          Tm  = state[3][i] ^ t ; Tm = xtime(Tm); state[3][i] ^= Tm ^ Tmp ;  
      }
     }    
  }  
 
  void Cipher()  
  {  
      uint8_t i,j,round=0;  
      uint8_t lastRound;

      atomic {

      for(i=0;i<4;i++)   
          for(j=0;j<4;j++)   
              state[j][i] = inPut[i*4 + j];  

      lastRound = rounds;  

      if(mode) {
	
         AddRoundKey(0);   
 
         for(round=1; round< rounds; round++)  {  
             SubBytes();  
             ShiftRows();  
             MixColumns();  
             AddRoundKey(round);  
         }  
    
         SubBytes();  
         ShiftRows();  
         AddRoundKey(lastRound);  

     } else {
     
         AddRoundKey(lastRound); 
 
         for(round=rounds-1;round>0;round--) {  

             InvShiftRows();  
             SubBytes();  
             AddRoundKey(round);  
             InvMixColumns();  
         }  
         
         InvShiftRows();  
         SubBytes();  
         AddRoundKey(0);  
   }
   
     for(i=0;i<4;i++)   
      for(j=0;j<4;j++)   
          inPut[i*4+j]=state[j][i]; // Final output
    }
  }

   void InvShiftRows()  
   {  
         uint8_t temp;  
   
      atomic{

                temp=state[1][3];  
         state[1][3]=state[1][2];  
         state[1][2]=state[1][1];  
         state[1][1]=state[1][0];  
         state[1][0]=temp;  
        
             temp=state[2][0];  
         state[2][0]=state[2][2];  
         state[2][2]=temp;  
         temp=state[2][1];  
         state[2][1]=state[2][3];  
         state[2][3]=temp;  
        
         temp=state[3][0];  
         state[3][0]=state[3][1];  
         state[3][1]=state[3][2];  
         state[3][2]=state[3][3];  
         state[3][3]=temp;
      }  
  } 
 

   void InvMixColumns()  
   {  
         uint8_t i;  
         uint8_t a,b,c,d; 
 
         atomic {
 
         for(i=0;i<4;i++) {     
          
             a = state[0][i];  
             b = state[1][i];  
             c = state[2][i];  
             d = state[3][i];  
        
              
             state[0][i] = Multiply(a, 0x0e) ^ Multiply(b, 0x0b) ^ Multiply(c, 0x0d) ^ Multiply(d, 0x09);  
             state[1][i] = Multiply(a, 0x09) ^ Multiply(b, 0x0e) ^ Multiply(c, 0x0b) ^ Multiply(d, 0x0d);  
             state[2][i] = Multiply(a, 0x0d) ^ Multiply(b, 0x09) ^ Multiply(c, 0x0e) ^ Multiply(d, 0x0b);  
             state[3][i] = Multiply(a, 0x0b) ^ Multiply(b, 0x0d) ^ Multiply(c, 0x09) ^ Multiply(d, 0x0e);  
         }
       }  
   }  
// ------------------------------------------------------------------------------------------------------------------------
}
