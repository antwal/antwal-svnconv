#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 121 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/stdint.h" 3
typedef int int8_t __attribute((__mode__(__QI__))) ;
typedef unsigned int uint8_t __attribute((__mode__(__QI__))) ;
typedef int int16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int uint16_t __attribute((__mode__(__HI__))) ;
typedef int int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int uint32_t __attribute((__mode__(__SI__))) ;

typedef int int64_t __attribute((__mode__(__DI__))) ;
typedef unsigned int uint64_t __attribute((__mode__(__DI__))) ;
#line 142
typedef int16_t intptr_t;




typedef uint16_t uintptr_t;
#line 159
typedef int8_t int_least8_t;




typedef uint8_t uint_least8_t;




typedef int16_t int_least16_t;




typedef uint16_t uint_least16_t;




typedef int32_t int_least32_t;




typedef uint32_t uint_least32_t;







typedef int64_t int_least64_t;






typedef uint64_t uint_least64_t;
#line 213
typedef int8_t int_fast8_t;




typedef uint8_t uint_fast8_t;




typedef int16_t int_fast16_t;




typedef uint16_t uint_fast16_t;




typedef int32_t int_fast32_t;




typedef uint32_t uint_fast32_t;







typedef int64_t int_fast64_t;






typedef uint64_t uint_fast64_t;
#line 273
typedef int64_t intmax_t;




typedef uint64_t uintmax_t;
# 77 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/inttypes.h"
typedef int32_t int_farptr_t;



typedef uint32_t uint_farptr_t;
# 385 "/usr/local/lib/ncc/nesc_nx.h"
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
# 214 "/usr/bin/../lib/gcc/avr/4.1.2/include/stddef.h" 3
typedef unsigned int size_t;
# 116 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/string.h" 3
extern void *memset(void *, int , size_t );
# 326 "/usr/bin/../lib/gcc/avr/4.1.2/include/stddef.h" 3
typedef int wchar_t;
# 71 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/stdlib.h"
#line 68
typedef struct __nesc_unnamed4242 {
  int quot;
  int rem;
} div_t;





#line 74
typedef struct __nesc_unnamed4243 {
  long quot;
  long rem;
} ldiv_t;


typedef int (*__compar_fn_t)(const void *, const void *);
# 152 "/usr/bin/../lib/gcc/avr/4.1.2/include/stddef.h" 3
typedef int ptrdiff_t;
# 20 "/opt/tinyos-2.x/tos/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4244 {
#line 21
  FALSE = 0, TRUE = 1
};
typedef nx_int8_t nx_bool;






struct __nesc_attr_atmostonce {
};
#line 31
struct __nesc_attr_atleastonce {
};
#line 32
struct __nesc_attr_exactlyonce {
};
# 34 "/opt/tinyos-2.x/tos/types/TinyError.h"
enum __nesc_unnamed4245 {
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
# 57 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/avr/fuse.h" 3
#line 52
typedef struct __nesc_unnamed4246 {

  unsigned char low;
  unsigned char high;
  unsigned char extended;
} __fuse_t;
# 210 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/avr/pgmspace.h" 3
typedef void prog_void __attribute((__progmem__)) ;
typedef char prog_char __attribute((__progmem__)) ;
typedef unsigned char prog_uchar __attribute((__progmem__)) ;

typedef int8_t prog_int8_t __attribute((__progmem__)) ;
typedef uint8_t prog_uint8_t __attribute((__progmem__)) ;
typedef int16_t prog_int16_t __attribute((__progmem__)) ;
typedef uint16_t prog_uint16_t __attribute((__progmem__)) ;
typedef int32_t prog_int32_t __attribute((__progmem__)) ;
typedef uint32_t prog_uint32_t __attribute((__progmem__)) ;

typedef int64_t prog_int64_t __attribute((__progmem__)) ;
typedef uint64_t prog_uint64_t __attribute((__progmem__)) ;
# 25 "/opt/tinyos-2.x/tos/chips/atm128/atm128const.h"
typedef uint8_t const_uint8_t __attribute((__progmem__)) ;
typedef uint16_t const_uint16_t __attribute((__progmem__)) ;
typedef uint32_t const_uint32_t __attribute((__progmem__)) ;
typedef int8_t const_int8_t __attribute((__progmem__)) ;
typedef int16_t const_int16_t __attribute((__progmem__)) ;
typedef int32_t const_int32_t __attribute((__progmem__)) ;
# 82 "/opt/tinyos-2.x/tos/chips/atm128/atm128hardware.h"
static __inline void __nesc_enable_interrupt(void);



static __inline void __nesc_disable_interrupt(void);




typedef uint8_t __nesc_atomic_t;
__nesc_atomic_t __nesc_atomic_start(void );
void __nesc_atomic_end(__nesc_atomic_t original_SREG);









#line 102
__inline __nesc_atomic_t 
__nesc_atomic_start(void )  ;









#line 112
__inline void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)  ;







typedef uint8_t mcu_power_t  ;


enum __nesc_unnamed4247 {
  ATM128_POWER_IDLE = 0, 
  ATM128_POWER_ADC_NR = 1, 
  ATM128_POWER_EXT_STANDBY = 2, 
  ATM128_POWER_SAVE = 3, 
  ATM128_POWER_STANDBY = 4, 
  ATM128_POWER_DOWN = 5
};


static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2);
# 34 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128Adc.h"
enum __nesc_unnamed4248 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVCC = 1, 
  ATM128_ADC_VREF_RSVD, 
  ATM128_ADC_VREF_2_56 = 3
};


enum __nesc_unnamed4249 {
  ATM128_ADC_RIGHT_ADJUST = 0, 
  ATM128_ADC_LEFT_ADJUST = 1
};



enum __nesc_unnamed4250 {
  ATM128_ADC_SNGL_ADC0 = 0, 
  ATM128_ADC_SNGL_ADC1, 
  ATM128_ADC_SNGL_ADC2, 
  ATM128_ADC_SNGL_ADC3, 
  ATM128_ADC_SNGL_ADC4, 
  ATM128_ADC_SNGL_ADC5, 
  ATM128_ADC_SNGL_ADC6, 
  ATM128_ADC_SNGL_ADC7, 
  ATM128_ADC_DIFF_ADC00_10x, 
  ATM128_ADC_DIFF_ADC10_10x, 
  ATM128_ADC_DIFF_ADC00_200x, 
  ATM128_ADC_DIFF_ADC10_200x, 
  ATM128_ADC_DIFF_ADC22_10x, 
  ATM128_ADC_DIFF_ADC32_10x, 
  ATM128_ADC_DIFF_ADC22_200x, 
  ATM128_ADC_DIFF_ADC32_200x, 
  ATM128_ADC_DIFF_ADC01_1x, 
  ATM128_ADC_DIFF_ADC11_1x, 
  ATM128_ADC_DIFF_ADC21_1x, 
  ATM128_ADC_DIFF_ADC31_1x, 
  ATM128_ADC_DIFF_ADC41_1x, 
  ATM128_ADC_DIFF_ADC51_1x, 
  ATM128_ADC_DIFF_ADC61_1x, 
  ATM128_ADC_DIFF_ADC71_1x, 
  ATM128_ADC_DIFF_ADC02_1x, 
  ATM128_ADC_DIFF_ADC12_1x, 
  ATM128_ADC_DIFF_ADC22_1x, 
  ATM128_ADC_DIFF_ADC32_1x, 
  ATM128_ADC_DIFF_ADC42_1x, 
  ATM128_ADC_DIFF_ADC52_1x, 
  ATM128_ADC_SNGL_1_23, 
  ATM128_ADC_SNGL_GND
};







#line 85
typedef struct __nesc_unnamed4251 {

  uint8_t mux : 5;
  uint8_t adlar : 1;
  uint8_t refs : 2;
} Atm128Admux_t;




enum __nesc_unnamed4252 {
  ATM128_ADC_PRESCALE_2 = 0, 
  ATM128_ADC_PRESCALE_2b, 
  ATM128_ADC_PRESCALE_4, 
  ATM128_ADC_PRESCALE_8, 
  ATM128_ADC_PRESCALE_16, 
  ATM128_ADC_PRESCALE_32, 
  ATM128_ADC_PRESCALE_64, 
  ATM128_ADC_PRESCALE_128, 



  ATM128_ADC_PRESCALE
};


enum __nesc_unnamed4253 {
  ATM128_ADC_ENABLE_OFF = 0, 
  ATM128_ADC_ENABLE_ON
};


enum __nesc_unnamed4254 {
  ATM128_ADC_START_CONVERSION_OFF = 0, 
  ATM128_ADC_START_CONVERSION_ON
};


enum __nesc_unnamed4255 {
  ATM128_ADC_FREE_RUNNING_OFF = 0, 
  ATM128_ADC_FREE_RUNNING_ON
};


