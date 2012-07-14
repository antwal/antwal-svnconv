
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


interface OmacI {

       command error_t cbcmacGenerate(uint8_t *auth_this_msg, uint8_t payloadLenB, uint8_t blksize  ) ;
       command error_t truncateTag(uint8_t *mac, uint8_t payloadlenB,uint8_t tBytes ) ;
       command error_t integrityCheck( uint8_t *mac, uint8_t *buff, uint8_t tBytes ) ;
}
