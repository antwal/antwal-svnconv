
/* 
   Author	: TRILOK INAKOTA
   Organisation : C-DAC HYD
   Source 	: One-Key MAC (or) CBC-MAC for 16-bit AES
*/


//#include "printf.h"

void xor( uint8_t *x, uint8_t *y );
void preprocess(uint8_t *in, uint8_t *out ); 
uint8_t generateMac(uint8_t *auth_this_msg,uint8_t payloadLenB);

generic module OmacP(am_id_t id)
{
    provides interface OmacI;

    uses interface AFWA_AESI;
}

implementation {

        uint8_t iv[MAX] = {0};
	uint8_t Lu[MAX] = {0};
	uint8_t Lu_2[MAX] = {0};
	uint8_t tmp[MAX] = {0};
	uint8_t temp[2] = {0};
	uint8_t *inPut;
	uint8_t blksizeB = 0, i=0, j=0, x=0;
	uint8_t MSB;
       

        
	void xor( uint8_t *in, uint8_t *out )
	{
		j = 0;

	       atomic {
    	        for( j=0; j<MAX; j++ )
		  in[j] ^= out[j];
               } 
	}
         
        void preprocess(uint8_t *in, uint8_t *out ) 
        {
                
             uint8_t p,q=0;
                 
             atomic {
        
                    if( (in[MAX-1] &  0x80 ) == 0x01 ) 
		        MSB = 1; 
                    // Left Shift by one bit
                    for( p=0; p<MAX; p++ ) {
	                  temp[(q++)%2] = (in[p] & 0x80) >> 7;
	                  in[p]  <<= 1;
	                  if( p!=0 )
	                    in[p]  |= temp[q%2];
	                  q %= 2;
	             }  

		    if(MSB) {
			switch (blksizeB)
			{
				case 8 :	Lu[7]  ^= 0x1b;break;
				case 16:	Lu[15] ^= 0x87;break;
				case 32:	Lu[30] ^= 4; Lu[31] ^= 0x23;break;
				default:	//printf("Invalid argument\n");
						break;
			}	
        	    }
	            MSB = 0;

                    for( p=0; p<MAX; p++ ) 
                 	out[p] = in[p];  
                 }
          }	 

          uint8_t generateMac(uint8_t *auth_this_msg,uint8_t payloadLenB)
          {
               uint8_t mod=0,m=0,k=0;


                if (!payloadLenB)
			return 0;

 	         mod = payloadLenB%blksizeB;  // Last message block length
		   m = payloadLenB/blksizeB;  // Total no. of message blocks

  	 	 for( i=0,k=0 ; i<m; i++, k += blksizeB ) {
		    memcpy((uint8_t *)tmp,(uint8_t *)&auth_this_msg[k],blksizeB);
		    xor((uint8_t *)iv, (uint8_t *)tmp);
		    call AFWA_AESI.AFWAenc((uint8_t *)iv);
	   	 }

                 memset(tmp, 0, blksizeB);
                 
                 if( (--i > 2 ) || m==0) {  
	  	   if( mod  ) {
		      memcpy((uint8_t *)tmp,(uint8_t *)&auth_this_msg[k],mod);	
		      tmp[mod] ^= 0x01;
		      xor((uint8_t*)iv,(uint8_t *)Lu_2);      	// Here iv[] contains 0^n
		      xor((uint8_t*)iv,(uint8_t *)tmp);

		   } else{
 
	  	      memcpy((uint8_t *)tmp,(uint8_t *)&auth_this_msg[k],blksizeB);	
		      xor((uint8_t*)iv,(uint8_t *)Lu); 
		      xor((uint8_t*)iv,(uint8_t *)tmp);	
		  }
                }
		call AFWA_AESI.AFWAenc((uint8_t *)iv); // iv contains Final output
                 
	   } 



       command error_t OmacI.cbcmacGenerate(uint8_t *auth_this_msg, uint8_t payloadLenB, uint8_t KeySizeB  ) {
                
                // Here iv[]  = Enc( K, 0^n)
		blksizeB = 16;
		iv[0]   ^= payloadLenB; // by default length field is authenticated
                //KeySizeB = call AFWA_AESI.AFWAgetKeySize(); 
		call AFWA_AESI.AFWAenc((uint8_t *)iv);
		preprocess((uint8_t *)iv,(uint8_t *)Lu);   // calculate Lu value
		preprocess((uint8_t *)Lu,(uint8_t *)Lu_2); // calculate Lu2 value

		for( i=0; i<MAX;i++ )
			iv[i] = 0;

                generateMac((uint8_t *)auth_this_msg, payloadLenB);
		 
                 return SUCCESS;

        }     

        command error_t OmacI.truncateTag( uint8_t *mac, uint8_t payloadlenB, uint8_t tBytes ) {
                   i=0; j=0; 
		  //for( i= (payloadB - tBytes); i< payloadLenB; i++ )
		atomic{
		  for( i=payloadlenB; j<tBytes;  )
		     mac[i++] = iv[j++];		
                }
		return SUCCESS;
	} 

        command error_t OmacI.integrityCheck( uint8_t *mac, uint8_t *buff,uint8_t tBytes ) {

		  i=0,j=0, x=0 ;
		//for( i= (payloadB - tBytes); i< payloadLenB; i++ )
		  for( i= 0; i < tBytes; i++ )
		     if( mac[i] == buff[j++] )
			x = 1;		
		     else { 
			x = 0;
			break;
                     }

		return x;
	}

       
	   event void AFWA_AESI.updateKeyDone(uint8_t * key) {  }
           event void AFWA_AESI.AFWAsendDone(message_t* msg, error_t err) { }
}