enum __nesc_unnamed4256 {
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4257 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 141
typedef struct __nesc_unnamed4258 {

  uint8_t adps : 3;
  uint8_t adie : 1;
  uint8_t adif : 1;
  uint8_t adfr : 1;
  uint8_t adsc : 1;
  uint8_t aden : 1;
} Atm128Adcsra_t;

typedef uint8_t Atm128_ADCH_t;
typedef uint8_t Atm128_ADCL_t;
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
# 43 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128Timer.h"
enum __nesc_unnamed4262 {
  ATM128_CLK8_OFF = 0x0, 
  ATM128_CLK8_NORMAL = 0x1, 
  ATM128_CLK8_DIVIDE_8 = 0x2, 
  ATM128_CLK8_DIVIDE_32 = 0x3, 
  ATM128_CLK8_DIVIDE_64 = 0x4, 
  ATM128_CLK8_DIVIDE_128 = 0x5, 
  ATM128_CLK8_DIVIDE_256 = 0x6, 
  ATM128_CLK8_DIVIDE_1024 = 0x7
};

enum __nesc_unnamed4263 {
  ATM128_CLK16_OFF = 0x0, 
  ATM128_CLK16_NORMAL = 0x1, 
  ATM128_CLK16_DIVIDE_8 = 0x2, 
  ATM128_CLK16_DIVIDE_64 = 0x3, 
  ATM128_CLK16_DIVIDE_256 = 0x4, 
  ATM128_CLK16_DIVIDE_1024 = 0x5, 
  ATM128_CLK16_EXTERNAL_FALL = 0x6, 
  ATM128_CLK16_EXTERNAL_RISE = 0x7
};


enum __nesc_unnamed4264 {
  AVR_CLOCK_OFF = 0, 
  AVR_CLOCK_ON = 1, 
  AVR_CLOCK_DIVIDE_8 = 2
};


enum __nesc_unnamed4265 {
  ATM128_WAVE8_NORMAL = 0, 
  ATM128_WAVE8_PWM, 
  ATM128_WAVE8_CTC, 
  ATM128_WAVE8_PWM_FAST
};


enum __nesc_unnamed4266 {
  ATM128_COMPARE_OFF = 0, 
  ATM128_COMPARE_TOGGLE, 
  ATM128_COMPARE_CLEAR, 
  ATM128_COMPARE_SET
};
#line 99
#line 89
typedef union __nesc_unnamed4267 {

  uint8_t flat;
  struct __nesc_unnamed4268 {
    uint8_t cs : 3;
    uint8_t wgm1 : 1;
    uint8_t com : 2;
    uint8_t wgm0 : 1;
    uint8_t foc : 1;
  } bits;
} Atm128TimerControl_t;

typedef Atm128TimerControl_t Atm128_TCCR0_t;
typedef uint8_t Atm128_TCNT0_t;
typedef uint8_t Atm128_OCR0_t;

typedef Atm128TimerControl_t Atm128_TCCR2_t;
typedef uint8_t Atm128_TCNT2_t;
typedef uint8_t Atm128_OCR2_t;
#line 121
#line 111
typedef union __nesc_unnamed4269 {

  uint8_t flat;
  struct __nesc_unnamed4270 {
    uint8_t tcr0ub : 1;
    uint8_t ocr0ub : 1;
    uint8_t tcn0ub : 1;
    uint8_t as0 : 1;
    uint8_t rsvd : 4;
  } bits;
} Atm128Assr_t;
#line 137
#line 124
typedef union __nesc_unnamed4271 {

  uint8_t flat;
  struct __nesc_unnamed4272 {
    uint8_t toie0 : 1;
    uint8_t ocie0 : 1;
    uint8_t toie1 : 1;
    uint8_t ocie1b : 1;
    uint8_t ocie1a : 1;
    uint8_t ticie1 : 1;
    uint8_t toie2 : 1;
    uint8_t ocie2 : 1;
  } bits;
} Atm128_TIMSK_t;
#line 154
#line 141
typedef union __nesc_unnamed4273 {

  uint8_t flat;
  struct __nesc_unnamed4274 {
    uint8_t tov0 : 1;
    uint8_t ocf0 : 1;
    uint8_t tov1 : 1;
    uint8_t ocf1b : 1;
    uint8_t ocf1a : 1;
    uint8_t icf1 : 1;
    uint8_t tov2 : 1;
    uint8_t ocf2 : 1;
  } bits;
} Atm128_TIFR_t;
#line 169
#line 158
typedef union __nesc_unnamed4275 {

  uint8_t flat;
  struct __nesc_unnamed4276 {
    uint8_t psr321 : 1;
    uint8_t psr0 : 1;
    uint8_t pud : 1;
    uint8_t acme : 1;
    uint8_t rsvd : 3;
    uint8_t tsm : 1;
  } bits;
} Atm128_SFIOR_t;






enum __nesc_unnamed4277 {
  ATM128_TIMER_COMPARE_NORMAL = 0, 
  ATM128_TIMER_COMPARE_TOGGLE, 
  ATM128_TIMER_COMPARE_CLEAR, 
  ATM128_TIMER_COMPARE_SET
};
#line 193
#line 184
typedef union __nesc_unnamed4278 {

  uint8_t flat;
  struct __nesc_unnamed4279 {
    uint8_t wgm10 : 2;
    uint8_t comC : 2;
    uint8_t comB : 2;
    uint8_t comA : 2;
  } bits;
} Atm128TimerCtrlCompare_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR1A_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR3A_t;


enum __nesc_unnamed4280 {
  ATM128_WAVE16_NORMAL = 0, 
  ATM128_WAVE16_PWM_8BIT, 
  ATM128_WAVE16_PWM_9BIT, 
  ATM128_WAVE16_PWM_10BIT, 
  ATM128_WAVE16_CTC_COMPARE, 
  ATM128_WAVE16_PWM_FAST_8BIT, 
  ATM128_WAVE16_PWM_FAST_9BIT, 
  ATM128_WAVE16_PWM_FAST_10BIT, 
  ATM128_WAVE16_PWM_CAPTURE_LOW, 
  ATM128_WAVE16_PWM_COMPARE_LOW, 
  ATM128_WAVE16_PWM_CAPTURE_HIGH, 
  ATM128_WAVE16_PWM_COMPARE_HIGH, 
  ATM128_WAVE16_CTC_CAPTURE, 
  ATM128_WAVE16_RESERVED, 
  ATM128_WAVE16_PWM_FAST_CAPTURE, 
  ATM128_WAVE16_PWM_FAST_COMPARE
};
#line 232
#line 222
typedef union __nesc_unnamed4281 {

  uint8_t flat;
  struct __nesc_unnamed4282 {
    uint8_t cs : 3;
    uint8_t wgm32 : 2;
    uint8_t rsvd : 1;
    uint8_t ices1 : 1;
    uint8_t icnc1 : 1;
  } bits;
} Atm128TimerCtrlCapture_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR1B_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR3B_t;
#line 250
#line 241
typedef union __nesc_unnamed4283 {

  uint8_t flat;
  struct __nesc_unnamed4284 {
    uint8_t rsvd : 5;
    uint8_t focC : 1;
    uint8_t focB : 1;
    uint8_t focA : 1;
  } bits;
} Atm128TimerCtrlClock_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR1C_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR3C_t;



typedef uint8_t Atm128_TCNT1H_t;
typedef uint8_t Atm128_TCNT1L_t;
typedef uint8_t Atm128_TCNT3H_t;
typedef uint8_t Atm128_TCNT3L_t;


typedef uint8_t Atm128_OCR1AH_t;
typedef uint8_t Atm128_OCR1AL_t;
typedef uint8_t Atm128_OCR1BH_t;
typedef uint8_t Atm128_OCR1BL_t;
typedef uint8_t Atm128_OCR1CH_t;
typedef uint8_t Atm128_OCR1CL_t;


typedef uint8_t Atm128_OCR3AH_t;
typedef uint8_t Atm128_OCR3AL_t;
typedef uint8_t Atm128_OCR3BH_t;
typedef uint8_t Atm128_OCR3BL_t;
typedef uint8_t Atm128_OCR3CH_t;
typedef uint8_t Atm128_OCR3CL_t;


typedef uint8_t Atm128_ICR1H_t;
typedef uint8_t Atm128_ICR1L_t;
typedef uint8_t Atm128_ICR3H_t;
typedef uint8_t Atm128_ICR3L_t;
#line 300
#line 288
typedef union __nesc_unnamed4285 {

  uint8_t flat;
  struct __nesc_unnamed4286 {
    uint8_t ocie1c : 1;
    uint8_t ocie3c : 1;
    uint8_t toie3 : 1;
    uint8_t ocie3b : 1;
    uint8_t ocie3a : 1;
    uint8_t ticie3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIMSK_t;
#line 315
#line 303
typedef union __nesc_unnamed4287 {

  uint8_t flat;
  struct __nesc_unnamed4288 {
    uint8_t ocf1c : 1;
    uint8_t ocf3c : 1;
    uint8_t tov3 : 1;
    uint8_t ocf3b : 1;
    uint8_t ocf3a : 1;
    uint8_t icf3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIFR_t;
# 51 "/opt/tinyos-2.x/tos/platforms/mica/MicaTimer.h"
typedef struct __nesc_unnamed4289 {
} 
#line 51
T64khz;
typedef struct __nesc_unnamed4290 {
} 
#line 52
T128khz;
typedef struct __nesc_unnamed4291 {
} 
#line 53
T2mhz;
typedef struct __nesc_unnamed4292 {
} 
#line 54
T4mhz;
#line 107
typedef T32khz TOne;
typedef TMicro TThree;
typedef uint16_t counter_one_overflow_t;
typedef uint16_t counter_three_overflow_t;

enum __nesc_unnamed4293 {
  MICA_PRESCALER_ONE = ATM128_CLK16_DIVIDE_256, 
  MICA_DIVIDE_ONE_FOR_32KHZ_LOG2 = 0, 
  MICA_PRESCALER_THREE = ATM128_CLK16_DIVIDE_8, 
  MICA_DIVIDE_THREE_FOR_MICRO_LOG2 = 0, 
  EXT_STANDBY_T0_THRESHOLD = 12
};





enum __nesc_unnamed4294 {
  PLATFORM_MHZ = 8
};
# 55 "/opt/tinyos-2.x/tos/platforms/micaz/hardware.h"
enum __nesc_unnamed4295 {
  CHANNEL_THERMISTOR = ATM128_ADC_SNGL_ADC1
};

enum __nesc_unnamed4296 {
  PLATFORM_BAUDRATE = 57600L
};
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
enum __nesc_unnamed4297 {

  MAC_HEADER_SIZE = sizeof(cc2420_header_t ) - 1, 

  MAC_FOOTER_SIZE = sizeof(uint16_t ), 

  MAC_PACKET_SIZE = MAC_HEADER_SIZE + 28 + MAC_FOOTER_SIZE
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
# 30 "/opt/tinyos-2.x/tos/types/Leds.h"
enum __nesc_unnamed4298 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 32 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.h"
enum __nesc_unnamed4299 {
  ATM128_SPI_CLK_DIVIDE_4 = 0, 
  ATM128_SPI_CLK_DIVIDE_16 = 1, 
  ATM128_SPI_CLK_DIVIDE_64 = 2, 
  ATM128_SPI_CLK_DIVIDE_128 = 3
};
#line 49
#line 40
typedef struct __nesc_unnamed4300 {
  uint8_t spie : 1;
  uint8_t spe : 1;
  uint8_t dord : 1;
  uint8_t mstr : 1;
  uint8_t cpol : 1;
  uint8_t cpha : 1;
  uint8_t spr : 2;
} 
Atm128SPIControl_s;



#line 50
typedef union __nesc_unnamed4301 {
  uint8_t flat;
  Atm128SPIControl_s bits;
} Atm128SPIControl_t;

typedef Atm128SPIControl_t Atm128_SPCR_t;








#line 58
typedef struct __nesc_unnamed4302 {
  uint8_t spif : 1;
  uint8_t wcol : 1;
  uint8_t rsvd : 5;
  uint8_t spi2x : 1;
} 
Atm128SPIStatus_s;



#line 65
typedef union __nesc_unnamed4303 {
  uint8_t flat;
  Atm128SPIStatus_s bits;
} Atm128SPIStatus_t;

typedef Atm128SPIStatus_t Atm128_SPSR_t;

typedef uint8_t Atm128_SPDR_t;
# 33 "/opt/tinyos-2.x/tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
# 23 "./Interfaces/AES.h"
enum mode {

  AES_KEY_UPDATE = 5, 
  AES_TRANSMIT = 6, 
  AES_RECEIVE = 7, 
  AES_TXNONCE = 8, 
  AES_RXNONCE = 9, 
  DONE = 10
};

enum modeSet {

  AES_STANDALONE = 0x0000, 
  KEY0 = 0x0000, 
  KEY1 = 0x0080, 

  AES_INLINE = 0x0001, 
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
#line 78
typedef uint8_t CTR_ENC_LEN;
typedef uint8_t CBC_AUTH_LEN;
typedef uint8_t CCM_AUTH_LEN;
typedef uint8_t CTR_DEC_LEN;
enum /*AFWA_AESC.SpiC*/CC2420SpiC$0$__nesc_unnamed4304 {
  CC2420SpiC$0$CLIENT_ID = 0U
};
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t PlatformP$Init$init(void);
#line 51
static  error_t MotePlatformP$SubInit$default$init(void);
#line 51
static  error_t MotePlatformP$PlatformInit$init(void);
# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void);





static   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set(void);





static   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set(void);



static   void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void);
#line 30
static   void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$set(void);
static   void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$clr(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t MeasureClockC$Init$init(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t SchedulerBasicP$TaskBasic$postTask(
# 45 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x4034a748);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void SchedulerBasicP$TaskBasic$default$runTask(
# 45 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x4034a748);
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
# 44 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static   void McuSleepC$McuPowerState$update(void);
# 71 "/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static   void CC2420SpiP$SpiPacket$sendDone(uint8_t *arg_0x4056e030, uint8_t *arg_0x4056e1d8, uint16_t arg_0x4056e368, 
error_t arg_0x4056e500);
# 91 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static   void CC2420SpiP$Fifo$default$writeDone(
# 44 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40553328, 
# 91 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t *arg_0x4053fb00, uint8_t arg_0x4053fc88, error_t arg_0x4053fe10);
#line 71
static   void CC2420SpiP$Fifo$default$readDone(
# 44 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40553328, 
# 71 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t *arg_0x405419d8, uint8_t arg_0x40541b60, error_t arg_0x40541ce8);
# 24 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static   void CC2420SpiP$ChipSpiResource$default$releasing(void);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void CC2420SpiP$SpiResource$granted(void);
# 52 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static   cc2420_status_t CC2420SpiP$Ram$read(
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint16_t arg_0x40553c90, 
# 52 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
uint8_t arg_0x403aac10, uint8_t *arg_0x403aadb8, uint8_t arg_0x403a9010);










static   cc2420_status_t CC2420SpiP$Ram$write(
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint16_t arg_0x40553c90, 
# 63 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
uint8_t arg_0x403a95f0, uint8_t *arg_0x403a9798, uint8_t arg_0x403a9920);
# 55 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static   cc2420_status_t CC2420SpiP$Reg$write(
# 46 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40552408, 
# 55 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
uint16_t arg_0x403b8010);
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t CC2420SpiP$Resource$release(
# 43 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40554950);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void CC2420SpiP$Resource$default$granted(
# 43 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40554950);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void CC2420SpiP$grant$runTask(void);
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static   cc2420_status_t CC2420SpiP$Strobe$strobe(
# 47 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40552ac8);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t StateImplP$Init$init(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/State.nc"
static   void StateImplP$State$toIdle(
# 67 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x405c0750);
# 66 "/opt/tinyos-2.x/tos/interfaces/State.nc"
static   bool StateImplP$State$isState(
# 67 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x405c0750, 
# 66 "/opt/tinyos-2.x/tos/interfaces/State.nc"
uint8_t arg_0x40575168);
#line 61
static   bool StateImplP$State$isIdle(
# 67 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x405c0750);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void Atm128SpiP$zeroTask$runTask(void);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void Atm128SpiP$ResourceArbiter$granted(
# 84 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x405ef0f8);
# 34 "/opt/tinyos-2.x/tos/interfaces/SpiByte.nc"
static   uint8_t Atm128SpiP$SpiByte$write(uint8_t arg_0x40558840);
# 92 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static   void Atm128SpiP$Spi$dataReady(uint8_t arg_0x40607bc8);
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t Atm128SpiP$Resource$release(
# 80 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x405f25b8);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void Atm128SpiP$Resource$default$granted(
# 80 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x405f25b8);
# 72 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static   void HplAtm128SpiP$SPI$sleep(void);
#line 96
static   void HplAtm128SpiP$SPI$enableInterrupt(bool arg_0x40606128);
#line 80
static   uint8_t HplAtm128SpiP$SPI$read(void);





static   void HplAtm128SpiP$SPI$write(uint8_t arg_0x406076b8);
#line 99
static   void HplAtm128SpiP$SPI$enableSpi(bool arg_0x406068f8);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$Init$init(void);
# 43 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static   bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty(void);
#line 60
static   resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue(void);
# 55 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$unconfigure(
# 56 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x406af600);
# 49 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$configure(
# 56 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x406af600);
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$release(
# 51 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x406b00f8);
# 80 "/opt/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
static   bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ArbiterInfo$inUse(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$runTask(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t LedsP$Init$init(void);
# 49 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static  void AFWA_AESP$Boot$booted(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void AFWA_AESP$inline_decryption$runTask(void);
#line 64
static  void AFWA_AESP$standAlone_decryption$runTask(void);
#line 64
static  void AFWA_AESP$txnonce$runTask(void);
#line 64
static  void AFWA_AESP$keyUpdate$runTask(void);
#line 64
static  void AFWA_AESP$rxnonce$runTask(void);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void AFWA_AESP$Resource$granted(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void AFWA_AESP$inline_encryption$runTask(void);
#line 64
static  void AFWA_AESP$standAlone_encryption$runTask(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t PlatformP$MoteInit$init(void);
#line 51
static  error_t PlatformP$MeasureClock$init(void);
# 42 "/opt/tinyos-2.x/tos/platforms/mica/PlatformP.nc"
static inline void PlatformP$power_init(void);






static inline  error_t PlatformP$Init$init(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t MotePlatformP$SubInit$init(void);
# 33 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void MotePlatformP$SerialIdPin$makeInput(void);
#line 30
static   void MotePlatformP$SerialIdPin$clr(void);
# 26 "/opt/tinyos-2.x/tos/platforms/micaz/MotePlatformP.nc"
static inline  error_t MotePlatformP$PlatformInit$init(void);
#line 38
static inline   error_t MotePlatformP$SubInit$default$init(void);
# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void);





static __inline   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput(void);
#line 46
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set(void);





static __inline   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput(void);
#line 46
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set(void);





static __inline   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput(void);
#line 47
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void);


static __inline   void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void);
#line 46
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$set(void);
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$clr(void);
# 33 "/opt/tinyos-2.x/tos/platforms/mica/MeasureClockC.nc"
enum MeasureClockC$__nesc_unnamed4305 {


  MeasureClockC$MAGIC = 488 / (16 / PLATFORM_MHZ)
};

uint16_t MeasureClockC$cycles;

static inline  error_t MeasureClockC$Init$init(void);
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
uint8_t arg_0x4034a748);
# 59 "/opt/tinyos-2.x/tos/interfaces/McuSleep.nc"
static   void SchedulerBasicP$McuSleep$sleep(void);
# 50 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP$__nesc_unnamed4306 {

  SchedulerBasicP$NUM_TASKS = 10U, 
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
# 58 "/opt/tinyos-2.x/tos/chips/atm128/McuSleepC.nc"
const_uint8_t McuSleepC$atm128PowerBits[ATM128_POWER_DOWN + 1] = { 
0, 
1 << 3, ((
1 << 2) | (1 << 4)) | (1 << 3), (
1 << 4) | (1 << 3), (
1 << 2) | (1 << 4), 
1 << 4 };

static inline mcu_power_t McuSleepC$getPowerState(void);
#line 97
static inline   void McuSleepC$McuSleep$sleep(void);
#line 109
static inline   void McuSleepC$McuPowerState$update(void);


static inline    mcu_power_t McuSleepC$McuPowerOverride$default$lowestState(void);
# 91 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static   void CC2420SpiP$Fifo$writeDone(
# 44 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40553328, 
# 91 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t *arg_0x4053fb00, uint8_t arg_0x4053fc88, error_t arg_0x4053fe10);
#line 71
static   void CC2420SpiP$Fifo$readDone(
# 44 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40553328, 
# 71 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t *arg_0x405419d8, uint8_t arg_0x40541b60, error_t arg_0x40541ce8);
# 24 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static   void CC2420SpiP$ChipSpiResource$releasing(void);
# 34 "/opt/tinyos-2.x/tos/interfaces/SpiByte.nc"
static   uint8_t CC2420SpiP$SpiByte$write(uint8_t arg_0x40558840);
# 56 "/opt/tinyos-2.x/tos/interfaces/State.nc"
static   void CC2420SpiP$WorkingState$toIdle(void);




static   bool CC2420SpiP$WorkingState$isIdle(void);
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t CC2420SpiP$SpiResource$release(void);
#line 92
static  void CC2420SpiP$Resource$granted(
# 43 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40554950);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t CC2420SpiP$grant$postTask(void);
# 86 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
enum CC2420SpiP$__nesc_unnamed4307 {
#line 86
  CC2420SpiP$grant = 0U
};
#line 86
typedef int CC2420SpiP$__nesc_sillytask_grant[CC2420SpiP$grant];
#line 61
enum CC2420SpiP$__nesc_unnamed4308 {
  CC2420SpiP$RESOURCE_COUNT = 1U, 
  CC2420SpiP$NO_HOLDER = 0xFF
};


enum CC2420SpiP$__nesc_unnamed4309 {
  CC2420SpiP$S_IDLE, 
  CC2420SpiP$S_BUSY
};


 uint16_t CC2420SpiP$m_addr;


uint8_t CC2420SpiP$m_requests = 0;


uint8_t CC2420SpiP$m_holder = CC2420SpiP$NO_HOLDER;


bool CC2420SpiP$release;


static inline error_t CC2420SpiP$attemptRelease(void);
#line 147
static   error_t CC2420SpiP$Resource$release(uint8_t id);
#line 182
static inline  void CC2420SpiP$SpiResource$granted(void);
#line 233
static   cc2420_status_t CC2420SpiP$Ram$read(uint16_t addr, uint8_t offset, 
uint8_t *data, 
uint8_t len);
#line 258
static   cc2420_status_t CC2420SpiP$Ram$write(uint16_t addr, uint8_t offset, 
uint8_t *data, 
uint8_t len);
#line 301
static   cc2420_status_t CC2420SpiP$Reg$write(uint8_t addr, uint16_t data);
#line 314
static   cc2420_status_t CC2420SpiP$Strobe$strobe(uint8_t addr);










static   void CC2420SpiP$SpiPacket$sendDone(uint8_t *tx_buf, uint8_t *rx_buf, 
uint16_t len, error_t error);








static inline error_t CC2420SpiP$attemptRelease(void);
#line 354
static inline  void CC2420SpiP$grant$runTask(void);








static inline   void CC2420SpiP$Resource$default$granted(uint8_t id);


static inline    void CC2420SpiP$Fifo$default$readDone(uint8_t addr, uint8_t *rx_buf, uint8_t rx_len, error_t error);


static inline    void CC2420SpiP$Fifo$default$writeDone(uint8_t addr, uint8_t *tx_buf, uint8_t tx_len, error_t error);


static inline    void CC2420SpiP$ChipSpiResource$default$releasing(void);
# 74 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t StateImplP$state[1U];

enum StateImplP$__nesc_unnamed4310 {
  StateImplP$S_IDLE = 0
};


static inline  error_t StateImplP$Init$init(void);
#line 118
static inline   void StateImplP$State$toIdle(uint8_t id);







static inline   bool StateImplP$State$isIdle(uint8_t id);






static inline   bool StateImplP$State$isState(uint8_t id, uint8_t myState);
# 71 "/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static   void Atm128SpiP$SpiPacket$sendDone(uint8_t *arg_0x4056e030, uint8_t *arg_0x4056e1d8, uint16_t arg_0x4056e368, 
error_t arg_0x4056e500);
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t Atm128SpiP$ResourceArbiter$release(
# 84 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x405ef0f8);
# 72 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static   void Atm128SpiP$Spi$sleep(void);
#line 96
static   void Atm128SpiP$Spi$enableInterrupt(bool arg_0x40606128);
#line 80
static   uint8_t Atm128SpiP$Spi$read(void);





static   void Atm128SpiP$Spi$write(uint8_t arg_0x406076b8);
#line 99
static   void Atm128SpiP$Spi$enableSpi(bool arg_0x406068f8);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void Atm128SpiP$Resource$granted(
# 80 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x405f25b8);
# 44 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static   void Atm128SpiP$McuPowerState$update(void);
# 80 "/opt/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
static   bool Atm128SpiP$ArbiterInfo$inUse(void);
# 207 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
enum Atm128SpiP$__nesc_unnamed4311 {
#line 207
  Atm128SpiP$zeroTask = 1U
};
#line 207
typedef int Atm128SpiP$__nesc_sillytask_zeroTask[Atm128SpiP$zeroTask];
#line 90
uint8_t *Atm128SpiP$txBuffer;
uint8_t *Atm128SpiP$rxBuffer;
uint16_t Atm128SpiP$len;
uint16_t Atm128SpiP$pos;

enum Atm128SpiP$__nesc_unnamed4312 {
  Atm128SpiP$SPI_IDLE, 
  Atm128SpiP$SPI_BUSY, 
  Atm128SpiP$SPI_ATOMIC_SIZE = 10
};




bool Atm128SpiP$started;
#line 120
static inline void Atm128SpiP$stopSpi(void);








static   uint8_t Atm128SpiP$SpiByte$write(uint8_t tx);
#line 164
static inline error_t Atm128SpiP$sendNextPart(void);
#line 207
static inline  void Atm128SpiP$zeroTask$runTask(void);
#line 264
static inline   void Atm128SpiP$Spi$dataReady(uint8_t data);
#line 321
static inline   error_t Atm128SpiP$Resource$release(uint8_t id);
#line 335
static inline  void Atm128SpiP$ResourceArbiter$granted(uint8_t id);



static inline   void Atm128SpiP$Resource$default$granted(uint8_t id);
# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void HplAtm128SpiP$SS$set(void);
# 44 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static   void HplAtm128SpiP$Mcu$update(void);
# 92 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static   void HplAtm128SpiP$SPI$dataReady(uint8_t arg_0x40607bc8);
# 95 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline   void HplAtm128SpiP$SPI$sleep(void);



static inline   uint8_t HplAtm128SpiP$SPI$read(void);
static inline   void HplAtm128SpiP$SPI$write(uint8_t d);


void __vector_17(void) __attribute((signal))   ;
#line 116
static   void HplAtm128SpiP$SPI$enableInterrupt(bool enabled);
#line 131
static   void HplAtm128SpiP$SPI$enableSpi(bool enabled);
# 39 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
enum /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$__nesc_unnamed4313 {
#line 39
  FcfsResourceQueueC$0$NO_ENTRY = 0xFF
};
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ[1U];
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qTail = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;

static inline  error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$Init$init(void);




static inline   bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty(void);







static inline   resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue(void);
# 55 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$unconfigure(
# 56 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x406af600);
# 49 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$configure(
# 56 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x406af600);
# 43 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static   bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$isEmpty(void);
#line 60
static   resource_client_id_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$dequeue(void);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$granted(
# 51 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x406b00f8);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$postTask(void);
# 69 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$__nesc_unnamed4314 {
#line 69
  SimpleArbiterP$0$grantedTask = 2U
};
#line 69
typedef int /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$__nesc_sillytask_grantedTask[/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask];
#line 62
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$__nesc_unnamed4315 {
#line 62
  SimpleArbiterP$0$RES_IDLE = 0, SimpleArbiterP$0$RES_GRANTING = 1, SimpleArbiterP$0$RES_BUSY = 2
};
#line 63
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$__nesc_unnamed4316 {
#line 63
  SimpleArbiterP$0$NO_RES = 0xFF
};
uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_IDLE;
 uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$NO_RES;
 uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$reqResId;
#line 97
static inline   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$release(uint8_t id);
#line 123
static inline   bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ArbiterInfo$inUse(void);
#line 150
static inline  void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$runTask(void);
#line 166
static inline    void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$configure(uint8_t id);

static inline    void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$unconfigure(uint8_t id);
# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void LedsP$Led0$makeOutput(void);
#line 29
static   void LedsP$Led0$set(void);





static   void LedsP$Led1$makeOutput(void);
#line 29
static   void LedsP$Led1$set(void);





static   void LedsP$Led2$makeOutput(void);
#line 29
static   void LedsP$Led2$set(void);
# 45 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline  error_t LedsP$Init$init(void);
# 52 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static   cc2420_status_t AFWA_AESP$CC2420_RAM_TXFIFO$read(uint8_t arg_0x403aac10, uint8_t *arg_0x403aadb8, uint8_t arg_0x403a9010);










static   cc2420_status_t AFWA_AESP$CC2420_RAM_TXFIFO$write(uint8_t arg_0x403a95f0, uint8_t *arg_0x403a9798, uint8_t arg_0x403a9920);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t AFWA_AESP$inline_decryption$postTask(void);
# 52 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static   cc2420_status_t AFWA_AESP$CC2420_RAM_RXFIFO$read(uint8_t arg_0x403aac10, uint8_t *arg_0x403aadb8, uint8_t arg_0x403a9010);










static   cc2420_status_t AFWA_AESP$CC2420_RAM_RXFIFO$write(uint8_t arg_0x403a95f0, uint8_t *arg_0x403a9798, uint8_t arg_0x403a9920);
# 55 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static   cc2420_status_t AFWA_AESP$CC2420_SECCTRL0$write(uint16_t arg_0x403b8010);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t AFWA_AESP$standAlone_decryption$postTask(void);
# 63 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static   cc2420_status_t AFWA_AESP$CC2420_RAM_KEY1$write(uint8_t arg_0x403a95f0, uint8_t *arg_0x403a9798, uint8_t arg_0x403a9920);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t AFWA_AESP$txnonce$postTask(void);
# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void AFWA_AESP$CSN$set(void);
static   void AFWA_AESP$CSN$clr(void);
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static   cc2420_status_t AFWA_AESP$CC2420_STXON$strobe(void);
#line 45
static   cc2420_status_t AFWA_AESP$CC2420_SNOP$strobe(void);
# 55 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static   cc2420_status_t AFWA_AESP$CC2420_SECCTRL1$write(uint16_t arg_0x403b8010);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t AFWA_AESP$keyUpdate$postTask(void);
#line 56
static   error_t AFWA_AESP$rxnonce$postTask(void);
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t AFWA_AESP$Resource$release(void);
# 52 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static   cc2420_status_t AFWA_AESP$CC2420_RAM_SABUF$read(uint8_t arg_0x403aac10, uint8_t *arg_0x403aadb8, uint8_t arg_0x403a9010);










static   cc2420_status_t AFWA_AESP$CC2420_RAM_SABUF$write(uint8_t arg_0x403a95f0, uint8_t *arg_0x403a9798, uint8_t arg_0x403a9920);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t AFWA_AESP$inline_encryption$postTask(void);
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static   cc2420_status_t AFWA_AESP$CC2420_SAES$strobe(void);
# 63 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static   cc2420_status_t AFWA_AESP$CC2420_RAM_TXNONCE$write(uint8_t arg_0x403a95f0, uint8_t *arg_0x403a9798, uint8_t arg_0x403a9920);
#line 63
static   cc2420_status_t AFWA_AESP$CC2420_RAM_RXNONCE$write(uint8_t arg_0x403a95f0, uint8_t *arg_0x403a9798, uint8_t arg_0x403a9920);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t AFWA_AESP$standAlone_encryption$postTask(void);
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static   cc2420_status_t AFWA_AESP$CC2420_SRXDEC$strobe(void);
# 63 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static   cc2420_status_t AFWA_AESP$CC2420_RAM_KEY0$write(uint8_t arg_0x403a95f0, uint8_t *arg_0x403a9798, uint8_t arg_0x403a9920);
# 92 "AFWA_AESP.nc"
enum AFWA_AESP$__nesc_unnamed4317 {
#line 92
  AFWA_AESP$standAlone_encryption = 3U
};
#line 92
typedef int AFWA_AESP$__nesc_sillytask_standAlone_encryption[AFWA_AESP$standAlone_encryption];
enum AFWA_AESP$__nesc_unnamed4318 {
#line 93
  AFWA_AESP$standAlone_decryption = 4U
};
#line 93
typedef int AFWA_AESP$__nesc_sillytask_standAlone_decryption[AFWA_AESP$standAlone_decryption];
enum AFWA_AESP$__nesc_unnamed4319 {
#line 94
  AFWA_AESP$inline_encryption = 5U
};
#line 94
typedef int AFWA_AESP$__nesc_sillytask_inline_encryption[AFWA_AESP$inline_encryption];
enum AFWA_AESP$__nesc_unnamed4320 {
#line 95
  AFWA_AESP$inline_decryption = 6U
};
#line 95
typedef int AFWA_AESP$__nesc_sillytask_inline_decryption[AFWA_AESP$inline_decryption];
enum AFWA_AESP$__nesc_unnamed4321 {
#line 96
  AFWA_AESP$keyUpdate = 7U
};
#line 96
typedef int AFWA_AESP$__nesc_sillytask_keyUpdate[AFWA_AESP$keyUpdate];
enum AFWA_AESP$__nesc_unnamed4322 {
#line 97
  AFWA_AESP$txnonce = 8U
};
#line 97
typedef int AFWA_AESP$__nesc_sillytask_txnonce[AFWA_AESP$txnonce];
enum AFWA_AESP$__nesc_unnamed4323 {
#line 98
  AFWA_AESP$rxnonce = 9U
};
#line 98
typedef int AFWA_AESP$__nesc_sillytask_rxnonce[AFWA_AESP$rxnonce];
#line 72
uint8_t *AFWA_AESP$plainText;
uint8_t *AFWA_AESP$cipherText;
uint8_t *AFWA_AESP$localKey;
uint8_t AFWA_AESP$tmp;
#line 75
uint8_t AFWA_AESP$i;

uint16_t AFWA_AESP$tx_ctrl0;
#line 77
uint16_t AFWA_AESP$tx_ctrl1;
uint16_t AFWA_AESP$rx_ctrl0;
#line 78
uint16_t AFWA_AESP$rx_ctrl1;
uint16_t AFWA_AESP$setMode0;
#line 79
uint16_t AFWA_AESP$setMode1;

uint32_t AFWA_AESP$j = 0x0001;
uint32_t AFWA_AESP$k = 0x0001;

enum mode AFWA_AESP$op;
enum modeSet AFWA_AESP$setKey;


static inline void AFWA_AESP$freeSpiResource(void);
static inline void AFWA_AESP$check(void);
static inline void AFWA_AESP$setmode(void);









static inline  void AFWA_AESP$Boot$booted(void);
#line 190
static inline  void AFWA_AESP$Resource$granted(void);




static inline void AFWA_AESP$check(void);
#line 220
static inline void AFWA_AESP$freeSpiResource(void);




static inline  void AFWA_AESP$standAlone_encryption$runTask(void);
#line 241
static inline  void AFWA_AESP$standAlone_decryption$runTask(void);
#line 258
static inline  void AFWA_AESP$keyUpdate$runTask(void);
#line 274
static inline  void AFWA_AESP$inline_encryption$runTask(void);
#line 293
static inline  void AFWA_AESP$inline_decryption$runTask(void);
#line 309
static inline void AFWA_AESP$setmode(void);
#line 325
static inline  void AFWA_AESP$txnonce$runTask(void);
#line 338
static inline  void AFWA_AESP$rxnonce$runTask(void);
# 86 "/opt/tinyos-2.x/tos/chips/atm128/atm128hardware.h"
static __inline void __nesc_disable_interrupt(void)
#line 86
{
   __asm volatile ("cli");}

#line 103
 
#line 102
__inline __nesc_atomic_t 
__nesc_atomic_start(void )
{
  __nesc_atomic_t result = * (volatile uint8_t *)(0x3F + 0x20);

#line 106
  __nesc_disable_interrupt();
   __asm volatile ("" :  :  : "memory");
  return result;
}



 
#line 112
__inline void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)
{
   __asm volatile ("" :  :  : "memory");
  * (volatile uint8_t *)(0x3F + 0x20) = original_SREG;
}

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
# 42 "/opt/tinyos-2.x/tos/platforms/mica/PlatformP.nc"
static inline void PlatformP$power_init(void)
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    * (volatile uint8_t *)(0x35 + 0x20) = 1 << 5;
  }
}

# 49 "/opt/tinyos-2.x/tos/types/TinyError.h"
static inline error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 38 "/opt/tinyos-2.x/tos/platforms/micaz/MotePlatformP.nc"
static inline   error_t MotePlatformP$SubInit$default$init(void)
#line 38
{
  return SUCCESS;
}

# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static  error_t MotePlatformP$SubInit$init(void){
#line 51
  unsigned char result;
#line 51

#line 51
  result = MotePlatformP$SubInit$default$init();
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 47 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void)
#line 47
{
#line 47
  * (volatile uint8_t *)59U &= ~(1 << 4);
}

# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void MotePlatformP$SerialIdPin$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr();
#line 30
}
#line 30
# 50 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void)
#line 50
{
#line 50
  * (volatile uint8_t *)58U &= ~(1 << 4);
}

# 33 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void MotePlatformP$SerialIdPin$makeInput(void){
#line 33
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput();
#line 33
}
#line 33
# 26 "/opt/tinyos-2.x/tos/platforms/micaz/MotePlatformP.nc"
static inline  error_t MotePlatformP$PlatformInit$init(void)
#line 26
{

  * (volatile uint8_t *)(0x15 + 0x20) = 0;
  * (volatile uint8_t *)(0x14 + 0x20) = 0xff;


  MotePlatformP$SerialIdPin$makeInput();
  MotePlatformP$SerialIdPin$clr();

  return MotePlatformP$SubInit$init();
}

# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void)
#line 46
{
#line 46
  * (volatile uint8_t *)59U |= 1 << 0;
}

# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led2$set(void){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set();
#line 29
}
#line 29
# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set(void)
#line 46
{
#line 46
  * (volatile uint8_t *)59U |= 1 << 1;
}

# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led1$set(void){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set();
#line 29
}
#line 29
# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set(void)
#line 46
{
#line 46
  * (volatile uint8_t *)59U |= 1 << 2;
}

# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led0$set(void){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set();
#line 29
}
#line 29
# 52 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)58U |= 1 << 0;
}

# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led2$makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput();
#line 35
}
#line 35
# 52 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)58U |= 1 << 1;
}

# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led1$makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput();
#line 35
}
#line 35
# 52 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)58U |= 1 << 2;
}

# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led0$makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput();
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
inline static  error_t PlatformP$MoteInit$init(void){
#line 51
  unsigned char result;
#line 51

#line 51
  result = LedsP$Init$init();
#line 51
  result = ecombine(result, MotePlatformP$PlatformInit$init());
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 41 "/opt/tinyos-2.x/tos/platforms/mica/MeasureClockC.nc"
static inline  error_t MeasureClockC$Init$init(void)
#line 41
{
  /* atomic removed: atomic calls only */



  {
    uint8_t now;
#line 47
    uint8_t wraps;
    uint16_t start;


    * (volatile uint8_t *)(0x2E + 0x20) = 1 << 0;
    * (volatile uint8_t *)(0x30 + 0x20) = 1 << 3;
    * (volatile uint8_t *)(0x33 + 0x20) = (1 << 1) | (1 << 0);




    start = * (volatile uint16_t *)(0x2C + 0x20);
    for (wraps = MeasureClockC$MAGIC / 2; wraps; ) 
      {
        uint16_t next = * (volatile uint16_t *)(0x2C + 0x20);

        if (next < start) {
          wraps--;
          }
#line 65
        start = next;
      }


    now = * (volatile uint8_t *)(0x32 + 0x20);
    while (* (volatile uint8_t *)(0x32 + 0x20) == now) ;


    start = * (volatile uint16_t *)(0x2C + 0x20);
    now = * (volatile uint8_t *)(0x32 + 0x20);
    while (* (volatile uint8_t *)(0x32 + 0x20) == now) ;
    MeasureClockC$cycles = * (volatile uint16_t *)(0x2C + 0x20);

    MeasureClockC$cycles = (MeasureClockC$cycles - start + 16) >> 5;


    * (volatile uint8_t *)(0x30 + 0x20) = * (volatile uint8_t *)(0x2E + 0x20) = * (volatile uint8_t *)(0x33 + 0x20) = 0;
    * (volatile uint8_t *)(0x32 + 0x20) = 0;
    * (volatile uint16_t *)(0x2C + 0x20) = 0;
    * (volatile uint8_t *)0x7C = * (volatile uint8_t *)(0x36 + 0x20) = 0xff;
    while (* (volatile uint8_t *)(0x30 + 0x20) & (((1 << 2) | (1 << 1)) | (1 << 0))) 
      ;
  }
  return SUCCESS;
}

# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static  error_t PlatformP$MeasureClock$init(void){
#line 51
  unsigned char result;
#line 51

#line 51
  result = MeasureClockC$Init$init();
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 49 "/opt/tinyos-2.x/tos/platforms/mica/PlatformP.nc"
static inline  error_t PlatformP$Init$init(void)
{
  error_t ok;


  ok = PlatformP$MeasureClock$init();
  ok = ecombine(ok, PlatformP$MoteInit$init());

  if (ok != SUCCESS) {
    return ok;
    }
  PlatformP$power_init();

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
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t AFWA_AESP$Resource$release(void){
#line 110
  unsigned char result;
#line 110

#line 110
  result = CC2420SpiP$Resource$release(/*AFWA_AESC.SpiC*/CC2420SpiC$0$CLIENT_ID);
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 220 "AFWA_AESP.nc"
static inline void AFWA_AESP$freeSpiResource(void)
#line 220
{
  AFWA_AESP$Resource$release();
  AFWA_AESP$op = DONE;
}

# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$set(void)
#line 46
{
#line 46
  * (volatile uint8_t *)56U |= 1 << 0;
}

# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void AFWA_AESP$CSN$set(void){
#line 29
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$set();
#line 29
}
#line 29
# 63 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
inline static   cc2420_status_t AFWA_AESP$CC2420_RAM_RXNONCE$write(uint8_t arg_0x403a95f0, uint8_t *arg_0x403a9798, uint8_t arg_0x403a9920){
#line 63
  unsigned char result;
#line 63

#line 63
  result = CC2420SpiP$Ram$write(CC2420_RAM_RXNONCE, arg_0x403a95f0, arg_0x403a9798, arg_0x403a9920);
#line 63

#line 63
  return result;
#line 63
}
#line 63
# 47 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$clr(void)
#line 47
{
#line 47
  * (volatile uint8_t *)56U &= ~(1 << 0);
}

# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void AFWA_AESP$CSN$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$clr();
#line 30
}
#line 30
# 338 "AFWA_AESP.nc"
static inline  void AFWA_AESP$rxnonce$runTask(void)
#line 338
{

  uint16_t bc = 0x0001;

  AFWA_AESP$CSN$clr();
  AFWA_AESP$CC2420_RAM_RXNONCE$write(CC2420_NONCE_BLOCK_COUNTER, bc, 16);
  AFWA_AESP$CC2420_RAM_RXNONCE$write(CC2420_NONCE_FRAME_COUNTER, AFWA_AESP$k, 32);
  AFWA_AESP$k++;
  AFWA_AESP$CSN$set();
  AFWA_AESP$freeSpiResource();
}

# 34 "/opt/tinyos-2.x/tos/interfaces/SpiByte.nc"
inline static   uint8_t CC2420SpiP$SpiByte$write(uint8_t arg_0x40558840){
#line 34
  unsigned char result;
#line 34

#line 34
  result = Atm128SpiP$SpiByte$write(arg_0x40558840);
#line 34

#line 34
  return result;
#line 34
}
#line 34
# 109 "/opt/tinyos-2.x/tos/chips/atm128/McuSleepC.nc"
static inline   void McuSleepC$McuPowerState$update(void)
#line 109
{
}

# 44 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
inline static   void HplAtm128SpiP$Mcu$update(void){
#line 44
  McuSleepC$McuPowerState$update();
#line 44
}
#line 44
# 118 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
static inline   void StateImplP$State$toIdle(uint8_t id)
#line 118
{
  /* atomic removed: atomic calls only */
#line 119
  StateImplP$state[id] = StateImplP$S_IDLE;
}

# 56 "/opt/tinyos-2.x/tos/interfaces/State.nc"
inline static   void CC2420SpiP$WorkingState$toIdle(void){
#line 56
  StateImplP$State$toIdle(0U);
#line 56
}
#line 56
# 44 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
inline static   void Atm128SpiP$McuPowerState$update(void){
#line 44
  McuSleepC$McuPowerState$update();
#line 44
}
#line 44
# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplAtm128SpiP$SS$set(void){
#line 29
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$set();
#line 29
}
#line 29
# 95 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline   void HplAtm128SpiP$SPI$sleep(void)
#line 95
{
  HplAtm128SpiP$SS$set();
}

# 72 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static   void Atm128SpiP$Spi$sleep(void){
#line 72
  HplAtm128SpiP$SPI$sleep();
#line 72
}
#line 72
#line 99
inline static   void Atm128SpiP$Spi$enableSpi(bool arg_0x406068f8){
#line 99
  HplAtm128SpiP$SPI$enableSpi(arg_0x406068f8);
#line 99
}
#line 99
# 120 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP$stopSpi(void)
#line 120
{
  Atm128SpiP$Spi$enableSpi(FALSE);
  Atm128SpiP$started = FALSE;
  /* atomic removed: atomic calls only */
#line 123
  {
    Atm128SpiP$Spi$sleep();
  }
  Atm128SpiP$McuPowerState$update();
}

# 123 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline   bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ArbiterInfo$inUse(void)
#line 123
{
  /* atomic removed: atomic calls only */
#line 124
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_IDLE) 
      {
        unsigned char __nesc_temp = 
#line 126
        FALSE;

#line 126
        return __nesc_temp;
      }
  }
#line 128
  return TRUE;
}

# 80 "/opt/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
inline static   bool Atm128SpiP$ArbiterInfo$inUse(void){
#line 80
  unsigned char result;
#line 80

#line 80
  result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ArbiterInfo$inUse();
#line 80

#line 80
  return result;
#line 80
}
#line 80
# 168 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline    void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$unconfigure(uint8_t id)
#line 168
{
}

# 55 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$unconfigure(uint8_t arg_0x406af600){
#line 55
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$unconfigure(arg_0x406af600);
#line 55
}
#line 55
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 58 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline   resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue(void)
#line 58
{
  /* atomic removed: atomic calls only */
#line 59
  {
    if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead != /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY) {
        uint8_t id = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead;

#line 62
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ[/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead];
        if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY) {
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qTail = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;
          }
#line 65
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ[id] = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;
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
      /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;

#line 68
      return __nesc_temp;
    }
  }
}

