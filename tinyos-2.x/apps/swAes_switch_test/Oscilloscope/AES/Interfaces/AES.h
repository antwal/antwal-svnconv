/*
 * File                 :       Message header file
 *
 * Project              :       Adaptive Framework for Wireless Sensor Network Application
 *
 * Author               :       Trilok Inakota
 *
 * Organization         :       C-DAC,Hyderabad
 *
 * Date                 :       4th February 2008
 *
 * Revision History     :       version 0.1
*/
/************************************************************************************************/

/**
 * Description          :
 *
 *
 *
 */

#define TOSH_DATA_LENGTH 48

#define CC2420_HW_SECURITY
#define AES_SW_SECURITY

#define xtime(x)   ((x<<1) ^ (((x>>7) & 1) * 0x1b))  
#define Multiply(x,y) (((y & 1) * x) ^ ((y>>1 & 1) * xtime(x)) ^ ((y>>2 & 1) * xtime(xtime(x))) \
                       ^ ((y>>3 & 1) * xtime(xtime(xtime(x)))) ^ ((y>>4 & 1) * xtime(xtime(xtime(xtime(x))))))  


// -- Blocksize -- 
#define MAX 16

// --  Key Expansion size can be 176, 208, 240 -- 
#define KES 176
// -- define KES 208 -- 
// -- define KES 240 --  

typedef uint8_t *UPtr;

enum mode {

   AES_MODE_SET   = 4,
   AES_KEY_UPDATE = 5,
   AES_TRANSMIT   = 6, 
   AES_RECEIVE    = 7,
   AES_TXNONCE	  = 8,
   AES_RXNONCE    = 9,
   DONE           = 10,
};

enum modeSet {
                                  
  AES_STANDALONE  =  0x0000,  // SEC_MODE 
  AES_ENCRYPT     =  0x0000,  // AES_STANDALONE_ENCRYPTION ( Hardware Independent ) 
  KEY0            =  0x0000,  // SEC_SAKEYSEL   
  KEY1            =  0x0080,  

  AES_INLINE      =  0x0000,  // SEC_MODE 
  CBC_MAC         =  0x0001,
  CTR             =  0x0002,
  CCM             =  0x0003,

  TXKEY0          =  0x0000,  // SEC_TXKEYSEL 
  TXKEY1          =  0x0040,  

  RXKEY0          =  0x0000,  // SEC_RXKEYSEL 
  RXKEY1          =  0x0020,

  RXFIFO_PROTECTION = 0x0200,

                               // SEC_M  
  SEC_M0	  =  0x0000,   // 0: Reserved   
  SEC_M1          =  0x0004,   // 1: 4
  SEC_M2          =  0x0008,   // 2: 6
  SEC_M3          =  0x000C,   // 3: 8
  SEC_M4          =  0x0010,   // 4: 10
  SEC_M5          =  0x0014,   // 5: 12
  SEC_M6          =  0x0018,   // 6: 14
  SEC_M7          =  0x001C,   // 7: 16

  SEC_CBC_HEAD    =  0x0100,

};


typedef struct nonce {

          uint16_t bc;
          uint8_t  ksc;
          uint32_t fc;
          uint64_t sa;
          uint8_t  flag;
         
          
} __attribute__((packed)) nx_nonce;

typedef struct sec_msg_t{

          uint32_t fc;
          uint8_t  data[TOSH_DATA_LENGTH];
	  //uint8_t  mac[MAX];

} __attribute__((packed)) sec_msg_t;



    //     4              1             1           2            1        0-20           n            2 
    //  --------------------------------------------------------------------------------------------------------
    // | Preamble | Start of Frame  | Frame  | Frame Control | Data Seq | Address|  Frame Payload | Frame Check |
    // | Sequence | Delimiter (SFD) | Length | Field (FCF)   |  no.     | Info   |                | Sequence    |
    //  --------------------------------------------------------------------------------------------------------
    //                                       |<---------------------- MAC Layer ------------------------------->|
    // |<---------------------- PHY Layer --------------------------------------------------------------------->| 


typedef uint8_t CTR_ENC_LEN ;   // No. of Cleartext Bytes b/w length byte and the first byte to be encrypted 
typedef uint8_t CBC_AUTH_LEN ;  // No. of Cleartext Bytes b/w length byte and the first byte to be authenticated
typedef uint8_t CCM_AUTH_LEN ;  // Defineing the no. of Bytes to be authenticated but not encrypted/decrypted
typedef uint8_t CTR_DEC_LEN ;   // No. of Cleartext Bytes b/w length byte and the first byte to be decrypted
norace  uint8_t SECURITYLOCK = 0;


