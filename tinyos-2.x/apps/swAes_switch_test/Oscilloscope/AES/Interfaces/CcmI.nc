
// Author : TRILOK INAKOTA
// CDAC HYD.
// Date : 18/12/2009



interface CcmI {

       command error_t AESccm_auth( uint8_t *auth_this_msg, uint8_t payloadLenB, uint8_t KeySizeB ); 
       command error_t AESccm_nonce(uint8_t *getNonce) ;
       command error_t truncateTag( uint8_t *mac, uint8_t tBytes ) ;
       command error_t integrityCheck( uint8_t *mac, uint8_t *buff,uint8_t tBytes ) ;
       command error_t AESccm_encrypt(uint8_t *in, uint8_t payloadLenB, uint8_t *nonce ) ;
       command error_t AESccm_decrypt(uint8_t *in, uint8_t payloadLenB, uint8_t *nonce ) ;
    
}