# 60 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static   resource_client_id_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$dequeue(void){
#line 60
  unsigned char result;
#line 60

#line 60
  result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue();
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 50 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline   bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty(void)
#line 50
{
  return /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;
}

# 43 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static   bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$isEmpty(void){
#line 43
  unsigned char result;
#line 43

#line 43
  result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty();
#line 43

#line 43
  return result;
#line 43
}
#line 43
# 97 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$release(uint8_t id)
#line 97
{
  bool released = FALSE;

  /* atomic removed: atomic calls only */
#line 99
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_BUSY && /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId == id) {
        if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$isEmpty() == FALSE) {
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$reqResId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$dequeue();
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_GRANTING;
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$postTask();
          }
        else {
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$NO_RES;
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_IDLE;
          }
        released = TRUE;
      }
  }
  if (released == TRUE) {
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$unconfigure(id);
      return SUCCESS;
    }
  return FAIL;
}

# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t Atm128SpiP$ResourceArbiter$release(uint8_t arg_0x405ef0f8){
#line 110
  unsigned char result;
#line 110

#line 110
  result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$release(arg_0x405ef0f8);
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 321 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline   error_t Atm128SpiP$Resource$release(uint8_t id)
#line 321
{
  error_t error = Atm128SpiP$ResourceArbiter$release(id);

  /* atomic removed: atomic calls only */
#line 323
  {
    if (!Atm128SpiP$ArbiterInfo$inUse()) {
        Atm128SpiP$stopSpi();
      }
  }
  return error;
}

# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t CC2420SpiP$SpiResource$release(void){
#line 110
  unsigned char result;
#line 110

#line 110
  result = Atm128SpiP$Resource$release(0U);
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 372 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline    void CC2420SpiP$ChipSpiResource$default$releasing(void)
#line 372
{
}

# 24 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static   void CC2420SpiP$ChipSpiResource$releasing(void){
#line 24
  CC2420SpiP$ChipSpiResource$default$releasing();
#line 24
}
#line 24
# 133 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
static inline   bool StateImplP$State$isState(uint8_t id, uint8_t myState)
#line 133
{
  bool isState;

  /* atomic removed: atomic calls only */
#line 135
  isState = StateImplP$state[id] == myState;
  return isState;
}

#line 126
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
# 335 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline error_t CC2420SpiP$attemptRelease(void)
#line 335
{


  if ((
#line 336
  CC2420SpiP$m_requests > 0
   || CC2420SpiP$m_holder != CC2420SpiP$NO_HOLDER)
   || !CC2420SpiP$WorkingState$isIdle()) {
      return FAIL;
    }
  /* atomic removed: atomic calls only */
  CC2420SpiP$release = TRUE;
  CC2420SpiP$ChipSpiResource$releasing();
  /* atomic removed: atomic calls only */
#line 344
  {
    if (CC2420SpiP$release) {
        CC2420SpiP$SpiResource$release();
        {
          unsigned char __nesc_temp = 
#line 347
          SUCCESS;

#line 347
          return __nesc_temp;
        }
      }
  }
  return EBUSY;
}

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

