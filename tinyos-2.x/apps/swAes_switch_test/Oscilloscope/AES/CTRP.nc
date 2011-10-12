
/* Author	: TRILOK INAKOTA
   Organisation : C-DAC HYD
*/

void xor( uint8_t *in, uint8_t *out );

generic module CTRP(am_id_t id)
{
       provides interface CtrI;
       uses interface AFWA_AESI;
       uses interface Leds;
}

implementation {

        uint8_t blksizeB;
        uint8_t tmp[MAX] = {0};
	uint8_t i=0, j=0, x=0;
	uint16_t fc=0;

        void xor( uint8_t *in, uint8_t *out )
	   {
	       j = 0;

	       atomic {
    	        for( j=0; j<MAX; j++ )
		  in[j] ^= out[j];
               } 
	   }
        
	command error_t CtrI.AESctr_encrypt(uint8_t *in, uint8_t payloadLenB, uint8_t *nonce ) 
        {
		
                uint8_t  mod=0,m=0,k=0;
		//uint8_t  ct[MAX];
		uint8_t  ctrblk[MAX] = {0};  // counter block		

                 blksizeB = 16;
	 	 mod = payloadLenB%blksizeB; // Last message block length
		   m = payloadLenB/blksizeB; // Total no. of message blocks

		 memcpy(&fc,&nonce[3],4);		
                 memcpy(ctrblk,nonce,16);		

  	 	 for( i=0,k=0 ; i<m; i++, k += blksizeB ) {
                   call Leds.led2Toggle(); 
		    call AFWA_AESI.AFWAenc((uint8_t *)ctrblk);
                    memcpy((uint8_t *)tmp,(uint8_t *)&in[k],blksizeB);
 		    xor((uint8_t *)tmp, (uint8_t *)ctrblk);
                    memcpy((uint8_t *)&in[k],(uint8_t *)tmp,blksizeB);

		    if(i>1)  		
			fc++;
		    memcpy(&ctrblk[3], &fc, 4 );	

	   	 }
             
                 memset(tmp, 0, blksizeB);
             
                 if((--i>2) || m==0) {  

	  	   if(mod) {

		      memcpy((uint8_t *)tmp,(uint8_t *)&in[k],mod);
 		      xor((uint8_t *)tmp, (uint8_t *)ctrblk);
                      memcpy((uint8_t *)&in[k],(uint8_t *)tmp,blksizeB);	

		   } else {
 
	  	      memcpy((uint8_t *)tmp,(uint8_t *)&in[k],blksizeB);
                      xor((uint8_t *)tmp, (uint8_t *)ctrblk);
                      memcpy((uint8_t *)&in[k],(uint8_t *)tmp,blksizeB);
              	   }
		   fc++;
		   memcpy(&ctrblk[3], &fc, 4 );
                }
		memcpy( nonce, ctrblk, 16);

                return SUCCESS;		 
 	   } 


  	  command error_t CtrI.AESctr_decrypt(uint8_t *in, uint8_t payloadLenB, uint8_t *nonce ) 
          {
                uint8_t  mod=0,m=0,k=0;
		uint8_t  ct[MAX];
		uint8_t  ctrblk[MAX] = {0};  // counter block		


                 blksizeB = 16;
	 	 mod = payloadLenB%blksizeB; // Last message block length
		   m = payloadLenB/blksizeB; // Total no. of message blocks

		 memcpy(&fc,&nonce[3],4);		
                 memcpy(ctrblk,nonce,16);		

  	 	 for( i=0,k=0 ; i<m; i++, k += blksizeB ) {

		     call AFWA_AESI.AFWAdec((uint8_t *)ctrblk, payloadLenB);
                     memcpy((uint8_t *)tmp,(uint8_t *)&in[k],blksizeB);
 		     xor((uint8_t *)tmp, (uint8_t *)ctrblk);
                     memcpy((uint8_t *)&in[k],(uint8_t *)tmp,blksizeB);
		
		     if(i>1)  		
			fc++;
		     memcpy(&ctrblk[3], &fc, 4 );	

	   	 }
             
                 memset(tmp, 0, blksizeB);
             
                 if((--i>2) || m==0) {  

	  	   if(mod) {

		      memcpy((uint8_t *)tmp,(uint8_t *)&in[k],mod);
 		      xor((uint8_t *)tmp, (uint8_t *)ctrblk);
                      memcpy((uint8_t *)&in[k],(uint8_t *)tmp,blksizeB);	

		   } else {
 
	  	      memcpy((uint8_t *)tmp,(uint8_t *)&in[k],blksizeB);
                      xor((uint8_t *)tmp, (uint8_t *)ctrblk);
                      memcpy((uint8_t *)&in[k],(uint8_t *)tmp,blksizeB);
              	   }
		   fc++;
		   memcpy(&ctrblk[3], &fc, 4 );
                }

                 return SUCCESS;
           }

           event void AFWA_AESI.updateKeyDone(uint8_t * key) {  }
           event void AFWA_AESI.AFWAsendDone(message_t* msg, error_t err) { }
}

