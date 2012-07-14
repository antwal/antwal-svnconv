
/**
  * File                 : Application Interfaces - Implementation  
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

interface AFWA_AESI
{
      

#ifdef AES_SW_SECURITY
      command error_t AFWAupdateKey(uint8_t * key, uint8_t KeySize_in_bits);
#elif CC2420_SW_SECURITY
      /* Command for updating keys 0 and 1 */
      command error_t AFWAupdateKey(uint8_t * key, enum modeSet KEY);
#endif

      event void updateKeyDone(uint8_t * key);


      /* commands that sets Transmitting mode and Receiving mode  */
      command error_t AFWAsetTransmitMode( uint16_t ctrl0, uint8_t len ); 
      command error_t AFWAsetReceiveMode( uint16_t ctrl0, uint8_t len );
 
      /* command that that takes plaintext Data for encryption   */
      command error_t AFWAenc( uint8_t *plaintext );    
      command error_t AFWAdec( uint8_t *plaintext , uint8_t len );

           
      /* command for sending a encryptedd data */ 
      command error_t AFWAsend( uint16_t addr, message_t *msg, uint8_t len );
      event void AFWAsendDone(message_t *msg, uint8_t error); 

       /* Software level Aes Encryption and Decryption 
        * It takes Input array, Output array, key and keysize as parameters
        */
      command uint8_t AFWAgetKeySize();  

}