# 63 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
inline static   cc2420_status_t AFWA_AESP$CC2420_RAM_TXNONCE$write(uint8_t arg_0x403a95f0, uint8_t *arg_0x403a9798, uint8_t arg_0x403a9920){
#line 63
  unsigned char result;
#line 63

#line 63
  result = CC2420SpiP$Ram$write(CC2420_RAM_TXNONCE, arg_0x403a95f0, arg_0x403a9798, arg_0x403a9920);
#line 63

#line 63
  return result;
#line 63
}
#line 63
# 325 "AFWA_AESP.nc"
static inline  void AFWA_AESP$txnonce$runTask(void)
#line 325
{

  uint16_t bc = 0x0001;

  AFWA_AESP$CSN$clr();
  AFWA_AESP$CC2420_RAM_TXNONCE$write(CC2420_NONCE_BLOCK_COUNTER, bc, 16);
  AFWA_AESP$CC2420_RAM_TXNONCE$write(CC2420_NONCE_FRAME_COUNTER, AFWA_AESP$j, 32);
  AFWA_AESP$j++;
  AFWA_AESP$CSN$set();
  AFWA_AESP$freeSpiResource();
}

# 63 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
inline static   cc2420_status_t AFWA_AESP$CC2420_RAM_KEY1$write(uint8_t arg_0x403a95f0, uint8_t *arg_0x403a9798, uint8_t arg_0x403a9920){
#line 63
  unsigned char result;
#line 63

#line 63
  result = CC2420SpiP$Ram$write(CC2420_RAM_KEY1, arg_0x403a95f0, arg_0x403a9798, arg_0x403a9920);
#line 63

#line 63
  return result;
#line 63
}
#line 63
inline static   cc2420_status_t AFWA_AESP$CC2420_RAM_KEY0$write(uint8_t arg_0x403a95f0, uint8_t *arg_0x403a9798, uint8_t arg_0x403a9920){
#line 63
  unsigned char result;
#line 63

#line 63
  result = CC2420SpiP$Ram$write(CC2420_RAM_KEY0, arg_0x403a95f0, arg_0x403a9798, arg_0x403a9920);
#line 63

#line 63
  return result;
#line 63
}
#line 63
# 258 "AFWA_AESP.nc"
static inline  void AFWA_AESP$keyUpdate$runTask(void)
#line 258
{

  AFWA_AESP$CSN$clr();



  if (AFWA_AESP$setKey == KEY0) {
    AFWA_AESP$CC2420_RAM_KEY0$write(0, AFWA_AESP$localKey, 16);
    }
  else {
#line 267
    if (AFWA_AESP$setKey == KEY1) {
      AFWA_AESP$CC2420_RAM_KEY1$write(0, AFWA_AESP$localKey, 16);
      }
    }
#line 270
  AFWA_AESP$CSN$set();
  AFWA_AESP$freeSpiResource();
}

