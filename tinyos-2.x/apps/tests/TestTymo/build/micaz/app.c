#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 121 "/usr/lib/gcc/avr/3.4.6/../../../../avr/include/stdint.h" 3
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
# 77 "/usr/lib/gcc/avr/3.4.6/../../../../avr/include/inttypes.h"
typedef int32_t int_farptr_t;



typedef uint32_t uint_farptr_t;
# 235 "/usr/local/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void *source);




static __inline uint8_t __nesc_hton_uint8(void *target, uint8_t value);





static __inline uint8_t __nesc_ntoh_leuint8(const void *source);




static __inline uint8_t __nesc_hton_leuint8(void *target, uint8_t value);





static __inline int8_t __nesc_ntoh_int8(const void *source);
#line 257
static __inline int8_t __nesc_hton_int8(void *target, int8_t value);






static __inline uint16_t __nesc_ntoh_uint16(const void *source);




static __inline uint16_t __nesc_hton_uint16(void *target, uint16_t value);






static __inline uint16_t __nesc_ntoh_leuint16(const void *source);




static __inline uint16_t __nesc_hton_leuint16(void *target, uint16_t value);
#line 294
static __inline uint32_t __nesc_ntoh_uint32(const void *source);






static __inline uint32_t __nesc_hton_uint32(void *target, uint32_t value);
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
# 213 "/usr/lib/gcc/avr/3.4.6/include/stddef.h" 3
typedef unsigned int size_t;
# 112 "/usr/lib/gcc/avr/3.4.6/../../../../avr/include/string.h" 3
extern void *memcpy(void *, const void *, size_t );



extern void *memset(void *, int , size_t );
# 325 "/usr/lib/gcc/avr/3.4.6/include/stddef.h" 3
typedef int wchar_t;
# 71 "/usr/lib/gcc/avr/3.4.6/../../../../avr/include/stdlib.h"
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
# 151 "/usr/lib/gcc/avr/3.4.6/include/stddef.h" 3
typedef int ptrdiff_t;
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/system/../lib/safe/include/annots_stage1.h"
struct __nesc_attr_safe {
};
#line 41
struct __nesc_attr_unsafe {
};
# 23 "/opt/CVSTinyOS/tinyos-2.x/tos/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4244 {
#line 24
  FALSE = 0, TRUE = 1
};
typedef nx_int8_t nx_bool;
uint16_t TOS_NODE_ID = 1;






struct __nesc_attr_atmostonce {
};
#line 35
struct __nesc_attr_atleastonce {
};
#line 36
struct __nesc_attr_exactlyonce {
};
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/types/TinyError.h"
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
  EALREADY = 9, 
  ENOMEM = 10, 
  ENOACK = 11, 
  ELAST = 11
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2)  ;
# 210 "/usr/lib/gcc/avr/3.4.6/../../../../avr/include/avr/pgmspace.h" 3
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
# 25 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/atm128const.h"
typedef uint8_t const_uint8_t __attribute((__progmem__)) ;
typedef uint16_t const_uint16_t __attribute((__progmem__)) ;
typedef uint32_t const_uint32_t __attribute((__progmem__)) ;
typedef int8_t const_int8_t __attribute((__progmem__)) ;
typedef int16_t const_int16_t __attribute((__progmem__)) ;
typedef int32_t const_int32_t __attribute((__progmem__)) ;
# 82 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/atm128hardware.h"
static __inline void __nesc_enable_interrupt(void)  ;



static __inline void __nesc_disable_interrupt(void)  ;




typedef uint8_t __nesc_atomic_t;
__nesc_atomic_t __nesc_atomic_start(void );
void __nesc_atomic_end(__nesc_atomic_t original_SREG);









#line 102
__inline __nesc_atomic_t 
__nesc_atomic_start(void )   ;









#line 112
__inline void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)   ;







typedef uint8_t mcu_power_t  ;


enum __nesc_unnamed4246 {
  ATM128_POWER_IDLE = 0, 
  ATM128_POWER_ADC_NR = 1, 
  ATM128_POWER_EXT_STANDBY = 2, 
  ATM128_POWER_SAVE = 3, 
  ATM128_POWER_STANDBY = 4, 
  ATM128_POWER_DOWN = 5
};


static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)  ;
# 34 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/Atm128Adc.h"
enum __nesc_unnamed4247 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVCC = 1, 
  ATM128_ADC_VREF_RSVD, 
  ATM128_ADC_VREF_2_56 = 3
};


enum __nesc_unnamed4248 {
  ATM128_ADC_RIGHT_ADJUST = 0, 
  ATM128_ADC_LEFT_ADJUST = 1
};



enum __nesc_unnamed4249 {
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
typedef struct __nesc_unnamed4250 {

  uint8_t mux : 5;
  uint8_t adlar : 1;
  uint8_t refs : 2;
} Atm128Admux_t;




enum __nesc_unnamed4251 {
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


enum __nesc_unnamed4252 {
  ATM128_ADC_ENABLE_OFF = 0, 
  ATM128_ADC_ENABLE_ON
};


enum __nesc_unnamed4253 {
  ATM128_ADC_START_CONVERSION_OFF = 0, 
  ATM128_ADC_START_CONVERSION_ON
};


enum __nesc_unnamed4254 {
  ATM128_ADC_FREE_RUNNING_OFF = 0, 
  ATM128_ADC_FREE_RUNNING_ON
};


enum __nesc_unnamed4255 {
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4256 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 141
typedef struct __nesc_unnamed4257 {

  uint8_t adps : 3;
  uint8_t adie : 1;
  uint8_t adif : 1;
  uint8_t adfr : 1;
  uint8_t adsc : 1;
  uint8_t aden : 1;
} Atm128Adcsra_t;

typedef uint8_t Atm128_ADCH_t;
typedef uint8_t Atm128_ADCL_t;
# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4258 {
#line 29
  int notUsed;
} 
#line 29
TMilli;
typedef struct __nesc_unnamed4259 {
#line 30
  int notUsed;
} 
#line 30
T32khz;
typedef struct __nesc_unnamed4260 {
#line 31
  int notUsed;
} 
#line 31
TMicro;
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128Timer.h"
enum __nesc_unnamed4261 {
  ATM128_CLK8_OFF = 0x0, 
  ATM128_CLK8_NORMAL = 0x1, 
  ATM128_CLK8_DIVIDE_8 = 0x2, 
  ATM128_CLK8_DIVIDE_32 = 0x3, 
  ATM128_CLK8_DIVIDE_64 = 0x4, 
  ATM128_CLK8_DIVIDE_128 = 0x5, 
  ATM128_CLK8_DIVIDE_256 = 0x6, 
  ATM128_CLK8_DIVIDE_1024 = 0x7
};

enum __nesc_unnamed4262 {
  ATM128_CLK16_OFF = 0x0, 
  ATM128_CLK16_NORMAL = 0x1, 
  ATM128_CLK16_DIVIDE_8 = 0x2, 
  ATM128_CLK16_DIVIDE_64 = 0x3, 
  ATM128_CLK16_DIVIDE_256 = 0x4, 
  ATM128_CLK16_DIVIDE_1024 = 0x5, 
  ATM128_CLK16_EXTERNAL_FALL = 0x6, 
  ATM128_CLK16_EXTERNAL_RISE = 0x7
};


enum __nesc_unnamed4263 {
  AVR_CLOCK_OFF = 0, 
  AVR_CLOCK_ON = 1, 
  AVR_CLOCK_DIVIDE_8 = 2
};


enum __nesc_unnamed4264 {
  ATM128_WAVE8_NORMAL = 0, 
  ATM128_WAVE8_PWM, 
  ATM128_WAVE8_CTC, 
  ATM128_WAVE8_PWM_FAST
};


enum __nesc_unnamed4265 {
  ATM128_COMPARE_OFF = 0, 
  ATM128_COMPARE_TOGGLE, 
  ATM128_COMPARE_CLEAR, 
  ATM128_COMPARE_SET
};
#line 99
#line 89
typedef union __nesc_unnamed4266 {

  uint8_t flat;
  struct __nesc_unnamed4267 {
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
typedef union __nesc_unnamed4268 {

  uint8_t flat;
  struct __nesc_unnamed4269 {
    uint8_t tcr0ub : 1;
    uint8_t ocr0ub : 1;
    uint8_t tcn0ub : 1;
    uint8_t as0 : 1;
    uint8_t rsvd : 4;
  } bits;
} Atm128Assr_t;
#line 137
#line 124
typedef union __nesc_unnamed4270 {

  uint8_t flat;
  struct __nesc_unnamed4271 {
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
typedef union __nesc_unnamed4272 {

  uint8_t flat;
  struct __nesc_unnamed4273 {
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
typedef union __nesc_unnamed4274 {

  uint8_t flat;
  struct __nesc_unnamed4275 {
    uint8_t psr321 : 1;
    uint8_t psr0 : 1;
    uint8_t pud : 1;
    uint8_t acme : 1;
    uint8_t rsvd : 3;
    uint8_t tsm : 1;
  } bits;
} Atm128_SFIOR_t;






enum __nesc_unnamed4276 {
  ATM128_TIMER_COMPARE_NORMAL = 0, 
  ATM128_TIMER_COMPARE_TOGGLE, 
  ATM128_TIMER_COMPARE_CLEAR, 
  ATM128_TIMER_COMPARE_SET
};
#line 193
#line 184
typedef union __nesc_unnamed4277 {

  uint8_t flat;
  struct __nesc_unnamed4278 {
    uint8_t wgm10 : 2;
    uint8_t comC : 2;
    uint8_t comB : 2;
    uint8_t comA : 2;
  } bits;
} Atm128TimerCtrlCompare_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR1A_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR3A_t;


enum __nesc_unnamed4279 {
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
typedef union __nesc_unnamed4280 {

  uint8_t flat;
  struct __nesc_unnamed4281 {
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
typedef union __nesc_unnamed4282 {

  uint8_t flat;
  struct __nesc_unnamed4283 {
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
typedef union __nesc_unnamed4284 {

  uint8_t flat;
  struct __nesc_unnamed4285 {
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
typedef union __nesc_unnamed4286 {

  uint8_t flat;
  struct __nesc_unnamed4287 {
    uint8_t ocf1c : 1;
    uint8_t ocf3c : 1;
    uint8_t tov3 : 1;
    uint8_t ocf3b : 1;
    uint8_t ocf3a : 1;
    uint8_t icf3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIFR_t;
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/mica/MicaTimer.h"
typedef struct __nesc_unnamed4288 {
} 
#line 51
T64khz;
typedef struct __nesc_unnamed4289 {
} 
#line 52
T128khz;
typedef struct __nesc_unnamed4290 {
} 
#line 53
T2mhz;
typedef struct __nesc_unnamed4291 {
} 
#line 54
T4mhz;
#line 107
typedef T32khz TOne;
typedef TMicro TThree;
typedef uint16_t counter_one_overflow_t;
typedef uint16_t counter_three_overflow_t;

enum __nesc_unnamed4292 {
  MICA_PRESCALER_ONE = ATM128_CLK16_DIVIDE_256, 
  MICA_DIVIDE_ONE_FOR_32KHZ_LOG2 = 0, 
  MICA_PRESCALER_THREE = ATM128_CLK16_DIVIDE_8, 
  MICA_DIVIDE_THREE_FOR_MICRO_LOG2 = 0, 
  EXT_STANDBY_T0_THRESHOLD = 12
};





enum __nesc_unnamed4293 {
  PLATFORM_MHZ = 8
};
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/micaz/hardware.h"
enum __nesc_unnamed4294 {
  CHANNEL_THERMISTOR = ATM128_ADC_SNGL_ADC1
};

enum __nesc_unnamed4295 {
  PLATFORM_BAUDRATE = 57600L
};
# 6 "/opt/CVSTinyOS/tinyos-2.x/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4296 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4297 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 11 "../../../tos/lib/net/tymo/routing.h"
typedef am_addr_t addr_t;
typedef nx_am_addr_t nx_addr_t;
typedef uint16_t seqnum_t;
typedef nx_uint16_t nx_seqnum_t;
#line 48
enum __nesc_unnamed4298 {
  AM_MULTIHOP = 9, 
  AM_DYMO = 8
};





#line 53
typedef enum __nesc_unnamed4299 {
  DYMO_RREQ = 10, 
  DYMO_RREP, 
  DYMO_RERR
} dymo_msg_t;







#line 60
typedef enum __nesc_unnamed4300 {
  ACTION_KEEP, 

  ACTION_DISCARD, 
  ACTION_DISCARD_MSG
} proc_action_t;






#line 67
typedef enum __nesc_unnamed4301 {
  FW_SEND, 
  FW_RECEIVE, 
  FW_WAIT, 
  FW_DISCARD
} fw_action_t;
# 21 "../../../tos/lib/net/tymo/routing_table.h"
#line 15
typedef struct rt_info {
  addr_t address;
  addr_t nexthop;
  seqnum_t seqnum;
  bool has_hopcnt;
  uint8_t hopcnt;
} rt_info_t;





#line 23
typedef enum __nesc_unnamed4302 {
  REASON_FULL, 
  REASON_OLD, 
  REASON_UNREACHABLE
} reason_t;
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/types/Leds.h"
enum __nesc_unnamed4303 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420.h"
typedef uint8_t cc2420_status_t;
#line 66
#line 49
typedef nx_struct cc2420_header_t {
  nxle_uint8_t length;
  nxle_uint16_t fcf;
  nxle_uint8_t dsn;
  nxle_uint16_t destpan;
  nxle_uint16_t dest;
  nxle_uint16_t src;



  nxle_uint8_t network;



  nxle_uint8_t type;
} __attribute__((packed)) 

cc2420_header_t;





#line 71
typedef nx_struct cc2420_footer_t {
} __attribute__((packed)) cc2420_footer_t;
#line 97
#line 81
typedef nx_struct cc2420_metadata_t {
  nx_uint8_t rssi;
  nx_uint8_t lqi;
  nx_uint8_t tx_power;
  nx_bool crc;
  nx_bool ack;
  nx_bool timesync;
  nx_uint32_t timestamp;
  nx_uint16_t rxInterval;
} __attribute__((packed)) 






cc2420_metadata_t;





#line 100
typedef nx_struct cc2420_packet_t {
  cc2420_header_t packet;
  nx_uint8_t data[];
} __attribute__((packed)) cc2420_packet_t;
#line 134
enum __nesc_unnamed4304 {

  MAC_HEADER_SIZE = sizeof(cc2420_header_t ) - 1, 

  MAC_FOOTER_SIZE = sizeof(uint16_t ), 

  MAC_PACKET_SIZE = MAC_HEADER_SIZE + 28 + MAC_FOOTER_SIZE, 

  CC2420_SIZE = MAC_HEADER_SIZE + MAC_FOOTER_SIZE
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

enum __nesc_unnamed4305 {

  CC2420_INVALID_TIMESTAMP = 0x80000000L
};
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4306 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4307 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4308 {
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
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/micaz/platform_message.h"
#line 46
typedef union message_header {
  cc2420_header_t cc2420;
  serial_header_t serial;
} message_header_t;



#line 51
typedef union message_footer {
  cc2420_footer_t cc2420;
} message_footer_t;




#line 55
typedef union message_metadata {
  cc2420_metadata_t cc2420;
  serial_metadata_t serial;
} message_metadata_t;
# 19 "/opt/CVSTinyOS/tinyos-2.x/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[28];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/IEEE802154.h"
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
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.h"
enum __nesc_unnamed4309 {
  ATM128_SPI_CLK_DIVIDE_4 = 0, 
  ATM128_SPI_CLK_DIVIDE_16 = 1, 
  ATM128_SPI_CLK_DIVIDE_64 = 2, 
  ATM128_SPI_CLK_DIVIDE_128 = 3
};
#line 49
#line 40
typedef struct __nesc_unnamed4310 {
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
typedef union __nesc_unnamed4311 {
  uint8_t flat;
  Atm128SPIControl_s bits;
} Atm128SPIControl_t;

typedef Atm128SPIControl_t Atm128_SPCR_t;








#line 58
typedef struct __nesc_unnamed4312 {
  uint8_t spif : 1;
  uint8_t wcol : 1;
  uint8_t rsvd : 5;
  uint8_t spi2x : 1;
} 
Atm128SPIStatus_s;



#line 65
typedef union __nesc_unnamed4313 {
  uint8_t flat;
  Atm128SPIStatus_s bits;
} Atm128SPIStatus_t;

typedef Atm128SPIStatus_t Atm128_SPSR_t;

typedef uint8_t Atm128_SPDR_t;
# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
# 28 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420TimeSyncMessage.h"
typedef nx_uint32_t timesync_radio_t;
# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/crc.h"
uint16_t crcTable[256] __attribute((__progmem__))  = { 
0x0000, 0x1021, 0x2042, 0x3063, 0x4084, 0x50a5, 0x60c6, 0x70e7, 
0x8108, 0x9129, 0xa14a, 0xb16b, 0xc18c, 0xd1ad, 0xe1ce, 0xf1ef, 
0x1231, 0x0210, 0x3273, 0x2252, 0x52b5, 0x4294, 0x72f7, 0x62d6, 
0x9339, 0x8318, 0xb37b, 0xa35a, 0xd3bd, 0xc39c, 0xf3ff, 0xe3de, 
0x2462, 0x3443, 0x0420, 0x1401, 0x64e6, 0x74c7, 0x44a4, 0x5485, 
0xa56a, 0xb54b, 0x8528, 0x9509, 0xe5ee, 0xf5cf, 0xc5ac, 0xd58d, 
0x3653, 0x2672, 0x1611, 0x0630, 0x76d7, 0x66f6, 0x5695, 0x46b4, 
0xb75b, 0xa77a, 0x9719, 0x8738, 0xf7df, 0xe7fe, 0xd79d, 0xc7bc, 
0x48c4, 0x58e5, 0x6886, 0x78a7, 0x0840, 0x1861, 0x2802, 0x3823, 
0xc9cc, 0xd9ed, 0xe98e, 0xf9af, 0x8948, 0x9969, 0xa90a, 0xb92b, 
0x5af5, 0x4ad4, 0x7ab7, 0x6a96, 0x1a71, 0x0a50, 0x3a33, 0x2a12, 
0xdbfd, 0xcbdc, 0xfbbf, 0xeb9e, 0x9b79, 0x8b58, 0xbb3b, 0xab1a, 
0x6ca6, 0x7c87, 0x4ce4, 0x5cc5, 0x2c22, 0x3c03, 0x0c60, 0x1c41, 
0xedae, 0xfd8f, 0xcdec, 0xddcd, 0xad2a, 0xbd0b, 0x8d68, 0x9d49, 
0x7e97, 0x6eb6, 0x5ed5, 0x4ef4, 0x3e13, 0x2e32, 0x1e51, 0x0e70, 
0xff9f, 0xefbe, 0xdfdd, 0xcffc, 0xbf1b, 0xaf3a, 0x9f59, 0x8f78, 
0x9188, 0x81a9, 0xb1ca, 0xa1eb, 0xd10c, 0xc12d, 0xf14e, 0xe16f, 
0x1080, 0x00a1, 0x30c2, 0x20e3, 0x5004, 0x4025, 0x7046, 0x6067, 
0x83b9, 0x9398, 0xa3fb, 0xb3da, 0xc33d, 0xd31c, 0xe37f, 0xf35e, 
0x02b1, 0x1290, 0x22f3, 0x32d2, 0x4235, 0x5214, 0x6277, 0x7256, 
0xb5ea, 0xa5cb, 0x95a8, 0x8589, 0xf56e, 0xe54f, 0xd52c, 0xc50d, 
0x34e2, 0x24c3, 0x14a0, 0x0481, 0x7466, 0x6447, 0x5424, 0x4405, 
0xa7db, 0xb7fa, 0x8799, 0x97b8, 0xe75f, 0xf77e, 0xc71d, 0xd73c, 
0x26d3, 0x36f2, 0x0691, 0x16b0, 0x6657, 0x7676, 0x4615, 0x5634, 
0xd94c, 0xc96d, 0xf90e, 0xe92f, 0x99c8, 0x89e9, 0xb98a, 0xa9ab, 
0x5844, 0x4865, 0x7806, 0x6827, 0x18c0, 0x08e1, 0x3882, 0x28a3, 
0xcb7d, 0xdb5c, 0xeb3f, 0xfb1e, 0x8bf9, 0x9bd8, 0xabbb, 0xbb9a, 
0x4a75, 0x5a54, 0x6a37, 0x7a16, 0x0af1, 0x1ad0, 0x2ab3, 0x3a92, 
0xfd2e, 0xed0f, 0xdd6c, 0xcd4d, 0xbdaa, 0xad8b, 0x9de8, 0x8dc9, 
0x7c26, 0x6c07, 0x5c64, 0x4c45, 0x3ca2, 0x2c83, 0x1ce0, 0x0cc1, 
0xef1f, 0xff3e, 0xcf5d, 0xdf7c, 0xaf9b, 0xbfba, 0x8fd9, 0x9ff8, 
0x6e17, 0x7e36, 0x4e55, 0x5e74, 0x2e93, 0x3eb2, 0x0ed1, 0x1ef0 };









static uint16_t crcByte(uint16_t oldCrc, uint8_t byte) __attribute((noinline))  ;
# 19 "../../../tos/lib/net/tymo/dymo/dymo_table.h"
#line 16
typedef struct rt_entry {
  rt_info_t info;
  uint8_t flags;
} rt_entry_t;






#line 21
typedef enum __nesc_unnamed4314 {
  FLAG_BROKEN = 0x01, 
  FLAG_NEW = 0x02, 
  FLAG_USED = 0x04, 
  FLAG_DELETED = 0x08
} rt_flag_t;








#line 28
typedef enum __nesc_unnamed4315 {
  ROUTE_AGE_MIN = 0, 
  ROUTE_AGE_MAX, 
  ROUTE_NEW, 
  ROUTE_USED, 
  ROUTE_DELETE, 
  NB_ROUTE_TIMERS
} rt_timer_t;

uint32_t timer_values[NB_ROUTE_TIMERS] = { 
1000, 
300000, 
10000, 
10000, 
10000 * 2 };
# 13 "../../../tos/lib/net/tymo/mh/mhpacket.h"
#line 8
typedef nx_struct mhpacket_header {
  nx_uint8_t len;
  nx_uint8_t type;
  nx_am_addr_t src;
  nx_am_addr_t dest;
} __attribute__((packed)) mhpacket_header_t;




#line 15
typedef nx_struct mhpacket {
  mhpacket_header_t header;
  nx_uint8_t data[];
} __attribute__((packed)) mhpacket_t;

enum __nesc_unnamed4316 {
  AM_MHPACKET = AM_MULTIHOP
};
# 4 "build/micaz/StorageVolumes.h"
enum __nesc_unnamed4317 {
  VOLUME_DYMODATA
};
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/types/Storage.h"
typedef uint8_t volume_id_t;
typedef uint32_t storage_addr_t;
typedef uint32_t storage_len_t;
typedef uint32_t storage_cookie_t;

enum __nesc_unnamed4318 {
  SEEK_BEGINNING = 0
};
# 36 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/mica2/chips/at45db/HplAt45db_chip.h"
enum __nesc_unnamed4319 {
  AT45_MAX_PAGES = 2048, 
  AT45_PAGE_SIZE = 264, 
  AT45_PAGE_SIZE_LOG2 = 8
};

typedef uint16_t at45page_t;
typedef uint16_t at45pageoffset_t;
# 16 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45db.h"
enum __nesc_unnamed4320 {
  AT45_C_READ_BUFFER1 = 0xd4, 
  AT45_C_READ_BUFFER2 = 0xd6, 
  AT45_C_READ_CONTINUOUS = 0xe8, 
  AT45_C_READ_PAGE = 0xd2, 
  AT45_C_WRITE_BUFFER1 = 0x84, 
  AT45_C_WRITE_BUFFER2 = 0x87, 
  AT45_C_WRITE_MEM_BUFFER1 = 0x82, 
  AT45_C_WRITE_MEM_BUFFER2 = 0x85, 
  AT45_C_FILL_BUFFER1 = 0x53, 
  AT45_C_FILL_BUFFER2 = 0x55, 
  AT45_C_FLUSH_BUFFER1 = 0x83, 
  AT45_C_FLUSH_BUFFER2 = 0x86, 
  AT45_C_QFLUSH_BUFFER1 = 0x88, 
  AT45_C_QFLUSH_BUFFER2 = 0x89, 
  AT45_C_COMPARE_BUFFER1 = 0x60, 
  AT45_C_COMPARE_BUFFER2 = 0x61, 
  AT45_C_REQ_STATUS = 0xd7, 
  AT45_C_ERASE_PAGE = 0x81
};
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45db.h"
enum __nesc_unnamed4321 {
  AT45_ERASE, 
  AT45_DONT_ERASE, 
  AT45_PREVIOUSLY_ERASED
};
# 12 "../../../tos/lib/net/tymo/dymo/dymo_packet.h"
#line 8
typedef enum block_semantics {
  BLOCK_HEAD = 0x1, 
  BLOCK_SEQNUM = 0x2, 
  BLOCK_HOPCNT = 0x4
} block_semantics_t;
typedef TMilli TestM$Timer$precision_tag;
typedef T32khz CC2420ControlP$StartupTimer$precision_tag;
typedef uint32_t CC2420ControlP$StartupTimer$size_type;
typedef uint16_t CC2420ControlP$ReadRssi$val_t;
typedef uint8_t HplAtm128Timer0AsyncP$Compare$size_type;
typedef uint8_t HplAtm128Timer0AsyncP$Timer$timer_size;
typedef uint16_t HplAtm128Timer1P$CompareA$size_type;
typedef uint16_t HplAtm128Timer1P$Capture$size_type;
typedef uint16_t HplAtm128Timer1P$CompareB$size_type;
typedef uint16_t HplAtm128Timer1P$CompareC$size_type;
typedef uint16_t HplAtm128Timer1P$Timer$timer_size;
typedef uint16_t /*InitOneP.InitOne*/Atm128TimerInitC$0$timer_size;
typedef /*InitOneP.InitOne*/Atm128TimerInitC$0$timer_size /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$timer_size;
typedef TOne /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$frequency_tag;
typedef uint16_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$timer_size;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$frequency_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$timer_size /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$timer_size /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$timer_size /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$timer_size;
enum /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16*/AlarmOne16C$0$__nesc_unnamed4322 {
  AlarmOne16C$0$COMPARE_ID = 0U
};
typedef TOne /*CounterOne16C.NCounter*/Atm128CounterC$0$frequency_tag;
typedef uint16_t /*CounterOne16C.NCounter*/Atm128CounterC$0$timer_size;
typedef /*CounterOne16C.NCounter*/Atm128CounterC$0$frequency_tag /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$precision_tag;
typedef /*CounterOne16C.NCounter*/Atm128CounterC$0$timer_size /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$size_type;
typedef /*CounterOne16C.NCounter*/Atm128CounterC$0$timer_size /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$timer_size;
typedef T32khz /*Counter32khz32C.Transform32*/TransformCounterC$0$to_precision_tag;
typedef uint32_t /*Counter32khz32C.Transform32*/TransformCounterC$0$to_size_type;
typedef T32khz /*Counter32khz32C.Transform32*/TransformCounterC$0$from_precision_tag;
typedef uint16_t /*Counter32khz32C.Transform32*/TransformCounterC$0$from_size_type;
typedef counter_one_overflow_t /*Counter32khz32C.Transform32*/TransformCounterC$0$upper_count_type;
typedef /*Counter32khz32C.Transform32*/TransformCounterC$0$from_precision_tag /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$precision_tag;
typedef /*Counter32khz32C.Transform32*/TransformCounterC$0$from_size_type /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$size_type;
typedef /*Counter32khz32C.Transform32*/TransformCounterC$0$to_precision_tag /*Counter32khz32C.Transform32*/TransformCounterC$0$Counter$precision_tag;
typedef /*Counter32khz32C.Transform32*/TransformCounterC$0$to_size_type /*Counter32khz32C.Transform32*/TransformCounterC$0$Counter$size_type;
typedef T32khz /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_precision_tag;
typedef uint32_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type;
typedef TOne /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$from_precision_tag;
typedef uint16_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$from_size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_precision_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$from_precision_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$from_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_precision_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$size_type;
typedef uint16_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$size_type;
enum /*CC2420ControlC.Spi*/CC2420SpiC$0$__nesc_unnamed4323 {
  CC2420SpiC$0$CLIENT_ID = 0U
};
enum /*CC2420ControlC.SyncSpiC*/CC2420SpiC$1$__nesc_unnamed4324 {
  CC2420SpiC$1$CLIENT_ID = 1U
};
enum /*CC2420ControlC.RssiResource*/CC2420SpiC$2$__nesc_unnamed4325 {
  CC2420SpiC$2$CLIENT_ID = 2U
};
typedef T32khz CC2420TransmitP$PacketTimeStamp$precision_tag;
typedef uint32_t CC2420TransmitP$PacketTimeStamp$size_type;
typedef T32khz CC2420TransmitP$BackoffTimer$precision_tag;
typedef uint32_t CC2420TransmitP$BackoffTimer$size_type;
enum /*CC2420TransmitC.Spi*/CC2420SpiC$3$__nesc_unnamed4326 {
  CC2420SpiC$3$CLIENT_ID = 3U
};
typedef T32khz CC2420ReceiveP$PacketTimeStamp$precision_tag;
typedef uint32_t CC2420ReceiveP$PacketTimeStamp$size_type;
typedef T32khz CC2420PacketP$PacketTimeStamp32khz$precision_tag;
typedef uint32_t CC2420PacketP$PacketTimeStamp32khz$size_type;
typedef T32khz CC2420PacketP$LocalTime32khz$precision_tag;
typedef TMilli CC2420PacketP$LocalTimeMilli$precision_tag;
typedef TMilli CC2420PacketP$PacketTimeStampMilli$precision_tag;
typedef uint32_t CC2420PacketP$PacketTimeStampMilli$size_type;
typedef T32khz /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag;
typedef /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC$0$LocalTime$precision_tag;
typedef /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$precision_tag;
typedef uint32_t /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$size_type;
enum HilTimerMilliC$__nesc_unnamed4327 {
  HilTimerMilliC$TIMER_COUNT = 4U
};
typedef TMilli /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC$0$precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC$0$precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$timer_size;
typedef TMilli /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$precision_tag;
typedef TMilli /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$1$precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$1$precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$1$LocalTime$precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$1$precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$1$Counter$precision_tag;
typedef uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$1$Counter$size_type;
enum /*CC2420ReceiveC.Spi*/CC2420SpiC$4$__nesc_unnamed4328 {
  CC2420SpiC$4$CLIENT_ID = 4U
};
typedef uint16_t RandomMlcgC$SeedInit$parameter;
enum AMQueueP$__nesc_unnamed4329 {
  AMQueueP$NUM_CLIENTS = 2U
};
typedef TMilli /*DymoTableC.DymoTableM*/DymoTableM$0$Timer$precision_tag;
typedef TMilli /*DymoTableC.Timers*/VirtualizeTimerC$1$precision_tag;
typedef /*DymoTableC.Timers*/VirtualizeTimerC$1$precision_tag /*DymoTableC.Timers*/VirtualizeTimerC$1$TimerFrom$precision_tag;
typedef /*DymoTableC.Timers*/VirtualizeTimerC$1$precision_tag /*DymoTableC.Timers*/VirtualizeTimerC$1$Timer$precision_tag;
typedef TMilli /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Timer$precision_tag;
enum /*DymoServiceC.ConfigStorageC*/ConfigStorageC$0$__nesc_unnamed4330 {
  ConfigStorageC$0$CONFIG_ID = 0U, ConfigStorageC$0$RESOURCE_ID = 0U
};
typedef TMicro At45dbP$BusyWait$precision_tag;
typedef uint16_t At45dbP$BusyWait$size_type;
typedef TMicro HplAt45dbIOP$BusyWait$precision_tag;
typedef uint16_t HplAt45dbIOP$BusyWait$size_type;
typedef TMicro BusyWaitMicroC$BusyWait$precision_tag;
typedef uint16_t BusyWaitMicroC$BusyWait$size_type;
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  void TestM$SplitControl$startDone(error_t arg_0x40325330);
#line 117
static  void TestM$SplitControl$stopDone(error_t arg_0x40325ee0);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void TestM$stop$runTask(void);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Boot.nc"
static  void TestM$Boot$booted(void);
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Intercept.nc"
static  bool TestM$Intercept$forward(message_t *arg_0x40352428, void *arg_0x403525c8, uint8_t arg_0x40352750);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *TestM$Receive$receive(message_t *arg_0x40355d28, void *arg_0x40355ec8, uint8_t arg_0x40354068);
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void TestM$MHSend$sendDone(message_t *arg_0x403561c0, error_t arg_0x40356348);
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void TestM$Timer$fired(void);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *CC2420ActiveMessageP$SubReceive$receive(message_t *arg_0x40355d28, void *arg_0x40355ec8, uint8_t arg_0x40354068);
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  void CC2420ActiveMessageP$SubSend$sendDone(message_t *arg_0x403b3e18, error_t arg_0x403bc010);
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static  void CC2420ActiveMessageP$CC2420Config$syncDone(error_t arg_0x403c04c8);
# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static   void CC2420ActiveMessageP$RadioBackoff$default$requestCca(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x403afa78, 
# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t *arg_0x40399278);
#line 81
static   void CC2420ActiveMessageP$RadioBackoff$default$requestInitialBackoff(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x403afa78, 
# 81 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t *arg_0x4039a6f8);






static   void CC2420ActiveMessageP$RadioBackoff$default$requestCongestionBackoff(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x403afa78, 
# 88 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t *arg_0x4039acb0);
# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SendNotifier.nc"
static  void CC2420ActiveMessageP$SendNotifier$default$aboutToSend(
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x403af4c0, 
# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SendNotifier.nc"
am_addr_t arg_0x403a96b0, message_t *arg_0x403a9860);
# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static   void CC2420ActiveMessageP$SubBackoff$requestCca(message_t *arg_0x40399278);
#line 81
static   void CC2420ActiveMessageP$SubBackoff$requestInitialBackoff(message_t *arg_0x4039a6f8);






static   void CC2420ActiveMessageP$SubBackoff$requestCongestionBackoff(message_t *arg_0x4039acb0);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t CC2420ActiveMessageP$Packet$payloadLength(message_t *arg_0x40351010);
#line 115
static  void *CC2420ActiveMessageP$Packet$getPayload(message_t *arg_0x40350540, uint8_t arg_0x403506c8);
#line 95
static  uint8_t CC2420ActiveMessageP$Packet$maxPayloadLength(void);
#line 83
static  void CC2420ActiveMessageP$Packet$setPayloadLength(message_t *arg_0x40351690, uint8_t arg_0x40351818);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t CC2420ActiveMessageP$AMSend$send(
# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x403b2c18, 
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t arg_0x40358da8, message_t *arg_0x40357010, uint8_t arg_0x40357198);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *CC2420ActiveMessageP$Snoop$default$receive(
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x403b1b70, 
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x40355d28, void *arg_0x40355ec8, uint8_t arg_0x40354068);
#line 67
static  message_t *CC2420ActiveMessageP$Receive$default$receive(
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x403b1598, 
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x40355d28, void *arg_0x40355ec8, uint8_t arg_0x40354068);
# 77 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t CC2420ActiveMessageP$AMPacket$source(message_t *arg_0x40349958);
#line 57
static  am_addr_t CC2420ActiveMessageP$AMPacket$address(void);









static  am_addr_t CC2420ActiveMessageP$AMPacket$destination(message_t *arg_0x40349368);
#line 92
static  void CC2420ActiveMessageP$AMPacket$setDestination(message_t *arg_0x40348010, am_addr_t arg_0x403481a0);
#line 136
static  am_id_t CC2420ActiveMessageP$AMPacket$type(message_t *arg_0x40347968);
#line 151
static  void CC2420ActiveMessageP$AMPacket$setType(message_t *arg_0x40347f00, am_id_t arg_0x403460b0);
#line 125
static  bool CC2420ActiveMessageP$AMPacket$isForMe(message_t *arg_0x40347220);
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  error_t CC2420CsmaP$SplitControl$start(void);
#line 109
static  error_t CC2420CsmaP$SplitControl$stop(void);
# 81 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static   void CC2420CsmaP$SubBackoff$requestInitialBackoff(message_t *arg_0x4039a6f8);






static   void CC2420CsmaP$SubBackoff$requestCongestionBackoff(message_t *arg_0x4039acb0);
# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static   void CC2420CsmaP$CC2420Transmit$sendDone(message_t *arg_0x404169b0, error_t arg_0x40416b38);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  error_t CC2420CsmaP$Send$send(message_t *arg_0x403b4c68, uint8_t arg_0x403b4df0);
#line 114
static  void *CC2420CsmaP$Send$getPayload(message_t *arg_0x403bcae8, uint8_t arg_0x403bcc70);
#line 101
static  uint8_t CC2420CsmaP$Send$maxPayloadLength(void);
# 76 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
static   void CC2420CsmaP$CC2420Power$startOscillatorDone(void);
#line 56
static   void CC2420CsmaP$CC2420Power$startVRegDone(void);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static  void CC2420CsmaP$Resource$granted(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void CC2420CsmaP$sendDone_task$runTask(void);
#line 64
static  void CC2420CsmaP$stopDone_task$runTask(void);
#line 64
static  void CC2420CsmaP$startDone_task$runTask(void);
# 86 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static   bool CC2420ControlP$CC2420Config$isAddressRecognitionEnabled(void);
#line 110
static   bool CC2420ControlP$CC2420Config$isAutoAckEnabled(void);
#line 105
static   bool CC2420ControlP$CC2420Config$isHwAutoAckDefault(void);
#line 64
static   uint16_t CC2420ControlP$CC2420Config$getShortAddr(void);
#line 52
static  error_t CC2420ControlP$CC2420Config$sync(void);
#line 70
static   uint16_t CC2420ControlP$CC2420Config$getPanAddr(void);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void CC2420ControlP$StartupTimer$fired(void);
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Read.nc"
static  void CC2420ControlP$ReadRssi$default$readDone(error_t arg_0x40441ce8, CC2420ControlP$ReadRssi$val_t arg_0x40441e70);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void CC2420ControlP$syncDone$runTask(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t CC2420ControlP$Init$init(void);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static  void CC2420ControlP$SpiResource$granted(void);
#line 92
static  void CC2420ControlP$SyncResource$granted(void);
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
static   error_t CC2420ControlP$CC2420Power$startOscillator(void);
#line 90
static   error_t CC2420ControlP$CC2420Power$rxOn(void);
#line 51
static   error_t CC2420ControlP$CC2420Power$startVReg(void);
#line 63
static   error_t CC2420ControlP$CC2420Power$stopVReg(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void CC2420ControlP$sync$runTask(void);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t CC2420ControlP$Resource$release(void);
#line 78
static   error_t CC2420ControlP$Resource$request(void);
# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   void CC2420ControlP$InterruptCCA$fired(void);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static  void CC2420ControlP$RssiResource$granted(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t PlatformP$Init$init(void);
#line 51
static  error_t MotePlatformP$PlatformInit$init(void);
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$toggle(void);



static   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void);

static   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$toggle(void);



static   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set(void);

static   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$toggle(void);



static   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set(void);





static   void /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP$3$IO$makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP$3$IO$set(void);
static   void /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP$3$IO$clr(void);


static   void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void);
#line 30
static   void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void);




static   void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$set(void);
static   void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$clr(void);




static   void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$set(void);
static   void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$clr(void);




static   void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$set(void);
static   void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$clr(void);




static   void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP$9$IO$makeOutput(void);
#line 35
static   void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP$10$IO$makeOutput(void);
#line 33
static   void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP$11$IO$makeInput(void);
#line 32
static   bool /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$get(void);
static   void /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP$26$IO$makeInput(void);
#line 32
static   bool /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP$26$IO$get(void);
#line 30
static   void /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP$26$IO$clr(void);




static   void /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP$27$IO$makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP$27$IO$set(void);



static   void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$makeInput(void);
#line 32
static   bool /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$get(void);


static   void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP$29$IO$makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP$29$IO$set(void);
static   void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP$29$IO$clr(void);


static   void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$makeInput(void);
#line 32
static   bool /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$get(void);
#line 32
static   bool /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP$38$IO$get(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t MeasureClockC$Init$init(void);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t SchedulerBasicP$TaskBasic$postTask(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x402eba88);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void SchedulerBasicP$TaskBasic$default$runTask(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x402eba88);
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Scheduler.nc"
static  void SchedulerBasicP$Scheduler$init(void);
#line 61
static  void SchedulerBasicP$Scheduler$taskLoop(void);
#line 54
static  bool SchedulerBasicP$Scheduler$runNextTask(void);
# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuSleep.nc"
static   void McuSleepC$McuSleep$sleep(void);
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static   void McuSleepC$McuPowerState$update(void);
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static   Atm128_TIFR_t HplAtm128Timer0AsyncP$TimerCtrl$getInterruptFlag(void);
#line 37
static   void HplAtm128Timer0AsyncP$TimerCtrl$setControl(Atm128TimerControl_t arg_0x405cef28);
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
static   mcu_power_t HplAtm128Timer0AsyncP$McuPowerOverride$lowestState(void);
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static   int HplAtm128Timer0AsyncP$TimerAsync$compareBusy(void);
#line 32
static   void HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous(void);
# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   HplAtm128Timer0AsyncP$Compare$size_type HplAtm128Timer0AsyncP$Compare$get(void);





static   void HplAtm128Timer0AsyncP$Compare$set(HplAtm128Timer0AsyncP$Compare$size_type arg_0x405c8e40);










static   void HplAtm128Timer0AsyncP$Compare$start(void);
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   HplAtm128Timer0AsyncP$Timer$timer_size HplAtm128Timer0AsyncP$Timer$get(void);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl16.nc"
static   void HplAtm128Timer1P$TimerCtrl$setCtrlCapture(Atm128TimerCtrlCapture_t arg_0x405c04d0);
#line 37
static   Atm128TimerCtrlCapture_t HplAtm128Timer1P$TimerCtrl$getCtrlCapture(void);
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void HplAtm128Timer1P$CompareA$reset(void);
#line 45
static   void HplAtm128Timer1P$CompareA$set(HplAtm128Timer1P$CompareA$size_type arg_0x405c8e40);










static   void HplAtm128Timer1P$CompareA$start(void);


static   void HplAtm128Timer1P$CompareA$stop(void);
# 79 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static   void HplAtm128Timer1P$Capture$setEdge(bool arg_0x405cc968);
#line 55
static   void HplAtm128Timer1P$Capture$reset(void);


static   void HplAtm128Timer1P$Capture$start(void);


static   void HplAtm128Timer1P$Capture$stop(void);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void HplAtm128Timer1P$CompareB$default$fired(void);
#line 49
static   void HplAtm128Timer1P$CompareC$default$fired(void);
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   bool HplAtm128Timer1P$Timer$test(void);
#line 52
static   HplAtm128Timer1P$Timer$timer_size HplAtm128Timer1P$Timer$get(void);
#line 95
static   void HplAtm128Timer1P$Timer$setScale(uint8_t arg_0x405b58b8);
#line 58
static   void HplAtm128Timer1P$Timer$set(HplAtm128Timer1P$Timer$timer_size arg_0x405b7c50);










static   void HplAtm128Timer1P$Timer$start(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*InitOneP.InitOne*/Atm128TimerInitC$0$Init$init(void);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$overflow(void);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$size_type arg_0x4045a9e0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$size_type arg_0x4045ab70);
#line 62
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$stop(void);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$fired(void);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$overflow(void);
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static   /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$size_type /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$get(void);






static   bool /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$isOverflowPending(void);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$overflow(void);
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$overflow(void);
#line 53
static   /*Counter32khz32C.Transform32*/TransformCounterC$0$Counter$size_type /*Counter32khz32C.Transform32*/TransformCounterC$0$Counter$get(void);
# 98 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$getNow(void);
#line 92
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$size_type arg_0x4045a9e0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$size_type arg_0x4045ab70);
#line 55
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$size_type arg_0x4044f8c8);






static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$stop(void);




static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$fired(void);
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$overflow(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t NoInitC$Init$init(void);
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static   error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captureFallingEdge(void);
#line 55
static   void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$disable(void);
#line 42
static   error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captureRisingEdge(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static   void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$captured(/*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$size_type arg_0x405bc378);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$fired(void);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$disable(void);
#line 43
static   error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$enableFallingEdge(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$Irq$default$fired(void);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static   void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$IrqSignal$fired(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$default$fired(void);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$IrqSignal$fired(void);
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$clear(void);
#line 40
static   void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$disable(void);
#line 59
static   void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$edge(bool arg_0x406f48a0);
#line 35
static   void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$enable(void);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static   void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$IrqSignal$fired(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$Irq$default$fired(void);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static   void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$IrqSignal$fired(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$default$fired(void);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static   void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$IrqSignal$fired(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$default$fired(void);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static   void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$IrqSignal$fired(void);
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$clear(void);
#line 40
static   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$disable(void);
#line 59
static   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$edge(bool arg_0x406f48a0);
#line 35
static   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$enable(void);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$IrqSignal$fired(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$default$fired(void);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static   void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$IrqSignal$fired(void);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   error_t HplCC2420InterruptsP$CCA$disable(void);
#line 42
static   error_t HplCC2420InterruptsP$CCA$enableRisingEdge(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void HplCC2420InterruptsP$CCATask$runTask(void);
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static   void CC2420SpiP$SpiPacket$sendDone(uint8_t *arg_0x40770068, uint8_t *arg_0x40770210, uint16_t arg_0x407703a0, 
error_t arg_0x40770538);
# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static   error_t CC2420SpiP$Fifo$continueRead(
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40761880, 
# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t *arg_0x407564d8, uint8_t arg_0x40756660);
#line 91
static   void CC2420SpiP$Fifo$default$writeDone(
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40761880, 
# 91 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t *arg_0x40754d60, uint8_t arg_0x40754ee8, error_t arg_0x40753088);
#line 82
static   cc2420_status_t CC2420SpiP$Fifo$write(
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40761880, 
# 82 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t *arg_0x407545d8, uint8_t arg_0x40754760);
#line 51
static   cc2420_status_t CC2420SpiP$Fifo$beginRead(
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40761880, 
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t *arg_0x40757c50, uint8_t arg_0x40757dd8);
#line 71
static   void CC2420SpiP$Fifo$default$readDone(
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40761880, 
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t *arg_0x40756c90, uint8_t arg_0x40756e18, error_t arg_0x40754010);
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static   void CC2420SpiP$ChipSpiResource$abortRelease(void);







static   error_t CC2420SpiP$ChipSpiResource$attemptRelease(void);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static  void CC2420SpiP$SpiResource$granted(void);
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static   cc2420_status_t CC2420SpiP$Ram$write(
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint16_t arg_0x40760210, 
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
uint8_t arg_0x40465d08, uint8_t *arg_0x40465eb0, uint8_t arg_0x40463068);
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static   cc2420_status_t CC2420SpiP$Reg$read(
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x407608d0, 
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
uint16_t *arg_0x40461068);







static   cc2420_status_t CC2420SpiP$Reg$write(
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x407608d0, 
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
uint16_t arg_0x404615d8);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t CC2420SpiP$Resource$release(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40762ea8);
# 87 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t CC2420SpiP$Resource$immediateRequest(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40762ea8);
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t CC2420SpiP$Resource$request(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40762ea8);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static  void CC2420SpiP$Resource$default$granted(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40762ea8);
# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   bool CC2420SpiP$Resource$isOwner(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40762ea8);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void CC2420SpiP$grant$runTask(void);
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static   cc2420_status_t CC2420SpiP$Strobe$strobe(
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x4075f010);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t StateImplP$Init$init(void);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/State.nc"
static   void StateImplP$State$toIdle(
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x4079dae8);
# 66 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/State.nc"
static   bool StateImplP$State$isState(
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x4079dae8, 
# 66 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/State.nc"
uint8_t arg_0x4041a6c0);
#line 61
static   bool StateImplP$State$isIdle(
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x4079dae8);
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/State.nc"
static   error_t StateImplP$State$requestState(
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x4079dae8, 
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/State.nc"
uint8_t arg_0x4041b580);





static   void StateImplP$State$forceState(
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x4079dae8, 
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/State.nc"
uint8_t arg_0x4041bb08);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void Atm128SpiP$zeroTask$runTask(void);
# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static   error_t Atm128SpiP$SpiPacket$send(uint8_t *arg_0x40771598, uint8_t *arg_0x40771740, uint16_t arg_0x407718d0);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static  void Atm128SpiP$ResourceArbiter$granted(
# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x407b8410);
# 34 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SpiByte.nc"
static   uint8_t Atm128SpiP$SpiByte$write(uint8_t arg_0x407739d8);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static   void Atm128SpiP$Spi$dataReady(uint8_t arg_0x407cb010);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t Atm128SpiP$Resource$release(
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x407ba088);
# 87 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t Atm128SpiP$Resource$immediateRequest(
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x407ba088);
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t Atm128SpiP$Resource$request(
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x407ba088);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static  void Atm128SpiP$Resource$default$granted(
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x407ba088);
# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   bool Atm128SpiP$Resource$isOwner(
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x407ba088);
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static   void HplAtm128SpiP$SPI$sleep(void);
#line 66
static   void HplAtm128SpiP$SPI$initMaster(void);
#line 105
static   void HplAtm128SpiP$SPI$setMasterBit(bool arg_0x407c9cf0);
#line 96
static   void HplAtm128SpiP$SPI$enableInterrupt(bool arg_0x407cb558);
#line 80
static   uint8_t HplAtm128SpiP$SPI$read(void);
#line 125
static   void HplAtm128SpiP$SPI$setMasterDoubleSpeed(bool arg_0x407c5698);
#line 114
static   void HplAtm128SpiP$SPI$setClock(uint8_t arg_0x407c7540);
#line 108
static   void HplAtm128SpiP$SPI$setClockPolarity(bool arg_0x407c8570);
#line 86
static   void HplAtm128SpiP$SPI$write(uint8_t arg_0x407cca80);
#line 99
static   void HplAtm128SpiP$SPI$enableSpi(bool arg_0x407cbd28);
#line 111
static   void HplAtm128SpiP$SPI$setClockPhase(bool arg_0x407c8d50);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$Init$init(void);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static   error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(resource_client_id_t arg_0x4083b210);
#line 43
static   bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty(void);








static   bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(resource_client_id_t arg_0x4083c818);







static   resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue(void);
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$requested(
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x4084c738);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$immediateRequested(
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x4084c738);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$unconfigure(
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x4084b238);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$configure(
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x4084b238);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$release(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40831dd8);
# 87 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$immediateRequest(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40831dd8);
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$request(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40831dd8);
# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$isOwner(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40831dd8);
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
static   bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ArbiterInfo$inUse(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$runTask(void);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t HplCC2420SpiP$Resource$release(void);
#line 87
static   error_t HplCC2420SpiP$Resource$immediateRequest(void);
#line 78
static   error_t HplCC2420SpiP$Resource$request(void);
#line 118
static   bool HplCC2420SpiP$Resource$isOwner(void);
#line 92
static  void HplCC2420SpiP$SubResource$granted(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t LedsP$Init$init(void);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Leds.nc"
static   void LedsP$Leds$led0Toggle(void);
#line 72
static   void LedsP$Leds$led1Toggle(void);
#line 89
static   void LedsP$Leds$led2Toggle(void);
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static   am_addr_t ActiveMessageAddressC$amAddress(void);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static   am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void);




static   am_group_t ActiveMessageAddressC$ActiveMessageAddress$amGroup(void);
# 66 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static   void CC2420TransmitP$RadioBackoff$setCongestionBackoff(uint16_t arg_0x4039bbe0);
#line 60
static   void CC2420TransmitP$RadioBackoff$setInitialBackoff(uint16_t arg_0x4039b660);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static   void CC2420TransmitP$CaptureSFD$captured(uint16_t arg_0x406f25a0);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void CC2420TransmitP$BackoffTimer$fired(void);
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static   void CC2420TransmitP$CC2420Receive$receive(uint8_t arg_0x408f4d18, message_t *arg_0x408f4ec8);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static   error_t CC2420TransmitP$Send$send(message_t *arg_0x4040b940, bool arg_0x4040bac8);
# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static   void CC2420TransmitP$ChipSpiResource$releasing(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t CC2420TransmitP$Init$init(void);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static  void CC2420TransmitP$SpiResource$granted(void);
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t CC2420TransmitP$StdControl$start(void);









static  error_t CC2420TransmitP$StdControl$stop(void);
# 91 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static   void CC2420TransmitP$TXFIFO$writeDone(uint8_t *arg_0x40754d60, uint8_t arg_0x40754ee8, error_t arg_0x40753088);
#line 71
static   void CC2420TransmitP$TXFIFO$readDone(uint8_t *arg_0x40756c90, uint8_t arg_0x40756e18, error_t arg_0x40754010);
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static  void CC2420ReceiveP$CC2420Config$syncDone(error_t arg_0x403c04c8);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void CC2420ReceiveP$receiveDone_task$runTask(void);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static   void CC2420ReceiveP$CC2420Receive$sfd_dropped(void);
#line 49
static   void CC2420ReceiveP$CC2420Receive$sfd(uint32_t arg_0x408f4420);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t CC2420ReceiveP$Init$init(void);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static  void CC2420ReceiveP$SpiResource$granted(void);
# 91 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static   void CC2420ReceiveP$RXFIFO$writeDone(uint8_t *arg_0x40754d60, uint8_t arg_0x40754ee8, error_t arg_0x40753088);
#line 71
static   void CC2420ReceiveP$RXFIFO$readDone(uint8_t *arg_0x40756c90, uint8_t arg_0x40756e18, error_t arg_0x40754010);
# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   void CC2420ReceiveP$InterruptFIFOP$fired(void);
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t CC2420ReceiveP$StdControl$start(void);









static  error_t CC2420ReceiveP$StdControl$stop(void);
# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
static   void CC2420PacketP$PacketTimeStamp32khz$clear(message_t *arg_0x40385120);







static   void CC2420PacketP$PacketTimeStamp32khz$set(message_t *arg_0x40385648, CC2420PacketP$PacketTimeStamp32khz$size_type arg_0x403857d8);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static   cc2420_header_t *CC2420PacketP$CC2420PacketBody$getHeader(message_t *arg_0x403b92d0);




static   cc2420_metadata_t *CC2420PacketP$CC2420PacketBody$getMetadata(message_t *arg_0x403b9820);
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
static   uint8_t CC2420PacketP$PacketTimeSyncOffset$get(message_t *arg_0x408df578);
#line 39
static   bool CC2420PacketP$PacketTimeSyncOffset$isSet(message_t *arg_0x408df030);
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc"
static   error_t CC2420PacketP$Acks$requestAck(message_t *arg_0x4037f818);
#line 74
static   bool CC2420PacketP$Acks$wasAcked(message_t *arg_0x403886c0);
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void);
# 98 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow(void);
#line 92
static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type arg_0x4045a9e0, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type arg_0x4045ab70);
#line 105
static   /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm(void);
#line 62
static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init(void);
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static   /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get(void);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired(void);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void);
# 125 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static  uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void);
#line 118
static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t arg_0x40360738, uint32_t arg_0x403608c8);
#line 67
static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void);
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void);
#line 125
static  uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$getNow(
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40a15090);
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40a15090);
# 140 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static  uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$getdt(
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40a15090);
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40a15090, 
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t arg_0x4035a420);
#line 118
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShotAt(
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40a15090, 
# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t arg_0x40360738, uint32_t arg_0x403608c8);
#line 62
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40a15090, 
# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t arg_0x4035a9f0);




static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40a15090);
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$1$Counter$overflow(void);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Random.nc"
static   uint16_t RandomMlcgC$Random$rand16(void);
#line 35
static   uint32_t RandomMlcgC$Random$rand32(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t RandomMlcgC$Init$init(void);
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  void UniqueSendP$SubSend$sendDone(message_t *arg_0x403b3e18, error_t arg_0x403bc010);
#line 64
static  error_t UniqueSendP$Send$send(message_t *arg_0x403b4c68, uint8_t arg_0x403b4df0);
#line 114
static  void *UniqueSendP$Send$getPayload(message_t *arg_0x403bcae8, uint8_t arg_0x403bcc70);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t UniqueSendP$Init$init(void);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *UniqueReceiveP$SubReceive$receive(message_t *arg_0x40355d28, void *arg_0x40355ec8, uint8_t arg_0x40354068);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t UniqueReceiveP$Init$init(void);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *UniqueReceiveP$DuplicateReceive$default$receive(message_t *arg_0x40355d28, void *arg_0x40355ec8, uint8_t arg_0x40354068);
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  void CC2420TinyosNetworkP$SubSend$sendDone(message_t *arg_0x403b3e18, error_t arg_0x403bc010);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *CC2420TinyosNetworkP$SubReceive$receive(message_t *arg_0x40355d28, void *arg_0x40355ec8, uint8_t arg_0x40354068);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  error_t CC2420TinyosNetworkP$Send$send(message_t *arg_0x403b4c68, uint8_t arg_0x403b4df0);
#line 114
static  void *CC2420TinyosNetworkP$Send$getPayload(message_t *arg_0x403bcae8, uint8_t arg_0x403bcc70);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *CC2420TinyosNetworkP$NonTinyosReceive$default$receive(
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
uint8_t arg_0x40aabd88, 
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x40355d28, void *arg_0x40355ec8, uint8_t arg_0x40354068);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t /*DymoNetworkC.MHQueue.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t arg_0x40358da8, message_t *arg_0x40357010, uint8_t arg_0x40357198);
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  void /*DymoNetworkC.MHQueue.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(message_t *arg_0x403b3e18, error_t arg_0x403bc010);
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40b169c8, 
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0x403561c0, error_t arg_0x40356348);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40b16068, 
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
message_t *arg_0x403b4c68, uint8_t arg_0x403b4df0);
#line 89
static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40b16068, 
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
message_t *arg_0x403b3e18, error_t arg_0x403bc010);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void);
#line 64
static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask(void);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t /*DymoNetworkC.DymoQueue.AMQueueEntryP*/AMQueueEntryP$1$AMSend$send(am_addr_t arg_0x40358da8, message_t *arg_0x40357010, uint8_t arg_0x40357198);
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  void /*DymoNetworkC.DymoQueue.AMQueueEntryP*/AMQueueEntryP$1$Send$sendDone(message_t *arg_0x403b3e18, error_t arg_0x403bc010);
# 27 "../../../tos/lib/net/tymo/dymo/DymoTable.nc"
static  bool /*DymoTableC.DymoTableM*/DymoTableM$0$DymoTable$isSuperior(const rt_info_t *arg_0x40b4ab58, dymo_msg_t arg_0x40b4acf0);
#line 25
static  error_t /*DymoTableC.DymoTableM*/DymoTableM$0$DymoTable$update(const rt_info_t *arg_0x40b4a2c0, dymo_msg_t arg_0x40b4a458);
# 26 "../../../tos/lib/net/tymo/RoutingTable.nc"
static  error_t /*DymoTableC.DymoTableM*/DymoTableM$0$RoutingTable$getRoute(addr_t arg_0x40b4e5f0, rt_info_t *arg_0x40b4e7a0);

static  error_t /*DymoTableC.DymoTableM*/DymoTableM$0$RoutingTable$getForwardingRoute(addr_t arg_0x40b4ede0, rt_info_t *arg_0x40b4c010);
# 16 "../../../tos/lib/net/tymo/LinkMonitor.nc"
static  void /*DymoTableC.DymoTableM*/DymoTableM$0$LinkMonitor$brokenLink(am_addr_t arg_0x40b30598);
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t /*DymoTableC.DymoTableM*/DymoTableM$0$StdControl$start(void);









static  error_t /*DymoTableC.DymoTableM*/DymoTableM$0$StdControl$stop(void);
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*DymoTableC.DymoTableM*/DymoTableM$0$Timer$fired(
# 22 "../../../tos/lib/net/tymo/dymo/DymoTableM.nc"
uint8_t arg_0x40b45bb8);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*DymoTableC.Timers*/VirtualizeTimerC$1$updateFromTimer$runTask(void);
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*DymoTableC.Timers*/VirtualizeTimerC$1$TimerFrom$fired(void);
#line 62
static  void /*DymoTableC.Timers*/VirtualizeTimerC$1$Timer$startOneShot(
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40a15090, 
# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t arg_0x4035a9f0);




static  void /*DymoTableC.Timers*/VirtualizeTimerC$1$Timer$stop(
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40a15090);
# 24 "../../../tos/lib/net/tymo/RouteSelect.nc"
static  fw_action_t MHEngineM$RouteSelect$selectRoute(message_t *arg_0x40b9ecc0, addr_t *arg_0x40b9ee70, uint8_t *arg_0x40b9d030);
# 35 "../../../tos/lib/net/tymo/RoutingTable.nc"
static  void MHEngineM$RoutingTable$evicted(const rt_info_t *arg_0x40b4c4e8, reason_t arg_0x40b4c678);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t MHPacketM$Packet$payloadLength(message_t *arg_0x40351010);
#line 115
static  void *MHPacketM$Packet$getPayload(message_t *arg_0x40350540, uint8_t arg_0x403506c8);
#line 83
static  void MHPacketM$Packet$setPayloadLength(message_t *arg_0x40351690, uint8_t arg_0x40351818);
# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t MHPacketM$MHPacket$address(void);









static  am_addr_t MHPacketM$MHPacket$destination(message_t *arg_0x40349368);
#line 110
static  void MHPacketM$MHPacket$setSource(message_t *arg_0x403488b0, am_addr_t arg_0x40348a40);
#line 92
static  void MHPacketM$MHPacket$setDestination(message_t *arg_0x40348010, am_addr_t arg_0x403481a0);
#line 136
static  am_id_t MHPacketM$MHPacket$type(message_t *arg_0x40347968);
#line 151
static  void MHPacketM$MHPacket$setType(message_t *arg_0x40347f00, am_id_t arg_0x403460b0);
#line 125
static  bool MHPacketM$MHPacket$isForMe(message_t *arg_0x40347220);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t */*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$SubReceive$receive(message_t *arg_0x40355d28, void *arg_0x40355ec8, uint8_t arg_0x40354068);
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$SubSend$sendDone(message_t *arg_0x403561c0, error_t arg_0x40356348);
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Intercept.nc"
static  bool /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Intercept$default$forward(
# 23 "../../../tos/lib/net/tymo/ForwardingEngineM.nc"
uint8_t arg_0x40bcec70, 
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Intercept.nc"
message_t *arg_0x40352428, void *arg_0x403525c8, uint8_t arg_0x40352750);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$AMSend$send(
# 21 "../../../tos/lib/net/tymo/ForwardingEngineM.nc"
uint8_t arg_0x40bcfd68, 
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t arg_0x40358da8, message_t *arg_0x40357010, uint8_t arg_0x40357198);
#line 99
static  void /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$AMSend$default$sendDone(
# 21 "../../../tos/lib/net/tymo/ForwardingEngineM.nc"
uint8_t arg_0x40bcfd68, 
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0x403561c0, error_t arg_0x40356348);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t */*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Receive$default$receive(
# 22 "../../../tos/lib/net/tymo/ForwardingEngineM.nc"
uint8_t arg_0x40bce6b8, 
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x40355d28, void *arg_0x40355ec8, uint8_t arg_0x40354068);
# 5 "../../../tos/lib/net/tymo/mh/MHControl.nc"
static  void /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$MHControl$default$sendFailed(message_t *arg_0x4037ea10, uint8_t arg_0x4037eb98);
#line 3
static  void /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$MHControl$default$msgReceived(message_t *arg_0x4037e560);
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Timer$fired(void);
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  error_t DymoEngineM$SplitControl$start(void);
# 36 "../../../tos/lib/net/tymo/dymo/DymoTable.nc"
static  void DymoEngineM$DymoTable$brokenRouteNeeded(const rt_info_t *arg_0x40b49768);
#line 34
static  void DymoEngineM$DymoTable$routeNeeded(addr_t arg_0x40b491a0);
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void DymoEngineM$AMSend$sendDone(message_t *arg_0x403561c0, error_t arg_0x40356348);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void DymoEngineM$issueRERR$runTask(void);
# 36 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Mount.nc"
static  void DymoEngineM$Mount$mountDone(error_t arg_0x40bfd9e0);
# 35 "../../../tos/lib/net/tymo/RoutingTable.nc"
static  void DymoEngineM$RoutingTable$evicted(const rt_info_t *arg_0x40b4c4e8, reason_t arg_0x40b4c678);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *DymoEngineM$Receive$receive(message_t *arg_0x40355d28, void *arg_0x40355ec8, uint8_t arg_0x40354068);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void DymoEngineM$issueRREP$runTask(void);
#line 64
static  void DymoEngineM$forward$runTask(void);
#line 64
static  void DymoEngineM$issueRREQ$runTask(void);
# 95 "../../../tos/lib/net/tymo/dymo/DymoPacket.nc"
static  proc_action_t DymoEngineM$DymoPacket$infoProcessed(message_t *arg_0x40c02b40, rt_info_t *arg_0x40c02cf0);
#line 85
static  proc_action_t DymoEngineM$DymoPacket$hopsProcessed(message_t *arg_0x40c02190, uint8_t arg_0x40c02320, uint8_t arg_0x40c024b0);
#line 101
static  void DymoEngineM$DymoPacket$messageProcessed(message_t *arg_0x40c013d8);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
static  void DymoEngineM$ConfigStorage$writeDone(storage_addr_t arg_0x40c1eaf0, void *arg_0x40c1ec90, storage_len_t arg_0x40c1ee20, 
error_t arg_0x40c1d010);
#line 133
static  void DymoEngineM$ConfigStorage$commitDone(error_t arg_0x40c1db58);
#line 80
static  void DymoEngineM$ConfigStorage$readDone(storage_addr_t arg_0x40c20630, void *arg_0x40c207d0, storage_len_t arg_0x40c20960, 
error_t arg_0x40c20af8);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void DymoPacketM$processMessage$runTask(void);
# 74 "../../../tos/lib/net/tymo/dymo/DymoPacket.nc"
static  void DymoPacketM$DymoPacket$startProcessing(message_t *arg_0x40c03918, message_t *arg_0x40c03ac8);
#line 58
static  error_t DymoPacketM$DymoPacket$addInfo(message_t *arg_0x40c030d0, const rt_info_t *arg_0x40c032a0);
#line 45
static  void DymoPacketM$DymoPacket$createRM(message_t *arg_0x40c054f0, dymo_msg_t arg_0x40c05688, 
const rt_info_t *arg_0x40c05868, const rt_info_t *arg_0x40c05a38);
#line 29
static  uint16_t DymoPacketM$DymoPacket$getSize(message_t *arg_0x40c05010);
#line 24
static  dymo_msg_t DymoPacketM$DymoPacket$getType(message_t *arg_0x40c06ad8);
# 85 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45db.nc"
static  void ConfigStorageP$At45db$copyPageDone(error_t arg_0x40c95508);
#line 125
static  void ConfigStorageP$At45db$syncDone(error_t arg_0x40cc0330);
#line 143
static  void ConfigStorageP$At45db$flushDone(error_t arg_0x40cbf200);
#line 69
static  void ConfigStorageP$At45db$writeDone(error_t arg_0x40c96688);
#line 105
static  void ConfigStorageP$At45db$eraseDone(error_t arg_0x40c94358);
#line 183
static  void ConfigStorageP$At45db$computeCrcDone(error_t arg_0x40cbd5e8, uint16_t arg_0x40cbd778);
#line 162
static  void ConfigStorageP$At45db$readDone(error_t arg_0x40cbe3b0);
# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static  int ConfigStorageP$BConfig$flipped(
# 27 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40c9ab00);
# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static  int ConfigStorageP$BConfig$isConfig(
# 27 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40c9ab00);
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static  int ConfigStorageP$BConfig$writeHook(
# 27 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40c9ab00);
# 25 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Mount.nc"
static  error_t ConfigStorageP$Mount$mount(
# 25 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40ca0ec0);
# 36 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Mount.nc"
static  void ConfigStorageP$Mount$default$mountDone(
# 25 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40ca0ec0, 
# 36 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Mount.nc"
error_t arg_0x40bfd9e0);
# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
static  void ConfigStorageP$BlockRead$computeCrcDone(
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40cb7eb8, 
# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
storage_addr_t arg_0x40cb7010, storage_len_t arg_0x40cb71a0, 
uint16_t arg_0x40cb7340, error_t arg_0x40cb74c8);
#line 67
static  void ConfigStorageP$BlockRead$readDone(
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40cb7eb8, 
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
storage_addr_t arg_0x40cb9ac0, void *arg_0x40cb9c60, storage_len_t arg_0x40cb9df0, 
error_t arg_0x40cb8010);
# 112 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
static  void ConfigStorageP$BlockWrite$syncDone(
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40cb1488, 
# 112 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
error_t arg_0x40cb2ed0);
#line 71
static  void ConfigStorageP$BlockWrite$writeDone(
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40cb1488, 
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
storage_addr_t arg_0x40cb3598, void *arg_0x40cb3738, storage_len_t arg_0x40cb38c8, 
error_t arg_0x40cb3a60);
#line 91
static  void ConfigStorageP$BlockWrite$eraseDone(
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40cb1488, 
# 91 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
error_t arg_0x40cb24f8);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
static  error_t ConfigStorageP$ConfigStorage$read(
# 26 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40c9f5b8, 
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
storage_addr_t arg_0x40c219a0, void *arg_0x40c21b40, storage_len_t arg_0x40c21cd0);
#line 110
static  void ConfigStorageP$ConfigStorage$default$writeDone(
# 26 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40c9f5b8, 
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
storage_addr_t arg_0x40c1eaf0, void *arg_0x40c1ec90, storage_len_t arg_0x40c1ee20, 
error_t arg_0x40c1d010);
#line 124
static  error_t ConfigStorageP$ConfigStorage$commit(
# 26 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40c9f5b8);
# 152 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
static  bool ConfigStorageP$ConfigStorage$valid(
# 26 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40c9f5b8);
# 97 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
static  error_t ConfigStorageP$ConfigStorage$write(
# 26 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40c9f5b8, 
# 97 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
storage_addr_t arg_0x40c1e100, void *arg_0x40c1e2a0, storage_len_t arg_0x40c1e430);
#line 133
static  void ConfigStorageP$ConfigStorage$default$commitDone(
# 26 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40c9f5b8, 
# 133 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
error_t arg_0x40c1db58);
#line 80
static  void ConfigStorageP$ConfigStorage$default$readDone(
# 26 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40c9f5b8, 
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
storage_addr_t arg_0x40c20630, void *arg_0x40c207d0, storage_len_t arg_0x40c20960, 
error_t arg_0x40c20af8);
# 85 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45db.nc"
static  void BlockStorageP$At45db$copyPageDone(error_t arg_0x40c95508);
#line 125
static  void BlockStorageP$At45db$syncDone(error_t arg_0x40cc0330);
#line 143
static  void BlockStorageP$At45db$flushDone(error_t arg_0x40cbf200);
#line 69
static  void BlockStorageP$At45db$writeDone(error_t arg_0x40c96688);
#line 105
static  void BlockStorageP$At45db$eraseDone(error_t arg_0x40c94358);
#line 183
static  void BlockStorageP$At45db$computeCrcDone(error_t arg_0x40cbd5e8, uint16_t arg_0x40cbd778);
#line 162
static  void BlockStorageP$At45db$readDone(error_t arg_0x40cbe3b0);
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
static  error_t BlockStorageP$BlockWrite$write(
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x40d1e8e8, 
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
storage_addr_t arg_0x40cb4b58, void *arg_0x40cb4cf8, storage_len_t arg_0x40cb4e88);
#line 103
static  error_t BlockStorageP$BlockWrite$sync(
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x40d1e8e8);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
static  error_t BlockStorageP$BlockRead$read(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x40d1d3e0, 
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
storage_addr_t arg_0x40cb9100, void *arg_0x40cb92a0, storage_len_t arg_0x40cb9430);
#line 83
static  error_t BlockStorageP$BlockRead$computeCrc(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x40d1d3e0, 
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
storage_addr_t arg_0x40cb85f8, storage_len_t arg_0x40cb8788, 
uint16_t arg_0x40cb8928);
#line 103
static  storage_len_t BlockStorageP$BlockRead$getSize(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x40d1d3e0);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static  at45page_t BlockStorageP$BConfig$npages(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x40d1a4f0);
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static  at45page_t BlockStorageP$BConfig$remap(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x40d1a4f0, 
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
at45page_t arg_0x40c9a520);
#line 44
static  void BlockStorageP$BConfig$writeContinue(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x40d1a4f0, 
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
error_t arg_0x40c9bb88);
# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
static  at45page_t BlockStorageP$At45dbVolume$default$volumeSize(
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x40d174d0);
# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
static  at45page_t BlockStorageP$At45dbVolume$default$remap(
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x40d174d0, 
# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
at45page_t arg_0x40d18b98);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t BlockStorageP$Resource$default$release(
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x40d17b68);
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t BlockStorageP$Resource$default$request(
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x40d17b68);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static  void BlockStorageP$Resource$granted(
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x40d17b68);
# 163 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45db.nc"
static  void At45dbP$HplAt45db$crcDone(uint16_t arg_0x40d50dd0);
#line 79
static  void At45dbP$HplAt45db$flushDone(void);
#line 185
static  void At45dbP$HplAt45db$writeDone(void);
#line 35
static  void At45dbP$HplAt45db$waitIdleDone(void);
#line 47
static  void At45dbP$HplAt45db$waitCompareDone(bool arg_0x40d57100);
#line 106
static  void At45dbP$HplAt45db$eraseDone(void);
#line 93
static  void At45dbP$HplAt45db$compareDone(void);
#line 61
static  void At45dbP$HplAt45db$fillDone(void);
#line 141
static  void At45dbP$HplAt45db$readDone(void);
# 155 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45db.nc"
static  void At45dbP$At45db$read(at45page_t arg_0x40cbf748, at45pageoffset_t arg_0x40cbf8e0, 
void *arg_0x40cbfa90, at45pageoffset_t arg_0x40cbfc28);
#line 80
static  void At45dbP$At45db$copyPage(at45page_t arg_0x40c96be8, at45page_t arg_0x40c96d78);
#line 100
static  void At45dbP$At45db$erase(at45page_t arg_0x40c95a30, uint8_t arg_0x40c95bc0);
#line 120
static  void At45dbP$At45db$syncAll(void);
#line 62
static  void At45dbP$At45db$write(at45page_t arg_0x40c97b20, at45pageoffset_t arg_0x40c97cb8, 
void *arg_0x40c97e68, at45pageoffset_t arg_0x40c96030);
#line 176
static  void At45dbP$At45db$computeCrc(at45page_t arg_0x40cbe908, at45pageoffset_t arg_0x40cbeaa0, 
at45pageoffset_t arg_0x40cbec48, uint16_t arg_0x40cbedd8);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void At45dbP$taskSuccess$runTask(void);
#line 64
static  void At45dbP$taskFail$runTask(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t At45dbP$Init$init(void);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45db.nc"
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$waitCompare(void);
#line 100
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$erase(uint8_t arg_0x40d547f8, at45page_t arg_0x40d54988);
#line 30
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$waitIdle(void);
#line 73
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$flush(uint8_t arg_0x40d560f8, at45page_t arg_0x40d56288);
#line 178
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$write(uint8_t arg_0x40d4f328, at45page_t arg_0x40d4f4b8, at45pageoffset_t arg_0x40d4f650, 
uint8_t *arg_0x40d4f808, at45pageoffset_t arg_0x40d4f9a0);
#line 87
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$compare(uint8_t arg_0x40d56c58, at45page_t arg_0x40d56de8);
#line 157
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$crc(uint8_t arg_0x40d50010, at45page_t arg_0x40d501a0, at45pageoffset_t arg_0x40d50338, 
at45pageoffset_t arg_0x40d504e0, uint16_t arg_0x40d50670);
#line 119
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$readBuffer(uint8_t arg_0x40d53250, at45pageoffset_t arg_0x40d533e8, 
uint8_t *arg_0x40d535a0, uint16_t arg_0x40d53730);
#line 55
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$fill(uint8_t arg_0x40d57640, at45page_t arg_0x40d577d0);
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45dbByte.nc"
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45dbByte$idle(void);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$Resource$granted(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void HplAt45dbIOP$InInterrupt$fired(void);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45dbByte.nc"
static  bool HplAt45dbIOP$HplAt45dbByte$getCompareStatus(void);
#line 31
static  void HplAt45dbIOP$HplAt45dbByte$waitIdle(void);
#line 47
static  void HplAt45dbIOP$HplAt45dbByte$select(void);




static  void HplAt45dbIOP$HplAt45dbByte$deselect(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t HplAt45dbIOP$Init$init(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void HplAt45dbIOP$avail$runTask(void);
# 34 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SpiByte.nc"
static   uint8_t HplAt45dbIOP$FlashSpi$write(uint8_t arg_0x407739d8);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/BusyWait.nc"
static   void BusyWaitMicroC$BusyWait$wait(BusyWaitMicroC$BusyWait$size_type arg_0x40d7b190);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$ResourceConfigure$default$unconfigure(void);
#line 49
static   void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$ResourceConfigure$default$configure(void);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$Resource$release(void);
#line 78
static   error_t /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$Resource$request(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$granted$runTask(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$Init$init(void);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static   error_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$enqueue(resource_client_id_t arg_0x4083b210);
#line 43
static   bool /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$isEmpty(void);








static   bool /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$isEnqueued(resource_client_id_t arg_0x4083c818);







static   resource_client_id_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$dequeue(void);
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static   void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40e2ced0);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40e2a0f8);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40e2a0f8);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
static   error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$release(void);
#line 73
static   void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$default$requested(void);
#line 46
static   void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$default$granted(void);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Resource$release(
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40e2c590);
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Resource$request(
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40e2c590);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static  void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Resource$default$granted(
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40e2c590);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$grantedTask$runTask(void);
# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
static  at45page_t At45dbStorageManagerC$At45dbVolume$volumeSize(
# 18 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbStorageManagerC.nc"
volume_id_t arg_0x40e36068);
# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
static  at45page_t At45dbStorageManagerC$At45dbVolume$remap(
# 18 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbStorageManagerC.nc"
volume_id_t arg_0x40e36068, 
# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
at45page_t arg_0x40d18b98);
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  error_t NetControlM$SplitControl$start(void);
#line 109
static  error_t NetControlM$SplitControl$stop(void);
#line 92
static  void NetControlM$AMControl$startDone(error_t arg_0x40325330);
#line 117
static  void NetControlM$AMControl$stopDone(error_t arg_0x40325ee0);
#line 92
static  void NetControlM$EngineControl$startDone(error_t arg_0x40325330);
#line 83
static  error_t TestM$SplitControl$start(void);
#line 109
static  error_t TestM$SplitControl$stop(void);
# 115 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
static  void *TestM$Packet$getPayload(message_t *arg_0x40350540, uint8_t arg_0x403506c8);
# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t TestM$MHPacket$address(void);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t TestM$MHSend$send(am_addr_t arg_0x40358da8, message_t *arg_0x40357010, uint8_t arg_0x40357198);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Leds.nc"
static   void TestM$Leds$led0Toggle(void);
#line 72
static   void TestM$Leds$led1Toggle(void);
#line 89
static   void TestM$Leds$led2Toggle(void);
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void TestM$Timer$startPeriodic(uint32_t arg_0x4035a420);
# 49 "TestM.nc"
enum TestM$__nesc_unnamed4331 {
#line 49
  TestM$stop = 0U
};
#line 49
typedef int TestM$__nesc_sillytask_stop[TestM$stop];
#line 23
message_t TestM$packet;

enum TestM$__nesc_unnamed4332 {
  TestM$ORIGIN = 1, 
  TestM$TARGET = 3
};
#line 40
static void TestM$setLeds(uint16_t val);








static inline  void TestM$stop$runTask(void);



static inline  void TestM$Boot$booted(void);



static inline  void TestM$SplitControl$startDone(error_t e);





static inline  void TestM$Timer$fired(void);
#line 75
static  void TestM$MHSend$sendDone(message_t *msg, error_t e);
#line 87
static inline  message_t *TestM$Receive$receive(message_t *msg, void *payload, uint8_t len);










static inline  bool TestM$Intercept$forward(message_t *msg, void *payload, uint8_t len);




static inline  void TestM$SplitControl$stopDone(error_t e);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  error_t CC2420ActiveMessageP$SubSend$send(message_t *arg_0x403b4c68, uint8_t arg_0x403b4df0);
#line 114
static  void *CC2420ActiveMessageP$SubSend$getPayload(message_t *arg_0x403bcae8, uint8_t arg_0x403bcc70);
# 70 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static   uint16_t CC2420ActiveMessageP$CC2420Config$getPanAddr(void);
# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static   void CC2420ActiveMessageP$RadioBackoff$requestCca(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x403afa78, 
# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t *arg_0x40399278);
#line 81
static   void CC2420ActiveMessageP$RadioBackoff$requestInitialBackoff(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x403afa78, 
# 81 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t *arg_0x4039a6f8);






static   void CC2420ActiveMessageP$RadioBackoff$requestCongestionBackoff(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x403afa78, 
# 88 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t *arg_0x4039acb0);
# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SendNotifier.nc"
static  void CC2420ActiveMessageP$SendNotifier$aboutToSend(
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x403af4c0, 
# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SendNotifier.nc"
am_addr_t arg_0x403a96b0, message_t *arg_0x403a9860);
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void CC2420ActiveMessageP$AMSend$sendDone(
# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x403b2c18, 
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0x403561c0, error_t arg_0x40356348);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *CC2420ActiveMessageP$Snoop$receive(
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x403b1b70, 
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x40355d28, void *arg_0x40355ec8, uint8_t arg_0x40354068);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static   am_addr_t CC2420ActiveMessageP$ActiveMessageAddress$amAddress(void);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static   cc2420_header_t *CC2420ActiveMessageP$CC2420PacketBody$getHeader(message_t *arg_0x403b92d0);




static   cc2420_metadata_t *CC2420ActiveMessageP$CC2420PacketBody$getMetadata(message_t *arg_0x403b9820);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *CC2420ActiveMessageP$Receive$receive(
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x403b1598, 
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x40355d28, void *arg_0x40355ec8, uint8_t arg_0x40354068);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static  error_t CC2420ActiveMessageP$AMSend$send(am_id_t id, am_addr_t addr, 
message_t *msg, 
uint8_t len);
#line 88
static inline  am_addr_t CC2420ActiveMessageP$AMPacket$address(void);



static  am_addr_t CC2420ActiveMessageP$AMPacket$destination(message_t *amsg);




static inline  am_addr_t CC2420ActiveMessageP$AMPacket$source(message_t *amsg);




static  void CC2420ActiveMessageP$AMPacket$setDestination(message_t *amsg, am_addr_t addr);









static inline  bool CC2420ActiveMessageP$AMPacket$isForMe(message_t *amsg);




static  am_id_t CC2420ActiveMessageP$AMPacket$type(message_t *amsg);




static  void CC2420ActiveMessageP$AMPacket$setType(message_t *amsg, am_id_t type);
#line 147
static  uint8_t CC2420ActiveMessageP$Packet$payloadLength(message_t *msg);



static  void CC2420ActiveMessageP$Packet$setPayloadLength(message_t *msg, uint8_t len);



static inline  uint8_t CC2420ActiveMessageP$Packet$maxPayloadLength(void);



static inline  void *CC2420ActiveMessageP$Packet$getPayload(message_t *msg, uint8_t len);





static inline  void CC2420ActiveMessageP$SubSend$sendDone(message_t *msg, error_t result);





static inline  message_t *CC2420ActiveMessageP$SubReceive$receive(message_t *msg, void *payload, uint8_t len);
#line 191
static inline  void CC2420ActiveMessageP$CC2420Config$syncDone(error_t error);





static inline   void CC2420ActiveMessageP$SubBackoff$requestInitialBackoff(message_t *msg);




static inline   void CC2420ActiveMessageP$SubBackoff$requestCongestionBackoff(message_t *msg);



static inline   void CC2420ActiveMessageP$SubBackoff$requestCca(message_t *msg);
#line 237
static inline   message_t *CC2420ActiveMessageP$Receive$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len);



static inline   message_t *CC2420ActiveMessageP$Snoop$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len);






static inline   void CC2420ActiveMessageP$SendNotifier$default$aboutToSend(am_id_t amId, am_addr_t addr, message_t *msg);

static inline    void CC2420ActiveMessageP$RadioBackoff$default$requestInitialBackoff(am_id_t id, 
message_t *msg);


static inline    void CC2420ActiveMessageP$RadioBackoff$default$requestCongestionBackoff(am_id_t id, 
message_t *msg);


static inline    void CC2420ActiveMessageP$RadioBackoff$default$requestCca(am_id_t id, 
message_t *msg);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  void CC2420CsmaP$SplitControl$startDone(error_t arg_0x40325330);
#line 117
static  void CC2420CsmaP$SplitControl$stopDone(error_t arg_0x40325ee0);
# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static   void CC2420CsmaP$RadioBackoff$requestCca(message_t *arg_0x40399278);
#line 81
static   void CC2420CsmaP$RadioBackoff$requestInitialBackoff(message_t *arg_0x4039a6f8);






static   void CC2420CsmaP$RadioBackoff$requestCongestionBackoff(message_t *arg_0x4039acb0);
#line 66
static   void CC2420CsmaP$SubBackoff$setCongestionBackoff(uint16_t arg_0x4039bbe0);
#line 60
static   void CC2420CsmaP$SubBackoff$setInitialBackoff(uint16_t arg_0x4039b660);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static   error_t CC2420CsmaP$CC2420Transmit$send(message_t *arg_0x4040b940, bool arg_0x4040bac8);
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  void CC2420CsmaP$Send$sendDone(message_t *arg_0x403b3e18, error_t arg_0x403bc010);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Random.nc"
static   uint16_t CC2420CsmaP$Random$rand16(void);
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t CC2420CsmaP$SubControl$start(void);









static  error_t CC2420CsmaP$SubControl$stop(void);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static   cc2420_header_t *CC2420CsmaP$CC2420PacketBody$getHeader(message_t *arg_0x403b92d0);




static   cc2420_metadata_t *CC2420CsmaP$CC2420PacketBody$getMetadata(message_t *arg_0x403b9820);
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
static   error_t CC2420CsmaP$CC2420Power$startOscillator(void);
#line 90
static   error_t CC2420CsmaP$CC2420Power$rxOn(void);
#line 51
static   error_t CC2420CsmaP$CC2420Power$startVReg(void);
#line 63
static   error_t CC2420CsmaP$CC2420Power$stopVReg(void);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t CC2420CsmaP$Resource$release(void);
#line 78
static   error_t CC2420CsmaP$Resource$request(void);
# 66 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/State.nc"
static   bool CC2420CsmaP$SplitControlState$isState(uint8_t arg_0x4041a6c0);
#line 45
static   error_t CC2420CsmaP$SplitControlState$requestState(uint8_t arg_0x4041b580);





static   void CC2420CsmaP$SplitControlState$forceState(uint8_t arg_0x4041bb08);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t CC2420CsmaP$sendDone_task$postTask(void);
#line 56
static   error_t CC2420CsmaP$stopDone_task$postTask(void);
#line 56
static   error_t CC2420CsmaP$startDone_task$postTask(void);
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
enum CC2420CsmaP$__nesc_unnamed4333 {
#line 74
  CC2420CsmaP$startDone_task = 1U
};
#line 74
typedef int CC2420CsmaP$__nesc_sillytask_startDone_task[CC2420CsmaP$startDone_task];

enum CC2420CsmaP$__nesc_unnamed4334 {
#line 76
  CC2420CsmaP$stopDone_task = 2U
};
#line 76
typedef int CC2420CsmaP$__nesc_sillytask_stopDone_task[CC2420CsmaP$stopDone_task];
enum CC2420CsmaP$__nesc_unnamed4335 {
#line 77
  CC2420CsmaP$sendDone_task = 3U
};
#line 77
typedef int CC2420CsmaP$__nesc_sillytask_sendDone_task[CC2420CsmaP$sendDone_task];
#line 58
enum CC2420CsmaP$__nesc_unnamed4336 {
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
#line 97
static inline  error_t CC2420CsmaP$SplitControl$stop(void);
#line 123
static inline  error_t CC2420CsmaP$Send$send(message_t *p_msg, uint8_t len);
#line 158
static  void *CC2420CsmaP$Send$getPayload(message_t *m, uint8_t len);








static inline  uint8_t CC2420CsmaP$Send$maxPayloadLength(void);
#line 199
static inline   void CC2420CsmaP$CC2420Transmit$sendDone(message_t *p_msg, error_t err);




static inline   void CC2420CsmaP$CC2420Power$startVRegDone(void);



static inline  void CC2420CsmaP$Resource$granted(void);



static inline   void CC2420CsmaP$CC2420Power$startOscillatorDone(void);




static inline   void CC2420CsmaP$SubBackoff$requestInitialBackoff(message_t *msg);






static inline   void CC2420CsmaP$SubBackoff$requestCongestionBackoff(message_t *msg);
#line 238
static inline  void CC2420CsmaP$sendDone_task$runTask(void);
#line 251
static inline  void CC2420CsmaP$startDone_task$runTask(void);







static inline  void CC2420CsmaP$stopDone_task$runTask(void);









static inline void CC2420CsmaP$shutdown(void);
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static  void CC2420ControlP$CC2420Config$syncDone(error_t arg_0x403c04c8);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static   cc2420_status_t CC2420ControlP$RXCTRL1$write(uint16_t arg_0x404615d8);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void CC2420ControlP$StartupTimer$start(CC2420ControlP$StartupTimer$size_type arg_0x4044f8c8);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static   cc2420_status_t CC2420ControlP$MDMCTRL0$write(uint16_t arg_0x404615d8);
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void CC2420ControlP$RSTN$makeOutput(void);
#line 29
static   void CC2420ControlP$RSTN$set(void);
static   void CC2420ControlP$RSTN$clr(void);
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Read.nc"
static  void CC2420ControlP$ReadRssi$readDone(error_t arg_0x40441ce8, CC2420ControlP$ReadRssi$val_t arg_0x40441e70);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t CC2420ControlP$syncDone$postTask(void);
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static   cc2420_status_t CC2420ControlP$RSSI$read(uint16_t *arg_0x40461068);







static   cc2420_status_t CC2420ControlP$IOCFG0$write(uint16_t arg_0x404615d8);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static   am_addr_t CC2420ControlP$ActiveMessageAddress$amAddress(void);




static   am_group_t CC2420ControlP$ActiveMessageAddress$amGroup(void);
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void CC2420ControlP$CSN$makeOutput(void);
#line 29
static   void CC2420ControlP$CSN$set(void);
static   void CC2420ControlP$CSN$clr(void);




static   void CC2420ControlP$VREN$makeOutput(void);
#line 29
static   void CC2420ControlP$VREN$set(void);
static   void CC2420ControlP$VREN$clr(void);
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static   cc2420_status_t CC2420ControlP$SXOSCON$strobe(void);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t CC2420ControlP$SpiResource$release(void);
#line 78
static   error_t CC2420ControlP$SpiResource$request(void);
#line 110
static   error_t CC2420ControlP$SyncResource$release(void);
#line 78
static   error_t CC2420ControlP$SyncResource$request(void);
# 76 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
static   void CC2420ControlP$CC2420Power$startOscillatorDone(void);
#line 56
static   void CC2420ControlP$CC2420Power$startVRegDone(void);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static   cc2420_status_t CC2420ControlP$IOCFG1$write(uint16_t arg_0x404615d8);
#line 55
static   cc2420_status_t CC2420ControlP$FSCTRL$write(uint16_t arg_0x404615d8);
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static   cc2420_status_t CC2420ControlP$SRXON$strobe(void);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static  void CC2420ControlP$Resource$granted(void);
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static   cc2420_status_t CC2420ControlP$PANID$write(uint8_t arg_0x40465d08, uint8_t *arg_0x40465eb0, uint8_t arg_0x40463068);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   error_t CC2420ControlP$InterruptCCA$disable(void);
#line 42
static   error_t CC2420ControlP$InterruptCCA$enableRisingEdge(void);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t CC2420ControlP$RssiResource$release(void);
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static   cc2420_status_t CC2420ControlP$SRFOFF$strobe(void);
# 117 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
enum CC2420ControlP$__nesc_unnamed4337 {
#line 117
  CC2420ControlP$sync = 4U
};
#line 117
typedef int CC2420ControlP$__nesc_sillytask_sync[CC2420ControlP$sync];
enum CC2420ControlP$__nesc_unnamed4338 {
#line 118
  CC2420ControlP$syncDone = 5U
};
#line 118
typedef int CC2420ControlP$__nesc_sillytask_syncDone[CC2420ControlP$syncDone];
#line 85
#line 79
typedef enum CC2420ControlP$__nesc_unnamed4339 {
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


bool CC2420ControlP$hwAddressRecognition;

 CC2420ControlP$cc2420_control_state_t CC2420ControlP$m_state = CC2420ControlP$S_VREG_STOPPED;



static void CC2420ControlP$writeFsctrl(void);
static void CC2420ControlP$writeMdmctrl0(void);
static void CC2420ControlP$writeId(void);





static inline  error_t CC2420ControlP$Init$init(void);
#line 171
static inline   error_t CC2420ControlP$Resource$request(void);







static inline   error_t CC2420ControlP$Resource$release(void);







static inline   error_t CC2420ControlP$CC2420Power$startVReg(void);
#line 199
static   error_t CC2420ControlP$CC2420Power$stopVReg(void);







static inline   error_t CC2420ControlP$CC2420Power$startOscillator(void);
#line 249
static inline   error_t CC2420ControlP$CC2420Power$rxOn(void);
#line 279
static   uint16_t CC2420ControlP$CC2420Config$getShortAddr(void);







static inline   uint16_t CC2420ControlP$CC2420Config$getPanAddr(void);
#line 300
static inline  error_t CC2420ControlP$CC2420Config$sync(void);
#line 332
static inline   bool CC2420ControlP$CC2420Config$isAddressRecognitionEnabled(void);
#line 359
static inline   bool CC2420ControlP$CC2420Config$isHwAutoAckDefault(void);






static inline   bool CC2420ControlP$CC2420Config$isAutoAckEnabled(void);









static inline  void CC2420ControlP$SyncResource$granted(void);
#line 390
static inline  void CC2420ControlP$SpiResource$granted(void);




static inline  void CC2420ControlP$RssiResource$granted(void);
#line 408
static inline   void CC2420ControlP$StartupTimer$fired(void);









static inline   void CC2420ControlP$InterruptCCA$fired(void);
#line 442
static inline  void CC2420ControlP$sync$runTask(void);



static inline  void CC2420ControlP$syncDone$runTask(void);









static void CC2420ControlP$writeFsctrl(void);
#line 473
static void CC2420ControlP$writeMdmctrl0(void);
#line 492
static void CC2420ControlP$writeId(void);
#line 509
static inline   void CC2420ControlP$ReadRssi$default$readDone(error_t error, uint16_t data);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t PlatformP$MoteInit$init(void);
#line 51
static  error_t PlatformP$MeasureClock$init(void);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/mica/PlatformP.nc"
static inline void PlatformP$power_init(void);






static inline  error_t PlatformP$Init$init(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t MotePlatformP$SubInit$init(void);
# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void MotePlatformP$SerialIdPin$makeInput(void);
#line 30
static   void MotePlatformP$SerialIdPin$clr(void);
# 26 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/micaz/MotePlatformP.nc"
static inline  error_t MotePlatformP$PlatformInit$init(void);
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void);

static inline   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$toggle(void);



static __inline   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput(void);
#line 46
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set(void);

static inline   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$toggle(void);



static __inline   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput(void);
#line 46
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set(void);

static inline   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$toggle(void);



static __inline   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput(void);
#line 46
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP$3$IO$set(void);
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP$3$IO$clr(void);




static __inline   void /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP$3$IO$makeOutput(void);
#line 47
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void);


static __inline   void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void);
#line 46
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$set(void);
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$clr(void);




static __inline   void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$makeOutput(void);
#line 46
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$set(void);
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$clr(void);




static __inline   void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$makeOutput(void);
#line 46
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$set(void);
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$clr(void);




static __inline   void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$makeOutput(void);
#line 52
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP$9$IO$makeOutput(void);
#line 52
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP$10$IO$makeOutput(void);
#line 50
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP$11$IO$makeInput(void);
#line 45
static __inline   bool /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$get(void);
#line 45
static __inline   bool /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP$26$IO$get(void);

static __inline   void /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP$26$IO$clr(void);


static __inline   void /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP$26$IO$makeInput(void);
#line 46
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP$27$IO$set(void);





static __inline   void /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP$27$IO$makeOutput(void);
#line 45
static __inline   bool /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$get(void);




static __inline   void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$makeInput(void);
#line 46
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP$29$IO$set(void);
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP$29$IO$clr(void);




static __inline   void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP$29$IO$makeOutput(void);
#line 45
static __inline   bool /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$get(void);




static __inline   void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$makeInput(void);
#line 45
static __inline   bool /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP$38$IO$get(void);
# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/mica/MeasureClockC.nc"
enum MeasureClockC$__nesc_unnamed4340 {


  MeasureClockC$MAGIC = 488 / (16 / PLATFORM_MHZ)
};

uint16_t MeasureClockC$cycles;

static inline  error_t MeasureClockC$Init$init(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t RealMainP$SoftwareInit$init(void);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Boot.nc"
static  void RealMainP$Boot$booted(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t RealMainP$PlatformInit$init(void);
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Scheduler.nc"
static  void RealMainP$Scheduler$init(void);
#line 61
static  void RealMainP$Scheduler$taskLoop(void);
#line 54
static  bool RealMainP$Scheduler$runNextTask(void);
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/system/RealMainP.nc"
int main(void)   ;
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void SchedulerBasicP$TaskBasic$runTask(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x402eba88);
# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuSleep.nc"
static   void SchedulerBasicP$McuSleep$sleep(void);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP$__nesc_unnamed4341 {

  SchedulerBasicP$NUM_TASKS = 26U, 
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
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
static   mcu_power_t McuSleepC$McuPowerOverride$lowestState(void);
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/McuSleepC.nc"
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
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void HplAtm128Timer0AsyncP$Compare$fired(void);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void HplAtm128Timer0AsyncP$Timer$overflow(void);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline   uint8_t HplAtm128Timer0AsyncP$Timer$get(void);
#line 76
static inline   void HplAtm128Timer0AsyncP$TimerCtrl$setControl(Atm128TimerControl_t x);
#line 94
static inline   Atm128_TIFR_t HplAtm128Timer0AsyncP$TimerCtrl$getInterruptFlag(void);
#line 122
static inline   void HplAtm128Timer0AsyncP$Compare$start(void);









static inline   uint8_t HplAtm128Timer0AsyncP$Compare$get(void);


static inline   void HplAtm128Timer0AsyncP$Compare$set(uint8_t t);




static __inline void HplAtm128Timer0AsyncP$stabiliseTimer0(void);
#line 155
static inline   mcu_power_t HplAtm128Timer0AsyncP$McuPowerOverride$lowestState(void);
#line 178
void __vector_15(void) __attribute((signal))   ;





void __vector_16(void) __attribute((signal))   ;
#line 198
static inline   void HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous(void);







static inline   int HplAtm128Timer0AsyncP$TimerAsync$compareBusy(void);
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static   Atm128_TIFR_t HplAtm128Timer1P$Timer0Ctrl$getInterruptFlag(void);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void HplAtm128Timer1P$CompareA$fired(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static   void HplAtm128Timer1P$Capture$captured(HplAtm128Timer1P$Capture$size_type arg_0x405bc378);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void HplAtm128Timer1P$CompareB$fired(void);
#line 49
static   void HplAtm128Timer1P$CompareC$fired(void);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void HplAtm128Timer1P$Timer$overflow(void);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline   uint16_t HplAtm128Timer1P$Timer$get(void);


static inline   void HplAtm128Timer1P$Timer$set(uint16_t t);








static inline   void HplAtm128Timer1P$Timer$setScale(uint8_t s);









static inline   Atm128TimerCtrlCapture_t HplAtm128Timer1P$TimerCtrl$getCtrlCapture(void);









static inline uint16_t HplAtm128Timer1P$TimerCtrlCapture2int(Atm128TimerCtrlCapture_t x);






static inline   void HplAtm128Timer1P$TimerCtrl$setCtrlCapture(Atm128_TCCR1B_t x);
#line 122
static inline   void HplAtm128Timer1P$Capture$setEdge(bool up);



static inline   void HplAtm128Timer1P$Capture$reset(void);
static inline   void HplAtm128Timer1P$CompareA$reset(void);



static inline   void HplAtm128Timer1P$Timer$start(void);
static inline   void HplAtm128Timer1P$Capture$start(void);
static inline   void HplAtm128Timer1P$CompareA$start(void);




static inline   void HplAtm128Timer1P$Capture$stop(void);
static inline   void HplAtm128Timer1P$CompareA$stop(void);




static inline   bool HplAtm128Timer1P$Timer$test(void);
#line 183
static inline   void HplAtm128Timer1P$CompareA$set(uint16_t t);
#line 195
void __vector_12(void) __attribute((interrupt))   ;


static inline    void HplAtm128Timer1P$CompareB$default$fired(void);
void __vector_13(void) __attribute((interrupt))   ;


static inline    void HplAtm128Timer1P$CompareC$default$fired(void);
void __vector_24(void) __attribute((interrupt))   ;



void __vector_11(void) __attribute((interrupt))   ;



void __vector_14(void) __attribute((interrupt))   ;
# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$setScale(uint8_t arg_0x405b58b8);
#line 58
static   void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$set(/*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$timer_size arg_0x405b7c50);










static   void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$start(void);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline  error_t /*InitOneP.InitOne*/Atm128TimerInitC$0$Init$init(void);








static inline   void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$overflow(void);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$fired(void);
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$reset(void);
#line 45
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$set(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$size_type arg_0x405c8e40);










static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$start(void);


static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$stop(void);
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$timer_size /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$get(void);
# 65 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$stop(void);








static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$timer_size t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$timer_size dt);
#line 110
static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$fired(void);






static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$overflow(void);
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$overflow(void);
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   bool /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$test(void);
#line 52
static   /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$timer_size /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$get(void);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline   /*CounterOne16C.NCounter*/Atm128CounterC$0$timer_size /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$get(void);




static inline   bool /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$isOverflowPending(void);









static inline   void /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$overflow(void);
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static   /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$size_type /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$get(void);






static   bool /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$isOverflowPending(void);










static   void /*Counter32khz32C.Transform32*/TransformCounterC$0$Counter$overflow(void);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
/*Counter32khz32C.Transform32*/TransformCounterC$0$upper_count_type /*Counter32khz32C.Transform32*/TransformCounterC$0$m_upper;

enum /*Counter32khz32C.Transform32*/TransformCounterC$0$__nesc_unnamed4342 {

  TransformCounterC$0$LOW_SHIFT_RIGHT = 0, 
  TransformCounterC$0$HIGH_SHIFT_LEFT = 8 * sizeof(/*Counter32khz32C.Transform32*/TransformCounterC$0$from_size_type ) - /*Counter32khz32C.Transform32*/TransformCounterC$0$LOW_SHIFT_RIGHT, 
  TransformCounterC$0$NUM_UPPER_BITS = 8 * sizeof(/*Counter32khz32C.Transform32*/TransformCounterC$0$to_size_type ) - 8 * sizeof(/*Counter32khz32C.Transform32*/TransformCounterC$0$from_size_type ) + 0, 



  TransformCounterC$0$OVERFLOW_MASK = /*Counter32khz32C.Transform32*/TransformCounterC$0$NUM_UPPER_BITS ? ((/*Counter32khz32C.Transform32*/TransformCounterC$0$upper_count_type )2 << (/*Counter32khz32C.Transform32*/TransformCounterC$0$NUM_UPPER_BITS - 1)) - 1 : 0
};

static   /*Counter32khz32C.Transform32*/TransformCounterC$0$to_size_type /*Counter32khz32C.Transform32*/TransformCounterC$0$Counter$get(void);
#line 122
static inline   void /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$overflow(void);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$fired(void);
#line 92
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$size_type arg_0x4045a9e0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$size_type arg_0x4045ab70);
#line 62
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$stop(void);
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static   /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$get(void);
# 66 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_t0;
/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_dt;

enum /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$__nesc_unnamed4343 {

  TransformAlarmC$0$MAX_DELAY_LOG2 = 8 * sizeof(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$from_size_type ) - 1 - 0, 
  TransformAlarmC$0$MAX_DELAY = (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type )1 << /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$MAX_DELAY_LOG2
};

static inline   /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$getNow(void);
#line 91
static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$stop(void);




static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$set_alarm(void);
#line 136
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type dt);









static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type dt);




static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$fired(void);
#line 166
static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$overflow(void);
# 22 "/opt/CVSTinyOS/tinyos-2.x/tos/system/NoInitC.nc"
static inline  error_t NoInitC$Init$init(void);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static   void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captured(uint16_t arg_0x406f25a0);
# 79 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static   void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$setEdge(bool arg_0x405cc968);
#line 55
static   void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$reset(void);


static   void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$start(void);


static   void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$stop(void);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$enableCapture(uint8_t mode);









static inline   error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captureRisingEdge(void);



static inline   error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captureFallingEdge(void);



static inline   void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$disable(void);



static inline   void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$captured(uint16_t time);
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$clear(void);
#line 40
static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$disable(void);
#line 59
static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$edge(bool arg_0x406f48a0);
#line 35
static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$enable(void);
# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$fired(void);
# 15 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$enable(bool rising);
#line 29
static inline   error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$enableFallingEdge(void);



static inline   error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$disable(void);




static inline   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$fired(void);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static   void HplAtm128InterruptSigP$IntSig6$fired(void);
#line 41
static   void HplAtm128InterruptSigP$IntSig1$fired(void);
#line 41
static   void HplAtm128InterruptSigP$IntSig4$fired(void);
#line 41
static   void HplAtm128InterruptSigP$IntSig7$fired(void);
#line 41
static   void HplAtm128InterruptSigP$IntSig2$fired(void);
#line 41
static   void HplAtm128InterruptSigP$IntSig5$fired(void);
#line 41
static   void HplAtm128InterruptSigP$IntSig0$fired(void);
#line 41
static   void HplAtm128InterruptSigP$IntSig3$fired(void);
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSigP.nc"
void __vector_1(void) __attribute((signal))   ;




void __vector_2(void) __attribute((signal))   ;




void __vector_3(void) __attribute((signal))   ;




void __vector_4(void) __attribute((signal))   ;




void __vector_5(void) __attribute((signal))   ;




void __vector_6(void) __attribute((signal))   ;




void __vector_7(void) __attribute((signal))   ;




void __vector_8(void) __attribute((signal))   ;
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$Irq$fired(void);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$IrqSignal$fired(void);

static inline    void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$Irq$default$fired(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$fired(void);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$IrqSignal$fired(void);

static inline    void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$default$fired(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$fired(void);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline   void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$clear(void);
static __inline   void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$enable(void);
static __inline   void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$disable(void);



static __inline   void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$edge(bool low_to_high);
#line 61
static inline   void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$IrqSignal$fired(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$Irq$fired(void);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$IrqSignal$fired(void);

static inline    void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$Irq$default$fired(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$fired(void);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$IrqSignal$fired(void);

static inline    void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$default$fired(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$fired(void);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$IrqSignal$fired(void);

static inline    void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$default$fired(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$fired(void);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$clear(void);
static __inline   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$enable(void);
static __inline   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$disable(void);



static __inline   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$edge(bool low_to_high);
#line 61
static inline   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$IrqSignal$fired(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$fired(void);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$IrqSignal$fired(void);

static inline    void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$default$fired(void);
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   bool HplCC2420InterruptsP$CC_CCA$get(void);
# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   void HplCC2420InterruptsP$CCA$fired(void);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t HplCC2420InterruptsP$CCATask$postTask(void);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/micaz/chips/cc2420/HplCC2420InterruptsP.nc"
enum HplCC2420InterruptsP$__nesc_unnamed4344 {
#line 69
  HplCC2420InterruptsP$CCATask = 6U
};
#line 69
typedef int HplCC2420InterruptsP$__nesc_sillytask_CCATask[HplCC2420InterruptsP$CCATask];
#line 56
 uint8_t HplCC2420InterruptsP$ccaWaitForState;

 uint8_t HplCC2420InterruptsP$ccaLastState;

bool HplCC2420InterruptsP$ccaCheckDisabled = FALSE;








static inline  void HplCC2420InterruptsP$CCATask$runTask(void);
#line 89
static inline   error_t HplCC2420InterruptsP$CCA$enableRisingEdge(void);
#line 105
static inline   error_t HplCC2420InterruptsP$CCA$disable(void);
# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static   error_t CC2420SpiP$SpiPacket$send(uint8_t *arg_0x40771598, uint8_t *arg_0x40771740, uint16_t arg_0x407718d0);
# 91 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static   void CC2420SpiP$Fifo$writeDone(
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40761880, 
# 91 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t *arg_0x40754d60, uint8_t arg_0x40754ee8, error_t arg_0x40753088);
#line 71
static   void CC2420SpiP$Fifo$readDone(
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40761880, 
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t *arg_0x40756c90, uint8_t arg_0x40756e18, error_t arg_0x40754010);
# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static   void CC2420SpiP$ChipSpiResource$releasing(void);
# 34 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SpiByte.nc"
static   uint8_t CC2420SpiP$SpiByte$write(uint8_t arg_0x407739d8);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/State.nc"
static   void CC2420SpiP$WorkingState$toIdle(void);




static   bool CC2420SpiP$WorkingState$isIdle(void);
#line 45
static   error_t CC2420SpiP$WorkingState$requestState(uint8_t arg_0x4041b580);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t CC2420SpiP$SpiResource$release(void);
#line 87
static   error_t CC2420SpiP$SpiResource$immediateRequest(void);
#line 78
static   error_t CC2420SpiP$SpiResource$request(void);
#line 118
static   bool CC2420SpiP$SpiResource$isOwner(void);
#line 92
static  void CC2420SpiP$Resource$granted(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40762ea8);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t CC2420SpiP$grant$postTask(void);
# 88 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
enum CC2420SpiP$__nesc_unnamed4345 {
#line 88
  CC2420SpiP$grant = 7U
};
#line 88
typedef int CC2420SpiP$__nesc_sillytask_grant[CC2420SpiP$grant];
#line 63
enum CC2420SpiP$__nesc_unnamed4346 {
  CC2420SpiP$RESOURCE_COUNT = 5U, 
  CC2420SpiP$NO_HOLDER = 0xFF
};


enum CC2420SpiP$__nesc_unnamed4347 {
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
#line 126
static   error_t CC2420SpiP$Resource$immediateRequest(uint8_t id);
#line 149
static   error_t CC2420SpiP$Resource$release(uint8_t id);
#line 178
static inline   uint8_t CC2420SpiP$Resource$isOwner(uint8_t id);





static inline  void CC2420SpiP$SpiResource$granted(void);




static   cc2420_status_t CC2420SpiP$Fifo$beginRead(uint8_t addr, uint8_t *data, 
uint8_t len);
#line 209
static inline   error_t CC2420SpiP$Fifo$continueRead(uint8_t addr, uint8_t *data, 
uint8_t len);



static inline   cc2420_status_t CC2420SpiP$Fifo$write(uint8_t addr, uint8_t *data, 
uint8_t len);
#line 260
static   cc2420_status_t CC2420SpiP$Ram$write(uint16_t addr, uint8_t offset, 
uint8_t *data, 
uint8_t len);
#line 287
static inline   cc2420_status_t CC2420SpiP$Reg$read(uint8_t addr, uint16_t *data);
#line 305
static   cc2420_status_t CC2420SpiP$Reg$write(uint8_t addr, uint16_t data);
#line 318
static   cc2420_status_t CC2420SpiP$Strobe$strobe(uint8_t addr);










static   void CC2420SpiP$SpiPacket$sendDone(uint8_t *tx_buf, uint8_t *rx_buf, 
uint16_t len, error_t error);








static error_t CC2420SpiP$attemptRelease(void);
#line 358
static inline  void CC2420SpiP$grant$runTask(void);








static inline   void CC2420SpiP$Resource$default$granted(uint8_t id);


static inline    void CC2420SpiP$Fifo$default$readDone(uint8_t addr, uint8_t *rx_buf, uint8_t rx_len, error_t error);


static inline    void CC2420SpiP$Fifo$default$writeDone(uint8_t addr, uint8_t *tx_buf, uint8_t tx_len, error_t error);
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t StateImplP$state[4U];

enum StateImplP$__nesc_unnamed4348 {
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
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t Atm128SpiP$zeroTask$postTask(void);
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static   void Atm128SpiP$SpiPacket$sendDone(uint8_t *arg_0x40770068, uint8_t *arg_0x40770210, uint16_t arg_0x407703a0, 
error_t arg_0x40770538);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t Atm128SpiP$ResourceArbiter$release(
# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x407b8410);
# 87 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t Atm128SpiP$ResourceArbiter$immediateRequest(
# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x407b8410);
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t Atm128SpiP$ResourceArbiter$request(
# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x407b8410);
# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   bool Atm128SpiP$ResourceArbiter$isOwner(
# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x407b8410);
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static   void Atm128SpiP$Spi$sleep(void);
#line 66
static   void Atm128SpiP$Spi$initMaster(void);
#line 96
static   void Atm128SpiP$Spi$enableInterrupt(bool arg_0x407cb558);
#line 80
static   uint8_t Atm128SpiP$Spi$read(void);
#line 125
static   void Atm128SpiP$Spi$setMasterDoubleSpeed(bool arg_0x407c5698);
#line 114
static   void Atm128SpiP$Spi$setClock(uint8_t arg_0x407c7540);
#line 108
static   void Atm128SpiP$Spi$setClockPolarity(bool arg_0x407c8570);
#line 86
static   void Atm128SpiP$Spi$write(uint8_t arg_0x407cca80);
#line 99
static   void Atm128SpiP$Spi$enableSpi(bool arg_0x407cbd28);
#line 111
static   void Atm128SpiP$Spi$setClockPhase(bool arg_0x407c8d50);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static  void Atm128SpiP$Resource$granted(
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x407ba088);
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static   void Atm128SpiP$McuPowerState$update(void);
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
static   bool Atm128SpiP$ArbiterInfo$inUse(void);
# 207 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
enum Atm128SpiP$__nesc_unnamed4349 {
#line 207
  Atm128SpiP$zeroTask = 8U
};
#line 207
typedef int Atm128SpiP$__nesc_sillytask_zeroTask[Atm128SpiP$zeroTask];
#line 90
uint16_t Atm128SpiP$len;
uint8_t *Atm128SpiP$txBuffer;
uint8_t *Atm128SpiP$rxBuffer;
uint16_t Atm128SpiP$pos;

enum Atm128SpiP$__nesc_unnamed4350 {
  Atm128SpiP$SPI_IDLE, 
  Atm128SpiP$SPI_BUSY, 
  Atm128SpiP$SPI_ATOMIC_SIZE = 10
};





static void Atm128SpiP$startSpi(void);
#line 119
static inline void Atm128SpiP$stopSpi(void);







static   uint8_t Atm128SpiP$SpiByte$write(uint8_t tx);
#line 162
static error_t Atm128SpiP$sendNextPart(void);
#line 207
static inline  void Atm128SpiP$zeroTask$runTask(void);
#line 241
static   error_t Atm128SpiP$SpiPacket$send(uint8_t *writeBuf, 
uint8_t *readBuf, 
uint16_t bufLen);
#line 265
static inline   void Atm128SpiP$Spi$dataReady(uint8_t data);
#line 305
static inline   error_t Atm128SpiP$Resource$immediateRequest(uint8_t id);







static inline   error_t Atm128SpiP$Resource$request(uint8_t id);








static inline   error_t Atm128SpiP$Resource$release(uint8_t id);









static inline   uint8_t Atm128SpiP$Resource$isOwner(uint8_t id);



static inline  void Atm128SpiP$ResourceArbiter$granted(uint8_t id);



static inline   void Atm128SpiP$Resource$default$granted(uint8_t id);
# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void HplAtm128SpiP$MISO$makeInput(void);

static   void HplAtm128SpiP$SCK$makeOutput(void);
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static   void HplAtm128SpiP$Mcu$update(void);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static   void HplAtm128SpiP$SPI$dataReady(uint8_t arg_0x407cb010);
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void HplAtm128SpiP$MOSI$makeOutput(void);
# 79 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline   void HplAtm128SpiP$SPI$initMaster(void);
#line 94
static inline   void HplAtm128SpiP$SPI$sleep(void);



static inline   uint8_t HplAtm128SpiP$SPI$read(void);
static inline   void HplAtm128SpiP$SPI$write(uint8_t d);


void __vector_17(void) __attribute((signal))   ;
#line 115
static   void HplAtm128SpiP$SPI$enableInterrupt(bool enabled);
#line 130
static   void HplAtm128SpiP$SPI$enableSpi(bool enabled);
#line 156
static inline   void HplAtm128SpiP$SPI$setMasterBit(bool isMaster);
#line 169
static inline   void HplAtm128SpiP$SPI$setClockPolarity(bool highWhenIdle);
#line 183
static inline   void HplAtm128SpiP$SPI$setClockPhase(bool sampleOnTrailing);
#line 200
static inline   void HplAtm128SpiP$SPI$setClock(uint8_t v);
#line 213
static inline   void HplAtm128SpiP$SPI$setMasterDoubleSpeed(bool on);
# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
enum /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$__nesc_unnamed4351 {
#line 39
  FcfsResourceQueueC$0$NO_ENTRY = 0xFF
};
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ[1U];
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qTail = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;

static inline  error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$Init$init(void);




static inline   bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty(void);



static inline   bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(resource_client_id_t id);



static inline   resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue(void);
#line 72
static inline   error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(resource_client_id_t id);
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$requested(
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x4084c738);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$immediateRequested(
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x4084c738);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$unconfigure(
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x4084b238);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$configure(
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x4084b238);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$enqueue(resource_client_id_t arg_0x4083b210);
#line 43
static   bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$isEmpty(void);
#line 60
static   resource_client_id_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$dequeue(void);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static  void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$granted(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40831dd8);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$postTask(void);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$__nesc_unnamed4352 {
#line 69
  SimpleArbiterP$0$grantedTask = 9U
};
#line 69
typedef int /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$__nesc_sillytask_grantedTask[/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask];
#line 62
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$__nesc_unnamed4353 {
#line 62
  SimpleArbiterP$0$RES_IDLE = 0, SimpleArbiterP$0$RES_GRANTING = 1, SimpleArbiterP$0$RES_BUSY = 2
};
#line 63
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$__nesc_unnamed4354 {
#line 63
  SimpleArbiterP$0$NO_RES = 0xFF
};
uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_IDLE;
 uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$NO_RES;
 uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$reqResId;



static inline   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$request(uint8_t id);
#line 84
static inline   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$immediateRequest(uint8_t id);
#line 97
static inline   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$release(uint8_t id);
#line 123
static   bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ArbiterInfo$inUse(void);
#line 147
static   uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$isOwner(uint8_t id);






static inline  void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$runTask(void);
#line 166
static inline    void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$requested(uint8_t id);

static inline    void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$immediateRequested(uint8_t id);

static inline    void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$configure(uint8_t id);

static inline    void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$unconfigure(uint8_t id);
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void HplCC2420SpiP$SS$makeOutput(void);
#line 29
static   void HplCC2420SpiP$SS$set(void);
static   void HplCC2420SpiP$SS$clr(void);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static  void HplCC2420SpiP$Resource$granted(void);
#line 110
static   error_t HplCC2420SpiP$SubResource$release(void);
#line 87
static   error_t HplCC2420SpiP$SubResource$immediateRequest(void);
#line 78
static   error_t HplCC2420SpiP$SubResource$request(void);
#line 118
static   bool HplCC2420SpiP$SubResource$isOwner(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline   error_t HplCC2420SpiP$Resource$request(void);




static inline   error_t HplCC2420SpiP$Resource$immediateRequest(void);










static inline  void HplCC2420SpiP$SubResource$granted(void);







static inline   error_t HplCC2420SpiP$Resource$release(void);







static inline   bool HplCC2420SpiP$Resource$isOwner(void);
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
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
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/LedsP.nc"
static inline  error_t LedsP$Init$init(void);
#line 73
static inline   void LedsP$Leds$led0Toggle(void);
#line 88
static inline   void LedsP$Leds$led1Toggle(void);
#line 103
static inline   void LedsP$Leds$led2Toggle(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
am_addr_t ActiveMessageAddressC$addr = TOS_AM_ADDRESS;


am_group_t ActiveMessageAddressC$group = TOS_AM_GROUP;






static inline   am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void);
#line 82
static inline   am_group_t ActiveMessageAddressC$ActiveMessageAddress$amGroup(void);
#line 95
static   am_addr_t ActiveMessageAddressC$amAddress(void);
# 81 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static   void CC2420TransmitP$RadioBackoff$requestInitialBackoff(message_t *arg_0x4039a6f8);






static   void CC2420TransmitP$RadioBackoff$requestCongestionBackoff(message_t *arg_0x4039acb0);
# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
static   void CC2420TransmitP$PacketTimeStamp$clear(message_t *arg_0x40385120);







static   void CC2420TransmitP$PacketTimeStamp$set(message_t *arg_0x40385648, CC2420TransmitP$PacketTimeStamp$size_type arg_0x403857d8);
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static   cc2420_status_t CC2420TransmitP$STXONCCA$strobe(void);
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static   error_t CC2420TransmitP$CaptureSFD$captureFallingEdge(void);
#line 55
static   void CC2420TransmitP$CaptureSFD$disable(void);
#line 42
static   error_t CC2420TransmitP$CaptureSFD$captureRisingEdge(void);
# 98 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   CC2420TransmitP$BackoffTimer$size_type CC2420TransmitP$BackoffTimer$getNow(void);
#line 55
static   void CC2420TransmitP$BackoffTimer$start(CC2420TransmitP$BackoffTimer$size_type arg_0x4044f8c8);






static   void CC2420TransmitP$BackoffTimer$stop(void);
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static   cc2420_status_t CC2420TransmitP$TXFIFO_RAM$write(uint8_t arg_0x40465d08, uint8_t *arg_0x40465eb0, uint8_t arg_0x40463068);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static   cc2420_status_t CC2420TransmitP$TXCTRL$write(uint16_t arg_0x404615d8);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static   void CC2420TransmitP$CC2420Receive$sfd_dropped(void);
#line 49
static   void CC2420TransmitP$CC2420Receive$sfd(uint32_t arg_0x408f4420);
# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static   void CC2420TransmitP$Send$sendDone(message_t *arg_0x404169b0, error_t arg_0x40416b38);
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static   void CC2420TransmitP$ChipSpiResource$abortRelease(void);







static   error_t CC2420TransmitP$ChipSpiResource$attemptRelease(void);
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static   cc2420_status_t CC2420TransmitP$SFLUSHTX$strobe(void);
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void CC2420TransmitP$CSN$makeOutput(void);
#line 29
static   void CC2420TransmitP$CSN$set(void);
static   void CC2420TransmitP$CSN$clr(void);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static   cc2420_header_t *CC2420TransmitP$CC2420PacketBody$getHeader(message_t *arg_0x403b92d0);




static   cc2420_metadata_t *CC2420TransmitP$CC2420PacketBody$getMetadata(message_t *arg_0x403b9820);
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
static   uint8_t CC2420TransmitP$PacketTimeSyncOffset$get(message_t *arg_0x408df578);
#line 39
static   bool CC2420TransmitP$PacketTimeSyncOffset$isSet(message_t *arg_0x408df030);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t CC2420TransmitP$SpiResource$release(void);
#line 87
static   error_t CC2420TransmitP$SpiResource$immediateRequest(void);
#line 78
static   error_t CC2420TransmitP$SpiResource$request(void);
# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void CC2420TransmitP$CCA$makeInput(void);
#line 32
static   bool CC2420TransmitP$CCA$get(void);
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static   cc2420_status_t CC2420TransmitP$SNOP$strobe(void);
# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void CC2420TransmitP$SFD$makeInput(void);
#line 32
static   bool CC2420TransmitP$SFD$get(void);
# 82 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static   cc2420_status_t CC2420TransmitP$TXFIFO$write(uint8_t *arg_0x407545d8, uint8_t arg_0x40754760);
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static   cc2420_status_t CC2420TransmitP$STXON$strobe(void);
# 90 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
#line 80
typedef enum CC2420TransmitP$__nesc_unnamed4355 {
  CC2420TransmitP$S_STOPPED, 
  CC2420TransmitP$S_STARTED, 
  CC2420TransmitP$S_LOAD, 
  CC2420TransmitP$S_SAMPLE_CCA, 
  CC2420TransmitP$S_BEGIN_TRANSMIT, 
  CC2420TransmitP$S_SFD, 
  CC2420TransmitP$S_EFD, 
  CC2420TransmitP$S_ACK_WAIT, 
  CC2420TransmitP$S_CANCEL
} CC2420TransmitP$cc2420_transmit_state_t;





enum CC2420TransmitP$__nesc_unnamed4356 {
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
#line 223
static inline   void CC2420TransmitP$RadioBackoff$setInitialBackoff(uint16_t backoffTime);







static inline   void CC2420TransmitP$RadioBackoff$setCongestionBackoff(uint16_t backoffTime);







static __inline uint32_t CC2420TransmitP$time16to32(uint16_t time, uint32_t recent_time);
#line 260
static inline   void CC2420TransmitP$CaptureSFD$captured(uint16_t time);
#line 341
static inline   void CC2420TransmitP$ChipSpiResource$releasing(void);
#line 353
static inline   void CC2420TransmitP$CC2420Receive$receive(uint8_t type, message_t *ack_msg);
#line 381
static inline  void CC2420TransmitP$SpiResource$granted(void);
#line 419
static inline   void CC2420TransmitP$TXFIFO$writeDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error);
#line 451
static inline   void CC2420TransmitP$TXFIFO$readDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error);










static inline   void CC2420TransmitP$BackoffTimer$fired(void);
#line 512
static inline error_t CC2420TransmitP$send(message_t *p_msg, bool cca);
#line 580
static void CC2420TransmitP$attemptSend(void);
#line 622
static void CC2420TransmitP$congestionBackoff(void);






static error_t CC2420TransmitP$acquireSpiResource(void);







static inline error_t CC2420TransmitP$releaseSpiResource(void);
#line 659
static void CC2420TransmitP$loadTXFIFO(void);
#line 684
static void CC2420TransmitP$signalDone(error_t err);
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   bool CC2420ReceiveP$FIFO$get(void);
# 86 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static   bool CC2420ReceiveP$CC2420Config$isAddressRecognitionEnabled(void);
#line 110
static   bool CC2420ReceiveP$CC2420Config$isAutoAckEnabled(void);
#line 105
static   bool CC2420ReceiveP$CC2420Config$isHwAutoAckDefault(void);
#line 64
static   uint16_t CC2420ReceiveP$CC2420Config$getShortAddr(void);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t CC2420ReceiveP$receiveDone_task$postTask(void);
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   bool CC2420ReceiveP$FIFOP$get(void);
# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
static   void CC2420ReceiveP$PacketTimeStamp$clear(message_t *arg_0x40385120);







static   void CC2420ReceiveP$PacketTimeStamp$set(message_t *arg_0x40385648, CC2420ReceiveP$PacketTimeStamp$size_type arg_0x403857d8);
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static   void CC2420ReceiveP$CC2420Receive$receive(uint8_t arg_0x408f4d18, message_t *arg_0x408f4ec8);
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static   cc2420_status_t CC2420ReceiveP$SACK$strobe(void);
# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void CC2420ReceiveP$CSN$set(void);
static   void CC2420ReceiveP$CSN$clr(void);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static   cc2420_header_t *CC2420ReceiveP$CC2420PacketBody$getHeader(message_t *arg_0x403b92d0);




static   cc2420_metadata_t *CC2420ReceiveP$CC2420PacketBody$getMetadata(message_t *arg_0x403b9820);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *CC2420ReceiveP$Receive$receive(message_t *arg_0x40355d28, void *arg_0x40355ec8, uint8_t arg_0x40354068);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t CC2420ReceiveP$SpiResource$release(void);
#line 87
static   error_t CC2420ReceiveP$SpiResource$immediateRequest(void);
#line 78
static   error_t CC2420ReceiveP$SpiResource$request(void);
#line 118
static   bool CC2420ReceiveP$SpiResource$isOwner(void);
# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static   error_t CC2420ReceiveP$RXFIFO$continueRead(uint8_t *arg_0x407564d8, uint8_t arg_0x40756660);
#line 51
static   cc2420_status_t CC2420ReceiveP$RXFIFO$beginRead(uint8_t *arg_0x40757c50, uint8_t arg_0x40757dd8);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   error_t CC2420ReceiveP$InterruptFIFOP$disable(void);
#line 43
static   error_t CC2420ReceiveP$InterruptFIFOP$enableFallingEdge(void);
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static   cc2420_status_t CC2420ReceiveP$SFLUSHRX$strobe(void);
# 115 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
enum CC2420ReceiveP$__nesc_unnamed4357 {
#line 115
  CC2420ReceiveP$receiveDone_task = 10U
};
#line 115
typedef int CC2420ReceiveP$__nesc_sillytask_receiveDone_task[CC2420ReceiveP$receiveDone_task];
#line 76
#line 70
typedef enum CC2420ReceiveP$__nesc_unnamed4358 {
  CC2420ReceiveP$S_STOPPED, 
  CC2420ReceiveP$S_STARTED, 
  CC2420ReceiveP$S_RX_LENGTH, 
  CC2420ReceiveP$S_RX_FCF, 
  CC2420ReceiveP$S_RX_PAYLOAD
} CC2420ReceiveP$cc2420_receive_state_t;

enum CC2420ReceiveP$__nesc_unnamed4359 {
  CC2420ReceiveP$RXFIFO_SIZE = 128, 
  CC2420ReceiveP$TIMESTAMP_QUEUE_SIZE = 8, 
  CC2420ReceiveP$SACK_HEADER_LENGTH = 7
};

uint32_t CC2420ReceiveP$m_timestamp_queue[CC2420ReceiveP$TIMESTAMP_QUEUE_SIZE];

uint8_t CC2420ReceiveP$m_timestamp_head;

uint8_t CC2420ReceiveP$m_timestamp_size;


uint8_t CC2420ReceiveP$m_missed_packets;


bool CC2420ReceiveP$receivingPacket;


 uint8_t CC2420ReceiveP$rxFrameLength;

 uint8_t CC2420ReceiveP$m_bytes_left;

 message_t *CC2420ReceiveP$m_p_rx_buf;

message_t CC2420ReceiveP$m_rx_buf;

CC2420ReceiveP$cc2420_receive_state_t CC2420ReceiveP$m_state;


static void CC2420ReceiveP$reset_state(void);
static void CC2420ReceiveP$beginReceive(void);
static void CC2420ReceiveP$receive(void);
static void CC2420ReceiveP$waitForNextPacket(void);
static void CC2420ReceiveP$flush(void);
static inline bool CC2420ReceiveP$passesAddressCheck(message_t *msg);




static inline  error_t CC2420ReceiveP$Init$init(void);





static inline  error_t CC2420ReceiveP$StdControl$start(void);









static inline  error_t CC2420ReceiveP$StdControl$stop(void);
#line 149
static inline   void CC2420ReceiveP$CC2420Receive$sfd(uint32_t time);








static inline   void CC2420ReceiveP$CC2420Receive$sfd_dropped(void);
#line 175
static inline   void CC2420ReceiveP$InterruptFIFOP$fired(void);










static inline  void CC2420ReceiveP$SpiResource$granted(void);








static inline   void CC2420ReceiveP$RXFIFO$readDone(uint8_t *rx_buf, uint8_t rx_len, 
error_t error);
#line 318
static inline   void CC2420ReceiveP$RXFIFO$writeDone(uint8_t *tx_buf, uint8_t tx_len, error_t error);







static inline  void CC2420ReceiveP$receiveDone_task$runTask(void);
#line 347
static inline  void CC2420ReceiveP$CC2420Config$syncDone(error_t error);






static void CC2420ReceiveP$beginReceive(void);
#line 372
static void CC2420ReceiveP$flush(void);
#line 389
static void CC2420ReceiveP$receive(void);









static void CC2420ReceiveP$waitForNextPacket(void);
#line 437
static void CC2420ReceiveP$reset_state(void);










static inline bool CC2420ReceiveP$passesAddressCheck(message_t *msg);
# 65 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static   error_t CC2420PacketP$Acks$requestAck(message_t *p_msg);









static inline   bool CC2420PacketP$Acks$wasAcked(message_t *p_msg);
#line 99
static inline   cc2420_header_t *CC2420PacketP$CC2420PacketBody$getHeader(message_t *msg);



static inline   cc2420_metadata_t *CC2420PacketP$CC2420PacketBody$getMetadata(message_t *msg);
#line 122
static   void CC2420PacketP$PacketTimeStamp32khz$clear(message_t *msg);





static inline   void CC2420PacketP$PacketTimeStamp32khz$set(message_t *msg, uint32_t value);
#line 158
static inline   bool CC2420PacketP$PacketTimeSyncOffset$isSet(message_t *msg);








static   uint8_t CC2420PacketP$PacketTimeSyncOffset$get(message_t *msg);
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline   void /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void);
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static   Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag(void);
#line 37
static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$setControl(Atm128TimerControl_t arg_0x405cef28);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$fired(void);
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$overflow(void);
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static   int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$compareBusy(void);
#line 32
static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$setTimer0Asynchronous(void);
# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get(void);





static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type arg_0x405c8e40);










static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$start(void);
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get(void);
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set;
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0;
#line 39
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt;
 uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base;



enum /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$__nesc_unnamed4360 {
  Atm128AlarmAsyncP$0$MINDT = 2, 
  Atm128AlarmAsyncP$0$MAXT = 230
};



static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt(void);


static inline  error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init(void);
#line 74
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setOcr0(uint8_t n);
#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt(void);
#line 149
static inline   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired(void);
#line 161
static   uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get(void);
#line 204
static inline   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop(void);







static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(uint32_t nt0, uint32_t ndt);









static inline   uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow(void);



static inline   uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm(void);



static inline   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow(void);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask(void);
# 98 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow(void);
#line 92
static   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type arg_0x4045a9e0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type arg_0x4045ab70);
#line 105
static   /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(void);
#line 62
static   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop(void);
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired(void);
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$__nesc_unnamed4361 {
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
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask(void);
# 125 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static  uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(void);
#line 118
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(uint32_t arg_0x40360738, uint32_t arg_0x403608c8);
#line 67
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop(void);




static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40a15090);
#line 60
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4362 {
#line 60
  VirtualizeTimerC$0$updateFromTimer = 12U
};
#line 60
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer];
#line 42
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4363 {

  VirtualizeTimerC$0$NUM_TIMERS = 4, 
  VirtualizeTimerC$0$END_OF_LIST = 255
};








#line 48
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4364 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS];




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(uint32_t now);
#line 89
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void);
#line 128
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);









static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(uint8_t num, uint32_t dt);




static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(uint8_t num, uint32_t dt);




static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(uint8_t num);
#line 173
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShotAt(uint8_t num, uint32_t t0, uint32_t dt);




static inline  uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$getNow(uint8_t num);









static inline  uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$getdt(uint8_t num);




static inline   void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num);
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline   void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$1$Counter$overflow(void);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/system/RandomMlcgC.nc"
uint32_t RandomMlcgC$seed;


static inline  error_t RandomMlcgC$Init$init(void);
#line 58
static   uint32_t RandomMlcgC$Random$rand32(void);
#line 78
static inline   uint16_t RandomMlcgC$Random$rand16(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  error_t UniqueSendP$SubSend$send(message_t *arg_0x403b4c68, uint8_t arg_0x403b4df0);
#line 114
static  void *UniqueSendP$SubSend$getPayload(message_t *arg_0x403bcae8, uint8_t arg_0x403bcc70);
#line 89
static  void UniqueSendP$Send$sendDone(message_t *arg_0x403b3e18, error_t arg_0x403bc010);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Random.nc"
static   uint16_t UniqueSendP$Random$rand16(void);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static   cc2420_header_t *UniqueSendP$CC2420PacketBody$getHeader(message_t *arg_0x403b92d0);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/State.nc"
static   void UniqueSendP$State$toIdle(void);
#line 45
static   error_t UniqueSendP$State$requestState(uint8_t arg_0x4041b580);
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/unique/UniqueSendP.nc"
uint8_t UniqueSendP$localSendId;

enum UniqueSendP$__nesc_unnamed4365 {
  UniqueSendP$S_IDLE, 
  UniqueSendP$S_SENDING
};


static inline  error_t UniqueSendP$Init$init(void);
#line 75
static inline  error_t UniqueSendP$Send$send(message_t *msg, uint8_t len);
#line 99
static inline  void *UniqueSendP$Send$getPayload(message_t *msg, uint8_t len);




static inline  void UniqueSendP$SubSend$sendDone(message_t *msg, error_t error);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *UniqueReceiveP$Receive$receive(message_t *arg_0x40355d28, void *arg_0x40355ec8, uint8_t arg_0x40354068);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static   cc2420_header_t *UniqueReceiveP$CC2420PacketBody$getHeader(message_t *arg_0x403b92d0);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *UniqueReceiveP$DuplicateReceive$receive(message_t *arg_0x40355d28, void *arg_0x40355ec8, uint8_t arg_0x40354068);
# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/unique/UniqueReceiveP.nc"
#line 56
struct UniqueReceiveP$__nesc_unnamed4366 {
  am_addr_t source;
  uint8_t dsn;
} UniqueReceiveP$receivedMessages[4];

uint8_t UniqueReceiveP$writeIndex = 0;


uint8_t UniqueReceiveP$recycleSourceElement;

enum UniqueReceiveP$__nesc_unnamed4367 {
  UniqueReceiveP$INVALID_ELEMENT = 0xFF
};


static inline  error_t UniqueReceiveP$Init$init(void);









static inline bool UniqueReceiveP$hasSeen(uint16_t msgSource, uint8_t msgDsn);
static inline void UniqueReceiveP$insert(uint16_t msgSource, uint8_t msgDsn);


static inline  message_t *UniqueReceiveP$SubReceive$receive(message_t *msg, void *payload, 
uint8_t len);
#line 111
static inline bool UniqueReceiveP$hasSeen(uint16_t msgSource, uint8_t msgDsn);
#line 137
static inline void UniqueReceiveP$insert(uint16_t msgSource, uint8_t msgDsn);
#line 158
static inline   message_t *UniqueReceiveP$DuplicateReceive$default$receive(message_t *msg, void *payload, uint8_t len);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  error_t CC2420TinyosNetworkP$SubSend$send(message_t *arg_0x403b4c68, uint8_t arg_0x403b4df0);
#line 114
static  void *CC2420TinyosNetworkP$SubSend$getPayload(message_t *arg_0x403bcae8, uint8_t arg_0x403bcc70);
#line 89
static  void CC2420TinyosNetworkP$Send$sendDone(message_t *arg_0x403b3e18, error_t arg_0x403bc010);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *CC2420TinyosNetworkP$NonTinyosReceive$receive(
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
uint8_t arg_0x40aabd88, 
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x40355d28, void *arg_0x40355ec8, uint8_t arg_0x40354068);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static   cc2420_header_t *CC2420TinyosNetworkP$CC2420PacketBody$getHeader(message_t *arg_0x403b92d0);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *CC2420TinyosNetworkP$Receive$receive(message_t *arg_0x40355d28, void *arg_0x40355ec8, uint8_t arg_0x40354068);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline  error_t CC2420TinyosNetworkP$Send$send(message_t *msg, uint8_t len);
#line 74
static inline  void *CC2420TinyosNetworkP$Send$getPayload(message_t *msg, uint8_t len);




static inline  void CC2420TinyosNetworkP$SubSend$sendDone(message_t *msg, error_t error);




static inline  message_t *CC2420TinyosNetworkP$SubReceive$receive(message_t *msg, void *payload, uint8_t len);









static inline   message_t *CC2420TinyosNetworkP$NonTinyosReceive$default$receive(uint8_t networkId, message_t *msg, void *payload, uint8_t len);
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*DymoNetworkC.MHQueue.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(message_t *arg_0x403561c0, error_t arg_0x40356348);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  error_t /*DymoNetworkC.MHQueue.AMQueueEntryP*/AMQueueEntryP$0$Send$send(message_t *arg_0x403b4c68, uint8_t arg_0x403b4df0);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  void /*DymoNetworkC.MHQueue.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(message_t *arg_0x40348010, am_addr_t arg_0x403481a0);
#line 151
static  void /*DymoNetworkC.MHQueue.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(message_t *arg_0x40347f00, am_id_t arg_0x403460b0);
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static  error_t /*DymoNetworkC.MHQueue.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline  void /*DymoNetworkC.MHQueue.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(message_t *m, error_t err);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40b169c8, 
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t arg_0x40358da8, message_t *arg_0x40357010, uint8_t arg_0x40357198);
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40b16068, 
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
message_t *arg_0x403b3e18, error_t arg_0x403bc010);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(message_t *arg_0x40351010);
#line 83
static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(message_t *arg_0x40351690, uint8_t arg_0x40351818);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$postTask(void);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(message_t *arg_0x40349368);
#line 136
static  am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(message_t *arg_0x40347968);
# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4368 {
#line 118
  AMQueueImplP$0$CancelTask = 13U
};
#line 118
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_sillytask_CancelTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask];
#line 161
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4369 {
#line 161
  AMQueueImplP$0$errorTask = 14U
};
#line 161
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_sillytask_errorTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask];
#line 49
#line 47
typedef struct /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4370 {
  message_t *msg;
} /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue_entry_t;

uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current = 2;
/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue_entry_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[2];
uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[2 / 8 + 1];

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void);

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$nextPacket(void);
#line 82
static  error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(uint8_t clientId, message_t *msg, 
uint8_t len);
#line 118
static inline  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask(void);
#line 155
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(uint8_t last, message_t *msg, error_t err);





static inline  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void);




static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void);
#line 181
static inline  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(am_id_t id, message_t *msg, error_t err);
#line 207
static inline   void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(uint8_t id, message_t *msg, error_t err);
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*DymoNetworkC.DymoQueue.AMQueueEntryP*/AMQueueEntryP$1$AMSend$sendDone(message_t *arg_0x403561c0, error_t arg_0x40356348);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  error_t /*DymoNetworkC.DymoQueue.AMQueueEntryP*/AMQueueEntryP$1$Send$send(message_t *arg_0x403b4c68, uint8_t arg_0x403b4df0);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  void /*DymoNetworkC.DymoQueue.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setDestination(message_t *arg_0x40348010, am_addr_t arg_0x403481a0);
#line 151
static  void /*DymoNetworkC.DymoQueue.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setType(message_t *arg_0x40347f00, am_id_t arg_0x403460b0);
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static  error_t /*DymoNetworkC.DymoQueue.AMQueueEntryP*/AMQueueEntryP$1$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline  void /*DymoNetworkC.DymoQueue.AMQueueEntryP*/AMQueueEntryP$1$Send$sendDone(message_t *m, error_t err);
# 36 "../../../tos/lib/net/tymo/dymo/DymoTable.nc"
static  void /*DymoTableC.DymoTableM*/DymoTableM$0$DymoTable$brokenRouteNeeded(const rt_info_t *arg_0x40b49768);
#line 34
static  void /*DymoTableC.DymoTableM*/DymoTableM$0$DymoTable$routeNeeded(addr_t arg_0x40b491a0);
# 35 "../../../tos/lib/net/tymo/RoutingTable.nc"
static  void /*DymoTableC.DymoTableM*/DymoTableM$0$RoutingTable$evicted(const rt_info_t *arg_0x40b4c4e8, reason_t arg_0x40b4c678);
# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*DymoTableC.DymoTableM*/DymoTableM$0$Timer$startOneShot(
# 22 "../../../tos/lib/net/tymo/dymo/DymoTableM.nc"
uint8_t arg_0x40b45bb8, 
# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t arg_0x4035a9f0);




static  void /*DymoTableC.DymoTableM*/DymoTableM$0$Timer$stop(
# 22 "../../../tos/lib/net/tymo/dymo/DymoTableM.nc"
uint8_t arg_0x40b45bb8);









rt_entry_t /*DymoTableC.DymoTableM*/DymoTableM$0$table[10];
rt_info_t /*DymoTableC.DymoTableM*/DymoTableM$0$buf_info;
uint8_t /*DymoTableC.DymoTableM*/DymoTableM$0$size;
uint8_t /*DymoTableC.DymoTableM*/DymoTableM$0$num_entries;
uint8_t /*DymoTableC.DymoTableM*/DymoTableM$0$replace;


static void /*DymoTableC.DymoTableM*/DymoTableM$0$replace_info(uint8_t entry_id, const rt_info_t *route_info);
static int8_t /*DymoTableC.DymoTableM*/DymoTableM$0$get_route(addr_t address);
static void /*DymoTableC.DymoTableM*/DymoTableM$0$delete_route(uint8_t entry_id, reason_t r);
static bool /*DymoTableC.DymoTableM*/DymoTableM$0$is_superior(const rt_info_t *info1, const rt_entry_t *entry, dymo_msg_t msg_type);
static inline void /*DymoTableC.DymoTableM*/DymoTableM$0$set_timer(uint8_t entry_id, rt_timer_t timer_id);
static void /*DymoTableC.DymoTableM*/DymoTableM$0$cancel_timer(uint8_t entry_id, rt_timer_t timer);
static void /*DymoTableC.DymoTableM*/DymoTableM$0$cancel_timers(uint8_t entry_id);

static inline  error_t /*DymoTableC.DymoTableM*/DymoTableM$0$StdControl$start(void);






static inline  error_t /*DymoTableC.DymoTableM*/DymoTableM$0$StdControl$stop(void);









static  error_t /*DymoTableC.DymoTableM*/DymoTableM$0$RoutingTable$getForwardingRoute(addr_t address, rt_info_t *info);
#line 96
static  error_t /*DymoTableC.DymoTableM*/DymoTableM$0$RoutingTable$getRoute(addr_t address, rt_info_t *info);
#line 126
static  error_t /*DymoTableC.DymoTableM*/DymoTableM$0$DymoTable$update(const rt_info_t *route_info, dymo_msg_t msg_type);
#line 212
static inline  bool /*DymoTableC.DymoTableM*/DymoTableM$0$DymoTable$isSuperior(const rt_info_t *info, dymo_msg_t t);




static inline  void /*DymoTableC.DymoTableM*/DymoTableM$0$Timer$fired(uint8_t timer_id);
#line 242
static inline  void /*DymoTableC.DymoTableM*/DymoTableM$0$LinkMonitor$brokenLink(addr_t neighbor);
#line 255
static void /*DymoTableC.DymoTableM*/DymoTableM$0$replace_info(uint8_t pos, const rt_info_t *route_info);









static int8_t /*DymoTableC.DymoTableM*/DymoTableM$0$get_route(addr_t address);










static void /*DymoTableC.DymoTableM*/DymoTableM$0$delete_route(uint8_t entry_id, reason_t r);








static bool /*DymoTableC.DymoTableM*/DymoTableM$0$is_superior(const rt_info_t *info1, const rt_entry_t *entry, dymo_msg_t msg_type);
#line 299
static inline void /*DymoTableC.DymoTableM*/DymoTableM$0$set_timer(uint8_t entry_id, rt_timer_t timer_id);




static void /*DymoTableC.DymoTableM*/DymoTableM$0$cancel_timer(uint8_t entry_id, rt_timer_t timer_id);




static void /*DymoTableC.DymoTableM*/DymoTableM$0$cancel_timers(uint8_t entry_id);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*DymoTableC.Timers*/VirtualizeTimerC$1$updateFromTimer$postTask(void);
# 125 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static  uint32_t /*DymoTableC.Timers*/VirtualizeTimerC$1$TimerFrom$getNow(void);
#line 118
static  void /*DymoTableC.Timers*/VirtualizeTimerC$1$TimerFrom$startOneShotAt(uint32_t arg_0x40360738, uint32_t arg_0x403608c8);
#line 67
static  void /*DymoTableC.Timers*/VirtualizeTimerC$1$TimerFrom$stop(void);




static  void /*DymoTableC.Timers*/VirtualizeTimerC$1$Timer$fired(
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40a15090);
#line 60
enum /*DymoTableC.Timers*/VirtualizeTimerC$1$__nesc_unnamed4371 {
#line 60
  VirtualizeTimerC$1$updateFromTimer = 15U
};
#line 60
typedef int /*DymoTableC.Timers*/VirtualizeTimerC$1$__nesc_sillytask_updateFromTimer[/*DymoTableC.Timers*/VirtualizeTimerC$1$updateFromTimer];
#line 42
enum /*DymoTableC.Timers*/VirtualizeTimerC$1$__nesc_unnamed4372 {

  VirtualizeTimerC$1$NUM_TIMERS = 50, 
  VirtualizeTimerC$1$END_OF_LIST = 255
};








#line 48
typedef struct /*DymoTableC.Timers*/VirtualizeTimerC$1$__nesc_unnamed4373 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*DymoTableC.Timers*/VirtualizeTimerC$1$Timer_t;

/*DymoTableC.Timers*/VirtualizeTimerC$1$Timer_t /*DymoTableC.Timers*/VirtualizeTimerC$1$m_timers[/*DymoTableC.Timers*/VirtualizeTimerC$1$NUM_TIMERS];




static void /*DymoTableC.Timers*/VirtualizeTimerC$1$fireTimers(uint32_t now);
#line 89
static inline  void /*DymoTableC.Timers*/VirtualizeTimerC$1$updateFromTimer$runTask(void);
#line 128
static inline  void /*DymoTableC.Timers*/VirtualizeTimerC$1$TimerFrom$fired(void);




static void /*DymoTableC.Timers*/VirtualizeTimerC$1$startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);
#line 148
static inline  void /*DymoTableC.Timers*/VirtualizeTimerC$1$Timer$startOneShot(uint8_t num, uint32_t dt);




static inline  void /*DymoTableC.Timers*/VirtualizeTimerC$1$Timer$stop(uint8_t num);
# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t MHEngineM$MHPacket$address(void);









static  am_addr_t MHEngineM$MHPacket$destination(message_t *arg_0x40349368);
#line 110
static  void MHEngineM$MHPacket$setSource(message_t *arg_0x403488b0, am_addr_t arg_0x40348a40);
#line 92
static  void MHEngineM$MHPacket$setDestination(message_t *arg_0x40348010, am_addr_t arg_0x403481a0);
#line 136
static  am_id_t MHEngineM$MHPacket$type(message_t *arg_0x40347968);
#line 151
static  void MHEngineM$MHPacket$setType(message_t *arg_0x40347f00, am_id_t arg_0x403460b0);
#line 125
static  bool MHEngineM$MHPacket$isForMe(message_t *arg_0x40347220);
# 26 "../../../tos/lib/net/tymo/RoutingTable.nc"
static  error_t MHEngineM$RoutingTable$getRoute(addr_t arg_0x40b4e5f0, rt_info_t *arg_0x40b4e7a0);

static  error_t MHEngineM$RoutingTable$getForwardingRoute(addr_t arg_0x40b4ede0, rt_info_t *arg_0x40b4c010);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  void MHEngineM$AMPacket$setDestination(message_t *arg_0x40348010, am_addr_t arg_0x403481a0);
# 25 "../../../tos/lib/net/tymo/mh/MHEngineM.nc"
rt_info_t MHEngineM$info;

static  fw_action_t MHEngineM$RouteSelect$selectRoute(message_t *msg, addr_t *destination, uint8_t *am_type);
#line 68
static inline  void MHEngineM$RoutingTable$evicted(const rt_info_t *rt_info, reason_t r);
# 115 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
static  void *MHPacketM$SubPacket$getPayload(message_t *arg_0x40350540, uint8_t arg_0x403506c8);
#line 95
static  uint8_t MHPacketM$SubPacket$maxPayloadLength(void);
#line 83
static  void MHPacketM$SubPacket$setPayloadLength(message_t *arg_0x40351690, uint8_t arg_0x40351818);
# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t MHPacketM$AMPacket$address(void);
#line 151
static  void MHPacketM$AMPacket$setType(message_t *arg_0x40347f00, am_id_t arg_0x403460b0);
# 38 "../../../tos/lib/net/tymo/mh/MHPacketM.nc"
static inline  void *MHPacketM$Packet$getPayload(message_t *msg, uint8_t len);








static  uint8_t MHPacketM$Packet$payloadLength(message_t *amsg);



static  void MHPacketM$Packet$setPayloadLength(message_t *amsg, uint8_t len);









static inline  am_addr_t MHPacketM$MHPacket$address(void);



static inline  am_addr_t MHPacketM$MHPacket$destination(message_t *amsg);



static inline  bool MHPacketM$MHPacket$isForMe(message_t *amsg);



static inline  void MHPacketM$MHPacket$setDestination(message_t *amsg, am_addr_t addr);



static inline  void MHPacketM$MHPacket$setSource(message_t *amsg, am_addr_t addr);



static inline  void MHPacketM$MHPacket$setType(message_t *amsg, am_id_t t);








static  am_id_t MHPacketM$MHPacket$type(message_t *amsg);
# 24 "../../../tos/lib/net/tymo/RouteSelect.nc"
static  fw_action_t /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$RouteSelect$selectRoute(message_t *arg_0x40b9ecc0, addr_t *arg_0x40b9ee70, uint8_t *arg_0x40b9d030);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$SubSend$send(am_addr_t arg_0x40358da8, message_t *arg_0x40357010, uint8_t arg_0x40357198);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$PPacket$payloadLength(message_t *arg_0x40351010);
#line 115
static  void */*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$PPacket$getPayload(message_t *arg_0x40350540, uint8_t arg_0x403506c8);
#line 83
static  void /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$PPacket$setPayloadLength(message_t *arg_0x40351690, uint8_t arg_0x40351818);
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Intercept.nc"
static  bool /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Intercept$forward(
# 23 "../../../tos/lib/net/tymo/ForwardingEngineM.nc"
uint8_t arg_0x40bcec70, 
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Intercept.nc"
message_t *arg_0x40352428, void *arg_0x403525c8, uint8_t arg_0x40352750);
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$AMSend$sendDone(
# 21 "../../../tos/lib/net/tymo/ForwardingEngineM.nc"
uint8_t arg_0x40bcfd68, 
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0x403561c0, error_t arg_0x40356348);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$SubPacket$payloadLength(message_t *arg_0x40351010);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t */*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Receive$receive(
# 22 "../../../tos/lib/net/tymo/ForwardingEngineM.nc"
uint8_t arg_0x40bce6b8, 
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x40355d28, void *arg_0x40355ec8, uint8_t arg_0x40354068);
# 16 "../../../tos/lib/net/tymo/LinkMonitor.nc"
static  void /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$LinkMonitor$brokenLink(am_addr_t arg_0x40b30598);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$AMPacket$destination(message_t *arg_0x40349368);
# 5 "../../../tos/lib/net/tymo/mh/MHControl.nc"
static  void /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$MHControl$sendFailed(message_t *arg_0x4037ea10, uint8_t arg_0x4037eb98);
#line 3
static  void /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$MHControl$msgReceived(message_t *arg_0x4037e560);
# 140 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static  uint32_t /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Timer$getdt(void);
#line 62
static  void /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Timer$startOneShot(uint32_t arg_0x4035a9f0);




static  void /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Timer$stop(void);
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc"
static   error_t /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Acks$requestAck(message_t *arg_0x4037f818);
#line 74
static   bool /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Acks$wasAcked(message_t *arg_0x403886c0);
# 41 "../../../tos/lib/net/tymo/ForwardingEngineM.nc"
message_t /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$buf;
message_t */*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$avail = &/*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$buf;
message_t */*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$waiting;
uint8_t /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$typebuf;
uint8_t /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$lenWaiting;
uint8_t /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$amWaiting = 0;
am_addr_t /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$bufAddr;
am_addr_t */*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$addrWaiting;
bool /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$lockAvail;
#line 49
bool /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$lockWaiting;
uint32_t /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$wait_time;
bool /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$acks;

enum /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$__nesc_unnamed4374 {
  ForwardingEngineM$0$WAIT_BEFORE_RETRY = 100, 
  ForwardingEngineM$0$MAX_WAIT = 10 * /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$WAIT_BEFORE_RETRY
};

static inline  error_t /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$AMSend$send(uint8_t am, am_addr_t addr, message_t *msg, uint8_t len);
#line 88
static inline  message_t */*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$SubReceive$receive(message_t *msg, void *payload, uint8_t len);
#line 132
static  void /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$SubSend$sendDone(message_t *msg, error_t e);
#line 166
static inline  void /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Timer$fired(void);
#line 227
static inline   message_t */*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Receive$default$receive(uint8_t am, message_t *msg, void *payload, uint8_t len);



static inline   void /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$AMSend$default$sendDone(uint8_t am, message_t *msg, error_t e);

static inline   bool /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Intercept$default$forward(uint8_t am, message_t *msg, void *payload, uint8_t len);



static inline   void /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$MHControl$default$msgReceived(message_t *msg);

static inline   void /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$MHControl$default$sendFailed(message_t *msg, uint8_t why);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  void DymoEngineM$SplitControl$startDone(error_t arg_0x40325330);
# 27 "../../../tos/lib/net/tymo/dymo/DymoTable.nc"
static  bool DymoEngineM$DymoTable$isSuperior(const rt_info_t *arg_0x40b4ab58, dymo_msg_t arg_0x40b4acf0);
#line 25
static  error_t DymoEngineM$DymoTable$update(const rt_info_t *arg_0x40b4a2c0, dymo_msg_t arg_0x40b4a458);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t DymoEngineM$AMSend$send(am_addr_t arg_0x40358da8, message_t *arg_0x40357010, uint8_t arg_0x40357198);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t DymoEngineM$issueRERR$postTask(void);
# 25 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Mount.nc"
static  error_t DymoEngineM$Mount$mount(void);
# 26 "../../../tos/lib/net/tymo/RoutingTable.nc"
static  error_t DymoEngineM$RoutingTable$getRoute(addr_t arg_0x40b4e5f0, rt_info_t *arg_0x40b4e7a0);

static  error_t DymoEngineM$RoutingTable$getForwardingRoute(addr_t arg_0x40b4ede0, rt_info_t *arg_0x40b4c010);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t DymoEngineM$issueRREP$postTask(void);
#line 56
static   error_t DymoEngineM$forward$postTask(void);
#line 56
static   error_t DymoEngineM$issueRREQ$postTask(void);
# 74 "../../../tos/lib/net/tymo/dymo/DymoPacket.nc"
static  void DymoEngineM$DymoPacket$startProcessing(message_t *arg_0x40c03918, message_t *arg_0x40c03ac8);
#line 58
static  error_t DymoEngineM$DymoPacket$addInfo(message_t *arg_0x40c030d0, const rt_info_t *arg_0x40c032a0);
#line 45
static  void DymoEngineM$DymoPacket$createRM(message_t *arg_0x40c054f0, dymo_msg_t arg_0x40c05688, 
const rt_info_t *arg_0x40c05868, const rt_info_t *arg_0x40c05a38);
#line 29
static  uint16_t DymoEngineM$DymoPacket$getSize(message_t *arg_0x40c05010);
#line 24
static  dymo_msg_t DymoEngineM$DymoPacket$getType(message_t *arg_0x40c06ad8);
# 77 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t DymoEngineM$AMPacket$source(message_t *arg_0x40349958);
#line 57
static  am_addr_t DymoEngineM$AMPacket$address(void);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
static  error_t DymoEngineM$ConfigStorage$read(storage_addr_t arg_0x40c219a0, void *arg_0x40c21b40, storage_len_t arg_0x40c21cd0);
#line 124
static  error_t DymoEngineM$ConfigStorage$commit(void);
#line 152
static  bool DymoEngineM$ConfigStorage$valid(void);
#line 97
static  error_t DymoEngineM$ConfigStorage$write(storage_addr_t arg_0x40c1e100, void *arg_0x40c1e2a0, storage_len_t arg_0x40c1e430);
# 149 "../../../tos/lib/net/tymo/dymo/DymoEngineM.nc"
enum DymoEngineM$__nesc_unnamed4375 {
#line 149
  DymoEngineM$issueRREQ = 16U
};
#line 149
typedef int DymoEngineM$__nesc_sillytask_issueRREQ[DymoEngineM$issueRREQ];
#line 163
enum DymoEngineM$__nesc_unnamed4376 {
#line 163
  DymoEngineM$issueRREP = 17U
};
#line 163
typedef int DymoEngineM$__nesc_sillytask_issueRREP[DymoEngineM$issueRREP];
#line 179
enum DymoEngineM$__nesc_unnamed4377 {
#line 179
  DymoEngineM$issueRERR = 18U
};
#line 179
typedef int DymoEngineM$__nesc_sillytask_issueRERR[DymoEngineM$issueRERR];
#line 192
enum DymoEngineM$__nesc_unnamed4378 {
#line 192
  DymoEngineM$forward = 19U
};
#line 192
typedef int DymoEngineM$__nesc_sillytask_forward[DymoEngineM$forward];
#line 41
message_t *DymoEngineM$avail_msg;
message_t DymoEngineM$buf_avail;
message_t DymoEngineM$buf_packet;
rt_info_t DymoEngineM$me;
rt_info_t DymoEngineM$buf_info;
addr_t DymoEngineM$ignoreNeeded;
bool DymoEngineM$busySend;


bool DymoEngineM$busyProcess;
#line 50
bool DymoEngineM$busyIssue;
uint8_t DymoEngineM$cur_hopcnt;
uint8_t DymoEngineM$cur_info_pos;
rt_info_t DymoEngineM$buf_target;
addr_t DymoEngineM$fw_address;
message_t DymoEngineM$fw_msg;
bool DymoEngineM$sendRREP;





static inline  error_t DymoEngineM$SplitControl$start(void);
#line 82
static void DymoEngineM$incr_seqnum(void);








static inline  void DymoEngineM$ConfigStorage$writeDone(storage_addr_t addr, void *buf, 
storage_len_t len, error_t err);
#line 105
static  void DymoEngineM$Mount$mountDone(error_t error);
#line 128
static  void DymoEngineM$ConfigStorage$commitDone(error_t err);







static  void DymoEngineM$ConfigStorage$readDone(storage_addr_t addr, void *buf, 
storage_len_t len, error_t err) __attribute((noinline)) ;
#line 149
static inline  void DymoEngineM$issueRREQ$runTask(void);
#line 163
static inline  void DymoEngineM$issueRREP$runTask(void);
#line 179
static inline  void DymoEngineM$issueRERR$runTask(void);
#line 192
static inline  void DymoEngineM$forward$runTask(void);










static inline  message_t *DymoEngineM$Receive$receive(message_t *msg, void *payload, uint8_t len);
#line 222
static inline  proc_action_t DymoEngineM$DymoPacket$hopsProcessed(message_t *msg, uint8_t hop_limit, uint8_t hop_count);










static inline proc_action_t DymoEngineM$process_rm_info(message_t *msg, rt_info_t *info);
#line 340
static inline proc_action_t DymoEngineM$process_err_info(message_t *msg, rt_info_t *info);









static inline  proc_action_t DymoEngineM$DymoPacket$infoProcessed(message_t *msg, rt_info_t *info);






static inline  void DymoEngineM$DymoPacket$messageProcessed(message_t *msg);
#line 382
static  void DymoEngineM$DymoTable$routeNeeded(addr_t destination);
#line 401
static  void DymoEngineM$DymoTable$brokenRouteNeeded(const rt_info_t *route_info);










static  void DymoEngineM$RoutingTable$evicted(const rt_info_t *route_info, reason_t r);
#line 425
static  void DymoEngineM$AMSend$sendDone(message_t *msg, error_t error);
# 115 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
static  void *DymoPacketM$Packet$getPayload(message_t *arg_0x40350540, uint8_t arg_0x403506c8);
#line 95
static  uint8_t DymoPacketM$Packet$maxPayloadLength(void);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t DymoPacketM$processMessage$postTask(void);
# 95 "../../../tos/lib/net/tymo/dymo/DymoPacket.nc"
static  proc_action_t DymoPacketM$DymoPacket$infoProcessed(message_t *arg_0x40c02b40, rt_info_t *arg_0x40c02cf0);
#line 85
static  proc_action_t DymoPacketM$DymoPacket$hopsProcessed(message_t *arg_0x40c02190, uint8_t arg_0x40c02320, uint8_t arg_0x40c024b0);
#line 101
static  void DymoPacketM$DymoPacket$messageProcessed(message_t *arg_0x40c013d8);
# 131 "../../../tos/lib/net/tymo/dymo/DymoPacketM.nc"
enum DymoPacketM$__nesc_unnamed4379 {
#line 131
  DymoPacketM$processMessage = 20U
};
#line 131
typedef int DymoPacketM$__nesc_sillytask_processMessage[DymoPacketM$processMessage];
#line 23
message_t *DymoPacketM$currentMsg;
message_t *DymoPacketM$processedMsg;


static void DymoPacketM$create_block(nx_uint8_t *payload, const rt_info_t *info);
static uint8_t DymoPacketM$block_size(nx_uint8_t *block);
static uint8_t DymoPacketM$block_info_size(nx_uint8_t *block);
static inline uint8_t DymoPacketM$block_header_size(nx_uint8_t *block);
static inline uint8_t DymoPacketM$block_num_addr(nx_uint8_t *block);
static inline void DymoPacketM$block_get_info(nx_uint8_t *block, uint8_t pos, rt_info_t *info, bool update);
static nx_uint8_t *DymoPacketM$block_get_pointer(nx_uint8_t *block, uint8_t pos, uint8_t *size);
static bool DymoPacketM$block_can_contain(nx_uint8_t *block, const rt_info_t *info);
static void DymoPacketM$block_add_info(nx_uint8_t *block, const rt_info_t *info);
static inline void DymoPacketM$move_data(nx_uint8_t *data, uint8_t amount, uint8_t offset);






static  dymo_msg_t DymoPacketM$DymoPacket$getType(message_t *msg);




static  uint16_t DymoPacketM$DymoPacket$getSize(message_t *msg);









static  void DymoPacketM$DymoPacket$createRM(message_t *msg, dymo_msg_t msg_type, 
const rt_info_t *origin, const rt_info_t *target);
#line 89
static inline  error_t DymoPacketM$DymoPacket$addInfo(message_t *msg, const rt_info_t *info);
#line 131
static inline  void DymoPacketM$processMessage$runTask(void);
#line 198
static inline  void DymoPacketM$DymoPacket$startProcessing(message_t *msg, message_t *newmsg);








static void DymoPacketM$create_block(nx_uint8_t *payload, const rt_info_t *info);
#line 229
static void DymoPacketM$block_add_info(nx_uint8_t *block, const rt_info_t *info);
#line 252
static bool DymoPacketM$block_can_contain(nx_uint8_t *block, const rt_info_t *info);
#line 269
static uint8_t DymoPacketM$block_info_size(nx_uint8_t *block);
#line 281
static inline uint8_t DymoPacketM$block_header_size(nx_uint8_t *block);






static inline uint8_t DymoPacketM$block_num_addr(nx_uint8_t *block);



static uint8_t DymoPacketM$block_size(nx_uint8_t *block);







static nx_uint8_t *DymoPacketM$block_get_pointer(nx_uint8_t *block, uint8_t pos, uint8_t *size);








static inline void DymoPacketM$block_get_info(nx_uint8_t *block, uint8_t pos, rt_info_t *info, bool update);
#line 339
static inline void DymoPacketM$move_data(nx_uint8_t *data, uint8_t amount, uint8_t offset);
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45db.nc"
static  void ConfigStorageP$At45db$copyPage(at45page_t arg_0x40c96be8, at45page_t arg_0x40c96d78);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static  at45page_t ConfigStorageP$BConfig$npages(
# 27 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40c9ab00);
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static  at45page_t ConfigStorageP$BConfig$remap(
# 27 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40c9ab00, 
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
at45page_t arg_0x40c9a520);
#line 44
static  void ConfigStorageP$BConfig$writeContinue(
# 27 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40c9ab00, 
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
error_t arg_0x40c9bb88);
# 36 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Mount.nc"
static  void ConfigStorageP$Mount$mountDone(
# 25 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40ca0ec0, 
# 36 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Mount.nc"
error_t arg_0x40bfd9e0);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
static  error_t ConfigStorageP$BlockRead$read(
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40cb7eb8, 
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
storage_addr_t arg_0x40cb9100, void *arg_0x40cb92a0, storage_len_t arg_0x40cb9430);
#line 83
static  error_t ConfigStorageP$BlockRead$computeCrc(
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40cb7eb8, 
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
storage_addr_t arg_0x40cb85f8, storage_len_t arg_0x40cb8788, 
uint16_t arg_0x40cb8928);
#line 103
static  storage_len_t ConfigStorageP$BlockRead$getSize(
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40cb7eb8);
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
static  error_t ConfigStorageP$BlockWrite$write(
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40cb1488, 
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
storage_addr_t arg_0x40cb4b58, void *arg_0x40cb4cf8, storage_len_t arg_0x40cb4e88);
#line 103
static  error_t ConfigStorageP$BlockWrite$sync(
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40cb1488);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
static  void ConfigStorageP$ConfigStorage$writeDone(
# 26 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40c9f5b8, 
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
storage_addr_t arg_0x40c1eaf0, void *arg_0x40c1ec90, storage_len_t arg_0x40c1ee20, 
error_t arg_0x40c1d010);
#line 133
static  void ConfigStorageP$ConfigStorage$commitDone(
# 26 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40c9f5b8, 
# 133 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
error_t arg_0x40c1db58);
#line 80
static  void ConfigStorageP$ConfigStorage$readDone(
# 26 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40c9f5b8, 
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
storage_addr_t arg_0x40c20630, void *arg_0x40c207d0, storage_len_t arg_0x40c20960, 
error_t arg_0x40c20af8);
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
enum ConfigStorageP$__nesc_unnamed4380 {
  ConfigStorageP$S_STOPPED, 
  ConfigStorageP$S_MOUNT, 
  ConfigStorageP$S_COMMIT, 
  ConfigStorageP$S_CLEAN, 
  ConfigStorageP$S_DIRTY, 
  ConfigStorageP$S_INVALID
};

enum ConfigStorageP$__nesc_unnamed4381 {
  ConfigStorageP$N = 1U, 
  ConfigStorageP$NO_CLIENT = 0xff
};








#line 72
struct ConfigStorageP$__nesc_unnamed4382 {
  uint8_t state : 3;
  uint8_t committing : 1;
} ConfigStorageP$s[ConfigStorageP$N];



#line 76
nx_struct ConfigStorageP$__nesc_unnamed4383 {
  nx_uint16_t crc;
  nx_uint32_t version;
} __attribute__((packed)) ConfigStorageP$low[ConfigStorageP$N];
#line 79
#line 76
nx_struct ConfigStorageP$__nesc_unnamed4383 


ConfigStorageP$high[ConfigStorageP$N];



uint8_t ConfigStorageP$flipState[(ConfigStorageP$N + 7) / 8];

uint8_t ConfigStorageP$client = ConfigStorageP$NO_CLIENT;
at45page_t ConfigStorageP$nextPage;

static void ConfigStorageP$setFlip(uint8_t id, bool flip);






static inline bool ConfigStorageP$flipped(uint8_t id);



static inline void ConfigStorageP$flip(uint8_t id);



static inline storage_len_t ConfigStorageP$volumeSize(uint8_t id);







static inline  error_t ConfigStorageP$Mount$mount(uint8_t id);
#line 124
static void ConfigStorageP$computeCrc(uint8_t id);





static inline void ConfigStorageP$mountReadDone(uint8_t id, error_t error);
#line 150
static inline void ConfigStorageP$mountCrcDone(uint8_t id, uint16_t crc, error_t error);
#line 183
static inline  error_t ConfigStorageP$ConfigStorage$read(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len);









static inline void ConfigStorageP$readReadDone(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len, error_t error);







static inline  error_t ConfigStorageP$ConfigStorage$write(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len);









static void ConfigStorageP$copyCopyPageDone(error_t error);
static inline void ConfigStorageP$writeContinue(error_t error);

static inline  int ConfigStorageP$BConfig$writeHook(uint8_t id);
#line 230
static void ConfigStorageP$copyCopyPageDone(error_t error);
#line 253
static inline void ConfigStorageP$writeContinue(error_t error);






static inline void ConfigStorageP$writeWriteDone(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len, error_t error);








static void ConfigStorageP$commitSyncDone(uint8_t id, error_t error);

static  error_t ConfigStorageP$ConfigStorage$commit(uint8_t id);
#line 297
static inline void ConfigStorageP$commitCrcDone(uint8_t id, uint16_t crc, error_t error);
#line 314
static inline void ConfigStorageP$commitWriteDone(uint8_t id, error_t error);






static void ConfigStorageP$commitSyncDone(uint8_t id, error_t error);
#line 342
static inline  bool ConfigStorageP$ConfigStorage$valid(uint8_t id);










static inline  int ConfigStorageP$BConfig$isConfig(uint8_t id);



static __inline  int ConfigStorageP$BConfig$flipped(uint8_t id);



static inline  void ConfigStorageP$BlockRead$readDone(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len, error_t error);







static inline  void ConfigStorageP$BlockWrite$writeDone(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len, error_t error);







static inline  void ConfigStorageP$BlockWrite$syncDone(uint8_t id, error_t error);




static inline  void ConfigStorageP$BlockRead$computeCrcDone(uint8_t id, storage_addr_t addr, storage_len_t len, uint16_t crc, error_t error);







static inline  void ConfigStorageP$At45db$copyPageDone(error_t error);




static inline  void ConfigStorageP$BlockWrite$eraseDone(uint8_t id, error_t error);
static inline  void ConfigStorageP$At45db$eraseDone(error_t error);
static inline  void ConfigStorageP$At45db$syncDone(error_t error);
static inline  void ConfigStorageP$At45db$flushDone(error_t error);
static inline  void ConfigStorageP$At45db$readDone(error_t error);
static inline  void ConfigStorageP$At45db$computeCrcDone(error_t error, uint16_t crc);
static inline  void ConfigStorageP$At45db$writeDone(error_t error);

static inline   void ConfigStorageP$Mount$default$mountDone(uint8_t id, error_t error);
static inline   void ConfigStorageP$ConfigStorage$default$readDone(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len, error_t error);
static inline   void ConfigStorageP$ConfigStorage$default$writeDone(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len, error_t error);
static inline   void ConfigStorageP$ConfigStorage$default$commitDone(uint8_t id, error_t error);
# 155 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45db.nc"
static  void BlockStorageP$At45db$read(at45page_t arg_0x40cbf748, at45pageoffset_t arg_0x40cbf8e0, 
void *arg_0x40cbfa90, at45pageoffset_t arg_0x40cbfc28);
#line 100
static  void BlockStorageP$At45db$erase(at45page_t arg_0x40c95a30, uint8_t arg_0x40c95bc0);
#line 120
static  void BlockStorageP$At45db$syncAll(void);
#line 62
static  void BlockStorageP$At45db$write(at45page_t arg_0x40c97b20, at45pageoffset_t arg_0x40c97cb8, 
void *arg_0x40c97e68, at45pageoffset_t arg_0x40c96030);
#line 176
static  void BlockStorageP$At45db$computeCrc(at45page_t arg_0x40cbe908, at45pageoffset_t arg_0x40cbeaa0, 
at45pageoffset_t arg_0x40cbec48, uint16_t arg_0x40cbedd8);
# 112 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
static  void BlockStorageP$BlockWrite$syncDone(
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x40d1e8e8, 
# 112 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
error_t arg_0x40cb2ed0);
#line 71
static  void BlockStorageP$BlockWrite$writeDone(
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x40d1e8e8, 
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
storage_addr_t arg_0x40cb3598, void *arg_0x40cb3738, storage_len_t arg_0x40cb38c8, 
error_t arg_0x40cb3a60);
#line 91
static  void BlockStorageP$BlockWrite$eraseDone(
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x40d1e8e8, 
# 91 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
error_t arg_0x40cb24f8);
# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
static  void BlockStorageP$BlockRead$computeCrcDone(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x40d1d3e0, 
# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
storage_addr_t arg_0x40cb7010, storage_len_t arg_0x40cb71a0, 
uint16_t arg_0x40cb7340, error_t arg_0x40cb74c8);
#line 67
static  void BlockStorageP$BlockRead$readDone(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x40d1d3e0, 
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
storage_addr_t arg_0x40cb9ac0, void *arg_0x40cb9c60, storage_len_t arg_0x40cb9df0, 
error_t arg_0x40cb8010);
# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static  int BlockStorageP$BConfig$flipped(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x40d1a4f0);
# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static  int BlockStorageP$BConfig$isConfig(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x40d1a4f0);
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static  int BlockStorageP$BConfig$writeHook(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x40d1a4f0);
# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
static  at45page_t BlockStorageP$At45dbVolume$volumeSize(
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x40d174d0);
# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
static  at45page_t BlockStorageP$At45dbVolume$remap(
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x40d174d0, 
# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
at45page_t arg_0x40d18b98);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t BlockStorageP$Resource$release(
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x40d17b68);
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t BlockStorageP$Resource$request(
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x40d17b68);
#line 76
enum BlockStorageP$__nesc_unnamed4384 {
  BlockStorageP$R_IDLE, 
  BlockStorageP$R_WRITE, 
  BlockStorageP$R_ERASE, 
  BlockStorageP$R_SYNC, 
  BlockStorageP$R_READ, 
  BlockStorageP$R_CRC
};

enum BlockStorageP$__nesc_unnamed4385 {
  BlockStorageP$N = 0U + 1U, 
  BlockStorageP$NO_CLIENT = 0xff
};

uint8_t BlockStorageP$client = BlockStorageP$NO_CLIENT;
storage_addr_t BlockStorageP$currentOffset;







#line 93
struct BlockStorageP$__nesc_unnamed4386 {

  uint8_t request;
  uint8_t *buf;
  storage_addr_t addr;
  storage_len_t len;
} BlockStorageP$s[BlockStorageP$N];






static inline at45page_t BlockStorageP$pageRemap(at45page_t p);



static inline  at45page_t BlockStorageP$BConfig$npages(uint8_t id);



static  at45page_t BlockStorageP$BConfig$remap(uint8_t id, at45page_t page);
#line 132
static inline void BlockStorageP$eraseStart(void);
static inline void BlockStorageP$syncStart(void);
static inline void BlockStorageP$multipageStart(uint16_t crc);

static void BlockStorageP$startRequest(void);
#line 150
static void BlockStorageP$endRequest(error_t result, uint16_t crc);
#line 178
static error_t BlockStorageP$newRequest(uint8_t newState, uint8_t id, 
storage_addr_t addr, uint8_t *buf, storage_len_t len);
#line 204
static inline  void BlockStorageP$Resource$granted(uint8_t blockId);
#line 222
static  void BlockStorageP$BConfig$writeContinue(uint8_t blockId, error_t error);
#line 235
static void BlockStorageP$multipageContinue(uint16_t crc);
#line 269
static inline void BlockStorageP$multipageStart(uint16_t crc);




static inline void BlockStorageP$multipageOpDone(error_t result, uint16_t crc);
#line 289
static inline void BlockStorageP$eraseStart(void);



static inline void BlockStorageP$eraseEraseDone(error_t error);







static inline  error_t BlockStorageP$BlockWrite$write(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len);







static inline  error_t BlockStorageP$BlockWrite$sync(uint8_t id);



static inline void BlockStorageP$syncStart(void);



static inline void BlockStorageP$syncSyncDone(error_t error);







static inline  error_t BlockStorageP$BlockRead$read(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len);







static inline  error_t BlockStorageP$BlockRead$computeCrc(uint8_t id, storage_addr_t addr, storage_len_t len, uint16_t basecrc);







static  storage_len_t BlockStorageP$BlockRead$getSize(uint8_t blockId);
#line 356
static inline  void BlockStorageP$At45db$writeDone(error_t result);




static inline  void BlockStorageP$At45db$readDone(error_t result);




static inline  void BlockStorageP$At45db$computeCrcDone(error_t result, uint16_t newCrc);




static inline  void BlockStorageP$At45db$eraseDone(error_t result);




static inline  void BlockStorageP$At45db$syncDone(error_t result);




static inline  void BlockStorageP$At45db$flushDone(error_t result);
static inline  void BlockStorageP$At45db$copyPageDone(error_t error);






static inline   at45page_t BlockStorageP$At45dbVolume$default$remap(uint8_t id, at45page_t volumePage);
static inline   at45page_t BlockStorageP$At45dbVolume$default$volumeSize(uint8_t id);
static inline    error_t BlockStorageP$Resource$default$request(uint8_t id);
static inline    error_t BlockStorageP$Resource$default$release(uint8_t id);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45db.nc"
static  void At45dbP$HplAt45db$fill(uint8_t arg_0x40d57640, at45page_t arg_0x40d577d0);
#line 41
static  void At45dbP$HplAt45db$waitCompare(void);
#line 100
static  void At45dbP$HplAt45db$erase(uint8_t arg_0x40d547f8, at45page_t arg_0x40d54988);
#line 30
static  void At45dbP$HplAt45db$waitIdle(void);
#line 73
static  void At45dbP$HplAt45db$flush(uint8_t arg_0x40d560f8, at45page_t arg_0x40d56288);
#line 178
static  void At45dbP$HplAt45db$write(uint8_t arg_0x40d4f328, at45page_t arg_0x40d4f4b8, at45pageoffset_t arg_0x40d4f650, 
uint8_t *arg_0x40d4f808, at45pageoffset_t arg_0x40d4f9a0);
#line 87
static  void At45dbP$HplAt45db$compare(uint8_t arg_0x40d56c58, at45page_t arg_0x40d56de8);
#line 157
static  void At45dbP$HplAt45db$crc(uint8_t arg_0x40d50010, at45page_t arg_0x40d501a0, at45pageoffset_t arg_0x40d50338, 
at45pageoffset_t arg_0x40d504e0, uint16_t arg_0x40d50670);
#line 119
static  void At45dbP$HplAt45db$readBuffer(uint8_t arg_0x40d53250, at45pageoffset_t arg_0x40d533e8, 
uint8_t *arg_0x40d535a0, uint16_t arg_0x40d53730);
# 85 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45db.nc"
static  void At45dbP$At45db$copyPageDone(error_t arg_0x40c95508);
#line 125
static  void At45dbP$At45db$syncDone(error_t arg_0x40cc0330);
#line 143
static  void At45dbP$At45db$flushDone(error_t arg_0x40cbf200);
#line 69
static  void At45dbP$At45db$writeDone(error_t arg_0x40c96688);
#line 105
static  void At45dbP$At45db$eraseDone(error_t arg_0x40c94358);
#line 183
static  void At45dbP$At45db$computeCrcDone(error_t arg_0x40cbd5e8, uint16_t arg_0x40cbd778);
#line 162
static  void At45dbP$At45db$readDone(error_t arg_0x40cbe3b0);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/BusyWait.nc"
static   void At45dbP$BusyWait$wait(At45dbP$BusyWait$size_type arg_0x40d7b190);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t At45dbP$taskSuccess$postTask(void);
#line 56
static   error_t At45dbP$taskFail$postTask(void);
# 134 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbP.nc"
enum At45dbP$__nesc_unnamed4387 {
#line 134
  At45dbP$taskSuccess = 21U
};
#line 134
typedef int At45dbP$__nesc_sillytask_taskSuccess[At45dbP$taskSuccess];


enum At45dbP$__nesc_unnamed4388 {
#line 137
  At45dbP$taskFail = 22U
};
#line 137
typedef int At45dbP$__nesc_sillytask_taskFail[At45dbP$taskFail];
#line 69
enum At45dbP$__nesc_unnamed4389 {
  At45dbP$IDLE, 
  At45dbP$R_READ, 
  At45dbP$R_READCRC, 
  At45dbP$R_WRITE, 
  At45dbP$R_ERASE, 
  At45dbP$R_COPY, 
  At45dbP$R_SYNC, 
  At45dbP$R_SYNCALL, 
  At45dbP$R_FLUSH, 
  At45dbP$R_FLUSHALL, 
  At45dbP$BROKEN
};
uint8_t At45dbP$request;
at45pageoffset_t At45dbP$reqOffset;
#line 83
at45pageoffset_t At45dbP$reqBytes;
uint8_t *At45dbP$reqBuf;
at45page_t At45dbP$reqPage;

enum At45dbP$__nesc_unnamed4390 {
  At45dbP$P_READ, 
  At45dbP$P_READCRC, 
  At45dbP$P_WRITE, 
  At45dbP$P_FLUSH, 
  At45dbP$P_FILL, 
  At45dbP$P_ERASE, 
  At45dbP$P_COMPARE, 
  At45dbP$P_COMPARE_CHECK
};







#line 98
struct At45dbP$__nesc_unnamed4391 {
  at45page_t page;
  bool busy : 1;
  bool clean : 1;
  bool erased : 1;
  uint8_t unchecked : 2;
} At45dbP$buffer[2];
uint8_t At45dbP$selected;
uint8_t At45dbP$checking;
bool At45dbP$flashBusy;





static inline  error_t At45dbP$Init$init(void);
#line 127
static void At45dbP$flashIdle(void);



static void At45dbP$requestDone(error_t result, uint16_t computedCrc, uint8_t newState);
static void At45dbP$handleRWRequest(void);

static inline  void At45dbP$taskSuccess$runTask(void);


static inline  void At45dbP$taskFail$runTask(void);



static void At45dbP$checkBuffer(uint8_t buf);









static void At45dbP$flushBuffer(void);
#line 163
static inline  void At45dbP$HplAt45db$waitIdleDone(void);
#line 175
static inline  void At45dbP$HplAt45db$waitCompareDone(bool ok);
#line 190
static inline  void At45dbP$HplAt45db$readDone(void);



static inline  void At45dbP$HplAt45db$writeDone(void);





static inline  void At45dbP$HplAt45db$crcDone(uint16_t crc);



static inline  void At45dbP$HplAt45db$flushDone(void);







static inline  void At45dbP$HplAt45db$compareDone(void);










static inline  void At45dbP$HplAt45db$fillDone(void);







static inline  void At45dbP$HplAt45db$eraseDone(void);










static void At45dbP$syncOrFlushAll(uint8_t newReq);

static void At45dbP$handleRWRequest(void);
#line 350
static void At45dbP$requestDone(error_t result, uint16_t computedCrc, uint8_t newState);
#line 366
static void At45dbP$newRequest(uint8_t req, at45page_t page, at45pageoffset_t offset, 
void *reqdata, at45pageoffset_t n);
#line 392
static inline  void At45dbP$At45db$read(at45page_t page, at45pageoffset_t offset, 
void *reqdata, at45pageoffset_t n);



static inline  void At45dbP$At45db$computeCrc(at45page_t page, 
at45pageoffset_t offset, 
at45pageoffset_t n, 
uint16_t baseCrc);




static inline  void At45dbP$At45db$write(at45page_t page, at45pageoffset_t offset, 
void *reqdata, at45pageoffset_t n);




static inline  void At45dbP$At45db$erase(at45page_t page, uint8_t eraseKind);



static inline  void At45dbP$At45db$copyPage(at45page_t from, at45page_t to);
#line 445
static void At45dbP$syncOrFlushAll(uint8_t newReq);
#line 462
static inline  void At45dbP$At45db$syncAll(void);
# 141 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45db.nc"
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$readDone(void);
#line 163
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$crcDone(uint16_t arg_0x40d50dd0);
#line 79
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$flushDone(void);
#line 185
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$writeDone(void);
#line 35
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$waitIdleDone(void);
#line 47
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$waitCompareDone(bool arg_0x40d57100);
#line 106
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$eraseDone(void);
#line 93
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$compareDone(void);
#line 61
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$fillDone(void);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45dbByte.nc"
static  bool /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45dbByte$getCompareStatus(void);
#line 31
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45dbByte$waitIdle(void);
#line 47
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45dbByte$select(void);




static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45dbByte$deselect(void);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$Resource$release(void);
#line 78
static   error_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$Resource$request(void);
# 34 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SpiByte.nc"
static   uint8_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$FlashSpi$write(uint8_t arg_0x407739d8);
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45dbByteC.nc"
enum /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$__nesc_unnamed4392 {
  HplAt45dbByteC$0$P_IDLE, 
  HplAt45dbByteC$0$P_SEND_CMD, 
  HplAt45dbByteC$0$P_READ, 
  HplAt45dbByteC$0$P_READ_CRC, 
  HplAt45dbByteC$0$P_WRITE, 
  HplAt45dbByteC$0$P_WAIT_IDLE, 
  HplAt45dbByteC$0$P_WAIT_COMPARE, 
  HplAt45dbByteC$0$P_WAIT_COMPARE_OK, 
  HplAt45dbByteC$0$P_FILL, 
  HplAt45dbByteC$0$P_FLUSH, 
  HplAt45dbByteC$0$P_COMPARE, 
  HplAt45dbByteC$0$P_ERASE
};
uint8_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$status = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_IDLE;
uint8_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$flashCmd[9];
at45pageoffset_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$dataCount;
uint8_t */*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$data;
uint8_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$dontCare;

static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$complete(uint16_t crc);
#line 86
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$requestFlashStatus(void);





static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$doCommand(void);
#line 161
static inline  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$Resource$granted(void);
#line 173
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$execCommand(uint8_t op, uint8_t reqCmd, uint8_t reqDontCare, 
at45page_t reqPage, at45pageoffset_t reqOffset, 
uint8_t *reqData, at45pageoffset_t reqCount);
#line 191
static inline  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$waitIdle(void);




static inline  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$waitCompare(void);




static inline  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45dbByte$idle(void);
#line 217
static inline  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$fill(uint8_t cmd, at45page_t page);



static inline  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$flush(uint8_t cmd, at45page_t page);



static inline  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$compare(uint8_t cmd, at45page_t page);



static inline  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$erase(uint8_t cmd, at45page_t page);









static inline  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$readBuffer(uint8_t cmd, at45pageoffset_t offset, 
uint8_t *pdata, at45pageoffset_t count);



static inline  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$crc(uint8_t cmd, 
at45page_t page, at45pageoffset_t offset, 
at45pageoffset_t count, 
uint16_t baseCrc);



static inline  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$write(uint8_t cmd, 
at45page_t page, at45pageoffset_t offset, 
uint8_t *pdata, at45pageoffset_t count);
# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void HplAt45dbIOP$In$makeInput(void);
#line 32
static   bool HplAt45dbIOP$In$get(void);
#line 30
static   void HplAt45dbIOP$In$clr(void);
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void HplAt45dbIOP$InInterrupt$clear(void);
#line 40
static   void HplAt45dbIOP$InInterrupt$disable(void);
#line 59
static   void HplAt45dbIOP$InInterrupt$edge(bool arg_0x406f48a0);
#line 35
static   void HplAt45dbIOP$InInterrupt$enable(void);
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void HplAt45dbIOP$Out$makeOutput(void);
#line 29
static   void HplAt45dbIOP$Out$set(void);





static   void HplAt45dbIOP$Select$makeOutput(void);
#line 29
static   void HplAt45dbIOP$Select$set(void);
static   void HplAt45dbIOP$Select$clr(void);
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45dbByte.nc"
static  void HplAt45dbIOP$HplAt45dbByte$idle(void);
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void HplAt45dbIOP$Clk$makeOutput(void);
#line 29
static   void HplAt45dbIOP$Clk$set(void);
static   void HplAt45dbIOP$Clk$clr(void);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/BusyWait.nc"
static   void HplAt45dbIOP$BusyWait$wait(HplAt45dbIOP$BusyWait$size_type arg_0x40d7b190);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t HplAt45dbIOP$avail$postTask(void);
# 123 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/mica2/chips/at45db/HplAt45dbIOP.nc"
enum HplAt45dbIOP$__nesc_unnamed4393 {
#line 123
  HplAt45dbIOP$avail = 23U
};
#line 123
typedef int HplAt45dbIOP$__nesc_sillytask_avail[HplAt45dbIOP$avail];
#line 64
static inline  error_t HplAt45dbIOP$Init$init(void);
#line 80
static inline  void HplAt45dbIOP$HplAt45dbByte$select(void);




static inline  void HplAt45dbIOP$HplAt45dbByte$deselect(void);
#line 102
static   uint8_t HplAt45dbIOP$FlashSpi$write(uint8_t spiOut);
#line 123
static inline  void HplAt45dbIOP$avail$runTask(void);



static inline  void HplAt45dbIOP$HplAt45dbByte$waitIdle(void);
#line 145
static inline   void HplAt45dbIOP$InInterrupt$fired(void);




static inline  bool HplAt45dbIOP$HplAt45dbByte$getCompareStatus(void);
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/micaz/BusyWaitMicroC.nc"
static __inline   void BusyWaitMicroC$BusyWait$wait(uint16_t dt);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$ResourceConfigure$unconfigure(void);
#line 49
static   void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$ResourceConfigure$configure(void);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static  void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$Resource$granted(void);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$granted$postTask(void);
# 25 "/opt/CVSTinyOS/tinyos-2.x/tos/system/NoArbiterC.nc"
enum /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$__nesc_unnamed4394 {
#line 25
  NoArbiterC$0$granted = 24U
};
#line 25
typedef int /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$__nesc_sillytask_granted[/*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$granted];
#line 25
static inline  void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$granted$runTask(void);




static inline   error_t /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$Resource$request(void);









static inline   error_t /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$Resource$release(void);








static inline    void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$ResourceConfigure$default$configure(void);
static inline    void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$ResourceConfigure$default$unconfigure(void);
# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
enum /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$__nesc_unnamed4395 {
#line 39
  FcfsResourceQueueC$1$NO_ENTRY = 0xFF
};
uint8_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$resQ[1U];
uint8_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$qHead = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$NO_ENTRY;
uint8_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$qTail = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$NO_ENTRY;

static inline  error_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$Init$init(void);




static inline   bool /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$isEmpty(void);



static inline   bool /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$isEnqueued(resource_client_id_t id);



static inline   resource_client_id_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$dequeue(void);
#line 72
static inline   error_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$enqueue(resource_client_id_t id);
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static   void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceRequested$requested(
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40e2ced0);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$unconfigure(
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40e2a0f8);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$configure(
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40e2a0f8);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static   error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Queue$enqueue(resource_client_id_t arg_0x4083b210);
#line 43
static   bool /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Queue$isEmpty(void);
#line 60
static   resource_client_id_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Queue$dequeue(void);
# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
static   void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$requested(void);
#line 46
static   void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$granted(void);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static  void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Resource$granted(
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40e2c590);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$grantedTask$postTask(void);
# 75 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
enum /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$__nesc_unnamed4396 {
#line 75
  ArbiterP$0$grantedTask = 25U
};
#line 75
typedef int /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$__nesc_sillytask_grantedTask[/*At45dbC.Arbiter.Arbiter*/ArbiterP$0$grantedTask];
#line 67
enum /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$__nesc_unnamed4397 {
#line 67
  ArbiterP$0$RES_CONTROLLED, ArbiterP$0$RES_GRANTING, ArbiterP$0$RES_IMM_GRANTING, ArbiterP$0$RES_BUSY
};
#line 68
enum /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$__nesc_unnamed4398 {
#line 68
  ArbiterP$0$default_owner_id = 1U
};
#line 69
enum /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$__nesc_unnamed4399 {
#line 69
  ArbiterP$0$NO_RES = 0xFF
};
uint8_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$state = /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$RES_CONTROLLED;
 uint8_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$resId = /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$default_owner_id;
 uint8_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$reqResId;



static inline   error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Resource$request(uint8_t id);
#line 108
static inline   error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Resource$release(uint8_t id);
#line 129
static inline   error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$release(void);
#line 186
static inline  void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$grantedTask$runTask(void);
#line 198
static inline   void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Resource$default$granted(uint8_t id);

static inline    void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(uint8_t id);



static inline    void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$default$granted(void);

static inline    void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$default$requested(void);





static inline    void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(uint8_t id);

static inline    void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(uint8_t id);
# 21 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbStorageManagerC.nc"
static inline  at45page_t At45dbStorageManagerC$At45dbVolume$remap(volume_id_t volid, at45page_t volumePage);








static inline  at45page_t At45dbStorageManagerC$At45dbVolume$volumeSize(volume_id_t volid);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  void NetControlM$SplitControl$startDone(error_t arg_0x40325330);
#line 117
static  void NetControlM$SplitControl$stopDone(error_t arg_0x40325ee0);
#line 83
static  error_t NetControlM$AMControl$start(void);
#line 109
static  error_t NetControlM$AMControl$stop(void);
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t NetControlM$TableControl$start(void);









static  error_t NetControlM$TableControl$stop(void);
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  error_t NetControlM$EngineControl$start(void);
# 24 "../../../tos/lib/net/tymo/dymo/NetControlM.nc"
uint8_t NetControlM$started;

static inline  error_t NetControlM$SplitControl$start(void);
#line 43
static inline  void NetControlM$AMControl$startDone(error_t e);









static  void NetControlM$EngineControl$startDone(error_t e);









static inline  error_t NetControlM$SplitControl$stop(void);






static inline  void NetControlM$AMControl$stopDone(error_t e);
# 86 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/atm128hardware.h"
static  __inline void __nesc_disable_interrupt(void)
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

# 113 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static inline  void SchedulerBasicP$Scheduler$init(void)
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP$m_next, SchedulerBasicP$NO_TASK, sizeof SchedulerBasicP$m_next);
    SchedulerBasicP$m_head = SchedulerBasicP$NO_TASK;
    SchedulerBasicP$m_tail = SchedulerBasicP$NO_TASK;
  }
}

# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static  void RealMainP$Scheduler$init(void){
#line 46
  SchedulerBasicP$Scheduler$init();
#line 46
}
#line 46
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/mica/PlatformP.nc"
static inline void PlatformP$power_init(void)
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    * (volatile uint8_t *)(0x35 + 0x20) = 1 << 5;
  }
}

# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 81 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline uint16_t HplAtm128Timer1P$TimerCtrlCapture2int(Atm128TimerCtrlCapture_t x)
#line 81
{
#line 81
  union __nesc_unnamed4400 {
#line 81
    Atm128TimerCtrlCapture_t f;
#line 81
    uint16_t t;
  } 
#line 81
  c = { .f = x };

#line 81
  return c.t;
}





static inline   void HplAtm128Timer1P$TimerCtrl$setCtrlCapture(Atm128_TCCR1B_t x)
#line 88
{
  * (volatile uint8_t *)(0x2E + 0x20) = HplAtm128Timer1P$TimerCtrlCapture2int(x);
}

#line 71
static inline   Atm128TimerCtrlCapture_t HplAtm128Timer1P$TimerCtrl$getCtrlCapture(void)
#line 71
{
  return * (Atm128TimerCtrlCapture_t *)& * (volatile uint8_t *)(0x2E + 0x20);
}

#line 61
static inline   void HplAtm128Timer1P$Timer$setScale(uint8_t s)
#line 61
{
  Atm128TimerCtrlCapture_t x = HplAtm128Timer1P$TimerCtrl$getCtrlCapture();

#line 63
  x.bits.cs = s;
  HplAtm128Timer1P$TimerCtrl$setCtrlCapture(x);
}

# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$setScale(uint8_t arg_0x405b58b8){
#line 95
  HplAtm128Timer1P$Timer$setScale(arg_0x405b58b8);
#line 95
}
#line 95
# 131 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline   void HplAtm128Timer1P$Timer$start(void)
#line 131
{
#line 131
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 2;
}

# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$start(void){
#line 69
  HplAtm128Timer1P$Timer$start();
#line 69
}
#line 69
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline   void HplAtm128Timer1P$Timer$set(uint16_t t)
#line 52
{
#line 52
  * (volatile uint16_t *)(0x2C + 0x20) = t;
}

# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$set(/*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$timer_size arg_0x405b7c50){
#line 58
  HplAtm128Timer1P$Timer$set(arg_0x405b7c50);
#line 58
}
#line 58
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline  error_t /*InitOneP.InitOne*/Atm128TimerInitC$0$Init$init(void)
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$set(0);
    /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$start();
    /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$setScale(4);
  }
  return SUCCESS;
}

# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline   void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$edge(bool low_to_high)
#line 47
{
  * (volatile uint8_t *)106U |= 1 << 5;

  if (low_to_high) {
    * (volatile uint8_t *)106U |= 1 << 4;
    }
  else {
#line 53
    * (volatile uint8_t *)106U &= ~(1 << 4);
    }
}

# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void HplAt45dbIOP$InInterrupt$edge(bool arg_0x406f48a0){
#line 59
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$edge(arg_0x406f48a0);
#line 59
}
#line 59
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline   void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$disable(void)
#line 43
{
#line 43
  * (volatile uint8_t *)(0x39 + 0x20) &= ~(1 << 2);
}

# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void HplAt45dbIOP$InInterrupt$disable(void){
#line 40
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$disable();
#line 40
}
#line 40
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP$26$IO$makeInput(void)
#line 50
{
#line 50
  * (volatile uint8_t *)49U &= ~(1 << 2);
}

# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplAt45dbIOP$In$makeInput(void){
#line 33
  /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP$26$IO$makeInput();
#line 33
}
#line 33
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP$26$IO$clr(void)
#line 47
{
#line 47
  * (volatile uint8_t *)50U &= ~(1 << 2);
}

# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplAt45dbIOP$In$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP$26$IO$clr();
#line 30
}
#line 30
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP$27$IO$makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)49U |= 1 << 3;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplAt45dbIOP$Out$makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP$27$IO$makeOutput();
#line 35
}
#line 35
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP$27$IO$set(void)
#line 46
{
#line 46
  * (volatile uint8_t *)50U |= 1 << 3;
}

# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplAt45dbIOP$Out$set(void){
#line 29
  /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP$27$IO$set();
#line 29
}
#line 29
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP$29$IO$makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)49U |= 1 << 5;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplAt45dbIOP$Clk$makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP$29$IO$makeOutput();
#line 35
}
#line 35
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP$29$IO$clr(void)
#line 47
{
#line 47
  * (volatile uint8_t *)50U &= ~(1 << 5);
}

# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplAt45dbIOP$Clk$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP$29$IO$clr();
#line 30
}
#line 30
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP$3$IO$set(void)
#line 46
{
#line 46
  * (volatile uint8_t *)59U |= 1 << 3;
}

# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplAt45dbIOP$Select$set(void){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP$3$IO$set();
#line 29
}
#line 29
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP$3$IO$makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)58U |= 1 << 3;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplAt45dbIOP$Select$makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP$3$IO$makeOutput();
#line 35
}
#line 35
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/mica2/chips/at45db/HplAt45dbIOP.nc"
static inline  error_t HplAt45dbIOP$Init$init(void)
#line 64
{
  HplAt45dbIOP$Select$makeOutput();
  HplAt45dbIOP$Select$set();
  HplAt45dbIOP$Clk$clr();
  HplAt45dbIOP$Clk$makeOutput();
  HplAt45dbIOP$Out$set();
  HplAt45dbIOP$Out$makeOutput();
  HplAt45dbIOP$In$clr();
  HplAt45dbIOP$In$makeInput();

  HplAt45dbIOP$InInterrupt$disable();
  HplAt45dbIOP$InInterrupt$edge(TRUE);

  return SUCCESS;
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
inline static  error_t MotePlatformP$SubInit$init(void){
#line 51
  unsigned char result;
#line 51

#line 51
  result = HplAt45dbIOP$Init$init();
#line 51
  result = ecombine(result, /*InitOneP.InitOne*/Atm128TimerInitC$0$Init$init());
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void)
#line 47
{
#line 47
  * (volatile uint8_t *)59U &= ~(1 << 4);
}

# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void MotePlatformP$SerialIdPin$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr();
#line 30
}
#line 30
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void)
#line 50
{
#line 50
  * (volatile uint8_t *)58U &= ~(1 << 4);
}

# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void MotePlatformP$SerialIdPin$makeInput(void){
#line 33
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput();
#line 33
}
#line 33
# 26 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/micaz/MotePlatformP.nc"
static inline  error_t MotePlatformP$PlatformInit$init(void)
#line 26
{

  * (volatile uint8_t *)(0x15 + 0x20) = 0;
  * (volatile uint8_t *)(0x14 + 0x20) = 0xff;


  MotePlatformP$SerialIdPin$makeInput();
  MotePlatformP$SerialIdPin$clr();

  return MotePlatformP$SubInit$init();
}

# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void)
#line 46
{
#line 46
  * (volatile uint8_t *)59U |= 1 << 0;
}

# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led2$set(void){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set();
#line 29
}
#line 29
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set(void)
#line 46
{
#line 46
  * (volatile uint8_t *)59U |= 1 << 1;
}

# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led1$set(void){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set();
#line 29
}
#line 29
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set(void)
#line 46
{
#line 46
  * (volatile uint8_t *)59U |= 1 << 2;
}

# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led0$set(void){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set();
#line 29
}
#line 29
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)58U |= 1 << 0;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led2$makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput();
#line 35
}
#line 35
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)58U |= 1 << 1;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led1$makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput();
#line 35
}
#line 35
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)58U |= 1 << 2;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led0$makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput();
#line 35
}
#line 35
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/LedsP.nc"
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

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
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
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/mica/MeasureClockC.nc"
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

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
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
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/mica/PlatformP.nc"
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

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
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
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Scheduler.nc"
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
# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbStorageManagerC.nc"
static inline  at45page_t At45dbStorageManagerC$At45dbVolume$volumeSize(volume_id_t volid)
#line 30
{
  switch (volid) 
    {
# 10 "build/micaz/StorageVolumes.h"
      case VOLUME_DYMODATA: return 512;
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbStorageManagerC.nc"
      default: return 0;
    }
}

# 390 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline   at45page_t BlockStorageP$At45dbVolume$default$volumeSize(uint8_t id)
#line 390
{
#line 390
  return 0;
}

# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
inline static  at45page_t BlockStorageP$At45dbVolume$volumeSize(uint8_t arg_0x40d174d0){
#line 30
  unsigned short result;
#line 30

#line 30
  switch (arg_0x40d174d0) {
#line 30
    case /*DymoServiceC.ConfigStorageC*/ConfigStorageC$0$CONFIG_ID:
#line 30
      result = At45dbStorageManagerC$At45dbVolume$volumeSize(0);
#line 30
      break;
#line 30
    default:
#line 30
      result = BlockStorageP$At45dbVolume$default$volumeSize(arg_0x40d174d0);
#line 30
      break;
#line 30
    }
#line 30

#line 30
  return result;
#line 30
}
#line 30
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline  at45page_t BlockStorageP$BConfig$npages(uint8_t id)
#line 110
{
  return BlockStorageP$At45dbVolume$volumeSize(id) >> 1;
}

# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
inline static  at45page_t ConfigStorageP$BConfig$npages(uint8_t arg_0x40c9ab00){
#line 50
  unsigned short result;
#line 50

#line 50
  result = BlockStorageP$BConfig$npages(arg_0x40c9ab00);
#line 50

#line 50
  return result;
#line 50
}
#line 50
# 357 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
static __inline  int ConfigStorageP$BConfig$flipped(uint8_t id)
#line 357
{
  return (ConfigStorageP$flipState[id >> 3] & (1 << (id & 7))) != 0;
}

#line 95
static inline bool ConfigStorageP$flipped(uint8_t id)
#line 95
{
  return ConfigStorageP$BConfig$flipped(id);
}

static inline void ConfigStorageP$flip(uint8_t id)
#line 99
{
  ConfigStorageP$setFlip(id, !ConfigStorageP$flipped(id));
}

#line 214
static inline  int ConfigStorageP$BConfig$writeHook(uint8_t id)
#line 214
{
  if (ConfigStorageP$s[id].committing) {
    return FALSE;
    }
  ConfigStorageP$flip(id);
  if (ConfigStorageP$s[id].state != ConfigStorageP$S_CLEAN) {
    return FALSE;
    }

  ConfigStorageP$client = id;
  ConfigStorageP$nextPage = ConfigStorageP$BConfig$npages(id);
  ConfigStorageP$copyCopyPageDone(SUCCESS);

  return TRUE;
}

# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
inline static  int BlockStorageP$BConfig$writeHook(uint8_t arg_0x40d1a4f0){
#line 37
  int result;
#line 37

#line 37
  result = ConfigStorageP$BConfig$writeHook(arg_0x40d1a4f0);
#line 37

#line 37
  return result;
#line 37
}
#line 37
# 204 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline  void BlockStorageP$Resource$granted(uint8_t blockId)
#line 204
{
  BlockStorageP$client = blockId;

  if (BlockStorageP$s[blockId].request == BlockStorageP$R_WRITE && 
  BlockStorageP$BConfig$writeHook(blockId)) 
    {


      BlockStorageP$client = BlockStorageP$NO_CLIENT;
      return;
    }
  BlockStorageP$startRequest();
}

# 198 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
static inline   void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Resource$default$granted(uint8_t id)
#line 198
{
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static  void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Resource$granted(uint8_t arg_0x40e2c590){
#line 92
  switch (arg_0x40e2c590) {
#line 92
    case /*DymoServiceC.ConfigStorageC*/ConfigStorageC$0$RESOURCE_ID:
#line 92
      BlockStorageP$Resource$granted(/*DymoServiceC.ConfigStorageC*/ConfigStorageC$0$CONFIG_ID);
#line 92
      break;
#line 92
    default:
#line 92
      /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Resource$default$granted(arg_0x40e2c590);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 212 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
static inline    void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(uint8_t id)
#line 212
{
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static   void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$configure(uint8_t arg_0x40e2a0f8){
#line 49
    /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(arg_0x40e2a0f8);
#line 49
}
#line 49
# 186 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
static inline  void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$grantedTask$runTask(void)
#line 186
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 187
    {
      /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$resId = /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$reqResId;
      /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$state = /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$RES_BUSY;
    }
#line 190
    __nesc_atomic_end(__nesc_atomic); }
  /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$configure(/*At45dbC.Arbiter.Arbiter*/ArbiterP$0$resId);
  /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Resource$granted(/*At45dbC.Arbiter.Arbiter*/ArbiterP$0$resId);
}

# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
inline static  void ConfigStorageP$BConfig$writeContinue(uint8_t arg_0x40c9ab00, error_t arg_0x40c9bb88){
#line 44
  BlockStorageP$BConfig$writeContinue(arg_0x40c9ab00, arg_0x40c9bb88);
#line 44
}
#line 44
# 253 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
static inline void ConfigStorageP$writeContinue(error_t error)
#line 253
{
  uint8_t id = ConfigStorageP$client;

  ConfigStorageP$client = ConfigStorageP$NO_CLIENT;
  ConfigStorageP$BConfig$writeContinue(id, error);
}

# 106 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline at45page_t BlockStorageP$pageRemap(at45page_t p)
#line 106
{
  return BlockStorageP$BConfig$remap(BlockStorageP$client, p);
}

# 411 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbP.nc"
static inline  void At45dbP$At45db$erase(at45page_t page, uint8_t eraseKind)
#line 411
{
  At45dbP$newRequest(At45dbP$R_ERASE, page, eraseKind, (void *)0, 0);
}

# 100 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45db.nc"
inline static  void BlockStorageP$At45db$erase(at45page_t arg_0x40c95a30, uint8_t arg_0x40c95bc0){
#line 100
  At45dbP$At45db$erase(arg_0x40c95a30, arg_0x40c95bc0);
#line 100
}
#line 100
# 289 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP$eraseStart(void)
#line 289
{
  BlockStorageP$At45db$erase(BlockStorageP$pageRemap(0), AT45_ERASE);
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t At45dbP$taskFail$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(At45dbP$taskFail);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 86 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SchedulerBasicP.nc"
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

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$granted$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$granted);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/system/NoArbiterC.nc"
static inline   error_t /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$Resource$request(void)
#line 30
{
  /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$granted$postTask();
  return SUCCESS;
}

# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$Resource$request(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$Resource$request();
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 191 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45dbByteC.nc"
static inline  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$waitIdle(void)
#line 191
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$status = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_WAIT_IDLE;
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$Resource$request();
}

# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45db.nc"
inline static  void At45dbP$HplAt45db$waitIdle(void){
#line 30
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$waitIdle();
#line 30
}
#line 30
# 229 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45dbByteC.nc"
static inline  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$erase(uint8_t cmd, at45page_t page)
#line 229
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$execCommand(/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_ERASE, cmd, 0, page, 0, (void *)0, 1);
}

# 100 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45db.nc"
inline static  void At45dbP$HplAt45db$erase(uint8_t arg_0x40d547f8, at45page_t arg_0x40d54988){
#line 100
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$erase(arg_0x40d547f8, arg_0x40d54988);
#line 100
}
#line 100
# 399 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
static inline  void ConfigStorageP$At45db$readDone(error_t error)
#line 399
{
}

# 274 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP$multipageOpDone(error_t result, uint16_t crc)
#line 274
{
  if (result != SUCCESS) {
    BlockStorageP$endRequest(result, 0);
    }
  else {
#line 278
    BlockStorageP$multipageContinue(crc);
    }
}

#line 361
static inline  void BlockStorageP$At45db$readDone(error_t result)
#line 361
{
  if (BlockStorageP$client != BlockStorageP$NO_CLIENT) {
    BlockStorageP$multipageOpDone(result, 0);
    }
}

# 162 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45db.nc"
inline static  void At45dbP$At45db$readDone(error_t arg_0x40cbe3b0){
#line 162
  BlockStorageP$At45db$readDone(arg_0x40cbe3b0);
#line 162
  ConfigStorageP$At45db$readDone(arg_0x40cbe3b0);
#line 162
}
#line 162
# 204 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
static inline    void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$default$granted(void)
#line 204
{
}

# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
inline static   void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$granted(void){
#line 46
  /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$default$granted();
#line 46
}
#line 46
# 214 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
static inline    void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(uint8_t id)
#line 214
{
}

# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static   void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$unconfigure(uint8_t arg_0x40e2a0f8){
#line 55
    /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(arg_0x40e2a0f8);
#line 55
}
#line 55
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$grantedTask$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*At45dbC.Arbiter.Arbiter*/ArbiterP$0$grantedTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline   resource_client_id_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$dequeue(void)
#line 58
{
  /* atomic removed: atomic calls only */
#line 59
  {
    if (/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$qHead != /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$NO_ENTRY) {
        uint8_t id = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$qHead;

#line 62
        /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$qHead = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$resQ[/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$qHead];
        if (/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$qHead == /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$NO_ENTRY) {
          /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$qTail = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$NO_ENTRY;
          }
#line 65
        /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$resQ[id] = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$NO_ENTRY;
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
      /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$NO_ENTRY;

#line 68
      return __nesc_temp;
    }
  }
}

# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static   resource_client_id_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Queue$dequeue(void){
#line 60
  unsigned char result;
#line 60

#line 60
  result = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$dequeue();
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline   bool /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$isEmpty(void)
#line 50
{
  return /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$qHead == /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$NO_ENTRY;
}

# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static   bool /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Queue$isEmpty(void){
#line 43
  unsigned char result;
#line 43

#line 43
  result = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$isEmpty();
#line 43

#line 43
  return result;
#line 43
}
#line 43
# 108 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
static inline   error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Resource$release(uint8_t id)
#line 108
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 109
    {
      if (/*At45dbC.Arbiter.Arbiter*/ArbiterP$0$state == /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$RES_BUSY && /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$resId == id) {
          if (/*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Queue$isEmpty() == FALSE) {
              /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$reqResId = /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Queue$dequeue();
              /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$state = /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$RES_GRANTING;
              /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$grantedTask$postTask();
              /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$unconfigure(id);
            }
          else {
              /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$resId = /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$default_owner_id;
              /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$state = /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$RES_CONTROLLED;
              /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$unconfigure(id);
              /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$granted();
            }
          {
            unsigned char __nesc_temp = 
#line 123
            SUCCESS;

            {
#line 123
              __nesc_atomic_end(__nesc_atomic); 
#line 123
              return __nesc_temp;
            }
          }
        }
    }
#line 127
    __nesc_atomic_end(__nesc_atomic); }
#line 126
  return FAIL;
}

# 392 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline    error_t BlockStorageP$Resource$default$release(uint8_t id)
#line 392
{
#line 392
  return FAIL;
}

# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t BlockStorageP$Resource$release(uint8_t arg_0x40d17b68){
#line 110
  unsigned char result;
#line 110

#line 110
  switch (arg_0x40d17b68) {
#line 110
    case /*DymoServiceC.ConfigStorageC*/ConfigStorageC$0$CONFIG_ID:
#line 110
      result = /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Resource$release(/*DymoServiceC.ConfigStorageC*/ConfigStorageC$0$RESOURCE_ID);
#line 110
      break;
#line 110
    default:
#line 110
      result = BlockStorageP$Resource$default$release(arg_0x40d17b68);
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
# 404 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
static inline   void ConfigStorageP$ConfigStorage$default$readDone(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len, error_t error)
#line 404
{
}

# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
inline static  void ConfigStorageP$ConfigStorage$readDone(uint8_t arg_0x40c9f5b8, storage_addr_t arg_0x40c20630, void *arg_0x40c207d0, storage_len_t arg_0x40c20960, error_t arg_0x40c20af8){
#line 80
  switch (arg_0x40c9f5b8) {
#line 80
    case /*DymoServiceC.ConfigStorageC*/ConfigStorageC$0$CONFIG_ID:
#line 80
      DymoEngineM$ConfigStorage$readDone(arg_0x40c20630, arg_0x40c207d0, arg_0x40c20960, arg_0x40c20af8);
#line 80
      break;
#line 80
    default:
#line 80
      ConfigStorageP$ConfigStorage$default$readDone(arg_0x40c9f5b8, arg_0x40c20630, arg_0x40c207d0, arg_0x40c20960, arg_0x40c20af8);
#line 80
      break;
#line 80
    }
#line 80
}
#line 80
# 193 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
static inline void ConfigStorageP$readReadDone(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len, error_t error)
#line 193
{
  ConfigStorageP$ConfigStorage$readDone(id, addr - sizeof ConfigStorageP$low[0], buf, len, error);
}

# 294 "/usr/local/lib/ncc/nesc_nx.h"
static __inline uint32_t __nesc_ntoh_uint32(const void *source)
#line 294
{
  const uint8_t *base = source;

#line 296
  return ((((uint32_t )base[0] << 24) | (
  (uint32_t )base[1] << 16)) | (
  (uint32_t )base[2] << 8)) | base[3];
}

# 325 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline  error_t BlockStorageP$BlockRead$read(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len)
#line 325
{
  return BlockStorageP$newRequest(BlockStorageP$R_READ, id, addr, buf, len);
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
inline static  error_t ConfigStorageP$BlockRead$read(uint8_t arg_0x40cb7eb8, storage_addr_t arg_0x40cb9100, void *arg_0x40cb92a0, storage_len_t arg_0x40cb9430){
#line 56
  unsigned char result;
#line 56

#line 56
  result = BlockStorageP$BlockRead$read(arg_0x40cb7eb8, arg_0x40cb9100, arg_0x40cb92a0, arg_0x40cb9430);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 403 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
static inline   void ConfigStorageP$Mount$default$mountDone(uint8_t id, error_t error)
#line 403
{
}

# 36 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Mount.nc"
inline static  void ConfigStorageP$Mount$mountDone(uint8_t arg_0x40ca0ec0, error_t arg_0x40bfd9e0){
#line 36
  switch (arg_0x40ca0ec0) {
#line 36
    case /*DymoServiceC.ConfigStorageC*/ConfigStorageC$0$CONFIG_ID:
#line 36
      DymoEngineM$Mount$mountDone(arg_0x40bfd9e0);
#line 36
      break;
#line 36
    default:
#line 36
      ConfigStorageP$Mount$default$mountDone(arg_0x40ca0ec0, arg_0x40bfd9e0);
#line 36
      break;
#line 36
    }
#line 36
}
#line 36
# 130 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
static inline void ConfigStorageP$mountReadDone(uint8_t id, error_t error)
#line 130
{
  if (error != SUCCESS) 
    {
      ConfigStorageP$s[id].state = ConfigStorageP$S_STOPPED;
      ConfigStorageP$Mount$mountDone(id, FAIL);
    }
  else {
#line 136
    if (!ConfigStorageP$BConfig$flipped(id)) 
      {

        ConfigStorageP$setFlip(id, TRUE);
        ConfigStorageP$BlockRead$read(id, 0, &ConfigStorageP$high[id], sizeof ConfigStorageP$high[id]);
      }
    else 
      {

        ConfigStorageP$setFlip(id, __nesc_ntoh_uint32((unsigned char *)&ConfigStorageP$high[id].version) > __nesc_ntoh_uint32((unsigned char *)&ConfigStorageP$low[id].version));
        ConfigStorageP$computeCrc(id);
      }
    }
}

#line 361
static inline  void ConfigStorageP$BlockRead$readDone(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len, error_t error)
#line 361
{
  if (id < ConfigStorageP$N) {
    if (ConfigStorageP$s[id].state == ConfigStorageP$S_MOUNT) {
      ConfigStorageP$mountReadDone(id, error);
      }
    else {
#line 366
      ConfigStorageP$readReadDone(id, addr, buf, len, error);
      }
    }
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
inline static  void BlockStorageP$BlockRead$readDone(uint8_t arg_0x40d1d3e0, storage_addr_t arg_0x40cb9ac0, void *arg_0x40cb9c60, storage_len_t arg_0x40cb9df0, error_t arg_0x40cb8010){
#line 67
  ConfigStorageP$BlockRead$readDone(arg_0x40d1d3e0, arg_0x40cb9ac0, arg_0x40cb9c60, arg_0x40cb9df0, arg_0x40cb8010);
#line 67
}
#line 67
# 342 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
static inline  bool ConfigStorageP$ConfigStorage$valid(uint8_t id)
#line 342
{
  return ConfigStorageP$s[id].state != ConfigStorageP$S_INVALID;
}

# 152 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
inline static  bool DymoEngineM$ConfigStorage$valid(void){
#line 152
  unsigned char result;
#line 152

#line 152
  result = ConfigStorageP$ConfigStorage$valid(/*DymoServiceC.ConfigStorageC*/ConfigStorageC$0$CONFIG_ID);
#line 152

#line 152
  return result;
#line 152
}
#line 152
# 183 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
static inline  error_t ConfigStorageP$ConfigStorage$read(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len)
#line 183
{

  if (ConfigStorageP$s[id].state < ConfigStorageP$S_CLEAN) {
    return EOFF;
    }
#line 187
  if (ConfigStorageP$s[id].state == ConfigStorageP$S_INVALID) {
    return FAIL;
    }
  return ConfigStorageP$BlockRead$read(id, addr + sizeof ConfigStorageP$low[0], buf, len);
}

# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
inline static  error_t DymoEngineM$ConfigStorage$read(storage_addr_t arg_0x40c219a0, void *arg_0x40c21b40, storage_len_t arg_0x40c21cd0){
#line 69
  unsigned char result;
#line 69

#line 69
  result = ConfigStorageP$ConfigStorage$read(/*DymoServiceC.ConfigStorageC*/ConfigStorageC$0$CONFIG_ID, arg_0x40c219a0, arg_0x40c21b40, arg_0x40c21cd0);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 353 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
static inline  int ConfigStorageP$BConfig$isConfig(uint8_t id)
#line 353
{
  return id < ConfigStorageP$N;
}

# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
inline static  int BlockStorageP$BConfig$isConfig(uint8_t arg_0x40d1a4f0){
#line 24
  int result;
#line 24

#line 24
  result = ConfigStorageP$BConfig$isConfig(arg_0x40d1a4f0);
#line 24

#line 24
  return result;
#line 24
}
#line 24
# 129 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
static inline   error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$release(void)
#line 129
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 130
    {
      if (/*At45dbC.Arbiter.Arbiter*/ArbiterP$0$resId == /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$default_owner_id) {
          if (/*At45dbC.Arbiter.Arbiter*/ArbiterP$0$state == /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$RES_GRANTING) {
              /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$grantedTask$postTask();
              {
                unsigned char __nesc_temp = 
#line 134
                SUCCESS;

                {
#line 134
                  __nesc_atomic_end(__nesc_atomic); 
#line 134
                  return __nesc_temp;
                }
              }
            }
          else {
#line 136
            if (/*At45dbC.Arbiter.Arbiter*/ArbiterP$0$state == /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$RES_IMM_GRANTING) {
                /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$resId = /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$reqResId;
                /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$state = /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$RES_BUSY;
                {
                  unsigned char __nesc_temp = 
#line 139
                  SUCCESS;

                  {
#line 139
                    __nesc_atomic_end(__nesc_atomic); 
#line 139
                    return __nesc_temp;
                  }
                }
              }
            }
        }
    }
#line 145
    __nesc_atomic_end(__nesc_atomic); }
#line 143
  return FAIL;
}

#line 206
static inline    void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$default$requested(void)
#line 206
{
  /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$release();
}

# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
inline static   void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$requested(void){
#line 73
  /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$default$requested();
#line 73
}
#line 73
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline   bool /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$isEnqueued(resource_client_id_t id)
#line 54
{
  return /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$resQ[id] != /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$NO_ENTRY || /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$qTail == id;
}

#line 72
static inline   error_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$enqueue(resource_client_id_t id)
#line 72
{
  /* atomic removed: atomic calls only */
#line 73
  {
    if (!/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$isEnqueued(id)) {
        if (/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$qHead == /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$NO_ENTRY) {
          /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$qHead = id;
          }
        else {
#line 78
          /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$resQ[/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$qTail] = id;
          }
#line 79
        /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$qTail = id;
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

# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static   error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Queue$enqueue(resource_client_id_t arg_0x4083b210){
#line 69
  unsigned char result;
#line 69

#line 69
  result = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$enqueue(arg_0x4083b210);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 200 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
static inline    void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(uint8_t id)
#line 200
{
}

# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static   void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceRequested$requested(uint8_t arg_0x40e2ced0){
#line 43
    /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(arg_0x40e2ced0);
#line 43
}
#line 43
# 77 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
static inline   error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Resource$request(uint8_t id)
#line 77
{
  /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceRequested$requested(/*At45dbC.Arbiter.Arbiter*/ArbiterP$0$resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 79
    {
      if (/*At45dbC.Arbiter.Arbiter*/ArbiterP$0$state == /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$RES_CONTROLLED) {
          /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$state = /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$RES_GRANTING;
          /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$reqResId = id;
        }
      else {
          unsigned char __nesc_temp = 
#line 84
          /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Queue$enqueue(id);

          {
#line 84
            __nesc_atomic_end(__nesc_atomic); 
#line 84
            return __nesc_temp;
          }
        }
    }
#line 87
    __nesc_atomic_end(__nesc_atomic); }
#line 86
  /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$requested();
  return SUCCESS;
}

# 391 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline    error_t BlockStorageP$Resource$default$request(uint8_t id)
#line 391
{
#line 391
  return FAIL;
}

# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t BlockStorageP$Resource$request(uint8_t arg_0x40d17b68){
#line 78
  unsigned char result;
#line 78

#line 78
  switch (arg_0x40d17b68) {
#line 78
    case /*DymoServiceC.ConfigStorageC*/ConfigStorageC$0$CONFIG_ID:
#line 78
      result = /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Resource$request(/*DymoServiceC.ConfigStorageC*/ConfigStorageC$0$RESOURCE_ID);
#line 78
      break;
#line 78
    default:
#line 78
      result = BlockStorageP$Resource$default$request(arg_0x40d17b68);
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
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static  void DymoEngineM$SplitControl$startDone(error_t arg_0x40325330){
#line 92
  NetControlM$EngineControl$startDone(arg_0x40325330);
#line 92
}
#line 92
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
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
# 94 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline   Atm128_TIFR_t HplAtm128Timer0AsyncP$TimerCtrl$getInterruptFlag(void)
#line 94
{
  return * (Atm128_TIFR_t *)& * (volatile uint8_t *)(0x36 + 0x20);
}

# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static   Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag(void){
#line 44
  union __nesc_unnamed4272 result;
#line 44

#line 44
  result = HplAtm128Timer0AsyncP$TimerCtrl$getInterruptFlag();
#line 44

#line 44
  return result;
#line 44
}
#line 44
# 333 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline  error_t BlockStorageP$BlockRead$computeCrc(uint8_t id, storage_addr_t addr, storage_len_t len, uint16_t basecrc)
#line 333
{
  return BlockStorageP$newRequest(BlockStorageP$R_CRC, id, addr, (void *)basecrc, len);
}

# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
inline static  error_t ConfigStorageP$BlockRead$computeCrc(uint8_t arg_0x40cb7eb8, storage_addr_t arg_0x40cb85f8, storage_len_t arg_0x40cb8788, uint16_t arg_0x40cb8928){
#line 83
  unsigned char result;
#line 83

#line 83
  result = BlockStorageP$BlockRead$computeCrc(arg_0x40cb7eb8, arg_0x40cb85f8, arg_0x40cb8788, arg_0x40cb8928);
#line 83

#line 83
  return result;
#line 83
}
#line 83
#line 103
inline static  storage_len_t ConfigStorageP$BlockRead$getSize(uint8_t arg_0x40cb7eb8){
#line 103
  unsigned long result;
#line 103

#line 103
  result = BlockStorageP$BlockRead$getSize(arg_0x40cb7eb8);
#line 103

#line 103
  return result;
#line 103
}
#line 103
# 103 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
static inline storage_len_t ConfigStorageP$volumeSize(uint8_t id)
#line 103
{
  return ConfigStorageP$BlockRead$getSize(id);
}

# 124 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
inline static  error_t DymoEngineM$ConfigStorage$commit(void){
#line 124
  unsigned char result;
#line 124

#line 124
  result = ConfigStorageP$ConfigStorage$commit(/*DymoServiceC.ConfigStorageC*/ConfigStorageC$0$CONFIG_ID);
#line 124

#line 124
  return result;
#line 124
}
#line 124
# 91 "../../../tos/lib/net/tymo/dymo/DymoEngineM.nc"
static inline  void DymoEngineM$ConfigStorage$writeDone(storage_addr_t addr, void *buf, 
storage_len_t len, error_t err)
#line 92
{


  if (err == SUCCESS) {
      if (DymoEngineM$ConfigStorage$commit() != SUCCESS) {
        }
    }
  else 
    {
    }
}

# 405 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
static inline   void ConfigStorageP$ConfigStorage$default$writeDone(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len, error_t error)
#line 405
{
}

# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
inline static  void ConfigStorageP$ConfigStorage$writeDone(uint8_t arg_0x40c9f5b8, storage_addr_t arg_0x40c1eaf0, void *arg_0x40c1ec90, storage_len_t arg_0x40c1ee20, error_t arg_0x40c1d010){
#line 110
  switch (arg_0x40c9f5b8) {
#line 110
    case /*DymoServiceC.ConfigStorageC*/ConfigStorageC$0$CONFIG_ID:
#line 110
      DymoEngineM$ConfigStorage$writeDone(arg_0x40c1eaf0, arg_0x40c1ec90, arg_0x40c1ee20, arg_0x40c1d010);
#line 110
      break;
#line 110
    default:
#line 110
      ConfigStorageP$ConfigStorage$default$writeDone(arg_0x40c9f5b8, arg_0x40c1eaf0, arg_0x40c1ec90, arg_0x40c1ee20, arg_0x40c1d010);
#line 110
      break;
#line 110
    }
#line 110
}
#line 110
# 260 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
static inline void ConfigStorageP$writeWriteDone(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len, error_t error)
#line 260
{
  ConfigStorageP$flip(id);
  ConfigStorageP$ConfigStorage$writeDone(id, addr - sizeof ConfigStorageP$low[0], buf, len, error);
}

# 309 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline  error_t BlockStorageP$BlockWrite$sync(uint8_t id)
#line 309
{
  return BlockStorageP$newRequest(BlockStorageP$R_SYNC, id, 0, (void *)0, 0);
}

# 103 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
inline static  error_t ConfigStorageP$BlockWrite$sync(uint8_t arg_0x40cb1488){
#line 103
  unsigned char result;
#line 103

#line 103
  result = BlockStorageP$BlockWrite$sync(arg_0x40cb1488);
#line 103

#line 103
  return result;
#line 103
}
#line 103
# 314 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
static inline void ConfigStorageP$commitWriteDone(uint8_t id, error_t error)
#line 314
{
  if (error != SUCCESS) {
    ConfigStorageP$commitSyncDone(id, error);
    }
  else {
#line 318
    ConfigStorageP$BlockWrite$sync(id);
    }
}

#line 369
static inline  void ConfigStorageP$BlockWrite$writeDone(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len, error_t error)
#line 369
{
  if (id < ConfigStorageP$N) {
    if (ConfigStorageP$s[id].committing) {
      ConfigStorageP$commitWriteDone(id, error);
      }
    else {
#line 374
      ConfigStorageP$writeWriteDone(id, addr, buf, len, error);
      }
    }
}

# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
inline static  void BlockStorageP$BlockWrite$writeDone(uint8_t arg_0x40d1e8e8, storage_addr_t arg_0x40cb3598, void *arg_0x40cb3738, storage_len_t arg_0x40cb38c8, error_t arg_0x40cb3a60){
#line 71
  ConfigStorageP$BlockWrite$writeDone(arg_0x40d1e8e8, arg_0x40cb3598, arg_0x40cb3738, arg_0x40cb38c8, arg_0x40cb3a60);
#line 71
}
#line 71
# 395 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
static inline  void ConfigStorageP$BlockWrite$eraseDone(uint8_t id, error_t error)
#line 395
{
}

# 91 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
inline static  void BlockStorageP$BlockWrite$eraseDone(uint8_t arg_0x40d1e8e8, error_t arg_0x40cb24f8){
#line 91
  ConfigStorageP$BlockWrite$eraseDone(arg_0x40d1e8e8, arg_0x40cb24f8);
#line 91
}
#line 91
# 269 "/usr/local/lib/ncc/nesc_nx.h"
static __inline uint16_t __nesc_hton_uint16(void *target, uint16_t value)
#line 269
{
  uint8_t *base = target;

#line 271
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

# 301 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline  error_t BlockStorageP$BlockWrite$write(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len)
#line 301
{
  return BlockStorageP$newRequest(BlockStorageP$R_WRITE, id, addr, buf, len);
}

# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
inline static  error_t ConfigStorageP$BlockWrite$write(uint8_t arg_0x40cb1488, storage_addr_t arg_0x40cb4b58, void *arg_0x40cb4cf8, storage_len_t arg_0x40cb4e88){
#line 58
  unsigned char result;
#line 58

#line 58
  result = BlockStorageP$BlockWrite$write(arg_0x40cb1488, arg_0x40cb4b58, arg_0x40cb4cf8, arg_0x40cb4e88);
#line 58

#line 58
  return result;
#line 58
}
#line 58
# 406 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
static inline   void ConfigStorageP$ConfigStorage$default$commitDone(uint8_t id, error_t error)
#line 406
{
}

# 133 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
inline static  void ConfigStorageP$ConfigStorage$commitDone(uint8_t arg_0x40c9f5b8, error_t arg_0x40c1db58){
#line 133
  switch (arg_0x40c9f5b8) {
#line 133
    case /*DymoServiceC.ConfigStorageC*/ConfigStorageC$0$CONFIG_ID:
#line 133
      DymoEngineM$ConfigStorage$commitDone(arg_0x40c1db58);
#line 133
      break;
#line 133
    default:
#line 133
      ConfigStorageP$ConfigStorage$default$commitDone(arg_0x40c9f5b8, arg_0x40c1db58);
#line 133
      break;
#line 133
    }
#line 133
}
#line 133
# 297 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
static inline void ConfigStorageP$commitCrcDone(uint8_t id, uint16_t crc, error_t error)
#line 297
{





  if (ConfigStorageP$s[id].state == ConfigStorageP$S_CLEAN) {
    ConfigStorageP$ConfigStorage$commitDone(id, error);
    }
  else {
#line 305
    if (error != SUCCESS) {
      ConfigStorageP$commitSyncDone(id, error);
      }
    else {
        __nesc_hton_uint16((unsigned char *)&ConfigStorageP$low[id].crc, crc);
        ConfigStorageP$BlockWrite$write(id, 0, &ConfigStorageP$low[id], sizeof ConfigStorageP$low[id]);
      }
    }
}

# 301 "/usr/local/lib/ncc/nesc_nx.h"
static __inline uint32_t __nesc_hton_uint32(void *target, uint32_t value)
#line 301
{
  uint8_t *base = target;

#line 303
  base[3] = value;
  base[2] = value >> 8;
  base[1] = value >> 16;
  base[0] = value >> 24;
  return value;
}

#line 264
static __inline uint16_t __nesc_ntoh_uint16(const void *source)
#line 264
{
  const uint8_t *base = source;

#line 266
  return ((uint16_t )base[0] << 8) | base[1];
}

# 150 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
static inline void ConfigStorageP$mountCrcDone(uint8_t id, uint16_t crc, error_t error)
#line 150
{
  bool isflipped = ConfigStorageP$BConfig$flipped(id);

  if (error == SUCCESS && 
  crc == (isflipped ? __nesc_ntoh_uint16((unsigned char *)&ConfigStorageP$high[id].crc) : __nesc_ntoh_uint16((unsigned char *)&ConfigStorageP$low[id].crc))) 
    {

      if (isflipped) {
        __nesc_hton_uint32((unsigned char *)&ConfigStorageP$low[id].version, __nesc_ntoh_uint32((unsigned char *)&ConfigStorageP$high[id].version));
        }
#line 159
      ConfigStorageP$s[id].state = ConfigStorageP$S_CLEAN;
    }
  else 
    {

      if (__nesc_ntoh_uint32((unsigned char *)&ConfigStorageP$high[id].version) > __nesc_ntoh_uint32((unsigned char *)&ConfigStorageP$low[id].version) == isflipped) 
        {


          ConfigStorageP$setFlip(id, !isflipped);
          ConfigStorageP$computeCrc(id);
          return;
        }

      ConfigStorageP$s[id].state = ConfigStorageP$S_INVALID;
      __nesc_hton_uint32((unsigned char *)&ConfigStorageP$low[id].version, 0);
    }
  ConfigStorageP$Mount$mountDone(id, SUCCESS);
}

#line 382
static inline  void ConfigStorageP$BlockRead$computeCrcDone(uint8_t id, storage_addr_t addr, storage_len_t len, uint16_t crc, error_t error)
#line 382
{
  if (id < ConfigStorageP$N) {
    if (ConfigStorageP$s[id].state == ConfigStorageP$S_MOUNT) {
      ConfigStorageP$mountCrcDone(id, crc, error);
      }
    else {
#line 387
      ConfigStorageP$commitCrcDone(id, crc, error);
      }
    }
}

# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
inline static  void BlockStorageP$BlockRead$computeCrcDone(uint8_t arg_0x40d1d3e0, storage_addr_t arg_0x40cb7010, storage_len_t arg_0x40cb71a0, uint16_t arg_0x40cb7340, error_t arg_0x40cb74c8){
#line 95
  ConfigStorageP$BlockRead$computeCrcDone(arg_0x40d1d3e0, arg_0x40cb7010, arg_0x40cb71a0, arg_0x40cb7340, arg_0x40cb74c8);
#line 95
}
#line 95
# 377 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
static inline  void ConfigStorageP$BlockWrite$syncDone(uint8_t id, error_t error)
#line 377
{
  if (id < ConfigStorageP$N) {
    ConfigStorageP$commitSyncDone(id, error);
    }
}

# 112 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
inline static  void BlockStorageP$BlockWrite$syncDone(uint8_t arg_0x40d1e8e8, error_t arg_0x40cb2ed0){
#line 112
  ConfigStorageP$BlockWrite$syncDone(arg_0x40d1e8e8, arg_0x40cb2ed0);
#line 112
}
#line 112
# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
inline static  int BlockStorageP$BConfig$flipped(uint8_t arg_0x40d1a4f0){
#line 30
  int result;
#line 30

#line 30
  result = ConfigStorageP$BConfig$flipped(arg_0x40d1a4f0);
#line 30

#line 30
  return result;
#line 30
}
#line 30
# 21 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbStorageManagerC.nc"
static inline  at45page_t At45dbStorageManagerC$At45dbVolume$remap(volume_id_t volid, at45page_t volumePage)
#line 21
{
  switch (volid) 
    {
# 14 "build/micaz/StorageVolumes.h"
      case VOLUME_DYMODATA: return volumePage + 0;
# 26 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbStorageManagerC.nc"
      default: return AT45_MAX_PAGES;
    }
}

# 389 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline   at45page_t BlockStorageP$At45dbVolume$default$remap(uint8_t id, at45page_t volumePage)
#line 389
{
#line 389
  return 0;
}

# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
inline static  at45page_t BlockStorageP$At45dbVolume$remap(uint8_t arg_0x40d174d0, at45page_t arg_0x40d18b98){
#line 24
  unsigned short result;
#line 24

#line 24
  switch (arg_0x40d174d0) {
#line 24
    case /*DymoServiceC.ConfigStorageC*/ConfigStorageC$0$CONFIG_ID:
#line 24
      result = At45dbStorageManagerC$At45dbVolume$remap(0, arg_0x40d18b98);
#line 24
      break;
#line 24
    default:
#line 24
      result = BlockStorageP$At45dbVolume$default$remap(arg_0x40d174d0, arg_0x40d18b98);
#line 24
      break;
#line 24
    }
#line 24

#line 24
  return result;
#line 24
}
#line 24
# 405 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbP.nc"
static inline  void At45dbP$At45db$write(at45page_t page, at45pageoffset_t offset, 
void *reqdata, at45pageoffset_t n)
#line 406
{
  At45dbP$newRequest(At45dbP$R_WRITE, page, offset, reqdata, n);
}

# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45db.nc"
inline static  void BlockStorageP$At45db$write(at45page_t arg_0x40c97b20, at45pageoffset_t arg_0x40c97cb8, void *arg_0x40c97e68, at45pageoffset_t arg_0x40c96030){
#line 62
  At45dbP$At45db$write(arg_0x40c97b20, arg_0x40c97cb8, arg_0x40c97e68, arg_0x40c96030);
#line 62
}
#line 62
# 392 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbP.nc"
static inline  void At45dbP$At45db$read(at45page_t page, at45pageoffset_t offset, 
void *reqdata, at45pageoffset_t n)
#line 393
{
  At45dbP$newRequest(At45dbP$R_READ, page, offset, reqdata, n);
}

# 155 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45db.nc"
inline static  void BlockStorageP$At45db$read(at45page_t arg_0x40cbf748, at45pageoffset_t arg_0x40cbf8e0, void *arg_0x40cbfa90, at45pageoffset_t arg_0x40cbfc28){
#line 155
  At45dbP$At45db$read(arg_0x40cbf748, arg_0x40cbf8e0, arg_0x40cbfa90, arg_0x40cbfc28);
#line 155
}
#line 155
# 397 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbP.nc"
static inline  void At45dbP$At45db$computeCrc(at45page_t page, 
at45pageoffset_t offset, 
at45pageoffset_t n, 
uint16_t baseCrc)
#line 400
{

  At45dbP$newRequest(At45dbP$R_READCRC, page, offset, (uint8_t *)baseCrc, n);
}

# 176 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45db.nc"
inline static  void BlockStorageP$At45db$computeCrc(at45page_t arg_0x40cbe908, at45pageoffset_t arg_0x40cbeaa0, at45pageoffset_t arg_0x40cbec48, uint16_t arg_0x40cbedd8){
#line 176
  At45dbP$At45db$computeCrc(arg_0x40cbe908, arg_0x40cbeaa0, arg_0x40cbec48, arg_0x40cbedd8);
#line 176
}
#line 176
# 400 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
static inline  void ConfigStorageP$At45db$computeCrcDone(error_t error, uint16_t crc)
#line 400
{
}

# 366 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline  void BlockStorageP$At45db$computeCrcDone(error_t result, uint16_t newCrc)
#line 366
{
  if (BlockStorageP$client != BlockStorageP$NO_CLIENT) {
    BlockStorageP$multipageOpDone(result, newCrc);
    }
}

# 183 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45db.nc"
inline static  void At45dbP$At45db$computeCrcDone(error_t arg_0x40cbd5e8, uint16_t arg_0x40cbd778){
#line 183
  BlockStorageP$At45db$computeCrcDone(arg_0x40cbd5e8, arg_0x40cbd778);
#line 183
  ConfigStorageP$At45db$computeCrcDone(arg_0x40cbd5e8, arg_0x40cbd778);
#line 183
}
#line 183
# 401 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
static inline  void ConfigStorageP$At45db$writeDone(error_t error)
#line 401
{
}

# 356 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline  void BlockStorageP$At45db$writeDone(error_t result)
#line 356
{
  if (BlockStorageP$client != BlockStorageP$NO_CLIENT) {
    BlockStorageP$multipageOpDone(result, 0);
    }
}

# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45db.nc"
inline static  void At45dbP$At45db$writeDone(error_t arg_0x40c96688){
#line 69
  BlockStorageP$At45db$writeDone(arg_0x40c96688);
#line 69
  ConfigStorageP$At45db$writeDone(arg_0x40c96688);
#line 69
}
#line 69
# 397 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
static inline  void ConfigStorageP$At45db$syncDone(error_t error)
#line 397
{
}

# 317 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP$syncSyncDone(error_t error)
#line 317
{
  BlockStorageP$endRequest(error, 0);
}

#line 376
static inline  void BlockStorageP$At45db$syncDone(error_t result)
#line 376
{
  if (BlockStorageP$client != BlockStorageP$NO_CLIENT) {
    BlockStorageP$syncSyncDone(result);
    }
}

# 125 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45db.nc"
inline static  void At45dbP$At45db$syncDone(error_t arg_0x40cc0330){
#line 125
  BlockStorageP$At45db$syncDone(arg_0x40cc0330);
#line 125
  ConfigStorageP$At45db$syncDone(arg_0x40cc0330);
#line 125
}
#line 125
# 398 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
static inline  void ConfigStorageP$At45db$flushDone(error_t error)
#line 398
{
}

# 381 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline  void BlockStorageP$At45db$flushDone(error_t result)
#line 381
{
}

# 143 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45db.nc"
inline static  void At45dbP$At45db$flushDone(error_t arg_0x40cbf200){
#line 143
  BlockStorageP$At45db$flushDone(arg_0x40cbf200);
#line 143
  ConfigStorageP$At45db$flushDone(arg_0x40cbf200);
#line 143
}
#line 143
# 396 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
static inline  void ConfigStorageP$At45db$eraseDone(error_t error)
#line 396
{
}

# 293 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP$eraseEraseDone(error_t error)
#line 293
{
  BlockStorageP$endRequest(error, 0);
}

#line 371
static inline  void BlockStorageP$At45db$eraseDone(error_t result)
#line 371
{
  if (BlockStorageP$client != BlockStorageP$NO_CLIENT) {
    BlockStorageP$eraseEraseDone(result);
    }
}

# 105 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45db.nc"
inline static  void At45dbP$At45db$eraseDone(error_t arg_0x40c94358){
#line 105
  BlockStorageP$At45db$eraseDone(arg_0x40c94358);
#line 105
  ConfigStorageP$At45db$eraseDone(arg_0x40c94358);
#line 105
}
#line 105
# 390 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
static inline  void ConfigStorageP$At45db$copyPageDone(error_t error)
#line 390
{
  if (ConfigStorageP$client != ConfigStorageP$NO_CLIENT) {
    ConfigStorageP$copyCopyPageDone(error);
    }
}

# 382 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline  void BlockStorageP$At45db$copyPageDone(error_t error)
#line 382
{
}

# 85 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45db.nc"
inline static  void At45dbP$At45db$copyPageDone(error_t arg_0x40c95508){
#line 85
  BlockStorageP$At45db$copyPageDone(arg_0x40c95508);
#line 85
  ConfigStorageP$At45db$copyPageDone(arg_0x40c95508);
#line 85
}
#line 85
# 221 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45dbByteC.nc"
static inline  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$flush(uint8_t cmd, at45page_t page)
#line 221
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$execCommand(/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_FLUSH, cmd, 0, page, 0, (void *)0, 1);
}

# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45db.nc"
inline static  void At45dbP$HplAt45db$flush(uint8_t arg_0x40d560f8, at45page_t arg_0x40d56288){
#line 73
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$flush(arg_0x40d560f8, arg_0x40d56288);
#line 73
}
#line 73
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t At45dbP$taskSuccess$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(At45dbP$taskSuccess);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 225 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45dbByteC.nc"
static inline  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$compare(uint8_t cmd, at45page_t page)
#line 225
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$execCommand(/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_COMPARE, cmd, 0, page, 0, (void *)0, 1);
}

# 87 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45db.nc"
inline static  void At45dbP$HplAt45db$compare(uint8_t arg_0x40d56c58, at45page_t arg_0x40d56de8){
#line 87
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$compare(arg_0x40d56c58, arg_0x40d56de8);
#line 87
}
#line 87
# 239 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45dbByteC.nc"
static inline  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$readBuffer(uint8_t cmd, at45pageoffset_t offset, 
uint8_t *pdata, at45pageoffset_t count)
#line 240
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$execCommand(/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_READ, cmd, 2, 0, offset, pdata, count);
}

# 119 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45db.nc"
inline static  void At45dbP$HplAt45db$readBuffer(uint8_t arg_0x40d53250, at45pageoffset_t arg_0x40d533e8, uint8_t *arg_0x40d535a0, uint16_t arg_0x40d53730){
#line 119
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$readBuffer(arg_0x40d53250, arg_0x40d533e8, arg_0x40d535a0, arg_0x40d53730);
#line 119
}
#line 119
# 244 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45dbByteC.nc"
static inline  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$crc(uint8_t cmd, 
at45page_t page, at45pageoffset_t offset, 
at45pageoffset_t count, 
uint16_t baseCrc)
#line 247
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$execCommand(/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_READ_CRC, cmd, 2, page, offset, (uint8_t *)baseCrc, count);
}

# 157 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45db.nc"
inline static  void At45dbP$HplAt45db$crc(uint8_t arg_0x40d50010, at45page_t arg_0x40d501a0, at45pageoffset_t arg_0x40d50338, at45pageoffset_t arg_0x40d504e0, uint16_t arg_0x40d50670){
#line 157
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$crc(arg_0x40d50010, arg_0x40d501a0, arg_0x40d50338, arg_0x40d504e0, arg_0x40d50670);
#line 157
}
#line 157
# 251 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45dbByteC.nc"
static inline  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$write(uint8_t cmd, 
at45page_t page, at45pageoffset_t offset, 
uint8_t *pdata, at45pageoffset_t count)
#line 253
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$execCommand(/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_WRITE, cmd, 0, page, offset, pdata, count);
}

# 178 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45db.nc"
inline static  void At45dbP$HplAt45db$write(uint8_t arg_0x40d4f328, at45page_t arg_0x40d4f4b8, at45pageoffset_t arg_0x40d4f650, uint8_t *arg_0x40d4f808, at45pageoffset_t arg_0x40d4f9a0){
#line 178
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$write(arg_0x40d4f328, arg_0x40d4f4b8, arg_0x40d4f650, arg_0x40d4f808, arg_0x40d4f9a0);
#line 178
}
#line 178
# 217 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45dbByteC.nc"
static inline  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$fill(uint8_t cmd, at45page_t page)
#line 217
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$execCommand(/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_FILL, cmd, 0, page, 0, (void *)0, 1);
}

# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45db.nc"
inline static  void At45dbP$HplAt45db$fill(uint8_t arg_0x40d57640, at45page_t arg_0x40d577d0){
#line 55
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$fill(arg_0x40d57640, arg_0x40d577d0);
#line 55
}
#line 55
# 462 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbP.nc"
static inline  void At45dbP$At45db$syncAll(void)
#line 462
{
  At45dbP$syncOrFlushAll(At45dbP$R_SYNCALL);
}

# 120 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45db.nc"
inline static  void BlockStorageP$At45db$syncAll(void){
#line 120
  At45dbP$At45db$syncAll();
#line 120
}
#line 120
# 313 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP$syncStart(void)
#line 313
{
  BlockStorageP$At45db$syncAll();
}

#line 269
static inline void BlockStorageP$multipageStart(uint16_t crc)
#line 269
{
  BlockStorageP$currentOffset = 0;
  BlockStorageP$multipageContinue(crc);
}

# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
inline static  at45page_t ConfigStorageP$BConfig$remap(uint8_t arg_0x40c9ab00, at45page_t arg_0x40c9a520){
#line 58
  unsigned short result;
#line 58

#line 58
  result = BlockStorageP$BConfig$remap(arg_0x40c9ab00, arg_0x40c9a520);
#line 58

#line 58
  return result;
#line 58
}
#line 58
# 415 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbP.nc"
static inline  void At45dbP$At45db$copyPage(at45page_t from, at45page_t to)
#line 415
{

  At45dbP$newRequest(At45dbP$R_COPY, from, to, (void *)0, 0);
}

# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45db.nc"
inline static  void ConfigStorageP$At45db$copyPage(at45page_t arg_0x40c96be8, at45page_t arg_0x40c96d78){
#line 80
  At45dbP$At45db$copyPage(arg_0x40c96be8, arg_0x40c96d78);
#line 80
}
#line 80
# 194 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbP.nc"
static inline  void At45dbP$HplAt45db$writeDone(void)
#line 194
{
  At45dbP$buffer[At45dbP$selected].clean = FALSE;
  At45dbP$buffer[At45dbP$selected].unchecked = 0;
  At45dbP$requestDone(SUCCESS, 0, At45dbP$IDLE);
}

# 185 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45db.nc"
inline static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$writeDone(void){
#line 185
  At45dbP$HplAt45db$writeDone();
#line 185
}
#line 185
# 190 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbP.nc"
static inline  void At45dbP$HplAt45db$readDone(void)
#line 190
{
  At45dbP$requestDone(SUCCESS, 0, At45dbP$IDLE);
}

# 141 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45db.nc"
inline static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$readDone(void){
#line 141
  At45dbP$HplAt45db$readDone();
#line 141
}
#line 141
# 231 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbP.nc"
static inline  void At45dbP$HplAt45db$eraseDone(void)
#line 231
{
  At45dbP$flashBusy = TRUE;



  At45dbP$buffer[At45dbP$selected].page = At45dbP$reqPage;
  At45dbP$buffer[At45dbP$selected].clean = TRUE;
  At45dbP$buffer[At45dbP$selected].erased = TRUE;
  At45dbP$requestDone(SUCCESS, 0, At45dbP$IDLE);
}

# 106 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45db.nc"
inline static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$eraseDone(void){
#line 106
  At45dbP$HplAt45db$eraseDone();
#line 106
}
#line 106
# 196 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45dbByteC.nc"
static inline  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$waitCompare(void)
#line 196
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$status = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_WAIT_COMPARE;
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$Resource$request();
}

# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45db.nc"
inline static  void At45dbP$HplAt45db$waitCompare(void){
#line 41
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$waitCompare();
#line 41
}
#line 41
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/micaz/BusyWaitMicroC.nc"
static __inline   void BusyWaitMicroC$BusyWait$wait(uint16_t dt)
#line 35
{

  if (dt) {


     __asm volatile (
    "1:	sbiw	%0,1\n"
    "	adiw	%0,1\n"
    "	sbiw	%0,1\n"
    "	brne	1b" : "+w"(dt));
    }
}

# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/BusyWait.nc"
inline static   void At45dbP$BusyWait$wait(At45dbP$BusyWait$size_type arg_0x40d7b190){
#line 55
  BusyWaitMicroC$BusyWait$wait(arg_0x40d7b190);
#line 55
}
#line 55
# 212 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbP.nc"
static inline  void At45dbP$HplAt45db$compareDone(void)
#line 212
{
  At45dbP$flashBusy = TRUE;
  At45dbP$buffer[At45dbP$checking].busy = TRUE;




  At45dbP$BusyWait$wait(10);
  At45dbP$HplAt45db$waitCompare();
}

# 93 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45db.nc"
inline static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$compareDone(void){
#line 93
  At45dbP$HplAt45db$compareDone();
#line 93
}
#line 93
# 204 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbP.nc"
static inline  void At45dbP$HplAt45db$flushDone(void)
#line 204
{
  At45dbP$flashBusy = TRUE;
  At45dbP$buffer[At45dbP$selected].clean = At45dbP$buffer[At45dbP$selected].busy = TRUE;
  At45dbP$buffer[At45dbP$selected].unchecked++;
  At45dbP$buffer[At45dbP$selected].erased = FALSE;
  At45dbP$handleRWRequest();
}

# 79 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45db.nc"
inline static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$flushDone(void){
#line 79
  At45dbP$HplAt45db$flushDone();
#line 79
}
#line 79
# 223 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbP.nc"
static inline  void At45dbP$HplAt45db$fillDone(void)
#line 223
{
  At45dbP$flashBusy = TRUE;
  At45dbP$buffer[At45dbP$selected].page = At45dbP$reqPage;
  At45dbP$buffer[At45dbP$selected].clean = At45dbP$buffer[At45dbP$selected].busy = TRUE;
  At45dbP$buffer[At45dbP$selected].erased = FALSE;
  At45dbP$handleRWRequest();
}

# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45db.nc"
inline static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$fillDone(void){
#line 61
  At45dbP$HplAt45db$fillDone();
#line 61
}
#line 61
# 200 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbP.nc"
static inline  void At45dbP$HplAt45db$crcDone(uint16_t crc)
#line 200
{
  At45dbP$requestDone(SUCCESS, crc, At45dbP$IDLE);
}

# 163 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45db.nc"
inline static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$crcDone(uint16_t arg_0x40d50dd0){
#line 163
  At45dbP$HplAt45db$crcDone(arg_0x40d50dd0);
#line 163
}
#line 163
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$complete(uint16_t crc)
#line 55
{
  uint8_t s = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$status;

  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$status = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_IDLE;
  switch (s) 
    {
      default: break;
      case /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_READ_CRC: 
        /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$crcDone(crc);
      break;
      case /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_FILL: 
        /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$fillDone();
      break;
      case /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_FLUSH: 
        /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$flushDone();
      break;
      case /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_COMPARE: 
        /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$compareDone();
      break;
      case /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_ERASE: 
        /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$eraseDone();
      break;
      case /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_READ: 
        /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$readDone();
      break;
      case /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_WRITE: 
        /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$writeDone();
      break;
    }
}

# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/system/NoArbiterC.nc"
static inline    void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$ResourceConfigure$default$unconfigure(void)
#line 50
{
}

# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static   void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$ResourceConfigure$unconfigure(void){
#line 55
  /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$ResourceConfigure$default$unconfigure();
#line 55
}
#line 55
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/system/NoArbiterC.nc"
static inline   error_t /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$Resource$release(void)
#line 40
{
  /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$ResourceConfigure$unconfigure();
  return SUCCESS;
}

# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$Resource$release(void){
#line 110
  unsigned char result;
#line 110

#line 110
  result = /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$Resource$release();
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 85 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/mica2/chips/at45db/HplAt45dbIOP.nc"
static inline  void HplAt45dbIOP$HplAt45dbByte$deselect(void)
#line 85
{
  HplAt45dbIOP$Select$set();
}

# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45dbByte.nc"
inline static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45dbByte$deselect(void){
#line 52
  HplAt45dbIOP$HplAt45dbByte$deselect();
#line 52
}
#line 52
# 34 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SpiByte.nc"
inline static   uint8_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$FlashSpi$write(uint8_t arg_0x407739d8){
#line 34
  unsigned char result;
#line 34

#line 34
  result = HplAt45dbIOP$FlashSpi$write(arg_0x407739d8);
#line 34

#line 34
  return result;
#line 34
}
#line 34
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP$3$IO$clr(void)
#line 47
{
#line 47
  * (volatile uint8_t *)59U &= ~(1 << 3);
}

# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplAt45dbIOP$Select$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP$3$IO$clr();
#line 30
}
#line 30
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/mica2/chips/at45db/HplAt45dbIOP.nc"
static inline  void HplAt45dbIOP$HplAt45dbByte$select(void)
#line 80
{
  HplAt45dbIOP$Clk$clr();
  HplAt45dbIOP$Select$clr();
}

# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45dbByte.nc"
inline static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45dbByte$select(void){
#line 47
  HplAt45dbIOP$HplAt45dbByte$select();
#line 47
}
#line 47
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$doCommand(void)
#line 92
{
  uint8_t in = 0;
#line 93
  uint8_t out = 0;
  uint8_t *ptr;
  at45pageoffset_t count;
  uint8_t lphase;
  uint16_t crc = (uint16_t )/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$data;

  if (/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$dataCount) 
    {






      ptr = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$flashCmd;
      lphase = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_SEND_CMD;
      count = 4 + /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$dontCare;

      /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45dbByte$select();
      for (; ; ) 
        {
          if (lphase == /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_READ_CRC) 
            {
              crc = crcByte(crc, in);

              --count;
              if (!count) {
                break;
                }
            }
          else {
#line 122
            if (lphase == /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_SEND_CMD) 
              {

                out = * ptr++;
                count--;
                if (!count) 
                  {
                    lphase = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$status;
                    ptr = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$data;
                    count = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$dataCount;
                  }
              }
            else {
#line 134
              if (lphase == /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_READ) 
                {
                  * ptr++ = in;
                  --count;
                  if (!count) {
                    break;
                    }
                }
              else {
#line 141
                if (lphase == /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_WRITE) 
                  {
                    if (!count) {
                      break;
                      }
                    out = * ptr++;
                    --count;
                  }
                else {
                  break;
                  }
                }
              }
            }
#line 152
          in = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$FlashSpi$write(out);
        }
      /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45dbByte$deselect();
    }

  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$Resource$release();
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$complete(crc);
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t HplAt45dbIOP$avail$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(HplAt45dbIOP$avail);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 145 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/mica2/chips/at45db/HplAt45dbIOP.nc"
static inline   void HplAt45dbIOP$InInterrupt$fired(void)
#line 145
{
  HplAt45dbIOP$InInterrupt$disable();
  HplAt45dbIOP$avail$postTask();
}

# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   bool /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP$26$IO$get(void)
#line 45
{
#line 45
  return (* (volatile uint8_t *)48U & (1 << 2)) != 0;
}

# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   bool HplAt45dbIOP$In$get(void){
#line 32
  unsigned char result;
#line 32

#line 32
  result = /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP$26$IO$get();
#line 32

#line 32
  return result;
#line 32
}
#line 32
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/BusyWait.nc"
inline static   void HplAt45dbIOP$BusyWait$wait(HplAt45dbIOP$BusyWait$size_type arg_0x40d7b190){
#line 55
  BusyWaitMicroC$BusyWait$wait(arg_0x40d7b190);
#line 55
}
#line 55
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline   void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$enable(void)
#line 42
{
#line 42
  * (volatile uint8_t *)(0x39 + 0x20) |= 1 << 2;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void HplAt45dbIOP$InInterrupt$enable(void){
#line 35
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$enable();
#line 35
}
#line 35
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline   void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$clear(void)
#line 41
{
#line 41
  * (volatile uint8_t *)(0x38 + 0x20) = 1 << 2;
}

# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void HplAt45dbIOP$InInterrupt$clear(void){
#line 45
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$clear();
#line 45
}
#line 45
# 127 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/mica2/chips/at45db/HplAt45dbIOP.nc"
static inline  void HplAt45dbIOP$HplAt45dbByte$waitIdle(void)
#line 127
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      HplAt45dbIOP$InInterrupt$clear();
      HplAt45dbIOP$InInterrupt$enable();
      HplAt45dbIOP$Clk$clr();




      HplAt45dbIOP$BusyWait$wait(2);

      if (HplAt45dbIOP$In$get()) {
        HplAt45dbIOP$InInterrupt$fired();
        }
    }
#line 143
    __nesc_atomic_end(__nesc_atomic); }
}

# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45dbByte.nc"
inline static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45dbByte$waitIdle(void){
#line 31
  HplAt45dbIOP$HplAt45dbByte$waitIdle();
#line 31
}
#line 31
# 86 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$requestFlashStatus(void)
#line 86
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45dbByte$select();
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$FlashSpi$write(AT45_C_REQ_STATUS);
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45dbByte$waitIdle();
}

#line 161
static inline  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$Resource$granted(void)
#line 161
{
  switch (/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$status) 
    {
      case /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_WAIT_COMPARE: case /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_WAIT_IDLE: 
          /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$requestFlashStatus();
      break;
      default: 
        /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$doCommand();
      break;
    }
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static  void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$Resource$granted(void){
#line 92
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$Resource$granted();
#line 92
}
#line 92
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/system/NoArbiterC.nc"
static inline    void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$ResourceConfigure$default$configure(void)
#line 49
{
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static   void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$ResourceConfigure$configure(void){
#line 49
  /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$ResourceConfigure$default$configure();
#line 49
}
#line 49
# 25 "/opt/CVSTinyOS/tinyos-2.x/tos/system/NoArbiterC.nc"
static inline  void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$granted$runTask(void)
#line 25
{
  /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$ResourceConfigure$configure();
  /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$Resource$granted();
}

# 163 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbP.nc"
static inline  void At45dbP$HplAt45db$waitIdleDone(void)
#line 163
{
  At45dbP$flashIdle();







  At45dbP$handleRWRequest();
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45db.nc"
inline static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$waitIdleDone(void){
#line 35
  At45dbP$HplAt45db$waitIdleDone();
#line 35
}
#line 35
# 175 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbP.nc"
static inline  void At45dbP$HplAt45db$waitCompareDone(bool ok)
#line 175
{
  At45dbP$flashIdle();

  if (ok) {
    At45dbP$buffer[At45dbP$checking].unchecked = 0;
    }
  else {
#line 180
    if (At45dbP$buffer[At45dbP$checking].unchecked < 2) {
      At45dbP$buffer[At45dbP$checking].clean = FALSE;
      }
    else {
        At45dbP$requestDone(FAIL, 0, At45dbP$BROKEN);
        return;
      }
    }
#line 187
  At45dbP$handleRWRequest();
}

# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45db.nc"
inline static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$waitCompareDone(bool arg_0x40d57100){
#line 47
  At45dbP$HplAt45db$waitCompareDone(arg_0x40d57100);
#line 47
}
#line 47
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP$29$IO$set(void)
#line 46
{
#line 46
  * (volatile uint8_t *)50U |= 1 << 5;
}

# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplAt45dbIOP$Clk$set(void){
#line 29
  /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP$29$IO$set();
#line 29
}
#line 29
# 150 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/mica2/chips/at45db/HplAt45dbIOP.nc"
static inline  bool HplAt45dbIOP$HplAt45dbByte$getCompareStatus(void)
#line 150
{
  HplAt45dbIOP$Clk$set();
  HplAt45dbIOP$Clk$clr();

   __asm volatile ("nop");
   __asm volatile ("nop");
  return !HplAt45dbIOP$In$get();
}

# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45dbByte.nc"
inline static  bool /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45dbByte$getCompareStatus(void){
#line 42
  unsigned char result;
#line 42

#line 42
  result = HplAt45dbIOP$HplAt45dbByte$getCompareStatus();
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 201 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45dbByteC.nc"
static inline  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45dbByte$idle(void)
#line 201
{
  if (/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$status == /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_WAIT_COMPARE) 
    {
      bool cstatus = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45dbByte$getCompareStatus();

#line 205
      /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45dbByte$deselect();
      /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$Resource$release();
      /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$waitCompareDone(cstatus);
    }
  else 
    {
      /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45dbByte$deselect();
      /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$Resource$release();
      /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$waitIdleDone();
    }
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45dbByte.nc"
inline static  void HplAt45dbIOP$HplAt45dbByte$idle(void){
#line 35
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45dbByte$idle();
#line 35
}
#line 35
# 123 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/mica2/chips/at45db/HplAt45dbIOP.nc"
static inline  void HplAt45dbIOP$avail$runTask(void)
#line 123
{
  HplAt45dbIOP$HplAt45dbByte$idle();
}

# 137 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbP.nc"
static inline  void At45dbP$taskFail$runTask(void)
#line 137
{
  At45dbP$requestDone(FAIL, 0, At45dbP$IDLE);
}

#line 134
static inline  void At45dbP$taskSuccess$runTask(void)
#line 134
{
  At45dbP$requestDone(SUCCESS, 0, At45dbP$IDLE);
}

# 240 "/usr/local/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_hton_uint8(void *target, uint8_t value)
#line 240
{
  uint8_t *base = target;

#line 242
  base[0] = value;
  return value;
}

#line 235
static __inline uint8_t __nesc_ntoh_uint8(const void *source)
#line 235
{
  const uint8_t *base = source;

#line 237
  return base[0];
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t DymoEngineM$forward$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(DymoEngineM$forward);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 24 "../../../tos/lib/net/tymo/dymo/DymoPacket.nc"
inline static  dymo_msg_t DymoEngineM$DymoPacket$getType(message_t *arg_0x40c06ad8){
#line 24
  enum __nesc_unnamed4299 result;
#line 24

#line 24
  result = DymoPacketM$DymoPacket$getType(arg_0x40c06ad8);
#line 24

#line 24
  return result;
#line 24
}
#line 24
# 357 "../../../tos/lib/net/tymo/dymo/DymoEngineM.nc"
static inline  void DymoEngineM$DymoPacket$messageProcessed(message_t *msg)
#line 357
{
  DymoEngineM$avail_msg = msg;
  if (DymoEngineM$DymoPacket$getType(msg) == DYMO_RERR && DymoEngineM$cur_info_pos) {

      DymoEngineM$forward$postTask();
    }
  else {
#line 363
    if (DymoEngineM$DymoPacket$getType(msg) != DYMO_RERR && DymoEngineM$fw_address) {




        ;
        DymoEngineM$forward$postTask();
      }
    else {

        { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 373
          {
            DymoEngineM$busyProcess = 0;
          }
#line 375
          __nesc_atomic_end(__nesc_atomic); }
        ;
      }
    }
  ;
}

# 101 "../../../tos/lib/net/tymo/dymo/DymoPacket.nc"
inline static  void DymoPacketM$DymoPacket$messageProcessed(message_t *arg_0x40c013d8){
#line 101
  DymoEngineM$DymoPacket$messageProcessed(arg_0x40c013d8);
#line 101
}
#line 101
# 281 "../../../tos/lib/net/tymo/dymo/DymoPacketM.nc"
static inline uint8_t DymoPacketM$block_header_size(nx_uint8_t *block)
#line 281
{
  if (__nesc_ntoh_uint8((unsigned char *)&*block) & BLOCK_HEAD) {
    return 3;
    }
  else {
#line 285
    return 2;
    }
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t DymoEngineM$issueRREP$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(DymoEngineM$issueRREP);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 25 "../../../tos/lib/net/tymo/dymo/DymoTable.nc"
inline static  error_t DymoEngineM$DymoTable$update(const rt_info_t *arg_0x40b4a2c0, dymo_msg_t arg_0x40b4a458){
#line 25
  unsigned char result;
#line 25

#line 25
  result = /*DymoTableC.DymoTableM*/DymoTableM$0$DymoTable$update(arg_0x40b4a2c0, arg_0x40b4a458);
#line 25

#line 25
  return result;
#line 25
}
#line 25
# 276 "/usr/local/lib/ncc/nesc_nx.h"
static __inline uint16_t __nesc_ntoh_leuint16(const void *source)
#line 276
{
  const uint8_t *base = source;

#line 278
  return ((uint16_t )base[1] << 8) | base[0];
}

# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline   cc2420_header_t *CC2420PacketP$CC2420PacketBody$getHeader(message_t *msg)
#line 99
{
  return (cc2420_header_t *)((uint8_t *)msg + (size_t )& ((message_t *)0)->data - sizeof(cc2420_header_t ));
}

# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static   cc2420_header_t *CC2420ActiveMessageP$CC2420PacketBody$getHeader(message_t *arg_0x403b92d0){
#line 42
  nx_struct cc2420_header_t *result;
#line 42

#line 42
  result = CC2420PacketP$CC2420PacketBody$getHeader(arg_0x403b92d0);
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 97 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline  am_addr_t CC2420ActiveMessageP$AMPacket$source(message_t *amsg)
#line 97
{
  cc2420_header_t *header = CC2420ActiveMessageP$CC2420PacketBody$getHeader(amsg);

#line 99
  return __nesc_ntoh_leuint16((unsigned char *)&header->src);
}

# 77 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  am_addr_t DymoEngineM$AMPacket$source(message_t *arg_0x40349958){
#line 77
  unsigned short result;
#line 77

#line 77
  result = CC2420ActiveMessageP$AMPacket$source(arg_0x40349958);
#line 77

#line 77
  return result;
#line 77
}
#line 77
# 28 "../../../tos/lib/net/tymo/RoutingTable.nc"
inline static  error_t DymoEngineM$RoutingTable$getForwardingRoute(addr_t arg_0x40b4ede0, rt_info_t *arg_0x40b4c010){
#line 28
  unsigned char result;
#line 28

#line 28
  result = /*DymoTableC.DymoTableM*/DymoTableM$0$RoutingTable$getForwardingRoute(arg_0x40b4ede0, arg_0x40b4c010);
#line 28

#line 28
  return result;
#line 28
}
#line 28
# 212 "../../../tos/lib/net/tymo/dymo/DymoTableM.nc"
static inline  bool /*DymoTableC.DymoTableM*/DymoTableM$0$DymoTable$isSuperior(const rt_info_t *info, dymo_msg_t t)
#line 212
{
  int8_t i = /*DymoTableC.DymoTableM*/DymoTableM$0$get_route(info->address);

#line 214
  return i == -1 || /*DymoTableC.DymoTableM*/DymoTableM$0$is_superior(info, /*DymoTableC.DymoTableM*/DymoTableM$0$table + i, t);
}

# 27 "../../../tos/lib/net/tymo/dymo/DymoTable.nc"
inline static  bool DymoEngineM$DymoTable$isSuperior(const rt_info_t *arg_0x40b4ab58, dymo_msg_t arg_0x40b4acf0){
#line 27
  unsigned char result;
#line 27

#line 27
  result = /*DymoTableC.DymoTableM*/DymoTableM$0$DymoTable$isSuperior(arg_0x40b4ab58, arg_0x40b4acf0);
#line 27

#line 27
  return result;
#line 27
}
#line 27
# 26 "../../../tos/lib/net/tymo/RoutingTable.nc"
inline static  error_t DymoEngineM$RoutingTable$getRoute(addr_t arg_0x40b4e5f0, rt_info_t *arg_0x40b4e7a0){
#line 26
  unsigned char result;
#line 26

#line 26
  result = /*DymoTableC.DymoTableM*/DymoTableM$0$RoutingTable$getRoute(arg_0x40b4e5f0, arg_0x40b4e7a0);
#line 26

#line 26
  return result;
#line 26
}
#line 26
# 233 "../../../tos/lib/net/tymo/dymo/DymoEngineM.nc"
static inline proc_action_t DymoEngineM$process_rm_info(message_t *msg, rt_info_t *info)
#line 233
{
  DymoEngineM$cur_info_pos++;
  if (DymoEngineM$cur_info_pos == 1) {

      if (info->address == DymoEngineM$me.address) {

          if (DymoEngineM$DymoPacket$getType(msg) == DYMO_RREQ) {
              ;
              if (info->seqnum < DymoEngineM$me.seqnum) {
                DymoEngineM$incr_seqnum();
                }
#line 243
              DymoEngineM$sendRREP = TRUE;
            }
          else 
#line 244
            {
              ;
            }
          DymoEngineM$fw_address = 0;
          return ACTION_DISCARD_MSG;
        }
      else {

          info->nexthop = DymoEngineM$AMPacket$source(msg);
          if (DymoEngineM$DymoPacket$getType(msg) == DYMO_RREQ) {



              DymoEngineM$ignoreNeeded = info->address;
              if (DymoEngineM$RoutingTable$getRoute(info->address, &DymoEngineM$buf_info) == SUCCESS) {

                  if (! info->seqnum || !DymoEngineM$DymoTable$isSuperior(info, DYMO_RREQ)) {



                      ;
                      DymoEngineM$buf_target = DymoEngineM$buf_info;
                      DymoEngineM$sendRREP = TRUE;
                      DymoEngineM$fw_address = 0;
                      return ACTION_DISCARD_MSG;
                    }
                }

              return ACTION_KEEP;
            }
          else {

              DymoEngineM$ignoreNeeded = info->address;
              ;
              if (DymoEngineM$RoutingTable$getForwardingRoute(info->address, &DymoEngineM$buf_info) == SUCCESS) {
                  DymoEngineM$fw_address = DymoEngineM$buf_info.nexthop;
                  return ACTION_KEEP;
                }
              else 
#line 281
                {
                  DymoEngineM$fw_address = 0;
                  return ACTION_DISCARD_MSG;
                }
            }
        }
    }
  else {



    if (
#line 290
    DymoEngineM$DymoPacket$getType(msg) == DYMO_RREQ
     && DymoEngineM$cur_info_pos == 2
     && info->address == DymoEngineM$me.address) {

        DymoEngineM$fw_address = 0;
        DymoEngineM$sendRREP = FALSE;
        return ACTION_DISCARD_MSG;
      }
    else {

        info->nexthop = DymoEngineM$AMPacket$source(msg);
        if (DymoEngineM$DymoTable$update(info, DymoEngineM$DymoPacket$getType(msg)) == EINVAL) {

            if (DymoEngineM$cur_info_pos == 2) {
                ;
                DymoEngineM$fw_address = 0;
                return ACTION_DISCARD_MSG;
              }
            else 
#line 307
              {
                return ACTION_DISCARD;
              }
          }
        else {

            if (DymoEngineM$cur_info_pos == 2 && DymoEngineM$sendRREP) {
                DymoEngineM$buf_info = *info;
                { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 315
                  {
                    if (!DymoEngineM$busyIssue) {
                        DymoEngineM$busyIssue = 1;
                        DymoEngineM$issueRREP$postTask();
                      }
                  }
#line 320
                  __nesc_atomic_end(__nesc_atomic); }
                DymoEngineM$sendRREP = 0;
              }










            return ACTION_KEEP;
          }
      }
    }
}


static inline proc_action_t DymoEngineM$process_err_info(message_t *msg, rt_info_t *info)
#line 340
{
  info->nexthop = DymoEngineM$AMPacket$source(msg);
  if (DymoEngineM$DymoTable$update(info, DymoEngineM$DymoPacket$getType(msg)) == EINVAL) {
      return ACTION_DISCARD;
    }
  else 
#line 344
    {
      DymoEngineM$cur_info_pos++;
      return ACTION_KEEP;
    }
}

static inline  proc_action_t DymoEngineM$DymoPacket$infoProcessed(message_t *msg, rt_info_t *info)
#line 350
{
  if (DymoEngineM$DymoPacket$getType(msg) == DYMO_RERR) {
    return DymoEngineM$process_err_info(msg, info);
    }
  else {
#line 354
    return DymoEngineM$process_rm_info(msg, info);
    }
}

# 95 "../../../tos/lib/net/tymo/dymo/DymoPacket.nc"
inline static  proc_action_t DymoPacketM$DymoPacket$infoProcessed(message_t *arg_0x40c02b40, rt_info_t *arg_0x40c02cf0){
#line 95
  enum __nesc_unnamed4300 result;
#line 95

#line 95
  result = DymoEngineM$DymoPacket$infoProcessed(arg_0x40c02b40, arg_0x40c02cf0);
#line 95

#line 95
  return result;
#line 95
}
#line 95
# 309 "../../../tos/lib/net/tymo/dymo/DymoPacketM.nc"
static inline void DymoPacketM$block_get_info(nx_uint8_t *block, uint8_t pos, rt_info_t *info, bool update)
#line 309
{
  unsigned char *__nesc_temp56;
#line 310
  nx_uint8_t *semantics = block;

#line 311
  block = DymoPacketM$block_get_pointer(block, pos, (void *)0);

  if (__nesc_ntoh_uint8((unsigned char *)&*semantics) & BLOCK_HEAD) {
      info->address = __nesc_ntoh_uint8((unsigned char *)&*(semantics + 2)) * 256 + __nesc_ntoh_uint8((unsigned char *)&*block);
      block++;
    }
  else 
#line 316
    {
      info->address = __nesc_ntoh_uint16((unsigned char *)&* (nx_addr_t *)block);
      block += sizeof(addr_t );
    }

  if (__nesc_ntoh_uint8((unsigned char *)&*semantics) & BLOCK_SEQNUM) {
      info->seqnum = __nesc_ntoh_uint16((unsigned char *)&* (nx_seqnum_t *)block);
      block += sizeof(seqnum_t );
    }
  else 
#line 324
    {
      info->seqnum = 0;
    }

  if (__nesc_ntoh_uint8((unsigned char *)&*semantics) & BLOCK_HOPCNT) {
      info->has_hopcnt = 1;
      if (update) {
        (__nesc_temp56 = (unsigned char *)&*block, __nesc_hton_uint8(__nesc_temp56, __nesc_ntoh_uint8(__nesc_temp56) + 1));
        }
#line 332
      info->hopcnt = __nesc_ntoh_uint8((unsigned char *)&*block);
      block++;
    }
  else 
#line 334
    {
      info->has_hopcnt = 0;
    }
}

#line 288
static inline uint8_t DymoPacketM$block_num_addr(nx_uint8_t *block)
#line 288
{
  return __nesc_ntoh_uint8((unsigned char *)&*(block + 1));
}

# 155 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline  uint8_t CC2420ActiveMessageP$Packet$maxPayloadLength(void)
#line 155
{
  return 28;
}

# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  uint8_t DymoPacketM$Packet$maxPayloadLength(void){
#line 95
  unsigned char result;
#line 95

#line 95
  result = CC2420ActiveMessageP$Packet$maxPayloadLength();
#line 95

#line 95
  return result;
#line 95
}
#line 95
# 114 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static  void *CC2420TinyosNetworkP$SubSend$getPayload(message_t *arg_0x403bcae8, uint8_t arg_0x403bcc70){
#line 114
  void *result;
#line 114

#line 114
  result = CC2420CsmaP$Send$getPayload(arg_0x403bcae8, arg_0x403bcc70);
#line 114

#line 114
  return result;
#line 114
}
#line 114
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline  void *CC2420TinyosNetworkP$Send$getPayload(message_t *msg, uint8_t len)
#line 74
{
  return CC2420TinyosNetworkP$SubSend$getPayload(msg, len);
}

# 114 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static  void *UniqueSendP$SubSend$getPayload(message_t *arg_0x403bcae8, uint8_t arg_0x403bcc70){
#line 114
  void *result;
#line 114

#line 114
  result = CC2420TinyosNetworkP$Send$getPayload(arg_0x403bcae8, arg_0x403bcc70);
#line 114

#line 114
  return result;
#line 114
}
#line 114
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline  void *UniqueSendP$Send$getPayload(message_t *msg, uint8_t len)
#line 99
{
  return UniqueSendP$SubSend$getPayload(msg, len);
}

# 114 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static  void *CC2420ActiveMessageP$SubSend$getPayload(message_t *arg_0x403bcae8, uint8_t arg_0x403bcc70){
#line 114
  void *result;
#line 114

#line 114
  result = UniqueSendP$Send$getPayload(arg_0x403bcae8, arg_0x403bcc70);
#line 114

#line 114
  return result;
#line 114
}
#line 114
# 159 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline  void *CC2420ActiveMessageP$Packet$getPayload(message_t *msg, uint8_t len)
#line 159
{
  return CC2420ActiveMessageP$SubSend$getPayload(msg, len);
}

# 115 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  void *DymoPacketM$Packet$getPayload(message_t *arg_0x40350540, uint8_t arg_0x403506c8){
#line 115
  void *result;
#line 115

#line 115
  result = CC2420ActiveMessageP$Packet$getPayload(arg_0x40350540, arg_0x403506c8);
#line 115

#line 115
  return result;
#line 115
}
#line 115
# 222 "../../../tos/lib/net/tymo/dymo/DymoEngineM.nc"
static inline  proc_action_t DymoEngineM$DymoPacket$hopsProcessed(message_t *msg, uint8_t hop_limit, uint8_t hop_count)
#line 222
{
  DymoEngineM$cur_hopcnt = hop_count;
  if (hop_limit == 0) {
      DymoEngineM$fw_address = 0;
      ;
      return ACTION_DISCARD_MSG;
    }
  else 
#line 228
    {
      return ACTION_KEEP;
    }
}

# 85 "../../../tos/lib/net/tymo/dymo/DymoPacket.nc"
inline static  proc_action_t DymoPacketM$DymoPacket$hopsProcessed(message_t *arg_0x40c02190, uint8_t arg_0x40c02320, uint8_t arg_0x40c024b0){
#line 85
  enum __nesc_unnamed4300 result;
#line 85

#line 85
  result = DymoEngineM$DymoPacket$hopsProcessed(arg_0x40c02190, arg_0x40c02320, arg_0x40c024b0);
#line 85

#line 85
  return result;
#line 85
}
#line 85
# 131 "../../../tos/lib/net/tymo/dymo/DymoPacketM.nc"
static inline  void DymoPacketM$processMessage$runTask(void)
#line 131
{
  unsigned char *__nesc_temp54;
  unsigned char *__nesc_temp53;
  unsigned char *__nesc_temp52;
  unsigned char *__nesc_temp51;
#line 132
  nx_uint8_t *payload = DymoPacketM$Packet$getPayload(DymoPacketM$currentMsg, DymoPacketM$Packet$maxPayloadLength());
  nx_uint8_t *end = payload + __nesc_ntoh_uint16((unsigned char *)&* (nx_uint16_t *)(payload + 1));
  nx_uint8_t *fw_payload = (void *)0;
  nx_uint16_t *fw_size = (void *)0;
  nx_uint8_t *fw_block;
#line 136
  nx_uint8_t *info_p;
  rt_info_t info;
  uint8_t i;
#line 138
  uint8_t n;
#line 138
  uint8_t s;
  bool first_block = 1;
  proc_action_t action;

  payload += 3;
  (__nesc_temp51 = (unsigned char *)&* payload++, __nesc_hton_uint8(__nesc_temp51, __nesc_ntoh_uint8(__nesc_temp51) - 1));
  (__nesc_temp52 = (unsigned char *)&* payload++, __nesc_hton_uint8(__nesc_temp52, __nesc_ntoh_uint8(__nesc_temp52) + 1));
  action = DymoPacketM$DymoPacket$hopsProcessed(DymoPacketM$currentMsg, __nesc_ntoh_uint8((unsigned char *)&*(payload - 2)), __nesc_ntoh_uint8((unsigned char *)&*(payload - 1)));
  if (DymoPacketM$processedMsg) {
      if (action != ACTION_DISCARD_MSG) {
          fw_payload = DymoPacketM$Packet$getPayload(DymoPacketM$processedMsg, DymoPacketM$Packet$maxPayloadLength());
          memcpy(fw_payload, payload - 5, 5);
          fw_size = (nx_uint16_t *)(fw_payload + 1);
          __nesc_hton_uint16((unsigned char *)&*fw_size, 5);
          fw_payload += 5;
        }
      else 
#line 153
        {
          DymoPacketM$processedMsg = (void *)0;
        }
    }

  while (payload < end) {
      fw_block = (void *)0;
      n = DymoPacketM$block_num_addr(payload);

      for (i = 0; i < n; i++) {
          DymoPacketM$block_get_info(payload, i, &info, !first_block || i);
          action = DymoPacketM$DymoPacket$infoProcessed(DymoPacketM$currentMsg, &info);

          if (DymoPacketM$processedMsg) {
              switch (action) {
                  case ACTION_KEEP: 
                    if (!fw_block) {
                        s = DymoPacketM$block_header_size(payload);
                        memcpy(fw_payload, payload, s);
                        fw_block = fw_payload;
                        __nesc_hton_uint8((unsigned char *)&*(fw_block + 1), 0);
                        fw_payload += s;
                      }
                  info_p = DymoPacketM$block_get_pointer(payload, i, &s);
                  memcpy(fw_payload, info_p, s);
                  fw_payload += s;
                  (__nesc_temp53 = (unsigned char *)&*(fw_block + 1), __nesc_hton_uint8(__nesc_temp53, __nesc_ntoh_uint8(__nesc_temp53) + 1));
                  break;

                  case ACTION_DISCARD_MSG: 
                    DymoPacketM$processedMsg = (void *)0;
                  default: ;
                }
            }
        }

      payload += DymoPacketM$block_size(payload);
      first_block = 0;
      if (fw_block) {
        (__nesc_temp54 = (unsigned char *)&*fw_size, __nesc_hton_uint16(__nesc_temp54, __nesc_ntoh_uint16(__nesc_temp54) + DymoPacketM$block_size(fw_block)));
        }
    }
  DymoPacketM$DymoPacket$messageProcessed(DymoPacketM$currentMsg);
}

# 167 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline  uint8_t CC2420CsmaP$Send$maxPayloadLength(void)
#line 167
{
  return 28;
}

# 153 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline  void /*DymoTableC.Timers*/VirtualizeTimerC$1$Timer$stop(uint8_t num)
{
  /*DymoTableC.Timers*/VirtualizeTimerC$1$m_timers[num].isrunning = FALSE;
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void /*DymoTableC.DymoTableM*/DymoTableM$0$Timer$stop(uint8_t arg_0x40b45bb8){
#line 67
  /*DymoTableC.Timers*/VirtualizeTimerC$1$Timer$stop(arg_0x40b45bb8);
#line 67
}
#line 67
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t /*DymoTableC.Timers*/VirtualizeTimerC$1$updateFromTimer$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*DymoTableC.Timers*/VirtualizeTimerC$1$updateFromTimer);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 201 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
static inline  error_t ConfigStorageP$ConfigStorage$write(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len)
#line 201
{




  if (ConfigStorageP$s[id].state < ConfigStorageP$S_CLEAN) {
    return EOFF;
    }
#line 208
  return ConfigStorageP$BlockWrite$write(id, addr + sizeof ConfigStorageP$low[0], buf, len);
}

# 97 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
inline static  error_t DymoEngineM$ConfigStorage$write(storage_addr_t arg_0x40c1e100, void *arg_0x40c1e2a0, storage_len_t arg_0x40c1e430){
#line 97
  unsigned char result;
#line 97

#line 97
  result = ConfigStorageP$ConfigStorage$write(/*DymoServiceC.ConfigStorageC*/ConfigStorageC$0$CONFIG_ID, arg_0x40c1e100, arg_0x40c1e2a0, arg_0x40c1e430);
#line 97

#line 97
  return result;
#line 97
}
#line 97
# 34 "../../../tos/lib/net/tymo/dymo/DymoTable.nc"
inline static  void /*DymoTableC.DymoTableM*/DymoTableM$0$DymoTable$routeNeeded(addr_t arg_0x40b491a0){
#line 34
  DymoEngineM$DymoTable$routeNeeded(arg_0x40b491a0);
#line 34
}
#line 34


inline static  void /*DymoTableC.DymoTableM*/DymoTableM$0$DymoTable$brokenRouteNeeded(const rt_info_t *arg_0x40b49768){
#line 36
  DymoEngineM$DymoTable$brokenRouteNeeded(arg_0x40b49768);
#line 36
}
#line 36
# 29 "../../../tos/lib/net/tymo/dymo/DymoPacket.nc"
inline static  uint16_t DymoEngineM$DymoPacket$getSize(message_t *arg_0x40c05010){
#line 29
  unsigned short result;
#line 29

#line 29
  result = DymoPacketM$DymoPacket$getSize(arg_0x40c05010);
#line 29

#line 29
  return result;
#line 29
}
#line 29
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  error_t DymoEngineM$AMSend$send(am_addr_t arg_0x40358da8, message_t *arg_0x40357010, uint8_t arg_0x40357198){
#line 69
  unsigned char result;
#line 69

#line 69
  result = /*DymoNetworkC.DymoQueue.AMQueueEntryP*/AMQueueEntryP$1$AMSend$send(arg_0x40358da8, arg_0x40357010, arg_0x40357198);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 192 "../../../tos/lib/net/tymo/dymo/DymoEngineM.nc"
static inline  void DymoEngineM$forward$runTask(void)
#line 192
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 193
    {
      if (DymoEngineM$busySend) {
        DymoEngineM$forward$postTask();
        }
      else 
#line 196
        {
          DymoEngineM$busySend = TRUE;
          DymoEngineM$AMSend$send(DymoEngineM$fw_address, &DymoEngineM$fw_msg, DymoEngineM$DymoPacket$getSize(&DymoEngineM$fw_msg));
        }
    }
#line 200
    __nesc_atomic_end(__nesc_atomic); }
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  void /*DymoNetworkC.DymoQueue.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setDestination(message_t *arg_0x40348010, am_addr_t arg_0x403481a0){
#line 92
  CC2420ActiveMessageP$AMPacket$setDestination(arg_0x40348010, arg_0x403481a0);
#line 92
}
#line 92
#line 151
inline static  void /*DymoNetworkC.DymoQueue.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setType(message_t *arg_0x40347f00, am_id_t arg_0x403460b0){
#line 151
  CC2420ActiveMessageP$AMPacket$setType(arg_0x40347f00, arg_0x403460b0);
#line 151
}
#line 151
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static  error_t /*DymoNetworkC.DymoQueue.AMQueueEntryP*/AMQueueEntryP$1$Send$send(message_t *arg_0x403b4c68, uint8_t arg_0x403b4df0){
#line 64
  unsigned char result;
#line 64

#line 64
  result = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(1U, arg_0x403b4c68, arg_0x403b4df0);
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(message_t *arg_0x40351690, uint8_t arg_0x40351818){
#line 83
  CC2420ActiveMessageP$Packet$setPayloadLength(arg_0x40351690, arg_0x40351818);
#line 83
}
#line 83
# 287 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline   uint16_t CC2420ControlP$CC2420Config$getPanAddr(void)
#line 287
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 288
    {
      unsigned short __nesc_temp = 
#line 288
      CC2420ControlP$m_pan;

      {
#line 288
        __nesc_atomic_end(__nesc_atomic); 
#line 288
        return __nesc_temp;
      }
    }
#line 290
    __nesc_atomic_end(__nesc_atomic); }
}

# 70 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static   uint16_t CC2420ActiveMessageP$CC2420Config$getPanAddr(void){
#line 70
  unsigned short result;
#line 70

#line 70
  result = CC2420ControlP$CC2420Config$getPanAddr();
#line 70

#line 70
  return result;
#line 70
}
#line 70
# 248 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline   void CC2420ActiveMessageP$SendNotifier$default$aboutToSend(am_id_t amId, am_addr_t addr, message_t *msg)
#line 248
{
}

# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SendNotifier.nc"
inline static  void CC2420ActiveMessageP$SendNotifier$aboutToSend(am_id_t arg_0x403af4c0, am_addr_t arg_0x403a96b0, message_t *arg_0x403a9860){
#line 59
    CC2420ActiveMessageP$SendNotifier$default$aboutToSend(arg_0x403af4c0, arg_0x403a96b0, arg_0x403a9860);
#line 59
}
#line 59
# 251 "/usr/local/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_hton_leuint8(void *target, uint8_t value)
#line 251
{
  uint8_t *base = target;

#line 253
  base[0] = value;
  return value;
}

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

# 512 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP$send(message_t *p_msg, bool cca)
#line 512
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 513
    {
      if (CC2420TransmitP$m_state == CC2420TransmitP$S_CANCEL) {
          {
            unsigned char __nesc_temp = 
#line 515
            ECANCEL;

            {
#line 515
              __nesc_atomic_end(__nesc_atomic); 
#line 515
              return __nesc_temp;
            }
          }
        }
#line 518
      if (CC2420TransmitP$m_state != CC2420TransmitP$S_STARTED) {
          {
            unsigned char __nesc_temp = 
#line 519
            FAIL;

            {
#line 519
              __nesc_atomic_end(__nesc_atomic); 
#line 519
              return __nesc_temp;
            }
          }
        }
#line 522
      CC2420TransmitP$m_state = CC2420TransmitP$S_LOAD;
      CC2420TransmitP$m_cca = cca;
      CC2420TransmitP$m_msg = p_msg;
      CC2420TransmitP$totalCcaChecks = 0;
    }
#line 526
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

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
inline static   error_t CC2420CsmaP$CC2420Transmit$send(message_t *arg_0x4040b940, bool arg_0x4040bac8){
#line 51
  unsigned char result;
#line 51

#line 51
  result = CC2420TransmitP$Send$send(arg_0x4040b940, arg_0x4040bac8);
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 246 "/usr/local/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_leuint8(const void *source)
#line 246
{
  const uint8_t *base = source;

#line 248
  return base[0];
}

# 258 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline    void CC2420ActiveMessageP$RadioBackoff$default$requestCca(am_id_t id, 
message_t *msg)
#line 259
{
}

# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static   void CC2420ActiveMessageP$RadioBackoff$requestCca(am_id_t arg_0x403afa78, message_t *arg_0x40399278){
#line 95
    CC2420ActiveMessageP$RadioBackoff$default$requestCca(arg_0x403afa78, arg_0x40399278);
#line 95
}
#line 95
# 206 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline   void CC2420ActiveMessageP$SubBackoff$requestCca(message_t *msg)
#line 206
{

  CC2420ActiveMessageP$RadioBackoff$requestCca(__nesc_ntoh_leuint8((unsigned char *)&((cc2420_header_t *)((uint8_t *)msg + (size_t )& ((message_t *)0)->data - sizeof(cc2420_header_t )))->type), msg);
}

# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static   void CC2420CsmaP$RadioBackoff$requestCca(message_t *arg_0x40399278){
#line 95
  CC2420ActiveMessageP$SubBackoff$requestCca(arg_0x40399278);
#line 95
}
#line 95
# 111 "/opt/CVSTinyOS/tinyos-2.x/tos/system/StateImplP.nc"
static inline   void StateImplP$State$forceState(uint8_t id, uint8_t reqState)
#line 111
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 112
    StateImplP$state[id] = reqState;
#line 112
    __nesc_atomic_end(__nesc_atomic); }
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/State.nc"
inline static   void CC2420CsmaP$SplitControlState$forceState(uint8_t arg_0x4041bb08){
#line 51
  StateImplP$State$forceState(1U, arg_0x4041bb08);
#line 51
}
#line 51
#line 66
inline static   bool CC2420CsmaP$SplitControlState$isState(uint8_t arg_0x4041a6c0){
#line 66
  unsigned char result;
#line 66

#line 66
  result = StateImplP$State$isState(1U, arg_0x4041a6c0);
#line 66

#line 66
  return result;
#line 66
}
#line 66
# 103 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline   cc2420_metadata_t *CC2420PacketP$CC2420PacketBody$getMetadata(message_t *msg)
#line 103
{
  return (cc2420_metadata_t *)msg->metadata;
}

# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static   cc2420_metadata_t *CC2420CsmaP$CC2420PacketBody$getMetadata(message_t *arg_0x403b9820){
#line 47
  nx_struct cc2420_metadata_t *result;
#line 47

#line 47
  result = CC2420PacketP$CC2420PacketBody$getMetadata(arg_0x403b9820);
#line 47

#line 47
  return result;
#line 47
}
#line 47
#line 42
inline static   cc2420_header_t *CC2420CsmaP$CC2420PacketBody$getHeader(message_t *arg_0x403b92d0){
#line 42
  nx_struct cc2420_header_t *result;
#line 42

#line 42
  result = CC2420PacketP$CC2420PacketBody$getHeader(arg_0x403b92d0);
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 123 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline  error_t CC2420CsmaP$Send$send(message_t *p_msg, uint8_t len)
#line 123
{
  unsigned char *__nesc_temp43;
  unsigned char *__nesc_temp42;
#line 125
  cc2420_header_t *header = CC2420CsmaP$CC2420PacketBody$getHeader(p_msg);
  cc2420_metadata_t *metadata = CC2420CsmaP$CC2420PacketBody$getMetadata(p_msg);

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 128
    {
      if (!CC2420CsmaP$SplitControlState$isState(CC2420CsmaP$S_STARTED)) {
          {
            unsigned char __nesc_temp = 
#line 130
            FAIL;

            {
#line 130
              __nesc_atomic_end(__nesc_atomic); 
#line 130
              return __nesc_temp;
            }
          }
        }
#line 133
      CC2420CsmaP$SplitControlState$forceState(CC2420CsmaP$S_TRANSMITTING);
      CC2420CsmaP$m_msg = p_msg;
    }
#line 135
    __nesc_atomic_end(__nesc_atomic); }

  __nesc_hton_leuint8((unsigned char *)&header->length, len + CC2420_SIZE);
  (__nesc_temp42 = (unsigned char *)&header->fcf, __nesc_hton_leuint16(__nesc_temp42, __nesc_ntoh_leuint16(__nesc_temp42) & (1 << IEEE154_FCF_ACK_REQ)));
  (__nesc_temp43 = (unsigned char *)&header->fcf, __nesc_hton_leuint16(__nesc_temp43, __nesc_ntoh_leuint16(__nesc_temp43) | ((((IEEE154_TYPE_DATA << IEEE154_FCF_FRAME_TYPE) | (
  1 << IEEE154_FCF_INTRAPAN)) | (
  IEEE154_ADDR_SHORT << IEEE154_FCF_DEST_ADDR_MODE)) | (
  IEEE154_ADDR_SHORT << IEEE154_FCF_SRC_ADDR_MODE))));

  __nesc_hton_int8((unsigned char *)&metadata->ack, FALSE);
  __nesc_hton_uint8((unsigned char *)&metadata->rssi, 0);
  __nesc_hton_uint8((unsigned char *)&metadata->lqi, 0);
  __nesc_hton_int8((unsigned char *)&metadata->timesync, FALSE);
  __nesc_hton_uint32((unsigned char *)&metadata->timestamp, CC2420_INVALID_TIMESTAMP);

  CC2420CsmaP$ccaOn = TRUE;
  CC2420CsmaP$RadioBackoff$requestCca(CC2420CsmaP$m_msg);

  CC2420CsmaP$CC2420Transmit$send(CC2420CsmaP$m_msg, CC2420CsmaP$ccaOn);
  return SUCCESS;
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static  error_t CC2420TinyosNetworkP$SubSend$send(message_t *arg_0x403b4c68, uint8_t arg_0x403b4df0){
#line 64
  unsigned char result;
#line 64

#line 64
  result = CC2420CsmaP$Send$send(arg_0x403b4c68, arg_0x403b4df0);
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static   cc2420_header_t *CC2420TinyosNetworkP$CC2420PacketBody$getHeader(message_t *arg_0x403b92d0){
#line 42
  nx_struct cc2420_header_t *result;
#line 42

#line 42
  result = CC2420PacketP$CC2420PacketBody$getHeader(arg_0x403b92d0);
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline  error_t CC2420TinyosNetworkP$Send$send(message_t *msg, uint8_t len)
#line 61
{
  __nesc_hton_leuint8((unsigned char *)&CC2420TinyosNetworkP$CC2420PacketBody$getHeader(msg)->network, 0x3f);
  return CC2420TinyosNetworkP$SubSend$send(msg, len);
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static  error_t UniqueSendP$SubSend$send(message_t *arg_0x403b4c68, uint8_t arg_0x403b4df0){
#line 64
  unsigned char result;
#line 64

#line 64
  result = CC2420TinyosNetworkP$Send$send(arg_0x403b4c68, arg_0x403b4df0);
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static   cc2420_header_t *UniqueSendP$CC2420PacketBody$getHeader(message_t *arg_0x403b92d0){
#line 42
  nx_struct cc2420_header_t *result;
#line 42

#line 42
  result = CC2420PacketP$CC2420PacketBody$getHeader(arg_0x403b92d0);
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/State.nc"
inline static   error_t UniqueSendP$State$requestState(uint8_t arg_0x4041b580){
#line 45
  unsigned char result;
#line 45

#line 45
  result = StateImplP$State$requestState(2U, arg_0x4041b580);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 75 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/unique/UniqueSendP.nc"
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

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static  error_t CC2420ActiveMessageP$SubSend$send(message_t *arg_0x403b4c68, uint8_t arg_0x403b4df0){
#line 64
  unsigned char result;
#line 64

#line 64
  result = UniqueSendP$Send$send(arg_0x403b4c68, arg_0x403b4df0);
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 87 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
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
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/State.nc"
inline static   error_t CC2420SpiP$WorkingState$requestState(uint8_t arg_0x4041b580){
#line 45
  unsigned char result;
#line 45

#line 45
  result = StateImplP$State$requestState(0U, arg_0x4041b580);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   bool Atm128SpiP$ResourceArbiter$isOwner(uint8_t arg_0x407b8410){
#line 118
  unsigned char result;
#line 118

#line 118
  result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$isOwner(arg_0x407b8410);
#line 118

#line 118
  return result;
#line 118
}
#line 118
# 332 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline   uint8_t Atm128SpiP$Resource$isOwner(uint8_t id)
#line 332
{
  return Atm128SpiP$ResourceArbiter$isOwner(id);
}

# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   bool HplCC2420SpiP$SubResource$isOwner(void){
#line 118
  unsigned char result;
#line 118

#line 118
  result = Atm128SpiP$Resource$isOwner(0U);
#line 118

#line 118
  return result;
#line 118
}
#line 118
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline   bool HplCC2420SpiP$Resource$isOwner(void)
{
  return HplCC2420SpiP$SubResource$isOwner();
}

# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   bool CC2420SpiP$SpiResource$isOwner(void){
#line 118
  unsigned char result;
#line 118

#line 118
  result = HplCC2420SpiP$Resource$isOwner();
#line 118

#line 118
  return result;
#line 118
}
#line 118
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$clr(void)
#line 47
{
#line 47
  * (volatile uint8_t *)56U &= ~(1 << 0);
}

# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplCC2420SpiP$SS$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$clr();
#line 30
}
#line 30
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)55U |= 1 << 0;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplCC2420SpiP$SS$makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$makeOutput();
#line 35
}
#line 35
# 170 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline    void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$configure(uint8_t id)
#line 170
{
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$configure(uint8_t arg_0x4084b238){
#line 49
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$configure(arg_0x4084b238);
#line 49
}
#line 49
# 168 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline    void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$immediateRequested(uint8_t id)
#line 168
{
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$immediateRequested(uint8_t arg_0x4084c738){
#line 51
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$immediateRequested(arg_0x4084c738);
#line 51
}
#line 51
# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$immediateRequest(uint8_t id)
#line 84
{
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$immediateRequested(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId);
  /* atomic removed: atomic calls only */
#line 86
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_IDLE) {
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_BUSY;
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId = id;
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$configure(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId);
        {
          unsigned char __nesc_temp = 
#line 91
          SUCCESS;

#line 91
          return __nesc_temp;
        }
      }
#line 93
    {
      unsigned char __nesc_temp = 
#line 93
      FAIL;

#line 93
      return __nesc_temp;
    }
  }
}

# 87 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t Atm128SpiP$ResourceArbiter$immediateRequest(uint8_t arg_0x407b8410){
#line 87
  unsigned char result;
#line 87

#line 87
  result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$immediateRequest(arg_0x407b8410);
#line 87

#line 87
  return result;
#line 87
}
#line 87
# 305 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline   error_t Atm128SpiP$Resource$immediateRequest(uint8_t id)
#line 305
{
  error_t result = Atm128SpiP$ResourceArbiter$immediateRequest(id);

#line 307
  if (result == SUCCESS) {
      Atm128SpiP$startSpi();
    }
  return result;
}

# 87 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t HplCC2420SpiP$SubResource$immediateRequest(void){
#line 87
  unsigned char result;
#line 87

#line 87
  result = Atm128SpiP$Resource$immediateRequest(0U);
#line 87

#line 87
  return result;
#line 87
}
#line 87
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline   error_t HplCC2420SpiP$Resource$immediateRequest(void)
{
  error_t error = HplCC2420SpiP$SubResource$immediateRequest();

#line 59
  if (error == SUCCESS) 
    {
      HplCC2420SpiP$SS$makeOutput();
      HplCC2420SpiP$SS$clr();
    }
  return error;
}

# 87 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t CC2420SpiP$SpiResource$immediateRequest(void){
#line 87
  unsigned char result;
#line 87

#line 87
  result = HplCC2420SpiP$Resource$immediateRequest();
#line 87

#line 87
  return result;
#line 87
}
#line 87
# 109 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/McuSleepC.nc"
static inline   void McuSleepC$McuPowerState$update(void)
#line 109
{
}

# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuPowerState.nc"
inline static   void HplAtm128SpiP$Mcu$update(void){
#line 44
  McuSleepC$McuPowerState$update();
#line 44
}
#line 44
# 156 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline   void HplAtm128SpiP$SPI$setMasterBit(bool isMaster)
#line 156
{
  if (isMaster) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 4;
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 4);
    }
}

# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP$9$IO$makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)55U |= 1 << 1;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplAtm128SpiP$SCK$makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP$9$IO$makeOutput();
#line 35
}
#line 35
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP$11$IO$makeInput(void)
#line 50
{
#line 50
  * (volatile uint8_t *)55U &= ~(1 << 3);
}

# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplAtm128SpiP$MISO$makeInput(void){
#line 33
  /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP$11$IO$makeInput();
#line 33
}
#line 33
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP$10$IO$makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)55U |= 1 << 2;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplAtm128SpiP$MOSI$makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP$10$IO$makeOutput();
#line 35
}
#line 35
# 79 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline   void HplAtm128SpiP$SPI$initMaster(void)
#line 79
{
  HplAtm128SpiP$MOSI$makeOutput();
  HplAtm128SpiP$MISO$makeInput();
  HplAtm128SpiP$SCK$makeOutput();
  HplAtm128SpiP$SPI$setMasterBit(TRUE);
}

# 66 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static   void Atm128SpiP$Spi$initMaster(void){
#line 66
  HplAtm128SpiP$SPI$initMaster();
#line 66
}
#line 66
# 213 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline   void HplAtm128SpiP$SPI$setMasterDoubleSpeed(bool on)
#line 213
{
  if (on) {
      * (volatile uint8_t *)(0x0E + 0x20) |= 1 << 0;
    }
  else {
      * (volatile uint8_t *)(0x0E + 0x20) &= ~(1 << 0);
    }
}

# 125 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static   void Atm128SpiP$Spi$setMasterDoubleSpeed(bool arg_0x407c5698){
#line 125
  HplAtm128SpiP$SPI$setMasterDoubleSpeed(arg_0x407c5698);
#line 125
}
#line 125
# 169 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline   void HplAtm128SpiP$SPI$setClockPolarity(bool highWhenIdle)
#line 169
{
  if (highWhenIdle) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 3;
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 3);
    }
}

# 108 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static   void Atm128SpiP$Spi$setClockPolarity(bool arg_0x407c8570){
#line 108
  HplAtm128SpiP$SPI$setClockPolarity(arg_0x407c8570);
#line 108
}
#line 108
# 183 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline   void HplAtm128SpiP$SPI$setClockPhase(bool sampleOnTrailing)
#line 183
{
  if (sampleOnTrailing) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 2;
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 2);
    }
}

# 111 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static   void Atm128SpiP$Spi$setClockPhase(bool arg_0x407c8d50){
#line 111
  HplAtm128SpiP$SPI$setClockPhase(arg_0x407c8d50);
#line 111
}
#line 111
# 200 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline   void HplAtm128SpiP$SPI$setClock(uint8_t v)
#line 200
{
  v &= 1 | 0;
  * (volatile uint8_t *)(0x0D + 0x20) = (* (volatile uint8_t *)(0x0D + 0x20) & ~(1 | 0)) | v;
}

# 114 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static   void Atm128SpiP$Spi$setClock(uint8_t arg_0x407c7540){
#line 114
  HplAtm128SpiP$SPI$setClock(arg_0x407c7540);
#line 114
}
#line 114
# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/system/StateImplP.nc"
static inline   void StateImplP$State$toIdle(uint8_t id)
#line 118
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 119
    StateImplP$state[id] = StateImplP$S_IDLE;
#line 119
    __nesc_atomic_end(__nesc_atomic); }
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/State.nc"
inline static   void CC2420SpiP$WorkingState$toIdle(void){
#line 56
  StateImplP$State$toIdle(0U);
#line 56
}
#line 56
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
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
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline   bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(resource_client_id_t id)
#line 54
{
  return /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ[id] != /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY || /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qTail == id;
}

#line 72
static inline   error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(resource_client_id_t id)
#line 72
{
  /* atomic removed: atomic calls only */
#line 73
  {
    if (!/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(id)) {
        if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY) {
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead = id;
          }
        else {
#line 78
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ[/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qTail] = id;
          }
#line 79
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qTail = id;
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

# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$enqueue(resource_client_id_t arg_0x4083b210){
#line 69
  unsigned char result;
#line 69

#line 69
  result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(arg_0x4083b210);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
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
# 166 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline    void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$requested(uint8_t id)
#line 166
{
}

# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$requested(uint8_t arg_0x4084c738){
#line 43
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$requested(arg_0x4084c738);
#line 43
}
#line 43
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$request(uint8_t id)
#line 71
{
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$requested(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId);
  /* atomic removed: atomic calls only */
#line 73
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_IDLE) {
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_GRANTING;
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$reqResId = id;
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$postTask();
        {
          unsigned char __nesc_temp = 
#line 78
          SUCCESS;

#line 78
          return __nesc_temp;
        }
      }
#line 80
    {
      unsigned char __nesc_temp = 
#line 80
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$enqueue(id);

#line 80
      return __nesc_temp;
    }
  }
}

# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t Atm128SpiP$ResourceArbiter$request(uint8_t arg_0x407b8410){
#line 78
  unsigned char result;
#line 78

#line 78
  result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$request(arg_0x407b8410);
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
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
# 313 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline   error_t Atm128SpiP$Resource$request(uint8_t id)
#line 313
{
  /* atomic removed: atomic calls only */
#line 314
  {
    if (!Atm128SpiP$ArbiterInfo$inUse()) {
        Atm128SpiP$startSpi();
      }
  }
  return Atm128SpiP$ResourceArbiter$request(id);
}

# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t HplCC2420SpiP$SubResource$request(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = Atm128SpiP$Resource$request(0U);
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline   error_t HplCC2420SpiP$Resource$request(void)
{
  return HplCC2420SpiP$SubResource$request();
}

# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t CC2420SpiP$SpiResource$request(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = HplCC2420SpiP$Resource$request();
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static   cc2420_status_t CC2420TransmitP$TXCTRL$write(uint16_t arg_0x404615d8){
#line 55
  unsigned char result;
#line 55

#line 55
  result = CC2420SpiP$Reg$write(CC2420_TXCTRL, arg_0x404615d8);
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline   void HplAtm128SpiP$SPI$write(uint8_t d)
#line 99
{
#line 99
  * (volatile uint8_t *)(0x0F + 0x20) = d;
}

# 86 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static   void Atm128SpiP$Spi$write(uint8_t arg_0x407cca80){
#line 86
  HplAtm128SpiP$SPI$write(arg_0x407cca80);
#line 86
}
#line 86
# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SpiPacket.nc"
inline static   error_t CC2420SpiP$SpiPacket$send(uint8_t *arg_0x40771598, uint8_t *arg_0x40771740, uint16_t arg_0x407718d0){
#line 59
  unsigned char result;
#line 59

#line 59
  result = Atm128SpiP$SpiPacket$send(arg_0x40771598, arg_0x40771740, arg_0x407718d0);
#line 59

#line 59
  return result;
#line 59
}
#line 59
# 34 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SpiByte.nc"
inline static   uint8_t CC2420SpiP$SpiByte$write(uint8_t arg_0x407739d8){
#line 34
  unsigned char result;
#line 34

#line 34
  result = Atm128SpiP$SpiByte$write(arg_0x407739d8);
#line 34

#line 34
  return result;
#line 34
}
#line 34
# 126 "/opt/CVSTinyOS/tinyos-2.x/tos/system/StateImplP.nc"
static inline   bool StateImplP$State$isIdle(uint8_t id)
#line 126
{
  return StateImplP$State$isState(id, StateImplP$S_IDLE);
}

# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/State.nc"
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
# 214 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline   cc2420_status_t CC2420SpiP$Fifo$write(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 215
{

  uint8_t status = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 219
    {
      if (CC2420SpiP$WorkingState$isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 221
            status;

            {
#line 221
              __nesc_atomic_end(__nesc_atomic); 
#line 221
              return __nesc_temp;
            }
          }
        }
    }
#line 225
    __nesc_atomic_end(__nesc_atomic); }
#line 225
  CC2420SpiP$m_addr = addr;

  status = CC2420SpiP$SpiByte$write(CC2420SpiP$m_addr);
  CC2420SpiP$SpiPacket$send(data, (void *)0, len);

  return status;
}

# 82 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static   cc2420_status_t CC2420TransmitP$TXFIFO$write(uint8_t *arg_0x407545d8, uint8_t arg_0x40754760){
#line 82
  unsigned char result;
#line 82

#line 82
  result = CC2420SpiP$Fifo$write(CC2420_TXFIFO, arg_0x407545d8, arg_0x40754760);
#line 82

#line 82
  return result;
#line 82
}
#line 82
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t Atm128SpiP$zeroTask$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(Atm128SpiP$zeroTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 45 "../../../tos/lib/net/tymo/dymo/DymoPacket.nc"
inline static  void DymoEngineM$DymoPacket$createRM(message_t *arg_0x40c054f0, dymo_msg_t arg_0x40c05688, const rt_info_t *arg_0x40c05868, const rt_info_t *arg_0x40c05a38){
#line 45
  DymoPacketM$DymoPacket$createRM(arg_0x40c054f0, arg_0x40c05688, arg_0x40c05868, arg_0x40c05a38);
#line 45
}
#line 45
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t DymoEngineM$issueRERR$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(DymoEngineM$issueRERR);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 179 "../../../tos/lib/net/tymo/dymo/DymoEngineM.nc"
static inline  void DymoEngineM$issueRERR$runTask(void)
#line 179
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 180
    {
      if (DymoEngineM$busySend) {
        DymoEngineM$issueRERR$postTask();
        }
      else 
#line 183
        {
          DymoEngineM$busySend = TRUE;
          DymoEngineM$DymoPacket$createRM(&DymoEngineM$buf_packet, DYMO_RERR, (void *)0, &DymoEngineM$buf_info);
          DymoEngineM$AMSend$send(AM_BROADCAST_ADDR, &DymoEngineM$buf_packet, DymoEngineM$DymoPacket$getSize(&DymoEngineM$buf_packet));
        }
    }
#line 188
    __nesc_atomic_end(__nesc_atomic); }
}

# 339 "../../../tos/lib/net/tymo/dymo/DymoPacketM.nc"
static inline void DymoPacketM$move_data(nx_uint8_t *data, uint8_t amount, uint8_t offset)
#line 339
{
  nx_uint8_t *newdata = data + amount + offset;

#line 341
  data += amount;
  for (; amount > 0; amount--) 
    __nesc_hton_uint8((unsigned char *)&* --newdata, __nesc_ntoh_uint8((unsigned char *)&* --data));
}

#line 89
static inline  error_t DymoPacketM$DymoPacket$addInfo(message_t *msg, const rt_info_t *info)
#line 89
{
  unsigned char *__nesc_temp50;
  unsigned char *__nesc_temp49;
#line 90
  nx_uint8_t *payload = DymoPacketM$Packet$getPayload(msg, DymoPacketM$Packet$maxPayloadLength());
  nx_uint16_t *size_p = (nx_uint16_t *)(payload + 1);
  nx_uint8_t *block = payload + 5;
  uint8_t bsize;

  while (block < payload + __nesc_ntoh_uint16((unsigned char *)&*size_p)) {


      if ((
#line 97
      block > payload + 5 && DymoPacketM$block_can_contain(block, info))
       || (block == payload + 5 && DymoPacketM$block_num_addr(block) > 1)) {

          uint8_t isize = DymoPacketM$block_info_size(block);

#line 101
          if (__nesc_ntoh_uint16((unsigned char *)&*size_p) + isize > DymoPacketM$Packet$maxPayloadLength()) {
              return ESIZE;
            }
          else 
#line 103
            {
              bsize = DymoPacketM$block_size(block);
              DymoPacketM$move_data(block + bsize, payload + __nesc_ntoh_uint16((unsigned char *)&*size_p) - (block + bsize), isize);
              DymoPacketM$block_add_info(block, info);
              (__nesc_temp49 = (unsigned char *)&*size_p, __nesc_hton_uint16(__nesc_temp49, __nesc_ntoh_uint16(__nesc_temp49) + isize));
              return SUCCESS;
            }
        }
      else {
          block += DymoPacketM$block_size(block);
        }
    }

  DymoPacketM$create_block(block, info);
  bsize = DymoPacketM$block_size(block);
  if (__nesc_ntoh_uint16((unsigned char *)&*size_p) + bsize > DymoPacketM$Packet$maxPayloadLength()) {
      return ESIZE;
    }
  else 
#line 120
    {
      (__nesc_temp50 = (unsigned char *)&*size_p, __nesc_hton_uint16(__nesc_temp50, __nesc_ntoh_uint16(__nesc_temp50) + bsize));
      return SUCCESS;
    }
}

# 58 "../../../tos/lib/net/tymo/dymo/DymoPacket.nc"
inline static  error_t DymoEngineM$DymoPacket$addInfo(message_t *arg_0x40c030d0, const rt_info_t *arg_0x40c032a0){
#line 58
  unsigned char result;
#line 58

#line 58
  result = DymoPacketM$DymoPacket$addInfo(arg_0x40c030d0, arg_0x40c032a0);
#line 58

#line 58
  return result;
#line 58
}
#line 58
# 163 "../../../tos/lib/net/tymo/dymo/DymoEngineM.nc"
static inline  void DymoEngineM$issueRREP$runTask(void)
#line 163
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 164
    {
      if (DymoEngineM$busySend) {
        DymoEngineM$issueRREP$postTask();
        }
      else 
#line 167
        {
          DymoEngineM$busySend = TRUE;
          DymoEngineM$DymoPacket$createRM(&DymoEngineM$buf_packet, DYMO_RREP, &DymoEngineM$me, &DymoEngineM$buf_info);
          if (DymoEngineM$buf_target.address) {
            DymoEngineM$DymoPacket$addInfo(&DymoEngineM$buf_packet, &DymoEngineM$buf_target);
            }
#line 172
          DymoEngineM$AMSend$send(DymoEngineM$buf_info.nexthop, &DymoEngineM$buf_packet, DymoEngineM$DymoPacket$getSize(&DymoEngineM$buf_packet));
          DymoEngineM$buf_target.address = 0;
        }
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t DymoEngineM$issueRREQ$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(DymoEngineM$issueRREQ);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 149 "../../../tos/lib/net/tymo/dymo/DymoEngineM.nc"
static inline  void DymoEngineM$issueRREQ$runTask(void)
#line 149
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 150
    {
      if (DymoEngineM$busySend) {
        DymoEngineM$issueRREQ$postTask();
        }
      else 
#line 153
        {
          DymoEngineM$busySend = TRUE;
          DymoEngineM$incr_seqnum();
          DymoEngineM$DymoPacket$createRM(&DymoEngineM$buf_packet, DYMO_RREQ, &DymoEngineM$me, &DymoEngineM$buf_info);
          DymoEngineM$AMSend$send(AM_BROADCAST_ADDR, &DymoEngineM$buf_packet, DymoEngineM$DymoPacket$getSize(&DymoEngineM$buf_packet));
        }
    }
#line 159
    __nesc_atomic_end(__nesc_atomic); }
}

# 173 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShotAt(uint8_t num, uint32_t t0, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(num, t0, dt, TRUE);
}

# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void /*DymoTableC.Timers*/VirtualizeTimerC$1$TimerFrom$startOneShotAt(uint32_t arg_0x40360738, uint32_t arg_0x403608c8){
#line 118
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShotAt(1U, arg_0x40360738, arg_0x403608c8);
#line 118
}
#line 118
# 153 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(uint8_t num)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num].isrunning = FALSE;
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void /*DymoTableC.Timers*/VirtualizeTimerC$1$TimerFrom$stop(void){
#line 67
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(1U);
#line 67
}
#line 67
# 222 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline   uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow(void)
#line 222
{
  return /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get();
}

# 98 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow(void){
#line 98
  unsigned long result;
#line 98

#line 98
  result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow();
#line 98

#line 98
  return result;
#line 98
}
#line 98
# 85 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline  uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void)
{
#line 86
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow();
}

# 125 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
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
# 178 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline  uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$getNow(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow();
}

# 125 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  uint32_t /*DymoTableC.Timers*/VirtualizeTimerC$1$TimerFrom$getNow(void){
#line 125
  unsigned long result;
#line 125

#line 125
  result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$getNow(1U);
#line 125

#line 125
  return result;
#line 125
}
#line 125
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline  void /*DymoTableC.Timers*/VirtualizeTimerC$1$updateFromTimer$runTask(void)
{




  uint32_t now = /*DymoTableC.Timers*/VirtualizeTimerC$1$TimerFrom$getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint8_t num;

  /*DymoTableC.Timers*/VirtualizeTimerC$1$TimerFrom$stop();

  for (num = 0; num < /*DymoTableC.Timers*/VirtualizeTimerC$1$NUM_TIMERS; num++) 
    {
      /*DymoTableC.Timers*/VirtualizeTimerC$1$Timer_t *timer = &/*DymoTableC.Timers*/VirtualizeTimerC$1$m_timers[num];

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
        /*DymoTableC.Timers*/VirtualizeTimerC$1$fireTimers(now);
        }
      else {
#line 124
        /*DymoTableC.Timers*/VirtualizeTimerC$1$TimerFrom$startOneShotAt(now, min_remaining);
        }
    }
}

#line 148
static inline  void /*DymoTableC.Timers*/VirtualizeTimerC$1$Timer$startOneShot(uint8_t num, uint32_t dt)
{
  /*DymoTableC.Timers*/VirtualizeTimerC$1$startTimer(num, /*DymoTableC.Timers*/VirtualizeTimerC$1$TimerFrom$getNow(), dt, TRUE);
}

# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void /*DymoTableC.DymoTableM*/DymoTableM$0$Timer$startOneShot(uint8_t arg_0x40b45bb8, uint32_t arg_0x4035a9f0){
#line 62
  /*DymoTableC.Timers*/VirtualizeTimerC$1$Timer$startOneShot(arg_0x40b45bb8, arg_0x4035a9f0);
#line 62
}
#line 62
# 299 "../../../tos/lib/net/tymo/dymo/DymoTableM.nc"
static inline void /*DymoTableC.DymoTableM*/DymoTableM$0$set_timer(uint8_t entry_id, rt_timer_t timer_id)
#line 299
{
  /*DymoTableC.DymoTableM*/DymoTableM$0$Timer$startOneShot(entry_id * NB_ROUTE_TIMERS + timer_id, timer_values[timer_id]);
}

#line 217
static inline  void /*DymoTableC.DymoTableM*/DymoTableM$0$Timer$fired(uint8_t timer_id)
#line 217
{
  uint8_t e = timer_id / NB_ROUTE_TIMERS;

#line 219
  switch (timer_id % NB_ROUTE_TIMERS) {
      case ROUTE_AGE_MIN: 
        /*DymoTableC.DymoTableM*/DymoTableM$0$table[e].flags &= ~FLAG_NEW;
      break;
      case ROUTE_AGE_MAX: 
        ;
      /*DymoTableC.DymoTableM*/DymoTableM$0$delete_route(e, REASON_OLD);
      break;
      case ROUTE_NEW: 
        /*DymoTableC.DymoTableM*/DymoTableM$0$table[e].flags &= ~FLAG_NEW;
      /*DymoTableC.DymoTableM*/DymoTableM$0$set_timer(e, ROUTE_DELETE);
      break;
      case ROUTE_USED: 
        /*DymoTableC.DymoTableM*/DymoTableM$0$table[e].flags &= ~FLAG_USED;
      /*DymoTableC.DymoTableM*/DymoTableM$0$set_timer(e, ROUTE_DELETE);
      break;
      case ROUTE_DELETE: 
        ;
      /*DymoTableC.DymoTableM*/DymoTableM$0$delete_route(e, REASON_OLD);
      break;
    }
}

# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void /*DymoTableC.Timers*/VirtualizeTimerC$1$Timer$fired(uint8_t arg_0x40a15090){
#line 72
  /*DymoTableC.DymoTableM*/DymoTableM$0$Timer$fired(arg_0x40a15090);
#line 72
}
#line 72
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  void /*DymoNetworkC.MHQueue.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(message_t *arg_0x403561c0, error_t arg_0x40356348){
#line 99
  /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$SubSend$sendDone(arg_0x403561c0, arg_0x40356348);
#line 99
}
#line 99
# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline  void /*DymoNetworkC.MHQueue.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(message_t *m, error_t err)
#line 57
{
  /*DymoNetworkC.MHQueue.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(m, err);
}

# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  void /*DymoNetworkC.DymoQueue.AMQueueEntryP*/AMQueueEntryP$1$AMSend$sendDone(message_t *arg_0x403561c0, error_t arg_0x40356348){
#line 99
  DymoEngineM$AMSend$sendDone(arg_0x403561c0, arg_0x40356348);
#line 99
}
#line 99
# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline  void /*DymoNetworkC.DymoQueue.AMQueueEntryP*/AMQueueEntryP$1$Send$sendDone(message_t *m, error_t err)
#line 57
{
  /*DymoNetworkC.DymoQueue.AMQueueEntryP*/AMQueueEntryP$1$AMSend$sendDone(m, err);
}

# 207 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline   void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(uint8_t id, message_t *msg, error_t err)
#line 207
{
}

# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(uint8_t arg_0x40b16068, message_t *arg_0x403b3e18, error_t arg_0x403bc010){
#line 89
  switch (arg_0x40b16068) {
#line 89
    case 0U:
#line 89
      /*DymoNetworkC.MHQueue.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(arg_0x403b3e18, arg_0x403bc010);
#line 89
      break;
#line 89
    case 1U:
#line 89
      /*DymoNetworkC.DymoQueue.AMQueueEntryP*/AMQueueEntryP$1$Send$sendDone(arg_0x403b3e18, arg_0x403bc010);
#line 89
      break;
#line 89
    default:
#line 89
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(arg_0x40b16068, arg_0x403b3e18, arg_0x403bc010);
#line 89
      break;
#line 89
    }
#line 89
}
#line 89
# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
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

# 257 "/usr/local/lib/ncc/nesc_nx.h"
static __inline int8_t __nesc_ntoh_int8(const void *source)
#line 257
{
#line 257
  return __nesc_ntoh_uint8(source);
}

# 75 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline   bool CC2420PacketP$Acks$wasAcked(message_t *p_msg)
#line 75
{
  return __nesc_ntoh_int8((unsigned char *)&CC2420PacketP$CC2420PacketBody$getMetadata(p_msg)->ack);
}

# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc"
inline static   bool /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Acks$wasAcked(message_t *arg_0x403886c0){
#line 74
  unsigned char result;
#line 74

#line 74
  result = CC2420PacketP$Acks$wasAcked(arg_0x403886c0);
#line 74

#line 74
  return result;
#line 74
}
#line 74
# 239 "../../../tos/lib/net/tymo/ForwardingEngineM.nc"
static inline   void /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$MHControl$default$sendFailed(message_t *msg, uint8_t why)
#line 239
{
}

# 5 "../../../tos/lib/net/tymo/mh/MHControl.nc"
inline static  void /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$MHControl$sendFailed(message_t *arg_0x4037ea10, uint8_t arg_0x4037eb98){
#line 5
  /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$MHControl$default$sendFailed(arg_0x4037ea10, arg_0x4037eb98);
#line 5
}
#line 5
# 68 "../../../tos/lib/net/tymo/mh/MHEngineM.nc"
static inline  void MHEngineM$RoutingTable$evicted(const rt_info_t *rt_info, reason_t r)
#line 68
{
}

# 35 "../../../tos/lib/net/tymo/RoutingTable.nc"
inline static  void /*DymoTableC.DymoTableM*/DymoTableM$0$RoutingTable$evicted(const rt_info_t *arg_0x40b4c4e8, reason_t arg_0x40b4c678){
#line 35
  DymoEngineM$RoutingTable$evicted(arg_0x40b4c4e8, arg_0x40b4c678);
#line 35
  MHEngineM$RoutingTable$evicted(arg_0x40b4c4e8, arg_0x40b4c678);
#line 35
}
#line 35
# 242 "../../../tos/lib/net/tymo/dymo/DymoTableM.nc"
static inline  void /*DymoTableC.DymoTableM*/DymoTableM$0$LinkMonitor$brokenLink(addr_t neighbor)
#line 242
{
  int8_t i = /*DymoTableC.DymoTableM*/DymoTableM$0$get_route(neighbor);

#line 244
  if (i != -1) {
      /*DymoTableC.DymoTableM*/DymoTableM$0$table[i].flags |= FLAG_BROKEN;
      /*DymoTableC.DymoTableM*/DymoTableM$0$RoutingTable$evicted(& /*DymoTableC.DymoTableM*/DymoTableM$0$table[i].info, REASON_UNREACHABLE);
      if (/*DymoTableC.DymoTableM*/DymoTableM$0$table[i].flags & (FLAG_NEW | FLAG_USED)) {
          /*DymoTableC.DymoTableM*/DymoTableM$0$cancel_timer(i, ROUTE_NEW);
          /*DymoTableC.DymoTableM*/DymoTableM$0$cancel_timer(i, ROUTE_USED);
          /*DymoTableC.DymoTableM*/DymoTableM$0$set_timer(i, ROUTE_DELETE);
        }
    }
}

# 16 "../../../tos/lib/net/tymo/LinkMonitor.nc"
inline static  void /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$LinkMonitor$brokenLink(am_addr_t arg_0x40b30598){
#line 16
  /*DymoTableC.DymoTableM*/DymoTableM$0$LinkMonitor$brokenLink(arg_0x40b30598);
#line 16
}
#line 16
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static inline   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$toggle(void)
#line 48
{
#line 48
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 48
    * (volatile uint8_t *)59U ^= 1 << 2;
#line 48
    __nesc_atomic_end(__nesc_atomic); }
}

# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led0$toggle(void){
#line 31
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$toggle();
#line 31
}
#line 31
# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/system/LedsP.nc"
static inline   void LedsP$Leds$led0Toggle(void)
#line 73
{
  LedsP$Led0$toggle();
  ;
#line 75
  ;
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Leds.nc"
inline static   void TestM$Leds$led0Toggle(void){
#line 56
  LedsP$Leds$led0Toggle();
#line 56
}
#line 56
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static inline   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$toggle(void)
#line 48
{
#line 48
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 48
    * (volatile uint8_t *)59U ^= 1 << 1;
#line 48
    __nesc_atomic_end(__nesc_atomic); }
}

# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led1$toggle(void){
#line 31
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$toggle();
#line 31
}
#line 31
# 88 "/opt/CVSTinyOS/tinyos-2.x/tos/system/LedsP.nc"
static inline   void LedsP$Leds$led1Toggle(void)
#line 88
{
  LedsP$Led1$toggle();
  ;
#line 90
  ;
}

# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Leds.nc"
inline static   void TestM$Leds$led1Toggle(void){
#line 72
  LedsP$Leds$led1Toggle();
#line 72
}
#line 72
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static inline   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$toggle(void)
#line 48
{
#line 48
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 48
    * (volatile uint8_t *)59U ^= 1 << 0;
#line 48
    __nesc_atomic_end(__nesc_atomic); }
}

# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led2$toggle(void){
#line 31
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$toggle();
#line 31
}
#line 31
# 103 "/opt/CVSTinyOS/tinyos-2.x/tos/system/LedsP.nc"
static inline   void LedsP$Leds$led2Toggle(void)
#line 103
{
  LedsP$Led2$toggle();
  ;
#line 105
  ;
}

# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Leds.nc"
inline static   void TestM$Leds$led2Toggle(void){
#line 89
  LedsP$Leds$led2Toggle();
#line 89
}
#line 89
# 161 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void)
#line 161
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current, /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current].msg, FAIL);
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
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
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(am_id_t arg_0x40b169c8, am_addr_t arg_0x40358da8, message_t *arg_0x40357010, uint8_t arg_0x40357198){
#line 69
  unsigned char result;
#line 69

#line 69
  result = CC2420ActiveMessageP$AMSend$send(arg_0x40b169c8, arg_0x40358da8, arg_0x40357010, arg_0x40357198);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(message_t *arg_0x40351010){
#line 67
  unsigned char result;
#line 67

#line 67
  result = CC2420ActiveMessageP$Packet$payloadLength(arg_0x40351010);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(message_t *arg_0x40349368){
#line 67
  unsigned short result;
#line 67

#line 67
  result = CC2420ActiveMessageP$AMPacket$destination(arg_0x40349368);
#line 67

#line 67
  return result;
#line 67
}
#line 67
#line 136
inline static  am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(message_t *arg_0x40347968){
#line 136
  unsigned char result;
#line 136

#line 136
  result = CC2420ActiveMessageP$AMPacket$type(arg_0x40347968);
#line 136

#line 136
  return result;
#line 136
}
#line 136
# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
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

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type arg_0x4045a9e0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type arg_0x4045ab70){
#line 92
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(arg_0x4045a9e0, arg_0x4045ab70);
#line 92
}
#line 92
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
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

# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(uint32_t arg_0x40360738, uint32_t arg_0x403608c8){
#line 118
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(arg_0x40360738, arg_0x403608c8);
#line 118
}
#line 118
# 204 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop(void)
#line 204
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 205
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set = FALSE;
#line 205
    __nesc_atomic_end(__nesc_atomic); }
}

# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop(void){
#line 62
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop();
#line 62
}
#line 62
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void)
{
#line 61
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop();
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop(void){
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop();
#line 67
}
#line 67
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
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
#line 124
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(now, min_remaining);
        }
    }
}

#line 128
static inline  void /*DymoTableC.Timers*/VirtualizeTimerC$1$TimerFrom$fired(void)
{
  /*DymoTableC.Timers*/VirtualizeTimerC$1$fireTimers(/*DymoTableC.Timers*/VirtualizeTimerC$1$TimerFrom$getNow());
}

# 231 "../../../tos/lib/net/tymo/ForwardingEngineM.nc"
static inline   void /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$AMSend$default$sendDone(uint8_t am, message_t *msg, error_t e)
#line 231
{
}

# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  void /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$AMSend$sendDone(uint8_t arg_0x40bcfd68, message_t *arg_0x403561c0, error_t arg_0x40356348){
#line 99
  switch (arg_0x40bcfd68) {
#line 99
    case 1:
#line 99
      TestM$MHSend$sendDone(arg_0x403561c0, arg_0x40356348);
#line 99
      break;
#line 99
    default:
#line 99
      /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$AMSend$default$sendDone(arg_0x40bcfd68, arg_0x403561c0, arg_0x40356348);
#line 99
      break;
#line 99
    }
#line 99
}
#line 99
# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Timer$startOneShot(uint32_t arg_0x4035a9f0){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(2U, arg_0x4035a9f0);
#line 62
}
#line 62
# 188 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline  uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$getdt(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num].dt;
}

# 140 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  uint32_t /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Timer$getdt(void){
#line 140
  unsigned long result;
#line 140

#line 140
  result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$getdt(2U);
#line 140

#line 140
  return result;
#line 140
}
#line 140
#line 67
inline static  void /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Timer$stop(void){
#line 67
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(2U);
#line 67
}
#line 67
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  am_addr_t /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$AMPacket$destination(message_t *arg_0x40349368){
#line 67
  unsigned short result;
#line 67

#line 67
  result = CC2420ActiveMessageP$AMPacket$destination(arg_0x40349368);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  error_t /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$SubSend$send(am_addr_t arg_0x40358da8, message_t *arg_0x40357010, uint8_t arg_0x40357198){
#line 69
  unsigned char result;
#line 69

#line 69
  result = /*DymoNetworkC.MHQueue.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(arg_0x40358da8, arg_0x40357010, arg_0x40357198);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  uint8_t /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$PPacket$payloadLength(message_t *arg_0x40351010){
#line 67
  unsigned char result;
#line 67

#line 67
  result = MHPacketM$Packet$payloadLength(arg_0x40351010);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 38 "../../../tos/lib/net/tymo/mh/MHPacketM.nc"
static inline  void *MHPacketM$Packet$getPayload(message_t *msg, uint8_t len)
#line 38
{
  nx_uint8_t *p = MHPacketM$SubPacket$getPayload(msg, len);

#line 40
  return (void *)(p + sizeof(mhpacket_header_t ));
}

# 115 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  void */*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$PPacket$getPayload(message_t *arg_0x40350540, uint8_t arg_0x403506c8){
#line 115
  void *result;
#line 115

#line 115
  result = MHPacketM$Packet$getPayload(arg_0x40350540, arg_0x403506c8);
#line 115

#line 115
  return result;
#line 115
}
#line 115
# 98 "TestM.nc"
static inline  bool TestM$Intercept$forward(message_t *msg, void *payload, uint8_t len)
#line 98
{
  TestM$setLeds(2);
  return TRUE;
}

# 233 "../../../tos/lib/net/tymo/ForwardingEngineM.nc"
static inline   bool /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Intercept$default$forward(uint8_t am, message_t *msg, void *payload, uint8_t len)
#line 233
{
  return TRUE;
}

# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Intercept.nc"
inline static  bool /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Intercept$forward(uint8_t arg_0x40bcec70, message_t *arg_0x40352428, void *arg_0x403525c8, uint8_t arg_0x40352750){
#line 31
  unsigned char result;
#line 31

#line 31
  switch (arg_0x40bcec70) {
#line 31
    case 1:
#line 31
      result = TestM$Intercept$forward(arg_0x40352428, arg_0x403525c8, arg_0x40352750);
#line 31
      break;
#line 31
    default:
#line 31
      result = /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Intercept$default$forward(arg_0x40bcec70, arg_0x40352428, arg_0x403525c8, arg_0x40352750);
#line 31
      break;
#line 31
    }
#line 31

#line 31
  return result;
#line 31
}
#line 31
# 24 "../../../tos/lib/net/tymo/RouteSelect.nc"
inline static  fw_action_t /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$RouteSelect$selectRoute(message_t *arg_0x40b9ecc0, addr_t *arg_0x40b9ee70, uint8_t *arg_0x40b9d030){
#line 24
  enum __nesc_unnamed4301 result;
#line 24

#line 24
  result = MHEngineM$RouteSelect$selectRoute(arg_0x40b9ecc0, arg_0x40b9ee70, arg_0x40b9d030);
#line 24

#line 24
  return result;
#line 24
}
#line 24
# 166 "../../../tos/lib/net/tymo/ForwardingEngineM.nc"
static inline  void /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Timer$fired(void)
#line 166
{
  switch (/*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$RouteSelect$selectRoute(/*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$waiting, /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$addrWaiting, &/*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$amWaiting)) {
      case FW_SEND: 
        ;
      if (/*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$addrWaiting) {
          /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$SubSend$send(/*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$AMPacket$destination(/*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$waiting), /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$waiting, /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$lenWaiting);
        }
      else {
#line 172
        if (/*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Intercept$forward(/*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$amWaiting, /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$waiting, 
        /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$PPacket$getPayload(/*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$waiting, /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$PPacket$payloadLength(/*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$waiting)), 
        /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$PPacket$payloadLength(/*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$waiting))) {
            /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$SubSend$send(/*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$AMPacket$destination(/*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$waiting), /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$waiting, /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$lenWaiting);
          }
        }
#line 177
      /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Timer$stop();
      break;

      case FW_WAIT: 
        ;
      /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$wait_time += /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Timer$getdt();
      if (/*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$wait_time < /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$MAX_WAIT) {
          /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Timer$startOneShot(/*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$wait_time);
          break;
        }


      default: 
        if (/*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$addrWaiting) {
          /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$AMSend$sendDone(/*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$amWaiting, /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$waiting, FAIL);
          }
#line 192
      if (/*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$lockAvail) {
          /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$avail = /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$waiting;
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 194
            {
              /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$lockAvail = FALSE;
            }
#line 196
            __nesc_atomic_end(__nesc_atomic); }
        }
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 198
        {
          /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$lockWaiting = FALSE;
        }
#line 200
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  uint8_t /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$SubPacket$payloadLength(message_t *arg_0x40351010){
#line 67
  unsigned char result;
#line 67

#line 67
  result = CC2420ActiveMessageP$Packet$payloadLength(arg_0x40351010);
#line 67

#line 67
  return result;
#line 67
}
#line 67
#line 83
inline static  void /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$PPacket$setPayloadLength(message_t *arg_0x40351690, uint8_t arg_0x40351818){
#line 83
  MHPacketM$Packet$setPayloadLength(arg_0x40351690, arg_0x40351818);
#line 83
}
#line 83
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc"
inline static   error_t /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Acks$requestAck(message_t *arg_0x4037f818){
#line 48
  unsigned char result;
#line 48

#line 48
  result = CC2420PacketP$Acks$requestAck(arg_0x4037f818);
#line 48

#line 48
  return result;
#line 48
}
#line 48
# 58 "../../../tos/lib/net/tymo/ForwardingEngineM.nc"
static inline  error_t /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$AMSend$send(uint8_t am, am_addr_t addr, message_t *msg, uint8_t len)
#line 58
{
  switch (/*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$RouteSelect$selectRoute(msg, &addr, &am)) {
      case FW_SEND: 
        /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$PPacket$setPayloadLength(msg, len);
      /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$acks = 1 && /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Acks$requestAck(msg) == SUCCESS;
      /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$typebuf = am;
      return /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$SubSend$send(/*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$AMPacket$destination(msg), msg, /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$SubPacket$payloadLength(msg));

      case FW_WAIT: 
        { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 67
          {
            if (/*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$lockWaiting) 
              {
                unsigned char __nesc_temp = 
#line 69
                EBUSY;

                {
#line 69
                  __nesc_atomic_end(__nesc_atomic); 
#line 69
                  return __nesc_temp;
                }
              }
#line 70
            /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$lockWaiting = TRUE;
          }
#line 71
          __nesc_atomic_end(__nesc_atomic); }
      /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$waiting = msg;
      /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$amWaiting = am;
      /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$PPacket$setPayloadLength(msg, len);
      /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$lenWaiting = /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$SubPacket$payloadLength(msg);
      /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$bufAddr = addr;
      /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$addrWaiting = &/*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$bufAddr;
      /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$wait_time = 0;
      /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Timer$startOneShot(/*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$WAIT_BEFORE_RETRY);
      ;
      return SUCCESS;

      default: 
        return FAIL;
    }
}

# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  error_t TestM$MHSend$send(am_addr_t arg_0x40358da8, message_t *arg_0x40357010, uint8_t arg_0x40357198){
#line 69
  unsigned char result;
#line 69

#line 69
  result = /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$AMSend$send(1, arg_0x40358da8, arg_0x40357010, arg_0x40357198);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 115 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  void *TestM$Packet$getPayload(message_t *arg_0x40350540, uint8_t arg_0x403506c8){
#line 115
  void *result;
#line 115

#line 115
  result = MHPacketM$Packet$getPayload(arg_0x40350540, arg_0x403506c8);
#line 115

#line 115
  return result;
#line 115
}
#line 115
# 63 "TestM.nc"
static inline  void TestM$Timer$fired(void)
#line 63
{
  nx_uint16_t *payload = TestM$Packet$getPayload(&TestM$packet, 2);
  error_t error;

#line 66
  __nesc_hton_uint16((unsigned char *)&*payload, 1664);
  error = TestM$MHSend$send(TestM$TARGET, &TestM$packet, sizeof  (*payload));
  if (error == SUCCESS) {
      ;
    }
  else 
#line 70
    {
      ;
    }
}

# 193 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline   void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num)
{
}

# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(uint8_t arg_0x40a15090){
#line 72
  switch (arg_0x40a15090) {
#line 72
    case 1U:
#line 72
      /*DymoTableC.Timers*/VirtualizeTimerC$1$TimerFrom$fired();
#line 72
      break;
#line 72
    case 2U:
#line 72
      /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Timer$fired();
#line 72
      break;
#line 72
    case 3U:
#line 72
      TestM$Timer$fired();
#line 72
      break;
#line 72
    default:
#line 72
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(arg_0x40a15090);
#line 72
      break;
#line 72
    }
#line 72
}
#line 72
# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  uint8_t MHPacketM$SubPacket$maxPayloadLength(void){
#line 95
  unsigned char result;
#line 95

#line 95
  result = CC2420ActiveMessageP$Packet$maxPayloadLength();
#line 95

#line 95
  return result;
#line 95
}
#line 95
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static inline   am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void)
#line 61
{
  return ActiveMessageAddressC$amAddress();
}

# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
inline static   am_addr_t CC2420ActiveMessageP$ActiveMessageAddress$amAddress(void){
#line 50
  unsigned short result;
#line 50

#line 50
  result = ActiveMessageAddressC$ActiveMessageAddress$amAddress();
#line 50

#line 50
  return result;
#line 50
}
#line 50
# 88 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline  am_addr_t CC2420ActiveMessageP$AMPacket$address(void)
#line 88
{
  return CC2420ActiveMessageP$ActiveMessageAddress$amAddress();
}

# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  am_addr_t MHPacketM$AMPacket$address(void){
#line 57
  unsigned short result;
#line 57

#line 57
  result = CC2420ActiveMessageP$AMPacket$address();
#line 57

#line 57
  return result;
#line 57
}
#line 57
# 61 "../../../tos/lib/net/tymo/mh/MHPacketM.nc"
static inline  am_addr_t MHPacketM$MHPacket$address(void)
#line 61
{
  return MHPacketM$AMPacket$address();
}





static inline  bool MHPacketM$MHPacket$isForMe(message_t *amsg)
#line 69
{
  return __nesc_ntoh_uint16((unsigned char *)&((mhpacket_header_t *)MHPacketM$SubPacket$getPayload(amsg, MHPacketM$SubPacket$maxPayloadLength()))->dest) == MHPacketM$MHPacket$address() || __nesc_ntoh_uint16((unsigned char *)&((mhpacket_header_t *)MHPacketM$SubPacket$getPayload(amsg, MHPacketM$SubPacket$maxPayloadLength()))->dest) == AM_BROADCAST_ADDR;
}

# 125 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  bool MHEngineM$MHPacket$isForMe(message_t *arg_0x40347220){
#line 125
  unsigned char result;
#line 125

#line 125
  result = MHPacketM$MHPacket$isForMe(arg_0x40347220);
#line 125

#line 125
  return result;
#line 125
}
#line 125
#line 57
inline static  am_addr_t MHEngineM$MHPacket$address(void){
#line 57
  unsigned short result;
#line 57

#line 57
  result = MHPacketM$MHPacket$address();
#line 57

#line 57
  return result;
#line 57
}
#line 57
#line 136
inline static  am_id_t MHEngineM$MHPacket$type(message_t *arg_0x40347968){
#line 136
  unsigned char result;
#line 136

#line 136
  result = MHPacketM$MHPacket$type(arg_0x40347968);
#line 136

#line 136
  return result;
#line 136
}
#line 136
# 26 "../../../tos/lib/net/tymo/RoutingTable.nc"
inline static  error_t MHEngineM$RoutingTable$getRoute(addr_t arg_0x40b4e5f0, rt_info_t *arg_0x40b4e7a0){
#line 26
  unsigned char result;
#line 26

#line 26
  result = /*DymoTableC.DymoTableM*/DymoTableM$0$RoutingTable$getRoute(arg_0x40b4e5f0, arg_0x40b4e7a0);
#line 26

#line 26
  return result;
#line 26
}
#line 26


inline static  error_t MHEngineM$RoutingTable$getForwardingRoute(addr_t arg_0x40b4ede0, rt_info_t *arg_0x40b4c010){
#line 28
  unsigned char result;
#line 28

#line 28
  result = /*DymoTableC.DymoTableM*/DymoTableM$0$RoutingTable$getForwardingRoute(arg_0x40b4ede0, arg_0x40b4c010);
#line 28

#line 28
  return result;
#line 28
}
#line 28
# 65 "../../../tos/lib/net/tymo/mh/MHPacketM.nc"
static inline  am_addr_t MHPacketM$MHPacket$destination(message_t *amsg)
#line 65
{
  return __nesc_ntoh_uint16((unsigned char *)&((mhpacket_header_t *)MHPacketM$SubPacket$getPayload(amsg, MHPacketM$SubPacket$maxPayloadLength()))->dest);
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  am_addr_t MHEngineM$MHPacket$destination(message_t *arg_0x40349368){
#line 67
  unsigned short result;
#line 67

#line 67
  result = MHPacketM$MHPacket$destination(arg_0x40349368);
#line 67

#line 67
  return result;
#line 67
}
#line 67
#line 92
inline static  void MHEngineM$AMPacket$setDestination(message_t *arg_0x40348010, am_addr_t arg_0x403481a0){
#line 92
  CC2420ActiveMessageP$AMPacket$setDestination(arg_0x40348010, arg_0x403481a0);
#line 92
}
#line 92
#line 151
inline static  void MHPacketM$AMPacket$setType(message_t *arg_0x40347f00, am_id_t arg_0x403460b0){
#line 151
  CC2420ActiveMessageP$AMPacket$setType(arg_0x40347f00, arg_0x403460b0);
#line 151
}
#line 151
# 81 "../../../tos/lib/net/tymo/mh/MHPacketM.nc"
static inline  void MHPacketM$MHPacket$setType(message_t *amsg, am_id_t t)
#line 81
{
  __nesc_hton_uint8((unsigned char *)&((mhpacket_header_t *)MHPacketM$SubPacket$getPayload(amsg, MHPacketM$SubPacket$maxPayloadLength()))->type, t);
  MHPacketM$AMPacket$setType(amsg, AM_MULTIHOP);
}

# 151 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  void MHEngineM$MHPacket$setType(message_t *arg_0x40347f00, am_id_t arg_0x403460b0){
#line 151
  MHPacketM$MHPacket$setType(arg_0x40347f00, arg_0x403460b0);
#line 151
}
#line 151
# 73 "../../../tos/lib/net/tymo/mh/MHPacketM.nc"
static inline  void MHPacketM$MHPacket$setDestination(message_t *amsg, am_addr_t addr)
#line 73
{
  __nesc_hton_uint16((unsigned char *)&((mhpacket_header_t *)MHPacketM$SubPacket$getPayload(amsg, MHPacketM$SubPacket$maxPayloadLength()))->dest, addr);
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  void MHEngineM$MHPacket$setDestination(message_t *arg_0x40348010, am_addr_t arg_0x403481a0){
#line 92
  MHPacketM$MHPacket$setDestination(arg_0x40348010, arg_0x403481a0);
#line 92
}
#line 92
# 77 "../../../tos/lib/net/tymo/mh/MHPacketM.nc"
static inline  void MHPacketM$MHPacket$setSource(message_t *amsg, am_addr_t addr)
#line 77
{
  __nesc_hton_uint16((unsigned char *)&((mhpacket_header_t *)MHPacketM$SubPacket$getPayload(amsg, MHPacketM$SubPacket$maxPayloadLength()))->src, addr);
}

# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  void MHEngineM$MHPacket$setSource(message_t *arg_0x403488b0, am_addr_t arg_0x40348a40){
#line 110
  MHPacketM$MHPacket$setSource(arg_0x403488b0, arg_0x40348a40);
#line 110
}
#line 110
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  void MHPacketM$SubPacket$setPayloadLength(message_t *arg_0x40351690, uint8_t arg_0x40351818){
#line 83
  CC2420ActiveMessageP$Packet$setPayloadLength(arg_0x40351690, arg_0x40351818);
#line 83
}
#line 83
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  void /*DymoNetworkC.MHQueue.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(message_t *arg_0x40348010, am_addr_t arg_0x403481a0){
#line 92
  CC2420ActiveMessageP$AMPacket$setDestination(arg_0x40348010, arg_0x403481a0);
#line 92
}
#line 92
#line 151
inline static  void /*DymoNetworkC.MHQueue.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(message_t *arg_0x40347f00, am_id_t arg_0x403460b0){
#line 151
  CC2420ActiveMessageP$AMPacket$setType(arg_0x40347f00, arg_0x403460b0);
#line 151
}
#line 151
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static  error_t /*DymoNetworkC.MHQueue.AMQueueEntryP*/AMQueueEntryP$0$Send$send(message_t *arg_0x403b4c68, uint8_t arg_0x403b4df0){
#line 64
  unsigned char result;
#line 64

#line 64
  result = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(0U, arg_0x403b4c68, arg_0x403b4df0);
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 135 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline   void HplAtm128Timer0AsyncP$Compare$set(uint8_t t)
#line 135
{
  * (volatile uint8_t *)(0x31 + 0x20) = t;
}

# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type arg_0x405c8e40){
#line 45
  HplAtm128Timer0AsyncP$Compare$set(arg_0x405c8e40);
#line 45
}
#line 45
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline   uint8_t HplAtm128Timer0AsyncP$Timer$get(void)
#line 50
{
#line 50
  return * (volatile uint8_t *)(0x32 + 0x20);
}

# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get(void){
#line 52
  unsigned char result;
#line 52

#line 52
  result = HplAtm128Timer0AsyncP$Timer$get();
#line 52

#line 52
  return result;
#line 52
}
#line 52
# 206 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline   int HplAtm128Timer0AsyncP$TimerAsync$compareBusy(void)
#line 206
{
  return (* (volatile uint8_t *)(0x30 + 0x20) & (1 << 1)) != 0;
}

# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static   int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$compareBusy(void){
#line 44
  int result;
#line 44

#line 44
  result = HplAtm128Timer0AsyncP$TimerAsync$compareBusy();
#line 44

#line 44
  return result;
#line 44
}
#line 44
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setOcr0(uint8_t n)
#line 74
{
  while (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$compareBusy()) 
    ;
  if (n == /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get()) {
    n++;
    }


  if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base + n + 1 < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base) {
    n = -/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base - 1;
    }
#line 84
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(n);
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
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
# 70 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void)
{
#line 71
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask();
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$fired(void){
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired();
#line 67
}
#line 67
# 128 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow());
}

# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired(void){
#line 72
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired();
#line 72
}
#line 72
# 226 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline   uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm(void)
#line 226
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 227
    {
      unsigned long __nesc_temp = 
#line 227
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt;

      {
#line 227
        __nesc_atomic_end(__nesc_atomic); 
#line 227
        return __nesc_temp;
      }
    }
#line 229
    __nesc_atomic_end(__nesc_atomic); }
}

# 105 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(void){
#line 105
  unsigned long result;
#line 105

#line 105
  result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm();
#line 105

#line 105
  return result;
#line 105
}
#line 105
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void)
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt, FALSE);
    }
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired();
}

# 94 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline   message_t *CC2420TinyosNetworkP$NonTinyosReceive$default$receive(uint8_t networkId, message_t *msg, void *payload, uint8_t len)
#line 94
{
  return msg;
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
inline static  message_t *CC2420TinyosNetworkP$NonTinyosReceive$receive(uint8_t arg_0x40aabd88, message_t *arg_0x40355d28, void *arg_0x40355ec8, uint8_t arg_0x40354068){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
    result = CC2420TinyosNetworkP$NonTinyosReceive$default$receive(arg_0x40aabd88, arg_0x40355d28, arg_0x40355ec8, arg_0x40354068);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 241 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline   message_t *CC2420ActiveMessageP$Snoop$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 241
{
  return msg;
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
inline static  message_t *CC2420ActiveMessageP$Snoop$receive(am_id_t arg_0x403b1b70, message_t *arg_0x40355d28, void *arg_0x40355ec8, uint8_t arg_0x40354068){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
    result = CC2420ActiveMessageP$Snoop$default$receive(arg_0x403b1b70, arg_0x40355d28, arg_0x40355ec8, arg_0x40354068);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  am_addr_t TestM$MHPacket$address(void){
#line 57
  unsigned short result;
#line 57

#line 57
  result = MHPacketM$MHPacket$address();
#line 57

#line 57
  return result;
#line 57
}
#line 57
# 87 "TestM.nc"
static inline  message_t *TestM$Receive$receive(message_t *msg, void *payload, uint8_t len)
#line 87
{
  if (TestM$MHPacket$address() == TestM$TARGET) {
      ;
      ;
      TestM$setLeds(4);
    }
  else 
#line 92
    {
      ;
    }
  return msg;
}

# 227 "../../../tos/lib/net/tymo/ForwardingEngineM.nc"
static inline   message_t */*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Receive$default$receive(uint8_t am, message_t *msg, void *payload, uint8_t len)
#line 227
{
  return msg;
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
inline static  message_t */*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Receive$receive(uint8_t arg_0x40bce6b8, message_t *arg_0x40355d28, void *arg_0x40355ec8, uint8_t arg_0x40354068){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  switch (arg_0x40bce6b8) {
#line 67
    case 1:
#line 67
      result = TestM$Receive$receive(arg_0x40355d28, arg_0x40355ec8, arg_0x40354068);
#line 67
      break;
#line 67
    default:
#line 67
      result = /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Receive$default$receive(arg_0x40bce6b8, arg_0x40355d28, arg_0x40355ec8, arg_0x40354068);
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
# 237 "../../../tos/lib/net/tymo/ForwardingEngineM.nc"
static inline   void /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$MHControl$default$msgReceived(message_t *msg)
#line 237
{
}

# 3 "../../../tos/lib/net/tymo/mh/MHControl.nc"
inline static  void /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$MHControl$msgReceived(message_t *arg_0x4037e560){
#line 3
  /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$MHControl$default$msgReceived(arg_0x4037e560);
#line 3
}
#line 3
# 88 "../../../tos/lib/net/tymo/ForwardingEngineM.nc"
static inline  message_t */*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$SubReceive$receive(message_t *msg, void *payload, uint8_t len)
#line 88
{
  ;
  /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$MHControl$msgReceived(msg);
  switch (/*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$RouteSelect$selectRoute(msg, (void *)0, &/*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$typebuf)) {
      case FW_SEND: 
        { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 93
          {
            if (/*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$lockAvail) {
                ;
                {
                  nx_struct message_t *__nesc_temp = 
#line 96
                  msg;

                  {
#line 96
                    __nesc_atomic_end(__nesc_atomic); 
#line 96
                    return __nesc_temp;
                  }
                }
              }
#line 98
            /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$lockAvail = TRUE;
          }
#line 99
          __nesc_atomic_end(__nesc_atomic); }
      if (/*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Intercept$forward(/*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$typebuf, msg, /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$PPacket$getPayload(msg, /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$PPacket$payloadLength(msg)), /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$PPacket$payloadLength(msg))) {
          /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$acks = 1 && /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Acks$requestAck(msg) == SUCCESS;
          /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$SubSend$send(/*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$AMPacket$destination(msg), msg, len);
        }
      return /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$avail;

      case FW_RECEIVE: 
        ;
      payload = /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$PPacket$getPayload(msg, /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$PPacket$payloadLength(msg));
      return /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Receive$receive(/*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$typebuf, msg, payload, /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$PPacket$payloadLength(msg));

      case FW_WAIT: 
        { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 112
          {
            if (/*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$lockAvail || /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$lockWaiting) {
                ;
                {
                  nx_struct message_t *__nesc_temp = 
#line 115
                  msg;

                  {
#line 115
                    __nesc_atomic_end(__nesc_atomic); 
#line 115
                    return __nesc_temp;
                  }
                }
              }
#line 117
            /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$lockAvail = /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$lockWaiting = TRUE;
          }
#line 118
          __nesc_atomic_end(__nesc_atomic); }
      /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$waiting = msg;
      /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$lenWaiting = len;
      /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$addrWaiting = (void *)0;
      /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$wait_time = 0;
      /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Timer$startOneShot(/*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$WAIT_BEFORE_RETRY);
      return /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$avail;

      default: 
        ;
      return msg;
    }
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t DymoPacketM$processMessage$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(DymoPacketM$processMessage);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 198 "../../../tos/lib/net/tymo/dymo/DymoPacketM.nc"
static inline  void DymoPacketM$DymoPacket$startProcessing(message_t *msg, message_t *newmsg)
#line 198
{
  DymoPacketM$currentMsg = msg;
  DymoPacketM$processedMsg = newmsg;
  DymoPacketM$processMessage$postTask();
}

# 74 "../../../tos/lib/net/tymo/dymo/DymoPacket.nc"
inline static  void DymoEngineM$DymoPacket$startProcessing(message_t *arg_0x40c03918, message_t *arg_0x40c03ac8){
#line 74
  DymoPacketM$DymoPacket$startProcessing(arg_0x40c03918, arg_0x40c03ac8);
#line 74
}
#line 74
# 203 "../../../tos/lib/net/tymo/dymo/DymoEngineM.nc"
static inline  message_t *DymoEngineM$Receive$receive(message_t *msg, void *payload, uint8_t len)
#line 203
{



  ;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 208
    {
      if (DymoEngineM$busyProcess) {
          ;
          {
            nx_struct message_t *__nesc_temp = 
#line 211
            msg;

            {
#line 211
              __nesc_atomic_end(__nesc_atomic); 
#line 211
              return __nesc_temp;
            }
          }
        }
      else 
#line 212
        {
          DymoEngineM$busyProcess = TRUE;
        }
    }
#line 215
    __nesc_atomic_end(__nesc_atomic); }
  DymoEngineM$cur_info_pos = 0;
  DymoEngineM$fw_address = AM_BROADCAST_ADDR;
  DymoEngineM$DymoPacket$startProcessing(msg, &DymoEngineM$fw_msg);
  return DymoEngineM$avail_msg;
}

# 237 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline   message_t *CC2420ActiveMessageP$Receive$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 237
{
  return msg;
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
inline static  message_t *CC2420ActiveMessageP$Receive$receive(am_id_t arg_0x403b1598, message_t *arg_0x40355d28, void *arg_0x40355ec8, uint8_t arg_0x40354068){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  switch (arg_0x403b1598) {
#line 67
    case 8:
#line 67
      result = DymoEngineM$Receive$receive(arg_0x40355d28, arg_0x40355ec8, arg_0x40354068);
#line 67
      break;
#line 67
    case 9:
#line 67
      result = /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$SubReceive$receive(arg_0x40355d28, arg_0x40355ec8, arg_0x40354068);
#line 67
      break;
#line 67
    default:
#line 67
      result = CC2420ActiveMessageP$Receive$default$receive(arg_0x403b1598, arg_0x40355d28, arg_0x40355ec8, arg_0x40354068);
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
# 112 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline  bool CC2420ActiveMessageP$AMPacket$isForMe(message_t *amsg)
#line 112
{
  return CC2420ActiveMessageP$AMPacket$destination(amsg) == CC2420ActiveMessageP$AMPacket$address() || 
  CC2420ActiveMessageP$AMPacket$destination(amsg) == AM_BROADCAST_ADDR;
}

# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static   cc2420_metadata_t *CC2420ActiveMessageP$CC2420PacketBody$getMetadata(message_t *arg_0x403b9820){
#line 47
  nx_struct cc2420_metadata_t *result;
#line 47

#line 47
  result = CC2420PacketP$CC2420PacketBody$getMetadata(arg_0x403b9820);
#line 47

#line 47
  return result;
#line 47
}
#line 47
# 171 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline  message_t *CC2420ActiveMessageP$SubReceive$receive(message_t *msg, void *payload, uint8_t len)
#line 171
{

  if (! __nesc_ntoh_int8((unsigned char *)&CC2420ActiveMessageP$CC2420PacketBody$getMetadata(msg)->crc)) {
      return msg;
    }

  if (CC2420ActiveMessageP$AMPacket$isForMe(msg)) {
      return CC2420ActiveMessageP$Receive$receive(CC2420ActiveMessageP$AMPacket$type(msg), msg, payload, len);
    }
  else {
      return CC2420ActiveMessageP$Snoop$receive(CC2420ActiveMessageP$AMPacket$type(msg), msg, payload, len);
    }
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
inline static  message_t *UniqueReceiveP$Receive$receive(message_t *arg_0x40355d28, void *arg_0x40355ec8, uint8_t arg_0x40354068){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  result = CC2420ActiveMessageP$SubReceive$receive(arg_0x40355d28, arg_0x40355ec8, arg_0x40354068);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 137 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline void UniqueReceiveP$insert(uint16_t msgSource, uint8_t msgDsn)
#line 137
{
  uint8_t element = UniqueReceiveP$recycleSourceElement;
  bool increment = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 141
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
#line 154
    __nesc_atomic_end(__nesc_atomic); }
}


static inline   message_t *UniqueReceiveP$DuplicateReceive$default$receive(message_t *msg, void *payload, uint8_t len)
#line 158
{
  return msg;
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
inline static  message_t *UniqueReceiveP$DuplicateReceive$receive(message_t *arg_0x40355d28, void *arg_0x40355ec8, uint8_t arg_0x40354068){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  result = UniqueReceiveP$DuplicateReceive$default$receive(arg_0x40355d28, arg_0x40355ec8, arg_0x40354068);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 111 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline bool UniqueReceiveP$hasSeen(uint16_t msgSource, uint8_t msgDsn)
#line 111
{
  int i;

#line 113
  UniqueReceiveP$recycleSourceElement = UniqueReceiveP$INVALID_ELEMENT;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 115
    {
      for (i = 0; i < 4; i++) {
          if (UniqueReceiveP$receivedMessages[i].source == msgSource) {
              if (UniqueReceiveP$receivedMessages[i].dsn == msgDsn) {

                  {
                    unsigned char __nesc_temp = 
#line 120
                    TRUE;

                    {
#line 120
                      __nesc_atomic_end(__nesc_atomic); 
#line 120
                      return __nesc_temp;
                    }
                  }
                }
#line 123
              UniqueReceiveP$recycleSourceElement = i;
            }
        }
    }
#line 126
    __nesc_atomic_end(__nesc_atomic); }

  return FALSE;
}

# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static   cc2420_header_t *UniqueReceiveP$CC2420PacketBody$getHeader(message_t *arg_0x403b92d0){
#line 42
  nx_struct cc2420_header_t *result;
#line 42

#line 42
  result = CC2420PacketP$CC2420PacketBody$getHeader(arg_0x403b92d0);
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 85 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline  message_t *UniqueReceiveP$SubReceive$receive(message_t *msg, void *payload, 
uint8_t len)
#line 86
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

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
inline static  message_t *CC2420TinyosNetworkP$Receive$receive(message_t *arg_0x40355d28, void *arg_0x40355ec8, uint8_t arg_0x40354068){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  result = UniqueReceiveP$SubReceive$receive(arg_0x40355d28, arg_0x40355ec8, arg_0x40354068);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline  message_t *CC2420TinyosNetworkP$SubReceive$receive(message_t *msg, void *payload, uint8_t len)
#line 84
{
  if (__nesc_ntoh_leuint8((unsigned char *)&CC2420TinyosNetworkP$CC2420PacketBody$getHeader(msg)->network) == 0x3f) {
      return CC2420TinyosNetworkP$Receive$receive(msg, payload, len);
    }
  else {
      return CC2420TinyosNetworkP$NonTinyosReceive$receive(__nesc_ntoh_leuint8((unsigned char *)&CC2420TinyosNetworkP$CC2420PacketBody$getHeader(msg)->network), msg, payload, len);
    }
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
inline static  message_t *CC2420ReceiveP$Receive$receive(message_t *arg_0x40355d28, void *arg_0x40355ec8, uint8_t arg_0x40354068){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  result = CC2420TinyosNetworkP$SubReceive$receive(arg_0x40355d28, arg_0x40355ec8, arg_0x40354068);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static   uint16_t CC2420ReceiveP$CC2420Config$getShortAddr(void){
#line 64
  unsigned short result;
#line 64

#line 64
  result = CC2420ControlP$CC2420Config$getShortAddr();
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 332 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline   bool CC2420ControlP$CC2420Config$isAddressRecognitionEnabled(void)
#line 332
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 333
    {
      unsigned char __nesc_temp = 
#line 333
      CC2420ControlP$addressRecognition;

      {
#line 333
        __nesc_atomic_end(__nesc_atomic); 
#line 333
        return __nesc_temp;
      }
    }
#line 335
    __nesc_atomic_end(__nesc_atomic); }
}

# 86 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static   bool CC2420ReceiveP$CC2420Config$isAddressRecognitionEnabled(void){
#line 86
  unsigned char result;
#line 86

#line 86
  result = CC2420ControlP$CC2420Config$isAddressRecognitionEnabled();
#line 86

#line 86
  return result;
#line 86
}
#line 86
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static   cc2420_header_t *CC2420ReceiveP$CC2420PacketBody$getHeader(message_t *arg_0x403b92d0){
#line 42
  nx_struct cc2420_header_t *result;
#line 42

#line 42
  result = CC2420PacketP$CC2420PacketBody$getHeader(arg_0x403b92d0);
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 448 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline bool CC2420ReceiveP$passesAddressCheck(message_t *msg)
#line 448
{
  cc2420_header_t *header = CC2420ReceiveP$CC2420PacketBody$getHeader(msg);

  if (!CC2420ReceiveP$CC2420Config$isAddressRecognitionEnabled()) {
      return TRUE;
    }

  return __nesc_ntoh_leuint16((unsigned char *)&header->dest) == CC2420ReceiveP$CC2420Config$getShortAddr()
   || __nesc_ntoh_leuint16((unsigned char *)&header->dest) == AM_BROADCAST_ADDR;
}

# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static   cc2420_metadata_t *CC2420ReceiveP$CC2420PacketBody$getMetadata(message_t *arg_0x403b9820){
#line 47
  nx_struct cc2420_metadata_t *result;
#line 47

#line 47
  result = CC2420PacketP$CC2420PacketBody$getMetadata(arg_0x403b9820);
#line 47

#line 47
  return result;
#line 47
}
#line 47
# 326 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline  void CC2420ReceiveP$receiveDone_task$runTask(void)
#line 326
{
  cc2420_metadata_t *metadata = CC2420ReceiveP$CC2420PacketBody$getMetadata(CC2420ReceiveP$m_p_rx_buf);
  cc2420_header_t *header = CC2420ReceiveP$CC2420PacketBody$getHeader(CC2420ReceiveP$m_p_rx_buf);
  uint8_t length = __nesc_ntoh_leuint8((unsigned char *)&header->length);
  uint8_t tmpLen __attribute((unused))  = sizeof(message_t ) - ((size_t )& ((message_t *)0)->data - sizeof(cc2420_header_t ));
  uint8_t *buf = (uint8_t *)header;

  __nesc_hton_int8((unsigned char *)&metadata->crc, buf[length] >> 7);
  __nesc_hton_uint8((unsigned char *)&metadata->lqi, buf[length] & 0x7f);
  __nesc_hton_uint8((unsigned char *)&metadata->rssi, buf[length - 1]);

  if (CC2420ReceiveP$passesAddressCheck(CC2420ReceiveP$m_p_rx_buf)) {
      CC2420ReceiveP$m_p_rx_buf = CC2420ReceiveP$Receive$receive(CC2420ReceiveP$m_p_rx_buf, CC2420ReceiveP$m_p_rx_buf->data, 
      length - CC2420_SIZE);
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 342
    CC2420ReceiveP$receivingPacket = FALSE;
#line 342
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ReceiveP$waitForNextPacket();
}

# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline   void CC2420SpiP$ChipSpiResource$abortRelease(void)
#line 95
{
  /* atomic removed: atomic calls only */
#line 96
  CC2420SpiP$release = FALSE;
}

# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static   void CC2420TransmitP$ChipSpiResource$abortRelease(void){
#line 31
  CC2420SpiP$ChipSpiResource$abortRelease();
#line 31
}
#line 31
# 341 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline   void CC2420TransmitP$ChipSpiResource$releasing(void)
#line 341
{
  if (CC2420TransmitP$abortSpiRelease) {
      CC2420TransmitP$ChipSpiResource$abortRelease();
    }
}

# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static   void CC2420SpiP$ChipSpiResource$releasing(void){
#line 24
  CC2420TransmitP$ChipSpiResource$releasing();
#line 24
}
#line 24
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuPowerState.nc"
inline static   void Atm128SpiP$McuPowerState$update(void){
#line 44
  McuSleepC$McuPowerState$update();
#line 44
}
#line 44
# 94 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline   void HplAtm128SpiP$SPI$sleep(void)
#line 94
{
}

# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static   void Atm128SpiP$Spi$sleep(void){
#line 72
  HplAtm128SpiP$SPI$sleep();
#line 72
}
#line 72
#line 99
inline static   void Atm128SpiP$Spi$enableSpi(bool arg_0x407cbd28){
#line 99
  HplAtm128SpiP$SPI$enableSpi(arg_0x407cbd28);
#line 99
}
#line 99
# 119 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP$stopSpi(void)
#line 119
{
  Atm128SpiP$Spi$enableSpi(FALSE);
  /* atomic removed: atomic calls only */
#line 121
  {
    Atm128SpiP$Spi$sleep();
  }
  Atm128SpiP$McuPowerState$update();
}

# 172 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline    void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$unconfigure(uint8_t id)
#line 172
{
}

# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$unconfigure(uint8_t arg_0x4084b238){
#line 55
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$unconfigure(arg_0x4084b238);
#line 55
}
#line 55
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
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

# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
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
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline   bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty(void)
#line 50
{
  return /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;
}

# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
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
# 97 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
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

# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t Atm128SpiP$ResourceArbiter$release(uint8_t arg_0x407b8410){
#line 110
  unsigned char result;
#line 110

#line 110
  result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$release(arg_0x407b8410);
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 322 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline   error_t Atm128SpiP$Resource$release(uint8_t id)
#line 322
{
  error_t error = Atm128SpiP$ResourceArbiter$release(id);

  /* atomic removed: atomic calls only */
#line 324
  {
    if (!Atm128SpiP$ArbiterInfo$inUse()) {
        Atm128SpiP$stopSpi();
      }
  }
  return error;
}

# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t HplCC2420SpiP$SubResource$release(void){
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
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$set(void)
#line 46
{
#line 46
  * (volatile uint8_t *)56U |= 1 << 0;
}

# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplCC2420SpiP$SS$set(void){
#line 29
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$set();
#line 29
}
#line 29
# 75 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline   error_t HplCC2420SpiP$Resource$release(void)
{
  if (HplCC2420SpiP$SubResource$isOwner()) {
    HplCC2420SpiP$SS$set();
    }
  return HplCC2420SpiP$SubResource$release();
}

# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t CC2420SpiP$SpiResource$release(void){
#line 110
  unsigned char result;
#line 110

#line 110
  result = HplCC2420SpiP$Resource$release();
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 178 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline   uint8_t CC2420SpiP$Resource$isOwner(uint8_t id)
#line 178
{
  /* atomic removed: atomic calls only */
#line 179
  {
    unsigned char __nesc_temp = 
#line 179
    CC2420SpiP$m_holder == id;

#line 179
    return __nesc_temp;
  }
}

# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
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
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
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
# 184 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline  void CC2420SpiP$SpiResource$granted(void)
#line 184
{
  CC2420SpiP$grant$postTask();
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static  void HplCC2420SpiP$Resource$granted(void){
#line 92
  CC2420SpiP$SpiResource$granted();
#line 92
}
#line 92
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline  void HplCC2420SpiP$SubResource$granted(void)
{
  HplCC2420SpiP$SS$makeOutput();
  HplCC2420SpiP$SS$clr();

  HplCC2420SpiP$Resource$granted();
}

# 340 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline   void Atm128SpiP$Resource$default$granted(uint8_t id)
#line 340
{
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static  void Atm128SpiP$Resource$granted(uint8_t arg_0x407ba088){
#line 92
  switch (arg_0x407ba088) {
#line 92
    case 0U:
#line 92
      HplCC2420SpiP$SubResource$granted();
#line 92
      break;
#line 92
    default:
#line 92
      Atm128SpiP$Resource$default$granted(arg_0x407ba088);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 336 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline  void Atm128SpiP$ResourceArbiter$granted(uint8_t id)
#line 336
{
  Atm128SpiP$Resource$granted(id);
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static  void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$granted(uint8_t arg_0x40831dd8){
#line 92
  Atm128SpiP$ResourceArbiter$granted(arg_0x40831dd8);
#line 92
}
#line 92
# 154 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline  void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$runTask(void)
#line 154
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 155
    {
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$reqResId;
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_BUSY;
    }
#line 158
    __nesc_atomic_end(__nesc_atomic); }
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$configure(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId);
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$granted(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId);
}

# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SpiPacket.nc"
inline static   void Atm128SpiP$SpiPacket$sendDone(uint8_t *arg_0x40770068, uint8_t *arg_0x40770210, uint16_t arg_0x407703a0, error_t arg_0x40770538){
#line 71
  CC2420SpiP$SpiPacket$sendDone(arg_0x40770068, arg_0x40770210, arg_0x407703a0, arg_0x40770538);
#line 71
}
#line 71
# 207 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline  void Atm128SpiP$zeroTask$runTask(void)
#line 207
{
  uint16_t myLen;
  uint8_t *rx;
  uint8_t *tx;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 212
    {
      myLen = Atm128SpiP$len;
      rx = Atm128SpiP$rxBuffer;
      tx = Atm128SpiP$txBuffer;
      Atm128SpiP$rxBuffer = (void *)0;
      Atm128SpiP$txBuffer = (void *)0;
      Atm128SpiP$len = 0;
      Atm128SpiP$pos = 0;
      Atm128SpiP$SpiPacket$sendDone(tx, rx, myLen, SUCCESS);
    }
#line 221
    __nesc_atomic_end(__nesc_atomic); }
}

# 451 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline   void CC2420TransmitP$TXFIFO$readDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error)
#line 452
{
}

# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
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
# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420ReceiveP$CSN$set(void){
#line 29
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$set();
#line 29
}
#line 29
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
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
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static   cc2420_metadata_t *CC2420TransmitP$CC2420PacketBody$getMetadata(message_t *arg_0x403b9820){
#line 47
  nx_struct cc2420_metadata_t *result;
#line 47

#line 47
  result = CC2420PacketP$CC2420PacketBody$getMetadata(arg_0x403b9820);
#line 47

#line 47
  return result;
#line 47
}
#line 47
# 139 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline   void HplAtm128Timer1P$CompareA$stop(void)
#line 139
{
#line 139
  * (volatile uint8_t *)(0x37 + 0x20) &= ~(1 << 4);
}

# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$stop(void){
#line 59
  HplAtm128Timer1P$CompareA$stop();
#line 59
}
#line 59
# 65 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$stop(void)
#line 65
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$stop();
}

# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$stop(void){
#line 62
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$stop();
#line 62
}
#line 62
# 91 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$stop(void)
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$stop();
}

# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void CC2420TransmitP$BackoffTimer$stop(void){
#line 62
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$stop();
#line 62
}
#line 62
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static   cc2420_header_t *CC2420TransmitP$CC2420PacketBody$getHeader(message_t *arg_0x403b92d0){
#line 42
  nx_struct cc2420_header_t *result;
#line 42

#line 42
  result = CC2420PacketP$CC2420PacketBody$getHeader(arg_0x403b92d0);
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 353 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline   void CC2420TransmitP$CC2420Receive$receive(uint8_t type, message_t *ack_msg)
#line 353
{
  cc2420_header_t *ack_header;
  cc2420_header_t *msg_header;
  cc2420_metadata_t *msg_metadata;
  uint8_t *ack_buf;
  uint8_t length;

  if (type == IEEE154_TYPE_ACK && CC2420TransmitP$m_msg) {
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

# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static   void CC2420ReceiveP$CC2420Receive$receive(uint8_t arg_0x408f4d18, message_t *arg_0x408f4ec8){
#line 63
  CC2420TransmitP$CC2420Receive$receive(arg_0x408f4d18, arg_0x408f4ec8);
#line 63
}
#line 63
# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
inline static   void CC2420ReceiveP$PacketTimeStamp$clear(message_t *arg_0x40385120){
#line 59
  CC2420PacketP$PacketTimeStamp32khz$clear(arg_0x40385120);
#line 59
}
#line 59
# 128 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline   void CC2420PacketP$PacketTimeStamp32khz$set(message_t *msg, uint32_t value)
{
  __nesc_hton_uint32((unsigned char *)&CC2420PacketP$CC2420PacketBody$getMetadata(msg)->timestamp, value);
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
inline static   void CC2420ReceiveP$PacketTimeStamp$set(message_t *arg_0x40385648, CC2420ReceiveP$PacketTimeStamp$size_type arg_0x403857d8){
#line 67
  CC2420PacketP$PacketTimeStamp32khz$set(arg_0x40385648, arg_0x403857d8);
#line 67
}
#line 67
# 209 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline   error_t CC2420SpiP$Fifo$continueRead(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 210
{
  return CC2420SpiP$SpiPacket$send((void *)0, data, len);
}

# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static   error_t CC2420ReceiveP$RXFIFO$continueRead(uint8_t *arg_0x407564d8, uint8_t arg_0x40756660){
#line 62
  unsigned char result;
#line 62

#line 62
  result = CC2420SpiP$Fifo$continueRead(CC2420_RXFIFO, arg_0x407564d8, arg_0x40756660);
#line 62

#line 62
  return result;
#line 62
}
#line 62
#line 51
inline static   cc2420_status_t CC2420ReceiveP$RXFIFO$beginRead(uint8_t *arg_0x40757c50, uint8_t arg_0x40757dd8){
#line 51
  unsigned char result;
#line 51

#line 51
  result = CC2420SpiP$Fifo$beginRead(CC2420_RXFIFO, arg_0x40757c50, arg_0x40757dd8);
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420ReceiveP$CSN$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$clr();
#line 30
}
#line 30
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
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
# 359 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline   bool CC2420ControlP$CC2420Config$isHwAutoAckDefault(void)
#line 359
{
  /* atomic removed: atomic calls only */
#line 360
  {
    unsigned char __nesc_temp = 
#line 360
    CC2420ControlP$hwAutoAckDefault;

#line 360
    return __nesc_temp;
  }
}

# 105 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static   bool CC2420ReceiveP$CC2420Config$isHwAutoAckDefault(void){
#line 105
  unsigned char result;
#line 105

#line 105
  result = CC2420ControlP$CC2420Config$isHwAutoAckDefault();
#line 105

#line 105
  return result;
#line 105
}
#line 105
# 366 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline   bool CC2420ControlP$CC2420Config$isAutoAckEnabled(void)
#line 366
{
  /* atomic removed: atomic calls only */
#line 367
  {
    unsigned char __nesc_temp = 
#line 367
    CC2420ControlP$autoAckEnabled;

#line 367
    return __nesc_temp;
  }
}

# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static   bool CC2420ReceiveP$CC2420Config$isAutoAckEnabled(void){
#line 110
  unsigned char result;
#line 110

#line 110
  result = CC2420ControlP$CC2420Config$isAutoAckEnabled();
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   bool /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP$38$IO$get(void)
#line 45
{
#line 45
  return (* (volatile uint8_t *)33U & (1 << 6)) != 0;
}

# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   bool CC2420ReceiveP$FIFOP$get(void){
#line 32
  unsigned char result;
#line 32

#line 32
  result = /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP$38$IO$get();
#line 32

#line 32
  return result;
#line 32
}
#line 32
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   bool /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$get(void)
#line 45
{
#line 45
  return (* (volatile uint8_t *)54U & (1 << 7)) != 0;
}

# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   bool CC2420ReceiveP$FIFO$get(void){
#line 32
  unsigned char result;
#line 32

#line 32
  result = /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$get();
#line 32

#line 32
  return result;
#line 32
}
#line 32
# 195 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline   void CC2420ReceiveP$RXFIFO$readDone(uint8_t *rx_buf, uint8_t rx_len, 
error_t error)
#line 196
{
  cc2420_header_t *header = CC2420ReceiveP$CC2420PacketBody$getHeader(CC2420ReceiveP$m_p_rx_buf);
  uint8_t tmpLen __attribute((unused))  = sizeof(message_t ) - ((size_t )& ((message_t *)0)->data - sizeof(cc2420_header_t ));
  uint8_t *buf = (uint8_t *)header;

#line 200
  CC2420ReceiveP$rxFrameLength = buf[0];

  switch (CC2420ReceiveP$m_state) {

      case CC2420ReceiveP$S_RX_LENGTH: 
        CC2420ReceiveP$m_state = CC2420ReceiveP$S_RX_FCF;
      if (CC2420ReceiveP$rxFrameLength + 1 > CC2420ReceiveP$m_bytes_left) {

          CC2420ReceiveP$flush();
        }
      else {
          if (!CC2420ReceiveP$FIFO$get() && !CC2420ReceiveP$FIFOP$get()) {
              CC2420ReceiveP$m_bytes_left -= CC2420ReceiveP$rxFrameLength + 1;
            }

          if (CC2420ReceiveP$rxFrameLength <= MAC_PACKET_SIZE) {
              if (CC2420ReceiveP$rxFrameLength > 0) {
                  if (CC2420ReceiveP$rxFrameLength >= CC2420_SIZE) {

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
#line 255
          header->fcf) >> IEEE154_FCF_ACK_REQ) & 0x01) == 1
           && (__nesc_ntoh_leuint16((unsigned char *)&header->dest) == CC2420ReceiveP$CC2420Config$getShortAddr()
           || __nesc_ntoh_leuint16((unsigned char *)&header->dest) == AM_BROADCAST_ADDR)
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
              CC2420ReceiveP$PacketTimeStamp$set(CC2420ReceiveP$m_p_rx_buf, CC2420ReceiveP$m_timestamp_queue[CC2420ReceiveP$m_timestamp_head]);
              CC2420ReceiveP$m_timestamp_head = (CC2420ReceiveP$m_timestamp_head + 1) % CC2420ReceiveP$TIMESTAMP_QUEUE_SIZE;
              CC2420ReceiveP$m_timestamp_size--;
            }
        }
      else 
#line 290
        {
          CC2420ReceiveP$PacketTimeStamp$clear(CC2420ReceiveP$m_p_rx_buf);
        }



      if (buf[CC2420ReceiveP$rxFrameLength] >> 7 && rx_buf) {
          uint8_t type = (__nesc_ntoh_leuint16((unsigned char *)&header->fcf) >> IEEE154_FCF_FRAME_TYPE) & 7;

#line 298
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

# 370 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline    void CC2420SpiP$Fifo$default$readDone(uint8_t addr, uint8_t *rx_buf, uint8_t rx_len, error_t error)
#line 370
{
}

# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static   void CC2420SpiP$Fifo$readDone(uint8_t arg_0x40761880, uint8_t *arg_0x40756c90, uint8_t arg_0x40756e18, error_t arg_0x40754010){
#line 71
  switch (arg_0x40761880) {
#line 71
    case CC2420_TXFIFO:
#line 71
      CC2420TransmitP$TXFIFO$readDone(arg_0x40756c90, arg_0x40756e18, arg_0x40754010);
#line 71
      break;
#line 71
    case CC2420_RXFIFO:
#line 71
      CC2420ReceiveP$RXFIFO$readDone(arg_0x40756c90, arg_0x40756e18, arg_0x40754010);
#line 71
      break;
#line 71
    default:
#line 71
      CC2420SpiP$Fifo$default$readDone(arg_0x40761880, arg_0x40756c90, arg_0x40756e18, arg_0x40754010);
#line 71
      break;
#line 71
    }
#line 71
}
#line 71
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
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
# 102 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline   error_t CC2420SpiP$ChipSpiResource$attemptRelease(void)
#line 102
{
  return CC2420SpiP$attemptRelease();
}

# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
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
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$get(void){
#line 53
  unsigned long result;
#line 53

#line 53
  result = /*Counter32khz32C.Transform32*/TransformCounterC$0$Counter$get();
#line 53

#line 53
  return result;
#line 53
}
#line 53
# 75 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline   /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$getNow(void)
{
  return /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$get();
}

#line 146
static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type dt)
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$getNow(), dt);
}

# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void CC2420TransmitP$BackoffTimer$start(CC2420TransmitP$BackoffTimer$size_type arg_0x4044f8c8){
#line 55
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$start(arg_0x4044f8c8);
#line 55
}
#line 55
# 250 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline    void CC2420ActiveMessageP$RadioBackoff$default$requestInitialBackoff(am_id_t id, 
message_t *msg)
#line 251
{
}

# 81 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static   void CC2420ActiveMessageP$RadioBackoff$requestInitialBackoff(am_id_t arg_0x403afa78, message_t *arg_0x4039a6f8){
#line 81
    CC2420ActiveMessageP$RadioBackoff$default$requestInitialBackoff(arg_0x403afa78, arg_0x4039a6f8);
#line 81
}
#line 81
# 197 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline   void CC2420ActiveMessageP$SubBackoff$requestInitialBackoff(message_t *msg)
#line 197
{
  CC2420ActiveMessageP$RadioBackoff$requestInitialBackoff(__nesc_ntoh_leuint8((unsigned char *)&((cc2420_header_t *)((uint8_t *)msg + (size_t )& ((message_t *)0)->data - sizeof(cc2420_header_t )))->type), msg);
}

# 81 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static   void CC2420CsmaP$RadioBackoff$requestInitialBackoff(message_t *arg_0x4039a6f8){
#line 81
  CC2420ActiveMessageP$SubBackoff$requestInitialBackoff(arg_0x4039a6f8);
#line 81
}
#line 81
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/system/RandomMlcgC.nc"
static inline   uint16_t RandomMlcgC$Random$rand16(void)
#line 78
{
  return (uint16_t )RandomMlcgC$Random$rand32();
}

# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Random.nc"
inline static   uint16_t CC2420CsmaP$Random$rand16(void){
#line 41
  unsigned short result;
#line 41

#line 41
  result = RandomMlcgC$Random$rand16();
#line 41

#line 41
  return result;
#line 41
}
#line 41
# 223 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline   void CC2420TransmitP$RadioBackoff$setInitialBackoff(uint16_t backoffTime)
#line 223
{
  CC2420TransmitP$myInitialBackoff = backoffTime + 1;
}

# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static   void CC2420CsmaP$SubBackoff$setInitialBackoff(uint16_t arg_0x4039b660){
#line 60
  CC2420TransmitP$RadioBackoff$setInitialBackoff(arg_0x4039b660);
#line 60
}
#line 60
# 217 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline   void CC2420CsmaP$SubBackoff$requestInitialBackoff(message_t *msg)
#line 217
{
  CC2420CsmaP$SubBackoff$setInitialBackoff(CC2420CsmaP$Random$rand16()
   % (0x1F * CC2420_BACKOFF_PERIOD) + CC2420_MIN_BACKOFF);

  CC2420CsmaP$RadioBackoff$requestInitialBackoff(msg);
}

# 81 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static   void CC2420TransmitP$RadioBackoff$requestInitialBackoff(message_t *arg_0x4039a6f8){
#line 81
  CC2420CsmaP$SubBackoff$requestInitialBackoff(arg_0x4039a6f8);
#line 81
}
#line 81
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
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
# 637 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP$releaseSpiResource(void)
#line 637
{
  CC2420TransmitP$SpiResource$release();
  return SUCCESS;
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
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
# 199 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline   void CC2420CsmaP$CC2420Transmit$sendDone(message_t *p_msg, error_t err)
#line 199
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 200
    CC2420CsmaP$sendErr = err;
#line 200
    __nesc_atomic_end(__nesc_atomic); }
  CC2420CsmaP$sendDone_task$postTask();
}

# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
inline static   void CC2420TransmitP$Send$sendDone(message_t *arg_0x404169b0, error_t arg_0x40416b38){
#line 73
  CC2420CsmaP$CC2420Transmit$sendDone(arg_0x404169b0, arg_0x40416b38);
#line 73
}
#line 73
# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420TransmitP$CSN$set(void){
#line 29
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$set();
#line 29
}
#line 29
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
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
# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420TransmitP$CSN$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$clr();
#line 30
}
#line 30
# 419 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline   void CC2420TransmitP$TXFIFO$writeDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error)
#line 420
{

  CC2420TransmitP$CSN$set();
  if (CC2420TransmitP$m_state == CC2420TransmitP$S_CANCEL) {
      /* atomic removed: atomic calls only */
#line 424
      {
        CC2420TransmitP$CSN$clr();
        CC2420TransmitP$SFLUSHTX$strobe();
        CC2420TransmitP$CSN$set();
      }
      CC2420TransmitP$releaseSpiResource();
      CC2420TransmitP$m_state = CC2420TransmitP$S_STARTED;
      CC2420TransmitP$Send$sendDone(CC2420TransmitP$m_msg, ECANCEL);
    }
  else {
#line 433
    if (!CC2420TransmitP$m_cca) {
        /* atomic removed: atomic calls only */
#line 434
        {
          CC2420TransmitP$m_state = CC2420TransmitP$S_BEGIN_TRANSMIT;
        }
        CC2420TransmitP$attemptSend();
      }
    else {
        CC2420TransmitP$releaseSpiResource();
        /* atomic removed: atomic calls only */
#line 441
        {
          CC2420TransmitP$m_state = CC2420TransmitP$S_SAMPLE_CCA;
        }

        CC2420TransmitP$RadioBackoff$requestInitialBackoff(CC2420TransmitP$m_msg);
        CC2420TransmitP$BackoffTimer$start(CC2420TransmitP$myInitialBackoff);
      }
    }
}

# 318 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline   void CC2420ReceiveP$RXFIFO$writeDone(uint8_t *tx_buf, uint8_t tx_len, error_t error)
#line 318
{
}

# 373 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline    void CC2420SpiP$Fifo$default$writeDone(uint8_t addr, uint8_t *tx_buf, uint8_t tx_len, error_t error)
#line 373
{
}

# 91 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static   void CC2420SpiP$Fifo$writeDone(uint8_t arg_0x40761880, uint8_t *arg_0x40754d60, uint8_t arg_0x40754ee8, error_t arg_0x40753088){
#line 91
  switch (arg_0x40761880) {
#line 91
    case CC2420_TXFIFO:
#line 91
      CC2420TransmitP$TXFIFO$writeDone(arg_0x40754d60, arg_0x40754ee8, arg_0x40753088);
#line 91
      break;
#line 91
    case CC2420_RXFIFO:
#line 91
      CC2420ReceiveP$RXFIFO$writeDone(arg_0x40754d60, arg_0x40754ee8, arg_0x40753088);
#line 91
      break;
#line 91
    default:
#line 91
      CC2420SpiP$Fifo$default$writeDone(arg_0x40761880, arg_0x40754d60, arg_0x40754ee8, arg_0x40753088);
#line 91
      break;
#line 91
    }
#line 91
}
#line 91
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
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
# 254 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline    void CC2420ActiveMessageP$RadioBackoff$default$requestCongestionBackoff(am_id_t id, 
message_t *msg)
#line 255
{
}

# 88 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static   void CC2420ActiveMessageP$RadioBackoff$requestCongestionBackoff(am_id_t arg_0x403afa78, message_t *arg_0x4039acb0){
#line 88
    CC2420ActiveMessageP$RadioBackoff$default$requestCongestionBackoff(arg_0x403afa78, arg_0x4039acb0);
#line 88
}
#line 88
# 202 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline   void CC2420ActiveMessageP$SubBackoff$requestCongestionBackoff(message_t *msg)
#line 202
{
  CC2420ActiveMessageP$RadioBackoff$requestCongestionBackoff(__nesc_ntoh_leuint8((unsigned char *)&((cc2420_header_t *)((uint8_t *)msg + (size_t )& ((message_t *)0)->data - sizeof(cc2420_header_t )))->type), msg);
}

# 88 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static   void CC2420CsmaP$RadioBackoff$requestCongestionBackoff(message_t *arg_0x4039acb0){
#line 88
  CC2420ActiveMessageP$SubBackoff$requestCongestionBackoff(arg_0x4039acb0);
#line 88
}
#line 88
# 231 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline   void CC2420TransmitP$RadioBackoff$setCongestionBackoff(uint16_t backoffTime)
#line 231
{
  CC2420TransmitP$myCongestionBackoff = backoffTime + 1;
}

# 66 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static   void CC2420CsmaP$SubBackoff$setCongestionBackoff(uint16_t arg_0x4039bbe0){
#line 66
  CC2420TransmitP$RadioBackoff$setCongestionBackoff(arg_0x4039bbe0);
#line 66
}
#line 66
# 224 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline   void CC2420CsmaP$SubBackoff$requestCongestionBackoff(message_t *msg)
#line 224
{
  CC2420CsmaP$SubBackoff$setCongestionBackoff(CC2420CsmaP$Random$rand16()
   % (0x7 * CC2420_BACKOFF_PERIOD) + CC2420_MIN_BACKOFF);

  CC2420CsmaP$RadioBackoff$requestCongestionBackoff(msg);
}

# 88 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static   void CC2420TransmitP$RadioBackoff$requestCongestionBackoff(message_t *arg_0x4039acb0){
#line 88
  CC2420CsmaP$SubBackoff$requestCongestionBackoff(arg_0x4039acb0);
#line 88
}
#line 88
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline   uint16_t HplAtm128Timer1P$Timer$get(void)
#line 49
{
#line 49
  return * (volatile uint16_t *)(0x2C + 0x20);
}

# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$timer_size /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$get(void){
#line 52
  unsigned short result;
#line 52

#line 52
  result = HplAtm128Timer1P$Timer$get();
#line 52

#line 52
  return result;
#line 52
}
#line 52
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline   /*CounterOne16C.NCounter*/Atm128CounterC$0$timer_size /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$get(void)
{
  return /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$get();
}

# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$size_type /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$get(void){
#line 53
  unsigned short result;
#line 53

#line 53
  result = /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$get();
#line 53

#line 53
  return result;
#line 53
}
#line 53
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static   Atm128_TIFR_t HplAtm128Timer1P$Timer0Ctrl$getInterruptFlag(void){
#line 44
  union __nesc_unnamed4272 result;
#line 44

#line 44
  result = HplAtm128Timer0AsyncP$TimerCtrl$getInterruptFlag();
#line 44

#line 44
  return result;
#line 44
}
#line 44
# 144 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline   bool HplAtm128Timer1P$Timer$test(void)
#line 144
{
  return HplAtm128Timer1P$Timer0Ctrl$getInterruptFlag().bits.tov1;
}

# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   bool /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$test(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = HplAtm128Timer1P$Timer$test();
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline   bool /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$isOverflowPending(void)
{
  return /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$test();
}

# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   bool /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$isOverflowPending(void){
#line 60
  unsigned char result;
#line 60

#line 60
  result = /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$isOverflowPending();
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 133 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline   void HplAtm128Timer1P$CompareA$start(void)
#line 133
{
#line 133
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 4;
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$start(void){
#line 56
  HplAtm128Timer1P$CompareA$start();
#line 56
}
#line 56
# 127 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline   void HplAtm128Timer1P$CompareA$reset(void)
#line 127
{
#line 127
  * (volatile uint8_t *)(0x36 + 0x20) = 1 << 4;
}

# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$reset(void){
#line 53
  HplAtm128Timer1P$CompareA$reset();
#line 53
}
#line 53
# 183 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline   void HplAtm128Timer1P$CompareA$set(uint16_t t)
#line 183
{
#line 183
  * (volatile uint16_t *)(0x2A + 0x20) = t;
}

# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$set(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$size_type arg_0x405c8e40){
#line 45
  HplAtm128Timer1P$CompareA$set(arg_0x405c8e40);
#line 45
}
#line 45
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$timer_size /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$get(void){
#line 52
  unsigned short result;
#line 52

#line 52
  result = HplAtm128Timer1P$Timer$get();
#line 52

#line 52
  return result;
#line 52
}
#line 52
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$timer_size t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$timer_size dt)
#line 74
{
  /* atomic removed: atomic calls only */






  {
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$timer_size now;
#line 83
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$timer_size elapsed;
#line 83
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$timer_size expires;

    ;


    now = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$get();
    elapsed = now + 3 - t0;
    if (elapsed >= dt) {
      expires = now + 3;
      }
    else {
#line 93
      expires = t0 + dt;
      }



    if (expires == 0) {
      expires = 1;
      }



    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$set(expires - 1);
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$reset();
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$start();
  }
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$size_type arg_0x4045a9e0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$size_type arg_0x4045ab70){
#line 92
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$startAt(arg_0x4045a9e0, arg_0x4045ab70);
#line 92
}
#line 92
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static   cc2420_status_t CC2420ControlP$RXCTRL1$write(uint16_t arg_0x404615d8){
#line 55
  unsigned char result;
#line 55

#line 55
  result = CC2420SpiP$Reg$write(CC2420_RXCTRL1, arg_0x404615d8);
#line 55

#line 55
  return result;
#line 55
}
#line 55
inline static   cc2420_status_t CC2420ControlP$IOCFG0$write(uint16_t arg_0x404615d8){
#line 55
  unsigned char result;
#line 55

#line 55
  result = CC2420SpiP$Reg$write(CC2420_IOCFG0, arg_0x404615d8);
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
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
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t HplCC2420InterruptsP$CCATask$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(HplCC2420InterruptsP$CCATask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   bool /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$get(void)
#line 45
{
#line 45
  return (* (volatile uint8_t *)48U & (1 << 6)) != 0;
}

# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   bool HplCC2420InterruptsP$CC_CCA$get(void){
#line 32
  unsigned char result;
#line 32

#line 32
  result = /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$get();
#line 32

#line 32
  return result;
#line 32
}
#line 32
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/micaz/chips/cc2420/HplCC2420InterruptsP.nc"
static inline   error_t HplCC2420InterruptsP$CCA$enableRisingEdge(void)
#line 89
{
  /* atomic removed: atomic calls only */
#line 90
  HplCC2420InterruptsP$ccaWaitForState = TRUE;
  /* atomic removed: atomic calls only */
#line 91
  HplCC2420InterruptsP$ccaCheckDisabled = FALSE;
  HplCC2420InterruptsP$ccaLastState = HplCC2420InterruptsP$CC_CCA$get();
  HplCC2420InterruptsP$CCATask$postTask();
  return SUCCESS;
}

# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static   error_t CC2420ControlP$InterruptCCA$enableRisingEdge(void){
#line 42
  unsigned char result;
#line 42

#line 42
  result = HplCC2420InterruptsP$CCA$enableRisingEdge();
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static   cc2420_status_t CC2420ControlP$IOCFG1$write(uint16_t arg_0x404615d8){
#line 55
  unsigned char result;
#line 55

#line 55
  result = CC2420SpiP$Reg$write(CC2420_IOCFG1, arg_0x404615d8);
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 207 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline   error_t CC2420ControlP$CC2420Power$startOscillator(void)
#line 207
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 208
    {
      if (CC2420ControlP$m_state != CC2420ControlP$S_VREG_STARTED) {
          {
            unsigned char __nesc_temp = 
#line 210
            FAIL;

            {
#line 210
              __nesc_atomic_end(__nesc_atomic); 
#line 210
              return __nesc_temp;
            }
          }
        }
#line 213
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
#line 233
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
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
# 208 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline  void CC2420CsmaP$Resource$granted(void)
#line 208
{
  CC2420CsmaP$CC2420Power$startOscillator();
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static  void CC2420ControlP$Resource$granted(void){
#line 92
  CC2420CsmaP$Resource$granted();
#line 92
}
#line 92
# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420ControlP$CSN$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$clr();
#line 30
}
#line 30
# 390 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline  void CC2420ControlP$SpiResource$granted(void)
#line 390
{
  CC2420ControlP$CSN$clr();
  CC2420ControlP$Resource$granted();
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
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
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
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
# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420ControlP$CSN$set(void){
#line 29
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$set();
#line 29
}
#line 29
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
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
# 376 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline  void CC2420ControlP$SyncResource$granted(void)
#line 376
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

#line 509
static inline   void CC2420ControlP$ReadRssi$default$readDone(error_t error, uint16_t data)
#line 509
{
}

# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Read.nc"
inline static  void CC2420ControlP$ReadRssi$readDone(error_t arg_0x40441ce8, CC2420ControlP$ReadRssi$val_t arg_0x40441e70){
#line 63
  CC2420ControlP$ReadRssi$default$readDone(arg_0x40441ce8, arg_0x40441e70);
#line 63
}
#line 63
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
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
# 287 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline   cc2420_status_t CC2420SpiP$Reg$read(uint8_t addr, uint16_t *data)
#line 287
{

  cc2420_status_t status = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 291
    {
      if (CC2420SpiP$WorkingState$isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 293
            status;

            {
#line 293
              __nesc_atomic_end(__nesc_atomic); 
#line 293
              return __nesc_temp;
            }
          }
        }
    }
#line 297
    __nesc_atomic_end(__nesc_atomic); }
#line 297
  status = CC2420SpiP$SpiByte$write(addr | 0x40);
  *data = (uint16_t )CC2420SpiP$SpiByte$write(0) << 8;
  *data |= CC2420SpiP$SpiByte$write(0);

  return status;
}

# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static   cc2420_status_t CC2420ControlP$RSSI$read(uint16_t *arg_0x40461068){
#line 47
  unsigned char result;
#line 47

#line 47
  result = CC2420SpiP$Reg$read(CC2420_RSSI, arg_0x40461068);
#line 47

#line 47
  return result;
#line 47
}
#line 47
# 395 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline  void CC2420ControlP$RssiResource$granted(void)
#line 395
{
  uint16_t data;

#line 397
  CC2420ControlP$CSN$clr();
  CC2420ControlP$RSSI$read(&data);
  CC2420ControlP$CSN$set();

  CC2420ControlP$RssiResource$release();
  data += 0x7f;
  data &= 0x00ff;
  CC2420ControlP$ReadRssi$readDone(SUCCESS, data);
}

# 381 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline  void CC2420TransmitP$SpiResource$granted(void)
#line 381
{
  uint8_t cur_state;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 384
    {
      cur_state = CC2420TransmitP$m_state;
    }
#line 386
    __nesc_atomic_end(__nesc_atomic); }

  switch (cur_state) {
      case CC2420TransmitP$S_LOAD: 
        CC2420TransmitP$loadTXFIFO();
      break;

      case CC2420TransmitP$S_BEGIN_TRANSMIT: 
        CC2420TransmitP$attemptSend();
      break;

      case CC2420TransmitP$S_CANCEL: 
        CC2420TransmitP$CSN$clr();
      CC2420TransmitP$SFLUSHTX$strobe();
      CC2420TransmitP$CSN$set();
      CC2420TransmitP$releaseSpiResource();
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 402
        {
          CC2420TransmitP$m_state = CC2420TransmitP$S_STARTED;
        }
#line 404
        __nesc_atomic_end(__nesc_atomic); }
      CC2420TransmitP$Send$sendDone(CC2420TransmitP$m_msg, ECANCEL);
      break;

      default: 
        CC2420TransmitP$releaseSpiResource();
      break;
    }
}

# 186 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline  void CC2420ReceiveP$SpiResource$granted(void)
#line 186
{
  CC2420ReceiveP$receive();
}

# 367 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline   void CC2420SpiP$Resource$default$granted(uint8_t id)
#line 367
{
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static  void CC2420SpiP$Resource$granted(uint8_t arg_0x40762ea8){
#line 92
  switch (arg_0x40762ea8) {
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
      CC2420SpiP$Resource$default$granted(arg_0x40762ea8);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 358 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline  void CC2420SpiP$grant$runTask(void)
#line 358
{
  uint8_t holder;

#line 360
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 360
    {
      holder = CC2420SpiP$m_holder;
    }
#line 362
    __nesc_atomic_end(__nesc_atomic); }
  CC2420SpiP$Resource$granted(holder);
}

# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static   cc2420_status_t CC2420ControlP$FSCTRL$write(uint16_t arg_0x404615d8){
#line 55
  unsigned char result;
#line 55

#line 55
  result = CC2420SpiP$Reg$write(CC2420_FSCTRL, arg_0x404615d8);
#line 55

#line 55
  return result;
#line 55
}
#line 55
inline static   cc2420_status_t CC2420ControlP$MDMCTRL0$write(uint16_t arg_0x404615d8){
#line 55
  unsigned char result;
#line 55

#line 55
  result = CC2420SpiP$Reg$write(CC2420_MDMCTRL0, arg_0x404615d8);
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
inline static   cc2420_status_t CC2420ControlP$PANID$write(uint8_t arg_0x40465d08, uint8_t *arg_0x40465eb0, uint8_t arg_0x40463068){
#line 63
  unsigned char result;
#line 63

#line 63
  result = CC2420SpiP$Ram$write(CC2420_RAM_PANID, arg_0x40465d08, arg_0x40465eb0, arg_0x40463068);
#line 63

#line 63
  return result;
#line 63
}
#line 63
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
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
# 212 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline   void CC2420CsmaP$CC2420Power$startOscillatorDone(void)
#line 212
{
  CC2420CsmaP$startDone_task$postTask();
}

# 76 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static   void CC2420ControlP$CC2420Power$startOscillatorDone(void){
#line 76
  CC2420CsmaP$CC2420Power$startOscillatorDone();
#line 76
}
#line 76
# 105 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/micaz/chips/cc2420/HplCC2420InterruptsP.nc"
static inline   error_t HplCC2420InterruptsP$CCA$disable(void)
#line 105
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 106
    HplCC2420InterruptsP$ccaCheckDisabled = TRUE;
#line 106
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static   error_t CC2420ControlP$InterruptCCA$disable(void){
#line 50
  unsigned char result;
#line 50

#line 50
  result = HplCC2420InterruptsP$CCA$disable();
#line 50

#line 50
  return result;
#line 50
}
#line 50
# 418 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline   void CC2420ControlP$InterruptCCA$fired(void)
#line 418
{
  CC2420ControlP$m_state = CC2420ControlP$S_XOSC_STARTED;
  CC2420ControlP$InterruptCCA$disable();
  CC2420ControlP$IOCFG1$write(0);
  CC2420ControlP$writeId();
  CC2420ControlP$CSN$set();
  CC2420ControlP$CSN$clr();
  CC2420ControlP$CC2420Power$startOscillatorDone();
}

# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static   void HplCC2420InterruptsP$CCA$fired(void){
#line 57
  CC2420ControlP$InterruptCCA$fired();
#line 57
}
#line 57
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/micaz/chips/cc2420/HplCC2420InterruptsP.nc"
static inline  void HplCC2420InterruptsP$CCATask$runTask(void)
#line 69
{
  uint8_t CCAState;

#line 71
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 71
    {
      if (HplCC2420InterruptsP$ccaCheckDisabled) {
          {
#line 73
            __nesc_atomic_end(__nesc_atomic); 
#line 73
            return;
          }
        }
    }
#line 76
    __nesc_atomic_end(__nesc_atomic); }

  CCAState = HplCC2420InterruptsP$CC_CCA$get();
  if (HplCC2420InterruptsP$ccaLastState != HplCC2420InterruptsP$ccaWaitForState && CCAState == HplCC2420InterruptsP$ccaWaitForState) {
      HplCC2420InterruptsP$CCA$fired();
    }



  HplCC2420InterruptsP$ccaLastState = CCAState;
  HplCC2420InterruptsP$CCATask$postTask();
}

# 191 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline  void CC2420ActiveMessageP$CC2420Config$syncDone(error_t error)
#line 191
{
}

# 347 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline  void CC2420ReceiveP$CC2420Config$syncDone(error_t error)
#line 347
{
}

# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static  void CC2420ControlP$CC2420Config$syncDone(error_t arg_0x403c04c8){
#line 53
  CC2420ReceiveP$CC2420Config$syncDone(arg_0x403c04c8);
#line 53
  CC2420ActiveMessageP$CC2420Config$syncDone(arg_0x403c04c8);
#line 53
}
#line 53
# 446 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline  void CC2420ControlP$syncDone$runTask(void)
#line 446
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 447
    CC2420ControlP$m_sync_busy = FALSE;
#line 447
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ControlP$CC2420Config$syncDone(SUCCESS);
}

# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
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
# 300 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline  error_t CC2420ControlP$CC2420Config$sync(void)
#line 300
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 301
    {
      if (CC2420ControlP$m_sync_busy) {
          {
            unsigned char __nesc_temp = 
#line 303
            FAIL;

            {
#line 303
              __nesc_atomic_end(__nesc_atomic); 
#line 303
              return __nesc_temp;
            }
          }
        }
#line 306
      CC2420ControlP$m_sync_busy = TRUE;
      if (CC2420ControlP$m_state == CC2420ControlP$S_XOSC_STARTED) {
          CC2420ControlP$SyncResource$request();
        }
      else 
#line 309
        {
          CC2420ControlP$syncDone$postTask();
        }
    }
#line 312
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

#line 442
static inline  void CC2420ControlP$sync$runTask(void)
#line 442
{
  CC2420ControlP$CC2420Config$sync();
}

# 181 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
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

# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  void CC2420ActiveMessageP$AMSend$sendDone(am_id_t arg_0x403b2c18, message_t *arg_0x403561c0, error_t arg_0x40356348){
#line 99
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(arg_0x403b2c18, arg_0x403561c0, arg_0x40356348);
#line 99
}
#line 99
# 165 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline  void CC2420ActiveMessageP$SubSend$sendDone(message_t *msg, error_t result)
#line 165
{
  CC2420ActiveMessageP$AMSend$sendDone(CC2420ActiveMessageP$AMPacket$type(msg), msg, result);
}

# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static  void UniqueSendP$Send$sendDone(message_t *arg_0x403b3e18, error_t arg_0x403bc010){
#line 89
  CC2420ActiveMessageP$SubSend$sendDone(arg_0x403b3e18, arg_0x403bc010);
#line 89
}
#line 89
# 104 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline  void UniqueSendP$SubSend$sendDone(message_t *msg, error_t error)
#line 104
{
  UniqueSendP$State$toIdle();
  UniqueSendP$Send$sendDone(msg, error);
}

# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static  void CC2420TinyosNetworkP$Send$sendDone(message_t *arg_0x403b3e18, error_t arg_0x403bc010){
#line 89
  UniqueSendP$SubSend$sendDone(arg_0x403b3e18, arg_0x403bc010);
#line 89
}
#line 89
# 79 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline  void CC2420TinyosNetworkP$SubSend$sendDone(message_t *msg, error_t error)
#line 79
{
  CC2420TinyosNetworkP$Send$sendDone(msg, error);
}

# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static  void CC2420CsmaP$Send$sendDone(message_t *arg_0x403b3e18, error_t arg_0x403bc010){
#line 89
  CC2420TinyosNetworkP$SubSend$sendDone(arg_0x403b3e18, arg_0x403bc010);
#line 89
}
#line 89
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
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
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
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
# 269 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP$shutdown(void)
#line 269
{
  CC2420CsmaP$SubControl$stop();
  CC2420CsmaP$CC2420Power$stopVReg();
  CC2420CsmaP$stopDone_task$postTask();
}

#line 238
static inline  void CC2420CsmaP$sendDone_task$runTask(void)
#line 238
{
  error_t packetErr;

#line 240
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 240
    packetErr = CC2420CsmaP$sendErr;
#line 240
    __nesc_atomic_end(__nesc_atomic); }
  if (CC2420CsmaP$SplitControlState$isState(CC2420CsmaP$S_STOPPING)) {
      CC2420CsmaP$shutdown();
    }
  else {
      CC2420CsmaP$SplitControlState$forceState(CC2420CsmaP$S_STARTED);
    }

  CC2420CsmaP$Send$sendDone(CC2420CsmaP$m_msg, packetErr);
}

# 138 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline   void HplAtm128Timer1P$Capture$stop(void)
#line 138
{
#line 138
  * (volatile uint8_t *)(0x37 + 0x20) &= ~(1 << 5);
}

# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static   void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$stop(void){
#line 61
  HplAtm128Timer1P$Capture$stop();
#line 61
}
#line 61
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static inline   void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$disable(void)
#line 60
{
  /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$stop();
}

# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioCapture.nc"
inline static   void CC2420TransmitP$CaptureSFD$disable(void){
#line 55
  /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$disable();
#line 55
}
#line 55
# 159 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
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

# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$disable(void)
#line 43
{
#line 43
  * (volatile uint8_t *)(0x39 + 0x20) &= ~(1 << 6);
}

# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$disable(void){
#line 40
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$disable();
#line 40
}
#line 40
# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline   error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$disable(void)
#line 33
{
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$disable();
  return SUCCESS;
}

# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static   error_t CC2420ReceiveP$InterruptFIFOP$disable(void){
#line 50
  unsigned char result;
#line 50

#line 50
  result = /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$disable();
#line 50

#line 50
  return result;
#line 50
}
#line 50
# 134 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline  error_t CC2420ReceiveP$StdControl$stop(void)
#line 134
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 135
    {
      CC2420ReceiveP$m_state = CC2420ReceiveP$S_STOPPED;
      CC2420ReceiveP$reset_state();
      CC2420ReceiveP$CSN$set();
      CC2420ReceiveP$InterruptFIFOP$disable();
    }
#line 140
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$clr(void)
#line 47
{
#line 47
  * (volatile uint8_t *)59U &= ~(1 << 5);
}

# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420ControlP$VREN$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$clr();
#line 30
}
#line 30
# 103 "TestM.nc"
static inline  void TestM$SplitControl$stopDone(error_t e)
#line 103
{
}

# 117 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static  void NetControlM$SplitControl$stopDone(error_t arg_0x40325ee0){
#line 117
  TestM$SplitControl$stopDone(arg_0x40325ee0);
#line 117
}
#line 117
# 70 "../../../tos/lib/net/tymo/dymo/NetControlM.nc"
static inline  void NetControlM$AMControl$stopDone(error_t e)
#line 70
{
  NetControlM$SplitControl$stopDone(e);
}

# 117 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static  void CC2420CsmaP$SplitControl$stopDone(error_t arg_0x40325ee0){
#line 117
  NetControlM$AMControl$stopDone(arg_0x40325ee0);
#line 117
}
#line 117
# 259 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline  void CC2420CsmaP$stopDone_task$runTask(void)
#line 259
{
  CC2420CsmaP$SplitControlState$forceState(CC2420CsmaP$S_STOPPED);
  CC2420CsmaP$SplitControl$stopDone(SUCCESS);
}

# 143 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(), dt, FALSE);
}

# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void TestM$Timer$startPeriodic(uint32_t arg_0x4035a420){
#line 53
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(3U, arg_0x4035a420);
#line 53
}
#line 53
# 57 "TestM.nc"
static inline  void TestM$SplitControl$startDone(error_t e)
#line 57
{
  if (TestM$MHPacket$address() == TestM$ORIGIN) {
      TestM$Timer$startPeriodic(2048);
    }
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static  void NetControlM$SplitControl$startDone(error_t arg_0x40325330){
#line 92
  TestM$SplitControl$startDone(arg_0x40325330);
#line 92
}
#line 92
# 43 "../../../tos/lib/net/tymo/dymo/NetControlM.nc"
static inline  void NetControlM$AMControl$startDone(error_t e)
#line 43
{
  if (e == SUCCESS) {
      if (NetControlM$started++ == 2) {
        NetControlM$SplitControl$startDone(e);
        }
    }
  else {
#line 47
    if (NetControlM$started) {
        NetControlM$started = 0;
        NetControlM$SplitControl$startDone(e);
      }
    }
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static  void CC2420CsmaP$SplitControl$startDone(error_t arg_0x40325330){
#line 92
  NetControlM$AMControl$startDone(arg_0x40325330);
#line 92
}
#line 92
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
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
# 179 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline   error_t CC2420ControlP$Resource$release(void)
#line 179
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 180
    {
      CC2420ControlP$CSN$set();
      {
        unsigned char __nesc_temp = 
#line 182
        CC2420ControlP$SpiResource$release();

        {
#line 182
          __nesc_atomic_end(__nesc_atomic); 
#line 182
          return __nesc_temp;
        }
      }
    }
#line 185
    __nesc_atomic_end(__nesc_atomic); }
}

# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
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
# 249 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline   error_t CC2420ControlP$CC2420Power$rxOn(void)
#line 249
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 250
    {
      if (CC2420ControlP$m_state != CC2420ControlP$S_XOSC_STARTED) {
          {
            unsigned char __nesc_temp = 
#line 252
            FAIL;

            {
#line 252
              __nesc_atomic_end(__nesc_atomic); 
#line 252
              return __nesc_temp;
            }
          }
        }
#line 254
      CC2420ControlP$SRXON$strobe();
    }
#line 255
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 90 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
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
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$enable(void)
#line 42
{
#line 42
  * (volatile uint8_t *)(0x39 + 0x20) |= 1 << 6;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$enable(void){
#line 35
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$enable();
#line 35
}
#line 35
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$edge(bool low_to_high)
#line 47
{
  * (volatile uint8_t *)90U |= 1 << 5;

  if (low_to_high) {
    * (volatile uint8_t *)90U |= 1 << 4;
    }
  else {
#line 53
    * (volatile uint8_t *)90U &= ~(1 << 4);
    }
}

# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$edge(bool arg_0x406f48a0){
#line 59
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$edge(arg_0x406f48a0);
#line 59
}
#line 59
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$clear(void)
#line 41
{
#line 41
  * (volatile uint8_t *)(0x38 + 0x20) = 1 << 6;
}

# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$clear(void){
#line 45
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$clear();
#line 45
}
#line 45
# 15 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$enable(bool rising)
#line 15
{
  /* atomic removed: atomic calls only */
#line 16
  {
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$disable();
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$clear();
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$edge(rising);
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$enable();
  }
  return SUCCESS;
}





static inline   error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$enableFallingEdge(void)
#line 29
{
  return /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$enable(FALSE);
}

# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static   error_t CC2420ReceiveP$InterruptFIFOP$enableFallingEdge(void){
#line 43
  unsigned char result;
#line 43

#line 43
  result = /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$enableFallingEdge();
#line 43

#line 43
  return result;
#line 43
}
#line 43
# 124 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline  error_t CC2420ReceiveP$StdControl$start(void)
#line 124
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 125
    {
      CC2420ReceiveP$reset_state();
      CC2420ReceiveP$m_state = CC2420ReceiveP$S_STARTED;
      CC2420ReceiveP$receivingPacket = FALSE;
      CC2420ReceiveP$InterruptFIFOP$enableFallingEdge();
    }
#line 130
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static inline   error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captureRisingEdge(void)
#line 52
{
  return /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$enableCapture(TRUE);
}

# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioCapture.nc"
inline static   error_t CC2420TransmitP$CaptureSFD$captureRisingEdge(void){
#line 42
  unsigned char result;
#line 42

#line 42
  result = /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captureRisingEdge();
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 148 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
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

# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/StdControl.nc"
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
# 251 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline  void CC2420CsmaP$startDone_task$runTask(void)
#line 251
{
  CC2420CsmaP$SubControl$start();
  CC2420CsmaP$CC2420Power$rxOn();
  CC2420CsmaP$Resource$release();
  CC2420CsmaP$SplitControlState$forceState(CC2420CsmaP$S_STARTED);
  CC2420CsmaP$SplitControl$startDone(SUCCESS);
}

# 122 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline   void HplAtm128Timer1P$Capture$setEdge(bool up)
#line 122
{
#line 122
  if (up) {
#line 122
    * (volatile uint8_t *)(0x2E + 0x20) |= 1 << 6;
    }
  else {
#line 122
    * (volatile uint8_t *)(0x2E + 0x20) &= ~(1 << 6);
    }
}

# 79 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static   void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$setEdge(bool arg_0x405cc968){
#line 79
  HplAtm128Timer1P$Capture$setEdge(arg_0x405cc968);
#line 79
}
#line 79
# 132 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline   void HplAtm128Timer1P$Capture$start(void)
#line 132
{
#line 132
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 5;
}

# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static   void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$start(void){
#line 58
  HplAtm128Timer1P$Capture$start();
#line 58
}
#line 58
# 54 "../../../tos/lib/net/tymo/dymo/DymoTableM.nc"
static inline  error_t /*DymoTableC.DymoTableM*/DymoTableM$0$StdControl$stop(void)
#line 54
{
  uint8_t i;

#line 56
  for (i = 0; i < /*DymoTableC.DymoTableM*/DymoTableM$0$num_entries; i++) {
      if (!(/*DymoTableC.DymoTableM*/DymoTableM$0$table[i].flags & FLAG_DELETED)) {
          /*DymoTableC.DymoTableM*/DymoTableM$0$cancel_timers(i);
        }
    }
  return SUCCESS;
}

# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static  error_t NetControlM$TableControl$stop(void){
#line 84
  unsigned char result;
#line 84

#line 84
  result = /*DymoTableC.DymoTableM*/DymoTableM$0$StdControl$stop();
#line 84

#line 84
  return result;
#line 84
}
#line 84
# 97 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline  error_t CC2420CsmaP$SplitControl$stop(void)
#line 97
{
  if (CC2420CsmaP$SplitControlState$isState(CC2420CsmaP$S_STARTED)) {
      CC2420CsmaP$SplitControlState$forceState(CC2420CsmaP$S_STOPPING);
      CC2420CsmaP$shutdown();
      return SUCCESS;
    }
  else {
#line 103
    if (CC2420CsmaP$SplitControlState$isState(CC2420CsmaP$S_STOPPED)) {
        return EALREADY;
      }
    else {
#line 106
      if (CC2420CsmaP$SplitControlState$isState(CC2420CsmaP$S_TRANSMITTING)) {
          CC2420CsmaP$SplitControlState$forceState(CC2420CsmaP$S_STOPPING);

          return SUCCESS;
        }
      else {
#line 111
        if (CC2420CsmaP$SplitControlState$isState(CC2420CsmaP$S_STOPPING)) {
            return SUCCESS;
          }
        }
      }
    }
#line 115
  return EBUSY;
}

# 109 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static  error_t NetControlM$AMControl$stop(void){
#line 109
  unsigned char result;
#line 109

#line 109
  result = CC2420CsmaP$SplitControl$stop();
#line 109

#line 109
  return result;
#line 109
}
#line 109
# 63 "../../../tos/lib/net/tymo/dymo/NetControlM.nc"
static inline  error_t NetControlM$SplitControl$stop(void)
#line 63
{
  if (NetControlM$AMControl$stop() == SUCCESS) {
    return NetControlM$TableControl$stop();
    }
  else {
#line 67
    return FAIL;
    }
}

# 109 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static  error_t TestM$SplitControl$stop(void){
#line 109
  unsigned char result;
#line 109

#line 109
  result = NetControlM$SplitControl$stop();
#line 109

#line 109
  return result;
#line 109
}
#line 109
# 49 "TestM.nc"
static inline  void TestM$stop$runTask(void)
#line 49
{
  TestM$SplitControl$stop();
}

# 82 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static inline   am_group_t ActiveMessageAddressC$ActiveMessageAddress$amGroup(void)
#line 82
{
  am_group_t myGroup;

  /* atomic removed: atomic calls only */
#line 84
  myGroup = ActiveMessageAddressC$group;
  return myGroup;
}

# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
inline static   am_group_t CC2420ControlP$ActiveMessageAddress$amGroup(void){
#line 55
  unsigned char result;
#line 55

#line 55
  result = ActiveMessageAddressC$ActiveMessageAddress$amGroup();
#line 55

#line 55
  return result;
#line 55
}
#line 55
#line 50
inline static   am_addr_t CC2420ControlP$ActiveMessageAddress$amAddress(void){
#line 50
  unsigned short result;
#line 50

#line 50
  result = ActiveMessageAddressC$ActiveMessageAddress$amAddress();
#line 50

#line 50
  return result;
#line 50
}
#line 50
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)58U |= 1 << 5;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420ControlP$VREN$makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$makeOutput();
#line 35
}
#line 35
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)58U |= 1 << 6;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420ControlP$RSTN$makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$makeOutput();
#line 35
}
#line 35
inline static   void CC2420ControlP$CSN$makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$makeOutput();
#line 35
}
#line 35
# 121 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline  error_t CC2420ControlP$Init$init(void)
#line 121
{
  CC2420ControlP$CSN$makeOutput();
  CC2420ControlP$RSTN$makeOutput();
  CC2420ControlP$VREN$makeOutput();

  CC2420ControlP$m_short_addr = CC2420ControlP$ActiveMessageAddress$amAddress();
  CC2420ControlP$m_pan = CC2420ControlP$ActiveMessageAddress$amGroup();
  CC2420ControlP$m_tx_power = 1;
  CC2420ControlP$m_channel = 26;





  CC2420ControlP$addressRecognition = TRUE;





  CC2420ControlP$hwAddressRecognition = FALSE;






  CC2420ControlP$autoAckEnabled = TRUE;






  CC2420ControlP$hwAutoAckDefault = FALSE;



  return SUCCESS;
}

# 81 "/opt/CVSTinyOS/tinyos-2.x/tos/system/StateImplP.nc"
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

# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline  error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$Init$init(void)
#line 45
{
  memset(/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ, /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY, sizeof /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ);
  return SUCCESS;
}

# 22 "/opt/CVSTinyOS/tinyos-2.x/tos/system/NoInitC.nc"
static inline  error_t NoInitC$Init$init(void)
#line 22
{
  return SUCCESS;
}

# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$makeInput(void)
#line 50
{
#line 50
  * (volatile uint8_t *)49U &= ~(1 << 4);
}

# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420TransmitP$SFD$makeInput(void){
#line 33
  /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$makeInput();
#line 33
}
#line 33


inline static   void CC2420TransmitP$CSN$makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$makeOutput();
#line 35
}
#line 35
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$makeInput(void)
#line 50
{
#line 50
  * (volatile uint8_t *)49U &= ~(1 << 6);
}

# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420TransmitP$CCA$makeInput(void){
#line 33
  /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$makeInput();
#line 33
}
#line 33
# 140 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline  error_t CC2420TransmitP$Init$init(void)
#line 140
{
  CC2420TransmitP$CCA$makeInput();
  CC2420TransmitP$CSN$makeOutput();
  CC2420TransmitP$SFD$makeInput();
  return SUCCESS;
}

# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline  error_t CC2420ReceiveP$Init$init(void)
#line 118
{
  CC2420ReceiveP$m_p_rx_buf = &CC2420ReceiveP$m_rx_buf;
  return SUCCESS;
}

# 122 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline   void HplAtm128Timer0AsyncP$Compare$start(void)
#line 122
{
#line 122
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 1;
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$start(void){
#line 56
  HplAtm128Timer0AsyncP$Compare$start();
#line 56
}
#line 56
# 76 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline   void HplAtm128Timer0AsyncP$TimerCtrl$setControl(Atm128TimerControl_t x)
#line 76
{
  * (volatile uint8_t *)(0x33 + 0x20) = x.flat;
}

# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$setControl(Atm128TimerControl_t arg_0x405cef28){
#line 37
  HplAtm128Timer0AsyncP$TimerCtrl$setControl(arg_0x405cef28);
#line 37
}
#line 37
# 198 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline   void HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous(void)
#line 198
{
  * (volatile uint8_t *)(0x30 + 0x20) |= 1 << 3;
}

# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$setTimer0Asynchronous(void){
#line 32
  HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous();
#line 32
}
#line 32
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline  error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init(void)
#line 54
{
  /* atomic removed: atomic calls only */
  {
    Atm128TimerControl_t x;

    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$setTimer0Asynchronous();
    x.flat = 0;
    x.bits.cs = 3;
    x.bits.wgm1 = 1;
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$setControl(x);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$start();
  }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt();
  return SUCCESS;
}

# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/system/RandomMlcgC.nc"
static inline  error_t RandomMlcgC$Init$init(void)
#line 44
{
  /* atomic removed: atomic calls only */
#line 45
  RandomMlcgC$seed = (uint32_t )(TOS_NODE_ID + 1);

  return SUCCESS;
}

# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Random.nc"
inline static   uint16_t UniqueSendP$Random$rand16(void){
#line 41
  unsigned short result;
#line 41

#line 41
  result = RandomMlcgC$Random$rand16();
#line 41

#line 41
  return result;
#line 41
}
#line 41
# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline  error_t UniqueSendP$Init$init(void)
#line 62
{
  UniqueSendP$localSendId = UniqueSendP$Random$rand16();
  return SUCCESS;
}

# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/unique/UniqueReceiveP.nc"
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

# 113 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbP.nc"
static inline  error_t At45dbP$Init$init(void)
#line 113
{
  At45dbP$request = At45dbP$IDLE;
  At45dbP$flashBusy = TRUE;


  At45dbP$buffer[0].page = At45dbP$buffer[1].page = AT45_MAX_PAGES;
  At45dbP$buffer[0].busy = At45dbP$buffer[1].busy = FALSE;
  At45dbP$buffer[0].clean = At45dbP$buffer[1].clean = TRUE;
  At45dbP$buffer[0].unchecked = At45dbP$buffer[1].unchecked = 0;
  At45dbP$buffer[0].erased = At45dbP$buffer[1].erased = FALSE;

  return SUCCESS;
}

# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline  error_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$Init$init(void)
#line 45
{
  memset(/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$resQ, /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$NO_ENTRY, sizeof /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$resQ);
  return SUCCESS;
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
inline static  error_t RealMainP$SoftwareInit$init(void){
#line 51
  unsigned char result;
#line 51

#line 51
  result = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$Init$init();
#line 51
  result = ecombine(result, At45dbP$Init$init());
#line 51
  result = ecombine(result, UniqueReceiveP$Init$init());
#line 51
  result = ecombine(result, UniqueSendP$Init$init());
#line 51
  result = ecombine(result, RandomMlcgC$Init$init());
#line 51
  result = ecombine(result, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init());
#line 51
  result = ecombine(result, CC2420ReceiveP$Init$init());
#line 51
  result = ecombine(result, CC2420TransmitP$Init$init());
#line 51
  result = ecombine(result, NoInitC$Init$init());
#line 51
  result = ecombine(result, /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$Init$init());
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
# 111 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
static inline  error_t ConfigStorageP$Mount$mount(uint8_t id)
#line 111
{


  if (ConfigStorageP$s[id].state != ConfigStorageP$S_STOPPED) {
    return FAIL;
    }
  ConfigStorageP$s[id].state = ConfigStorageP$S_MOUNT;
  ConfigStorageP$setFlip(id, FALSE);
  ConfigStorageP$BlockRead$read(id, 0, &ConfigStorageP$low[id], sizeof ConfigStorageP$low[id]);

  return SUCCESS;
}

# 25 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Mount.nc"
inline static  error_t DymoEngineM$Mount$mount(void){
#line 25
  unsigned char result;
#line 25

#line 25
  result = ConfigStorageP$Mount$mount(/*DymoServiceC.ConfigStorageC*/ConfigStorageC$0$CONFIG_ID);
#line 25

#line 25
  return result;
#line 25
}
#line 25
# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  am_addr_t DymoEngineM$AMPacket$address(void){
#line 57
  unsigned short result;
#line 57

#line 57
  result = CC2420ActiveMessageP$AMPacket$address();
#line 57

#line 57
  return result;
#line 57
}
#line 57
# 62 "../../../tos/lib/net/tymo/dymo/DymoEngineM.nc"
static inline  error_t DymoEngineM$SplitControl$start(void)
#line 62
{
  DymoEngineM$me.address = DymoEngineM$AMPacket$address();
  DymoEngineM$me.has_hopcnt = 1;
  DymoEngineM$me.hopcnt = 0;

  DymoEngineM$avail_msg = &DymoEngineM$buf_avail;
  DymoEngineM$ignoreNeeded = 0;
  DymoEngineM$sendRREP = FALSE;
  DymoEngineM$busyProcess = FALSE;
  DymoEngineM$busyIssue = FALSE;
  DymoEngineM$busySend = FALSE;
  DymoEngineM$buf_target.address = 0;





  return DymoEngineM$Mount$mount();
}

# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static  error_t NetControlM$EngineControl$start(void){
#line 83
  unsigned char result;
#line 83

#line 83
  result = DymoEngineM$SplitControl$start();
#line 83

#line 83
  return result;
#line 83
}
#line 83
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void CC2420ControlP$StartupTimer$start(CC2420ControlP$StartupTimer$size_type arg_0x4044f8c8){
#line 55
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$start(arg_0x4044f8c8);
#line 55
}
#line 55
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$set(void)
#line 46
{
#line 46
  * (volatile uint8_t *)59U |= 1 << 5;
}

# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420ControlP$VREN$set(void){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$set();
#line 29
}
#line 29
# 187 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline   error_t CC2420ControlP$CC2420Power$startVReg(void)
#line 187
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 188
    {
      if (CC2420ControlP$m_state != CC2420ControlP$S_VREG_STOPPED) {
          {
            unsigned char __nesc_temp = 
#line 190
            FAIL;

            {
#line 190
              __nesc_atomic_end(__nesc_atomic); 
#line 190
              return __nesc_temp;
            }
          }
        }
#line 192
      CC2420ControlP$m_state = CC2420ControlP$S_VREG_STARTING;
    }
#line 193
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ControlP$VREN$set();
  CC2420ControlP$StartupTimer$start(CC2420_TIME_VREN);
  return SUCCESS;
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
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
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/State.nc"
inline static   error_t CC2420CsmaP$SplitControlState$requestState(uint8_t arg_0x4041b580){
#line 45
  unsigned char result;
#line 45

#line 45
  result = StateImplP$State$requestState(1U, arg_0x4041b580);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 82 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline  error_t CC2420CsmaP$SplitControl$start(void)
#line 82
{
  if (CC2420CsmaP$SplitControlState$requestState(CC2420CsmaP$S_STARTING) == SUCCESS) {
      CC2420CsmaP$CC2420Power$startVReg();
      return SUCCESS;
    }
  else {
#line 87
    if (CC2420CsmaP$SplitControlState$isState(CC2420CsmaP$S_STARTED)) {
        return EALREADY;
      }
    else {
#line 90
      if (CC2420CsmaP$SplitControlState$isState(CC2420CsmaP$S_STARTING)) {
          return SUCCESS;
        }
      }
    }
#line 94
  return EBUSY;
}

# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static  error_t NetControlM$AMControl$start(void){
#line 83
  unsigned char result;
#line 83

#line 83
  result = CC2420CsmaP$SplitControl$start();
#line 83

#line 83
  return result;
#line 83
}
#line 83
# 47 "../../../tos/lib/net/tymo/dymo/DymoTableM.nc"
static inline  error_t /*DymoTableC.DymoTableM*/DymoTableM$0$StdControl$start(void)
#line 47
{
  /*DymoTableC.DymoTableM*/DymoTableM$0$num_entries = 0;
  /*DymoTableC.DymoTableM*/DymoTableM$0$size = 0;
  /*DymoTableC.DymoTableM*/DymoTableM$0$replace = 0;
  return SUCCESS;
}

# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static  error_t NetControlM$TableControl$start(void){
#line 74
  unsigned char result;
#line 74

#line 74
  result = /*DymoTableC.DymoTableM*/DymoTableM$0$StdControl$start();
#line 74

#line 74
  return result;
#line 74
}
#line 74
# 26 "../../../tos/lib/net/tymo/dymo/NetControlM.nc"
static inline  error_t NetControlM$SplitControl$start(void)
#line 26
{
  error_t e = NetControlM$TableControl$start();

#line 28
  NetControlM$started = 1;

  if (e == SUCCESS) {

      e = NetControlM$AMControl$start();
      if (e == SUCCESS) {
        return NetControlM$EngineControl$start();
        }
      else {
#line 36
        return e;
        }
    }
  else 
#line 38
    {
      return e;
    }
}

# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static  error_t TestM$SplitControl$start(void){
#line 83
  unsigned char result;
#line 83

#line 83
  result = NetControlM$SplitControl$start();
#line 83

#line 83
  return result;
#line 83
}
#line 83
# 53 "TestM.nc"
static inline  void TestM$Boot$booted(void)
#line 53
{
  TestM$SplitControl$start();
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Boot.nc"
inline static  void RealMainP$Boot$booted(void){
#line 49
  TestM$Boot$booted();
#line 49
}
#line 49
# 155 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline   mcu_power_t HplAtm128Timer0AsyncP$McuPowerOverride$lowestState(void)
#line 155
{
  uint8_t diff;


  if (* (volatile uint8_t *)(0x37 + 0x20) & ((1 << 1) | (1 << 0))) {




      while (* (volatile uint8_t *)(0x30 + 0x20) & (((1 << 2) | (1 << 1)) | (1 << 0))) 
        ;
      diff = * (volatile uint8_t *)(0x31 + 0x20) - * (volatile uint8_t *)(0x32 + 0x20);
      if (diff < EXT_STANDBY_T0_THRESHOLD || 
      * (volatile uint8_t *)(0x32 + 0x20) > 256 - EXT_STANDBY_T0_THRESHOLD) {
        return ATM128_POWER_EXT_STANDBY;
        }
#line 170
      return ATM128_POWER_SAVE;
    }
  else {
      return ATM128_POWER_DOWN;
    }
}

# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
inline static   mcu_power_t McuSleepC$McuPowerOverride$lowestState(void){
#line 54
  unsigned char result;
#line 54

#line 54
  result = HplAtm128Timer0AsyncP$McuPowerOverride$lowestState();
#line 54

#line 54
  return result;
#line 54
}
#line 54
# 66 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/McuSleepC.nc"
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

# 134 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/atm128hardware.h"
static inline  mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
#line 134
{
  return m1 < m2 ? m1 : m2;
}

# 97 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/McuSleepC.nc"
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
     __asm ("lpm %0, Z""\n\t" : "=r"(__result) : "z"(__addr16));__result;
  }
  );
#line 104
   __asm volatile ("sei");
   __asm volatile ("sleep");
   __asm volatile ("cli");}

# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuSleep.nc"
inline static   void SchedulerBasicP$McuSleep$sleep(void){
#line 59
  McuSleepC$McuSleep$sleep();
#line 59
}
#line 59
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SchedulerBasicP.nc"
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

# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static  void RealMainP$Scheduler$taskLoop(void){
#line 61
  SchedulerBasicP$Scheduler$taskLoop();
#line 61
}
#line 61
# 140 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static __inline void HplAtm128Timer0AsyncP$stabiliseTimer0(void)
#line 140
{
  * (volatile uint8_t *)(0x33 + 0x20) = * (volatile uint8_t *)(0x33 + 0x20);
  while (* (volatile uint8_t *)(0x30 + 0x20) & (1 << 0)) 
    ;
}

# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline   void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$1$Counter$overflow(void)
{
}

# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$overflow(void){
#line 71
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$1$Counter$overflow();
#line 71
}
#line 71
# 82 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/atm128hardware.h"
static  __inline void __nesc_enable_interrupt(void)
#line 82
{
   __asm volatile ("sei");}

# 132 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline   uint8_t HplAtm128Timer0AsyncP$Compare$get(void)
#line 132
{
#line 132
  return * (volatile uint8_t *)(0x31 + 0x20);
}

# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get(void){
#line 39
  unsigned char result;
#line 39

#line 39
  result = HplAtm128Timer0AsyncP$Compare$get();
#line 39

#line 39
  return result;
#line 39
}
#line 39
# 149 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired(void)
#line 149
{
  int overflowed;


  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base += /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get() + 1U;
  overflowed = !/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base;
  __nesc_enable_interrupt();
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt();
  if (overflowed) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$overflow();
    }
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void HplAtm128Timer0AsyncP$Compare$fired(void){
#line 49
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired();
#line 49
}
#line 49
# 230 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow(void)
#line 230
{
}

# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   void HplAtm128Timer0AsyncP$Timer$overflow(void){
#line 61
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow();
#line 61
}
#line 61
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
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
# 171 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline   error_t CC2420ControlP$Resource$request(void)
#line 171
{
  return CC2420ControlP$SpiResource$request();
}

# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
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
# 204 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline   void CC2420CsmaP$CC2420Power$startVRegDone(void)
#line 204
{
  CC2420CsmaP$Resource$request();
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static   void CC2420ControlP$CC2420Power$startVRegDone(void){
#line 56
  CC2420CsmaP$CC2420Power$startVRegDone();
#line 56
}
#line 56
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$set(void)
#line 46
{
#line 46
  * (volatile uint8_t *)59U |= 1 << 6;
}

# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420ControlP$RSTN$set(void){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$set();
#line 29
}
#line 29
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$clr(void)
#line 47
{
#line 47
  * (volatile uint8_t *)59U &= ~(1 << 6);
}

# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420ControlP$RSTN$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$clr();
#line 30
}
#line 30
# 408 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline   void CC2420ControlP$StartupTimer$fired(void)
#line 408
{
  if (CC2420ControlP$m_state == CC2420ControlP$S_VREG_STARTING) {
      CC2420ControlP$m_state = CC2420ControlP$S_VREG_STARTED;
      CC2420ControlP$RSTN$clr();
      CC2420ControlP$RSTN$set();
      CC2420ControlP$CC2420Power$startVRegDone();
    }
}

# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   bool CC2420TransmitP$CCA$get(void){
#line 32
  unsigned char result;
#line 32

#line 32
  result = /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$get();
#line 32

#line 32
  return result;
#line 32
}
#line 32
# 463 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline   void CC2420TransmitP$BackoffTimer$fired(void)
#line 463
{
  /* atomic removed: atomic calls only */
#line 464
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

        case CC2420TransmitP$S_BEGIN_TRANSMIT: 
          case CC2420TransmitP$S_CANCEL: 
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

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$fired(void){
#line 67
  CC2420TransmitP$BackoffTimer$fired();
#line 67
  CC2420ControlP$StartupTimer$fired();
#line 67
}
#line 67
# 151 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$fired(void)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_dt == 0) 
        {
          /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$fired();
        }
      else 
        {
          /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$set_alarm();
        }
    }
#line 163
    __nesc_atomic_end(__nesc_atomic); }
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$fired(void){
#line 67
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$fired();
#line 67
}
#line 67
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$fired(void)
#line 110
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$stop();
  ;
  __nesc_enable_interrupt();
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$fired();
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void HplAtm128Timer1P$CompareA$fired(void){
#line 49
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$fired();
#line 49
}
#line 49
# 198 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline    void HplAtm128Timer1P$CompareB$default$fired(void)
#line 198
{
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void HplAtm128Timer1P$CompareB$fired(void){
#line 49
  HplAtm128Timer1P$CompareB$default$fired();
#line 49
}
#line 49
# 202 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline    void HplAtm128Timer1P$CompareC$default$fired(void)
#line 202
{
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void HplAtm128Timer1P$CompareC$fired(void){
#line 49
  HplAtm128Timer1P$CompareC$default$fired();
#line 49
}
#line 49
# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
inline static   void CC2420TransmitP$PacketTimeStamp$clear(message_t *arg_0x40385120){
#line 59
  CC2420PacketP$PacketTimeStamp32khz$clear(arg_0x40385120);
#line 59
}
#line 59
# 158 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline   void CC2420ReceiveP$CC2420Receive$sfd_dropped(void)
#line 158
{
  if (CC2420ReceiveP$m_timestamp_size) {
      CC2420ReceiveP$m_timestamp_size--;
    }
}

# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static   void CC2420TransmitP$CC2420Receive$sfd_dropped(void){
#line 55
  CC2420ReceiveP$CC2420Receive$sfd_dropped();
#line 55
}
#line 55
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   bool /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$get(void)
#line 45
{
#line 45
  return (* (volatile uint8_t *)48U & (1 << 4)) != 0;
}

# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   bool CC2420TransmitP$SFD$get(void){
#line 32
  unsigned char result;
#line 32

#line 32
  result = /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$get();
#line 32

#line 32
  return result;
#line 32
}
#line 32
# 149 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline   void CC2420ReceiveP$CC2420Receive$sfd(uint32_t time)
#line 149
{
  if (CC2420ReceiveP$m_timestamp_size < CC2420ReceiveP$TIMESTAMP_QUEUE_SIZE) {
      uint8_t tail = (CC2420ReceiveP$m_timestamp_head + CC2420ReceiveP$m_timestamp_size) % 
      CC2420ReceiveP$TIMESTAMP_QUEUE_SIZE;

#line 153
      CC2420ReceiveP$m_timestamp_queue[tail] = time;
      CC2420ReceiveP$m_timestamp_size++;
    }
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static   void CC2420TransmitP$CC2420Receive$sfd(uint32_t arg_0x408f4420){
#line 49
  CC2420ReceiveP$CC2420Receive$sfd(arg_0x408f4420);
#line 49
}
#line 49
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static inline   error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captureFallingEdge(void)
#line 56
{
  return /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$enableCapture(FALSE);
}

# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioCapture.nc"
inline static   error_t CC2420TransmitP$CaptureSFD$captureFallingEdge(void){
#line 43
  unsigned char result;
#line 43

#line 43
  result = /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captureFallingEdge();
#line 43

#line 43
  return result;
#line 43
}
#line 43
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
inline static   void CC2420TransmitP$PacketTimeStamp$set(message_t *arg_0x40385648, CC2420TransmitP$PacketTimeStamp$size_type arg_0x403857d8){
#line 67
  CC2420PacketP$PacketTimeStamp32khz$set(arg_0x40385648, arg_0x403857d8);
#line 67
}
#line 67
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
inline static   uint8_t CC2420TransmitP$PacketTimeSyncOffset$get(message_t *arg_0x408df578){
#line 47
  unsigned char result;
#line 47

#line 47
  result = CC2420PacketP$PacketTimeSyncOffset$get(arg_0x408df578);
#line 47

#line 47
  return result;
#line 47
}
#line 47
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
inline static   cc2420_status_t CC2420TransmitP$TXFIFO_RAM$write(uint8_t arg_0x40465d08, uint8_t *arg_0x40465eb0, uint8_t arg_0x40463068){
#line 63
  unsigned char result;
#line 63

#line 63
  result = CC2420SpiP$Ram$write(CC2420_RAM_TXFIFO, arg_0x40465d08, arg_0x40465eb0, arg_0x40463068);
#line 63

#line 63
  return result;
#line 63
}
#line 63
# 158 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline   bool CC2420PacketP$PacketTimeSyncOffset$isSet(message_t *msg)
{
  return __nesc_ntoh_int8((unsigned char *)&CC2420PacketP$CC2420PacketBody$getMetadata(msg)->timesync);
}

# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
inline static   bool CC2420TransmitP$PacketTimeSyncOffset$isSet(message_t *arg_0x408df030){
#line 39
  unsigned char result;
#line 39

#line 39
  result = CC2420PacketP$PacketTimeSyncOffset$isSet(arg_0x408df030);
#line 39

#line 39
  return result;
#line 39
}
#line 39
# 98 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   CC2420TransmitP$BackoffTimer$size_type CC2420TransmitP$BackoffTimer$getNow(void){
#line 98
  unsigned long result;
#line 98

#line 98
  result = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$getNow();
#line 98

#line 98
  return result;
#line 98
}
#line 98
# 239 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static __inline uint32_t CC2420TransmitP$time16to32(uint16_t time, uint32_t recent_time)
{
  if ((recent_time & 0xFFFF) < time) {
    return ((recent_time - 0x10000UL) & 0xFFFF0000UL) | time;
    }
  else {
#line 244
    return (recent_time & 0xFFFF0000UL) | time;
    }
}

#line 260
static inline   void CC2420TransmitP$CaptureSFD$captured(uint16_t time)
#line 260
{
  unsigned char *__nesc_temp44;
#line 261
  uint32_t time32 = CC2420TransmitP$time16to32(time, CC2420TransmitP$BackoffTimer$getNow());

#line 262
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 262
    {
      switch (CC2420TransmitP$m_state) {

          case CC2420TransmitP$S_SFD: 
            CC2420TransmitP$m_state = CC2420TransmitP$S_EFD;
          CC2420TransmitP$sfdHigh = TRUE;
          CC2420TransmitP$CaptureSFD$captureFallingEdge();
          CC2420TransmitP$PacketTimeStamp$set(CC2420TransmitP$m_msg, time32);
          if (CC2420TransmitP$PacketTimeSyncOffset$isSet(CC2420TransmitP$m_msg)) {
              nx_uint8_t *taddr = CC2420TransmitP$m_msg->data + (CC2420TransmitP$PacketTimeSyncOffset$get(CC2420TransmitP$m_msg) - sizeof(cc2420_header_t ));
              timesync_radio_t *timesync = (timesync_radio_t *)taddr;

              (__nesc_temp44 = (unsigned char *)&*timesync, __nesc_hton_uint32(__nesc_temp44, __nesc_ntoh_uint32(__nesc_temp44) - time32));
              CC2420TransmitP$CSN$clr();
              CC2420TransmitP$TXFIFO_RAM$write(CC2420TransmitP$PacketTimeSyncOffset$get(CC2420TransmitP$m_msg), (uint8_t *)timesync, sizeof(timesync_radio_t ));
              CC2420TransmitP$CSN$set();
            }

          if (__nesc_ntoh_leuint16((unsigned char *)&CC2420TransmitP$CC2420PacketBody$getHeader(CC2420TransmitP$m_msg)->fcf) & (1 << IEEE154_FCF_ACK_REQ)) {

              CC2420TransmitP$abortSpiRelease = TRUE;
            }
          CC2420TransmitP$releaseSpiResource();
          CC2420TransmitP$BackoffTimer$stop();


          if (((__nesc_ntoh_leuint16((unsigned char *)&CC2420TransmitP$CC2420PacketBody$getHeader(CC2420TransmitP$m_msg)->fcf) >> IEEE154_FCF_FRAME_TYPE) & 7) == IEEE154_TYPE_DATA) {
              CC2420TransmitP$PacketTimeStamp$set(CC2420TransmitP$m_msg, time32);
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
#line 304
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
                CC2420TransmitP$CC2420Receive$sfd(time32);
                CC2420TransmitP$m_receiving = TRUE;
                CC2420TransmitP$m_prev_time = time;
                if (CC2420TransmitP$SFD$get()) {
                    {
                      __nesc_atomic_end(__nesc_atomic); 
#line 322
                      return;
                    }
                  }
              }
          CC2420TransmitP$sfdHigh = FALSE;
          CC2420TransmitP$CaptureSFD$captureRisingEdge();
          CC2420TransmitP$m_receiving = FALSE;
          if (time - CC2420TransmitP$m_prev_time < 10) {
              CC2420TransmitP$CC2420Receive$sfd_dropped();
              if (CC2420TransmitP$m_msg) {
                CC2420TransmitP$PacketTimeStamp$clear(CC2420TransmitP$m_msg);
                }
            }
#line 334
          break;
        }
    }
#line 336
    __nesc_atomic_end(__nesc_atomic); }
}

# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioCapture.nc"
inline static   void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captured(uint16_t arg_0x406f25a0){
#line 50
  CC2420TransmitP$CaptureSFD$captured(arg_0x406f25a0);
#line 50
}
#line 50
# 126 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline   void HplAtm128Timer1P$Capture$reset(void)
#line 126
{
#line 126
  * (volatile uint8_t *)(0x36 + 0x20) = 1 << 5;
}

# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static   void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$reset(void){
#line 55
  HplAtm128Timer1P$Capture$reset();
#line 55
}
#line 55
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static inline   void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$captured(uint16_t time)
#line 64
{
  /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$reset();
  /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captured(time);
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static   void HplAtm128Timer1P$Capture$captured(HplAtm128Timer1P$Capture$size_type arg_0x405bc378){
#line 51
  /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$captured(arg_0x405bc378);
#line 51
}
#line 51
# 117 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$overflow(void)
#line 117
{
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline   void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$overflow(void)
#line 51
{
}

# 166 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$overflow(void)
{
}

# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline   void /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void)
{
}

# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   void /*Counter32khz32C.Transform32*/TransformCounterC$0$Counter$overflow(void){
#line 71
  /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow();
#line 71
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$overflow();
#line 71
}
#line 71
# 122 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static inline   void /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$overflow(void)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*Counter32khz32C.Transform32*/TransformCounterC$0$m_upper++;
      if ((/*Counter32khz32C.Transform32*/TransformCounterC$0$m_upper & /*Counter32khz32C.Transform32*/TransformCounterC$0$OVERFLOW_MASK) == 0) {
        /*Counter32khz32C.Transform32*/TransformCounterC$0$Counter$overflow();
        }
    }
#line 130
    __nesc_atomic_end(__nesc_atomic); }
}

# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   void /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$overflow(void){
#line 71
  /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$overflow();
#line 71
}
#line 71
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline   void /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$overflow(void)
{
  /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$overflow();
}

# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   void HplAtm128Timer1P$Timer$overflow(void){
#line 61
  /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$overflow();
#line 61
  /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$overflow();
#line 61
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$overflow();
#line 61
}
#line 61
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline    void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$Irq$default$fired(void)
#line 63
{
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$Irq$fired(void){
#line 64
  /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$Irq$default$fired();
#line 64
}
#line 64
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$IrqSignal$fired(void)
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$Irq$fired();
}

# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static   void HplAtm128InterruptSigP$IntSig0$fired(void){
#line 41
  /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$IrqSignal$fired();
#line 41
}
#line 41
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline    void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$default$fired(void)
#line 63
{
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$fired(void){
#line 64
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$default$fired();
#line 64
}
#line 64
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$IrqSignal$fired(void)
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$fired();
}

# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static   void HplAtm128InterruptSigP$IntSig1$fired(void){
#line 41
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$IrqSignal$fired();
#line 41
}
#line 41
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$fired(void){
#line 64
  HplAt45dbIOP$InInterrupt$fired();
#line 64
}
#line 64
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$IrqSignal$fired(void)
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$fired();
}

# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static   void HplAtm128InterruptSigP$IntSig2$fired(void){
#line 41
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$IrqSignal$fired();
#line 41
}
#line 41
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline    void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$Irq$default$fired(void)
#line 63
{
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$Irq$fired(void){
#line 64
  /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$Irq$default$fired();
#line 64
}
#line 64
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$IrqSignal$fired(void)
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$Irq$fired();
}

# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static   void HplAtm128InterruptSigP$IntSig3$fired(void){
#line 41
  /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$IrqSignal$fired();
#line 41
}
#line 41
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline    void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$default$fired(void)
#line 63
{
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$fired(void){
#line 64
  /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$default$fired();
#line 64
}
#line 64
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$IrqSignal$fired(void)
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$fired();
}

# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static   void HplAtm128InterruptSigP$IntSig4$fired(void){
#line 41
  /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$IrqSignal$fired();
#line 41
}
#line 41
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline    void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$default$fired(void)
#line 63
{
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$fired(void){
#line 64
  /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$default$fired();
#line 64
}
#line 64
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$IrqSignal$fired(void)
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$fired();
}

# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static   void HplAtm128InterruptSigP$IntSig5$fired(void){
#line 41
  /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$IrqSignal$fired();
#line 41
}
#line 41
# 175 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline   void CC2420ReceiveP$InterruptFIFOP$fired(void)
#line 175
{
  if (CC2420ReceiveP$m_state == CC2420ReceiveP$S_STARTED) {
      CC2420ReceiveP$beginReceive();
    }
  else {
      CC2420ReceiveP$m_missed_packets++;
    }
}

# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$fired(void){
#line 57
  CC2420ReceiveP$InterruptFIFOP$fired();
#line 57
}
#line 57
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$fired(void)
#line 38
{
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$fired();
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$fired(void){
#line 64
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$fired();
#line 64
}
#line 64
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$IrqSignal$fired(void)
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$fired();
}

# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static   void HplAtm128InterruptSigP$IntSig6$fired(void){
#line 41
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$IrqSignal$fired();
#line 41
}
#line 41
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline    void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$default$fired(void)
#line 63
{
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$fired(void){
#line 64
  /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$default$fired();
#line 64
}
#line 64
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$IrqSignal$fired(void)
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$fired();
}

# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static   void HplAtm128InterruptSigP$IntSig7$fired(void){
#line 41
  /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$IrqSignal$fired();
#line 41
}
#line 41
# 98 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline   uint8_t HplAtm128SpiP$SPI$read(void)
#line 98
{
#line 98
  return * (volatile uint8_t *)(0x0F + 0x20);
}

# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
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
#line 96
inline static   void Atm128SpiP$Spi$enableInterrupt(bool arg_0x407cb558){
#line 96
  HplAtm128SpiP$SPI$enableInterrupt(arg_0x407cb558);
#line 96
}
#line 96
# 265 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline   void Atm128SpiP$Spi$dataReady(uint8_t data)
#line 265
{
  bool again;

  /* atomic removed: atomic calls only */
#line 268
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
      uint8_t discard;
      uint16_t myLen;
      uint8_t *rx;
      uint8_t *tx;

      /* atomic removed: atomic calls only */
#line 290
      {
        myLen = Atm128SpiP$len;
        rx = Atm128SpiP$rxBuffer;
        tx = Atm128SpiP$txBuffer;
        Atm128SpiP$rxBuffer = (void *)0;
        Atm128SpiP$txBuffer = (void *)0;
        Atm128SpiP$len = 0;
        Atm128SpiP$pos = 0;
      }
      discard = Atm128SpiP$Spi$read();

      Atm128SpiP$SpiPacket$sendDone(tx, rx, myLen, SUCCESS);
    }
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static   void HplAtm128SpiP$SPI$dataReady(uint8_t arg_0x407cb010){
#line 92
  Atm128SpiP$Spi$dataReady(arg_0x407cb010);
#line 92
}
#line 92
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/system/RealMainP.nc"
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

# 123 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SchedulerBasicP.nc"
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

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void SchedulerBasicP$TaskBasic$runTask(uint8_t arg_0x402eba88){
#line 64
  switch (arg_0x402eba88) {
#line 64
    case TestM$stop:
#line 64
      TestM$stop$runTask();
#line 64
      break;
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
    case HplCC2420InterruptsP$CCATask:
#line 64
      HplCC2420InterruptsP$CCATask$runTask();
#line 64
      break;
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
    case CC2420ReceiveP$receiveDone_task:
#line 64
      CC2420ReceiveP$receiveDone_task$runTask();
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
    case /*DymoTableC.Timers*/VirtualizeTimerC$1$updateFromTimer:
#line 64
      /*DymoTableC.Timers*/VirtualizeTimerC$1$updateFromTimer$runTask();
#line 64
      break;
#line 64
    case DymoEngineM$issueRREQ:
#line 64
      DymoEngineM$issueRREQ$runTask();
#line 64
      break;
#line 64
    case DymoEngineM$issueRREP:
#line 64
      DymoEngineM$issueRREP$runTask();
#line 64
      break;
#line 64
    case DymoEngineM$issueRERR:
#line 64
      DymoEngineM$issueRERR$runTask();
#line 64
      break;
#line 64
    case DymoEngineM$forward:
#line 64
      DymoEngineM$forward$runTask();
#line 64
      break;
#line 64
    case DymoPacketM$processMessage:
#line 64
      DymoPacketM$processMessage$runTask();
#line 64
      break;
#line 64
    case At45dbP$taskSuccess:
#line 64
      At45dbP$taskSuccess$runTask();
#line 64
      break;
#line 64
    case At45dbP$taskFail:
#line 64
      At45dbP$taskFail$runTask();
#line 64
      break;
#line 64
    case HplAt45dbIOP$avail:
#line 64
      HplAt45dbIOP$avail$runTask();
#line 64
      break;
#line 64
    case /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$granted:
#line 64
      /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$granted$runTask();
#line 64
      break;
#line 64
    case /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$grantedTask:
#line 64
      /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$grantedTask$runTask();
#line 64
      break;
#line 64
    default:
#line 64
      SchedulerBasicP$TaskBasic$default$runTask(arg_0x402eba88);
#line 64
      break;
#line 64
    }
#line 64
}
#line 64
# 88 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
static void ConfigStorageP$setFlip(uint8_t id, bool flip)
#line 88
{
  if (flip) {
    ConfigStorageP$flipState[id >> 3] |= 1 << (id & 7);
    }
  else {
#line 92
    ConfigStorageP$flipState[id >> 3] &= ~(1 << (id & 7));
    }
}

#line 230
static void ConfigStorageP$copyCopyPageDone(error_t error)
#line 230
{
  if (error != SUCCESS) {
    ConfigStorageP$writeContinue(error);
    }
  else {
#line 233
    if (ConfigStorageP$nextPage == 0) 
      {
        ConfigStorageP$s[ConfigStorageP$client].state = ConfigStorageP$S_DIRTY;
        ConfigStorageP$writeContinue(SUCCESS);
      }
    else 
      {

        at45page_t from;
#line 241
        at45page_t to;
#line 241
        at45page_t npages = ConfigStorageP$BConfig$npages(ConfigStorageP$client);

        to = from = ConfigStorageP$BConfig$remap(ConfigStorageP$client, --ConfigStorageP$nextPage);
        if (ConfigStorageP$flipped(ConfigStorageP$client)) {
          from -= npages;
          }
        else {
#line 247
          from += npages;
          }
        ConfigStorageP$At45db$copyPage(from, to);
      }
    }
}

# 222 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static  void BlockStorageP$BConfig$writeContinue(uint8_t blockId, error_t error)
#line 222
{

  BlockStorageP$client = blockId;
  if (error == SUCCESS) {
    BlockStorageP$startRequest();
    }
  else {
#line 228
    BlockStorageP$endRequest(error, 0);
    }
}

#line 136
static void BlockStorageP$startRequest(void)
#line 136
{
  switch (BlockStorageP$s[BlockStorageP$client].request) 
    {
      case BlockStorageP$R_ERASE: 
        BlockStorageP$eraseStart();
      break;
      case BlockStorageP$R_SYNC: 
        BlockStorageP$syncStart();
      break;
      default: 
        BlockStorageP$multipageStart((uint16_t )BlockStorageP$s[BlockStorageP$client].buf);
    }
}

# 366 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbP.nc"
static void At45dbP$newRequest(uint8_t req, at45page_t page, at45pageoffset_t offset, 
void *reqdata, at45pageoffset_t n)
#line 367
{
  At45dbP$request = req;

  At45dbP$reqBuf = (void *)0;
  At45dbP$reqBytes = n;
  At45dbP$reqBuf = reqdata;
  At45dbP$reqPage = page;
  At45dbP$reqOffset = offset;

  if (page == At45dbP$buffer[0].page) {
    At45dbP$selected = 0;
    }
  else {
#line 378
    if (page == At45dbP$buffer[1].page) {
      At45dbP$selected = 1;
      }
    else {
#line 381
      At45dbP$selected = !At45dbP$selected;
      }
    }

  if (((
#line 384
  page >= AT45_MAX_PAGES || offset >= AT45_PAGE_SIZE) || 
  n > AT45_PAGE_SIZE) || offset + n > AT45_PAGE_SIZE) {
    At45dbP$taskFail$postTask();
    }
  else {
    At45dbP$handleRWRequest();
    }
}

# 159 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SchedulerBasicP.nc"
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

# 244 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbP.nc"
static void At45dbP$handleRWRequest(void)
#line 244
{
  if (At45dbP$reqPage == At45dbP$buffer[At45dbP$selected].page) {
    switch (At45dbP$request) 
      {
        case At45dbP$R_ERASE: 
          switch (At45dbP$reqOffset) 
            {
              case AT45_ERASE: 
                if (At45dbP$flashBusy) {
                  At45dbP$HplAt45db$waitIdle();
                  }
                else {
#line 255
                  At45dbP$HplAt45db$erase(AT45_C_ERASE_PAGE, At45dbP$reqPage);
                  }
#line 256
              break;
              case AT45_PREVIOUSLY_ERASED: 

                At45dbP$buffer[At45dbP$selected].erased = TRUE;

              case AT45_DONT_ERASE: 



                At45dbP$buffer[At45dbP$selected].clean = TRUE;
              At45dbP$requestDone(SUCCESS, 0, At45dbP$IDLE);
              break;
            }
        break;

        case At45dbP$R_COPY: 
          if (! At45dbP$buffer[At45dbP$selected].clean) {
            At45dbP$flushBuffer();
            }
          else {


              At45dbP$buffer[At45dbP$selected].page = At45dbP$reqOffset;
              At45dbP$buffer[At45dbP$selected].clean = FALSE;
              At45dbP$taskSuccess$postTask();
            }
        break;

        case At45dbP$R_SYNC: case At45dbP$R_SYNCALL: 
            if (At45dbP$buffer[At45dbP$selected].clean && At45dbP$buffer[At45dbP$selected].unchecked) 
              {
                At45dbP$checkBuffer(At45dbP$selected);
                return;
              }

        case At45dbP$R_FLUSH: case At45dbP$R_FLUSHALL: 
            if (! At45dbP$buffer[At45dbP$selected].clean) {
              At45dbP$flushBuffer();
              }
            else {
#line 294
              if (At45dbP$request == At45dbP$R_FLUSH || At45dbP$request == At45dbP$R_SYNC) {
                At45dbP$taskSuccess$postTask();
                }
              else {

                  uint8_t oreq = At45dbP$request;

                  At45dbP$request = At45dbP$IDLE;
                  At45dbP$syncOrFlushAll(oreq);
                }
              }
#line 304
        break;

        case At45dbP$R_READ: 
          if (At45dbP$buffer[At45dbP$selected].busy) {
            At45dbP$HplAt45db$waitIdle();
            }
          else {
#line 310
            At45dbP$HplAt45db$readBuffer(At45dbP$selected ? AT45_C_READ_BUFFER1 : AT45_C_READ_BUFFER2, At45dbP$reqOffset, 
            At45dbP$reqBuf, At45dbP$reqBytes);
            }
#line 312
        break;

        case At45dbP$R_READCRC: 
          if (At45dbP$buffer[At45dbP$selected].busy) {
            At45dbP$HplAt45db$waitIdle();
            }
          else {
            At45dbP$HplAt45db$crc(At45dbP$selected ? AT45_C_READ_BUFFER1 : AT45_C_READ_BUFFER2, 0, At45dbP$reqOffset, At45dbP$reqBytes, 
            (uint16_t )At45dbP$reqBuf);
            }
#line 321
        break;

        case At45dbP$R_WRITE: 
          if (At45dbP$buffer[At45dbP$selected].busy) {
            At45dbP$HplAt45db$waitIdle();
            }
          else {
#line 327
            At45dbP$HplAt45db$write(At45dbP$selected ? AT45_C_WRITE_BUFFER1 : AT45_C_WRITE_BUFFER2, 0, At45dbP$reqOffset, 
            At45dbP$reqBuf, At45dbP$reqBytes);
            }
#line 329
        break;
      }
    }
  else {
#line 331
    if (! At45dbP$buffer[At45dbP$selected].clean) {
      At45dbP$flushBuffer();
      }
    else {
#line 333
      if (At45dbP$buffer[At45dbP$selected].unchecked) {
        At45dbP$checkBuffer(At45dbP$selected);
        }
      else {

          if (At45dbP$request == At45dbP$R_ERASE) 
            {
              At45dbP$buffer[At45dbP$selected].page = At45dbP$reqPage;
              At45dbP$handleRWRequest();
            }
          else {
#line 343
            if (At45dbP$flashBusy) {
              At45dbP$HplAt45db$waitIdle();
              }
            else {
#line 346
              At45dbP$HplAt45db$fill(At45dbP$selected ? AT45_C_FILL_BUFFER1 : AT45_C_FILL_BUFFER2, At45dbP$reqPage);
              }
            }
        }
      }
    }
}

# 173 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45dbByteC.nc"
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$execCommand(uint8_t op, uint8_t reqCmd, uint8_t reqDontCare, 
at45page_t reqPage, at45pageoffset_t reqOffset, 
uint8_t *reqData, at45pageoffset_t reqCount)
#line 175
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$status = op;


  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$flashCmd[0] = reqCmd;
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$flashCmd[1] = reqPage >> (16 - 9);
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$flashCmd[2] = (reqPage << (9 - 8)) | (reqOffset >> 8);
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$flashCmd[3] = reqOffset;
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$data = (void *)0;
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$dataCount = reqCount;
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$data = reqData;
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$dontCare = reqDontCare;

  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$Resource$request();
}

# 350 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbP.nc"
static void At45dbP$requestDone(error_t result, uint16_t computedCrc, uint8_t newState)
#line 350
{
  uint8_t orequest = At45dbP$request;

  At45dbP$request = newState;
  switch (orequest) 
    {
      case At45dbP$R_READ: At45dbP$At45db$readDone(result);
#line 356
      break;
      case At45dbP$R_READCRC: At45dbP$At45db$computeCrcDone(result, computedCrc);
#line 357
      break;
      case At45dbP$R_WRITE: At45dbP$At45db$writeDone(result);
#line 358
      break;
      case At45dbP$R_SYNC: case At45dbP$R_SYNCALL: At45dbP$At45db$syncDone(result);
#line 359
      break;
      case At45dbP$R_FLUSH: case At45dbP$R_FLUSHALL: At45dbP$At45db$flushDone(result);
#line 360
      break;
      case At45dbP$R_ERASE: At45dbP$At45db$eraseDone(result);
#line 361
      break;
      case At45dbP$R_COPY: At45dbP$At45db$copyPageDone(result);
#line 362
      break;
    }
}

# 150 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static void BlockStorageP$endRequest(error_t result, uint16_t crc)
#line 150
{
  uint8_t c = BlockStorageP$client;
  uint8_t tmpState = BlockStorageP$s[c].request;

  BlockStorageP$client = BlockStorageP$NO_CLIENT;
  BlockStorageP$s[c].request = BlockStorageP$R_IDLE;
  BlockStorageP$Resource$release(c);

  switch (tmpState) 
    {
      case BlockStorageP$R_READ: 
        BlockStorageP$BlockRead$readDone(c, BlockStorageP$s[c].addr, BlockStorageP$s[c].buf, BlockStorageP$currentOffset, result);
      break;
      case BlockStorageP$R_WRITE: 
        BlockStorageP$BlockWrite$writeDone(c, BlockStorageP$s[c].addr, BlockStorageP$s[c].buf, BlockStorageP$currentOffset, result);
      break;
      case BlockStorageP$R_ERASE: 
        BlockStorageP$BlockWrite$eraseDone(c, result);
      break;
      case BlockStorageP$R_CRC: 
        BlockStorageP$BlockRead$computeCrcDone(c, BlockStorageP$s[c].addr, BlockStorageP$currentOffset, crc, result);
      break;
      case BlockStorageP$R_SYNC: 
        BlockStorageP$BlockWrite$syncDone(c, result);
      break;
    }
}

# 105 "../../../tos/lib/net/tymo/dymo/DymoEngineM.nc"
static  void DymoEngineM$Mount$mountDone(error_t error)
#line 105
{
  if (error == SUCCESS) {
      if (DymoEngineM$ConfigStorage$valid() == TRUE) {
          if (DymoEngineM$ConfigStorage$read(0x0, & DymoEngineM$me.seqnum, sizeof  DymoEngineM$me.seqnum) != SUCCESS) {
              DymoEngineM$me.seqnum = 1;
              DymoEngineM$SplitControl$startDone(SUCCESS);
            }
        }
      else {

          if (DymoEngineM$ConfigStorage$commit() == SUCCESS) {
              DymoEngineM$me.seqnum = 1;
            }
          else {
              DymoEngineM$SplitControl$startDone(FAIL);
            }
        }
    }
  else {
      DymoEngineM$SplitControl$startDone(error);
    }
}

# 178 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static error_t BlockStorageP$newRequest(uint8_t newState, uint8_t id, 
storage_addr_t addr, uint8_t *buf, storage_len_t len)
#line 179
{
  storage_len_t vsize;

  if (BlockStorageP$s[id].request != BlockStorageP$R_IDLE) {
    return EBUSY;
    }
  vsize = BlockStorageP$BlockRead$getSize(id);
  if (addr > vsize || len > vsize - addr) {
    return EINVAL;
    }
  BlockStorageP$s[id].request = newState;
  BlockStorageP$s[id].addr = addr;




  BlockStorageP$s[id].buf = (void *)0;
  BlockStorageP$s[id].len = len;
  BlockStorageP$s[id].buf = buf;

  BlockStorageP$Resource$request(id);

  return SUCCESS;
}

#line 341
static  storage_len_t BlockStorageP$BlockRead$getSize(uint8_t blockId)
#line 341
{
  storage_len_t vsize;

  if (BlockStorageP$BConfig$isConfig(blockId)) {
    vsize = BlockStorageP$BConfig$npages(blockId);
    }
  else {
#line 347
    vsize = BlockStorageP$At45dbVolume$volumeSize(blockId);
    }
  return vsize << AT45_PAGE_SIZE_LOG2;
}

# 53 "../../../tos/lib/net/tymo/dymo/NetControlM.nc"
static  void NetControlM$EngineControl$startDone(error_t e)
#line 53
{
  if (e == SUCCESS) {
      if (NetControlM$started++ == 2) {
        NetControlM$SplitControl$startDone(e);
        }
    }
  else {
#line 57
    if (NetControlM$started) {
        NetControlM$started = 0;
        NetControlM$SplitControl$startDone(e);
      }
    }
}

# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
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

# 133 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num];

#line 136
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask();
}

# 161 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static   uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get(void)
#line 161
{
  uint32_t now;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {


      uint8_t now8 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get();

      if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag().bits.ocf0) {


        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get() + 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get();
        }
      else {

        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base + now8;
        }
    }
#line 179
    __nesc_atomic_end(__nesc_atomic); }
#line 179
  return now;
}

# 271 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
static  error_t ConfigStorageP$ConfigStorage$commit(uint8_t id)
#line 271
{
  unsigned long __nesc_temp58;
  unsigned char *__nesc_temp57;
#line 272
  error_t ok;
  uint16_t crc;
  uint8_t i;

  if (ConfigStorageP$s[id].state < ConfigStorageP$S_CLEAN) {
    return EOFF;
    }
  if (ConfigStorageP$s[id].state == ConfigStorageP$S_CLEAN) {

    return ConfigStorageP$BlockRead$computeCrc(id, 0, 1, 0);
    }

  ConfigStorageP$flip(id);
  (__nesc_temp57 = (unsigned char *)&ConfigStorageP$low[id].version, __nesc_hton_uint32(__nesc_temp57, (__nesc_temp58 = __nesc_ntoh_uint32(__nesc_temp57)) + 1), __nesc_temp58);
  for (crc = 0, i = 0; i < sizeof  ConfigStorageP$low[id].version; i++) 
    crc = crcByte(crc, ((uint8_t *)&ConfigStorageP$low[id] + sizeof(nx_uint16_t ))[i]);
  ok = ConfigStorageP$BlockRead$computeCrc(id, sizeof ConfigStorageP$low[id], 
  ConfigStorageP$volumeSize(id) - sizeof ConfigStorageP$low[id], 
  crc);
  if (ok == SUCCESS) {
    ConfigStorageP$s[id].committing = TRUE;
    }
  return ok;
}

# 81 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/crc.h"
static __attribute((noinline))  uint16_t crcByte(uint16_t oldCrc, uint8_t byte)
{

  uint16_t *table = crcTable;
  uint16_t newCrc;

   __asm ("eor %1,%B3\n"
  "\tlsl %1\n"
  "\tadc %B2, __zero_reg__\n"
  "\tadd %A2, %1\n"
  "\tadc %B2, __zero_reg__\n"
  "\tlpm\n"
  "\tmov %B0, %A3\n"
  "\tmov %A0, r0\n"
  "\tadiw r30,1\n"
  "\tlpm\n"
  "\teor %B0, r0" : 
  "=r"(newCrc), "+r"(byte), "+z"(table) : "r"(oldCrc));
  return newCrc;
}

# 124 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
static void ConfigStorageP$computeCrc(uint8_t id)
#line 124
{
  ConfigStorageP$BlockRead$computeCrc(id, sizeof(nx_uint16_t ), 
  ConfigStorageP$volumeSize(id) - sizeof(nx_uint16_t ), 
  0);
}

# 136 "../../../tos/lib/net/tymo/dymo/DymoEngineM.nc"
static 
__attribute((noinline))  
#line 136
void DymoEngineM$ConfigStorage$readDone(storage_addr_t addr, void *buf, 
storage_len_t len, error_t err)
#line 137
{

  if (err == SUCCESS) {
      DymoEngineM$me.seqnum = * (seqnum_t *)buf;
      DymoEngineM$SplitControl$startDone(SUCCESS);
    }
  else 
#line 142
    {
      DymoEngineM$SplitControl$startDone(err);
    }
}

# 321 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
static void ConfigStorageP$commitSyncDone(uint8_t id, error_t error)
#line 321
{
  ConfigStorageP$s[id].committing = FALSE;
  if (error == SUCCESS) {
    ConfigStorageP$s[id].state = ConfigStorageP$S_CLEAN;
    }
  else {
#line 326
    ConfigStorageP$flip(id);
    }
#line 327
  ConfigStorageP$ConfigStorage$commitDone(id, error);
}

# 128 "../../../tos/lib/net/tymo/dymo/DymoEngineM.nc"
static  void DymoEngineM$ConfigStorage$commitDone(error_t err)
#line 128
{
  if (err != SUCCESS && DymoEngineM$me.seqnum == 1) {
      DymoEngineM$SplitControl$startDone(err);
    }
  else {
#line 131
    if (DymoEngineM$me.seqnum == 1) {
        DymoEngineM$SplitControl$startDone(SUCCESS);
      }
    }
}

# 235 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static void BlockStorageP$multipageContinue(uint16_t crc)
#line 235
{
  storage_addr_t remaining = BlockStorageP$s[BlockStorageP$client].len - BlockStorageP$currentOffset;
#line 236
  storage_addr_t addr;
  at45page_t page;
  at45pageoffset_t pageOffset;
#line 238
  at45pageoffset_t count;
  uint8_t *buf = BlockStorageP$s[BlockStorageP$client].buf;

  if (remaining == 0) 
    {
      BlockStorageP$endRequest(SUCCESS, crc);
      return;
    }

  addr = BlockStorageP$s[BlockStorageP$client].addr + BlockStorageP$currentOffset;
  page = BlockStorageP$pageRemap(addr >> AT45_PAGE_SIZE_LOG2);
  pageOffset = addr & ((1 << AT45_PAGE_SIZE_LOG2) - 1);
  count = (1 << AT45_PAGE_SIZE_LOG2) - pageOffset;
  if (remaining < count) {
    count = remaining;
    }
  switch (BlockStorageP$s[BlockStorageP$client].request) 
    {
      case BlockStorageP$R_WRITE: 
        BlockStorageP$At45db$write(page, pageOffset, buf + BlockStorageP$currentOffset, count);
      break;
      case BlockStorageP$R_READ: 
        BlockStorageP$At45db$read(page, pageOffset, buf + BlockStorageP$currentOffset, count);
      break;
      case BlockStorageP$R_CRC: 
        BlockStorageP$At45db$computeCrc(page, pageOffset, count, crc);
      break;
    }
  BlockStorageP$currentOffset += count;
}

#line 114
static  at45page_t BlockStorageP$BConfig$remap(uint8_t id, at45page_t page)
#line 114
{
  if (BlockStorageP$BConfig$isConfig(id) && BlockStorageP$BConfig$flipped(id)) {
    page += BlockStorageP$BConfig$npages(id);
    }
#line 117
  return BlockStorageP$At45dbVolume$remap(id, page);
}

# 151 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbP.nc"
static void At45dbP$flushBuffer(void)
#line 151
{
  if (At45dbP$flashBusy) 
    {
      At45dbP$HplAt45db$waitIdle();
      return;
    }
  At45dbP$HplAt45db$flush(At45dbP$buffer[At45dbP$selected].erased ? 
  At45dbP$selected ? AT45_C_QFLUSH_BUFFER1 : AT45_C_QFLUSH_BUFFER2 : 
  At45dbP$selected ? AT45_C_FLUSH_BUFFER1 : AT45_C_FLUSH_BUFFER2, 
  At45dbP$buffer[At45dbP$selected].page);
}

#line 141
static void At45dbP$checkBuffer(uint8_t buf)
#line 141
{
  if (At45dbP$flashBusy) 
    {
      At45dbP$HplAt45db$waitIdle();
      return;
    }
  At45dbP$HplAt45db$compare(buf ? AT45_C_COMPARE_BUFFER1 : AT45_C_COMPARE_BUFFER2, At45dbP$buffer[buf].page);
  At45dbP$checking = buf;
}

#line 445
static void At45dbP$syncOrFlushAll(uint8_t newReq)
#line 445
{
  At45dbP$request = newReq;

  if (! At45dbP$buffer[0].clean) {
    At45dbP$selected = 0;
    }
  else {
#line 450
    if (! At45dbP$buffer[1].clean) {
      At45dbP$selected = 1;
      }
    else {
        At45dbP$taskSuccess$postTask();
        return;
      }
    }
  At45dbP$buffer[At45dbP$selected].unchecked = 0;
  At45dbP$handleRWRequest();
}

# 102 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/mica2/chips/at45db/HplAt45dbIOP.nc"
static   uint8_t HplAt45dbIOP$FlashSpi$write(uint8_t spiOut)
#line 102
{
  uint8_t spiIn = 0;


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      uint8_t clrClkAndData = * (volatile uint8_t *)(0x12 + 0x20) & ~0x28;

      * (volatile uint8_t *)(0x12 + 0x20) = clrClkAndData;
#line 110
       __asm volatile ("sbrc %2,""7""\n""\tsbi 18,3\n""\tsbi 18,5\n""\tsbic 16,2\n""\tori %0,1<<""7""\n" : "=d"(spiIn) : "0"(spiIn), "r"(spiOut));
      * (volatile uint8_t *)(0x12 + 0x20) = clrClkAndData;
#line 111
       __asm volatile ("sbrc %2,""6""\n""\tsbi 18,3\n""\tsbi 18,5\n""\tsbic 16,2\n""\tori %0,1<<""6""\n" : "=d"(spiIn) : "0"(spiIn), "r"(spiOut));
      * (volatile uint8_t *)(0x12 + 0x20) = clrClkAndData;
#line 112
       __asm volatile ("sbrc %2,""5""\n""\tsbi 18,3\n""\tsbi 18,5\n""\tsbic 16,2\n""\tori %0,1<<""5""\n" : "=d"(spiIn) : "0"(spiIn), "r"(spiOut));
      * (volatile uint8_t *)(0x12 + 0x20) = clrClkAndData;
#line 113
       __asm volatile ("sbrc %2,""4""\n""\tsbi 18,3\n""\tsbi 18,5\n""\tsbic 16,2\n""\tori %0,1<<""4""\n" : "=d"(spiIn) : "0"(spiIn), "r"(spiOut));
      * (volatile uint8_t *)(0x12 + 0x20) = clrClkAndData;
#line 114
       __asm volatile ("sbrc %2,""3""\n""\tsbi 18,3\n""\tsbi 18,5\n""\tsbic 16,2\n""\tori %0,1<<""3""\n" : "=d"(spiIn) : "0"(spiIn), "r"(spiOut));
      * (volatile uint8_t *)(0x12 + 0x20) = clrClkAndData;
#line 115
       __asm volatile ("sbrc %2,""2""\n""\tsbi 18,3\n""\tsbi 18,5\n""\tsbic 16,2\n""\tori %0,1<<""2""\n" : "=d"(spiIn) : "0"(spiIn), "r"(spiOut));
      * (volatile uint8_t *)(0x12 + 0x20) = clrClkAndData;
#line 116
       __asm volatile ("sbrc %2,""1""\n""\tsbi 18,3\n""\tsbi 18,5\n""\tsbic 16,2\n""\tori %0,1<<""1""\n" : "=d"(spiIn) : "0"(spiIn), "r"(spiOut));
      * (volatile uint8_t *)(0x12 + 0x20) = clrClkAndData;
#line 117
       __asm volatile ("sbrc %2,""0""\n""\tsbi 18,3\n""\tsbi 18,5\n""\tsbic 16,2\n""\tori %0,1<<""0""\n" : "=d"(spiIn) : "0"(spiIn), "r"(spiOut));}
#line 117
    __nesc_atomic_end(__nesc_atomic); }


  return spiIn;
}

# 127 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbP.nc"
static void At45dbP$flashIdle(void)
#line 127
{
  At45dbP$flashBusy = At45dbP$buffer[0].busy = At45dbP$buffer[1].busy = FALSE;
}

# 158 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static  void *CC2420CsmaP$Send$getPayload(message_t *m, uint8_t len)
#line 158
{
  if (len <= CC2420CsmaP$Send$maxPayloadLength()) {
      return (void *)m->data;
    }
  else {
      return (void *)0;
    }
}

# 300 "../../../tos/lib/net/tymo/dymo/DymoPacketM.nc"
static nx_uint8_t *DymoPacketM$block_get_pointer(nx_uint8_t *block, uint8_t pos, uint8_t *size)
#line 300
{
  if (size) {
      *size = DymoPacketM$block_info_size(block);
      return block + DymoPacketM$block_header_size(block) + pos * *size;
    }
  else 
#line 304
    {
      return block + DymoPacketM$block_header_size(block) + pos * DymoPacketM$block_info_size(block);
    }
}

#line 269
static uint8_t DymoPacketM$block_info_size(nx_uint8_t *block)
#line 269
{
  uint8_t result = 1;

#line 271
  if (!(__nesc_ntoh_uint8((unsigned char *)&*block) & BLOCK_HEAD)) {
    result++;
    }
#line 273
  if (__nesc_ntoh_uint8((unsigned char *)&*block) & BLOCK_SEQNUM) {
    result += 2;
    }
#line 275
  if (__nesc_ntoh_uint8((unsigned char *)&*block) & BLOCK_HOPCNT) {
    result++;
    }
  return result;
}

#line 43
static  dymo_msg_t DymoPacketM$DymoPacket$getType(message_t *msg)
#line 43
{
  nx_uint8_t *p = DymoPacketM$Packet$getPayload(msg, 1);

#line 45
  return __nesc_ntoh_uint8((unsigned char *)&*p);
}

# 126 "../../../tos/lib/net/tymo/dymo/DymoTableM.nc"
static  error_t /*DymoTableC.DymoTableM*/DymoTableM$0$DymoTable$update(const rt_info_t *route_info, dymo_msg_t msg_type)
#line 126
{
  int8_t i = /*DymoTableC.DymoTableM*/DymoTableM$0$get_route(route_info->address);

  if (msg_type == DYMO_RERR) {

      if (i != -1) {

          if (
#line 132
          /*DymoTableC.DymoTableM*/DymoTableM$0$table[i].info.nexthop == route_info->nexthop
           && ((/*DymoTableC.DymoTableM*/DymoTableM$0$table[i].info.seqnum == 0
           || route_info->seqnum == 0)
           || route_info->seqnum >= /*DymoTableC.DymoTableM*/DymoTableM$0$table[i].info.seqnum)) {
              /*DymoTableC.DymoTableM*/DymoTableM$0$table[i].flags |= FLAG_BROKEN;
              ;
              /*DymoTableC.DymoTableM*/DymoTableM$0$RoutingTable$evicted(& /*DymoTableC.DymoTableM*/DymoTableM$0$table[i].info, REASON_UNREACHABLE);
              return SUCCESS;
            }
          else 
#line 140
            {
              return EINVAL;
            }
        }
      else 
#line 143
        {
          return EINVAL;
        }
    }
  else {

      if (i == -1) {

          if (/*DymoTableC.DymoTableM*/DymoTableM$0$num_entries < 10) {

              /*DymoTableC.DymoTableM*/DymoTableM$0$replace_info(/*DymoTableC.DymoTableM*/DymoTableM$0$num_entries, route_info);
              /*DymoTableC.DymoTableM*/DymoTableM$0$num_entries++;
              /*DymoTableC.DymoTableM*/DymoTableM$0$size++;
              ;
              return SUCCESS;
            }
          else {

              int8_t j = -1;


              for (i = 0; i < /*DymoTableC.DymoTableM*/DymoTableM$0$num_entries; i++) {
                  if (/*DymoTableC.DymoTableM*/DymoTableM$0$table[i].flags & FLAG_DELETED) {
                      /*DymoTableC.DymoTableM*/DymoTableM$0$replace_info(i, route_info);
                      return SUCCESS;
                    }
                }


              for (i = 0; i < /*DymoTableC.DymoTableM*/DymoTableM$0$num_entries; i++) {
                  if (/*DymoTableC.DymoTableM*/DymoTableM$0$table[i].flags & FLAG_BROKEN) {
                      /*DymoTableC.DymoTableM*/DymoTableM$0$replace_info(i, route_info);
                      return SUCCESS;
                    }
                  else {
#line 176
                    if (!(/*DymoTableC.DymoTableM*/DymoTableM$0$table[i].flags & FLAG_NEW)) {
                        j = i;
                      }
                    }
                }


              if (j != -1) {
                  /*DymoTableC.DymoTableM*/DymoTableM$0$delete_route(j, REASON_FULL);
                  /*DymoTableC.DymoTableM*/DymoTableM$0$replace_info(j, route_info);
                  return SUCCESS;
                }


              /*DymoTableC.DymoTableM*/DymoTableM$0$delete_route(/*DymoTableC.DymoTableM*/DymoTableM$0$replace, REASON_FULL);
              /*DymoTableC.DymoTableM*/DymoTableM$0$replace_info(/*DymoTableC.DymoTableM*/DymoTableM$0$replace++, route_info);
              if (/*DymoTableC.DymoTableM*/DymoTableM$0$replace == 10) {
                /*DymoTableC.DymoTableM*/DymoTableM$0$replace = 0;
                }
#line 194
              return SUCCESS;
            }
        }
      else 
        {

          if (/*DymoTableC.DymoTableM*/DymoTableM$0$is_superior(route_info, /*DymoTableC.DymoTableM*/DymoTableM$0$table + i, msg_type)) {
              /*DymoTableC.DymoTableM*/DymoTableM$0$replace_info(i, route_info);
              return SUCCESS;
            }
          else 
#line 203
            {
              return EINVAL;
            }
        }
    }
}

#line 265
static int8_t /*DymoTableC.DymoTableM*/DymoTableM$0$get_route(addr_t address)
#line 265
{
  uint8_t i = 0;

#line 267
  for (i = 0; i < /*DymoTableC.DymoTableM*/DymoTableM$0$num_entries; i++) {
      if (/*DymoTableC.DymoTableM*/DymoTableM$0$table[i].info.address == address) {
          return i;
        }
    }
  return -1;
}

# 412 "../../../tos/lib/net/tymo/dymo/DymoEngineM.nc"
static  void DymoEngineM$RoutingTable$evicted(const rt_info_t *route_info, reason_t r)
#line 412
{
  if (r == REASON_UNREACHABLE) {
      DymoEngineM$buf_info = *route_info;
      DymoEngineM$buf_info.has_hopcnt = FALSE;
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 416
        {
          if (!DymoEngineM$busyIssue) {
              DymoEngineM$busyIssue = TRUE;
              DymoEngineM$issueRERR$postTask();
            }
        }
#line 421
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 255 "../../../tos/lib/net/tymo/dymo/DymoTableM.nc"
static void /*DymoTableC.DymoTableM*/DymoTableM$0$replace_info(uint8_t pos, const rt_info_t *route_info)
#line 255
{
  /*DymoTableC.DymoTableM*/DymoTableM$0$table[pos].info = *route_info;
  /*DymoTableC.DymoTableM*/DymoTableM$0$table[pos].flags = FLAG_NEW;
  /*DymoTableC.DymoTableM*/DymoTableM$0$cancel_timers(pos);
  /*DymoTableC.DymoTableM*/DymoTableM$0$set_timer(pos, ROUTE_AGE_MIN);
  /*DymoTableC.DymoTableM*/DymoTableM$0$set_timer(pos, ROUTE_AGE_MAX);
  /*DymoTableC.DymoTableM*/DymoTableM$0$set_timer(pos, ROUTE_NEW);
}

#line 309
static void /*DymoTableC.DymoTableM*/DymoTableM$0$cancel_timers(uint8_t entry_id)
#line 309
{
  uint8_t i = entry_id * NB_ROUTE_TIMERS;

#line 311
  for (i = 0; i < NB_ROUTE_TIMERS; i++) {
      /*DymoTableC.DymoTableM*/DymoTableM$0$Timer$stop(i);
    }
}

# 133 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static void /*DymoTableC.Timers*/VirtualizeTimerC$1$startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*DymoTableC.Timers*/VirtualizeTimerC$1$Timer_t *timer = &/*DymoTableC.Timers*/VirtualizeTimerC$1$m_timers[num];

#line 136
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*DymoTableC.Timers*/VirtualizeTimerC$1$updateFromTimer$postTask();
}

# 276 "../../../tos/lib/net/tymo/dymo/DymoTableM.nc"
static void /*DymoTableC.DymoTableM*/DymoTableM$0$delete_route(uint8_t entry_id, reason_t r)
#line 276
{
  /*DymoTableC.DymoTableM*/DymoTableM$0$table[entry_id].flags = FLAG_DELETED;
  /*DymoTableC.DymoTableM*/DymoTableM$0$cancel_timers(entry_id);
  ;
  /*DymoTableC.DymoTableM*/DymoTableM$0$RoutingTable$evicted(& /*DymoTableC.DymoTableM*/DymoTableM$0$table[entry_id].info, r);
}



static bool /*DymoTableC.DymoTableM*/DymoTableM$0$is_superior(const rt_info_t *info1, const rt_entry_t *entry, dymo_msg_t msg_type)
#line 285
{


  return info1->seqnum > entry->info.seqnum
   || (info1->seqnum == entry->info.seqnum
   && info1->has_hopcnt
   && entry->info.has_hopcnt
   && (info1->hopcnt < entry->info.has_hopcnt
   || (info1->hopcnt == entry->info.has_hopcnt
   && (msg_type == DYMO_RREP
   || entry->flags & FLAG_BROKEN))));
}

# 82 "../../../tos/lib/net/tymo/dymo/DymoEngineM.nc"
static void DymoEngineM$incr_seqnum(void)
#line 82
{
  if (DymoEngineM$me.seqnum == 65535) {
    DymoEngineM$me.seqnum = 256;
    }
  else {
#line 86
    DymoEngineM$me.seqnum++;
    }
  DymoEngineM$ConfigStorage$write(0x0, & DymoEngineM$me.seqnum, sizeof  DymoEngineM$me.seqnum);
}

# 96 "../../../tos/lib/net/tymo/dymo/DymoTableM.nc"
static  error_t /*DymoTableC.DymoTableM*/DymoTableM$0$RoutingTable$getRoute(addr_t address, rt_info_t *info)
#line 96
{
  int i = /*DymoTableC.DymoTableM*/DymoTableM$0$get_route(address);

#line 98
  ;
  if (i == -1) {
      ;
      /*DymoTableC.DymoTableM*/DymoTableM$0$DymoTable$routeNeeded(address);
      return EBUSY;
    }


  if (info) {
      *info = /*DymoTableC.DymoTableM*/DymoTableM$0$table[i].info;
    }

  if (/*DymoTableC.DymoTableM*/DymoTableM$0$table[i].flags & (FLAG_DELETED | FLAG_BROKEN)) {
      ;
      /*DymoTableC.DymoTableM*/DymoTableM$0$DymoTable$routeNeeded(address);
      return EBUSY;
    }


  /*DymoTableC.DymoTableM*/DymoTableM$0$cancel_timer(i, ROUTE_NEW);
  /*DymoTableC.DymoTableM*/DymoTableM$0$table[i].flags &= ~FLAG_NEW;
  /*DymoTableC.DymoTableM*/DymoTableM$0$cancel_timer(i, ROUTE_DELETE);
  /*DymoTableC.DymoTableM*/DymoTableM$0$set_timer(i, ROUTE_USED);
  /*DymoTableC.DymoTableM*/DymoTableM$0$table[i].flags |= FLAG_USED;
  ;
  return SUCCESS;
}

# 382 "../../../tos/lib/net/tymo/dymo/DymoEngineM.nc"
static  void DymoEngineM$DymoTable$routeNeeded(addr_t destination)
#line 382
{
  if (DymoEngineM$ignoreNeeded == destination) {
      DymoEngineM$ignoreNeeded = 0;
    }
  else 
#line 385
    {
      DymoEngineM$buf_info.address = destination;
      DymoEngineM$buf_info.seqnum = 0;
      DymoEngineM$buf_info.has_hopcnt = FALSE;
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 389
        {
          if (!DymoEngineM$busyIssue) {
              DymoEngineM$busyIssue = TRUE;



              DymoEngineM$issueRREQ$postTask();
            }
        }
#line 397
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 304 "../../../tos/lib/net/tymo/dymo/DymoTableM.nc"
static void /*DymoTableC.DymoTableM*/DymoTableM$0$cancel_timer(uint8_t entry_id, rt_timer_t timer_id)
#line 304
{
  /*DymoTableC.DymoTableM*/DymoTableM$0$Timer$stop(entry_id * NB_ROUTE_TIMERS + timer_id);
}

#line 64
static  error_t /*DymoTableC.DymoTableM*/DymoTableM$0$RoutingTable$getForwardingRoute(addr_t address, rt_info_t *info)
#line 64
{
  int8_t i = /*DymoTableC.DymoTableM*/DymoTableM$0$get_route(address);

#line 66
  ;
  if (i == -1) {
      ;
      /*DymoTableC.DymoTableM*/DymoTableM$0$buf_info.address = address;
      /*DymoTableC.DymoTableM*/DymoTableM$0$buf_info.seqnum = 0;
      /*DymoTableC.DymoTableM*/DymoTableM$0$buf_info.has_hopcnt = 0;
      /*DymoTableC.DymoTableM*/DymoTableM$0$DymoTable$brokenRouteNeeded(&/*DymoTableC.DymoTableM*/DymoTableM$0$buf_info);
      return FAIL;
    }


  if (info && !(/*DymoTableC.DymoTableM*/DymoTableM$0$table[i].flags & FLAG_DELETED)) {
      *info = /*DymoTableC.DymoTableM*/DymoTableM$0$table[i].info;
    }

  if (/*DymoTableC.DymoTableM*/DymoTableM$0$table[i].flags & (FLAG_BROKEN | FLAG_DELETED)) {
      ;
      /*DymoTableC.DymoTableM*/DymoTableM$0$DymoTable$brokenRouteNeeded(& /*DymoTableC.DymoTableM*/DymoTableM$0$table[i].info);
      return FAIL;
    }

  /*DymoTableC.DymoTableM*/DymoTableM$0$cancel_timer(i, ROUTE_NEW);
  /*DymoTableC.DymoTableM*/DymoTableM$0$table[i].flags &= ~FLAG_NEW;
  /*DymoTableC.DymoTableM*/DymoTableM$0$cancel_timer(i, ROUTE_DELETE);
  /*DymoTableC.DymoTableM*/DymoTableM$0$set_timer(i, ROUTE_USED);
  /*DymoTableC.DymoTableM*/DymoTableM$0$table[i].flags |= FLAG_USED;
  ;
  return SUCCESS;
}

# 401 "../../../tos/lib/net/tymo/dymo/DymoEngineM.nc"
static  void DymoEngineM$DymoTable$brokenRouteNeeded(const rt_info_t *route_info)
#line 401
{
  DymoEngineM$buf_info = *route_info;
  DymoEngineM$buf_info.has_hopcnt = FALSE;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 404
    {
      if (!DymoEngineM$busyIssue) {
          DymoEngineM$busyIssue = TRUE;
          DymoEngineM$issueRERR$postTask();
        }
    }
#line 409
    __nesc_atomic_end(__nesc_atomic); }
}

# 292 "../../../tos/lib/net/tymo/dymo/DymoPacketM.nc"
static uint8_t DymoPacketM$block_size(nx_uint8_t *block)
#line 292
{
  uint8_t result = 2;

#line 294
  if (__nesc_ntoh_uint8((unsigned char *)&*block) & BLOCK_HEAD) {
      result++;
    }
  return result + DymoPacketM$block_num_addr(block) * DymoPacketM$block_info_size(block);
}

# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static  error_t /*DymoNetworkC.DymoQueue.AMQueueEntryP*/AMQueueEntryP$1$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 47
{
  /*DymoNetworkC.DymoQueue.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setDestination(msg, dest);
  /*DymoNetworkC.DymoQueue.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setType(msg, 8);
  return /*DymoNetworkC.DymoQueue.AMQueueEntryP*/AMQueueEntryP$1$Send$send(msg, len);
}

# 102 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static  void CC2420ActiveMessageP$AMPacket$setDestination(message_t *amsg, am_addr_t addr)
#line 102
{
  cc2420_header_t *header = CC2420ActiveMessageP$CC2420PacketBody$getHeader(amsg);

#line 104
  __nesc_hton_leuint16((unsigned char *)&header->dest, addr);
}

#line 122
static  void CC2420ActiveMessageP$AMPacket$setType(message_t *amsg, am_id_t type)
#line 122
{
  cc2420_header_t *header = CC2420ActiveMessageP$CC2420PacketBody$getHeader(amsg);

#line 124
  __nesc_hton_leuint8((unsigned char *)&header->type, type);
}

# 82 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
static  error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(uint8_t clientId, message_t *msg, 
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

# 151 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static  void CC2420ActiveMessageP$Packet$setPayloadLength(message_t *msg, uint8_t len)
#line 151
{
  __nesc_hton_leuint8((unsigned char *)&CC2420ActiveMessageP$CC2420PacketBody$getHeader(msg)->length, len + CC2420_SIZE);
}

#line 117
static  am_id_t CC2420ActiveMessageP$AMPacket$type(message_t *amsg)
#line 117
{
  cc2420_header_t *header = CC2420ActiveMessageP$CC2420PacketBody$getHeader(amsg);

#line 119
  return __nesc_ntoh_leuint8((unsigned char *)&header->type);
}

#line 92
static  am_addr_t CC2420ActiveMessageP$AMPacket$destination(message_t *amsg)
#line 92
{
  cc2420_header_t *header = CC2420ActiveMessageP$CC2420PacketBody$getHeader(amsg);

#line 94
  return __nesc_ntoh_leuint16((unsigned char *)&header->dest);
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
  __nesc_hton_leuint16((unsigned char *)&header->src, CC2420ActiveMessageP$AMPacket$address());

  CC2420ActiveMessageP$SendNotifier$aboutToSend(id, addr, msg);

  return CC2420ActiveMessageP$SubSend$send(msg, len);
}

# 96 "/opt/CVSTinyOS/tinyos-2.x/tos/system/StateImplP.nc"
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

#line 133
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

# 629 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static error_t CC2420TransmitP$acquireSpiResource(void)
#line 629
{
  error_t error = CC2420TransmitP$SpiResource$immediateRequest();

#line 631
  if (error != SUCCESS) {
      CC2420TransmitP$SpiResource$request();
    }
  return error;
}

# 126 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static   error_t CC2420SpiP$Resource$immediateRequest(uint8_t id)
#line 126
{
  error_t error;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 129
    {
      if (CC2420SpiP$WorkingState$requestState(CC2420SpiP$S_BUSY) != SUCCESS) {
          {
            unsigned char __nesc_temp = 
#line 131
            EBUSY;

            {
#line 131
              __nesc_atomic_end(__nesc_atomic); 
#line 131
              return __nesc_temp;
            }
          }
        }
      if (CC2420SpiP$SpiResource$isOwner()) {
          CC2420SpiP$m_holder = id;
          error = SUCCESS;
        }
      else {
#line 139
        if ((error = CC2420SpiP$SpiResource$immediateRequest()) == SUCCESS) {
            CC2420SpiP$m_holder = id;
          }
        else {
            CC2420SpiP$WorkingState$toIdle();
          }
        }
    }
#line 146
    __nesc_atomic_end(__nesc_atomic); }
#line 146
  return error;
}

# 147 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static   uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$isOwner(uint8_t id)
#line 147
{
  /* atomic removed: atomic calls only */
#line 148
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId == id && /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_BUSY) {
        unsigned char __nesc_temp = 
#line 149
        TRUE;

#line 149
        return __nesc_temp;
      }
    else 
#line 150
      {
        unsigned char __nesc_temp = 
#line 150
        FALSE;

#line 150
        return __nesc_temp;
      }
  }
}

# 105 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static void Atm128SpiP$startSpi(void)
#line 105
{
  Atm128SpiP$Spi$enableSpi(FALSE);
  /* atomic removed: atomic calls only */
#line 107
  {
    Atm128SpiP$Spi$initMaster();
    Atm128SpiP$Spi$enableInterrupt(FALSE);
    Atm128SpiP$Spi$setMasterDoubleSpeed(TRUE);
    Atm128SpiP$Spi$setClockPolarity(FALSE);
    Atm128SpiP$Spi$setClockPhase(FALSE);
    Atm128SpiP$Spi$setClock(0);
    Atm128SpiP$Spi$enableSpi(TRUE);
  }
  Atm128SpiP$McuPowerState$update();
}

# 130 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static   void HplAtm128SpiP$SPI$enableSpi(bool enabled)
#line 130
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

#line 115
static   void HplAtm128SpiP$SPI$enableInterrupt(bool enabled)
#line 115
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

# 107 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static   error_t CC2420SpiP$Resource$request(uint8_t id)
#line 107
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 109
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
#line 122
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 123 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static   bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ArbiterInfo$inUse(void)
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

# 659 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static void CC2420TransmitP$loadTXFIFO(void)
#line 659
{
  cc2420_header_t *header = CC2420TransmitP$CC2420PacketBody$getHeader(CC2420TransmitP$m_msg);
  uint8_t tx_power = __nesc_ntoh_uint8((unsigned char *)&CC2420TransmitP$CC2420PacketBody$getMetadata(CC2420TransmitP$m_msg)->tx_power);

  if (!tx_power) {
      tx_power = 1;
    }

  CC2420TransmitP$CSN$clr();

  if (CC2420TransmitP$m_tx_power != tx_power) {
      CC2420TransmitP$TXCTRL$write((((2 << CC2420_TXCTRL_TXMIXBUF_CUR) | (
      3 << CC2420_TXCTRL_PA_CURRENT)) | (
      1 << CC2420_TXCTRL_RESERVED)) | ((
      tx_power & 0x1F) << CC2420_TXCTRL_PA_LEVEL));
    }

  CC2420TransmitP$m_tx_power = tx_power;

  {
    uint8_t tmpLen __attribute((unused))  = __nesc_ntoh_leuint8((unsigned char *)&header->length) - 1;

#line 680
    CC2420TransmitP$TXFIFO$write((uint8_t *)header, __nesc_ntoh_leuint8((unsigned char *)&header->length) - 1);
  }
}

# 305 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static   cc2420_status_t CC2420SpiP$Reg$write(uint8_t addr, uint16_t data)
#line 305
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 306
    {
      if (CC2420SpiP$WorkingState$isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 308
            0;

            {
#line 308
              __nesc_atomic_end(__nesc_atomic); 
#line 308
              return __nesc_temp;
            }
          }
        }
    }
#line 312
    __nesc_atomic_end(__nesc_atomic); }
#line 311
  CC2420SpiP$SpiByte$write(addr);
  CC2420SpiP$SpiByte$write(data >> 8);
  return CC2420SpiP$SpiByte$write(data & 0xff);
}

# 127 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static   uint8_t Atm128SpiP$SpiByte$write(uint8_t tx)
#line 127
{
  Atm128SpiP$Spi$enableSpi(TRUE);
  Atm128SpiP$McuPowerState$update();
  Atm128SpiP$Spi$write(tx);
  while (!(* (volatile uint8_t *)(0x0E + 0x20) & 0x80)) ;
  return Atm128SpiP$Spi$read();
}

#line 241
static   error_t Atm128SpiP$SpiPacket$send(uint8_t *writeBuf, 
uint8_t *readBuf, 
uint16_t bufLen)
#line 243
{
  uint8_t discard;

#line 245
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 245
    {
      Atm128SpiP$len = bufLen;
      Atm128SpiP$txBuffer = writeBuf;
      Atm128SpiP$rxBuffer = readBuf;
      Atm128SpiP$pos = 0;
    }
#line 250
    __nesc_atomic_end(__nesc_atomic); }
  if (bufLen > 0) {
      discard = Atm128SpiP$Spi$read();
      return Atm128SpiP$sendNextPart();
    }
  else {
      Atm128SpiP$zeroTask$postTask();
      return SUCCESS;
    }
}

#line 162
static error_t Atm128SpiP$sendNextPart(void)
#line 162
{
  uint16_t end;
  uint16_t tmpPos;
  uint16_t myLen;
  uint8_t *tx;
  uint8_t *rx;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 169
    {
      myLen = Atm128SpiP$len;
      tx = Atm128SpiP$txBuffer;
      rx = Atm128SpiP$rxBuffer;
      tmpPos = Atm128SpiP$pos;
      end = Atm128SpiP$pos + Atm128SpiP$SPI_ATOMIC_SIZE;
      end = end > Atm128SpiP$len ? Atm128SpiP$len : end;
    }
#line 176
    __nesc_atomic_end(__nesc_atomic); }

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
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
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
#line 200
    __nesc_atomic_end(__nesc_atomic); }


  return SUCCESS;
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/State.nc"
static   void UniqueSendP$State$toIdle(void){
#line 56
  StateImplP$State$toIdle(2U);
#line 56
}
#line 56
# 48 "../../../tos/lib/net/tymo/dymo/DymoPacketM.nc"
static  uint16_t DymoPacketM$DymoPacket$getSize(message_t *msg)
#line 48
{
  nx_uint8_t *p = DymoPacketM$Packet$getPayload(msg, 3);

#line 50
  return __nesc_ntoh_uint16((unsigned char *)&* (nx_uint16_t *)(p + 1));
}






static  void DymoPacketM$DymoPacket$createRM(message_t *msg, dymo_msg_t msg_type, 
const rt_info_t *origin, const rt_info_t *target)
#line 59
{
  unsigned char *__nesc_temp48;
  unsigned char *__nesc_temp47;
#line 60
  nx_uint8_t *payload = DymoPacketM$Packet$getPayload(msg, DymoPacketM$Packet$maxPayloadLength());
  nx_uint16_t *size_p;

#line 62
  __nesc_hton_uint8((unsigned char *)&* payload++, msg_type);
  size_p = (nx_uint16_t *)payload;
  payload += 2;
  __nesc_hton_uint8((unsigned char *)&* payload++, 10);
  __nesc_hton_uint8((unsigned char *)&* payload++, 0);

  DymoPacketM$create_block(payload, target);

  if (origin) {
      if (DymoPacketM$block_can_contain(payload, origin)) {
          DymoPacketM$block_add_info(payload, origin);
          __nesc_hton_uint16((unsigned char *)&*size_p, DymoPacketM$block_size(payload));
        }
      else 
#line 74
        {
          __nesc_hton_uint16((unsigned char *)&*size_p, DymoPacketM$block_size(payload));
          payload += __nesc_ntoh_uint16((unsigned char *)&*size_p);
          DymoPacketM$create_block(payload, origin);
          (__nesc_temp47 = (unsigned char *)&*size_p, __nesc_hton_uint16(__nesc_temp47, __nesc_ntoh_uint16(__nesc_temp47) + DymoPacketM$block_size(payload)));
        }
    }
  else 
#line 80
    {
      __nesc_hton_uint16((unsigned char *)&*size_p, DymoPacketM$block_size(payload));
    }



  (__nesc_temp48 = (unsigned char *)&*size_p, __nesc_hton_uint16(__nesc_temp48, __nesc_ntoh_uint16(__nesc_temp48) + 5));
}

#line 207
static void DymoPacketM$create_block(nx_uint8_t *payload, const rt_info_t *info)
#line 207
{
  uint8_t semantics;

  semantics = BLOCK_HEAD;
  if (info->seqnum) {
    semantics |= BLOCK_SEQNUM;
    }
#line 213
  if (info->has_hopcnt) {
    semantics |= BLOCK_HOPCNT;
    }
  __nesc_hton_uint8((unsigned char *)&* payload++, semantics);
  __nesc_hton_uint8((unsigned char *)&* payload++, 1);
  __nesc_hton_uint16((unsigned char *)&* (nx_addr_t *)payload, info->address);
  payload += sizeof(addr_t );
  if (info->seqnum) {
      __nesc_hton_uint16((unsigned char *)&* (nx_seqnum_t *)payload, info->seqnum);
      payload += 2;
    }
  if (info->has_hopcnt) {
      __nesc_hton_uint8((unsigned char *)&* payload++, info->hopcnt);
    }
}

#line 252
static bool DymoPacketM$block_can_contain(nx_uint8_t *block, const rt_info_t *info)
#line 252
{
  if (__nesc_ntoh_uint8((unsigned char *)&*block) & BLOCK_SEQNUM && ! info->seqnum) {
    return 0;
    }
#line 255
  if (!(__nesc_ntoh_uint8((unsigned char *)&*block) & BLOCK_SEQNUM) && info->seqnum) {
    return 0;
    }
  if (__nesc_ntoh_uint8((unsigned char *)&*block) & BLOCK_HOPCNT && ! info->has_hopcnt) {
    return 0;
    }
#line 260
  if (!(__nesc_ntoh_uint8((unsigned char *)&*block) & BLOCK_HOPCNT) && info->has_hopcnt) {
    return 0;
    }
  if (__nesc_ntoh_uint8((unsigned char *)&*block) & BLOCK_HEAD && __nesc_ntoh_uint8((unsigned char *)&*(block + 2)) != info->address / 256) {
    return 0;
    }
  return 1;
}

#line 229
static void DymoPacketM$block_add_info(nx_uint8_t *block, const rt_info_t *info)
#line 229
{
  unsigned char *__nesc_temp55;
#line 230
  uint8_t semantics = __nesc_ntoh_uint8((unsigned char *)&*block);
  nx_uint8_t *size_p = block + 1;

#line 232
  block += DymoPacketM$block_size(block);
  (__nesc_temp55 = (unsigned char *)&*size_p, __nesc_hton_uint8(__nesc_temp55, __nesc_ntoh_uint8(__nesc_temp55) + 1));
  if (semantics & BLOCK_HEAD) {
      __nesc_hton_uint8((unsigned char *)&*block, info->address % 256);
      block++;
    }
  else 
#line 237
    {
      __nesc_hton_uint16((unsigned char *)&* (nx_addr_t *)block, info->address);
      block += sizeof(addr_t );
    }

  if (semantics & BLOCK_SEQNUM) {
      __nesc_hton_uint16((unsigned char *)&* (nx_seqnum_t *)block, info->seqnum);
      block += sizeof(seqnum_t );
    }

  if (semantics & BLOCK_HOPCNT) {
      __nesc_hton_uint8((unsigned char *)&*block, info->hopcnt);
    }
}

# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static void /*DymoTableC.Timers*/VirtualizeTimerC$1$fireTimers(uint32_t now)
{
  uint8_t num;

  for (num = 0; num < /*DymoTableC.Timers*/VirtualizeTimerC$1$NUM_TIMERS; num++) 
    {
      /*DymoTableC.Timers*/VirtualizeTimerC$1$Timer_t *timer = &/*DymoTableC.Timers*/VirtualizeTimerC$1$m_timers[num];

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
              /*DymoTableC.Timers*/VirtualizeTimerC$1$Timer$fired(num);
              break;
            }
        }
    }
  /*DymoTableC.Timers*/VirtualizeTimerC$1$updateFromTimer$postTask();
}

# 425 "../../../tos/lib/net/tymo/dymo/DymoEngineM.nc"
static  void DymoEngineM$AMSend$sendDone(message_t *msg, error_t error)
#line 425
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 426
    {
      DymoEngineM$busySend = FALSE;
    }
#line 428
    __nesc_atomic_end(__nesc_atomic); }
  if (msg == &DymoEngineM$fw_msg) {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 430
        {
          DymoEngineM$busyProcess = FALSE;
        }
#line 432
        __nesc_atomic_end(__nesc_atomic); }
    }
  else {
#line 433
    if (msg == &DymoEngineM$buf_packet) {
        { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 434
          {
            DymoEngineM$busyIssue = FALSE;
          }
#line 436
          __nesc_atomic_end(__nesc_atomic); }
      }
    }
  if (error == SUCCESS) {
      if (msg == &DymoEngineM$fw_msg) {
        ;
        }
      else {
#line 443
        ;
        }
    }
  else {
#line 445
    ;
    }
}

# 132 "../../../tos/lib/net/tymo/ForwardingEngineM.nc"
static  void /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$SubSend$sendDone(message_t *msg, error_t e)
#line 132
{
  ;
  if (e == SUCCESS && /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$acks) {
      if (!/*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Acks$wasAcked(msg)) {
          e = FAIL;
          ;
          /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$MHControl$sendFailed(msg, 2);
          /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$LinkMonitor$brokenLink(/*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$AMPacket$destination(msg));
        }
    }
  else {
#line 141
    if (e != SUCCESS) {
        ;
        /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$MHControl$sendFailed(msg, 1);
      }
    }
  if (/*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$lockAvail) {
      /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$avail = msg;
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 148
        {
          /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$lockAvail = FALSE;
        }
#line 150
        __nesc_atomic_end(__nesc_atomic); }
      ;
    }
  else 
#line 152
    {
      ;
      if (/*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$amWaiting) {
          /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$AMSend$sendDone(/*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$amWaiting, msg, e);
          /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$amWaiting = 0;
        }
      else 
#line 157
        {
          /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$AMSend$sendDone(/*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$typebuf, msg, e);
        }
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 160
        {
          /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$lockWaiting = FALSE;
        }
#line 162
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 75 "TestM.nc"
static  void TestM$MHSend$sendDone(message_t *msg, error_t e)
#line 75
{
  if (e == SUCCESS && msg == &TestM$packet && TestM$MHPacket$address() == TestM$ORIGIN) {
      ;
      TestM$setLeds(1);
    }
  else {
#line 79
    if (e == FAIL) {
        ;
        TestM$setLeds(2);
      }
    else 
#line 82
      {
        ;
      }
    }
}

#line 40
static void TestM$setLeds(uint16_t val)
#line 40
{
  if (val & 0x01) {
    TestM$Leds$led0Toggle();
    }
#line 43
  if (val & 0x02) {
    TestM$Leds$led1Toggle();
    }
#line 45
  if (val & 0x04) {
    TestM$Leds$led2Toggle();
    }
}

# 155 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(uint8_t last, message_t *msg, error_t err)
#line 155
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[last].msg = (void *)0;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend();
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(last, msg, err);
}

# 147 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static  uint8_t CC2420ActiveMessageP$Packet$payloadLength(message_t *msg)
#line 147
{
  return __nesc_ntoh_leuint8((unsigned char *)&CC2420ActiveMessageP$CC2420PacketBody$getHeader(msg)->length) - CC2420_SIZE;
}

# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
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
              break;
            }
        }
    }
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask();
}

# 115 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
static  void *MHPacketM$SubPacket$getPayload(message_t *arg_0x40350540, uint8_t arg_0x403506c8){
#line 115
  void *result;
#line 115

#line 115
  result = CC2420ActiveMessageP$Packet$getPayload(arg_0x40350540, arg_0x403506c8);
#line 115

#line 115
  return result;
#line 115
}
#line 115
# 27 "../../../tos/lib/net/tymo/mh/MHEngineM.nc"
static  fw_action_t MHEngineM$RouteSelect$selectRoute(message_t *msg, addr_t *destination, uint8_t *am_type)
#line 27
{
  ;

  if (
#line 29
  MHEngineM$MHPacket$isForMe(msg)
   || (destination && *destination == MHEngineM$MHPacket$address())) {

      *am_type = MHEngineM$MHPacket$type(msg);
      return FW_RECEIVE;
    }
  else {

      error_t e;

#line 38
      if (destination) {
        e = MHEngineM$RoutingTable$getRoute(*destination, &MHEngineM$info);
        }
      else {
#line 41
        e = MHEngineM$RoutingTable$getForwardingRoute(MHEngineM$MHPacket$destination(msg), &MHEngineM$info);
        }
      if (e == SUCCESS) {

          ;
          MHEngineM$AMPacket$setDestination(msg, MHEngineM$info.nexthop);

          if (destination) {
              MHEngineM$MHPacket$setType(msg, *am_type);
              MHEngineM$MHPacket$setDestination(msg, *destination);
              MHEngineM$MHPacket$setSource(msg, MHEngineM$MHPacket$address());
            }
          else 
#line 52
            {
              *am_type = MHEngineM$MHPacket$type(msg);
            }
          return FW_SEND;
        }
      else {
#line 57
        if (e == EBUSY) {
            ;
            return FW_WAIT;
          }
        else 
#line 60
          {
            ;
            return FW_DISCARD;
          }
        }
    }
}

# 90 "../../../tos/lib/net/tymo/mh/MHPacketM.nc"
static  am_id_t MHPacketM$MHPacket$type(message_t *amsg)
#line 90
{
  return __nesc_ntoh_uint8((unsigned char *)&((mhpacket_header_t *)MHPacketM$SubPacket$getPayload(amsg, MHPacketM$SubPacket$maxPayloadLength()))->type);
}

#line 51
static  void MHPacketM$Packet$setPayloadLength(message_t *amsg, uint8_t len)
#line 51
{
  __nesc_hton_uint8((unsigned char *)&((mhpacket_header_t *)MHPacketM$SubPacket$getPayload(amsg, MHPacketM$SubPacket$maxPayloadLength()))->len, len);
  MHPacketM$SubPacket$setPayloadLength(amsg, len + sizeof(mhpacket_header_t ));
}

# 65 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static   error_t CC2420PacketP$Acks$requestAck(message_t *p_msg)
#line 65
{
  unsigned char *__nesc_temp45;

#line 66
  (__nesc_temp45 = (unsigned char *)&CC2420PacketP$CC2420PacketBody$getHeader(p_msg)->fcf, __nesc_hton_leuint16(__nesc_temp45, __nesc_ntoh_leuint16(__nesc_temp45) | (1 << IEEE154_FCF_ACK_REQ)));
  return SUCCESS;
}

# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static  error_t /*DymoNetworkC.MHQueue.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 47
{
  /*DymoNetworkC.MHQueue.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(msg, dest);
  /*DymoNetworkC.MHQueue.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(msg, 9);
  return /*DymoNetworkC.MHQueue.AMQueueEntryP*/AMQueueEntryP$0$Send$send(msg, len);
}

# 148 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(), dt, TRUE);
}

# 47 "../../../tos/lib/net/tymo/mh/MHPacketM.nc"
static  uint8_t MHPacketM$Packet$payloadLength(message_t *amsg)
#line 47
{
  return __nesc_ntoh_uint8((unsigned char *)&((mhpacket_header_t *)MHPacketM$SubPacket$getPayload(amsg, MHPacketM$SubPacket$maxPayloadLength()))->len);
}

# 212 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(uint32_t nt0, uint32_t ndt)
#line 212
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set = TRUE;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0 = nt0;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt = ndt;
    }
#line 218
    __nesc_atomic_end(__nesc_atomic); }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt();
}

#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt(void)
#line 90
{
  bool fired = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {



      uint8_t interrupt_in = 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get() - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get();
      uint8_t newOcr0;
      uint8_t tifr = (uint8_t )/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag().flat;

#line 101
      ;
      if ((interrupt_in != 0 && interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT) || tifr & (1 << 1)) {
          if (interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT) {
              ;
            }
          else {
              ;
            }
          {
#line 109
            __nesc_atomic_end(__nesc_atomic); 
#line 109
            return;
          }
        }

      if (!/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set) {
          newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT;
          ;
        }
      else 
        {
          uint32_t now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get();

#line 120
          ;

          if ((uint32_t )(now - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0) >= /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt) 
            {
              /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set = FALSE;
              fired = TRUE;
              newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT;
            }
          else 
            {


              uint32_t alarm_in = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base;

              if (alarm_in > /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT) {
                newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT;
                }
              else {
#line 136
                if ((uint8_t )alarm_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT) {
                  newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT;
                  }
                else {
#line 139
                  newOcr0 = alarm_in;
                  }
                }
            }
        }
#line 142
      newOcr0--;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setOcr0(newOcr0);
    }
#line 144
    __nesc_atomic_end(__nesc_atomic); }
  if (fired) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$fired();
    }
}

# 279 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static   uint16_t CC2420ControlP$CC2420Config$getShortAddr(void)
#line 279
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 280
    {
      unsigned short __nesc_temp = 
#line 280
      CC2420ControlP$m_short_addr;

      {
#line 280
        __nesc_atomic_end(__nesc_atomic); 
#line 280
        return __nesc_temp;
      }
    }
#line 282
    __nesc_atomic_end(__nesc_atomic); }
}

# 399 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static void CC2420ReceiveP$waitForNextPacket(void)
#line 399
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 400
    {
      if (CC2420ReceiveP$m_state == CC2420ReceiveP$S_STOPPED) {
          CC2420ReceiveP$SpiResource$release();
          {
#line 403
            __nesc_atomic_end(__nesc_atomic); 
#line 403
            return;
          }
        }
      CC2420ReceiveP$receivingPacket = FALSE;










      if ((CC2420ReceiveP$m_missed_packets && CC2420ReceiveP$FIFO$get()) || !CC2420ReceiveP$FIFOP$get()) {

          if (CC2420ReceiveP$m_missed_packets) {
              CC2420ReceiveP$m_missed_packets--;
            }

          CC2420ReceiveP$beginReceive();
        }
      else {

          CC2420ReceiveP$m_state = CC2420ReceiveP$S_STARTED;
          CC2420ReceiveP$m_missed_packets = 0;
          CC2420ReceiveP$SpiResource$release();
        }
    }
#line 431
    __nesc_atomic_end(__nesc_atomic); }
}

# 149 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static   error_t CC2420SpiP$Resource$release(uint8_t id)
#line 149
{
  uint8_t i;

#line 151
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 151
    {
      if (CC2420SpiP$m_holder != id) {
          {
            unsigned char __nesc_temp = 
#line 153
            FAIL;

            {
#line 153
              __nesc_atomic_end(__nesc_atomic); 
#line 153
              return __nesc_temp;
            }
          }
        }
#line 156
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
#line 169
                    SUCCESS;

                    {
#line 169
                      __nesc_atomic_end(__nesc_atomic); 
#line 169
                      return __nesc_temp;
                    }
                  }
                }
            }
        }
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
#line 175
  return SUCCESS;
}

#line 339
static error_t CC2420SpiP$attemptRelease(void)
#line 339
{


  if ((
#line 340
  CC2420SpiP$m_requests > 0
   || CC2420SpiP$m_holder != CC2420SpiP$NO_HOLDER)
   || !CC2420SpiP$WorkingState$isIdle()) {
      return FAIL;
    }
  /* atomic removed: atomic calls only */
  CC2420SpiP$release = TRUE;
  CC2420SpiP$ChipSpiResource$releasing();
  /* atomic removed: atomic calls only */
#line 348
  {
    if (CC2420SpiP$release) {
        CC2420SpiP$SpiResource$release();
        {
          unsigned char __nesc_temp = 
#line 351
          SUCCESS;

#line 351
          return __nesc_temp;
        }
      }
  }
  return EBUSY;
}

# 354 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static void CC2420ReceiveP$beginReceive(void)
#line 354
{
  CC2420ReceiveP$m_state = CC2420ReceiveP$S_RX_LENGTH;
  /* atomic removed: atomic calls only */
  CC2420ReceiveP$receivingPacket = TRUE;
  if (CC2420ReceiveP$SpiResource$isOwner()) {
      CC2420ReceiveP$receive();
    }
  else {
#line 361
    if (CC2420ReceiveP$SpiResource$immediateRequest() == SUCCESS) {
        CC2420ReceiveP$receive();
      }
    else {
        CC2420ReceiveP$SpiResource$request();
      }
    }
}

#line 389
static void CC2420ReceiveP$receive(void)
#line 389
{
  CC2420ReceiveP$CSN$clr();
  CC2420ReceiveP$RXFIFO$beginRead((uint8_t *)CC2420ReceiveP$CC2420PacketBody$getHeader(CC2420ReceiveP$m_p_rx_buf), 1);
}

# 189 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static   cc2420_status_t CC2420SpiP$Fifo$beginRead(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 190
{

  cc2420_status_t status = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 194
    {
      if (CC2420SpiP$WorkingState$isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 196
            status;

            {
#line 196
              __nesc_atomic_end(__nesc_atomic); 
#line 196
              return __nesc_temp;
            }
          }
        }
    }
#line 200
    __nesc_atomic_end(__nesc_atomic); }
#line 200
  CC2420SpiP$m_addr = addr | 0x40;

  status = CC2420SpiP$SpiByte$write(CC2420SpiP$m_addr);
  CC2420SpiP$Fifo$continueRead(addr, data, len);

  return status;
}

#line 329
static   void CC2420SpiP$SpiPacket$sendDone(uint8_t *tx_buf, uint8_t *rx_buf, 
uint16_t len, error_t error)
#line 330
{
  if (CC2420SpiP$m_addr & 0x40) {
      CC2420SpiP$Fifo$readDone(CC2420SpiP$m_addr & ~0x40, rx_buf, len, error);
    }
  else 
#line 333
    {
      CC2420SpiP$Fifo$writeDone(CC2420SpiP$m_addr, tx_buf, len, error);
    }
}

# 372 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static void CC2420ReceiveP$flush(void)
#line 372
{
  CC2420ReceiveP$reset_state();
  CC2420ReceiveP$CSN$set();
  CC2420ReceiveP$CSN$clr();
  CC2420ReceiveP$SFLUSHRX$strobe();
  CC2420ReceiveP$SFLUSHRX$strobe();
  CC2420ReceiveP$CSN$set();
  CC2420ReceiveP$SpiResource$release();
  CC2420ReceiveP$waitForNextPacket();
}

#line 437
static void CC2420ReceiveP$reset_state(void)
#line 437
{
  CC2420ReceiveP$m_bytes_left = CC2420ReceiveP$RXFIFO_SIZE;
  /* atomic removed: atomic calls only */
#line 439
  CC2420ReceiveP$receivingPacket = FALSE;
  CC2420ReceiveP$m_timestamp_head = 0;
  CC2420ReceiveP$m_timestamp_size = 0;
  CC2420ReceiveP$m_missed_packets = 0;
}

# 318 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static   cc2420_status_t CC2420SpiP$Strobe$strobe(uint8_t addr)
#line 318
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 319
    {
      if (CC2420SpiP$WorkingState$isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 321
            0;

            {
#line 321
              __nesc_atomic_end(__nesc_atomic); 
#line 321
              return __nesc_temp;
            }
          }
        }
    }
#line 325
    __nesc_atomic_end(__nesc_atomic); }
#line 325
  return CC2420SpiP$SpiByte$write(addr);
}

# 122 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static   void CC2420PacketP$PacketTimeStamp32khz$clear(message_t *msg)
{
  __nesc_hton_int8((unsigned char *)&CC2420PacketP$CC2420PacketBody$getMetadata(msg)->timesync, FALSE);
  __nesc_hton_uint32((unsigned char *)&CC2420PacketP$CC2420PacketBody$getMetadata(msg)->timestamp, CC2420_INVALID_TIMESTAMP);
}

# 684 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static void CC2420TransmitP$signalDone(error_t err)
#line 684
{
  /* atomic removed: atomic calls only */
#line 685
  CC2420TransmitP$m_state = CC2420TransmitP$S_STARTED;
  CC2420TransmitP$abortSpiRelease = FALSE;
  CC2420TransmitP$ChipSpiResource$attemptRelease();
  CC2420TransmitP$Send$sendDone(CC2420TransmitP$m_msg, err);
}

#line 580
static void CC2420TransmitP$attemptSend(void)
#line 580
{
  uint8_t status;
  bool congestion = TRUE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 584
    {
      if (CC2420TransmitP$m_state == CC2420TransmitP$S_CANCEL) {
          CC2420TransmitP$SFLUSHTX$strobe();
          CC2420TransmitP$releaseSpiResource();
          CC2420TransmitP$CSN$set();
          CC2420TransmitP$m_state = CC2420TransmitP$S_STARTED;
          CC2420TransmitP$Send$sendDone(CC2420TransmitP$m_msg, ECANCEL);
          {
#line 591
            __nesc_atomic_end(__nesc_atomic); 
#line 591
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
#line 607
    __nesc_atomic_end(__nesc_atomic); }

  if (congestion) {
      CC2420TransmitP$totalCcaChecks = 0;
      CC2420TransmitP$releaseSpiResource();
      CC2420TransmitP$congestionBackoff();
    }
  else 
#line 613
    {
      CC2420TransmitP$BackoffTimer$start(CC2420TransmitP$CC2420_ABORT_PERIOD);
    }
}





static void CC2420TransmitP$congestionBackoff(void)
#line 622
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 623
    {
      CC2420TransmitP$RadioBackoff$requestCongestionBackoff(CC2420TransmitP$m_msg);
      CC2420TransmitP$BackoffTimer$start(CC2420TransmitP$myCongestionBackoff);
    }
#line 626
    __nesc_atomic_end(__nesc_atomic); }
}

# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/system/RandomMlcgC.nc"
static   uint32_t RandomMlcgC$Random$rand32(void)
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
    tmpseed = (uint64_t )33614U * (uint64_t )RandomMlcgC$seed;
    q = tmpseed;
    q = q >> 1;
    p = tmpseed >> 32;
    mlcg = p + q;
    if (mlcg & 0x80000000) {
        mlcg = mlcg & 0x7FFFFFFF;
        mlcg++;
      }
    RandomMlcgC$seed = mlcg;
  }
  return mlcg;
}

# 136 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type dt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_t0 = t0;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_dt = dt;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$set_alarm();
    }
#line 143
    __nesc_atomic_end(__nesc_atomic); }
}

#line 96
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$set_alarm(void)
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type now = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$get();
#line 98
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type expires;
#line 98
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type remaining;




  expires = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_t0 + /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_dt;


  remaining = (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type )(expires - now);


  if (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_t0 <= now) 
    {
      if (expires >= /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_t0 && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_t0 || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 121
  if (remaining > /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$MAX_DELAY) 
    {
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_t0 = now + /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$MAX_DELAY;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_dt = remaining - /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$MAX_DELAY;
      remaining = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$MAX_DELAY;
    }
  else 
    {
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_t0 += /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_dt;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_dt = 0;
    }
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$startAt((/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$from_size_type )now << 0, 
  (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$from_size_type )remaining << 0);
}

# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static   /*Counter32khz32C.Transform32*/TransformCounterC$0$to_size_type /*Counter32khz32C.Transform32*/TransformCounterC$0$Counter$get(void)
{
  /*Counter32khz32C.Transform32*/TransformCounterC$0$to_size_type rv = 0;

#line 72
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*Counter32khz32C.Transform32*/TransformCounterC$0$upper_count_type high = /*Counter32khz32C.Transform32*/TransformCounterC$0$m_upper;
      /*Counter32khz32C.Transform32*/TransformCounterC$0$from_size_type low = /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$get();

#line 76
      if (/*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$isOverflowPending()) 
        {






          high++;
          low = /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$get();
        }
      {
        /*Counter32khz32C.Transform32*/TransformCounterC$0$to_size_type high_to = high;
        /*Counter32khz32C.Transform32*/TransformCounterC$0$to_size_type low_to = low >> /*Counter32khz32C.Transform32*/TransformCounterC$0$LOW_SHIFT_RIGHT;

#line 90
        rv = (high_to << /*Counter32khz32C.Transform32*/TransformCounterC$0$HIGH_SHIFT_LEFT) | low_to;
      }
    }
#line 92
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

# 456 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static void CC2420ControlP$writeFsctrl(void)
#line 456
{
  uint8_t channel;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 459
    {
      channel = CC2420ControlP$m_channel;
    }
#line 461
    __nesc_atomic_end(__nesc_atomic); }

  CC2420ControlP$FSCTRL$write((1 << CC2420_FSCTRL_LOCK_THR) | (((
  channel - 11) * 5 + 357) << CC2420_FSCTRL_FREQ));
}







static void CC2420ControlP$writeMdmctrl0(void)
#line 473
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 474
    {
      CC2420ControlP$MDMCTRL0$write((((((((1 << CC2420_MDMCTRL0_RESERVED_FRAME_MODE) | ((
      CC2420ControlP$addressRecognition && CC2420ControlP$hwAddressRecognition) << CC2420_MDMCTRL0_ADR_DECODE)) | (
      2 << CC2420_MDMCTRL0_CCA_HYST)) | (
      3 << CC2420_MDMCTRL0_CCA_MOD)) | (
      1 << CC2420_MDMCTRL0_AUTOCRC)) | ((
      CC2420ControlP$autoAckEnabled && CC2420ControlP$hwAutoAckDefault) << CC2420_MDMCTRL0_AUTOACK)) | (
      0 << CC2420_MDMCTRL0_AUTOACK)) | (
      2 << CC2420_MDMCTRL0_PREAMBLE_LENGTH));
    }
#line 483
    __nesc_atomic_end(__nesc_atomic); }
}







static void CC2420ControlP$writeId(void)
#line 492
{
  nxle_uint16_t id[2];

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 495
    {
      __nesc_hton_leuint16((unsigned char *)&id[0], CC2420ControlP$m_pan);
      __nesc_hton_leuint16((unsigned char *)&id[1], CC2420ControlP$m_short_addr);
    }
#line 498
    __nesc_atomic_end(__nesc_atomic); }

  CC2420ControlP$PANID$write(0, (uint8_t *)&id, sizeof id);
}

# 260 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static   cc2420_status_t CC2420SpiP$Ram$write(uint16_t addr, uint8_t offset, 
uint8_t *data, 
uint8_t len)
#line 262
{

  cc2420_status_t status = 0;
  uint8_t tmpLen = len;
  uint8_t *tmpData = (uint8_t *)data;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 268
    {
      if (CC2420SpiP$WorkingState$isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 270
            status;

            {
#line 270
              __nesc_atomic_end(__nesc_atomic); 
#line 270
              return __nesc_temp;
            }
          }
        }
    }
#line 274
    __nesc_atomic_end(__nesc_atomic); }
#line 274
  addr += offset;

  status = CC2420SpiP$SpiByte$write(addr | 0x80);
  CC2420SpiP$SpiByte$write((addr >> 1) & 0xc0);
  for (; len; len--) {
      CC2420SpiP$SpiByte$write(tmpData[tmpLen - len]);
    }

  return status;
}

# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t CC2420CsmaP$SubControl$stop(void){
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
# 199 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static   error_t CC2420ControlP$CC2420Power$stopVReg(void)
#line 199
{
  CC2420ControlP$m_state = CC2420ControlP$S_VREG_STOPPED;
  CC2420ControlP$RSTN$clr();
  CC2420ControlP$VREN$clr();
  CC2420ControlP$RSTN$set();
  return SUCCESS;
}

# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$enableCapture(uint8_t mode)
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$stop();
    /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$reset();
    /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$setEdge(mode);
    /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$start();
  }
  return SUCCESS;
}

# 178 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
__attribute((signal))   void __vector_15(void)
#line 178
{
  HplAtm128Timer0AsyncP$stabiliseTimer0();
  HplAtm128Timer0AsyncP$Compare$fired();
}


__attribute((signal))   void __vector_16(void)
#line 184
{
  HplAtm128Timer0AsyncP$stabiliseTimer0();
  HplAtm128Timer0AsyncP$Timer$overflow();
}

# 195 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
__attribute((interrupt))   void __vector_12(void)
#line 195
{
  HplAtm128Timer1P$CompareA$fired();
}

__attribute((interrupt))   void __vector_13(void)
#line 199
{
  HplAtm128Timer1P$CompareB$fired();
}

__attribute((interrupt))   void __vector_24(void)
#line 203
{
  HplAtm128Timer1P$CompareC$fired();
}

__attribute((interrupt))   void __vector_11(void)
#line 207
{
  HplAtm128Timer1P$Capture$captured(HplAtm128Timer1P$Timer$get());
}

# 167 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static   uint8_t CC2420PacketP$PacketTimeSyncOffset$get(message_t *msg)
{
  return __nesc_ntoh_leuint8((unsigned char *)&CC2420PacketP$CC2420PacketBody$getHeader(msg)->length)
   + (sizeof(cc2420_header_t ) - MAC_HEADER_SIZE)
   - MAC_FOOTER_SIZE
   - sizeof(timesync_radio_t );
}

# 211 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
__attribute((interrupt))   void __vector_14(void)
#line 211
{
  HplAtm128Timer1P$Timer$overflow();
}

# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSigP.nc"
__attribute((signal))   void __vector_1(void)
#line 46
{
  HplAtm128InterruptSigP$IntSig0$fired();
}


__attribute((signal))   void __vector_2(void)
#line 51
{
  HplAtm128InterruptSigP$IntSig1$fired();
}


__attribute((signal))   void __vector_3(void)
#line 56
{
  HplAtm128InterruptSigP$IntSig2$fired();
}


__attribute((signal))   void __vector_4(void)
#line 61
{
  HplAtm128InterruptSigP$IntSig3$fired();
}


__attribute((signal))   void __vector_5(void)
#line 66
{
  HplAtm128InterruptSigP$IntSig4$fired();
}


__attribute((signal))   void __vector_6(void)
#line 71
{
  HplAtm128InterruptSigP$IntSig5$fired();
}


__attribute((signal))   void __vector_7(void)
#line 76
{
  HplAtm128InterruptSigP$IntSig6$fired();
}


__attribute((signal))   void __vector_8(void)
#line 81
{
  HplAtm128InterruptSigP$IntSig7$fired();
}

# 102 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
__attribute((signal))   void __vector_17(void)
#line 102
{
  HplAtm128SpiP$SPI$dataReady(HplAtm128SpiP$SPI$read());
}

