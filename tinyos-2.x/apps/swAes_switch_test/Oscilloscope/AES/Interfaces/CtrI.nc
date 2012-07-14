
// Author : TRILOK INAKOTA
// CDAC HYD.
// Date : 18/12/2009



interface CtrI {

	command error_t AESctr_encrypt(uint8_t *in, uint8_t payloadLenB, uint8_t *nonce ) ;
  	command error_t AESctr_decrypt(uint8_t *in, uint8_t payloadLenB, uint8_t *nonce ) ;

}