# 52 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
inline static   cc2420_status_t AFWA_AESP$CC2420_RAM_RXFIFO$read(uint8_t arg_0x403aac10, uint8_t *arg_0x403aadb8, uint8_t arg_0x403a9010){
#line 52
  unsigned char result;
#line 52

#line 52
  result = CC2420SpiP$Ram$read(CC2420_RAM_RXFIFO, arg_0x403aac10, arg_0x403aadb8, arg_0x403a9010);
#line 52

#line 52
  return result;
#line 52
}
#line 52
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static   cc2420_status_t AFWA_AESP$CC2420_SNOP$strobe(void){
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
inline static   cc2420_status_t AFWA_AESP$CC2420_SRXDEC$strobe(void){
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
# 63 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
inline static   cc2420_status_t AFWA_AESP$CC2420_RAM_RXFIFO$write(uint8_t arg_0x403a95f0, uint8_t *arg_0x403a9798, uint8_t arg_0x403a9920){
#line 63
  unsigned char result;
#line 63

#line 63
  result = CC2420SpiP$Ram$write(CC2420_RAM_RXFIFO, arg_0x403a95f0, arg_0x403a9798, arg_0x403a9920);
#line 63

#line 63
  return result;
#line 63
}
#line 63
# 293 "AFWA_AESP.nc"
static inline  void AFWA_AESP$inline_decryption$runTask(void)
#line 293
{

  AFWA_AESP$CSN$clr();
  AFWA_AESP$CC2420_RAM_RXFIFO$write(0, AFWA_AESP$cipherText, 16);
  AFWA_AESP$CSN$set();

  AFWA_AESP$CSN$clr();
  AFWA_AESP$CC2420_SRXDEC$strobe();

  while (AFWA_AESP$CC2420_SNOP$strobe() & CC2420_STATUS_ENC_BUSY) ;

  AFWA_AESP$CC2420_RAM_RXFIFO$read(0, AFWA_AESP$cipherText, 16);
  AFWA_AESP$CSN$set();
  AFWA_AESP$freeSpiResource();
}

# 52 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
inline static   cc2420_status_t AFWA_AESP$CC2420_RAM_TXFIFO$read(uint8_t arg_0x403aac10, uint8_t *arg_0x403aadb8, uint8_t arg_0x403a9010){
#line 52
  unsigned char result;
#line 52

#line 52
  result = CC2420SpiP$Ram$read(CC2420_RAM_TXFIFO, arg_0x403aac10, arg_0x403aadb8, arg_0x403a9010);
#line 52

#line 52
  return result;
#line 52
}
#line 52
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static   cc2420_status_t AFWA_AESP$CC2420_STXON$strobe(void){
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
# 63 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
inline static   cc2420_status_t AFWA_AESP$CC2420_RAM_TXFIFO$write(uint8_t arg_0x403a95f0, uint8_t *arg_0x403a9798, uint8_t arg_0x403a9920){
#line 63
  unsigned char result;
#line 63

#line 63
  result = CC2420SpiP$Ram$write(CC2420_RAM_TXFIFO, arg_0x403a95f0, arg_0x403a9798, arg_0x403a9920);
#line 63

#line 63
  return result;
#line 63
}
#line 63
# 274 "AFWA_AESP.nc"
static inline  void AFWA_AESP$inline_encryption$runTask(void)
#line 274
{

  AFWA_AESP$CSN$clr();
  AFWA_AESP$CC2420_RAM_TXFIFO$write(0, AFWA_AESP$plainText, 16);
  AFWA_AESP$CSN$set();

  AFWA_AESP$CSN$clr();
  AFWA_AESP$CC2420_STXON$strobe();




  while (AFWA_AESP$CC2420_SNOP$strobe() & CC2420_STATUS_ENC_BUSY) ;

  AFWA_AESP$CC2420_RAM_TXFIFO$read(0, AFWA_AESP$plainText, 16);
  AFWA_AESP$CSN$set();
  AFWA_AESP$freeSpiResource();
}

# 52 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
inline static   cc2420_status_t AFWA_AESP$CC2420_RAM_SABUF$read(uint8_t arg_0x403aac10, uint8_t *arg_0x403aadb8, uint8_t arg_0x403a9010){
#line 52
  unsigned char result;
#line 52

#line 52
  result = CC2420SpiP$Ram$read(CC2420_RAM_SABUF, arg_0x403aac10, arg_0x403aadb8, arg_0x403a9010);
#line 52

#line 52
  return result;
#line 52
}
#line 52
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static   cc2420_status_t AFWA_AESP$CC2420_SAES$strobe(void){
#line 45
  unsigned char result;
#line 45

#line 45
  result = CC2420SpiP$Strobe$strobe(CC2420_SAES);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 63 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
inline static   cc2420_status_t AFWA_AESP$CC2420_RAM_SABUF$write(uint8_t arg_0x403a95f0, uint8_t *arg_0x403a9798, uint8_t arg_0x403a9920){
#line 63
  unsigned char result;
#line 63

#line 63
  result = CC2420SpiP$Ram$write(CC2420_RAM_SABUF, arg_0x403a95f0, arg_0x403a9798, arg_0x403a9920);
#line 63

#line 63
  return result;
#line 63
}
#line 63
# 241 "AFWA_AESP.nc"
static inline  void AFWA_AESP$standAlone_decryption$runTask(void)
#line 241
{

  AFWA_AESP$CSN$clr();
  AFWA_AESP$CC2420_RAM_SABUF$write(0, AFWA_AESP$cipherText, 16);
  AFWA_AESP$CSN$set();

  AFWA_AESP$CSN$clr();
  AFWA_AESP$CC2420_SAES$strobe();

  while (AFWA_AESP$CC2420_SNOP$strobe() & CC2420_STATUS_ENC_BUSY) ;

  AFWA_AESP$CC2420_RAM_SABUF$read(0, AFWA_AESP$cipherText, 16);
  AFWA_AESP$CSN$set();
  AFWA_AESP$freeSpiResource();
}

#line 225
static inline  void AFWA_AESP$standAlone_encryption$runTask(void)
#line 225
{

  AFWA_AESP$CSN$clr();
  AFWA_AESP$CC2420_RAM_SABUF$write(0, AFWA_AESP$plainText, 16);
  AFWA_AESP$CSN$set();

  AFWA_AESP$CSN$clr();
  AFWA_AESP$CC2420_SAES$strobe();

  while (AFWA_AESP$CC2420_SNOP$strobe() & CC2420_STATUS_ENC_BUSY) ;

  AFWA_AESP$CC2420_RAM_SABUF$read(0, AFWA_AESP$plainText, 16);
  AFWA_AESP$CSN$set();
  AFWA_AESP$freeSpiResource();
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

# 339 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline   void Atm128SpiP$Resource$default$granted(uint8_t id)
#line 339
{
}

# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static  void Atm128SpiP$Resource$granted(uint8_t arg_0x405f25b8){
#line 92
  switch (arg_0x405f25b8) {
#line 92
    case 0U:
#line 92
      CC2420SpiP$SpiResource$granted();
#line 92
      break;
#line 92
    default:
#line 92
      Atm128SpiP$Resource$default$granted(arg_0x405f25b8);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 335 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline  void Atm128SpiP$ResourceArbiter$granted(uint8_t id)
#line 335
{
  Atm128SpiP$Resource$granted(id);
}

# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static  void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$granted(uint8_t arg_0x406b00f8){
#line 92
  Atm128SpiP$ResourceArbiter$granted(arg_0x406b00f8);
#line 92
}
#line 92
# 166 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline    void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$configure(uint8_t id)
#line 166
{
}

# 49 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$configure(uint8_t arg_0x406af600){
#line 49
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$configure(arg_0x406af600);
#line 49
}
#line 49
# 150 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline  void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$runTask(void)
#line 150
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 151
    {
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$reqResId;
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_BUSY;
    }
#line 154
    __nesc_atomic_end(__nesc_atomic); }
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$configure(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId);
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$granted(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId);
}

# 71 "/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
inline static   void Atm128SpiP$SpiPacket$sendDone(uint8_t *arg_0x4056e030, uint8_t *arg_0x4056e1d8, uint16_t arg_0x4056e368, error_t arg_0x4056e500){
#line 71
  CC2420SpiP$SpiPacket$sendDone(arg_0x4056e030, arg_0x4056e1d8, arg_0x4056e368, arg_0x4056e500);
#line 71
}
#line 71
# 207 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline  void Atm128SpiP$zeroTask$runTask(void)
#line 207
{
  uint8_t *rx;
  uint8_t *tx;
  uint16_t myLen;

#line 211
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 211
    {
      rx = Atm128SpiP$rxBuffer;
      tx = Atm128SpiP$txBuffer;
      myLen = Atm128SpiP$len;
      Atm128SpiP$rxBuffer = (void *)0;
      Atm128SpiP$txBuffer = (void *)0;
      Atm128SpiP$len = 0;
      Atm128SpiP$pos = 0;
      Atm128SpiP$SpiPacket$sendDone(tx, rx, myLen, SUCCESS);
    }
#line 220
    __nesc_atomic_end(__nesc_atomic); }
}

# 366 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline    void CC2420SpiP$Fifo$default$readDone(uint8_t addr, uint8_t *rx_buf, uint8_t rx_len, error_t error)
#line 366
{
}

# 71 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static   void CC2420SpiP$Fifo$readDone(uint8_t arg_0x40553328, uint8_t *arg_0x405419d8, uint8_t arg_0x40541b60, error_t arg_0x40541ce8){
#line 71
    CC2420SpiP$Fifo$default$readDone(arg_0x40553328, arg_0x405419d8, arg_0x40541b60, arg_0x40541ce8);
#line 71
}
#line 71
# 369 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline    void CC2420SpiP$Fifo$default$writeDone(uint8_t addr, uint8_t *tx_buf, uint8_t tx_len, error_t error)
#line 369
{
}

