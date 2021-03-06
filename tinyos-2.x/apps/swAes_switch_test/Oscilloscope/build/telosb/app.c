#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 38 "/usr/msp430/include/sys/inttypes.h"
typedef signed char int8_t;
typedef unsigned char uint8_t;

typedef int int16_t;
typedef unsigned int uint16_t;

typedef long int32_t;
typedef unsigned long uint32_t;

typedef long long int64_t;
typedef unsigned long long uint64_t;




typedef int16_t intptr_t;
typedef uint16_t uintptr_t;
# 235 "/usr/local/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void *source);




static __inline uint8_t __nesc_hton_uint8(void *target, uint8_t value);





static __inline uint8_t __nesc_ntoh_leuint8(const void *source);




static __inline uint8_t __nesc_hton_leuint8(void *target, uint8_t value);





static __inline int8_t __nesc_hton_int8(void *target, int8_t value);
#line 269
static __inline uint16_t __nesc_hton_uint16(void *target, uint16_t value);






static __inline uint16_t __nesc_ntoh_leuint16(const void *source);




static __inline uint16_t __nesc_hton_leuint16(void *target, uint16_t value);
#line 385
typedef struct { char data[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { char data[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { char data[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { char data[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { char data[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { char data[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { char data[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { char data[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { char data[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { char data[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { char data[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { char data[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { char data[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { char data[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { char data[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { char data[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 151 "/usr/lib/gcc-lib/msp430/3.2.3/include/stddef.h" 3
typedef int ptrdiff_t;
#line 213
typedef unsigned int size_t;
#line 325
typedef int wchar_t;
# 41 "/usr/msp430/include/sys/types.h"
typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;
typedef unsigned short ushort;
typedef unsigned int uint;

typedef uint8_t u_int8_t;
typedef uint16_t u_int16_t;
typedef uint32_t u_int32_t;
typedef uint64_t u_int64_t;

typedef u_int64_t u_quad_t;
typedef int64_t quad_t;
typedef quad_t *qaddr_t;

typedef char *caddr_t;
typedef const char *c_caddr_t;
typedef volatile char *v_caddr_t;
typedef u_int32_t fixpt_t;
typedef u_int32_t gid_t;
typedef u_int32_t in_addr_t;
typedef u_int16_t in_port_t;
typedef u_int32_t ino_t;
typedef long key_t;
typedef u_int16_t mode_t;
typedef u_int16_t nlink_t;
typedef quad_t rlim_t;
typedef int32_t segsz_t;
typedef int32_t swblk_t;
typedef int32_t ufs_daddr_t;
typedef int32_t ufs_time_t;
typedef u_int32_t uid_t;
# 40 "/usr/msp430/include/string.h"
extern void *memcpy(void *, const void *, size_t );

extern void *memset(void *, int , size_t );
#line 63
extern void *memset(void *, int , size_t );
# 59 "/usr/msp430/include/stdlib.h"
#line 56
typedef struct __nesc_unnamed4242 {
  int quot;
  int rem;
} div_t;







#line 64
typedef struct __nesc_unnamed4243 {
  long quot;
  long rem;
} ldiv_t;
# 122 "/usr/msp430/include/sys/config.h" 3
typedef long int __int32_t;
typedef unsigned long int __uint32_t;
# 12 "/usr/msp430/include/sys/_types.h"
typedef long _off_t;
typedef long _ssize_t;
# 28 "/usr/msp430/include/sys/reent.h" 3
typedef __uint32_t __ULong;


struct _glue {

  struct _glue *_next;
  int _niobs;
  struct __sFILE *_iobs;
};

struct _Bigint {

  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong _x[1];
};


struct __tm {

  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};







struct _atexit {
  struct _atexit *_next;
  int _ind;
  void (*_fns[32])(void );
};








struct __sbuf {
  unsigned char *_base;
  int _size;
};






typedef long _fpos_t;
#line 116
struct __sFILE {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;


  void *_cookie;

  int (*_read)(void *_cookie, char *_buf, int _n);
  int (*_write)(void *_cookie, const char *_buf, int _n);

  _fpos_t (*_seek)(void *_cookie, _fpos_t _offset, int _whence);
  int (*_close)(void *_cookie);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  int _offset;

  struct _reent *_data;
};
#line 174
struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;
};









struct _reent {


  int _errno;




  struct __sFILE *_stdin, *_stdout, *_stderr;

  int _inc;
  char _emergency[25];

  int _current_category;
  const char *_current_locale;

  int __sdidinit;

  void (*__cleanup)(struct _reent *);


  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;


  int _cvtlen;
  char *_cvtbuf;

  union __nesc_unnamed4244 {

    struct __nesc_unnamed4245 {

      unsigned int _unused_rand;
      char *_strtok_last;
      char _asctime_buf[26];
      struct __tm _localtime_buf;
      int _gamma_signgam;
      __extension__ unsigned long long _rand_next;
      struct _rand48 _r48;
    } _reent;



    struct __nesc_unnamed4246 {


      unsigned char *_nextf[30];
      unsigned int _nmalloc[30];
    } _unused;
  } _new;


  struct _atexit *_atexit;
  struct _atexit _atexit0;


  void (**_sig_func)(int );




  struct _glue __sglue;
  struct __sFILE __sf[3];
};
#line 273
struct _reent;
# 18 "/usr/msp430/include/math.h"
union __dmath {

  __uint32_t i[2];
  double d;
};




union __dmath;
#line 208
struct exception {


  int type;
  char *name;
  double arg1;
  double arg2;
  double retval;
  int err;
};
#line 261
enum __fdlibm_version {

  __fdlibm_ieee = -1, 
  __fdlibm_svid, 
  __fdlibm_xopen, 
  __fdlibm_posix
};




enum __fdlibm_version;
# 20 "/opt/tinyos-2.x/tos/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4247 {
#line 21
  FALSE = 0, TRUE = 1
};
typedef nx_int8_t nx_bool;
uint16_t TOS_NODE_ID = 1;





struct __nesc_attr_atmostonce {
};
#line 31
struct __nesc_attr_atleastonce {
};
#line 32
struct __nesc_attr_exactlyonce {
};
# 34 "/opt/tinyos-2.x/tos/types/TinyError.h"
enum __nesc_unnamed4248 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2);
# 39 "/usr/msp430/include/msp430/iostructures.h"
#line 27
typedef union port {
  volatile unsigned char reg_p;
  volatile struct __nesc_unnamed4249 {
    unsigned char __p0 : 1, 
    __p1 : 1, 
    __p2 : 1, 
    __p3 : 1, 
    __p4 : 1, 
    __p5 : 1, 
    __p6 : 1, 
    __p7 : 1;
  } __pin;
} __attribute((packed))  ioregister_t;
# 108 "/usr/msp430/include/msp430/iostructures.h" 3
struct port_full_t {
  ioregister_t in;
  ioregister_t out;
  ioregister_t dir;
  ioregister_t ifg;
  ioregister_t ies;
  ioregister_t ie;
  ioregister_t sel;
};









struct port_simple_t {
  ioregister_t in;
  ioregister_t out;
  ioregister_t dir;
  ioregister_t sel;
};




struct port_full_t;



struct port_full_t;



struct port_simple_t;



struct port_simple_t;



struct port_simple_t;



struct port_simple_t;
# 116 "/usr/msp430/include/msp430/gpio.h" 3
volatile unsigned char P1OUT __asm ("0x0021");

volatile unsigned char P1DIR __asm ("0x0022");

volatile unsigned char P1IFG __asm ("0x0023");

volatile unsigned char P1IES __asm ("0x0024");

volatile unsigned char P1IE __asm ("0x0025");

volatile unsigned char P1SEL __asm ("0x0026");










volatile unsigned char P2OUT __asm ("0x0029");

volatile unsigned char P2DIR __asm ("0x002A");

volatile unsigned char P2IFG __asm ("0x002B");



volatile unsigned char P2IE __asm ("0x002D");

volatile unsigned char P2SEL __asm ("0x002E");










volatile unsigned char P3OUT __asm ("0x0019");

volatile unsigned char P3DIR __asm ("0x001A");

volatile unsigned char P3SEL __asm ("0x001B");










volatile unsigned char P4OUT __asm ("0x001D");

volatile unsigned char P4DIR __asm ("0x001E");

volatile unsigned char P4SEL __asm ("0x001F");










volatile unsigned char P5OUT __asm ("0x0031");

volatile unsigned char P5DIR __asm ("0x0032");

volatile unsigned char P5SEL __asm ("0x0033");










volatile unsigned char P6OUT __asm ("0x0035");

volatile unsigned char P6DIR __asm ("0x0036");

volatile unsigned char P6SEL __asm ("0x0037");
# 92 "/usr/msp430/include/msp430/usart.h"
volatile unsigned char U0CTL __asm ("0x0070");

volatile unsigned char U0TCTL __asm ("0x0071");



volatile unsigned char U0MCTL __asm ("0x0073");

volatile unsigned char U0BR0 __asm ("0x0074");

volatile unsigned char U0BR1 __asm ("0x0075");

volatile unsigned char U0RXBUF __asm ("0x0076");
#line 277
volatile unsigned char U1TCTL __asm ("0x0079");
# 27 "/usr/msp430/include/msp430/timera.h"
volatile unsigned int TA0CTL __asm ("0x0160");

volatile unsigned int TA0R __asm ("0x0170");


volatile unsigned int TA0CCTL0 __asm ("0x0162");

volatile unsigned int TA0CCTL1 __asm ("0x0164");
#line 70
volatile unsigned int TA0CCTL2 __asm ("0x0166");
# 127 "/usr/msp430/include/msp430/timera.h" 3
#line 118
typedef struct __nesc_unnamed4250 {
  volatile unsigned 
  taifg : 1, 
  taie : 1, 
  taclr : 1, 
  dummy : 1, 
  tamc : 2, 
  taid : 2, 
  tassel : 2;
} __attribute((packed))  tactl_t;
#line 143
#line 129
typedef struct __nesc_unnamed4251 {
  volatile unsigned 
  ccifg : 1, 
  cov : 1, 
  out : 1, 
  cci : 1, 
  ccie : 1, 
  outmod : 3, 
  cap : 1, 
  dummy : 1, 
  scci : 1, 
  scs : 1, 
  ccis : 2, 
  cm : 2;
} __attribute((packed))  tacctl_t;


struct timera_t {
  tactl_t ctl;
  tacctl_t cctl0;
  tacctl_t cctl1;
  tacctl_t cctl2;
  volatile unsigned dummy[4];
  volatile unsigned tar;
  volatile unsigned taccr0;
  volatile unsigned taccr1;
  volatile unsigned taccr2;
};



struct timera_t;
# 26 "/usr/msp430/include/msp430/timerb.h"
volatile unsigned int TBR __asm ("0x0190");


volatile unsigned int TBCCTL0 __asm ("0x0182");





volatile unsigned int TBCCR0 __asm ("0x0192");
#line 76
#line 64
typedef struct __nesc_unnamed4252 {
  volatile unsigned 
  tbifg : 1, 
  tbie : 1, 
  tbclr : 1, 
  dummy1 : 1, 
  tbmc : 2, 
  tbid : 2, 
  tbssel : 2, 
  dummy2 : 1, 
  tbcntl : 2, 
  tbclgrp : 2;
} __attribute((packed))  tbctl_t;
#line 91
#line 78
typedef struct __nesc_unnamed4253 {
  volatile unsigned 
  ccifg : 1, 
  cov : 1, 
  out : 1, 
  cci : 1, 
  ccie : 1, 
  outmod : 3, 
  cap : 1, 
  clld : 2, 
  scs : 1, 
  ccis : 2, 
  cm : 2;
} __attribute((packed))  tbcctl_t;


struct timerb_t {
  tbctl_t ctl;
  tbcctl_t cctl0;
  tbcctl_t cctl1;
  tbcctl_t cctl2;

  tbcctl_t cctl3;
  tbcctl_t cctl4;
  tbcctl_t cctl5;
  tbcctl_t cctl6;



  volatile unsigned tbr;
  volatile unsigned tbccr0;
  volatile unsigned tbccr1;
  volatile unsigned tbccr2;

  volatile unsigned tbccr3;
  volatile unsigned tbccr4;
  volatile unsigned tbccr5;
  volatile unsigned tbccr6;
};





struct timerb_t;
# 20 "/usr/msp430/include/msp430/basic_clock.h"
volatile unsigned char DCOCTL __asm ("0x0056");

volatile unsigned char BCSCTL1 __asm ("0x0057");

volatile unsigned char BCSCTL2 __asm ("0x0058");
# 18 "/usr/msp430/include/msp430/adc12.h"
volatile unsigned int ADC12CTL0 __asm ("0x01A0");

volatile unsigned int ADC12CTL1 __asm ("0x01A2");
#line 42
#line 30
typedef struct __nesc_unnamed4254 {
  volatile unsigned 
  adc12sc : 1, 
  enc : 1, 
  adc12tovie : 1, 
  adc12ovie : 1, 
  adc12on : 1, 
  refon : 1, 
  r2_5v : 1, 
  msc : 1, 
  sht0 : 4, 
  sht1 : 4;
} __attribute((packed))  adc12ctl0_t;
#line 54
#line 44
typedef struct __nesc_unnamed4255 {
  volatile unsigned 
  adc12busy : 1, 
  conseq : 2, 
  adc12ssel : 2, 
  adc12div : 3, 
  issh : 1, 
  shp : 1, 
  shs : 2, 
  cstartadd : 4;
} __attribute((packed))  adc12ctl1_t;
#line 74
#line 56
typedef struct __nesc_unnamed4256 {
  volatile unsigned 
  bit0 : 1, 
  bit1 : 1, 
  bit2 : 1, 
  bit3 : 1, 
  bit4 : 1, 
  bit5 : 1, 
  bit6 : 1, 
  bit7 : 1, 
  bit8 : 1, 
  bit9 : 1, 
  bit10 : 1, 
  bit11 : 1, 
  bit12 : 1, 
  bit13 : 1, 
  bit14 : 1, 
  bit15 : 1;
} __attribute((packed))  adc12xflg_t;


struct adc12_t {
  adc12ctl0_t ctl0;
  adc12ctl1_t ctl1;
  adc12xflg_t ifg;
  adc12xflg_t ie;
  adc12xflg_t iv;
};




struct adc12_t;
# 83 "/usr/msp430/include/msp430x16x.h"
volatile unsigned char ME1 __asm ("0x0004");





volatile unsigned char ME2 __asm ("0x0005");
# 177 "/opt/tinyos-2.x/tos/chips/msp430/msp430hardware.h"
typedef uint8_t mcu_power_t  ;
static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2);


enum __nesc_unnamed4257 {
  MSP430_POWER_ACTIVE = 0, 
  MSP430_POWER_LPM0 = 1, 
  MSP430_POWER_LPM1 = 2, 
  MSP430_POWER_LPM2 = 3, 
  MSP430_POWER_LPM3 = 4, 
  MSP430_POWER_LPM4 = 5
};

static inline void __nesc_disable_interrupt(void );





static inline void __nesc_enable_interrupt(void );




typedef bool __nesc_atomic_t;
__nesc_atomic_t __nesc_atomic_start(void );
void __nesc_atomic_end(__nesc_atomic_t reenable_interrupts);






__nesc_atomic_t __nesc_atomic_start(void )  ;







void __nesc_atomic_end(__nesc_atomic_t reenable_interrupts)  ;
# 33 "/opt/tinyos-2.x/tos/platforms/telosb/hardware.h"
static inline void TOSH_SET_SIMO0_PIN(void);
#line 33
static inline void TOSH_CLR_SIMO0_PIN(void);
#line 33
static inline void TOSH_MAKE_SIMO0_OUTPUT(void);
static inline void TOSH_SET_UCLK0_PIN(void);
#line 34
static inline void TOSH_CLR_UCLK0_PIN(void);
#line 34
static inline void TOSH_MAKE_UCLK0_OUTPUT(void);
#line 76
enum __nesc_unnamed4258 {

  TOSH_HUMIDITY_ADDR = 5, 
  TOSH_HUMIDTEMP_ADDR = 3, 
  TOSH_HUMIDITY_RESET = 0x1E
};



static inline void TOSH_SET_FLASH_CS_PIN(void);
#line 85
static inline void TOSH_CLR_FLASH_CS_PIN(void);
#line 85
static inline void TOSH_MAKE_FLASH_CS_OUTPUT(void);
static inline void TOSH_SET_FLASH_HOLD_PIN(void);
#line 86
static inline void TOSH_MAKE_FLASH_HOLD_OUTPUT(void);
# 29 "/opt/tinyos-2.x/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4259 {
#line 29
  int notUsed;
} 
#line 29
TMilli;
typedef struct __nesc_unnamed4260 {
#line 30
  int notUsed;
} 
#line 30
T32khz;
typedef struct __nesc_unnamed4261 {
#line 31
  int notUsed;
} 
#line 31
TMicro;
# 16 "Oscilloscope.h"
enum __nesc_unnamed4262 {


  NREADINGS = 10, 


  DEFAULT_INTERVAL = 256, 

  AM_OSCILLOSCOPE = 0x93
};



#line 27
typedef nx_struct oscilloscope {
  nx_uint8_t readings[16];
} __attribute__((packed)) oscilloscope_t;
# 41 "AES/Interfaces/AES.h"
typedef uint8_t *UPtr;

enum mode {

  AES_MODE_SET = 4, 
  AES_KEY_UPDATE = 5, 
  AES_TRANSMIT = 6, 
  AES_RECEIVE = 7, 
  AES_TXNONCE = 8, 
  AES_RXNONCE = 9, 
  DONE = 10
};

enum modeSet {

  AES_STANDALONE = 0x0000, 
  AES_ENCRYPT = 0x0000, 
  KEY0 = 0x0000, 
  KEY1 = 0x0080, 

  AES_INLINE = 0x0000, 
  CBC_MAC = 0x0001, 
  CTR = 0x0002, 
  CCM = 0x0003, 

  TXKEY0 = 0x0000, 
  TXKEY1 = 0x0040, 

  RXKEY0 = 0x0000, 
  RXKEY1 = 0x0020, 

  RXFIFO_PROTECTION = 0x0200, 


  SEC_M0 = 0x0000, 
  SEC_M1 = 0x0004, 
  SEC_M2 = 0x0008, 
  SEC_M3 = 0x000C, 
  SEC_M4 = 0x0010, 
  SEC_M5 = 0x0014, 
  SEC_M6 = 0x0018, 
  SEC_M7 = 0x001C, 

  SEC_CBC_HEAD = 0x0100
};
#line 98
#line 89
typedef struct nonce {

  uint16_t bc;
  uint8_t ksc;
  uint32_t fc;
  uint64_t sa;
  uint8_t flag;
} 

__attribute((packed))  nx_nonce;







#line 100
typedef struct sec_msg_t {

  uint32_t fc;
  uint8_t data[48];
} 

__attribute((packed))  sec_msg_t;
#line 119
typedef uint8_t CTR_ENC_LEN;
typedef uint8_t CBC_AUTH_LEN;
typedef uint8_t CCM_AUTH_LEN;
typedef uint8_t CTR_DEC_LEN;
 uint8_t SECURITYLOCK = 0;
# 39 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420.h"
typedef uint8_t cc2420_status_t;
#line 59
#line 45
typedef nx_struct cc2420_header_t {
  nxle_uint8_t length;
  nxle_uint16_t fcf;
  nxle_uint8_t dsn;
  nxle_uint16_t destpan;
  nxle_uint16_t dest;
  nxle_uint16_t src;






  nxle_uint8_t type;
} __attribute__((packed)) cc2420_header_t;





#line 64
typedef nx_struct cc2420_footer_t {
} __attribute__((packed)) cc2420_footer_t;
#line 86
#line 71
typedef nx_struct cc2420_metadata_t {
  nx_uint8_t tx_power;
  nx_uint8_t rssi;
  nx_uint8_t lqi;
  nx_bool crc;
  nx_bool ack;
  nx_uint16_t time;
  nx_uint16_t rxInterval;
} __attribute__((packed)) 






cc2420_metadata_t;





#line 89
typedef nx_struct cc2420_packet_t {
  cc2420_header_t packet;
  nx_uint8_t data[];
} __attribute__((packed)) cc2420_packet_t;
#line 123
enum __nesc_unnamed4263 {

  MAC_HEADER_SIZE = sizeof(cc2420_header_t ) - 1, 

  MAC_FOOTER_SIZE = sizeof(uint16_t ), 

  MAC_PACKET_SIZE = MAC_HEADER_SIZE + 48 + MAC_FOOTER_SIZE
};

enum cc2420_enums {
  CC2420_TIME_ACK_TURNAROUND = 7, 
  CC2420_TIME_VREN = 20, 
  CC2420_TIME_SYMBOL = 2, 
  CC2420_BACKOFF_PERIOD = 20 / CC2420_TIME_SYMBOL, 
  CC2420_MIN_BACKOFF = 20 / CC2420_TIME_SYMBOL, 
  CC2420_ACK_WAIT_DELAY = 256
};

enum cc2420_status_enums {
  CC2420_STATUS_RSSI_VALID = 1 << 1, 
  CC2420_STATUS_LOCK = 1 << 2, 
  CC2420_STATUS_TX_ACTIVE = 1 << 3, 
  CC2420_STATUS_ENC_BUSY = 1 << 4, 
  CC2420_STATUS_TX_UNDERFLOW = 1 << 5, 
  CC2420_STATUS_XOSC16M_STABLE = 1 << 6
};

enum cc2420_config_reg_enums {
  CC2420_SNOP = 0x00, 
  CC2420_SXOSCON = 0x01, 
  CC2420_STXCAL = 0x02, 
  CC2420_SRXON = 0x03, 
  CC2420_STXON = 0x04, 
  CC2420_STXONCCA = 0x05, 
  CC2420_SRFOFF = 0x06, 
  CC2420_SXOSCOFF = 0x07, 
  CC2420_SFLUSHRX = 0x08, 
  CC2420_SFLUSHTX = 0x09, 
  CC2420_SACK = 0x0a, 
  CC2420_SACKPEND = 0x0b, 
  CC2420_SRXDEC = 0x0c, 
  CC2420_STXENC = 0x0d, 
  CC2420_SAES = 0x0e, 
  CC2420_MAIN = 0x10, 
  CC2420_MDMCTRL0 = 0x11, 
  CC2420_MDMCTRL1 = 0x12, 
  CC2420_RSSI = 0x13, 
  CC2420_SYNCWORD = 0x14, 
  CC2420_TXCTRL = 0x15, 
  CC2420_RXCTRL0 = 0x16, 
  CC2420_RXCTRL1 = 0x17, 
  CC2420_FSCTRL = 0x18, 
  CC2420_SECCTRL0 = 0x19, 
  CC2420_SECCTRL1 = 0x1a, 
  CC2420_BATTMON = 0x1b, 
  CC2420_IOCFG0 = 0x1c, 
  CC2420_IOCFG1 = 0x1d, 
  CC2420_MANFIDL = 0x1e, 
  CC2420_MANFIDH = 0x1f, 
  CC2420_FSMTC = 0x20, 
  CC2420_MANAND = 0x21, 
  CC2420_MANOR = 0x22, 
  CC2420_AGCCTRL = 0x23, 
  CC2420_AGCTST0 = 0x24, 
  CC2420_AGCTST1 = 0x25, 
  CC2420_AGCTST2 = 0x26, 
  CC2420_FSTST0 = 0x27, 
  CC2420_FSTST1 = 0x28, 
  CC2420_FSTST2 = 0x29, 
  CC2420_FSTST3 = 0x2a, 
  CC2420_RXBPFTST = 0x2b, 
  CC2420_FMSTATE = 0x2c, 
  CC2420_ADCTST = 0x2d, 
  CC2420_DACTST = 0x2e, 
  CC2420_TOPTST = 0x2f, 
  CC2420_TXFIFO = 0x3e, 
  CC2420_RXFIFO = 0x3f
};

enum cc2420_ram_addr_enums {
  CC2420_RAM_TXFIFO = 0x000, 
  CC2420_RAM_RXFIFO = 0x080, 
  CC2420_RAM_KEY0 = 0x100, 
  CC2420_RAM_RXNONCE = 0x110, 
  CC2420_RAM_SABUF = 0x120, 
  CC2420_RAM_KEY1 = 0x130, 
  CC2420_RAM_TXNONCE = 0x140, 
  CC2420_RAM_CBCSTATE = 0x150, 
  CC2420_RAM_IEEEADR = 0x160, 
  CC2420_RAM_PANID = 0x168, 
  CC2420_RAM_SHORTADR = 0x16a
};

enum cc2420_nonce_enums {
  CC2420_NONCE_BLOCK_COUNTER = 0, 
  CC2420_NONCE_KEY_SEQ_COUNTER = 2, 
  CC2420_NONCE_FRAME_COUNTER = 3, 
  CC2420_NONCE_SOURCE_ADDRESS = 7, 
  CC2420_NONCE_FLAGS = 15
};

enum cc2420_main_enums {
  CC2420_MAIN_RESETn = 15, 
  CC2420_MAIN_ENC_RESETn = 14, 
  CC2420_MAIN_DEMOD_RESETn = 13, 
  CC2420_MAIN_MOD_RESETn = 12, 
  CC2420_MAIN_FS_RESETn = 11, 
  CC2420_MAIN_XOSC16M_BYPASS = 0
};

enum cc2420_mdmctrl0_enums {
  CC2420_MDMCTRL0_RESERVED_FRAME_MODE = 13, 
  CC2420_MDMCTRL0_PAN_COORDINATOR = 12, 
  CC2420_MDMCTRL0_ADR_DECODE = 11, 
  CC2420_MDMCTRL0_CCA_HYST = 8, 
  CC2420_MDMCTRL0_CCA_MOD = 6, 
  CC2420_MDMCTRL0_AUTOCRC = 5, 
  CC2420_MDMCTRL0_AUTOACK = 4, 
  CC2420_MDMCTRL0_PREAMBLE_LENGTH = 0
};

enum cc2420_mdmctrl1_enums {
  CC2420_MDMCTRL1_CORR_THR = 6, 
  CC2420_MDMCTRL1_DEMOD_AVG_MODE = 5, 
  CC2420_MDMCTRL1_MODULATION_MODE = 4, 
  CC2420_MDMCTRL1_TX_MODE = 2, 
  CC2420_MDMCTRL1_RX_MODE = 0
};

enum cc2420_rssi_enums {
  CC2420_RSSI_CCA_THR = 8, 
  CC2420_RSSI_RSSI_VAL = 0
};

enum cc2420_syncword_enums {
  CC2420_SYNCWORD_SYNCWORD = 0
};

enum cc2420_txctrl_enums {
  CC2420_TXCTRL_TXMIXBUF_CUR = 14, 
  CC2420_TXCTRL_TX_TURNAROUND = 13, 
  CC2420_TXCTRL_TXMIX_CAP_ARRAY = 11, 
  CC2420_TXCTRL_TXMIX_CURRENT = 9, 
  CC2420_TXCTRL_PA_CURRENT = 6, 
  CC2420_TXCTRL_RESERVED = 5, 
  CC2420_TXCTRL_PA_LEVEL = 0
};

enum cc2420_rxctrl0_enums {
  CC2420_RXCTRL0_RXMIXBUF_CUR = 12, 
  CC2420_RXCTRL0_HIGH_LNA_GAIN = 10, 
  CC2420_RXCTRL0_MED_LNA_GAIN = 8, 
  CC2420_RXCTRL0_LOW_LNA_GAIN = 6, 
  CC2420_RXCTRL0_HIGH_LNA_CURRENT = 4, 
  CC2420_RXCTRL0_MED_LNA_CURRENT = 2, 
  CC2420_RXCTRL0_LOW_LNA_CURRENT = 0
};

enum cc2420_rxctrl1_enums {
  CC2420_RXCTRL1_RXBPF_LOCUR = 13, 
  CC2420_RXCTRL1_RXBPF_MIDCUR = 12, 
  CC2420_RXCTRL1_LOW_LOWGAIN = 11, 
  CC2420_RXCTRL1_MED_LOWGAIN = 10, 
  CC2420_RXCTRL1_HIGH_HGM = 9, 
  CC2420_RXCTRL1_MED_HGM = 8, 
  CC2420_RXCTRL1_LNA_CAP_ARRAY = 6, 
  CC2420_RXCTRL1_RXMIX_TAIL = 4, 
  CC2420_RXCTRL1_RXMIX_VCM = 2, 
  CC2420_RXCTRL1_RXMIX_CURRENT = 0
};

enum cc2420_rsctrl_enums {
  CC2420_FSCTRL_LOCK_THR = 14, 
  CC2420_FSCTRL_CAL_DONE = 13, 
  CC2420_FSCTRL_CAL_RUNNING = 12, 
  CC2420_FSCTRL_LOCK_LENGTH = 11, 
  CC2420_FSCTRL_LOCK_STATUS = 10, 
  CC2420_FSCTRL_FREQ = 0
};

enum cc2420_secctrl0_enums {
  CC2420_SECCTRL0_RXFIFO_PROTECTION = 9, 
  CC2420_SECCTRL0_SEC_CBC_HEAD = 8, 
  CC2420_SECCTRL0_SEC_SAKEYSEL = 7, 
  CC2420_SECCTRL0_SEC_TXKEYSEL = 6, 
  CC2420_SECCTRL0_SEC_RXKEYSEL = 5, 
  CC2420_SECCTRL0_SEC_M = 2, 
  CC2420_SECCTRL0_SEC_MODE = 0
};

enum cc2420_secctrl1_enums {
  CC2420_SECCTRL1_SEC_TXL = 8, 
  CC2420_SECCTRL1_SEC_RXL = 0
};

enum cc2420_battmon_enums {
  CC2420_BATTMON_BATT_OK = 6, 
  CC2420_BATTMON_BATTMON_EN = 5, 
  CC2420_BATTMON_BATTMON_VOLTAGE = 0
};

enum cc2420_iocfg0_enums {
  CC2420_IOCFG0_BCN_ACCEPT = 11, 
  CC2420_IOCFG0_FIFO_POLARITY = 10, 
  CC2420_IOCFG0_FIFOP_POLARITY = 9, 
  CC2420_IOCFG0_SFD_POLARITY = 8, 
  CC2420_IOCFG0_CCA_POLARITY = 7, 
  CC2420_IOCFG0_FIFOP_THR = 0
};

enum cc2420_iocfg1_enums {
  CC2420_IOCFG1_HSSD_SRC = 10, 
  CC2420_IOCFG1_SFDMUX = 5, 
  CC2420_IOCFG1_CCAMUX = 0
};

enum cc2420_manfidl_enums {
  CC2420_MANFIDL_PARTNUM = 12, 
  CC2420_MANFIDL_MANFID = 0
};

enum cc2420_manfidh_enums {
  CC2420_MANFIDH_VERSION = 12, 
  CC2420_MANFIDH_PARTNUM = 0
};

enum cc2420_fsmtc_enums {
  CC2420_FSMTC_TC_RXCHAIN2RX = 13, 
  CC2420_FSMTC_TC_SWITCH2TX = 10, 
  CC2420_FSMTC_TC_PAON2TX = 6, 
  CC2420_FSMTC_TC_TXEND2SWITCH = 3, 
  CC2420_FSMTC_TC_TXEND2PAOFF = 0
};

enum cc2420_sfdmux_enums {
  CC2420_SFDMUX_SFD = 0, 
  CC2420_SFDMUX_XOSC16M_STABLE = 24
};
# 6 "/opt/tinyos-2.x/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4264 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4265 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 72 "/opt/tinyos-2.x/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4266 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4267 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4268 {
  SERIAL_PROTO_ACK = 67, 
  SERIAL_PROTO_PACKET_ACK = 68, 
  SERIAL_PROTO_PACKET_NOACK = 69, 
  SERIAL_PROTO_PACKET_UNKNOWN = 255
};
#line 110
#line 98
typedef struct radio_stats {
  uint8_t version;
  uint8_t flags;
  uint8_t reserved;
  uint8_t platform;
  uint16_t MTU;
  uint16_t radio_crc_fail;
  uint16_t radio_queue_drops;
  uint16_t serial_crc_fail;
  uint16_t serial_tx_fail;
  uint16_t serial_short_packets;
  uint16_t serial_proto_drops;
} radio_stats_t;







#line 112
typedef nx_struct serial_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) serial_header_t;




#line 120
typedef nx_struct serial_packet {
  serial_header_t header;
  nx_uint8_t data[];
} __attribute__((packed)) serial_packet_t;



#line 125
typedef nx_struct serial_metadata {
  nx_uint8_t ack;
} __attribute__((packed)) serial_metadata_t;
# 48 "/opt/tinyos-2.x/tos/platforms/telosa/platform_message.h"
#line 45
typedef union message_header {
  cc2420_header_t cc2420;
  serial_header_t serial;
} message_header_t;



#line 50
typedef union TOSRadioFooter {
  cc2420_footer_t cc2420;
} message_footer_t;



#line 54
typedef union TOSRadioMetadata {
  cc2420_metadata_t cc2420;
} message_metadata_t;
# 19 "/opt/tinyos-2.x/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[48];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 30 "/opt/tinyos-2.x/tos/types/Leds.h"
enum __nesc_unnamed4269 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 28 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.h"
enum __nesc_unnamed4270 {
  MSP430TIMER_CM_NONE = 0, 
  MSP430TIMER_CM_RISING = 1, 
  MSP430TIMER_CM_FALLING = 2, 
  MSP430TIMER_CM_BOTH = 3, 

  MSP430TIMER_STOP_MODE = 0, 
  MSP430TIMER_UP_MODE = 1, 
  MSP430TIMER_CONTINUOUS_MODE = 2, 
  MSP430TIMER_UPDOWN_MODE = 3, 

  MSP430TIMER_TACLK = 0, 
  MSP430TIMER_TBCLK = 0, 
  MSP430TIMER_ACLK = 1, 
  MSP430TIMER_SMCLK = 2, 
  MSP430TIMER_INCLK = 3, 

  MSP430TIMER_CLOCKDIV_1 = 0, 
  MSP430TIMER_CLOCKDIV_2 = 1, 
  MSP430TIMER_CLOCKDIV_4 = 2, 
  MSP430TIMER_CLOCKDIV_8 = 3
};
#line 64
#line 51
typedef struct __nesc_unnamed4271 {

  int ccifg : 1;
  int cov : 1;
  int out : 1;
  int cci : 1;
  int ccie : 1;
  int outmod : 3;
  int cap : 1;
  int clld : 2;
  int scs : 1;
  int ccis : 2;
  int cm : 2;
} msp430_compare_control_t;
#line 76
#line 66
typedef struct __nesc_unnamed4272 {

  int taifg : 1;
  int taie : 1;
  int taclr : 1;
  int _unused0 : 1;
  int mc : 2;
  int id : 2;
  int tassel : 2;
  int _unused1 : 6;
} msp430_timer_a_control_t;
#line 91
#line 78
typedef struct __nesc_unnamed4273 {

  int tbifg : 1;
  int tbie : 1;
  int tbclr : 1;
  int _unused0 : 1;
  int mc : 2;
  int id : 2;
  int tbssel : 2;
  int _unused1 : 1;
  int cntl : 2;
  int tbclgrp : 2;
  int _unused2 : 1;
} msp430_timer_b_control_t;
# 38 "/opt/tinyos-2.x/tos/chips/cc2420/IEEE802154.h"
enum ieee154_fcf_enums {
  IEEE154_FCF_FRAME_TYPE = 0, 
  IEEE154_FCF_SECURITY_ENABLED = 3, 
  IEEE154_FCF_FRAME_PENDING = 4, 
  IEEE154_FCF_ACK_REQ = 5, 
  IEEE154_FCF_INTRAPAN = 6, 
  IEEE154_FCF_DEST_ADDR_MODE = 10, 
  IEEE154_FCF_SRC_ADDR_MODE = 14
};

enum ieee154_fcf_type_enums {
  IEEE154_TYPE_BEACON = 0, 
  IEEE154_TYPE_DATA = 1, 
  IEEE154_TYPE_ACK = 2, 
  IEEE154_TYPE_MAC_CMD = 3
};

enum iee154_fcf_addr_mode_enums {
  IEEE154_ADDR_NONE = 0, 
  IEEE154_ADDR_SHORT = 2, 
  IEEE154_ADDR_EXT = 3
};
# 56 "/opt/tinyos-2.x/tos/chips/msp430/usart/msp430usart.h"
#line 48
typedef enum __nesc_unnamed4274 {

  USART_NONE = 0, 
  USART_UART = 1, 
  USART_UART_TX = 2, 
  USART_UART_RX = 3, 
  USART_SPI = 4, 
  USART_I2C = 5
} msp430_usartmode_t;










#line 58
typedef struct __nesc_unnamed4275 {
  unsigned int swrst : 1;
  unsigned int mm : 1;
  unsigned int sync : 1;
  unsigned int listen : 1;
  unsigned int clen : 1;
  unsigned int spb : 1;
  unsigned int pev : 1;
  unsigned int pena : 1;
} __attribute((packed))  msp430_uctl_t;









#line 69
typedef struct __nesc_unnamed4276 {
  unsigned int txept : 1;
  unsigned int stc : 1;
  unsigned int txwake : 1;
  unsigned int urxse : 1;
  unsigned int ssel : 2;
  unsigned int ckpl : 1;
  unsigned int ckph : 1;
} __attribute((packed))  msp430_utctl_t;










#line 79
typedef struct __nesc_unnamed4277 {
  unsigned int rxerr : 1;
  unsigned int rxwake : 1;
  unsigned int urxwie : 1;
  unsigned int urxeie : 1;
  unsigned int brk : 1;
  unsigned int oe : 1;
  unsigned int pe : 1;
  unsigned int fe : 1;
} __attribute((packed))  msp430_urctl_t;
#line 116
#line 99
typedef struct __nesc_unnamed4278 {
  unsigned int ubr : 16;

  unsigned int  : 1;
  unsigned int mm : 1;
  unsigned int  : 1;
  unsigned int listen : 1;
  unsigned int clen : 1;
  unsigned int  : 3;

  unsigned int  : 1;
  unsigned int stc : 1;
  unsigned int  : 2;
  unsigned int ssel : 2;
  unsigned int ckpl : 1;
  unsigned int ckph : 1;
  unsigned int  : 0;
} msp430_spi_config_t;





#line 118
typedef struct __nesc_unnamed4279 {
  uint16_t ubr;
  uint8_t uctl;
  uint8_t utctl;
} msp430_spi_registers_t;




#line 124
typedef union __nesc_unnamed4280 {
  msp430_spi_config_t spiConfig;
  msp430_spi_registers_t spiRegisters;
} msp430_spi_union_config_t;

msp430_spi_union_config_t msp430_spi_default_config = { 
{ 
.ubr = 0x0002, 
.ssel = 0x02, 
.clen = 1, 
.listen = 0, 
.mm = 1, 
.ckph = 1, 
.ckpl = 0, 
.stc = 1 } };
#line 169
#line 150
typedef enum __nesc_unnamed4281 {

  UBR_32KHZ_1200 = 0x001B, UMCTL_32KHZ_1200 = 0x94, 
  UBR_32KHZ_1800 = 0x0012, UMCTL_32KHZ_1800 = 0x84, 
  UBR_32KHZ_2400 = 0x000D, UMCTL_32KHZ_2400 = 0x6D, 
  UBR_32KHZ_4800 = 0x0006, UMCTL_32KHZ_4800 = 0x77, 
  UBR_32KHZ_9600 = 0x0003, UMCTL_32KHZ_9600 = 0x29, 

  UBR_1MHZ_1200 = 0x0369, UMCTL_1MHZ_1200 = 0x7B, 
  UBR_1MHZ_1800 = 0x0246, UMCTL_1MHZ_1800 = 0x55, 
  UBR_1MHZ_2400 = 0x01B4, UMCTL_1MHZ_2400 = 0xDF, 
  UBR_1MHZ_4800 = 0x00DA, UMCTL_1MHZ_4800 = 0xAA, 
  UBR_1MHZ_9600 = 0x006D, UMCTL_1MHZ_9600 = 0x44, 
  UBR_1MHZ_19200 = 0x0036, UMCTL_1MHZ_19200 = 0xB5, 
  UBR_1MHZ_38400 = 0x001B, UMCTL_1MHZ_38400 = 0x94, 
  UBR_1MHZ_57600 = 0x0012, UMCTL_1MHZ_57600 = 0x84, 
  UBR_1MHZ_76800 = 0x000D, UMCTL_1MHZ_76800 = 0x6D, 
  UBR_1MHZ_115200 = 0x0009, UMCTL_1MHZ_115200 = 0x10, 
  UBR_1MHZ_230400 = 0x0004, UMCTL_1MHZ_230400 = 0x55
} msp430_uart_rate_t;
#line 200
#line 171
typedef struct __nesc_unnamed4282 {
  unsigned int ubr : 16;

  unsigned int umctl : 8;

  unsigned int  : 1;
  unsigned int mm : 1;
  unsigned int  : 1;
  unsigned int listen : 1;
  unsigned int clen : 1;
  unsigned int spb : 1;
  unsigned int pev : 1;
  unsigned int pena : 1;
  unsigned int  : 0;

  unsigned int  : 3;
  unsigned int urxse : 1;
  unsigned int ssel : 2;
  unsigned int ckpl : 1;
  unsigned int  : 1;

  unsigned int  : 2;
  unsigned int urxwie : 1;
  unsigned int urxeie : 1;
  unsigned int  : 4;
  unsigned int  : 0;

  unsigned int utxe : 1;
  unsigned int urxe : 1;
} msp430_uart_config_t;








#line 202
typedef struct __nesc_unnamed4283 {
  uint16_t ubr;
  uint8_t umctl;
  uint8_t uctl;
  uint8_t utctl;
  uint8_t urctl;
  uint8_t ume;
} msp430_uart_registers_t;




#line 211
typedef union __nesc_unnamed4284 {
  msp430_uart_config_t uartConfig;
  msp430_uart_registers_t uartRegisters;
} msp430_uart_union_config_t;
#line 248
#line 240
typedef struct __nesc_unnamed4285 {
  unsigned int i2cstt : 1;
  unsigned int i2cstp : 1;
  unsigned int i2cstb : 1;
  unsigned int i2cctrx : 1;
  unsigned int i2cssel : 2;
  unsigned int i2ccrm : 1;
  unsigned int i2cword : 1;
} __attribute((packed))  msp430_i2ctctl_t;
#line 276
#line 253
typedef struct __nesc_unnamed4286 {
  unsigned int  : 1;
  unsigned int mst : 1;
  unsigned int  : 1;
  unsigned int listen : 1;
  unsigned int xa : 1;
  unsigned int  : 1;
  unsigned int txdmaen : 1;
  unsigned int rxdmaen : 1;

  unsigned int  : 4;
  unsigned int i2cssel : 2;
  unsigned int i2crm : 1;
  unsigned int i2cword : 1;

  unsigned int i2cpsc : 8;

  unsigned int i2csclh : 8;

  unsigned int i2cscll : 8;

  unsigned int i2coa : 10;
  unsigned int  : 6;
} msp430_i2c_config_t;








#line 278
typedef struct __nesc_unnamed4287 {
  uint8_t uctl;
  uint8_t i2ctctl;
  uint8_t i2cpsc;
  uint8_t i2csclh;
  uint8_t i2cscll;
  uint16_t i2coa;
} msp430_i2c_registers_t;




#line 287
typedef union __nesc_unnamed4288 {
  msp430_i2c_config_t i2cConfig;
  msp430_i2c_registers_t i2cRegisters;
} msp430_i2c_union_config_t;
# 33 "/opt/tinyos-2.x/tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
typedef TMilli OscilloscopeC$Timer$precision_tag;
typedef T32khz CC2420ControlP$StartupTimer$precision_tag;
typedef uint32_t CC2420ControlP$StartupTimer$size_type;
typedef uint16_t CC2420ControlP$ReadRssi$val_t;
enum /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Timer*/Msp430Timer32khzC$0$__nesc_unnamed4289 {
  Msp430Timer32khzC$0$ALARM_ID = 0U
};
typedef T32khz /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$frequency_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$frequency_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$Alarm$precision_tag;
typedef uint16_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$Alarm$size_type;
typedef T32khz /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$frequency_tag;
typedef /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$frequency_tag /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$Counter$precision_tag;
typedef uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$Counter$size_type;
typedef T32khz /*Counter32khz32C.Transform*/TransformCounterC$0$to_precision_tag;
typedef uint32_t /*Counter32khz32C.Transform*/TransformCounterC$0$to_size_type;
typedef T32khz /*Counter32khz32C.Transform*/TransformCounterC$0$from_precision_tag;
typedef uint16_t /*Counter32khz32C.Transform*/TransformCounterC$0$from_size_type;
typedef uint16_t /*Counter32khz32C.Transform*/TransformCounterC$0$upper_count_type;
typedef /*Counter32khz32C.Transform*/TransformCounterC$0$from_precision_tag /*Counter32khz32C.Transform*/TransformCounterC$0$CounterFrom$precision_tag;
typedef /*Counter32khz32C.Transform*/TransformCounterC$0$from_size_type /*Counter32khz32C.Transform*/TransformCounterC$0$CounterFrom$size_type;
typedef /*Counter32khz32C.Transform*/TransformCounterC$0$to_precision_tag /*Counter32khz32C.Transform*/TransformCounterC$0$Counter$precision_tag;
typedef /*Counter32khz32C.Transform*/TransformCounterC$0$to_size_type /*Counter32khz32C.Transform*/TransformCounterC$0$Counter$size_type;
typedef T32khz /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$to_precision_tag;
typedef uint32_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$to_size_type;
typedef T32khz /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$from_precision_tag;
typedef uint16_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$from_size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$to_precision_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$Alarm$precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$Alarm$size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$from_precision_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$AlarmFrom$precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$from_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$AlarmFrom$size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$to_precision_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$Counter$precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$Counter$size_type;
enum /*CC2420ControlC.Spi*/CC2420SpiC$0$__nesc_unnamed4290 {
  CC2420SpiC$0$CLIENT_ID = 0U
};
enum /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C$0$__nesc_unnamed4291 {
  Msp430Spi0C$0$CLIENT_ID = 0U
};
enum /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C$0$__nesc_unnamed4292 {
  Msp430Usart0C$0$CLIENT_ID = 0U
};
enum /*CC2420ControlC.SyncSpiC*/CC2420SpiC$1$__nesc_unnamed4293 {
  CC2420SpiC$1$CLIENT_ID = 1U
};
enum /*CC2420ControlC.RssiResource*/CC2420SpiC$2$__nesc_unnamed4294 {
  CC2420SpiC$2$CLIENT_ID = 2U
};
typedef T32khz CC2420TransmitP$BackoffTimer$precision_tag;
typedef uint32_t CC2420TransmitP$BackoffTimer$size_type;
enum /*CC2420TransmitC.Spi*/CC2420SpiC$3$__nesc_unnamed4295 {
  CC2420SpiC$3$CLIENT_ID = 3U
};
enum /*CC2420ReceiveC.Spi*/CC2420SpiC$4$__nesc_unnamed4296 {
  CC2420SpiC$4$CLIENT_ID = 4U
};
typedef uint16_t RandomMlcgP$SeedInit$parameter;
enum /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Timer*/Msp430Timer32khzC$1$__nesc_unnamed4297 {
  Msp430Timer32khzC$1$ALARM_ID = 1U
};
typedef T32khz /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$frequency_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$frequency_tag /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Alarm$precision_tag;
typedef uint16_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Alarm$size_type;
typedef TMilli /*CounterMilli32C.Transform*/TransformCounterC$1$to_precision_tag;
typedef uint32_t /*CounterMilli32C.Transform*/TransformCounterC$1$to_size_type;
typedef T32khz /*CounterMilli32C.Transform*/TransformCounterC$1$from_precision_tag;
typedef uint16_t /*CounterMilli32C.Transform*/TransformCounterC$1$from_size_type;
typedef uint32_t /*CounterMilli32C.Transform*/TransformCounterC$1$upper_count_type;
typedef /*CounterMilli32C.Transform*/TransformCounterC$1$from_precision_tag /*CounterMilli32C.Transform*/TransformCounterC$1$CounterFrom$precision_tag;
typedef /*CounterMilli32C.Transform*/TransformCounterC$1$from_size_type /*CounterMilli32C.Transform*/TransformCounterC$1$CounterFrom$size_type;
typedef /*CounterMilli32C.Transform*/TransformCounterC$1$to_precision_tag /*CounterMilli32C.Transform*/TransformCounterC$1$Counter$precision_tag;
typedef /*CounterMilli32C.Transform*/TransformCounterC$1$to_size_type /*CounterMilli32C.Transform*/TransformCounterC$1$Counter$size_type;
typedef TMilli /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$to_precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$to_size_type;
typedef T32khz /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$from_precision_tag;
typedef uint16_t /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$from_size_type;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$to_precision_tag /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$Alarm$precision_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$Alarm$size_type;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$from_precision_tag /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$AlarmFrom$precision_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$from_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$AlarmFrom$size_type;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$to_precision_tag /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$Counter$precision_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$Counter$size_type;
typedef TMilli /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$precision_tag;
typedef TMilli /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$LocalTime$precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$precision_tag;
typedef uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$size_type;
enum AMQueueP$__nesc_unnamed4298 {
  AMQueueP$NUM_CLIENTS = 2U
};
# 49 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static  void OscilloscopeC$Boot$booted(void);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void OscilloscopeC$AMSend$sendDone(message_t *arg_0x40599eb8, error_t arg_0x40598068);
# 92 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  void OscilloscopeC$RadioControl$startDone(error_t arg_0x40567c78);
#line 117
static  void OscilloscopeC$RadioControl$stopDone(error_t arg_0x40566840);
# 40 "AES/Interfaces/AFWA_AESI.nc"
static  void OscilloscopeC$AFWA_AESI$updateKeyDone(uint8_t *arg_0x405b6ac0);
#line 54
static  void OscilloscopeC$AFWA_AESI$AFWAsendDone(message_t *arg_0x405c4010, uint8_t arg_0x405c4198);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *OscilloscopeC$Receive$receive(message_t *arg_0x40591e08, void *arg_0x40590010, uint8_t arg_0x40590198);
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void OscilloscopeC$Timer$fired(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t PlatformP$Init$init(void);
#line 51
static  error_t MotePlatformC$Init$init(void);
# 35 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockInit.nc"
static  void Msp430ClockP$Msp430ClockInit$defaultInitClocks(void);
#line 32
static  void Msp430ClockP$Msp430ClockInit$default$initTimerB(void);



static  void Msp430ClockP$Msp430ClockInit$defaultInitTimerA(void);
#line 31
static  void Msp430ClockP$Msp430ClockInit$default$initTimerA(void);





static  void Msp430ClockP$Msp430ClockInit$defaultInitTimerB(void);
#line 34
static  void Msp430ClockP$Msp430ClockInit$defaultSetupDcoCalibrate(void);
#line 29
static  void Msp430ClockP$Msp430ClockInit$default$setupDcoCalibrate(void);
static  void Msp430ClockP$Msp430ClockInit$default$initClocks(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t Msp430ClockP$Init$init(void);
# 28 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static   void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$VectorTimerX0$fired(void);
#line 28
static   void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Overflow$fired(void);
#line 28
static   void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$VectorTimerX1$fired(void);
#line 28
static   void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Event$default$fired(
# 40 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x406605e0);
# 28 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static   void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$VectorTimerX0$fired(void);
#line 28
static   void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Overflow$fired(void);
#line 28
static   void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$VectorTimerX1$fired(void);
#line 28
static   void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Event$default$fired(
# 40 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x406605e0);
# 34 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static   uint16_t /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Timer$get(void);
static   bool /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Timer$isOverflowPending(void);
# 33 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static   uint16_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Capture$getEvent(void);
#line 75
static   void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Capture$default$captured(uint16_t arg_0x4063ef20);
# 31 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
static   msp430_compare_control_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Control$getControl(void);
# 28 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static   void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Event$fired(void);
# 34 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static   void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Compare$default$fired(void);
# 37 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static   void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Timer$overflow(void);
# 33 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static   uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Capture$getEvent(void);
#line 75
static   void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Capture$default$captured(uint16_t arg_0x4063ef20);
# 31 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
static   msp430_compare_control_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Control$getControl(void);
# 28 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static   void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Event$fired(void);
# 34 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static   void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Compare$default$fired(void);
# 37 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static   void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Timer$overflow(void);
# 33 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static   uint16_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Capture$getEvent(void);
#line 75
static   void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Capture$default$captured(uint16_t arg_0x4063ef20);
# 31 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
static   msp430_compare_control_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Control$getControl(void);
# 28 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static   void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Event$fired(void);
# 34 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static   void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Compare$default$fired(void);
# 37 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static   void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Timer$overflow(void);
# 33 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static   uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Capture$getEvent(void);
#line 75
static   void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Capture$default$captured(uint16_t arg_0x4063ef20);
# 31 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
static   msp430_compare_control_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Control$getControl(void);







static   void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Control$enableEvents(void);
#line 36
static   void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Control$setControlAsCompare(void);



static   void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Control$disableEvents(void);
#line 33
static   void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Control$clearPendingInterrupt(void);
# 28 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static   void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Event$fired(void);
# 30 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static   void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Compare$setEvent(uint16_t arg_0x40646eb8);

static   void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Compare$setEventFromNow(uint16_t arg_0x40645830);
# 37 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static   void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Timer$overflow(void);
# 33 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static   uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Capture$getEvent(void);
#line 57
static   void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Capture$clearOverflow(void);
# 37 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
static   void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Control$setControlAsCapture(bool arg_0x406389d0);
#line 31
static   msp430_compare_control_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Control$getControl(void);







static   void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Control$enableEvents(void);
static   void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Control$disableEvents(void);
#line 33
static   void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Control$clearPendingInterrupt(void);
# 28 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static   void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Event$fired(void);
# 34 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static   void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Compare$default$fired(void);
# 37 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static   void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Timer$overflow(void);
# 33 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static   uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Capture$getEvent(void);
#line 75
static   void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Capture$default$captured(uint16_t arg_0x4063ef20);
# 31 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
static   msp430_compare_control_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Control$getControl(void);







static   void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Control$enableEvents(void);
#line 36
static   void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Control$setControlAsCompare(void);



static   void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Control$disableEvents(void);
#line 33
static   void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Control$clearPendingInterrupt(void);
# 28 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static   void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Event$fired(void);
# 30 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static   void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Compare$setEvent(uint16_t arg_0x40646eb8);

static   void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Compare$setEventFromNow(uint16_t arg_0x40645830);
# 37 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static   void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Timer$overflow(void);
# 33 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static   uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Capture$getEvent(void);
#line 75
static   void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Capture$default$captured(uint16_t arg_0x4063ef20);
# 31 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
static   msp430_compare_control_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Control$getControl(void);
# 28 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static   void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Event$fired(void);
# 34 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static   void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Compare$default$fired(void);
# 37 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static   void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Timer$overflow(void);
# 33 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static   uint16_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Capture$getEvent(void);
#line 75
static   void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Capture$default$captured(uint16_t arg_0x4063ef20);
# 31 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
static   msp430_compare_control_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Control$getControl(void);
# 28 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static   void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Event$fired(void);
# 34 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static   void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Compare$default$fired(void);
# 37 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static   void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Timer$overflow(void);
# 33 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static   uint16_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Capture$getEvent(void);
#line 75
static   void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Capture$default$captured(uint16_t arg_0x4063ef20);
# 31 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
static   msp430_compare_control_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Control$getControl(void);
# 28 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static   void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Event$fired(void);
# 34 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static   void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Compare$default$fired(void);
# 37 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static   void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Timer$overflow(void);
# 33 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static   uint16_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Capture$getEvent(void);
#line 75
static   void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Capture$default$captured(uint16_t arg_0x4063ef20);
# 31 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
static   msp430_compare_control_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Control$getControl(void);
# 28 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static   void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Event$fired(void);
# 34 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static   void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Compare$default$fired(void);
# 37 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static   void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Timer$overflow(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t SchedulerBasicP$TaskBasic$postTask(
# 45 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x40523dc8);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void SchedulerBasicP$TaskBasic$default$runTask(
# 45 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x40523dc8);
# 46 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
static  void SchedulerBasicP$Scheduler$init(void);
#line 61
static  void SchedulerBasicP$Scheduler$taskLoop(void);
#line 54
static  bool SchedulerBasicP$Scheduler$runNextTask(void);
# 54 "/opt/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
static   mcu_power_t McuSleepC$McuPowerOverride$default$lowestState(void);
# 59 "/opt/tinyos-2.x/tos/interfaces/McuSleep.nc"
static   void McuSleepC$McuSleep$sleep(void);
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  void CC2420ActiveMessageP$SubSend$sendDone(message_t *arg_0x40738598, error_t arg_0x40738720);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *CC2420ActiveMessageP$SubReceive$receive(message_t *arg_0x40591e08, void *arg_0x40590010, uint8_t arg_0x40590198);
# 53 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static  void CC2420ActiveMessageP$CC2420Config$syncDone(error_t arg_0x40746cc0);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t CC2420ActiveMessageP$AMSend$send(
# 39 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x4072c200, 
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t arg_0x4059a920, message_t *arg_0x4059aad0, uint8_t arg_0x4059ac58);
#line 125
static  void *CC2420ActiveMessageP$AMSend$getPayload(
# 39 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x4072c200, 
# 125 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0x40598b18);
#line 112
static  uint8_t CC2420ActiveMessageP$AMSend$maxPayloadLength(
# 39 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x4072c200);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *CC2420ActiveMessageP$Snoop$default$receive(
# 41 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x4072b320, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x40591e08, void *arg_0x40590010, uint8_t arg_0x40590198);
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t CC2420ActiveMessageP$Packet$payloadLength(message_t *arg_0x406ef7c0);
#line 108
static  void *CC2420ActiveMessageP$Packet$getPayload(message_t *arg_0x40704bd8, uint8_t *arg_0x40704d80);
#line 95
static  uint8_t CC2420ActiveMessageP$Packet$maxPayloadLength(void);
#line 83
static  void CC2420ActiveMessageP$Packet$setPayloadLength(message_t *arg_0x406efe30, uint8_t arg_0x40704010);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *CC2420ActiveMessageP$Receive$default$receive(
# 40 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x4072cb30, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x40591e08, void *arg_0x40590010, uint8_t arg_0x40590198);
# 57 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t CC2420ActiveMessageP$AMPacket$address(void);









static  am_addr_t CC2420ActiveMessageP$AMPacket$destination(message_t *arg_0x405af190);
#line 92
static  void CC2420ActiveMessageP$AMPacket$setDestination(message_t *arg_0x405afd38, am_addr_t arg_0x405afec8);
#line 136
static  am_id_t CC2420ActiveMessageP$AMPacket$type(message_t *arg_0x405ac740);
#line 151
static  void CC2420ActiveMessageP$AMPacket$setType(message_t *arg_0x405accc8, am_id_t arg_0x405ace50);
#line 125
static  bool CC2420ActiveMessageP$AMPacket$isForMe(message_t *arg_0x405ac010);
# 83 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  error_t CC2420CsmaP$SplitControl$start(void);
# 95 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static   void CC2420CsmaP$RadioBackoff$default$requestCca(
# 41 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
am_id_t arg_0x4077dba0, 
# 95 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t *arg_0x40713278);
#line 81
static   void CC2420CsmaP$RadioBackoff$default$requestInitialBackoff(
# 41 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
am_id_t arg_0x4077dba0, 
# 81 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t *arg_0x407156f8);






static   void CC2420CsmaP$RadioBackoff$default$requestCongestionBackoff(
# 41 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
am_id_t arg_0x4077dba0, 
# 88 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t *arg_0x40715cb0);
#line 81
static   void CC2420CsmaP$SubBackoff$requestInitialBackoff(message_t *arg_0x407156f8);






static   void CC2420CsmaP$SubBackoff$requestCongestionBackoff(message_t *arg_0x40715cb0);
# 73 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static   void CC2420CsmaP$CC2420Transmit$sendDone(message_t *arg_0x40797ad0, error_t arg_0x40797c58);
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  error_t CC2420CsmaP$Send$send(message_t *arg_0x4073a4b0, uint8_t arg_0x4073a638);
# 76 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
static   void CC2420CsmaP$CC2420Power$startOscillatorDone(void);
#line 56
static   void CC2420CsmaP$CC2420Power$startVRegDone(void);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void CC2420CsmaP$Resource$granted(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void CC2420CsmaP$sendDone_task$runTask(void);
#line 64
static  void CC2420CsmaP$stopDone_task$runTask(void);
#line 64
static  void CC2420CsmaP$startDone_task$runTask(void);
# 82 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static   bool CC2420ControlP$CC2420Config$isAddressRecognitionEnabled(void);
#line 101
static   bool CC2420ControlP$CC2420Config$isAutoAckEnabled(void);
#line 96
static   bool CC2420ControlP$CC2420Config$isHwAutoAckDefault(void);
#line 64
static   uint16_t CC2420ControlP$CC2420Config$getShortAddr(void);
#line 52
static  error_t CC2420ControlP$CC2420Config$sync(void);
#line 70
static   uint16_t CC2420ControlP$CC2420Config$getPanAddr(void);
# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void CC2420ControlP$StartupTimer$fired(void);
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  void CC2420ControlP$ReadRssi$default$readDone(error_t arg_0x407d4a28, CC2420ControlP$ReadRssi$val_t arg_0x407d4bb0);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void CC2420ControlP$syncDone$runTask(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t CC2420ControlP$Init$init(void);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void CC2420ControlP$SpiResource$granted(void);
#line 92
static  void CC2420ControlP$SyncResource$granted(void);
# 71 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
static   error_t CC2420ControlP$CC2420Power$startOscillator(void);
#line 90
static   error_t CC2420ControlP$CC2420Power$rxOn(void);
#line 51
static   error_t CC2420ControlP$CC2420Power$startVReg(void);
#line 63
static   error_t CC2420ControlP$CC2420Power$stopVReg(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void CC2420ControlP$sync$runTask(void);
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t CC2420ControlP$Resource$release(void);
#line 78
static   error_t CC2420ControlP$Resource$request(void);
# 57 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   void CC2420ControlP$InterruptCCA$fired(void);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void CC2420ControlP$RssiResource$granted(void);
# 34 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$Msp430Compare$fired(void);
# 37 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$Msp430Timer$overflow(void);
# 92 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$Alarm$size_type arg_0x407dfac0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$Alarm$size_type arg_0x407dfc50);
#line 62
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$Alarm$stop(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$Init$init(void);
# 37 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static   void /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$Msp430Timer$overflow(void);
# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$Counter$size_type /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$Counter$get(void);






static   bool /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$Counter$isOverflowPending(void);










static   void /*Counter32khz32C.Transform*/TransformCounterC$0$CounterFrom$overflow(void);
#line 53
static   /*Counter32khz32C.Transform*/TransformCounterC$0$Counter$size_type /*Counter32khz32C.Transform*/TransformCounterC$0$Counter$get(void);
# 98 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$Alarm$size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$Alarm$getNow(void);
#line 92
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$Alarm$size_type arg_0x407dfac0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$Alarm$size_type arg_0x407dfc50);
#line 55
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$Alarm$start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$Alarm$size_type arg_0x407e0970);






static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$Alarm$stop(void);




static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$AlarmFrom$fired(void);
# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$Counter$overflow(void);
# 59 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static   bool /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP$0$IO$get(void);
#line 52
static   uint8_t /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP$0$IO$getRaw(void);






static   bool /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP$3$IO$get(void);
#line 52
static   uint8_t /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP$3$IO$getRaw(void);
#line 64
static   void /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP$4$IO$makeInput(void);
#line 59
static   bool /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP$4$IO$get(void);
#line 52
static   uint8_t /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP$4$IO$getRaw(void);
#line 85
static   void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP$17$IO$selectIOFunc(void);
#line 78
static   void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP$17$IO$selectModuleFunc(void);






static   void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP$18$IO$selectIOFunc(void);
#line 78
static   void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP$18$IO$selectModuleFunc(void);






static   void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP$19$IO$selectIOFunc(void);
#line 78
static   void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP$19$IO$selectModuleFunc(void);






static   void /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIOP$20$IO$selectIOFunc(void);
#line 85
static   void /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIOP$21$IO$selectIOFunc(void);
#line 64
static   void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP$25$IO$makeInput(void);
#line 59
static   bool /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP$25$IO$get(void);
#line 85
static   void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP$25$IO$selectIOFunc(void);
#line 52
static   uint8_t /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP$25$IO$getRaw(void);
#line 78
static   void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP$25$IO$selectModuleFunc(void);
#line 71
static   void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP$26$IO$makeOutput(void);
#line 34
static   void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP$26$IO$set(void);




static   void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP$26$IO$clr(void);
#line 71
static   void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP$29$IO$makeOutput(void);
#line 34
static   void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP$29$IO$set(void);




static   void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP$29$IO$clr(void);
#line 71
static   void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP$30$IO$makeOutput(void);
#line 34
static   void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP$30$IO$set(void);




static   void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP$30$IO$clr(void);




static   void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP$36$IO$toggle(void);
#line 71
static   void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP$36$IO$makeOutput(void);
#line 34
static   void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP$36$IO$set(void);









static   void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP$37$IO$toggle(void);
#line 71
static   void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP$37$IO$makeOutput(void);
#line 34
static   void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP$37$IO$set(void);









static   void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP$38$IO$toggle(void);
#line 71
static   void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP$38$IO$makeOutput(void);
#line 34
static   void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP$38$IO$set(void);
# 33 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void /*HplCC2420PinsC.CCAM*/Msp430GpioC$0$GeneralIO$makeInput(void);
#line 32
static   bool /*HplCC2420PinsC.CCAM*/Msp430GpioC$0$GeneralIO$get(void);


static   void /*HplCC2420PinsC.CSNM*/Msp430GpioC$1$GeneralIO$makeOutput(void);
#line 29
static   void /*HplCC2420PinsC.CSNM*/Msp430GpioC$1$GeneralIO$set(void);
static   void /*HplCC2420PinsC.CSNM*/Msp430GpioC$1$GeneralIO$clr(void);

static   bool /*HplCC2420PinsC.FIFOM*/Msp430GpioC$2$GeneralIO$get(void);
#line 32
static   bool /*HplCC2420PinsC.FIFOPM*/Msp430GpioC$3$GeneralIO$get(void);


static   void /*HplCC2420PinsC.RSTNM*/Msp430GpioC$4$GeneralIO$makeOutput(void);
#line 29
static   void /*HplCC2420PinsC.RSTNM*/Msp430GpioC$4$GeneralIO$set(void);
static   void /*HplCC2420PinsC.RSTNM*/Msp430GpioC$4$GeneralIO$clr(void);


static   void /*HplCC2420PinsC.SFDM*/Msp430GpioC$5$GeneralIO$makeInput(void);
#line 32
static   bool /*HplCC2420PinsC.SFDM*/Msp430GpioC$5$GeneralIO$get(void);


static   void /*HplCC2420PinsC.VRENM*/Msp430GpioC$6$GeneralIO$makeOutput(void);
#line 29
static   void /*HplCC2420PinsC.VRENM*/Msp430GpioC$6$GeneralIO$set(void);
static   void /*HplCC2420PinsC.VRENM*/Msp430GpioC$6$GeneralIO$clr(void);
# 75 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static   void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Msp430Capture$captured(uint16_t arg_0x4063ef20);
# 43 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static   error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Capture$captureFallingEdge(void);
#line 55
static   void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Capture$disable(void);
#line 42
static   error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Capture$captureRisingEdge(void);
# 41 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static   void HplMsp430InterruptP$Port14$clear(void);
#line 36
static   void HplMsp430InterruptP$Port14$disable(void);
#line 56
static   void HplMsp430InterruptP$Port14$edge(bool arg_0x40a387f8);
#line 31
static   void HplMsp430InterruptP$Port14$enable(void);









static   void HplMsp430InterruptP$Port26$clear(void);
#line 61
static   void HplMsp430InterruptP$Port26$default$fired(void);
#line 41
static   void HplMsp430InterruptP$Port17$clear(void);
#line 61
static   void HplMsp430InterruptP$Port17$default$fired(void);
#line 41
static   void HplMsp430InterruptP$Port21$clear(void);
#line 61
static   void HplMsp430InterruptP$Port21$default$fired(void);
#line 41
static   void HplMsp430InterruptP$Port12$clear(void);
#line 61
static   void HplMsp430InterruptP$Port12$default$fired(void);
#line 41
static   void HplMsp430InterruptP$Port24$clear(void);
#line 61
static   void HplMsp430InterruptP$Port24$default$fired(void);
#line 41
static   void HplMsp430InterruptP$Port15$clear(void);
#line 61
static   void HplMsp430InterruptP$Port15$default$fired(void);
#line 41
static   void HplMsp430InterruptP$Port27$clear(void);
#line 61
static   void HplMsp430InterruptP$Port27$default$fired(void);
#line 41
static   void HplMsp430InterruptP$Port10$clear(void);
#line 36
static   void HplMsp430InterruptP$Port10$disable(void);
#line 56
static   void HplMsp430InterruptP$Port10$edge(bool arg_0x40a387f8);
#line 31
static   void HplMsp430InterruptP$Port10$enable(void);









static   void HplMsp430InterruptP$Port22$clear(void);
#line 61
static   void HplMsp430InterruptP$Port22$default$fired(void);
#line 41
static   void HplMsp430InterruptP$Port13$clear(void);
#line 61
static   void HplMsp430InterruptP$Port13$default$fired(void);
#line 41
static   void HplMsp430InterruptP$Port25$clear(void);
#line 61
static   void HplMsp430InterruptP$Port25$default$fired(void);
#line 41
static   void HplMsp430InterruptP$Port16$clear(void);
#line 61
static   void HplMsp430InterruptP$Port16$default$fired(void);
#line 41
static   void HplMsp430InterruptP$Port20$clear(void);
#line 61
static   void HplMsp430InterruptP$Port20$default$fired(void);
#line 41
static   void HplMsp430InterruptP$Port11$clear(void);
#line 61
static   void HplMsp430InterruptP$Port11$default$fired(void);
#line 41
static   void HplMsp430InterruptP$Port23$clear(void);
#line 61
static   void HplMsp430InterruptP$Port23$default$fired(void);
#line 61
static   void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$HplInterrupt$fired(void);
# 50 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$Interrupt$disable(void);
#line 42
static   error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$Interrupt$enableRisingEdge(void);
# 61 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$HplInterrupt$fired(void);
# 50 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$Interrupt$disable(void);
#line 43
static   error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$Interrupt$enableFallingEdge(void);
# 71 "/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static   void CC2420SpiP$SpiPacket$sendDone(uint8_t *arg_0x40ae41a8, uint8_t *arg_0x40ae4350, uint16_t arg_0x40ae44e0, 
error_t arg_0x40ae4678);
# 62 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static   error_t CC2420SpiP$Fifo$continueRead(
# 44 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40af1c60, 
# 62 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t *arg_0x40adc4d8, uint8_t arg_0x40adc660);
#line 91
static   void CC2420SpiP$Fifo$default$writeDone(
# 44 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40af1c60, 
# 91 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t *arg_0x40adad60, uint8_t arg_0x40adaee8, error_t arg_0x40ad9088);
#line 82
static   cc2420_status_t CC2420SpiP$Fifo$write(
# 44 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40af1c60, 
# 82 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t *arg_0x40ada5d8, uint8_t arg_0x40ada760);
#line 51
static   cc2420_status_t CC2420SpiP$Fifo$beginRead(
# 44 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40af1c60, 
# 51 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t *arg_0x40addcb0, uint8_t arg_0x40adde38);
#line 71
static   void CC2420SpiP$Fifo$default$readDone(
# 44 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40af1c60, 
# 71 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t *arg_0x40adcc90, uint8_t arg_0x40adce18, error_t arg_0x40ada010);
# 31 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static   void CC2420SpiP$ChipSpiResource$abortRelease(void);







static   error_t CC2420SpiP$ChipSpiResource$attemptRelease(void);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void CC2420SpiP$SpiResource$granted(void);
# 52 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static   cc2420_status_t CC2420SpiP$Ram$read(
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint16_t arg_0x40af05d8, 
# 52 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
uint8_t arg_0x407ff348, uint8_t *arg_0x407ff4f0, uint8_t arg_0x407ff678);










static   cc2420_status_t CC2420SpiP$Ram$write(
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint16_t arg_0x40af05d8, 
# 63 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
uint8_t arg_0x407ffc58, uint8_t *arg_0x407ffe00, uint8_t arg_0x407fe010);
# 47 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static   cc2420_status_t CC2420SpiP$Reg$read(
# 46 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40af0c98, 
# 47 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
uint16_t *arg_0x407fa010);







static   cc2420_status_t CC2420SpiP$Reg$write(
# 46 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40af0c98, 
# 55 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
uint16_t arg_0x407fa580);
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t CC2420SpiP$Resource$release(
# 43 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40af1300);
# 87 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t CC2420SpiP$Resource$immediateRequest(
# 43 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40af1300);
# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t CC2420SpiP$Resource$request(
# 43 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40af1300);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void CC2420SpiP$Resource$default$granted(
# 43 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40af1300);
# 118 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   bool CC2420SpiP$Resource$isOwner(
# 43 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40af1300);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void CC2420SpiP$grant$runTask(void);
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static   cc2420_status_t CC2420SpiP$Strobe$strobe(
# 47 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40aef408);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t StateImplP$Init$init(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/State.nc"
static   void StateImplP$State$toIdle(
# 67 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x40b3f2f8);
# 66 "/opt/tinyos-2.x/tos/interfaces/State.nc"
static   bool StateImplP$State$isState(
# 67 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x40b3f2f8, 
# 66 "/opt/tinyos-2.x/tos/interfaces/State.nc"
uint8_t arg_0x407a24c0);
#line 61
static   bool StateImplP$State$isIdle(
# 67 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x40b3f2f8);
# 45 "/opt/tinyos-2.x/tos/interfaces/State.nc"
static   error_t StateImplP$State$requestState(
# 67 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x40b3f2f8, 
# 45 "/opt/tinyos-2.x/tos/interfaces/State.nc"
uint8_t arg_0x407a3378);





static   void StateImplP$State$forceState(
# 67 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x40b3f2f8, 
# 51 "/opt/tinyos-2.x/tos/interfaces/State.nc"
uint8_t arg_0x407a3900);
# 55 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$ResourceConfigure$unconfigure(
# 41 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x40b8c010);
# 49 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$ResourceConfigure$configure(
# 41 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x40b8c010);
# 59 "/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static   error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$SpiPacket$send(
# 43 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x40b8ca08, 
# 59 "/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
uint8_t *arg_0x40ae5710, uint8_t *arg_0x40ae58b8, uint16_t arg_0x40ae5a48);
#line 71
static   void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$SpiPacket$default$sendDone(
# 43 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x40b8ca08, 
# 71 "/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
uint8_t *arg_0x40ae41a8, uint8_t *arg_0x40ae4350, uint16_t arg_0x40ae44e0, 
error_t arg_0x40ae4678);
# 39 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiConfigure.nc"
static   msp430_spi_union_config_t */*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Msp430SpiConfigure$default$getConfig(
# 46 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x40b8ba78);
# 34 "/opt/tinyos-2.x/tos/interfaces/SpiByte.nc"
static   uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$SpiByte$write(uint8_t arg_0x40ae9de0);
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$default$release(
# 45 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x40b8b118);
# 87 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$default$immediateRequest(
# 45 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x40b8b118);
# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$default$request(
# 45 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x40b8b118);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$granted(
# 45 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x40b8b118);
# 118 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$default$isOwner(
# 45 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x40b8b118);
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$release(
# 40 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x40b8d680);
# 87 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$immediateRequest(
# 40 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x40b8d680);
# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$request(
# 40 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x40b8d680);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$default$granted(
# 40 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x40b8d680);
# 118 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$isOwner(
# 40 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x40b8d680);
# 54 "/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static   void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartInterrupts$rxDone(uint8_t arg_0x40b91cf8);
#line 49
static   void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartInterrupts$txDone(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$signalDone_task$runTask(void);
# 180 "/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc"
static   void HplMsp430Usart0P$Usart$enableRxIntr(void);
#line 197
static   void HplMsp430Usart0P$Usart$clrRxIntr(void);
#line 97
static   void HplMsp430Usart0P$Usart$resetUsart(bool arg_0x40b82d78);
#line 179
static   void HplMsp430Usart0P$Usart$disableIntr(void);
#line 90
static   void HplMsp430Usart0P$Usart$setUmctl(uint8_t arg_0x40b82550);
#line 177
static   void HplMsp430Usart0P$Usart$disableRxIntr(void);









static   bool HplMsp430Usart0P$Usart$isTxIntrPending(void);
#line 207
static   void HplMsp430Usart0P$Usart$clrIntr(void);
#line 80
static   void HplMsp430Usart0P$Usart$setUbr(uint16_t arg_0x40b83ce8);
#line 224
static   void HplMsp430Usart0P$Usart$tx(uint8_t arg_0x40ba10f8);
#line 128
static   void HplMsp430Usart0P$Usart$disableUart(void);
#line 153
static   void HplMsp430Usart0P$Usart$enableSpi(void);
#line 168
static   void HplMsp430Usart0P$Usart$setModeSpi(msp430_spi_union_config_t *arg_0x40ba7e50);
#line 231
static   uint8_t HplMsp430Usart0P$Usart$rx(void);
#line 192
static   bool HplMsp430Usart0P$Usart$isRxIntrPending(void);









static   void HplMsp430Usart0P$Usart$clrTxIntr(void);
#line 158
static   void HplMsp430Usart0P$Usart$disableSpi(void);
# 7 "/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430I2C.nc"
static   void HplMsp430Usart0P$HplI2C$default$clearModeI2C(void);
#line 6
static   bool HplMsp430Usart0P$HplI2C$default$isI2C(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t LedsP$Init$init(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
static   void LedsP$Leds$led0Toggle(void);
#line 72
static   void LedsP$Leds$led1Toggle(void);
#line 89
static   void LedsP$Leds$led2Toggle(void);
# 31 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void /*PlatformLedsC.Led0Impl*/Msp430GpioC$7$GeneralIO$toggle(void);



static   void /*PlatformLedsC.Led0Impl*/Msp430GpioC$7$GeneralIO$makeOutput(void);
#line 29
static   void /*PlatformLedsC.Led0Impl*/Msp430GpioC$7$GeneralIO$set(void);

static   void /*PlatformLedsC.Led1Impl*/Msp430GpioC$8$GeneralIO$toggle(void);



static   void /*PlatformLedsC.Led1Impl*/Msp430GpioC$8$GeneralIO$makeOutput(void);
#line 29
static   void /*PlatformLedsC.Led1Impl*/Msp430GpioC$8$GeneralIO$set(void);

static   void /*PlatformLedsC.Led2Impl*/Msp430GpioC$9$GeneralIO$toggle(void);



static   void /*PlatformLedsC.Led2Impl*/Msp430GpioC$9$GeneralIO$makeOutput(void);
#line 29
static   void /*PlatformLedsC.Led2Impl*/Msp430GpioC$9$GeneralIO$set(void);
# 54 "/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static   void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$Interrupts$default$rxDone(
# 39 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x40c6b2a0, 
# 54 "/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
uint8_t arg_0x40b91cf8);
#line 49
static   void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$Interrupts$default$txDone(
# 39 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x40c6b2a0);
# 39 "/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
static   void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$RawI2CInterrupts$fired(void);
#line 39
static   void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$I2CInterrupts$default$fired(
# 40 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x40c6b990);
# 54 "/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static   void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$RawInterrupts$rxDone(uint8_t arg_0x40b91cf8);
#line 49
static   void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$RawInterrupts$txDone(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$Init$init(void);
# 69 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static   error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(resource_client_id_t arg_0x40c9fe20);
#line 43
static   bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty(void);








static   bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(resource_client_id_t arg_0x40c9f438);







static   resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue(void);
# 43 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static   void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(
# 55 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40cbe4c8);
# 51 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static   void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceRequested$default$immediateRequested(
# 55 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40cbe4c8);
# 55 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(
# 60 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40cbd678);
# 49 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(
# 60 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40cbd678);
# 56 "/opt/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
static   error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$release(void);
#line 73
static   void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$default$requested(void);
#line 46
static   void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$default$granted(void);
#line 81
static   void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$default$immediateRequested(void);
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Resource$release(
# 54 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40cbfb68);
# 87 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Resource$immediateRequest(
# 54 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40cbfb68);
# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Resource$request(
# 54 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40cbfb68);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Resource$default$granted(
# 54 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40cbfb68);
# 118 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Resource$isOwner(
# 54 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40cbfb68);
# 80 "/opt/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
static   bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ArbiterInfo$inUse(void);







static   uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ArbiterInfo$userId(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$grantedTask$runTask(void);
# 44 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static   am_addr_t ActiveMessageAddressC$amAddress(void);
# 48 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static   am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void);




static   am_group_t ActiveMessageAddressC$ActiveMessageAddress$amGroup(void);
# 66 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static   void CC2420TransmitP$RadioBackoff$setCongestionBackoff(uint16_t arg_0x40716be0);
#line 60
static   void CC2420TransmitP$RadioBackoff$setInitialBackoff(uint16_t arg_0x40716660);
# 50 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static   void CC2420TransmitP$CaptureSFD$captured(uint16_t arg_0x40a0e010);
# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void CC2420TransmitP$BackoffTimer$fired(void);
# 61 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static   void CC2420TransmitP$CC2420Receive$receive(uint8_t arg_0x40d3d4b0, message_t *arg_0x40d3d660);
# 51 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static   error_t CC2420TransmitP$Send$send(message_t *arg_0x40798a70, bool arg_0x40798bf8);
# 24 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static   void CC2420TransmitP$ChipSpiResource$releasing(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t CC2420TransmitP$Init$init(void);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void CC2420TransmitP$SpiResource$granted(void);
# 39 "/opt/tinyos-2.x/tos/interfaces/RadioTimeStamping.nc"
static   void CC2420TransmitP$TimeStamp$default$transmittedSFD(uint16_t arg_0x40d2a088, message_t *arg_0x40d2a238);










static   void CC2420TransmitP$TimeStamp$default$receivedSFD(uint16_t arg_0x40d2a768);
# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t CC2420TransmitP$StdControl$start(void);









static  error_t CC2420TransmitP$StdControl$stop(void);
# 91 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static   void CC2420TransmitP$TXFIFO$writeDone(uint8_t *arg_0x40adad60, uint8_t arg_0x40adaee8, error_t arg_0x40ad9088);
#line 71
static   void CC2420TransmitP$TXFIFO$readDone(uint8_t *arg_0x40adcc90, uint8_t arg_0x40adce18, error_t arg_0x40ada010);
# 53 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static  void CC2420ReceiveP$CC2420Config$syncDone(error_t arg_0x40746cc0);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void CC2420ReceiveP$receiveDone_task$runTask(void);
# 53 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static   void CC2420ReceiveP$CC2420Receive$sfd_dropped(void);
#line 47
static   void CC2420ReceiveP$CC2420Receive$sfd(uint16_t arg_0x40d3eb98);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t CC2420ReceiveP$Init$init(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void CC2420ReceiveP$waitDecTask$runTask(void);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void CC2420ReceiveP$SpiResource$granted(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void CC2420ReceiveP$waitTask$runTask(void);
# 91 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static   void CC2420ReceiveP$RXFIFO$writeDone(uint8_t *arg_0x40adad60, uint8_t arg_0x40adaee8, error_t arg_0x40ad9088);
#line 71
static   void CC2420ReceiveP$RXFIFO$readDone(uint8_t *arg_0x40adcc90, uint8_t arg_0x40adce18, error_t arg_0x40ada010);
# 57 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   void CC2420ReceiveP$InterruptFIFOP$fired(void);
# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t CC2420ReceiveP$StdControl$start(void);









static  error_t CC2420ReceiveP$StdControl$stop(void);
# 42 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static   cc2420_header_t *CC2420PacketC$CC2420PacketBody$getHeader(message_t *arg_0x40733b28);




static   cc2420_metadata_t *CC2420PacketC$CC2420PacketBody$getMetadata(message_t *arg_0x407320a8);
# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
static   uint16_t RandomMlcgP$Random$rand16(void);
#line 35
static   uint32_t RandomMlcgP$Random$rand32(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t RandomMlcgP$Init$init(void);
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  void UniqueSendP$SubSend$sendDone(message_t *arg_0x40738598, error_t arg_0x40738720);
#line 64
static  error_t UniqueSendP$Send$send(message_t *arg_0x4073a4b0, uint8_t arg_0x4073a638);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t UniqueSendP$Init$init(void);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *UniqueReceiveP$SubReceive$receive(message_t *arg_0x40591e08, void *arg_0x40590010, uint8_t arg_0x40590198);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t UniqueReceiveP$Init$init(void);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *UniqueReceiveP$DuplicateReceive$default$receive(message_t *arg_0x40591e08, void *arg_0x40590010, uint8_t arg_0x40590198);
# 34 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static   void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430Compare$fired(void);
# 37 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static   void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430Timer$overflow(void);
# 92 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Alarm$startAt(/*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Alarm$size_type arg_0x407dfac0, /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Alarm$size_type arg_0x407dfc50);
#line 62
static   void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Alarm$stop(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Init$init(void);
# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*CounterMilli32C.Transform*/TransformCounterC$1$CounterFrom$overflow(void);
#line 53
static   /*CounterMilli32C.Transform*/TransformCounterC$1$Counter$size_type /*CounterMilli32C.Transform*/TransformCounterC$1$Counter$get(void);
# 98 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$Alarm$size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$Alarm$getNow(void);
#line 92
static   void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$Alarm$startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$Alarm$size_type arg_0x407dfac0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$Alarm$size_type arg_0x407dfc50);
#line 105
static   /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$Alarm$size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$Alarm$getAlarm(void);
#line 62
static   void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$Alarm$stop(void);




static   void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$AlarmFrom$fired(void);
# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$Counter$overflow(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void);
# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void);
# 125 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void);
#line 118
static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t arg_0x405a0120, uint32_t arg_0x405a02b0);
#line 67
static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void);
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void);
#line 72
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(
# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40f081d0);
# 53 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(
# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40f081d0, 
# 53 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t arg_0x40593de8);
# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void);
# 125 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void */*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$getPayload(message_t *arg_0x40598b18);
#line 112
static  uint8_t /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$maxPayloadLength(void);
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  void /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(message_t *arg_0x40738598, error_t arg_0x40738720);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(
# 40 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40f58880, 
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0x40599eb8, error_t arg_0x40598068);
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(
# 38 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40f59e88, 
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t *arg_0x4073a4b0, uint8_t arg_0x4073a638);
#line 114
static  void */*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$getPayload(
# 38 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40f59e88, 
# 114 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t *arg_0x407371f8);
#line 101
static  uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$maxPayloadLength(
# 38 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40f59e88);
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(
# 38 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40f59e88, 
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t *arg_0x40738598, error_t arg_0x40738720);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void);
#line 64
static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask(void);
# 83 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  error_t /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$SplitControl$start(void);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$AMSend$sendDone(message_t *arg_0x40599eb8, error_t arg_0x40598068);
# 48 "AES/Interfaces/AFWA_AESI.nc"
static  error_t /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$AFWA_AESI$AFWAenc(uint8_t *arg_0x405b5c80);
#line 44
static  error_t /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$AFWA_AESI$AFWAsetTransmitMode(uint16_t arg_0x405b5010, uint8_t arg_0x405b5198);








static  error_t /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$AFWA_AESI$AFWAsend(uint16_t arg_0x405b4768, message_t *arg_0x405b4918, uint8_t arg_0x405b4aa0);
#line 34
static  error_t /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$AFWA_AESI$AFWAupdateKey(uint8_t *arg_0x405b6480, uint8_t arg_0x405b6610);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$Init$init(void);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t /*OscilloscopeAppC.AFWA_AESC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$send(am_addr_t arg_0x4059a920, message_t *arg_0x4059aad0, uint8_t arg_0x4059ac58);
#line 125
static  void */*OscilloscopeAppC.AFWA_AESC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$getPayload(message_t *arg_0x40598b18);
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  void /*OscilloscopeAppC.AFWA_AESC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$sendDone(message_t *arg_0x40738598, error_t arg_0x40738720);
# 27 "AES/Interfaces/OmacI.nc"
static  error_t /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$OmacI$truncateTag(uint8_t *arg_0x40f8d1d0, uint8_t arg_0x40f8d360, uint8_t arg_0x40f8d4e8);
#line 26
static  error_t /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$OmacI$cbcmacGenerate(uint8_t *arg_0x40f8f9d8, uint8_t arg_0x40f8fb68, uint8_t arg_0x40f8fcf0);
# 40 "AES/Interfaces/AFWA_AESI.nc"
static  void /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$AFWA_AESI$updateKeyDone(uint8_t *arg_0x405b6ac0);
#line 54
static  void /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$AFWA_AESI$AFWAsendDone(message_t *arg_0x405c4010, uint8_t arg_0x405c4198);
#line 40
static  void /*OscilloscopeAppC.AFWA_AESC.CCMP*/CCMP$0$AFWA_AESI$updateKeyDone(uint8_t *arg_0x405b6ac0);
#line 54
static  void /*OscilloscopeAppC.AFWA_AESC.CCMP*/CCMP$0$AFWA_AESI$AFWAsendDone(message_t *arg_0x405c4010, uint8_t arg_0x405c4198);
#line 40
static  void /*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$AFWA_AESI$updateKeyDone(uint8_t *arg_0x405b6ac0);
#line 54
static  void /*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$AFWA_AESI$AFWAsendDone(message_t *arg_0x405c4010, uint8_t arg_0x405c4198);
# 10 "AES/Interfaces/CtrI.nc"
static  error_t /*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$CtrI$AESctr_encrypt(uint8_t *arg_0x40f89278, uint8_t arg_0x40f89408, uint8_t *arg_0x40f895b0);
# 125 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void *OscilloscopeC$AMSend$getPayload(message_t *arg_0x40598b18);
#line 112
static  uint8_t OscilloscopeC$AMSend$maxPayloadLength(void);
# 83 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  error_t OscilloscopeC$RadioControl$start(void);
# 44 "AES/Interfaces/AFWA_AESI.nc"
static  error_t OscilloscopeC$AFWA_AESI$AFWAsetTransmitMode(uint16_t arg_0x405b5010, uint8_t arg_0x405b5198);








static  error_t OscilloscopeC$AFWA_AESI$AFWAsend(uint16_t arg_0x405b4768, message_t *arg_0x405b4918, uint8_t arg_0x405b4aa0);
#line 34
static  error_t OscilloscopeC$AFWA_AESI$AFWAupdateKey(uint8_t *arg_0x405b6480, uint8_t arg_0x405b6610);
# 56 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
static   void OscilloscopeC$Leds$led0Toggle(void);
#line 72
static   void OscilloscopeC$Leds$led1Toggle(void);
#line 89
static   void OscilloscopeC$Leds$led2Toggle(void);
# 53 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void OscilloscopeC$Timer$startPeriodic(uint32_t arg_0x40593de8);
# 39 "OscilloscopeC.nc"
message_t OscilloscopeC$sendbuf;
bool OscilloscopeC$sendbusy;







uint8_t OscilloscopeC$aes_key0[16] = { 
0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 
0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F };


uint8_t OscilloscopeC$aes_key1[16] = { 
0xde, 0xde, 0xde, 0xde, 0xde, 0xde, 0xde, 0xde, 
0xde, 0xde, 0xde, 0xde, 0xde, 0xde, 0xde, 0xde };


uint8_t OscilloscopeC$aes_plaintext[16] = { 
0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 
0x88, 0x99, 0xAA, 0xBB, 0xCC, 0xDD, 0xEE, 0xFF };
#line 74
uint8_t OscilloscopeC$reading;



static inline void OscilloscopeC$report_problem(void);
static inline void OscilloscopeC$report_sent(void);
static inline void OscilloscopeC$report_received(void);

static inline  void OscilloscopeC$Boot$booted(void);




static inline void OscilloscopeC$startTimer(void);




static inline  void OscilloscopeC$RadioControl$startDone(error_t err);
#line 127
static inline  void OscilloscopeC$RadioControl$stopDone(error_t err);



static inline  message_t *OscilloscopeC$Receive$receive(message_t *msg, void *payload, uint8_t len);







static inline  void OscilloscopeC$Timer$fired(void);
#line 166
static inline  void OscilloscopeC$AFWA_AESI$updateKeyDone(uint8_t *key);


static inline  void OscilloscopeC$AFWA_AESI$AFWAsendDone(message_t *msg, error_t err);







static inline  void OscilloscopeC$AMSend$sendDone(message_t *msg, error_t err);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t PlatformP$MoteInit$init(void);
#line 51
static  error_t PlatformP$MoteClockInit$init(void);
#line 51
static  error_t PlatformP$LedsInit$init(void);
# 10 "/opt/tinyos-2.x/tos/platforms/telosa/PlatformP.nc"
static inline  error_t PlatformP$Init$init(void);
# 6 "/opt/tinyos-2.x/tos/platforms/telosb/MotePlatformC.nc"
static __inline void MotePlatformC$uwait(uint16_t u);




static __inline void MotePlatformC$TOSH_wait(void);




static void MotePlatformC$TOSH_FLASH_M25P_DP_bit(bool set);










static inline void MotePlatformC$TOSH_FLASH_M25P_DP(void);
#line 56
static inline  error_t MotePlatformC$Init$init(void);
# 32 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockInit.nc"
static  void Msp430ClockP$Msp430ClockInit$initTimerB(void);
#line 31
static  void Msp430ClockP$Msp430ClockInit$initTimerA(void);
#line 29
static  void Msp430ClockP$Msp430ClockInit$setupDcoCalibrate(void);
static  void Msp430ClockP$Msp430ClockInit$initClocks(void);
# 39 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockP.nc"
 static volatile uint8_t Msp430ClockP$IE1 __asm ("0x0000");
 static volatile uint16_t Msp430ClockP$TA0CTL __asm ("0x0160");
 static volatile uint16_t Msp430ClockP$TA0IV __asm ("0x012E");
 static volatile uint16_t Msp430ClockP$TBCTL __asm ("0x0180");
 static volatile uint16_t Msp430ClockP$TBIV __asm ("0x011E");

enum Msp430ClockP$__nesc_unnamed4299 {

  Msp430ClockP$ACLK_CALIB_PERIOD = 8, 
  Msp430ClockP$TARGET_DCO_DELTA = 4096 / 32 * Msp430ClockP$ACLK_CALIB_PERIOD
};


static inline  void Msp430ClockP$Msp430ClockInit$defaultSetupDcoCalibrate(void);
#line 64
static inline  void Msp430ClockP$Msp430ClockInit$defaultInitClocks(void);
#line 85
static inline  void Msp430ClockP$Msp430ClockInit$defaultInitTimerA(void);
#line 100
static inline  void Msp430ClockP$Msp430ClockInit$defaultInitTimerB(void);
#line 115
static inline   void Msp430ClockP$Msp430ClockInit$default$setupDcoCalibrate(void);




static inline   void Msp430ClockP$Msp430ClockInit$default$initClocks(void);




static inline   void Msp430ClockP$Msp430ClockInit$default$initTimerA(void);




static inline   void Msp430ClockP$Msp430ClockInit$default$initTimerB(void);





static inline void Msp430ClockP$startTimerA(void);
#line 148
static inline void Msp430ClockP$startTimerB(void);
#line 160
static void Msp430ClockP$set_dco_calib(int calib);





static inline uint16_t Msp430ClockP$test_calib_busywait_delta(int calib);
#line 189
static inline void Msp430ClockP$busyCalibrateDco(void);
#line 214
static inline  error_t Msp430ClockP$Init$init(void);
# 28 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static   void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Event$fired(
# 40 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x406605e0);
# 37 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static   void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Timer$overflow(void);
# 115 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline   void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$VectorTimerX0$fired(void);




static inline   void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$VectorTimerX1$fired(void);





static inline   void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Overflow$fired(void);








static inline    void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Event$default$fired(uint8_t n);
# 28 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static   void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Event$fired(
# 40 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x406605e0);
# 37 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static   void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Timer$overflow(void);
# 51 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
static   uint16_t /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Timer$get(void);
#line 70
static inline   bool /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Timer$isOverflowPending(void);
#line 115
static inline   void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$VectorTimerX0$fired(void);




static inline   void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$VectorTimerX1$fired(void);





static inline   void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Overflow$fired(void);








static    void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Event$default$fired(uint8_t n);
# 75 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static   void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Capture$captured(uint16_t arg_0x4063ef20);
# 34 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static   void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Compare$fired(void);
# 44 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$cc_t;


static inline /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$int2CC(uint16_t x);
#line 74
static inline   /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Control$getControl(void);
#line 139
static inline   uint16_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Capture$getEvent(void);
#line 169
static   void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Event$fired(void);







static inline    void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Capture$default$captured(uint16_t n);



static inline    void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Compare$default$fired(void);



static inline   void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Timer$overflow(void);
# 75 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static   void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Capture$captured(uint16_t arg_0x4063ef20);
# 34 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static   void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Compare$fired(void);
# 44 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$cc_t;


static inline /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$int2CC(uint16_t x);
#line 74
static inline   /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Control$getControl(void);
#line 139
static inline   uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Capture$getEvent(void);
#line 169
static   void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Event$fired(void);







static inline    void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Capture$default$captured(uint16_t n);



static inline    void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Compare$default$fired(void);



static inline   void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Timer$overflow(void);
# 75 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static   void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Capture$captured(uint16_t arg_0x4063ef20);
# 34 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static   void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Compare$fired(void);
# 44 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$cc_t;


static inline /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$cc_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$int2CC(uint16_t x);
#line 74
static inline   /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$cc_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Control$getControl(void);
#line 139
static inline   uint16_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Capture$getEvent(void);
#line 169
static   void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Event$fired(void);







static inline    void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Capture$default$captured(uint16_t n);



static inline    void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Compare$default$fired(void);



static inline   void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Timer$overflow(void);
# 75 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static   void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Capture$captured(uint16_t arg_0x4063ef20);
# 34 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static   void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Compare$fired(void);
# 34 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static   uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Timer$get(void);
# 44 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$cc_t;

static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$CC2int(/*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$cc_t x);
static inline /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$cc_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$int2CC(uint16_t x);

static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$compareControl(void);
#line 74
static inline   /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$cc_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Control$getControl(void);









static inline   void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Control$clearPendingInterrupt(void);









static inline   void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Control$setControlAsCompare(void);
#line 119
static inline   void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Control$enableEvents(void);




static inline   void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Control$disableEvents(void);
#line 139
static inline   uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Capture$getEvent(void);




static inline   void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Compare$setEvent(uint16_t x);









static inline   void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Compare$setEventFromNow(uint16_t x);
#line 169
static inline   void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Event$fired(void);







static inline    void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Capture$default$captured(uint16_t n);







static inline   void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Timer$overflow(void);
# 75 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static   void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Capture$captured(uint16_t arg_0x4063ef20);
# 34 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static   void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Compare$fired(void);
# 44 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$cc_t;

static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$CC2int(/*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$cc_t x);
static inline /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$int2CC(uint16_t x);
#line 61
static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$captureControl(uint8_t l_cm);
#line 74
static inline   /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Control$getControl(void);









static inline   void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Control$clearPendingInterrupt(void);
#line 99
static inline   void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Control$setControlAsCapture(uint8_t cm);
#line 119
static inline   void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Control$enableEvents(void);




static inline   void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Control$disableEvents(void);
#line 139
static inline   uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Capture$getEvent(void);
#line 164
static inline   void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Capture$clearOverflow(void);




static inline   void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Event$fired(void);
#line 181
static inline    void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Compare$default$fired(void);



static inline   void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Timer$overflow(void);
# 75 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static   void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Capture$captured(uint16_t arg_0x4063ef20);
# 34 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static   void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Compare$fired(void);
# 34 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static   uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Timer$get(void);
# 44 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$cc_t;

static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$CC2int(/*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$cc_t x);
static inline /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$int2CC(uint16_t x);

static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$compareControl(void);
#line 74
static inline   /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Control$getControl(void);









static inline   void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Control$clearPendingInterrupt(void);









static inline   void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Control$setControlAsCompare(void);
#line 119
static inline   void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Control$enableEvents(void);




static inline   void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Control$disableEvents(void);
#line 139
static inline   uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Capture$getEvent(void);




static inline   void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Compare$setEvent(uint16_t x);









static inline   void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Compare$setEventFromNow(uint16_t x);
#line 169
static inline   void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Event$fired(void);







static inline    void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Capture$default$captured(uint16_t n);







static inline   void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Timer$overflow(void);
# 75 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static   void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Capture$captured(uint16_t arg_0x4063ef20);
# 34 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static   void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Compare$fired(void);
# 44 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$cc_t;


static inline /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$cc_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$int2CC(uint16_t x);
#line 74
static inline   /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$cc_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Control$getControl(void);
#line 139
static inline   uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Capture$getEvent(void);
#line 169
static inline   void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Event$fired(void);







static inline    void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Capture$default$captured(uint16_t n);



static inline    void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Compare$default$fired(void);



static inline   void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Timer$overflow(void);
# 75 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static   void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Capture$captured(uint16_t arg_0x4063ef20);
# 34 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static   void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Compare$fired(void);
# 44 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$cc_t;


static inline /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$cc_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$int2CC(uint16_t x);
#line 74
static inline   /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$cc_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Control$getControl(void);
#line 139
static inline   uint16_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Capture$getEvent(void);
#line 169
static inline   void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Event$fired(void);







static inline    void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Capture$default$captured(uint16_t n);



static inline    void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Compare$default$fired(void);



static inline   void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Timer$overflow(void);
# 75 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static   void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Capture$captured(uint16_t arg_0x4063ef20);
# 34 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static   void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Compare$fired(void);
# 44 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$cc_t;


static inline /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$cc_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$int2CC(uint16_t x);
#line 74
static inline   /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$cc_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Control$getControl(void);
#line 139
static inline   uint16_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Capture$getEvent(void);
#line 169
static inline   void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Event$fired(void);







static inline    void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Capture$default$captured(uint16_t n);



static inline    void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Compare$default$fired(void);



static inline   void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Timer$overflow(void);
# 75 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static   void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Capture$captured(uint16_t arg_0x4063ef20);
# 34 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static   void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Compare$fired(void);
# 44 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$cc_t;


static inline /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$cc_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$int2CC(uint16_t x);
#line 74
static inline   /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$cc_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Control$getControl(void);
#line 139
static inline   uint16_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Capture$getEvent(void);
#line 169
static inline   void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Event$fired(void);







static inline    void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Capture$default$captured(uint16_t n);



static inline    void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Compare$default$fired(void);



static inline   void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Timer$overflow(void);
# 28 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static   void Msp430TimerCommonP$VectorTimerB1$fired(void);
#line 28
static   void Msp430TimerCommonP$VectorTimerA0$fired(void);
#line 28
static   void Msp430TimerCommonP$VectorTimerA1$fired(void);
#line 28
static   void Msp430TimerCommonP$VectorTimerB0$fired(void);
# 11 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCommonP.nc"
void sig_TIMERA0_VECTOR(void)  __attribute((wakeup)) __attribute((interrupt(12))) ;
void sig_TIMERA1_VECTOR(void)  __attribute((wakeup)) __attribute((interrupt(10))) ;
void sig_TIMERB0_VECTOR(void)  __attribute((wakeup)) __attribute((interrupt(26))) ;
void sig_TIMERB1_VECTOR(void)  __attribute((wakeup)) __attribute((interrupt(24))) ;
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t RealMainP$SoftwareInit$init(void);
# 49 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static  void RealMainP$Boot$booted(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t RealMainP$PlatformInit$init(void);
# 46 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
static  void RealMainP$Scheduler$init(void);
#line 61
static  void RealMainP$Scheduler$taskLoop(void);
#line 54
static  bool RealMainP$Scheduler$runNextTask(void);
# 52 "/opt/tinyos-2.x/tos/system/RealMainP.nc"
int main(void)   ;
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void SchedulerBasicP$TaskBasic$runTask(
# 45 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x40523dc8);
# 59 "/opt/tinyos-2.x/tos/interfaces/McuSleep.nc"
static   void SchedulerBasicP$McuSleep$sleep(void);
# 50 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP$__nesc_unnamed4300 {

  SchedulerBasicP$NUM_TASKS = 15U, 
  SchedulerBasicP$NO_TASK = 255
};

volatile uint8_t SchedulerBasicP$m_head;
volatile uint8_t SchedulerBasicP$m_tail;
volatile uint8_t SchedulerBasicP$m_next[SchedulerBasicP$NUM_TASKS];








static __inline uint8_t SchedulerBasicP$popTask(void);
#line 86
static inline bool SchedulerBasicP$isWaiting(uint8_t id);




static inline bool SchedulerBasicP$pushTask(uint8_t id);
#line 113
static inline  void SchedulerBasicP$Scheduler$init(void);









static  bool SchedulerBasicP$Scheduler$runNextTask(void);
#line 138
static inline  void SchedulerBasicP$Scheduler$taskLoop(void);
#line 159
static   error_t SchedulerBasicP$TaskBasic$postTask(uint8_t id);




static   void SchedulerBasicP$TaskBasic$default$runTask(uint8_t id);
# 54 "/opt/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
static   mcu_power_t McuSleepC$McuPowerOverride$lowestState(void);
# 51 "/opt/tinyos-2.x/tos/chips/msp430/McuSleepC.nc"
bool McuSleepC$dirty = TRUE;
mcu_power_t McuSleepC$powerState = MSP430_POWER_ACTIVE;




const uint16_t McuSleepC$msp430PowerBits[MSP430_POWER_LPM4 + 1] = { 
0, 
0x0010, 
0x0040 + 0x0010, 
0x0080 + 0x0010, 
0x0080 + 0x0040 + 0x0010, 
0x0080 + 0x0040 + 0x0020 + 0x0010 };


static inline mcu_power_t McuSleepC$getPowerState(void);
#line 104
static inline void McuSleepC$computePowerState(void);




static inline   void McuSleepC$McuSleep$sleep(void);
#line 124
static inline    mcu_power_t McuSleepC$McuPowerOverride$default$lowestState(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  error_t CC2420ActiveMessageP$SubSend$send(message_t *arg_0x4073a4b0, uint8_t arg_0x4073a638);
# 70 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static   uint16_t CC2420ActiveMessageP$CC2420Config$getPanAddr(void);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void CC2420ActiveMessageP$AMSend$sendDone(
# 39 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x4072c200, 
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0x40599eb8, error_t arg_0x40598068);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *CC2420ActiveMessageP$Snoop$receive(
# 41 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x4072b320, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x40591e08, void *arg_0x40590010, uint8_t arg_0x40590198);
# 42 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static   cc2420_header_t *CC2420ActiveMessageP$CC2420PacketBody$getHeader(message_t *arg_0x40733b28);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *CC2420ActiveMessageP$Receive$receive(
# 40 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x4072cb30, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x40591e08, void *arg_0x40590010, uint8_t arg_0x40590198);
# 48 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static   am_addr_t CC2420ActiveMessageP$ActiveMessageAddress$amAddress(void);
# 56 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
enum CC2420ActiveMessageP$__nesc_unnamed4301 {
  CC2420ActiveMessageP$CC2420_SIZE = MAC_HEADER_SIZE + MAC_FOOTER_SIZE
};


static  error_t CC2420ActiveMessageP$AMSend$send(am_id_t id, am_addr_t addr, 
message_t *msg, 
uint8_t len);
#line 76
static inline  uint8_t CC2420ActiveMessageP$AMSend$maxPayloadLength(am_id_t id);



static inline  void *CC2420ActiveMessageP$AMSend$getPayload(am_id_t id, message_t *m);
#line 103
static inline  am_addr_t CC2420ActiveMessageP$AMPacket$address(void);



static  am_addr_t CC2420ActiveMessageP$AMPacket$destination(message_t *amsg);









static inline  void CC2420ActiveMessageP$AMPacket$setDestination(message_t *amsg, am_addr_t addr);









static inline  bool CC2420ActiveMessageP$AMPacket$isForMe(message_t *amsg);




static inline  am_id_t CC2420ActiveMessageP$AMPacket$type(message_t *amsg);




static inline  void CC2420ActiveMessageP$AMPacket$setType(message_t *amsg, am_id_t type);
#line 160
static  uint8_t CC2420ActiveMessageP$Packet$payloadLength(message_t *msg);



static inline  void CC2420ActiveMessageP$Packet$setPayloadLength(message_t *msg, uint8_t len);



static inline  uint8_t CC2420ActiveMessageP$Packet$maxPayloadLength(void);



static  void *CC2420ActiveMessageP$Packet$getPayload(message_t *msg, uint8_t *len);








static inline  void CC2420ActiveMessageP$SubSend$sendDone(message_t *msg, error_t result);





static inline  message_t *CC2420ActiveMessageP$SubReceive$receive(message_t *msg, void *payload, uint8_t len);
#line 202
static inline  void CC2420ActiveMessageP$CC2420Config$syncDone(error_t error);



static inline   message_t *CC2420ActiveMessageP$Receive$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len);



static inline   message_t *CC2420ActiveMessageP$Snoop$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len);
# 92 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  void CC2420CsmaP$SplitControl$startDone(error_t arg_0x40567c78);
#line 117
static  void CC2420CsmaP$SplitControl$stopDone(error_t arg_0x40566840);
# 95 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static   void CC2420CsmaP$RadioBackoff$requestCca(
# 41 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
am_id_t arg_0x4077dba0, 
# 95 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t *arg_0x40713278);
#line 81
static   void CC2420CsmaP$RadioBackoff$requestInitialBackoff(
# 41 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
am_id_t arg_0x4077dba0, 
# 81 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t *arg_0x407156f8);






static   void CC2420CsmaP$RadioBackoff$requestCongestionBackoff(
# 41 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
am_id_t arg_0x4077dba0, 
# 88 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t *arg_0x40715cb0);
#line 66
static   void CC2420CsmaP$SubBackoff$setCongestionBackoff(uint16_t arg_0x40716be0);
#line 60
static   void CC2420CsmaP$SubBackoff$setInitialBackoff(uint16_t arg_0x40716660);
# 51 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static   error_t CC2420CsmaP$CC2420Transmit$send(message_t *arg_0x40798a70, bool arg_0x40798bf8);
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  void CC2420CsmaP$Send$sendDone(message_t *arg_0x40738598, error_t arg_0x40738720);
# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
static   uint16_t CC2420CsmaP$Random$rand16(void);
# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t CC2420CsmaP$SubControl$start(void);









static  error_t CC2420CsmaP$SubControl$stop(void);
# 42 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static   cc2420_header_t *CC2420CsmaP$CC2420PacketBody$getHeader(message_t *arg_0x40733b28);




static   cc2420_metadata_t *CC2420CsmaP$CC2420PacketBody$getMetadata(message_t *arg_0x407320a8);
# 71 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
static   error_t CC2420CsmaP$CC2420Power$startOscillator(void);
#line 90
static   error_t CC2420CsmaP$CC2420Power$rxOn(void);
#line 51
static   error_t CC2420CsmaP$CC2420Power$startVReg(void);
#line 63
static   error_t CC2420CsmaP$CC2420Power$stopVReg(void);
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t CC2420CsmaP$Resource$release(void);
#line 78
static   error_t CC2420CsmaP$Resource$request(void);
# 66 "/opt/tinyos-2.x/tos/interfaces/State.nc"
static   bool CC2420CsmaP$SplitControlState$isState(uint8_t arg_0x407a24c0);
#line 45
static   error_t CC2420CsmaP$SplitControlState$requestState(uint8_t arg_0x407a3378);





static   void CC2420CsmaP$SplitControlState$forceState(uint8_t arg_0x407a3900);
# 57 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t CC2420CsmaP$AMPacket$address(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t CC2420CsmaP$sendDone_task$postTask(void);
#line 56
static   error_t CC2420CsmaP$stopDone_task$postTask(void);
#line 56
static   error_t CC2420CsmaP$startDone_task$postTask(void);
# 75 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
enum CC2420CsmaP$__nesc_unnamed4302 {
#line 75
  CC2420CsmaP$startDone_task = 0U
};
#line 75
typedef int CC2420CsmaP$__nesc_sillytask_startDone_task[CC2420CsmaP$startDone_task];

enum CC2420CsmaP$__nesc_unnamed4303 {
#line 77
  CC2420CsmaP$stopDone_task = 1U
};
#line 77
typedef int CC2420CsmaP$__nesc_sillytask_stopDone_task[CC2420CsmaP$stopDone_task];
enum CC2420CsmaP$__nesc_unnamed4304 {
#line 78
  CC2420CsmaP$sendDone_task = 2U
};
#line 78
typedef int CC2420CsmaP$__nesc_sillytask_sendDone_task[CC2420CsmaP$sendDone_task];
#line 59
enum CC2420CsmaP$__nesc_unnamed4305 {
  CC2420CsmaP$S_STOPPED, 
  CC2420CsmaP$S_STARTING, 
  CC2420CsmaP$S_STARTED, 
  CC2420CsmaP$S_STOPPING, 
  CC2420CsmaP$S_TRANSMITTING
};

message_t *CC2420CsmaP$m_msg;

error_t CC2420CsmaP$sendErr = SUCCESS;


 bool CC2420CsmaP$ccaOn;







static inline void CC2420CsmaP$shutdown(void);


static inline  error_t CC2420CsmaP$SplitControl$start(void);
#line 124
static inline  error_t CC2420CsmaP$Send$send(message_t *p_msg, uint8_t len);
#line 194
static inline   void CC2420CsmaP$CC2420Transmit$sendDone(message_t *p_msg, error_t err);




static inline   void CC2420CsmaP$CC2420Power$startVRegDone(void);



static inline  void CC2420CsmaP$Resource$granted(void);



static inline   void CC2420CsmaP$CC2420Power$startOscillatorDone(void);




static inline   void CC2420CsmaP$SubBackoff$requestInitialBackoff(message_t *msg);







static inline   void CC2420CsmaP$SubBackoff$requestCongestionBackoff(message_t *msg);
#line 234
static inline  void CC2420CsmaP$sendDone_task$runTask(void);
#line 247
static inline  void CC2420CsmaP$startDone_task$runTask(void);







static inline  void CC2420CsmaP$stopDone_task$runTask(void);









static inline void CC2420CsmaP$shutdown(void);
#line 279
static inline    void CC2420CsmaP$RadioBackoff$default$requestInitialBackoff(am_id_t amId, 
message_t *msg);


static inline    void CC2420CsmaP$RadioBackoff$default$requestCongestionBackoff(am_id_t amId, 
message_t *msg);


static inline    void CC2420CsmaP$RadioBackoff$default$requestCca(am_id_t amId, 
message_t *msg);
# 53 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static  void CC2420ControlP$CC2420Config$syncDone(error_t arg_0x40746cc0);
# 55 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static   cc2420_status_t CC2420ControlP$RXCTRL1$write(uint16_t arg_0x407fa580);
# 55 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void CC2420ControlP$StartupTimer$start(CC2420ControlP$StartupTimer$size_type arg_0x407e0970);
# 55 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static   cc2420_status_t CC2420ControlP$MDMCTRL0$write(uint16_t arg_0x407fa580);
# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void CC2420ControlP$RSTN$makeOutput(void);
#line 29
static   void CC2420ControlP$RSTN$set(void);
static   void CC2420ControlP$RSTN$clr(void);
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  void CC2420ControlP$ReadRssi$readDone(error_t arg_0x407d4a28, CC2420ControlP$ReadRssi$val_t arg_0x407d4bb0);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t CC2420ControlP$syncDone$postTask(void);
# 47 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static   cc2420_status_t CC2420ControlP$RSSI$read(uint16_t *arg_0x407fa010);







static   cc2420_status_t CC2420ControlP$IOCFG0$write(uint16_t arg_0x407fa580);
# 48 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static   am_addr_t CC2420ControlP$ActiveMessageAddress$amAddress(void);




static   am_group_t CC2420ControlP$ActiveMessageAddress$amGroup(void);
# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void CC2420ControlP$CSN$makeOutput(void);
#line 29
static   void CC2420ControlP$CSN$set(void);
static   void CC2420ControlP$CSN$clr(void);




static   void CC2420ControlP$VREN$makeOutput(void);
#line 29
static   void CC2420ControlP$VREN$set(void);
static   void CC2420ControlP$VREN$clr(void);
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static   cc2420_status_t CC2420ControlP$SXOSCON$strobe(void);
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t CC2420ControlP$SpiResource$release(void);
#line 78
static   error_t CC2420ControlP$SpiResource$request(void);
#line 110
static   error_t CC2420ControlP$SyncResource$release(void);
#line 78
static   error_t CC2420ControlP$SyncResource$request(void);
# 76 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
static   void CC2420ControlP$CC2420Power$startOscillatorDone(void);
#line 56
static   void CC2420ControlP$CC2420Power$startVRegDone(void);
# 55 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static   cc2420_status_t CC2420ControlP$IOCFG1$write(uint16_t arg_0x407fa580);
#line 55
static   cc2420_status_t CC2420ControlP$FSCTRL$write(uint16_t arg_0x407fa580);
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static   cc2420_status_t CC2420ControlP$SRXON$strobe(void);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void CC2420ControlP$Resource$granted(void);
# 63 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static   cc2420_status_t CC2420ControlP$PANID$write(uint8_t arg_0x407ffc58, uint8_t *arg_0x407ffe00, uint8_t arg_0x407fe010);
# 50 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   error_t CC2420ControlP$InterruptCCA$disable(void);
#line 42
static   error_t CC2420ControlP$InterruptCCA$enableRisingEdge(void);
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t CC2420ControlP$RssiResource$release(void);
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static   cc2420_status_t CC2420ControlP$SRFOFF$strobe(void);
# 112 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
enum CC2420ControlP$__nesc_unnamed4306 {
#line 112
  CC2420ControlP$sync = 3U
};
#line 112
typedef int CC2420ControlP$__nesc_sillytask_sync[CC2420ControlP$sync];
enum CC2420ControlP$__nesc_unnamed4307 {
#line 113
  CC2420ControlP$syncDone = 4U
};
#line 113
typedef int CC2420ControlP$__nesc_sillytask_syncDone[CC2420ControlP$syncDone];
#line 86
#line 80
typedef enum CC2420ControlP$__nesc_unnamed4308 {
  CC2420ControlP$S_VREG_STOPPED, 
  CC2420ControlP$S_VREG_STARTING, 
  CC2420ControlP$S_VREG_STARTED, 
  CC2420ControlP$S_XOSC_STARTING, 
  CC2420ControlP$S_XOSC_STARTED
} CC2420ControlP$cc2420_control_state_t;

uint8_t CC2420ControlP$m_channel;

uint8_t CC2420ControlP$m_tx_power;

uint16_t CC2420ControlP$m_pan;

uint16_t CC2420ControlP$m_short_addr;

bool CC2420ControlP$m_sync_busy;

bool CC2420ControlP$autoAckEnabled;

bool CC2420ControlP$hwAutoAckDefault;

bool CC2420ControlP$addressRecognition;

 CC2420ControlP$cc2420_control_state_t CC2420ControlP$m_state = CC2420ControlP$S_VREG_STOPPED;



static void CC2420ControlP$writeFsctrl(void);
static void CC2420ControlP$writeMdmctrl0(void);
static void CC2420ControlP$writeId(void);





static inline  error_t CC2420ControlP$Init$init(void);
#line 156
static inline   error_t CC2420ControlP$Resource$request(void);







static inline   error_t CC2420ControlP$Resource$release(void);







static inline   error_t CC2420ControlP$CC2420Power$startVReg(void);
#line 184
static inline   error_t CC2420ControlP$CC2420Power$stopVReg(void);







static inline   error_t CC2420ControlP$CC2420Power$startOscillator(void);
#line 234
static inline   error_t CC2420ControlP$CC2420Power$rxOn(void);
#line 264
static   uint16_t CC2420ControlP$CC2420Config$getShortAddr(void);







static inline   uint16_t CC2420ControlP$CC2420Config$getPanAddr(void);
#line 285
static inline  error_t CC2420ControlP$CC2420Config$sync(void);
#line 311
static inline   bool CC2420ControlP$CC2420Config$isAddressRecognitionEnabled(void);
#line 331
static inline   bool CC2420ControlP$CC2420Config$isHwAutoAckDefault(void);






static inline   bool CC2420ControlP$CC2420Config$isAutoAckEnabled(void);









static inline  void CC2420ControlP$SyncResource$granted(void);
#line 362
static inline  void CC2420ControlP$SpiResource$granted(void);




static inline  void CC2420ControlP$RssiResource$granted(void);
#line 380
static inline   void CC2420ControlP$StartupTimer$fired(void);









static inline   void CC2420ControlP$InterruptCCA$fired(void);
#line 414
static inline  void CC2420ControlP$sync$runTask(void);



static inline  void CC2420ControlP$syncDone$runTask(void);









static void CC2420ControlP$writeFsctrl(void);
#line 442
static void CC2420ControlP$writeMdmctrl0(void);
#line 461
static void CC2420ControlP$writeId(void);
#line 478
static inline   void CC2420ControlP$ReadRssi$default$readDone(error_t error, uint16_t data);
# 30 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$Msp430Compare$setEvent(uint16_t arg_0x40646eb8);

static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$Msp430Compare$setEventFromNow(uint16_t arg_0x40645830);
# 34 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static   uint16_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$Msp430Timer$get(void);
# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$Alarm$fired(void);
# 39 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$Msp430TimerControl$enableEvents(void);
#line 36
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$Msp430TimerControl$setControlAsCompare(void);



static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$Msp430TimerControl$disableEvents(void);
#line 33
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$Msp430TimerControl$clearPendingInterrupt(void);
# 42 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline  error_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$Init$init(void);
#line 54
static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$Alarm$stop(void);




static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$Msp430Compare$fired(void);










static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$Alarm$startAt(uint16_t t0, uint16_t dt);
#line 103
static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$Msp430Timer$overflow(void);
# 34 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static   uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$Msp430Timer$get(void);
static   bool /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$Msp430Timer$isOverflowPending(void);
# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$Counter$overflow(void);
# 38 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430CounterC.nc"
static inline   uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$Counter$get(void);




static inline   bool /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$Counter$isOverflowPending(void);









static inline   void /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$Msp430Timer$overflow(void);
# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   /*Counter32khz32C.Transform*/TransformCounterC$0$CounterFrom$size_type /*Counter32khz32C.Transform*/TransformCounterC$0$CounterFrom$get(void);






static   bool /*Counter32khz32C.Transform*/TransformCounterC$0$CounterFrom$isOverflowPending(void);










static   void /*Counter32khz32C.Transform*/TransformCounterC$0$Counter$overflow(void);
# 56 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
/*Counter32khz32C.Transform*/TransformCounterC$0$upper_count_type /*Counter32khz32C.Transform*/TransformCounterC$0$m_upper;

enum /*Counter32khz32C.Transform*/TransformCounterC$0$__nesc_unnamed4309 {

  TransformCounterC$0$LOW_SHIFT_RIGHT = 0, 
  TransformCounterC$0$HIGH_SHIFT_LEFT = 8 * sizeof(/*Counter32khz32C.Transform*/TransformCounterC$0$from_size_type ) - /*Counter32khz32C.Transform*/TransformCounterC$0$LOW_SHIFT_RIGHT, 
  TransformCounterC$0$NUM_UPPER_BITS = 8 * sizeof(/*Counter32khz32C.Transform*/TransformCounterC$0$to_size_type ) - 8 * sizeof(/*Counter32khz32C.Transform*/TransformCounterC$0$from_size_type ) + 0, 



  TransformCounterC$0$OVERFLOW_MASK = /*Counter32khz32C.Transform*/TransformCounterC$0$NUM_UPPER_BITS ? ((/*Counter32khz32C.Transform*/TransformCounterC$0$upper_count_type )2 << (/*Counter32khz32C.Transform*/TransformCounterC$0$NUM_UPPER_BITS - 1)) - 1 : 0
};

static   /*Counter32khz32C.Transform*/TransformCounterC$0$to_size_type /*Counter32khz32C.Transform*/TransformCounterC$0$Counter$get(void);
#line 122
static inline   void /*Counter32khz32C.Transform*/TransformCounterC$0$CounterFrom$overflow(void);
# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$Alarm$fired(void);
#line 92
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$AlarmFrom$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$AlarmFrom$size_type arg_0x407dfac0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$AlarmFrom$size_type arg_0x407dfc50);
#line 62
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$AlarmFrom$stop(void);
# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$Counter$size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$Counter$get(void);
# 66 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$m_t0;
/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$m_dt;

enum /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$__nesc_unnamed4310 {

  TransformAlarmC$0$MAX_DELAY_LOG2 = 8 * sizeof(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$from_size_type ) - 1 - 0, 
  TransformAlarmC$0$MAX_DELAY = (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$to_size_type )1 << /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$MAX_DELAY_LOG2
};

static inline   /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$Alarm$getNow(void);
#line 91
static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$Alarm$stop(void);




static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$set_alarm(void);
#line 136
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$to_size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$to_size_type dt);









static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$Alarm$start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$to_size_type dt);




static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$AlarmFrom$fired(void);
#line 166
static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$Counter$overflow(void);
# 48 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline   uint8_t /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP$0$IO$getRaw(void);
static inline   bool /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP$0$IO$get(void);
#line 48
static inline   uint8_t /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP$3$IO$getRaw(void);
static inline   bool /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP$3$IO$get(void);
#line 48
static inline   uint8_t /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP$4$IO$getRaw(void);
static inline   bool /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP$4$IO$get(void);
static inline   void /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP$4$IO$makeInput(void);



static inline   void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP$17$IO$selectModuleFunc(void);

static inline   void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP$17$IO$selectIOFunc(void);
#line 54
static inline   void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP$18$IO$selectModuleFunc(void);

static inline   void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP$18$IO$selectIOFunc(void);
#line 54
static inline   void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP$19$IO$selectModuleFunc(void);

static inline   void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP$19$IO$selectIOFunc(void);
#line 56
static inline   void /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIOP$20$IO$selectIOFunc(void);
#line 56
static inline   void /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIOP$21$IO$selectIOFunc(void);
#line 48
static inline   uint8_t /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP$25$IO$getRaw(void);
static inline   bool /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP$25$IO$get(void);
static inline   void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP$25$IO$makeInput(void);



static inline   void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP$25$IO$selectModuleFunc(void);

static inline   void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP$25$IO$selectIOFunc(void);
#line 45
static   void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP$26$IO$set(void);
static   void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP$26$IO$clr(void);





static inline   void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP$26$IO$makeOutput(void);
#line 45
static inline   void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP$29$IO$set(void);
static inline   void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP$29$IO$clr(void);





static inline   void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP$29$IO$makeOutput(void);
#line 45
static   void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP$30$IO$set(void);
static   void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP$30$IO$clr(void);





static inline   void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP$30$IO$makeOutput(void);
#line 45
static inline   void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP$36$IO$set(void);

static   void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP$36$IO$toggle(void);




static inline   void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP$36$IO$makeOutput(void);
#line 45
static inline   void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP$37$IO$set(void);

static   void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP$37$IO$toggle(void);




static inline   void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP$37$IO$makeOutput(void);
#line 45
static inline   void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP$38$IO$set(void);

static   void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP$38$IO$toggle(void);




static inline   void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP$38$IO$makeOutput(void);
# 64 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static   void /*HplCC2420PinsC.CCAM*/Msp430GpioC$0$HplGeneralIO$makeInput(void);
#line 59
static   bool /*HplCC2420PinsC.CCAM*/Msp430GpioC$0$HplGeneralIO$get(void);
# 40 "/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline   bool /*HplCC2420PinsC.CCAM*/Msp430GpioC$0$GeneralIO$get(void);
static inline   void /*HplCC2420PinsC.CCAM*/Msp430GpioC$0$GeneralIO$makeInput(void);
# 71 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static   void /*HplCC2420PinsC.CSNM*/Msp430GpioC$1$HplGeneralIO$makeOutput(void);
#line 34
static   void /*HplCC2420PinsC.CSNM*/Msp430GpioC$1$HplGeneralIO$set(void);




static   void /*HplCC2420PinsC.CSNM*/Msp430GpioC$1$HplGeneralIO$clr(void);
# 37 "/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline   void /*HplCC2420PinsC.CSNM*/Msp430GpioC$1$GeneralIO$set(void);
static inline   void /*HplCC2420PinsC.CSNM*/Msp430GpioC$1$GeneralIO$clr(void);




static inline   void /*HplCC2420PinsC.CSNM*/Msp430GpioC$1$GeneralIO$makeOutput(void);
# 59 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static   bool /*HplCC2420PinsC.FIFOM*/Msp430GpioC$2$HplGeneralIO$get(void);
# 40 "/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline   bool /*HplCC2420PinsC.FIFOM*/Msp430GpioC$2$GeneralIO$get(void);
# 59 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static   bool /*HplCC2420PinsC.FIFOPM*/Msp430GpioC$3$HplGeneralIO$get(void);
# 40 "/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline   bool /*HplCC2420PinsC.FIFOPM*/Msp430GpioC$3$GeneralIO$get(void);
# 71 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static   void /*HplCC2420PinsC.RSTNM*/Msp430GpioC$4$HplGeneralIO$makeOutput(void);
#line 34
static   void /*HplCC2420PinsC.RSTNM*/Msp430GpioC$4$HplGeneralIO$set(void);




static   void /*HplCC2420PinsC.RSTNM*/Msp430GpioC$4$HplGeneralIO$clr(void);
# 37 "/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline   void /*HplCC2420PinsC.RSTNM*/Msp430GpioC$4$GeneralIO$set(void);
static inline   void /*HplCC2420PinsC.RSTNM*/Msp430GpioC$4$GeneralIO$clr(void);




static inline   void /*HplCC2420PinsC.RSTNM*/Msp430GpioC$4$GeneralIO$makeOutput(void);
# 64 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static   void /*HplCC2420PinsC.SFDM*/Msp430GpioC$5$HplGeneralIO$makeInput(void);
#line 59
static   bool /*HplCC2420PinsC.SFDM*/Msp430GpioC$5$HplGeneralIO$get(void);
# 40 "/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline   bool /*HplCC2420PinsC.SFDM*/Msp430GpioC$5$GeneralIO$get(void);
static inline   void /*HplCC2420PinsC.SFDM*/Msp430GpioC$5$GeneralIO$makeInput(void);
# 71 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static   void /*HplCC2420PinsC.VRENM*/Msp430GpioC$6$HplGeneralIO$makeOutput(void);
#line 34
static   void /*HplCC2420PinsC.VRENM*/Msp430GpioC$6$HplGeneralIO$set(void);




static   void /*HplCC2420PinsC.VRENM*/Msp430GpioC$6$HplGeneralIO$clr(void);
# 37 "/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline   void /*HplCC2420PinsC.VRENM*/Msp430GpioC$6$GeneralIO$set(void);
static inline   void /*HplCC2420PinsC.VRENM*/Msp430GpioC$6$GeneralIO$clr(void);




static inline   void /*HplCC2420PinsC.VRENM*/Msp430GpioC$6$GeneralIO$makeOutput(void);
# 57 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
static   void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Msp430Capture$clearOverflow(void);
# 50 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static   void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Capture$captured(uint16_t arg_0x40a0e010);
# 37 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
static   void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Msp430TimerControl$setControlAsCapture(bool arg_0x406389d0);

static   void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Msp430TimerControl$enableEvents(void);
static   void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Msp430TimerControl$disableEvents(void);
#line 33
static   void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Msp430TimerControl$clearPendingInterrupt(void);
# 85 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static   void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$GeneralIO$selectIOFunc(void);
#line 78
static   void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$GeneralIO$selectModuleFunc(void);
# 38 "/opt/tinyos-2.x/tos/chips/msp430/timer/GpioCaptureC.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$enableCapture(uint8_t mode);
#line 50
static inline   error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Capture$captureRisingEdge(void);



static inline   error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Capture$captureFallingEdge(void);



static inline   void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Capture$disable(void);






static inline   void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Msp430Capture$captured(uint16_t time);
# 61 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static   void HplMsp430InterruptP$Port14$fired(void);
#line 61
static   void HplMsp430InterruptP$Port26$fired(void);
#line 61
static   void HplMsp430InterruptP$Port17$fired(void);
#line 61
static   void HplMsp430InterruptP$Port21$fired(void);
#line 61
static   void HplMsp430InterruptP$Port12$fired(void);
#line 61
static   void HplMsp430InterruptP$Port24$fired(void);
#line 61
static   void HplMsp430InterruptP$Port15$fired(void);
#line 61
static   void HplMsp430InterruptP$Port27$fired(void);
#line 61
static   void HplMsp430InterruptP$Port10$fired(void);
#line 61
static   void HplMsp430InterruptP$Port22$fired(void);
#line 61
static   void HplMsp430InterruptP$Port13$fired(void);
#line 61
static   void HplMsp430InterruptP$Port25$fired(void);
#line 61
static   void HplMsp430InterruptP$Port16$fired(void);
#line 61
static   void HplMsp430InterruptP$Port20$fired(void);
#line 61
static   void HplMsp430InterruptP$Port11$fired(void);
#line 61
static   void HplMsp430InterruptP$Port23$fired(void);
# 53 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
void sig_PORT1_VECTOR(void)  __attribute((wakeup)) __attribute((interrupt(8))) ;
#line 68
static inline    void HplMsp430InterruptP$Port11$default$fired(void);
static inline    void HplMsp430InterruptP$Port12$default$fired(void);
static inline    void HplMsp430InterruptP$Port13$default$fired(void);

static inline    void HplMsp430InterruptP$Port15$default$fired(void);
static inline    void HplMsp430InterruptP$Port16$default$fired(void);
static inline    void HplMsp430InterruptP$Port17$default$fired(void);
static inline   void HplMsp430InterruptP$Port10$enable(void);



static inline   void HplMsp430InterruptP$Port14$enable(void);



static inline   void HplMsp430InterruptP$Port10$disable(void);



static inline   void HplMsp430InterruptP$Port14$disable(void);



static inline   void HplMsp430InterruptP$Port10$clear(void);
static inline   void HplMsp430InterruptP$Port11$clear(void);
static inline   void HplMsp430InterruptP$Port12$clear(void);
static inline   void HplMsp430InterruptP$Port13$clear(void);
static inline   void HplMsp430InterruptP$Port14$clear(void);
static inline   void HplMsp430InterruptP$Port15$clear(void);
static inline   void HplMsp430InterruptP$Port16$clear(void);
static inline   void HplMsp430InterruptP$Port17$clear(void);








static inline   void HplMsp430InterruptP$Port10$edge(bool l2h);
#line 131
static inline   void HplMsp430InterruptP$Port14$edge(bool l2h);
#line 158
void sig_PORT2_VECTOR(void)  __attribute((wakeup)) __attribute((interrupt(2))) ;
#line 171
static inline    void HplMsp430InterruptP$Port20$default$fired(void);
static inline    void HplMsp430InterruptP$Port21$default$fired(void);
static inline    void HplMsp430InterruptP$Port22$default$fired(void);
static inline    void HplMsp430InterruptP$Port23$default$fired(void);
static inline    void HplMsp430InterruptP$Port24$default$fired(void);
static inline    void HplMsp430InterruptP$Port25$default$fired(void);
static inline    void HplMsp430InterruptP$Port26$default$fired(void);
static inline    void HplMsp430InterruptP$Port27$default$fired(void);
#line 195
static inline   void HplMsp430InterruptP$Port20$clear(void);
static inline   void HplMsp430InterruptP$Port21$clear(void);
static inline   void HplMsp430InterruptP$Port22$clear(void);
static inline   void HplMsp430InterruptP$Port23$clear(void);
static inline   void HplMsp430InterruptP$Port24$clear(void);
static inline   void HplMsp430InterruptP$Port25$clear(void);
static inline   void HplMsp430InterruptP$Port26$clear(void);
static inline   void HplMsp430InterruptP$Port27$clear(void);
# 41 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static   void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$HplInterrupt$clear(void);
#line 36
static   void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$HplInterrupt$disable(void);
#line 56
static   void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$HplInterrupt$edge(bool arg_0x40a387f8);
#line 31
static   void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$HplInterrupt$enable(void);
# 57 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$Interrupt$fired(void);
# 41 "/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$enable(bool rising);








static inline   error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$Interrupt$enableRisingEdge(void);







static inline   error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$Interrupt$disable(void);







static inline   void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$HplInterrupt$fired(void);
# 41 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$HplInterrupt$clear(void);
#line 36
static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$HplInterrupt$disable(void);
#line 56
static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$HplInterrupt$edge(bool arg_0x40a387f8);
#line 31
static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$HplInterrupt$enable(void);
# 57 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$Interrupt$fired(void);
# 41 "/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$enable(bool rising);
#line 54
static inline   error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$Interrupt$enableFallingEdge(void);



static inline   error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$Interrupt$disable(void);







static inline   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$HplInterrupt$fired(void);
# 59 "/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static   error_t CC2420SpiP$SpiPacket$send(uint8_t *arg_0x40ae5710, uint8_t *arg_0x40ae58b8, uint16_t arg_0x40ae5a48);
# 91 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static   void CC2420SpiP$Fifo$writeDone(
# 44 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40af1c60, 
# 91 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t *arg_0x40adad60, uint8_t arg_0x40adaee8, error_t arg_0x40ad9088);
#line 71
static   void CC2420SpiP$Fifo$readDone(
# 44 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40af1c60, 
# 71 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t *arg_0x40adcc90, uint8_t arg_0x40adce18, error_t arg_0x40ada010);
# 24 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static   void CC2420SpiP$ChipSpiResource$releasing(void);
# 34 "/opt/tinyos-2.x/tos/interfaces/SpiByte.nc"
static   uint8_t CC2420SpiP$SpiByte$write(uint8_t arg_0x40ae9de0);
# 56 "/opt/tinyos-2.x/tos/interfaces/State.nc"
static   void CC2420SpiP$WorkingState$toIdle(void);




static   bool CC2420SpiP$WorkingState$isIdle(void);
#line 45
static   error_t CC2420SpiP$WorkingState$requestState(uint8_t arg_0x407a3378);
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t CC2420SpiP$SpiResource$release(void);
#line 87
static   error_t CC2420SpiP$SpiResource$immediateRequest(void);
#line 78
static   error_t CC2420SpiP$SpiResource$request(void);
#line 118
static   bool CC2420SpiP$SpiResource$isOwner(void);
#line 92
static  void CC2420SpiP$Resource$granted(
# 43 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40af1300);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t CC2420SpiP$grant$postTask(void);
# 86 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
enum CC2420SpiP$__nesc_unnamed4311 {
#line 86
  CC2420SpiP$grant = 5U
};
#line 86
typedef int CC2420SpiP$__nesc_sillytask_grant[CC2420SpiP$grant];
#line 61
enum CC2420SpiP$__nesc_unnamed4312 {
  CC2420SpiP$RESOURCE_COUNT = 5U, 
  CC2420SpiP$NO_HOLDER = 0xFF
};


enum CC2420SpiP$__nesc_unnamed4313 {
  CC2420SpiP$S_IDLE, 
  CC2420SpiP$S_BUSY
};


 uint16_t CC2420SpiP$m_addr;


uint8_t CC2420SpiP$m_requests = 0;


uint8_t CC2420SpiP$m_holder = CC2420SpiP$NO_HOLDER;


bool CC2420SpiP$release;


static error_t CC2420SpiP$attemptRelease(void);







static inline   void CC2420SpiP$ChipSpiResource$abortRelease(void);






static inline   error_t CC2420SpiP$ChipSpiResource$attemptRelease(void);




static   error_t CC2420SpiP$Resource$request(uint8_t id);
#line 124
static   error_t CC2420SpiP$Resource$immediateRequest(uint8_t id);
#line 147
static   error_t CC2420SpiP$Resource$release(uint8_t id);
#line 176
static   uint8_t CC2420SpiP$Resource$isOwner(uint8_t id);





static inline  void CC2420SpiP$SpiResource$granted(void);




static   cc2420_status_t CC2420SpiP$Fifo$beginRead(uint8_t addr, uint8_t *data, 
uint8_t len);
#line 207
static inline   error_t CC2420SpiP$Fifo$continueRead(uint8_t addr, uint8_t *data, 
uint8_t len);



static inline   cc2420_status_t CC2420SpiP$Fifo$write(uint8_t addr, uint8_t *data, 
uint8_t len);
#line 233
static   cc2420_status_t CC2420SpiP$Ram$read(uint16_t addr, uint8_t offset, 
uint8_t *data, 
uint8_t len);
#line 258
static   cc2420_status_t CC2420SpiP$Ram$write(uint16_t addr, uint8_t offset, 
uint8_t *data, 
uint8_t len);
#line 284
static inline   cc2420_status_t CC2420SpiP$Reg$read(uint8_t addr, uint16_t *data);
#line 302
static   cc2420_status_t CC2420SpiP$Reg$write(uint8_t addr, uint16_t data);
#line 315
static   cc2420_status_t CC2420SpiP$Strobe$strobe(uint8_t addr);










static   void CC2420SpiP$SpiPacket$sendDone(uint8_t *tx_buf, uint8_t *rx_buf, 
uint16_t len, error_t error);








static error_t CC2420SpiP$attemptRelease(void);
#line 355
static inline  void CC2420SpiP$grant$runTask(void);








static inline   void CC2420SpiP$Resource$default$granted(uint8_t id);


static inline    void CC2420SpiP$Fifo$default$readDone(uint8_t addr, uint8_t *rx_buf, uint8_t rx_len, error_t error);


static inline    void CC2420SpiP$Fifo$default$writeDone(uint8_t addr, uint8_t *tx_buf, uint8_t tx_len, error_t error);
# 74 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t StateImplP$state[4U];

enum StateImplP$__nesc_unnamed4314 {
  StateImplP$S_IDLE = 0
};


static inline  error_t StateImplP$Init$init(void);
#line 96
static   error_t StateImplP$State$requestState(uint8_t id, uint8_t reqState);
#line 111
static inline   void StateImplP$State$forceState(uint8_t id, uint8_t reqState);






static inline   void StateImplP$State$toIdle(uint8_t id);







static inline   bool StateImplP$State$isIdle(uint8_t id);






static   bool StateImplP$State$isState(uint8_t id, uint8_t myState);
# 71 "/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static   void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$SpiPacket$sendDone(
# 43 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x40b8ca08, 
# 71 "/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
uint8_t *arg_0x40ae41a8, uint8_t *arg_0x40ae4350, uint16_t arg_0x40ae44e0, 
error_t arg_0x40ae4678);
# 39 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiConfigure.nc"
static   msp430_spi_union_config_t */*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Msp430SpiConfigure$getConfig(
# 46 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x40b8ba78);
# 180 "/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc"
static   void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$enableRxIntr(void);
#line 197
static   void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$clrRxIntr(void);
#line 97
static   void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$resetUsart(bool arg_0x40b82d78);
#line 177
static   void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$disableRxIntr(void);









static   bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$isTxIntrPending(void);
#line 224
static   void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$tx(uint8_t arg_0x40ba10f8);
#line 168
static   void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$setModeSpi(msp430_spi_union_config_t *arg_0x40ba7e50);
#line 231
static   uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$rx(void);
#line 192
static   bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$isRxIntrPending(void);









static   void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$clrTxIntr(void);
#line 158
static   void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$disableSpi(void);
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$release(
# 45 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x40b8b118);
# 87 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$immediateRequest(
# 45 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x40b8b118);
# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$request(
# 45 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x40b8b118);
# 118 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$isOwner(
# 45 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x40b8b118);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$granted(
# 40 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x40b8d680);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$signalDone_task$postTask(void);
# 66 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
enum /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$__nesc_unnamed4315 {
#line 66
  Msp430SpiNoDmaP$0$signalDone_task = 6U
};
#line 66
typedef int /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$__nesc_sillytask_signalDone_task[/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$signalDone_task];
#line 55
enum /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$__nesc_unnamed4316 {
  Msp430SpiNoDmaP$0$SPI_ATOMIC_SIZE = 2
};

 uint8_t */*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_tx_buf;
 uint8_t */*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_rx_buf;
 uint16_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_len;
 uint16_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_pos;
 uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_client;

static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$signalDone(void);


static inline   error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$immediateRequest(uint8_t id);



static inline   error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$request(uint8_t id);



static inline   uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$isOwner(uint8_t id);



static inline   error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$release(uint8_t id);



static inline   void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$ResourceConfigure$configure(uint8_t id);



static inline   void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$ResourceConfigure$unconfigure(uint8_t id);





static inline  void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$granted(uint8_t id);



static   uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$SpiByte$write(uint8_t tx);
#line 110
static inline    error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$default$isOwner(uint8_t id);
static inline    error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$default$request(uint8_t id);
static inline    error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$default$immediateRequest(uint8_t id);
static inline    error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$default$release(uint8_t id);
static inline    msp430_spi_union_config_t */*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Msp430SpiConfigure$default$getConfig(uint8_t id);



static inline   void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$default$granted(uint8_t id);

static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$continueOp(void);
#line 146
static   error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$SpiPacket$send(uint8_t id, uint8_t *tx_buf, 
uint8_t *rx_buf, 
uint16_t len);
#line 168
static inline  void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$signalDone_task$runTask(void);



static inline   void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartInterrupts$rxDone(uint8_t data);
#line 185
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$signalDone(void);




static inline   void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartInterrupts$txDone(void);

static inline    void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$SpiPacket$default$sendDone(uint8_t id, uint8_t *tx_buf, uint8_t *rx_buf, uint16_t len, error_t error);
# 85 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static   void HplMsp430Usart0P$UCLK$selectIOFunc(void);
#line 78
static   void HplMsp430Usart0P$UCLK$selectModuleFunc(void);
# 54 "/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static   void HplMsp430Usart0P$Interrupts$rxDone(uint8_t arg_0x40b91cf8);
#line 49
static   void HplMsp430Usart0P$Interrupts$txDone(void);
# 85 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static   void HplMsp430Usart0P$URXD$selectIOFunc(void);
#line 85
static   void HplMsp430Usart0P$UTXD$selectIOFunc(void);
# 7 "/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430I2C.nc"
static   void HplMsp430Usart0P$HplI2C$clearModeI2C(void);
#line 6
static   bool HplMsp430Usart0P$HplI2C$isI2C(void);
# 85 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static   void HplMsp430Usart0P$SOMI$selectIOFunc(void);
#line 78
static   void HplMsp430Usart0P$SOMI$selectModuleFunc(void);
# 39 "/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
static   void HplMsp430Usart0P$I2CInterrupts$fired(void);
# 85 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static   void HplMsp430Usart0P$SIMO$selectIOFunc(void);
#line 78
static   void HplMsp430Usart0P$SIMO$selectModuleFunc(void);
# 89 "/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
 static volatile uint8_t HplMsp430Usart0P$IE1 __asm ("0x0000");
 static volatile uint8_t HplMsp430Usart0P$ME1 __asm ("0x0004");
 static volatile uint8_t HplMsp430Usart0P$IFG1 __asm ("0x0002");
 static volatile uint8_t HplMsp430Usart0P$U0TCTL __asm ("0x0071");

 static volatile uint8_t HplMsp430Usart0P$U0TXBUF __asm ("0x0077");

void sig_UART0RX_VECTOR(void)  __attribute((wakeup)) __attribute((interrupt(18))) ;




void sig_UART0TX_VECTOR(void)  __attribute((wakeup)) __attribute((interrupt(16))) ;
#line 132
static inline   void HplMsp430Usart0P$Usart$setUbr(uint16_t control);










static inline   void HplMsp430Usart0P$Usart$setUmctl(uint8_t control);







static inline   void HplMsp430Usart0P$Usart$resetUsart(bool reset);
#line 207
static inline   void HplMsp430Usart0P$Usart$disableUart(void);
#line 238
static inline   void HplMsp430Usart0P$Usart$enableSpi(void);








static inline   void HplMsp430Usart0P$Usart$disableSpi(void);








static inline void HplMsp430Usart0P$configSpi(msp430_spi_union_config_t *config);








static   void HplMsp430Usart0P$Usart$setModeSpi(msp430_spi_union_config_t *config);
#line 316
static inline   bool HplMsp430Usart0P$Usart$isTxIntrPending(void);
#line 330
static inline   bool HplMsp430Usart0P$Usart$isRxIntrPending(void);






static inline   void HplMsp430Usart0P$Usart$clrTxIntr(void);



static inline   void HplMsp430Usart0P$Usart$clrRxIntr(void);



static inline   void HplMsp430Usart0P$Usart$clrIntr(void);



static inline   void HplMsp430Usart0P$Usart$disableRxIntr(void);







static inline   void HplMsp430Usart0P$Usart$disableIntr(void);



static inline   void HplMsp430Usart0P$Usart$enableRxIntr(void);
#line 382
static inline   void HplMsp430Usart0P$Usart$tx(uint8_t data);



static   uint8_t HplMsp430Usart0P$Usart$rx(void);






static inline    bool HplMsp430Usart0P$HplI2C$default$isI2C(void);
static inline    void HplMsp430Usart0P$HplI2C$default$clearModeI2C(void);
# 31 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void LedsP$Led0$toggle(void);



static   void LedsP$Led0$makeOutput(void);
#line 29
static   void LedsP$Led0$set(void);

static   void LedsP$Led1$toggle(void);



static   void LedsP$Led1$makeOutput(void);
#line 29
static   void LedsP$Led1$set(void);

static   void LedsP$Led2$toggle(void);



static   void LedsP$Led2$makeOutput(void);
#line 29
static   void LedsP$Led2$set(void);
# 45 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline  error_t LedsP$Init$init(void);
#line 73
static inline   void LedsP$Leds$led0Toggle(void);
#line 88
static inline   void LedsP$Leds$led1Toggle(void);
#line 103
static inline   void LedsP$Leds$led2Toggle(void);
# 44 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static   void /*PlatformLedsC.Led0Impl*/Msp430GpioC$7$HplGeneralIO$toggle(void);
#line 71
static   void /*PlatformLedsC.Led0Impl*/Msp430GpioC$7$HplGeneralIO$makeOutput(void);
#line 34
static   void /*PlatformLedsC.Led0Impl*/Msp430GpioC$7$HplGeneralIO$set(void);
# 37 "/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline   void /*PlatformLedsC.Led0Impl*/Msp430GpioC$7$GeneralIO$set(void);

static inline   void /*PlatformLedsC.Led0Impl*/Msp430GpioC$7$GeneralIO$toggle(void);



static inline   void /*PlatformLedsC.Led0Impl*/Msp430GpioC$7$GeneralIO$makeOutput(void);
# 44 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static   void /*PlatformLedsC.Led1Impl*/Msp430GpioC$8$HplGeneralIO$toggle(void);
#line 71
static   void /*PlatformLedsC.Led1Impl*/Msp430GpioC$8$HplGeneralIO$makeOutput(void);
#line 34
static   void /*PlatformLedsC.Led1Impl*/Msp430GpioC$8$HplGeneralIO$set(void);
# 37 "/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline   void /*PlatformLedsC.Led1Impl*/Msp430GpioC$8$GeneralIO$set(void);

static inline   void /*PlatformLedsC.Led1Impl*/Msp430GpioC$8$GeneralIO$toggle(void);



static inline   void /*PlatformLedsC.Led1Impl*/Msp430GpioC$8$GeneralIO$makeOutput(void);
# 44 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static   void /*PlatformLedsC.Led2Impl*/Msp430GpioC$9$HplGeneralIO$toggle(void);
#line 71
static   void /*PlatformLedsC.Led2Impl*/Msp430GpioC$9$HplGeneralIO$makeOutput(void);
#line 34
static   void /*PlatformLedsC.Led2Impl*/Msp430GpioC$9$HplGeneralIO$set(void);
# 37 "/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline   void /*PlatformLedsC.Led2Impl*/Msp430GpioC$9$GeneralIO$set(void);

static inline   void /*PlatformLedsC.Led2Impl*/Msp430GpioC$9$GeneralIO$toggle(void);



static inline   void /*PlatformLedsC.Led2Impl*/Msp430GpioC$9$GeneralIO$makeOutput(void);
# 80 "/opt/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
static   bool /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$ArbiterInfo$inUse(void);







static   uint8_t /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$ArbiterInfo$userId(void);
# 54 "/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static   void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$Interrupts$rxDone(
# 39 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x40c6b2a0, 
# 54 "/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
uint8_t arg_0x40b91cf8);
#line 49
static   void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$Interrupts$txDone(
# 39 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x40c6b2a0);
# 39 "/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
static   void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$I2CInterrupts$fired(
# 40 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x40c6b990);








static inline   void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$RawInterrupts$txDone(void);




static inline   void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$RawInterrupts$rxDone(uint8_t data);




static inline   void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$RawI2CInterrupts$fired(void);




static inline    void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$Interrupts$default$txDone(uint8_t id);
static inline    void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$Interrupts$default$rxDone(uint8_t id, uint8_t data);
static inline    void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$I2CInterrupts$default$fired(uint8_t id);
# 39 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
enum /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$__nesc_unnamed4317 {
#line 39
  FcfsResourceQueueC$0$NO_ENTRY = 0xFF
};
uint8_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$resQ[1U];
uint8_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$qHead = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$NO_ENTRY;
uint8_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$qTail = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$NO_ENTRY;

static inline  error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$Init$init(void);




static inline   bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty(void);



static inline   bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(resource_client_id_t id);



static inline   resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue(void);
#line 72
static inline   error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(resource_client_id_t id);
# 43 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static   void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceRequested$requested(
# 55 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40cbe4c8);
# 51 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static   void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceRequested$immediateRequested(
# 55 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40cbe4c8);
# 55 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceConfigure$unconfigure(
# 60 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40cbd678);
# 49 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceConfigure$configure(
# 60 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40cbd678);
# 69 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static   error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Queue$enqueue(resource_client_id_t arg_0x40c9fe20);
#line 43
static   bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Queue$isEmpty(void);
#line 60
static   resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Queue$dequeue(void);
# 73 "/opt/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
static   void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$requested(void);
#line 46
static   void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$granted(void);
#line 81
static   void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$immediateRequested(void);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Resource$granted(
# 54 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40cbfb68);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$grantedTask$postTask(void);
# 74 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
enum /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$__nesc_unnamed4318 {
#line 74
  ArbiterP$0$grantedTask = 7U
};
#line 74
typedef int /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$__nesc_sillytask_grantedTask[/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$grantedTask];
#line 67
enum /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$__nesc_unnamed4319 {
#line 67
  ArbiterP$0$RES_CONTROLLED, ArbiterP$0$RES_GRANTING, ArbiterP$0$RES_IMM_GRANTING, ArbiterP$0$RES_BUSY
};
#line 68
enum /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$__nesc_unnamed4320 {
#line 68
  ArbiterP$0$default_owner_id = 1U
};
uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$RES_CONTROLLED;
 uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$default_owner_id;
 uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$reqResId;



static inline   error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Resource$request(uint8_t id);
#line 89
static inline   error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Resource$immediateRequest(uint8_t id);
#line 107
static inline   error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Resource$release(uint8_t id);
#line 126
static   error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$release(void);
#line 146
static inline   bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ArbiterInfo$inUse(void);








static inline   uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ArbiterInfo$userId(void);






static   uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Resource$isOwner(uint8_t id);










static inline  void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$grantedTask$runTask(void);
#line 185
static inline   void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Resource$default$granted(uint8_t id);

static inline    void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(uint8_t id);

static inline    void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceRequested$default$immediateRequested(uint8_t id);

static inline    void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$default$granted(void);

static inline    void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$default$requested(void);


static inline    void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$default$immediateRequested(void);


static inline    void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(uint8_t id);

static inline    void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(uint8_t id);
# 51 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
am_addr_t ActiveMessageAddressC$addr = TOS_AM_ADDRESS;


am_group_t ActiveMessageAddressC$group = TOS_AM_GROUP;






static inline   am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void);
#line 82
static inline   am_group_t ActiveMessageAddressC$ActiveMessageAddress$amGroup(void);
#line 95
static   am_addr_t ActiveMessageAddressC$amAddress(void);
# 81 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static   void CC2420TransmitP$RadioBackoff$requestInitialBackoff(message_t *arg_0x407156f8);






static   void CC2420TransmitP$RadioBackoff$requestCongestionBackoff(message_t *arg_0x40715cb0);
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static   cc2420_status_t CC2420TransmitP$STXONCCA$strobe(void);
# 43 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static   error_t CC2420TransmitP$CaptureSFD$captureFallingEdge(void);
#line 55
static   void CC2420TransmitP$CaptureSFD$disable(void);
#line 42
static   error_t CC2420TransmitP$CaptureSFD$captureRisingEdge(void);
# 55 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void CC2420TransmitP$BackoffTimer$start(CC2420TransmitP$BackoffTimer$size_type arg_0x407e0970);






static   void CC2420TransmitP$BackoffTimer$stop(void);
# 55 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static   cc2420_status_t CC2420TransmitP$TXCTRL$write(uint16_t arg_0x407fa580);
# 53 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static   void CC2420TransmitP$CC2420Receive$sfd_dropped(void);
#line 47
static   void CC2420TransmitP$CC2420Receive$sfd(uint16_t arg_0x40d3eb98);
# 73 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static   void CC2420TransmitP$Send$sendDone(message_t *arg_0x40797ad0, error_t arg_0x40797c58);
# 31 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static   void CC2420TransmitP$ChipSpiResource$abortRelease(void);







static   error_t CC2420TransmitP$ChipSpiResource$attemptRelease(void);
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static   cc2420_status_t CC2420TransmitP$SFLUSHTX$strobe(void);
# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void CC2420TransmitP$CSN$makeOutput(void);
#line 29
static   void CC2420TransmitP$CSN$set(void);
static   void CC2420TransmitP$CSN$clr(void);
# 42 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static   cc2420_header_t *CC2420TransmitP$CC2420PacketBody$getHeader(message_t *arg_0x40733b28);




static   cc2420_metadata_t *CC2420TransmitP$CC2420PacketBody$getMetadata(message_t *arg_0x407320a8);
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t CC2420TransmitP$SpiResource$release(void);
#line 87
static   error_t CC2420TransmitP$SpiResource$immediateRequest(void);
#line 78
static   error_t CC2420TransmitP$SpiResource$request(void);
# 33 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void CC2420TransmitP$CCA$makeInput(void);
#line 32
static   bool CC2420TransmitP$CCA$get(void);
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static   cc2420_status_t CC2420TransmitP$SNOP$strobe(void);
# 33 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void CC2420TransmitP$SFD$makeInput(void);
#line 32
static   bool CC2420TransmitP$SFD$get(void);
# 39 "/opt/tinyos-2.x/tos/interfaces/RadioTimeStamping.nc"
static   void CC2420TransmitP$TimeStamp$transmittedSFD(uint16_t arg_0x40d2a088, message_t *arg_0x40d2a238);










static   void CC2420TransmitP$TimeStamp$receivedSFD(uint16_t arg_0x40d2a768);
# 82 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static   cc2420_status_t CC2420TransmitP$TXFIFO$write(uint8_t *arg_0x40ada5d8, uint8_t arg_0x40ada760);
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static   cc2420_status_t CC2420TransmitP$STXON$strobe(void);
# 90 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
#line 78
typedef enum CC2420TransmitP$__nesc_unnamed4321 {
  CC2420TransmitP$S_STOPPED, 
  CC2420TransmitP$S_STARTED, 
  CC2420TransmitP$S_LOAD, 
  CC2420TransmitP$S_SAMPLE_CCA, 
  CC2420TransmitP$S_BEGIN_TRANSMIT, 
  CC2420TransmitP$S_SFD, 
  CC2420TransmitP$S_EFD, 
  CC2420TransmitP$S_ACK_WAIT, 
  CC2420TransmitP$S_LOAD_CANCEL, 
  CC2420TransmitP$S_TX_CANCEL, 
  CC2420TransmitP$S_CCA_CANCEL
} CC2420TransmitP$cc2420_transmit_state_t;





enum CC2420TransmitP$__nesc_unnamed4322 {
  CC2420TransmitP$CC2420_ABORT_PERIOD = 320
};

 message_t *CC2420TransmitP$m_msg;

 bool CC2420TransmitP$m_cca;

 uint8_t CC2420TransmitP$m_tx_power;

CC2420TransmitP$cc2420_transmit_state_t CC2420TransmitP$m_state = CC2420TransmitP$S_STOPPED;

bool CC2420TransmitP$m_receiving = FALSE;

uint16_t CC2420TransmitP$m_prev_time;


bool CC2420TransmitP$sfdHigh;


bool CC2420TransmitP$abortSpiRelease;


 int8_t CC2420TransmitP$totalCcaChecks;


 uint16_t CC2420TransmitP$myInitialBackoff;


 uint16_t CC2420TransmitP$myCongestionBackoff;



static inline error_t CC2420TransmitP$send(message_t *p_msg, bool cca);

static void CC2420TransmitP$loadTXFIFO(void);
static void CC2420TransmitP$attemptSend(void);
static void CC2420TransmitP$congestionBackoff(void);
static error_t CC2420TransmitP$acquireSpiResource(void);
static inline error_t CC2420TransmitP$releaseSpiResource(void);
static void CC2420TransmitP$signalDone(error_t err);



static inline  error_t CC2420TransmitP$Init$init(void);







static inline  error_t CC2420TransmitP$StdControl$start(void);










static inline  error_t CC2420TransmitP$StdControl$stop(void);
#line 172
static inline   error_t CC2420TransmitP$Send$send(message_t *p_msg, bool useCca);
#line 229
static inline   void CC2420TransmitP$RadioBackoff$setInitialBackoff(uint16_t backoffTime);







static inline   void CC2420TransmitP$RadioBackoff$setCongestionBackoff(uint16_t backoffTime);
#line 259
static inline   void CC2420TransmitP$CaptureSFD$captured(uint16_t time);
#line 328
static inline   void CC2420TransmitP$ChipSpiResource$releasing(void);
#line 340
static inline   void CC2420TransmitP$CC2420Receive$receive(uint8_t type, message_t *ack_msg);
#line 368
static inline  void CC2420TransmitP$SpiResource$granted(void);
#line 407
static inline   void CC2420TransmitP$TXFIFO$writeDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error);
#line 446
static inline   void CC2420TransmitP$TXFIFO$readDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error);










static inline   void CC2420TransmitP$BackoffTimer$fired(void);
#line 511
static inline error_t CC2420TransmitP$send(message_t *p_msg, bool cca);
#line 583
static void CC2420TransmitP$attemptSend(void);
#line 624
static void CC2420TransmitP$congestionBackoff(void);






static error_t CC2420TransmitP$acquireSpiResource(void);







static inline error_t CC2420TransmitP$releaseSpiResource(void);
#line 661
static void CC2420TransmitP$loadTXFIFO(void);
#line 683
static void CC2420TransmitP$signalDone(error_t err);
#line 695
static inline    void CC2420TransmitP$TimeStamp$default$transmittedSFD(uint16_t time, message_t *p_msg);


static inline    void CC2420TransmitP$TimeStamp$default$receivedSFD(uint16_t time);
# 32 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   bool CC2420ReceiveP$FIFO$get(void);
# 82 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static   bool CC2420ReceiveP$CC2420Config$isAddressRecognitionEnabled(void);
#line 101
static   bool CC2420ReceiveP$CC2420Config$isAutoAckEnabled(void);
#line 96
static   bool CC2420ReceiveP$CC2420Config$isHwAutoAckDefault(void);
#line 64
static   uint16_t CC2420ReceiveP$CC2420Config$getShortAddr(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t CC2420ReceiveP$receiveDone_task$postTask(void);
# 55 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static   cc2420_status_t CC2420ReceiveP$SECCTRL1$write(uint16_t arg_0x407fa580);
# 32 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   bool CC2420ReceiveP$FIFOP$get(void);
# 63 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static   cc2420_status_t CC2420ReceiveP$RXNONCE$write(uint8_t arg_0x407ffc58, uint8_t *arg_0x407ffe00, uint8_t arg_0x407fe010);
# 61 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static   void CC2420ReceiveP$CC2420Receive$receive(uint8_t arg_0x40d3d4b0, message_t *arg_0x40d3d660);
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static   cc2420_status_t CC2420ReceiveP$SACK$strobe(void);
# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void CC2420ReceiveP$CSN$set(void);
static   void CC2420ReceiveP$CSN$clr(void);
# 52 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static   cc2420_status_t CC2420ReceiveP$RXFIFO_RAM$read(uint8_t arg_0x407ff348, uint8_t *arg_0x407ff4f0, uint8_t arg_0x407ff678);
# 42 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static   cc2420_header_t *CC2420ReceiveP$CC2420PacketBody$getHeader(message_t *arg_0x40733b28);




static   cc2420_metadata_t *CC2420ReceiveP$CC2420PacketBody$getMetadata(message_t *arg_0x407320a8);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t CC2420ReceiveP$waitDecTask$postTask(void);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *CC2420ReceiveP$Receive$receive(message_t *arg_0x40591e08, void *arg_0x40590010, uint8_t arg_0x40590198);
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t CC2420ReceiveP$SpiResource$release(void);
#line 87
static   error_t CC2420ReceiveP$SpiResource$immediateRequest(void);
#line 78
static   error_t CC2420ReceiveP$SpiResource$request(void);
#line 118
static   bool CC2420ReceiveP$SpiResource$isOwner(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t CC2420ReceiveP$waitTask$postTask(void);
# 62 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static   error_t CC2420ReceiveP$RXFIFO$continueRead(uint8_t *arg_0x40adc4d8, uint8_t arg_0x40adc660);
#line 51
static   cc2420_status_t CC2420ReceiveP$RXFIFO$beginRead(uint8_t *arg_0x40addcb0, uint8_t arg_0x40adde38);
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static   cc2420_status_t CC2420ReceiveP$SNOP$strobe(void);
# 55 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static   cc2420_status_t CC2420ReceiveP$SECCTRL0$write(uint16_t arg_0x407fa580);
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static   cc2420_status_t CC2420ReceiveP$SRXDEC$strobe(void);
# 50 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   error_t CC2420ReceiveP$InterruptFIFOP$disable(void);
#line 43
static   error_t CC2420ReceiveP$InterruptFIFOP$enableFallingEdge(void);
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static   cc2420_status_t CC2420ReceiveP$SFLUSHRX$strobe(void);
# 148 "/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
enum CC2420ReceiveP$__nesc_unnamed4323 {
#line 148
  CC2420ReceiveP$receiveDone_task = 8U
};
#line 148
typedef int CC2420ReceiveP$__nesc_sillytask_receiveDone_task[CC2420ReceiveP$receiveDone_task];
#line 241
enum CC2420ReceiveP$__nesc_unnamed4324 {
#line 241
  CC2420ReceiveP$waitTask = 9U
};
#line 241
typedef int CC2420ReceiveP$__nesc_sillytask_waitTask[CC2420ReceiveP$waitTask];
#line 263
enum CC2420ReceiveP$__nesc_unnamed4325 {
#line 263
  CC2420ReceiveP$waitDecTask = 10U
};
#line 263
typedef int CC2420ReceiveP$__nesc_sillytask_waitDecTask[CC2420ReceiveP$waitDecTask];
#line 88
#line 80
typedef enum CC2420ReceiveP$__nesc_unnamed4326 {
  CC2420ReceiveP$S_STOPPED, 
  CC2420ReceiveP$S_STARTED, 
  CC2420ReceiveP$S_RX_LENGTH, 
  CC2420ReceiveP$S_RX_DEC, 
  CC2420ReceiveP$S_RX_DEC_WAIT, 
  CC2420ReceiveP$S_RX_FCF, 
  CC2420ReceiveP$S_RX_PAYLOAD
} CC2420ReceiveP$cc2420_receive_state_t;

enum CC2420ReceiveP$__nesc_unnamed4327 {
  CC2420ReceiveP$RXFIFO_SIZE = 128, 
  CC2420ReceiveP$TIMESTAMP_QUEUE_SIZE = 8, 
  CC2420ReceiveP$SACK_HEADER_LENGTH = 7
};

uint16_t CC2420ReceiveP$m_timestamp_queue[CC2420ReceiveP$TIMESTAMP_QUEUE_SIZE];

uint8_t CC2420ReceiveP$m_timestamp_head;

uint8_t CC2420ReceiveP$m_timestamp_size;




 uint8_t CC2420ReceiveP$m_missed_packets;





bool CC2420ReceiveP$receivingPacket;


 uint8_t CC2420ReceiveP$rxFrameLength;

 uint8_t CC2420ReceiveP$m_bytes_left;

 message_t *CC2420ReceiveP$m_p_rx_buf;

message_t CC2420ReceiveP$m_rx_buf;
 uint16_t CC2420ReceiveP$setMode0;
#line 121
 uint16_t CC2420ReceiveP$setMode1;
 uint16_t CC2420ReceiveP$rx_ctrl0;



 CC2420ReceiveP$cc2420_receive_state_t CC2420ReceiveP$m_state;
 uint8_t CC2420ReceiveP$packetLength = 0;
 uint8_t CC2420ReceiveP$pos = 0;
uint8_t CC2420ReceiveP$nonceValue[16] = { 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01 };
 uint8_t CC2420ReceiveP$securityOn = 0;
uint8_t CC2420ReceiveP$flush_flag = 0;

static void CC2420ReceiveP$beginDec(void);
static void CC2420ReceiveP$dec(void);
message_t CC2420ReceiveP$msg;






static void CC2420ReceiveP$reset_state(void);
static void CC2420ReceiveP$beginReceive(void);
static void CC2420ReceiveP$receive(void);
static void CC2420ReceiveP$waitForNextPacket(void);
static void CC2420ReceiveP$flush(void);




static inline  error_t CC2420ReceiveP$Init$init(void);





static inline  error_t CC2420ReceiveP$StdControl$start(void);










static inline  error_t CC2420ReceiveP$StdControl$stop(void);
#line 197
static inline   void CC2420ReceiveP$CC2420Receive$sfd(uint16_t time);








static inline   void CC2420ReceiveP$CC2420Receive$sfd_dropped(void);
#line 223
static inline   void CC2420ReceiveP$InterruptFIFOP$fired(void);
#line 241
static inline  void CC2420ReceiveP$waitTask$runTask(void);









static void CC2420ReceiveP$beginDec(void);









 uint8_t CC2420ReceiveP$decLoopCount = 0;

static inline  void CC2420ReceiveP$waitDecTask$runTask(void);
#line 315
static void CC2420ReceiveP$dec(void);
#line 470
static inline  void CC2420ReceiveP$SpiResource$granted(void);
#line 489
static inline   void CC2420ReceiveP$RXFIFO$readDone(uint8_t *rx_buf, uint8_t rx_len, 
error_t error);
#line 617
static inline   void CC2420ReceiveP$RXFIFO$writeDone(uint8_t *tx_buf, uint8_t tx_len, error_t error);







static inline  void CC2420ReceiveP$receiveDone_task$runTask(void);
#line 649
static inline  void CC2420ReceiveP$CC2420Config$syncDone(error_t error);






static void CC2420ReceiveP$beginReceive(void);
#line 674
static void CC2420ReceiveP$flush(void);
#line 699
static void CC2420ReceiveP$receive(void);









static void CC2420ReceiveP$waitForNextPacket(void);
#line 743
static void CC2420ReceiveP$reset_state(void);
# 89 "/opt/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketC.nc"
static inline   cc2420_header_t *CC2420PacketC$CC2420PacketBody$getHeader(message_t *msg);



static inline   cc2420_metadata_t *CC2420PacketC$CC2420PacketBody$getMetadata(message_t *msg);
# 41 "/opt/tinyos-2.x/tos/system/RandomMlcgP.nc"
uint32_t RandomMlcgP$seed;


static inline  error_t RandomMlcgP$Init$init(void);
#line 58
static   uint32_t RandomMlcgP$Random$rand32(void);
#line 78
static inline   uint16_t RandomMlcgP$Random$rand16(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  error_t UniqueSendP$SubSend$send(message_t *arg_0x4073a4b0, uint8_t arg_0x4073a638);
#line 89
static  void UniqueSendP$Send$sendDone(message_t *arg_0x40738598, error_t arg_0x40738720);
# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
static   uint16_t UniqueSendP$Random$rand16(void);
# 42 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static   cc2420_header_t *UniqueSendP$CC2420PacketBody$getHeader(message_t *arg_0x40733b28);
# 56 "/opt/tinyos-2.x/tos/interfaces/State.nc"
static   void UniqueSendP$State$toIdle(void);
#line 45
static   error_t UniqueSendP$State$requestState(uint8_t arg_0x407a3378);
# 54 "/opt/tinyos-2.x/tos/chips/cc2420/unique/UniqueSendP.nc"
uint8_t UniqueSendP$localSendId;

enum UniqueSendP$__nesc_unnamed4328 {
  UniqueSendP$S_IDLE, 
  UniqueSendP$S_SENDING
};


static inline  error_t UniqueSendP$Init$init(void);
#line 75
static inline  error_t UniqueSendP$Send$send(message_t *msg, uint8_t len);
#line 104
static inline  void UniqueSendP$SubSend$sendDone(message_t *msg, error_t error);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *UniqueReceiveP$Receive$receive(message_t *arg_0x40591e08, void *arg_0x40590010, uint8_t arg_0x40590198);
# 42 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static   cc2420_header_t *UniqueReceiveP$CC2420PacketBody$getHeader(message_t *arg_0x40733b28);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *UniqueReceiveP$DuplicateReceive$receive(message_t *arg_0x40591e08, void *arg_0x40590010, uint8_t arg_0x40590198);
# 59 "/opt/tinyos-2.x/tos/chips/cc2420/unique/UniqueReceiveP.nc"
#line 56
struct UniqueReceiveP$__nesc_unnamed4329 {
  am_addr_t source;
  uint8_t dsn;
} UniqueReceiveP$receivedMessages[4];

uint8_t UniqueReceiveP$writeIndex = 0;


uint8_t UniqueReceiveP$recycleSourceElement;

enum UniqueReceiveP$__nesc_unnamed4330 {
  UniqueReceiveP$INVALID_ELEMENT = 0xFF
};


static inline  error_t UniqueReceiveP$Init$init(void);









static inline bool UniqueReceiveP$hasSeen(uint16_t msgSource, uint8_t msgDsn);
static inline void UniqueReceiveP$insert(uint16_t msgSource, uint8_t msgDsn);
#line 104
static inline  message_t *UniqueReceiveP$SubReceive$receive(message_t *msg, void *payload, 
uint8_t len);
#line 130
static inline bool UniqueReceiveP$hasSeen(uint16_t msgSource, uint8_t msgDsn);
#line 156
static inline void UniqueReceiveP$insert(uint16_t msgSource, uint8_t msgDsn);
#line 177
static inline   message_t *UniqueReceiveP$DuplicateReceive$default$receive(message_t *msg, void *payload, uint8_t len);
# 30 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
static   void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430Compare$setEvent(uint16_t arg_0x40646eb8);

static   void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430Compare$setEventFromNow(uint16_t arg_0x40645830);
# 34 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
static   uint16_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430Timer$get(void);
# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Alarm$fired(void);
# 39 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
static   void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430TimerControl$enableEvents(void);
#line 36
static   void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430TimerControl$setControlAsCompare(void);



static   void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430TimerControl$disableEvents(void);
#line 33
static   void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430TimerControl$clearPendingInterrupt(void);
# 42 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline  error_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Init$init(void);
#line 54
static inline   void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Alarm$stop(void);




static inline   void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430Compare$fired(void);










static inline   void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Alarm$startAt(uint16_t t0, uint16_t dt);
#line 103
static inline   void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430Timer$overflow(void);
# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   /*CounterMilli32C.Transform*/TransformCounterC$1$CounterFrom$size_type /*CounterMilli32C.Transform*/TransformCounterC$1$CounterFrom$get(void);






static   bool /*CounterMilli32C.Transform*/TransformCounterC$1$CounterFrom$isOverflowPending(void);










static   void /*CounterMilli32C.Transform*/TransformCounterC$1$Counter$overflow(void);
# 56 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
/*CounterMilli32C.Transform*/TransformCounterC$1$upper_count_type /*CounterMilli32C.Transform*/TransformCounterC$1$m_upper;

enum /*CounterMilli32C.Transform*/TransformCounterC$1$__nesc_unnamed4331 {

  TransformCounterC$1$LOW_SHIFT_RIGHT = 5, 
  TransformCounterC$1$HIGH_SHIFT_LEFT = 8 * sizeof(/*CounterMilli32C.Transform*/TransformCounterC$1$from_size_type ) - /*CounterMilli32C.Transform*/TransformCounterC$1$LOW_SHIFT_RIGHT, 
  TransformCounterC$1$NUM_UPPER_BITS = 8 * sizeof(/*CounterMilli32C.Transform*/TransformCounterC$1$to_size_type ) - 8 * sizeof(/*CounterMilli32C.Transform*/TransformCounterC$1$from_size_type ) + 5, 



  TransformCounterC$1$OVERFLOW_MASK = /*CounterMilli32C.Transform*/TransformCounterC$1$NUM_UPPER_BITS ? ((/*CounterMilli32C.Transform*/TransformCounterC$1$upper_count_type )2 << (/*CounterMilli32C.Transform*/TransformCounterC$1$NUM_UPPER_BITS - 1)) - 1 : 0
};

static   /*CounterMilli32C.Transform*/TransformCounterC$1$to_size_type /*CounterMilli32C.Transform*/TransformCounterC$1$Counter$get(void);
#line 122
static inline   void /*CounterMilli32C.Transform*/TransformCounterC$1$CounterFrom$overflow(void);
# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$Alarm$fired(void);
#line 92
static   void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$AlarmFrom$startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$AlarmFrom$size_type arg_0x407dfac0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$AlarmFrom$size_type arg_0x407dfc50);
#line 62
static   void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$AlarmFrom$stop(void);
# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$Counter$size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$Counter$get(void);
# 66 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$m_t0;
/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$m_dt;

enum /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$__nesc_unnamed4332 {

  TransformAlarmC$1$MAX_DELAY_LOG2 = 8 * sizeof(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$from_size_type ) - 1 - 5, 
  TransformAlarmC$1$MAX_DELAY = (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$to_size_type )1 << /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$MAX_DELAY_LOG2
};

static inline   /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$Alarm$getNow(void);




static inline   /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$Alarm$getAlarm(void);










static inline   void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$Alarm$stop(void);




static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$set_alarm(void);
#line 136
static   void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$Alarm$startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$to_size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$to_size_type dt);
#line 151
static inline   void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$AlarmFrom$fired(void);
#line 166
static inline   void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$Counter$overflow(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask(void);
# 98 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow(void);
#line 92
static   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type arg_0x407dfac0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type arg_0x407dfc50);
#line 105
static   /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(void);
#line 62
static   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop(void);
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired(void);
# 63 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$__nesc_unnamed4333 {
#line 63
  AlarmToTimerC$0$fired = 11U
};
#line 63
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$__nesc_sillytask_fired[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired];
#line 44
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt;
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot;

static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(uint32_t t0, uint32_t dt, bool oneshot);
#line 60
static inline  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void);


static inline  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void);






static inline   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void);
#line 82
static inline  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt);


static inline  uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask(void);
# 125 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(void);
#line 118
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(uint32_t arg_0x405a0120, uint32_t arg_0x405a02b0);
#line 67
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop(void);




static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(
# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40f081d0);
#line 60
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4334 {
#line 60
  VirtualizeTimerC$0$updateFromTimer = 12U
};
#line 60
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer];
#line 42
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4335 {

  VirtualizeTimerC$0$NUM_TIMERS = 1U, 
  VirtualizeTimerC$0$END_OF_LIST = 255
};








#line 48
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4336 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS];




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(uint32_t now);
#line 88
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void);
#line 127
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);









static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(uint8_t num, uint32_t dt);
#line 192
static inline   void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num);
# 47 "/opt/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline   void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(message_t *arg_0x40599eb8, error_t arg_0x40598068);
# 114 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  void */*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$getPayload(message_t *arg_0x407371f8);
#line 101
static  uint8_t /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$maxPayloadLength(void);
# 57 "/opt/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline  void /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(message_t *m, error_t err);



static inline  uint8_t /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$maxPayloadLength(void);



static inline  void */*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$getPayload(message_t *m);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(
# 40 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40f58880, 
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t arg_0x4059a920, message_t *arg_0x4059aad0, uint8_t arg_0x4059ac58);
#line 125
static  void */*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$getPayload(
# 40 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40f58880, 
# 125 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0x40598b18);
#line 112
static  uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$maxPayloadLength(
# 40 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40f58880);
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(
# 38 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40f59e88, 
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t *arg_0x40738598, error_t arg_0x40738720);
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(message_t *arg_0x406ef7c0);
#line 83
static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(message_t *arg_0x406efe30, uint8_t arg_0x40704010);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$postTask(void);
# 67 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(message_t *arg_0x405af190);
#line 136
static  am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(message_t *arg_0x405ac740);
# 118 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4337 {
#line 118
  AMQueueImplP$0$CancelTask = 13U
};
#line 118
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_sillytask_CancelTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask];
#line 161
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4338 {
#line 161
  AMQueueImplP$0$errorTask = 14U
};
#line 161
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_sillytask_errorTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask];
#line 49
#line 47
typedef struct /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4339 {
  message_t *msg;
} /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue_entry_t;

uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current = 2;
/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue_entry_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[2];
uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[2 / 8 + 1];

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void);

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$nextPacket(void);
#line 82
static inline  error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(uint8_t clientId, message_t *msg, 
uint8_t len);
#line 118
static inline  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask(void);
#line 155
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(uint8_t last, message_t *msg, error_t err);





static inline  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void);




static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void);
#line 181
static inline  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(am_id_t id, message_t *msg, error_t err);
#line 199
static inline  uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$maxPayloadLength(uint8_t id);



static inline  void */*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$getPayload(uint8_t id, message_t *m);



static inline   void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(uint8_t id, message_t *msg, error_t err);
# 27 "AES/Interfaces/OmacI.nc"
static  error_t /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$OmacI$truncateTag(uint8_t *arg_0x40f8d1d0, uint8_t arg_0x40f8d360, uint8_t arg_0x40f8d4e8);
#line 26
static  error_t /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$OmacI$cbcmacGenerate(uint8_t *arg_0x40f8f9d8, uint8_t arg_0x40f8fb68, uint8_t arg_0x40f8fcf0);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$AMSend$send(am_addr_t arg_0x4059a920, message_t *arg_0x4059aad0, uint8_t arg_0x4059ac58);
#line 125
static  void */*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$AMSend$getPayload(message_t *arg_0x40598b18);
# 40 "AES/Interfaces/AFWA_AESI.nc"
static  void /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$AFWA_AESI$updateKeyDone(uint8_t *arg_0x405b6ac0);
#line 54
static  void /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$AFWA_AESI$AFWAsendDone(message_t *arg_0x405c4010, uint8_t arg_0x405c4198);
# 10 "AES/Interfaces/CtrI.nc"
static  error_t /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$CtrI$AESctr_encrypt(uint8_t *arg_0x40f89278, uint8_t arg_0x40f89408, uint8_t *arg_0x40f895b0);
# 50 "AES/AFWA_AESP.nc"
enum mode /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$p;
enum modeSet;

uint8_t */*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$localKey;
uint8_t */*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$plainText;
#line 54
uint8_t */*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$cipherText;


uint16_t /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$tx_ctrl0;
#line 57
uint16_t /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$tx_ctrl1;
uint16_t /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$rx_ctrl0;
#line 58
uint16_t /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$rx_ctrl1;
uint16_t /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$sec_txl = 0;
uint16_t /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$setMode0;
#line 60
uint16_t /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$setMode1;

 uint8_t /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$nonceValue[16] = { 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01 };

uint32_t /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$fc = 0;
uint8_t /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$fcLen = 4;



uint8_t /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$appLen;


static uint8_t /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$sBox(uint8_t num);
static inline void /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$RotWord(uint8_t *x);
static inline void /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$KeyExpansion(void);
static void /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$SubWord(uint8_t *y);
static void /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$AddRoundKey(uint8_t round);
static void /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$SubBytes(void);
static void /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$ShiftRows(void);
static void /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$InvShiftRows(void);
static inline void /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$MixColumns(void);
static inline void /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$InvMixColumns(void);
static inline void /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$Cipher(void);
static void /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$startAes(uint8_t bits);





uint8_t /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[4][4];
uint8_t */*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$inPut;

uint8_t /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$w[176] = { 0 };
uint8_t /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$KeySizeW;
#line 94
uint8_t /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$KeySizeB;
#line 94
uint8_t /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$rounds;
#line 94
uint8_t /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$coloumns = 4;
uint8_t /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$mode;


uint8_t /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$Rcon[255] = { 
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
0x61, 0xc2, 0x9f, 0x25, 0x4a, 0x94, 0x33, 0x66, 0xcc, 0x83, 0x1d, 0x3a, 0x74, 0xe8, 0xcb };


static inline uint8_t /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$sBoxInvert(uint8_t num);
#line 140
static uint8_t /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$sBox(uint8_t num);
#line 163
static inline  error_t /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$Init$init(void);









static inline  error_t /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$SplitControl$start(void);







static inline  error_t /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$AFWA_AESI$AFWAupdateKey(uint8_t *key, uint8_t KeySize);








static inline  error_t /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$AFWA_AESI$AFWAsetTransmitMode(uint16_t ctrl0, uint8_t len);
#line 227
static inline  error_t /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$AFWA_AESI$AFWAenc(uint8_t *text);
#line 257
static inline  error_t /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$AFWA_AESI$AFWAsend(am_addr_t addr, message_t *msg, uint8_t len);
#line 323
static inline  void /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$AMSend$sendDone(message_t *msg, error_t error);
#line 398
static void /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$startAes(uint8_t bytes);









static inline void /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$KeyExpansion(void);
#line 451
static inline void /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$RotWord(uint8_t *x);
#line 469
static void /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$SubWord(uint8_t *y);










static void /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$AddRoundKey(uint8_t round);
#line 492
static void /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$SubBytes(void);
#line 531
static void /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$ShiftRows(void);
#line 564
static inline void /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$MixColumns(void);
#line 582
static inline void /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$Cipher(void);
#line 633
static void /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$InvShiftRows(void);
#line 661
static inline void /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$InvMixColumns(void);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*OscilloscopeAppC.AFWA_AESC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$sendDone(message_t *arg_0x40599eb8, error_t arg_0x40598068);
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  error_t /*OscilloscopeAppC.AFWA_AESC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$send(message_t *arg_0x4073a4b0, uint8_t arg_0x4073a638);
#line 114
static  void */*OscilloscopeAppC.AFWA_AESC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$getPayload(message_t *arg_0x407371f8);
# 92 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  void /*OscilloscopeAppC.AFWA_AESC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setDestination(message_t *arg_0x405afd38, am_addr_t arg_0x405afec8);
#line 151
static  void /*OscilloscopeAppC.AFWA_AESC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setType(message_t *arg_0x405accc8, am_id_t arg_0x405ace50);
# 45 "/opt/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static  error_t /*OscilloscopeAppC.AFWA_AESC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline  void /*OscilloscopeAppC.AFWA_AESC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$sendDone(message_t *m, error_t err);







static inline  void */*OscilloscopeAppC.AFWA_AESC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$getPayload(message_t *m);
# 48 "AES/Interfaces/AFWA_AESI.nc"
static  error_t /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$AFWA_AESI$AFWAenc(uint8_t *arg_0x405b5c80);
# 24 "AES/OmacP.nc"
uint8_t /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$iv[16] = { 0 };
uint8_t /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$Lu[16] = { 0 };
uint8_t /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$Lu_2[16] = { 0 };
uint8_t /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$tmp[16] = { 0 };
uint8_t /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$temp[2] = { 0 };

uint8_t /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$blksizeB = 0;
#line 30
uint8_t /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$i = 0;
#line 30
uint8_t /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$j = 0;
uint8_t /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$MSB;



static void /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$xor(uint8_t *in, uint8_t *out);









static void /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$preprocess(uint8_t *in, uint8_t *out);
#line 80
static inline uint8_t /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$generateMac(uint8_t *auth_this_msg, uint8_t payloadLenB);
#line 119
static inline  error_t /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$OmacI$cbcmacGenerate(uint8_t *auth_this_msg, uint8_t payloadLenB, uint8_t KeySizeB);
#line 138
static inline  error_t /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$OmacI$truncateTag(uint8_t *mac, uint8_t payloadlenB, uint8_t tBytes);
#line 164
static inline  void /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$AFWA_AESI$updateKeyDone(uint8_t *key);
static inline  void /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$AFWA_AESI$AFWAsendDone(message_t *msg, error_t err);
# 280 "AES/CCMP.nc"
static inline  void /*OscilloscopeAppC.AFWA_AESC.CCMP*/CCMP$0$AFWA_AESI$updateKeyDone(uint8_t *key);
static inline  void /*OscilloscopeAppC.AFWA_AESC.CCMP*/CCMP$0$AFWA_AESI$AFWAsendDone(message_t *msg, error_t err);
# 48 "AES/Interfaces/AFWA_AESI.nc"
static  error_t /*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$AFWA_AESI$AFWAenc(uint8_t *arg_0x405b5c80);
# 89 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
static   void /*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$Leds$led2Toggle(void);
# 17 "AES/CTRP.nc"
uint8_t /*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$blksizeB;
uint8_t /*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$tmp[16] = { 0 };
uint8_t /*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$i = 0;
#line 19
uint8_t /*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$j = 0;
uint16_t /*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$fc = 0;

static void /*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$xor(uint8_t *in, uint8_t *out);









static inline  error_t /*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$CtrI$AESctr_encrypt(uint8_t *in, uint8_t payloadLenB, uint8_t *nonce);
#line 134
static inline  void /*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$AFWA_AESI$updateKeyDone(uint8_t *key);
static inline  void /*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$AFWA_AESI$AFWAsendDone(message_t *msg, error_t err);
# 196 "/opt/tinyos-2.x/tos/chips/msp430/msp430hardware.h"
static inline void __nesc_enable_interrupt(void )
{
   __asm volatile ("eint");}

# 185 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline   void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Timer$overflow(void)
{
}

#line 185
static inline   void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Timer$overflow(void)
{
}

#line 185
static inline   void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Timer$overflow(void)
{
}

# 37 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
inline static   void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Timer$overflow(void){
#line 37
  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Timer$overflow();
#line 37
  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Timer$overflow();
#line 37
  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Timer$overflow();
#line 37
}
#line 37
# 126 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline   void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Overflow$fired(void)
{
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Timer$overflow();
}





static inline    void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Event$default$fired(uint8_t n)
{
}

# 28 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static   void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Event$fired(uint8_t arg_0x406605e0){
#line 28
  switch (arg_0x406605e0) {
#line 28
    case 0:
#line 28
      /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Event$fired();
#line 28
      break;
#line 28
    case 1:
#line 28
      /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Event$fired();
#line 28
      break;
#line 28
    case 2:
#line 28
      /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Event$fired();
#line 28
      break;
#line 28
    case 5:
#line 28
      /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Overflow$fired();
#line 28
      break;
#line 28
    default:
#line 28
      /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Event$default$fired(arg_0x406605e0);
#line 28
      break;
#line 28
    }
#line 28
}
#line 28
# 115 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline   void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$VectorTimerX0$fired(void)
{
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Event$fired(0);
}

# 28 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static   void Msp430TimerCommonP$VectorTimerA0$fired(void){
#line 28
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$VectorTimerX0$fired();
#line 28
}
#line 28
# 47 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$int2CC(uint16_t x)
#line 47
{
#line 47
  union /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$__nesc_unnamed4340 {
#line 47
    uint16_t f;
#line 47
    /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$cc_t t;
  } 
#line 47
  c = { .f = x };

#line 47
  return c.t;
}

#line 74
static inline   /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Control$getControl(void)
{
  return /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$int2CC(* (volatile uint16_t *)354U);
}

#line 177
static inline    void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Capture$default$captured(uint16_t n)
{
}

# 75 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
inline static   void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Capture$captured(uint16_t arg_0x4063ef20){
#line 75
  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Capture$default$captured(arg_0x4063ef20);
#line 75
}
#line 75
# 139 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline   uint16_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Capture$getEvent(void)
{
  return * (volatile uint16_t *)370U;
}

#line 181
static inline    void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Compare$default$fired(void)
{
}

# 34 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static   void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Compare$fired(void){
#line 34
  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Compare$default$fired();
#line 34
}
#line 34
# 47 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$int2CC(uint16_t x)
#line 47
{
#line 47
  union /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$__nesc_unnamed4341 {
#line 47
    uint16_t f;
#line 47
    /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$cc_t t;
  } 
#line 47
  c = { .f = x };

#line 47
  return c.t;
}

#line 74
static inline   /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Control$getControl(void)
{
  return /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$int2CC(* (volatile uint16_t *)356U);
}

#line 177
static inline    void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Capture$default$captured(uint16_t n)
{
}

# 75 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
inline static   void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Capture$captured(uint16_t arg_0x4063ef20){
#line 75
  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Capture$default$captured(arg_0x4063ef20);
#line 75
}
#line 75
# 139 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline   uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Capture$getEvent(void)
{
  return * (volatile uint16_t *)372U;
}

#line 181
static inline    void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Compare$default$fired(void)
{
}

# 34 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static   void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Compare$fired(void){
#line 34
  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Compare$default$fired();
#line 34
}
#line 34
# 47 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$cc_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$int2CC(uint16_t x)
#line 47
{
#line 47
  union /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$__nesc_unnamed4342 {
#line 47
    uint16_t f;
#line 47
    /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$cc_t t;
  } 
#line 47
  c = { .f = x };

#line 47
  return c.t;
}

#line 74
static inline   /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$cc_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Control$getControl(void)
{
  return /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$int2CC(* (volatile uint16_t *)358U);
}

#line 177
static inline    void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Capture$default$captured(uint16_t n)
{
}

# 75 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
inline static   void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Capture$captured(uint16_t arg_0x4063ef20){
#line 75
  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Capture$default$captured(arg_0x4063ef20);
#line 75
}
#line 75
# 139 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline   uint16_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Capture$getEvent(void)
{
  return * (volatile uint16_t *)374U;
}

#line 181
static inline    void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Compare$default$fired(void)
{
}

# 34 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static   void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Compare$fired(void){
#line 34
  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Compare$default$fired();
#line 34
}
#line 34
# 120 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline   void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$VectorTimerX1$fired(void)
{
  uint8_t n = * (volatile uint16_t *)302U;

#line 123
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$Event$fired(n >> 1);
}

# 28 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static   void Msp430TimerCommonP$VectorTimerA1$fired(void){
#line 28
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP$0$VectorTimerX1$fired();
#line 28
}
#line 28
# 115 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline   void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$VectorTimerX0$fired(void)
{
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Event$fired(0);
}

# 28 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static   void Msp430TimerCommonP$VectorTimerB0$fired(void){
#line 28
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$VectorTimerX0$fired();
#line 28
}
#line 28
# 185 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline   void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Timer$overflow(void)
{
}

#line 185
static inline   void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Timer$overflow(void)
{
}

#line 185
static inline   void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Timer$overflow(void)
{
}

#line 185
static inline   void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Timer$overflow(void)
{
}

#line 185
static inline   void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Timer$overflow(void)
{
}

#line 185
static inline   void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Timer$overflow(void)
{
}

#line 185
static inline   void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Timer$overflow(void)
{
}

# 103 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline   void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430Timer$overflow(void)
{
}

#line 103
static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$Msp430Timer$overflow(void)
{
}

# 166 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$Counter$overflow(void)
{
}

# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   void /*Counter32khz32C.Transform*/TransformCounterC$0$Counter$overflow(void){
#line 71
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$Counter$overflow();
#line 71
}
#line 71
# 122 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static inline   void /*Counter32khz32C.Transform*/TransformCounterC$0$CounterFrom$overflow(void)
{
  /* atomic removed: atomic calls only */
  {
    /*Counter32khz32C.Transform*/TransformCounterC$0$m_upper++;
    if ((/*Counter32khz32C.Transform*/TransformCounterC$0$m_upper & /*Counter32khz32C.Transform*/TransformCounterC$0$OVERFLOW_MASK) == 0) {
      /*Counter32khz32C.Transform*/TransformCounterC$0$Counter$overflow();
      }
  }
}

# 47 "/opt/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline   void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void)
{
}

# 166 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline   void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$Counter$overflow(void)
{
}

# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   void /*CounterMilli32C.Transform*/TransformCounterC$1$Counter$overflow(void){
#line 71
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$Counter$overflow();
#line 71
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow();
#line 71
}
#line 71
# 122 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static inline   void /*CounterMilli32C.Transform*/TransformCounterC$1$CounterFrom$overflow(void)
{
  /* atomic removed: atomic calls only */
  {
    /*CounterMilli32C.Transform*/TransformCounterC$1$m_upper++;
    if ((/*CounterMilli32C.Transform*/TransformCounterC$1$m_upper & /*CounterMilli32C.Transform*/TransformCounterC$1$OVERFLOW_MASK) == 0) {
      /*CounterMilli32C.Transform*/TransformCounterC$1$Counter$overflow();
      }
  }
}

# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   void /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$Counter$overflow(void){
#line 71
  /*CounterMilli32C.Transform*/TransformCounterC$1$CounterFrom$overflow();
#line 71
  /*Counter32khz32C.Transform*/TransformCounterC$0$CounterFrom$overflow();
#line 71
}
#line 71
# 53 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430CounterC.nc"
static inline   void /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$Msp430Timer$overflow(void)
{
  /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$Counter$overflow();
}

# 37 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
inline static   void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Timer$overflow(void){
#line 37
  /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$Msp430Timer$overflow();
#line 37
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$Msp430Timer$overflow();
#line 37
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430Timer$overflow();
#line 37
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Timer$overflow();
#line 37
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Timer$overflow();
#line 37
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Timer$overflow();
#line 37
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Timer$overflow();
#line 37
  /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Timer$overflow();
#line 37
  /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Timer$overflow();
#line 37
  /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Timer$overflow();
#line 37
}
#line 37
# 126 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline   void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Overflow$fired(void)
{
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Timer$overflow();
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t CC2420ControlP$SpiResource$request(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = CC2420SpiP$Resource$request(/*CC2420ControlC.Spi*/CC2420SpiC$0$CLIENT_ID);
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 156 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline   error_t CC2420ControlP$Resource$request(void)
#line 156
{
  return CC2420ControlP$SpiResource$request();
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t CC2420CsmaP$Resource$request(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = CC2420ControlP$Resource$request();
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 199 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline   void CC2420CsmaP$CC2420Power$startVRegDone(void)
#line 199
{
  CC2420CsmaP$Resource$request();
}

# 56 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static   void CC2420ControlP$CC2420Power$startVRegDone(void){
#line 56
  CC2420CsmaP$CC2420Power$startVRegDone();
#line 56
}
#line 56
# 34 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static   void /*HplCC2420PinsC.RSTNM*/Msp430GpioC$4$HplGeneralIO$set(void){
#line 34
  /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP$30$IO$set();
#line 34
}
#line 34
# 37 "/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline   void /*HplCC2420PinsC.RSTNM*/Msp430GpioC$4$GeneralIO$set(void)
#line 37
{
#line 37
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC$4$HplGeneralIO$set();
}

# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420ControlP$RSTN$set(void){
#line 29
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC$4$GeneralIO$set();
#line 29
}
#line 29
# 39 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static   void /*HplCC2420PinsC.RSTNM*/Msp430GpioC$4$HplGeneralIO$clr(void){
#line 39
  /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP$30$IO$clr();
#line 39
}
#line 39
# 38 "/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline   void /*HplCC2420PinsC.RSTNM*/Msp430GpioC$4$GeneralIO$clr(void)
#line 38
{
#line 38
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC$4$HplGeneralIO$clr();
}

# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420ControlP$RSTN$clr(void){
#line 30
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC$4$GeneralIO$clr();
#line 30
}
#line 30
# 380 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline   void CC2420ControlP$StartupTimer$fired(void)
#line 380
{
  if (CC2420ControlP$m_state == CC2420ControlP$S_VREG_STARTING) {
      CC2420ControlP$m_state = CC2420ControlP$S_VREG_STARTED;
      CC2420ControlP$RSTN$clr();
      CC2420ControlP$RSTN$set();
      CC2420ControlP$CC2420Power$startVRegDone();
    }
}

# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t CC2420TransmitP$SpiResource$release(void){
#line 110
  unsigned char result;
#line 110

#line 110
  result = CC2420SpiP$Resource$release(/*CC2420TransmitC.Spi*/CC2420SpiC$3$CLIENT_ID);
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 639 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP$releaseSpiResource(void)
#line 639
{
  CC2420TransmitP$SpiResource$release();
  return SUCCESS;
}

# 50 "/opt/tinyos-2.x/tos/chips/msp430/timer/GpioCaptureC.nc"
static inline   error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Capture$captureRisingEdge(void)
#line 50
{
  return /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$enableCapture(MSP430TIMER_CM_RISING);
}

# 42 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
inline static   error_t CC2420TransmitP$CaptureSFD$captureRisingEdge(void){
#line 42
  unsigned char result;
#line 42

#line 42
  result = /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Capture$captureRisingEdge();
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static   cc2420_status_t CC2420TransmitP$SFLUSHTX$strobe(void){
#line 45
  unsigned char result;
#line 45

#line 45
  result = CC2420SpiP$Strobe$strobe(CC2420_SFLUSHTX);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$Counter$size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$Counter$get(void){
#line 53
  unsigned long result;
#line 53

#line 53
  result = /*Counter32khz32C.Transform*/TransformCounterC$0$Counter$get();
#line 53

#line 53
  return result;
#line 53
}
#line 53
# 75 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline   /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$Alarm$getNow(void)
{
  return /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$Counter$get();
}

#line 146
static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$Alarm$start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$to_size_type dt)
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$Alarm$getNow(), dt);
}

# 55 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void CC2420TransmitP$BackoffTimer$start(CC2420TransmitP$BackoffTimer$size_type arg_0x407e0970){
#line 55
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$Alarm$start(arg_0x407e0970);
#line 55
}
#line 55
# 48 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline   uint8_t /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP$4$IO$getRaw(void)
#line 48
{
#line 48
  return * (volatile uint8_t *)32U & (0x01 << 4);
}

#line 49
static inline   bool /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP$4$IO$get(void)
#line 49
{
#line 49
  return /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP$4$IO$getRaw() != 0;
}

# 59 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static   bool /*HplCC2420PinsC.CCAM*/Msp430GpioC$0$HplGeneralIO$get(void){
#line 59
  unsigned char result;
#line 59

#line 59
  result = /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP$4$IO$get();
#line 59

#line 59
  return result;
#line 59
}
#line 59
# 40 "/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline   bool /*HplCC2420PinsC.CCAM*/Msp430GpioC$0$GeneralIO$get(void)
#line 40
{
#line 40
  return /*HplCC2420PinsC.CCAM*/Msp430GpioC$0$HplGeneralIO$get();
}

# 32 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   bool CC2420TransmitP$CCA$get(void){
#line 32
  unsigned char result;
#line 32

#line 32
  result = /*HplCC2420PinsC.CCAM*/Msp430GpioC$0$GeneralIO$get();
#line 32

#line 32
  return result;
#line 32
}
#line 32
# 458 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline   void CC2420TransmitP$BackoffTimer$fired(void)
#line 458
{
  /* atomic removed: atomic calls only */
#line 459
  {
    switch (CC2420TransmitP$m_state) {

        case CC2420TransmitP$S_SAMPLE_CCA: 


          if (CC2420TransmitP$CCA$get()) {
              CC2420TransmitP$m_state = CC2420TransmitP$S_BEGIN_TRANSMIT;
              CC2420TransmitP$BackoffTimer$start(CC2420_TIME_ACK_TURNAROUND);
            }
          else {
              CC2420TransmitP$congestionBackoff();
            }
        break;

        case CC2420TransmitP$S_CCA_CANCEL: 
          CC2420TransmitP$m_state = CC2420TransmitP$S_TX_CANCEL;


        case CC2420TransmitP$S_BEGIN_TRANSMIT: 
          case CC2420TransmitP$S_TX_CANCEL: 
            if (CC2420TransmitP$acquireSpiResource() == SUCCESS) {
                CC2420TransmitP$attemptSend();
              }
        break;

        case CC2420TransmitP$S_ACK_WAIT: 
          CC2420TransmitP$signalDone(SUCCESS);
        break;

        case CC2420TransmitP$S_SFD: 


          CC2420TransmitP$SFLUSHTX$strobe();
        CC2420TransmitP$CaptureSFD$captureRisingEdge();
        CC2420TransmitP$releaseSpiResource();
        CC2420TransmitP$signalDone(ERETRY);
        break;

        default: 
          break;
      }
  }
}

# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$Alarm$fired(void){
#line 67
  CC2420TransmitP$BackoffTimer$fired();
#line 67
  CC2420ControlP$StartupTimer$fired();
#line 67
}
#line 67
# 151 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$AlarmFrom$fired(void)
{
  /* atomic removed: atomic calls only */
  {
    if (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$m_dt == 0) 
      {
        /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$Alarm$fired();
      }
    else 
      {
        /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$set_alarm();
      }
  }
}

# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$Alarm$fired(void){
#line 67
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$AlarmFrom$fired();
#line 67
}
#line 67
# 124 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline   void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Control$disableEvents(void)
{
  * (volatile uint16_t *)386U &= ~0x0010;
}

# 40 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$Msp430TimerControl$disableEvents(void){
#line 40
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Control$disableEvents();
#line 40
}
#line 40
# 59 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$Msp430Compare$fired(void)
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$Msp430TimerControl$disableEvents();
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$Alarm$fired();
}

# 34 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static   void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Compare$fired(void){
#line 34
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$Msp430Compare$fired();
#line 34
}
#line 34
# 139 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline   uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Capture$getEvent(void)
{
  return * (volatile uint16_t *)402U;
}

#line 177
static inline    void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Capture$default$captured(uint16_t n)
{
}

# 75 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
inline static   void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Capture$captured(uint16_t arg_0x4063ef20){
#line 75
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Capture$default$captured(arg_0x4063ef20);
#line 75
}
#line 75
# 47 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$cc_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$int2CC(uint16_t x)
#line 47
{
#line 47
  union /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$__nesc_unnamed4343 {
#line 47
    uint16_t f;
#line 47
    /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$cc_t t;
  } 
#line 47
  c = { .f = x };

#line 47
  return c.t;
}

#line 74
static inline   /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$cc_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Control$getControl(void)
{
  return /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$int2CC(* (volatile uint16_t *)386U);
}

#line 169
static inline   void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Event$fired(void)
{
  if (/*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Control$getControl().cap) {
    /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Capture$captured(/*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Capture$getEvent());
    }
  else {
#line 174
    /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Compare$fired();
    }
}

# 34 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
inline static   uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$Msp430Timer$get(void){
#line 34
  unsigned int result;
#line 34

#line 34
  result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Timer$get();
#line 34

#line 34
  return result;
#line 34
}
#line 34
# 38 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430CounterC.nc"
static inline   uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$Counter$get(void)
{
  return /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$Msp430Timer$get();
}

# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   /*Counter32khz32C.Transform*/TransformCounterC$0$CounterFrom$size_type /*Counter32khz32C.Transform*/TransformCounterC$0$CounterFrom$get(void){
#line 53
  unsigned int result;
#line 53

#line 53
  result = /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$Counter$get();
#line 53

#line 53
  return result;
#line 53
}
#line 53
# 70 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline   bool /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Timer$isOverflowPending(void)
{
  return * (volatile uint16_t *)384U & 1U;
}

# 35 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
inline static   bool /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$Msp430Timer$isOverflowPending(void){
#line 35
  unsigned char result;
#line 35

#line 35
  result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Timer$isOverflowPending();
#line 35

#line 35
  return result;
#line 35
}
#line 35
# 43 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430CounterC.nc"
static inline   bool /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$Counter$isOverflowPending(void)
{
  return /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$Msp430Timer$isOverflowPending();
}

# 60 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   bool /*Counter32khz32C.Transform*/TransformCounterC$0$CounterFrom$isOverflowPending(void){
#line 60
  unsigned char result;
#line 60

#line 60
  result = /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$Counter$isOverflowPending();
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 119 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline   void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Control$enableEvents(void)
{
  * (volatile uint16_t *)386U |= 0x0010;
}

# 39 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$Msp430TimerControl$enableEvents(void){
#line 39
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Control$enableEvents();
#line 39
}
#line 39
# 84 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline   void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Control$clearPendingInterrupt(void)
{
  * (volatile uint16_t *)386U &= ~0x0001;
}

# 33 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$Msp430TimerControl$clearPendingInterrupt(void){
#line 33
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Control$clearPendingInterrupt();
#line 33
}
#line 33
# 144 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline   void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Compare$setEvent(uint16_t x)
{
  * (volatile uint16_t *)402U = x;
}

# 30 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$Msp430Compare$setEvent(uint16_t arg_0x40646eb8){
#line 30
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Compare$setEvent(arg_0x40646eb8);
#line 30
}
#line 30
# 34 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
inline static   uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Timer$get(void){
#line 34
  unsigned int result;
#line 34

#line 34
  result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Timer$get();
#line 34

#line 34
  return result;
#line 34
}
#line 34
# 154 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline   void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Compare$setEventFromNow(uint16_t x)
{
  * (volatile uint16_t *)402U = /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Timer$get() + x;
}

# 32 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$Msp430Compare$setEventFromNow(uint16_t arg_0x40645830){
#line 32
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Compare$setEventFromNow(arg_0x40645830);
#line 32
}
#line 32
# 34 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
inline static   uint16_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$Msp430Timer$get(void){
#line 34
  unsigned int result;
#line 34

#line 34
  result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Timer$get();
#line 34

#line 34
  return result;
#line 34
}
#line 34
# 70 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$Alarm$startAt(uint16_t t0, uint16_t dt)
{
  /* atomic removed: atomic calls only */
  {
    uint16_t now = /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$Msp430Timer$get();
    uint16_t elapsed = now - t0;

#line 76
    if (elapsed >= dt) 
      {
        /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$Msp430Compare$setEventFromNow(2);
      }
    else 
      {
        uint16_t remaining = dt - elapsed;

#line 83
        if (remaining <= 2) {
          /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$Msp430Compare$setEventFromNow(2);
          }
        else {
#line 86
          /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$Msp430Compare$setEvent(now + remaining);
          }
      }
#line 88
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$Msp430TimerControl$clearPendingInterrupt();
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$Msp430TimerControl$enableEvents();
  }
}

# 92 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$AlarmFrom$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$AlarmFrom$size_type arg_0x407dfac0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$AlarmFrom$size_type arg_0x407dfc50){
#line 92
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$Alarm$startAt(arg_0x407dfac0, arg_0x407dfc50);
#line 92
}
#line 92
# 246 "/usr/local/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_leuint8(const void *source)
#line 246
{
  const uint8_t *base = source;

#line 248
  return base[0];
}

# 283 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline    void CC2420CsmaP$RadioBackoff$default$requestCongestionBackoff(am_id_t amId, 
message_t *msg)
#line 284
{
}

# 88 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static   void CC2420CsmaP$RadioBackoff$requestCongestionBackoff(am_id_t arg_0x4077dba0, message_t *arg_0x40715cb0){
#line 88
    CC2420CsmaP$RadioBackoff$default$requestCongestionBackoff(arg_0x4077dba0, arg_0x40715cb0);
#line 88
}
#line 88
# 78 "/opt/tinyos-2.x/tos/system/RandomMlcgP.nc"
static inline   uint16_t RandomMlcgP$Random$rand16(void)
#line 78
{
  return (uint16_t )RandomMlcgP$Random$rand32();
}

# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
inline static   uint16_t CC2420CsmaP$Random$rand16(void){
#line 41
  unsigned int result;
#line 41

#line 41
  result = RandomMlcgP$Random$rand16();
#line 41

#line 41
  return result;
#line 41
}
#line 41
# 237 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline   void CC2420TransmitP$RadioBackoff$setCongestionBackoff(uint16_t backoffTime)
#line 237
{
  CC2420TransmitP$myCongestionBackoff = backoffTime + 1;
}

# 66 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static   void CC2420CsmaP$SubBackoff$setCongestionBackoff(uint16_t arg_0x40716be0){
#line 66
  CC2420TransmitP$RadioBackoff$setCongestionBackoff(arg_0x40716be0);
#line 66
}
#line 66
# 220 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline   void CC2420CsmaP$SubBackoff$requestCongestionBackoff(message_t *msg)
#line 220
{
  CC2420CsmaP$SubBackoff$setCongestionBackoff(CC2420CsmaP$Random$rand16()
   % (0x7 * CC2420_BACKOFF_PERIOD) + CC2420_MIN_BACKOFF);

  CC2420CsmaP$RadioBackoff$requestCongestionBackoff(__nesc_ntoh_leuint8((unsigned char *)&((cc2420_header_t *)(msg->data - 
  sizeof(cc2420_header_t )))->type), msg);
}

# 88 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static   void CC2420TransmitP$RadioBackoff$requestCongestionBackoff(message_t *arg_0x40715cb0){
#line 88
  CC2420CsmaP$SubBackoff$requestCongestionBackoff(arg_0x40715cb0);
#line 88
}
#line 88
# 87 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t CC2420TransmitP$SpiResource$immediateRequest(void){
#line 87
  unsigned char result;
#line 87

#line 87
  result = CC2420SpiP$Resource$immediateRequest(/*CC2420TransmitC.Spi*/CC2420SpiC$3$CLIENT_ID);
#line 87

#line 87
  return result;
#line 87
}
#line 87
# 45 "/opt/tinyos-2.x/tos/interfaces/State.nc"
inline static   error_t CC2420SpiP$WorkingState$requestState(uint8_t arg_0x407a3378){
#line 45
  unsigned char result;
#line 45

#line 45
  result = StateImplP$State$requestState(0U, arg_0x407a3378);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 110 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline    error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$default$isOwner(uint8_t id)
#line 110
{
#line 110
  return FAIL;
}

# 118 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$isOwner(uint8_t arg_0x40b8b118){
#line 118
  unsigned char result;
#line 118

#line 118
  switch (arg_0x40b8b118) {
#line 118
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C$0$CLIENT_ID:
#line 118
      result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Resource$isOwner(/*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C$0$CLIENT_ID);
#line 118
      break;
#line 118
    default:
#line 118
      result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$default$isOwner(arg_0x40b8b118);
#line 118
      break;
#line 118
    }
#line 118

#line 118
  return result;
#line 118
}
#line 118
# 76 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline   uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$isOwner(uint8_t id)
#line 76
{
  return /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$isOwner(id);
}

# 118 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   bool CC2420SpiP$SpiResource$isOwner(void){
#line 118
  unsigned char result;
#line 118

#line 118
  result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$isOwner(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C$0$CLIENT_ID);
#line 118

#line 118
  return result;
#line 118
}
#line 118
# 114 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline    msp430_spi_union_config_t */*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Msp430SpiConfigure$default$getConfig(uint8_t id)
#line 114
{
  return &msp430_spi_default_config;
}

# 39 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiConfigure.nc"
inline static   msp430_spi_union_config_t */*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Msp430SpiConfigure$getConfig(uint8_t arg_0x40b8ba78){
#line 39
  union __nesc_unnamed4280 *result;
#line 39

#line 39
    result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Msp430SpiConfigure$default$getConfig(arg_0x40b8ba78);
#line 39

#line 39
  return result;
#line 39
}
#line 39
# 168 "/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static   void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$setModeSpi(msp430_spi_union_config_t *arg_0x40ba7e50){
#line 168
  HplMsp430Usart0P$Usart$setModeSpi(arg_0x40ba7e50);
#line 168
}
#line 168
# 84 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline   void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$ResourceConfigure$configure(uint8_t id)
#line 84
{
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$setModeSpi(/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Msp430SpiConfigure$getConfig(id));
}

# 199 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline    void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(uint8_t id)
#line 199
{
}

# 49 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static   void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceConfigure$configure(uint8_t arg_0x40cbd678){
#line 49
  switch (arg_0x40cbd678) {
#line 49
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C$0$CLIENT_ID:
#line 49
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$ResourceConfigure$configure(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C$0$CLIENT_ID);
#line 49
      break;
#line 49
    default:
#line 49
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(arg_0x40cbd678);
#line 49
      break;
#line 49
    }
#line 49
}
#line 49
# 196 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline    void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$default$immediateRequested(void)
#line 196
{
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$release();
}

# 81 "/opt/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
inline static   void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$immediateRequested(void){
#line 81
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$default$immediateRequested();
#line 81
}
#line 81
# 189 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline    void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceRequested$default$immediateRequested(uint8_t id)
#line 189
{
}

# 51 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static   void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceRequested$immediateRequested(uint8_t arg_0x40cbe4c8){
#line 51
    /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceRequested$default$immediateRequested(arg_0x40cbe4c8);
#line 51
}
#line 51
# 89 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline   error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Resource$immediateRequest(uint8_t id)
#line 89
{
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceRequested$immediateRequested(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$resId);
  /* atomic removed: atomic calls only */
#line 91
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$RES_CONTROLLED) {
        /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$RES_IMM_GRANTING;
        /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$reqResId = id;
      }
    else {
        unsigned char __nesc_temp = 
#line 96
        FAIL;

#line 96
        return __nesc_temp;
      }
  }
#line 98
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$immediateRequested();
  if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$resId == id) {
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceConfigure$configure(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$resId);
      return SUCCESS;
    }
  /* atomic removed: atomic calls only */
#line 103
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$RES_CONTROLLED;
  return FAIL;
}

# 112 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline    error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$default$immediateRequest(uint8_t id)
#line 112
{
#line 112
  return FAIL;
}

# 87 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$immediateRequest(uint8_t arg_0x40b8b118){
#line 87
  unsigned char result;
#line 87

#line 87
  switch (arg_0x40b8b118) {
#line 87
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C$0$CLIENT_ID:
#line 87
      result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Resource$immediateRequest(/*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C$0$CLIENT_ID);
#line 87
      break;
#line 87
    default:
#line 87
      result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$default$immediateRequest(arg_0x40b8b118);
#line 87
      break;
#line 87
    }
#line 87

#line 87
  return result;
#line 87
}
#line 87
# 68 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline   error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$immediateRequest(uint8_t id)
#line 68
{
  return /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$immediateRequest(id);
}

# 87 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t CC2420SpiP$SpiResource$immediateRequest(void){
#line 87
  unsigned char result;
#line 87

#line 87
  result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$immediateRequest(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C$0$CLIENT_ID);
#line 87

#line 87
  return result;
#line 87
}
#line 87
# 86 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static inline bool SchedulerBasicP$isWaiting(uint8_t id)
{
  return SchedulerBasicP$m_next[id] != SchedulerBasicP$NO_TASK || SchedulerBasicP$m_tail == id;
}

static inline bool SchedulerBasicP$pushTask(uint8_t id)
{
  if (!SchedulerBasicP$isWaiting(id)) 
    {
      if (SchedulerBasicP$m_head == SchedulerBasicP$NO_TASK) 
        {
          SchedulerBasicP$m_head = id;
          SchedulerBasicP$m_tail = id;
        }
      else 
        {
          SchedulerBasicP$m_next[SchedulerBasicP$m_tail] = id;
          SchedulerBasicP$m_tail = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

# 394 "/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline    void HplMsp430Usart0P$HplI2C$default$clearModeI2C(void)
#line 394
{
}

# 7 "/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430I2C.nc"
inline static   void HplMsp430Usart0P$HplI2C$clearModeI2C(void){
#line 7
  HplMsp430Usart0P$HplI2C$default$clearModeI2C();
#line 7
}
#line 7
# 56 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline   void /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIOP$21$IO$selectIOFunc(void)
#line 56
{
  /* atomic removed: atomic calls only */
#line 56
  * (volatile uint8_t *)27U &= ~(0x01 << 5);
}

# 85 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static   void HplMsp430Usart0P$URXD$selectIOFunc(void){
#line 85
  /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIOP$21$IO$selectIOFunc();
#line 85
}
#line 85
# 56 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline   void /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIOP$20$IO$selectIOFunc(void)
#line 56
{
  /* atomic removed: atomic calls only */
#line 56
  * (volatile uint8_t *)27U &= ~(0x01 << 4);
}

# 85 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static   void HplMsp430Usart0P$UTXD$selectIOFunc(void){
#line 85
  /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIOP$20$IO$selectIOFunc();
#line 85
}
#line 85
# 207 "/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline   void HplMsp430Usart0P$Usart$disableUart(void)
#line 207
{
  /* atomic removed: atomic calls only */
#line 208
  {
    HplMsp430Usart0P$ME1 &= ~((1 << 7) | (1 << 6));
    HplMsp430Usart0P$UTXD$selectIOFunc();
    HplMsp430Usart0P$URXD$selectIOFunc();
  }
}

#line 143
static inline   void HplMsp430Usart0P$Usart$setUmctl(uint8_t control)
#line 143
{
  U0MCTL = control;
}

#line 132
static inline   void HplMsp430Usart0P$Usart$setUbr(uint16_t control)
#line 132
{
  /* atomic removed: atomic calls only */
#line 133
  {
    U0BR0 = control & 0x00FF;
    U0BR1 = (control >> 8) & 0x00FF;
  }
}

#line 256
static inline void HplMsp430Usart0P$configSpi(msp430_spi_union_config_t *config)
#line 256
{

  U0CTL = (config->spiRegisters.uctl | 0x04) | 0x01;
  HplMsp430Usart0P$U0TCTL = config->spiRegisters.utctl;

  HplMsp430Usart0P$Usart$setUbr(config->spiRegisters.ubr);
  HplMsp430Usart0P$Usart$setUmctl(0x00);
}

# 54 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline   void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP$19$IO$selectModuleFunc(void)
#line 54
{
  /* atomic removed: atomic calls only */
#line 54
  * (volatile uint8_t *)27U |= 0x01 << 3;
}

# 78 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static   void HplMsp430Usart0P$UCLK$selectModuleFunc(void){
#line 78
  /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP$19$IO$selectModuleFunc();
#line 78
}
#line 78
# 54 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline   void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP$18$IO$selectModuleFunc(void)
#line 54
{
  /* atomic removed: atomic calls only */
#line 54
  * (volatile uint8_t *)27U |= 0x01 << 2;
}

# 78 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static   void HplMsp430Usart0P$SOMI$selectModuleFunc(void){
#line 78
  /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP$18$IO$selectModuleFunc();
#line 78
}
#line 78
# 54 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline   void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP$17$IO$selectModuleFunc(void)
#line 54
{
  /* atomic removed: atomic calls only */
#line 54
  * (volatile uint8_t *)27U |= 0x01 << 1;
}

# 78 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static   void HplMsp430Usart0P$SIMO$selectModuleFunc(void){
#line 78
  /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP$17$IO$selectModuleFunc();
#line 78
}
#line 78
# 238 "/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline   void HplMsp430Usart0P$Usart$enableSpi(void)
#line 238
{
  /* atomic removed: atomic calls only */
#line 239
  {
    HplMsp430Usart0P$SIMO$selectModuleFunc();
    HplMsp430Usart0P$SOMI$selectModuleFunc();
    HplMsp430Usart0P$UCLK$selectModuleFunc();
  }
  HplMsp430Usart0P$ME1 |= 1 << 6;
}

#line 345
static inline   void HplMsp430Usart0P$Usart$clrIntr(void)
#line 345
{
  HplMsp430Usart0P$IFG1 &= ~((1 << 7) | (1 << 6));
}









static inline   void HplMsp430Usart0P$Usart$disableIntr(void)
#line 357
{
  HplMsp430Usart0P$IE1 &= ~((1 << 7) | (1 << 6));
}

# 118 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
static inline   void StateImplP$State$toIdle(uint8_t id)
#line 118
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 119
    StateImplP$state[id] = StateImplP$S_IDLE;
#line 119
    __nesc_atomic_end(__nesc_atomic); }
}

# 56 "/opt/tinyos-2.x/tos/interfaces/State.nc"
inline static   void CC2420SpiP$WorkingState$toIdle(void){
#line 56
  StateImplP$State$toIdle(0U);
#line 56
}
#line 56
# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t CC2420TransmitP$SpiResource$request(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = CC2420SpiP$Resource$request(/*CC2420TransmitC.Spi*/CC2420SpiC$3$CLIENT_ID);
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 193 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline    void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$default$requested(void)
#line 193
{
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$release();
}

# 73 "/opt/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
inline static   void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$requested(void){
#line 73
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$default$requested();
#line 73
}
#line 73
# 54 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline   bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(resource_client_id_t id)
#line 54
{
  return /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$resQ[id] != /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$NO_ENTRY || /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$qTail == id;
}

#line 72
static inline   error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(resource_client_id_t id)
#line 72
{
  /* atomic removed: atomic calls only */
#line 73
  {
    if (!/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(id)) {
        if (/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$qHead == /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$NO_ENTRY) {
          /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$qHead = id;
          }
        else {
#line 78
          /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$resQ[/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$qTail] = id;
          }
#line 79
        /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$qTail = id;
        {
          unsigned char __nesc_temp = 
#line 80
          SUCCESS;

#line 80
          return __nesc_temp;
        }
      }
#line 82
    {
      unsigned char __nesc_temp = 
#line 82
      EBUSY;

#line 82
      return __nesc_temp;
    }
  }
}

# 69 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static   error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Queue$enqueue(resource_client_id_t arg_0x40c9fe20){
#line 69
  unsigned char result;
#line 69

#line 69
  result = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(arg_0x40c9fe20);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 187 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline    void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(uint8_t id)
#line 187
{
}

# 43 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static   void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceRequested$requested(uint8_t arg_0x40cbe4c8){
#line 43
    /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(arg_0x40cbe4c8);
#line 43
}
#line 43
# 76 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline   error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Resource$request(uint8_t id)
#line 76
{
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceRequested$requested(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$resId);
  /* atomic removed: atomic calls only */
#line 78
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$RES_CONTROLLED) {
        /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$RES_GRANTING;
        /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$reqResId = id;
      }
    else {
        unsigned char __nesc_temp = 
#line 83
        /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Queue$enqueue(id);

#line 83
        return __nesc_temp;
      }
  }
#line 85
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$requested();
  return SUCCESS;
}

# 111 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline    error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$default$request(uint8_t id)
#line 111
{
#line 111
  return FAIL;
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$request(uint8_t arg_0x40b8b118){
#line 78
  unsigned char result;
#line 78

#line 78
  switch (arg_0x40b8b118) {
#line 78
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C$0$CLIENT_ID:
#line 78
      result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Resource$request(/*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C$0$CLIENT_ID);
#line 78
      break;
#line 78
    default:
#line 78
      result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$default$request(arg_0x40b8b118);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 72 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline   error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$request(uint8_t id)
#line 72
{
  return /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$request(id);
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t CC2420SpiP$SpiResource$request(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$request(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C$0$CLIENT_ID);
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 382 "/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline   void HplMsp430Usart0P$Usart$tx(uint8_t data)
#line 382
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 383
    HplMsp430Usart0P$U0TXBUF = data;
#line 383
    __nesc_atomic_end(__nesc_atomic); }
}

# 224 "/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static   void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$tx(uint8_t arg_0x40ba10f8){
#line 224
  HplMsp430Usart0P$Usart$tx(arg_0x40ba10f8);
#line 224
}
#line 224
# 330 "/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline   bool HplMsp430Usart0P$Usart$isRxIntrPending(void)
#line 330
{
  if (HplMsp430Usart0P$IFG1 & (1 << 6)) {
      return TRUE;
    }
  return FALSE;
}

# 192 "/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static   bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$isRxIntrPending(void){
#line 192
  unsigned char result;
#line 192

#line 192
  result = HplMsp430Usart0P$Usart$isRxIntrPending();
#line 192

#line 192
  return result;
#line 192
}
#line 192
# 341 "/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline   void HplMsp430Usart0P$Usart$clrRxIntr(void)
#line 341
{
  HplMsp430Usart0P$IFG1 &= ~(1 << 6);
}

# 197 "/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static   void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$clrRxIntr(void){
#line 197
  HplMsp430Usart0P$Usart$clrRxIntr();
#line 197
}
#line 197
#line 231
inline static   uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$rx(void){
#line 231
  unsigned char result;
#line 231

#line 231
  result = HplMsp430Usart0P$Usart$rx();
#line 231

#line 231
  return result;
#line 231
}
#line 231
# 93 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline   void CC2420SpiP$ChipSpiResource$abortRelease(void)
#line 93
{
  /* atomic removed: atomic calls only */
#line 94
  CC2420SpiP$release = FALSE;
}

# 31 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static   void CC2420TransmitP$ChipSpiResource$abortRelease(void){
#line 31
  CC2420SpiP$ChipSpiResource$abortRelease();
#line 31
}
#line 31
# 328 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline   void CC2420TransmitP$ChipSpiResource$releasing(void)
#line 328
{
  if (CC2420TransmitP$abortSpiRelease) {
      CC2420TransmitP$ChipSpiResource$abortRelease();
    }
}

# 24 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static   void CC2420SpiP$ChipSpiResource$releasing(void){
#line 24
  CC2420TransmitP$ChipSpiResource$releasing();
#line 24
}
#line 24
# 151 "/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline   void HplMsp430Usart0P$Usart$resetUsart(bool reset)
#line 151
{
  if (reset) {
      U0CTL = 0x01;
    }
  else {
      U0CTL &= ~0x01;
    }
}

# 97 "/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static   void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$resetUsart(bool arg_0x40b82d78){
#line 97
  HplMsp430Usart0P$Usart$resetUsart(arg_0x40b82d78);
#line 97
}
#line 97
# 56 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline   void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP$19$IO$selectIOFunc(void)
#line 56
{
  /* atomic removed: atomic calls only */
#line 56
  * (volatile uint8_t *)27U &= ~(0x01 << 3);
}

# 85 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static   void HplMsp430Usart0P$UCLK$selectIOFunc(void){
#line 85
  /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP$19$IO$selectIOFunc();
#line 85
}
#line 85
# 56 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline   void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP$18$IO$selectIOFunc(void)
#line 56
{
  /* atomic removed: atomic calls only */
#line 56
  * (volatile uint8_t *)27U &= ~(0x01 << 2);
}

# 85 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static   void HplMsp430Usart0P$SOMI$selectIOFunc(void){
#line 85
  /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP$18$IO$selectIOFunc();
#line 85
}
#line 85
# 56 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline   void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP$17$IO$selectIOFunc(void)
#line 56
{
  /* atomic removed: atomic calls only */
#line 56
  * (volatile uint8_t *)27U &= ~(0x01 << 1);
}

# 85 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static   void HplMsp430Usart0P$SIMO$selectIOFunc(void){
#line 85
  /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP$17$IO$selectIOFunc();
#line 85
}
#line 85
# 247 "/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline   void HplMsp430Usart0P$Usart$disableSpi(void)
#line 247
{
  /* atomic removed: atomic calls only */
#line 248
  {
    HplMsp430Usart0P$ME1 &= ~(1 << 6);
    HplMsp430Usart0P$SIMO$selectIOFunc();
    HplMsp430Usart0P$SOMI$selectIOFunc();
    HplMsp430Usart0P$UCLK$selectIOFunc();
  }
}

# 158 "/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static   void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$disableSpi(void){
#line 158
  HplMsp430Usart0P$Usart$disableSpi();
#line 158
}
#line 158
# 88 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline   void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$ResourceConfigure$unconfigure(uint8_t id)
#line 88
{
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$resetUsart(TRUE);
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$disableSpi();
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$resetUsart(FALSE);
}

# 201 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline    void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(uint8_t id)
#line 201
{
}

# 55 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static   void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceConfigure$unconfigure(uint8_t arg_0x40cbd678){
#line 55
  switch (arg_0x40cbd678) {
#line 55
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C$0$CLIENT_ID:
#line 55
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$ResourceConfigure$unconfigure(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C$0$CLIENT_ID);
#line 55
      break;
#line 55
    default:
#line 55
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(arg_0x40cbd678);
#line 55
      break;
#line 55
    }
#line 55
}
#line 55
# 191 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline    void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$default$granted(void)
#line 191
{
}

# 46 "/opt/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
inline static   void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$granted(void){
#line 46
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$default$granted();
#line 46
}
#line 46
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$grantedTask$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$grantedTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 58 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline   resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue(void)
#line 58
{
  /* atomic removed: atomic calls only */
#line 59
  {
    if (/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$qHead != /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$NO_ENTRY) {
        uint8_t id = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$qHead;

#line 62
        /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$qHead = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$resQ[/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$qHead];
        if (/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$qHead == /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$NO_ENTRY) {
          /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$qTail = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$NO_ENTRY;
          }
#line 65
        /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$resQ[id] = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$NO_ENTRY;
        {
          unsigned char __nesc_temp = 
#line 66
          id;

#line 66
          return __nesc_temp;
        }
      }
#line 68
    {
      unsigned char __nesc_temp = 
#line 68
      /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$NO_ENTRY;

#line 68
      return __nesc_temp;
    }
  }
}

# 60 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static   resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Queue$dequeue(void){
#line 60
  unsigned char result;
#line 60

#line 60
  result = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue();
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 50 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline   bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty(void)
#line 50
{
  return /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$qHead == /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$NO_ENTRY;
}

# 43 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static   bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Queue$isEmpty(void){
#line 43
  unsigned char result;
#line 43

#line 43
  result = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty();
#line 43

#line 43
  return result;
#line 43
}
#line 43
# 107 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline   error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Resource$release(uint8_t id)
#line 107
{
  /* atomic removed: atomic calls only */
#line 108
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$RES_BUSY && /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$resId == id) {
        if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Queue$isEmpty() == FALSE) {
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$reqResId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Queue$dequeue();
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$RES_GRANTING;
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$grantedTask$postTask();
          }
        else {
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$default_owner_id;
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$RES_CONTROLLED;
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$granted();
          }
        /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceConfigure$unconfigure(id);
      }
  }
  return FAIL;
}

# 113 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline    error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$default$release(uint8_t id)
#line 113
{
#line 113
  return FAIL;
}

# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$release(uint8_t arg_0x40b8b118){
#line 110
  unsigned char result;
#line 110

#line 110
  switch (arg_0x40b8b118) {
#line 110
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C$0$CLIENT_ID:
#line 110
      result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Resource$release(/*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C$0$CLIENT_ID);
#line 110
      break;
#line 110
    default:
#line 110
      result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$default$release(arg_0x40b8b118);
#line 110
      break;
#line 110
    }
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 80 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline   error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$release(uint8_t id)
#line 80
{
  return /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$release(id);
}

# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t CC2420SpiP$SpiResource$release(void){
#line 110
  unsigned char result;
#line 110

#line 110
  result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$release(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C$0$CLIENT_ID);
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static   cc2420_status_t CC2420TransmitP$STXONCCA$strobe(void){
#line 45
  unsigned char result;
#line 45

#line 45
  result = CC2420SpiP$Strobe$strobe(CC2420_STXONCCA);
#line 45

#line 45
  return result;
#line 45
}
#line 45
inline static   cc2420_status_t CC2420TransmitP$STXON$strobe(void){
#line 45
  unsigned char result;
#line 45

#line 45
  result = CC2420SpiP$Strobe$strobe(CC2420_STXON);
#line 45

#line 45
  return result;
#line 45
}
#line 45
inline static   cc2420_status_t CC2420TransmitP$SNOP$strobe(void){
#line 45
  unsigned char result;
#line 45

#line 45
  result = CC2420SpiP$Strobe$strobe(CC2420_SNOP);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 100 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline   error_t CC2420SpiP$ChipSpiResource$attemptRelease(void)
#line 100
{
  return CC2420SpiP$attemptRelease();
}

# 39 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static   error_t CC2420TransmitP$ChipSpiResource$attemptRelease(void){
#line 39
  unsigned char result;
#line 39

#line 39
  result = CC2420SpiP$ChipSpiResource$attemptRelease();
#line 39

#line 39
  return result;
#line 39
}
#line 39
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t CC2420CsmaP$sendDone_task$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(CC2420CsmaP$sendDone_task);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 194 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline   void CC2420CsmaP$CC2420Transmit$sendDone(message_t *p_msg, error_t err)
#line 194
{
  /* atomic removed: atomic calls only */
#line 195
  CC2420CsmaP$sendErr = err;
  CC2420CsmaP$sendDone_task$postTask();
}

# 73 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
inline static   void CC2420TransmitP$Send$sendDone(message_t *arg_0x40797ad0, error_t arg_0x40797c58){
#line 73
  CC2420CsmaP$CC2420Transmit$sendDone(arg_0x40797ad0, arg_0x40797c58);
#line 73
}
#line 73
# 54 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline   void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP$25$IO$selectModuleFunc(void)
#line 54
{
  /* atomic removed: atomic calls only */
#line 54
  * (volatile uint8_t *)31U |= 0x01 << 1;
}

# 78 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static   void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$GeneralIO$selectModuleFunc(void){
#line 78
  /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP$25$IO$selectModuleFunc();
#line 78
}
#line 78
# 46 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$CC2int(/*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$cc_t x)
#line 46
{
#line 46
  union /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$__nesc_unnamed4344 {
#line 46
    /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$cc_t f;
#line 46
    uint16_t t;
  } 
#line 46
  c = { .f = x };

#line 46
  return c.t;
}

#line 61
static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$captureControl(uint8_t l_cm)
{
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$cc_t x = { 
  .cm = l_cm & 0x03, 
  .ccis = 0, 
  .clld = 0, 
  .cap = 1, 
  .scs = 1, 
  .ccie = 0 };

  return /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$CC2int(x);
}

#line 99
static inline   void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Control$setControlAsCapture(uint8_t cm)
{
  * (volatile uint16_t *)388U = /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$captureControl(cm);
}

# 37 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static   void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Msp430TimerControl$setControlAsCapture(bool arg_0x406389d0){
#line 37
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Control$setControlAsCapture(arg_0x406389d0);
#line 37
}
#line 37
# 119 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline   void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Control$enableEvents(void)
{
  * (volatile uint16_t *)388U |= 0x0010;
}

# 39 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static   void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Msp430TimerControl$enableEvents(void){
#line 39
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Control$enableEvents();
#line 39
}
#line 39
# 181 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline    void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Compare$default$fired(void)
{
}

# 34 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static   void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Compare$fired(void){
#line 34
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Compare$default$fired();
#line 34
}
#line 34
# 139 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline   uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Capture$getEvent(void)
{
  return * (volatile uint16_t *)404U;
}

# 276 "/usr/local/lib/ncc/nesc_nx.h"
static __inline uint16_t __nesc_ntoh_leuint16(const void *source)
#line 276
{
  const uint8_t *base = source;

#line 278
  return ((uint16_t )base[1] << 8) | base[0];
}

#line 269
static __inline uint16_t __nesc_hton_uint16(void *target, uint16_t value)
#line 269
{
  uint8_t *base = target;

#line 271
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

# 206 "/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline   void CC2420ReceiveP$CC2420Receive$sfd_dropped(void)
#line 206
{
  if (CC2420ReceiveP$m_timestamp_size) {
      CC2420ReceiveP$m_timestamp_size--;
    }
}

# 53 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static   void CC2420TransmitP$CC2420Receive$sfd_dropped(void){
#line 53
  CC2420ReceiveP$CC2420Receive$sfd_dropped();
#line 53
}
#line 53
# 48 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline   uint8_t /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP$25$IO$getRaw(void)
#line 48
{
#line 48
  return * (volatile uint8_t *)28U & (0x01 << 1);
}

#line 49
static inline   bool /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP$25$IO$get(void)
#line 49
{
#line 49
  return /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP$25$IO$getRaw() != 0;
}

# 59 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static   bool /*HplCC2420PinsC.SFDM*/Msp430GpioC$5$HplGeneralIO$get(void){
#line 59
  unsigned char result;
#line 59

#line 59
  result = /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP$25$IO$get();
#line 59

#line 59
  return result;
#line 59
}
#line 59
# 40 "/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline   bool /*HplCC2420PinsC.SFDM*/Msp430GpioC$5$GeneralIO$get(void)
#line 40
{
#line 40
  return /*HplCC2420PinsC.SFDM*/Msp430GpioC$5$HplGeneralIO$get();
}

# 32 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   bool CC2420TransmitP$SFD$get(void){
#line 32
  unsigned char result;
#line 32

#line 32
  result = /*HplCC2420PinsC.SFDM*/Msp430GpioC$5$GeneralIO$get();
#line 32

#line 32
  return result;
#line 32
}
#line 32
# 197 "/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline   void CC2420ReceiveP$CC2420Receive$sfd(uint16_t time)
#line 197
{
  if (CC2420ReceiveP$m_timestamp_size < CC2420ReceiveP$TIMESTAMP_QUEUE_SIZE) {
      uint8_t tail = (CC2420ReceiveP$m_timestamp_head + CC2420ReceiveP$m_timestamp_size) % 
      CC2420ReceiveP$TIMESTAMP_QUEUE_SIZE;

#line 201
      CC2420ReceiveP$m_timestamp_queue[tail] = time;
      CC2420ReceiveP$m_timestamp_size++;
    }
}

# 47 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static   void CC2420TransmitP$CC2420Receive$sfd(uint16_t arg_0x40d3eb98){
#line 47
  CC2420ReceiveP$CC2420Receive$sfd(arg_0x40d3eb98);
#line 47
}
#line 47
# 698 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline    void CC2420TransmitP$TimeStamp$default$receivedSFD(uint16_t time)
#line 698
{
}

# 50 "/opt/tinyos-2.x/tos/interfaces/RadioTimeStamping.nc"
inline static   void CC2420TransmitP$TimeStamp$receivedSFD(uint16_t arg_0x40d2a768){
#line 50
  CC2420TransmitP$TimeStamp$default$receivedSFD(arg_0x40d2a768);
#line 50
}
#line 50
# 54 "/opt/tinyos-2.x/tos/chips/msp430/timer/GpioCaptureC.nc"
static inline   error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Capture$captureFallingEdge(void)
#line 54
{
  return /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$enableCapture(MSP430TIMER_CM_FALLING);
}

# 43 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
inline static   error_t CC2420TransmitP$CaptureSFD$captureFallingEdge(void){
#line 43
  unsigned char result;
#line 43

#line 43
  result = /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Capture$captureFallingEdge();
#line 43

#line 43
  return result;
#line 43
}
#line 43
# 89 "/opt/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketC.nc"
static inline   cc2420_header_t *CC2420PacketC$CC2420PacketBody$getHeader(message_t *msg)
#line 89
{
  return (cc2420_header_t *)(msg->data - sizeof(cc2420_header_t ));
}

# 42 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static   cc2420_header_t *CC2420TransmitP$CC2420PacketBody$getHeader(message_t *arg_0x40733b28){
#line 42
  nx_struct cc2420_header_t *result;
#line 42

#line 42
  result = CC2420PacketC$CC2420PacketBody$getHeader(arg_0x40733b28);
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 93 "/opt/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketC.nc"
static inline   cc2420_metadata_t *CC2420PacketC$CC2420PacketBody$getMetadata(message_t *msg)
#line 93
{
  return (cc2420_metadata_t *)msg->metadata;
}

# 47 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static   cc2420_metadata_t *CC2420TransmitP$CC2420PacketBody$getMetadata(message_t *arg_0x407320a8){
#line 47
  nx_struct cc2420_metadata_t *result;
#line 47

#line 47
  result = CC2420PacketC$CC2420PacketBody$getMetadata(arg_0x407320a8);
#line 47

#line 47
  return result;
#line 47
}
#line 47
# 54 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$Alarm$stop(void)
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$Msp430TimerControl$disableEvents();
}

# 62 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$AlarmFrom$stop(void){
#line 62
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$Alarm$stop();
#line 62
}
#line 62
# 91 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$Alarm$stop(void)
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$AlarmFrom$stop();
}

# 62 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void CC2420TransmitP$BackoffTimer$stop(void){
#line 62
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$Alarm$stop();
#line 62
}
#line 62
# 695 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline    void CC2420TransmitP$TimeStamp$default$transmittedSFD(uint16_t time, message_t *p_msg)
#line 695
{
}

# 39 "/opt/tinyos-2.x/tos/interfaces/RadioTimeStamping.nc"
inline static   void CC2420TransmitP$TimeStamp$transmittedSFD(uint16_t arg_0x40d2a088, message_t *arg_0x40d2a238){
#line 39
  CC2420TransmitP$TimeStamp$default$transmittedSFD(arg_0x40d2a088, arg_0x40d2a238);
#line 39
}
#line 39
# 259 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline   void CC2420TransmitP$CaptureSFD$captured(uint16_t time)
#line 259
{
  /* atomic removed: atomic calls only */
#line 260
  {
    switch (CC2420TransmitP$m_state) {

        case CC2420TransmitP$S_SFD: 
          CC2420TransmitP$m_state = CC2420TransmitP$S_EFD;
        CC2420TransmitP$sfdHigh = TRUE;
        CC2420TransmitP$CaptureSFD$captureFallingEdge();
        CC2420TransmitP$TimeStamp$transmittedSFD(time, CC2420TransmitP$m_msg);
        if (__nesc_ntoh_leuint16((unsigned char *)&CC2420TransmitP$CC2420PacketBody$getHeader(CC2420TransmitP$m_msg)->fcf) & (1 << IEEE154_FCF_ACK_REQ)) {

            CC2420TransmitP$abortSpiRelease = TRUE;
          }
        CC2420TransmitP$releaseSpiResource();
        CC2420TransmitP$BackoffTimer$stop();


        if (((__nesc_ntoh_leuint16((unsigned char *)&CC2420TransmitP$CC2420PacketBody$getHeader(CC2420TransmitP$m_msg)->fcf) >> IEEE154_FCF_FRAME_TYPE) & 7) == IEEE154_TYPE_DATA) {
            __nesc_hton_uint16((unsigned char *)&CC2420TransmitP$CC2420PacketBody$getMetadata(CC2420TransmitP$m_msg)->time, time);
          }

        if (CC2420TransmitP$SFD$get()) {
            break;
          }


        case CC2420TransmitP$S_EFD: 
          CC2420TransmitP$sfdHigh = FALSE;
        CC2420TransmitP$CaptureSFD$captureRisingEdge();

        if (__nesc_ntoh_leuint16((unsigned char *)&CC2420TransmitP$CC2420PacketBody$getHeader(CC2420TransmitP$m_msg)->fcf) & (1 << IEEE154_FCF_ACK_REQ)) {
            CC2420TransmitP$m_state = CC2420TransmitP$S_ACK_WAIT;
            CC2420TransmitP$BackoffTimer$start(CC2420_ACK_WAIT_DELAY);
          }
        else 
#line 292
          {
            CC2420TransmitP$signalDone(SUCCESS);
          }

        if (!CC2420TransmitP$SFD$get()) {
            break;
          }


        default: 
          if (!CC2420TransmitP$m_receiving) {
              CC2420TransmitP$sfdHigh = TRUE;
              CC2420TransmitP$CaptureSFD$captureFallingEdge();
              CC2420TransmitP$TimeStamp$receivedSFD(time);
              CC2420TransmitP$CC2420Receive$sfd(time);
              CC2420TransmitP$m_receiving = TRUE;
              CC2420TransmitP$m_prev_time = time;
              if (CC2420TransmitP$SFD$get()) {

                  return;
                }
            }

        CC2420TransmitP$sfdHigh = FALSE;
        CC2420TransmitP$CaptureSFD$captureRisingEdge();
        CC2420TransmitP$m_receiving = FALSE;
        if (time - CC2420TransmitP$m_prev_time < 10) {
            CC2420TransmitP$CC2420Receive$sfd_dropped();
          }
        break;
      }
  }
}

# 50 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
inline static   void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Capture$captured(uint16_t arg_0x40a0e010){
#line 50
  CC2420TransmitP$CaptureSFD$captured(arg_0x40a0e010);
#line 50
}
#line 50
# 164 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline   void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Capture$clearOverflow(void)
{
  * (volatile uint16_t *)388U &= ~0x0002;
}

# 57 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
inline static   void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Msp430Capture$clearOverflow(void){
#line 57
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Capture$clearOverflow();
#line 57
}
#line 57
# 84 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline   void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Control$clearPendingInterrupt(void)
{
  * (volatile uint16_t *)388U &= ~0x0001;
}

# 33 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static   void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Msp430TimerControl$clearPendingInterrupt(void){
#line 33
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Control$clearPendingInterrupt();
#line 33
}
#line 33
# 65 "/opt/tinyos-2.x/tos/chips/msp430/timer/GpioCaptureC.nc"
static inline   void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Msp430Capture$captured(uint16_t time)
#line 65
{
  /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Msp430TimerControl$clearPendingInterrupt();
  /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Msp430Capture$clearOverflow();
  /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Capture$captured(time);
}

# 75 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
inline static   void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Capture$captured(uint16_t arg_0x4063ef20){
#line 75
  /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Msp430Capture$captured(arg_0x4063ef20);
#line 75
}
#line 75
# 47 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$int2CC(uint16_t x)
#line 47
{
#line 47
  union /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$__nesc_unnamed4345 {
#line 47
    uint16_t f;
#line 47
    /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$cc_t t;
  } 
#line 47
  c = { .f = x };

#line 47
  return c.t;
}

#line 74
static inline   /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Control$getControl(void)
{
  return /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$int2CC(* (volatile uint16_t *)388U);
}

#line 169
static inline   void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Event$fired(void)
{
  if (/*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Control$getControl().cap) {
    /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Capture$captured(/*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Capture$getEvent());
    }
  else {
#line 174
    /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Compare$fired();
    }
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 70 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void)
{
#line 71
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask();
}

# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$Alarm$fired(void){
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired();
#line 67
}
#line 67
# 151 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline   void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$AlarmFrom$fired(void)
{
  /* atomic removed: atomic calls only */
  {
    if (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$m_dt == 0) 
      {
        /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$Alarm$fired();
      }
    else 
      {
        /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$set_alarm();
      }
  }
}

# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Alarm$fired(void){
#line 67
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$AlarmFrom$fired();
#line 67
}
#line 67
# 124 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline   void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Control$disableEvents(void)
{
  * (volatile uint16_t *)390U &= ~0x0010;
}

# 40 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static   void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430TimerControl$disableEvents(void){
#line 40
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Control$disableEvents();
#line 40
}
#line 40
# 59 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline   void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430Compare$fired(void)
{
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430TimerControl$disableEvents();
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Alarm$fired();
}

# 34 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static   void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Compare$fired(void){
#line 34
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430Compare$fired();
#line 34
}
#line 34
# 139 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline   uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Capture$getEvent(void)
{
  return * (volatile uint16_t *)406U;
}

#line 177
static inline    void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Capture$default$captured(uint16_t n)
{
}

# 75 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
inline static   void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Capture$captured(uint16_t arg_0x4063ef20){
#line 75
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Capture$default$captured(arg_0x4063ef20);
#line 75
}
#line 75
# 47 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$int2CC(uint16_t x)
#line 47
{
#line 47
  union /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$__nesc_unnamed4346 {
#line 47
    uint16_t f;
#line 47
    /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$cc_t t;
  } 
#line 47
  c = { .f = x };

#line 47
  return c.t;
}

#line 74
static inline   /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Control$getControl(void)
{
  return /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$int2CC(* (volatile uint16_t *)390U);
}

#line 169
static inline   void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Event$fired(void)
{
  if (/*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Control$getControl().cap) {
    /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Capture$captured(/*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Capture$getEvent());
    }
  else {
#line 174
    /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Compare$fired();
    }
}

# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   /*CounterMilli32C.Transform*/TransformCounterC$1$CounterFrom$size_type /*CounterMilli32C.Transform*/TransformCounterC$1$CounterFrom$get(void){
#line 53
  unsigned int result;
#line 53

#line 53
  result = /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$Counter$get();
#line 53

#line 53
  return result;
#line 53
}
#line 53







inline static   bool /*CounterMilli32C.Transform*/TransformCounterC$1$CounterFrom$isOverflowPending(void){
#line 60
  unsigned char result;
#line 60

#line 60
  result = /*Msp430Counter32khzC.Counter*/Msp430CounterC$0$Counter$isOverflowPending();
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 119 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline   void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Control$enableEvents(void)
{
  * (volatile uint16_t *)390U |= 0x0010;
}

# 39 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static   void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430TimerControl$enableEvents(void){
#line 39
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Control$enableEvents();
#line 39
}
#line 39
# 84 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline   void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Control$clearPendingInterrupt(void)
{
  * (volatile uint16_t *)390U &= ~0x0001;
}

# 33 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static   void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430TimerControl$clearPendingInterrupt(void){
#line 33
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Control$clearPendingInterrupt();
#line 33
}
#line 33
# 144 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline   void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Compare$setEvent(uint16_t x)
{
  * (volatile uint16_t *)406U = x;
}

# 30 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static   void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430Compare$setEvent(uint16_t arg_0x40646eb8){
#line 30
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Compare$setEvent(arg_0x40646eb8);
#line 30
}
#line 30
# 34 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
inline static   uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Timer$get(void){
#line 34
  unsigned int result;
#line 34

#line 34
  result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Timer$get();
#line 34

#line 34
  return result;
#line 34
}
#line 34
# 154 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline   void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Compare$setEventFromNow(uint16_t x)
{
  * (volatile uint16_t *)406U = /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Timer$get() + x;
}

# 32 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static   void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430Compare$setEventFromNow(uint16_t arg_0x40645830){
#line 32
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Compare$setEventFromNow(arg_0x40645830);
#line 32
}
#line 32
# 34 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc"
inline static   uint16_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430Timer$get(void){
#line 34
  unsigned int result;
#line 34

#line 34
  result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Timer$get();
#line 34

#line 34
  return result;
#line 34
}
#line 34
# 70 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline   void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Alarm$startAt(uint16_t t0, uint16_t dt)
{
  /* atomic removed: atomic calls only */
  {
    uint16_t now = /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430Timer$get();
    uint16_t elapsed = now - t0;

#line 76
    if (elapsed >= dt) 
      {
        /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430Compare$setEventFromNow(2);
      }
    else 
      {
        uint16_t remaining = dt - elapsed;

#line 83
        if (remaining <= 2) {
          /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430Compare$setEventFromNow(2);
          }
        else {
#line 86
          /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430Compare$setEvent(now + remaining);
          }
      }
#line 88
    /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430TimerControl$clearPendingInterrupt();
    /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430TimerControl$enableEvents();
  }
}

# 92 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$AlarmFrom$startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$AlarmFrom$size_type arg_0x407dfac0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$AlarmFrom$size_type arg_0x407dfc50){
#line 92
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Alarm$startAt(arg_0x407dfac0, arg_0x407dfc50);
#line 92
}
#line 92
# 181 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline    void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Compare$default$fired(void)
{
}

# 34 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static   void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Compare$fired(void){
#line 34
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Compare$default$fired();
#line 34
}
#line 34
# 139 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline   uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Capture$getEvent(void)
{
  return * (volatile uint16_t *)408U;
}

#line 177
static inline    void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Capture$default$captured(uint16_t n)
{
}

# 75 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
inline static   void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Capture$captured(uint16_t arg_0x4063ef20){
#line 75
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Capture$default$captured(arg_0x4063ef20);
#line 75
}
#line 75
# 47 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$cc_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$int2CC(uint16_t x)
#line 47
{
#line 47
  union /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$__nesc_unnamed4347 {
#line 47
    uint16_t f;
#line 47
    /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$cc_t t;
  } 
#line 47
  c = { .f = x };

#line 47
  return c.t;
}

#line 74
static inline   /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$cc_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Control$getControl(void)
{
  return /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$int2CC(* (volatile uint16_t *)392U);
}

#line 169
static inline   void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Event$fired(void)
{
  if (/*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Control$getControl().cap) {
    /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Capture$captured(/*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Capture$getEvent());
    }
  else {
#line 174
    /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Compare$fired();
    }
}




static inline    void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Compare$default$fired(void)
{
}

# 34 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static   void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Compare$fired(void){
#line 34
  /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Compare$default$fired();
#line 34
}
#line 34
# 139 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline   uint16_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Capture$getEvent(void)
{
  return * (volatile uint16_t *)410U;
}

#line 177
static inline    void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Capture$default$captured(uint16_t n)
{
}

# 75 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
inline static   void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Capture$captured(uint16_t arg_0x4063ef20){
#line 75
  /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Capture$default$captured(arg_0x4063ef20);
#line 75
}
#line 75
# 47 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$cc_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$int2CC(uint16_t x)
#line 47
{
#line 47
  union /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$__nesc_unnamed4348 {
#line 47
    uint16_t f;
#line 47
    /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$cc_t t;
  } 
#line 47
  c = { .f = x };

#line 47
  return c.t;
}

#line 74
static inline   /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$cc_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Control$getControl(void)
{
  return /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$int2CC(* (volatile uint16_t *)394U);
}

#line 169
static inline   void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Event$fired(void)
{
  if (/*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Control$getControl().cap) {
    /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Capture$captured(/*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Capture$getEvent());
    }
  else {
#line 174
    /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Compare$fired();
    }
}




static inline    void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Compare$default$fired(void)
{
}

# 34 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static   void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Compare$fired(void){
#line 34
  /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Compare$default$fired();
#line 34
}
#line 34
# 139 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline   uint16_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Capture$getEvent(void)
{
  return * (volatile uint16_t *)412U;
}

#line 177
static inline    void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Capture$default$captured(uint16_t n)
{
}

# 75 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
inline static   void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Capture$captured(uint16_t arg_0x4063ef20){
#line 75
  /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Capture$default$captured(arg_0x4063ef20);
#line 75
}
#line 75
# 47 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$cc_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$int2CC(uint16_t x)
#line 47
{
#line 47
  union /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$__nesc_unnamed4349 {
#line 47
    uint16_t f;
#line 47
    /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$cc_t t;
  } 
#line 47
  c = { .f = x };

#line 47
  return c.t;
}

#line 74
static inline   /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$cc_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Control$getControl(void)
{
  return /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$int2CC(* (volatile uint16_t *)396U);
}

#line 169
static inline   void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Event$fired(void)
{
  if (/*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Control$getControl().cap) {
    /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Capture$captured(/*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Capture$getEvent());
    }
  else {
#line 174
    /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Compare$fired();
    }
}




static inline    void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Compare$default$fired(void)
{
}

# 34 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc"
inline static   void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Compare$fired(void){
#line 34
  /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Compare$default$fired();
#line 34
}
#line 34
# 139 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline   uint16_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Capture$getEvent(void)
{
  return * (volatile uint16_t *)414U;
}

#line 177
static inline    void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Capture$default$captured(uint16_t n)
{
}

# 75 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc"
inline static   void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Capture$captured(uint16_t arg_0x4063ef20){
#line 75
  /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Capture$default$captured(arg_0x4063ef20);
#line 75
}
#line 75
# 47 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$cc_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$int2CC(uint16_t x)
#line 47
{
#line 47
  union /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$__nesc_unnamed4350 {
#line 47
    uint16_t f;
#line 47
    /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$cc_t t;
  } 
#line 47
  c = { .f = x };

#line 47
  return c.t;
}

#line 74
static inline   /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$cc_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Control$getControl(void)
{
  return /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$int2CC(* (volatile uint16_t *)398U);
}

#line 169
static inline   void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Event$fired(void)
{
  if (/*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Control$getControl().cap) {
    /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Capture$captured(/*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Capture$getEvent());
    }
  else {
#line 174
    /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Compare$fired();
    }
}

# 120 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline   void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$VectorTimerX1$fired(void)
{
  uint8_t n = * (volatile uint16_t *)286U;

#line 123
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Event$fired(n >> 1);
}

# 28 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static   void Msp430TimerCommonP$VectorTimerB1$fired(void){
#line 28
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$VectorTimerX1$fired();
#line 28
}
#line 28
# 113 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static inline  void SchedulerBasicP$Scheduler$init(void)
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP$m_next, SchedulerBasicP$NO_TASK, sizeof SchedulerBasicP$m_next);
    SchedulerBasicP$m_head = SchedulerBasicP$NO_TASK;
    SchedulerBasicP$m_tail = SchedulerBasicP$NO_TASK;
  }
}

# 46 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static  void RealMainP$Scheduler$init(void){
#line 46
  SchedulerBasicP$Scheduler$init();
#line 46
}
#line 46
# 45 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline   void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP$38$IO$set(void)
#line 45
{
  /* atomic removed: atomic calls only */
#line 45
  * (volatile uint8_t *)49U |= 0x01 << 6;
}

# 34 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static   void /*PlatformLedsC.Led2Impl*/Msp430GpioC$9$HplGeneralIO$set(void){
#line 34
  /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP$38$IO$set();
#line 34
}
#line 34
# 37 "/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline   void /*PlatformLedsC.Led2Impl*/Msp430GpioC$9$GeneralIO$set(void)
#line 37
{
#line 37
  /*PlatformLedsC.Led2Impl*/Msp430GpioC$9$HplGeneralIO$set();
}

# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led2$set(void){
#line 29
  /*PlatformLedsC.Led2Impl*/Msp430GpioC$9$GeneralIO$set();
#line 29
}
#line 29
# 45 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline   void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP$37$IO$set(void)
#line 45
{
  /* atomic removed: atomic calls only */
#line 45
  * (volatile uint8_t *)49U |= 0x01 << 5;
}

# 34 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static   void /*PlatformLedsC.Led1Impl*/Msp430GpioC$8$HplGeneralIO$set(void){
#line 34
  /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP$37$IO$set();
#line 34
}
#line 34
# 37 "/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline   void /*PlatformLedsC.Led1Impl*/Msp430GpioC$8$GeneralIO$set(void)
#line 37
{
#line 37
  /*PlatformLedsC.Led1Impl*/Msp430GpioC$8$HplGeneralIO$set();
}

# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led1$set(void){
#line 29
  /*PlatformLedsC.Led1Impl*/Msp430GpioC$8$GeneralIO$set();
#line 29
}
#line 29
# 45 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline   void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP$36$IO$set(void)
#line 45
{
  /* atomic removed: atomic calls only */
#line 45
  * (volatile uint8_t *)49U |= 0x01 << 4;
}

# 34 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static   void /*PlatformLedsC.Led0Impl*/Msp430GpioC$7$HplGeneralIO$set(void){
#line 34
  /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP$36$IO$set();
#line 34
}
#line 34
# 37 "/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline   void /*PlatformLedsC.Led0Impl*/Msp430GpioC$7$GeneralIO$set(void)
#line 37
{
#line 37
  /*PlatformLedsC.Led0Impl*/Msp430GpioC$7$HplGeneralIO$set();
}

# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led0$set(void){
#line 29
  /*PlatformLedsC.Led0Impl*/Msp430GpioC$7$GeneralIO$set();
#line 29
}
#line 29
# 52 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline   void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP$38$IO$makeOutput(void)
#line 52
{
  /* atomic removed: atomic calls only */
#line 52
  * (volatile uint8_t *)50U |= 0x01 << 6;
}

# 71 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static   void /*PlatformLedsC.Led2Impl*/Msp430GpioC$9$HplGeneralIO$makeOutput(void){
#line 71
  /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP$38$IO$makeOutput();
#line 71
}
#line 71
# 43 "/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline   void /*PlatformLedsC.Led2Impl*/Msp430GpioC$9$GeneralIO$makeOutput(void)
#line 43
{
#line 43
  /*PlatformLedsC.Led2Impl*/Msp430GpioC$9$HplGeneralIO$makeOutput();
}

# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led2$makeOutput(void){
#line 35
  /*PlatformLedsC.Led2Impl*/Msp430GpioC$9$GeneralIO$makeOutput();
#line 35
}
#line 35
# 52 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline   void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP$37$IO$makeOutput(void)
#line 52
{
  /* atomic removed: atomic calls only */
#line 52
  * (volatile uint8_t *)50U |= 0x01 << 5;
}

# 71 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static   void /*PlatformLedsC.Led1Impl*/Msp430GpioC$8$HplGeneralIO$makeOutput(void){
#line 71
  /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP$37$IO$makeOutput();
#line 71
}
#line 71
# 43 "/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline   void /*PlatformLedsC.Led1Impl*/Msp430GpioC$8$GeneralIO$makeOutput(void)
#line 43
{
#line 43
  /*PlatformLedsC.Led1Impl*/Msp430GpioC$8$HplGeneralIO$makeOutput();
}

# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led1$makeOutput(void){
#line 35
  /*PlatformLedsC.Led1Impl*/Msp430GpioC$8$GeneralIO$makeOutput();
#line 35
}
#line 35
# 52 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline   void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP$36$IO$makeOutput(void)
#line 52
{
  /* atomic removed: atomic calls only */
#line 52
  * (volatile uint8_t *)50U |= 0x01 << 4;
}

# 71 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static   void /*PlatformLedsC.Led0Impl*/Msp430GpioC$7$HplGeneralIO$makeOutput(void){
#line 71
  /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP$36$IO$makeOutput();
#line 71
}
#line 71
# 43 "/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline   void /*PlatformLedsC.Led0Impl*/Msp430GpioC$7$GeneralIO$makeOutput(void)
#line 43
{
#line 43
  /*PlatformLedsC.Led0Impl*/Msp430GpioC$7$HplGeneralIO$makeOutput();
}

# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led0$makeOutput(void){
#line 35
  /*PlatformLedsC.Led0Impl*/Msp430GpioC$7$GeneralIO$makeOutput();
#line 35
}
#line 35
# 45 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline  error_t LedsP$Init$init(void)
#line 45
{
  /* atomic removed: atomic calls only */
#line 46
  {
    ;
    LedsP$Led0$makeOutput();
    LedsP$Led1$makeOutput();
    LedsP$Led2$makeOutput();
    LedsP$Led0$set();
    LedsP$Led1$set();
    LedsP$Led2$set();
  }
  return SUCCESS;
}

# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static  error_t PlatformP$LedsInit$init(void){
#line 51
  unsigned char result;
#line 51

#line 51
  result = LedsP$Init$init();
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 33 "/opt/tinyos-2.x/tos/platforms/telosb/hardware.h"
static inline void TOSH_SET_SIMO0_PIN(void)
#line 33
{
#line 33
   static volatile uint8_t r __asm ("0x0019");

#line 33
  r |= 1 << 1;
}

#line 34
static inline void TOSH_SET_UCLK0_PIN(void)
#line 34
{
#line 34
   static volatile uint8_t r __asm ("0x0019");

#line 34
  r |= 1 << 3;
}

#line 85
static inline void TOSH_SET_FLASH_CS_PIN(void)
#line 85
{
#line 85
   static volatile uint8_t r __asm ("0x001D");

#line 85
  r |= 1 << 4;
}

#line 34
static inline void TOSH_CLR_UCLK0_PIN(void)
#line 34
{
#line 34
   static volatile uint8_t r __asm ("0x0019");

#line 34
  r &= ~(1 << 3);
}

#line 85
static inline void TOSH_CLR_FLASH_CS_PIN(void)
#line 85
{
#line 85
   static volatile uint8_t r __asm ("0x001D");

#line 85
  r &= ~(1 << 4);
}

# 11 "/opt/tinyos-2.x/tos/platforms/telosb/MotePlatformC.nc"
static __inline void MotePlatformC$TOSH_wait(void)
#line 11
{
   __asm volatile ("nop"); __asm volatile ("nop");}

# 86 "/opt/tinyos-2.x/tos/platforms/telosb/hardware.h"
static inline void TOSH_SET_FLASH_HOLD_PIN(void)
#line 86
{
#line 86
   static volatile uint8_t r __asm ("0x001D");

#line 86
  r |= 1 << 7;
}

#line 85
static inline void TOSH_MAKE_FLASH_CS_OUTPUT(void)
#line 85
{
#line 85
   static volatile uint8_t r __asm ("0x001E");

#line 85
  r |= 1 << 4;
}

#line 86
static inline void TOSH_MAKE_FLASH_HOLD_OUTPUT(void)
#line 86
{
#line 86
   static volatile uint8_t r __asm ("0x001E");

#line 86
  r |= 1 << 7;
}

#line 34
static inline void TOSH_MAKE_UCLK0_OUTPUT(void)
#line 34
{
#line 34
   static volatile uint8_t r __asm ("0x001A");

#line 34
  r |= 1 << 3;
}

#line 33
static inline void TOSH_MAKE_SIMO0_OUTPUT(void)
#line 33
{
#line 33
   static volatile uint8_t r __asm ("0x001A");

#line 33
  r |= 1 << 1;
}

# 27 "/opt/tinyos-2.x/tos/platforms/telosb/MotePlatformC.nc"
static inline void MotePlatformC$TOSH_FLASH_M25P_DP(void)
#line 27
{

  TOSH_MAKE_SIMO0_OUTPUT();
  TOSH_MAKE_UCLK0_OUTPUT();
  TOSH_MAKE_FLASH_HOLD_OUTPUT();
  TOSH_MAKE_FLASH_CS_OUTPUT();
  TOSH_SET_FLASH_HOLD_PIN();
  TOSH_SET_FLASH_CS_PIN();

  MotePlatformC$TOSH_wait();


  TOSH_CLR_FLASH_CS_PIN();
  TOSH_CLR_UCLK0_PIN();

  MotePlatformC$TOSH_FLASH_M25P_DP_bit(TRUE);
  MotePlatformC$TOSH_FLASH_M25P_DP_bit(FALSE);
  MotePlatformC$TOSH_FLASH_M25P_DP_bit(TRUE);
  MotePlatformC$TOSH_FLASH_M25P_DP_bit(TRUE);
  MotePlatformC$TOSH_FLASH_M25P_DP_bit(TRUE);
  MotePlatformC$TOSH_FLASH_M25P_DP_bit(FALSE);
  MotePlatformC$TOSH_FLASH_M25P_DP_bit(FALSE);
  MotePlatformC$TOSH_FLASH_M25P_DP_bit(TRUE);

  TOSH_SET_FLASH_CS_PIN();
  TOSH_SET_UCLK0_PIN();
  TOSH_SET_SIMO0_PIN();
}

#line 6
static __inline void MotePlatformC$uwait(uint16_t u)
#line 6
{
  uint16_t t0 = TA0R;

#line 8
  while (TA0R - t0 <= u) ;
}

#line 56
static inline  error_t MotePlatformC$Init$init(void)
#line 56
{
  /* atomic removed: atomic calls only */

  {
    P1SEL = 0;
    P2SEL = 0;
    P3SEL = 0;
    P4SEL = 0;
    P5SEL = 0;
    P6SEL = 0;

    P1DIR = 0xe0;
    P1OUT = 0x00;

    P2DIR = 0x7b;
    P2OUT = 0x30;

    P3DIR = 0xf1;
    P3OUT = 0x00;

    P4DIR = 0xfd;
    P4OUT = 0xdd;

    P5DIR = 0xff;
    P5OUT = 0xff;

    P6DIR = 0xff;
    P6OUT = 0x00;

    P1IE = 0;
    P2IE = 0;






    MotePlatformC$uwait(1024 * 10);

    MotePlatformC$TOSH_FLASH_M25P_DP();
  }

  return SUCCESS;
}

# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static  error_t PlatformP$MoteInit$init(void){
#line 51
  unsigned char result;
#line 51

#line 51
  result = MotePlatformC$Init$init();
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 148 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockP.nc"
static inline void Msp430ClockP$startTimerB(void)
{

  Msp430ClockP$TBCTL = 0x0020 | (Msp430ClockP$TBCTL & ~(0x0020 | 0x0010));
}

#line 136
static inline void Msp430ClockP$startTimerA(void)
{

  Msp430ClockP$TA0CTL = 0x0020 | (Msp430ClockP$TA0CTL & ~(0x0020 | 0x0010));
}

#line 100
static inline  void Msp430ClockP$Msp430ClockInit$defaultInitTimerB(void)
{
  TBR = 0;









  Msp430ClockP$TBCTL = 0x0100 | 0x0002;
}

#line 130
static inline   void Msp430ClockP$Msp430ClockInit$default$initTimerB(void)
{
  Msp430ClockP$Msp430ClockInit$defaultInitTimerB();
}

# 32 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockInit.nc"
inline static  void Msp430ClockP$Msp430ClockInit$initTimerB(void){
#line 32
  Msp430ClockP$Msp430ClockInit$default$initTimerB();
#line 32
}
#line 32
# 85 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockP.nc"
static inline  void Msp430ClockP$Msp430ClockInit$defaultInitTimerA(void)
{
  TA0R = 0;









  Msp430ClockP$TA0CTL = 0x0200 | 0x0002;
}

#line 125
static inline   void Msp430ClockP$Msp430ClockInit$default$initTimerA(void)
{
  Msp430ClockP$Msp430ClockInit$defaultInitTimerA();
}

# 31 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockInit.nc"
inline static  void Msp430ClockP$Msp430ClockInit$initTimerA(void){
#line 31
  Msp430ClockP$Msp430ClockInit$default$initTimerA();
#line 31
}
#line 31
# 64 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockP.nc"
static inline  void Msp430ClockP$Msp430ClockInit$defaultInitClocks(void)
{





  BCSCTL1 = 0x80 | (BCSCTL1 & ((0x04 | 0x02) | 0x01));







  BCSCTL2 = 0x04;


  Msp430ClockP$IE1 &= ~(1 << 1);
}

#line 120
static inline   void Msp430ClockP$Msp430ClockInit$default$initClocks(void)
{
  Msp430ClockP$Msp430ClockInit$defaultInitClocks();
}

# 30 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockInit.nc"
inline static  void Msp430ClockP$Msp430ClockInit$initClocks(void){
#line 30
  Msp430ClockP$Msp430ClockInit$default$initClocks();
#line 30
}
#line 30
# 166 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockP.nc"
static inline uint16_t Msp430ClockP$test_calib_busywait_delta(int calib)
{
  int8_t aclk_count = 2;
  uint16_t dco_prev = 0;
  uint16_t dco_curr = 0;

  Msp430ClockP$set_dco_calib(calib);

  while (aclk_count-- > 0) 
    {
      TBCCR0 = TBR + Msp430ClockP$ACLK_CALIB_PERIOD;
      TBCCTL0 &= ~0x0001;
      while ((TBCCTL0 & 0x0001) == 0) ;
      dco_prev = dco_curr;
      dco_curr = TA0R;
    }

  return dco_curr - dco_prev;
}




static inline void Msp430ClockP$busyCalibrateDco(void)
{

  int calib;
  int step;






  for (calib = 0, step = 0x800; step != 0; step >>= 1) 
    {

      if (Msp430ClockP$test_calib_busywait_delta(calib | step) <= Msp430ClockP$TARGET_DCO_DELTA) {
        calib |= step;
        }
    }

  if ((calib & 0x0e0) == 0x0e0) {
    calib &= ~0x01f;
    }
  Msp430ClockP$set_dco_calib(calib);
}

#line 52
static inline  void Msp430ClockP$Msp430ClockInit$defaultSetupDcoCalibrate(void)
{



  Msp430ClockP$TA0CTL = 0x0200 | 0x0020;
  Msp430ClockP$TBCTL = 0x0100 | 0x0020;
  BCSCTL1 = 0x80 | 0x04;
  BCSCTL2 = 0;
  TBCCTL0 = 0x4000;
}

#line 115
static inline   void Msp430ClockP$Msp430ClockInit$default$setupDcoCalibrate(void)
{
  Msp430ClockP$Msp430ClockInit$defaultSetupDcoCalibrate();
}

# 29 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockInit.nc"
inline static  void Msp430ClockP$Msp430ClockInit$setupDcoCalibrate(void){
#line 29
  Msp430ClockP$Msp430ClockInit$default$setupDcoCalibrate();
#line 29
}
#line 29
# 214 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockP.nc"
static inline  error_t Msp430ClockP$Init$init(void)
{

  Msp430ClockP$TA0CTL = 0x0004;
  Msp430ClockP$TA0IV = 0;
  Msp430ClockP$TBCTL = 0x0004;
  Msp430ClockP$TBIV = 0;
  /* atomic removed: atomic calls only */

  {
    Msp430ClockP$Msp430ClockInit$setupDcoCalibrate();
    Msp430ClockP$busyCalibrateDco();
    Msp430ClockP$Msp430ClockInit$initClocks();
    Msp430ClockP$Msp430ClockInit$initTimerA();
    Msp430ClockP$Msp430ClockInit$initTimerB();
    Msp430ClockP$startTimerA();
    Msp430ClockP$startTimerB();
  }

  return SUCCESS;
}

# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static  error_t PlatformP$MoteClockInit$init(void){
#line 51
  unsigned char result;
#line 51

#line 51
  result = Msp430ClockP$Init$init();
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 10 "/opt/tinyos-2.x/tos/platforms/telosa/PlatformP.nc"
static inline  error_t PlatformP$Init$init(void)
#line 10
{
  PlatformP$MoteClockInit$init();
  PlatformP$MoteInit$init();
  PlatformP$LedsInit$init();
  return SUCCESS;
}

# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static  error_t RealMainP$PlatformInit$init(void){
#line 51
  unsigned char result;
#line 51

#line 51
  result = PlatformP$Init$init();
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 33 "/opt/tinyos-2.x/tos/platforms/telosb/hardware.h"
static inline void TOSH_CLR_SIMO0_PIN(void)
#line 33
{
#line 33
   static volatile uint8_t r __asm ("0x0019");

#line 33
  r &= ~(1 << 1);
}

# 54 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static  bool RealMainP$Scheduler$runNextTask(void){
#line 54
  unsigned char result;
#line 54

#line 54
  result = SchedulerBasicP$Scheduler$runNextTask();
#line 54

#line 54
  return result;
#line 54
}
#line 54
# 177 "OscilloscopeC.nc"
static inline  void OscilloscopeC$AMSend$sendDone(message_t *msg, error_t err)
#line 177
{
}

# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  void /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(message_t *arg_0x40599eb8, error_t arg_0x40598068){
#line 99
  OscilloscopeC$AMSend$sendDone(arg_0x40599eb8, arg_0x40598068);
#line 99
}
#line 99
# 57 "/opt/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline  void /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(message_t *m, error_t err)
#line 57
{
  /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(m, err);
}

# 44 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static   void /*PlatformLedsC.Led0Impl*/Msp430GpioC$7$HplGeneralIO$toggle(void){
#line 44
  /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP$36$IO$toggle();
#line 44
}
#line 44
# 39 "/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline   void /*PlatformLedsC.Led0Impl*/Msp430GpioC$7$GeneralIO$toggle(void)
#line 39
{
#line 39
  /*PlatformLedsC.Led0Impl*/Msp430GpioC$7$HplGeneralIO$toggle();
}

# 31 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led0$toggle(void){
#line 31
  /*PlatformLedsC.Led0Impl*/Msp430GpioC$7$GeneralIO$toggle();
#line 31
}
#line 31
# 73 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline   void LedsP$Leds$led0Toggle(void)
#line 73
{
  LedsP$Led0$toggle();
  ;
#line 75
  ;
}

# 56 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static   void OscilloscopeC$Leds$led0Toggle(void){
#line 56
  LedsP$Leds$led0Toggle();
#line 56
}
#line 56
# 78 "OscilloscopeC.nc"
static inline void OscilloscopeC$report_problem(void)
#line 78
{
#line 78
  OscilloscopeC$Leds$led0Toggle();
}

# 44 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static   void /*PlatformLedsC.Led1Impl*/Msp430GpioC$8$HplGeneralIO$toggle(void){
#line 44
  /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP$37$IO$toggle();
#line 44
}
#line 44
# 39 "/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline   void /*PlatformLedsC.Led1Impl*/Msp430GpioC$8$GeneralIO$toggle(void)
#line 39
{
#line 39
  /*PlatformLedsC.Led1Impl*/Msp430GpioC$8$HplGeneralIO$toggle();
}

# 31 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led1$toggle(void){
#line 31
  /*PlatformLedsC.Led1Impl*/Msp430GpioC$8$GeneralIO$toggle();
#line 31
}
#line 31
# 88 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline   void LedsP$Leds$led1Toggle(void)
#line 88
{
  LedsP$Led1$toggle();
  ;
#line 90
  ;
}

# 72 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static   void OscilloscopeC$Leds$led1Toggle(void){
#line 72
  LedsP$Leds$led1Toggle();
#line 72
}
#line 72
# 79 "OscilloscopeC.nc"
static inline void OscilloscopeC$report_sent(void)
#line 79
{
#line 79
  OscilloscopeC$Leds$led1Toggle();
}

#line 169
static inline  void OscilloscopeC$AFWA_AESI$AFWAsendDone(message_t *msg, error_t err)
#line 169
{
  if (err == SUCCESS) {
    OscilloscopeC$report_sent();
    }
  else {
#line 173
    OscilloscopeC$report_problem();
    }
#line 174
  OscilloscopeC$sendbusy = FALSE;
}

# 281 "AES/CCMP.nc"
static inline  void /*OscilloscopeAppC.AFWA_AESC.CCMP*/CCMP$0$AFWA_AESI$AFWAsendDone(message_t *msg, error_t err)
#line 281
{
}

# 135 "AES/CTRP.nc"
static inline  void /*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$AFWA_AESI$AFWAsendDone(message_t *msg, error_t err)
#line 135
{
}

# 165 "AES/OmacP.nc"
static inline  void /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$AFWA_AESI$AFWAsendDone(message_t *msg, error_t err)
#line 165
{
}

# 54 "AES/Interfaces/AFWA_AESI.nc"
inline static  void /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$AFWA_AESI$AFWAsendDone(message_t *arg_0x405c4010, uint8_t arg_0x405c4198){
#line 54
  /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$AFWA_AESI$AFWAsendDone(arg_0x405c4010, arg_0x405c4198);
#line 54
  /*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$AFWA_AESI$AFWAsendDone(arg_0x405c4010, arg_0x405c4198);
#line 54
  /*OscilloscopeAppC.AFWA_AESC.CCMP*/CCMP$0$AFWA_AESI$AFWAsendDone(arg_0x405c4010, arg_0x405c4198);
#line 54
  OscilloscopeC$AFWA_AESI$AFWAsendDone(arg_0x405c4010, arg_0x405c4198);
#line 54
}
#line 54
# 323 "AES/AFWA_AESP.nc"
static inline  void /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$AMSend$sendDone(message_t *msg, error_t error)
#line 323
{

  /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$AFWA_AESI$AFWAsendDone(msg, error);
}

# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  void /*OscilloscopeAppC.AFWA_AESC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$sendDone(message_t *arg_0x40599eb8, error_t arg_0x40598068){
#line 99
  /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$AMSend$sendDone(arg_0x40599eb8, arg_0x40598068);
#line 99
}
#line 99
# 57 "/opt/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline  void /*OscilloscopeAppC.AFWA_AESC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$sendDone(message_t *m, error_t err)
#line 57
{
  /*OscilloscopeAppC.AFWA_AESC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$sendDone(m, err);
}

# 207 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline   void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(uint8_t id, message_t *msg, error_t err)
#line 207
{
}

# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(uint8_t arg_0x40f59e88, message_t *arg_0x40738598, error_t arg_0x40738720){
#line 89
  switch (arg_0x40f59e88) {
#line 89
    case 0U:
#line 89
      /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(arg_0x40738598, arg_0x40738720);
#line 89
      break;
#line 89
    case 1U:
#line 89
      /*OscilloscopeAppC.AFWA_AESC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$sendDone(arg_0x40738598, arg_0x40738720);
#line 89
      break;
#line 89
    default:
#line 89
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(arg_0x40f59e88, arg_0x40738598, arg_0x40738720);
#line 89
      break;
#line 89
    }
#line 89
}
#line 89
# 118 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask(void)
#line 118
{
  uint8_t i;
#line 119
  uint8_t j;
#line 119
  uint8_t mask;
#line 119
  uint8_t last;
  message_t *msg;

#line 121
  for (i = 0; i < 2 / 8 + 1; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[i]) {
          for (mask = 1, j = 0; j < 8; j++) {
              if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[i] & mask) {
                  last = i * 8 + j;
                  msg = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[last].msg;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[last].msg = (void *)0;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[i] &= ~mask;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(last, msg, ECANCEL);
                }
              mask <<= 1;
            }
        }
    }
}

#line 161
static inline  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void)
#line 161
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current, /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current].msg, FAIL);
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(am_id_t arg_0x40f58880, am_addr_t arg_0x4059a920, message_t *arg_0x4059aad0, uint8_t arg_0x4059ac58){
#line 69
  unsigned char result;
#line 69

#line 69
  result = CC2420ActiveMessageP$AMSend$send(arg_0x40f58880, arg_0x4059a920, arg_0x4059aad0, arg_0x4059ac58);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(message_t *arg_0x406ef7c0){
#line 67
  unsigned char result;
#line 67

#line 67
  result = CC2420ActiveMessageP$Packet$payloadLength(arg_0x406ef7c0);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 67 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(message_t *arg_0x405af190){
#line 67
  unsigned int result;
#line 67

#line 67
  result = CC2420ActiveMessageP$AMPacket$destination(arg_0x405af190);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 42 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static   cc2420_header_t *CC2420ActiveMessageP$CC2420PacketBody$getHeader(message_t *arg_0x40733b28){
#line 42
  nx_struct cc2420_header_t *result;
#line 42

#line 42
  result = CC2420PacketC$CC2420PacketBody$getHeader(arg_0x40733b28);
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 132 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline  am_id_t CC2420ActiveMessageP$AMPacket$type(message_t *amsg)
#line 132
{
  cc2420_header_t *header = CC2420ActiveMessageP$CC2420PacketBody$getHeader(amsg);

#line 134
  return __nesc_ntoh_leuint8((unsigned char *)&header->type);
}

# 136 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(message_t *arg_0x405ac740){
#line 136
  unsigned char result;
#line 136

#line 136
  result = CC2420ActiveMessageP$AMPacket$type(arg_0x405ac740);
#line 136

#line 136
  return result;
#line 136
}
#line 136
# 57 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$nextPacket(void)
#line 57
{
  uint8_t i;

#line 59
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current = (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current + 1) % 2;
  for (i = 0; i < 2; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current].msg == (void *)0 || 
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current / 8] & (1 << /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current % 8)) 
        {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current = (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current + 1) % 2;
        }
      else {
          break;
        }
    }
  if (i >= 2) {
#line 70
    /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current = 2;
    }
}

#line 166
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void)
#line 166
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$nextPacket();
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current < 2) {
      error_t nextErr;
      message_t *nextMsg = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current].msg;
      am_id_t nextId = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(nextMsg);
      am_addr_t nextDest = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(nextMsg);
      uint8_t len = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(nextMsg);

#line 174
      nextErr = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(nextId, nextDest, nextMsg, len);
      if (nextErr != SUCCESS) {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$postTask();
        }
    }
}

# 272 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline   uint16_t CC2420ControlP$CC2420Config$getPanAddr(void)
#line 272
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 273
    {
      unsigned int __nesc_temp = 
#line 273
      CC2420ControlP$m_pan;

      {
#line 273
        __nesc_atomic_end(__nesc_atomic); 
#line 273
        return __nesc_temp;
      }
    }
#line 275
    __nesc_atomic_end(__nesc_atomic); }
}

# 70 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static   uint16_t CC2420ActiveMessageP$CC2420Config$getPanAddr(void){
#line 70
  unsigned int result;
#line 70

#line 70
  result = CC2420ControlP$CC2420Config$getPanAddr();
#line 70

#line 70
  return result;
#line 70
}
#line 70
# 251 "/usr/local/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_hton_leuint8(void *target, uint8_t value)
#line 251
{
  uint8_t *base = target;

#line 253
  base[0] = value;
  return value;
}

#line 240
static __inline uint8_t __nesc_hton_uint8(void *target, uint8_t value)
#line 240
{
  uint8_t *base = target;

#line 242
  base[0] = value;
  return value;
}

#line 257
static __inline int8_t __nesc_hton_int8(void *target, int8_t value)
#line 257
{
#line 257
  __nesc_hton_uint8(target, value);
#line 257
  return value;
}

#line 281
static __inline uint16_t __nesc_hton_leuint16(void *target, uint16_t value)
#line 281
{
  uint8_t *base = target;

#line 283
  base[0] = value;
  base[1] = value >> 8;
  return value;
}

# 511 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP$send(message_t *p_msg, bool cca)
#line 511
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 512
    {


      if ((
#line 513
      CC2420TransmitP$m_state == CC2420TransmitP$S_LOAD_CANCEL
       || CC2420TransmitP$m_state == CC2420TransmitP$S_CCA_CANCEL)
       || CC2420TransmitP$m_state == CC2420TransmitP$S_TX_CANCEL) {
          {
            unsigned char __nesc_temp = 
#line 516
            ECANCEL;

            {
#line 516
              __nesc_atomic_end(__nesc_atomic); 
#line 516
              return __nesc_temp;
            }
          }
        }
#line 519
      if (CC2420TransmitP$m_state != CC2420TransmitP$S_STARTED) {
          {
            unsigned char __nesc_temp = 
#line 520
            FAIL;

            {
#line 520
              __nesc_atomic_end(__nesc_atomic); 
#line 520
              return __nesc_temp;
            }
          }
        }
#line 523
      CC2420TransmitP$m_state = CC2420TransmitP$S_LOAD;
      CC2420TransmitP$m_cca = cca;
      CC2420TransmitP$m_msg = p_msg;
      CC2420TransmitP$totalCcaChecks = 0;
    }
#line 527
    __nesc_atomic_end(__nesc_atomic); }

  if (CC2420TransmitP$acquireSpiResource() == SUCCESS) {
      CC2420TransmitP$loadTXFIFO();
    }

  return SUCCESS;
}

#line 172
static inline   error_t CC2420TransmitP$Send$send(message_t *p_msg, bool useCca)
#line 172
{
  return CC2420TransmitP$send(p_msg, useCca);
}

# 51 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
inline static   error_t CC2420CsmaP$CC2420Transmit$send(message_t *arg_0x40798a70, bool arg_0x40798bf8){
#line 51
  unsigned char result;
#line 51

#line 51
  result = CC2420TransmitP$Send$send(arg_0x40798a70, arg_0x40798bf8);
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 287 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline    void CC2420CsmaP$RadioBackoff$default$requestCca(am_id_t amId, 
message_t *msg)
#line 288
{
}

# 95 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static   void CC2420CsmaP$RadioBackoff$requestCca(am_id_t arg_0x4077dba0, message_t *arg_0x40713278){
#line 95
    CC2420CsmaP$RadioBackoff$default$requestCca(arg_0x4077dba0, arg_0x40713278);
#line 95
}
#line 95
# 61 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static inline   am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void)
#line 61
{
  return ActiveMessageAddressC$amAddress();
}

# 48 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
inline static   am_addr_t CC2420ActiveMessageP$ActiveMessageAddress$amAddress(void){
#line 48
  unsigned int result;
#line 48

#line 48
  result = ActiveMessageAddressC$ActiveMessageAddress$amAddress();
#line 48

#line 48
  return result;
#line 48
}
#line 48
# 103 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline  am_addr_t CC2420ActiveMessageP$AMPacket$address(void)
#line 103
{
  return CC2420ActiveMessageP$ActiveMessageAddress$amAddress();
}

# 57 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  am_addr_t CC2420CsmaP$AMPacket$address(void){
#line 57
  unsigned int result;
#line 57

#line 57
  result = CC2420ActiveMessageP$AMPacket$address();
#line 57

#line 57
  return result;
#line 57
}
#line 57
# 111 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
static inline   void StateImplP$State$forceState(uint8_t id, uint8_t reqState)
#line 111
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 112
    StateImplP$state[id] = reqState;
#line 112
    __nesc_atomic_end(__nesc_atomic); }
}

# 51 "/opt/tinyos-2.x/tos/interfaces/State.nc"
inline static   void CC2420CsmaP$SplitControlState$forceState(uint8_t arg_0x407a3900){
#line 51
  StateImplP$State$forceState(1U, arg_0x407a3900);
#line 51
}
#line 51
#line 66
inline static   bool CC2420CsmaP$SplitControlState$isState(uint8_t arg_0x407a24c0){
#line 66
  unsigned char result;
#line 66

#line 66
  result = StateImplP$State$isState(1U, arg_0x407a24c0);
#line 66

#line 66
  return result;
#line 66
}
#line 66
# 47 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static   cc2420_metadata_t *CC2420CsmaP$CC2420PacketBody$getMetadata(message_t *arg_0x407320a8){
#line 47
  nx_struct cc2420_metadata_t *result;
#line 47

#line 47
  result = CC2420PacketC$CC2420PacketBody$getMetadata(arg_0x407320a8);
#line 47

#line 47
  return result;
#line 47
}
#line 47
#line 42
inline static   cc2420_header_t *CC2420CsmaP$CC2420PacketBody$getHeader(message_t *arg_0x40733b28){
#line 42
  nx_struct cc2420_header_t *result;
#line 42

#line 42
  result = CC2420PacketC$CC2420PacketBody$getHeader(arg_0x40733b28);
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 124 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline  error_t CC2420CsmaP$Send$send(message_t *p_msg, uint8_t len)
#line 124
{
  unsigned char *__nesc_temp43;
  unsigned char *__nesc_temp42;
#line 126
  cc2420_header_t *header = CC2420CsmaP$CC2420PacketBody$getHeader(p_msg);
  cc2420_metadata_t *metadata = CC2420CsmaP$CC2420PacketBody$getMetadata(p_msg);

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 129
    {
      if (!CC2420CsmaP$SplitControlState$isState(CC2420CsmaP$S_STARTED)) {
          {
            unsigned char __nesc_temp = 
#line 131
            FAIL;

            {
#line 131
              __nesc_atomic_end(__nesc_atomic); 
#line 131
              return __nesc_temp;
            }
          }
        }
#line 134
      CC2420CsmaP$SplitControlState$forceState(CC2420CsmaP$S_TRANSMITTING);
      CC2420CsmaP$m_msg = p_msg;
    }
#line 136
    __nesc_atomic_end(__nesc_atomic); }

  __nesc_hton_leuint8((unsigned char *)&header->length, len);
  (__nesc_temp42 = (unsigned char *)&header->fcf, __nesc_hton_leuint16(__nesc_temp42, __nesc_ntoh_leuint16(__nesc_temp42) & (1 << IEEE154_FCF_ACK_REQ)));
  (__nesc_temp43 = (unsigned char *)&header->fcf, __nesc_hton_leuint16(__nesc_temp43, __nesc_ntoh_leuint16(__nesc_temp43) | ((((IEEE154_TYPE_DATA << IEEE154_FCF_FRAME_TYPE) | (
  1 << IEEE154_FCF_INTRAPAN)) | (
  IEEE154_ADDR_SHORT << IEEE154_FCF_DEST_ADDR_MODE)) | (
  IEEE154_ADDR_SHORT << IEEE154_FCF_SRC_ADDR_MODE))));
  __nesc_hton_leuint16((unsigned char *)&header->src, CC2420CsmaP$AMPacket$address());
  __nesc_hton_int8((unsigned char *)&metadata->ack, FALSE);
  __nesc_hton_uint8((unsigned char *)&metadata->rssi, 0);
  __nesc_hton_uint8((unsigned char *)&metadata->lqi, 0);
  __nesc_hton_uint16((unsigned char *)&metadata->time, 0);

  CC2420CsmaP$ccaOn = TRUE;
  CC2420CsmaP$RadioBackoff$requestCca(__nesc_ntoh_leuint8((unsigned char *)&((cc2420_header_t *)(CC2420CsmaP$m_msg->data - 
  sizeof(cc2420_header_t )))->type), CC2420CsmaP$m_msg);
  CC2420CsmaP$CC2420Transmit$send(CC2420CsmaP$m_msg, CC2420CsmaP$ccaOn);
  return SUCCESS;
}

# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static  error_t UniqueSendP$SubSend$send(message_t *arg_0x4073a4b0, uint8_t arg_0x4073a638){
#line 64
  unsigned char result;
#line 64

#line 64
  result = CC2420CsmaP$Send$send(arg_0x4073a4b0, arg_0x4073a638);
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 42 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static   cc2420_header_t *UniqueSendP$CC2420PacketBody$getHeader(message_t *arg_0x40733b28){
#line 42
  nx_struct cc2420_header_t *result;
#line 42

#line 42
  result = CC2420PacketC$CC2420PacketBody$getHeader(arg_0x40733b28);
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 45 "/opt/tinyos-2.x/tos/interfaces/State.nc"
inline static   error_t UniqueSendP$State$requestState(uint8_t arg_0x407a3378){
#line 45
  unsigned char result;
#line 45

#line 45
  result = StateImplP$State$requestState(2U, arg_0x407a3378);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 75 "/opt/tinyos-2.x/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline  error_t UniqueSendP$Send$send(message_t *msg, uint8_t len)
#line 75
{
  error_t error;

#line 77
  if (UniqueSendP$State$requestState(UniqueSendP$S_SENDING) == SUCCESS) {
      __nesc_hton_leuint8((unsigned char *)&UniqueSendP$CC2420PacketBody$getHeader(msg)->dsn, UniqueSendP$localSendId++);

      if ((error = UniqueSendP$SubSend$send(msg, len)) != SUCCESS) {
          UniqueSendP$State$toIdle();
        }

      return error;
    }

  return EBUSY;
}

# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static  error_t CC2420ActiveMessageP$SubSend$send(message_t *arg_0x4073a4b0, uint8_t arg_0x4073a638){
#line 64
  unsigned char result;
#line 64

#line 64
  result = UniqueSendP$Send$send(arg_0x4073a4b0, arg_0x4073a638);
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 55 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static   cc2420_status_t CC2420TransmitP$TXCTRL$write(uint16_t arg_0x407fa580){
#line 55
  unsigned char result;
#line 55

#line 55
  result = CC2420SpiP$Reg$write(CC2420_TXCTRL, arg_0x407fa580);
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 59 "/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
inline static   error_t CC2420SpiP$SpiPacket$send(uint8_t *arg_0x40ae5710, uint8_t *arg_0x40ae58b8, uint16_t arg_0x40ae5a48){
#line 59
  unsigned char result;
#line 59

#line 59
  result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$SpiPacket$send(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C$0$CLIENT_ID, arg_0x40ae5710, arg_0x40ae58b8, arg_0x40ae5a48);
#line 59

#line 59
  return result;
#line 59
}
#line 59
# 34 "/opt/tinyos-2.x/tos/interfaces/SpiByte.nc"
inline static   uint8_t CC2420SpiP$SpiByte$write(uint8_t arg_0x40ae9de0){
#line 34
  unsigned char result;
#line 34

#line 34
  result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$SpiByte$write(arg_0x40ae9de0);
#line 34

#line 34
  return result;
#line 34
}
#line 34
# 126 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
static inline   bool StateImplP$State$isIdle(uint8_t id)
#line 126
{
  return StateImplP$State$isState(id, StateImplP$S_IDLE);
}

# 61 "/opt/tinyos-2.x/tos/interfaces/State.nc"
inline static   bool CC2420SpiP$WorkingState$isIdle(void){
#line 61
  unsigned char result;
#line 61

#line 61
  result = StateImplP$State$isIdle(0U);
#line 61

#line 61
  return result;
#line 61
}
#line 61
# 212 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline   cc2420_status_t CC2420SpiP$Fifo$write(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 213
{

  uint8_t status = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 217
    {
      if (CC2420SpiP$WorkingState$isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 219
            status;

            {
#line 219
              __nesc_atomic_end(__nesc_atomic); 
#line 219
              return __nesc_temp;
            }
          }
        }
    }
#line 223
    __nesc_atomic_end(__nesc_atomic); }
#line 223
  CC2420SpiP$m_addr = addr;

  status = CC2420SpiP$SpiByte$write(CC2420SpiP$m_addr);
  CC2420SpiP$SpiPacket$send(data, (void *)0, len);

  return status;
}

# 82 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static   cc2420_status_t CC2420TransmitP$TXFIFO$write(uint8_t *arg_0x40ada5d8, uint8_t arg_0x40ada760){
#line 82
  unsigned char result;
#line 82

#line 82
  result = CC2420SpiP$Fifo$write(CC2420_TXFIFO, arg_0x40ada5d8, arg_0x40ada760);
#line 82

#line 82
  return result;
#line 82
}
#line 82
# 361 "/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline   void HplMsp430Usart0P$Usart$enableRxIntr(void)
#line 361
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 362
    {
      HplMsp430Usart0P$IFG1 &= ~(1 << 6);
      HplMsp430Usart0P$IE1 |= 1 << 6;
    }
#line 365
    __nesc_atomic_end(__nesc_atomic); }
}

# 180 "/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static   void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$enableRxIntr(void){
#line 180
  HplMsp430Usart0P$Usart$enableRxIntr();
#line 180
}
#line 180
# 316 "/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline   bool HplMsp430Usart0P$Usart$isTxIntrPending(void)
#line 316
{
  if (HplMsp430Usart0P$IFG1 & (1 << 7)) {
      return TRUE;
    }
  return FALSE;
}

# 187 "/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static   bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$isTxIntrPending(void){
#line 187
  unsigned char result;
#line 187

#line 187
  result = HplMsp430Usart0P$Usart$isTxIntrPending();
#line 187

#line 187
  return result;
#line 187
}
#line 187
# 337 "/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline   void HplMsp430Usart0P$Usart$clrTxIntr(void)
#line 337
{
  HplMsp430Usart0P$IFG1 &= ~(1 << 7);
}

# 202 "/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static   void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$clrTxIntr(void){
#line 202
  HplMsp430Usart0P$Usart$clrTxIntr();
#line 202
}
#line 202
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$signalDone_task$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$signalDone_task);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 235 "/usr/local/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void *source)
#line 235
{
  const uint8_t *base = source;

#line 237
  return base[0];
}

# 92 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type arg_0x407dfac0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type arg_0x407dfc50){
#line 92
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$Alarm$startAt(arg_0x407dfac0, arg_0x407dfc50);
#line 92
}
#line 92
# 47 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt = dt;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot = oneshot;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(t0, dt);
}

#line 82
static inline  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 83
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(t0, dt, TRUE);
}

# 118 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(uint32_t arg_0x405a0120, uint32_t arg_0x405a02b0){
#line 118
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(arg_0x405a0120, arg_0x405a02b0);
#line 118
}
#line 118
# 54 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline   void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Alarm$stop(void)
{
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430TimerControl$disableEvents();
}

# 62 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$AlarmFrom$stop(void){
#line 62
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Alarm$stop();
#line 62
}
#line 62
# 91 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline   void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$Alarm$stop(void)
{
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$AlarmFrom$stop();
}

# 62 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop(void){
#line 62
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$Alarm$stop();
#line 62
}
#line 62
# 60 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void)
{
#line 61
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop();
}

# 67 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop(void){
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop();
#line 67
}
#line 67
# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$Counter$size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$Counter$get(void){
#line 53
  unsigned long result;
#line 53

#line 53
  result = /*CounterMilli32C.Transform*/TransformCounterC$1$Counter$get();
#line 53

#line 53
  return result;
#line 53
}
#line 53
# 75 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline   /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$Alarm$getNow(void)
{
  return /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$Counter$get();
}

# 98 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow(void){
#line 98
  unsigned long result;
#line 98

#line 98
  result = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$Alarm$getNow();
#line 98

#line 98
  return result;
#line 98
}
#line 98
# 85 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline  uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void)
{
#line 86
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow();
}

# 125 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(void){
#line 125
  unsigned long result;
#line 125

#line 125
  result = /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow();
#line 125

#line 125
  return result;
#line 125
}
#line 125
# 88 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void)
{




  uint32_t now = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint8_t num;

  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop();

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;
          int32_t remaining = timer->dt - elapsed;

          if (remaining < min_remaining) 
            {
              min_remaining = remaining;
              min_remaining_isset = TRUE;
            }
        }
    }

  if (min_remaining_isset) 
    {
      if (min_remaining <= 0) {
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(now);
        }
      else {
#line 123
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(now, min_remaining);
        }
    }
}

# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  error_t /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$AMSend$send(am_addr_t arg_0x4059a920, message_t *arg_0x4059aad0, uint8_t arg_0x4059ac58){
#line 69
  unsigned char result;
#line 69

#line 69
  result = /*OscilloscopeAppC.AFWA_AESC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$send(arg_0x4059a920, arg_0x4059aad0, arg_0x4059ac58);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 65 "/opt/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline  void */*OscilloscopeAppC.AFWA_AESC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$getPayload(message_t *m)
#line 65
{
  return /*OscilloscopeAppC.AFWA_AESC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$getPayload(m);
}

# 125 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  void */*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$AMSend$getPayload(message_t *arg_0x40598b18){
#line 125
  void *result;
#line 125

#line 125
  result = /*OscilloscopeAppC.AFWA_AESC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$getPayload(arg_0x40598b18);
#line 125

#line 125
  return result;
#line 125
}
#line 125
# 138 "AES/OmacP.nc"
static inline  error_t /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$OmacI$truncateTag(uint8_t *mac, uint8_t payloadlenB, uint8_t tBytes)
#line 138
{
  /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$i = 0;
#line 139
  /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$j = 0;
  /* atomic removed: atomic calls only */
  {
    for (/*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$i = payloadlenB; /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$j < tBytes; ) 
      mac[/*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$i++] = /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$iv[/*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$j++];
  }
  return SUCCESS;
}

# 27 "AES/Interfaces/OmacI.nc"
inline static  error_t /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$OmacI$truncateTag(uint8_t *arg_0x40f8d1d0, uint8_t arg_0x40f8d360, uint8_t arg_0x40f8d4e8){
#line 27
  unsigned char result;
#line 27

#line 27
  result = /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$OmacI$truncateTag(arg_0x40f8d1d0, arg_0x40f8d360, arg_0x40f8d4e8);
#line 27

#line 27
  return result;
#line 27
}
#line 27
# 227 "AES/AFWA_AESP.nc"
static inline  error_t /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$AFWA_AESI$AFWAenc(uint8_t *text)
#line 227
{


  /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$inPut = text;
  /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$mode = 1;

  /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$startAes(/*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$KeySizeB);

  return SUCCESS;
}

# 48 "AES/Interfaces/AFWA_AESI.nc"
inline static  error_t /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$AFWA_AESI$AFWAenc(uint8_t *arg_0x405b5c80){
#line 48
  unsigned char result;
#line 48

#line 48
  result = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$AFWA_AESI$AFWAenc(arg_0x405b5c80);
#line 48

#line 48
  return result;
#line 48
}
#line 48
# 80 "AES/OmacP.nc"
static inline uint8_t /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$generateMac(uint8_t *auth_this_msg, uint8_t payloadLenB)
{
  uint8_t mod = 0;
#line 82
  uint8_t m = 0;
#line 82
  uint8_t k = 0;


  if (!payloadLenB) {
    return 0;
    }
  mod = payloadLenB % /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$blksizeB;
  m = payloadLenB / /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$blksizeB;

  for (/*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$i = 0, k = 0; /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$i < m; /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$i++, k += /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$blksizeB) {
      memcpy((uint8_t *)/*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$tmp, (uint8_t *)&auth_this_msg[k], /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$blksizeB);
      /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$xor((uint8_t *)/*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$iv, (uint8_t *)/*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$tmp);
      /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$AFWA_AESI$AFWAenc((uint8_t *)/*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$iv);
    }

  memset(/*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$tmp, 0, /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$blksizeB);

  if (--/*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$i > 2 || m == 0) {
      if (mod) {
          memcpy((uint8_t *)/*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$tmp, (uint8_t *)&auth_this_msg[k], mod);
          /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$tmp[mod] ^= 0x01;
          /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$xor((uint8_t *)/*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$iv, (uint8_t *)/*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$Lu_2);
          /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$xor((uint8_t *)/*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$iv, (uint8_t *)/*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$tmp);
        }
      else {

          memcpy((uint8_t *)/*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$tmp, (uint8_t *)&auth_this_msg[k], /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$blksizeB);
          /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$xor((uint8_t *)/*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$iv, (uint8_t *)/*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$Lu);
          /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$xor((uint8_t *)/*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$iv, (uint8_t *)/*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$tmp);
        }
    }
  /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$AFWA_AESI$AFWAenc((uint8_t *)/*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$iv);
}




static inline  error_t /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$OmacI$cbcmacGenerate(uint8_t *auth_this_msg, uint8_t payloadLenB, uint8_t KeySizeB)
#line 119
{


  /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$blksizeB = 16;
  /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$iv[0] ^= payloadLenB;

  /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$AFWA_AESI$AFWAenc((uint8_t *)/*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$iv);
  /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$preprocess((uint8_t *)/*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$iv, (uint8_t *)/*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$Lu);
  /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$preprocess((uint8_t *)/*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$Lu, (uint8_t *)/*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$Lu_2);

  for (/*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$i = 0; /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$i < 16; /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$i++) 
    /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$iv[/*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$i] = 0;

  /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$generateMac((uint8_t *)auth_this_msg, payloadLenB);

  return SUCCESS;
}

# 26 "AES/Interfaces/OmacI.nc"
inline static  error_t /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$OmacI$cbcmacGenerate(uint8_t *arg_0x40f8f9d8, uint8_t arg_0x40f8fb68, uint8_t arg_0x40f8fcf0){
#line 26
  unsigned char result;
#line 26

#line 26
  result = /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$OmacI$cbcmacGenerate(arg_0x40f8f9d8, arg_0x40f8fb68, arg_0x40f8fcf0);
#line 26

#line 26
  return result;
#line 26
}
#line 26
# 48 "AES/Interfaces/AFWA_AESI.nc"
inline static  error_t /*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$AFWA_AESI$AFWAenc(uint8_t *arg_0x405b5c80){
#line 48
  unsigned char result;
#line 48

#line 48
  result = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$AFWA_AESI$AFWAenc(arg_0x405b5c80);
#line 48

#line 48
  return result;
#line 48
}
#line 48
# 44 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static   void /*PlatformLedsC.Led2Impl*/Msp430GpioC$9$HplGeneralIO$toggle(void){
#line 44
  /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP$38$IO$toggle();
#line 44
}
#line 44
# 39 "/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline   void /*PlatformLedsC.Led2Impl*/Msp430GpioC$9$GeneralIO$toggle(void)
#line 39
{
#line 39
  /*PlatformLedsC.Led2Impl*/Msp430GpioC$9$HplGeneralIO$toggle();
}

# 31 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led2$toggle(void){
#line 31
  /*PlatformLedsC.Led2Impl*/Msp430GpioC$9$GeneralIO$toggle();
#line 31
}
#line 31
# 103 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline   void LedsP$Leds$led2Toggle(void)
#line 103
{
  LedsP$Led2$toggle();
  ;
#line 105
  ;
}

# 89 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static   void /*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$Leds$led2Toggle(void){
#line 89
  LedsP$Leds$led2Toggle();
#line 89
}
#line 89
# 32 "AES/CTRP.nc"
static inline  error_t /*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$CtrI$AESctr_encrypt(uint8_t *in, uint8_t payloadLenB, uint8_t *nonce)
{

  uint8_t mod = 0;
#line 35
  uint8_t m = 0;
#line 35
  uint8_t k = 0;

  uint8_t ctrblk[16] = { 0 };

  /*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$blksizeB = 16;
  mod = payloadLenB % /*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$blksizeB;
  m = payloadLenB / /*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$blksizeB;

  memcpy(&/*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$fc, &nonce[3], 4);
  memcpy(ctrblk, nonce, 16);

  for (/*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$i = 0, k = 0; /*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$i < m; /*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$i++, k += /*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$blksizeB) {
      /*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$Leds$led2Toggle();
      /*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$AFWA_AESI$AFWAenc((uint8_t *)ctrblk);
      memcpy((uint8_t *)/*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$tmp, (uint8_t *)&in[k], /*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$blksizeB);
      /*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$xor((uint8_t *)/*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$tmp, (uint8_t *)ctrblk);
      memcpy((uint8_t *)&in[k], (uint8_t *)/*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$tmp, /*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$blksizeB);

      if (/*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$i > 1) {
        /*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$fc++;
        }
#line 55
      memcpy(&ctrblk[3], &/*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$fc, 4);
    }


  memset(/*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$tmp, 0, /*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$blksizeB);

  if (--/*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$i > 2 || m == 0) {

      if (mod) {

          memcpy((uint8_t *)/*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$tmp, (uint8_t *)&in[k], mod);
          /*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$xor((uint8_t *)/*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$tmp, (uint8_t *)ctrblk);
          memcpy((uint8_t *)&in[k], (uint8_t *)/*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$tmp, /*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$blksizeB);
        }
      else {

          memcpy((uint8_t *)/*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$tmp, (uint8_t *)&in[k], /*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$blksizeB);
          /*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$xor((uint8_t *)/*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$tmp, (uint8_t *)ctrblk);
          memcpy((uint8_t *)&in[k], (uint8_t *)/*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$tmp, /*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$blksizeB);
        }
      /*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$fc++;
      memcpy(&ctrblk[3], &/*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$fc, 4);
    }
  memcpy(nonce, ctrblk, 16);

  return SUCCESS;
}

# 10 "AES/Interfaces/CtrI.nc"
inline static  error_t /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$CtrI$AESctr_encrypt(uint8_t *arg_0x40f89278, uint8_t arg_0x40f89408, uint8_t *arg_0x40f895b0){
#line 10
  unsigned char result;
#line 10

#line 10
  result = /*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$CtrI$AESctr_encrypt(arg_0x40f89278, arg_0x40f89408, arg_0x40f895b0);
#line 10

#line 10
  return result;
#line 10
}
#line 10
# 257 "AES/AFWA_AESP.nc"
static inline  error_t /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$AFWA_AESI$AFWAsend(am_addr_t addr, message_t *msg, uint8_t len)
{


  uint8_t trueLen = 0;
  sec_msg_t smsg = { 0, { 0 } };
  uint16_t tag = 0;



  trueLen = len;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 269
    {

      switch (/*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$tx_ctrl0 & 0x0003) 
        {

          case 0x0003: 







            memcpy(&/*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$fc, &/*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$nonceValue[3], 4);
          smsg.fc = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$fc;
          memcpy(smsg.data, /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$AMSend$getPayload(msg), len);
          memcpy(/*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$AMSend$getPayload(msg), &smsg, /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$fcLen + len + /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$appLen);

          {
            unsigned char __nesc_temp = 
#line 287
            /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$AMSend$send(addr, msg, /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$fcLen + len + /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$appLen);

            {
#line 287
              __nesc_atomic_end(__nesc_atomic); 
#line 287
              return __nesc_temp;
            }
          }
#line 288
          break;

          case 0x0002: 

            /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$CtrI$AESctr_encrypt((uint8_t *)msg, len, /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$nonceValue);
          memcpy(&/*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$fc, &/*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$nonceValue[3], 4);
          smsg.fc = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$fc;
          memcpy(smsg.data, /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$AMSend$getPayload(msg), len);
          memcpy(/*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$AMSend$getPayload(msg), &smsg, /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$fcLen + len);

          {
            unsigned char __nesc_temp = 
#line 298
            /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$AMSend$send(addr, msg, /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$fcLen + len);

            {
#line 298
              __nesc_atomic_end(__nesc_atomic); 
#line 298
              return __nesc_temp;
            }
          }
#line 299
          break;

          case 0x0001: 

            memcpy(smsg.data, /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$AMSend$getPayload(msg), len);

          /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$OmacI$cbcmacGenerate((uint8_t *)smsg.data, len, /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$KeySizeB);
          /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$OmacI$truncateTag((uint8_t *)smsg.data, len, /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$appLen);
          memcpy(/*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$AMSend$getPayload(msg), (uint8_t *)& smsg.data, len + /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$appLen);
          {
            unsigned char __nesc_temp = 
#line 308
            /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$AMSend$send(addr, msg, len + /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$appLen);

            {
#line 308
              __nesc_atomic_end(__nesc_atomic); 
#line 308
              return __nesc_temp;
            }
          }
#line 309
          break;

          case 0x0000: 
            /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$startAes(/*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$KeySizeB);
          {
            unsigned char __nesc_temp = 
#line 313
            /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$AMSend$send(addr, msg, len);

            {
#line 313
              __nesc_atomic_end(__nesc_atomic); 
#line 313
              return __nesc_temp;
            }
          }
#line 314
          break;
        }
    }
#line 316
    __nesc_atomic_end(__nesc_atomic); }



  return SUCCESS;
}

# 53 "AES/Interfaces/AFWA_AESI.nc"
inline static  error_t OscilloscopeC$AFWA_AESI$AFWAsend(uint16_t arg_0x405b4768, message_t *arg_0x405b4918, uint8_t arg_0x405b4aa0){
#line 53
  unsigned char result;
#line 53

#line 53
  result = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$AFWA_AESI$AFWAsend(arg_0x405b4768, arg_0x405b4918, arg_0x405b4aa0);
#line 53

#line 53
  return result;
#line 53
}
#line 53
# 80 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline  void *CC2420ActiveMessageP$AMSend$getPayload(am_id_t id, message_t *m)
#line 80
{
  return CC2420ActiveMessageP$Packet$getPayload(m, (void *)0);
}

# 125 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  void */*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$getPayload(am_id_t arg_0x40f58880, message_t *arg_0x40598b18){
#line 125
  void *result;
#line 125

#line 125
  result = CC2420ActiveMessageP$AMSend$getPayload(arg_0x40f58880, arg_0x40598b18);
#line 125

#line 125
  return result;
#line 125
}
#line 125
# 203 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline  void */*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$getPayload(uint8_t id, message_t *m)
#line 203
{
  return /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$getPayload(0, m);
}

# 114 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static  void */*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$getPayload(message_t *arg_0x407371f8){
#line 114
  void *result;
#line 114

#line 114
  result = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$getPayload(0U, arg_0x407371f8);
#line 114

#line 114
  return result;
#line 114
}
#line 114
# 65 "/opt/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline  void */*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$getPayload(message_t *m)
#line 65
{
  return /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$getPayload(m);
}

# 125 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  void *OscilloscopeC$AMSend$getPayload(message_t *arg_0x40598b18){
#line 125
  void *result;
#line 125

#line 125
  result = /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$getPayload(arg_0x40598b18);
#line 125

#line 125
  return result;
#line 125
}
#line 125
# 168 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline  uint8_t CC2420ActiveMessageP$Packet$maxPayloadLength(void)
#line 168
{
  return 48;
}

#line 76
static inline  uint8_t CC2420ActiveMessageP$AMSend$maxPayloadLength(am_id_t id)
#line 76
{
  return CC2420ActiveMessageP$Packet$maxPayloadLength();
}

# 112 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$maxPayloadLength(am_id_t arg_0x40f58880){
#line 112
  unsigned char result;
#line 112

#line 112
  result = CC2420ActiveMessageP$AMSend$maxPayloadLength(arg_0x40f58880);
#line 112

#line 112
  return result;
#line 112
}
#line 112
# 199 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline  uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$maxPayloadLength(uint8_t id)
#line 199
{
  return /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$maxPayloadLength(0);
}

# 101 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static  uint8_t /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$maxPayloadLength(void){
#line 101
  unsigned char result;
#line 101

#line 101
  result = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$maxPayloadLength(0U);
#line 101

#line 101
  return result;
#line 101
}
#line 101
# 61 "/opt/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline  uint8_t /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$maxPayloadLength(void)
#line 61
{
  return /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$maxPayloadLength();
}

# 112 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  uint8_t OscilloscopeC$AMSend$maxPayloadLength(void){
#line 112
  unsigned char result;
#line 112

#line 112
  result = /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$maxPayloadLength();
#line 112

#line 112
  return result;
#line 112
}
#line 112
# 139 "OscilloscopeC.nc"
static inline  void OscilloscopeC$Timer$fired(void)
#line 139
{

  uint8_t i;
#line 141
  uint8_t size;

  if (!OscilloscopeC$sendbusy && sizeof OscilloscopeC$aes_key1 <= OscilloscopeC$AMSend$maxPayloadLength()) {


      memcpy(OscilloscopeC$AMSend$getPayload(&OscilloscopeC$sendbuf), OscilloscopeC$aes_plaintext, sizeof OscilloscopeC$aes_plaintext);
      if (OscilloscopeC$AFWA_AESI$AFWAsend(AM_BROADCAST_ADDR, &OscilloscopeC$sendbuf, sizeof OscilloscopeC$aes_plaintext) == SUCCESS) {

        OscilloscopeC$sendbusy = TRUE;
        }
    }

  OscilloscopeC$aes_plaintext[0] = 0;

  for (i = 1; i < 16; i++) 
    OscilloscopeC$aes_plaintext[i] = OscilloscopeC$aes_plaintext[i - 1] + 0x11;

  if (!OscilloscopeC$sendbusy) {
    OscilloscopeC$report_problem();
    }
  OscilloscopeC$sendbusy = TRUE;
}

# 192 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline   void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num)
{
}

# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(uint8_t arg_0x40f081d0){
#line 72
  switch (arg_0x40f081d0) {
#line 72
    case 0U:
#line 72
      OscilloscopeC$Timer$fired();
#line 72
      break;
#line 72
    default:
#line 72
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(arg_0x40f081d0);
#line 72
      break;
#line 72
    }
#line 72
}
#line 72
# 117 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline  void CC2420ActiveMessageP$AMPacket$setDestination(message_t *amsg, am_addr_t addr)
#line 117
{
  cc2420_header_t *header = CC2420ActiveMessageP$CC2420PacketBody$getHeader(amsg);

#line 119
  __nesc_hton_leuint16((unsigned char *)&header->dest, addr);
}

# 92 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  void /*OscilloscopeAppC.AFWA_AESC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setDestination(message_t *arg_0x405afd38, am_addr_t arg_0x405afec8){
#line 92
  CC2420ActiveMessageP$AMPacket$setDestination(arg_0x405afd38, arg_0x405afec8);
#line 92
}
#line 92
# 137 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline  void CC2420ActiveMessageP$AMPacket$setType(message_t *amsg, am_id_t type)
#line 137
{
  cc2420_header_t *header = CC2420ActiveMessageP$CC2420PacketBody$getHeader(amsg);

#line 139
  __nesc_hton_leuint8((unsigned char *)&header->type, type);
}

# 151 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  void /*OscilloscopeAppC.AFWA_AESC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setType(message_t *arg_0x405accc8, am_id_t arg_0x405ace50){
#line 151
  CC2420ActiveMessageP$AMPacket$setType(arg_0x405accc8, arg_0x405ace50);
#line 151
}
#line 151
# 164 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline  void CC2420ActiveMessageP$Packet$setPayloadLength(message_t *msg, uint8_t len)
#line 164
{
  __nesc_hton_leuint8((unsigned char *)&CC2420ActiveMessageP$CC2420PacketBody$getHeader(msg)->length, len + CC2420ActiveMessageP$CC2420_SIZE);
}

# 83 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(message_t *arg_0x406efe30, uint8_t arg_0x40704010){
#line 83
  CC2420ActiveMessageP$Packet$setPayloadLength(arg_0x406efe30, arg_0x40704010);
#line 83
}
#line 83
# 82 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline  error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(uint8_t clientId, message_t *msg, 
uint8_t len)
#line 83
{
  if (clientId >= 2) {
      return FAIL;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[clientId].msg != (void *)0) {
      return EBUSY;
    }
  ;

  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[clientId].msg = msg;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(msg, len);

  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current >= 2) {
      error_t err;
      am_id_t amId = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(msg);
      am_addr_t dest = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(msg);

      ;
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current = clientId;

      err = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(amId, dest, msg, len);
      if (err != SUCCESS) {
          ;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current = 2;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[clientId].msg = (void *)0;
        }

      return err;
    }
  else {
      ;
    }
  return SUCCESS;
}

# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static  error_t /*OscilloscopeAppC.AFWA_AESC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$send(message_t *arg_0x4073a4b0, uint8_t arg_0x4073a638){
#line 64
  unsigned char result;
#line 64

#line 64
  result = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(1U, arg_0x4073a4b0, arg_0x4073a638);
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 451 "AES/AFWA_AESP.nc"
static inline void /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$RotWord(uint8_t *x)
{






  uint8_t temp;

#line 460
  temp = x[0];
  x[0] = x[1];
  x[1] = x[2];
  x[2] = x[3];
  x[3] = temp;
}

#line 408
static inline void /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$KeyExpansion(void)
{
  uint8_t i;
#line 410
  uint8_t j;
  uint8_t temp[4];

  /* atomic removed: atomic calls only */

  {

    for (i = 0; i < /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$KeySizeW; i++) {

        /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$w[i * 4 + 0] = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$localKey[i * 4 + 0];
        /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$w[i * 4 + 1] = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$localKey[i * 4 + 1];
        /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$w[i * 4 + 2] = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$localKey[i * 4 + 2];
        /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$w[i * 4 + 3] = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$localKey[i * 4 + 3];
      }

    for (i = 4; i < /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$coloumns * (/*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$rounds + 1); i++) {

        for (j = 0; j < 4; j++) 
          temp[j] = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$w[(i - 1) * 4 + j];

        if (i % /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$KeySizeW == 0) {




            /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$RotWord(temp);
            /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$SubWord(temp);

            temp[0] = temp[0] ^ /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$Rcon[i / /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$KeySizeW];
          }
        else {
#line 440
          if (/*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$KeySizeW > 6 && i % /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$KeySizeW == 4) {
            /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$SubWord(temp);
            }
          }
#line 443
        /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$w[i * 4 + 0] = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$w[(i - /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$KeySizeW) * 4 + 0] ^ temp[0];
        /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$w[i * 4 + 1] = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$w[(i - /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$KeySizeW) * 4 + 1] ^ temp[1];
        /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$w[i * 4 + 2] = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$w[(i - /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$KeySizeW) * 4 + 2] ^ temp[2];
        /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$w[i * 4 + 3] = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$w[(i - /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$KeySizeW) * 4 + 3] ^ temp[3];
      }
  }
}

#line 661
static inline void /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$InvMixColumns(void)
{
  uint8_t i;
  uint8_t a;
#line 664
  uint8_t b;
#line 664
  uint8_t c;
#line 664
  uint8_t d;

  /* atomic removed: atomic calls only */
#line 666
  {

    for (i = 0; i < 4; i++) {

        a = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[0][i];
        b = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[1][i];
        c = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[2][i];
        d = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[3][i];


        /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[0][i] = (((((((0x0e & 1) * a ^ ((0x0e >> 1) & 1) * ((a << 1) ^ ((a >> 7) & 1) * 0x1b)) ^ ((0x0e >> 2) & 1) * ((((a << 1) ^ ((a >> 7) & 1) * 0x1b) << 1) ^ ((((a << 1) ^ ((a >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b)) ^ ((0x0e >> 3) & 1) * ((((((a << 1) ^ ((a >> 7) & 1) * 0x1b) << 1) ^ ((((a << 1) ^ ((a >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((a << 1) ^ ((a >> 7) & 1) * 0x1b) << 1) ^ ((((a << 1) ^ ((a >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b)) ^ ((0x0e >> 4) & 1) * ((((((((a << 1) ^ ((a >> 7) & 1) * 0x1b) << 1) ^ ((((a << 1) ^ ((a >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((a << 1) ^ ((a >> 7) & 1) * 0x1b) << 1) ^ ((((a << 1) ^ ((a >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((((a << 1) ^ ((a >> 7) & 1) * 0x1b) << 1) ^ ((((a << 1) ^ ((a >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((a << 1) ^ ((a >> 7) & 1) * 0x1b) << 1) ^ ((((a << 1) ^ ((a >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b)) ^ (((((0x0b & 1) * b ^ ((0x0b >> 1) & 1) * ((b << 1) ^ ((b >> 7) & 1) * 0x1b)) ^ ((0x0b >> 2) & 1) * ((((b << 1) ^ ((b >> 7) & 1) * 0x1b) << 1) ^ ((((b << 1) ^ ((b >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b)) ^ ((0x0b >> 3) & 1) * ((((((b << 1) ^ ((b >> 7) & 1) * 0x1b) << 1) ^ ((((b << 1) ^ ((b >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((b << 1) ^ ((b >> 7) & 1) * 0x1b) << 1) ^ ((((b << 1) ^ ((b >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b)) ^ ((0x0b >> 4) & 1) * ((((((((b << 1) ^ ((b >> 7) & 1) * 0x1b) << 1) ^ ((((b << 1) ^ ((b >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((b << 1) ^ ((b >> 7) & 1) * 0x1b) << 1) ^ ((((b << 1) ^ ((b >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((((b << 1) ^ ((b >> 7) & 1) * 0x1b) << 1) ^ ((((b << 1) ^ ((b >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((b << 1) ^ ((b >> 7) & 1) * 0x1b) << 1) ^ ((((b << 1) ^ ((b >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b))) ^ (((((0x0d & 1) * c ^ ((0x0d >> 1) & 1) * ((c << 1) ^ ((c >> 7) & 1) * 0x1b)) ^ ((0x0d >> 2) & 1) * ((((c << 1) ^ ((c >> 7) & 1) * 0x1b) << 1) ^ ((((c << 1) ^ ((c >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b)) ^ ((0x0d >> 3) & 1) * ((((((c << 1) ^ ((c >> 7) & 1) * 0x1b) << 1) ^ ((((c << 1) ^ ((c >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((c << 1) ^ ((c >> 7) & 1) * 0x1b) << 1) ^ ((((c << 1) ^ ((c >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b)) ^ ((0x0d >> 4) & 1) * ((((((((c << 1) ^ ((c >> 7) & 1) * 0x1b) << 1) ^ ((((c << 1) ^ ((c >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((c << 1) ^ ((c >> 7) & 1) * 0x1b) << 1) ^ ((((c << 1) ^ ((c >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((((c << 1) ^ ((c >> 7) & 1) * 0x1b) << 1) ^ ((((c << 1) ^ ((c >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((c << 1) ^ ((c >> 7) & 1) * 0x1b) << 1) ^ ((((c << 1) ^ ((c >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b))) ^ (((((0x09 & 1) * d ^ ((0x09 >> 1) & 1) * ((d << 1) ^ ((d >> 7) & 1) * 0x1b)) ^ ((0x09 >> 2) & 1) * ((((d << 1) ^ ((d >> 7) & 1) * 0x1b) << 1) ^ ((((d << 1) ^ ((d >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b)) ^ ((0x09 >> 3) & 1) * ((((((d << 1) ^ ((d >> 7) & 1) * 0x1b) << 1) ^ ((((d << 1) ^ ((d >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((d << 1) ^ ((d >> 7) & 1) * 0x1b) << 1) ^ ((((d << 1) ^ ((d >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b)) ^ ((0x09 >> 4) & 1) * ((((((((d << 1) ^ ((d >> 7) & 1) * 0x1b) << 1) ^ ((((d << 1) ^ ((d >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((d << 1) ^ ((d >> 7) & 1) * 0x1b) << 1) ^ ((((d << 1) ^ ((d >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((((d << 1) ^ ((d >> 7) & 1) * 0x1b) << 1) ^ ((((d << 1) ^ ((d >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((d << 1) ^ ((d >> 7) & 1) * 0x1b) << 1) ^ ((((d << 1) ^ ((d >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b));
        /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[1][i] = (((((((0x09 & 1) * a ^ ((0x09 >> 1) & 1) * ((a << 1) ^ ((a >> 7) & 1) * 0x1b)) ^ ((0x09 >> 2) & 1) * ((((a << 1) ^ ((a >> 7) & 1) * 0x1b) << 1) ^ ((((a << 1) ^ ((a >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b)) ^ ((0x09 >> 3) & 1) * ((((((a << 1) ^ ((a >> 7) & 1) * 0x1b) << 1) ^ ((((a << 1) ^ ((a >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((a << 1) ^ ((a >> 7) & 1) * 0x1b) << 1) ^ ((((a << 1) ^ ((a >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b)) ^ ((0x09 >> 4) & 1) * ((((((((a << 1) ^ ((a >> 7) & 1) * 0x1b) << 1) ^ ((((a << 1) ^ ((a >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((a << 1) ^ ((a >> 7) & 1) * 0x1b) << 1) ^ ((((a << 1) ^ ((a >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((((a << 1) ^ ((a >> 7) & 1) * 0x1b) << 1) ^ ((((a << 1) ^ ((a >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((a << 1) ^ ((a >> 7) & 1) * 0x1b) << 1) ^ ((((a << 1) ^ ((a >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b)) ^ (((((0x0e & 1) * b ^ ((0x0e >> 1) & 1) * ((b << 1) ^ ((b >> 7) & 1) * 0x1b)) ^ ((0x0e >> 2) & 1) * ((((b << 1) ^ ((b >> 7) & 1) * 0x1b) << 1) ^ ((((b << 1) ^ ((b >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b)) ^ ((0x0e >> 3) & 1) * ((((((b << 1) ^ ((b >> 7) & 1) * 0x1b) << 1) ^ ((((b << 1) ^ ((b >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((b << 1) ^ ((b >> 7) & 1) * 0x1b) << 1) ^ ((((b << 1) ^ ((b >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b)) ^ ((0x0e >> 4) & 1) * ((((((((b << 1) ^ ((b >> 7) & 1) * 0x1b) << 1) ^ ((((b << 1) ^ ((b >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((b << 1) ^ ((b >> 7) & 1) * 0x1b) << 1) ^ ((((b << 1) ^ ((b >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((((b << 1) ^ ((b >> 7) & 1) * 0x1b) << 1) ^ ((((b << 1) ^ ((b >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((b << 1) ^ ((b >> 7) & 1) * 0x1b) << 1) ^ ((((b << 1) ^ ((b >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b))) ^ (((((0x0b & 1) * c ^ ((0x0b >> 1) & 1) * ((c << 1) ^ ((c >> 7) & 1) * 0x1b)) ^ ((0x0b >> 2) & 1) * ((((c << 1) ^ ((c >> 7) & 1) * 0x1b) << 1) ^ ((((c << 1) ^ ((c >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b)) ^ ((0x0b >> 3) & 1) * ((((((c << 1) ^ ((c >> 7) & 1) * 0x1b) << 1) ^ ((((c << 1) ^ ((c >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((c << 1) ^ ((c >> 7) & 1) * 0x1b) << 1) ^ ((((c << 1) ^ ((c >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b)) ^ ((0x0b >> 4) & 1) * ((((((((c << 1) ^ ((c >> 7) & 1) * 0x1b) << 1) ^ ((((c << 1) ^ ((c >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((c << 1) ^ ((c >> 7) & 1) * 0x1b) << 1) ^ ((((c << 1) ^ ((c >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((((c << 1) ^ ((c >> 7) & 1) * 0x1b) << 1) ^ ((((c << 1) ^ ((c >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((c << 1) ^ ((c >> 7) & 1) * 0x1b) << 1) ^ ((((c << 1) ^ ((c >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b))) ^ (((((0x0d & 1) * d ^ ((0x0d >> 1) & 1) * ((d << 1) ^ ((d >> 7) & 1) * 0x1b)) ^ ((0x0d >> 2) & 1) * ((((d << 1) ^ ((d >> 7) & 1) * 0x1b) << 1) ^ ((((d << 1) ^ ((d >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b)) ^ ((0x0d >> 3) & 1) * ((((((d << 1) ^ ((d >> 7) & 1) * 0x1b) << 1) ^ ((((d << 1) ^ ((d >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((d << 1) ^ ((d >> 7) & 1) * 0x1b) << 1) ^ ((((d << 1) ^ ((d >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b)) ^ ((0x0d >> 4) & 1) * ((((((((d << 1) ^ ((d >> 7) & 1) * 0x1b) << 1) ^ ((((d << 1) ^ ((d >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((d << 1) ^ ((d >> 7) & 1) * 0x1b) << 1) ^ ((((d << 1) ^ ((d >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((((d << 1) ^ ((d >> 7) & 1) * 0x1b) << 1) ^ ((((d << 1) ^ ((d >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((d << 1) ^ ((d >> 7) & 1) * 0x1b) << 1) ^ ((((d << 1) ^ ((d >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b));
        /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[2][i] = (((((((0x0d & 1) * a ^ ((0x0d >> 1) & 1) * ((a << 1) ^ ((a >> 7) & 1) * 0x1b)) ^ ((0x0d >> 2) & 1) * ((((a << 1) ^ ((a >> 7) & 1) * 0x1b) << 1) ^ ((((a << 1) ^ ((a >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b)) ^ ((0x0d >> 3) & 1) * ((((((a << 1) ^ ((a >> 7) & 1) * 0x1b) << 1) ^ ((((a << 1) ^ ((a >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((a << 1) ^ ((a >> 7) & 1) * 0x1b) << 1) ^ ((((a << 1) ^ ((a >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b)) ^ ((0x0d >> 4) & 1) * ((((((((a << 1) ^ ((a >> 7) & 1) * 0x1b) << 1) ^ ((((a << 1) ^ ((a >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((a << 1) ^ ((a >> 7) & 1) * 0x1b) << 1) ^ ((((a << 1) ^ ((a >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((((a << 1) ^ ((a >> 7) & 1) * 0x1b) << 1) ^ ((((a << 1) ^ ((a >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((a << 1) ^ ((a >> 7) & 1) * 0x1b) << 1) ^ ((((a << 1) ^ ((a >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b)) ^ (((((0x09 & 1) * b ^ ((0x09 >> 1) & 1) * ((b << 1) ^ ((b >> 7) & 1) * 0x1b)) ^ ((0x09 >> 2) & 1) * ((((b << 1) ^ ((b >> 7) & 1) * 0x1b) << 1) ^ ((((b << 1) ^ ((b >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b)) ^ ((0x09 >> 3) & 1) * ((((((b << 1) ^ ((b >> 7) & 1) * 0x1b) << 1) ^ ((((b << 1) ^ ((b >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((b << 1) ^ ((b >> 7) & 1) * 0x1b) << 1) ^ ((((b << 1) ^ ((b >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b)) ^ ((0x09 >> 4) & 1) * ((((((((b << 1) ^ ((b >> 7) & 1) * 0x1b) << 1) ^ ((((b << 1) ^ ((b >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((b << 1) ^ ((b >> 7) & 1) * 0x1b) << 1) ^ ((((b << 1) ^ ((b >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((((b << 1) ^ ((b >> 7) & 1) * 0x1b) << 1) ^ ((((b << 1) ^ ((b >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((b << 1) ^ ((b >> 7) & 1) * 0x1b) << 1) ^ ((((b << 1) ^ ((b >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b))) ^ (((((0x0e & 1) * c ^ ((0x0e >> 1) & 1) * ((c << 1) ^ ((c >> 7) & 1) * 0x1b)) ^ ((0x0e >> 2) & 1) * ((((c << 1) ^ ((c >> 7) & 1) * 0x1b) << 1) ^ ((((c << 1) ^ ((c >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b)) ^ ((0x0e >> 3) & 1) * ((((((c << 1) ^ ((c >> 7) & 1) * 0x1b) << 1) ^ ((((c << 1) ^ ((c >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((c << 1) ^ ((c >> 7) & 1) * 0x1b) << 1) ^ ((((c << 1) ^ ((c >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b)) ^ ((0x0e >> 4) & 1) * ((((((((c << 1) ^ ((c >> 7) & 1) * 0x1b) << 1) ^ ((((c << 1) ^ ((c >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((c << 1) ^ ((c >> 7) & 1) * 0x1b) << 1) ^ ((((c << 1) ^ ((c >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((((c << 1) ^ ((c >> 7) & 1) * 0x1b) << 1) ^ ((((c << 1) ^ ((c >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((c << 1) ^ ((c >> 7) & 1) * 0x1b) << 1) ^ ((((c << 1) ^ ((c >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b))) ^ (((((0x0b & 1) * d ^ ((0x0b >> 1) & 1) * ((d << 1) ^ ((d >> 7) & 1) * 0x1b)) ^ ((0x0b >> 2) & 1) * ((((d << 1) ^ ((d >> 7) & 1) * 0x1b) << 1) ^ ((((d << 1) ^ ((d >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b)) ^ ((0x0b >> 3) & 1) * ((((((d << 1) ^ ((d >> 7) & 1) * 0x1b) << 1) ^ ((((d << 1) ^ ((d >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((d << 1) ^ ((d >> 7) & 1) * 0x1b) << 1) ^ ((((d << 1) ^ ((d >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b)) ^ ((0x0b >> 4) & 1) * ((((((((d << 1) ^ ((d >> 7) & 1) * 0x1b) << 1) ^ ((((d << 1) ^ ((d >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((d << 1) ^ ((d >> 7) & 1) * 0x1b) << 1) ^ ((((d << 1) ^ ((d >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((((d << 1) ^ ((d >> 7) & 1) * 0x1b) << 1) ^ ((((d << 1) ^ ((d >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((d << 1) ^ ((d >> 7) & 1) * 0x1b) << 1) ^ ((((d << 1) ^ ((d >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b));
        /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[3][i] = (((((((0x0b & 1) * a ^ ((0x0b >> 1) & 1) * ((a << 1) ^ ((a >> 7) & 1) * 0x1b)) ^ ((0x0b >> 2) & 1) * ((((a << 1) ^ ((a >> 7) & 1) * 0x1b) << 1) ^ ((((a << 1) ^ ((a >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b)) ^ ((0x0b >> 3) & 1) * ((((((a << 1) ^ ((a >> 7) & 1) * 0x1b) << 1) ^ ((((a << 1) ^ ((a >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((a << 1) ^ ((a >> 7) & 1) * 0x1b) << 1) ^ ((((a << 1) ^ ((a >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b)) ^ ((0x0b >> 4) & 1) * ((((((((a << 1) ^ ((a >> 7) & 1) * 0x1b) << 1) ^ ((((a << 1) ^ ((a >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((a << 1) ^ ((a >> 7) & 1) * 0x1b) << 1) ^ ((((a << 1) ^ ((a >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((((a << 1) ^ ((a >> 7) & 1) * 0x1b) << 1) ^ ((((a << 1) ^ ((a >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((a << 1) ^ ((a >> 7) & 1) * 0x1b) << 1) ^ ((((a << 1) ^ ((a >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b)) ^ (((((0x0d & 1) * b ^ ((0x0d >> 1) & 1) * ((b << 1) ^ ((b >> 7) & 1) * 0x1b)) ^ ((0x0d >> 2) & 1) * ((((b << 1) ^ ((b >> 7) & 1) * 0x1b) << 1) ^ ((((b << 1) ^ ((b >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b)) ^ ((0x0d >> 3) & 1) * ((((((b << 1) ^ ((b >> 7) & 1) * 0x1b) << 1) ^ ((((b << 1) ^ ((b >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((b << 1) ^ ((b >> 7) & 1) * 0x1b) << 1) ^ ((((b << 1) ^ ((b >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b)) ^ ((0x0d >> 4) & 1) * ((((((((b << 1) ^ ((b >> 7) & 1) * 0x1b) << 1) ^ ((((b << 1) ^ ((b >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((b << 1) ^ ((b >> 7) & 1) * 0x1b) << 1) ^ ((((b << 1) ^ ((b >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((((b << 1) ^ ((b >> 7) & 1) * 0x1b) << 1) ^ ((((b << 1) ^ ((b >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((b << 1) ^ ((b >> 7) & 1) * 0x1b) << 1) ^ ((((b << 1) ^ ((b >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b))) ^ (((((0x09 & 1) * c ^ ((0x09 >> 1) & 1) * ((c << 1) ^ ((c >> 7) & 1) * 0x1b)) ^ ((0x09 >> 2) & 1) * ((((c << 1) ^ ((c >> 7) & 1) * 0x1b) << 1) ^ ((((c << 1) ^ ((c >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b)) ^ ((0x09 >> 3) & 1) * ((((((c << 1) ^ ((c >> 7) & 1) * 0x1b) << 1) ^ ((((c << 1) ^ ((c >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((c << 1) ^ ((c >> 7) & 1) * 0x1b) << 1) ^ ((((c << 1) ^ ((c >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b)) ^ ((0x09 >> 4) & 1) * ((((((((c << 1) ^ ((c >> 7) & 1) * 0x1b) << 1) ^ ((((c << 1) ^ ((c >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((c << 1) ^ ((c >> 7) & 1) * 0x1b) << 1) ^ ((((c << 1) ^ ((c >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((((c << 1) ^ ((c >> 7) & 1) * 0x1b) << 1) ^ ((((c << 1) ^ ((c >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((c << 1) ^ ((c >> 7) & 1) * 0x1b) << 1) ^ ((((c << 1) ^ ((c >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b))) ^ (((((0x0e & 1) * d ^ ((0x0e >> 1) & 1) * ((d << 1) ^ ((d >> 7) & 1) * 0x1b)) ^ ((0x0e >> 2) & 1) * ((((d << 1) ^ ((d >> 7) & 1) * 0x1b) << 1) ^ ((((d << 1) ^ ((d >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b)) ^ ((0x0e >> 3) & 1) * ((((((d << 1) ^ ((d >> 7) & 1) * 0x1b) << 1) ^ ((((d << 1) ^ ((d >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((d << 1) ^ ((d >> 7) & 1) * 0x1b) << 1) ^ ((((d << 1) ^ ((d >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b)) ^ ((0x0e >> 4) & 1) * ((((((((d << 1) ^ ((d >> 7) & 1) * 0x1b) << 1) ^ ((((d << 1) ^ ((d >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((d << 1) ^ ((d >> 7) & 1) * 0x1b) << 1) ^ ((((d << 1) ^ ((d >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((((d << 1) ^ ((d >> 7) & 1) * 0x1b) << 1) ^ ((((d << 1) ^ ((d >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) << 1) ^ ((((((d << 1) ^ ((d >> 7) & 1) * 0x1b) << 1) ^ ((((d << 1) ^ ((d >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b) >> 7) & 1) * 0x1b));
      }
  }
}

#line 564
static inline void /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$MixColumns(void)
{
  uint8_t i;
  uint8_t Tmp;
#line 567
  uint8_t Tm;
#line 567
  uint8_t t;

  /* atomic removed: atomic calls only */
#line 569
  {
    for (i = 0; i < 4; i++) {

        t = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[0][i];
        Tmp = ((/*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[0][i] ^ /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[1][i]) ^ /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[2][i]) ^ /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[3][i];
        Tm = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[0][i] ^ /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[1][i];
#line 574
        Tm = (Tm << 1) ^ ((Tm >> 7) & 1) * 0x1b;
#line 574
        /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[0][i] ^= Tm ^ Tmp;
        Tm = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[1][i] ^ /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[2][i];
#line 575
        Tm = (Tm << 1) ^ ((Tm >> 7) & 1) * 0x1b;
#line 575
        /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[1][i] ^= Tm ^ Tmp;
        Tm = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[2][i] ^ /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[3][i];
#line 576
        Tm = (Tm << 1) ^ ((Tm >> 7) & 1) * 0x1b;
#line 576
        /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[2][i] ^= Tm ^ Tmp;
        Tm = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[3][i] ^ t;
#line 577
        Tm = (Tm << 1) ^ ((Tm >> 7) & 1) * 0x1b;
#line 577
        /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[3][i] ^= Tm ^ Tmp;
      }
  }
}

static inline void /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$Cipher(void)
{
  uint8_t i;
#line 584
  uint8_t j;
#line 584
  uint8_t round = 0;
  uint8_t lastRound;

  /* atomic removed: atomic calls only */
#line 587
  {

    for (i = 0; i < 4; i++) 
      for (j = 0; j < 4; j++) 
        /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[j][i] = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$inPut[i * 4 + j];

    lastRound = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$rounds;

    if (/*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$mode) {

        /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$AddRoundKey(0);

        for (round = 1; round < /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$rounds; round++) {
            /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$SubBytes();
            /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$ShiftRows();
            /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$MixColumns();
            /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$AddRoundKey(round);
          }

        /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$SubBytes();
        /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$ShiftRows();
        /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$AddRoundKey(lastRound);
      }
    else {

        /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$AddRoundKey(lastRound);

        for (round = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$rounds - 1; round > 0; round--) {

            /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$InvShiftRows();
            /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$SubBytes();
            /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$AddRoundKey(round);
            /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$InvMixColumns();
          }

        /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$InvShiftRows();
        /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$SubBytes();
        /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$AddRoundKey(0);
      }

    for (i = 0; i < 4; i++) 
      for (j = 0; j < 4; j++) 
        /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$inPut[i * 4 + j] = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[j][i];
  }
}

#line 117
static inline uint8_t /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$sBoxInvert(uint8_t num)
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
  0x17, 0x2b, 0x04, 0x7e, 0xba, 0x77, 0xd6, 0x26, 0xe1, 0x69, 0x14, 0x63, 0x55, 0x21, 0x0c, 0x7d };

  return rsbox[num];
}

# 127 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow());
}

# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired(void){
#line 72
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired();
#line 72
}
#line 72
# 80 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline   /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$Alarm$getAlarm(void)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 82
    {
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$to_size_type __nesc_temp = 
#line 82
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$m_t0 + /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$m_dt;

      {
#line 82
        __nesc_atomic_end(__nesc_atomic); 
#line 82
        return __nesc_temp;
      }
    }
#line 84
    __nesc_atomic_end(__nesc_atomic); }
}

# 105 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(void){
#line 105
  unsigned long result;
#line 105

#line 105
  result = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$Alarm$getAlarm();
#line 105

#line 105
  return result;
#line 105
}
#line 105
# 63 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void)
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt, FALSE);
    }
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired();
}

# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t CC2420ReceiveP$SpiResource$release(void){
#line 110
  unsigned char result;
#line 110

#line 110
  result = CC2420SpiP$Resource$release(/*CC2420ReceiveC.Spi*/CC2420SpiC$4$CLIENT_ID);
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 34 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static   void /*HplCC2420PinsC.CSNM*/Msp430GpioC$1$HplGeneralIO$set(void){
#line 34
  /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP$26$IO$set();
#line 34
}
#line 34
# 37 "/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline   void /*HplCC2420PinsC.CSNM*/Msp430GpioC$1$GeneralIO$set(void)
#line 37
{
#line 37
  /*HplCC2420PinsC.CSNM*/Msp430GpioC$1$HplGeneralIO$set();
}

# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420ReceiveP$CSN$set(void){
#line 29
  /*HplCC2420PinsC.CSNM*/Msp430GpioC$1$GeneralIO$set();
#line 29
}
#line 29
# 55 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static   cc2420_status_t CC2420ReceiveP$SECCTRL0$write(uint16_t arg_0x407fa580){
#line 55
  unsigned char result;
#line 55

#line 55
  result = CC2420SpiP$Reg$write(CC2420_SECCTRL0, arg_0x407fa580);
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 39 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static   void /*HplCC2420PinsC.CSNM*/Msp430GpioC$1$HplGeneralIO$clr(void){
#line 39
  /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP$26$IO$clr();
#line 39
}
#line 39
# 38 "/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline   void /*HplCC2420PinsC.CSNM*/Msp430GpioC$1$GeneralIO$clr(void)
#line 38
{
#line 38
  /*HplCC2420PinsC.CSNM*/Msp430GpioC$1$HplGeneralIO$clr();
}

# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420ReceiveP$CSN$clr(void){
#line 30
  /*HplCC2420PinsC.CSNM*/Msp430GpioC$1$GeneralIO$clr();
#line 30
}
#line 30
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t CC2420ReceiveP$waitDecTask$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(CC2420ReceiveP$waitDecTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static   cc2420_status_t CC2420ReceiveP$SNOP$strobe(void){
#line 45
  unsigned char result;
#line 45

#line 45
  result = CC2420SpiP$Strobe$strobe(CC2420_SNOP);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 263 "/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline  void CC2420ReceiveP$waitDecTask$runTask(void)
#line 263
{

  cc2420_status_t status;

  CC2420ReceiveP$CSN$clr();
  status = CC2420ReceiveP$SNOP$strobe();
  CC2420ReceiveP$CSN$set();

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 271
    CC2420ReceiveP$decLoopCount++;
#line 271
    __nesc_atomic_end(__nesc_atomic); }

  if (CC2420ReceiveP$decLoopCount > 10) {
      CC2420ReceiveP$CSN$clr();
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 275
        CC2420ReceiveP$SECCTRL0$write((0x0000 | RXFIFO_PROTECTION) | SEC_CBC_HEAD);
#line 275
        __nesc_atomic_end(__nesc_atomic); }
      CC2420ReceiveP$CSN$set();
      SECURITYLOCK = 0;
      CC2420ReceiveP$SpiResource$release();
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 279
        CC2420ReceiveP$flush_flag = 1;
#line 279
        __nesc_atomic_end(__nesc_atomic); }
      CC2420ReceiveP$beginReceive();
    }
  else {
#line 281
    if (status & CC2420_STATUS_ENC_BUSY) {
        CC2420ReceiveP$waitDecTask$postTask();
      }
    else 
#line 283
      {
        CC2420ReceiveP$CSN$clr();
        { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 285
          CC2420ReceiveP$SECCTRL0$write((0x0000 | RXFIFO_PROTECTION) | SEC_CBC_HEAD);
#line 285
          __nesc_atomic_end(__nesc_atomic); }
        CC2420ReceiveP$CSN$set();
        SECURITYLOCK = 0;
        CC2420ReceiveP$SpiResource$release();
        CC2420ReceiveP$beginReceive();
      }
    }
}

# 118 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   bool CC2420ReceiveP$SpiResource$isOwner(void){
#line 118
  unsigned char result;
#line 118

#line 118
  result = CC2420SpiP$Resource$isOwner(/*CC2420ReceiveC.Spi*/CC2420SpiC$4$CLIENT_ID);
#line 118

#line 118
  return result;
#line 118
}
#line 118
#line 87
inline static   error_t CC2420ReceiveP$SpiResource$immediateRequest(void){
#line 87
  unsigned char result;
#line 87

#line 87
  result = CC2420SpiP$Resource$immediateRequest(/*CC2420ReceiveC.Spi*/CC2420SpiC$4$CLIENT_ID);
#line 87

#line 87
  return result;
#line 87
}
#line 87
#line 78
inline static   error_t CC2420ReceiveP$SpiResource$request(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = CC2420SpiP$Resource$request(/*CC2420ReceiveC.Spi*/CC2420SpiC$4$CLIENT_ID);
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t CC2420ReceiveP$waitTask$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(CC2420ReceiveP$waitTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 241 "/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline  void CC2420ReceiveP$waitTask$runTask(void)
#line 241
{

  if (SECURITYLOCK == 1) {
      CC2420ReceiveP$waitTask$postTask();
    }
  else 
#line 245
    {
      CC2420ReceiveP$m_state = CC2420ReceiveP$S_RX_DEC;
      CC2420ReceiveP$beginDec();
    }
}

# 52 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
inline static   cc2420_status_t CC2420ReceiveP$RXFIFO_RAM$read(uint8_t arg_0x407ff348, uint8_t *arg_0x407ff4f0, uint8_t arg_0x407ff678){
#line 52
  unsigned char result;
#line 52

#line 52
  result = CC2420SpiP$Ram$read(CC2420_RAM_RXFIFO, arg_0x407ff348, arg_0x407ff4f0, arg_0x407ff678);
#line 52

#line 52
  return result;
#line 52
}
#line 52
# 311 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline   bool CC2420ControlP$CC2420Config$isAddressRecognitionEnabled(void)
#line 311
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 312
    {
      unsigned char __nesc_temp = 
#line 312
      CC2420ControlP$addressRecognition;

      {
#line 312
        __nesc_atomic_end(__nesc_atomic); 
#line 312
        return __nesc_temp;
      }
    }
#line 314
    __nesc_atomic_end(__nesc_atomic); }
}

# 82 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static   bool CC2420ReceiveP$CC2420Config$isAddressRecognitionEnabled(void){
#line 82
  unsigned char result;
#line 82

#line 82
  result = CC2420ControlP$CC2420Config$isAddressRecognitionEnabled();
#line 82

#line 82
  return result;
#line 82
}
#line 82
# 55 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static   cc2420_status_t CC2420ReceiveP$SECCTRL1$write(uint16_t arg_0x407fa580){
#line 55
  unsigned char result;
#line 55

#line 55
  result = CC2420SpiP$Reg$write(CC2420_SECCTRL1, arg_0x407fa580);
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 63 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
inline static   cc2420_status_t CC2420ReceiveP$RXNONCE$write(uint8_t arg_0x407ffc58, uint8_t *arg_0x407ffe00, uint8_t arg_0x407fe010){
#line 63
  unsigned char result;
#line 63

#line 63
  result = CC2420SpiP$Ram$write(CC2420_RAM_RXNONCE, arg_0x407ffc58, arg_0x407ffe00, arg_0x407fe010);
#line 63

#line 63
  return result;
#line 63
}
#line 63
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static   cc2420_status_t CC2420ReceiveP$SRXDEC$strobe(void){
#line 45
  unsigned char result;
#line 45

#line 45
  result = CC2420SpiP$Strobe$strobe(CC2420_SRXDEC);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 210 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline   message_t *CC2420ActiveMessageP$Snoop$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 210
{
  return msg;
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static  message_t *CC2420ActiveMessageP$Snoop$receive(am_id_t arg_0x4072b320, message_t *arg_0x40591e08, void *arg_0x40590010, uint8_t arg_0x40590198){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
    result = CC2420ActiveMessageP$Snoop$default$receive(arg_0x4072b320, arg_0x40591e08, arg_0x40590010, arg_0x40590198);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 89 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static   void OscilloscopeC$Leds$led2Toggle(void){
#line 89
  LedsP$Leds$led2Toggle();
#line 89
}
#line 89
# 80 "OscilloscopeC.nc"
static inline void OscilloscopeC$report_received(void)
#line 80
{
#line 80
  OscilloscopeC$Leds$led2Toggle();
}

#line 131
static inline  message_t *OscilloscopeC$Receive$receive(message_t *msg, void *payload, uint8_t len)
#line 131
{


  OscilloscopeC$report_received();
  return msg;
}

# 206 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline   message_t *CC2420ActiveMessageP$Receive$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 206
{
  return msg;
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static  message_t *CC2420ActiveMessageP$Receive$receive(am_id_t arg_0x4072cb30, message_t *arg_0x40591e08, void *arg_0x40590010, uint8_t arg_0x40590198){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  switch (arg_0x4072cb30) {
#line 67
    case 147:
#line 67
      result = OscilloscopeC$Receive$receive(arg_0x40591e08, arg_0x40590010, arg_0x40590198);
#line 67
      break;
#line 67
    default:
#line 67
      result = CC2420ActiveMessageP$Receive$default$receive(arg_0x4072cb30, arg_0x40591e08, arg_0x40590010, arg_0x40590198);
#line 67
      break;
#line 67
    }
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 127 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline  bool CC2420ActiveMessageP$AMPacket$isForMe(message_t *amsg)
#line 127
{
  return CC2420ActiveMessageP$AMPacket$destination(amsg) == CC2420ActiveMessageP$AMPacket$address() || 
  CC2420ActiveMessageP$AMPacket$destination(amsg) == AM_BROADCAST_ADDR;
}

#line 187
static inline  message_t *CC2420ActiveMessageP$SubReceive$receive(message_t *msg, void *payload, uint8_t len)
#line 187
{
  if (CC2420ActiveMessageP$AMPacket$isForMe(msg)) {
      return CC2420ActiveMessageP$Receive$receive(CC2420ActiveMessageP$AMPacket$type(msg), msg, payload, len - CC2420ActiveMessageP$CC2420_SIZE);
    }
  else {
      return CC2420ActiveMessageP$Snoop$receive(CC2420ActiveMessageP$AMPacket$type(msg), msg, payload, len - CC2420ActiveMessageP$CC2420_SIZE);
    }
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static  message_t *UniqueReceiveP$Receive$receive(message_t *arg_0x40591e08, void *arg_0x40590010, uint8_t arg_0x40590198){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  result = CC2420ActiveMessageP$SubReceive$receive(arg_0x40591e08, arg_0x40590010, arg_0x40590198);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 156 "/opt/tinyos-2.x/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline void UniqueReceiveP$insert(uint16_t msgSource, uint8_t msgDsn)
#line 156
{
  uint8_t element = UniqueReceiveP$recycleSourceElement;
  bool increment = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 160
    {
      if (element == UniqueReceiveP$INVALID_ELEMENT || UniqueReceiveP$writeIndex == element) {

          element = UniqueReceiveP$writeIndex;
          increment = TRUE;
        }

      UniqueReceiveP$receivedMessages[element].source = msgSource;
      UniqueReceiveP$receivedMessages[element].dsn = msgDsn;
      if (increment) {
          UniqueReceiveP$writeIndex++;
          UniqueReceiveP$writeIndex %= 4;
        }
    }
#line 173
    __nesc_atomic_end(__nesc_atomic); }
}


static inline   message_t *UniqueReceiveP$DuplicateReceive$default$receive(message_t *msg, void *payload, uint8_t len)
#line 177
{
  return msg;
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static  message_t *UniqueReceiveP$DuplicateReceive$receive(message_t *arg_0x40591e08, void *arg_0x40590010, uint8_t arg_0x40590198){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  result = UniqueReceiveP$DuplicateReceive$default$receive(arg_0x40591e08, arg_0x40590010, arg_0x40590198);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 130 "/opt/tinyos-2.x/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline bool UniqueReceiveP$hasSeen(uint16_t msgSource, uint8_t msgDsn)
#line 130
{
  int i;

#line 132
  UniqueReceiveP$recycleSourceElement = UniqueReceiveP$INVALID_ELEMENT;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 134
    {
      for (i = 0; i < 4; i++) {
          if (UniqueReceiveP$receivedMessages[i].source == msgSource) {
              if (UniqueReceiveP$receivedMessages[i].dsn == msgDsn) {

                  {
                    unsigned char __nesc_temp = 
#line 139
                    TRUE;

                    {
#line 139
                      __nesc_atomic_end(__nesc_atomic); 
#line 139
                      return __nesc_temp;
                    }
                  }
                }
#line 142
              UniqueReceiveP$recycleSourceElement = i;
            }
        }
    }
#line 145
    __nesc_atomic_end(__nesc_atomic); }

  return FALSE;
}

# 42 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static   cc2420_header_t *UniqueReceiveP$CC2420PacketBody$getHeader(message_t *arg_0x40733b28){
#line 42
  nx_struct cc2420_header_t *result;
#line 42

#line 42
  result = CC2420PacketC$CC2420PacketBody$getHeader(arg_0x40733b28);
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 104 "/opt/tinyos-2.x/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline  message_t *UniqueReceiveP$SubReceive$receive(message_t *msg, void *payload, 
uint8_t len)
#line 105
{
  uint16_t msgSource = __nesc_ntoh_leuint16((unsigned char *)&UniqueReceiveP$CC2420PacketBody$getHeader(msg)->src);
  uint8_t msgDsn = __nesc_ntoh_leuint8((unsigned char *)&UniqueReceiveP$CC2420PacketBody$getHeader(msg)->dsn);

  if (UniqueReceiveP$hasSeen(msgSource, msgDsn)) {
      return UniqueReceiveP$DuplicateReceive$receive(msg, payload, len);
    }
  else {
      UniqueReceiveP$insert(msgSource, msgDsn);
      return UniqueReceiveP$Receive$receive(msg, payload, len);
    }
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static  message_t *CC2420ReceiveP$Receive$receive(message_t *arg_0x40591e08, void *arg_0x40590010, uint8_t arg_0x40590198){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  result = UniqueReceiveP$SubReceive$receive(arg_0x40591e08, arg_0x40590010, arg_0x40590198);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 42 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static   cc2420_header_t *CC2420ReceiveP$CC2420PacketBody$getHeader(message_t *arg_0x40733b28){
#line 42
  nx_struct cc2420_header_t *result;
#line 42

#line 42
  result = CC2420PacketC$CC2420PacketBody$getHeader(arg_0x40733b28);
#line 42

#line 42
  return result;
#line 42
}
#line 42





inline static   cc2420_metadata_t *CC2420ReceiveP$CC2420PacketBody$getMetadata(message_t *arg_0x407320a8){
#line 47
  nx_struct cc2420_metadata_t *result;
#line 47

#line 47
  result = CC2420PacketC$CC2420PacketBody$getMetadata(arg_0x407320a8);
#line 47

#line 47
  return result;
#line 47
}
#line 47
# 625 "/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline  void CC2420ReceiveP$receiveDone_task$runTask(void)
#line 625
{
  cc2420_metadata_t *metadata = CC2420ReceiveP$CC2420PacketBody$getMetadata(CC2420ReceiveP$m_p_rx_buf);
  uint8_t *buf = (uint8_t *)CC2420ReceiveP$CC2420PacketBody$getHeader(CC2420ReceiveP$m_p_rx_buf);

#line 627
  ;

  __nesc_hton_int8((unsigned char *)&metadata->crc, buf[CC2420ReceiveP$rxFrameLength] >> 7);
  __nesc_hton_uint8((unsigned char *)&metadata->rssi, buf[CC2420ReceiveP$rxFrameLength - 1]);
  __nesc_hton_uint8((unsigned char *)&metadata->lqi, buf[CC2420ReceiveP$rxFrameLength] & 0x7f);


  if (CC2420ReceiveP$securityOn == 1) {
      if (CC2420ReceiveP$m_missed_packets > 0) {
          CC2420ReceiveP$m_missed_packets--;
        }
    }
  CC2420ReceiveP$securityOn = 0;

  CC2420ReceiveP$m_p_rx_buf = CC2420ReceiveP$Receive$receive(CC2420ReceiveP$m_p_rx_buf, CC2420ReceiveP$m_p_rx_buf->data, 
  CC2420ReceiveP$rxFrameLength);

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 644
    CC2420ReceiveP$receivingPacket = FALSE;
#line 644
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ReceiveP$waitForNextPacket();
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t CC2420SpiP$grant$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(CC2420SpiP$grant);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 182 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline  void CC2420SpiP$SpiResource$granted(void)
#line 182
{
  CC2420SpiP$grant$postTask();
}

# 118 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline   void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$default$granted(uint8_t id)
#line 118
{
}

# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static  void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$granted(uint8_t arg_0x40b8d680){
#line 92
  switch (arg_0x40b8d680) {
#line 92
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C$0$CLIENT_ID:
#line 92
      CC2420SpiP$SpiResource$granted();
#line 92
      break;
#line 92
    default:
#line 92
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$default$granted(arg_0x40b8d680);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 94 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline  void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$granted(uint8_t id)
#line 94
{
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Resource$granted(id);
}

# 185 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline   void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Resource$default$granted(uint8_t id)
#line 185
{
}

# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static  void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Resource$granted(uint8_t arg_0x40cbfb68){
#line 92
  switch (arg_0x40cbfb68) {
#line 92
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C$0$CLIENT_ID:
#line 92
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartResource$granted(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C$0$CLIENT_ID);
#line 92
      break;
#line 92
    default:
#line 92
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Resource$default$granted(arg_0x40cbfb68);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 173 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline  void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$grantedTask$runTask(void)
#line 173
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 174
    {
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$reqResId;
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$RES_BUSY;
    }
#line 177
    __nesc_atomic_end(__nesc_atomic); }
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceConfigure$configure(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$resId);
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Resource$granted(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$resId);
}

# 192 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline    void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$SpiPacket$default$sendDone(uint8_t id, uint8_t *tx_buf, uint8_t *rx_buf, uint16_t len, error_t error)
#line 192
{
}

# 71 "/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
inline static   void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$SpiPacket$sendDone(uint8_t arg_0x40b8ca08, uint8_t *arg_0x40ae41a8, uint8_t *arg_0x40ae4350, uint16_t arg_0x40ae44e0, error_t arg_0x40ae4678){
#line 71
  switch (arg_0x40b8ca08) {
#line 71
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C$0$CLIENT_ID:
#line 71
      CC2420SpiP$SpiPacket$sendDone(arg_0x40ae41a8, arg_0x40ae4350, arg_0x40ae44e0, arg_0x40ae4678);
#line 71
      break;
#line 71
    default:
#line 71
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$SpiPacket$default$sendDone(arg_0x40b8ca08, arg_0x40ae41a8, arg_0x40ae4350, arg_0x40ae44e0, arg_0x40ae4678);
#line 71
      break;
#line 71
    }
#line 71
}
#line 71
# 185 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$signalDone(void)
#line 185
{
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$SpiPacket$sendDone(/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_client, /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_tx_buf, /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_rx_buf, /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_len, 
  SUCCESS);
}

#line 168
static inline  void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$signalDone_task$runTask(void)
#line 168
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 169
    /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$signalDone();
#line 169
    __nesc_atomic_end(__nesc_atomic); }
}

# 446 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline   void CC2420TransmitP$TXFIFO$readDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error)
#line 447
{
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t CC2420ReceiveP$receiveDone_task$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(CC2420ReceiveP$receiveDone_task);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 340 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline   void CC2420TransmitP$CC2420Receive$receive(uint8_t type, message_t *ack_msg)
#line 340
{
  cc2420_header_t *ack_header;
  cc2420_header_t *msg_header;
  cc2420_metadata_t *msg_metadata;
  uint8_t *ack_buf;
  uint8_t length;

  if (type == IEEE154_TYPE_ACK) {
      ack_header = CC2420TransmitP$CC2420PacketBody$getHeader(ack_msg);
      msg_header = CC2420TransmitP$CC2420PacketBody$getHeader(CC2420TransmitP$m_msg);


      if (CC2420TransmitP$m_state == CC2420TransmitP$S_ACK_WAIT && __nesc_ntoh_leuint8((unsigned char *)&msg_header->dsn) == __nesc_ntoh_leuint8((unsigned char *)&ack_header->dsn)) {
          CC2420TransmitP$BackoffTimer$stop();

          msg_metadata = CC2420TransmitP$CC2420PacketBody$getMetadata(CC2420TransmitP$m_msg);
          ack_buf = (uint8_t *)ack_header;
          length = __nesc_ntoh_leuint8((unsigned char *)&ack_header->length);

          __nesc_hton_int8((unsigned char *)&msg_metadata->ack, TRUE);
          __nesc_hton_uint8((unsigned char *)&msg_metadata->rssi, ack_buf[length - 1]);
          __nesc_hton_uint8((unsigned char *)&msg_metadata->lqi, ack_buf[length] & 0x7f);
          CC2420TransmitP$signalDone(SUCCESS);
        }
    }
}

# 61 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static   void CC2420ReceiveP$CC2420Receive$receive(uint8_t arg_0x40d3d4b0, message_t *arg_0x40d3d660){
#line 61
  CC2420TransmitP$CC2420Receive$receive(arg_0x40d3d4b0, arg_0x40d3d660);
#line 61
}
#line 61
# 207 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline   error_t CC2420SpiP$Fifo$continueRead(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 208
{
  return CC2420SpiP$SpiPacket$send((void *)0, data, len);
}

# 62 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static   error_t CC2420ReceiveP$RXFIFO$continueRead(uint8_t *arg_0x40adc4d8, uint8_t arg_0x40adc660){
#line 62
  unsigned char result;
#line 62

#line 62
  result = CC2420SpiP$Fifo$continueRead(CC2420_RXFIFO, arg_0x40adc4d8, arg_0x40adc660);
#line 62

#line 62
  return result;
#line 62
}
#line 62
#line 51
inline static   cc2420_status_t CC2420ReceiveP$RXFIFO$beginRead(uint8_t *arg_0x40addcb0, uint8_t arg_0x40adde38){
#line 51
  unsigned char result;
#line 51

#line 51
  result = CC2420SpiP$Fifo$beginRead(CC2420_RXFIFO, arg_0x40addcb0, arg_0x40adde38);
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static   cc2420_status_t CC2420ReceiveP$SACK$strobe(void){
#line 45
  unsigned char result;
#line 45

#line 45
  result = CC2420SpiP$Strobe$strobe(CC2420_SACK);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 64 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static   uint16_t CC2420ReceiveP$CC2420Config$getShortAddr(void){
#line 64
  unsigned int result;
#line 64

#line 64
  result = CC2420ControlP$CC2420Config$getShortAddr();
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 331 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline   bool CC2420ControlP$CC2420Config$isHwAutoAckDefault(void)
#line 331
{
  /* atomic removed: atomic calls only */
#line 332
  {
    unsigned char __nesc_temp = 
#line 332
    CC2420ControlP$hwAutoAckDefault;

#line 332
    return __nesc_temp;
  }
}

# 96 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static   bool CC2420ReceiveP$CC2420Config$isHwAutoAckDefault(void){
#line 96
  unsigned char result;
#line 96

#line 96
  result = CC2420ControlP$CC2420Config$isHwAutoAckDefault();
#line 96

#line 96
  return result;
#line 96
}
#line 96
# 338 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline   bool CC2420ControlP$CC2420Config$isAutoAckEnabled(void)
#line 338
{
  /* atomic removed: atomic calls only */
#line 339
  {
    unsigned char __nesc_temp = 
#line 339
    CC2420ControlP$autoAckEnabled;

#line 339
    return __nesc_temp;
  }
}

# 101 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static   bool CC2420ReceiveP$CC2420Config$isAutoAckEnabled(void){
#line 101
  unsigned char result;
#line 101

#line 101
  result = CC2420ControlP$CC2420Config$isAutoAckEnabled();
#line 101

#line 101
  return result;
#line 101
}
#line 101
# 48 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline   uint8_t /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP$0$IO$getRaw(void)
#line 48
{
#line 48
  return * (volatile uint8_t *)32U & (0x01 << 0);
}

#line 49
static inline   bool /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP$0$IO$get(void)
#line 49
{
#line 49
  return /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP$0$IO$getRaw() != 0;
}

# 59 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static   bool /*HplCC2420PinsC.FIFOPM*/Msp430GpioC$3$HplGeneralIO$get(void){
#line 59
  unsigned char result;
#line 59

#line 59
  result = /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP$0$IO$get();
#line 59

#line 59
  return result;
#line 59
}
#line 59
# 40 "/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline   bool /*HplCC2420PinsC.FIFOPM*/Msp430GpioC$3$GeneralIO$get(void)
#line 40
{
#line 40
  return /*HplCC2420PinsC.FIFOPM*/Msp430GpioC$3$HplGeneralIO$get();
}

# 32 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   bool CC2420ReceiveP$FIFOP$get(void){
#line 32
  unsigned char result;
#line 32

#line 32
  result = /*HplCC2420PinsC.FIFOPM*/Msp430GpioC$3$GeneralIO$get();
#line 32

#line 32
  return result;
#line 32
}
#line 32
# 48 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline   uint8_t /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP$3$IO$getRaw(void)
#line 48
{
#line 48
  return * (volatile uint8_t *)32U & (0x01 << 3);
}

#line 49
static inline   bool /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP$3$IO$get(void)
#line 49
{
#line 49
  return /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP$3$IO$getRaw() != 0;
}

# 59 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static   bool /*HplCC2420PinsC.FIFOM*/Msp430GpioC$2$HplGeneralIO$get(void){
#line 59
  unsigned char result;
#line 59

#line 59
  result = /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP$3$IO$get();
#line 59

#line 59
  return result;
#line 59
}
#line 59
# 40 "/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline   bool /*HplCC2420PinsC.FIFOM*/Msp430GpioC$2$GeneralIO$get(void)
#line 40
{
#line 40
  return /*HplCC2420PinsC.FIFOM*/Msp430GpioC$2$HplGeneralIO$get();
}

# 32 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   bool CC2420ReceiveP$FIFO$get(void){
#line 32
  unsigned char result;
#line 32

#line 32
  result = /*HplCC2420PinsC.FIFOM*/Msp430GpioC$2$GeneralIO$get();
#line 32

#line 32
  return result;
#line 32
}
#line 32
# 489 "/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline   void CC2420ReceiveP$RXFIFO$readDone(uint8_t *rx_buf, uint8_t rx_len, 
error_t error)
#line 490
{
  cc2420_header_t *header = CC2420ReceiveP$CC2420PacketBody$getHeader(CC2420ReceiveP$m_p_rx_buf);
  cc2420_metadata_t *metadata = CC2420ReceiveP$CC2420PacketBody$getMetadata(CC2420ReceiveP$m_p_rx_buf);
  uint8_t *buf = (uint8_t *)header;

#line 494
  CC2420ReceiveP$rxFrameLength = buf[0];

  switch (CC2420ReceiveP$m_state) {

      case CC2420ReceiveP$S_RX_LENGTH: 
        CC2420ReceiveP$m_state = CC2420ReceiveP$S_RX_FCF;

      CC2420ReceiveP$packetLength = CC2420ReceiveP$rxFrameLength + 1;



      if (
#line 503
      CC2420ReceiveP$rxFrameLength + 1 > CC2420ReceiveP$m_bytes_left

       || CC2420ReceiveP$flush_flag == 1) 

        {
          CC2420ReceiveP$flush();
        }
      else {
          if (!CC2420ReceiveP$FIFO$get() && !CC2420ReceiveP$FIFOP$get()) {
              CC2420ReceiveP$m_bytes_left -= CC2420ReceiveP$rxFrameLength + 1;
            }

          if (CC2420ReceiveP$rxFrameLength <= MAC_PACKET_SIZE) {
              if (CC2420ReceiveP$rxFrameLength > 0) {
                  if (CC2420ReceiveP$rxFrameLength > CC2420ReceiveP$SACK_HEADER_LENGTH) {

                      CC2420ReceiveP$RXFIFO$continueRead(buf + 1, CC2420ReceiveP$SACK_HEADER_LENGTH);
                    }
                  else {

                      CC2420ReceiveP$m_state = CC2420ReceiveP$S_RX_PAYLOAD;
                      CC2420ReceiveP$RXFIFO$continueRead(buf + 1, CC2420ReceiveP$rxFrameLength);
                    }
                }
              else {
                  /* atomic removed: atomic calls only */
                  CC2420ReceiveP$receivingPacket = FALSE;
                  CC2420ReceiveP$CSN$set();
                  CC2420ReceiveP$SpiResource$release();
                  CC2420ReceiveP$waitForNextPacket();
                }
            }
          else {

              CC2420ReceiveP$flush();
            }
        }
      break;

      case CC2420ReceiveP$S_RX_FCF: 
        CC2420ReceiveP$m_state = CC2420ReceiveP$S_RX_PAYLOAD;










      if (CC2420ReceiveP$CC2420Config$isAutoAckEnabled() && !CC2420ReceiveP$CC2420Config$isHwAutoAckDefault()) {


          if (((__nesc_ntoh_leuint16((unsigned char *)&
#line 555
          header->fcf) >> IEEE154_FCF_ACK_REQ) & 0x01) == 1
           && __nesc_ntoh_leuint16((unsigned char *)&header->dest) == CC2420ReceiveP$CC2420Config$getShortAddr()
           && ((__nesc_ntoh_leuint16((unsigned char *)&header->fcf) >> IEEE154_FCF_FRAME_TYPE) & 7) == IEEE154_TYPE_DATA) {

              CC2420ReceiveP$CSN$set();
              CC2420ReceiveP$CSN$clr();
              CC2420ReceiveP$SACK$strobe();
              CC2420ReceiveP$CSN$set();
              CC2420ReceiveP$CSN$clr();
              CC2420ReceiveP$RXFIFO$beginRead(buf + 1 + CC2420ReceiveP$SACK_HEADER_LENGTH, 
              CC2420ReceiveP$rxFrameLength - CC2420ReceiveP$SACK_HEADER_LENGTH);
              return;
            }
        }


      CC2420ReceiveP$RXFIFO$continueRead(buf + 1 + CC2420ReceiveP$SACK_HEADER_LENGTH, 
      CC2420ReceiveP$rxFrameLength - CC2420ReceiveP$SACK_HEADER_LENGTH);
      break;

      case CC2420ReceiveP$S_RX_PAYLOAD: 
        CC2420ReceiveP$CSN$set();

      if (!CC2420ReceiveP$m_missed_packets) {

          CC2420ReceiveP$SpiResource$release();
        }

      if (CC2420ReceiveP$m_timestamp_size) {
          if (CC2420ReceiveP$rxFrameLength > 10) {
              __nesc_hton_uint16((unsigned char *)&metadata->time, CC2420ReceiveP$m_timestamp_queue[CC2420ReceiveP$m_timestamp_head]);
              CC2420ReceiveP$m_timestamp_head = (CC2420ReceiveP$m_timestamp_head + 1) % CC2420ReceiveP$TIMESTAMP_QUEUE_SIZE;
              CC2420ReceiveP$m_timestamp_size--;
            }
        }
      else 
#line 589
        {
          __nesc_hton_uint16((unsigned char *)&metadata->time, 0xffff);
        }



      if (buf[CC2420ReceiveP$rxFrameLength] >> 7 && rx_buf) {
          uint8_t type = (__nesc_ntoh_leuint16((unsigned char *)&header->fcf) >> IEEE154_FCF_FRAME_TYPE) & 7;

#line 597
          CC2420ReceiveP$CC2420Receive$receive(type, CC2420ReceiveP$m_p_rx_buf);
          if (type == IEEE154_TYPE_DATA) {
              CC2420ReceiveP$receiveDone_task$postTask();
              return;
            }
        }

      CC2420ReceiveP$waitForNextPacket();
      break;

      default: /* atomic removed: atomic calls only */
        CC2420ReceiveP$receivingPacket = FALSE;
      CC2420ReceiveP$CSN$set();
      CC2420ReceiveP$SpiResource$release();
      break;
    }
}

# 367 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline    void CC2420SpiP$Fifo$default$readDone(uint8_t addr, uint8_t *rx_buf, uint8_t rx_len, error_t error)
#line 367
{
}

# 71 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static   void CC2420SpiP$Fifo$readDone(uint8_t arg_0x40af1c60, uint8_t *arg_0x40adcc90, uint8_t arg_0x40adce18, error_t arg_0x40ada010){
#line 71
  switch (arg_0x40af1c60) {
#line 71
    case CC2420_TXFIFO:
#line 71
      CC2420TransmitP$TXFIFO$readDone(arg_0x40adcc90, arg_0x40adce18, arg_0x40ada010);
#line 71
      break;
#line 71
    case CC2420_RXFIFO:
#line 71
      CC2420ReceiveP$RXFIFO$readDone(arg_0x40adcc90, arg_0x40adce18, arg_0x40ada010);
#line 71
      break;
#line 71
    default:
#line 71
      CC2420SpiP$Fifo$default$readDone(arg_0x40af1c60, arg_0x40adcc90, arg_0x40adce18, arg_0x40ada010);
#line 71
      break;
#line 71
    }
#line 71
}
#line 71
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static   cc2420_status_t CC2420ReceiveP$SFLUSHRX$strobe(void){
#line 45
  unsigned char result;
#line 45

#line 45
  result = CC2420SpiP$Strobe$strobe(CC2420_SFLUSHRX);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 279 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline    void CC2420CsmaP$RadioBackoff$default$requestInitialBackoff(am_id_t amId, 
message_t *msg)
#line 280
{
}

# 81 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static   void CC2420CsmaP$RadioBackoff$requestInitialBackoff(am_id_t arg_0x4077dba0, message_t *arg_0x407156f8){
#line 81
    CC2420CsmaP$RadioBackoff$default$requestInitialBackoff(arg_0x4077dba0, arg_0x407156f8);
#line 81
}
#line 81
# 229 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline   void CC2420TransmitP$RadioBackoff$setInitialBackoff(uint16_t backoffTime)
#line 229
{
  CC2420TransmitP$myInitialBackoff = backoffTime + 1;
}

# 60 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static   void CC2420CsmaP$SubBackoff$setInitialBackoff(uint16_t arg_0x40716660){
#line 60
  CC2420TransmitP$RadioBackoff$setInitialBackoff(arg_0x40716660);
#line 60
}
#line 60
# 212 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline   void CC2420CsmaP$SubBackoff$requestInitialBackoff(message_t *msg)
#line 212
{
  CC2420CsmaP$SubBackoff$setInitialBackoff(CC2420CsmaP$Random$rand16()
   % (0x1F * CC2420_BACKOFF_PERIOD) + CC2420_MIN_BACKOFF);

  CC2420CsmaP$RadioBackoff$requestInitialBackoff(__nesc_ntoh_leuint8((unsigned char *)&((cc2420_header_t *)(msg->data - 
  sizeof(cc2420_header_t )))->type), msg);
}

# 81 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static   void CC2420TransmitP$RadioBackoff$requestInitialBackoff(message_t *arg_0x407156f8){
#line 81
  CC2420CsmaP$SubBackoff$requestInitialBackoff(arg_0x407156f8);
#line 81
}
#line 81
# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420TransmitP$CSN$set(void){
#line 29
  /*HplCC2420PinsC.CSNM*/Msp430GpioC$1$GeneralIO$set();
#line 29
}
#line 29

inline static   void CC2420TransmitP$CSN$clr(void){
#line 30
  /*HplCC2420PinsC.CSNM*/Msp430GpioC$1$GeneralIO$clr();
#line 30
}
#line 30
# 407 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline   void CC2420TransmitP$TXFIFO$writeDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error)
#line 408
{

  CC2420TransmitP$CSN$set();
  if (CC2420TransmitP$m_state == CC2420TransmitP$S_LOAD_CANCEL) {
      /* atomic removed: atomic calls only */
#line 412
      {
        CC2420TransmitP$CSN$clr();
        CC2420TransmitP$SFLUSHTX$strobe();
        CC2420TransmitP$CSN$set();
      }
      CC2420TransmitP$releaseSpiResource();
      CC2420TransmitP$m_state = CC2420TransmitP$S_STARTED;
    }
  else {
#line 420
    if (!CC2420TransmitP$m_cca) {
        /* atomic removed: atomic calls only */
#line 421
        {
          if (CC2420TransmitP$m_state == CC2420TransmitP$S_LOAD_CANCEL) {
              CC2420TransmitP$m_state = CC2420TransmitP$S_TX_CANCEL;
            }
          else 
#line 424
            {
              CC2420TransmitP$m_state = CC2420TransmitP$S_BEGIN_TRANSMIT;
            }
        }
        CC2420TransmitP$attemptSend();
      }
    else {
        CC2420TransmitP$releaseSpiResource();
        /* atomic removed: atomic calls only */
#line 432
        {
          if (CC2420TransmitP$m_state == CC2420TransmitP$S_LOAD_CANCEL) {
              CC2420TransmitP$m_state = CC2420TransmitP$S_CCA_CANCEL;
            }
          else 
#line 435
            {
              CC2420TransmitP$m_state = CC2420TransmitP$S_SAMPLE_CCA;
            }
        }

        CC2420TransmitP$RadioBackoff$requestInitialBackoff(CC2420TransmitP$m_msg);
        CC2420TransmitP$BackoffTimer$start(CC2420TransmitP$myInitialBackoff);
      }
    }
}

# 617 "/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline   void CC2420ReceiveP$RXFIFO$writeDone(uint8_t *tx_buf, uint8_t tx_len, error_t error)
#line 617
{
}

# 370 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline    void CC2420SpiP$Fifo$default$writeDone(uint8_t addr, uint8_t *tx_buf, uint8_t tx_len, error_t error)
#line 370
{
}

# 91 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static   void CC2420SpiP$Fifo$writeDone(uint8_t arg_0x40af1c60, uint8_t *arg_0x40adad60, uint8_t arg_0x40adaee8, error_t arg_0x40ad9088){
#line 91
  switch (arg_0x40af1c60) {
#line 91
    case CC2420_TXFIFO:
#line 91
      CC2420TransmitP$TXFIFO$writeDone(arg_0x40adad60, arg_0x40adaee8, arg_0x40ad9088);
#line 91
      break;
#line 91
    case CC2420_RXFIFO:
#line 91
      CC2420ReceiveP$RXFIFO$writeDone(arg_0x40adad60, arg_0x40adaee8, arg_0x40ad9088);
#line 91
      break;
#line 91
    default:
#line 91
      CC2420SpiP$Fifo$default$writeDone(arg_0x40af1c60, arg_0x40adad60, arg_0x40adaee8, arg_0x40ad9088);
#line 91
      break;
#line 91
    }
#line 91
}
#line 91
# 55 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static   cc2420_status_t CC2420ControlP$RXCTRL1$write(uint16_t arg_0x407fa580){
#line 55
  unsigned char result;
#line 55

#line 55
  result = CC2420SpiP$Reg$write(CC2420_RXCTRL1, arg_0x407fa580);
#line 55

#line 55
  return result;
#line 55
}
#line 55
inline static   cc2420_status_t CC2420ControlP$IOCFG0$write(uint16_t arg_0x407fa580){
#line 55
  unsigned char result;
#line 55

#line 55
  result = CC2420SpiP$Reg$write(CC2420_IOCFG0, arg_0x407fa580);
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static   cc2420_status_t CC2420ControlP$SXOSCON$strobe(void){
#line 45
  unsigned char result;
#line 45

#line 45
  result = CC2420SpiP$Strobe$strobe(CC2420_SXOSCON);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 79 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline   void HplMsp430InterruptP$Port14$enable(void)
#line 79
{
#line 79
  P1IE |= 1 << 4;
}

# 31 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static   void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$HplInterrupt$enable(void){
#line 31
  HplMsp430InterruptP$Port14$enable();
#line 31
}
#line 31
# 131 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline   void HplMsp430InterruptP$Port14$edge(bool l2h)
#line 131
{
  /* atomic removed: atomic calls only */
#line 132
  {
    if (l2h) {
#line 133
      P1IES &= ~(1 << 4);
      }
    else {
#line 134
      P1IES |= 1 << 4;
      }
  }
}

# 56 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static   void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$HplInterrupt$edge(bool arg_0x40a387f8){
#line 56
  HplMsp430InterruptP$Port14$edge(arg_0x40a387f8);
#line 56
}
#line 56
# 95 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline   void HplMsp430InterruptP$Port14$clear(void)
#line 95
{
#line 95
  P1IFG &= ~(1 << 4);
}

# 41 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static   void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$HplInterrupt$clear(void){
#line 41
  HplMsp430InterruptP$Port14$clear();
#line 41
}
#line 41
# 87 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline   void HplMsp430InterruptP$Port14$disable(void)
#line 87
{
#line 87
  P1IE &= ~(1 << 4);
}

# 36 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static   void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$HplInterrupt$disable(void){
#line 36
  HplMsp430InterruptP$Port14$disable();
#line 36
}
#line 36
# 58 "/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline   error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$Interrupt$disable(void)
#line 58
{
  /* atomic removed: atomic calls only */
#line 59
  {
    /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$HplInterrupt$disable();
    /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$HplInterrupt$clear();
  }
  return SUCCESS;
}

#line 41
static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$enable(bool rising)
#line 41
{
  /* atomic removed: atomic calls only */
#line 42
  {
    /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$Interrupt$disable();
    /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$HplInterrupt$edge(rising);
    /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$HplInterrupt$enable();
  }
  return SUCCESS;
}

static inline   error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$Interrupt$enableRisingEdge(void)
#line 50
{
  return /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$enable(TRUE);
}

# 42 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static   error_t CC2420ControlP$InterruptCCA$enableRisingEdge(void){
#line 42
  unsigned char result;
#line 42

#line 42
  result = /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$Interrupt$enableRisingEdge();
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 55 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static   cc2420_status_t CC2420ControlP$IOCFG1$write(uint16_t arg_0x407fa580){
#line 55
  unsigned char result;
#line 55

#line 55
  result = CC2420SpiP$Reg$write(CC2420_IOCFG1, arg_0x407fa580);
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 192 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline   error_t CC2420ControlP$CC2420Power$startOscillator(void)
#line 192
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 193
    {
      if (CC2420ControlP$m_state != CC2420ControlP$S_VREG_STARTED) {
          {
            unsigned char __nesc_temp = 
#line 195
            FAIL;

            {
#line 195
              __nesc_atomic_end(__nesc_atomic); 
#line 195
              return __nesc_temp;
            }
          }
        }
#line 198
      CC2420ControlP$m_state = CC2420ControlP$S_XOSC_STARTING;
      CC2420ControlP$IOCFG1$write(CC2420_SFDMUX_XOSC16M_STABLE << 
      CC2420_IOCFG1_CCAMUX);

      CC2420ControlP$InterruptCCA$enableRisingEdge();
      CC2420ControlP$SXOSCON$strobe();

      CC2420ControlP$IOCFG0$write((1 << CC2420_IOCFG0_FIFOP_POLARITY) | (
      127 << CC2420_IOCFG0_FIFOP_THR));

      CC2420ControlP$writeFsctrl();
      CC2420ControlP$writeMdmctrl0();

      CC2420ControlP$RXCTRL1$write(((((((1 << CC2420_RXCTRL1_RXBPF_LOCUR) | (
      1 << CC2420_RXCTRL1_LOW_LOWGAIN)) | (
      1 << CC2420_RXCTRL1_HIGH_HGM)) | (
      1 << CC2420_RXCTRL1_LNA_CAP_ARRAY)) | (
      1 << CC2420_RXCTRL1_RXMIX_TAIL)) | (
      1 << CC2420_RXCTRL1_RXMIX_VCM)) | (
      2 << CC2420_RXCTRL1_RXMIX_CURRENT));
    }
#line 218
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 71 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static   error_t CC2420CsmaP$CC2420Power$startOscillator(void){
#line 71
  unsigned char result;
#line 71

#line 71
  result = CC2420ControlP$CC2420Power$startOscillator();
#line 71

#line 71
  return result;
#line 71
}
#line 71
# 203 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline  void CC2420CsmaP$Resource$granted(void)
#line 203
{
  CC2420CsmaP$CC2420Power$startOscillator();
}

# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static  void CC2420ControlP$Resource$granted(void){
#line 92
  CC2420CsmaP$Resource$granted();
#line 92
}
#line 92
# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420ControlP$CSN$clr(void){
#line 30
  /*HplCC2420PinsC.CSNM*/Msp430GpioC$1$GeneralIO$clr();
#line 30
}
#line 30
# 362 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline  void CC2420ControlP$SpiResource$granted(void)
#line 362
{
  CC2420ControlP$CSN$clr();
  CC2420ControlP$Resource$granted();
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t CC2420ControlP$syncDone$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(CC2420ControlP$syncDone);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t CC2420ControlP$SyncResource$release(void){
#line 110
  unsigned char result;
#line 110

#line 110
  result = CC2420SpiP$Resource$release(/*CC2420ControlC.SyncSpiC*/CC2420SpiC$1$CLIENT_ID);
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420ControlP$CSN$set(void){
#line 29
  /*HplCC2420PinsC.CSNM*/Msp430GpioC$1$GeneralIO$set();
#line 29
}
#line 29
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static   cc2420_status_t CC2420ControlP$SRXON$strobe(void){
#line 45
  unsigned char result;
#line 45

#line 45
  result = CC2420SpiP$Strobe$strobe(CC2420_SRXON);
#line 45

#line 45
  return result;
#line 45
}
#line 45
inline static   cc2420_status_t CC2420ControlP$SRFOFF$strobe(void){
#line 45
  unsigned char result;
#line 45

#line 45
  result = CC2420SpiP$Strobe$strobe(CC2420_SRFOFF);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 348 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline  void CC2420ControlP$SyncResource$granted(void)
#line 348
{
  CC2420ControlP$CSN$clr();
  CC2420ControlP$SRFOFF$strobe();
  CC2420ControlP$writeFsctrl();
  CC2420ControlP$writeMdmctrl0();
  CC2420ControlP$writeId();
  CC2420ControlP$CSN$set();
  CC2420ControlP$CSN$clr();
  CC2420ControlP$SRXON$strobe();
  CC2420ControlP$CSN$set();
  CC2420ControlP$SyncResource$release();
  CC2420ControlP$syncDone$postTask();
}

#line 478
static inline   void CC2420ControlP$ReadRssi$default$readDone(error_t error, uint16_t data)
#line 478
{
}

# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static  void CC2420ControlP$ReadRssi$readDone(error_t arg_0x407d4a28, CC2420ControlP$ReadRssi$val_t arg_0x407d4bb0){
#line 63
  CC2420ControlP$ReadRssi$default$readDone(arg_0x407d4a28, arg_0x407d4bb0);
#line 63
}
#line 63
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t CC2420ControlP$RssiResource$release(void){
#line 110
  unsigned char result;
#line 110

#line 110
  result = CC2420SpiP$Resource$release(/*CC2420ControlC.RssiResource*/CC2420SpiC$2$CLIENT_ID);
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 284 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline   cc2420_status_t CC2420SpiP$Reg$read(uint8_t addr, uint16_t *data)
#line 284
{

  cc2420_status_t status = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 288
    {
      if (CC2420SpiP$WorkingState$isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 290
            status;

            {
#line 290
              __nesc_atomic_end(__nesc_atomic); 
#line 290
              return __nesc_temp;
            }
          }
        }
    }
#line 294
    __nesc_atomic_end(__nesc_atomic); }
#line 294
  status = CC2420SpiP$SpiByte$write(addr | 0x40);
  *data = (uint16_t )CC2420SpiP$SpiByte$write(0) << 8;
  *data |= CC2420SpiP$SpiByte$write(0);

  return status;
}

# 47 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static   cc2420_status_t CC2420ControlP$RSSI$read(uint16_t *arg_0x407fa010){
#line 47
  unsigned char result;
#line 47

#line 47
  result = CC2420SpiP$Reg$read(CC2420_RSSI, arg_0x407fa010);
#line 47

#line 47
  return result;
#line 47
}
#line 47
# 367 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline  void CC2420ControlP$RssiResource$granted(void)
#line 367
{
  uint16_t data;

#line 369
  CC2420ControlP$CSN$clr();
  CC2420ControlP$RSSI$read(&data);
  CC2420ControlP$CSN$set();

  CC2420ControlP$RssiResource$release();
  data += 0x7f;
  data &= 0x00ff;
  CC2420ControlP$ReadRssi$readDone(SUCCESS, data);
}

# 368 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline  void CC2420TransmitP$SpiResource$granted(void)
#line 368
{
  uint8_t cur_state;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 371
    {
      cur_state = CC2420TransmitP$m_state;
    }
#line 373
    __nesc_atomic_end(__nesc_atomic); }

  switch (cur_state) {
      case CC2420TransmitP$S_LOAD: 
        CC2420TransmitP$loadTXFIFO();
      break;

      case CC2420TransmitP$S_BEGIN_TRANSMIT: 
        CC2420TransmitP$attemptSend();
      break;

      case CC2420TransmitP$S_LOAD_CANCEL: 
        case CC2420TransmitP$S_CCA_CANCEL: 
          case CC2420TransmitP$S_TX_CANCEL: 
            CC2420TransmitP$CSN$clr();
      CC2420TransmitP$SFLUSHTX$strobe();
      CC2420TransmitP$CSN$set();
      CC2420TransmitP$releaseSpiResource();
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 391
        {
          CC2420TransmitP$m_state = CC2420TransmitP$S_STARTED;
        }
#line 393
        __nesc_atomic_end(__nesc_atomic); }
      break;

      default: 
        CC2420TransmitP$releaseSpiResource();
      break;
    }
}

# 470 "/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline  void CC2420ReceiveP$SpiResource$granted(void)
#line 470
{


  if (CC2420ReceiveP$m_state == CC2420ReceiveP$S_RX_DEC) {
      CC2420ReceiveP$dec();
    }
  else 
#line 475
    {
      CC2420ReceiveP$receive();
    }
}

# 364 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline   void CC2420SpiP$Resource$default$granted(uint8_t id)
#line 364
{
}

# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static  void CC2420SpiP$Resource$granted(uint8_t arg_0x40af1300){
#line 92
  switch (arg_0x40af1300) {
#line 92
    case /*CC2420ControlC.Spi*/CC2420SpiC$0$CLIENT_ID:
#line 92
      CC2420ControlP$SpiResource$granted();
#line 92
      break;
#line 92
    case /*CC2420ControlC.SyncSpiC*/CC2420SpiC$1$CLIENT_ID:
#line 92
      CC2420ControlP$SyncResource$granted();
#line 92
      break;
#line 92
    case /*CC2420ControlC.RssiResource*/CC2420SpiC$2$CLIENT_ID:
#line 92
      CC2420ControlP$RssiResource$granted();
#line 92
      break;
#line 92
    case /*CC2420TransmitC.Spi*/CC2420SpiC$3$CLIENT_ID:
#line 92
      CC2420TransmitP$SpiResource$granted();
#line 92
      break;
#line 92
    case /*CC2420ReceiveC.Spi*/CC2420SpiC$4$CLIENT_ID:
#line 92
      CC2420ReceiveP$SpiResource$granted();
#line 92
      break;
#line 92
    default:
#line 92
      CC2420SpiP$Resource$default$granted(arg_0x40af1300);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 355 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline  void CC2420SpiP$grant$runTask(void)
#line 355
{
  uint8_t holder;

#line 357
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 357
    {
      holder = CC2420SpiP$m_holder;
    }
#line 359
    __nesc_atomic_end(__nesc_atomic); }
  CC2420SpiP$Resource$granted(holder);
}

# 55 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static   cc2420_status_t CC2420ControlP$FSCTRL$write(uint16_t arg_0x407fa580){
#line 55
  unsigned char result;
#line 55

#line 55
  result = CC2420SpiP$Reg$write(CC2420_FSCTRL, arg_0x407fa580);
#line 55

#line 55
  return result;
#line 55
}
#line 55
inline static   cc2420_status_t CC2420ControlP$MDMCTRL0$write(uint16_t arg_0x407fa580){
#line 55
  unsigned char result;
#line 55

#line 55
  result = CC2420SpiP$Reg$write(CC2420_MDMCTRL0, arg_0x407fa580);
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 63 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
inline static   cc2420_status_t CC2420ControlP$PANID$write(uint8_t arg_0x407ffc58, uint8_t *arg_0x407ffe00, uint8_t arg_0x407fe010){
#line 63
  unsigned char result;
#line 63

#line 63
  result = CC2420SpiP$Ram$write(CC2420_RAM_PANID, arg_0x407ffc58, arg_0x407ffe00, arg_0x407fe010);
#line 63

#line 63
  return result;
#line 63
}
#line 63
# 202 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline  void CC2420ActiveMessageP$CC2420Config$syncDone(error_t error)
#line 202
{
}

# 649 "/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline  void CC2420ReceiveP$CC2420Config$syncDone(error_t error)
#line 649
{
}

# 53 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static  void CC2420ControlP$CC2420Config$syncDone(error_t arg_0x40746cc0){
#line 53
  CC2420ReceiveP$CC2420Config$syncDone(arg_0x40746cc0);
#line 53
  CC2420ActiveMessageP$CC2420Config$syncDone(arg_0x40746cc0);
#line 53
}
#line 53
# 418 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline  void CC2420ControlP$syncDone$runTask(void)
#line 418
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 419
    CC2420ControlP$m_sync_busy = FALSE;
#line 419
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ControlP$CC2420Config$syncDone(SUCCESS);
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t CC2420ControlP$SyncResource$request(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = CC2420SpiP$Resource$request(/*CC2420ControlC.SyncSpiC*/CC2420SpiC$1$CLIENT_ID);
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 285 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline  error_t CC2420ControlP$CC2420Config$sync(void)
#line 285
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 286
    {
      if (CC2420ControlP$m_sync_busy) {
          {
            unsigned char __nesc_temp = 
#line 288
            FAIL;

            {
#line 288
              __nesc_atomic_end(__nesc_atomic); 
#line 288
              return __nesc_temp;
            }
          }
        }
#line 291
      CC2420ControlP$m_sync_busy = TRUE;
      if (CC2420ControlP$m_state == CC2420ControlP$S_XOSC_STARTED) {
          CC2420ControlP$SyncResource$request();
        }
      else 
#line 294
        {
          CC2420ControlP$syncDone$postTask();
        }
    }
#line 297
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

#line 414
static inline  void CC2420ControlP$sync$runTask(void)
#line 414
{
  CC2420ControlP$CC2420Config$sync();
}

# 181 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(am_id_t id, message_t *msg, error_t err)
#line 181
{





  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current >= 2) {
      return;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current].msg == msg) {
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current, msg, err);
    }
  else {
      ;
    }
}

# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  void CC2420ActiveMessageP$AMSend$sendDone(am_id_t arg_0x4072c200, message_t *arg_0x40599eb8, error_t arg_0x40598068){
#line 99
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(arg_0x4072c200, arg_0x40599eb8, arg_0x40598068);
#line 99
}
#line 99
# 181 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline  void CC2420ActiveMessageP$SubSend$sendDone(message_t *msg, error_t result)
#line 181
{
  CC2420ActiveMessageP$AMSend$sendDone(CC2420ActiveMessageP$AMPacket$type(msg), msg, result);
}

# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static  void UniqueSendP$Send$sendDone(message_t *arg_0x40738598, error_t arg_0x40738720){
#line 89
  CC2420ActiveMessageP$SubSend$sendDone(arg_0x40738598, arg_0x40738720);
#line 89
}
#line 89
# 104 "/opt/tinyos-2.x/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline  void UniqueSendP$SubSend$sendDone(message_t *msg, error_t error)
#line 104
{
  UniqueSendP$State$toIdle();
  UniqueSendP$Send$sendDone(msg, error);
}

# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static  void CC2420CsmaP$Send$sendDone(message_t *arg_0x40738598, error_t arg_0x40738720){
#line 89
  UniqueSendP$SubSend$sendDone(arg_0x40738598, arg_0x40738720);
#line 89
}
#line 89
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t CC2420CsmaP$stopDone_task$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(CC2420CsmaP$stopDone_task);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 46 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline   void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP$29$IO$clr(void)
#line 46
{
#line 46
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 46
    * (volatile uint8_t *)29U &= ~(0x01 << 5);
#line 46
    __nesc_atomic_end(__nesc_atomic); }
}

# 39 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static   void /*HplCC2420PinsC.VRENM*/Msp430GpioC$6$HplGeneralIO$clr(void){
#line 39
  /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP$29$IO$clr();
#line 39
}
#line 39
# 38 "/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline   void /*HplCC2420PinsC.VRENM*/Msp430GpioC$6$GeneralIO$clr(void)
#line 38
{
#line 38
  /*HplCC2420PinsC.VRENM*/Msp430GpioC$6$HplGeneralIO$clr();
}

# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420ControlP$VREN$clr(void){
#line 30
  /*HplCC2420PinsC.VRENM*/Msp430GpioC$6$GeneralIO$clr();
#line 30
}
#line 30
# 184 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline   error_t CC2420ControlP$CC2420Power$stopVReg(void)
#line 184
{
  CC2420ControlP$m_state = CC2420ControlP$S_VREG_STOPPED;
  CC2420ControlP$RSTN$clr();
  CC2420ControlP$VREN$clr();
  CC2420ControlP$RSTN$set();
  return SUCCESS;
}

# 63 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static   error_t CC2420CsmaP$CC2420Power$stopVReg(void){
#line 63
  unsigned char result;
#line 63

#line 63
  result = CC2420ControlP$CC2420Power$stopVReg();
#line 63

#line 63
  return result;
#line 63
}
#line 63
# 49 "/opt/tinyos-2.x/tos/types/TinyError.h"
static inline error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 91 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline   void HplMsp430InterruptP$Port10$clear(void)
#line 91
{
#line 91
  P1IFG &= ~(1 << 0);
}

# 41 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$HplInterrupt$clear(void){
#line 41
  HplMsp430InterruptP$Port10$clear();
#line 41
}
#line 41
# 83 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline   void HplMsp430InterruptP$Port10$disable(void)
#line 83
{
#line 83
  P1IE &= ~(1 << 0);
}

# 36 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$HplInterrupt$disable(void){
#line 36
  HplMsp430InterruptP$Port10$disable();
#line 36
}
#line 36
# 58 "/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline   error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$Interrupt$disable(void)
#line 58
{
  /* atomic removed: atomic calls only */
#line 59
  {
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$HplInterrupt$disable();
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$HplInterrupt$clear();
  }
  return SUCCESS;
}

# 50 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static   error_t CC2420ReceiveP$InterruptFIFOP$disable(void){
#line 50
  unsigned char result;
#line 50

#line 50
  result = /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$Interrupt$disable();
#line 50

#line 50
  return result;
#line 50
}
#line 50
# 168 "/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline  error_t CC2420ReceiveP$StdControl$stop(void)
#line 168
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 169
    {
      CC2420ReceiveP$m_state = CC2420ReceiveP$S_STOPPED;
      CC2420ReceiveP$reset_state();
      CC2420ReceiveP$CSN$set();
      CC2420ReceiveP$InterruptFIFOP$disable();
    }
#line 174
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 56 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline   void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP$25$IO$selectIOFunc(void)
#line 56
{
  /* atomic removed: atomic calls only */
#line 56
  * (volatile uint8_t *)31U &= ~(0x01 << 1);
}

# 85 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static   void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$GeneralIO$selectIOFunc(void){
#line 85
  /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP$25$IO$selectIOFunc();
#line 85
}
#line 85
# 124 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline   void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Control$disableEvents(void)
{
  * (volatile uint16_t *)388U &= ~0x0010;
}

# 40 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static   void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Msp430TimerControl$disableEvents(void){
#line 40
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Control$disableEvents();
#line 40
}
#line 40
# 58 "/opt/tinyos-2.x/tos/chips/msp430/timer/GpioCaptureC.nc"
static inline   void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Capture$disable(void)
#line 58
{
  /* atomic removed: atomic calls only */
#line 59
  {
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Msp430TimerControl$disableEvents();
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$GeneralIO$selectIOFunc();
  }
}

# 55 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
inline static   void CC2420TransmitP$CaptureSFD$disable(void){
#line 55
  /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Capture$disable();
#line 55
}
#line 55
# 159 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline  error_t CC2420TransmitP$StdControl$stop(void)
#line 159
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 160
    {
      CC2420TransmitP$m_state = CC2420TransmitP$S_STOPPED;
      CC2420TransmitP$BackoffTimer$stop();
      CC2420TransmitP$CaptureSFD$disable();
      CC2420TransmitP$SpiResource$release();
      CC2420TransmitP$CSN$set();
    }
#line 166
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 84 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static  error_t CC2420CsmaP$SubControl$stop(void){
#line 84
  unsigned char result;
#line 84

#line 84
  result = CC2420TransmitP$StdControl$stop();
#line 84
  result = ecombine(result, CC2420ReceiveP$StdControl$stop());
#line 84

#line 84
  return result;
#line 84
}
#line 84
# 265 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP$shutdown(void)
#line 265
{
  CC2420CsmaP$SubControl$stop();
  CC2420CsmaP$CC2420Power$stopVReg();
  CC2420CsmaP$stopDone_task$postTask();
}

#line 234
static inline  void CC2420CsmaP$sendDone_task$runTask(void)
#line 234
{
  error_t packetErr;

#line 236
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 236
    packetErr = CC2420CsmaP$sendErr;
#line 236
    __nesc_atomic_end(__nesc_atomic); }
  if (CC2420CsmaP$SplitControlState$isState(CC2420CsmaP$S_STOPPING)) {
      CC2420CsmaP$shutdown();
    }
  else {
      CC2420CsmaP$SplitControlState$forceState(CC2420CsmaP$S_STARTED);
    }

  CC2420CsmaP$Send$sendDone(CC2420CsmaP$m_msg, packetErr);
}

# 127 "OscilloscopeC.nc"
static inline  void OscilloscopeC$RadioControl$stopDone(error_t err)
#line 127
{
}

# 117 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static  void CC2420CsmaP$SplitControl$stopDone(error_t arg_0x40566840){
#line 117
  OscilloscopeC$RadioControl$stopDone(arg_0x40566840);
#line 117
}
#line 117
# 255 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline  void CC2420CsmaP$stopDone_task$runTask(void)
#line 255
{
  CC2420CsmaP$SplitControlState$forceState(CC2420CsmaP$S_STOPPED);
  CC2420CsmaP$SplitControl$stopDone(SUCCESS);
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 132 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num];

#line 135
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask();
}

static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(), dt, FALSE);
}

# 53 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void OscilloscopeC$Timer$startPeriodic(uint32_t arg_0x40593de8){
#line 53
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(0U, arg_0x40593de8);
#line 53
}
#line 53
# 87 "OscilloscopeC.nc"
static inline void OscilloscopeC$startTimer(void)
#line 87
{
  OscilloscopeC$Timer$startPeriodic(DEFAULT_INTERVAL);
  OscilloscopeC$reading = 0;
}

# 190 "AES/AFWA_AESP.nc"
static inline  error_t /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$AFWA_AESI$AFWAsetTransmitMode(uint16_t ctrl0, uint8_t len)
#line 190
{


  /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$appLen = ctrl0 & 0x1C;
  /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$appLen = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$appLen / 2 + 2;
  /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$tx_ctrl0 = ctrl0;

  if ((ctrl0 & 0x0003) != 0x0000) {
      /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$sec_txl = len;

      /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$tx_ctrl1 = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$tx_ctrl1 | /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$sec_txl;
    }

  return SUCCESS;
}

# 44 "AES/Interfaces/AFWA_AESI.nc"
inline static  error_t OscilloscopeC$AFWA_AESI$AFWAsetTransmitMode(uint16_t arg_0x405b5010, uint8_t arg_0x405b5198){
#line 44
  unsigned char result;
#line 44

#line 44
  result = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$AFWA_AESI$AFWAsetTransmitMode(arg_0x405b5010, arg_0x405b5198);
#line 44

#line 44
  return result;
#line 44
}
#line 44
# 166 "OscilloscopeC.nc"
static inline  void OscilloscopeC$AFWA_AESI$updateKeyDone(uint8_t *key)
#line 166
{
}

# 280 "AES/CCMP.nc"
static inline  void /*OscilloscopeAppC.AFWA_AESC.CCMP*/CCMP$0$AFWA_AESI$updateKeyDone(uint8_t *key)
#line 280
{
}

# 134 "AES/CTRP.nc"
static inline  void /*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$AFWA_AESI$updateKeyDone(uint8_t *key)
#line 134
{
}

# 164 "AES/OmacP.nc"
static inline  void /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$AFWA_AESI$updateKeyDone(uint8_t *key)
#line 164
{
}

# 40 "AES/Interfaces/AFWA_AESI.nc"
inline static  void /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$AFWA_AESI$updateKeyDone(uint8_t *arg_0x405b6ac0){
#line 40
  /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$AFWA_AESI$updateKeyDone(arg_0x405b6ac0);
#line 40
  /*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$AFWA_AESI$updateKeyDone(arg_0x405b6ac0);
#line 40
  /*OscilloscopeAppC.AFWA_AESC.CCMP*/CCMP$0$AFWA_AESI$updateKeyDone(arg_0x405b6ac0);
#line 40
  OscilloscopeC$AFWA_AESI$updateKeyDone(arg_0x405b6ac0);
#line 40
}
#line 40
# 181 "AES/AFWA_AESP.nc"
static inline  error_t /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$AFWA_AESI$AFWAupdateKey(uint8_t *key, uint8_t KeySize)
#line 181
{

  uint8_t i;

#line 184
  /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$KeySizeB = KeySize / 8;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 185
    /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$localKey = key;
#line 185
    __nesc_atomic_end(__nesc_atomic); }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 186
    /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$AFWA_AESI$updateKeyDone(/*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$localKey);
#line 186
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 34 "AES/Interfaces/AFWA_AESI.nc"
inline static  error_t OscilloscopeC$AFWA_AESI$AFWAupdateKey(uint8_t *arg_0x405b6480, uint8_t arg_0x405b6610){
#line 34
  unsigned char result;
#line 34

#line 34
  result = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$AFWA_AESI$AFWAupdateKey(arg_0x405b6480, arg_0x405b6610);
#line 34

#line 34
  return result;
#line 34
}
#line 34
# 92 "OscilloscopeC.nc"
static inline  void OscilloscopeC$RadioControl$startDone(error_t err)
#line 92
{

  error_t status;




  OscilloscopeC$AFWA_AESI$AFWAupdateKey((uint8_t *)OscilloscopeC$aes_key0, 128);
#line 114
  OscilloscopeC$AFWA_AESI$AFWAsetTransmitMode(CTR, 14);









  OscilloscopeC$startTimer();
}

# 92 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static  void CC2420CsmaP$SplitControl$startDone(error_t arg_0x40567c78){
#line 92
  OscilloscopeC$RadioControl$startDone(arg_0x40567c78);
#line 92
}
#line 92
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t CC2420ControlP$SpiResource$release(void){
#line 110
  unsigned char result;
#line 110

#line 110
  result = CC2420SpiP$Resource$release(/*CC2420ControlC.Spi*/CC2420SpiC$0$CLIENT_ID);
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 164 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline   error_t CC2420ControlP$Resource$release(void)
#line 164
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 165
    {
      CC2420ControlP$CSN$set();
      {
        unsigned char __nesc_temp = 
#line 167
        CC2420ControlP$SpiResource$release();

        {
#line 167
          __nesc_atomic_end(__nesc_atomic); 
#line 167
          return __nesc_temp;
        }
      }
    }
#line 170
    __nesc_atomic_end(__nesc_atomic); }
}

# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t CC2420CsmaP$Resource$release(void){
#line 110
  unsigned char result;
#line 110

#line 110
  result = CC2420ControlP$Resource$release();
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 234 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline   error_t CC2420ControlP$CC2420Power$rxOn(void)
#line 234
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 235
    {
      if (CC2420ControlP$m_state != CC2420ControlP$S_XOSC_STARTED) {
          {
            unsigned char __nesc_temp = 
#line 237
            FAIL;

            {
#line 237
              __nesc_atomic_end(__nesc_atomic); 
#line 237
              return __nesc_temp;
            }
          }
        }
#line 239
      CC2420ControlP$SRXON$strobe();
    }
#line 240
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 90 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static   error_t CC2420CsmaP$CC2420Power$rxOn(void){
#line 90
  unsigned char result;
#line 90

#line 90
  result = CC2420ControlP$CC2420Power$rxOn();
#line 90

#line 90
  return result;
#line 90
}
#line 90
# 75 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline   void HplMsp430InterruptP$Port10$enable(void)
#line 75
{
#line 75
  P1IE |= 1 << 0;
}

# 31 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$HplInterrupt$enable(void){
#line 31
  HplMsp430InterruptP$Port10$enable();
#line 31
}
#line 31
# 107 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline   void HplMsp430InterruptP$Port10$edge(bool l2h)
#line 107
{
  /* atomic removed: atomic calls only */
#line 108
  {
    if (l2h) {
#line 109
      P1IES &= ~(1 << 0);
      }
    else {
#line 110
      P1IES |= 1 << 0;
      }
  }
}

# 56 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$HplInterrupt$edge(bool arg_0x40a387f8){
#line 56
  HplMsp430InterruptP$Port10$edge(arg_0x40a387f8);
#line 56
}
#line 56
# 41 "/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$enable(bool rising)
#line 41
{
  /* atomic removed: atomic calls only */
#line 42
  {
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$Interrupt$disable();
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$HplInterrupt$edge(rising);
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$HplInterrupt$enable();
  }
  return SUCCESS;
}





static inline   error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$Interrupt$enableFallingEdge(void)
#line 54
{
  return /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$enable(FALSE);
}

# 43 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static   error_t CC2420ReceiveP$InterruptFIFOP$enableFallingEdge(void){
#line 43
  unsigned char result;
#line 43

#line 43
  result = /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$Interrupt$enableFallingEdge();
#line 43

#line 43
  return result;
#line 43
}
#line 43
# 157 "/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline  error_t CC2420ReceiveP$StdControl$start(void)
#line 157
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 158
    {
      CC2420ReceiveP$reset_state();
      CC2420ReceiveP$m_state = CC2420ReceiveP$S_STARTED;
      CC2420ReceiveP$receivingPacket = FALSE;
      CC2420ReceiveP$InterruptFIFOP$enableFallingEdge();
    }
#line 163
    __nesc_atomic_end(__nesc_atomic); }

  return SUCCESS;
}

# 148 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline  error_t CC2420TransmitP$StdControl$start(void)
#line 148
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 149
    {
      CC2420TransmitP$CaptureSFD$captureRisingEdge();
      CC2420TransmitP$m_state = CC2420TransmitP$S_STARTED;
      CC2420TransmitP$m_receiving = FALSE;
      CC2420TransmitP$abortSpiRelease = FALSE;
      CC2420TransmitP$m_tx_power = 0;
    }
#line 155
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static  error_t CC2420CsmaP$SubControl$start(void){
#line 74
  unsigned char result;
#line 74

#line 74
  result = CC2420TransmitP$StdControl$start();
#line 74
  result = ecombine(result, CC2420ReceiveP$StdControl$start());
#line 74

#line 74
  return result;
#line 74
}
#line 74
# 247 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline  void CC2420CsmaP$startDone_task$runTask(void)
#line 247
{
  CC2420CsmaP$SubControl$start();
  CC2420CsmaP$CC2420Power$rxOn();
  CC2420CsmaP$Resource$release();
  CC2420CsmaP$SplitControlState$forceState(CC2420CsmaP$S_STARTED);
  CC2420CsmaP$SplitControl$startDone(SUCCESS);
}

# 82 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static inline   am_group_t ActiveMessageAddressC$ActiveMessageAddress$amGroup(void)
#line 82
{
  am_group_t myGroup;

  /* atomic removed: atomic calls only */
#line 84
  myGroup = ActiveMessageAddressC$group;
  return myGroup;
}

# 53 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
inline static   am_group_t CC2420ControlP$ActiveMessageAddress$amGroup(void){
#line 53
  unsigned char result;
#line 53

#line 53
  result = ActiveMessageAddressC$ActiveMessageAddress$amGroup();
#line 53

#line 53
  return result;
#line 53
}
#line 53
#line 48
inline static   am_addr_t CC2420ControlP$ActiveMessageAddress$amAddress(void){
#line 48
  unsigned int result;
#line 48

#line 48
  result = ActiveMessageAddressC$ActiveMessageAddress$amAddress();
#line 48

#line 48
  return result;
#line 48
}
#line 48
# 52 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline   void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP$29$IO$makeOutput(void)
#line 52
{
  /* atomic removed: atomic calls only */
#line 52
  * (volatile uint8_t *)30U |= 0x01 << 5;
}

# 71 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static   void /*HplCC2420PinsC.VRENM*/Msp430GpioC$6$HplGeneralIO$makeOutput(void){
#line 71
  /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP$29$IO$makeOutput();
#line 71
}
#line 71
# 43 "/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline   void /*HplCC2420PinsC.VRENM*/Msp430GpioC$6$GeneralIO$makeOutput(void)
#line 43
{
#line 43
  /*HplCC2420PinsC.VRENM*/Msp430GpioC$6$HplGeneralIO$makeOutput();
}

# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420ControlP$VREN$makeOutput(void){
#line 35
  /*HplCC2420PinsC.VRENM*/Msp430GpioC$6$GeneralIO$makeOutput();
#line 35
}
#line 35
# 52 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline   void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP$30$IO$makeOutput(void)
#line 52
{
  /* atomic removed: atomic calls only */
#line 52
  * (volatile uint8_t *)30U |= 0x01 << 6;
}

# 71 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static   void /*HplCC2420PinsC.RSTNM*/Msp430GpioC$4$HplGeneralIO$makeOutput(void){
#line 71
  /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP$30$IO$makeOutput();
#line 71
}
#line 71
# 43 "/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline   void /*HplCC2420PinsC.RSTNM*/Msp430GpioC$4$GeneralIO$makeOutput(void)
#line 43
{
#line 43
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC$4$HplGeneralIO$makeOutput();
}

# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420ControlP$RSTN$makeOutput(void){
#line 35
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC$4$GeneralIO$makeOutput();
#line 35
}
#line 35
# 52 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline   void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP$26$IO$makeOutput(void)
#line 52
{
  /* atomic removed: atomic calls only */
#line 52
  * (volatile uint8_t *)30U |= 0x01 << 2;
}

# 71 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static   void /*HplCC2420PinsC.CSNM*/Msp430GpioC$1$HplGeneralIO$makeOutput(void){
#line 71
  /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP$26$IO$makeOutput();
#line 71
}
#line 71
# 43 "/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline   void /*HplCC2420PinsC.CSNM*/Msp430GpioC$1$GeneralIO$makeOutput(void)
#line 43
{
#line 43
  /*HplCC2420PinsC.CSNM*/Msp430GpioC$1$HplGeneralIO$makeOutput();
}

# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420ControlP$CSN$makeOutput(void){
#line 35
  /*HplCC2420PinsC.CSNM*/Msp430GpioC$1$GeneralIO$makeOutput();
#line 35
}
#line 35
# 116 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline  error_t CC2420ControlP$Init$init(void)
#line 116
{
  CC2420ControlP$CSN$makeOutput();
  CC2420ControlP$RSTN$makeOutput();
  CC2420ControlP$VREN$makeOutput();

  CC2420ControlP$m_short_addr = CC2420ControlP$ActiveMessageAddress$amAddress();
  CC2420ControlP$m_pan = CC2420ControlP$ActiveMessageAddress$amGroup();
  CC2420ControlP$m_tx_power = 31;
  CC2420ControlP$m_channel = 26;




  CC2420ControlP$autoAckEnabled = TRUE;





  CC2420ControlP$hwAutoAckDefault = FALSE;





  CC2420ControlP$addressRecognition = TRUE;


  return SUCCESS;
}

# 81 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
static inline  error_t StateImplP$Init$init(void)
#line 81
{
  int i;

#line 83
  for (i = 0; i < 4U; i++) {
      StateImplP$state[i] = StateImplP$S_IDLE;
    }
  return SUCCESS;
}

# 45 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline  error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$Init$init(void)
#line 45
{
  memset(/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$resQ, /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$NO_ENTRY, sizeof /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$resQ);
  return SUCCESS;
}

# 46 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$CC2int(/*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$cc_t x)
#line 46
{
#line 46
  union /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$__nesc_unnamed4351 {
#line 46
    /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$cc_t f;
#line 46
    uint16_t t;
  } 
#line 46
  c = { .f = x };

#line 46
  return c.t;
}

static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$compareControl(void)
{
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$cc_t x = { 
  .cm = 1, 
  .ccis = 0, 
  .clld = 0, 
  .cap = 0, 
  .ccie = 0 };

  return /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$CC2int(x);
}

#line 94
static inline   void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Control$setControlAsCompare(void)
{
  * (volatile uint16_t *)386U = /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$compareControl();
}

# 36 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$Msp430TimerControl$setControlAsCompare(void){
#line 36
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Control$setControlAsCompare();
#line 36
}
#line 36
# 42 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline  error_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$Init$init(void)
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$Msp430TimerControl$disableEvents();
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$Msp430TimerControl$setControlAsCompare();
  return SUCCESS;
}

# 50 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline   void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP$25$IO$makeInput(void)
#line 50
{
  /* atomic removed: atomic calls only */
#line 50
  * (volatile uint8_t *)30U &= ~(0x01 << 1);
}

# 64 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static   void /*HplCC2420PinsC.SFDM*/Msp430GpioC$5$HplGeneralIO$makeInput(void){
#line 64
  /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP$25$IO$makeInput();
#line 64
}
#line 64
# 41 "/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline   void /*HplCC2420PinsC.SFDM*/Msp430GpioC$5$GeneralIO$makeInput(void)
#line 41
{
#line 41
  /*HplCC2420PinsC.SFDM*/Msp430GpioC$5$HplGeneralIO$makeInput();
}

# 33 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420TransmitP$SFD$makeInput(void){
#line 33
  /*HplCC2420PinsC.SFDM*/Msp430GpioC$5$GeneralIO$makeInput();
#line 33
}
#line 33


inline static   void CC2420TransmitP$CSN$makeOutput(void){
#line 35
  /*HplCC2420PinsC.CSNM*/Msp430GpioC$1$GeneralIO$makeOutput();
#line 35
}
#line 35
# 50 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline   void /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP$4$IO$makeInput(void)
#line 50
{
  /* atomic removed: atomic calls only */
#line 50
  * (volatile uint8_t *)34U &= ~(0x01 << 4);
}

# 64 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static   void /*HplCC2420PinsC.CCAM*/Msp430GpioC$0$HplGeneralIO$makeInput(void){
#line 64
  /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP$4$IO$makeInput();
#line 64
}
#line 64
# 41 "/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline   void /*HplCC2420PinsC.CCAM*/Msp430GpioC$0$GeneralIO$makeInput(void)
#line 41
{
#line 41
  /*HplCC2420PinsC.CCAM*/Msp430GpioC$0$HplGeneralIO$makeInput();
}

# 33 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420TransmitP$CCA$makeInput(void){
#line 33
  /*HplCC2420PinsC.CCAM*/Msp430GpioC$0$GeneralIO$makeInput();
#line 33
}
#line 33
# 140 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline  error_t CC2420TransmitP$Init$init(void)
#line 140
{
  CC2420TransmitP$CCA$makeInput();
  CC2420TransmitP$CSN$makeOutput();
  CC2420TransmitP$SFD$makeInput();
  return SUCCESS;
}

# 151 "/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline  error_t CC2420ReceiveP$Init$init(void)
#line 151
{
  CC2420ReceiveP$m_p_rx_buf = &CC2420ReceiveP$m_rx_buf;
  return SUCCESS;
}

# 44 "/opt/tinyos-2.x/tos/system/RandomMlcgP.nc"
static inline  error_t RandomMlcgP$Init$init(void)
#line 44
{
  /* atomic removed: atomic calls only */
#line 45
  RandomMlcgP$seed = (uint32_t )(TOS_NODE_ID + 1);

  return SUCCESS;
}

# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
inline static   uint16_t UniqueSendP$Random$rand16(void){
#line 41
  unsigned int result;
#line 41

#line 41
  result = RandomMlcgP$Random$rand16();
#line 41

#line 41
  return result;
#line 41
}
#line 41
# 62 "/opt/tinyos-2.x/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline  error_t UniqueSendP$Init$init(void)
#line 62
{
  UniqueSendP$localSendId = UniqueSendP$Random$rand16();
  return SUCCESS;
}

# 71 "/opt/tinyos-2.x/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline  error_t UniqueReceiveP$Init$init(void)
#line 71
{
  int i;

#line 73
  for (i = 0; i < 4; i++) {
      UniqueReceiveP$receivedMessages[i].source = (am_addr_t )0xFFFF;
      UniqueReceiveP$receivedMessages[i].dsn = 0;
    }
  return SUCCESS;
}

# 46 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$CC2int(/*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$cc_t x)
#line 46
{
#line 46
  union /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$__nesc_unnamed4352 {
#line 46
    /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$cc_t f;
#line 46
    uint16_t t;
  } 
#line 46
  c = { .f = x };

#line 46
  return c.t;
}

static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$compareControl(void)
{
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$cc_t x = { 
  .cm = 1, 
  .ccis = 0, 
  .clld = 0, 
  .cap = 0, 
  .ccie = 0 };

  return /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$CC2int(x);
}

#line 94
static inline   void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Control$setControlAsCompare(void)
{
  * (volatile uint16_t *)390U = /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$compareControl();
}

# 36 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static   void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430TimerControl$setControlAsCompare(void){
#line 36
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Control$setControlAsCompare();
#line 36
}
#line 36
# 42 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline  error_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Init$init(void)
{
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430TimerControl$disableEvents();
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Msp430TimerControl$setControlAsCompare();
  return SUCCESS;
}

# 163 "AES/AFWA_AESP.nc"
static inline  error_t /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$Init$init(void)
#line 163
{

  /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$tx_ctrl0 = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$tx_ctrl1 = 0;
  /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$rx_ctrl0 = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$rx_ctrl1 = 0;
  /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$setMode0 = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$setMode1 = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$appLen = 0;
  /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$p = DONE;
  /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$localKey = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$plainText = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$cipherText = (void *)0;
  return SUCCESS;
}

# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static  error_t RealMainP$SoftwareInit$init(void){
#line 51
  unsigned char result;
#line 51

#line 51
  result = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$Init$init();
#line 51
  result = ecombine(result, /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC$1$Init$init());
#line 51
  result = ecombine(result, UniqueReceiveP$Init$init());
#line 51
  result = ecombine(result, UniqueSendP$Init$init());
#line 51
  result = ecombine(result, RandomMlcgP$Init$init());
#line 51
  result = ecombine(result, CC2420ReceiveP$Init$init());
#line 51
  result = ecombine(result, CC2420TransmitP$Init$init());
#line 51
  result = ecombine(result, /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC$0$Init$init());
#line 51
  result = ecombine(result, /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC$0$Init$init());
#line 51
  result = ecombine(result, StateImplP$Init$init());
#line 51
  result = ecombine(result, CC2420ControlP$Init$init());
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 173 "AES/AFWA_AESP.nc"
static inline  error_t /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$SplitControl$start(void)
#line 173
{
  return 0;
}

# 55 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void CC2420ControlP$StartupTimer$start(CC2420ControlP$StartupTimer$size_type arg_0x407e0970){
#line 55
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$Alarm$start(arg_0x407e0970);
#line 55
}
#line 55
# 45 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline   void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP$29$IO$set(void)
#line 45
{
#line 45
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 45
    * (volatile uint8_t *)29U |= 0x01 << 5;
#line 45
    __nesc_atomic_end(__nesc_atomic); }
}

# 34 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static   void /*HplCC2420PinsC.VRENM*/Msp430GpioC$6$HplGeneralIO$set(void){
#line 34
  /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP$29$IO$set();
#line 34
}
#line 34
# 37 "/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline   void /*HplCC2420PinsC.VRENM*/Msp430GpioC$6$GeneralIO$set(void)
#line 37
{
#line 37
  /*HplCC2420PinsC.VRENM*/Msp430GpioC$6$HplGeneralIO$set();
}

# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420ControlP$VREN$set(void){
#line 29
  /*HplCC2420PinsC.VRENM*/Msp430GpioC$6$GeneralIO$set();
#line 29
}
#line 29
# 172 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline   error_t CC2420ControlP$CC2420Power$startVReg(void)
#line 172
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 173
    {
      if (CC2420ControlP$m_state != CC2420ControlP$S_VREG_STOPPED) {
          {
            unsigned char __nesc_temp = 
#line 175
            FAIL;

            {
#line 175
              __nesc_atomic_end(__nesc_atomic); 
#line 175
              return __nesc_temp;
            }
          }
        }
#line 177
      CC2420ControlP$m_state = CC2420ControlP$S_VREG_STARTING;
    }
#line 178
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ControlP$VREN$set();
  CC2420ControlP$StartupTimer$start(CC2420_TIME_VREN);
  return SUCCESS;
}

# 51 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static   error_t CC2420CsmaP$CC2420Power$startVReg(void){
#line 51
  unsigned char result;
#line 51

#line 51
  result = CC2420ControlP$CC2420Power$startVReg();
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 45 "/opt/tinyos-2.x/tos/interfaces/State.nc"
inline static   error_t CC2420CsmaP$SplitControlState$requestState(uint8_t arg_0x407a3378){
#line 45
  unsigned char result;
#line 45

#line 45
  result = StateImplP$State$requestState(1U, arg_0x407a3378);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 83 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline  error_t CC2420CsmaP$SplitControl$start(void)
#line 83
{
  if (CC2420CsmaP$SplitControlState$requestState(CC2420CsmaP$S_STARTING) == SUCCESS) {
      CC2420CsmaP$CC2420Power$startVReg();
      return SUCCESS;
    }
  else {
#line 88
    if (CC2420CsmaP$SplitControlState$isState(CC2420CsmaP$S_STARTED)) {
        return EALREADY;
      }
    else {
#line 91
      if (CC2420CsmaP$SplitControlState$isState(CC2420CsmaP$S_STARTING)) {
          return SUCCESS;
        }
      }
    }
#line 95
  return EBUSY;
}

# 83 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static  error_t OscilloscopeC$RadioControl$start(void){
#line 83
  unsigned char result;
#line 83

#line 83
  result = CC2420CsmaP$SplitControl$start();
#line 83
  result = ecombine(result, /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$SplitControl$start());
#line 83

#line 83
  return result;
#line 83
}
#line 83
# 82 "OscilloscopeC.nc"
static inline  void OscilloscopeC$Boot$booted(void)
#line 82
{
  if (OscilloscopeC$RadioControl$start() != SUCCESS) {
    OscilloscopeC$report_problem();
    }
}

# 49 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
inline static  void RealMainP$Boot$booted(void){
#line 49
  OscilloscopeC$Boot$booted();
#line 49
}
#line 49
# 190 "/opt/tinyos-2.x/tos/chips/msp430/msp430hardware.h"
static inline void __nesc_disable_interrupt(void )
{
   __asm volatile ("dint");
   __asm volatile ("nop");}

# 124 "/opt/tinyos-2.x/tos/chips/msp430/McuSleepC.nc"
static inline    mcu_power_t McuSleepC$McuPowerOverride$default$lowestState(void)
#line 124
{
  return MSP430_POWER_LPM4;
}

# 54 "/opt/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
inline static   mcu_power_t McuSleepC$McuPowerOverride$lowestState(void){
#line 54
  unsigned char result;
#line 54

#line 54
  result = McuSleepC$McuPowerOverride$default$lowestState();
#line 54

#line 54
  return result;
#line 54
}
#line 54
# 66 "/opt/tinyos-2.x/tos/chips/msp430/McuSleepC.nc"
static inline mcu_power_t McuSleepC$getPowerState(void)
#line 66
{
  mcu_power_t pState = MSP430_POWER_LPM3;





  if (((((
#line 69
  TA0CCTL0 & 0x0010 || 
  TA0CCTL1 & 0x0010) || 
  TA0CCTL2 & 0x0010) && (
  TA0CTL & (3 << 8)) == 2 << 8) || (
  ME1 & ((1 << 7) | (1 << 6)) && U0TCTL & 0x20)) || (
  ME2 & ((1 << 5) | (1 << 4)) && U1TCTL & 0x20)) {






    pState = MSP430_POWER_LPM1;
    }


  if (ADC12CTL0 & 0x0010) {
      if (ADC12CTL1 & (2 << 3)) {

          if (ADC12CTL1 & (1 << 3)) {
            pState = MSP430_POWER_LPM1;
            }
          else {
#line 91
            pState = MSP430_POWER_ACTIVE;
            }
        }
      else {
#line 92
        if (ADC12CTL1 & 0x0400 && (TA0CTL & (3 << 8)) == 2 << 8) {



            pState = MSP430_POWER_LPM1;
          }
        }
    }

  return pState;
}

# 178 "/opt/tinyos-2.x/tos/chips/msp430/msp430hardware.h"
static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
#line 178
{
  return m1 < m2 ? m1 : m2;
}

# 104 "/opt/tinyos-2.x/tos/chips/msp430/McuSleepC.nc"
static inline void McuSleepC$computePowerState(void)
#line 104
{
  McuSleepC$powerState = mcombine(McuSleepC$getPowerState(), 
  McuSleepC$McuPowerOverride$lowestState());
}

static inline   void McuSleepC$McuSleep$sleep(void)
#line 109
{
  uint16_t temp;

#line 111
  if (McuSleepC$dirty) {
      McuSleepC$computePowerState();
    }

  temp = McuSleepC$msp430PowerBits[McuSleepC$powerState] | 0x0008;
   __asm volatile ("bis  %0, r2" :  : "m"(temp));
  __nesc_disable_interrupt();
}

# 59 "/opt/tinyos-2.x/tos/interfaces/McuSleep.nc"
inline static   void SchedulerBasicP$McuSleep$sleep(void){
#line 59
  McuSleepC$McuSleep$sleep();
#line 59
}
#line 59
# 67 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static __inline uint8_t SchedulerBasicP$popTask(void)
{
  if (SchedulerBasicP$m_head != SchedulerBasicP$NO_TASK) 
    {
      uint8_t id = SchedulerBasicP$m_head;

#line 72
      SchedulerBasicP$m_head = SchedulerBasicP$m_next[SchedulerBasicP$m_head];
      if (SchedulerBasicP$m_head == SchedulerBasicP$NO_TASK) 
        {
          SchedulerBasicP$m_tail = SchedulerBasicP$NO_TASK;
        }
      SchedulerBasicP$m_next[id] = SchedulerBasicP$NO_TASK;
      return id;
    }
  else 
    {
      return SchedulerBasicP$NO_TASK;
    }
}

#line 138
static inline  void SchedulerBasicP$Scheduler$taskLoop(void)
{
  for (; ; ) 
    {
      uint8_t nextTask;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          while ((nextTask = SchedulerBasicP$popTask()) == SchedulerBasicP$NO_TASK) 
            {
              SchedulerBasicP$McuSleep$sleep();
            }
        }
#line 150
        __nesc_atomic_end(__nesc_atomic); }
      SchedulerBasicP$TaskBasic$runTask(nextTask);
    }
}

# 61 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static  void RealMainP$Scheduler$taskLoop(void){
#line 61
  SchedulerBasicP$Scheduler$taskLoop();
#line 61
}
#line 61
# 223 "/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline   void CC2420ReceiveP$InterruptFIFOP$fired(void)
#line 223
{
  if (CC2420ReceiveP$m_state == CC2420ReceiveP$S_STARTED) {




      CC2420ReceiveP$m_state = CC2420ReceiveP$S_RX_DEC;
      /* atomic removed: atomic calls only */
#line 230
      CC2420ReceiveP$receivingPacket = TRUE;
      CC2420ReceiveP$beginDec();
    }
  else {
      CC2420ReceiveP$m_missed_packets++;
    }
}

# 57 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$Interrupt$fired(void){
#line 57
  CC2420ReceiveP$InterruptFIFOP$fired();
#line 57
}
#line 57
# 66 "/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$HplInterrupt$fired(void)
#line 66
{
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$HplInterrupt$clear();
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$Interrupt$fired();
}

# 61 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static   void HplMsp430InterruptP$Port10$fired(void){
#line 61
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC$1$HplInterrupt$fired();
#line 61
}
#line 61
# 92 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline   void HplMsp430InterruptP$Port11$clear(void)
#line 92
{
#line 92
  P1IFG &= ~(1 << 1);
}

#line 68
static inline    void HplMsp430InterruptP$Port11$default$fired(void)
#line 68
{
#line 68
  HplMsp430InterruptP$Port11$clear();
}

# 61 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static   void HplMsp430InterruptP$Port11$fired(void){
#line 61
  HplMsp430InterruptP$Port11$default$fired();
#line 61
}
#line 61
# 93 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline   void HplMsp430InterruptP$Port12$clear(void)
#line 93
{
#line 93
  P1IFG &= ~(1 << 2);
}

#line 69
static inline    void HplMsp430InterruptP$Port12$default$fired(void)
#line 69
{
#line 69
  HplMsp430InterruptP$Port12$clear();
}

# 61 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static   void HplMsp430InterruptP$Port12$fired(void){
#line 61
  HplMsp430InterruptP$Port12$default$fired();
#line 61
}
#line 61
# 94 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline   void HplMsp430InterruptP$Port13$clear(void)
#line 94
{
#line 94
  P1IFG &= ~(1 << 3);
}

#line 70
static inline    void HplMsp430InterruptP$Port13$default$fired(void)
#line 70
{
#line 70
  HplMsp430InterruptP$Port13$clear();
}

# 61 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static   void HplMsp430InterruptP$Port13$fired(void){
#line 61
  HplMsp430InterruptP$Port13$default$fired();
#line 61
}
#line 61
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t CC2420CsmaP$startDone_task$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(CC2420CsmaP$startDone_task);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 207 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline   void CC2420CsmaP$CC2420Power$startOscillatorDone(void)
#line 207
{
  CC2420CsmaP$startDone_task$postTask();
}

# 76 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static   void CC2420ControlP$CC2420Power$startOscillatorDone(void){
#line 76
  CC2420CsmaP$CC2420Power$startOscillatorDone();
#line 76
}
#line 76
# 50 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static   error_t CC2420ControlP$InterruptCCA$disable(void){
#line 50
  unsigned char result;
#line 50

#line 50
  result = /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$Interrupt$disable();
#line 50

#line 50
  return result;
#line 50
}
#line 50
# 390 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline   void CC2420ControlP$InterruptCCA$fired(void)
#line 390
{
  CC2420ControlP$m_state = CC2420ControlP$S_XOSC_STARTED;
  CC2420ControlP$InterruptCCA$disable();
  CC2420ControlP$IOCFG1$write(0);
  CC2420ControlP$writeId();
  CC2420ControlP$CSN$set();
  CC2420ControlP$CSN$clr();
  CC2420ControlP$CC2420Power$startOscillatorDone();
}

# 57 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static   void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$Interrupt$fired(void){
#line 57
  CC2420ControlP$InterruptCCA$fired();
#line 57
}
#line 57
# 66 "/opt/tinyos-2.x/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline   void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$HplInterrupt$fired(void)
#line 66
{
  /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$HplInterrupt$clear();
  /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$Interrupt$fired();
}

# 61 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static   void HplMsp430InterruptP$Port14$fired(void){
#line 61
  /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC$0$HplInterrupt$fired();
#line 61
}
#line 61
# 96 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline   void HplMsp430InterruptP$Port15$clear(void)
#line 96
{
#line 96
  P1IFG &= ~(1 << 5);
}

#line 72
static inline    void HplMsp430InterruptP$Port15$default$fired(void)
#line 72
{
#line 72
  HplMsp430InterruptP$Port15$clear();
}

# 61 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static   void HplMsp430InterruptP$Port15$fired(void){
#line 61
  HplMsp430InterruptP$Port15$default$fired();
#line 61
}
#line 61
# 97 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline   void HplMsp430InterruptP$Port16$clear(void)
#line 97
{
#line 97
  P1IFG &= ~(1 << 6);
}

#line 73
static inline    void HplMsp430InterruptP$Port16$default$fired(void)
#line 73
{
#line 73
  HplMsp430InterruptP$Port16$clear();
}

# 61 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static   void HplMsp430InterruptP$Port16$fired(void){
#line 61
  HplMsp430InterruptP$Port16$default$fired();
#line 61
}
#line 61
# 98 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline   void HplMsp430InterruptP$Port17$clear(void)
#line 98
{
#line 98
  P1IFG &= ~(1 << 7);
}

#line 74
static inline    void HplMsp430InterruptP$Port17$default$fired(void)
#line 74
{
#line 74
  HplMsp430InterruptP$Port17$clear();
}

# 61 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static   void HplMsp430InterruptP$Port17$fired(void){
#line 61
  HplMsp430InterruptP$Port17$default$fired();
#line 61
}
#line 61
# 195 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline   void HplMsp430InterruptP$Port20$clear(void)
#line 195
{
#line 195
  P2IFG &= ~(1 << 0);
}

#line 171
static inline    void HplMsp430InterruptP$Port20$default$fired(void)
#line 171
{
#line 171
  HplMsp430InterruptP$Port20$clear();
}

# 61 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static   void HplMsp430InterruptP$Port20$fired(void){
#line 61
  HplMsp430InterruptP$Port20$default$fired();
#line 61
}
#line 61
# 196 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline   void HplMsp430InterruptP$Port21$clear(void)
#line 196
{
#line 196
  P2IFG &= ~(1 << 1);
}

#line 172
static inline    void HplMsp430InterruptP$Port21$default$fired(void)
#line 172
{
#line 172
  HplMsp430InterruptP$Port21$clear();
}

# 61 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static   void HplMsp430InterruptP$Port21$fired(void){
#line 61
  HplMsp430InterruptP$Port21$default$fired();
#line 61
}
#line 61
# 197 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline   void HplMsp430InterruptP$Port22$clear(void)
#line 197
{
#line 197
  P2IFG &= ~(1 << 2);
}

#line 173
static inline    void HplMsp430InterruptP$Port22$default$fired(void)
#line 173
{
#line 173
  HplMsp430InterruptP$Port22$clear();
}

# 61 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static   void HplMsp430InterruptP$Port22$fired(void){
#line 61
  HplMsp430InterruptP$Port22$default$fired();
#line 61
}
#line 61
# 198 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline   void HplMsp430InterruptP$Port23$clear(void)
#line 198
{
#line 198
  P2IFG &= ~(1 << 3);
}

#line 174
static inline    void HplMsp430InterruptP$Port23$default$fired(void)
#line 174
{
#line 174
  HplMsp430InterruptP$Port23$clear();
}

# 61 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static   void HplMsp430InterruptP$Port23$fired(void){
#line 61
  HplMsp430InterruptP$Port23$default$fired();
#line 61
}
#line 61
# 199 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline   void HplMsp430InterruptP$Port24$clear(void)
#line 199
{
#line 199
  P2IFG &= ~(1 << 4);
}

#line 175
static inline    void HplMsp430InterruptP$Port24$default$fired(void)
#line 175
{
#line 175
  HplMsp430InterruptP$Port24$clear();
}

# 61 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static   void HplMsp430InterruptP$Port24$fired(void){
#line 61
  HplMsp430InterruptP$Port24$default$fired();
#line 61
}
#line 61
# 200 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline   void HplMsp430InterruptP$Port25$clear(void)
#line 200
{
#line 200
  P2IFG &= ~(1 << 5);
}

#line 176
static inline    void HplMsp430InterruptP$Port25$default$fired(void)
#line 176
{
#line 176
  HplMsp430InterruptP$Port25$clear();
}

# 61 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static   void HplMsp430InterruptP$Port25$fired(void){
#line 61
  HplMsp430InterruptP$Port25$default$fired();
#line 61
}
#line 61
# 201 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline   void HplMsp430InterruptP$Port26$clear(void)
#line 201
{
#line 201
  P2IFG &= ~(1 << 6);
}

#line 177
static inline    void HplMsp430InterruptP$Port26$default$fired(void)
#line 177
{
#line 177
  HplMsp430InterruptP$Port26$clear();
}

# 61 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static   void HplMsp430InterruptP$Port26$fired(void){
#line 61
  HplMsp430InterruptP$Port26$default$fired();
#line 61
}
#line 61
# 202 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline   void HplMsp430InterruptP$Port27$clear(void)
#line 202
{
#line 202
  P2IFG &= ~(1 << 7);
}

#line 178
static inline    void HplMsp430InterruptP$Port27$default$fired(void)
#line 178
{
#line 178
  HplMsp430InterruptP$Port27$clear();
}

# 61 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static   void HplMsp430InterruptP$Port27$fired(void){
#line 61
  HplMsp430InterruptP$Port27$default$fired();
#line 61
}
#line 61
# 155 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline   uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ArbiterInfo$userId(void)
#line 155
{
  /* atomic removed: atomic calls only */
#line 156
  {
    unsigned char __nesc_temp = 
#line 156
    /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$resId;

#line 156
    return __nesc_temp;
  }
}

# 88 "/opt/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
inline static   uint8_t /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$ArbiterInfo$userId(void){
#line 88
  unsigned char result;
#line 88

#line 88
  result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ArbiterInfo$userId();
#line 88

#line 88
  return result;
#line 88
}
#line 88
# 349 "/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline   void HplMsp430Usart0P$Usart$disableRxIntr(void)
#line 349
{
  HplMsp430Usart0P$IE1 &= ~(1 << 6);
}

# 177 "/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static   void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$disableRxIntr(void){
#line 177
  HplMsp430Usart0P$Usart$disableRxIntr();
#line 177
}
#line 177
# 172 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline   void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartInterrupts$rxDone(uint8_t data)
#line 172
{

  if (/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_rx_buf) {
    /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_rx_buf[/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_pos - 1] = data;
    }
  if (/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_pos < /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_len) {
    /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$continueOp();
    }
  else 
#line 179
    {
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$disableRxIntr();
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$signalDone();
    }
}

# 65 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline    void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$Interrupts$default$rxDone(uint8_t id, uint8_t data)
#line 65
{
}

# 54 "/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static   void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$Interrupts$rxDone(uint8_t arg_0x40c6b2a0, uint8_t arg_0x40b91cf8){
#line 54
  switch (arg_0x40c6b2a0) {
#line 54
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C$0$CLIENT_ID:
#line 54
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartInterrupts$rxDone(arg_0x40b91cf8);
#line 54
      break;
#line 54
    default:
#line 54
      /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$Interrupts$default$rxDone(arg_0x40c6b2a0, arg_0x40b91cf8);
#line 54
      break;
#line 54
    }
#line 54
}
#line 54
# 146 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline   bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ArbiterInfo$inUse(void)
#line 146
{
  return TRUE;
}

# 80 "/opt/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
inline static   bool /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$ArbiterInfo$inUse(void){
#line 80
  unsigned char result;
#line 80

#line 80
  result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ArbiterInfo$inUse();
#line 80

#line 80
  return result;
#line 80
}
#line 80
# 54 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline   void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$RawInterrupts$rxDone(uint8_t data)
#line 54
{
  if (/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$ArbiterInfo$inUse()) {
    /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$Interrupts$rxDone(/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$ArbiterInfo$userId(), data);
    }
}

# 54 "/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static   void HplMsp430Usart0P$Interrupts$rxDone(uint8_t arg_0x40b91cf8){
#line 54
  /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$RawInterrupts$rxDone(arg_0x40b91cf8);
#line 54
}
#line 54
# 393 "/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline    bool HplMsp430Usart0P$HplI2C$default$isI2C(void)
#line 393
{
#line 393
  return FALSE;
}

# 6 "/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430I2C.nc"
inline static   bool HplMsp430Usart0P$HplI2C$isI2C(void){
#line 6
  unsigned char result;
#line 6

#line 6
  result = HplMsp430Usart0P$HplI2C$default$isI2C();
#line 6

#line 6
  return result;
#line 6
}
#line 6
# 66 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline    void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$I2CInterrupts$default$fired(uint8_t id)
#line 66
{
}

# 39 "/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
inline static   void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$I2CInterrupts$fired(uint8_t arg_0x40c6b990){
#line 39
    /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$I2CInterrupts$default$fired(arg_0x40c6b990);
#line 39
}
#line 39
# 59 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline   void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$RawI2CInterrupts$fired(void)
#line 59
{
  if (/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$ArbiterInfo$inUse()) {
    /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$I2CInterrupts$fired(/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$ArbiterInfo$userId());
    }
}

# 39 "/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
inline static   void HplMsp430Usart0P$I2CInterrupts$fired(void){
#line 39
  /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$RawI2CInterrupts$fired();
#line 39
}
#line 39
# 190 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline   void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartInterrupts$txDone(void)
#line 190
{
}

# 64 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline    void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$Interrupts$default$txDone(uint8_t id)
#line 64
{
}

# 49 "/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static   void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$Interrupts$txDone(uint8_t arg_0x40c6b2a0){
#line 49
  switch (arg_0x40c6b2a0) {
#line 49
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C$0$CLIENT_ID:
#line 49
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$UsartInterrupts$txDone();
#line 49
      break;
#line 49
    default:
#line 49
      /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$Interrupts$default$txDone(arg_0x40c6b2a0);
#line 49
      break;
#line 49
    }
#line 49
}
#line 49
# 49 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline   void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$RawInterrupts$txDone(void)
#line 49
{
  if (/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$ArbiterInfo$inUse()) {
    /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$Interrupts$txDone(/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$ArbiterInfo$userId());
    }
}

# 49 "/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static   void HplMsp430Usart0P$Interrupts$txDone(void){
#line 49
  /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP$0$RawInterrupts$txDone();
#line 49
}
#line 49
# 210 "/opt/tinyos-2.x/tos/chips/msp430/msp430hardware.h"
 __nesc_atomic_t __nesc_atomic_start(void )
{
  __nesc_atomic_t result = (({
#line 212
    uint16_t __x;

#line 212
     __asm volatile ("mov	r2, %0" : "=r"((uint16_t )__x));__x;
  }
  )
#line 212
   & 0x0008) != 0;

#line 213
  __nesc_disable_interrupt();
   __asm volatile ("" :  :  : "memory");
  return result;
}

 void __nesc_atomic_end(__nesc_atomic_t reenable_interrupts)
{
   __asm volatile ("" :  :  : "memory");
  if (reenable_interrupts) {
    __nesc_enable_interrupt();
    }
}

# 11 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCommonP.nc"
 __attribute((wakeup)) __attribute((interrupt(12))) void sig_TIMERA0_VECTOR(void)
#line 11
{
#line 11
  Msp430TimerCommonP$VectorTimerA0$fired();
}

# 169 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static   void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Event$fired(void)
{
  if (/*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Control$getControl().cap) {
    /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Capture$captured(/*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Capture$getEvent());
    }
  else {
#line 174
    /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP$0$Compare$fired();
    }
}

#line 169
static   void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Event$fired(void)
{
  if (/*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Control$getControl().cap) {
    /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Capture$captured(/*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Capture$getEvent());
    }
  else {
#line 174
    /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP$1$Compare$fired();
    }
}

#line 169
static   void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Event$fired(void)
{
  if (/*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Control$getControl().cap) {
    /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Capture$captured(/*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Capture$getEvent());
    }
  else {
#line 174
    /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP$2$Compare$fired();
    }
}

# 12 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCommonP.nc"
 __attribute((wakeup)) __attribute((interrupt(10))) void sig_TIMERA1_VECTOR(void)
#line 12
{
#line 12
  Msp430TimerCommonP$VectorTimerA1$fired();
}

#line 13
 __attribute((wakeup)) __attribute((interrupt(26))) void sig_TIMERB0_VECTOR(void)
#line 13
{
#line 13
  Msp430TimerCommonP$VectorTimerB0$fired();
}

# 135 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
static    void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Event$default$fired(uint8_t n)
{
}

# 28 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static   void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Event$fired(uint8_t arg_0x406605e0){
#line 28
  switch (arg_0x406605e0) {
#line 28
    case 0:
#line 28
      /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP$3$Event$fired();
#line 28
      break;
#line 28
    case 1:
#line 28
      /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP$4$Event$fired();
#line 28
      break;
#line 28
    case 2:
#line 28
      /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP$5$Event$fired();
#line 28
      break;
#line 28
    case 3:
#line 28
      /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP$6$Event$fired();
#line 28
      break;
#line 28
    case 4:
#line 28
      /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP$7$Event$fired();
#line 28
      break;
#line 28
    case 5:
#line 28
      /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP$8$Event$fired();
#line 28
      break;
#line 28
    case 6:
#line 28
      /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP$9$Event$fired();
#line 28
      break;
#line 28
    case 7:
#line 28
      /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Overflow$fired();
#line 28
      break;
#line 28
    default:
#line 28
      /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Event$default$fired(arg_0x406605e0);
#line 28
      break;
#line 28
    }
#line 28
}
#line 28
# 136 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$to_size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$to_size_type dt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$m_t0 = t0;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$m_dt = dt;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$set_alarm();
    }
#line 143
    __nesc_atomic_end(__nesc_atomic); }
}

#line 96
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$set_alarm(void)
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$to_size_type now = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$Counter$get();
#line 98
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$to_size_type expires;
#line 98
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$to_size_type remaining;




  expires = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$m_t0 + /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$m_dt;


  remaining = (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$to_size_type )(expires - now);


  if (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$m_t0 <= now) 
    {
      if (expires >= /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$m_t0 && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$m_t0 || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 121
  if (remaining > /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$MAX_DELAY) 
    {
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$m_t0 = now + /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$MAX_DELAY;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$m_dt = remaining - /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$MAX_DELAY;
      remaining = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$MAX_DELAY;
    }
  else 
    {
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$m_t0 += /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$m_dt;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$m_dt = 0;
    }
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$AlarmFrom$startAt((/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$from_size_type )now << 0, 
  (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC$0$from_size_type )remaining << 0);
}

# 69 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static   /*Counter32khz32C.Transform*/TransformCounterC$0$to_size_type /*Counter32khz32C.Transform*/TransformCounterC$0$Counter$get(void)
{
  /*Counter32khz32C.Transform*/TransformCounterC$0$to_size_type rv = 0;

#line 72
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*Counter32khz32C.Transform*/TransformCounterC$0$upper_count_type high = /*Counter32khz32C.Transform*/TransformCounterC$0$m_upper;
      /*Counter32khz32C.Transform*/TransformCounterC$0$from_size_type low = /*Counter32khz32C.Transform*/TransformCounterC$0$CounterFrom$get();

#line 76
      if (/*Counter32khz32C.Transform*/TransformCounterC$0$CounterFrom$isOverflowPending()) 
        {






          high++;
          low = /*Counter32khz32C.Transform*/TransformCounterC$0$CounterFrom$get();
        }
      {
        /*Counter32khz32C.Transform*/TransformCounterC$0$to_size_type high_to = high;
        /*Counter32khz32C.Transform*/TransformCounterC$0$to_size_type low_to = low >> /*Counter32khz32C.Transform*/TransformCounterC$0$LOW_SHIFT_RIGHT;

#line 90
        rv = (high_to << /*Counter32khz32C.Transform*/TransformCounterC$0$HIGH_SHIFT_LEFT) | low_to;
      }
    }
#line 92
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

# 51 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc"
static   uint16_t /*Msp430TimerC.Msp430TimerB*/Msp430TimerP$1$Timer$get(void)
{




  if (1) {
      /* atomic removed: atomic calls only */
#line 58
      {
        uint16_t t0;
        uint16_t t1 = * (volatile uint16_t *)400U;

#line 61
        do {
#line 61
            t0 = t1;
#line 61
            t1 = * (volatile uint16_t *)400U;
          }
        while (
#line 61
        t0 != t1);
        {
          unsigned int __nesc_temp = 
#line 62
          t1;

#line 62
          return __nesc_temp;
        }
      }
    }
  else 
#line 65
    {
      return * (volatile uint16_t *)400U;
    }
}

# 624 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static void CC2420TransmitP$congestionBackoff(void)
#line 624
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 625
    {
      CC2420TransmitP$RadioBackoff$requestCongestionBackoff(CC2420TransmitP$m_msg);
      CC2420TransmitP$BackoffTimer$start(CC2420TransmitP$myCongestionBackoff);
    }
#line 628
    __nesc_atomic_end(__nesc_atomic); }
}

# 58 "/opt/tinyos-2.x/tos/system/RandomMlcgP.nc"
static   uint32_t RandomMlcgP$Random$rand32(void)
#line 58
{
  uint32_t mlcg;
#line 59
  uint32_t p;
#line 59
  uint32_t q;
  uint64_t tmpseed;

  /* atomic removed: atomic calls only */
#line 62
  {
    tmpseed = (uint64_t )33614U * (uint64_t )RandomMlcgP$seed;
    q = tmpseed;
    q = q >> 1;
    p = tmpseed >> 32;
    mlcg = p + q;
    if (mlcg & 0x80000000) {
        mlcg = mlcg & 0x7FFFFFFF;
        mlcg++;
      }
    RandomMlcgP$seed = mlcg;
  }
  return mlcg;
}

# 631 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static error_t CC2420TransmitP$acquireSpiResource(void)
#line 631
{
  error_t error = CC2420TransmitP$SpiResource$immediateRequest();

#line 633
  if (error != SUCCESS) {
      CC2420TransmitP$SpiResource$request();
    }
  return error;
}

# 124 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static   error_t CC2420SpiP$Resource$immediateRequest(uint8_t id)
#line 124
{
  error_t error;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 127
    {
      if (CC2420SpiP$WorkingState$requestState(CC2420SpiP$S_BUSY) != SUCCESS) {
          {
            unsigned char __nesc_temp = 
#line 129
            EBUSY;

            {
#line 129
              __nesc_atomic_end(__nesc_atomic); 
#line 129
              return __nesc_temp;
            }
          }
        }
      if (CC2420SpiP$SpiResource$isOwner()) {
          CC2420SpiP$m_holder = id;
          error = SUCCESS;
        }
      else {
#line 137
        if ((error = CC2420SpiP$SpiResource$immediateRequest()) == SUCCESS) {
            CC2420SpiP$m_holder = id;
          }
        else {
            CC2420SpiP$WorkingState$toIdle();
          }
        }
    }
#line 144
    __nesc_atomic_end(__nesc_atomic); }
#line 144
  return error;
}

# 96 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
static   error_t StateImplP$State$requestState(uint8_t id, uint8_t reqState)
#line 96
{
  error_t returnVal = FAIL;

#line 98
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 98
    {
      if (reqState == StateImplP$S_IDLE || StateImplP$state[id] == StateImplP$S_IDLE) {
          StateImplP$state[id] = reqState;
          returnVal = SUCCESS;
        }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
  return returnVal;
}

# 162 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static   uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$Resource$isOwner(uint8_t id)
#line 162
{
  /* atomic removed: atomic calls only */
#line 163
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$resId == id) {
        unsigned char __nesc_temp = 
#line 164
        TRUE;

#line 164
        return __nesc_temp;
      }
    else 
#line 165
      {
        unsigned char __nesc_temp = 
#line 165
        FALSE;

#line 165
        return __nesc_temp;
      }
  }
}

#line 126
static   error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$ResourceDefaultOwner$release(void)
#line 126
{
  /* atomic removed: atomic calls only */
#line 127
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$resId == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$default_owner_id) {
        if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$RES_GRANTING) {
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$grantedTask$postTask();
            {
              unsigned char __nesc_temp = 
#line 131
              SUCCESS;

#line 131
              return __nesc_temp;
            }
          }
        else {
#line 133
          if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$RES_IMM_GRANTING) {
              /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$reqResId;
              /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$RES_BUSY;
              {
                unsigned char __nesc_temp = 
#line 136
                SUCCESS;

#line 136
                return __nesc_temp;
              }
            }
          }
      }
  }
#line 140
  return FAIL;
}

# 159 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static   error_t SchedulerBasicP$TaskBasic$postTask(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 161
    {
#line 161
      {
        unsigned char __nesc_temp = 
#line 161
        SchedulerBasicP$pushTask(id) ? SUCCESS : EBUSY;

        {
#line 161
          __nesc_atomic_end(__nesc_atomic); 
#line 161
          return __nesc_temp;
        }
      }
    }
#line 164
    __nesc_atomic_end(__nesc_atomic); }
}

# 265 "/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static   void HplMsp430Usart0P$Usart$setModeSpi(msp430_spi_union_config_t *config)
#line 265
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 267
    {
      HplMsp430Usart0P$Usart$resetUsart(TRUE);
      HplMsp430Usart0P$HplI2C$clearModeI2C();
      HplMsp430Usart0P$Usart$disableUart();
      HplMsp430Usart0P$configSpi(config);
      HplMsp430Usart0P$Usart$enableSpi();
      HplMsp430Usart0P$Usart$resetUsart(FALSE);
      HplMsp430Usart0P$Usart$clrIntr();
      HplMsp430Usart0P$Usart$disableIntr();
    }
#line 276
    __nesc_atomic_end(__nesc_atomic); }
  return;
}

# 105 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static   error_t CC2420SpiP$Resource$request(uint8_t id)
#line 105
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 107
    {
      if (CC2420SpiP$WorkingState$requestState(CC2420SpiP$S_BUSY) == SUCCESS) {
          CC2420SpiP$m_holder = id;
          if (CC2420SpiP$SpiResource$isOwner()) {
              CC2420SpiP$grant$postTask();
            }
          else {
              CC2420SpiP$SpiResource$request();
            }
        }
      else {
          CC2420SpiP$m_requests |= 1 << id;
        }
    }
#line 120
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 583 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static void CC2420TransmitP$attemptSend(void)
#line 583
{
  uint8_t status;
  bool congestion = TRUE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 587
    {
      if (CC2420TransmitP$m_state == CC2420TransmitP$S_TX_CANCEL) {
          CC2420TransmitP$SFLUSHTX$strobe();
          CC2420TransmitP$releaseSpiResource();
          CC2420TransmitP$CSN$set();
          CC2420TransmitP$m_state = CC2420TransmitP$S_STARTED;
          {
#line 593
            __nesc_atomic_end(__nesc_atomic); 
#line 593
            return;
          }
        }

      CC2420TransmitP$CSN$clr();

      status = CC2420TransmitP$m_cca ? CC2420TransmitP$STXONCCA$strobe() : CC2420TransmitP$STXON$strobe();
      if (!(status & CC2420_STATUS_TX_ACTIVE)) {
          status = CC2420TransmitP$SNOP$strobe();
          if (status & CC2420_STATUS_TX_ACTIVE) {
              congestion = FALSE;
            }
        }

      CC2420TransmitP$m_state = congestion ? CC2420TransmitP$S_SAMPLE_CCA : CC2420TransmitP$S_SFD;
      CC2420TransmitP$CSN$set();
    }
#line 609
    __nesc_atomic_end(__nesc_atomic); }

  if (congestion) {
      CC2420TransmitP$totalCcaChecks = 0;
      CC2420TransmitP$releaseSpiResource();
      CC2420TransmitP$congestionBackoff();
    }
  else 
#line 615
    {
      CC2420TransmitP$BackoffTimer$start(CC2420TransmitP$CC2420_ABORT_PERIOD);
    }
}

# 315 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static   cc2420_status_t CC2420SpiP$Strobe$strobe(uint8_t addr)
#line 315
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 316
    {
      if (CC2420SpiP$WorkingState$isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 318
            0;

            {
#line 318
              __nesc_atomic_end(__nesc_atomic); 
#line 318
              return __nesc_temp;
            }
          }
        }
    }
#line 322
    __nesc_atomic_end(__nesc_atomic); }
#line 322
  return CC2420SpiP$SpiByte$write(addr);
}

# 133 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
static   bool StateImplP$State$isState(uint8_t id, uint8_t myState)
#line 133
{
  bool isState;

#line 135
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 135
    isState = StateImplP$state[id] == myState;
#line 135
    __nesc_atomic_end(__nesc_atomic); }
  return isState;
}

# 98 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static   uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$SpiByte$write(uint8_t tx)
#line 98
{
  uint8_t byte;


  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$tx(tx);
  while (!/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$isRxIntrPending()) ;
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$clrRxIntr();
  byte = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$rx();

  return byte;
}

# 386 "/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static   uint8_t HplMsp430Usart0P$Usart$rx(void)
#line 386
{
  uint8_t value;

#line 388
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 388
    value = U0RXBUF;
#line 388
    __nesc_atomic_end(__nesc_atomic); }
  return value;
}

# 147 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static   error_t CC2420SpiP$Resource$release(uint8_t id)
#line 147
{
  uint8_t i;

#line 149
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 149
    {
      if (CC2420SpiP$m_holder != id) {
          {
            unsigned char __nesc_temp = 
#line 151
            FAIL;

            {
#line 151
              __nesc_atomic_end(__nesc_atomic); 
#line 151
              return __nesc_temp;
            }
          }
        }
#line 154
      CC2420SpiP$m_holder = CC2420SpiP$NO_HOLDER;
      if (!CC2420SpiP$m_requests) {
          CC2420SpiP$WorkingState$toIdle();
          CC2420SpiP$attemptRelease();
        }
      else {
          for (i = CC2420SpiP$m_holder + 1; ; i++) {
              i %= CC2420SpiP$RESOURCE_COUNT;

              if (CC2420SpiP$m_requests & (1 << i)) {
                  CC2420SpiP$m_holder = i;
                  CC2420SpiP$m_requests &= ~(1 << i);
                  CC2420SpiP$grant$postTask();
                  {
                    unsigned char __nesc_temp = 
#line 167
                    SUCCESS;

                    {
#line 167
                      __nesc_atomic_end(__nesc_atomic); 
#line 167
                      return __nesc_temp;
                    }
                  }
                }
            }
        }
    }
#line 173
    __nesc_atomic_end(__nesc_atomic); }
#line 173
  return SUCCESS;
}

#line 336
static error_t CC2420SpiP$attemptRelease(void)
#line 336
{


  if ((
#line 337
  CC2420SpiP$m_requests > 0
   || CC2420SpiP$m_holder != CC2420SpiP$NO_HOLDER)
   || !CC2420SpiP$WorkingState$isIdle()) {
      return FAIL;
    }
  /* atomic removed: atomic calls only */
  CC2420SpiP$release = TRUE;
  CC2420SpiP$ChipSpiResource$releasing();
  /* atomic removed: atomic calls only */
#line 345
  {
    if (CC2420SpiP$release) {
        CC2420SpiP$SpiResource$release();
        {
          unsigned char __nesc_temp = 
#line 348
          SUCCESS;

#line 348
          return __nesc_temp;
        }
      }
  }
  return EBUSY;
}

# 45 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static   void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP$26$IO$set(void)
#line 45
{
#line 45
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 45
    * (volatile uint8_t *)29U |= 0x01 << 2;
#line 45
    __nesc_atomic_end(__nesc_atomic); }
}

#line 46
static   void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP$26$IO$clr(void)
#line 46
{
#line 46
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 46
    * (volatile uint8_t *)29U &= ~(0x01 << 2);
#line 46
    __nesc_atomic_end(__nesc_atomic); }
}

# 683 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static void CC2420TransmitP$signalDone(error_t err)
#line 683
{
  /* atomic removed: atomic calls only */
#line 684
  CC2420TransmitP$m_state = CC2420TransmitP$S_STARTED;
  CC2420TransmitP$abortSpiRelease = FALSE;
  CC2420TransmitP$ChipSpiResource$attemptRelease();
  CC2420TransmitP$Send$sendDone(CC2420TransmitP$m_msg, err);
}

# 38 "/opt/tinyos-2.x/tos/chips/msp430/timer/GpioCaptureC.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$enableCapture(uint8_t mode)
#line 38
{
  /* atomic removed: atomic calls only */
#line 39
  {
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Msp430TimerControl$disableEvents();
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$GeneralIO$selectModuleFunc();
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Msp430TimerControl$clearPendingInterrupt();
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Msp430Capture$clearOverflow();
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Msp430TimerControl$setControlAsCapture(mode);
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC$0$Msp430TimerControl$enableEvents();
  }
  return SUCCESS;
}

# 46 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static   void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP$30$IO$clr(void)
#line 46
{
#line 46
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 46
    * (volatile uint8_t *)29U &= ~(0x01 << 6);
#line 46
    __nesc_atomic_end(__nesc_atomic); }
}

#line 45
static   void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP$30$IO$set(void)
#line 45
{
#line 45
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 45
    * (volatile uint8_t *)29U |= 0x01 << 6;
#line 45
    __nesc_atomic_end(__nesc_atomic); }
}

# 96 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$set_alarm(void)
{
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$to_size_type now = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$Counter$get();
#line 98
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$to_size_type expires;
#line 98
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$to_size_type remaining;




  expires = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$m_t0 + /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$m_dt;


  remaining = (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$to_size_type )(expires - now);


  if (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$m_t0 <= now) 
    {
      if (expires >= /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$m_t0 && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$m_t0 || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 121
  if (remaining > /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$MAX_DELAY) 
    {
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$m_t0 = now + /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$MAX_DELAY;
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$m_dt = remaining - /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$MAX_DELAY;
      remaining = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$MAX_DELAY;
    }
  else 
    {
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$m_t0 += /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$m_dt;
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$m_dt = 0;
    }
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$AlarmFrom$startAt((/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$from_size_type )now << 5, 
  (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$from_size_type )remaining << 5);
}

# 69 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static   /*CounterMilli32C.Transform*/TransformCounterC$1$to_size_type /*CounterMilli32C.Transform*/TransformCounterC$1$Counter$get(void)
{
  /*CounterMilli32C.Transform*/TransformCounterC$1$to_size_type rv = 0;

#line 72
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*CounterMilli32C.Transform*/TransformCounterC$1$upper_count_type high = /*CounterMilli32C.Transform*/TransformCounterC$1$m_upper;
      /*CounterMilli32C.Transform*/TransformCounterC$1$from_size_type low = /*CounterMilli32C.Transform*/TransformCounterC$1$CounterFrom$get();

#line 76
      if (/*CounterMilli32C.Transform*/TransformCounterC$1$CounterFrom$isOverflowPending()) 
        {






          high++;
          low = /*CounterMilli32C.Transform*/TransformCounterC$1$CounterFrom$get();
        }
      {
        /*CounterMilli32C.Transform*/TransformCounterC$1$to_size_type high_to = high;
        /*CounterMilli32C.Transform*/TransformCounterC$1$to_size_type low_to = low >> /*CounterMilli32C.Transform*/TransformCounterC$1$LOW_SHIFT_RIGHT;

#line 90
        rv = (high_to << /*CounterMilli32C.Transform*/TransformCounterC$1$HIGH_SHIFT_LEFT) | low_to;
      }
    }
#line 92
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

# 14 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCommonP.nc"
 __attribute((wakeup)) __attribute((interrupt(24))) void sig_TIMERB1_VECTOR(void)
#line 14
{
#line 14
  Msp430TimerCommonP$VectorTimerB1$fired();
}

# 52 "/opt/tinyos-2.x/tos/system/RealMainP.nc"
  int main(void)
#line 52
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {





      {
      }
#line 60
      ;

      RealMainP$Scheduler$init();





      RealMainP$PlatformInit$init();
      while (RealMainP$Scheduler$runNextTask()) ;





      RealMainP$SoftwareInit$init();
      while (RealMainP$Scheduler$runNextTask()) ;
    }
#line 77
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  RealMainP$Boot$booted();


  RealMainP$Scheduler$taskLoop();




  return -1;
}

# 160 "/opt/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockP.nc"
static void Msp430ClockP$set_dco_calib(int calib)
{
  BCSCTL1 = (BCSCTL1 & ~0x07) | ((calib >> 8) & 0x07);
  DCOCTL = calib & 0xff;
}

# 16 "/opt/tinyos-2.x/tos/platforms/telosb/MotePlatformC.nc"
static void MotePlatformC$TOSH_FLASH_M25P_DP_bit(bool set)
#line 16
{
  if (set) {
    TOSH_SET_SIMO0_PIN();
    }
  else {
#line 20
    TOSH_CLR_SIMO0_PIN();
    }
#line 21
  TOSH_SET_UCLK0_PIN();
  TOSH_CLR_UCLK0_PIN();
}

# 123 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static  bool SchedulerBasicP$Scheduler$runNextTask(void)
{
  uint8_t nextTask;

  /* atomic removed: atomic calls only */
#line 127
  {
    nextTask = SchedulerBasicP$popTask();
    if (nextTask == SchedulerBasicP$NO_TASK) 
      {
        {
          unsigned char __nesc_temp = 
#line 131
          FALSE;

#line 131
          return __nesc_temp;
        }
      }
  }
#line 134
  SchedulerBasicP$TaskBasic$runTask(nextTask);
  return TRUE;
}

#line 164
static   void SchedulerBasicP$TaskBasic$default$runTask(uint8_t id)
{
}

# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void SchedulerBasicP$TaskBasic$runTask(uint8_t arg_0x40523dc8){
#line 64
  switch (arg_0x40523dc8) {
#line 64
    case CC2420CsmaP$startDone_task:
#line 64
      CC2420CsmaP$startDone_task$runTask();
#line 64
      break;
#line 64
    case CC2420CsmaP$stopDone_task:
#line 64
      CC2420CsmaP$stopDone_task$runTask();
#line 64
      break;
#line 64
    case CC2420CsmaP$sendDone_task:
#line 64
      CC2420CsmaP$sendDone_task$runTask();
#line 64
      break;
#line 64
    case CC2420ControlP$sync:
#line 64
      CC2420ControlP$sync$runTask();
#line 64
      break;
#line 64
    case CC2420ControlP$syncDone:
#line 64
      CC2420ControlP$syncDone$runTask();
#line 64
      break;
#line 64
    case CC2420SpiP$grant:
#line 64
      CC2420SpiP$grant$runTask();
#line 64
      break;
#line 64
    case /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$signalDone_task:
#line 64
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$signalDone_task$runTask();
#line 64
      break;
#line 64
    case /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$grantedTask:
#line 64
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP$0$grantedTask$runTask();
#line 64
      break;
#line 64
    case CC2420ReceiveP$receiveDone_task:
#line 64
      CC2420ReceiveP$receiveDone_task$runTask();
#line 64
      break;
#line 64
    case CC2420ReceiveP$waitTask:
#line 64
      CC2420ReceiveP$waitTask$runTask();
#line 64
      break;
#line 64
    case CC2420ReceiveP$waitDecTask:
#line 64
      CC2420ReceiveP$waitDecTask$runTask();
#line 64
      break;
#line 64
    case /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired:
#line 64
      /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask();
#line 64
      break;
#line 64
    case /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer:
#line 64
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask();
#line 64
      break;
#line 64
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask:
#line 64
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask();
#line 64
      break;
#line 64
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask:
#line 64
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask();
#line 64
      break;
#line 64
    default:
#line 64
      SchedulerBasicP$TaskBasic$default$runTask(arg_0x40523dc8);
#line 64
      break;
#line 64
    }
#line 64
}
#line 64
# 47 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static   void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP$37$IO$toggle(void)
#line 47
{
#line 47
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 47
    * (volatile uint8_t *)49U ^= 0x01 << 5;
#line 47
    __nesc_atomic_end(__nesc_atomic); }
}

#line 47
static   void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP$36$IO$toggle(void)
#line 47
{
#line 47
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 47
    * (volatile uint8_t *)49U ^= 0x01 << 4;
#line 47
    __nesc_atomic_end(__nesc_atomic); }
}

# 155 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(uint8_t last, message_t *msg, error_t err)
#line 155
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[last].msg = (void *)0;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend();
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(last, msg, err);
}

# 107 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static  am_addr_t CC2420ActiveMessageP$AMPacket$destination(message_t *amsg)
#line 107
{
  cc2420_header_t *header = CC2420ActiveMessageP$CC2420PacketBody$getHeader(amsg);

#line 109
  return __nesc_ntoh_leuint16((unsigned char *)&header->dest);
}

#line 160
static  uint8_t CC2420ActiveMessageP$Packet$payloadLength(message_t *msg)
#line 160
{
  return __nesc_ntoh_leuint8((unsigned char *)&CC2420ActiveMessageP$CC2420PacketBody$getHeader(msg)->length) - CC2420ActiveMessageP$CC2420_SIZE;
}

#line 61
static  error_t CC2420ActiveMessageP$AMSend$send(am_id_t id, am_addr_t addr, 
message_t *msg, 
uint8_t len)
#line 63
{
  cc2420_header_t *header = CC2420ActiveMessageP$CC2420PacketBody$getHeader(msg);

#line 65
  __nesc_hton_leuint8((unsigned char *)&header->type, id);
  __nesc_hton_leuint16((unsigned char *)&header->dest, addr);
  __nesc_hton_leuint16((unsigned char *)&header->destpan, CC2420ActiveMessageP$CC2420Config$getPanAddr());

  return CC2420ActiveMessageP$SubSend$send(msg, len + CC2420ActiveMessageP$CC2420_SIZE);
}

# 95 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static   am_addr_t ActiveMessageAddressC$amAddress(void)
#line 95
{
  am_addr_t myAddr;

#line 97
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 97
    myAddr = ActiveMessageAddressC$addr;
#line 97
    __nesc_atomic_end(__nesc_atomic); }
  return myAddr;
}

# 661 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static void CC2420TransmitP$loadTXFIFO(void)
#line 661
{
  cc2420_header_t *header = CC2420TransmitP$CC2420PacketBody$getHeader(CC2420TransmitP$m_msg);
  uint8_t tx_power = __nesc_ntoh_uint8((unsigned char *)&CC2420TransmitP$CC2420PacketBody$getMetadata(CC2420TransmitP$m_msg)->tx_power);

  if (!tx_power) {
      tx_power = 31;
    }

  CC2420TransmitP$CSN$clr();

  if (CC2420TransmitP$m_tx_power != tx_power) {
      CC2420TransmitP$TXCTRL$write((((2 << CC2420_TXCTRL_TXMIXBUF_CUR) | (
      3 << CC2420_TXCTRL_PA_CURRENT)) | (
      1 << CC2420_TXCTRL_RESERVED)) | ((
      tx_power & 0x1F) << CC2420_TXCTRL_PA_LEVEL));
    }

  CC2420TransmitP$m_tx_power = tx_power;

  CC2420TransmitP$TXFIFO$write((uint8_t *)header, __nesc_ntoh_leuint8((unsigned char *)&header->length) - 1);
}

# 302 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static   cc2420_status_t CC2420SpiP$Reg$write(uint8_t addr, uint16_t data)
#line 302
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 303
    {
      if (CC2420SpiP$WorkingState$isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 305
            0;

            {
#line 305
              __nesc_atomic_end(__nesc_atomic); 
#line 305
              return __nesc_temp;
            }
          }
        }
    }
#line 309
    __nesc_atomic_end(__nesc_atomic); }
#line 308
  CC2420SpiP$SpiByte$write(addr);
  CC2420SpiP$SpiByte$write(data >> 8);
  return CC2420SpiP$SpiByte$write(data & 0xff);
}

# 146 "/opt/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static   error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$SpiPacket$send(uint8_t id, uint8_t *tx_buf, 
uint8_t *rx_buf, 
uint16_t len)
#line 148
{

  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_client = id;
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_tx_buf = tx_buf;
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_rx_buf = rx_buf;
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_len = len;
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_pos = 0;

  if (len) {
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$enableRxIntr();
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$continueOp();
    }
  else {
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$signalDone_task$postTask();
    }

  return SUCCESS;
}

#line 120
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$continueOp(void)
#line 120
{

  uint8_t end;
  uint8_t tmp;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 125
    {
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$tx(/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_tx_buf ? /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_tx_buf[/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_pos] : 0);

      end = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_pos + /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$SPI_ATOMIC_SIZE;
      if (end > /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_len) {
        end = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_len;
        }
      while (++/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_pos < end) {
          while (!/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$isTxIntrPending()) ;
          /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$clrTxIntr();
          /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$tx(/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_tx_buf ? /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_tx_buf[/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_pos] : 0);
          while (!/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$isRxIntrPending()) ;
          /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$clrRxIntr();
          tmp = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$Usart$rx();
          if (/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_rx_buf) {
            /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_rx_buf[/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP$0$m_pos - 1] = tmp;
            }
        }
    }
#line 143
    __nesc_atomic_end(__nesc_atomic); }
}

# 56 "/opt/tinyos-2.x/tos/interfaces/State.nc"
static   void UniqueSendP$State$toIdle(void){
#line 56
  StateImplP$State$toIdle(2U);
#line 56
}
#line 56
# 62 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(uint32_t now)
{
  uint8_t num;

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;

          if (elapsed >= timer->dt) 
            {
              if (timer->isoneshot) {
                timer->isrunning = FALSE;
                }
              else {
#line 79
                timer->t0 += timer->dt;
                }
              /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(num);
            }
        }
    }
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask();
}

# 172 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static  void *CC2420ActiveMessageP$Packet$getPayload(message_t *msg, uint8_t *len)
#line 172
{
  if (len != (void *)0) {
      *len = CC2420ActiveMessageP$Packet$payloadLength(msg);
    }
  return msg->data;
}

# 114 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  void */*OscilloscopeAppC.AFWA_AESC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$getPayload(message_t *arg_0x407371f8){
#line 114
  void *result;
#line 114

#line 114
  result = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$getPayload(1U, arg_0x407371f8);
#line 114

#line 114
  return result;
#line 114
}
#line 114
# 45 "/opt/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static  error_t /*OscilloscopeAppC.AFWA_AESC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 47
{
  /*OscilloscopeAppC.AFWA_AESC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setDestination(msg, dest);
  /*OscilloscopeAppC.AFWA_AESC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setType(msg, 147);
  return /*OscilloscopeAppC.AFWA_AESC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$send(msg, len);
}

# 47 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static   void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP$38$IO$toggle(void)
#line 47
{
#line 47
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 47
    * (volatile uint8_t *)49U ^= 0x01 << 6;
#line 47
    __nesc_atomic_end(__nesc_atomic); }
}

# 398 "AES/AFWA_AESP.nc"
static void /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$startAes(uint8_t bytes)
#line 398
{
  /* atomic removed: atomic calls only */
#line 399
  {

    /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$KeySizeW = bytes * 8 / 32;
    /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$rounds = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$KeySizeW + 6;
    /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$KeyExpansion();
    /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$Cipher();
  }
}

#line 469
static void /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$SubWord(uint8_t *y)
{
  /* atomic removed: atomic calls only */
#line 471
  {

    y[0] = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$sBox(y[0]);
    y[1] = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$sBox(y[1]);
    y[2] = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$sBox(y[2]);
    y[3] = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$sBox(y[3]);
  }
}

#line 140
static uint8_t /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$sBox(uint8_t num)
#line 140
{

  uint8_t sbox[256] = { 
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
  0x8c, 0xa1, 0x89, 0x0d, 0xbf, 0xe6, 0x42, 0x68, 0x41, 0x99, 0x2d, 0x0f, 0xb0, 0x54, 0xbb, 0x16 };

  return sbox[num];
}

#line 480
static void /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$AddRoundKey(uint8_t round)
{
  uint8_t i;
#line 482
  uint8_t j;

  /* atomic removed: atomic calls only */
#line 484
  {

    for (i = 0; i < 4; i++) 
      for (j = 0; j < 4; j++) 
        /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[j][i] ^= /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$w[round * /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$coloumns * 4 + i * /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$coloumns + j];
  }
}

static void /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$SubBytes(void)
{
  uint8_t i;
#line 494
  uint8_t j;

  /* atomic removed: atomic calls only */
#line 496
  {

    for (i = 0; i < 4; i++) 
      for (j = 0; j < 4; j++) 
        if (/*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$mode) {
          /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[i][j] = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$sBox(/*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[i][j]);
          }
        else {
#line 503
          /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[i][j] = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$sBoxInvert(/*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[i][j]);
          }
  }
}

#line 531
static void /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$ShiftRows(void)
{
  uint8_t temp;








  temp = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[1][0];
  /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[1][0] = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[1][1];
  /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[1][1] = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[1][2];
  /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[1][2] = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[1][3];
  /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[1][3] = temp;

  temp = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[2][0];
  /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[2][0] = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[2][2];
  /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[2][2] = temp;

  temp = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[2][1];
  /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[2][1] = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[2][3];
  /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[2][3] = temp;

  temp = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[3][0];
  /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[3][0] = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[3][3];
  /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[3][3] = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[3][2];
  /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[3][2] = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[3][1];
  /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[3][1] = temp;
}

#line 633
static void /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$InvShiftRows(void)
{
  uint8_t temp;

  /* atomic removed: atomic calls only */
#line 637
  {

    temp = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[1][3];
    /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[1][3] = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[1][2];
    /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[1][2] = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[1][1];
    /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[1][1] = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[1][0];
    /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[1][0] = temp;

    temp = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[2][0];
    /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[2][0] = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[2][2];
    /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[2][2] = temp;
    temp = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[2][1];
    /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[2][1] = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[2][3];
    /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[2][3] = temp;

    temp = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[3][0];
    /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[3][0] = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[3][1];
    /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[3][1] = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[3][2];
    /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[3][2] = /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[3][3];
    /*OscilloscopeAppC.AFWA_AESC.AFWA_AESP*/AFWA_AESP$0$state[3][3] = temp;
  }
}

# 22 "AES/CTRP.nc"
static void /*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$xor(uint8_t *in, uint8_t *out)
{
  /*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$j = 0;
  /* atomic removed: atomic calls only */
  {
    for (/*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$j = 0; /*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$j < 16; /*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$j++) 
      in[/*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$j] ^= out[/*OscilloscopeAppC.AFWA_AESC.CTRP*/CTRP$0$j];
  }
}

# 45 "AES/OmacP.nc"
static void /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$preprocess(uint8_t *in, uint8_t *out)
{

  uint8_t p;
#line 48
  uint8_t q = 0;

  /* atomic removed: atomic calls only */
#line 50
  {

    if ((in[16 - 1] & 0x80) == 0x01) {
      /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$MSB = 1;
      }
    for (p = 0; p < 16; p++) {
        /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$temp[q++ % 2] = (in[p] & 0x80) >> 7;
        in[p] <<= 1;
        if (p != 0) {
          in[p] |= /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$temp[q % 2];
          }
#line 60
        q %= 2;
      }

    if (/*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$MSB) {
        switch (/*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$blksizeB) 
          {
            case 8: /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$Lu[7] ^= 0x1b;
#line 66
            break;
            case 16: /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$Lu[15] ^= 0x87;
#line 67
            break;
            case 32: /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$Lu[30] ^= 4;
#line 68
            /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$Lu[31] ^= 0x23;
#line 68
            break;
            default: 
              break;
          }
      }
    /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$MSB = 0;

    for (p = 0; p < 16; p++) 
      out[p] = in[p];
  }
}

#line 35
static void /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$xor(uint8_t *in, uint8_t *out)
{
  /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$j = 0;
  /* atomic removed: atomic calls only */
  {
    for (/*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$j = 0; /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$j < 16; /*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$j++) 
      in[/*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$j] ^= out[/*OscilloscopeAppC.AFWA_AESC.OmacP*/OmacP$0$j];
  }
}

# 136 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static   void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$Alarm$startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$to_size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$to_size_type dt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$m_t0 = t0;
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$m_dt = dt;
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$1$set_alarm();
    }
#line 143
    __nesc_atomic_end(__nesc_atomic); }
}

# 656 "/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static void CC2420ReceiveP$beginReceive(void)
#line 656
{
  CC2420ReceiveP$m_state = CC2420ReceiveP$S_RX_LENGTH;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 659
    CC2420ReceiveP$receivingPacket = TRUE;
#line 659
    __nesc_atomic_end(__nesc_atomic); }
  if (CC2420ReceiveP$SpiResource$isOwner()) {
      CC2420ReceiveP$receive();
    }
  else {
#line 663
    if (CC2420ReceiveP$SpiResource$immediateRequest() == SUCCESS) {
        CC2420ReceiveP$receive();
      }
    else {
        CC2420ReceiveP$SpiResource$request();
      }
    }
}

# 176 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static   uint8_t CC2420SpiP$Resource$isOwner(uint8_t id)
#line 176
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 177
    {
      unsigned char __nesc_temp = 
#line 177
      CC2420SpiP$m_holder == id;

      {
#line 177
        __nesc_atomic_end(__nesc_atomic); 
#line 177
        return __nesc_temp;
      }
    }
#line 179
    __nesc_atomic_end(__nesc_atomic); }
}

# 699 "/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static void CC2420ReceiveP$receive(void)
#line 699
{
  CC2420ReceiveP$CSN$clr();
  CC2420ReceiveP$RXFIFO$beginRead((uint8_t *)CC2420ReceiveP$CC2420PacketBody$getHeader(CC2420ReceiveP$m_p_rx_buf), 1);
}

# 187 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static   cc2420_status_t CC2420SpiP$Fifo$beginRead(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 188
{

  cc2420_status_t status = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 192
    {
      if (CC2420SpiP$WorkingState$isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 194
            status;

            {
#line 194
              __nesc_atomic_end(__nesc_atomic); 
#line 194
              return __nesc_temp;
            }
          }
        }
    }
#line 198
    __nesc_atomic_end(__nesc_atomic); }
#line 198
  CC2420SpiP$m_addr = addr | 0x40;

  status = CC2420SpiP$SpiByte$write(CC2420SpiP$m_addr);
  CC2420SpiP$Fifo$continueRead(addr, data, len);

  return status;
}

# 251 "/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static void CC2420ReceiveP$beginDec(void)
#line 251
{
  if (CC2420ReceiveP$SpiResource$isOwner()) {
      CC2420ReceiveP$dec();
    }
  else {
#line 254
    if (CC2420ReceiveP$SpiResource$immediateRequest() == SUCCESS) {
        CC2420ReceiveP$dec();
      }
    else 
#line 256
      {
        CC2420ReceiveP$SpiResource$request();
      }
    }
}

#line 315
static void CC2420ReceiveP$dec(void)
#line 315
{
  cc2420_header_t header;
  uint8_t temp;
#line 317
  uint8_t crc;
  sec_msg_t smsg = { 0, { 0 } };


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 321
    CC2420ReceiveP$pos = (CC2420ReceiveP$packetLength + CC2420ReceiveP$pos) % CC2420ReceiveP$RXFIFO_SIZE;
#line 321
    __nesc_atomic_end(__nesc_atomic); }

  if (CC2420ReceiveP$pos + 3 > CC2420ReceiveP$RXFIFO_SIZE) {
      temp = CC2420ReceiveP$RXFIFO_SIZE - CC2420ReceiveP$pos;
      CC2420ReceiveP$CSN$clr();
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 326
        CC2420ReceiveP$RXFIFO_RAM$read(CC2420ReceiveP$pos, (uint8_t *)&header, temp);
#line 326
        __nesc_atomic_end(__nesc_atomic); }
      CC2420ReceiveP$CSN$set();
      CC2420ReceiveP$CSN$clr();
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 329
        CC2420ReceiveP$RXFIFO_RAM$read(0, (uint8_t *)&header + temp, 3 - temp);
#line 329
        __nesc_atomic_end(__nesc_atomic); }
      CC2420ReceiveP$CSN$set();
    }
  else 
#line 331
    {
      CC2420ReceiveP$CSN$clr();
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 333
        CC2420ReceiveP$RXFIFO_RAM$read(CC2420ReceiveP$pos, (uint8_t *)&header, 3);
#line 333
        __nesc_atomic_end(__nesc_atomic); }
      CC2420ReceiveP$CSN$set();
    }

  CC2420ReceiveP$packetLength = __nesc_ntoh_leuint8((unsigned char *)&header.length) + 1;

  if (CC2420ReceiveP$packetLength == 6) {
      CC2420ReceiveP$m_state = CC2420ReceiveP$S_RX_LENGTH;
      CC2420ReceiveP$SpiResource$release();
      CC2420ReceiveP$beginReceive();
      return;
    }

  if (CC2420ReceiveP$pos + sizeof(cc2420_header_t ) > CC2420ReceiveP$RXFIFO_SIZE) {
      temp = CC2420ReceiveP$RXFIFO_SIZE - CC2420ReceiveP$pos;
      CC2420ReceiveP$CSN$clr();
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 349
        CC2420ReceiveP$RXFIFO_RAM$read(CC2420ReceiveP$pos, (uint8_t *)&header, temp);
#line 349
        __nesc_atomic_end(__nesc_atomic); }
      CC2420ReceiveP$CSN$set();
      CC2420ReceiveP$CSN$clr();
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 352
        CC2420ReceiveP$RXFIFO_RAM$read(0, (uint8_t *)&header + temp, sizeof(cc2420_header_t ) - temp);
#line 352
        __nesc_atomic_end(__nesc_atomic); }
      CC2420ReceiveP$CSN$set();
    }
  else 
#line 354
    {
      CC2420ReceiveP$CSN$clr();
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 356
        CC2420ReceiveP$RXFIFO_RAM$read(CC2420ReceiveP$pos, (uint8_t *)&header, sizeof(cc2420_header_t ));
#line 356
        __nesc_atomic_end(__nesc_atomic); }
      CC2420ReceiveP$CSN$set();
    }

  if (CC2420ReceiveP$pos + __nesc_ntoh_leuint8((unsigned char *)&header.length) + 1 > CC2420ReceiveP$RXFIFO_SIZE) {
      temp = __nesc_ntoh_leuint8((unsigned char *)&header.length) - (CC2420ReceiveP$RXFIFO_SIZE - CC2420ReceiveP$pos);
      CC2420ReceiveP$CSN$clr();
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 363
        CC2420ReceiveP$RXFIFO_RAM$read(temp, &crc, 1);
#line 363
        __nesc_atomic_end(__nesc_atomic); }
      CC2420ReceiveP$CSN$set();
    }
  else 
#line 365
    {
      CC2420ReceiveP$CSN$clr();
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 367
        CC2420ReceiveP$RXFIFO_RAM$read(CC2420ReceiveP$pos + __nesc_ntoh_leuint8((unsigned char *)&header.length), &crc, 1);
#line 367
        __nesc_atomic_end(__nesc_atomic); }
      CC2420ReceiveP$CSN$set();
    }

  if (__nesc_ntoh_leuint8((unsigned char *)&header.length) + 1 > CC2420ReceiveP$RXFIFO_SIZE || !(crc << 7)) {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 372
        CC2420ReceiveP$flush_flag = 1;
#line 372
        __nesc_atomic_end(__nesc_atomic); }
      CC2420ReceiveP$m_state = CC2420ReceiveP$S_RX_LENGTH;
      CC2420ReceiveP$SpiResource$release();
      CC2420ReceiveP$beginReceive();
      return;
    }



  if (crc << 7) {

      if (CC2420ReceiveP$CC2420Config$isAddressRecognitionEnabled()) {
          if (!(__nesc_ntoh_leuint16((unsigned char *)&header.dest) == CC2420ReceiveP$CC2420Config$getShortAddr() || __nesc_ntoh_leuint16((unsigned char *)&header.dest) == AM_BROADCAST_ADDR)) {
              CC2420ReceiveP$packetLength = __nesc_ntoh_leuint8((unsigned char *)&header.length) + 1;
              CC2420ReceiveP$m_state = CC2420ReceiveP$S_RX_LENGTH;
              CC2420ReceiveP$SpiResource$release();
              CC2420ReceiveP$beginReceive();
              return;
            }
        }

      if (SECURITYLOCK == 1) {

          CC2420ReceiveP$SpiResource$release();
          CC2420ReceiveP$waitTask$postTask();
          return;
        }
      else 
#line 398
        {


          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 401
            SECURITYLOCK = 1;
#line 401
            __nesc_atomic_end(__nesc_atomic); }

          if ((CC2420ReceiveP$rx_ctrl0 & 0x0003) != 0x0000) {

              CC2420ReceiveP$securityOn = 1;
              CC2420ReceiveP$CSN$clr();
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 407
                CC2420ReceiveP$SECCTRL0$write(0x0000);
#line 407
                __nesc_atomic_end(__nesc_atomic); }
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 408
                CC2420ReceiveP$SECCTRL1$write(0x0000);
#line 408
                __nesc_atomic_end(__nesc_atomic); }
              CC2420ReceiveP$CSN$set();

              CC2420ReceiveP$CSN$clr();
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 412
                CC2420ReceiveP$SECCTRL0$write(CC2420ReceiveP$setMode0);
#line 412
                __nesc_atomic_end(__nesc_atomic); }
              CC2420ReceiveP$CSN$set();

              CC2420ReceiveP$CSN$clr();
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 416
                CC2420ReceiveP$SECCTRL1$write(CC2420ReceiveP$setMode1);
#line 416
                __nesc_atomic_end(__nesc_atomic); }
              CC2420ReceiveP$CSN$set();

              if ((CC2420ReceiveP$rx_ctrl0 & 0x0003) == 0x0002 || (CC2420ReceiveP$rx_ctrl0 & 0x0003) == 0x0003) {

                  if (CC2420ReceiveP$pos + sizeof(message_t ) > CC2420ReceiveP$RXFIFO_SIZE) {
                      temp = CC2420ReceiveP$RXFIFO_SIZE - CC2420ReceiveP$pos;
                      CC2420ReceiveP$CSN$clr();
                      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 424
                        CC2420ReceiveP$RXFIFO_RAM$read(CC2420ReceiveP$pos, (uint8_t *)&CC2420ReceiveP$msg, temp);
#line 424
                        __nesc_atomic_end(__nesc_atomic); }
                      CC2420ReceiveP$CSN$set();
                      CC2420ReceiveP$CSN$clr();
                      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 427
                        CC2420ReceiveP$RXFIFO_RAM$read(0, (uint8_t *)&CC2420ReceiveP$msg + temp, sizeof CC2420ReceiveP$msg - temp);
#line 427
                        __nesc_atomic_end(__nesc_atomic); }
                      CC2420ReceiveP$CSN$set();
                    }
                  else {

                      CC2420ReceiveP$CSN$clr();
                      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 433
                        CC2420ReceiveP$RXFIFO_RAM$read(CC2420ReceiveP$pos, (uint8_t *)&CC2420ReceiveP$msg, sizeof(message_t ));
#line 433
                        __nesc_atomic_end(__nesc_atomic); }
                      CC2420ReceiveP$CSN$set();
                    }

                  memcpy(&CC2420ReceiveP$nonceValue[3], & CC2420ReceiveP$msg.data, 4);
                  CC2420ReceiveP$CSN$clr();
                  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 439
                    CC2420ReceiveP$RXNONCE$write(0, CC2420ReceiveP$nonceValue, 16);
#line 439
                    __nesc_atomic_end(__nesc_atomic); }
                  CC2420ReceiveP$CSN$set();
                }

              CC2420ReceiveP$CSN$clr();
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 444
                CC2420ReceiveP$SRXDEC$strobe();
#line 444
                __nesc_atomic_end(__nesc_atomic); }
              CC2420ReceiveP$CSN$set();
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 446
                CC2420ReceiveP$decLoopCount = 0;
#line 446
                __nesc_atomic_end(__nesc_atomic); }
              CC2420ReceiveP$waitDecTask$postTask();
              return;
            }
          else {
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 451
                SECURITYLOCK = 0;
#line 451
                __nesc_atomic_end(__nesc_atomic); }
              CC2420ReceiveP$packetLength = __nesc_ntoh_leuint8((unsigned char *)&header.length) + 1;
              CC2420ReceiveP$m_state = CC2420ReceiveP$S_RX_LENGTH;
              CC2420ReceiveP$SpiResource$release();
              CC2420ReceiveP$beginReceive();
              return;
            }
        }
    }
  else 
#line 459
    {
      CC2420ReceiveP$packetLength = __nesc_ntoh_leuint8((unsigned char *)&header.length) + 1;
      CC2420ReceiveP$m_state = CC2420ReceiveP$S_RX_LENGTH;
      CC2420ReceiveP$SpiResource$release();
      CC2420ReceiveP$beginReceive();
      return;
    }
}

# 233 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static   cc2420_status_t CC2420SpiP$Ram$read(uint16_t addr, uint8_t offset, 
uint8_t *data, 
uint8_t len)
#line 235
{

  cc2420_status_t status = 0;

  /* atomic removed: atomic calls only */
#line 239
  {
    if (CC2420SpiP$WorkingState$isIdle()) {
        {
          unsigned char __nesc_temp = 
#line 241
          status;

#line 241
          return __nesc_temp;
        }
      }
  }
  addr += offset;

  CC2420SpiP$SpiByte$write(addr | 0x80);
  status = CC2420SpiP$SpiByte$write(((addr >> 1) & 0xc0) | 0x20);
  for (; len; len--) {
      * data++ = CC2420SpiP$SpiByte$write(0);
    }

  return status;
}

# 264 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static   uint16_t CC2420ControlP$CC2420Config$getShortAddr(void)
#line 264
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 265
    {
      unsigned int __nesc_temp = 
#line 265
      CC2420ControlP$m_short_addr;

      {
#line 265
        __nesc_atomic_end(__nesc_atomic); 
#line 265
        return __nesc_temp;
      }
    }
#line 267
    __nesc_atomic_end(__nesc_atomic); }
}

# 258 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static   cc2420_status_t CC2420SpiP$Ram$write(uint16_t addr, uint8_t offset, 
uint8_t *data, 
uint8_t len)
#line 260
{

  cc2420_status_t status = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 264
    {
      if (CC2420SpiP$WorkingState$isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 266
            status;

            {
#line 266
              __nesc_atomic_end(__nesc_atomic); 
#line 266
              return __nesc_temp;
            }
          }
        }
    }
#line 270
    __nesc_atomic_end(__nesc_atomic); }
#line 270
  addr += offset;

  CC2420SpiP$SpiByte$write(addr | 0x80);
  CC2420SpiP$SpiByte$write((addr >> 1) & 0xc0);

  for (; len; len--) {

      status = CC2420SpiP$SpiByte$write(* data++);
    }
  return status;
}

# 709 "/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static void CC2420ReceiveP$waitForNextPacket(void)
#line 709
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 710
    {
      if (CC2420ReceiveP$m_state == CC2420ReceiveP$S_STOPPED) {
          CC2420ReceiveP$SpiResource$release();
          {
#line 713
            __nesc_atomic_end(__nesc_atomic); 
#line 713
            return;
          }
        }
      CC2420ReceiveP$receivingPacket = FALSE;
      if ((CC2420ReceiveP$m_missed_packets && CC2420ReceiveP$FIFO$get()) || !CC2420ReceiveP$FIFOP$get()) {

          if (CC2420ReceiveP$m_missed_packets) {
              CC2420ReceiveP$m_missed_packets--;
            }


          CC2420ReceiveP$SpiResource$release();
          CC2420ReceiveP$m_state = CC2420ReceiveP$S_RX_DEC;
          CC2420ReceiveP$beginDec();
        }
      else 


        {

          CC2420ReceiveP$m_state = CC2420ReceiveP$S_STARTED;
          CC2420ReceiveP$m_missed_packets = 0;
          CC2420ReceiveP$SpiResource$release();
        }
    }
#line 737
    __nesc_atomic_end(__nesc_atomic); }
}

# 326 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static   void CC2420SpiP$SpiPacket$sendDone(uint8_t *tx_buf, uint8_t *rx_buf, 
uint16_t len, error_t error)
#line 327
{
  if (CC2420SpiP$m_addr & 0x40) {
      CC2420SpiP$Fifo$readDone(CC2420SpiP$m_addr & ~0x40, rx_buf, len, error);
    }
  else 
#line 330
    {
      CC2420SpiP$Fifo$writeDone(CC2420SpiP$m_addr, tx_buf, len, error);
    }
}

# 674 "/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static void CC2420ReceiveP$flush(void)
#line 674
{


  CC2420ReceiveP$flush_flag = 0;
  CC2420ReceiveP$pos = 0;
  CC2420ReceiveP$packetLength = 0;
  CC2420ReceiveP$securityOn = 0;


  CC2420ReceiveP$reset_state();
  CC2420ReceiveP$CSN$set();
  CC2420ReceiveP$CSN$clr();
  CC2420ReceiveP$SFLUSHRX$strobe();
  CC2420ReceiveP$SFLUSHRX$strobe();
  CC2420ReceiveP$CSN$set();
  CC2420ReceiveP$SpiResource$release();
  CC2420ReceiveP$waitForNextPacket();
}

#line 743
static void CC2420ReceiveP$reset_state(void)
#line 743
{
  CC2420ReceiveP$m_bytes_left = CC2420ReceiveP$RXFIFO_SIZE;
  /* atomic removed: atomic calls only */
#line 745
  CC2420ReceiveP$receivingPacket = FALSE;
  CC2420ReceiveP$m_timestamp_head = 0;
  CC2420ReceiveP$m_timestamp_size = 0;
  CC2420ReceiveP$m_missed_packets = 0;
}

# 428 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static void CC2420ControlP$writeFsctrl(void)
#line 428
{
  uint8_t channel;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 431
    {
      channel = CC2420ControlP$m_channel;
    }
#line 433
    __nesc_atomic_end(__nesc_atomic); }

  CC2420ControlP$FSCTRL$write((1 << CC2420_FSCTRL_LOCK_THR) | (((
  channel - 11) * 5 + 357) << CC2420_FSCTRL_FREQ));
}




static void CC2420ControlP$writeMdmctrl0(void)
#line 442
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 443
    {
      CC2420ControlP$MDMCTRL0$write((((((((1 << CC2420_MDMCTRL0_RESERVED_FRAME_MODE) | (
      CC2420ControlP$addressRecognition << CC2420_MDMCTRL0_ADR_DECODE)) | (
      2 << CC2420_MDMCTRL0_CCA_HYST)) | (
      3 << CC2420_MDMCTRL0_CCA_MOD)) | (
      1 << CC2420_MDMCTRL0_AUTOCRC)) | ((
      CC2420ControlP$autoAckEnabled && CC2420ControlP$hwAutoAckDefault) << CC2420_MDMCTRL0_AUTOACK)) | (
      0 << CC2420_MDMCTRL0_AUTOACK)) | (
      2 << CC2420_MDMCTRL0_PREAMBLE_LENGTH));
    }
#line 452
    __nesc_atomic_end(__nesc_atomic); }
}







static void CC2420ControlP$writeId(void)
#line 461
{
  nxle_uint16_t id[2];

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 464
    {
      __nesc_hton_leuint16((unsigned char *)&id[0], CC2420ControlP$m_pan);
      __nesc_hton_leuint16((unsigned char *)&id[1], CC2420ControlP$m_short_addr);
    }
#line 467
    __nesc_atomic_end(__nesc_atomic); }

  CC2420ControlP$PANID$write(0, (uint8_t *)&id, sizeof id);
}

# 53 "/opt/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
 __attribute((wakeup)) __attribute((interrupt(8))) void sig_PORT1_VECTOR(void)
{
  volatile int n = P1IFG & P1IE;

  if (n & (1 << 0)) {
#line 57
      HplMsp430InterruptP$Port10$fired();
#line 57
      return;
    }
#line 58
  if (n & (1 << 1)) {
#line 58
      HplMsp430InterruptP$Port11$fired();
#line 58
      return;
    }
#line 59
  if (n & (1 << 2)) {
#line 59
      HplMsp430InterruptP$Port12$fired();
#line 59
      return;
    }
#line 60
  if (n & (1 << 3)) {
#line 60
      HplMsp430InterruptP$Port13$fired();
#line 60
      return;
    }
#line 61
  if (n & (1 << 4)) {
#line 61
      HplMsp430InterruptP$Port14$fired();
#line 61
      return;
    }
#line 62
  if (n & (1 << 5)) {
#line 62
      HplMsp430InterruptP$Port15$fired();
#line 62
      return;
    }
#line 63
  if (n & (1 << 6)) {
#line 63
      HplMsp430InterruptP$Port16$fired();
#line 63
      return;
    }
#line 64
  if (n & (1 << 7)) {
#line 64
      HplMsp430InterruptP$Port17$fired();
#line 64
      return;
    }
}

#line 158
 __attribute((wakeup)) __attribute((interrupt(2))) void sig_PORT2_VECTOR(void)
{
  volatile int n = P2IFG & P2IE;

  if (n & (1 << 0)) {
#line 162
      HplMsp430InterruptP$Port20$fired();
#line 162
      return;
    }
#line 163
  if (n & (1 << 1)) {
#line 163
      HplMsp430InterruptP$Port21$fired();
#line 163
      return;
    }
#line 164
  if (n & (1 << 2)) {
#line 164
      HplMsp430InterruptP$Port22$fired();
#line 164
      return;
    }
#line 165
  if (n & (1 << 3)) {
#line 165
      HplMsp430InterruptP$Port23$fired();
#line 165
      return;
    }
#line 166
  if (n & (1 << 4)) {
#line 166
      HplMsp430InterruptP$Port24$fired();
#line 166
      return;
    }
#line 167
  if (n & (1 << 5)) {
#line 167
      HplMsp430InterruptP$Port25$fired();
#line 167
      return;
    }
#line 168
  if (n & (1 << 6)) {
#line 168
      HplMsp430InterruptP$Port26$fired();
#line 168
      return;
    }
#line 169
  if (n & (1 << 7)) {
#line 169
      HplMsp430InterruptP$Port27$fired();
#line 169
      return;
    }
}

# 96 "/opt/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
 __attribute((wakeup)) __attribute((interrupt(18))) void sig_UART0RX_VECTOR(void)
#line 96
{
  uint8_t temp = U0RXBUF;

#line 98
  HplMsp430Usart0P$Interrupts$rxDone(temp);
}

 __attribute((wakeup)) __attribute((interrupt(16))) void sig_UART0TX_VECTOR(void)
#line 101
{
  if (HplMsp430Usart0P$HplI2C$isI2C()) {
    HplMsp430Usart0P$I2CInterrupts$fired();
    }
  else {
#line 105
    HplMsp430Usart0P$Interrupts$txDone();
    }
}