# 91 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static   void CC2420SpiP$Fifo$writeDone(uint8_t arg_0x40553328, uint8_t *arg_0x4053fb00, uint8_t arg_0x4053fc88, error_t arg_0x4053fe10){
#line 91
    CC2420SpiP$Fifo$default$writeDone(arg_0x40553328, arg_0x4053fb00, arg_0x4053fc88, arg_0x4053fe10);
#line 91
}
#line 91
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t AFWA_AESP$rxnonce$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(AFWA_AESP$rxnonce);
#line 56

#line 56
  return result;
#line 56
}
#line 56
inline static   error_t AFWA_AESP$txnonce$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(AFWA_AESP$txnonce);
#line 56

#line 56
  return result;
#line 56
}
#line 56
inline static   error_t AFWA_AESP$keyUpdate$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(AFWA_AESP$keyUpdate);
#line 56

#line 56
  return result;
#line 56
}
#line 56
inline static   error_t AFWA_AESP$inline_decryption$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(AFWA_AESP$inline_decryption);
#line 56

#line 56
  return result;
#line 56
}
#line 56
inline static   error_t AFWA_AESP$standAlone_decryption$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(AFWA_AESP$standAlone_decryption);
#line 56

#line 56
  return result;
#line 56
}
#line 56
inline static   error_t AFWA_AESP$inline_encryption$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(AFWA_AESP$inline_encryption);
#line 56

#line 56
  return result;
#line 56
}
#line 56
inline static   error_t AFWA_AESP$standAlone_encryption$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(AFWA_AESP$standAlone_encryption);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 55 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static   cc2420_status_t AFWA_AESP$CC2420_SECCTRL1$write(uint16_t arg_0x403b8010){
#line 55
  unsigned char result;
#line 55

#line 55
  result = CC2420SpiP$Reg$write(CC2420_SECCTRL1, arg_0x403b8010);
#line 55

#line 55
  return result;
#line 55
}
#line 55
inline static   cc2420_status_t AFWA_AESP$CC2420_SECCTRL0$write(uint16_t arg_0x403b8010){
#line 55
  unsigned char result;
#line 55

#line 55
  result = CC2420SpiP$Reg$write(CC2420_SECCTRL0, arg_0x403b8010);
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 309 "AFWA_AESP.nc"
static inline void AFWA_AESP$setmode(void)
#line 309
{

  AFWA_AESP$setMode0 = AFWA_AESP$tx_ctrl0 | AFWA_AESP$rx_ctrl0;
  AFWA_AESP$setMode1 = AFWA_AESP$tx_ctrl1 | AFWA_AESP$rx_ctrl1;


  AFWA_AESP$CSN$clr();

  AFWA_AESP$CC2420_SECCTRL0$write(0x0000);
  AFWA_AESP$CC2420_SECCTRL1$write(0x0000);
  AFWA_AESP$CC2420_SECCTRL0$write(AFWA_AESP$setMode0);
  AFWA_AESP$CC2420_SECCTRL1$write(AFWA_AESP$setMode1);

  AFWA_AESP$CSN$set();
}

#line 195
static inline void AFWA_AESP$check(void)
#line 195
{

  AFWA_AESP$setmode();

  if (AFWA_AESP$op == AES_TRANSMIT) {
      if ((AFWA_AESP$tx_ctrl0 & 0x0003) == 0) {
        AFWA_AESP$standAlone_encryption$postTask();
        }
      else {
#line 203
        AFWA_AESP$inline_encryption$postTask();
        }
    }
  else {
#line 205
    if (AFWA_AESP$op == AES_RECEIVE) {
        if ((AFWA_AESP$rx_ctrl0 & 0x0003) == 0) {
          AFWA_AESP$standAlone_decryption$postTask();
          }
        else {
#line 209
          AFWA_AESP$inline_decryption$postTask();
          }
      }
    else {
#line 210
      if (AFWA_AESP$op == AES_KEY_UPDATE) {
          AFWA_AESP$keyUpdate$postTask();
        }
      else {
#line 212
        if (AFWA_AESP$op == AES_TXNONCE) {
            AFWA_AESP$txnonce$postTask();
          }
        else {
#line 214
          if (AFWA_AESP$op == AES_RXNONCE) {
              AFWA_AESP$rxnonce$postTask();
            }
          }
        }
      }
    }
}

#line 190
static inline  void AFWA_AESP$Resource$granted(void)
#line 190
{

  AFWA_AESP$check();
}

# 363 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline   void CC2420SpiP$Resource$default$granted(uint8_t id)
#line 363
{
}

# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static  void CC2420SpiP$Resource$granted(uint8_t arg_0x40554950){
#line 92
  switch (arg_0x40554950) {
#line 92
    case /*AFWA_AESC.SpiC*/CC2420SpiC$0$CLIENT_ID:
#line 92
      AFWA_AESP$Resource$granted();
#line 92
      break;
#line 92
    default:
#line 92
      CC2420SpiP$Resource$default$granted(arg_0x40554950);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 354 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline  void CC2420SpiP$grant$runTask(void)
#line 354
{
  uint8_t holder;

#line 356
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 356
    {
      holder = CC2420SpiP$m_holder;
    }
#line 358
    __nesc_atomic_end(__nesc_atomic); }
  CC2420SpiP$Resource$granted(holder);
}

# 81 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
static inline  error_t StateImplP$Init$init(void)
#line 81
{
  int i;

#line 83
  for (i = 0; i < 1U; i++) {
      StateImplP$state[i] = StateImplP$S_IDLE;
    }
  return SUCCESS;
}

# 45 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline  error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$Init$init(void)
#line 45
{
  memset(/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ, /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY, sizeof /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ);
  return SUCCESS;
}

# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static  error_t RealMainP$SoftwareInit$init(void){
#line 51
  unsigned char result;
#line 51

#line 51
  result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$Init$init();
#line 51
  result = ecombine(result, StateImplP$Init$init());
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 82 "/opt/tinyos-2.x/tos/chips/atm128/atm128hardware.h"
static __inline void __nesc_enable_interrupt(void)
#line 82
{
   __asm volatile ("sei");}

# 100 "AFWA_AESP.nc"
static inline  void AFWA_AESP$Boot$booted(void)
#line 100
{

  AFWA_AESP$tx_ctrl0 = 0;
  AFWA_AESP$tx_ctrl1 = 0;
  AFWA_AESP$rx_ctrl0 = 0;
  AFWA_AESP$rx_ctrl1 = 0;
  AFWA_AESP$tmp = AFWA_AESP$i = 0;
  AFWA_AESP$plainText = AFWA_AESP$cipherText = AFWA_AESP$localKey = (void *)0;
}

# 49 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
inline static  void RealMainP$Boot$booted(void){
#line 49
  AFWA_AESP$Boot$booted();
#line 49
}
#line 49
# 112 "/opt/tinyos-2.x/tos/chips/atm128/McuSleepC.nc"
static inline    mcu_power_t McuSleepC$McuPowerOverride$default$lowestState(void)
#line 112
{
  return ATM128_POWER_DOWN;
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
# 66 "/opt/tinyos-2.x/tos/chips/atm128/McuSleepC.nc"
static inline mcu_power_t McuSleepC$getPowerState(void)
#line 66
{





  if (* (volatile uint8_t *)(0x37 + 0x20) & ~((((1 << 1) | (1 << 0)) | (1 << 2)) | (1 << 6)) || 
  * (volatile uint8_t *)0x7D & ~(1 << 2)) {
      return ATM128_POWER_IDLE;
    }
  else {
    if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)(0x0D + 0x20) & (1 << 6)) {
        return ATM128_POWER_IDLE;
      }
    else {
      if ((* (volatile uint8_t *)(0x0A + 0x20) | * (volatile uint8_t *)0x9A) & ((1 << 6) | (1 << 7))) {
          return ATM128_POWER_IDLE;
        }
      else {
        if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)0x74 & (1 << 2)) {
            return ATM128_POWER_IDLE;
          }
        else {
          if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)(0x06 + 0x20) & (1 << 7)) {
              return ATM128_POWER_ADC_NR;
            }
          else {
              return ATM128_POWER_DOWN;
            }
          }
        }
      }
    }
}

# 134 "/opt/tinyos-2.x/tos/chips/atm128/atm128hardware.h"
static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
#line 134
{
  return m1 < m2 ? m1 : m2;
}

# 97 "/opt/tinyos-2.x/tos/chips/atm128/McuSleepC.nc"
static inline   void McuSleepC$McuSleep$sleep(void)
#line 97
{
  uint8_t powerState;

  powerState = mcombine(McuSleepC$getPowerState(), McuSleepC$McuPowerOverride$lowestState());
  * (volatile uint8_t *)(0x35 + 0x20) = ((
  * (volatile uint8_t *)(0x35 + 0x20) & 0xe3) | (1 << 5)) | __extension__ ({
#line 102
    uint16_t __addr16 = (uint16_t )(uint16_t )&McuSleepC$atm128PowerBits[powerState];
#line 102
    uint8_t __result;

#line 102
     __asm ("lpm""\n\t""mov %0, r0""\n\t" : "=r"(__result) : "z"(__addr16) : "r0");__result;
  }
  );
#line 104
   __asm volatile ("sei");
   __asm volatile ("sleep");
   __asm volatile ("cli");}

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
# 99 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline   uint8_t HplAtm128SpiP$SPI$read(void)
#line 99
{
#line 99
  return * (volatile uint8_t *)(0x0F + 0x20);
}

# 80 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static   uint8_t Atm128SpiP$Spi$read(void){
#line 80
  unsigned char result;
#line 80

#line 80
  result = HplAtm128SpiP$SPI$read();
#line 80

#line 80
  return result;
#line 80
}
#line 80
# 100 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline   void HplAtm128SpiP$SPI$write(uint8_t d)
#line 100
{
#line 100
  * (volatile uint8_t *)(0x0F + 0x20) = d;
}

# 86 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static   void Atm128SpiP$Spi$write(uint8_t arg_0x406076b8){
#line 86
  HplAtm128SpiP$SPI$write(arg_0x406076b8);
#line 86
}
#line 86










inline static   void Atm128SpiP$Spi$enableInterrupt(bool arg_0x40606128){
#line 96
  HplAtm128SpiP$SPI$enableInterrupt(arg_0x40606128);
#line 96
}
#line 96
# 164 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline error_t Atm128SpiP$sendNextPart(void)
#line 164
{
  uint16_t end;
  uint16_t tmpPos;
  uint8_t *tx;
  uint8_t *rx;

  /* atomic removed: atomic calls only */
#line 170
  {
    tx = Atm128SpiP$txBuffer;
    rx = Atm128SpiP$rxBuffer;
    tmpPos = Atm128SpiP$pos;
    end = Atm128SpiP$pos + Atm128SpiP$SPI_ATOMIC_SIZE;
    end = end > Atm128SpiP$len ? Atm128SpiP$len : end;
  }

  for (; tmpPos < end - 1; tmpPos++) {
      uint8_t val;

#line 180
      if (tx != (void *)0) {
        val = Atm128SpiP$SpiByte$write(tx[tmpPos]);
        }
      else {
#line 183
        val = Atm128SpiP$SpiByte$write(0);
        }
      if (rx != (void *)0) {
          rx[tmpPos] = val;
        }
    }



  Atm128SpiP$Spi$enableInterrupt(TRUE);
  /* atomic removed: atomic calls only */
#line 193
  {
    if (tx != (void *)0) {
      Atm128SpiP$Spi$write(tx[tmpPos]);
      }
    else {
#line 197
      Atm128SpiP$Spi$write(0);
      }
    Atm128SpiP$pos = tmpPos;
  }


  return SUCCESS;
}

#line 264
static inline   void Atm128SpiP$Spi$dataReady(uint8_t data)
#line 264
{
  bool again;

  /* atomic removed: atomic calls only */
#line 267
  {
    if (Atm128SpiP$rxBuffer != (void *)0) {
        Atm128SpiP$rxBuffer[Atm128SpiP$pos] = data;
      }

    Atm128SpiP$pos++;
  }
  Atm128SpiP$Spi$enableInterrupt(FALSE);
  /* atomic removed: atomic calls only */
  {
    again = Atm128SpiP$pos < Atm128SpiP$len;
  }

  if (again) {
      Atm128SpiP$sendNextPart();
    }
  else {
      uint8_t *rx;
      uint8_t *tx;
      uint16_t myLen;
      uint8_t discard;

      /* atomic removed: atomic calls only */
#line 289
      {
        rx = Atm128SpiP$rxBuffer;
        tx = Atm128SpiP$txBuffer;
        myLen = Atm128SpiP$len;
        Atm128SpiP$rxBuffer = (void *)0;
        Atm128SpiP$txBuffer = (void *)0;
        Atm128SpiP$len = 0;
        Atm128SpiP$pos = 0;
      }
      discard = Atm128SpiP$Spi$read();

      Atm128SpiP$SpiPacket$sendDone(tx, rx, myLen, SUCCESS);
    }
}

# 92 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static   void HplAtm128SpiP$SPI$dataReady(uint8_t arg_0x40607bc8){
#line 92
  Atm128SpiP$Spi$dataReady(arg_0x40607bc8);
#line 92
}
#line 92
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
static  void SchedulerBasicP$TaskBasic$runTask(uint8_t arg_0x4034a748){
#line 64
  switch (arg_0x4034a748) {
#line 64
    case CC2420SpiP$grant:
#line 64
      CC2420SpiP$grant$runTask();
#line 64
      break;
#line 64
    case Atm128SpiP$zeroTask:
#line 64
      Atm128SpiP$zeroTask$runTask();
#line 64
      break;
#line 64
    case /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask:
#line 64
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$runTask();
#line 64
      break;
#line 64
    case AFWA_AESP$standAlone_encryption:
#line 64
      AFWA_AESP$standAlone_encryption$runTask();
#line 64
      break;
#line 64
    case AFWA_AESP$standAlone_decryption:
#line 64
      AFWA_AESP$standAlone_decryption$runTask();
#line 64
      break;
#line 64
    case AFWA_AESP$inline_encryption:
#line 64
      AFWA_AESP$inline_encryption$runTask();
#line 64
      break;
#line 64
    case AFWA_AESP$inline_decryption:
#line 64
      AFWA_AESP$inline_decryption$runTask();
#line 64
      break;
#line 64
    case AFWA_AESP$keyUpdate:
#line 64
      AFWA_AESP$keyUpdate$runTask();
#line 64
      break;
#line 64
    case AFWA_AESP$txnonce:
#line 64
      AFWA_AESP$txnonce$runTask();
#line 64
      break;
#line 64
    case AFWA_AESP$rxnonce:
#line 64
      AFWA_AESP$rxnonce$runTask();
#line 64
      break;
#line 64
    default:
#line 64
      SchedulerBasicP$TaskBasic$default$runTask(arg_0x4034a748);
#line 64
      break;
#line 64
    }
#line 64
}
#line 64
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

# 129 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static   uint8_t Atm128SpiP$SpiByte$write(uint8_t tx)
#line 129
{
  Atm128SpiP$Spi$enableSpi(TRUE);
  Atm128SpiP$McuPowerState$update();
  Atm128SpiP$Spi$write(tx);
  while (!(* (volatile uint8_t *)(0x0E + 0x20) & 0x80)) ;
  return Atm128SpiP$Spi$read();
}

# 131 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static   void HplAtm128SpiP$SPI$enableSpi(bool enabled)
#line 131
{
  if (enabled) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 6;
      HplAtm128SpiP$Mcu$update();
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 6);
      HplAtm128SpiP$Mcu$update();
    }
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

# 314 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static   cc2420_status_t CC2420SpiP$Strobe$strobe(uint8_t addr)
#line 314
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 315
    {
      if (CC2420SpiP$WorkingState$isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 317
            0;

            {
#line 317
              __nesc_atomic_end(__nesc_atomic); 
#line 317
              return __nesc_temp;
            }
          }
        }
    }
#line 321
    __nesc_atomic_end(__nesc_atomic); }
#line 321
  return CC2420SpiP$SpiByte$write(addr);
}

#line 233
static   cc2420_status_t CC2420SpiP$Ram$read(uint16_t addr, uint8_t offset, 
uint8_t *data, 
uint8_t len)
#line 235
{

  cc2420_status_t status = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 239
    {
      if (CC2420SpiP$WorkingState$isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 241
            status;

            {
#line 241
              __nesc_atomic_end(__nesc_atomic); 
#line 241
              return __nesc_temp;
            }
          }
        }
    }
#line 245
    __nesc_atomic_end(__nesc_atomic); }
#line 245
  addr += offset;

  CC2420SpiP$SpiByte$write(addr | 0x80);
  status = CC2420SpiP$SpiByte$write(((addr >> 1) & 0xc0) | 0x20);
  for (; len; len--) {
      * data++ = CC2420SpiP$SpiByte$write(0);
    }

  return status;
}

#line 325
static   void CC2420SpiP$SpiPacket$sendDone(uint8_t *tx_buf, uint8_t *rx_buf, 
uint16_t len, error_t error)
#line 326
{
  if (CC2420SpiP$m_addr & 0x40) {
      CC2420SpiP$Fifo$readDone(CC2420SpiP$m_addr & ~0x40, rx_buf, len, error);
    }
  else 
#line 329
    {
      CC2420SpiP$Fifo$writeDone(CC2420SpiP$m_addr, tx_buf, len, error);
    }
}

#line 301
static   cc2420_status_t CC2420SpiP$Reg$write(uint8_t addr, uint16_t data)
#line 301
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 302
    {
      if (CC2420SpiP$WorkingState$isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 304
            0;

            {
#line 304
              __nesc_atomic_end(__nesc_atomic); 
#line 304
              return __nesc_temp;
            }
          }
        }
    }
#line 308
    __nesc_atomic_end(__nesc_atomic); }
#line 307
  CC2420SpiP$SpiByte$write(addr);
  CC2420SpiP$SpiByte$write(data >> 8);
  return CC2420SpiP$SpiByte$write(data & 0xff);
}

# 103 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
__attribute((signal))   void __vector_17(void)
#line 103
{
  HplAtm128SpiP$SPI$dataReady(HplAtm128SpiP$SPI$read());
}










static   void HplAtm128SpiP$SPI$enableInterrupt(bool enabled)
#line 116
{
  if (enabled) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 7;
      HplAtm128SpiP$Mcu$update();
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 7);
      HplAtm128SpiP$Mcu$update();
    }
}

