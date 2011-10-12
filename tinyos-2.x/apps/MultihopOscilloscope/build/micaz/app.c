#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 152 "/usr/bin/../lib/gcc/avr/4.1.2/include/stddef.h" 3
typedef int ptrdiff_t;
#line 214
typedef unsigned int size_t;
#line 326
typedef int wchar_t;
# 8 "/usr/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_nonnull {
}  ;
#line 9
struct __nesc_attr_bnd {
#line 9
  void *lo, *hi;
}  ;
#line 10
struct __nesc_attr_bnd_nok {
#line 10
  void *lo, *hi;
}  ;
#line 11
struct __nesc_attr_count {
#line 11
  int n;
}  ;
#line 12
struct __nesc_attr_count_nok {
#line 12
  int n;
}  ;
#line 13
struct __nesc_attr_one {
}  ;
#line 14
struct __nesc_attr_one_nok {
}  ;
#line 15
struct __nesc_attr_dmemset {
#line 15
  int a1, a2, a3;
}  ;
#line 16
struct __nesc_attr_dmemcpy {
#line 16
  int a1, a2, a3;
}  ;
#line 17
struct __nesc_attr_nts {
}  ;
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
# 77 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/inttypes.h" 3
typedef int32_t int_farptr_t;



typedef uint32_t uint_farptr_t;
# 235 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void * source)  ;




static __inline uint8_t __nesc_hton_uint8(void * target, uint8_t value)  ;





static __inline uint8_t __nesc_ntoh_leuint8(const void * source)  ;




static __inline uint8_t __nesc_hton_leuint8(void * target, uint8_t value)  ;





static __inline int8_t __nesc_ntoh_int8(const void * source)  ;
#line 257
static __inline int8_t __nesc_hton_int8(void * target, int8_t value)  ;






static __inline uint16_t __nesc_ntoh_uint16(const void * source)  ;




static __inline uint16_t __nesc_hton_uint16(void * target, uint16_t value)  ;






static __inline uint16_t __nesc_ntoh_leuint16(const void * source)  ;




static __inline uint16_t __nesc_hton_leuint16(void * target, uint16_t value)  ;
#line 294
static __inline uint32_t __nesc_ntoh_uint32(const void * source)  ;






static __inline uint32_t __nesc_hton_uint32(void * target, uint32_t value)  ;
#line 385
typedef struct { unsigned char data[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char data[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char data[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char data[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { unsigned char data[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char data[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char data[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char data[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { unsigned char data[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char data[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char data[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char data[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { unsigned char data[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char data[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char data[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char data[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 112 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/string.h" 3
extern void *memcpy(void *arg_0x402a0978, const void *arg_0x402a0b10, size_t arg_0x402a0ca8);



extern void *memset(void *arg_0x402a2c70, int arg_0x402a2dc8, size_t arg_0x402a7010);
# 71 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/stdlib.h" 3
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


typedef int (*__compar_fn_t)(const void *arg_0x402b45a0, const void *arg_0x402b4738);
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
# 25 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/atm128const.h"
typedef uint8_t const_uint8_t __attribute((__progmem__)) ;
typedef uint16_t const_uint16_t __attribute((__progmem__)) ;
typedef uint32_t const_uint32_t __attribute((__progmem__)) ;
typedef int8_t const_int8_t __attribute((__progmem__)) ;
typedef int16_t const_int16_t __attribute((__progmem__)) ;
typedef int32_t const_int32_t __attribute((__progmem__)) ;
# 82 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/atm128hardware.h"
static __inline void __nesc_enable_interrupt()  ;



static __inline void __nesc_disable_interrupt()  ;




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


enum __nesc_unnamed4247 {
  ATM128_POWER_IDLE = 0, 
  ATM128_POWER_ADC_NR = 1, 
  ATM128_POWER_EXT_STANDBY = 2, 
  ATM128_POWER_SAVE = 3, 
  ATM128_POWER_STANDBY = 4, 
  ATM128_POWER_DOWN = 5
};


static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)  ;
# 34 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/Atm128Adc.h"
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
# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.h"
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
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128Timer.h"
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
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/mica/MicaTimer.h"
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
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/micaz/hardware.h"
enum __nesc_unnamed4295 {
  CHANNEL_THERMISTOR = ATM128_ADC_SNGL_ADC1
};

enum __nesc_unnamed4296 {
  PLATFORM_BAUDRATE = 57600L
};
# 19 "MultihopOscilloscope.h"
enum __nesc_unnamed4297 {


  NREADINGS = 5, 

  DEFAULT_INTERVAL = 7000U, 
  AM_OSCILLOSCOPE = 0x93
};







#line 28
typedef nx_struct oscilloscope {
  nx_uint16_t version;
  nx_uint16_t interval;
  nx_uint16_t id;
  nx_uint16_t count;
  nx_uint16_t readings[NREADINGS];
} __attribute__((packed)) oscilloscope_t;
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
enum __nesc_unnamed4298 {

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

enum __nesc_unnamed4299 {

  CC2420_INVALID_TIMESTAMP = 0x80000000L
};
# 6 "/opt/CVSTinyOS/tinyos-2.x/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4300 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4301 {
  TOS_AM_GROUP = 0x00, 
  TOS_AM_ADDRESS = 1
};
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4302 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4303 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4304 {
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
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/Collection.h"
enum __nesc_unnamed4305 {
  AM_COLLECTION_DATA = 20, 
  AM_COLLECTION_CONTROL = 21, 
  AM_COLLECTION_DEBUG = 22
};

typedef uint8_t collection_id_t;
typedef nx_uint8_t nx_collection_id_t;
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/types/Leds.h"
enum __nesc_unnamed4306 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
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
enum __nesc_unnamed4307 {
  ATM128_SPI_CLK_DIVIDE_4 = 0, 
  ATM128_SPI_CLK_DIVIDE_16 = 1, 
  ATM128_SPI_CLK_DIVIDE_64 = 2, 
  ATM128_SPI_CLK_DIVIDE_128 = 3
};
#line 49
#line 40
typedef struct __nesc_unnamed4308 {
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
typedef union __nesc_unnamed4309 {
  uint8_t flat;
  Atm128SPIControl_s bits;
} Atm128SPIControl_t;

typedef Atm128SPIControl_t Atm128_SPCR_t;








#line 58
typedef struct __nesc_unnamed4310 {
  uint8_t spif : 1;
  uint8_t wcol : 1;
  uint8_t rsvd : 5;
  uint8_t spi2x : 1;
} 
Atm128SPIStatus_s;



#line 65
typedef union __nesc_unnamed4311 {
  uint8_t flat;
  Atm128SPIStatus_s bits;
} Atm128SPIStatus_t;

typedef Atm128SPIStatus_t Atm128_SPSR_t;

typedef uint8_t Atm128_SPDR_t;
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
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/lpl/DefaultLpl.h"
#line 42
typedef enum __nesc_unnamed4312 {
  S_LPL_NOT_SENDING, 
  S_LPL_FIRST_MESSAGE, 
  S_LPL_SENDING, 
  S_LPL_CLEAN_UP
} lpl_sendstate_t;
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/Ctp.h"
enum __nesc_unnamed4313 {

  AM_CTP_ROUTING = 0x70, 
  AM_CTP_DATA = 0x71, 
  AM_CTP_DEBUG = 0x72, 


  CTP_OPT_PULL = 0x80, 
  CTP_OPT_ECN = 0x40
};

typedef nx_uint8_t nx_ctp_options_t;
typedef uint8_t ctp_options_t;









#line 65
typedef nx_struct __nesc_unnamed4314 {
  nx_ctp_options_t options;
  nx_uint8_t thl;
  nx_uint16_t etx;
  nx_am_addr_t origin;
  nx_uint8_t originSeqNo;
  nx_collection_id_t type;
  nx_uint8_t ( data)[0];
} __attribute__((packed)) ctp_data_header_t;






#line 75
typedef nx_struct __nesc_unnamed4315 {
  nx_ctp_options_t options;
  nx_am_addr_t parent;
  nx_uint16_t etx;
  nx_uint8_t ( data)[0];
} __attribute__((packed)) ctp_routing_header_t;
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngine.h"
enum __nesc_unnamed4316 {

  FORWARD_PACKET_TIME = 4
};




enum __nesc_unnamed4317 {
  SENDDONE_FAIL_OFFSET = 512, 
  SENDDONE_NOACK_OFFSET = FORWARD_PACKET_TIME << 2, 
  SENDDONE_OK_OFFSET = FORWARD_PACKET_TIME << 2, 
  LOOPY_OFFSET = FORWARD_PACKET_TIME << 4, 
  SENDDONE_FAIL_WINDOW = SENDDONE_FAIL_OFFSET - 1, 
  LOOPY_WINDOW = LOOPY_OFFSET - 1, 
  SENDDONE_NOACK_WINDOW = SENDDONE_NOACK_OFFSET - 1, 
  SENDDONE_OK_WINDOW = SENDDONE_OK_OFFSET - 1, 
  CONGESTED_WAIT_OFFSET = FORWARD_PACKET_TIME << 2, 
  CONGESTED_WAIT_WINDOW = CONGESTED_WAIT_OFFSET - 1
};








enum __nesc_unnamed4318 {
  MAX_RETRIES = 4
};
#line 103
#line 97
typedef nx_struct __nesc_unnamed4319 {
  nx_uint8_t control;
  nx_am_addr_t origin;
  nx_uint8_t seqno;
  nx_uint8_t collectid;
  nx_uint16_t gradient;
} __attribute__((packed)) network_header_t;
#line 116
#line 112
typedef struct __nesc_unnamed4320 {
  message_t * msg;
  uint8_t client;
  uint8_t retries;
} fe_queue_entry_t;
# 7 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpDebugMsg.h"
enum __nesc_unnamed4321 {
  NET_C_DEBUG_STARTED = 0xDE, 

  NET_C_FE_MSG_POOL_EMPTY = 0x10, 
  NET_C_FE_SEND_QUEUE_FULL = 0x11, 
  NET_C_FE_NO_ROUTE = 0x12, 
  NET_C_FE_SUBSEND_OFF = 0x13, 
  NET_C_FE_SUBSEND_BUSY = 0x14, 
  NET_C_FE_BAD_SENDDONE = 0x15, 
  NET_C_FE_QENTRY_POOL_EMPTY = 0x16, 
  NET_C_FE_SUBSEND_SIZE = 0x17, 
  NET_C_FE_LOOP_DETECTED = 0x18, 
  NET_C_FE_SEND_BUSY = 0x19, 

  NET_C_FE_SENDQUEUE_EMPTY = 0x50, 
  NET_C_FE_PUT_MSGPOOL_ERR = 0x51, 
  NET_C_FE_PUT_QEPOOL_ERR = 0x52, 
  NET_C_FE_GET_MSGPOOL_ERR = 0x53, 
  NET_C_FE_GET_QEPOOL_ERR = 0x54, 
  NET_C_FE_QUEUE_SIZE = 0x55, 

  NET_C_FE_SENT_MSG = 0x20, 
  NET_C_FE_RCV_MSG = 0x21, 
  NET_C_FE_FWD_MSG = 0x22, 
  NET_C_FE_DST_MSG = 0x23, 
  NET_C_FE_SENDDONE_FAIL = 0x24, 
  NET_C_FE_SENDDONE_WAITACK = 0x25, 
  NET_C_FE_SENDDONE_FAIL_ACK_SEND = 0x26, 
  NET_C_FE_SENDDONE_FAIL_ACK_FWD = 0x27, 
  NET_C_FE_DUPLICATE_CACHE = 0x28, 
  NET_C_FE_DUPLICATE_QUEUE = 0x29, 
  NET_C_FE_DUPLICATE_CACHE_AT_SEND = 0x2A, 
  NET_C_FE_CONGESTION_SENDWAIT = 0x2B, 
  NET_C_FE_CONGESTION_BEGIN = 0x2C, 
  NET_C_FE_CONGESTION_END = 0x2D, 



  NET_C_FE_CONGESTED = 0x2E, 

  NET_C_TREE_NO_ROUTE = 0x30, 
  NET_C_TREE_NEW_PARENT = 0x31, 
  NET_C_TREE_ROUTE_INFO = 0x32, 
  NET_C_TREE_SENT_BEACON = 0x33, 
  NET_C_TREE_RCV_BEACON = 0x34, 

  NET_C_DBG_1 = 0x40, 
  NET_C_DBG_2 = 0x41, 
  NET_C_DBG_3 = 0x42
};
#line 79
#line 58
typedef nx_struct CollectionDebugMsg {
  nx_uint8_t type;
  nx_union __nesc_unnamed4322 {
    nx_uint16_t arg;
    nx_struct __nesc_unnamed4323 {
      nx_uint16_t msg_uid;
      nx_am_addr_t origin;
      nx_am_addr_t other_node;
    } __attribute__((packed)) msg;
    nx_struct __nesc_unnamed4324 {
      nx_am_addr_t parent;
      nx_uint8_t hopcount;
      nx_uint16_t metric;
    } __attribute__((packed)) route_info;
    nx_struct __nesc_unnamed4325 {
      nx_uint16_t a;
      nx_uint16_t b;
      nx_uint16_t c;
    } __attribute__((packed)) dbg;
  } __attribute__((packed)) data;
  nx_uint16_t seqno;
} __attribute__((packed)) CollectionDebugMsg;
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/4bitle/LinkEstimator.h"
enum __nesc_unnamed4326 {


  NUM_ENTRIES_FLAG = 15
};
#line 54
#line 51
typedef nx_struct linkest_header {
  nx_uint8_t flags;
  nx_uint8_t seq;
} __attribute__((packed)) linkest_header_t;







#line 59
typedef nx_struct neighbor_stat_entry {
  nx_am_addr_t ll_addr;
  nx_uint8_t inquality;
} __attribute__((packed)) neighbor_stat_entry_t;




#line 65
typedef nx_struct linkest_footer {
  neighbor_stat_entry_t neighborList[1];
} __attribute__((packed)) linkest_footer_t;



enum __nesc_unnamed4327 {
  VALID_ENTRY = 0x1, 


  MATURE_ENTRY = 0x2, 


  INIT_ENTRY = 0x4, 


  PINNED_ENTRY = 0x8
};
#line 114
#line 86
typedef struct neighbor_table_entry {

  am_addr_t ll_addr;

  uint8_t lastseq;


  uint8_t rcvcnt;

  uint8_t failcnt;

  uint8_t flags;


  uint8_t inage;


  uint8_t inquality;


  uint16_t eetx;



  uint8_t data_success;


  uint8_t data_total;
} neighbor_table_entry_t;
# 4 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/TreeRouting.h"
enum __nesc_unnamed4328 {
  AM_TREE_ROUTING_CONTROL = 0xCE, 
  BEACON_INTERVAL = 8192, 
  INVALID_ADDR = 0xFFFF, 
  ETX_THRESHOLD = 50, 
  PARENT_SWITCH_THRESHOLD = 15, 
  MAX_METRIC = 0xFFFF
};







#line 14
typedef struct __nesc_unnamed4329 {
  am_addr_t parent;
  uint16_t etx;
  bool haveHeard;
  bool congested;
} route_info_t;




#line 21
typedef struct __nesc_unnamed4330 {
  am_addr_t neighbor;
  route_info_t info;
} routing_table_entry;

static __inline void routeInfoInit(route_info_t *ri);
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/Atm128Uart.h"
typedef uint8_t Atm128_UDR0_t;
typedef uint8_t Atm128_UDR1_t;
#line 48
#line 36
typedef union __nesc_unnamed4331 {
  struct Atm128_UCSRA_t {
    uint8_t mpcm : 1;
    uint8_t u2x : 1;
    uint8_t upe : 1;
    uint8_t dor : 1;
    uint8_t fe : 1;
    uint8_t udre : 1;
    uint8_t txc : 1;
    uint8_t rxc : 1;
  } bits;
  uint8_t flat;
} Atm128UartStatus_t;

typedef Atm128UartStatus_t Atm128_UCSR0A_t;
typedef Atm128UartStatus_t Atm128_UCSR1A_t;
#line 66
#line 54
typedef union __nesc_unnamed4332 {
  struct Atm128_UCSRB_t {
    uint8_t txb8 : 1;
    uint8_t rxb8 : 1;
    uint8_t ucsz2 : 1;
    uint8_t txen : 1;
    uint8_t rxen : 1;
    uint8_t udrie : 1;
    uint8_t txcie : 1;
    uint8_t rxcie : 1;
  } bits;
  uint8_t flat;
} Atm128UartControl_t;

typedef Atm128UartControl_t Atm128_UCSR0B_t;
typedef Atm128UartControl_t Atm128_UCSR1B_t;

enum __nesc_unnamed4333 {
  ATM128_UART_DATA_SIZE_5_BITS = 0, 
  ATM128_UART_DATA_SIZE_6_BITS = 1, 
  ATM128_UART_DATA_SIZE_7_BITS = 2, 
  ATM128_UART_DATA_SIZE_8_BITS = 3
};
#line 89
#line 79
typedef union __nesc_unnamed4334 {
  uint8_t flat;
  struct Atm128_UCSRC_t {
    uint8_t ucpol : 1;
    uint8_t ucsz : 2;
    uint8_t usbs : 1;
    uint8_t upm : 2;
    uint8_t umsel : 1;
    uint8_t rsvd : 1;
  } bits;
} Atm128UartMode_t;

typedef Atm128UartMode_t Atm128_UCSR0C_t;
typedef Atm128UartMode_t Atm128_UCSR1C_t;





enum __nesc_unnamed4335 {
  ATM128_19200_BAUD_4MHZ = 12, 
  ATM128_38400_BAUD_4MHZ = 6, 
  ATM128_57600_BAUD_4MHZ = 3, 

  ATM128_19200_BAUD_4MHZ_2X = 25, 
  ATM128_38400_BAUD_4MHZ_2X = 12, 
  ATM128_57600_BAUD_4MHZ_2X = 8, 

  ATM128_19200_BAUD_7MHZ = 23, 
  ATM128_38400_BAUD_7MHZ = 11, 
  ATM128_57600_BAUD_7MHZ = 7, 

  ATM128_19200_BAUD_7MHZ_2X = 47, 
  ATM128_38400_BAUD_7MHZ_2X = 23, 
  ATM128_57600_BAUD_7MHZ_2X = 15, 

  ATM128_19200_BAUD_8MHZ = 25, 
  ATM128_38400_BAUD_8MHZ = 12, 
  ATM128_57600_BAUD_8MHZ = 8, 

  ATM128_19200_BAUD_8MHZ_2X = 51, 
  ATM128_38400_BAUD_8MHZ_2X = 34, 
  ATM128_57600_BAUD_8MHZ_2X = 11
};

typedef uint8_t Atm128_UBRR0L_t;
typedef uint8_t Atm128_UBRR0H_t;

typedef uint8_t Atm128_UBRR1L_t;
typedef uint8_t Atm128_UBRR1H_t;
typedef message_t MultihopOscilloscopeC$UARTMessagePool$t;
typedef uint16_t MultihopOscilloscopeC$Read$val_t;
typedef message_t *MultihopOscilloscopeC$UARTQueue$t;
typedef TMilli MultihopOscilloscopeC$Timer$precision_tag;
enum HilTimerMilliC$__nesc_unnamed4336 {
  HilTimerMilliC$TIMER_COUNT = 10U
};
typedef TMilli /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC$0$precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC$0$precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$timer_size;
typedef uint8_t HplAtm128Timer0AsyncP$Compare$size_type;
typedef uint8_t HplAtm128Timer0AsyncP$Timer$timer_size;
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
typedef uint16_t AdcP$Read$val_t;
typedef uint16_t AdcP$ReadNow$val_t;
typedef uint16_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$width_t;
typedef /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$width_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$val_t;
typedef /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$width_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$val_t;
enum /*MultihopOscilloscopeAppC.Sensor.DemoChannel.AdcReadClientC*/AdcReadClientC$0$__nesc_unnamed4337 {
  AdcReadClientC$0$ID = 0U, AdcReadClientC$0$HAL_ID = 0U
};
typedef T32khz CC2420ControlP$StartupTimer$precision_tag;
typedef uint32_t CC2420ControlP$StartupTimer$size_type;
typedef uint16_t CC2420ControlP$ReadRssi$val_t;
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
enum /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16*/AlarmOne16C$0$__nesc_unnamed4338 {
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
enum /*CC2420ControlC.Spi*/CC2420SpiC$0$__nesc_unnamed4339 {
  CC2420SpiC$0$CLIENT_ID = 0U
};
enum /*CC2420ControlC.SyncSpiC*/CC2420SpiC$1$__nesc_unnamed4340 {
  CC2420SpiC$1$CLIENT_ID = 1U
};
enum /*CC2420ControlC.RssiResource*/CC2420SpiC$2$__nesc_unnamed4341 {
  CC2420SpiC$2$CLIENT_ID = 2U
};
typedef T32khz CC2420TransmitP$PacketTimeStamp$precision_tag;
typedef uint32_t CC2420TransmitP$PacketTimeStamp$size_type;
typedef T32khz CC2420TransmitP$BackoffTimer$precision_tag;
typedef uint32_t CC2420TransmitP$BackoffTimer$size_type;
enum /*CC2420TransmitC.Spi*/CC2420SpiC$3$__nesc_unnamed4342 {
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
typedef T32khz /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC$1$precision_tag;
typedef /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC$1$precision_tag /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC$1$LocalTime$precision_tag;
typedef /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC$1$precision_tag /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC$1$Counter$precision_tag;
typedef uint32_t /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC$1$Counter$size_type;
enum /*CC2420ReceiveC.Spi*/CC2420SpiC$4$__nesc_unnamed4343 {
  CC2420SpiC$4$CLIENT_ID = 4U
};
typedef uint16_t RandomMlcgC$SeedInit$parameter;
typedef TMilli DefaultLplP$OffTimer$precision_tag;
typedef TMilli DefaultLplP$SendDoneTimer$precision_tag;
typedef TMilli PowerCycleP$OnTimer$precision_tag;
enum CtpP$__nesc_unnamed4344 {
  CtpP$CLIENT_COUNT = 1U, CtpP$FORWARD_COUNT = 12, CtpP$TREE_ROUTING_TABLE_SIZE = 10, CtpP$QUEUE_SIZE = CtpP$CLIENT_COUNT + CtpP$FORWARD_COUNT, CtpP$CACHE_SIZE = 4
};
typedef message_t */*CtpP.Forwarder*/CtpForwardingEngineP$0$SentCache$t;
typedef TMilli /*CtpP.Forwarder*/CtpForwardingEngineP$0$CongestionTimer$precision_tag;
typedef TMilli /*CtpP.Forwarder*/CtpForwardingEngineP$0$RetxmitTimer$precision_tag;
typedef fe_queue_entry_t */*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$t;
typedef fe_queue_entry_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$t;
typedef message_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$t;
typedef message_t /*CtpP.MessagePoolP*/PoolC$0$pool_t;
typedef /*CtpP.MessagePoolP*/PoolC$0$pool_t /*CtpP.MessagePoolP.PoolP*/PoolP$0$pool_t;
typedef /*CtpP.MessagePoolP.PoolP*/PoolP$0$pool_t /*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$t;
typedef fe_queue_entry_t /*CtpP.QEntryPoolP*/PoolC$1$pool_t;
typedef /*CtpP.QEntryPoolP*/PoolC$1$pool_t /*CtpP.QEntryPoolP.PoolP*/PoolP$1$pool_t;
typedef /*CtpP.QEntryPoolP.PoolP*/PoolP$1$pool_t /*CtpP.QEntryPoolP.PoolP*/PoolP$1$Pool$t;
typedef fe_queue_entry_t */*CtpP.SendQueueP*/QueueC$0$queue_t;
typedef /*CtpP.SendQueueP*/QueueC$0$queue_t /*CtpP.SendQueueP*/QueueC$0$Queue$t;
typedef message_t */*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$Cache$t;
enum AMQueueP$__nesc_unnamed4345 {
  AMQueueP$NUM_CLIENTS = 2U
};
typedef TMilli /*CtpP.Router*/CtpRoutingEngineP$0$BeaconTimer$precision_tag;
typedef TMilli /*CtpP.Router*/CtpRoutingEngineP$0$RouteTimer$precision_tag;
typedef TMicro /*Atm128Uart0C.UartP*/Atm128UartP$0$Counter$precision_tag;
typedef uint32_t /*Atm128Uart0C.UartP*/Atm128UartP$0$Counter$size_type;
typedef uint16_t HplAtm128Timer3P$CompareA$size_type;
typedef uint16_t HplAtm128Timer3P$Capture$size_type;
typedef uint16_t HplAtm128Timer3P$CompareB$size_type;
typedef uint16_t HplAtm128Timer3P$CompareC$size_type;
typedef uint16_t HplAtm128Timer3P$Timer$timer_size;
typedef uint16_t /*InitThreeP.InitThree*/Atm128TimerInitC$1$timer_size;
typedef /*InitThreeP.InitThree*/Atm128TimerInitC$1$timer_size /*InitThreeP.InitThree*/Atm128TimerInitC$1$Timer$timer_size;
typedef TThree /*CounterThree16C.NCounter*/Atm128CounterC$1$frequency_tag;
typedef uint16_t /*CounterThree16C.NCounter*/Atm128CounterC$1$timer_size;
typedef /*CounterThree16C.NCounter*/Atm128CounterC$1$frequency_tag /*CounterThree16C.NCounter*/Atm128CounterC$1$Counter$precision_tag;
typedef /*CounterThree16C.NCounter*/Atm128CounterC$1$timer_size /*CounterThree16C.NCounter*/Atm128CounterC$1$Counter$size_type;
typedef /*CounterThree16C.NCounter*/Atm128CounterC$1$timer_size /*CounterThree16C.NCounter*/Atm128CounterC$1$Timer$timer_size;
typedef TMicro /*CounterMicro32C.Transform32*/TransformCounterC$1$to_precision_tag;
typedef uint32_t /*CounterMicro32C.Transform32*/TransformCounterC$1$to_size_type;
typedef TThree /*CounterMicro32C.Transform32*/TransformCounterC$1$from_precision_tag;
typedef uint16_t /*CounterMicro32C.Transform32*/TransformCounterC$1$from_size_type;
typedef counter_three_overflow_t /*CounterMicro32C.Transform32*/TransformCounterC$1$upper_count_type;
typedef /*CounterMicro32C.Transform32*/TransformCounterC$1$from_precision_tag /*CounterMicro32C.Transform32*/TransformCounterC$1$CounterFrom$precision_tag;
typedef /*CounterMicro32C.Transform32*/TransformCounterC$1$from_size_type /*CounterMicro32C.Transform32*/TransformCounterC$1$CounterFrom$size_type;
typedef /*CounterMicro32C.Transform32*/TransformCounterC$1$to_precision_tag /*CounterMicro32C.Transform32*/TransformCounterC$1$Counter$precision_tag;
typedef /*CounterMicro32C.Transform32*/TransformCounterC$1$to_size_type /*CounterMicro32C.Transform32*/TransformCounterC$1$Counter$size_type;
enum SerialAMQueueP$__nesc_unnamed4346 {
  SerialAMQueueP$NUM_CLIENTS = 2U
};
typedef message_t /*MultihopOscilloscopeAppC.UARTMessagePoolP*/PoolC$2$pool_t;
typedef /*MultihopOscilloscopeAppC.UARTMessagePoolP*/PoolC$2$pool_t /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$pool_t;
typedef /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$pool_t /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$Pool$t;
typedef message_t */*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$queue_t;
typedef /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$queue_t /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$t;
typedef message_t /*MultihopOscilloscopeAppC.DebugMessagePool*/PoolC$3$pool_t;
typedef /*MultihopOscilloscopeAppC.DebugMessagePool*/PoolC$3$pool_t /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$pool_t;
typedef /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$pool_t /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$Pool$t;
typedef message_t */*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$queue_t;
typedef /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$queue_t /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$t;
typedef message_t *UARTDebugSenderP$SendQueue$t;
typedef message_t UARTDebugSenderP$MessagePool$t;
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t PlatformP$Init$init(void );
#line 51
static error_t MotePlatformP$PlatformInit$init(void );
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$toggle(void );



static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$clr(void );
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$toggle(void );



static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$clr(void );
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$toggle(void );



static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$clr(void );


static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void );
#line 30
static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void );




static void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$clr(void );




static void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$clr(void );




static void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$set(void );
static void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$clr(void );




static void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP$9$IO$makeOutput(void );
#line 35
static void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP$10$IO$makeOutput(void );
#line 33
static void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP$11$IO$makeInput(void );
#line 32
static bool /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$get(void );
static void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$makeInput(void );
#line 32
static bool /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$get(void );
static void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$makeInput(void );
#line 32
static bool /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$get(void );
#line 32
static bool /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP$38$IO$get(void );
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t MeasureClockC$Init$init(void );
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint16_t MeasureClockC$Atm128Calibrate$baudrateRegister(uint32_t baudrate);
#line 53
static uint8_t MeasureClockC$Atm128Calibrate$adcPrescaler(void );
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP$TaskBasic$postTask(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x40358860);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP$TaskBasic$default$runTask(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x40358860);
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Scheduler.nc"
static void SchedulerBasicP$Scheduler$init(void );
#line 61
static void SchedulerBasicP$Scheduler$taskLoop(void );
#line 54
static bool SchedulerBasicP$Scheduler$runNextTask(void );
# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuSleep.nc"
static void McuSleepC$McuSleep$sleep(void );
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static void McuSleepC$McuPowerState$update(void );
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Boot.nc"
static void MultihopOscilloscopeC$Boot$booted(void );
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void MultihopOscilloscopeC$SerialControl$startDone(error_t error);
#line 117
static void MultihopOscilloscopeC$SerialControl$stopDone(error_t error);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void MultihopOscilloscopeC$uartSendTask$runTask(void );
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



MultihopOscilloscopeC$Snoop$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void MultihopOscilloscopeC$RadioControl$startDone(error_t error);
#line 117
static void MultihopOscilloscopeC$RadioControl$stopDone(error_t error);
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static void MultihopOscilloscopeC$Send$sendDone(
#line 85
message_t * msg, 



error_t error);
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Read.nc"
static void MultihopOscilloscopeC$Read$readDone(error_t result, MultihopOscilloscopeC$Read$val_t val);
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static void MultihopOscilloscopeC$SerialSend$sendDone(
#line 92
message_t * msg, 






error_t error);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



MultihopOscilloscopeC$Receive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static void MultihopOscilloscopeC$Timer$fired(void );
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t LedsP$Init$init(void );
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Leds.nc"
static void LedsP$Leds$led0Toggle(void );




static void LedsP$Leds$led1On(void );










static void LedsP$Leds$led1Toggle(void );
#line 89
static void LedsP$Leds$led2Toggle(void );
#line 45
static void LedsP$Leds$led0On(void );
#line 78
static void LedsP$Leds$led2On(void );
# 98 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow(void );
#line 92
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type t0, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type dt);
#line 105
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm(void );
#line 62
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop(void );
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init(void );
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get(void );
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired(void );
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow(void );
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t HplAtm128Timer0AsyncP$TimerCtrl$getInterruptFlag(void );
#line 37
static void HplAtm128Timer0AsyncP$TimerCtrl$setControl(Atm128TimerControl_t control);
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t HplAtm128Timer0AsyncP$McuPowerOverride$lowestState(void );
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int HplAtm128Timer0AsyncP$TimerAsync$compareBusy(void );
#line 32
static void HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous(void );
# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static HplAtm128Timer0AsyncP$Compare$size_type HplAtm128Timer0AsyncP$Compare$get(void );





static void HplAtm128Timer0AsyncP$Compare$set(HplAtm128Timer0AsyncP$Compare$size_type t);










static void HplAtm128Timer0AsyncP$Compare$start(void );
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static HplAtm128Timer0AsyncP$Timer$timer_size HplAtm128Timer0AsyncP$Timer$get(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void );
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void );
# 125 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void );
#line 118
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt);
#line 67
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void );
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void );
#line 72
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x405fc010);
# 81 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$isRunning(
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x405fc010);
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x405fc010, 
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t dt);








static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x405fc010, 
# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t dt);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x405fc010);
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void );
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t Atm128AdcP$Init$init(void );
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcMultiple.nc"
static bool Atm128AdcP$Atm128AdcMultiple$default$dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static bool Atm128AdcP$Atm128AdcSingle$getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler);
# 147 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/HplAtm128Adc.nc"
static void Atm128AdcP$HplAtm128Adc$dataReady(uint16_t data);
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AsyncStdControl.nc"
static error_t Atm128AdcP$AsyncStdControl$start(void );









static error_t Atm128AdcP$AsyncStdControl$stop(void );
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/HplAtm128Adc.nc"
static Atm128Admux_t HplAtm128AdcP$HplAtm128Adc$getAdmux(void );
#line 73
static void HplAtm128AdcP$HplAtm128Adc$enableAdc(void );
#line 49
static void HplAtm128AdcP$HplAtm128Adc$setAdmux(Atm128Admux_t admux);
#line 141
static bool HplAtm128AdcP$HplAtm128Adc$cancel(void );
#line 77
static void HplAtm128AdcP$HplAtm128Adc$disableAdc(void );








static void HplAtm128AdcP$HplAtm128Adc$disableInterruption(void );
#line 60
static void HplAtm128AdcP$HplAtm128Adc$setAdcsra(Atm128Adcsra_t adcsra);
#line 55
static Atm128Adcsra_t HplAtm128AdcP$HplAtm128Adc$getAdcsra(void );










static uint16_t HplAtm128AdcP$HplAtm128Adc$getValue(void );
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$Init$init(void );
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$enqueue(resource_client_id_t id);
#line 43
static bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEmpty(void );








static bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEnqueued(resource_client_id_t id);







static resource_client_id_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$dequeue(void );
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x406c4230);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x406c35e0);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x406c35e0);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$release(void );
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$release(
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x406b07d8);
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$request(
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x406b07d8);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$default$granted(
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x406b07d8);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$grantedTask$runTask(void );
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/power/PowerDownCleanup.nc"
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$PowerDownCleanup$default$cleanup(void );
# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$requested(void );
#line 46
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$granted(void );
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Read.nc"
static error_t AdcP$Read$read(
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x406f60e8);
# 66 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ReadNow.nc"
static void AdcP$ReadNow$default$readDone(
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x406f5088, 
# 66 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ReadNow.nc"
error_t result, AdcP$ReadNow$val_t val);
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP$Atm128AdcConfig$default$getRefVoltage(
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x406f45c0);
# 25 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP$Atm128AdcConfig$default$getChannel(
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x406f45c0);
# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP$Atm128AdcConfig$default$getPrescaler(
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x406f45c0);
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static void AdcP$Atm128AdcSingle$dataReady(uint16_t data, bool precise);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void AdcP$acquiredData$runTask(void );
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Read.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$read(
# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x4070a0c8);
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Read.nc"
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$default$readDone(
# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x4070a0c8, 
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Read.nc"
error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$val_t val);
#line 63
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$readDone(
# 26 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x407080e8, 
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Read.nc"
error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$val_t val);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$default$release(
# 27 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x4071d010);
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$default$request(
# 27 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x4071d010);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$granted(
# 27 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x4071d010);
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t VoltageP$Atm128AdcConfig$getRefVoltage(void );
#line 25
static uint8_t VoltageP$Atm128AdcConfig$getChannel(void );
#line 39
static uint8_t VoltageP$Atm128AdcConfig$getPrescaler(void );
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420ActiveMessageP$SubReceive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static void CC2420ActiveMessageP$SubSend$sendDone(
#line 85
message_t * msg, 



error_t error);
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static void CC2420ActiveMessageP$CC2420Config$syncDone(error_t error);
# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420ActiveMessageP$RadioBackoff$default$requestCca(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x40750948, 
# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);
# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SendNotifier.nc"
static void CC2420ActiveMessageP$SendNotifier$default$aboutToSend(
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x407502d0, 
# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SendNotifier.nc"
am_addr_t dest, 
#line 57
message_t * msg);
# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420ActiveMessageP$SubBackoff$requestCca(message_t * msg);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t CC2420ActiveMessageP$Packet$payloadLength(
#line 63
message_t * msg);
#line 115
static 
#line 112
void * 


CC2420ActiveMessageP$Packet$getPayload(
#line 110
message_t * msg, 




uint8_t len);
#line 95
static uint8_t CC2420ActiveMessageP$Packet$maxPayloadLength(void );
#line 83
static void CC2420ActiveMessageP$Packet$setPayloadLength(
#line 79
message_t * msg, 



uint8_t len);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t CC2420ActiveMessageP$AMSend$send(
# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x407567f8, 
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 112
static uint8_t CC2420ActiveMessageP$AMSend$maxPayloadLength(
# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x407567f8);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420ActiveMessageP$Snoop$default$receive(
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x40752870, 
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 67
static 
#line 63
message_t * 



CC2420ActiveMessageP$Receive$default$receive(
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x407521d8, 
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 77 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t CC2420ActiveMessageP$AMPacket$source(
#line 73
message_t * amsg);
#line 57
static am_addr_t CC2420ActiveMessageP$AMPacket$address(void );









static am_addr_t CC2420ActiveMessageP$AMPacket$destination(
#line 63
message_t * amsg);
#line 92
static void CC2420ActiveMessageP$AMPacket$setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 136
static am_id_t CC2420ActiveMessageP$AMPacket$type(
#line 132
message_t * amsg);
#line 151
static void CC2420ActiveMessageP$AMPacket$setType(
#line 147
message_t * amsg, 



am_id_t t);
#line 125
static bool CC2420ActiveMessageP$AMPacket$isForMe(
#line 122
message_t * amsg);
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t CC2420CsmaP$SplitControl$start(void );
#line 109
static error_t CC2420CsmaP$SplitControl$stop(void );
# 81 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420CsmaP$SubBackoff$requestInitialBackoff(message_t * msg);






static void CC2420CsmaP$SubBackoff$requestCongestionBackoff(message_t * msg);
# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static void CC2420CsmaP$CC2420Transmit$sendDone(message_t * p_msg, error_t error);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static error_t CC2420CsmaP$Send$send(
#line 56
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

CC2420CsmaP$Send$getPayload(
#line 111
message_t * msg, 


uint8_t len);
#line 101
static uint8_t CC2420CsmaP$Send$maxPayloadLength(void );
# 76 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
static void CC2420CsmaP$CC2420Power$startOscillatorDone(void );
#line 56
static void CC2420CsmaP$CC2420Power$startVRegDone(void );
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static void CC2420CsmaP$Resource$granted(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void CC2420CsmaP$sendDone_task$runTask(void );
#line 64
static void CC2420CsmaP$stopDone_task$runTask(void );
#line 64
static void CC2420CsmaP$startDone_task$runTask(void );
# 86 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static bool CC2420ControlP$CC2420Config$isAddressRecognitionEnabled(void );
#line 110
static bool CC2420ControlP$CC2420Config$isAutoAckEnabled(void );
#line 105
static bool CC2420ControlP$CC2420Config$isHwAutoAckDefault(void );
#line 64
static uint16_t CC2420ControlP$CC2420Config$getShortAddr(void );
#line 52
static error_t CC2420ControlP$CC2420Config$sync(void );
#line 70
static uint16_t CC2420ControlP$CC2420Config$getPanAddr(void );
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void CC2420ControlP$StartupTimer$fired(void );
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Read.nc"
static void CC2420ControlP$ReadRssi$default$readDone(error_t result, CC2420ControlP$ReadRssi$val_t val);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void CC2420ControlP$syncDone$runTask(void );
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t CC2420ControlP$Init$init(void );
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static void CC2420ControlP$SpiResource$granted(void );
#line 92
static void CC2420ControlP$SyncResource$granted(void );
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
static error_t CC2420ControlP$CC2420Power$startOscillator(void );
#line 90
static error_t CC2420ControlP$CC2420Power$rxOn(void );
#line 51
static error_t CC2420ControlP$CC2420Power$startVReg(void );
#line 63
static error_t CC2420ControlP$CC2420Power$stopVReg(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void CC2420ControlP$sync$runTask(void );
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420ControlP$Resource$release(void );
#line 78
static error_t CC2420ControlP$Resource$request(void );
# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static void CC2420ControlP$InterruptCCA$fired(void );
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static void CC2420ControlP$RssiResource$granted(void );
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl16.nc"
static void HplAtm128Timer1P$TimerCtrl$setCtrlCapture(Atm128TimerCtrlCapture_t control);
#line 37
static Atm128TimerCtrlCapture_t HplAtm128Timer1P$TimerCtrl$getCtrlCapture(void );
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer1P$CompareA$reset(void );
#line 45
static void HplAtm128Timer1P$CompareA$set(HplAtm128Timer1P$CompareA$size_type t);










static void HplAtm128Timer1P$CompareA$start(void );


static void HplAtm128Timer1P$CompareA$stop(void );
# 79 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm128Timer1P$Capture$setEdge(bool up);
#line 55
static void HplAtm128Timer1P$Capture$reset(void );


static void HplAtm128Timer1P$Capture$start(void );


static void HplAtm128Timer1P$Capture$stop(void );
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer1P$CompareB$default$fired(void );
#line 49
static void HplAtm128Timer1P$CompareC$default$fired(void );
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static bool HplAtm128Timer1P$Timer$test(void );
#line 52
static HplAtm128Timer1P$Timer$timer_size HplAtm128Timer1P$Timer$get(void );
#line 95
static void HplAtm128Timer1P$Timer$setScale(uint8_t scale);
#line 58
static void HplAtm128Timer1P$Timer$set(HplAtm128Timer1P$Timer$timer_size t);










static void HplAtm128Timer1P$Timer$start(void );
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*InitOneP.InitOne*/Atm128TimerInitC$0$Init$init(void );
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$overflow(void );
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$size_type dt);
#line 62
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$stop(void );
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$fired(void );
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$overflow(void );
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$size_type /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$get(void );






static bool /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$isOverflowPending(void );
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$overflow(void );
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$overflow(void );
#line 53
static /*Counter32khz32C.Transform32*/TransformCounterC$0$Counter$size_type /*Counter32khz32C.Transform32*/TransformCounterC$0$Counter$get(void );
# 98 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$getNow(void );
#line 92
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$size_type dt);
#line 55
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$size_type dt);






static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$stop(void );




static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$fired(void );
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$overflow(void );
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t NoInitC$Init$init(void );
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captureFallingEdge(void );
#line 55
static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$disable(void );
#line 42
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captureRisingEdge(void );
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$captured(/*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$size_type t);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$fired(void );
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$disable(void );
#line 43
static error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$enableFallingEdge(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$Irq$default$fired(void );
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$IrqSignal$fired(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$default$fired(void );
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$IrqSignal$fired(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$default$fired(void );
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$IrqSignal$fired(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$Irq$default$fired(void );
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$IrqSignal$fired(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$default$fired(void );
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$IrqSignal$fired(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$default$fired(void );
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$IrqSignal$fired(void );
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$clear(void );
#line 40
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$disable(void );
#line 59
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$edge(bool low_to_high);
#line 35
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$enable(void );
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$IrqSignal$fired(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$default$fired(void );
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$IrqSignal$fired(void );
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static error_t HplCC2420InterruptsP$CCA$disable(void );
#line 42
static error_t HplCC2420InterruptsP$CCA$enableRisingEdge(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void HplCC2420InterruptsP$CCATask$runTask(void );
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static void CC2420SpiP$SpiPacket$sendDone(
#line 64
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static error_t CC2420SpiP$Fifo$continueRead(
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x409ce280, 
# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length);
#line 91
static void CC2420SpiP$Fifo$default$writeDone(
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x409ce280, 
# 91 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
#line 82
static cc2420_status_t CC2420SpiP$Fifo$write(
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x409ce280, 
# 82 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length);
#line 51
static cc2420_status_t CC2420SpiP$Fifo$beginRead(
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x409ce280, 
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length);
#line 71
static void CC2420SpiP$Fifo$default$readDone(
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x409ce280, 
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420SpiP$ChipSpiResource$abortRelease(void );







static error_t CC2420SpiP$ChipSpiResource$attemptRelease(void );
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static void CC2420SpiP$SpiResource$granted(void );
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static cc2420_status_t CC2420SpiP$Ram$write(
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint16_t arg_0x409ceca8, 
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
uint8_t offset, uint8_t * data, uint8_t length);
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420SpiP$Reg$read(
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x409cd4f0, 
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
uint16_t *data);







static cc2420_status_t CC2420SpiP$Reg$write(
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x409cd4f0, 
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
uint16_t data);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420SpiP$Resource$release(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x409cf818);
# 87 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420SpiP$Resource$immediateRequest(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x409cf818);
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420SpiP$Resource$request(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x409cf818);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static void CC2420SpiP$Resource$default$granted(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x409cf818);
# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static bool CC2420SpiP$Resource$isOwner(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x409cf818);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void CC2420SpiP$grant$runTask(void );
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420SpiP$Strobe$strobe(
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x409cdca8);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t StateImplP$Init$init(void );
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/State.nc"
static uint8_t StateImplP$State$getState(
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x40a0f030);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/State.nc"
static void StateImplP$State$toIdle(
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x40a0f030);
# 66 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/State.nc"
static bool StateImplP$State$isState(
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x40a0f030, 
# 66 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/State.nc"
uint8_t myState);
#line 61
static bool StateImplP$State$isIdle(
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x40a0f030);
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/State.nc"
static error_t StateImplP$State$requestState(
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x40a0f030, 
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/State.nc"
uint8_t reqState);





static void StateImplP$State$forceState(
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x40a0f030, 
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/State.nc"
uint8_t reqState);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void Atm128SpiP$zeroTask$runTask(void );
# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static error_t Atm128SpiP$SpiPacket$send(
#line 48
uint8_t * txBuf, 

uint8_t * rxBuf, 








uint16_t len);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static void Atm128SpiP$ResourceArbiter$granted(
# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40a3ed10);
# 34 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SpiByte.nc"
static uint8_t Atm128SpiP$SpiByte$write(uint8_t tx);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static void Atm128SpiP$Spi$dataReady(uint8_t data);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Atm128SpiP$Resource$release(
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40a3f010);
# 87 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Atm128SpiP$Resource$immediateRequest(
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40a3f010);
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Atm128SpiP$Resource$request(
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40a3f010);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static void Atm128SpiP$Resource$default$granted(
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40a3f010);
# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static bool Atm128SpiP$Resource$isOwner(
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40a3f010);
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static void HplAtm128SpiP$SPI$sleep(void );
#line 66
static void HplAtm128SpiP$SPI$initMaster(void );
#line 105
static void HplAtm128SpiP$SPI$setMasterBit(bool isMaster);
#line 96
static void HplAtm128SpiP$SPI$enableInterrupt(bool enabled);
#line 80
static uint8_t HplAtm128SpiP$SPI$read(void );
#line 125
static void HplAtm128SpiP$SPI$setMasterDoubleSpeed(bool on);
#line 114
static void HplAtm128SpiP$SPI$setClock(uint8_t speed);
#line 108
static void HplAtm128SpiP$SPI$setClockPolarity(bool highWhenIdle);
#line 86
static void HplAtm128SpiP$SPI$write(uint8_t data);
#line 99
static void HplAtm128SpiP$SPI$enableSpi(bool busOn);
#line 111
static void HplAtm128SpiP$SPI$setClockPhase(bool sampleOnTrailing);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$Init$init(void );
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(resource_client_id_t id);
#line 43
static bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty(void );








static bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(resource_client_id_t id);







static resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue(void );
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$requested(
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40a9bab0);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$immediateRequested(
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40a9bab0);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$unconfigure(
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40abe718);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$configure(
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40abe718);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$release(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40a9b088);
# 87 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$immediateRequest(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40a9b088);
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$request(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40a9b088);
# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$isOwner(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40a9b088);
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ArbiterInfo$inUse(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$runTask(void );
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t HplCC2420SpiP$Resource$release(void );
#line 87
static error_t HplCC2420SpiP$Resource$immediateRequest(void );
#line 78
static error_t HplCC2420SpiP$Resource$request(void );
#line 118
static bool HplCC2420SpiP$Resource$isOwner(void );
#line 92
static void HplCC2420SpiP$SubResource$granted(void );
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Leds.nc"
static void NoLedsC$Leds$led0Toggle(void );
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC$amAddress(void );
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void );




static am_group_t ActiveMessageAddressC$ActiveMessageAddress$amGroup(void );
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/ReceiveIndicator.nc"
static bool CC2420TransmitP$EnergyIndicator$isReceiving(void );
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static void CC2420TransmitP$CaptureSFD$captured(uint16_t time);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void CC2420TransmitP$BackoffTimer$fired(void );
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420TransmitP$CC2420Receive$receive(uint8_t type, message_t * message);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static error_t CC2420TransmitP$Send$send(message_t * p_msg, bool useCca);






static error_t CC2420TransmitP$Send$resend(bool useCca);
# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420TransmitP$ChipSpiResource$releasing(void );
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t CC2420TransmitP$Init$init(void );
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static void CC2420TransmitP$SpiResource$granted(void );
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t CC2420TransmitP$StdControl$start(void );









static error_t CC2420TransmitP$StdControl$stop(void );
# 91 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static void CC2420TransmitP$TXFIFO$writeDone(uint8_t * data, uint8_t length, error_t error);
#line 71
static void CC2420TransmitP$TXFIFO$readDone(uint8_t * data, uint8_t length, error_t error);
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static void CC2420ReceiveP$CC2420Config$syncDone(error_t error);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void CC2420ReceiveP$receiveDone_task$runTask(void );
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420ReceiveP$CC2420Receive$sfd_dropped(void );
#line 49
static void CC2420ReceiveP$CC2420Receive$sfd(uint32_t time);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t CC2420ReceiveP$Init$init(void );
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static void CC2420ReceiveP$SpiResource$granted(void );
# 91 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static void CC2420ReceiveP$RXFIFO$writeDone(uint8_t * data, uint8_t length, error_t error);
#line 71
static void CC2420ReceiveP$RXFIFO$readDone(uint8_t * data, uint8_t length, error_t error);
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/ReceiveIndicator.nc"
static bool CC2420ReceiveP$PacketIndicator$isReceiving(void );
# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static void CC2420ReceiveP$InterruptFIFOP$fired(void );
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t CC2420ReceiveP$StdControl$start(void );









static error_t CC2420ReceiveP$StdControl$stop(void );
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/LinkPacketMetadata.nc"
static bool CC2420PacketP$LinkPacketMetadata$highChannelQuality(
#line 44
message_t * msg);
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Packet.nc"
static uint8_t CC2420PacketP$CC2420Packet$getLqi(message_t *p_msg);
# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
static void CC2420PacketP$PacketTimeStamp32khz$clear(
#line 55
message_t * msg);
#line 67
static void CC2420PacketP$PacketTimeStamp32khz$set(
#line 62
message_t * msg, 




CC2420PacketP$PacketTimeStamp32khz$size_type value);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420PacketP$CC2420PacketBody$getHeader(message_t * msg);




static cc2420_metadata_t * CC2420PacketP$CC2420PacketBody$getMetadata(message_t * msg);
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
static uint8_t CC2420PacketP$PacketTimeSyncOffset$get(
#line 42
message_t * msg);
#line 39
static bool CC2420PacketP$PacketTimeSyncOffset$isSet(
#line 35
message_t * msg);
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc"
static error_t CC2420PacketP$Acks$requestAck(
#line 42
message_t * msg);
#line 60
static error_t CC2420PacketP$Acks$noAck(
#line 54
message_t * msg);
#line 74
static bool CC2420PacketP$Acks$wasAcked(
#line 69
message_t * msg);
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC$1$Counter$overflow(void );
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Random.nc"
static uint16_t RandomMlcgC$Random$rand16(void );
#line 35
static uint32_t RandomMlcgC$Random$rand32(void );
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t RandomMlcgC$Init$init(void );
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static void UniqueSendP$SubSend$sendDone(
#line 85
message_t * msg, 



error_t error);
#line 64
static error_t UniqueSendP$Send$send(
#line 56
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

UniqueSendP$Send$getPayload(
#line 111
message_t * msg, 


uint8_t len);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t UniqueSendP$Init$init(void );
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



UniqueReceiveP$SubReceive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t UniqueReceiveP$Init$init(void );
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



UniqueReceiveP$DuplicateReceive$default$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static void CC2420TinyosNetworkP$SubSend$sendDone(
#line 85
message_t * msg, 



error_t error);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420TinyosNetworkP$SubReceive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static error_t CC2420TinyosNetworkP$Send$send(
#line 56
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

CC2420TinyosNetworkP$Send$getPayload(
#line 111
message_t * msg, 


uint8_t len);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420TinyosNetworkP$NonTinyosReceive$default$receive(
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
uint8_t arg_0x40ca5bb8, 
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 67
static 
#line 63
message_t * 



DefaultLplP$SubReceive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static void DefaultLplP$SubSend$sendDone(
#line 85
message_t * msg, 



error_t error);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void DefaultLplP$send$runTask(void );
# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void DefaultLplP$RadioBackoff$requestCca(message_t * msg);
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static void DefaultLplP$OffTimer$fired(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static error_t DefaultLplP$Send$send(
#line 56
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

DefaultLplP$Send$getPayload(
#line 111
message_t * msg, 


uint8_t len);
# 76 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/LowPowerListening.nc"
static void DefaultLplP$LowPowerListening$setLocalDutyCycle(uint16_t dutyCycle);
#line 107
static void DefaultLplP$LowPowerListening$setRxDutyCycle(
#line 103
message_t * msg, 



uint16_t dutyCycle);
#line 122
static uint16_t DefaultLplP$LowPowerListening$dutyCycleToSleepInterval(uint16_t dutyCycle);
#line 96
static uint16_t DefaultLplP$LowPowerListening$getRxSleepInterval(
#line 93
message_t * msg);
# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static void DefaultLplP$Resend$sendDone(message_t * p_msg, error_t error);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t DefaultLplP$Init$init(void );
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void DefaultLplP$SubControl$startDone(error_t error);
#line 117
static void DefaultLplP$SubControl$stopDone(error_t error);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void DefaultLplP$startRadio$runTask(void );
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static void DefaultLplP$SendDoneTimer$fired(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void DefaultLplP$resend$runTask(void );
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/PowerCycle.nc"
static void DefaultLplP$PowerCycle$detected(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void DefaultLplP$stopRadio$runTask(void );
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t PowerCycleP$SplitControl$start(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void PowerCycleP$startRadio$runTask(void );
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void PowerCycleP$SubControl$startDone(error_t error);
#line 117
static void PowerCycleP$SubControl$stopDone(error_t error);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void PowerCycleP$getCca$runTask(void );
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static void PowerCycleP$OnTimer$fired(void );
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/PowerCycle.nc"
static uint16_t PowerCycleP$PowerCycle$getSleepInterval(void );
#line 43
static void PowerCycleP$PowerCycle$setSleepInterval(uint16_t sleepIntervalMs);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void PowerCycleP$stopRadio$runTask(void );
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*CtpP.Forwarder*/CtpForwardingEngineP$0$SubReceive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubSend$sendDone(
#line 92
message_t * msg, 






error_t error);
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/CollectionPacket.nc"
static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getOrigin(message_t *msg);





static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getSequenceNumber(message_t *msg);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/4bitle/LinkEstimator.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$LinkEstimator$evicted(am_addr_t neighbor);
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Intercept.nc"
static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$Intercept$default$forward(
# 136 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
collection_id_t arg_0x40dc5430, 
# 20 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Intercept.nc"
message_t * msg, 

void * payload, 








uint8_t len);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$payloadLength(
#line 63
message_t * msg);
#line 115
static 
#line 112
void * 


/*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$getPayload(
#line 110
message_t * msg, 




uint8_t len);
#line 95
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$maxPayloadLength(void );
#line 83
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$setPayloadLength(
#line 79
message_t * msg, 



uint8_t len);
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CongestionTimer$fired(void );
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*CtpP.Forwarder*/CtpForwardingEngineP$0$Snoop$default$receive(
# 135 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
collection_id_t arg_0x40dc6d68, 
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$send(
# 133 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
uint8_t arg_0x40dc7c58, 
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

/*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$getPayload(
# 133 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
uint8_t arg_0x40dc7c58, 
# 111 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 


uint8_t len);
#line 101
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$maxPayloadLength(
# 133 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
uint8_t arg_0x40dc7c58);
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$default$sendDone(
# 133 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
uint8_t arg_0x40dc7c58, 
# 85 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$RadioControl$startDone(error_t error);
#line 117
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$RadioControl$stopDone(error_t error);
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$RetxmitTimer$fired(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask$runTask(void );
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$Init$init(void );
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*CtpP.Forwarder*/CtpForwardingEngineP$0$Receive$default$receive(
# 134 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
collection_id_t arg_0x40dc6680, 
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 7 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpCongestion.nc"
static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpCongestion$isCongested(void );
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/UnicastNameFreeRouting.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$UnicastNameFreeRouting$routeFound(void );
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$UnicastNameFreeRouting$noRoute(void );
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpPacket.nc"
static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$option(message_t *msg, ctp_options_t opt);





static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$setEtx(message_t *msg, uint16_t etx);
#line 49
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$clearOption(message_t *msg, ctp_options_t option);







static uint16_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getEtx(message_t *msg);


static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getOrigin(message_t *msg);
#line 46
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$setOption(message_t *msg, ctp_options_t option);







static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getThl(message_t *msg);








static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getSequenceNumber(message_t *msg);





static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$matchInstance(message_t *m1, message_t *m2);
#line 66
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getType(message_t *msg);
#line 55
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$setThl(message_t *msg, uint8_t thl);
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$StdControl$start(void );
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*CtpP.Forwarder*/CtpForwardingEngineP$0$SubSnoop$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/CollectionId.nc"
static collection_id_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionId$default$fetch(
# 165 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
uint8_t arg_0x40dde780);
# 97 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Pool.nc"
static 
#line 94
/*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$t * 


/*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$get(void );
#line 80
static uint8_t /*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$maxSize(void );
#line 61
static bool /*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$empty(void );
#line 89
static error_t /*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$put(
#line 85
/*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$t * newVal);
#line 72
static uint8_t /*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$size(void );
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*CtpP.MessagePoolP.PoolP*/PoolP$0$Init$init(void );
# 97 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Pool.nc"
static 
#line 94
/*CtpP.QEntryPoolP.PoolP*/PoolP$1$Pool$t * 


/*CtpP.QEntryPoolP.PoolP*/PoolP$1$Pool$get(void );
#line 61
static bool /*CtpP.QEntryPoolP.PoolP*/PoolP$1$Pool$empty(void );
#line 89
static error_t /*CtpP.QEntryPoolP.PoolP*/PoolP$1$Pool$put(
#line 85
/*CtpP.QEntryPoolP.PoolP*/PoolP$1$Pool$t * newVal);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*CtpP.QEntryPoolP.PoolP*/PoolP$1$Init$init(void );
# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Queue.nc"
static 
#line 71
/*CtpP.SendQueueP*/QueueC$0$Queue$t  

/*CtpP.SendQueueP*/QueueC$0$Queue$head(void );
#line 90
static error_t /*CtpP.SendQueueP*/QueueC$0$Queue$enqueue(
#line 86
/*CtpP.SendQueueP*/QueueC$0$Queue$t  newVal);
#line 101
static 
#line 99
/*CtpP.SendQueueP*/QueueC$0$Queue$t  

/*CtpP.SendQueueP*/QueueC$0$Queue$element(uint8_t idx);
#line 65
static uint8_t /*CtpP.SendQueueP*/QueueC$0$Queue$maxSize(void );
#line 81
static 
#line 79
/*CtpP.SendQueueP*/QueueC$0$Queue$t  

/*CtpP.SendQueueP*/QueueC$0$Queue$dequeue(void );
#line 50
static bool /*CtpP.SendQueueP*/QueueC$0$Queue$empty(void );







static uint8_t /*CtpP.SendQueueP*/QueueC$0$Queue$size(void );
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Cache.nc"
static void /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$Cache$insert(/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$Cache$t item);







static bool /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$Cache$lookup(/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$Cache$t item);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$Init$init(void );
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



LinkEstimatorP$SubReceive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/4bitle/LinkEstimator.nc"
static error_t LinkEstimatorP$LinkEstimator$txAck(am_addr_t neighbor);
#line 44
static error_t LinkEstimatorP$LinkEstimator$pinNeighbor(am_addr_t neighbor);










static error_t LinkEstimatorP$LinkEstimator$txNoAck(am_addr_t neighbor);
#line 41
static error_t LinkEstimatorP$LinkEstimator$insertNeighbor(am_addr_t neighbor);
#line 58
static error_t LinkEstimatorP$LinkEstimator$clearDLQ(am_addr_t neighbor);
#line 47
static error_t LinkEstimatorP$LinkEstimator$unpinNeighbor(am_addr_t neighbor);
#line 38
static uint16_t LinkEstimatorP$LinkEstimator$getLinkQuality(uint16_t neighbor);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t LinkEstimatorP$Packet$payloadLength(
#line 63
message_t * msg);
#line 115
static 
#line 112
void * 


LinkEstimatorP$Packet$getPayload(
#line 110
message_t * msg, 




uint8_t len);
#line 95
static uint8_t LinkEstimatorP$Packet$maxPayloadLength(void );
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static void LinkEstimatorP$AMSend$sendDone(
#line 92
message_t * msg, 






error_t error);
#line 69
static error_t LinkEstimatorP$Send$send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

LinkEstimatorP$Send$getPayload(
#line 121
message_t * msg, 


uint8_t len);
#line 112
static uint8_t LinkEstimatorP$Send$maxPayloadLength(void );
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t LinkEstimatorP$Init$init(void );
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t LinkEstimatorP$StdControl$start(void );
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*CtpP.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 112
static uint8_t /*CtpP.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$maxPayloadLength(void );
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static void /*CtpP.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(
#line 85
message_t * msg, 



error_t error);
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40f631b8, 
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40f657a8, 
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 101
static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$maxPayloadLength(
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40f657a8);
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40f657a8, 
# 85 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void );
#line 64
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask(void );
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/RootControl.nc"
static bool /*CtpP.Router*/CtpRoutingEngineP$0$RootControl$isRoot(void );
#line 41
static error_t /*CtpP.Router*/CtpRoutingEngineP$0$RootControl$setRoot(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*CtpP.Router*/CtpRoutingEngineP$0$updateRouteTask$runTask(void );
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/4bitle/LinkEstimator.nc"
static void /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$evicted(am_addr_t neighbor);
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpRoutingPacket.nc"
static bool /*CtpP.Router*/CtpRoutingEngineP$0$CtpRoutingPacket$getOption(message_t * msg, ctp_options_t opt);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void /*CtpP.Router*/CtpRoutingEngineP$0$RadioControl$startDone(error_t error);
#line 117
static void /*CtpP.Router*/CtpRoutingEngineP$0$RadioControl$stopDone(error_t error);
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpInfo.nc"
static void /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$recomputeRoutes(void );
#line 59
static void /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$triggerRouteUpdate(void );
#line 52
static error_t /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$getEtx(uint16_t *etx);
#line 66
static void /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$triggerImmediateRouteUpdate(void );









static void /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$setNeighborCongested(am_addr_t n, bool congested);




static bool /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$isNeighborCongested(am_addr_t n);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*CtpP.Router*/CtpRoutingEngineP$0$sendBeaconTask$runTask(void );
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*CtpP.Router*/CtpRoutingEngineP$0$Init$init(void );
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*CtpP.Router*/CtpRoutingEngineP$0$BeaconSend$sendDone(
#line 92
message_t * msg, 






error_t error);
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*CtpP.Router*/CtpRoutingEngineP$0$BeaconTimer$fired(void );
#line 72
static void /*CtpP.Router*/CtpRoutingEngineP$0$RouteTimer$fired(void );
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CompareBit.nc"
static bool /*CtpP.Router*/CtpRoutingEngineP$0$CompareBit$shouldInsert(message_t * msg, void * payload, uint8_t len, bool white_bit);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*CtpP.Router*/CtpRoutingEngineP$0$BeaconReceive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t /*CtpP.Router*/CtpRoutingEngineP$0$StdControl$start(void );
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/UnicastNameFreeRouting.nc"
static bool /*CtpP.Router*/CtpRoutingEngineP$0$Routing$hasRoute(void );
#line 48
static am_addr_t /*CtpP.Router*/CtpRoutingEngineP$0$Routing$nextHop(void );
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*CtpP.SendControl.AMQueueEntryP*/AMQueueEntryP$1$AMSend$send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static void /*CtpP.SendControl.AMQueueEntryP*/AMQueueEntryP$1$Send$sendDone(
#line 85
message_t * msg, 



error_t error);
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/CollectionId.nc"
static collection_id_t /*MultihopOscilloscopeAppC.CollectionSenderC.CollectionSenderP.CollectionIdP*/CollectionIdP$0$CollectionId$fetch(void );
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$sendDone(
#line 85
message_t * msg, 



error_t error);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubReceive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$send(
# 36 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x41057758, 
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

/*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$getPayload(
# 36 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x41057758, 
# 121 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 


uint8_t len);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$payloadLength(
#line 63
message_t * msg);
#line 115
static 
#line 112
void * 


/*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$getPayload(
#line 110
message_t * msg, 




uint8_t len);
#line 95
static uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$maxPayloadLength(void );
#line 83
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$setPayloadLength(
#line 79
message_t * msg, 



uint8_t len);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Receive$default$receive(
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x41092148, 
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$destination(
#line 63
message_t * amsg);
#line 92
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 136
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$type(
#line 132
message_t * amsg);
#line 151
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$setType(
#line 147
message_t * amsg, 



am_id_t t);
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t SerialP$SplitControl$start(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SerialP$stopDoneTask$runTask(void );
#line 64
static void SerialP$RunTx$runTask(void );
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t SerialP$Init$init(void );
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialFlush.nc"
static void SerialP$SerialFlush$flushDone(void );
#line 38
static void SerialP$SerialFlush$default$flush(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SerialP$startDoneTask$runTask(void );
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
static void SerialP$SerialFrameComm$dataReceived(uint8_t data);





static void SerialP$SerialFrameComm$putDone(void );
#line 74
static void SerialP$SerialFrameComm$delimiterReceived(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SerialP$defaultSerialFlushTask$runTask(void );
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
static error_t SerialP$SendBytePacket$completeSend(void );
#line 51
static error_t SerialP$SendBytePacket$startSend(uint8_t first_byte);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask$runTask(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$send(
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x41118560, 
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 89
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$default$sendDone(
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x41118560, 
# 85 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone$runTask(void );
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Receive$default$receive(
# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x4111be58, 
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$upperLength(
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x41117088, 
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$offset(
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x41117088);
# 23 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$dataLinkLength(
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x41117088, 
# 23 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 70 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$nextByte(void );









static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$sendCompleted(error_t error);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$startPacket(void );






static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$byteReceived(uint8_t data);










static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$endPacket(error_t result);
# 79 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/UartStream.nc"
static void HdlcTranslateC$UartStream$receivedByte(uint8_t byte);
#line 99
static void HdlcTranslateC$UartStream$receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void HdlcTranslateC$UartStream$sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
static error_t HdlcTranslateC$SerialFrameComm$putDelimiter(void );
#line 68
static void HdlcTranslateC$SerialFrameComm$resetReceive(void );
#line 54
static error_t HdlcTranslateC$SerialFrameComm$putData(uint8_t data);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$Init$init(void );
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/UartStream.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$send(
#line 44
uint8_t * buf, 



uint16_t len);
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP$0$Counter$overflow(void );
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$rxDone(uint8_t data);
#line 47
static void /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$txDone(void );
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$StdControl$start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$StdControl$stop(void );
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t HplAtm128UartP$Uart0Init$init(void );
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static error_t HplAtm128UartP$HplUart0$enableRxIntr(void );
#line 40
static error_t HplAtm128UartP$HplUart0$enableTxIntr(void );
static error_t HplAtm128UartP$HplUart0$disableTxIntr(void );

static error_t HplAtm128UartP$HplUart0$disableRxIntr(void );


static void HplAtm128UartP$HplUart0$tx(uint8_t data);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t HplAtm128UartP$Uart1Init$init(void );
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static void HplAtm128UartP$HplUart1$default$rxDone(uint8_t data);
#line 47
static void HplAtm128UartP$HplUart1$default$txDone(void );
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t HplAtm128UartP$Uart0RxControl$start(void );









static error_t HplAtm128UartP$Uart0RxControl$stop(void );
#line 74
static error_t HplAtm128UartP$Uart0TxControl$start(void );









static error_t HplAtm128UartP$Uart0TxControl$stop(void );
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl16.nc"
static void HplAtm128Timer3P$TimerCtrl$setCtrlCapture(Atm128TimerCtrlCapture_t control);
#line 37
static Atm128TimerCtrlCapture_t HplAtm128Timer3P$TimerCtrl$getCtrlCapture(void );
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer3P$CompareA$default$fired(void );
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm128Timer3P$Capture$default$captured(HplAtm128Timer3P$Capture$size_type t);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer3P$CompareB$default$fired(void );
#line 49
static void HplAtm128Timer3P$CompareC$default$fired(void );
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static HplAtm128Timer3P$Timer$timer_size HplAtm128Timer3P$Timer$get(void );
#line 95
static void HplAtm128Timer3P$Timer$setScale(uint8_t scale);
#line 58
static void HplAtm128Timer3P$Timer$set(HplAtm128Timer3P$Timer$timer_size t);










static void HplAtm128Timer3P$Timer$start(void );
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*InitThreeP.InitThree*/Atm128TimerInitC$1$Init$init(void );
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitThreeP.InitThree*/Atm128TimerInitC$1$Timer$overflow(void );
#line 61
static void /*CounterThree16C.NCounter*/Atm128CounterC$1$Timer$overflow(void );
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*CounterMicro32C.Transform32*/TransformCounterC$1$CounterFrom$overflow(void );
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t SerialPacketInfoActiveMessageP$Info$upperLength(message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t SerialPacketInfoActiveMessageP$Info$offset(void );







static uint8_t SerialPacketInfoActiveMessageP$Info$dataLinkLength(message_t *msg, uint8_t upperLen);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

/*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$getPayload(
#line 121
message_t * msg, 


uint8_t len);
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static void /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$Send$sendDone(
#line 85
message_t * msg, 



error_t error);
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$AMSend$sendDone(
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40f631b8, 
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$send(
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40f657a8, 
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$getPayload(
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40f657a8, 
# 111 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 


uint8_t len);
#line 89
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$default$sendDone(
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40f657a8, 
# 85 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$errorTask$runTask(void );
#line 64
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$CancelTask$runTask(void );
# 97 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Pool.nc"
static 
#line 94
/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$Pool$t * 


/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$Pool$get(void );
#line 89
static error_t /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$Pool$put(
#line 85
/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$Pool$t * newVal);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$Init$init(void );
# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Queue.nc"
static 
#line 71
/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$t  

/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$head(void );
#line 90
static error_t /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$enqueue(
#line 86
/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$t  newVal);
#line 65
static uint8_t /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$maxSize(void );
#line 81
static 
#line 79
/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$t  

/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$dequeue(void );
#line 50
static bool /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$empty(void );







static uint8_t /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$size(void );
# 97 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Pool.nc"
static 
#line 94
/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$Pool$t * 


/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$Pool$get(void );
#line 61
static bool /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$Pool$empty(void );
#line 89
static error_t /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$Pool$put(
#line 85
/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$Pool$t * newVal);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$Init$init(void );
# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Queue.nc"
static 
#line 71
/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$t  

/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$head(void );
#line 90
static error_t /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$enqueue(
#line 86
/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$t  newVal);
#line 65
static uint8_t /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$maxSize(void );
#line 81
static 
#line 79
/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$t  

/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$dequeue(void );
#line 50
static bool /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$empty(void );







static uint8_t /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$size(void );
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$AMSend$send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

/*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$AMSend$getPayload(
#line 121
message_t * msg, 


uint8_t len);
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static void /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$Send$sendDone(
#line 85
message_t * msg, 



error_t error);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/CollectionDebug.nc"
static error_t UARTDebugSenderP$CollectionDebug$logEvent(uint8_t type);
#line 62
static error_t UARTDebugSenderP$CollectionDebug$logEventMsg(uint8_t type, uint16_t msg, am_addr_t origin, am_addr_t node);





static error_t UARTDebugSenderP$CollectionDebug$logEventRoute(uint8_t type, am_addr_t parent, uint8_t hopcount, uint16_t metric);
#line 56
static error_t UARTDebugSenderP$CollectionDebug$logEventDbg(uint8_t type, uint16_t arg1, uint16_t arg2, uint16_t arg3);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Boot.nc"
static void UARTDebugSenderP$Boot$booted(void );
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static void UARTDebugSenderP$UARTSend$sendDone(
#line 92
message_t * msg, 






error_t error);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void UARTDebugSenderP$sendTask$runTask(void );
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t PlatformP$MoteInit$init(void );
#line 51
static error_t PlatformP$MeasureClock$init(void );
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/mica/PlatformP.nc"
static inline void PlatformP$power_init(void );






static inline error_t PlatformP$Init$init(void );
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t MotePlatformP$SubInit$init(void );
# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void MotePlatformP$SerialIdPin$makeInput(void );
#line 30
static void MotePlatformP$SerialIdPin$clr(void );
# 26 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP$PlatformInit$init(void );
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$clr(void );
static inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$toggle(void );



static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$clr(void );
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$toggle(void );



static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$clr(void );
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$toggle(void );



static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput(void );
#line 47
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void );


static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$clr(void );




static __inline void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$clr(void );




static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$set(void );
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$clr(void );




static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$makeOutput(void );
#line 52
static __inline void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP$9$IO$makeOutput(void );
#line 52
static __inline void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP$10$IO$makeOutput(void );
#line 50
static __inline void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP$11$IO$makeInput(void );
#line 45
static __inline bool /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$get(void );
#line 45
static __inline bool /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$get(void );




static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$makeInput(void );
#line 45
static __inline bool /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$get(void );




static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$makeInput(void );
#line 45
static __inline bool /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP$38$IO$get(void );
# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/mica/MeasureClockC.nc"
enum MeasureClockC$__nesc_unnamed4347 {


  MeasureClockC$MAGIC = 488 / (16 / PLATFORM_MHZ)
};

uint16_t MeasureClockC$cycles;

static inline error_t MeasureClockC$Init$init(void );
#line 103
static inline uint8_t MeasureClockC$Atm128Calibrate$adcPrescaler(void );
#line 120
static inline uint16_t MeasureClockC$Atm128Calibrate$baudrateRegister(uint32_t baudrate);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t RealMainP$SoftwareInit$init(void );
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Boot.nc"
static void RealMainP$Boot$booted(void );
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t RealMainP$PlatformInit$init(void );
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Scheduler.nc"
static void RealMainP$Scheduler$init(void );
#line 61
static void RealMainP$Scheduler$taskLoop(void );
#line 54
static bool RealMainP$Scheduler$runNextTask(void );
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/system/RealMainP.nc"
int main(void )   ;
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP$TaskBasic$runTask(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x40358860);
# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuSleep.nc"
static void SchedulerBasicP$McuSleep$sleep(void );
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP$__nesc_unnamed4348 {

  SchedulerBasicP$NUM_TASKS = 36U, 
  SchedulerBasicP$NO_TASK = 255
};

volatile uint8_t SchedulerBasicP$m_head;
volatile uint8_t SchedulerBasicP$m_tail;
volatile uint8_t SchedulerBasicP$m_next[SchedulerBasicP$NUM_TASKS];








static __inline uint8_t SchedulerBasicP$popTask(void );
#line 86
static inline bool SchedulerBasicP$isWaiting(uint8_t id);




static inline bool SchedulerBasicP$pushTask(uint8_t id);
#line 113
static inline void SchedulerBasicP$Scheduler$init(void );









static bool SchedulerBasicP$Scheduler$runNextTask(void );
#line 138
static inline void SchedulerBasicP$Scheduler$taskLoop(void );
#line 159
static error_t SchedulerBasicP$TaskBasic$postTask(uint8_t id);




static void SchedulerBasicP$TaskBasic$default$runTask(uint8_t id);
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t McuSleepC$McuPowerOverride$lowestState(void );
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/McuSleepC.nc"
const_uint8_t McuSleepC$atm128PowerBits[ATM128_POWER_DOWN + 1] = { 
0, 
1 << 3, ((
1 << 2) | (1 << 4)) | (1 << 3), (
1 << 4) | (1 << 3), (
1 << 2) | (1 << 4), 
1 << 4 };

static inline mcu_power_t McuSleepC$getPowerState(void );
#line 97
static inline void McuSleepC$McuSleep$sleep(void );
#line 109
static inline void McuSleepC$McuPowerState$update(void );
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/RootControl.nc"
static error_t MultihopOscilloscopeC$RootControl$setRoot(void );
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t MultihopOscilloscopeC$SerialControl$start(void );
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t MultihopOscilloscopeC$uartSendTask$postTask(void );
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t MultihopOscilloscopeC$RadioControl$start(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static error_t MultihopOscilloscopeC$Send$send(
#line 56
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

MultihopOscilloscopeC$Send$getPayload(
#line 111
message_t * msg, 


uint8_t len);
#line 101
static uint8_t MultihopOscilloscopeC$Send$maxPayloadLength(void );
# 97 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Pool.nc"
static 
#line 94
MultihopOscilloscopeC$UARTMessagePool$t * 


MultihopOscilloscopeC$UARTMessagePool$get(void );
#line 89
static error_t MultihopOscilloscopeC$UARTMessagePool$put(
#line 85
MultihopOscilloscopeC$UARTMessagePool$t * newVal);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Read.nc"
static error_t MultihopOscilloscopeC$Read$read(void );
# 76 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/LowPowerListening.nc"
static void MultihopOscilloscopeC$LowPowerListening$setLocalDutyCycle(uint16_t dutyCycle);
#line 107
static void MultihopOscilloscopeC$LowPowerListening$setRxDutyCycle(
#line 103
message_t * msg, 



uint16_t dutyCycle);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t MultihopOscilloscopeC$SerialSend$send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

MultihopOscilloscopeC$SerialSend$getPayload(
#line 121
message_t * msg, 


uint8_t len);
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t MultihopOscilloscopeC$RoutingControl$start(void );
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Leds.nc"
static void MultihopOscilloscopeC$Leds$led0Toggle(void );




static void MultihopOscilloscopeC$Leds$led1On(void );










static void MultihopOscilloscopeC$Leds$led1Toggle(void );
#line 89
static void MultihopOscilloscopeC$Leds$led2Toggle(void );
#line 45
static void MultihopOscilloscopeC$Leds$led0On(void );
#line 78
static void MultihopOscilloscopeC$Leds$led2On(void );
# 90 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Queue.nc"
static error_t MultihopOscilloscopeC$UARTQueue$enqueue(
#line 86
MultihopOscilloscopeC$UARTQueue$t  newVal);
#line 81
static 
#line 79
MultihopOscilloscopeC$UARTQueue$t  

MultihopOscilloscopeC$UARTQueue$dequeue(void );
#line 50
static bool MultihopOscilloscopeC$UARTQueue$empty(void );
# 81 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static bool MultihopOscilloscopeC$Timer$isRunning(void );
#line 53
static void MultihopOscilloscopeC$Timer$startPeriodic(uint32_t dt);
#line 67
static void MultihopOscilloscopeC$Timer$stop(void );
# 51 "MultihopOscilloscopeC.nc"
enum MultihopOscilloscopeC$__nesc_unnamed4349 {
#line 51
  MultihopOscilloscopeC$uartSendTask = 0U
};
#line 51
typedef int MultihopOscilloscopeC$__nesc_sillytask_uartSendTask[MultihopOscilloscopeC$uartSendTask];
static void MultihopOscilloscopeC$startTimer(void );
static void MultihopOscilloscopeC$fatal_problem(void );
inline static void MultihopOscilloscopeC$report_problem(void );
inline static void MultihopOscilloscopeC$report_sent(void );
inline static void MultihopOscilloscopeC$report_received(void );

uint8_t MultihopOscilloscopeC$uartlen;
message_t MultihopOscilloscopeC$sendbuf;
message_t MultihopOscilloscopeC$uartbuf;
bool MultihopOscilloscopeC$sendbusy = FALSE;
#line 61
bool MultihopOscilloscopeC$uartbusy = FALSE;


oscilloscope_t MultihopOscilloscopeC$local;

uint8_t MultihopOscilloscopeC$reading;






bool MultihopOscilloscopeC$suppress_count_change;





static inline void MultihopOscilloscopeC$Boot$booted(void );
#line 94
static inline void MultihopOscilloscopeC$RadioControl$startDone(error_t error);










static inline void MultihopOscilloscopeC$SerialControl$startDone(error_t error);










static void MultihopOscilloscopeC$startTimer(void );





static inline void MultihopOscilloscopeC$RadioControl$stopDone(error_t error);
static inline void MultihopOscilloscopeC$SerialControl$stopDone(error_t error);






static message_t *
MultihopOscilloscopeC$Receive$receive(message_t *msg, void *payload, uint8_t len);
#line 174
static inline void MultihopOscilloscopeC$uartSendTask$runTask(void );







static void MultihopOscilloscopeC$SerialSend$sendDone(message_t *msg, error_t error);
#line 204
static inline message_t *
MultihopOscilloscopeC$Snoop$receive(message_t *msg, void *payload, uint8_t len);
#line 231
static inline void MultihopOscilloscopeC$Timer$fired(void );
#line 259
static inline void MultihopOscilloscopeC$Send$sendDone(message_t *msg, error_t error);








static inline void MultihopOscilloscopeC$Read$readDone(error_t result, uint16_t data);









static void MultihopOscilloscopeC$fatal_problem(void );






inline static void MultihopOscilloscopeC$report_problem(void );
inline static void MultihopOscilloscopeC$report_sent(void );
inline static void MultihopOscilloscopeC$report_received(void );
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void LedsP$Led0$toggle(void );



static void LedsP$Led0$makeOutput(void );
#line 29
static void LedsP$Led0$set(void );
static void LedsP$Led0$clr(void );
static void LedsP$Led1$toggle(void );



static void LedsP$Led1$makeOutput(void );
#line 29
static void LedsP$Led1$set(void );
static void LedsP$Led1$clr(void );
static void LedsP$Led2$toggle(void );



static void LedsP$Led2$makeOutput(void );
#line 29
static void LedsP$Led2$set(void );
static void LedsP$Led2$clr(void );
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/LedsP.nc"
static inline error_t LedsP$Init$init(void );
#line 63
static inline void LedsP$Leds$led0On(void );









static inline void LedsP$Leds$led0Toggle(void );




static inline void LedsP$Leds$led1On(void );









static inline void LedsP$Leds$led1Toggle(void );




static inline void LedsP$Leds$led2On(void );









static inline void LedsP$Leds$led2Toggle(void );
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag(void );
#line 37
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$setControl(Atm128TimerControl_t control);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$fired(void );
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$overflow(void );
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$compareBusy(void );
#line 32
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$setTimer0Asynchronous(void );
# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get(void );





static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type t);










static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$start(void );
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get(void );
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set;
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0;
#line 39
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt;
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base;



enum /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$__nesc_unnamed4350 {
  Atm128AlarmAsyncP$0$MINDT = 2, 
  Atm128AlarmAsyncP$0$MAXT = 230
};



static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt(void );


static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init(void );
#line 74
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setOcr0(uint8_t n);
#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt(void );
#line 149
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired(void );
#line 161
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get(void );
#line 204
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop(void );







static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(uint32_t nt0, uint32_t ndt);









static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow(void );



static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm(void );



static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow(void );
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer0AsyncP$Compare$fired(void );
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm128Timer0AsyncP$Timer$overflow(void );
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline uint8_t HplAtm128Timer0AsyncP$Timer$get(void );
#line 76
static inline void HplAtm128Timer0AsyncP$TimerCtrl$setControl(Atm128TimerControl_t x);
#line 94
static inline Atm128_TIFR_t HplAtm128Timer0AsyncP$TimerCtrl$getInterruptFlag(void );
#line 122
static inline void HplAtm128Timer0AsyncP$Compare$start(void );









static inline uint8_t HplAtm128Timer0AsyncP$Compare$get(void );


static inline void HplAtm128Timer0AsyncP$Compare$set(uint8_t t);




static __inline void HplAtm128Timer0AsyncP$stabiliseTimer0(void );
#line 155
static inline mcu_power_t HplAtm128Timer0AsyncP$McuPowerOverride$lowestState(void );
#line 178
void __vector_15(void ) __attribute((signal))   ;





void __vector_16(void ) __attribute((signal))   ;
#line 198
static inline void HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous(void );







static inline int HplAtm128Timer0AsyncP$TimerAsync$compareBusy(void );
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask(void );
# 98 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow(void );
#line 92
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type dt);
#line 105
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(void );
#line 62
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop(void );
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired(void );
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$__nesc_unnamed4351 {
#line 63
  AlarmToTimerC$0$fired = 1U
};
#line 63
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$__nesc_sillytask_fired[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired];
#line 44
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt;
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot;

static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(uint32_t t0, uint32_t dt, bool oneshot);
#line 60
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void );


static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void );






static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void );
#line 82
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void );
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask(void );
# 125 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(void );
#line 118
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(uint32_t t0, uint32_t dt);
#line 67
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x405fc010);
#line 60
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4352 {
#line 60
  VirtualizeTimerC$0$updateFromTimer = 2U
};
#line 60
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer];
#line 42
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4353 {

  VirtualizeTimerC$0$NUM_TIMERS = 10, 
  VirtualizeTimerC$0$END_OF_LIST = 255
};








#line 48
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4354 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS];




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(uint32_t now);
#line 89
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void );
#line 128
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);









static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(uint8_t num, uint32_t dt);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(uint8_t num, uint32_t dt);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(uint8_t num);




static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$isRunning(uint8_t num);
#line 193
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num);
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void );
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcMultiple.nc"
static bool Atm128AdcP$Atm128AdcMultiple$dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage);
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static void Atm128AdcP$Atm128AdcSingle$dataReady(uint16_t data, bool precise);
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/HplAtm128Adc.nc"
static Atm128Admux_t Atm128AdcP$HplAtm128Adc$getAdmux(void );
#line 73
static void Atm128AdcP$HplAtm128Adc$enableAdc(void );
#line 49
static void Atm128AdcP$HplAtm128Adc$setAdmux(Atm128Admux_t admux);
#line 141
static bool Atm128AdcP$HplAtm128Adc$cancel(void );
#line 77
static void Atm128AdcP$HplAtm128Adc$disableAdc(void );








static void Atm128AdcP$HplAtm128Adc$disableInterruption(void );
#line 60
static void Atm128AdcP$HplAtm128Adc$setAdcsra(Atm128Adcsra_t adcsra);
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint8_t Atm128AdcP$Atm128Calibrate$adcPrescaler(void );
# 82 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcP.nc"
#line 78
struct Atm128AdcP$__nesc_unnamed4355 {
  bool multiple : 1;
  bool precise : 1;
  uint8_t channel : 5;
} Atm128AdcP$f;
#line 82
#line 78
struct Atm128AdcP$__nesc_unnamed4355 



Atm128AdcP$nextF;

static inline error_t Atm128AdcP$Init$init(void );
#line 104
static inline error_t Atm128AdcP$AsyncStdControl$start(void );




static inline error_t Atm128AdcP$AsyncStdControl$stop(void );









static __inline bool Atm128AdcP$isPrecise(Atm128Admux_t admux, uint8_t channel, uint8_t refVoltage);




static inline void Atm128AdcP$HplAtm128Adc$dataReady(uint16_t data);
#line 184
static inline void Atm128AdcP$getData(uint8_t channel, uint8_t refVoltage, bool leftJustify, uint8_t prescaler);
#line 208
static inline bool Atm128AdcP$Atm128AdcSingle$getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler);
#line 242
static inline bool Atm128AdcP$Atm128AdcMultiple$default$dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage);
# 147 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/HplAtm128Adc.nc"
static void HplAtm128AdcP$HplAtm128Adc$dataReady(uint16_t data);
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static void HplAtm128AdcP$McuPowerState$update(void );
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline Atm128Admux_t HplAtm128AdcP$HplAtm128Adc$getAdmux(void );


static inline Atm128Adcsra_t HplAtm128AdcP$HplAtm128Adc$getAdcsra(void );


static inline uint16_t HplAtm128AdcP$HplAtm128Adc$getValue(void );



static inline uint8_t HplAtm128AdcP$Admux2int(Atm128Admux_t x);
static inline uint8_t HplAtm128AdcP$Adcsra2int(Atm128Adcsra_t x);


static inline void HplAtm128AdcP$HplAtm128Adc$setAdmux(Atm128Admux_t x);


static inline void HplAtm128AdcP$HplAtm128Adc$setAdcsra(Atm128Adcsra_t x);
#line 69
static inline void HplAtm128AdcP$HplAtm128Adc$enableAdc(void );



static inline void HplAtm128AdcP$HplAtm128Adc$disableAdc(void );




static inline void HplAtm128AdcP$HplAtm128Adc$disableInterruption(void );
#line 99
void __vector_21(void ) __attribute((signal))   ;








static inline bool HplAtm128AdcP$HplAtm128Adc$cancel(void );
# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/system/RoundRobinResourceQueueC.nc"
enum /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$__nesc_unnamed4356 {
  RoundRobinResourceQueueC$0$NO_ENTRY = 0xFF, 
  RoundRobinResourceQueueC$0$SIZE = 1U ? (1U - 1) / 8 + 1 : 0
};

uint8_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$resQ[/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$SIZE];
uint8_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$last = 0;

static inline void /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$clearEntry(uint8_t id);



static inline error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$Init$init(void );




static inline bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEmpty(void );








static bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$dequeue(void );
#line 87
static inline error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$enqueue(resource_client_id_t id);
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceRequested$requested(
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x406c4230);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$unconfigure(
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x406c35e0);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$configure(
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x406c35e0);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Queue$enqueue(resource_client_id_t id);
#line 43
static bool /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Queue$isEmpty(void );
#line 60
static resource_client_id_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Queue$dequeue(void );
# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$requested(void );
#line 46
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$granted(void );
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$granted(
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x406b07d8);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$grantedTask$postTask(void );
# 75 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$__nesc_unnamed4357 {
#line 75
  ArbiterP$0$grantedTask = 3U
};
#line 75
typedef int /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$__nesc_sillytask_grantedTask[/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$grantedTask];
#line 67
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$__nesc_unnamed4358 {
#line 67
  ArbiterP$0$RES_CONTROLLED, ArbiterP$0$RES_GRANTING, ArbiterP$0$RES_IMM_GRANTING, ArbiterP$0$RES_BUSY
};
#line 68
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$__nesc_unnamed4359 {
#line 68
  ArbiterP$0$default_owner_id = 1U
};
#line 69
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$__nesc_unnamed4360 {
#line 69
  ArbiterP$0$NO_RES = 0xFF
};
uint8_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$RES_CONTROLLED;
uint8_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$default_owner_id;
uint8_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$reqResId;



static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$request(uint8_t id);
#line 108
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$release(uint8_t id);
#line 129
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$release(void );
#line 186
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$grantedTask$runTask(void );
#line 198
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$default$granted(uint8_t id);

static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(uint8_t id);
#line 212
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(uint8_t id);

static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(uint8_t id);
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/power/PowerDownCleanup.nc"
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$PowerDownCleanup$cleanup(void );
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$release(void );
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AsyncStdControl.nc"
static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$AsyncStdControl$start(void );









static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$AsyncStdControl$stop(void );
# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$requested(void );









static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$granted(void );




static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$PowerDownCleanup$default$cleanup(void );
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Read.nc"
static void AdcP$Read$readDone(
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x406f60e8, 
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Read.nc"
error_t result, AdcP$Read$val_t val);
# 66 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ReadNow.nc"
static void AdcP$ReadNow$readDone(
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x406f5088, 
# 66 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ReadNow.nc"
error_t result, AdcP$ReadNow$val_t val);
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP$Atm128AdcConfig$getRefVoltage(
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x406f45c0);
# 25 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP$Atm128AdcConfig$getChannel(
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x406f45c0);
# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP$Atm128AdcConfig$getPrescaler(
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x406f45c0);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static bool AdcP$Atm128AdcSingle$getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t AdcP$acquiredData$postTask(void );
# 103 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
enum AdcP$__nesc_unnamed4361 {
#line 103
  AdcP$acquiredData = 4U
};
#line 103
typedef int AdcP$__nesc_sillytask_acquiredData[AdcP$acquiredData];
#line 57
enum AdcP$__nesc_unnamed4362 {
  AdcP$IDLE, 
  AdcP$ACQUIRE_DATA, 
  AdcP$ACQUIRE_DATA_NOW
};




uint8_t AdcP$state;
uint8_t AdcP$client;
uint16_t AdcP$val;

static inline uint8_t AdcP$channel(void );



static inline uint8_t AdcP$refVoltage(void );



static inline uint8_t AdcP$prescaler(void );



static void AdcP$sample(void );



static inline error_t AdcP$startGet(uint8_t newState, uint8_t newClient);








static inline error_t AdcP$Read$read(uint8_t c);







static inline void AdcP$acquiredData$runTask(void );




static inline void AdcP$Atm128AdcSingle$dataReady(uint16_t data, bool precise);
#line 137
static inline uint8_t AdcP$Atm128AdcConfig$default$getChannel(uint8_t c);



static inline uint8_t AdcP$Atm128AdcConfig$default$getRefVoltage(uint8_t c);



static inline uint8_t AdcP$Atm128AdcConfig$default$getPrescaler(uint8_t c);




static inline void AdcP$ReadNow$default$readDone(uint8_t c, error_t e, uint16_t d);
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Read.nc"
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$readDone(
# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x4070a0c8, 
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Read.nc"
error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$val_t val);
#line 55
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$read(
# 26 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x407080e8);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$release(
# 27 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x4071d010);
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$request(
# 27 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x4071d010);



static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$read(uint8_t client);



static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$granted(uint8_t client);



static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$width_t data);




static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$default$request(uint8_t client);


static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$default$release(uint8_t client);
static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$default$readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$width_t data);
# 34 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/mica/VoltageP.nc"
static inline uint8_t VoltageP$Atm128AdcConfig$getChannel(void );





static inline uint8_t VoltageP$Atm128AdcConfig$getRefVoltage(void );




static inline uint8_t VoltageP$Atm128AdcConfig$getPrescaler(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static error_t CC2420ActiveMessageP$SubSend$send(
#line 56
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

CC2420ActiveMessageP$SubSend$getPayload(
#line 111
message_t * msg, 


uint8_t len);
# 70 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static uint16_t CC2420ActiveMessageP$CC2420Config$getPanAddr(void );
# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420ActiveMessageP$RadioBackoff$requestCca(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x40750948, 
# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);
# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SendNotifier.nc"
static void CC2420ActiveMessageP$SendNotifier$aboutToSend(
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x407502d0, 
# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SendNotifier.nc"
am_addr_t dest, 
#line 57
message_t * msg);
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static void CC2420ActiveMessageP$AMSend$sendDone(
# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x407567f8, 
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420ActiveMessageP$Snoop$receive(
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x40752870, 
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t CC2420ActiveMessageP$ActiveMessageAddress$amAddress(void );
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420ActiveMessageP$CC2420PacketBody$getHeader(message_t * msg);




static cc2420_metadata_t * CC2420ActiveMessageP$CC2420PacketBody$getMetadata(message_t * msg);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420ActiveMessageP$Receive$receive(
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x407521d8, 
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Leds.nc"
static void CC2420ActiveMessageP$Leds$led0Toggle(void );
# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static error_t CC2420ActiveMessageP$AMSend$send(am_id_t id, am_addr_t addr, 
message_t *msg, 
uint8_t len);
#line 80
static inline uint8_t CC2420ActiveMessageP$AMSend$maxPayloadLength(am_id_t id);








static inline am_addr_t CC2420ActiveMessageP$AMPacket$address(void );



static am_addr_t CC2420ActiveMessageP$AMPacket$destination(message_t *amsg);




static am_addr_t CC2420ActiveMessageP$AMPacket$source(message_t *amsg);




static inline void CC2420ActiveMessageP$AMPacket$setDestination(message_t *amsg, am_addr_t addr);









static inline bool CC2420ActiveMessageP$AMPacket$isForMe(message_t *amsg);




static am_id_t CC2420ActiveMessageP$AMPacket$type(message_t *amsg);




static void CC2420ActiveMessageP$AMPacket$setType(message_t *amsg, am_id_t type);
#line 148
static uint8_t CC2420ActiveMessageP$Packet$payloadLength(message_t *msg);



static void CC2420ActiveMessageP$Packet$setPayloadLength(message_t *msg, uint8_t len);



static inline uint8_t CC2420ActiveMessageP$Packet$maxPayloadLength(void );



static inline void *CC2420ActiveMessageP$Packet$getPayload(message_t *msg, uint8_t len);





static inline void CC2420ActiveMessageP$SubSend$sendDone(message_t *msg, error_t result);





static inline message_t *CC2420ActiveMessageP$SubReceive$receive(message_t *msg, void *payload, uint8_t len);
#line 194
static inline void CC2420ActiveMessageP$CC2420Config$syncDone(error_t error);
#line 209
static inline void CC2420ActiveMessageP$SubBackoff$requestCca(message_t *msg);
#line 240
static inline message_t *CC2420ActiveMessageP$Receive$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len);



static inline message_t *CC2420ActiveMessageP$Snoop$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len);






static inline void CC2420ActiveMessageP$SendNotifier$default$aboutToSend(am_id_t amId, am_addr_t addr, message_t *msg);









static inline void CC2420ActiveMessageP$RadioBackoff$default$requestCca(am_id_t id, 
message_t *msg);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void CC2420CsmaP$SplitControl$startDone(error_t error);
#line 117
static void CC2420CsmaP$SplitControl$stopDone(error_t error);
# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420CsmaP$RadioBackoff$requestCca(message_t * msg);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static error_t CC2420CsmaP$CC2420Transmit$send(message_t * p_msg, bool useCca);
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static void CC2420CsmaP$Send$sendDone(
#line 85
message_t * msg, 



error_t error);
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t CC2420CsmaP$SubControl$start(void );









static error_t CC2420CsmaP$SubControl$stop(void );
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420CsmaP$CC2420PacketBody$getHeader(message_t * msg);




static cc2420_metadata_t * CC2420CsmaP$CC2420PacketBody$getMetadata(message_t * msg);
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
static error_t CC2420CsmaP$CC2420Power$startOscillator(void );
#line 90
static error_t CC2420CsmaP$CC2420Power$rxOn(void );
#line 51
static error_t CC2420CsmaP$CC2420Power$startVReg(void );
#line 63
static error_t CC2420CsmaP$CC2420Power$stopVReg(void );
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420CsmaP$Resource$release(void );
#line 78
static error_t CC2420CsmaP$Resource$request(void );
# 66 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/State.nc"
static bool CC2420CsmaP$SplitControlState$isState(uint8_t myState);
#line 45
static error_t CC2420CsmaP$SplitControlState$requestState(uint8_t reqState);





static void CC2420CsmaP$SplitControlState$forceState(uint8_t reqState);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t CC2420CsmaP$sendDone_task$postTask(void );
#line 56
static error_t CC2420CsmaP$stopDone_task$postTask(void );
#line 56
static error_t CC2420CsmaP$startDone_task$postTask(void );
# 74 "CC2420CsmaP.nc"
enum CC2420CsmaP$__nesc_unnamed4363 {
#line 74
  CC2420CsmaP$startDone_task = 5U
};
#line 74
typedef int CC2420CsmaP$__nesc_sillytask_startDone_task[CC2420CsmaP$startDone_task];

enum CC2420CsmaP$__nesc_unnamed4364 {
#line 76
  CC2420CsmaP$stopDone_task = 6U
};
#line 76
typedef int CC2420CsmaP$__nesc_sillytask_stopDone_task[CC2420CsmaP$stopDone_task];
enum CC2420CsmaP$__nesc_unnamed4365 {
#line 77
  CC2420CsmaP$sendDone_task = 7U
};
#line 77
typedef int CC2420CsmaP$__nesc_sillytask_sendDone_task[CC2420CsmaP$sendDone_task];
#line 58
enum CC2420CsmaP$__nesc_unnamed4366 {
  CC2420CsmaP$S_STOPPED, 
  CC2420CsmaP$S_STARTING, 
  CC2420CsmaP$S_STARTED, 
  CC2420CsmaP$S_STOPPING, 
  CC2420CsmaP$S_TRANSMITTING
};

message_t * CC2420CsmaP$m_msg;

error_t CC2420CsmaP$sendErr = SUCCESS;


bool CC2420CsmaP$ccaOn;







static inline void CC2420CsmaP$shutdown(void );


static error_t CC2420CsmaP$SplitControl$start(void );
#line 97
static error_t CC2420CsmaP$SplitControl$stop(void );
#line 123
static inline error_t CC2420CsmaP$Send$send(message_t *p_msg, uint8_t len);
#line 158
static void *CC2420CsmaP$Send$getPayload(message_t *m, uint8_t len);








static inline uint8_t CC2420CsmaP$Send$maxPayloadLength(void );
#line 199
static inline void CC2420CsmaP$CC2420Transmit$sendDone(message_t *p_msg, error_t err);




static inline void CC2420CsmaP$CC2420Power$startVRegDone(void );



static inline void CC2420CsmaP$Resource$granted(void );



static inline void CC2420CsmaP$CC2420Power$startOscillatorDone(void );




static inline void CC2420CsmaP$SubBackoff$requestInitialBackoff(message_t *msg);







static inline void CC2420CsmaP$SubBackoff$requestCongestionBackoff(message_t *msg);
#line 240
static inline void CC2420CsmaP$sendDone_task$runTask(void );
#line 253
static inline void CC2420CsmaP$startDone_task$runTask(void );







static inline void CC2420CsmaP$stopDone_task$runTask(void );









static inline void CC2420CsmaP$shutdown(void );
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static void CC2420ControlP$CC2420Config$syncDone(error_t error);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP$RXCTRL1$write(uint16_t data);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void CC2420ControlP$StartupTimer$start(CC2420ControlP$StartupTimer$size_type dt);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP$MDMCTRL0$write(uint16_t data);
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void CC2420ControlP$RSTN$makeOutput(void );
#line 29
static void CC2420ControlP$RSTN$set(void );
static void CC2420ControlP$RSTN$clr(void );
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Read.nc"
static void CC2420ControlP$ReadRssi$readDone(error_t result, CC2420ControlP$ReadRssi$val_t val);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t CC2420ControlP$syncDone$postTask(void );
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP$RSSI$read(uint16_t *data);







static cc2420_status_t CC2420ControlP$IOCFG0$write(uint16_t data);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t CC2420ControlP$ActiveMessageAddress$amAddress(void );




static am_group_t CC2420ControlP$ActiveMessageAddress$amGroup(void );
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void CC2420ControlP$CSN$makeOutput(void );
#line 29
static void CC2420ControlP$CSN$set(void );
static void CC2420ControlP$CSN$clr(void );




static void CC2420ControlP$VREN$makeOutput(void );
#line 29
static void CC2420ControlP$VREN$set(void );
static void CC2420ControlP$VREN$clr(void );
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP$SXOSCON$strobe(void );
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420ControlP$SpiResource$release(void );
#line 78
static error_t CC2420ControlP$SpiResource$request(void );
#line 110
static error_t CC2420ControlP$SyncResource$release(void );
#line 78
static error_t CC2420ControlP$SyncResource$request(void );
# 76 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
static void CC2420ControlP$CC2420Power$startOscillatorDone(void );
#line 56
static void CC2420ControlP$CC2420Power$startVRegDone(void );
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP$IOCFG1$write(uint16_t data);
#line 55
static cc2420_status_t CC2420ControlP$FSCTRL$write(uint16_t data);
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP$SRXON$strobe(void );
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static void CC2420ControlP$Resource$granted(void );
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static cc2420_status_t CC2420ControlP$PANID$write(uint8_t offset, uint8_t * data, uint8_t length);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static error_t CC2420ControlP$InterruptCCA$disable(void );
#line 42
static error_t CC2420ControlP$InterruptCCA$enableRisingEdge(void );
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420ControlP$RssiResource$release(void );
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP$SRFOFF$strobe(void );
# 117 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
enum CC2420ControlP$__nesc_unnamed4367 {
#line 117
  CC2420ControlP$sync = 8U
};
#line 117
typedef int CC2420ControlP$__nesc_sillytask_sync[CC2420ControlP$sync];
enum CC2420ControlP$__nesc_unnamed4368 {
#line 118
  CC2420ControlP$syncDone = 9U
};
#line 118
typedef int CC2420ControlP$__nesc_sillytask_syncDone[CC2420ControlP$syncDone];
#line 85
#line 79
typedef enum CC2420ControlP$__nesc_unnamed4369 {
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



static void CC2420ControlP$writeFsctrl(void );
static void CC2420ControlP$writeMdmctrl0(void );
static void CC2420ControlP$writeId(void );





static inline error_t CC2420ControlP$Init$init(void );
#line 171
static inline error_t CC2420ControlP$Resource$request(void );







static inline error_t CC2420ControlP$Resource$release(void );







static inline error_t CC2420ControlP$CC2420Power$startVReg(void );
#line 199
static error_t CC2420ControlP$CC2420Power$stopVReg(void );







static inline error_t CC2420ControlP$CC2420Power$startOscillator(void );
#line 249
static inline error_t CC2420ControlP$CC2420Power$rxOn(void );
#line 279
static uint16_t CC2420ControlP$CC2420Config$getShortAddr(void );







static inline uint16_t CC2420ControlP$CC2420Config$getPanAddr(void );
#line 300
static inline error_t CC2420ControlP$CC2420Config$sync(void );
#line 332
static inline bool CC2420ControlP$CC2420Config$isAddressRecognitionEnabled(void );
#line 359
static inline bool CC2420ControlP$CC2420Config$isHwAutoAckDefault(void );






static inline bool CC2420ControlP$CC2420Config$isAutoAckEnabled(void );









static inline void CC2420ControlP$SyncResource$granted(void );
#line 390
static inline void CC2420ControlP$SpiResource$granted(void );




static inline void CC2420ControlP$RssiResource$granted(void );
#line 408
static inline void CC2420ControlP$StartupTimer$fired(void );









static inline void CC2420ControlP$InterruptCCA$fired(void );
#line 442
static inline void CC2420ControlP$sync$runTask(void );



static inline void CC2420ControlP$syncDone$runTask(void );









static void CC2420ControlP$writeFsctrl(void );
#line 473
static void CC2420ControlP$writeMdmctrl0(void );
#line 492
static void CC2420ControlP$writeId(void );
#line 509
static inline void CC2420ControlP$ReadRssi$default$readDone(error_t error, uint16_t data);
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t HplAtm128Timer1P$Timer0Ctrl$getInterruptFlag(void );
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer1P$CompareA$fired(void );
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm128Timer1P$Capture$captured(HplAtm128Timer1P$Capture$size_type t);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer1P$CompareB$fired(void );
#line 49
static void HplAtm128Timer1P$CompareC$fired(void );
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm128Timer1P$Timer$overflow(void );
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline uint16_t HplAtm128Timer1P$Timer$get(void );


static inline void HplAtm128Timer1P$Timer$set(uint16_t t);








static inline void HplAtm128Timer1P$Timer$setScale(uint8_t s);









static inline Atm128TimerCtrlCapture_t HplAtm128Timer1P$TimerCtrl$getCtrlCapture(void );









static inline uint16_t HplAtm128Timer1P$TimerCtrlCapture2int(Atm128TimerCtrlCapture_t x);






static inline void HplAtm128Timer1P$TimerCtrl$setCtrlCapture(Atm128_TCCR1B_t x);
#line 122
static inline void HplAtm128Timer1P$Capture$setEdge(bool up);



static inline void HplAtm128Timer1P$Capture$reset(void );
static inline void HplAtm128Timer1P$CompareA$reset(void );



static inline void HplAtm128Timer1P$Timer$start(void );
static inline void HplAtm128Timer1P$Capture$start(void );
static inline void HplAtm128Timer1P$CompareA$start(void );




static inline void HplAtm128Timer1P$Capture$stop(void );
static inline void HplAtm128Timer1P$CompareA$stop(void );




static inline bool HplAtm128Timer1P$Timer$test(void );
#line 183
static inline void HplAtm128Timer1P$CompareA$set(uint16_t t);
#line 195
void __vector_12(void ) __attribute((interrupt))   ;


static inline void HplAtm128Timer1P$CompareB$default$fired(void );
void __vector_13(void ) __attribute((interrupt))   ;


static inline void HplAtm128Timer1P$CompareC$default$fired(void );
void __vector_24(void ) __attribute((interrupt))   ;



void __vector_11(void ) __attribute((interrupt))   ;



void __vector_14(void ) __attribute((interrupt))   ;
# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$setScale(uint8_t scale);
#line 58
static void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$set(/*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$timer_size t);










static void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$start(void );
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitOneP.InitOne*/Atm128TimerInitC$0$Init$init(void );








static inline void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$overflow(void );
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$fired(void );
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$reset(void );
#line 45
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$set(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$size_type t);










static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$start(void );


static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$stop(void );
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$timer_size /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$get(void );
# 65 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$stop(void );








static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$timer_size t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$timer_size dt);
#line 110
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$fired(void );






static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$overflow(void );
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$overflow(void );
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static bool /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$test(void );
#line 52
static /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$timer_size /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$get(void );
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline /*CounterOne16C.NCounter*/Atm128CounterC$0$timer_size /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$get(void );




static inline bool /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$isOverflowPending(void );









static inline void /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$overflow(void );
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$size_type /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$get(void );






static bool /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$isOverflowPending(void );










static void /*Counter32khz32C.Transform32*/TransformCounterC$0$Counter$overflow(void );
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
/*Counter32khz32C.Transform32*/TransformCounterC$0$upper_count_type /*Counter32khz32C.Transform32*/TransformCounterC$0$m_upper;

enum /*Counter32khz32C.Transform32*/TransformCounterC$0$__nesc_unnamed4370 {

  TransformCounterC$0$LOW_SHIFT_RIGHT = 0, 
  TransformCounterC$0$HIGH_SHIFT_LEFT = 8 * sizeof(/*Counter32khz32C.Transform32*/TransformCounterC$0$from_size_type ) - /*Counter32khz32C.Transform32*/TransformCounterC$0$LOW_SHIFT_RIGHT, 
  TransformCounterC$0$NUM_UPPER_BITS = 8 * sizeof(/*Counter32khz32C.Transform32*/TransformCounterC$0$to_size_type ) - 8 * sizeof(/*Counter32khz32C.Transform32*/TransformCounterC$0$from_size_type ) + 0, 



  TransformCounterC$0$OVERFLOW_MASK = /*Counter32khz32C.Transform32*/TransformCounterC$0$NUM_UPPER_BITS ? ((/*Counter32khz32C.Transform32*/TransformCounterC$0$upper_count_type )2 << (/*Counter32khz32C.Transform32*/TransformCounterC$0$NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*Counter32khz32C.Transform32*/TransformCounterC$0$to_size_type /*Counter32khz32C.Transform32*/TransformCounterC$0$Counter$get(void );
#line 122
static inline void /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$overflow(void );
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$fired(void );
#line 92
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$size_type dt);
#line 62
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$stop(void );
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$get(void );
# 66 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_t0;
/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_dt;

enum /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$__nesc_unnamed4371 {

  TransformAlarmC$0$MAX_DELAY_LOG2 = 8 * sizeof(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$from_size_type ) - 1 - 0, 
  TransformAlarmC$0$MAX_DELAY = (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type )1 << /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$MAX_DELAY_LOG2
};

static inline /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$getNow(void );
#line 91
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$stop(void );




static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$set_alarm(void );
#line 136
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type dt);









static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type dt);




static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$fired(void );
#line 166
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$overflow(void );
# 22 "/opt/CVSTinyOS/tinyos-2.x/tos/system/NoInitC.nc"
static inline error_t NoInitC$Init$init(void );
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captured(uint16_t time);
# 79 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$setEdge(bool up);
#line 55
static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$reset(void );


static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$start(void );


static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$stop(void );
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$enableCapture(uint8_t mode);









static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captureRisingEdge(void );



static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captureFallingEdge(void );



static inline void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$disable(void );



static inline void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$captured(uint16_t time);
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$clear(void );
#line 40
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$disable(void );
#line 59
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$edge(bool low_to_high);
#line 35
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$enable(void );
# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$fired(void );
# 15 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$enable(bool rising);
#line 29
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$enableFallingEdge(void );



static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$disable(void );




static inline void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$fired(void );
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void HplAtm128InterruptSigP$IntSig6$fired(void );
#line 41
static void HplAtm128InterruptSigP$IntSig1$fired(void );
#line 41
static void HplAtm128InterruptSigP$IntSig4$fired(void );
#line 41
static void HplAtm128InterruptSigP$IntSig7$fired(void );
#line 41
static void HplAtm128InterruptSigP$IntSig2$fired(void );
#line 41
static void HplAtm128InterruptSigP$IntSig5$fired(void );
#line 41
static void HplAtm128InterruptSigP$IntSig0$fired(void );
#line 41
static void HplAtm128InterruptSigP$IntSig3$fired(void );
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSigP.nc"
void __vector_1(void ) __attribute((signal))   ;




void __vector_2(void ) __attribute((signal))   ;




void __vector_3(void ) __attribute((signal))   ;




void __vector_4(void ) __attribute((signal))   ;




void __vector_5(void ) __attribute((signal))   ;




void __vector_6(void ) __attribute((signal))   ;




void __vector_7(void ) __attribute((signal))   ;




void __vector_8(void ) __attribute((signal))   ;
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$Irq$fired(void );
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$IrqSignal$fired(void );

static inline void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$Irq$default$fired(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$fired(void );
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$IrqSignal$fired(void );

static inline void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$default$fired(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$fired(void );
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$IrqSignal$fired(void );

static inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$default$fired(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$Irq$fired(void );
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$IrqSignal$fired(void );

static inline void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$Irq$default$fired(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$fired(void );
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$IrqSignal$fired(void );

static inline void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$default$fired(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$fired(void );
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$IrqSignal$fired(void );

static inline void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$default$fired(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$fired(void );
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$clear(void );
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$enable(void );
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$disable(void );



static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$edge(bool low_to_high);
#line 61
static inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$IrqSignal$fired(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$fired(void );
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$IrqSignal$fired(void );

static inline void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$default$fired(void );
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static bool HplCC2420InterruptsP$CC_CCA$get(void );
# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static void HplCC2420InterruptsP$CCA$fired(void );
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t HplCC2420InterruptsP$CCATask$postTask(void );
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/micaz/chips/cc2420/HplCC2420InterruptsP.nc"
enum HplCC2420InterruptsP$__nesc_unnamed4372 {
#line 69
  HplCC2420InterruptsP$CCATask = 10U
};
#line 69
typedef int HplCC2420InterruptsP$__nesc_sillytask_CCATask[HplCC2420InterruptsP$CCATask];
#line 56
uint8_t HplCC2420InterruptsP$ccaWaitForState;

uint8_t HplCC2420InterruptsP$ccaLastState;

bool HplCC2420InterruptsP$ccaCheckDisabled = FALSE;








static inline void HplCC2420InterruptsP$CCATask$runTask(void );
#line 89
static inline error_t HplCC2420InterruptsP$CCA$enableRisingEdge(void );
#line 105
static inline error_t HplCC2420InterruptsP$CCA$disable(void );
# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static error_t CC2420SpiP$SpiPacket$send(
#line 48
uint8_t * txBuf, 

uint8_t * rxBuf, 








uint16_t len);
# 91 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static void CC2420SpiP$Fifo$writeDone(
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x409ce280, 
# 91 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
#line 71
static void CC2420SpiP$Fifo$readDone(
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x409ce280, 
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420SpiP$ChipSpiResource$releasing(void );
# 34 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SpiByte.nc"
static uint8_t CC2420SpiP$SpiByte$write(uint8_t tx);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/State.nc"
static void CC2420SpiP$WorkingState$toIdle(void );




static bool CC2420SpiP$WorkingState$isIdle(void );
#line 45
static error_t CC2420SpiP$WorkingState$requestState(uint8_t reqState);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420SpiP$SpiResource$release(void );
#line 87
static error_t CC2420SpiP$SpiResource$immediateRequest(void );
#line 78
static error_t CC2420SpiP$SpiResource$request(void );
#line 118
static bool CC2420SpiP$SpiResource$isOwner(void );
#line 92
static void CC2420SpiP$Resource$granted(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x409cf818);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t CC2420SpiP$grant$postTask(void );
# 88 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
enum CC2420SpiP$__nesc_unnamed4373 {
#line 88
  CC2420SpiP$grant = 11U
};
#line 88
typedef int CC2420SpiP$__nesc_sillytask_grant[CC2420SpiP$grant];
#line 63
enum CC2420SpiP$__nesc_unnamed4374 {
  CC2420SpiP$RESOURCE_COUNT = 5U, 
  CC2420SpiP$NO_HOLDER = 0xFF
};


enum CC2420SpiP$__nesc_unnamed4375 {
  CC2420SpiP$S_IDLE, 
  CC2420SpiP$S_BUSY
};


uint16_t CC2420SpiP$m_addr;


uint8_t CC2420SpiP$m_requests = 0;


uint8_t CC2420SpiP$m_holder = CC2420SpiP$NO_HOLDER;


bool CC2420SpiP$release;


static error_t CC2420SpiP$attemptRelease(void );







static inline void CC2420SpiP$ChipSpiResource$abortRelease(void );






static inline error_t CC2420SpiP$ChipSpiResource$attemptRelease(void );




static error_t CC2420SpiP$Resource$request(uint8_t id);
#line 126
static error_t CC2420SpiP$Resource$immediateRequest(uint8_t id);
#line 149
static error_t CC2420SpiP$Resource$release(uint8_t id);
#line 178
static inline uint8_t CC2420SpiP$Resource$isOwner(uint8_t id);





static inline void CC2420SpiP$SpiResource$granted(void );




static cc2420_status_t CC2420SpiP$Fifo$beginRead(uint8_t addr, uint8_t *data, 
uint8_t len);
#line 209
static inline error_t CC2420SpiP$Fifo$continueRead(uint8_t addr, uint8_t *data, 
uint8_t len);



static inline cc2420_status_t CC2420SpiP$Fifo$write(uint8_t addr, uint8_t *data, 
uint8_t len);
#line 260
static cc2420_status_t CC2420SpiP$Ram$write(uint16_t addr, uint8_t offset, 
uint8_t *data, 
uint8_t len);
#line 287
static inline cc2420_status_t CC2420SpiP$Reg$read(uint8_t addr, uint16_t *data);
#line 305
static cc2420_status_t CC2420SpiP$Reg$write(uint8_t addr, uint16_t data);
#line 318
static cc2420_status_t CC2420SpiP$Strobe$strobe(uint8_t addr);










static void CC2420SpiP$SpiPacket$sendDone(uint8_t *tx_buf, uint8_t *rx_buf, 
uint16_t len, error_t error);








static error_t CC2420SpiP$attemptRelease(void );
#line 358
static inline void CC2420SpiP$grant$runTask(void );








static inline void CC2420SpiP$Resource$default$granted(uint8_t id);


static inline void CC2420SpiP$Fifo$default$readDone(uint8_t addr, uint8_t *rx_buf, uint8_t rx_len, error_t error);


static inline void CC2420SpiP$Fifo$default$writeDone(uint8_t addr, uint8_t *tx_buf, uint8_t tx_len, error_t error);
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t StateImplP$state[6U];

enum StateImplP$__nesc_unnamed4376 {
  StateImplP$S_IDLE = 0
};


static inline error_t StateImplP$Init$init(void );
#line 96
static error_t StateImplP$State$requestState(uint8_t id, uint8_t reqState);
#line 111
static inline void StateImplP$State$forceState(uint8_t id, uint8_t reqState);






static inline void StateImplP$State$toIdle(uint8_t id);







static inline bool StateImplP$State$isIdle(uint8_t id);






static bool StateImplP$State$isState(uint8_t id, uint8_t myState);









static uint8_t StateImplP$State$getState(uint8_t id);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t Atm128SpiP$zeroTask$postTask(void );
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static void Atm128SpiP$SpiPacket$sendDone(
#line 64
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Atm128SpiP$ResourceArbiter$release(
# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40a3ed10);
# 87 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Atm128SpiP$ResourceArbiter$immediateRequest(
# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40a3ed10);
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Atm128SpiP$ResourceArbiter$request(
# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40a3ed10);
# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static bool Atm128SpiP$ResourceArbiter$isOwner(
# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40a3ed10);
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static void Atm128SpiP$Spi$sleep(void );
#line 66
static void Atm128SpiP$Spi$initMaster(void );
#line 96
static void Atm128SpiP$Spi$enableInterrupt(bool enabled);
#line 80
static uint8_t Atm128SpiP$Spi$read(void );
#line 125
static void Atm128SpiP$Spi$setMasterDoubleSpeed(bool on);
#line 114
static void Atm128SpiP$Spi$setClock(uint8_t speed);
#line 108
static void Atm128SpiP$Spi$setClockPolarity(bool highWhenIdle);
#line 86
static void Atm128SpiP$Spi$write(uint8_t data);
#line 99
static void Atm128SpiP$Spi$enableSpi(bool busOn);
#line 111
static void Atm128SpiP$Spi$setClockPhase(bool sampleOnTrailing);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static void Atm128SpiP$Resource$granted(
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40a3f010);
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static void Atm128SpiP$McuPowerState$update(void );
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
static bool Atm128SpiP$ArbiterInfo$inUse(void );
# 207 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
enum Atm128SpiP$__nesc_unnamed4377 {
#line 207
  Atm128SpiP$zeroTask = 12U
};
#line 207
typedef int Atm128SpiP$__nesc_sillytask_zeroTask[Atm128SpiP$zeroTask];
#line 90
uint16_t Atm128SpiP$len;
uint8_t * Atm128SpiP$txBuffer;
uint8_t * Atm128SpiP$rxBuffer;
uint16_t Atm128SpiP$pos;

enum Atm128SpiP$__nesc_unnamed4378 {
  Atm128SpiP$SPI_IDLE, 
  Atm128SpiP$SPI_BUSY, 
  Atm128SpiP$SPI_ATOMIC_SIZE = 10
};





static void Atm128SpiP$startSpi(void );
#line 119
static inline void Atm128SpiP$stopSpi(void );







static uint8_t Atm128SpiP$SpiByte$write(uint8_t tx);
#line 162
static error_t Atm128SpiP$sendNextPart(void );
#line 207
static inline void Atm128SpiP$zeroTask$runTask(void );
#line 241
static error_t Atm128SpiP$SpiPacket$send(uint8_t *writeBuf, 
uint8_t *readBuf, 
uint16_t bufLen);
#line 265
static inline void Atm128SpiP$Spi$dataReady(uint8_t data);
#line 305
static inline error_t Atm128SpiP$Resource$immediateRequest(uint8_t id);







static inline error_t Atm128SpiP$Resource$request(uint8_t id);








static inline error_t Atm128SpiP$Resource$release(uint8_t id);









static inline uint8_t Atm128SpiP$Resource$isOwner(uint8_t id);



static inline void Atm128SpiP$ResourceArbiter$granted(uint8_t id);



static inline void Atm128SpiP$Resource$default$granted(uint8_t id);
# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void HplAtm128SpiP$MISO$makeInput(void );

static void HplAtm128SpiP$SCK$makeOutput(void );
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static void HplAtm128SpiP$Mcu$update(void );
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static void HplAtm128SpiP$SPI$dataReady(uint8_t data);
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void HplAtm128SpiP$MOSI$makeOutput(void );
# 79 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP$SPI$initMaster(void );
#line 94
static inline void HplAtm128SpiP$SPI$sleep(void );



static inline uint8_t HplAtm128SpiP$SPI$read(void );
static inline void HplAtm128SpiP$SPI$write(uint8_t d);


void __vector_17(void ) __attribute((signal))   ;
#line 115
static void HplAtm128SpiP$SPI$enableInterrupt(bool enabled);
#line 130
static void HplAtm128SpiP$SPI$enableSpi(bool enabled);
#line 156
static inline void HplAtm128SpiP$SPI$setMasterBit(bool isMaster);
#line 169
static inline void HplAtm128SpiP$SPI$setClockPolarity(bool highWhenIdle);
#line 183
static inline void HplAtm128SpiP$SPI$setClockPhase(bool sampleOnTrailing);
#line 200
static inline void HplAtm128SpiP$SPI$setClock(uint8_t v);
#line 213
static inline void HplAtm128SpiP$SPI$setMasterDoubleSpeed(bool on);
# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
enum /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$__nesc_unnamed4379 {
#line 39
  FcfsResourceQueueC$0$NO_ENTRY = 0xFF
};
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ[1U];
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qTail = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;

static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$Init$init(void );




static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty(void );



static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue(void );
#line 72
static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(resource_client_id_t id);
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$requested(
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40a9bab0);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$immediateRequested(
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40a9bab0);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$unconfigure(
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40abe718);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$configure(
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40abe718);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$enqueue(resource_client_id_t id);
#line 43
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$isEmpty(void );
#line 60
static resource_client_id_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$dequeue(void );
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$granted(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40a9b088);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$postTask(void );
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$__nesc_unnamed4380 {
#line 69
  SimpleArbiterP$0$grantedTask = 13U
};
#line 69
typedef int /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$__nesc_sillytask_grantedTask[/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask];
#line 62
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$__nesc_unnamed4381 {
#line 62
  SimpleArbiterP$0$RES_IDLE = 0, SimpleArbiterP$0$RES_GRANTING = 1, SimpleArbiterP$0$RES_BUSY = 2
};
#line 63
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$__nesc_unnamed4382 {
#line 63
  SimpleArbiterP$0$NO_RES = 0xFF
};
uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_IDLE;
uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$NO_RES;
uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$reqResId;



static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$request(uint8_t id);
#line 84
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$immediateRequest(uint8_t id);
#line 97
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$release(uint8_t id);
#line 123
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ArbiterInfo$inUse(void );
#line 147
static uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$isOwner(uint8_t id);






static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$runTask(void );
#line 166
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$requested(uint8_t id);

static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$immediateRequested(uint8_t id);

static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$configure(uint8_t id);

static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$unconfigure(uint8_t id);
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void HplCC2420SpiP$SS$makeOutput(void );
#line 29
static void HplCC2420SpiP$SS$set(void );
static void HplCC2420SpiP$SS$clr(void );
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static void HplCC2420SpiP$Resource$granted(void );
#line 110
static error_t HplCC2420SpiP$SubResource$release(void );
#line 87
static error_t HplCC2420SpiP$SubResource$immediateRequest(void );
#line 78
static error_t HplCC2420SpiP$SubResource$request(void );
#line 118
static bool HplCC2420SpiP$SubResource$isOwner(void );
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline error_t HplCC2420SpiP$Resource$request(void );




static inline error_t HplCC2420SpiP$Resource$immediateRequest(void );










static inline void HplCC2420SpiP$SubResource$granted(void );







static inline error_t HplCC2420SpiP$Resource$release(void );







static inline bool HplCC2420SpiP$Resource$isOwner(void );
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/system/NoLedsC.nc"
static inline void NoLedsC$Leds$led0Toggle(void );
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
am_addr_t ActiveMessageAddressC$addr = TOS_AM_ADDRESS;


am_group_t ActiveMessageAddressC$group = TOS_AM_GROUP;






static inline am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void );
#line 82
static inline am_group_t ActiveMessageAddressC$ActiveMessageAddress$amGroup(void );
#line 95
static am_addr_t ActiveMessageAddressC$amAddress(void );
# 81 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420TransmitP$RadioBackoff$requestInitialBackoff(message_t * msg);






static void CC2420TransmitP$RadioBackoff$requestCongestionBackoff(message_t * msg);
# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
static void CC2420TransmitP$PacketTimeStamp$clear(
#line 55
message_t * msg);
#line 67
static void CC2420TransmitP$PacketTimeStamp$set(
#line 62
message_t * msg, 




CC2420TransmitP$PacketTimeStamp$size_type value);
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP$STXONCCA$strobe(void );
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static error_t CC2420TransmitP$CaptureSFD$captureFallingEdge(void );
#line 55
static void CC2420TransmitP$CaptureSFD$disable(void );
#line 42
static error_t CC2420TransmitP$CaptureSFD$captureRisingEdge(void );
# 98 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
static CC2420TransmitP$BackoffTimer$size_type CC2420TransmitP$BackoffTimer$getNow(void );
#line 55
static void CC2420TransmitP$BackoffTimer$start(CC2420TransmitP$BackoffTimer$size_type dt);






static void CC2420TransmitP$BackoffTimer$stop(void );
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static cc2420_status_t CC2420TransmitP$TXFIFO_RAM$write(uint8_t offset, uint8_t * data, uint8_t length);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420TransmitP$TXCTRL$write(uint16_t data);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420TransmitP$CC2420Receive$sfd_dropped(void );
#line 49
static void CC2420TransmitP$CC2420Receive$sfd(uint32_t time);
# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static void CC2420TransmitP$Send$sendDone(message_t * p_msg, error_t error);
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420TransmitP$ChipSpiResource$abortRelease(void );







static error_t CC2420TransmitP$ChipSpiResource$attemptRelease(void );
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP$SFLUSHTX$strobe(void );
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void CC2420TransmitP$CSN$makeOutput(void );
#line 29
static void CC2420TransmitP$CSN$set(void );
static void CC2420TransmitP$CSN$clr(void );
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420TransmitP$CC2420PacketBody$getHeader(message_t * msg);




static cc2420_metadata_t * CC2420TransmitP$CC2420PacketBody$getMetadata(message_t * msg);
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
static uint8_t CC2420TransmitP$PacketTimeSyncOffset$get(
#line 42
message_t * msg);
#line 39
static bool CC2420TransmitP$PacketTimeSyncOffset$isSet(
#line 35
message_t * msg);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420TransmitP$SpiResource$release(void );
#line 87
static error_t CC2420TransmitP$SpiResource$immediateRequest(void );
#line 78
static error_t CC2420TransmitP$SpiResource$request(void );
# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void CC2420TransmitP$CCA$makeInput(void );
#line 32
static bool CC2420TransmitP$CCA$get(void );
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP$SNOP$strobe(void );
# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void CC2420TransmitP$SFD$makeInput(void );
#line 32
static bool CC2420TransmitP$SFD$get(void );
# 82 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static cc2420_status_t CC2420TransmitP$TXFIFO$write(uint8_t * data, uint8_t length);
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP$STXON$strobe(void );
# 90 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
#line 80
typedef enum CC2420TransmitP$__nesc_unnamed4383 {
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





enum CC2420TransmitP$__nesc_unnamed4384 {
  CC2420TransmitP$CC2420_ABORT_PERIOD = 320
};

message_t * CC2420TransmitP$m_msg;

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



static inline error_t CC2420TransmitP$send(message_t * p_msg, bool cca);
static inline error_t CC2420TransmitP$resend(bool cca);
static void CC2420TransmitP$loadTXFIFO(void );
static void CC2420TransmitP$attemptSend(void );
static void CC2420TransmitP$congestionBackoff(void );
static error_t CC2420TransmitP$acquireSpiResource(void );
static inline error_t CC2420TransmitP$releaseSpiResource(void );
static void CC2420TransmitP$signalDone(error_t err);



static inline error_t CC2420TransmitP$Init$init(void );







static inline error_t CC2420TransmitP$StdControl$start(void );










static inline error_t CC2420TransmitP$StdControl$stop(void );
#line 172
static inline error_t CC2420TransmitP$Send$send(message_t * p_msg, bool useCca);



static inline error_t CC2420TransmitP$Send$resend(bool useCca);
#line 207
static inline bool CC2420TransmitP$EnergyIndicator$isReceiving(void );
#line 239
static __inline uint32_t CC2420TransmitP$time16to32(uint16_t time, uint32_t recent_time);
#line 260
static inline void CC2420TransmitP$CaptureSFD$captured(uint16_t time);
#line 341
static inline void CC2420TransmitP$ChipSpiResource$releasing(void );
#line 353
static inline void CC2420TransmitP$CC2420Receive$receive(uint8_t type, message_t *ack_msg);
#line 381
static inline void CC2420TransmitP$SpiResource$granted(void );
#line 419
static inline void CC2420TransmitP$TXFIFO$writeDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error);
#line 451
static inline void CC2420TransmitP$TXFIFO$readDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error);










static inline void CC2420TransmitP$BackoffTimer$fired(void );
#line 512
static inline error_t CC2420TransmitP$send(message_t * p_msg, bool cca);
#line 540
static inline error_t CC2420TransmitP$resend(bool cca);
#line 580
static void CC2420TransmitP$attemptSend(void );
#line 622
static void CC2420TransmitP$congestionBackoff(void );






static error_t CC2420TransmitP$acquireSpiResource(void );







static inline error_t CC2420TransmitP$releaseSpiResource(void );
#line 659
static void CC2420TransmitP$loadTXFIFO(void );
#line 684
static void CC2420TransmitP$signalDone(error_t err);
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static bool CC2420ReceiveP$FIFO$get(void );
# 86 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static bool CC2420ReceiveP$CC2420Config$isAddressRecognitionEnabled(void );
#line 110
static bool CC2420ReceiveP$CC2420Config$isAutoAckEnabled(void );
#line 105
static bool CC2420ReceiveP$CC2420Config$isHwAutoAckDefault(void );
#line 64
static uint16_t CC2420ReceiveP$CC2420Config$getShortAddr(void );
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t CC2420ReceiveP$receiveDone_task$postTask(void );
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static bool CC2420ReceiveP$FIFOP$get(void );
# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
static void CC2420ReceiveP$PacketTimeStamp$clear(
#line 55
message_t * msg);
#line 67
static void CC2420ReceiveP$PacketTimeStamp$set(
#line 62
message_t * msg, 




CC2420ReceiveP$PacketTimeStamp$size_type value);
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420ReceiveP$CC2420Receive$receive(uint8_t type, message_t * message);
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ReceiveP$SACK$strobe(void );
# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void CC2420ReceiveP$CSN$set(void );
static void CC2420ReceiveP$CSN$clr(void );
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420ReceiveP$CC2420PacketBody$getHeader(message_t * msg);




static cc2420_metadata_t * CC2420ReceiveP$CC2420PacketBody$getMetadata(message_t * msg);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420ReceiveP$Receive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420ReceiveP$SpiResource$release(void );
#line 87
static error_t CC2420ReceiveP$SpiResource$immediateRequest(void );
#line 78
static error_t CC2420ReceiveP$SpiResource$request(void );
#line 118
static bool CC2420ReceiveP$SpiResource$isOwner(void );
# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static error_t CC2420ReceiveP$RXFIFO$continueRead(uint8_t * data, uint8_t length);
#line 51
static cc2420_status_t CC2420ReceiveP$RXFIFO$beginRead(uint8_t * data, uint8_t length);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static error_t CC2420ReceiveP$InterruptFIFOP$disable(void );
#line 43
static error_t CC2420ReceiveP$InterruptFIFOP$enableFallingEdge(void );
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ReceiveP$SFLUSHRX$strobe(void );
# 115 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
enum CC2420ReceiveP$__nesc_unnamed4385 {
#line 115
  CC2420ReceiveP$receiveDone_task = 14U
};
#line 115
typedef int CC2420ReceiveP$__nesc_sillytask_receiveDone_task[CC2420ReceiveP$receiveDone_task];
#line 76
#line 70
typedef enum CC2420ReceiveP$__nesc_unnamed4386 {
  CC2420ReceiveP$S_STOPPED, 
  CC2420ReceiveP$S_STARTED, 
  CC2420ReceiveP$S_RX_LENGTH, 
  CC2420ReceiveP$S_RX_FCF, 
  CC2420ReceiveP$S_RX_PAYLOAD
} CC2420ReceiveP$cc2420_receive_state_t;

enum CC2420ReceiveP$__nesc_unnamed4387 {
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

message_t * CC2420ReceiveP$m_p_rx_buf;

message_t CC2420ReceiveP$m_rx_buf;

CC2420ReceiveP$cc2420_receive_state_t CC2420ReceiveP$m_state;


static void CC2420ReceiveP$reset_state(void );
static void CC2420ReceiveP$beginReceive(void );
static void CC2420ReceiveP$receive(void );
static void CC2420ReceiveP$waitForNextPacket(void );
static void CC2420ReceiveP$flush(void );
static inline bool CC2420ReceiveP$passesAddressCheck(message_t * msg);




static inline error_t CC2420ReceiveP$Init$init(void );





static inline error_t CC2420ReceiveP$StdControl$start(void );









static inline error_t CC2420ReceiveP$StdControl$stop(void );
#line 149
static inline void CC2420ReceiveP$CC2420Receive$sfd(uint32_t time);








static inline void CC2420ReceiveP$CC2420Receive$sfd_dropped(void );






static inline bool CC2420ReceiveP$PacketIndicator$isReceiving(void );









static inline void CC2420ReceiveP$InterruptFIFOP$fired(void );










static inline void CC2420ReceiveP$SpiResource$granted(void );








static inline void CC2420ReceiveP$RXFIFO$readDone(uint8_t *rx_buf, uint8_t rx_len, 
error_t error);
#line 319
static inline void CC2420ReceiveP$RXFIFO$writeDone(uint8_t *tx_buf, uint8_t tx_len, error_t error);







static inline void CC2420ReceiveP$receiveDone_task$runTask(void );
#line 350
static inline void CC2420ReceiveP$CC2420Config$syncDone(error_t error);






static void CC2420ReceiveP$beginReceive(void );
#line 375
static void CC2420ReceiveP$flush(void );
#line 392
static void CC2420ReceiveP$receive(void );










static void CC2420ReceiveP$waitForNextPacket(void );
#line 441
static void CC2420ReceiveP$reset_state(void );










static inline bool CC2420ReceiveP$passesAddressCheck(message_t *msg);
# 65 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static error_t CC2420PacketP$Acks$requestAck(message_t *p_msg);




static inline error_t CC2420PacketP$Acks$noAck(message_t *p_msg);




static inline bool CC2420PacketP$Acks$wasAcked(message_t *p_msg);
#line 94
static inline uint8_t CC2420PacketP$CC2420Packet$getLqi(message_t *p_msg);




static inline cc2420_header_t * CC2420PacketP$CC2420PacketBody$getHeader(message_t * msg);



static inline cc2420_metadata_t *CC2420PacketP$CC2420PacketBody$getMetadata(message_t *msg);



static inline bool CC2420PacketP$LinkPacketMetadata$highChannelQuality(message_t *msg);
#line 122
static void CC2420PacketP$PacketTimeStamp32khz$clear(message_t *msg);





static inline void CC2420PacketP$PacketTimeStamp32khz$set(message_t *msg, uint32_t value);
#line 158
static inline bool CC2420PacketP$PacketTimeSyncOffset$isSet(message_t *msg);








static uint8_t CC2420PacketP$PacketTimeSyncOffset$get(message_t *msg);
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC$1$Counter$overflow(void );
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/system/RandomMlcgC.nc"
uint32_t RandomMlcgC$seed;


static inline error_t RandomMlcgC$Init$init(void );
#line 58
static uint32_t RandomMlcgC$Random$rand32(void );
#line 78
static inline uint16_t RandomMlcgC$Random$rand16(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static error_t UniqueSendP$SubSend$send(
#line 56
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

UniqueSendP$SubSend$getPayload(
#line 111
message_t * msg, 


uint8_t len);
#line 89
static void UniqueSendP$Send$sendDone(
#line 85
message_t * msg, 



error_t error);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Random.nc"
static uint16_t UniqueSendP$Random$rand16(void );
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * UniqueSendP$CC2420PacketBody$getHeader(message_t * msg);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/State.nc"
static void UniqueSendP$State$toIdle(void );
#line 45
static error_t UniqueSendP$State$requestState(uint8_t reqState);
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/unique/UniqueSendP.nc"
uint8_t UniqueSendP$localSendId;

enum UniqueSendP$__nesc_unnamed4388 {
  UniqueSendP$S_IDLE, 
  UniqueSendP$S_SENDING
};


static inline error_t UniqueSendP$Init$init(void );
#line 75
static inline error_t UniqueSendP$Send$send(message_t *msg, uint8_t len);
#line 99
static inline void *UniqueSendP$Send$getPayload(message_t *msg, uint8_t len);




static inline void UniqueSendP$SubSend$sendDone(message_t *msg, error_t error);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



UniqueReceiveP$Receive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * UniqueReceiveP$CC2420PacketBody$getHeader(message_t * msg);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



UniqueReceiveP$DuplicateReceive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/unique/UniqueReceiveP.nc"
#line 56
struct UniqueReceiveP$__nesc_unnamed4389 {
  am_addr_t source;
  uint8_t dsn;
} UniqueReceiveP$receivedMessages[4];

uint8_t UniqueReceiveP$writeIndex = 0;


uint8_t UniqueReceiveP$recycleSourceElement;

enum UniqueReceiveP$__nesc_unnamed4390 {
  UniqueReceiveP$INVALID_ELEMENT = 0xFF
};


static inline error_t UniqueReceiveP$Init$init(void );









static inline bool UniqueReceiveP$hasSeen(uint16_t msgSource, uint8_t msgDsn);
static inline void UniqueReceiveP$insert(uint16_t msgSource, uint8_t msgDsn);


static inline message_t *UniqueReceiveP$SubReceive$receive(message_t *msg, void *payload, 
uint8_t len);
#line 111
static inline bool UniqueReceiveP$hasSeen(uint16_t msgSource, uint8_t msgDsn);
#line 137
static inline void UniqueReceiveP$insert(uint16_t msgSource, uint8_t msgDsn);
#line 158
static inline message_t *UniqueReceiveP$DuplicateReceive$default$receive(message_t *msg, void *payload, uint8_t len);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static error_t CC2420TinyosNetworkP$SubSend$send(
#line 56
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

CC2420TinyosNetworkP$SubSend$getPayload(
#line 111
message_t * msg, 


uint8_t len);
#line 89
static void CC2420TinyosNetworkP$Send$sendDone(
#line 85
message_t * msg, 



error_t error);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420TinyosNetworkP$NonTinyosReceive$receive(
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
uint8_t arg_0x40ca5bb8, 
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420TinyosNetworkP$CC2420PacketBody$getHeader(message_t * msg);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420TinyosNetworkP$Receive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline error_t CC2420TinyosNetworkP$Send$send(message_t *msg, uint8_t len);
#line 74
static inline void *CC2420TinyosNetworkP$Send$getPayload(message_t *msg, uint8_t len);




static inline void CC2420TinyosNetworkP$SubSend$sendDone(message_t *msg, error_t error);




static inline message_t *CC2420TinyosNetworkP$SubReceive$receive(message_t *msg, void *payload, uint8_t len);








static inline message_t *CC2420TinyosNetworkP$NonTinyosReceive$default$receive(uint8_t networkId, message_t *msg, void *payload, uint8_t len);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static error_t DefaultLplP$SubSend$send(
#line 56
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

DefaultLplP$SubSend$getPayload(
#line 111
message_t * msg, 


uint8_t len);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t DefaultLplP$send$postTask(void );
# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static void DefaultLplP$OffTimer$startOneShot(uint32_t dt);




static void DefaultLplP$OffTimer$stop(void );
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static void DefaultLplP$Send$sendDone(
#line 85
message_t * msg, 



error_t error);
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/State.nc"
static uint8_t DefaultLplP$SendState$getState(void );
#line 56
static void DefaultLplP$SendState$toIdle(void );
#line 45
static error_t DefaultLplP$SendState$requestState(uint8_t reqState);





static void DefaultLplP$SendState$forceState(uint8_t reqState);
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static error_t DefaultLplP$Resend$resend(bool useCca);
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t DefaultLplP$SubControl$start(void );
#line 109
static error_t DefaultLplP$SubControl$stop(void );
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



DefaultLplP$Receive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_metadata_t * DefaultLplP$CC2420PacketBody$getMetadata(message_t * msg);
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/State.nc"
static uint8_t DefaultLplP$RadioPowerState$getState(void );
#line 51
static void DefaultLplP$RadioPowerState$forceState(uint8_t reqState);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t DefaultLplP$startRadio$postTask(void );
# 81 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static bool DefaultLplP$SendDoneTimer$isRunning(void );
#line 62
static void DefaultLplP$SendDoneTimer$startOneShot(uint32_t dt);




static void DefaultLplP$SendDoneTimer$stop(void );
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc"
static error_t DefaultLplP$PacketAcknowledgements$requestAck(
#line 42
message_t * msg);
#line 60
static error_t DefaultLplP$PacketAcknowledgements$noAck(
#line 54
message_t * msg);
#line 74
static bool DefaultLplP$PacketAcknowledgements$wasAcked(
#line 69
message_t * msg);
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/State.nc"
static uint8_t DefaultLplP$SplitControlState$getState(void );
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t DefaultLplP$resend$postTask(void );
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t DefaultLplP$AMPacket$destination(
#line 63
message_t * amsg);
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/PowerCycle.nc"
static uint16_t DefaultLplP$PowerCycle$getSleepInterval(void );
#line 43
static void DefaultLplP$PowerCycle$setSleepInterval(uint16_t sleepIntervalMs);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t DefaultLplP$stopRadio$postTask(void );
# 108 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/lpl/DefaultLplP.nc"
enum DefaultLplP$__nesc_unnamed4391 {
#line 108
  DefaultLplP$send = 15U
};
#line 108
typedef int DefaultLplP$__nesc_sillytask_send[DefaultLplP$send];
enum DefaultLplP$__nesc_unnamed4392 {
#line 109
  DefaultLplP$resend = 16U
};
#line 109
typedef int DefaultLplP$__nesc_sillytask_resend[DefaultLplP$resend];
enum DefaultLplP$__nesc_unnamed4393 {
#line 110
  DefaultLplP$startRadio = 17U
};
#line 110
typedef int DefaultLplP$__nesc_sillytask_startRadio[DefaultLplP$startRadio];
enum DefaultLplP$__nesc_unnamed4394 {
#line 111
  DefaultLplP$stopRadio = 18U
};
#line 111
typedef int DefaultLplP$__nesc_sillytask_stopRadio[DefaultLplP$stopRadio];
#line 77
message_t *DefaultLplP$currentSendMsg;


uint8_t DefaultLplP$currentSendLen;


bool DefaultLplP$dutyCycling;




enum DefaultLplP$__nesc_unnamed4395 {
  DefaultLplP$S_OFF, 
  DefaultLplP$S_TURNING_ON, 
  DefaultLplP$S_ON, 
  DefaultLplP$S_TURNING_OFF
};




enum DefaultLplP$__nesc_unnamed4396 {
  DefaultLplP$S_IDLE, 
  DefaultLplP$S_SENDING
};

enum DefaultLplP$__nesc_unnamed4397 {
  DefaultLplP$ONE_MESSAGE = 0
};







static void DefaultLplP$initializeSend(void );
static inline void DefaultLplP$startOffTimer(void );
static inline uint16_t DefaultLplP$getActualDutyCycle(uint16_t dutyCycle);


static inline error_t DefaultLplP$Init$init(void );
#line 162
static inline void DefaultLplP$LowPowerListening$setLocalDutyCycle(uint16_t dutyCycle);
#line 190
static inline uint16_t DefaultLplP$LowPowerListening$getRxSleepInterval(message_t *msg);
#line 203
static inline void DefaultLplP$LowPowerListening$setRxDutyCycle(message_t *msg, 
uint16_t dutyCycle);
#line 225
static uint16_t DefaultLplP$LowPowerListening$dutyCycleToSleepInterval(
uint16_t dutyCycle);
#line 261
static inline error_t DefaultLplP$Send$send(message_t *msg, uint8_t len);
#line 305
static inline void *DefaultLplP$Send$getPayload(message_t *msg, uint8_t len);
#line 327
static inline void DefaultLplP$RadioBackoff$requestCca(message_t *msg);








static inline void DefaultLplP$PowerCycle$detected(void );
#line 348
static inline void DefaultLplP$SubControl$startDone(error_t error);










static inline void DefaultLplP$SubControl$stopDone(error_t error);
#line 375
static inline void DefaultLplP$SubSend$sendDone(message_t *msg, error_t error);
#line 412
static inline message_t *DefaultLplP$SubReceive$receive(message_t *msg, void *payload, 
uint8_t len);





static inline void DefaultLplP$OffTimer$fired(void );
#line 436
static inline void DefaultLplP$SendDoneTimer$fired(void );
#line 450
static inline void DefaultLplP$Resend$sendDone(message_t *p_msg, error_t error);





static inline void DefaultLplP$send$runTask(void );





static inline void DefaultLplP$resend$runTask(void );





static inline void DefaultLplP$startRadio$runTask(void );





static inline void DefaultLplP$stopRadio$runTask(void );








static void DefaultLplP$initializeSend(void );
#line 502
static inline void DefaultLplP$startOffTimer(void );







static inline uint16_t DefaultLplP$getActualDutyCycle(uint16_t dutyCycle);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void PowerCycleP$SplitControl$startDone(error_t error);
#line 117
static void PowerCycleP$SplitControl$stopDone(error_t error);
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/ReceiveIndicator.nc"
static bool PowerCycleP$EnergyIndicator$isReceiving(void );
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/State.nc"
static bool PowerCycleP$SendState$isIdle(void );
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t PowerCycleP$startRadio$postTask(void );
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t PowerCycleP$SubControl$start(void );
#line 109
static error_t PowerCycleP$SubControl$stop(void );
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/State.nc"
static uint8_t PowerCycleP$RadioPowerState$getState(void );
#line 51
static void PowerCycleP$RadioPowerState$forceState(uint8_t reqState);
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/ReceiveIndicator.nc"
static bool PowerCycleP$PacketIndicator$isReceiving(void );
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t PowerCycleP$getCca$postTask(void );
# 66 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/State.nc"
static bool PowerCycleP$SplitControlState$isState(uint8_t myState);
#line 51
static void PowerCycleP$SplitControlState$forceState(uint8_t reqState);
# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static void PowerCycleP$OnTimer$startOneShot(uint32_t dt);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/PowerCycle.nc"
static void PowerCycleP$PowerCycle$detected(void );
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t PowerCycleP$stopRadio$postTask(void );
# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/lpl/PowerCycleP.nc"
enum PowerCycleP$__nesc_unnamed4398 {
#line 95
  PowerCycleP$stopRadio = 19U
};
#line 95
typedef int PowerCycleP$__nesc_sillytask_stopRadio[PowerCycleP$stopRadio];
enum PowerCycleP$__nesc_unnamed4399 {
#line 96
  PowerCycleP$startRadio = 20U
};
#line 96
typedef int PowerCycleP$__nesc_sillytask_startRadio[PowerCycleP$startRadio];
enum PowerCycleP$__nesc_unnamed4400 {
#line 97
  PowerCycleP$getCca = 21U
};
#line 97
typedef int PowerCycleP$__nesc_sillytask_getCca[PowerCycleP$getCca];
#line 78
uint16_t PowerCycleP$sleepInterval = 0;


uint16_t PowerCycleP$ccaChecks;




enum PowerCycleP$__nesc_unnamed4401 {
  PowerCycleP$S_OFF, 
  PowerCycleP$S_TURNING_ON, 
  PowerCycleP$S_ON, 
  PowerCycleP$S_TURNING_OFF
};







static bool PowerCycleP$finishSplitControlRequests(void );
static inline bool PowerCycleP$isDutyCycling(void );







static inline void PowerCycleP$PowerCycle$setSleepInterval(uint16_t sleepIntervalMs);
#line 130
static inline uint16_t PowerCycleP$PowerCycle$getSleepInterval(void );





static inline error_t PowerCycleP$SplitControl$start(void );
#line 178
static inline void PowerCycleP$OnTimer$fired(void );
#line 197
static inline void PowerCycleP$SubControl$startDone(error_t error);
#line 209
static inline void PowerCycleP$SubControl$stopDone(error_t error);
#line 224
static inline void PowerCycleP$stopRadio$runTask(void );








static inline void PowerCycleP$startRadio$runTask(void );





static inline void PowerCycleP$getCca$runTask(void );
#line 277
static inline bool PowerCycleP$isDutyCycling(void );







static bool PowerCycleP$finishSplitControlRequests(void );
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/RootControl.nc"
static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$RootControl$isRoot(void );
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubSend$send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 112
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubSend$maxPayloadLength(void );
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/CollectionDebug.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(uint8_t type);
#line 62
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEventMsg(uint8_t type, uint16_t msg, am_addr_t origin, am_addr_t node);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/4bitle/LinkEstimator.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$LinkEstimator$txAck(am_addr_t neighbor);



static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$LinkEstimator$txNoAck(am_addr_t neighbor);
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Cache.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$SentCache$insert(/*CtpP.Forwarder*/CtpForwardingEngineP$0$SentCache$t item);







static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$SentCache$lookup(/*CtpP.Forwarder*/CtpForwardingEngineP$0$SentCache$t item);
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Intercept.nc"
static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$Intercept$forward(
# 136 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
collection_id_t arg_0x40dc5430, 
# 20 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Intercept.nc"
message_t * msg, 

void * payload, 








uint8_t len);
# 81 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$CongestionTimer$isRunning(void );
#line 62
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CongestionTimer$startOneShot(uint32_t dt);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*CtpP.Forwarder*/CtpForwardingEngineP$0$Snoop$receive(
# 135 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
collection_id_t arg_0x40dc6d68, 
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Random.nc"
static uint16_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$Random$rand16(void );
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$sendDone(
# 133 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
uint8_t arg_0x40dc7c58, 
# 85 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 81 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$RetxmitTimer$isRunning(void );
#line 62
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$RetxmitTimer$startOneShot(uint32_t dt);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask$postTask(void );
# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Queue.nc"
static 
#line 71
/*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$t  

/*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$head(void );
#line 90
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$enqueue(
#line 86
/*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$t  newVal);
#line 101
static 
#line 99
/*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$t  

/*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$element(uint8_t idx);
#line 65
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$maxSize(void );
#line 81
static 
#line 79
/*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$t  

/*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$dequeue(void );
#line 50
static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$empty(void );







static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$size(void );
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpInfo.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpInfo$recomputeRoutes(void );
#line 59
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpInfo$triggerRouteUpdate(void );
#line 52
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpInfo$getEtx(uint16_t *etx);
#line 66
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpInfo$triggerImmediateRouteUpdate(void );









static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpInfo$setNeighborCongested(am_addr_t n, bool congested);




static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpInfo$isNeighborCongested(am_addr_t n);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubPacket$payloadLength(
#line 63
message_t * msg);
#line 115
static 
#line 112
void * 


/*CtpP.Forwarder*/CtpForwardingEngineP$0$SubPacket$getPayload(
#line 110
message_t * msg, 




uint8_t len);
#line 95
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubPacket$maxPayloadLength(void );
#line 83
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubPacket$setPayloadLength(
#line 79
message_t * msg, 



uint8_t len);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*CtpP.Forwarder*/CtpForwardingEngineP$0$Receive$receive(
# 134 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
collection_id_t arg_0x40dc6680, 
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/UnicastNameFreeRouting.nc"
static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$UnicastNameFreeRouting$hasRoute(void );
#line 48
static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$UnicastNameFreeRouting$nextHop(void );
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$PacketAcknowledgements$requestAck(
#line 42
message_t * msg);
#line 74
static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$PacketAcknowledgements$wasAcked(
#line 69
message_t * msg);
# 97 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Pool.nc"
static 
#line 94
/*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$t * 


/*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$get(void );
#line 61
static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$empty(void );
#line 89
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$put(
#line 85
/*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$t * newVal);
# 77 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$AMPacket$source(
#line 73
message_t * amsg);
#line 57
static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$AMPacket$address(void );









static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$AMPacket$destination(
#line 63
message_t * amsg);
# 97 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Pool.nc"
static 
#line 94
/*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$t * 


/*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$get(void );
#line 80
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$maxSize(void );
#line 61
static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$empty(void );
#line 89
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$put(
#line 85
/*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$t * newVal);
#line 72
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$size(void );
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/CollectionId.nc"
static collection_id_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionId$fetch(
# 165 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
uint8_t arg_0x40dde780);
#line 259
enum /*CtpP.Forwarder*/CtpForwardingEngineP$0$__nesc_unnamed4402 {
#line 259
  CtpForwardingEngineP$0$sendTask = 22U
};
#line 259
typedef int /*CtpP.Forwarder*/CtpForwardingEngineP$0$__nesc_sillytask_sendTask[/*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask];
#line 175
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$startRetxmitTimer(uint16_t mask, uint16_t offset);
inline static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$startCongestionTimer(uint16_t mask, uint16_t offset);


bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$clientCongested = FALSE;


bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$parentCongested = FALSE;


uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$congestionThreshold;



bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$running = FALSE;



bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$radioOn = FALSE;




bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$ackPending = FALSE;



bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$sending = FALSE;




am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$lastParent;



uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$seqno;

enum /*CtpP.Forwarder*/CtpForwardingEngineP$0$__nesc_unnamed4403 {
  CtpForwardingEngineP$0$CLIENT_COUNT = 1U
};






fe_queue_entry_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$clientEntries[/*CtpP.Forwarder*/CtpForwardingEngineP$0$CLIENT_COUNT];
fe_queue_entry_t * /*CtpP.Forwarder*/CtpForwardingEngineP$0$clientPtrs[/*CtpP.Forwarder*/CtpForwardingEngineP$0$CLIENT_COUNT];







message_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsg;
message_t * /*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsgPtr;

static inline error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$Init$init(void );
#line 247
static inline error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$StdControl$start(void );
#line 264
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$RadioControl$startDone(error_t err);
#line 278
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$UnicastNameFreeRouting$routeFound(void );



static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$UnicastNameFreeRouting$noRoute(void );





static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$RadioControl$stopDone(error_t err);





static inline ctp_data_header_t */*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(message_t *m);
#line 307
static inline error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$send(uint8_t client, message_t *msg, uint8_t len);
#line 357
static inline uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$maxPayloadLength(uint8_t client);



static inline void */*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$getPayload(uint8_t client, message_t *msg, uint8_t len);
#line 382
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask$runTask(void );
#line 529
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendDoneBug(void );
#line 545
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubSend$sendDone(message_t *msg, error_t error);
#line 645
static inline message_t * /*CtpP.Forwarder*/CtpForwardingEngineP$0$forward(message_t * m);
#line 734
static inline message_t *
/*CtpP.Forwarder*/CtpForwardingEngineP$0$SubReceive$receive(message_t *msg, void *payload, uint8_t len);
#line 797
static inline message_t *
/*CtpP.Forwarder*/CtpForwardingEngineP$0$SubSnoop$receive(message_t *msg, void *payload, uint8_t len);
#line 814
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$RetxmitTimer$fired(void );




static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CongestionTimer$fired(void );






static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpCongestion$isCongested(void );
#line 848
static inline uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$payloadLength(message_t *msg);



static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$setPayloadLength(message_t *msg, uint8_t len);



static inline uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$maxPayloadLength(void );



static void */*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$getPayload(message_t *msg, uint8_t len);







static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getOrigin(message_t *msg);


static inline uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getSequenceNumber(message_t *msg);






static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getType(message_t *msg);
static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getOrigin(message_t *msg);
static inline uint16_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getEtx(message_t *msg);
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getSequenceNumber(message_t *msg);
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getThl(message_t *msg);

static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$setThl(message_t *msg, uint8_t thl);



static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$option(message_t *msg, ctp_options_t opt);



static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$setOption(message_t *msg, ctp_options_t opt);



static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$clearOption(message_t *msg, ctp_options_t opt);



static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$setEtx(message_t *msg, uint16_t e);





static inline bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$matchInstance(message_t *m1, message_t *m2);
#line 920
static inline 
#line 919
void 
/*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$default$sendDone(uint8_t client, message_t *msg, error_t error);



static inline 
#line 923
bool 
/*CtpP.Forwarder*/CtpForwardingEngineP$0$Intercept$default$forward(collection_id_t collectid, message_t *msg, void *payload, 
uint8_t len);



static inline message_t *
/*CtpP.Forwarder*/CtpForwardingEngineP$0$Receive$default$receive(collection_id_t collectid, message_t *msg, void *payload, 
uint8_t len);



static inline message_t *
/*CtpP.Forwarder*/CtpForwardingEngineP$0$Snoop$default$receive(collection_id_t collectid, message_t *msg, void *payload, 
uint8_t len);



static inline collection_id_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionId$default$fetch(uint8_t client);



static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$startRetxmitTimer(uint16_t mask, uint16_t offset);







inline static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$startCongestionTimer(uint16_t mask, uint16_t offset);








static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$LinkEstimator$evicted(am_addr_t neighbor);
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/system/PoolP.nc"
uint8_t /*CtpP.MessagePoolP.PoolP*/PoolP$0$free;
uint8_t /*CtpP.MessagePoolP.PoolP*/PoolP$0$index;
/*CtpP.MessagePoolP.PoolP*/PoolP$0$pool_t * /*CtpP.MessagePoolP.PoolP*/PoolP$0$queue[12];
/*CtpP.MessagePoolP.PoolP*/PoolP$0$pool_t /*CtpP.MessagePoolP.PoolP*/PoolP$0$pool[12];

static inline error_t /*CtpP.MessagePoolP.PoolP*/PoolP$0$Init$init(void );









static inline bool /*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$empty(void );



static inline uint8_t /*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$size(void );




static inline uint8_t /*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$maxSize(void );



static inline /*CtpP.MessagePoolP.PoolP*/PoolP$0$pool_t */*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$get(void );
#line 103
static error_t /*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$put(/*CtpP.MessagePoolP.PoolP*/PoolP$0$pool_t *newVal);
#line 60
uint8_t /*CtpP.QEntryPoolP.PoolP*/PoolP$1$free;
uint8_t /*CtpP.QEntryPoolP.PoolP*/PoolP$1$index;
/*CtpP.QEntryPoolP.PoolP*/PoolP$1$pool_t * /*CtpP.QEntryPoolP.PoolP*/PoolP$1$queue[12];
/*CtpP.QEntryPoolP.PoolP*/PoolP$1$pool_t /*CtpP.QEntryPoolP.PoolP*/PoolP$1$pool[12];

static inline error_t /*CtpP.QEntryPoolP.PoolP*/PoolP$1$Init$init(void );









static inline bool /*CtpP.QEntryPoolP.PoolP*/PoolP$1$Pool$empty(void );
#line 88
static inline /*CtpP.QEntryPoolP.PoolP*/PoolP$1$pool_t */*CtpP.QEntryPoolP.PoolP*/PoolP$1$Pool$get(void );
#line 103
static error_t /*CtpP.QEntryPoolP.PoolP*/PoolP$1$Pool$put(/*CtpP.QEntryPoolP.PoolP*/PoolP$1$pool_t *newVal);
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/system/QueueC.nc"
/*CtpP.SendQueueP*/QueueC$0$queue_t  /*CtpP.SendQueueP*/QueueC$0$queue[13];
uint8_t /*CtpP.SendQueueP*/QueueC$0$head = 0;
uint8_t /*CtpP.SendQueueP*/QueueC$0$tail = 0;
uint8_t /*CtpP.SendQueueP*/QueueC$0$size = 0;

static inline bool /*CtpP.SendQueueP*/QueueC$0$Queue$empty(void );



static inline uint8_t /*CtpP.SendQueueP*/QueueC$0$Queue$size(void );



static inline uint8_t /*CtpP.SendQueueP*/QueueC$0$Queue$maxSize(void );



static inline /*CtpP.SendQueueP*/QueueC$0$queue_t /*CtpP.SendQueueP*/QueueC$0$Queue$head(void );



static inline void /*CtpP.SendQueueP*/QueueC$0$printQueue(void );
#line 85
static /*CtpP.SendQueueP*/QueueC$0$queue_t /*CtpP.SendQueueP*/QueueC$0$Queue$dequeue(void );
#line 97
static error_t /*CtpP.SendQueueP*/QueueC$0$Queue$enqueue(/*CtpP.SendQueueP*/QueueC$0$queue_t newVal);
#line 112
static inline /*CtpP.SendQueueP*/QueueC$0$queue_t /*CtpP.SendQueueP*/QueueC$0$Queue$element(uint8_t idx);
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpPacket.nc"
static am_addr_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$CtpPacket$getOrigin(message_t *msg);
#line 54
static uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$CtpPacket$getThl(message_t *msg);








static uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$CtpPacket$getSequenceNumber(message_t *msg);


static uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$CtpPacket$getType(message_t *msg);
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/LruCtpMsgCacheP.nc"
#line 53
typedef struct /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$__nesc_unnamed4404 {
  am_addr_t origin;
  uint8_t seqno;
  collection_id_t type;
  uint8_t thl;
} /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$ctp_packet_sig_t;

/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$ctp_packet_sig_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$cache[4];
uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$first;
uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count;

static inline error_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$Init$init(void );
#line 84
static uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$lookup(message_t *m);
#line 100
static inline void /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$remove(uint8_t i);
#line 116
static inline void /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$Cache$insert(message_t *m);
#line 135
static inline bool /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$Cache$lookup(message_t *m);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/4bitle/LinkEstimator.nc"
static void LinkEstimatorP$LinkEstimator$evicted(am_addr_t neighbor);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t LinkEstimatorP$AMSend$send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 99
static void LinkEstimatorP$Send$sendDone(
#line 92
message_t * msg, 






error_t error);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Random.nc"
static uint16_t LinkEstimatorP$Random$rand16(void );
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t LinkEstimatorP$SubPacket$payloadLength(
#line 63
message_t * msg);
#line 115
static 
#line 112
void * 


LinkEstimatorP$SubPacket$getPayload(
#line 110
message_t * msg, 




uint8_t len);
#line 95
static uint8_t LinkEstimatorP$SubPacket$maxPayloadLength(void );
# 77 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t LinkEstimatorP$SubAMPacket$source(
#line 73
message_t * amsg);
#line 67
static am_addr_t LinkEstimatorP$SubAMPacket$destination(
#line 63
message_t * amsg);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



LinkEstimatorP$Receive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CompareBit.nc"
static bool LinkEstimatorP$CompareBit$shouldInsert(message_t * msg, void * payload, uint8_t len, bool white_bit);
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/LinkPacketMetadata.nc"
static bool LinkEstimatorP$LinkPacketMetadata$highChannelQuality(
#line 44
message_t * msg);
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
enum LinkEstimatorP$__nesc_unnamed4405 {


  LinkEstimatorP$EVICT_EETX_THRESHOLD = 55, 

  LinkEstimatorP$MAX_AGE = 6, 


  LinkEstimatorP$MAX_PKT_GAP = 10, 
  LinkEstimatorP$BEST_EETX = 0, 
  LinkEstimatorP$INVALID_RVAL = 0xff, 
  LinkEstimatorP$INVALID_NEIGHBOR_ADDR = 0xff, 


  LinkEstimatorP$VERY_LARGE_EETX_VALUE = 0xff, 


  LinkEstimatorP$ALPHA = 9, 


  LinkEstimatorP$DLQ_PKT_WINDOW = 5, 


  LinkEstimatorP$BLQ_PKT_WINDOW = 3, 



  LinkEstimatorP$LARGE_EETX_VALUE = 60
};


neighbor_table_entry_t LinkEstimatorP$NeighborTable[10];

uint8_t LinkEstimatorP$linkEstSeq = 0;



uint8_t LinkEstimatorP$prevSentIdx = 0;


static inline linkest_header_t *LinkEstimatorP$getHeader(message_t *m);




static inline linkest_footer_t *LinkEstimatorP$getFooter(message_t *m, uint8_t len);







static inline uint8_t LinkEstimatorP$addLinkEstHeaderAndFooter(message_t *msg, uint8_t len);
#line 165
static void LinkEstimatorP$initNeighborIdx(uint8_t i, am_addr_t ll_addr);
#line 179
static uint8_t LinkEstimatorP$findIdx(am_addr_t ll_addr);
#line 192
static uint8_t LinkEstimatorP$findEmptyNeighborIdx(void );
#line 205
static uint8_t LinkEstimatorP$findWorstNeighborIdx(uint8_t thresholdEETX);
#line 240
static inline uint8_t LinkEstimatorP$findRandomNeighborIdx(void );
#line 278
static void LinkEstimatorP$updateEETX(neighbor_table_entry_t *ne, uint16_t newEst);





static void LinkEstimatorP$updateDEETX(neighbor_table_entry_t *ne);
#line 304
static inline uint8_t LinkEstimatorP$computeEETX(uint8_t q1);
#line 319
static inline void LinkEstimatorP$updateNeighborTableEst(am_addr_t n);
#line 368
static void LinkEstimatorP$updateNeighborEntryIdx(uint8_t idx, uint8_t seq);
#line 401
static inline void LinkEstimatorP$print_neighbor_table(void );
#line 415
static void LinkEstimatorP$print_packet(message_t *msg, uint8_t len);










static inline void LinkEstimatorP$initNeighborTable(void );







static inline error_t LinkEstimatorP$StdControl$start(void );









static inline error_t LinkEstimatorP$Init$init(void );






static uint16_t LinkEstimatorP$LinkEstimator$getLinkQuality(am_addr_t neighbor);
#line 467
static inline error_t LinkEstimatorP$LinkEstimator$insertNeighbor(am_addr_t neighbor);
#line 495
static error_t LinkEstimatorP$LinkEstimator$pinNeighbor(am_addr_t neighbor);









static inline error_t LinkEstimatorP$LinkEstimator$unpinNeighbor(am_addr_t neighbor);
#line 517
static error_t LinkEstimatorP$LinkEstimator$txAck(am_addr_t neighbor);
#line 534
static inline error_t LinkEstimatorP$LinkEstimator$txNoAck(am_addr_t neighbor);
#line 550
static inline error_t LinkEstimatorP$LinkEstimator$clearDLQ(am_addr_t neighbor);
#line 565
static inline error_t LinkEstimatorP$Send$send(am_addr_t addr, message_t *msg, uint8_t len);










static inline void LinkEstimatorP$AMSend$sendDone(message_t *msg, error_t error);








static inline uint8_t LinkEstimatorP$Send$maxPayloadLength(void );



static inline void *LinkEstimatorP$Send$getPayload(message_t *msg, uint8_t len);






static inline void LinkEstimatorP$processReceivedMessage(message_t * msg, void * payload, uint8_t len);
#line 667
static inline message_t *LinkEstimatorP$SubReceive$receive(message_t *msg, 
void *payload, 
uint8_t len);
#line 683
static uint8_t LinkEstimatorP$Packet$payloadLength(message_t *msg);
#line 702
static inline uint8_t LinkEstimatorP$Packet$maxPayloadLength(void );




static void *LinkEstimatorP$Packet$getPayload(message_t *msg, uint8_t len);
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*CtpP.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(
#line 92
message_t * msg, 






error_t error);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*CtpP.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$send(
#line 56
message_t * msg, 







uint8_t len);
#line 101
static uint8_t /*CtpP.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$maxPayloadLength(void );
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
static void /*CtpP.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 151
static void /*CtpP.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(
#line 147
message_t * amsg, 



am_id_t t);
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline error_t /*CtpP.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*CtpP.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(message_t *m, error_t err);



static inline uint8_t /*CtpP.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$maxPayloadLength(void );
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40f631b8, 
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 112
static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$maxPayloadLength(
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40f631b8);
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40f657a8, 
# 85 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(
#line 63
message_t * msg);
#line 83
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(
#line 79
message_t * msg, 



uint8_t len);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$postTask(void );
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(
#line 63
message_t * amsg);
#line 136
static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(
#line 132
message_t * amsg);
# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4406 {
#line 118
  AMQueueImplP$0$CancelTask = 23U
};
#line 118
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_sillytask_CancelTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask];
#line 161
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4407 {
#line 161
  AMQueueImplP$0$errorTask = 24U
};
#line 161
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_sillytask_errorTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask];
#line 49
#line 47
typedef struct /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4408 {
  message_t * msg;
} /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue_entry_t;

uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current = 2;
/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue_entry_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[2];
uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[2 / 8 + 1];

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void );

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$nextPacket(void );
#line 82
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(uint8_t clientId, message_t *msg, 
uint8_t len);
#line 118
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask(void );
#line 155
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(uint8_t last, message_t * msg, error_t err);





static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void );




static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void );
#line 181
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(am_id_t id, message_t *msg, error_t err);
#line 199
static inline uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$maxPayloadLength(uint8_t id);







static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(uint8_t id, message_t *msg, error_t err);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*CtpP.Router*/CtpRoutingEngineP$0$updateRouteTask$postTask(void );
# 68 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/CollectionDebug.nc"
static error_t /*CtpP.Router*/CtpRoutingEngineP$0$CollectionDebug$logEventRoute(uint8_t type, am_addr_t parent, uint8_t hopcount, uint16_t metric);
#line 56
static error_t /*CtpP.Router*/CtpRoutingEngineP$0$CollectionDebug$logEventDbg(uint8_t type, uint16_t arg1, uint16_t arg2, uint16_t arg3);
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/4bitle/LinkEstimator.nc"
static error_t /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$pinNeighbor(am_addr_t neighbor);
#line 41
static error_t /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$insertNeighbor(am_addr_t neighbor);
#line 58
static error_t /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$clearDLQ(am_addr_t neighbor);
#line 47
static error_t /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$unpinNeighbor(am_addr_t neighbor);
#line 38
static uint16_t /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$getLinkQuality(uint16_t neighbor);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Random.nc"
static uint16_t /*CtpP.Router*/CtpRoutingEngineP$0$Random$rand16(void );
#line 35
static uint32_t /*CtpP.Router*/CtpRoutingEngineP$0$Random$rand32(void );
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*CtpP.Router*/CtpRoutingEngineP$0$sendBeaconTask$postTask(void );
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*CtpP.Router*/CtpRoutingEngineP$0$BeaconSend$send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

/*CtpP.Router*/CtpRoutingEngineP$0$BeaconSend$getPayload(
#line 121
message_t * msg, 


uint8_t len);
#line 112
static uint8_t /*CtpP.Router*/CtpRoutingEngineP$0$BeaconSend$maxPayloadLength(void );
# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*CtpP.Router*/CtpRoutingEngineP$0$BeaconTimer$startOneShot(uint32_t dt);




static void /*CtpP.Router*/CtpRoutingEngineP$0$BeaconTimer$stop(void );
#line 53
static void /*CtpP.Router*/CtpRoutingEngineP$0$RouteTimer$startPeriodic(uint32_t dt);
# 7 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpCongestion.nc"
static bool /*CtpP.Router*/CtpRoutingEngineP$0$CtpCongestion$isCongested(void );
# 77 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t /*CtpP.Router*/CtpRoutingEngineP$0$AMPacket$source(
#line 73
message_t * amsg);
#line 57
static am_addr_t /*CtpP.Router*/CtpRoutingEngineP$0$AMPacket$address(void );
#line 136
static am_id_t /*CtpP.Router*/CtpRoutingEngineP$0$AMPacket$type(
#line 132
message_t * amsg);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/UnicastNameFreeRouting.nc"
static void /*CtpP.Router*/CtpRoutingEngineP$0$Routing$routeFound(void );
static void /*CtpP.Router*/CtpRoutingEngineP$0$Routing$noRoute(void );
# 267 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
enum /*CtpP.Router*/CtpRoutingEngineP$0$__nesc_unnamed4409 {
#line 267
  CtpRoutingEngineP$0$updateRouteTask = 25U
};
#line 267
typedef int /*CtpP.Router*/CtpRoutingEngineP$0$__nesc_sillytask_updateRouteTask[/*CtpP.Router*/CtpRoutingEngineP$0$updateRouteTask];
#line 385
enum /*CtpP.Router*/CtpRoutingEngineP$0$__nesc_unnamed4410 {
#line 385
  CtpRoutingEngineP$0$sendBeaconTask = 26U
};
#line 385
typedef int /*CtpP.Router*/CtpRoutingEngineP$0$__nesc_sillytask_sendBeaconTask[/*CtpP.Router*/CtpRoutingEngineP$0$sendBeaconTask];
#line 125
bool /*CtpP.Router*/CtpRoutingEngineP$0$ECNOff = TRUE;



bool /*CtpP.Router*/CtpRoutingEngineP$0$radioOn = FALSE;


bool /*CtpP.Router*/CtpRoutingEngineP$0$running = FALSE;

bool /*CtpP.Router*/CtpRoutingEngineP$0$sending = FALSE;


bool /*CtpP.Router*/CtpRoutingEngineP$0$justEvicted = FALSE;

route_info_t /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo;
bool /*CtpP.Router*/CtpRoutingEngineP$0$state_is_root;
am_addr_t /*CtpP.Router*/CtpRoutingEngineP$0$my_ll_addr;

message_t /*CtpP.Router*/CtpRoutingEngineP$0$beaconMsgBuffer;
ctp_routing_header_t */*CtpP.Router*/CtpRoutingEngineP$0$beaconMsg;


routing_table_entry /*CtpP.Router*/CtpRoutingEngineP$0$routingTable[10];
uint8_t /*CtpP.Router*/CtpRoutingEngineP$0$routingTableActive;


uint32_t /*CtpP.Router*/CtpRoutingEngineP$0$parentChanges;


uint32_t /*CtpP.Router*/CtpRoutingEngineP$0$routeUpdateTimerCount;


enum /*CtpP.Router*/CtpRoutingEngineP$0$__nesc_unnamed4411 {
  CtpRoutingEngineP$0$DEATH_TEST_INTERVAL = 512000L * 4 / (BEACON_INTERVAL / 1024)
};


static inline void /*CtpP.Router*/CtpRoutingEngineP$0$routingTableInit(void );
static uint8_t /*CtpP.Router*/CtpRoutingEngineP$0$routingTableFind(am_addr_t arg_0x40fb4620);
static inline error_t /*CtpP.Router*/CtpRoutingEngineP$0$routingTableUpdateEntry(am_addr_t arg_0x40fb4bc8, am_addr_t arg_0x40fb4d80, uint16_t arg_0x40fb3010);
static inline error_t /*CtpP.Router*/CtpRoutingEngineP$0$routingTableEvict(am_addr_t neighbor);

uint32_t /*CtpP.Router*/CtpRoutingEngineP$0$currentInterval = 128;
uint32_t /*CtpP.Router*/CtpRoutingEngineP$0$t;
bool /*CtpP.Router*/CtpRoutingEngineP$0$tHasPassed;

static void /*CtpP.Router*/CtpRoutingEngineP$0$chooseAdvertiseTime(void );








static inline void /*CtpP.Router*/CtpRoutingEngineP$0$resetInterval(void );




static inline void /*CtpP.Router*/CtpRoutingEngineP$0$decayInterval(void );







static inline void /*CtpP.Router*/CtpRoutingEngineP$0$remainingInterval(void );






static inline error_t /*CtpP.Router*/CtpRoutingEngineP$0$Init$init(void );
#line 217
static inline error_t /*CtpP.Router*/CtpRoutingEngineP$0$StdControl$start(void );
#line 234
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$RadioControl$startDone(error_t error);










static inline void /*CtpP.Router*/CtpRoutingEngineP$0$RadioControl$stopDone(error_t error);






static inline bool /*CtpP.Router*/CtpRoutingEngineP$0$passLinkEtxThreshold(uint16_t etx);






static inline uint16_t /*CtpP.Router*/CtpRoutingEngineP$0$evaluateEtx(uint16_t quality);







static inline void /*CtpP.Router*/CtpRoutingEngineP$0$updateRouteTask$runTask(void );
#line 385
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$sendBeaconTask$runTask(void );
#line 427
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$BeaconSend$sendDone(message_t *msg, error_t error);







static inline void /*CtpP.Router*/CtpRoutingEngineP$0$RouteTimer$fired(void );





static inline void /*CtpP.Router*/CtpRoutingEngineP$0$BeaconTimer$fired(void );
#line 456
static inline ctp_routing_header_t */*CtpP.Router*/CtpRoutingEngineP$0$getHeader(message_t * m);






static inline message_t */*CtpP.Router*/CtpRoutingEngineP$0$BeaconReceive$receive(message_t *msg, void *payload, uint8_t len);
#line 513
static void /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$evicted(am_addr_t neighbor);
#line 525
static inline am_addr_t /*CtpP.Router*/CtpRoutingEngineP$0$Routing$nextHop(void );


static inline bool /*CtpP.Router*/CtpRoutingEngineP$0$Routing$hasRoute(void );
#line 542
static error_t /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$getEtx(uint16_t *etx);
#line 556
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$recomputeRoutes(void );



static inline void /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$triggerRouteUpdate(void );



static inline void /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$triggerImmediateRouteUpdate(void );



static void /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$setNeighborCongested(am_addr_t n, bool congested);
#line 582
static inline bool /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$isNeighborCongested(am_addr_t n);
#line 598
static inline error_t /*CtpP.Router*/CtpRoutingEngineP$0$RootControl$setRoot(void );
#line 623
static inline bool /*CtpP.Router*/CtpRoutingEngineP$0$RootControl$isRoot(void );
#line 649
static inline bool /*CtpP.Router*/CtpRoutingEngineP$0$CompareBit$shouldInsert(message_t *msg, void *payload, uint8_t len, bool white_bit);
#line 700
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$routingTableInit(void );





static uint8_t /*CtpP.Router*/CtpRoutingEngineP$0$routingTableFind(am_addr_t neighbor);
#line 718
static inline error_t /*CtpP.Router*/CtpRoutingEngineP$0$routingTableUpdateEntry(am_addr_t from, am_addr_t parent, uint16_t etx);
#line 761
static inline error_t /*CtpP.Router*/CtpRoutingEngineP$0$routingTableEvict(am_addr_t neighbor);
#line 794
static bool /*CtpP.Router*/CtpRoutingEngineP$0$CtpRoutingPacket$getOption(message_t *msg, ctp_options_t opt);
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*CtpP.SendControl.AMQueueEntryP*/AMQueueEntryP$1$AMSend$sendDone(
#line 92
message_t * msg, 






error_t error);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*CtpP.SendControl.AMQueueEntryP*/AMQueueEntryP$1$Send$send(
#line 56
message_t * msg, 







uint8_t len);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
static void /*CtpP.SendControl.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 151
static void /*CtpP.SendControl.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setType(
#line 147
message_t * amsg, 



am_id_t t);
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline error_t /*CtpP.SendControl.AMQueueEntryP*/AMQueueEntryP$1$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*CtpP.SendControl.AMQueueEntryP*/AMQueueEntryP$1$Send$sendDone(message_t *m, error_t err);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/CollectionIdP.nc"
static inline collection_id_t /*MultihopOscilloscopeAppC.CollectionSenderC.CollectionSenderP.CollectionIdP*/CollectionIdP$0$CollectionId$fetch(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$send(
#line 56
message_t * msg, 







uint8_t len);
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$sendDone(
# 36 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x41057758, 
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Receive$receive(
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x41092148, 
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$getHeader(message_t * msg);







static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len);
#line 81
static inline void */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$getPayload(am_id_t id, message_t *m, uint8_t len);



static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$sendDone(message_t *msg, error_t result);







static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Receive$default$receive(uint8_t id, message_t *msg, void *payload, uint8_t len);



static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubReceive$receive(message_t *msg, void *payload, uint8_t len);








static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$payloadLength(message_t *msg);




static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$setPayloadLength(message_t *msg, uint8_t len);



static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$maxPayloadLength(void );



static void */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$getPayload(message_t *msg, uint8_t len);
#line 132
static am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$destination(message_t *amsg);









static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$setDestination(message_t *amsg, am_addr_t addr);
#line 156
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$type(message_t *amsg);




static void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$setType(message_t *amsg, am_id_t type);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void SerialP$SplitControl$startDone(error_t error);
#line 117
static void SerialP$SplitControl$stopDone(error_t error);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SerialP$stopDoneTask$postTask(void );
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t SerialP$SerialControl$start(void );









static error_t SerialP$SerialControl$stop(void );
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SerialP$RunTx$postTask(void );
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialFlush.nc"
static void SerialP$SerialFlush$flush(void );
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SerialP$startDoneTask$postTask(void );
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
static error_t SerialP$SerialFrameComm$putDelimiter(void );
#line 68
static void SerialP$SerialFrameComm$resetReceive(void );
#line 54
static error_t SerialP$SerialFrameComm$putData(uint8_t data);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SerialP$defaultSerialFlushTask$postTask(void );
# 70 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
static uint8_t SerialP$SendBytePacket$nextByte(void );









static void SerialP$SendBytePacket$sendCompleted(error_t error);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
static error_t SerialP$ReceiveBytePacket$startPacket(void );






static void SerialP$ReceiveBytePacket$byteReceived(uint8_t data);










static void SerialP$ReceiveBytePacket$endPacket(error_t result);
# 189 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialP.nc"
enum SerialP$__nesc_unnamed4412 {
#line 189
  SerialP$RunTx = 27U
};
#line 189
typedef int SerialP$__nesc_sillytask_RunTx[SerialP$RunTx];
#line 320
enum SerialP$__nesc_unnamed4413 {
#line 320
  SerialP$startDoneTask = 28U
};
#line 320
typedef int SerialP$__nesc_sillytask_startDoneTask[SerialP$startDoneTask];





enum SerialP$__nesc_unnamed4414 {
#line 326
  SerialP$stopDoneTask = 29U
};
#line 326
typedef int SerialP$__nesc_sillytask_stopDoneTask[SerialP$stopDoneTask];








enum SerialP$__nesc_unnamed4415 {
#line 335
  SerialP$defaultSerialFlushTask = 30U
};
#line 335
typedef int SerialP$__nesc_sillytask_defaultSerialFlushTask[SerialP$defaultSerialFlushTask];
#line 79
enum SerialP$__nesc_unnamed4416 {
  SerialP$RX_DATA_BUFFER_SIZE = 2, 
  SerialP$TX_DATA_BUFFER_SIZE = 4, 
  SerialP$SERIAL_MTU = 255, 
  SerialP$SERIAL_VERSION = 1, 
  SerialP$ACK_QUEUE_SIZE = 5
};

enum SerialP$__nesc_unnamed4417 {
  SerialP$RXSTATE_NOSYNC, 
  SerialP$RXSTATE_PROTO, 
  SerialP$RXSTATE_TOKEN, 
  SerialP$RXSTATE_INFO, 
  SerialP$RXSTATE_INACTIVE
};

enum SerialP$__nesc_unnamed4418 {
  SerialP$TXSTATE_IDLE, 
  SerialP$TXSTATE_PROTO, 
  SerialP$TXSTATE_SEQNO, 
  SerialP$TXSTATE_INFO, 
  SerialP$TXSTATE_FCS1, 
  SerialP$TXSTATE_FCS2, 
  SerialP$TXSTATE_ENDFLAG, 
  SerialP$TXSTATE_ENDWAIT, 
  SerialP$TXSTATE_FINISH, 
  SerialP$TXSTATE_ERROR, 
  SerialP$TXSTATE_INACTIVE
};





#line 109
typedef enum SerialP$__nesc_unnamed4419 {
  SerialP$BUFFER_AVAILABLE, 
  SerialP$BUFFER_FILLING, 
  SerialP$BUFFER_COMPLETE
} SerialP$tx_data_buffer_states_t;

enum SerialP$__nesc_unnamed4420 {
  SerialP$TX_ACK_INDEX = 0, 
  SerialP$TX_DATA_INDEX = 1, 
  SerialP$TX_BUFFER_COUNT = 2
};






#line 122
typedef struct SerialP$__nesc_unnamed4421 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP$RX_DATA_BUFFER_SIZE + 1];
} SerialP$rx_buf_t;




#line 128
typedef struct SerialP$__nesc_unnamed4422 {
  uint8_t state;
  uint8_t buf;
} SerialP$tx_buf_t;





#line 133
typedef struct SerialP$__nesc_unnamed4423 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP$ACK_QUEUE_SIZE + 1];
} SerialP$ack_queue_t;



SerialP$rx_buf_t SerialP$rxBuf;
SerialP$tx_buf_t SerialP$txBuf[SerialP$TX_BUFFER_COUNT];



uint8_t SerialP$rxState;
uint8_t SerialP$rxByteCnt;
uint8_t SerialP$rxProto;
uint8_t SerialP$rxSeqno;
uint16_t SerialP$rxCRC;



uint8_t SerialP$txState;
uint8_t SerialP$txByteCnt;
uint8_t SerialP$txProto;
uint8_t SerialP$txSeqno;
uint16_t SerialP$txCRC;
uint8_t SerialP$txPending;
uint8_t SerialP$txIndex;


SerialP$ack_queue_t SerialP$ackQ;

bool SerialP$offPending = FALSE;



static __inline void SerialP$txInit(void );
static __inline void SerialP$rxInit(void );
static __inline void SerialP$ackInit(void );

static __inline bool SerialP$ack_queue_is_full(void );
static __inline bool SerialP$ack_queue_is_empty(void );
static __inline void SerialP$ack_queue_push(uint8_t token);
static __inline uint8_t SerialP$ack_queue_top(void );
static inline uint8_t SerialP$ack_queue_pop(void );




static __inline void SerialP$rx_buffer_push(uint8_t data);
static __inline uint8_t SerialP$rx_buffer_top(void );
static __inline uint8_t SerialP$rx_buffer_pop(void );
static __inline uint16_t SerialP$rx_current_crc(void );

static void SerialP$rx_state_machine(bool isDelimeter, uint8_t data);
static void SerialP$MaybeScheduleTx(void );




static __inline void SerialP$txInit(void );
#line 205
static __inline void SerialP$rxInit(void );








static __inline void SerialP$ackInit(void );



static inline error_t SerialP$Init$init(void );
#line 232
static __inline bool SerialP$ack_queue_is_full(void );









static __inline bool SerialP$ack_queue_is_empty(void );





static __inline void SerialP$ack_queue_push(uint8_t token);









static __inline uint8_t SerialP$ack_queue_top(void );









static inline uint8_t SerialP$ack_queue_pop(void );
#line 295
static __inline void SerialP$rx_buffer_push(uint8_t data);



static __inline uint8_t SerialP$rx_buffer_top(void );



static __inline uint8_t SerialP$rx_buffer_pop(void );





static __inline uint16_t SerialP$rx_current_crc(void );










static inline void SerialP$startDoneTask$runTask(void );





static inline void SerialP$stopDoneTask$runTask(void );



static inline void SerialP$SerialFlush$flushDone(void );




static inline void SerialP$defaultSerialFlushTask$runTask(void );


static inline void SerialP$SerialFlush$default$flush(void );



static inline error_t SerialP$SplitControl$start(void );




static void SerialP$testOff(void );
#line 384
static inline void SerialP$SerialFrameComm$delimiterReceived(void );


static inline void SerialP$SerialFrameComm$dataReceived(uint8_t data);



static inline bool SerialP$valid_rx_proto(uint8_t proto);










static void SerialP$rx_state_machine(bool isDelimeter, uint8_t data);
#line 502
static void SerialP$MaybeScheduleTx(void );










static inline error_t SerialP$SendBytePacket$completeSend(void );








static inline error_t SerialP$SendBytePacket$startSend(uint8_t b);
#line 539
static inline void SerialP$RunTx$runTask(void );
#line 642
static inline void SerialP$SerialFrameComm$putDone(void );
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask$postTask(void );
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$sendDone(
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x41118560, 
# 85 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone$postTask(void );
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Receive$receive(
# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x4111be58, 
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$upperLength(
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x41117088, 
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$offset(
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x41117088);
# 23 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$dataLinkLength(
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x41117088, 
# 23 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$completeSend(void );
#line 51
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$startSend(uint8_t first_byte);
# 147 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_unnamed4424 {
#line 147
  SerialDispatcherP$0$signalSendDone = 31U
};
#line 147
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_sillytask_signalSendDone[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone];
#line 264
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_unnamed4425 {
#line 264
  SerialDispatcherP$0$receiveTask = 32U
};
#line 264
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_sillytask_receiveTask[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask];
#line 55
#line 51
typedef enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_unnamed4426 {
  SerialDispatcherP$0$SEND_STATE_IDLE = 0, 
  SerialDispatcherP$0$SEND_STATE_BEGIN = 1, 
  SerialDispatcherP$0$SEND_STATE_DATA = 2
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$send_state_t;

enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_unnamed4427 {
  SerialDispatcherP$0$RECV_STATE_IDLE = 0, 
  SerialDispatcherP$0$RECV_STATE_BEGIN = 1, 
  SerialDispatcherP$0$RECV_STATE_DATA = 2
};






#line 63
typedef struct /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_unnamed4428 {
  uint8_t which : 1;
  uint8_t bufZeroLocked : 1;
  uint8_t bufOneLocked : 1;
  uint8_t state : 2;
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recv_state_t;



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recv_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState = { 0, 0, 0, /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$RECV_STATE_IDLE };
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvType = TOS_SERIAL_UNKNOWN_ID;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvIndex = 0;


message_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$messages[2];
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$messagePtrs[2] = { &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$messages[0], &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$messages[1] };




uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveBuffer = (uint8_t * )&/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$messages[0];

uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendBuffer = (void *)0;
/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$send_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SEND_STATE_IDLE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendLen = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendIndex = 0;
error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendError = SUCCESS;
bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendCancelled = FALSE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendId = 0;


uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskPending = FALSE;
uart_id_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskType = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskWhich;
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskBuf = (void *)0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskSize = 0;

static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$send(uint8_t id, message_t *msg, uint8_t len);
#line 147
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone$runTask(void );
#line 167
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$nextByte(void );
#line 183
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$sendCompleted(error_t error);




static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$isCurrentBufferLocked(void );



static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$lockCurrentBuffer(void );








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$unlockBuffer(uint8_t which);








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveBufferSwap(void );




static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$startPacket(void );
#line 233
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$byteReceived(uint8_t b);
#line 264
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask$runTask(void );
#line 285
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$endPacket(error_t result);
#line 344
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$offset(uart_id_t id);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen);




static inline message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Receive$default$receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len);


static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$default$sendDone(uart_id_t idxxx, message_t *msg, error_t error);
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/UartStream.nc"
static error_t HdlcTranslateC$UartStream$send(
#line 44
uint8_t * buf, 



uint16_t len);
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
static void HdlcTranslateC$SerialFrameComm$dataReceived(uint8_t data);





static void HdlcTranslateC$SerialFrameComm$putDone(void );
#line 74
static void HdlcTranslateC$SerialFrameComm$delimiterReceived(void );
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
#line 44
typedef struct HdlcTranslateC$__nesc_unnamed4429 {
  uint8_t sendEscape : 1;
  uint8_t receiveEscape : 1;
} HdlcTranslateC$HdlcState;


HdlcTranslateC$HdlcState HdlcTranslateC$state = { 0, 0 };
uint8_t HdlcTranslateC$txTemp;
uint8_t HdlcTranslateC$m_data;


static inline void HdlcTranslateC$SerialFrameComm$resetReceive(void );





static inline void HdlcTranslateC$UartStream$receivedByte(uint8_t data);
#line 86
static error_t HdlcTranslateC$SerialFrameComm$putDelimiter(void );





static error_t HdlcTranslateC$SerialFrameComm$putData(uint8_t data);
#line 104
static inline void HdlcTranslateC$UartStream$sendDone(uint8_t *buf, uint16_t len, 
error_t error);










static inline void HdlcTranslateC$UartStream$receiveDone(uint8_t *buf, uint16_t len, error_t error);
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartTxControl$start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartTxControl$stop(void );
# 79 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/UartStream.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$receivedByte(uint8_t byte);
#line 99
static void /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$enableRxIntr(void );
#line 40
static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$enableTxIntr(void );
static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$disableTxIntr(void );

static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$disableRxIntr(void );


static void /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$tx(uint8_t data);
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartRxControl$start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartRxControl$stop(void );
# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_len;
#line 62
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_len;
uint8_t * /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_buf;
#line 63
uint8_t * /*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_buf;
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_pos;
#line 64
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_pos;
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP$0$m_byte_time;
uint8_t /*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_intr;
uint8_t /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_intr;

static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$Init$init(void );







static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$StdControl$start(void );
#line 93
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$StdControl$stop(void );
#line 133
static inline void /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$rxDone(uint8_t data);
#line 155
static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$send(uint8_t *buf, uint16_t len);
#line 173
static inline void /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$txDone(void );
#line 216
static inline void /*Atm128Uart0C.UartP*/Atm128UartP$0$Counter$overflow(void );
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static void HplAtm128UartP$HplUart0$rxDone(uint8_t data);
#line 47
static void HplAtm128UartP$HplUart0$txDone(void );

static void HplAtm128UartP$HplUart1$rxDone(uint8_t data);
#line 47
static void HplAtm128UartP$HplUart1$txDone(void );
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint16_t HplAtm128UartP$Atm128Calibrate$baudrateRegister(uint32_t baudrate);
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static void HplAtm128UartP$McuPowerState$update(void );
# 87 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP$Uart0Init$init(void );
#line 107
static inline error_t HplAtm128UartP$Uart0TxControl$start(void );





static inline error_t HplAtm128UartP$Uart0TxControl$stop(void );





static inline error_t HplAtm128UartP$Uart0RxControl$start(void );





static inline error_t HplAtm128UartP$Uart0RxControl$stop(void );





static inline error_t HplAtm128UartP$HplUart0$enableTxIntr(void );





static inline error_t HplAtm128UartP$HplUart0$disableTxIntr(void );




static inline error_t HplAtm128UartP$HplUart0$enableRxIntr(void );




static inline error_t HplAtm128UartP$HplUart0$disableRxIntr(void );
#line 164
static void HplAtm128UartP$HplUart0$tx(uint8_t data);






void __vector_18(void ) __attribute((signal))   ;





void __vector_20(void ) __attribute((interrupt))   ;



static inline error_t HplAtm128UartP$Uart1Init$init(void );
#line 265
void __vector_30(void ) __attribute((signal))   ;




void __vector_32(void ) __attribute((interrupt))   ;





static inline void HplAtm128UartP$HplUart1$default$txDone(void );
static inline void HplAtm128UartP$HplUart1$default$rxDone(uint8_t data);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer3P$CompareA$fired(void );
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm128Timer3P$Capture$captured(HplAtm128Timer3P$Capture$size_type t);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer3P$CompareB$fired(void );
#line 49
static void HplAtm128Timer3P$CompareC$fired(void );
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm128Timer3P$Timer$overflow(void );
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline uint16_t HplAtm128Timer3P$Timer$get(void );


static inline void HplAtm128Timer3P$Timer$set(uint16_t t);








static inline void HplAtm128Timer3P$Timer$setScale(uint8_t s);









static inline Atm128TimerCtrlCapture_t HplAtm128Timer3P$TimerCtrl$getCtrlCapture(void );









static inline uint16_t HplAtm128Timer3P$TimerCtrlCapture2int(Atm128TimerCtrlCapture_t x);






static inline void HplAtm128Timer3P$TimerCtrl$setCtrlCapture(Atm128_TCCR3B_t x);
#line 127
static inline void HplAtm128Timer3P$Timer$start(void );
#line 188
static inline void HplAtm128Timer3P$CompareA$default$fired(void );
void __vector_26(void ) __attribute((interrupt))   ;


static inline void HplAtm128Timer3P$CompareB$default$fired(void );
void __vector_27(void ) __attribute((interrupt))   ;


static inline void HplAtm128Timer3P$CompareC$default$fired(void );
void __vector_28(void ) __attribute((interrupt))   ;


static inline void HplAtm128Timer3P$Capture$default$captured(uint16_t time);
void __vector_25(void ) __attribute((interrupt))   ;



void __vector_29(void ) __attribute((interrupt))   ;
# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitThreeP.InitThree*/Atm128TimerInitC$1$Timer$setScale(uint8_t scale);
#line 58
static void /*InitThreeP.InitThree*/Atm128TimerInitC$1$Timer$set(/*InitThreeP.InitThree*/Atm128TimerInitC$1$Timer$timer_size t);










static void /*InitThreeP.InitThree*/Atm128TimerInitC$1$Timer$start(void );
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitThreeP.InitThree*/Atm128TimerInitC$1$Init$init(void );








static inline void /*InitThreeP.InitThree*/Atm128TimerInitC$1$Timer$overflow(void );
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*CounterThree16C.NCounter*/Atm128CounterC$1$Counter$overflow(void );
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline void /*CounterThree16C.NCounter*/Atm128CounterC$1$Timer$overflow(void );
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*CounterMicro32C.Transform32*/TransformCounterC$1$Counter$overflow(void );
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
/*CounterMicro32C.Transform32*/TransformCounterC$1$upper_count_type /*CounterMicro32C.Transform32*/TransformCounterC$1$m_upper;

enum /*CounterMicro32C.Transform32*/TransformCounterC$1$__nesc_unnamed4430 {

  TransformCounterC$1$LOW_SHIFT_RIGHT = 0, 
  TransformCounterC$1$HIGH_SHIFT_LEFT = 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC$1$from_size_type ) - /*CounterMicro32C.Transform32*/TransformCounterC$1$LOW_SHIFT_RIGHT, 
  TransformCounterC$1$NUM_UPPER_BITS = 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC$1$to_size_type ) - 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC$1$from_size_type ) + 0, 



  TransformCounterC$1$OVERFLOW_MASK = /*CounterMicro32C.Transform32*/TransformCounterC$1$NUM_UPPER_BITS ? ((/*CounterMicro32C.Transform32*/TransformCounterC$1$upper_count_type )2 << (/*CounterMicro32C.Transform32*/TransformCounterC$1$NUM_UPPER_BITS - 1)) - 1 : 0
};
#line 122
static inline void /*CounterMicro32C.Transform32*/TransformCounterC$1$CounterFrom$overflow(void );
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP$Info$offset(void );


static inline uint8_t SerialPacketInfoActiveMessageP$Info$dataLinkLength(message_t *msg, uint8_t upperLen);


static inline uint8_t SerialPacketInfoActiveMessageP$Info$upperLength(message_t *msg, uint8_t dataLinkLen);
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$sendDone(
#line 92
message_t * msg, 






error_t error);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$Send$send(
#line 56
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

/*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$Send$getPayload(
#line 111
message_t * msg, 


uint8_t len);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
static void /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$AMPacket$setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 151
static void /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$AMPacket$setType(
#line 147
message_t * amsg, 



am_id_t t);
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline error_t /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$Send$sendDone(message_t *m, error_t err);







static inline void */*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$getPayload(message_t *m, uint8_t len);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$AMSend$send(
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40f631b8, 
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$AMSend$getPayload(
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40f631b8, 
# 121 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 


uint8_t len);
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$sendDone(
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40f657a8, 
# 85 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Packet$payloadLength(
#line 63
message_t * msg);
#line 83
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Packet$setPayloadLength(
#line 79
message_t * msg, 



uint8_t len);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$errorTask$postTask(void );
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$AMPacket$destination(
#line 63
message_t * amsg);
#line 136
static am_id_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$AMPacket$type(
#line 132
message_t * amsg);
# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
enum /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$__nesc_unnamed4431 {
#line 118
  AMQueueImplP$1$CancelTask = 33U
};
#line 118
typedef int /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$__nesc_sillytask_CancelTask[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$CancelTask];
#line 161
enum /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$__nesc_unnamed4432 {
#line 161
  AMQueueImplP$1$errorTask = 34U
};
#line 161
typedef int /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$__nesc_sillytask_errorTask[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$errorTask];
#line 49
#line 47
typedef struct /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$__nesc_unnamed4433 {
  message_t * msg;
} /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$queue_entry_t;

uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current = 2;
/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$queue_entry_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[2];
uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$cancelMask[2 / 8 + 1];

static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$tryToSend(void );

static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$nextPacket(void );
#line 82
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$send(uint8_t clientId, message_t *msg, 
uint8_t len);
#line 118
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$CancelTask$runTask(void );
#line 155
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$sendDone(uint8_t last, message_t * msg, error_t err);





static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$errorTask$runTask(void );




static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$tryToSend(void );
#line 181
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$AMSend$sendDone(am_id_t id, message_t *msg, error_t err);
#line 203
static inline void */*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$getPayload(uint8_t id, message_t *m, uint8_t len);



static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$default$sendDone(uint8_t id, message_t *msg, error_t err);
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/system/PoolP.nc"
uint8_t /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$free;
uint8_t /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$index;
/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$pool_t * /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$queue[10];
/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$pool_t /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$pool[10];

static inline error_t /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$Init$init(void );
#line 88
static inline /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$pool_t */*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$Pool$get(void );
#line 103
static error_t /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$Pool$put(/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$pool_t *newVal);
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/system/QueueC.nc"
/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$queue_t  /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$queue[10];
uint8_t /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$head = 0;
uint8_t /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$tail = 0;
uint8_t /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$size = 0;

static inline bool /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$empty(void );



static inline uint8_t /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$size(void );



static inline uint8_t /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$maxSize(void );



static inline /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$queue_t /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$head(void );



static inline void /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$printQueue(void );
#line 85
static inline /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$queue_t /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$dequeue(void );
#line 97
static inline error_t /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$enqueue(/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$queue_t newVal);
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/system/PoolP.nc"
uint8_t /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$free;
uint8_t /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$index;
/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$pool_t * /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$queue[20];
/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$pool_t /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$pool[20];

static inline error_t /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$Init$init(void );









static inline bool /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$Pool$empty(void );
#line 88
static /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$pool_t */*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$Pool$get(void );
#line 103
static error_t /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$Pool$put(/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$pool_t *newVal);
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/system/QueueC.nc"
/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$queue_t  /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$queue[20];
uint8_t /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$head = 0;
uint8_t /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$tail = 0;
uint8_t /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$size = 0;

static inline bool /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$empty(void );



static inline uint8_t /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$size(void );



static inline uint8_t /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$maxSize(void );



static inline /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$queue_t /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$head(void );



static inline void /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$printQueue(void );
#line 85
static /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$queue_t /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$dequeue(void );
#line 97
static error_t /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$enqueue(/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$queue_t newVal);
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$AMSend$sendDone(
#line 92
message_t * msg, 






error_t error);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$Send$send(
#line 56
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

/*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$Send$getPayload(
#line 111
message_t * msg, 


uint8_t len);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
static void /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$AMPacket$setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 151
static void /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$AMPacket$setType(
#line 147
message_t * amsg, 



am_id_t t);
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline error_t /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$Send$sendDone(message_t *m, error_t err);







static inline void */*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$AMSend$getPayload(message_t *m, uint8_t len);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t UARTDebugSenderP$UARTSend$send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

UARTDebugSenderP$UARTSend$getPayload(
#line 121
message_t * msg, 


uint8_t len);
# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Queue.nc"
static 
#line 71
UARTDebugSenderP$SendQueue$t  

UARTDebugSenderP$SendQueue$head(void );
#line 90
static error_t UARTDebugSenderP$SendQueue$enqueue(
#line 86
UARTDebugSenderP$SendQueue$t  newVal);
#line 81
static 
#line 79
UARTDebugSenderP$SendQueue$t  

UARTDebugSenderP$SendQueue$dequeue(void );
#line 50
static bool UARTDebugSenderP$SendQueue$empty(void );
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t UARTDebugSenderP$sendTask$postTask(void );
# 97 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Pool.nc"
static 
#line 94
UARTDebugSenderP$MessagePool$t * 


UARTDebugSenderP$MessagePool$get(void );
#line 61
static bool UARTDebugSenderP$MessagePool$empty(void );
#line 89
static error_t UARTDebugSenderP$MessagePool$put(
#line 85
UARTDebugSenderP$MessagePool$t * newVal);
# 36 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/UARTDebugSenderP.nc"
enum UARTDebugSenderP$__nesc_unnamed4434 {
#line 36
  UARTDebugSenderP$sendTask = 35U
};
#line 36
typedef int UARTDebugSenderP$__nesc_sillytask_sendTask[UARTDebugSenderP$sendTask];
#line 15
bool UARTDebugSenderP$sending;
uint8_t UARTDebugSenderP$len;
uint16_t UARTDebugSenderP$statLogReceived = 0;
uint16_t UARTDebugSenderP$statEnqueueFail = 0;
uint16_t UARTDebugSenderP$statSendFail = 0;
uint16_t UARTDebugSenderP$statSendDoneFail = 0;
uint16_t UARTDebugSenderP$statSendDoneOk = 0;
uint16_t UARTDebugSenderP$statSendDoneBug = 0;


static inline void UARTDebugSenderP$Boot$booted(void );










static inline void UARTDebugSenderP$sendTask$runTask(void );
#line 58
static void UARTDebugSenderP$UARTSend$sendDone(message_t *msg, error_t error);
#line 76
static error_t UARTDebugSenderP$CollectionDebug$logEvent(uint8_t type);
#line 103
static error_t  UARTDebugSenderP$CollectionDebug$logEventMsg(uint8_t type, uint16_t msg_id, am_addr_t origin, am_addr_t node);
#line 132
static error_t  UARTDebugSenderP$CollectionDebug$logEventRoute(uint8_t type, am_addr_t parent, uint8_t hopcount, uint16_t metric);
#line 188
static inline  error_t UARTDebugSenderP$CollectionDebug$logEventDbg(uint8_t type, uint16_t arg1, uint16_t arg2, uint16_t arg3);
# 86 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/atm128hardware.h"
static __inline  void __nesc_disable_interrupt()
#line 86
{
   __asm volatile ("cli");}

#line 103
#line 102
__inline   __nesc_atomic_t 
__nesc_atomic_start(void )
{
  __nesc_atomic_t result = * (volatile uint8_t *)(0x3F + 0x20);

#line 106
  __nesc_disable_interrupt();
   __asm volatile ("" :  :  : "memory");
  return result;
}



#line 112
__inline   void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)
{
   __asm volatile ("" :  :  : "memory");
  * (volatile uint8_t *)(0x3F + 0x20) = original_SREG;
}

# 113 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP$Scheduler$init(void )
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP$m_next, SchedulerBasicP$NO_TASK, sizeof SchedulerBasicP$m_next);
    SchedulerBasicP$m_head = SchedulerBasicP$NO_TASK;
    SchedulerBasicP$m_tail = SchedulerBasicP$NO_TASK;
  }
}

# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static void RealMainP$Scheduler$init(void ){
#line 46
  SchedulerBasicP$Scheduler$init();
#line 46
}
#line 46
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/mica/PlatformP.nc"
static inline void PlatformP$power_init(void )
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

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline uint8_t HplAtm128AdcP$Adcsra2int(Atm128Adcsra_t x)
#line 51
{
#line 51
  union __nesc_unnamed4435 {
#line 51
    Atm128Adcsra_t f;
#line 51
    uint8_t t;
  } 
#line 51
  c = { .f = x };

#line 51
  return c.t;
}




static inline void HplAtm128AdcP$HplAtm128Adc$setAdcsra(Atm128Adcsra_t x)
#line 57
{
  * (volatile uint8_t *)(0x06 + 0x20) = HplAtm128AdcP$Adcsra2int(x);
}

# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP$HplAtm128Adc$setAdcsra(Atm128Adcsra_t adcsra){
#line 60
  HplAtm128AdcP$HplAtm128Adc$setAdcsra(adcsra);
#line 60
}
#line 60
# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline error_t Atm128AdcP$Init$init(void )
#line 84
{
  /* atomic removed: atomic calls only */
  {
    Atm128Adcsra_t adcsr;

    adcsr.aden = ATM128_ADC_ENABLE_OFF;
    adcsr.adsc = ATM128_ADC_START_CONVERSION_OFF;
    adcsr.adfr = ATM128_ADC_FREE_RUNNING_OFF;
    adcsr.adif = ATM128_ADC_INT_FLAG_OFF;
    adcsr.adie = ATM128_ADC_INT_ENABLE_OFF;
    adcsr.adps = ATM128_ADC_PRESCALE_2;
    Atm128AdcP$HplAtm128Adc$setAdcsra(adcsr);
  }
  return SUCCESS;
}

# 81 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline uint16_t HplAtm128Timer1P$TimerCtrlCapture2int(Atm128TimerCtrlCapture_t x)
#line 81
{
#line 81
  union __nesc_unnamed4436 {
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





static inline void HplAtm128Timer1P$TimerCtrl$setCtrlCapture(Atm128_TCCR1B_t x)
#line 88
{
  * (volatile uint8_t *)(0x2E + 0x20) = HplAtm128Timer1P$TimerCtrlCapture2int(x);
}

#line 71
static inline Atm128TimerCtrlCapture_t HplAtm128Timer1P$TimerCtrl$getCtrlCapture(void )
#line 71
{
  return * (Atm128TimerCtrlCapture_t * )& * (volatile uint8_t *)(0x2E + 0x20);
}

#line 61
static inline void HplAtm128Timer1P$Timer$setScale(uint8_t s)
#line 61
{
  Atm128TimerCtrlCapture_t x = HplAtm128Timer1P$TimerCtrl$getCtrlCapture();

#line 63
  x.bits.cs = s;
  HplAtm128Timer1P$TimerCtrl$setCtrlCapture(x);
}

# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$setScale(uint8_t scale){
#line 95
  HplAtm128Timer1P$Timer$setScale(scale);
#line 95
}
#line 95
# 131 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P$Timer$start(void )
#line 131
{
#line 131
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 2;
}

# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$start(void ){
#line 69
  HplAtm128Timer1P$Timer$start();
#line 69
}
#line 69
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P$Timer$set(uint16_t t)
#line 52
{
#line 52
  * (volatile uint16_t *)(0x2C + 0x20) = t;
}

# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$set(/*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$timer_size t){
#line 58
  HplAtm128Timer1P$Timer$set(t);
#line 58
}
#line 58
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitOneP.InitOne*/Atm128TimerInitC$0$Init$init(void )
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

# 79 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline uint16_t HplAtm128Timer3P$TimerCtrlCapture2int(Atm128TimerCtrlCapture_t x)
#line 79
{
#line 79
  union __nesc_unnamed4437 {
#line 79
    Atm128TimerCtrlCapture_t f;
#line 79
    uint16_t t;
  } 
#line 79
  c = { .f = x };

#line 79
  return c.t;
}





static inline void HplAtm128Timer3P$TimerCtrl$setCtrlCapture(Atm128_TCCR3B_t x)
#line 86
{
  * (volatile uint8_t *)0x8A = HplAtm128Timer3P$TimerCtrlCapture2int(x);
}

#line 69
static inline Atm128TimerCtrlCapture_t HplAtm128Timer3P$TimerCtrl$getCtrlCapture(void )
#line 69
{
  return * (Atm128TimerCtrlCapture_t *)& * (volatile uint8_t *)0x8A;
}

#line 59
static inline void HplAtm128Timer3P$Timer$setScale(uint8_t s)
#line 59
{
  Atm128TimerCtrlCapture_t x = HplAtm128Timer3P$TimerCtrl$getCtrlCapture();

#line 61
  x.bits.cs = s;
  HplAtm128Timer3P$TimerCtrl$setCtrlCapture(x);
}

# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitThreeP.InitThree*/Atm128TimerInitC$1$Timer$setScale(uint8_t scale){
#line 95
  HplAtm128Timer3P$Timer$setScale(scale);
#line 95
}
#line 95
# 127 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P$Timer$start(void )
#line 127
{
#line 127
  * (volatile uint8_t *)0x7D |= 1 << 2;
}

# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitThreeP.InitThree*/Atm128TimerInitC$1$Timer$start(void ){
#line 69
  HplAtm128Timer3P$Timer$start();
#line 69
}
#line 69
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P$Timer$set(uint16_t t)
#line 50
{
#line 50
  * (volatile uint16_t *)0x88 = t;
}

# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitThreeP.InitThree*/Atm128TimerInitC$1$Timer$set(/*InitThreeP.InitThree*/Atm128TimerInitC$1$Timer$timer_size t){
#line 58
  HplAtm128Timer3P$Timer$set(t);
#line 58
}
#line 58
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitThreeP.InitThree*/Atm128TimerInitC$1$Init$init(void )
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    /*InitThreeP.InitThree*/Atm128TimerInitC$1$Timer$set(0);
    /*InitThreeP.InitThree*/Atm128TimerInitC$1$Timer$start();
    /*InitThreeP.InitThree*/Atm128TimerInitC$1$Timer$setScale(2);
  }
  return SUCCESS;
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t MotePlatformP$SubInit$init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = /*InitThreeP.InitThree*/Atm128TimerInitC$1$Init$init();
#line 51
  __nesc_result = ecombine(__nesc_result, /*InitOneP.InitOne*/Atm128TimerInitC$0$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, Atm128AdcP$Init$init());
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )59U &= ~(1 << 4);
}

# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP$SerialIdPin$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr();
#line 30
}
#line 30
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )58U &= ~(1 << 4);
}

# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP$SerialIdPin$makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput();
#line 33
}
#line 33
# 26 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP$PlatformInit$init(void )
#line 26
{

  * (volatile uint8_t *)(0x15 + 0x20) = 0;
  * (volatile uint8_t *)(0x14 + 0x20) = 0xff;


  MotePlatformP$SerialIdPin$makeInput();
  MotePlatformP$SerialIdPin$clr();

  return MotePlatformP$SubInit$init();
}

# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )59U |= 1 << 0;
}

# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led2$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set();
#line 29
}
#line 29
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )59U |= 1 << 1;
}

# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led1$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set();
#line 29
}
#line 29
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )59U |= 1 << 2;
}

# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led0$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set();
#line 29
}
#line 29
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )58U |= 1 << 0;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led2$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput();
#line 35
}
#line 35
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )58U |= 1 << 1;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led1$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput();
#line 35
}
#line 35
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )58U |= 1 << 2;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led0$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput();
#line 35
}
#line 35
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/LedsP.nc"
static inline error_t LedsP$Init$init(void )
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
inline static error_t PlatformP$MoteInit$init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = LedsP$Init$init();
#line 51
  __nesc_result = ecombine(__nesc_result, MotePlatformP$PlatformInit$init());
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/mica/MeasureClockC.nc"
static inline error_t MeasureClockC$Init$init(void )
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
inline static error_t PlatformP$MeasureClock$init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = MeasureClockC$Init$init();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP$Init$init(void )
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
inline static error_t RealMainP$PlatformInit$init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = PlatformP$Init$init();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static bool RealMainP$Scheduler$runNextTask(void ){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = SchedulerBasicP$Scheduler$runNextTask();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t UARTDebugSenderP$sendTask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(UARTDebugSenderP$sendTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/system/QueueC.nc"
static inline bool /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$empty(void )
#line 53
{
  return /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$size == 0;
}

# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Queue.nc"
inline static bool UARTDebugSenderP$SendQueue$empty(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$empty();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Pool.nc"
inline static error_t UARTDebugSenderP$MessagePool$put(UARTDebugSenderP$MessagePool$t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$Pool$put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 81 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Queue.nc"
inline static UARTDebugSenderP$SendQueue$t  UARTDebugSenderP$SendQueue$dequeue(void ){
#line 81
  nx_struct message_t *__nesc_result;
#line 81

#line 81
  __nesc_result = /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$dequeue();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$Send$send(message_t * msg, uint8_t len){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$send(1U, msg, len);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 151 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static void /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$AMPacket$setType(message_t * amsg, am_id_t t){
#line 151
  /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$setType(amsg, t);
#line 151
}
#line 151
# 269 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_uint16(void * target, uint16_t value)
#line 269
{
  uint8_t *base = target;

#line 271
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$getHeader(message_t * msg)
#line 49
{
  return (serial_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(serial_header_t ));
}

#line 142
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$setDestination(message_t *amsg, am_addr_t addr)
#line 142
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$getHeader(amsg);

#line 144
  __nesc_hton_uint16(header->dest.data, addr);
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static void /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$AMPacket$setDestination(message_t * amsg, am_addr_t addr){
#line 92
  /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$setDestination(amsg, addr);
#line 92
}
#line 92
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline error_t /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 47
{
  /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$AMPacket$setDestination(msg, dest);
  /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$AMPacket$setType(msg, 114);
  return /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$Send$send(msg, len);
}

# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t UARTDebugSenderP$UARTSend$send(am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$AMSend$send(addr, msg, len);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 65 "/opt/CVSTinyOS/tinyos-2.x/tos/system/QueueC.nc"
static inline /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$queue_t /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$head(void )
#line 65
{
  return /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$queue[/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$head];
}

# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Queue.nc"
inline static UARTDebugSenderP$SendQueue$t  UARTDebugSenderP$SendQueue$head(void ){
#line 73
  nx_struct message_t *__nesc_result;
#line 73

#line 73
  __nesc_result = /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$head();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 36 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/UARTDebugSenderP.nc"
static inline void UARTDebugSenderP$sendTask$runTask(void )
#line 36
{
  if (UARTDebugSenderP$sending) {
      return;
    }
  else {
#line 39
    if (UARTDebugSenderP$SendQueue$empty()) {
        return;
      }
    else 
#line 41
      {
        message_t *smsg = UARTDebugSenderP$SendQueue$head();
        error_t eval = UARTDebugSenderP$UARTSend$send(AM_BROADCAST_ADDR, smsg, UARTDebugSenderP$len);

#line 44
        if (eval == SUCCESS) {
            UARTDebugSenderP$sending = TRUE;
            return;
          }
        else 
#line 47
          {

            UARTDebugSenderP$statSendFail++;
            UARTDebugSenderP$SendQueue$dequeue();
            UARTDebugSenderP$MessagePool$put(smsg);
            if (!UARTDebugSenderP$SendQueue$empty()) {
              UARTDebugSenderP$sendTask$postTask();
              }
          }
      }
    }
}

# 240 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 240
{
  uint8_t *base = target;

#line 242
  base[0] = value;
  return value;
}

# 111 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$setPayloadLength(message_t *msg, uint8_t len)
#line 111
{
  __nesc_hton_uint8(/*SerialActiveMessageC.AM*/SerialActiveMessageP$0$getHeader(msg)->length.data, len);
}

# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
inline static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Packet$setPayloadLength(message_t * msg, uint8_t len){
#line 83
  /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$setPayloadLength(msg, len);
#line 83
}
#line 83
# 522 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline error_t SerialP$SendBytePacket$startSend(uint8_t b)
#line 522
{
  bool not_busy = FALSE;

#line 524
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 524
    {
      if (SerialP$txBuf[SerialP$TX_DATA_INDEX].state == SerialP$BUFFER_AVAILABLE) {
          SerialP$txBuf[SerialP$TX_DATA_INDEX].state = SerialP$BUFFER_FILLING;
          SerialP$txBuf[SerialP$TX_DATA_INDEX].buf = b;
          not_busy = TRUE;
        }
    }
#line 530
    __nesc_atomic_end(__nesc_atomic); }
  if (not_busy) {
      SerialP$MaybeScheduleTx();
      return SUCCESS;
    }
  return EBUSY;
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$startSend(uint8_t first_byte){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = SerialP$SendBytePacket$startSend(first_byte);
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP$Info$dataLinkLength(message_t *msg, uint8_t upperLen)
#line 43
{
  return upperLen + sizeof(serial_header_t );
}

# 347 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen)
#line 348
{
  return 0;
}

# 23 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$dataLinkLength(uart_id_t arg_0x41117088, message_t *msg, uint8_t upperLen){
#line 23
  unsigned char __nesc_result;
#line 23

#line 23
  switch (arg_0x41117088) {
#line 23
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 23
      __nesc_result = SerialPacketInfoActiveMessageP$Info$dataLinkLength(msg, upperLen);
#line 23
      break;
#line 23
    default:
#line 23
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$dataLinkLength(arg_0x41117088, msg, upperLen);
#line 23
      break;
#line 23
    }
#line 23

#line 23
  return __nesc_result;
#line 23
}
#line 23
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP$Info$offset(void )
#line 40
{
  return (uint8_t )(sizeof(message_header_t ) - sizeof(serial_header_t ));
}

# 344 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$offset(uart_id_t id)
#line 344
{
  return 0;
}

# 15 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$offset(uart_id_t arg_0x41117088){
#line 15
  unsigned char __nesc_result;
#line 15

#line 15
  switch (arg_0x41117088) {
#line 15
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 15
      __nesc_result = SerialPacketInfoActiveMessageP$Info$offset();
#line 15
      break;
#line 15
    default:
#line 15
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$offset(arg_0x41117088);
#line 15
      break;
#line 15
    }
#line 15

#line 15
  return __nesc_result;
#line 15
}
#line 15
# 100 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$send(uint8_t id, message_t *msg, uint8_t len)
#line 100
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendState != /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SEND_STATE_IDLE) {
      return EBUSY;
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 105
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$offset(id);
      if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendIndex > sizeof(message_header_t )) {
          {
            unsigned char __nesc_temp = 
#line 108
            ESIZE;

            {
#line 108
              __nesc_atomic_end(__nesc_atomic); 
#line 108
              return __nesc_temp;
            }
          }
        }
#line 111
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendError = SUCCESS;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendBuffer = (uint8_t *)msg;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SEND_STATE_DATA;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendId = id;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendCancelled = FALSE;






      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendLen = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$dataLinkLength(id, msg, len) + /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendIndex;
    }
#line 123
    __nesc_atomic_end(__nesc_atomic); }
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$startSend(id) == SUCCESS) {
      return SUCCESS;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SEND_STATE_IDLE;
      return FAIL;
    }
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$send(message_t * msg, uint8_t len){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$send(TOS_SERIAL_ACTIVE_MESSAGE_ID, msg, len);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP$RunTx$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(SerialP$RunTx);
#line 56

#line 56
  return __nesc_result;
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

# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/system/QueueC.nc"
static inline void /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$printQueue(void )
#line 69
{
}

# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$sendDone(message_t * msg, error_t error){
#line 99
  MultihopOscilloscopeC$SerialSend$sendDone(msg, error);
#line 99
}
#line 99
# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline void /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$Send$sendDone(message_t *m, error_t err)
#line 57
{
  /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$sendDone(m, err);
}

# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$AMSend$sendDone(message_t * msg, error_t error){
#line 99
  UARTDebugSenderP$UARTSend$sendDone(msg, error);
#line 99
}
#line 99
# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline void /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$Send$sendDone(message_t *m, error_t err)
#line 57
{
  /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$AMSend$sendDone(m, err);
}

# 207 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$default$sendDone(uint8_t id, message_t *msg, error_t err)
#line 207
{
}

# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$sendDone(uint8_t arg_0x40f657a8, message_t * msg, error_t error){
#line 89
  switch (arg_0x40f657a8) {
#line 89
    case 0U:
#line 89
      /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$Send$sendDone(msg, error);
#line 89
      break;
#line 89
    case 1U:
#line 89
      /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$Send$sendDone(msg, error);
#line 89
      break;
#line 89
    default:
#line 89
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$default$sendDone(arg_0x40f657a8, msg, error);
#line 89
      break;
#line 89
    }
#line 89
}
#line 89
# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$CancelTask$runTask(void )
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
      if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$cancelMask[i]) {
          for (mask = 1, j = 0; j < 8; j++) {
              if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$cancelMask[i] & mask) {
                  last = i * 8 + j;
                  msg = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[last].msg;
                  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[last].msg = (void *)0;
                  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$cancelMask[i] &= ~mask;
                  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$sendDone(last, msg, ECANCEL);
                }
              mask <<= 1;
            }
        }
    }
}

# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/system/QueueC.nc"
static inline bool /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$empty(void )
#line 53
{
  return /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$size == 0;
}

# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Queue.nc"
inline static bool MultihopOscilloscopeC$UARTQueue$empty(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$empty();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/system/QueueC.nc"
static inline void /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$printQueue(void )
#line 69
{
}

#line 65
static inline /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$queue_t /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$head(void )
#line 65
{
  return /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$queue[/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$head];
}

#line 85
static inline /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$queue_t /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$dequeue(void )
#line 85
{
  /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$queue_t t = /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$head();

#line 87
  ;
  if (!/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$empty()) {
      /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$head++;
      if (/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$head == 10) {
#line 90
        /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$head = 0;
        }
#line 91
      /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$size--;
      /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$printQueue();
    }
  return t;
}

# 81 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Queue.nc"
inline static MultihopOscilloscopeC$UARTQueue$t  MultihopOscilloscopeC$UARTQueue$dequeue(void ){
#line 81
  nx_struct message_t *__nesc_result;
#line 81

#line 81
  __nesc_result = /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$dequeue();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )59U &= ~(1 << 2);
}

# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led0$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$clr();
#line 30
}
#line 30
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/system/LedsP.nc"
static inline void LedsP$Leds$led0On(void )
#line 63
{
  LedsP$Led0$clr();
  ;
#line 65
  ;
}

# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void MultihopOscilloscopeC$Leds$led0On(void ){
#line 45
  LedsP$Leds$led0On();
#line 45
}
#line 45
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )59U &= ~(1 << 1);
}

# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led1$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$clr();
#line 30
}
#line 30
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/system/LedsP.nc"
static inline void LedsP$Leds$led1On(void )
#line 78
{
  LedsP$Led1$clr();
  ;
#line 80
  ;
}

# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void MultihopOscilloscopeC$Leds$led1On(void ){
#line 61
  LedsP$Leds$led1On();
#line 61
}
#line 61
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )59U &= ~(1 << 0);
}

# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led2$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$clr();
#line 30
}
#line 30
# 93 "/opt/CVSTinyOS/tinyos-2.x/tos/system/LedsP.nc"
static inline void LedsP$Leds$led2On(void )
#line 93
{
  LedsP$Led2$clr();
  ;
#line 95
  ;
}

# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void MultihopOscilloscopeC$Leds$led2On(void ){
#line 78
  LedsP$Leds$led2On();
#line 78
}
#line 78
# 153 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(uint8_t num)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num].isrunning = FALSE;
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void MultihopOscilloscopeC$Timer$stop(void ){
#line 67
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(0U);
#line 67
}
#line 67
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Pool.nc"
inline static error_t MultihopOscilloscopeC$UARTMessagePool$put(MultihopOscilloscopeC$UARTMessagePool$t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$Pool$put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t MultihopOscilloscopeC$uartSendTask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(MultihopOscilloscopeC$uartSendTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 161 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$errorTask$runTask(void )
#line 161
{
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$sendDone(/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current, /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current].msg, FAIL);
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$errorTask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$errorTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$AMSend$send(am_id_t arg_0x40f631b8, am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$send(arg_0x40f631b8, addr, msg, len);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 235 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 235
{
  const uint8_t *base = source;

#line 237
  return base[0];
}

# 106 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$payloadLength(message_t *msg)
#line 106
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$getHeader(msg);

#line 108
  return __nesc_ntoh_uint8(header->length.data);
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
inline static uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Packet$payloadLength(message_t * msg){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$payloadLength(msg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$AMPacket$destination(message_t * amsg){
#line 67
  unsigned short __nesc_result;
#line 67

#line 67
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$destination(amsg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
#line 136
inline static am_id_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$AMPacket$type(message_t * amsg){
#line 136
  unsigned char __nesc_result;
#line 136

#line 136
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$type(amsg);
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$nextPacket(void )
#line 57
{
  uint8_t i;

#line 59
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current = (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current + 1) % 2;
  for (i = 0; i < 2; i++) {
      if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current].msg == (void *)0 || 
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$cancelMask[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current / 8] & (1 << /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current % 8)) 
        {
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current = (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current + 1) % 2;
        }
      else {
          break;
        }
    }
  if (i >= 2) {
#line 70
    /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current = 2;
    }
}

#line 166
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$tryToSend(void )
#line 166
{
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$nextPacket();
  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current < 2) {
      error_t nextErr;
      message_t *nextMsg = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current].msg;
      am_id_t nextId = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$AMPacket$type(nextMsg);
      am_addr_t nextDest = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$AMPacket$destination(nextMsg);
      uint8_t len = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Packet$payloadLength(nextMsg);

#line 174
      nextErr = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$AMSend$send(nextId, nextDest, nextMsg, len);
      if (nextErr != SUCCESS) {
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$errorTask$postTask();
        }
    }
}

static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$AMSend$sendDone(am_id_t id, message_t *msg, error_t err)
#line 181
{





  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current >= 2) {
      return;
    }
  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current].msg == msg) {
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$sendDone(/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current, msg, err);
    }
  else {
      ;
    }
}

# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$sendDone(am_id_t arg_0x41057758, message_t * msg, error_t error){
#line 99
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$AMSend$sendDone(arg_0x41057758, msg, error);
#line 99
}
#line 99
# 85 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$sendDone(message_t *msg, error_t result)
#line 85
{
  /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$sendDone(/*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$type(msg), msg, result);
}

# 362 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$default$sendDone(uart_id_t idxxx, message_t *msg, error_t error)
#line 362
{
  return;
}

# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$sendDone(uart_id_t arg_0x41118560, message_t * msg, error_t error){
#line 89
  switch (arg_0x41118560) {
#line 89
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 89
      /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$sendDone(msg, error);
#line 89
      break;
#line 89
    default:
#line 89
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$default$sendDone(arg_0x41118560, msg, error);
#line 89
      break;
#line 89
    }
#line 89
}
#line 89
# 147 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone$runTask(void )
#line 147
{
  error_t error;

  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SEND_STATE_IDLE;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 151
    error = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendError;
#line 151
    __nesc_atomic_end(__nesc_atomic); }

  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendCancelled) {
#line 153
    error = ECANCEL;
    }
#line 154
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$sendDone(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendId, (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendBuffer, error);
}

#line 201
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$unlockBuffer(uint8_t which)
#line 201
{
  if (which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.bufOneLocked = 0;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.bufZeroLocked = 0;
    }
}

# 93 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Receive$default$receive(uint8_t id, message_t *msg, void *payload, uint8_t len)
#line 93
{
  return msg;
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Receive$receive(am_id_t arg_0x41092148, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
    __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Receive$default$receive(arg_0x41092148, msg, payload, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 97 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubReceive$receive(message_t *msg, void *payload, uint8_t len)
#line 97
{
  return /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Receive$receive(/*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$type(msg), msg, msg->data, len);
}

# 357 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Receive$default$receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len)
#line 359
{
  return msg;
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Receive$receive(uart_id_t arg_0x4111be58, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  switch (arg_0x4111be58) {
#line 67
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 67
      __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubReceive$receive(msg, payload, len);
#line 67
      break;
#line 67
    default:
#line 67
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Receive$default$receive(arg_0x4111be58, msg, payload, len);
#line 67
      break;
#line 67
    }
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP$Info$upperLength(message_t *msg, uint8_t dataLinkLen)
#line 46
{
  return dataLinkLen - sizeof(serial_header_t );
}

# 351 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen)
#line 352
{
  return 0;
}

# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$upperLength(uart_id_t arg_0x41117088, message_t *msg, uint8_t dataLinkLen){
#line 31
  unsigned char __nesc_result;
#line 31

#line 31
  switch (arg_0x41117088) {
#line 31
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 31
      __nesc_result = SerialPacketInfoActiveMessageP$Info$upperLength(msg, dataLinkLen);
#line 31
      break;
#line 31
    default:
#line 31
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$upperLength(arg_0x41117088, msg, dataLinkLen);
#line 31
      break;
#line 31
    }
#line 31

#line 31
  return __nesc_result;
#line 31
}
#line 31
# 264 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask$runTask(void )
#line 264
{
  uart_id_t myType;
  message_t *myBuf;
  uint8_t mySize;
  uint8_t myWhich;

#line 269
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 269
    {
      myType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskType;
      myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskBuf;
      mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskSize;
      myWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskWhich;
    }
#line 274
    __nesc_atomic_end(__nesc_atomic); }
  mySize -= /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$offset(myType);
  mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$upperLength(myType, myBuf, mySize);
  myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Receive$receive(myType, myBuf, myBuf, mySize);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 278
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$messagePtrs[myWhich] = myBuf;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$unlockBuffer(myWhich);
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskPending = FALSE;
    }
#line 282
    __nesc_atomic_end(__nesc_atomic); }
}

# 123 "MultihopOscilloscopeC.nc"
static inline void MultihopOscilloscopeC$SerialControl$stopDone(error_t error)
#line 123
{
}

# 117 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void SerialP$SplitControl$stopDone(error_t error){
#line 117
  MultihopOscilloscopeC$SerialControl$stopDone(error);
#line 117
}
#line 117
# 109 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/McuSleepC.nc"
static inline void McuSleepC$McuPowerState$update(void )
#line 109
{
}

# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuPowerState.nc"
inline static void HplAtm128UartP$McuPowerState$update(void ){
#line 44
  McuSleepC$McuPowerState$update();
#line 44
}
#line 44
# 125 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP$Uart0RxControl$stop(void )
#line 125
{
  * (volatile uint8_t *)(0x0A + 0x20) &= ~(1 << 4);
  HplAtm128UartP$McuPowerState$update();
  return SUCCESS;
}

# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartRxControl$stop(void ){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = HplAtm128UartP$Uart0RxControl$stop();
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 113 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP$Uart0TxControl$stop(void )
#line 113
{
  * (volatile uint8_t *)(0x0A + 0x20) &= ~(1 << 3);
  HplAtm128UartP$McuPowerState$update();
  return SUCCESS;
}

# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartTxControl$stop(void ){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = HplAtm128UartP$Uart0TxControl$stop();
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 93 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$StdControl$stop(void )
#line 93
{
  /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartTxControl$stop();
  /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartRxControl$stop();
  return SUCCESS;
}

# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t SerialP$SerialControl$stop(void ){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = /*Atm128Uart0C.UartP*/Atm128UartP$0$StdControl$stop();
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 330 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP$SerialFlush$flushDone(void )
#line 330
{
  SerialP$SerialControl$stop();
  SerialP$SplitControl$stopDone(SUCCESS);
}

static inline void SerialP$defaultSerialFlushTask$runTask(void )
#line 335
{
  SerialP$SerialFlush$flushDone();
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP$defaultSerialFlushTask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(SerialP$defaultSerialFlushTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 338 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP$SerialFlush$default$flush(void )
#line 338
{
  SerialP$defaultSerialFlushTask$postTask();
}

# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialFlush.nc"
inline static void SerialP$SerialFlush$flush(void ){
#line 38
  SerialP$SerialFlush$default$flush();
#line 38
}
#line 38
# 326 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP$stopDoneTask$runTask(void )
#line 326
{
  SerialP$SerialFlush$flush();
}

# 264 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_uint16(const void * source)
#line 264
{
  const uint8_t *base = source;

#line 266
  return ((uint16_t )base[0] << 8) | base[1];
}

# 68 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/CollectionDebug.nc"
inline static error_t /*CtpP.Router*/CtpRoutingEngineP$0$CollectionDebug$logEventRoute(uint8_t type, am_addr_t parent, uint8_t hopcount, uint16_t metric){
#line 68
  unsigned char __nesc_result;
#line 68

#line 68
  __nesc_result = UARTDebugSenderP$CollectionDebug$logEventRoute(type, parent, hopcount, metric);
#line 68

#line 68
  return __nesc_result;
#line 68
}
#line 68
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(/*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 278 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$UnicastNameFreeRouting$routeFound(void )
#line 278
{
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask$postTask();
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/UnicastNameFreeRouting.nc"
inline static void /*CtpP.Router*/CtpRoutingEngineP$0$Routing$routeFound(void ){
#line 51
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$UnicastNameFreeRouting$routeFound();
#line 51
}
#line 51
# 598 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline error_t /*CtpP.Router*/CtpRoutingEngineP$0$RootControl$setRoot(void )
#line 598
{
  bool route_found = FALSE;

#line 600
  route_found = /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo.parent == INVALID_ADDR;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 601
    {
      /*CtpP.Router*/CtpRoutingEngineP$0$state_is_root = 1;
      /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo.parent = /*CtpP.Router*/CtpRoutingEngineP$0$my_ll_addr;
      /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo.etx = 0;
    }
#line 605
    __nesc_atomic_end(__nesc_atomic); }
  if (route_found) {
    /*CtpP.Router*/CtpRoutingEngineP$0$Routing$routeFound();
    }
#line 608
  ;
  /*CtpP.Router*/CtpRoutingEngineP$0$CollectionDebug$logEventRoute(NET_C_TREE_NEW_PARENT, /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo.parent, 0, /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo.etx);
  return SUCCESS;
}

# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/RootControl.nc"
inline static error_t MultihopOscilloscopeC$RootControl$setRoot(void ){
#line 41
  unsigned char __nesc_result;
#line 41

#line 41
  __nesc_result = /*CtpP.Router*/CtpRoutingEngineP$0$RootControl$setRoot();
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 105 "MultihopOscilloscopeC.nc"
static inline void MultihopOscilloscopeC$SerialControl$startDone(error_t error)
#line 105
{
  if (error != SUCCESS) {
    MultihopOscilloscopeC$fatal_problem();
    }

  if (__nesc_ntoh_uint16(MultihopOscilloscopeC$local.id.data) % 500 == 0) {
    MultihopOscilloscopeC$RootControl$setRoot();
    }
  MultihopOscilloscopeC$startTimer();
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void SerialP$SplitControl$startDone(error_t error){
#line 92
  MultihopOscilloscopeC$SerialControl$startDone(error);
#line 92
}
#line 92
# 142 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP$HplUart0$enableRxIntr(void )
#line 142
{
  * (volatile uint8_t *)(0x0A + 0x20) |= 1 << 7;
  return SUCCESS;
}

# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$enableRxIntr(void ){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = HplAtm128UartP$HplUart0$enableRxIntr();
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 119 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP$Uart0RxControl$start(void )
#line 119
{
  * (volatile uint8_t *)(0x0A + 0x20) |= 1 << 4;
  HplAtm128UartP$McuPowerState$update();
  return SUCCESS;
}

# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartRxControl$start(void ){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = HplAtm128UartP$Uart0RxControl$start();
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 107 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP$Uart0TxControl$start(void )
#line 107
{
  * (volatile uint8_t *)(0x0A + 0x20) |= 1 << 3;
  HplAtm128UartP$McuPowerState$update();
  return SUCCESS;
}

# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartTxControl$start(void ){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = HplAtm128UartP$Uart0TxControl$start();
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 147 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP$HplUart0$disableRxIntr(void )
#line 147
{
  * (volatile uint8_t *)(0x0A + 0x20) &= ~(1 << 7);
  return SUCCESS;
}

# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$disableRxIntr(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = HplAtm128UartP$HplUart0$disableRxIntr();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 137 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP$HplUart0$disableTxIntr(void )
#line 137
{
  * (volatile uint8_t *)(0x0A + 0x20) &= ~(1 << 6);
  return SUCCESS;
}

# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$disableTxIntr(void ){
#line 41
  unsigned char __nesc_result;
#line 41

#line 41
  __nesc_result = HplAtm128UartP$HplUart0$disableTxIntr();
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 77 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$StdControl$start(void )
#line 77
{

  /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$disableTxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$disableRxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_intr = 0;
  /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_intr = 0;


  /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartTxControl$start();
  /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartRxControl$start();


  /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$enableRxIntr();
  return SUCCESS;
}

# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t SerialP$SerialControl$start(void ){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = /*Atm128Uart0C.UartP*/Atm128UartP$0$StdControl$start();
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 320 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP$startDoneTask$runTask(void )
#line 320
{
  SerialP$SerialControl$start();
  SerialP$SplitControl$startDone(SUCCESS);
}

# 115 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$maxPayloadLength(void )
#line 115
{
  return 28;
}

# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/system/QueueC.nc"
static inline uint8_t /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$size(void )
#line 57
{
  return /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$size;
}

static inline uint8_t /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$maxSize(void )
#line 61
{
  return 20;
}

# 158 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$isRunning(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num].isrunning;
}

# 81 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static bool MultihopOscilloscopeC$Timer$isRunning(void ){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$isRunning(0U);
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 222 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow(void )
#line 222
{
  return /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get();
}

# 98 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow(void ){
#line 98
  unsigned long __nesc_result;
#line 98

#line 98
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow();
#line 98

#line 98
  return __nesc_result;
#line 98
}
#line 98
# 85 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void )
{
#line 86
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow();
}

# 125 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(void ){
#line 125
  unsigned long __nesc_result;
#line 125

#line 125
  __nesc_result = /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow();
#line 125

#line 125
  return __nesc_result;
#line 125
}
#line 125
# 143 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(), dt, FALSE);
}

# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void MultihopOscilloscopeC$Timer$startPeriodic(uint32_t dt){
#line 53
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(0U, dt);
#line 53
}
#line 53
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 94 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline Atm128_TIFR_t HplAtm128Timer0AsyncP$TimerCtrl$getInterruptFlag(void )
#line 94
{
  return * (Atm128_TIFR_t *)& * (volatile uint8_t *)(0x36 + 0x20);
}

# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag(void ){
#line 44
  union __nesc_unnamed4273 __nesc_result;
#line 44

#line 44
  __nesc_result = HplAtm128Timer0AsyncP$TimerCtrl$getInterruptFlag();
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static error_t SerialP$SerialFrameComm$putDelimiter(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = HdlcTranslateC$SerialFrameComm$putDelimiter();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 183 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$sendCompleted(error_t error)
#line 183
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 184
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendError = error;
#line 184
    __nesc_atomic_end(__nesc_atomic); }
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone$postTask();
}

# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
inline static void SerialP$SendBytePacket$sendCompleted(error_t error){
#line 80
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$sendCompleted(error);
#line 80
}
#line 80
# 242 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline bool SerialP$ack_queue_is_empty(void )
#line 242
{
  bool ret;

#line 244
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 244
    ret = SerialP$ackQ.writePtr == SerialP$ackQ.readPtr;
#line 244
    __nesc_atomic_end(__nesc_atomic); }
  return ret;
}











static __inline uint8_t SerialP$ack_queue_top(void )
#line 258
{
  uint8_t tmp = 0;

  /* atomic removed: atomic calls only */
#line 260
  {
    if (!SerialP$ack_queue_is_empty()) {
        tmp = SerialP$ackQ.buf[SerialP$ackQ.readPtr];
      }
  }
  return tmp;
}

static inline uint8_t SerialP$ack_queue_pop(void )
#line 268
{
  uint8_t retval = 0;

#line 270
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 270
    {
      if (SerialP$ackQ.writePtr != SerialP$ackQ.readPtr) {
          retval = SerialP$ackQ.buf[SerialP$ackQ.readPtr];
          if (++ SerialP$ackQ.readPtr > SerialP$ACK_QUEUE_SIZE) {
#line 273
            SerialP$ackQ.readPtr = 0;
            }
        }
    }
#line 276
    __nesc_atomic_end(__nesc_atomic); }
#line 276
  return retval;
}

#line 539
static inline void SerialP$RunTx$runTask(void )
#line 539
{
  uint8_t idle;
  uint8_t done;
  uint8_t fail;









  error_t result = SUCCESS;
  bool send_completed = FALSE;
  bool start_it = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 556
    {
      SerialP$txPending = 0;
      idle = SerialP$txState == SerialP$TXSTATE_IDLE;
      done = SerialP$txState == SerialP$TXSTATE_FINISH;
      fail = SerialP$txState == SerialP$TXSTATE_ERROR;
      if (done || fail) {
          SerialP$txState = SerialP$TXSTATE_IDLE;
          SerialP$txBuf[SerialP$txIndex].state = SerialP$BUFFER_AVAILABLE;
        }
    }
#line 565
    __nesc_atomic_end(__nesc_atomic); }


  if (done || fail) {
      SerialP$txSeqno++;
      if (SerialP$txProto == SERIAL_PROTO_ACK) {
          SerialP$ack_queue_pop();
        }
      else {
          result = done ? SUCCESS : FAIL;
          send_completed = TRUE;
        }
      idle = TRUE;
    }


  if (idle) {
      bool goInactive;

#line 583
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 583
        goInactive = SerialP$offPending;
#line 583
        __nesc_atomic_end(__nesc_atomic); }
      if (goInactive) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 585
            SerialP$txState = SerialP$TXSTATE_INACTIVE;
#line 585
            __nesc_atomic_end(__nesc_atomic); }
        }
      else {

          uint8_t myAckState;
          uint8_t myDataState;

#line 591
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 591
            {
              myAckState = SerialP$txBuf[SerialP$TX_ACK_INDEX].state;
              myDataState = SerialP$txBuf[SerialP$TX_DATA_INDEX].state;
            }
#line 594
            __nesc_atomic_end(__nesc_atomic); }
          if (!SerialP$ack_queue_is_empty() && myAckState == SerialP$BUFFER_AVAILABLE) {
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 596
                {
                  SerialP$txBuf[SerialP$TX_ACK_INDEX].state = SerialP$BUFFER_COMPLETE;
                  SerialP$txBuf[SerialP$TX_ACK_INDEX].buf = SerialP$ack_queue_top();
                }
#line 599
                __nesc_atomic_end(__nesc_atomic); }
              SerialP$txProto = SERIAL_PROTO_ACK;
              SerialP$txIndex = SerialP$TX_ACK_INDEX;
              start_it = TRUE;
            }
          else {
#line 604
            if (myDataState == SerialP$BUFFER_FILLING || myDataState == SerialP$BUFFER_COMPLETE) {
                SerialP$txProto = SERIAL_PROTO_PACKET_NOACK;
                SerialP$txIndex = SerialP$TX_DATA_INDEX;
                start_it = TRUE;
              }
            else {
              }
            }
        }
    }
  else {
    }


  if (send_completed) {
      SerialP$SendBytePacket$sendCompleted(result);
    }

  if (SerialP$txState == SerialP$TXSTATE_INACTIVE) {
      SerialP$testOff();
      return;
    }

  if (start_it) {

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 629
        {
          SerialP$txCRC = 0;
          SerialP$txByteCnt = 0;
          SerialP$txState = SerialP$TXSTATE_PROTO;
        }
#line 633
        __nesc_atomic_end(__nesc_atomic); }
      if (SerialP$SerialFrameComm$putDelimiter() != SUCCESS) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 635
            SerialP$txState = SerialP$TXSTATE_ERROR;
#line 635
            __nesc_atomic_end(__nesc_atomic); }
          SerialP$MaybeScheduleTx();
        }
    }
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP$stopDoneTask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(SerialP$stopDoneTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 131 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP$HplUart0$enableTxIntr(void )
#line 131
{
  * (volatile uint8_t *)(0x0B + 0x20) |= 1 << 6;
  * (volatile uint8_t *)(0x0A + 0x20) |= 1 << 6;
  return SUCCESS;
}

# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$enableTxIntr(void ){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = HplAtm128UartP$HplUart0$enableTxIntr();
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 282 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$UnicastNameFreeRouting$noRoute(void )
#line 282
{
}

# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/UnicastNameFreeRouting.nc"
inline static void /*CtpP.Router*/CtpRoutingEngineP$0$Routing$noRoute(void ){
#line 52
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$UnicastNameFreeRouting$noRoute();
#line 52
}
#line 52
# 550 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline error_t LinkEstimatorP$LinkEstimator$clearDLQ(am_addr_t neighbor)
#line 550
{
  neighbor_table_entry_t *ne;
  uint8_t nidx = LinkEstimatorP$findIdx(neighbor);

#line 553
  if (nidx == LinkEstimatorP$INVALID_RVAL) {
      return FAIL;
    }
  ne = &LinkEstimatorP$NeighborTable[nidx];
  ne->data_total = 0;
  ne->data_success = 0;
  return SUCCESS;
}

# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/4bitle/LinkEstimator.nc"
inline static error_t /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$clearDLQ(am_addr_t neighbor){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = LinkEstimatorP$LinkEstimator$clearDLQ(neighbor);
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
#line 44
inline static error_t /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$pinNeighbor(am_addr_t neighbor){
#line 44
  unsigned char __nesc_result;
#line 44

#line 44
  __nesc_result = LinkEstimatorP$LinkEstimator$pinNeighbor(neighbor);
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 505 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline error_t LinkEstimatorP$LinkEstimator$unpinNeighbor(am_addr_t neighbor)
#line 505
{
  uint8_t nidx = LinkEstimatorP$findIdx(neighbor);

#line 507
  if (nidx == LinkEstimatorP$INVALID_RVAL) {
      return FAIL;
    }
  LinkEstimatorP$NeighborTable[nidx].flags &= ~PINNED_ENTRY;
  return SUCCESS;
}

# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/4bitle/LinkEstimator.nc"
inline static error_t /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$unpinNeighbor(am_addr_t neighbor){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = LinkEstimatorP$LinkEstimator$unpinNeighbor(neighbor);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 90 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Queue.nc"
inline static error_t UARTDebugSenderP$SendQueue$enqueue(UARTDebugSenderP$SendQueue$t  newVal){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$enqueue(newVal);
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 81 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline void */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$getPayload(am_id_t id, message_t *m, uint8_t len)
#line 81
{
  return /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$getPayload(m, len);
}

# 124 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void * /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$AMSend$getPayload(am_id_t arg_0x40f631b8, message_t * msg, uint8_t len){
#line 124
  void *__nesc_result;
#line 124

#line 124
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$getPayload(arg_0x40f631b8, msg, len);
#line 124

#line 124
  return __nesc_result;
#line 124
}
#line 124
# 203 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void */*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$getPayload(uint8_t id, message_t *m, uint8_t len)
#line 203
{
  return /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$AMSend$getPayload(0, m, len);
}

# 114 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static void * /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$Send$getPayload(message_t * msg, uint8_t len){
#line 114
  void *__nesc_result;
#line 114

#line 114
  __nesc_result = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$getPayload(1U, msg, len);
#line 114

#line 114
  return __nesc_result;
#line 114
}
#line 114
# 65 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline void */*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$AMSend$getPayload(message_t *m, uint8_t len)
#line 65
{
  return /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$Send$getPayload(m, len);
}

# 124 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void * UARTDebugSenderP$UARTSend$getPayload(message_t * msg, uint8_t len){
#line 124
  void *__nesc_result;
#line 124

#line 124
  __nesc_result = /*MultihopOscilloscopeAppC.DebugSerialSender.AMQueueEntryP*/AMQueueEntryP$3$AMSend$getPayload(msg, len);
#line 124

#line 124
  return __nesc_result;
#line 124
}
#line 124
# 97 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Pool.nc"
inline static UARTDebugSenderP$MessagePool$t * UARTDebugSenderP$MessagePool$get(void ){
#line 97
  nx_struct message_t *__nesc_result;
#line 97

#line 97
  __nesc_result = /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$Pool$get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 75 "/opt/CVSTinyOS/tinyos-2.x/tos/system/PoolP.nc"
static inline bool /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$Pool$empty(void )
#line 75
{
  ;
  return /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$free == 0;
}

# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Pool.nc"
inline static bool UARTDebugSenderP$MessagePool$empty(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$Pool$empty();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 188 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/UARTDebugSenderP.nc"
static inline  error_t UARTDebugSenderP$CollectionDebug$logEventDbg(uint8_t type, uint16_t arg1, uint16_t arg2, uint16_t arg3)
#line 188
{
  UARTDebugSenderP$statLogReceived++;
  if (UARTDebugSenderP$MessagePool$empty()) {
      return FAIL;
    }
  else 
#line 192
    {
      message_t *msg = UARTDebugSenderP$MessagePool$get();
      CollectionDebugMsg *dbg_msg = UARTDebugSenderP$UARTSend$getPayload(msg, sizeof(CollectionDebugMsg ));

#line 195
      if (dbg_msg == (void *)0) {
          return FAIL;
        }
      memset(dbg_msg, 0, UARTDebugSenderP$len);

      __nesc_hton_uint8(dbg_msg->type.data, type);
      __nesc_hton_uint16(dbg_msg->data.dbg.a.data, arg1);
      __nesc_hton_uint16(dbg_msg->data.dbg.b.data, arg2);
      __nesc_hton_uint16(dbg_msg->data.dbg.c.data, arg3);
      __nesc_hton_uint16(dbg_msg->seqno.data, UARTDebugSenderP$statLogReceived);

      if (UARTDebugSenderP$SendQueue$enqueue(msg) == SUCCESS) {
          UARTDebugSenderP$sendTask$postTask();
          return SUCCESS;
        }
      else 
#line 209
        {
          UARTDebugSenderP$statEnqueueFail++;
          UARTDebugSenderP$MessagePool$put(msg);
          return FAIL;
        }
    }
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/CollectionDebug.nc"
inline static error_t /*CtpP.Router*/CtpRoutingEngineP$0$CollectionDebug$logEventDbg(uint8_t type, uint16_t arg1, uint16_t arg2, uint16_t arg3){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = UARTDebugSenderP$CollectionDebug$logEventDbg(type, arg1, arg2, arg3);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 252 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline bool /*CtpP.Router*/CtpRoutingEngineP$0$passLinkEtxThreshold(uint16_t etx)
#line 252
{
  return TRUE;
  return etx < ETX_THRESHOLD;
}

# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/4bitle/LinkEstimator.nc"
inline static uint16_t /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$getLinkQuality(uint16_t neighbor){
#line 38
  unsigned short __nesc_result;
#line 38

#line 38
  __nesc_result = LinkEstimatorP$LinkEstimator$getLinkQuality(neighbor);
#line 38

#line 38
  return __nesc_result;
#line 38
}
#line 38
# 259 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline uint16_t /*CtpP.Router*/CtpRoutingEngineP$0$evaluateEtx(uint16_t quality)
#line 259
{

  return quality + 10;
}




static inline void /*CtpP.Router*/CtpRoutingEngineP$0$updateRouteTask$runTask(void )
#line 267
{
  uint8_t i;
  routing_table_entry *entry;
  routing_table_entry *best;
  uint16_t minEtx;
  uint16_t currentEtx;
  uint16_t linkEtx;
#line 273
  uint16_t pathEtx;

  if (/*CtpP.Router*/CtpRoutingEngineP$0$state_is_root) {
    return;
    }
  best = (void *)0;

  minEtx = MAX_METRIC;

  currentEtx = MAX_METRIC;

  ;


  for (i = 0; i < /*CtpP.Router*/CtpRoutingEngineP$0$routingTableActive; i++) {
      entry = &/*CtpP.Router*/CtpRoutingEngineP$0$routingTable[i];


      if (entry->info.parent == INVALID_ADDR || entry->info.parent == /*CtpP.Router*/CtpRoutingEngineP$0$my_ll_addr) {
          ;


          continue;
        }

      linkEtx = /*CtpP.Router*/CtpRoutingEngineP$0$evaluateEtx(/*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$getLinkQuality(entry->neighbor));
      ;


      pathEtx = linkEtx + entry->info.etx;

      if (entry->neighbor == /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo.parent) {
          ;
          currentEtx = pathEtx;

          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 308
            {
              /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo.etx = entry->info.etx;
              /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo.congested = entry->info.congested;
            }
#line 311
            __nesc_atomic_end(__nesc_atomic); }
          continue;
        }

      if (entry->info.congested) {
        continue;
        }
      if (!/*CtpP.Router*/CtpRoutingEngineP$0$passLinkEtxThreshold(linkEtx)) {
          ;
          continue;
        }

      if (pathEtx < minEtx) {
          minEtx = pathEtx;
          best = entry;
        }
    }
#line 342
  if (minEtx != MAX_METRIC) {

      if ((
#line 343
      currentEtx == MAX_METRIC || (
      /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo.congested && minEtx < /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo.etx + 10)) || 
      minEtx + PARENT_SWITCH_THRESHOLD < currentEtx) {




          /*CtpP.Router*/CtpRoutingEngineP$0$parentChanges++;

          ;
          /*CtpP.Router*/CtpRoutingEngineP$0$CollectionDebug$logEventDbg(NET_C_TREE_NEW_PARENT, best->neighbor, best->info.etx, minEtx);
          /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$unpinNeighbor(/*CtpP.Router*/CtpRoutingEngineP$0$routeInfo.parent);
          /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$pinNeighbor(best->neighbor);
          /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$clearDLQ(best->neighbor);
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 357
            {
              /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo.parent = best->neighbor;
              /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo.etx = best->info.etx;
              /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo.congested = best->info.congested;
            }
#line 361
            __nesc_atomic_end(__nesc_atomic); }
        }
    }




  if (/*CtpP.Router*/CtpRoutingEngineP$0$justEvicted && /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo.parent == INVALID_ADDR) {
    /*CtpP.Router*/CtpRoutingEngineP$0$Routing$noRoute();
    }
  else {



    if (
#line 374
    !/*CtpP.Router*/CtpRoutingEngineP$0$justEvicted && 
    currentEtx == MAX_METRIC && 
    minEtx != MAX_METRIC) {
      /*CtpP.Router*/CtpRoutingEngineP$0$Routing$routeFound();
      }
    }
#line 378
  /*CtpP.Router*/CtpRoutingEngineP$0$justEvicted = FALSE;
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t /*CtpP.SendControl.AMQueueEntryP*/AMQueueEntryP$1$Send$send(message_t * msg, uint8_t len){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(1U, msg, len);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 151 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static void /*CtpP.SendControl.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setType(message_t * amsg, am_id_t t){
#line 151
  CC2420ActiveMessageP$AMPacket$setType(amsg, t);
#line 151
}
#line 151
# 281 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_leuint16(void * target, uint16_t value)
#line 281
{
  uint8_t *base = target;

#line 283
  base[0] = value;
  base[1] = value >> 8;
  return value;
}

# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline cc2420_header_t * CC2420PacketP$CC2420PacketBody$getHeader(message_t * msg)
#line 99
{
  return (cc2420_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t ));
}

# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * CC2420ActiveMessageP$CC2420PacketBody$getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP$CC2420PacketBody$getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 103 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP$AMPacket$setDestination(message_t *amsg, am_addr_t addr)
#line 103
{
  cc2420_header_t *header = CC2420ActiveMessageP$CC2420PacketBody$getHeader(amsg);

#line 105
  __nesc_hton_leuint16(header->dest.data, addr);
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static void /*CtpP.SendControl.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setDestination(message_t * amsg, am_addr_t addr){
#line 92
  CC2420ActiveMessageP$AMPacket$setDestination(amsg, addr);
#line 92
}
#line 92
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline error_t /*CtpP.SendControl.AMQueueEntryP*/AMQueueEntryP$1$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 47
{
  /*CtpP.SendControl.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setDestination(msg, dest);
  /*CtpP.SendControl.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setType(msg, 112);
  return /*CtpP.SendControl.AMQueueEntryP*/AMQueueEntryP$1$Send$send(msg, len);
}

# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t LinkEstimatorP$AMSend$send(am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = /*CtpP.SendControl.AMQueueEntryP*/AMQueueEntryP$1$AMSend$send(addr, msg, len);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 156 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline uint8_t CC2420ActiveMessageP$Packet$maxPayloadLength(void )
#line 156
{
  return 28;
}

# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
inline static uint8_t LinkEstimatorP$SubPacket$maxPayloadLength(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = CC2420ActiveMessageP$Packet$maxPayloadLength();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 103 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline linkest_footer_t *LinkEstimatorP$getFooter(message_t *m, uint8_t len)
#line 103
{

  return (linkest_footer_t *)(len + (uint8_t *)LinkEstimatorP$Packet$getPayload(m, len + sizeof(linkest_footer_t )));
}

# 114 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static void * CC2420TinyosNetworkP$SubSend$getPayload(message_t * msg, uint8_t len){
#line 114
  void *__nesc_result;
#line 114

#line 114
  __nesc_result = CC2420CsmaP$Send$getPayload(msg, len);
#line 114

#line 114
  return __nesc_result;
#line 114
}
#line 114
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline void *CC2420TinyosNetworkP$Send$getPayload(message_t *msg, uint8_t len)
#line 74
{
  return CC2420TinyosNetworkP$SubSend$getPayload(msg, len);
}

# 114 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static void * DefaultLplP$SubSend$getPayload(message_t * msg, uint8_t len){
#line 114
  void *__nesc_result;
#line 114

#line 114
  __nesc_result = CC2420TinyosNetworkP$Send$getPayload(msg, len);
#line 114

#line 114
  return __nesc_result;
#line 114
}
#line 114
# 305 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/lpl/DefaultLplP.nc"
static inline void *DefaultLplP$Send$getPayload(message_t *msg, uint8_t len)
#line 305
{
  return DefaultLplP$SubSend$getPayload(msg, len);
}

# 114 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static void * UniqueSendP$SubSend$getPayload(message_t * msg, uint8_t len){
#line 114
  void *__nesc_result;
#line 114

#line 114
  __nesc_result = DefaultLplP$Send$getPayload(msg, len);
#line 114

#line 114
  return __nesc_result;
#line 114
}
#line 114
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline void *UniqueSendP$Send$getPayload(message_t *msg, uint8_t len)
#line 99
{
  return UniqueSendP$SubSend$getPayload(msg, len);
}

# 114 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static void * CC2420ActiveMessageP$SubSend$getPayload(message_t * msg, uint8_t len){
#line 114
  void *__nesc_result;
#line 114

#line 114
  __nesc_result = UniqueSendP$Send$getPayload(msg, len);
#line 114

#line 114
  return __nesc_result;
#line 114
}
#line 114
# 160 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void *CC2420ActiveMessageP$Packet$getPayload(message_t *msg, uint8_t len)
#line 160
{
  return CC2420ActiveMessageP$SubSend$getPayload(msg, len);
}

# 115 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
inline static void * LinkEstimatorP$SubPacket$getPayload(message_t * msg, uint8_t len){
#line 115
  void *__nesc_result;
#line 115

#line 115
  __nesc_result = CC2420ActiveMessageP$Packet$getPayload(msg, len);
#line 115

#line 115
  return __nesc_result;
#line 115
}
#line 115
# 98 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline linkest_header_t *LinkEstimatorP$getHeader(message_t *m)
#line 98
{
  return (linkest_header_t *)LinkEstimatorP$SubPacket$getPayload(m, sizeof(linkest_header_t ));
}










static inline uint8_t LinkEstimatorP$addLinkEstHeaderAndFooter(message_t *msg, uint8_t len)
#line 111
{
  unsigned char *__nesc_temp51;
#line 112
  uint8_t newlen;
  linkest_header_t * hdr;
  linkest_footer_t * footer;
  uint8_t i;
#line 115
  uint8_t j;
#line 115
  uint8_t k;
  uint8_t maxEntries;
#line 116
  uint8_t newPrevSentIdx;

#line 117
  ;
  hdr = LinkEstimatorP$getHeader(msg);
  footer = LinkEstimatorP$getFooter(msg, len);

  maxEntries = (LinkEstimatorP$SubPacket$maxPayloadLength() - len - sizeof(linkest_header_t ))
   / sizeof(linkest_footer_t );



  if (maxEntries > NUM_ENTRIES_FLAG) {
      maxEntries = NUM_ENTRIES_FLAG;
    }
  ;

  j = 0;
  newPrevSentIdx = 0;
  for (i = 0; i < 10 && j < maxEntries; i++) {
      uint8_t neighborCount;
      neighbor_stat_entry_t * neighborLists;

#line 136
      if (maxEntries <= 10) {
        neighborCount = maxEntries;
        }
      else {
#line 139
        neighborCount = 10;
        }
      neighborLists = (neighbor_stat_entry_t * )footer->neighborList;
      k = (LinkEstimatorP$prevSentIdx + i + 1) % 10;
      if (LinkEstimatorP$NeighborTable[k].flags & VALID_ENTRY && 
      LinkEstimatorP$NeighborTable[k].flags & MATURE_ENTRY) {
          __nesc_hton_uint16(neighborLists[j].ll_addr.data, LinkEstimatorP$NeighborTable[k].ll_addr);
          __nesc_hton_uint8(neighborLists[j].inquality.data, LinkEstimatorP$NeighborTable[k].inquality);
          newPrevSentIdx = k;
          ;

          j++;
        }
    }
  LinkEstimatorP$prevSentIdx = newPrevSentIdx;

  __nesc_hton_uint8(hdr->seq.data, LinkEstimatorP$linkEstSeq++);
  __nesc_hton_uint8(hdr->flags.data, 0);
  (__nesc_temp51 = hdr->flags.data, __nesc_hton_uint8(__nesc_temp51, __nesc_ntoh_uint8(__nesc_temp51) | (NUM_ENTRIES_FLAG & j)));
  newlen = sizeof(linkest_header_t ) + len + j * sizeof(linkest_footer_t );
  ;
  return newlen;
}

#line 565
static inline error_t LinkEstimatorP$Send$send(am_addr_t addr, message_t *msg, uint8_t len)
#line 565
{
  uint8_t newlen;

#line 567
  newlen = LinkEstimatorP$addLinkEstHeaderAndFooter(msg, len);
  ;
  ;
  LinkEstimatorP$print_packet(msg, newlen);
  return LinkEstimatorP$AMSend$send(addr, msg, newlen);
}

# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t /*CtpP.Router*/CtpRoutingEngineP$0$BeaconSend$send(am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = LinkEstimatorP$Send$send(addr, msg, len);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 7 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpCongestion.nc"
inline static bool /*CtpP.Router*/CtpRoutingEngineP$0$CtpCongestion$isCongested(void ){
#line 7
  unsigned char __nesc_result;
#line 7

#line 7
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpCongestion$isCongested();
#line 7

#line 7
  return __nesc_result;
#line 7
}
#line 7
# 385 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$sendBeaconTask$runTask(void )
#line 385
{
  unsigned char *__nesc_temp53;
  unsigned char *__nesc_temp52;
#line 386
  error_t eval;

#line 387
  if (/*CtpP.Router*/CtpRoutingEngineP$0$sending) {
      return;
    }

  __nesc_hton_uint8(/*CtpP.Router*/CtpRoutingEngineP$0$beaconMsg->options.data, 0);


  if (/*CtpP.Router*/CtpRoutingEngineP$0$CtpCongestion$isCongested()) {
      (__nesc_temp52 = /*CtpP.Router*/CtpRoutingEngineP$0$beaconMsg->options.data, __nesc_hton_uint8(__nesc_temp52, __nesc_ntoh_uint8(__nesc_temp52) | CTP_OPT_ECN));
    }

  __nesc_hton_uint16(/*CtpP.Router*/CtpRoutingEngineP$0$beaconMsg->parent.data, /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo.parent);
  if (/*CtpP.Router*/CtpRoutingEngineP$0$state_is_root) {
      __nesc_hton_uint16(/*CtpP.Router*/CtpRoutingEngineP$0$beaconMsg->etx.data, /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo.etx);
    }
  else {
#line 402
    if (/*CtpP.Router*/CtpRoutingEngineP$0$routeInfo.parent == INVALID_ADDR) {
        __nesc_hton_uint16(/*CtpP.Router*/CtpRoutingEngineP$0$beaconMsg->etx.data, /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo.etx);
        (__nesc_temp53 = /*CtpP.Router*/CtpRoutingEngineP$0$beaconMsg->options.data, __nesc_hton_uint8(__nesc_temp53, __nesc_ntoh_uint8(__nesc_temp53) | CTP_OPT_PULL));
      }
    else 
#line 405
      {
        __nesc_hton_uint16(/*CtpP.Router*/CtpRoutingEngineP$0$beaconMsg->etx.data, /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo.etx + 
        /*CtpP.Router*/CtpRoutingEngineP$0$evaluateEtx(/*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$getLinkQuality(/*CtpP.Router*/CtpRoutingEngineP$0$routeInfo.parent)));
      }
    }
  ;



  /*CtpP.Router*/CtpRoutingEngineP$0$CollectionDebug$logEventRoute(NET_C_TREE_SENT_BEACON, __nesc_ntoh_uint16(/*CtpP.Router*/CtpRoutingEngineP$0$beaconMsg->parent.data), 0, __nesc_ntoh_uint16(/*CtpP.Router*/CtpRoutingEngineP$0$beaconMsg->etx.data));

  eval = /*CtpP.Router*/CtpRoutingEngineP$0$BeaconSend$send(AM_BROADCAST_ADDR, 
  &/*CtpP.Router*/CtpRoutingEngineP$0$beaconMsgBuffer, 
  sizeof(ctp_routing_header_t ));
  if (eval == SUCCESS) {
      /*CtpP.Router*/CtpRoutingEngineP$0$sending = TRUE;
    }
  else {
#line 421
    if (eval == EOFF) {
        /*CtpP.Router*/CtpRoutingEngineP$0$radioOn = FALSE;
        ;
      }
    }
}

# 167 "CC2420CsmaP.nc"
static inline uint8_t CC2420CsmaP$Send$maxPayloadLength(void )
#line 167
{
  return 28;
}

# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(message_t * msg, uint8_t len){
#line 83
  CC2420ActiveMessageP$Packet$setPayloadLength(msg, len);
#line 83
}
#line 83
# 287 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline uint16_t CC2420ControlP$CC2420Config$getPanAddr(void )
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
inline static uint16_t CC2420ActiveMessageP$CC2420Config$getPanAddr(void ){
#line 70
  unsigned short __nesc_result;
#line 70

#line 70
  __nesc_result = CC2420ControlP$CC2420Config$getPanAddr();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 251 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP$SendNotifier$default$aboutToSend(am_id_t amId, am_addr_t addr, message_t *msg)
#line 251
{
}

# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SendNotifier.nc"
inline static void CC2420ActiveMessageP$SendNotifier$aboutToSend(am_id_t arg_0x407502d0, am_addr_t dest, message_t * msg){
#line 59
    CC2420ActiveMessageP$SendNotifier$default$aboutToSend(arg_0x407502d0, dest, msg);
#line 59
}
#line 59
# 251 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_leuint8(void * target, uint8_t value)
#line 251
{
  uint8_t *base = target;

#line 253
  base[0] = value;
  return value;
}

# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/system/StateImplP.nc"
static inline void StateImplP$State$toIdle(uint8_t id)
#line 118
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 119
    StateImplP$state[id] = StateImplP$S_IDLE;
#line 119
    __nesc_atomic_end(__nesc_atomic); }
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/State.nc"
inline static void UniqueSendP$State$toIdle(void ){
#line 56
  StateImplP$State$toIdle(2U);
#line 56
}
#line 56
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t DefaultLplP$startRadio$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(DefaultLplP$startRadio);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/State.nc"
inline static uint8_t DefaultLplP$RadioPowerState$getState(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = StateImplP$State$getState(3U);
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void DefaultLplP$SendDoneTimer$stop(void ){
#line 67
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(5U);
#line 67
}
#line 67
inline static void DefaultLplP$OffTimer$stop(void ){
#line 67
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(4U);
#line 67
}
#line 67
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/State.nc"
inline static error_t DefaultLplP$SendState$requestState(uint8_t reqState){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = StateImplP$State$requestState(5U, reqState);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
#line 71
inline static uint8_t DefaultLplP$SplitControlState$getState(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = StateImplP$State$getState(4U);
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 261 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/lpl/DefaultLplP.nc"
static inline error_t DefaultLplP$Send$send(message_t *msg, uint8_t len)
#line 261
{
  if (DefaultLplP$SplitControlState$getState() == DefaultLplP$S_OFF) {

      return EOFF;
    }

  if (DefaultLplP$SendState$requestState(S_LPL_SENDING) == SUCCESS) {
      DefaultLplP$currentSendMsg = msg;
      DefaultLplP$currentSendLen = len;


      DefaultLplP$OffTimer$stop();
      DefaultLplP$SendDoneTimer$stop();

      if (DefaultLplP$RadioPowerState$getState() == DefaultLplP$S_ON) {
          DefaultLplP$initializeSend();
          return SUCCESS;
        }
      else {
          DefaultLplP$startRadio$postTask();
        }

      return SUCCESS;
    }

  return EBUSY;
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t UniqueSendP$SubSend$send(message_t * msg, uint8_t len){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = DefaultLplP$Send$send(msg, len);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * UniqueSendP$CC2420PacketBody$getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP$CC2420PacketBody$getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/State.nc"
inline static error_t UniqueSendP$State$requestState(uint8_t reqState){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = StateImplP$State$requestState(2U, reqState);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 75 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline error_t UniqueSendP$Send$send(message_t *msg, uint8_t len)
#line 75
{
  error_t error;

#line 77
  if (UniqueSendP$State$requestState(UniqueSendP$S_SENDING) == SUCCESS) {
      __nesc_hton_leuint8(UniqueSendP$CC2420PacketBody$getHeader(msg)->dsn.data, UniqueSendP$localSendId++);

      if ((error = UniqueSendP$SubSend$send(msg, len)) != SUCCESS) {
          UniqueSendP$State$toIdle();
        }

      return error;
    }

  return EBUSY;
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t CC2420ActiveMessageP$SubSend$send(message_t * msg, uint8_t len){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = UniqueSendP$Send$send(msg, len);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 103 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline cc2420_metadata_t *CC2420PacketP$CC2420PacketBody$getMetadata(message_t *msg)
#line 103
{
  return (cc2420_metadata_t *)msg->metadata;
}

# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * DefaultLplP$CC2420PacketBody$getMetadata(message_t * msg){
#line 47
  nx_struct cc2420_metadata_t *__nesc_result;
#line 47

#line 47
  __nesc_result = CC2420PacketP$CC2420PacketBody$getMetadata(msg);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 190 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/lpl/DefaultLplP.nc"
static inline uint16_t DefaultLplP$LowPowerListening$getRxSleepInterval(message_t *msg)
#line 190
{
  return __nesc_ntoh_uint16(DefaultLplP$CC2420PacketBody$getMetadata(msg)->rxInterval.data);
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_addr_t DefaultLplP$AMPacket$destination(message_t * amsg){
#line 67
  unsigned short __nesc_result;
#line 67

#line 67
  __nesc_result = CC2420ActiveMessageP$AMPacket$destination(amsg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 276 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_leuint16(const void * source)
#line 276
{
  const uint8_t *base = source;

#line 278
  return ((uint16_t )base[1] << 8) | base[0];
}

# 70 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline error_t CC2420PacketP$Acks$noAck(message_t *p_msg)
#line 70
{
  unsigned char *__nesc_temp48;

#line 71
  (__nesc_temp48 = CC2420PacketP$CC2420PacketBody$getHeader(p_msg)->fcf.data, __nesc_hton_leuint16(__nesc_temp48, __nesc_ntoh_leuint16(__nesc_temp48) & ~(1 << IEEE154_FCF_ACK_REQ)));
  return SUCCESS;
}

# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc"
inline static error_t DefaultLplP$PacketAcknowledgements$noAck(message_t * msg){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = CC2420PacketP$Acks$noAck(msg);
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
#line 48
inline static error_t DefaultLplP$PacketAcknowledgements$requestAck(message_t * msg){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = CC2420PacketP$Acks$requestAck(msg);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void DefaultLplP$SendDoneTimer$startOneShot(uint32_t dt){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(5U, dt);
#line 62
}
#line 62
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void /*CtpP.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(message_t * msg, error_t error){
#line 99
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubSend$sendDone(msg, error);
#line 99
}
#line 99
# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline void /*CtpP.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(message_t *m, error_t err)
#line 57
{
  /*CtpP.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(m, err);
}

# 427 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$BeaconSend$sendDone(message_t *msg, error_t error)
#line 427
{
  if (msg != &/*CtpP.Router*/CtpRoutingEngineP$0$beaconMsgBuffer || !/*CtpP.Router*/CtpRoutingEngineP$0$sending) {

      return;
    }
  /*CtpP.Router*/CtpRoutingEngineP$0$sending = FALSE;
}

# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void LinkEstimatorP$Send$sendDone(message_t * msg, error_t error){
#line 99
  /*CtpP.Router*/CtpRoutingEngineP$0$BeaconSend$sendDone(msg, error);
#line 99
}
#line 99
# 576 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline void LinkEstimatorP$AMSend$sendDone(message_t *msg, error_t error)
#line 576
{
  LinkEstimatorP$Send$sendDone(msg, error);
}

# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void /*CtpP.SendControl.AMQueueEntryP*/AMQueueEntryP$1$AMSend$sendDone(message_t * msg, error_t error){
#line 99
  LinkEstimatorP$AMSend$sendDone(msg, error);
#line 99
}
#line 99
# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline void /*CtpP.SendControl.AMQueueEntryP*/AMQueueEntryP$1$Send$sendDone(message_t *m, error_t err)
#line 57
{
  /*CtpP.SendControl.AMQueueEntryP*/AMQueueEntryP$1$AMSend$sendDone(m, err);
}

# 207 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(uint8_t id, message_t *msg, error_t err)
#line 207
{
}

# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(uint8_t arg_0x40f657a8, message_t * msg, error_t error){
#line 89
  switch (arg_0x40f657a8) {
#line 89
    case 0U:
#line 89
      /*CtpP.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(msg, error);
#line 89
      break;
#line 89
    case 1U:
#line 89
      /*CtpP.SendControl.AMQueueEntryP*/AMQueueEntryP$1$Send$sendDone(msg, error);
#line 89
      break;
#line 89
    default:
#line 89
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(arg_0x40f657a8, msg, error);
#line 89
      break;
#line 89
    }
#line 89
}
#line 89
# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask(void )
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

# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/CollectionDebug.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(uint8_t type){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = UARTDebugSenderP$CollectionDebug$logEvent(type);
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 529 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendDoneBug(void )
#line 529
{

  /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_BAD_SENDDONE);
}

# 257 "/usr/lib/ncc/nesc_nx.h"
static __inline  int8_t __nesc_ntoh_int8(const void * source)
#line 257
{
#line 257
  return __nesc_ntoh_uint8(source);
}

# 75 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline bool CC2420PacketP$Acks$wasAcked(message_t *p_msg)
#line 75
{
  return __nesc_ntoh_int8(CC2420PacketP$CC2420PacketBody$getMetadata(p_msg)->ack.data);
}

# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$PacketAcknowledgements$wasAcked(message_t * msg){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = CC2420PacketP$Acks$wasAcked(msg);
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 534 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline error_t LinkEstimatorP$LinkEstimator$txNoAck(am_addr_t neighbor)
#line 534
{
  neighbor_table_entry_t *ne;
  uint8_t nidx = LinkEstimatorP$findIdx(neighbor);

#line 537
  if (nidx == LinkEstimatorP$INVALID_RVAL) {
      return FAIL;
    }

  ne = &LinkEstimatorP$NeighborTable[nidx];
  ne->data_total++;
  if (ne->data_total >= LinkEstimatorP$DLQ_PKT_WINDOW) {
      LinkEstimatorP$updateDEETX(ne);
    }
  return SUCCESS;
}

# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/4bitle/LinkEstimator.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$LinkEstimator$txNoAck(am_addr_t neighbor){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = LinkEstimatorP$LinkEstimator$txNoAck(neighbor);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*CtpP.Router*/CtpRoutingEngineP$0$updateRouteTask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(/*CtpP.Router*/CtpRoutingEngineP$0$updateRouteTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 556 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$recomputeRoutes(void )
#line 556
{
  /*CtpP.Router*/CtpRoutingEngineP$0$updateRouteTask$postTask();
}

# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpInfo.nc"
inline static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpInfo$recomputeRoutes(void ){
#line 71
  /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$recomputeRoutes();
#line 71
}
#line 71
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led0$toggle(void ){
#line 31
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$toggle();
#line 31
}
#line 31
# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/system/LedsP.nc"
static inline void LedsP$Leds$led0Toggle(void )
#line 73
{
  LedsP$Led0$toggle();
  ;
#line 75
  ;
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void MultihopOscilloscopeC$Leds$led0Toggle(void ){
#line 56
  LedsP$Leds$led0Toggle();
#line 56
}
#line 56
# 285 "MultihopOscilloscopeC.nc"
inline static void MultihopOscilloscopeC$report_problem(void )
#line 285
{
#line 285
  MultihopOscilloscopeC$Leds$led0Toggle();
}

# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led1$toggle(void ){
#line 31
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$toggle();
#line 31
}
#line 31
# 88 "/opt/CVSTinyOS/tinyos-2.x/tos/system/LedsP.nc"
static inline void LedsP$Leds$led1Toggle(void )
#line 88
{
  LedsP$Led1$toggle();
  ;
#line 90
  ;
}

# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void MultihopOscilloscopeC$Leds$led1Toggle(void ){
#line 72
  LedsP$Leds$led1Toggle();
#line 72
}
#line 72
# 286 "MultihopOscilloscopeC.nc"
inline static void MultihopOscilloscopeC$report_sent(void )
#line 286
{
#line 286
  MultihopOscilloscopeC$Leds$led1Toggle();
}

#line 259
static inline void MultihopOscilloscopeC$Send$sendDone(message_t *msg, error_t error)
#line 259
{
  if (error == SUCCESS) {
    MultihopOscilloscopeC$report_sent();
    }
  else {
#line 263
    MultihopOscilloscopeC$report_problem();
    }
  MultihopOscilloscopeC$sendbusy = FALSE;
}

# 920 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline 
#line 919
void 
/*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$default$sendDone(uint8_t client, message_t *msg, error_t error)
#line 920
{
}

# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$sendDone(uint8_t arg_0x40dc7c58, message_t * msg, error_t error){
#line 89
  switch (arg_0x40dc7c58) {
#line 89
    case 0U:
#line 89
      MultihopOscilloscopeC$Send$sendDone(msg, error);
#line 89
      break;
#line 89
    default:
#line 89
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$default$sendDone(arg_0x40dc7c58, msg, error);
#line 89
      break;
#line 89
    }
#line 89
}
#line 89
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/system/QueueC.nc"
static inline void /*CtpP.SendQueueP*/QueueC$0$printQueue(void )
#line 69
{
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/4bitle/LinkEstimator.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$LinkEstimator$txAck(am_addr_t neighbor){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = LinkEstimatorP$LinkEstimator$txAck(neighbor);
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 79 "/opt/CVSTinyOS/tinyos-2.x/tos/system/PoolP.nc"
static inline uint8_t /*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$size(void )
#line 79
{
  ;
  return /*CtpP.MessagePoolP.PoolP*/PoolP$0$free;
}

# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Pool.nc"
inline static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$size(void ){
#line 72
  unsigned char __nesc_result;
#line 72

#line 72
  __nesc_result = /*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$size();
#line 72

#line 72
  return __nesc_result;
#line 72
}
#line 72
# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/system/PoolP.nc"
static inline uint8_t /*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$maxSize(void )
#line 84
{
  return 12;
}

# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Pool.nc"
inline static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$maxSize(void ){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$maxSize();
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 66 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpPacket.nc"
inline static uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$CtpPacket$getType(message_t *msg){
#line 66
  unsigned char __nesc_result;
#line 66

#line 66
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getType(msg);
#line 66

#line 66
  return __nesc_result;
#line 66
}
#line 66
#line 54
inline static uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$CtpPacket$getThl(message_t *msg){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getThl(msg);
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54









inline static uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$CtpPacket$getSequenceNumber(message_t *msg){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getSequenceNumber(msg);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
#line 60
inline static am_addr_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$CtpPacket$getOrigin(message_t *msg){
#line 60
  unsigned short __nesc_result;
#line 60

#line 60
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getOrigin(msg);
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 100 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/LruCtpMsgCacheP.nc"
static inline void /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$remove(uint8_t i)
#line 100
{
  uint8_t j;

#line 102
  if (i >= /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count) {
    return;
    }
#line 104
  if (i == 0) {

      /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$first = (/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$first + 1) % 4;
    }
  else 
#line 107
    {

      for (j = i; j < /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count; j++) {
          memcpy(&/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$cache[(j + /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$first) % 4], &/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$cache[(j + /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$first + 1) % 4], sizeof(/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$ctp_packet_sig_t ));
        }
    }
  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count--;
}

static inline void /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$Cache$insert(message_t *m)
#line 116
{
  uint8_t i;

#line 118
  if (/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count == 4) {





      i = /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$lookup(m);
      /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$remove(i % /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count);
    }

  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$cache[(/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$first + /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count) % 4].origin = /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$CtpPacket$getOrigin(m);
  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$cache[(/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$first + /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count) % 4].seqno = /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$CtpPacket$getSequenceNumber(m);
  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$cache[(/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$first + /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count) % 4].thl = /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$CtpPacket$getThl(m);
  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$cache[(/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$first + /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count) % 4].type = /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$CtpPacket$getType(m);
  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count++;
}

# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Cache.nc"
inline static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$SentCache$insert(/*CtpP.Forwarder*/CtpForwardingEngineP$0$SentCache$t item){
#line 40
  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$Cache$insert(item);
#line 40
}
#line 40
# 161 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void )
#line 161
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current, /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current].msg, FAIL);
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(am_id_t arg_0x40f631b8, am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = CC2420ActiveMessageP$AMSend$send(arg_0x40f631b8, addr, msg, len);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
inline static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(message_t * msg){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = CC2420ActiveMessageP$Packet$payloadLength(msg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(message_t * amsg){
#line 67
  unsigned short __nesc_result;
#line 67

#line 67
  __nesc_result = CC2420ActiveMessageP$AMPacket$destination(amsg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
#line 136
inline static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(message_t * amsg){
#line 136
  unsigned char __nesc_result;
#line 136

#line 136
  __nesc_result = CC2420ActiveMessageP$AMPacket$type(amsg);
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$nextPacket(void )
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
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void )
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

# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
inline static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubPacket$maxPayloadLength(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = CC2420ActiveMessageP$Packet$maxPayloadLength();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 856 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$maxPayloadLength(void )
#line 856
{
  return /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubPacket$maxPayloadLength() - sizeof(ctp_data_header_t );
}

# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
inline static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubPacket$setPayloadLength(message_t * msg, uint8_t len){
#line 83
  CC2420ActiveMessageP$Packet$setPayloadLength(msg, len);
#line 83
}
#line 83
# 852 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$setPayloadLength(message_t *msg, uint8_t len)
#line 852
{
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubPacket$setPayloadLength(msg, len + sizeof(ctp_data_header_t ));
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t /*CtpP.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$send(message_t * msg, uint8_t len){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(0U, msg, len);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 151 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static void /*CtpP.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(message_t * amsg, am_id_t t){
#line 151
  CC2420ActiveMessageP$AMPacket$setType(amsg, t);
#line 151
}
#line 151
#line 92
inline static void /*CtpP.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(message_t * amsg, am_addr_t addr){
#line 92
  CC2420ActiveMessageP$AMPacket$setDestination(amsg, addr);
#line 92
}
#line 92
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline error_t /*CtpP.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 47
{
  /*CtpP.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(msg, dest);
  /*CtpP.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(msg, 113);
  return /*CtpP.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$send(msg, len);
}

# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubSend$send(am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = /*CtpP.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(addr, msg, len);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 294 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline ctp_data_header_t */*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(message_t *m)
#line 294
{
  return (ctp_data_header_t *)/*CtpP.Forwarder*/CtpForwardingEngineP$0$SubPacket$getPayload(m, sizeof(ctp_data_header_t ));
}

#line 896
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$clearOption(message_t *msg, ctp_options_t opt)
#line 896
{
  unsigned char *__nesc_temp50;

#line 897
  (__nesc_temp50 = /*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(msg)->options.data, __nesc_hton_uint8(__nesc_temp50, __nesc_ntoh_uint8(__nesc_temp50) & ~opt));
}

#line 892
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$setOption(message_t *msg, ctp_options_t opt)
#line 892
{
  unsigned char *__nesc_temp49;

#line 893
  (__nesc_temp49 = /*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(msg)->options.data, __nesc_hton_uint8(__nesc_temp49, __nesc_ntoh_uint8(__nesc_temp49) | opt));
}

# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$PacketAcknowledgements$requestAck(message_t * msg){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = CC2420PacketP$Acks$requestAck(msg);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 900 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$setEtx(message_t *msg, uint16_t e)
#line 900
{
#line 900
  __nesc_hton_uint16(/*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(msg)->etx.data, e);
}

# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpInfo.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpInfo$getEtx(uint16_t *etx){
#line 52
  unsigned char __nesc_result;
#line 52

#line 52
  __nesc_result = /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$getEtx(etx);
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
inline static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubPacket$payloadLength(message_t * msg){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = CC2420ActiveMessageP$Packet$payloadLength(msg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 848 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$payloadLength(message_t *msg)
#line 848
{
  return /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubPacket$payloadLength(msg) - sizeof(ctp_data_header_t );
}

#line 929
static inline message_t *
/*CtpP.Forwarder*/CtpForwardingEngineP$0$Receive$default$receive(collection_id_t collectid, message_t *msg, void *payload, 
uint8_t len)
#line 931
{
  return msg;
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * /*CtpP.Forwarder*/CtpForwardingEngineP$0$Receive$receive(collection_id_t arg_0x40dc6680, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  switch (arg_0x40dc6680) {
#line 67
    case AM_OSCILLOSCOPE:
#line 67
      __nesc_result = MultihopOscilloscopeC$Receive$receive(msg, payload, len);
#line 67
      break;
#line 67
    default:
#line 67
      __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP$0$Receive$default$receive(arg_0x40dc6680, msg, payload, len);
#line 67
      break;
#line 67
    }
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 623 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline bool /*CtpP.Router*/CtpRoutingEngineP$0$RootControl$isRoot(void )
#line 623
{
  return /*CtpP.Router*/CtpRoutingEngineP$0$state_is_root;
}

# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/RootControl.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$RootControl$isRoot(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*CtpP.Router*/CtpRoutingEngineP$0$RootControl$isRoot();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Pool.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$put(/*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*CtpP.QEntryPoolP.PoolP*/PoolP$1$Pool$put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$put(/*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 81 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Queue.nc"
inline static /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$t  /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$dequeue(void ){
#line 81
  struct __nesc_unnamed4320 *__nesc_result;
#line 81

#line 81
  __nesc_result = /*CtpP.SendQueueP*/QueueC$0$Queue$dequeue();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 135 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/LruCtpMsgCacheP.nc"
static inline bool /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$Cache$lookup(message_t *m)
#line 135
{
  return /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$lookup(m) < /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count;
}

# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Cache.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$SentCache$lookup(/*CtpP.Forwarder*/CtpForwardingEngineP$0$SentCache$t item){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$Cache$lookup(item);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CongestionTimer$startOneShot(uint32_t dt){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(9U, dt);
#line 62
}
#line 62
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/system/RandomMlcgC.nc"
static inline uint16_t RandomMlcgC$Random$rand16(void )
#line 78
{
  return (uint16_t )RandomMlcgC$Random$rand32();
}

# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Random.nc"
inline static uint16_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$Random$rand16(void ){
#line 41
  unsigned short __nesc_result;
#line 41

#line 41
  __nesc_result = RandomMlcgC$Random$rand16();
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 953 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
inline static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$startCongestionTimer(uint16_t mask, uint16_t offset)
#line 953
{
  uint16_t r = /*CtpP.Forwarder*/CtpForwardingEngineP$0$Random$rand16();

#line 955
  r &= mask;
  r += offset;
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$CongestionTimer$startOneShot(r);
  ;
}

# 81 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$CongestionTimer$isRunning(void ){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$isRunning(9U);
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 582 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline bool /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$isNeighborCongested(am_addr_t n)
#line 582
{
  uint8_t idx;

  if (/*CtpP.Router*/CtpRoutingEngineP$0$ECNOff) {
    return FALSE;
    }
  idx = /*CtpP.Router*/CtpRoutingEngineP$0$routingTableFind(n);
  if (idx < /*CtpP.Router*/CtpRoutingEngineP$0$routingTableActive) {
      return /*CtpP.Router*/CtpRoutingEngineP$0$routingTable[idx].info.congested;
    }
  return FALSE;
}

# 81 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpInfo.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpInfo$isNeighborCongested(am_addr_t n){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$isNeighborCongested(n);
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 525 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline am_addr_t /*CtpP.Router*/CtpRoutingEngineP$0$Routing$nextHop(void )
#line 525
{
  return /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo.parent;
}

# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/UnicastNameFreeRouting.nc"
inline static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$UnicastNameFreeRouting$nextHop(void ){
#line 48
  unsigned short __nesc_result;
#line 48

#line 48
  __nesc_result = /*CtpP.Router*/CtpRoutingEngineP$0$Routing$nextHop();
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 65 "/opt/CVSTinyOS/tinyos-2.x/tos/system/QueueC.nc"
static inline /*CtpP.SendQueueP*/QueueC$0$queue_t /*CtpP.SendQueueP*/QueueC$0$Queue$head(void )
#line 65
{
  return /*CtpP.SendQueueP*/QueueC$0$queue[/*CtpP.SendQueueP*/QueueC$0$head];
}

# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Queue.nc"
inline static /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$t  /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$head(void ){
#line 73
  struct __nesc_unnamed4320 *__nesc_result;
#line 73

#line 73
  __nesc_result = /*CtpP.SendQueueP*/QueueC$0$Queue$head();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$RetxmitTimer$startOneShot(uint32_t dt){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(8U, dt);
#line 62
}
#line 62
# 528 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline bool /*CtpP.Router*/CtpRoutingEngineP$0$Routing$hasRoute(void )
#line 528
{
  return /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo.parent != INVALID_ADDR;
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/UnicastNameFreeRouting.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$UnicastNameFreeRouting$hasRoute(void ){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*CtpP.Router*/CtpRoutingEngineP$0$Routing$hasRoute();
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/system/QueueC.nc"
static inline bool /*CtpP.SendQueueP*/QueueC$0$Queue$empty(void )
#line 53
{
  return /*CtpP.SendQueueP*/QueueC$0$size == 0;
}

# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Queue.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$empty(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*CtpP.SendQueueP*/QueueC$0$Queue$empty();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 382 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask$runTask(void )
#line 382
{
  ;
  if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$sending) {
      ;
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_SEND_BUSY);
      return;
    }
  else {
#line 389
    if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$empty()) {
        ;
        /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_SENDQUEUE_EMPTY);
        return;
      }
    else {
#line 394
      if (!/*CtpP.Forwarder*/CtpForwardingEngineP$0$RootControl$isRoot() && 
      !/*CtpP.Forwarder*/CtpForwardingEngineP$0$UnicastNameFreeRouting$hasRoute()) {
          ;
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$RetxmitTimer$startOneShot(10000);


          /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_NO_ROUTE);

          return;
        }
      else 








        {
          error_t subsendResult;
          fe_queue_entry_t *qe = /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$head();
          uint8_t payloadLen = /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubPacket$payloadLength(qe->msg);
          am_addr_t dest = /*CtpP.Forwarder*/CtpForwardingEngineP$0$UnicastNameFreeRouting$nextHop();
          uint16_t gradient;

          if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpInfo$isNeighborCongested(dest)) {


              if (!/*CtpP.Forwarder*/CtpForwardingEngineP$0$parentCongested) {
                  /*CtpP.Forwarder*/CtpForwardingEngineP$0$parentCongested = TRUE;
                  /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_CONGESTION_BEGIN);
                }
              if (!/*CtpP.Forwarder*/CtpForwardingEngineP$0$CongestionTimer$isRunning()) {
                  /*CtpP.Forwarder*/CtpForwardingEngineP$0$startCongestionTimer(CONGESTED_WAIT_WINDOW, CONGESTED_WAIT_OFFSET);
                }
              ;


              return;
            }
          if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$parentCongested) {
              /*CtpP.Forwarder*/CtpForwardingEngineP$0$parentCongested = FALSE;
              /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_CONGESTION_END);
            }

          if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$SentCache$lookup(qe->msg)) {
              /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_DUPLICATE_CACHE_AT_SEND);
              /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$dequeue();
              if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$put(qe->msg) != SUCCESS) {
                /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_PUT_MSGPOOL_ERR);
                }
#line 445
              if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$put(qe) != SUCCESS) {
                /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_PUT_QEPOOL_ERR);
                }
#line 447
              /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask$postTask();
              return;
            }



          if (dest != /*CtpP.Forwarder*/CtpForwardingEngineP$0$lastParent) {
              qe->retries = MAX_RETRIES;
              /*CtpP.Forwarder*/CtpForwardingEngineP$0$lastParent = dest;
            }

          ;
          if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$RootControl$isRoot()) {
              collection_id_t collectid = __nesc_ntoh_uint8(/*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(qe->msg)->type.data);

#line 461
              memcpy(/*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsgPtr, qe->msg, sizeof(message_t ));
              /*CtpP.Forwarder*/CtpForwardingEngineP$0$ackPending = FALSE;

              ;
              /*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsgPtr = /*CtpP.Forwarder*/CtpForwardingEngineP$0$Receive$receive(collectid, /*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsgPtr, 
              /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$getPayload(/*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsgPtr, /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$payloadLength(/*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsgPtr)), 
              /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$payloadLength(/*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsgPtr));
              /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubSend$sendDone(qe->msg, SUCCESS);
              return;
            }


          if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpInfo$getEtx(&gradient) != SUCCESS) {


              gradient = 0;
            }
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$setEtx(qe->msg, gradient);

          /*CtpP.Forwarder*/CtpForwardingEngineP$0$ackPending = /*CtpP.Forwarder*/CtpForwardingEngineP$0$PacketAcknowledgements$requestAck(qe->msg) == SUCCESS;


          if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpCongestion$isCongested()) {
            /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$setOption(qe->msg, CTP_OPT_ECN);
            }
          else {
#line 486
            /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$clearOption(qe->msg, CTP_OPT_ECN);
            }
          subsendResult = /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubSend$send(dest, qe->msg, payloadLen);
          if (subsendResult == SUCCESS) {

              /*CtpP.Forwarder*/CtpForwardingEngineP$0$sending = TRUE;
              ;
              if (qe->client < /*CtpP.Forwarder*/CtpForwardingEngineP$0$CLIENT_COUNT) {
                  ;
                }
              else {
                  ;
                }
              return;
            }
          else {
#line 501
            if (subsendResult == EOFF) {



                /*CtpP.Forwarder*/CtpForwardingEngineP$0$radioOn = FALSE;
                ;

                /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_SUBSEND_OFF);
              }
            else {
#line 510
              if (subsendResult == EBUSY) {





                  ;

                  /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_SUBSEND_BUSY);
                }
              else {
#line 520
                if (subsendResult == ESIZE) {
                    ;
                    /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$setPayloadLength(qe->msg, /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$maxPayloadLength());
                    /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask$postTask();
                    /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_SUBSEND_SIZE);
                  }
                }
              }
            }
        }
      }
    }
}

# 114 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static void * /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$Send$getPayload(message_t * msg, uint8_t len){
#line 114
  void *__nesc_result;
#line 114

#line 114
  __nesc_result = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$getPayload(0U, msg, len);
#line 114

#line 114
  return __nesc_result;
#line 114
}
#line 114
# 65 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline void */*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$getPayload(message_t *m, uint8_t len)
#line 65
{
  return /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$Send$getPayload(m, len);
}

# 124 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void * MultihopOscilloscopeC$SerialSend$getPayload(message_t * msg, uint8_t len){
#line 124
  void *__nesc_result;
#line 124

#line 124
  __nesc_result = /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$getPayload(msg, len);
#line 124

#line 124
  return __nesc_result;
#line 124
}
#line 124
# 88 "/opt/CVSTinyOS/tinyos-2.x/tos/system/PoolP.nc"
static inline /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$pool_t */*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$Pool$get(void )
#line 88
{
  if (/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$free) {
      /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$pool_t *rval = /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$queue[/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$index];

#line 91
      /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$queue[/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$index] = (void *)0;
      /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$free--;
      /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$index++;
      if (/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$index == 10) {
          /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$index = 0;
        }
      ;
      return rval;
    }
  return (void *)0;
}

# 97 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Pool.nc"
inline static MultihopOscilloscopeC$UARTMessagePool$t * MultihopOscilloscopeC$UARTMessagePool$get(void ){
#line 97
  nx_struct message_t *__nesc_result;
#line 97

#line 97
  __nesc_result = /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$Pool$get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/system/QueueC.nc"
static inline uint8_t /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$maxSize(void )
#line 61
{
  return 10;
}

#line 57
static inline uint8_t /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$size(void )
#line 57
{
  return /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$size;
}

#line 97
static inline error_t /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$enqueue(/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$queue_t newVal)
#line 97
{
  if (/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$size() < /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$maxSize()) {
      ;
      /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$queue[/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$tail] = newVal;
      /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$tail++;
      if (/*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$tail == 10) {
#line 102
        /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$tail = 0;
        }
#line 103
      /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$size++;
      /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

# 90 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Queue.nc"
inline static error_t MultihopOscilloscopeC$UARTQueue$enqueue(MultihopOscilloscopeC$UARTQueue$t  newVal){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*MultihopOscilloscopeAppC.UARTQueueP*/QueueC$1$Queue$enqueue(newVal);
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t PowerCycleP$stopRadio$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(PowerCycleP$stopRadio);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 126 "/opt/CVSTinyOS/tinyos-2.x/tos/system/StateImplP.nc"
static inline bool StateImplP$State$isIdle(uint8_t id)
#line 126
{
  return StateImplP$State$isState(id, StateImplP$S_IDLE);
}

# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/State.nc"
inline static bool PowerCycleP$SendState$isIdle(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = StateImplP$State$isIdle(5U);
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void DefaultLplP$OffTimer$startOneShot(uint32_t dt){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(4U, dt);
#line 62
}
#line 62
# 502 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/lpl/DefaultLplP.nc"
static inline void DefaultLplP$startOffTimer(void )
#line 502
{
  DefaultLplP$OffTimer$startOneShot(100);
}

#line 336
static inline void DefaultLplP$PowerCycle$detected(void )
#line 336
{






  DefaultLplP$startOffTimer();
}

# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/PowerCycle.nc"
inline static void PowerCycleP$PowerCycle$detected(void ){
#line 55
  DefaultLplP$PowerCycle$detected();
#line 55
}
#line 55
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$get(void )
#line 45
{
#line 45
  return (* (volatile uint8_t * )48U & (1 << 6)) != 0;
}

# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static bool CC2420TransmitP$CCA$get(void ){
#line 32
  unsigned char __nesc_result;
#line 32

#line 32
  __nesc_result = /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$get();
#line 32

#line 32
  return __nesc_result;
#line 32
}
#line 32
# 207 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline bool CC2420TransmitP$EnergyIndicator$isReceiving(void )
#line 207
{
  return !CC2420TransmitP$CCA$get();
}

# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/ReceiveIndicator.nc"
inline static bool PowerCycleP$EnergyIndicator$isReceiving(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = CC2420TransmitP$EnergyIndicator$isReceiving();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 165 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline bool CC2420ReceiveP$PacketIndicator$isReceiving(void )
#line 165
{
  bool receiving;

  /* atomic removed: atomic calls only */
#line 167
  {
    receiving = CC2420ReceiveP$receivingPacket;
  }
  return receiving;
}

# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/ReceiveIndicator.nc"
inline static bool PowerCycleP$PacketIndicator$isReceiving(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = CC2420ReceiveP$PacketIndicator$isReceiving();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t PowerCycleP$startRadio$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(PowerCycleP$startRadio);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 66 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/State.nc"
inline static bool PowerCycleP$SplitControlState$isState(uint8_t myState){
#line 66
  unsigned char __nesc_result;
#line 66

#line 66
  __nesc_result = StateImplP$State$isState(4U, myState);
#line 66

#line 66
  return __nesc_result;
#line 66
}
#line 66
# 277 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/lpl/PowerCycleP.nc"
static inline bool PowerCycleP$isDutyCycling(void )
#line 277
{
  return PowerCycleP$sleepInterval > 0 && PowerCycleP$SplitControlState$isState(PowerCycleP$S_ON);
}

#line 239
static inline void PowerCycleP$getCca$runTask(void )
#line 239
{
  uint8_t detects = 0;

#line 241
  if (PowerCycleP$isDutyCycling()) {

      PowerCycleP$ccaChecks++;
      if (PowerCycleP$ccaChecks == 1) {

          PowerCycleP$startRadio$postTask();
          return;
        }

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 250
        {
          for (; PowerCycleP$ccaChecks < 400 && PowerCycleP$SendState$isIdle(); PowerCycleP$ccaChecks++) {
              if (PowerCycleP$PacketIndicator$isReceiving()) {
                  PowerCycleP$PowerCycle$detected();
                  {
#line 254
                    __nesc_atomic_end(__nesc_atomic); 
#line 254
                    return;
                  }
                }
              if (PowerCycleP$EnergyIndicator$isReceiving()) {
                  detects++;
                  if (detects > 3) {
                      PowerCycleP$PowerCycle$detected();
                      {
#line 261
                        __nesc_atomic_end(__nesc_atomic); 
#line 261
                        return;
                      }
                    }
                }
            }
        }
#line 266
        __nesc_atomic_end(__nesc_atomic); }

      if (PowerCycleP$SendState$isIdle()) {
          PowerCycleP$stopRadio$postTask();
        }
    }
}

# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t PowerCycleP$SubControl$start(void ){
#line 83
  unsigned char __nesc_result;
#line 83

#line 83
  __nesc_result = CC2420CsmaP$SplitControl$start();
#line 83

#line 83
  return __nesc_result;
#line 83
}
#line 83
# 233 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/lpl/PowerCycleP.nc"
static inline void PowerCycleP$startRadio$runTask(void )
#line 233
{
  if (PowerCycleP$SubControl$start() != SUCCESS) {
      PowerCycleP$startRadio$postTask();
    }
}

# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/State.nc"
inline static error_t CC2420CsmaP$SplitControlState$requestState(uint8_t reqState){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = StateImplP$State$requestState(1U, reqState);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$get(void ){
#line 53
  unsigned long __nesc_result;
#line 53

#line 53
  __nesc_result = /*Counter32khz32C.Transform32*/TransformCounterC$0$Counter$get();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 75 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$getNow(void )
{
  return /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$get();
}

#line 146
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type dt)
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$getNow(), dt);
}

# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void CC2420ControlP$StartupTimer$start(CC2420ControlP$StartupTimer$size_type dt){
#line 55
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$start(dt);
#line 55
}
#line 55
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )59U |= 1 << 5;
}

# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP$VREN$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$set();
#line 29
}
#line 29
# 187 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP$CC2420Power$startVReg(void )
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
inline static error_t CC2420CsmaP$CC2420Power$startVReg(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = CC2420ControlP$CC2420Power$startVReg();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline uint16_t HplAtm128Timer1P$Timer$get(void )
#line 49
{
#line 49
  return * (volatile uint16_t *)(0x2C + 0x20);
}

# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$timer_size /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$get(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = HplAtm128Timer1P$Timer$get();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline /*CounterOne16C.NCounter*/Atm128CounterC$0$timer_size /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$get(void )
{
  return /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$get();
}

# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$size_type /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$get(void ){
#line 53
  unsigned short __nesc_result;
#line 53

#line 53
  __nesc_result = /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$get();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static Atm128_TIFR_t HplAtm128Timer1P$Timer0Ctrl$getInterruptFlag(void ){
#line 44
  union __nesc_unnamed4273 __nesc_result;
#line 44

#line 44
  __nesc_result = HplAtm128Timer0AsyncP$TimerCtrl$getInterruptFlag();
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 144 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline bool HplAtm128Timer1P$Timer$test(void )
#line 144
{
  return HplAtm128Timer1P$Timer0Ctrl$getInterruptFlag().bits.tov1;
}

# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static bool /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$test(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = HplAtm128Timer1P$Timer$test();
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline bool /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$isOverflowPending(void )
{
  return /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$test();
}

# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static bool /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$isOverflowPending(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$isOverflowPending();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 133 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P$CompareA$start(void )
#line 133
{
#line 133
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 4;
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$start(void ){
#line 56
  HplAtm128Timer1P$CompareA$start();
#line 56
}
#line 56
# 127 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P$CompareA$reset(void )
#line 127
{
#line 127
  * (volatile uint8_t *)(0x36 + 0x20) = 1 << 4;
}

# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$reset(void ){
#line 53
  HplAtm128Timer1P$CompareA$reset();
#line 53
}
#line 53
# 183 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P$CompareA$set(uint16_t t)
#line 183
{
#line 183
  * (volatile uint16_t *)(0x2A + 0x20) = t;
}

# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$set(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$size_type t){
#line 45
  HplAtm128Timer1P$CompareA$set(t);
#line 45
}
#line 45
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$timer_size /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$get(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = HplAtm128Timer1P$Timer$get();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$timer_size t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$timer_size dt)
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
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$size_type dt){
#line 92
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$startAt(t0, dt);
#line 92
}
#line 92
# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void PowerCycleP$OnTimer$startOneShot(uint32_t dt){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(2U, dt);
#line 62
}
#line 62
# 109 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t PowerCycleP$SubControl$stop(void ){
#line 109
  unsigned char __nesc_result;
#line 109

#line 109
  __nesc_result = CC2420CsmaP$SplitControl$stop();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 224 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/lpl/PowerCycleP.nc"
static inline void PowerCycleP$stopRadio$runTask(void )
#line 224
{
  error_t error = PowerCycleP$SubControl$stop();

#line 226
  if (error != SUCCESS) {

      PowerCycleP$finishSplitControlRequests();
      PowerCycleP$OnTimer$startOneShot(PowerCycleP$sleepInterval);
    }
}

# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )56U |= 1 << 0;
}

# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP$CSN$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$set();
#line 29
}
#line 29
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420TransmitP$SpiResource$release(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = CC2420SpiP$Resource$release(/*CC2420TransmitC.Spi*/CC2420SpiC$3$CLIENT_ID);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 138 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P$Capture$stop(void )
#line 138
{
#line 138
  * (volatile uint8_t *)(0x37 + 0x20) &= ~(1 << 5);
}

# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$stop(void ){
#line 61
  HplAtm128Timer1P$Capture$stop();
#line 61
}
#line 61
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static inline void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$disable(void )
#line 60
{
  /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$stop();
}

# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioCapture.nc"
inline static void CC2420TransmitP$CaptureSFD$disable(void ){
#line 55
  /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$disable();
#line 55
}
#line 55
# 139 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P$CompareA$stop(void )
#line 139
{
#line 139
  * (volatile uint8_t *)(0x37 + 0x20) &= ~(1 << 4);
}

# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$stop(void ){
#line 59
  HplAtm128Timer1P$CompareA$stop();
#line 59
}
#line 59
# 65 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$stop(void )
#line 65
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$stop();
}

# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$stop(void ){
#line 62
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$stop();
#line 62
}
#line 62
# 91 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$stop(void )
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$stop();
}

# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void CC2420TransmitP$BackoffTimer$stop(void ){
#line 62
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$stop();
#line 62
}
#line 62
# 159 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP$StdControl$stop(void )
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

# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP$ChipSpiResource$abortRelease(void )
#line 95
{
  /* atomic removed: atomic calls only */
#line 96
  CC2420SpiP$release = FALSE;
}

# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static void CC2420TransmitP$ChipSpiResource$abortRelease(void ){
#line 31
  CC2420SpiP$ChipSpiResource$abortRelease();
#line 31
}
#line 31
# 341 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP$ChipSpiResource$releasing(void )
#line 341
{
  if (CC2420TransmitP$abortSpiRelease) {
      CC2420TransmitP$ChipSpiResource$abortRelease();
    }
}

# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static void CC2420SpiP$ChipSpiResource$releasing(void ){
#line 24
  CC2420TransmitP$ChipSpiResource$releasing();
#line 24
}
#line 24
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuPowerState.nc"
inline static void Atm128SpiP$McuPowerState$update(void ){
#line 44
  McuSleepC$McuPowerState$update();
#line 44
}
#line 44
# 94 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP$SPI$sleep(void )
#line 94
{
}

# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP$Spi$sleep(void ){
#line 72
  HplAtm128SpiP$SPI$sleep();
#line 72
}
#line 72
#line 99
inline static void Atm128SpiP$Spi$enableSpi(bool busOn){
#line 99
  HplAtm128SpiP$SPI$enableSpi(busOn);
#line 99
}
#line 99
# 119 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP$stopSpi(void )
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

# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
inline static bool Atm128SpiP$ArbiterInfo$inUse(void ){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ArbiterInfo$inUse();
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 172 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$unconfigure(uint8_t id)
#line 172
{
}

# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$unconfigure(uint8_t arg_0x40abe718){
#line 55
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$unconfigure(arg_0x40abe718);
#line 55
}
#line 55
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue(void )
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
inline static resource_client_id_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$dequeue(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty(void )
#line 50
{
  return /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;
}

# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$isEmpty(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 97 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$release(uint8_t id)
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
inline static error_t Atm128SpiP$ResourceArbiter$release(uint8_t arg_0x40a3ed10){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$release(arg_0x40a3ed10);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 322 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline error_t Atm128SpiP$Resource$release(uint8_t id)
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
inline static error_t HplCC2420SpiP$SubResource$release(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = Atm128SpiP$Resource$release(0U);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplCC2420SpiP$SS$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$set();
#line 29
}
#line 29
# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static bool Atm128SpiP$ResourceArbiter$isOwner(uint8_t arg_0x40a3ed10){
#line 118
  unsigned char __nesc_result;
#line 118

#line 118
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$isOwner(arg_0x40a3ed10);
#line 118

#line 118
  return __nesc_result;
#line 118
}
#line 118
# 332 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline uint8_t Atm128SpiP$Resource$isOwner(uint8_t id)
#line 332
{
  return Atm128SpiP$ResourceArbiter$isOwner(id);
}

# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static bool HplCC2420SpiP$SubResource$isOwner(void ){
#line 118
  unsigned char __nesc_result;
#line 118

#line 118
  __nesc_result = Atm128SpiP$Resource$isOwner(0U);
#line 118

#line 118
  return __nesc_result;
#line 118
}
#line 118
# 75 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline error_t HplCC2420SpiP$Resource$release(void )
{
  if (HplCC2420SpiP$SubResource$isOwner()) {
    HplCC2420SpiP$SS$set();
    }
  return HplCC2420SpiP$SubResource$release();
}

# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420SpiP$SpiResource$release(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = HplCC2420SpiP$Resource$release();
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuPowerState.nc"
inline static void HplAtm128SpiP$Mcu$update(void ){
#line 44
  McuSleepC$McuPowerState$update();
#line 44
}
#line 44
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$disable(void )
#line 43
{
#line 43
  * (volatile uint8_t *)(0x39 + 0x20) &= ~(1 << 6);
}

# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$disable(void ){
#line 40
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$disable();
#line 40
}
#line 40
# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$disable(void )
#line 33
{
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$disable();
  return SUCCESS;
}

# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ReceiveP$InterruptFIFOP$disable(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$disable();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ReceiveP$CSN$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$set();
#line 29
}
#line 29
# 134 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline error_t CC2420ReceiveP$StdControl$stop(void )
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
static __inline void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )59U &= ~(1 << 5);
}

# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP$VREN$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$clr();
#line 30
}
#line 30
# 122 "MultihopOscilloscopeC.nc"
static inline void MultihopOscilloscopeC$RadioControl$stopDone(error_t error)
#line 122
{
}

# 288 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$RadioControl$stopDone(error_t err)
#line 288
{
  if (err == SUCCESS) {
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$radioOn = FALSE;
    }
}

# 245 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$RadioControl$stopDone(error_t error)
#line 245
{
  /*CtpP.Router*/CtpRoutingEngineP$0$radioOn = FALSE;
  ;
}

# 117 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void PowerCycleP$SplitControl$stopDone(error_t error){
#line 117
  /*CtpP.Router*/CtpRoutingEngineP$0$RadioControl$stopDone(error);
#line 117
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$RadioControl$stopDone(error);
#line 117
  MultihopOscilloscopeC$RadioControl$stopDone(error);
#line 117
}
#line 117
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP$startDoneTask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(SerialP$startDoneTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 342 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline error_t SerialP$SplitControl$start(void )
#line 342
{
  SerialP$startDoneTask$postTask();
  return SUCCESS;
}

# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t MultihopOscilloscopeC$SerialControl$start(void ){
#line 83
  unsigned char __nesc_result;
#line 83

#line 83
  __nesc_result = SerialP$SplitControl$start();
#line 83

#line 83
  return __nesc_result;
#line 83
}
#line 83
# 357 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$maxPayloadLength(uint8_t client)
#line 357
{
  return /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$maxPayloadLength();
}

# 101 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static uint8_t MultihopOscilloscopeC$Send$maxPayloadLength(void ){
#line 101
  unsigned char __nesc_result;
#line 101

#line 101
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$maxPayloadLength(0U);
#line 101

#line 101
  return __nesc_result;
#line 101
}
#line 101
# 94 "MultihopOscilloscopeC.nc"
static inline void MultihopOscilloscopeC$RadioControl$startDone(error_t error)
#line 94
{
  if (error != SUCCESS) {
    MultihopOscilloscopeC$fatal_problem();
    }
  if (sizeof MultihopOscilloscopeC$local > MultihopOscilloscopeC$Send$maxPayloadLength()) {
    MultihopOscilloscopeC$fatal_problem();
    }
  if (MultihopOscilloscopeC$SerialControl$start() != SUCCESS) {
    MultihopOscilloscopeC$fatal_problem();
    }
}

# 264 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$RadioControl$startDone(error_t err)
#line 264
{
  if (err == SUCCESS) {
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$radioOn = TRUE;
      if (!/*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$empty()) {
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask$postTask();
        }
    }
}

# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*CtpP.Router*/CtpRoutingEngineP$0$BeaconTimer$startOneShot(uint32_t dt){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(6U, dt);
#line 62
}
#line 62
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Random.nc"
inline static uint16_t /*CtpP.Router*/CtpRoutingEngineP$0$Random$rand16(void ){
#line 41
  unsigned short __nesc_result;
#line 41

#line 41
  __nesc_result = RandomMlcgC$Random$rand16();
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 234 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$RadioControl$startDone(error_t error)
#line 234
{
  /*CtpP.Router*/CtpRoutingEngineP$0$radioOn = TRUE;
  ;
  if (/*CtpP.Router*/CtpRoutingEngineP$0$running) {
      uint16_t nextInt;

#line 239
      nextInt = /*CtpP.Router*/CtpRoutingEngineP$0$Random$rand16() % BEACON_INTERVAL;
      nextInt += BEACON_INTERVAL >> 1;
      /*CtpP.Router*/CtpRoutingEngineP$0$BeaconTimer$startOneShot(nextInt);
    }
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void PowerCycleP$SplitControl$startDone(error_t error){
#line 92
  /*CtpP.Router*/CtpRoutingEngineP$0$RadioControl$startDone(error);
#line 92
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$RadioControl$startDone(error);
#line 92
  MultihopOscilloscopeC$RadioControl$startDone(error);
#line 92
}
#line 92
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t DefaultLplP$stopRadio$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(DefaultLplP$stopRadio);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 109 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t DefaultLplP$SubControl$stop(void ){
#line 109
  unsigned char __nesc_result;
#line 109

#line 109
  __nesc_result = CC2420CsmaP$SplitControl$stop();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/State.nc"
inline static uint8_t DefaultLplP$SendState$getState(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = StateImplP$State$getState(5U);
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 474 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/lpl/DefaultLplP.nc"
static inline void DefaultLplP$stopRadio$runTask(void )
#line 474
{
  if (DefaultLplP$SendState$getState() == S_LPL_NOT_SENDING) {
      if (DefaultLplP$SubControl$stop() != SUCCESS) {
          DefaultLplP$stopRadio$postTask();
        }
    }
}

# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t DefaultLplP$SubControl$start(void ){
#line 83
  unsigned char __nesc_result;
#line 83

#line 83
  __nesc_result = CC2420CsmaP$SplitControl$start();
#line 83

#line 83
  return __nesc_result;
#line 83
}
#line 83
# 468 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/lpl/DefaultLplP.nc"
static inline void DefaultLplP$startRadio$runTask(void )
#line 468
{
  if (DefaultLplP$SubControl$start() != SUCCESS) {
      DefaultLplP$startRadio$postTask();
    }
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t DefaultLplP$resend$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(DefaultLplP$resend);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void CC2420TransmitP$BackoffTimer$start(CC2420TransmitP$BackoffTimer$size_type dt){
#line 55
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$start(dt);
#line 55
}
#line 55
# 217 "CC2420CsmaP.nc"
static inline void CC2420CsmaP$SubBackoff$requestInitialBackoff(message_t *msg)
#line 217
{
}

# 81 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420TransmitP$RadioBackoff$requestInitialBackoff(message_t * msg){
#line 81
  CC2420CsmaP$SubBackoff$requestInitialBackoff(msg);
#line 81
}
#line 81
# 540 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP$resend(bool cca)
#line 540
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 542
    {
      if (CC2420TransmitP$m_state == CC2420TransmitP$S_CANCEL) {
          {
            unsigned char __nesc_temp = 
#line 544
            ECANCEL;

            {
#line 544
              __nesc_atomic_end(__nesc_atomic); 
#line 544
              return __nesc_temp;
            }
          }
        }
#line 547
      if (CC2420TransmitP$m_state != CC2420TransmitP$S_STARTED) {
          {
            unsigned char __nesc_temp = 
#line 548
            FAIL;

            {
#line 548
              __nesc_atomic_end(__nesc_atomic); 
#line 548
              return __nesc_temp;
            }
          }
        }
#line 551
      CC2420TransmitP$m_cca = cca;
      CC2420TransmitP$m_state = cca ? CC2420TransmitP$S_SAMPLE_CCA : CC2420TransmitP$S_BEGIN_TRANSMIT;
      CC2420TransmitP$totalCcaChecks = 0;
    }
#line 554
    __nesc_atomic_end(__nesc_atomic); }

  if (CC2420TransmitP$m_cca) {
      CC2420TransmitP$RadioBackoff$requestInitialBackoff(CC2420TransmitP$m_msg);
      CC2420TransmitP$BackoffTimer$start(CC2420TransmitP$myInitialBackoff);
    }
  else {
#line 560
    if (CC2420TransmitP$acquireSpiResource() == SUCCESS) {
        CC2420TransmitP$attemptSend();
      }
    }
  return SUCCESS;
}

#line 176
static inline error_t CC2420TransmitP$Send$resend(bool useCca)
#line 176
{
  return CC2420TransmitP$resend(useCca);
}

# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
inline static error_t DefaultLplP$Resend$resend(bool useCca){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = CC2420TransmitP$Send$resend(useCca);
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 462 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/lpl/DefaultLplP.nc"
static inline void DefaultLplP$resend$runTask(void )
#line 462
{
  if (DefaultLplP$Resend$resend(TRUE) != SUCCESS) {
      DefaultLplP$resend$postTask();
    }
}

# 87 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420TransmitP$SpiResource$immediateRequest(void ){
#line 87
  unsigned char __nesc_result;
#line 87

#line 87
  __nesc_result = CC2420SpiP$Resource$immediateRequest(/*CC2420TransmitC.Spi*/CC2420SpiC$3$CLIENT_ID);
#line 87

#line 87
  return __nesc_result;
#line 87
}
#line 87
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/State.nc"
inline static error_t CC2420SpiP$WorkingState$requestState(uint8_t reqState){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = StateImplP$State$requestState(0U, reqState);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline bool HplCC2420SpiP$Resource$isOwner(void )
{
  return HplCC2420SpiP$SubResource$isOwner();
}

# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static bool CC2420SpiP$SpiResource$isOwner(void ){
#line 118
  unsigned char __nesc_result;
#line 118

#line 118
  __nesc_result = HplCC2420SpiP$Resource$isOwner();
#line 118

#line 118
  return __nesc_result;
#line 118
}
#line 118
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )56U &= ~(1 << 0);
}

# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplCC2420SpiP$SS$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$clr();
#line 30
}
#line 30
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )55U |= 1 << 0;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplCC2420SpiP$SS$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$makeOutput();
#line 35
}
#line 35
# 170 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$configure(uint8_t id)
#line 170
{
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$configure(uint8_t arg_0x40abe718){
#line 49
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$configure(arg_0x40abe718);
#line 49
}
#line 49
# 168 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$immediateRequested(uint8_t id)
#line 168
{
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$immediateRequested(uint8_t arg_0x40a9bab0){
#line 51
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$immediateRequested(arg_0x40a9bab0);
#line 51
}
#line 51
# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$immediateRequest(uint8_t id)
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
inline static error_t Atm128SpiP$ResourceArbiter$immediateRequest(uint8_t arg_0x40a3ed10){
#line 87
  unsigned char __nesc_result;
#line 87

#line 87
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$immediateRequest(arg_0x40a3ed10);
#line 87

#line 87
  return __nesc_result;
#line 87
}
#line 87
# 305 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline error_t Atm128SpiP$Resource$immediateRequest(uint8_t id)
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
inline static error_t HplCC2420SpiP$SubResource$immediateRequest(void ){
#line 87
  unsigned char __nesc_result;
#line 87

#line 87
  __nesc_result = Atm128SpiP$Resource$immediateRequest(0U);
#line 87

#line 87
  return __nesc_result;
#line 87
}
#line 87
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline error_t HplCC2420SpiP$Resource$immediateRequest(void )
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
inline static error_t CC2420SpiP$SpiResource$immediateRequest(void ){
#line 87
  unsigned char __nesc_result;
#line 87

#line 87
  __nesc_result = HplCC2420SpiP$Resource$immediateRequest();
#line 87

#line 87
  return __nesc_result;
#line 87
}
#line 87
# 156 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP$SPI$setMasterBit(bool isMaster)
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
static __inline void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP$9$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )55U |= 1 << 1;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP$SCK$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP$9$IO$makeOutput();
#line 35
}
#line 35
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP$11$IO$makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )55U &= ~(1 << 3);
}

# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP$MISO$makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP$11$IO$makeInput();
#line 33
}
#line 33
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP$10$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )55U |= 1 << 2;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP$MOSI$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP$10$IO$makeOutput();
#line 35
}
#line 35
# 79 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP$SPI$initMaster(void )
#line 79
{
  HplAtm128SpiP$MOSI$makeOutput();
  HplAtm128SpiP$MISO$makeInput();
  HplAtm128SpiP$SCK$makeOutput();
  HplAtm128SpiP$SPI$setMasterBit(TRUE);
}

# 66 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP$Spi$initMaster(void ){
#line 66
  HplAtm128SpiP$SPI$initMaster();
#line 66
}
#line 66
# 213 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP$SPI$setMasterDoubleSpeed(bool on)
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
inline static void Atm128SpiP$Spi$setMasterDoubleSpeed(bool on){
#line 125
  HplAtm128SpiP$SPI$setMasterDoubleSpeed(on);
#line 125
}
#line 125
# 169 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP$SPI$setClockPolarity(bool highWhenIdle)
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
inline static void Atm128SpiP$Spi$setClockPolarity(bool highWhenIdle){
#line 108
  HplAtm128SpiP$SPI$setClockPolarity(highWhenIdle);
#line 108
}
#line 108
# 183 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP$SPI$setClockPhase(bool sampleOnTrailing)
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
inline static void Atm128SpiP$Spi$setClockPhase(bool sampleOnTrailing){
#line 111
  HplAtm128SpiP$SPI$setClockPhase(sampleOnTrailing);
#line 111
}
#line 111
# 200 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP$SPI$setClock(uint8_t v)
#line 200
{
  v &= 1 | 0;
  * (volatile uint8_t *)(0x0D + 0x20) = (* (volatile uint8_t *)(0x0D + 0x20) & ~(1 | 0)) | v;
}

# 114 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP$Spi$setClock(uint8_t speed){
#line 114
  HplAtm128SpiP$SPI$setClock(speed);
#line 114
}
#line 114
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420TransmitP$SpiResource$request(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = CC2420SpiP$Resource$request(/*CC2420TransmitC.Spi*/CC2420SpiC$3$CLIENT_ID);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(resource_client_id_t id)
#line 54
{
  return /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ[id] != /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY || /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qTail == id;
}

#line 72
static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(resource_client_id_t id)
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
inline static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$enqueue(resource_client_id_t id){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(id);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 166 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$requested(uint8_t id)
#line 166
{
}

# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$requested(uint8_t arg_0x40a9bab0){
#line 43
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$requested(arg_0x40a9bab0);
#line 43
}
#line 43
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$request(uint8_t id)
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
inline static error_t Atm128SpiP$ResourceArbiter$request(uint8_t arg_0x40a3ed10){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$request(arg_0x40a3ed10);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 313 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline error_t Atm128SpiP$Resource$request(uint8_t id)
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
inline static error_t HplCC2420SpiP$SubResource$request(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = Atm128SpiP$Resource$request(0U);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline error_t HplCC2420SpiP$Resource$request(void )
{
  return HplCC2420SpiP$SubResource$request();
}

# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420SpiP$SpiResource$request(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = HplCC2420SpiP$Resource$request();
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP$SPI$write(uint8_t d)
#line 99
{
#line 99
  * (volatile uint8_t *)(0x0F + 0x20) = d;
}

# 86 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP$Spi$write(uint8_t data){
#line 86
  HplAtm128SpiP$SPI$write(data);
#line 86
}
#line 86
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420TransmitP$STXONCCA$strobe(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = CC2420SpiP$Strobe$strobe(CC2420_STXONCCA);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
inline static cc2420_status_t CC2420TransmitP$STXON$strobe(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = CC2420SpiP$Strobe$strobe(CC2420_STXON);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
inline static cc2420_status_t CC2420TransmitP$SNOP$strobe(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = CC2420SpiP$Strobe$strobe(CC2420_SNOP);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 225 "CC2420CsmaP.nc"
static inline void CC2420CsmaP$SubBackoff$requestCongestionBackoff(message_t *msg)
#line 225
{
}

# 88 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420TransmitP$RadioBackoff$requestCongestionBackoff(message_t * msg){
#line 88
  CC2420CsmaP$SubBackoff$requestCongestionBackoff(msg);
#line 88
}
#line 88
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t DefaultLplP$send$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(DefaultLplP$send);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 301 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint32_t __nesc_hton_uint32(void * target, uint32_t value)
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

#line 257
static __inline  int8_t __nesc_hton_int8(void * target, int8_t value)
#line 257
{
#line 257
  __nesc_hton_uint8(target, value);
#line 257
  return value;
}

# 512 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP$send(message_t * p_msg, bool cca)
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
static inline error_t CC2420TransmitP$Send$send(message_t * p_msg, bool useCca)
#line 172
{
  return CC2420TransmitP$send(p_msg, useCca);
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
inline static error_t CC2420CsmaP$CC2420Transmit$send(message_t * p_msg, bool useCca){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = CC2420TransmitP$Send$send(p_msg, useCca);
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 246 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_leuint8(const void * source)
#line 246
{
  const uint8_t *base = source;

#line 248
  return base[0];
}

# 261 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP$RadioBackoff$default$requestCca(am_id_t id, 
message_t *msg)
#line 262
{
}

# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420ActiveMessageP$RadioBackoff$requestCca(am_id_t arg_0x40750948, message_t * msg){
#line 95
    CC2420ActiveMessageP$RadioBackoff$default$requestCca(arg_0x40750948, msg);
#line 95
}
#line 95
# 209 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP$SubBackoff$requestCca(message_t *msg)
#line 209
{

  CC2420ActiveMessageP$RadioBackoff$requestCca(__nesc_ntoh_leuint8(((cc2420_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t )))->type.data), msg);
}

# 327 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/lpl/DefaultLplP.nc"
static inline void DefaultLplP$RadioBackoff$requestCca(message_t *msg)
#line 327
{
}

# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP$RadioBackoff$requestCca(message_t * msg){
#line 95
  DefaultLplP$RadioBackoff$requestCca(msg);
#line 95
  CC2420ActiveMessageP$SubBackoff$requestCca(msg);
#line 95
}
#line 95
# 111 "/opt/CVSTinyOS/tinyos-2.x/tos/system/StateImplP.nc"
static inline void StateImplP$State$forceState(uint8_t id, uint8_t reqState)
#line 111
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 112
    StateImplP$state[id] = reqState;
#line 112
    __nesc_atomic_end(__nesc_atomic); }
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/State.nc"
inline static void CC2420CsmaP$SplitControlState$forceState(uint8_t reqState){
#line 51
  StateImplP$State$forceState(1U, reqState);
#line 51
}
#line 51
#line 66
inline static bool CC2420CsmaP$SplitControlState$isState(uint8_t myState){
#line 66
  unsigned char __nesc_result;
#line 66

#line 66
  __nesc_result = StateImplP$State$isState(1U, myState);
#line 66

#line 66
  return __nesc_result;
#line 66
}
#line 66
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * CC2420CsmaP$CC2420PacketBody$getMetadata(message_t * msg){
#line 47
  nx_struct cc2420_metadata_t *__nesc_result;
#line 47

#line 47
  __nesc_result = CC2420PacketP$CC2420PacketBody$getMetadata(msg);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
#line 42
inline static cc2420_header_t * CC2420CsmaP$CC2420PacketBody$getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP$CC2420PacketBody$getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 123 "CC2420CsmaP.nc"
static inline error_t CC2420CsmaP$Send$send(message_t *p_msg, uint8_t len)
#line 123
{
  unsigned char *__nesc_temp45;
  unsigned char *__nesc_temp44;
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

  __nesc_hton_leuint8(header->length.data, len + CC2420_SIZE);
  (__nesc_temp44 = header->fcf.data, __nesc_hton_leuint16(__nesc_temp44, __nesc_ntoh_leuint16(__nesc_temp44) & (1 << IEEE154_FCF_ACK_REQ)));
  (__nesc_temp45 = header->fcf.data, __nesc_hton_leuint16(__nesc_temp45, __nesc_ntoh_leuint16(__nesc_temp45) | ((((IEEE154_TYPE_DATA << IEEE154_FCF_FRAME_TYPE) | (
  1 << IEEE154_FCF_INTRAPAN)) | (
  IEEE154_ADDR_SHORT << IEEE154_FCF_DEST_ADDR_MODE)) | (
  IEEE154_ADDR_SHORT << IEEE154_FCF_SRC_ADDR_MODE))));

  __nesc_hton_int8(metadata->ack.data, FALSE);
  __nesc_hton_uint8(metadata->rssi.data, 0);
  __nesc_hton_uint8(metadata->lqi.data, 0);
  __nesc_hton_int8(metadata->timesync.data, FALSE);
  __nesc_hton_uint32(metadata->timestamp.data, CC2420_INVALID_TIMESTAMP);

  CC2420CsmaP$ccaOn = FALSE;
  CC2420CsmaP$RadioBackoff$requestCca(CC2420CsmaP$m_msg);

  CC2420CsmaP$CC2420Transmit$send(CC2420CsmaP$m_msg, CC2420CsmaP$ccaOn);
  return SUCCESS;
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t CC2420TinyosNetworkP$SubSend$send(message_t * msg, uint8_t len){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = CC2420CsmaP$Send$send(msg, len);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * CC2420TinyosNetworkP$CC2420PacketBody$getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP$CC2420PacketBody$getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline error_t CC2420TinyosNetworkP$Send$send(message_t *msg, uint8_t len)
#line 61
{
  __nesc_hton_leuint8(CC2420TinyosNetworkP$CC2420PacketBody$getHeader(msg)->network.data, 0x3f);
  return CC2420TinyosNetworkP$SubSend$send(msg, len);
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t DefaultLplP$SubSend$send(message_t * msg, uint8_t len){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = CC2420TinyosNetworkP$Send$send(msg, len);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 456 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/lpl/DefaultLplP.nc"
static inline void DefaultLplP$send$runTask(void )
#line 456
{
  if (DefaultLplP$SubSend$send(DefaultLplP$currentSendMsg, DefaultLplP$currentSendLen) != SUCCESS) {
      DefaultLplP$send$postTask();
    }
}

# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420TransmitP$TXCTRL$write(uint16_t data){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = CC2420SpiP$Reg$write(CC2420_TXCTRL, data);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SpiPacket.nc"
inline static error_t CC2420SpiP$SpiPacket$send(uint8_t * txBuf, uint8_t * rxBuf, uint16_t len){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = Atm128SpiP$SpiPacket$send(txBuf, rxBuf, len);
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 34 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SpiByte.nc"
inline static uint8_t CC2420SpiP$SpiByte$write(uint8_t tx){
#line 34
  unsigned char __nesc_result;
#line 34

#line 34
  __nesc_result = Atm128SpiP$SpiByte$write(tx);
#line 34

#line 34
  return __nesc_result;
#line 34
}
#line 34
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/State.nc"
inline static bool CC2420SpiP$WorkingState$isIdle(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = StateImplP$State$isIdle(0U);
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 214 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline cc2420_status_t CC2420SpiP$Fifo$write(uint8_t addr, uint8_t *data, 
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
inline static cc2420_status_t CC2420TransmitP$TXFIFO$write(uint8_t * data, uint8_t length){
#line 82
  unsigned char __nesc_result;
#line 82

#line 82
  __nesc_result = CC2420SpiP$Fifo$write(CC2420_TXFIFO, data, length);
#line 82

#line 82
  return __nesc_result;
#line 82
}
#line 82
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t Atm128SpiP$zeroTask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(Atm128SpiP$zeroTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 93 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline message_t *CC2420TinyosNetworkP$NonTinyosReceive$default$receive(uint8_t networkId, message_t *msg, void *payload, uint8_t len)
#line 93
{
  return msg;
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * CC2420TinyosNetworkP$NonTinyosReceive$receive(uint8_t arg_0x40ca5bb8, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
    __nesc_result = CC2420TinyosNetworkP$NonTinyosReceive$default$receive(arg_0x40ca5bb8, msg, payload, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$toggle(void )
#line 48
{
#line 48
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 48
    * (volatile uint8_t * )59U ^= 1 << 0;
#line 48
    __nesc_atomic_end(__nesc_atomic); }
}

# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led2$toggle(void ){
#line 31
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$toggle();
#line 31
}
#line 31
# 103 "/opt/CVSTinyOS/tinyos-2.x/tos/system/LedsP.nc"
static inline void LedsP$Leds$led2Toggle(void )
#line 103
{
  LedsP$Led2$toggle();
  ;
#line 105
  ;
}

# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void MultihopOscilloscopeC$Leds$led2Toggle(void ){
#line 89
  LedsP$Leds$led2Toggle();
#line 89
}
#line 89
# 287 "MultihopOscilloscopeC.nc"
inline static void MultihopOscilloscopeC$report_received(void )
#line 287
{
#line 287
  MultihopOscilloscopeC$Leds$led2Toggle();
}

#line 204
static inline message_t *
MultihopOscilloscopeC$Snoop$receive(message_t *msg, void *payload, uint8_t len)
#line 205
{
  oscilloscope_t *omsg = payload;

  MultihopOscilloscopeC$report_received();


  if (__nesc_ntoh_uint16(omsg->version.data) > __nesc_ntoh_uint16(MultihopOscilloscopeC$local.version.data)) {
      __nesc_hton_uint16(MultihopOscilloscopeC$local.version.data, __nesc_ntoh_uint16(omsg->version.data));
      __nesc_hton_uint16(MultihopOscilloscopeC$local.interval.data, __nesc_ntoh_uint16(omsg->interval.data));
      MultihopOscilloscopeC$startTimer();
    }



  if (__nesc_ntoh_uint16(omsg->count.data) > __nesc_ntoh_uint16(MultihopOscilloscopeC$local.count.data)) {
      __nesc_hton_uint16(MultihopOscilloscopeC$local.count.data, __nesc_ntoh_uint16(omsg->count.data));
      MultihopOscilloscopeC$suppress_count_change = TRUE;
    }

  return msg;
}

# 935 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline message_t *
/*CtpP.Forwarder*/CtpForwardingEngineP$0$Snoop$default$receive(collection_id_t collectid, message_t *msg, void *payload, 
uint8_t len)
#line 937
{
  return msg;
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * /*CtpP.Forwarder*/CtpForwardingEngineP$0$Snoop$receive(collection_id_t arg_0x40dc6d68, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  switch (arg_0x40dc6d68) {
#line 67
    case AM_OSCILLOSCOPE:
#line 67
      __nesc_result = MultihopOscilloscopeC$Snoop$receive(msg, payload, len);
#line 67
      break;
#line 67
    default:
#line 67
      __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP$0$Snoop$default$receive(arg_0x40dc6d68, msg, payload, len);
#line 67
      break;
#line 67
    }
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 76 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpInfo.nc"
inline static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpInfo$setNeighborCongested(am_addr_t n, bool congested){
#line 76
  /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$setNeighborCongested(n, congested);
#line 76
}
#line 76
# 180 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$resetInterval(void )
#line 180
{
  /*CtpP.Router*/CtpRoutingEngineP$0$currentInterval = 128;
  /*CtpP.Router*/CtpRoutingEngineP$0$chooseAdvertiseTime();
}

#line 560
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$triggerRouteUpdate(void )
#line 560
{
  /*CtpP.Router*/CtpRoutingEngineP$0$resetInterval();
}

# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpInfo.nc"
inline static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpInfo$triggerRouteUpdate(void ){
#line 59
  /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$triggerRouteUpdate();
#line 59
}
#line 59
# 77 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$AMPacket$source(message_t * amsg){
#line 77
  unsigned short __nesc_result;
#line 77

#line 77
  __nesc_result = CC2420ActiveMessageP$AMPacket$source(amsg);
#line 77

#line 77
  return __nesc_result;
#line 77
}
#line 77
# 797 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline message_t *
/*CtpP.Forwarder*/CtpForwardingEngineP$0$SubSnoop$receive(message_t *msg, void *payload, uint8_t len)
#line 798
{

  am_addr_t proximalSrc = /*CtpP.Forwarder*/CtpForwardingEngineP$0$AMPacket$source(msg);



  if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$option(msg, CTP_OPT_PULL)) {
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpInfo$triggerRouteUpdate();
    }

  /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpInfo$setNeighborCongested(proximalSrc, /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$option(msg, CTP_OPT_ECN));
  return /*CtpP.Forwarder*/CtpForwardingEngineP$0$Snoop$receive(/*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getType(msg), 
  msg, payload + sizeof(ctp_data_header_t ), 
  len - sizeof(ctp_data_header_t ));
}

# 244 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline message_t *CC2420ActiveMessageP$Snoop$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 244
{
  return msg;
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * CC2420ActiveMessageP$Snoop$receive(am_id_t arg_0x40752870, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  switch (arg_0x40752870) {
#line 67
    case 113:
#line 67
      __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubSnoop$receive(msg, payload, len);
#line 67
      break;
#line 67
    default:
#line 67
      __nesc_result = CC2420ActiveMessageP$Snoop$default$receive(arg_0x40752870, msg, payload, len);
#line 67
      break;
#line 67
    }
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 81 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$RetxmitTimer$isRunning(void ){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$isRunning(8U);
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$AMPacket$destination(message_t * amsg){
#line 67
  unsigned short __nesc_result;
#line 67

#line 67
  __nesc_result = CC2420ActiveMessageP$AMPacket$destination(amsg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 871 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getSequenceNumber(message_t *msg)
#line 871
{
#line 871
  return __nesc_ntoh_uint8(/*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(msg)->originSeqNo.data);
}

# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/CollectionDebug.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEventMsg(uint8_t type, uint16_t msg, am_addr_t origin, am_addr_t node){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = UARTDebugSenderP$CollectionDebug$logEventMsg(type, msg, origin, node);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 564 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$triggerImmediateRouteUpdate(void )
#line 564
{
  /*CtpP.Router*/CtpRoutingEngineP$0$resetInterval();
}

# 66 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpInfo.nc"
inline static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpInfo$triggerImmediateRouteUpdate(void ){
#line 66
  /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$triggerImmediateRouteUpdate();
#line 66
}
#line 66
# 880 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline uint16_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getEtx(message_t *msg)
#line 880
{
#line 880
  return __nesc_ntoh_uint16(/*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(msg)->etx.data);
}

# 90 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Queue.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$enqueue(/*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$t  newVal){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*CtpP.SendQueueP*/QueueC$0$Queue$enqueue(newVal);
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 88 "/opt/CVSTinyOS/tinyos-2.x/tos/system/PoolP.nc"
static inline /*CtpP.MessagePoolP.PoolP*/PoolP$0$pool_t */*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$get(void )
#line 88
{
  if (/*CtpP.MessagePoolP.PoolP*/PoolP$0$free) {
      /*CtpP.MessagePoolP.PoolP*/PoolP$0$pool_t *rval = /*CtpP.MessagePoolP.PoolP*/PoolP$0$queue[/*CtpP.MessagePoolP.PoolP*/PoolP$0$index];

#line 91
      /*CtpP.MessagePoolP.PoolP*/PoolP$0$queue[/*CtpP.MessagePoolP.PoolP*/PoolP$0$index] = (void *)0;
      /*CtpP.MessagePoolP.PoolP*/PoolP$0$free--;
      /*CtpP.MessagePoolP.PoolP*/PoolP$0$index++;
      if (/*CtpP.MessagePoolP.PoolP*/PoolP$0$index == 12) {
          /*CtpP.MessagePoolP.PoolP*/PoolP$0$index = 0;
        }
      ;
      return rval;
    }
  return (void *)0;
}

# 97 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Pool.nc"
inline static /*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$t * /*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$get(void ){
#line 97
  nx_struct message_t *__nesc_result;
#line 97

#line 97
  __nesc_result = /*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 88 "/opt/CVSTinyOS/tinyos-2.x/tos/system/PoolP.nc"
static inline /*CtpP.QEntryPoolP.PoolP*/PoolP$1$pool_t */*CtpP.QEntryPoolP.PoolP*/PoolP$1$Pool$get(void )
#line 88
{
  if (/*CtpP.QEntryPoolP.PoolP*/PoolP$1$free) {
      /*CtpP.QEntryPoolP.PoolP*/PoolP$1$pool_t *rval = /*CtpP.QEntryPoolP.PoolP*/PoolP$1$queue[/*CtpP.QEntryPoolP.PoolP*/PoolP$1$index];

#line 91
      /*CtpP.QEntryPoolP.PoolP*/PoolP$1$queue[/*CtpP.QEntryPoolP.PoolP*/PoolP$1$index] = (void *)0;
      /*CtpP.QEntryPoolP.PoolP*/PoolP$1$free--;
      /*CtpP.QEntryPoolP.PoolP*/PoolP$1$index++;
      if (/*CtpP.QEntryPoolP.PoolP*/PoolP$1$index == 12) {
          /*CtpP.QEntryPoolP.PoolP*/PoolP$1$index = 0;
        }
      ;
      return rval;
    }
  return (void *)0;
}

# 97 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Pool.nc"
inline static /*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$t * /*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$get(void ){
#line 97
  struct __nesc_unnamed4320 *__nesc_result;
#line 97

#line 97
  __nesc_result = /*CtpP.QEntryPoolP.PoolP*/PoolP$1$Pool$get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 75 "/opt/CVSTinyOS/tinyos-2.x/tos/system/PoolP.nc"
static inline bool /*CtpP.QEntryPoolP.PoolP*/PoolP$1$Pool$empty(void )
#line 75
{
  ;
  return /*CtpP.QEntryPoolP.PoolP*/PoolP$1$free == 0;
}

# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Pool.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$empty(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = /*CtpP.QEntryPoolP.PoolP*/PoolP$1$Pool$empty();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 75 "/opt/CVSTinyOS/tinyos-2.x/tos/system/PoolP.nc"
static inline bool /*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$empty(void )
#line 75
{
  ;
  return /*CtpP.MessagePoolP.PoolP*/PoolP$0$free == 0;
}

# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Pool.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$empty(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = /*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$empty();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 645 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline message_t * /*CtpP.Forwarder*/CtpForwardingEngineP$0$forward(message_t * m)
#line 645
{
  if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$empty()) {
      ;

      /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_MSG_POOL_EMPTY);
    }
  else {
#line 651
    if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$empty()) {
        ;


        /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_QENTRY_POOL_EMPTY);
      }
    else {
        message_t *newMsg;
        fe_queue_entry_t *qe;
        uint16_t gradient;

        qe = /*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$get();
        if (qe == (void *)0) {
            /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_GET_MSGPOOL_ERR);
            return m;
          }

        newMsg = /*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$get();
        if (newMsg == (void *)0) {
            /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_GET_QEPOOL_ERR);
            return m;
          }

        memset(newMsg, 0, sizeof(message_t ));
        memset(m->metadata, 0, sizeof(message_metadata_t ));

        qe->msg = m;
        qe->client = 0xff;
        qe->retries = MAX_RETRIES;


        if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$enqueue(qe) == SUCCESS) {
            ;

            if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpInfo$getEtx(&gradient) == SUCCESS) {

                if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getEtx(m) <= gradient) {




                    /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpInfo$triggerImmediateRouteUpdate();
                    /*CtpP.Forwarder*/CtpForwardingEngineP$0$startRetxmitTimer(LOOPY_WINDOW, LOOPY_OFFSET);
                    /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEventMsg(NET_C_FE_LOOP_DETECTED, 
                    /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getSequenceNumber(m), 
                    /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getOrigin(m), 
                    /*CtpP.Forwarder*/CtpForwardingEngineP$0$AMPacket$destination(m));
                  }
              }

            if (!/*CtpP.Forwarder*/CtpForwardingEngineP$0$RetxmitTimer$isRunning()) {


                /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask$postTask();
              }


            return newMsg;
          }
        else 
#line 709
          {

            if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$put(newMsg) != SUCCESS) {
              /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_PUT_MSGPOOL_ERR);
              }
#line 713
            if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$put(qe) != SUCCESS) {
              /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_PUT_QEPOOL_ERR);
              }
          }
      }
    }



  /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_SEND_QUEUE_FULL);
  return m;
}

#line 924
static inline 
#line 923
bool 
/*CtpP.Forwarder*/CtpForwardingEngineP$0$Intercept$default$forward(collection_id_t collectid, message_t *msg, void *payload, 
uint8_t len)
#line 925
{
  return TRUE;
}

# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Intercept.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$Intercept$forward(collection_id_t arg_0x40dc5430, message_t * msg, void * payload, uint8_t len){
#line 31
  unsigned char __nesc_result;
#line 31

#line 31
    __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP$0$Intercept$default$forward(arg_0x40dc5430, msg, payload, len);
#line 31

#line 31
  return __nesc_result;
#line 31
}
#line 31
# 906 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$matchInstance(message_t *m1, message_t *m2)
#line 906
{
  return /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getOrigin(m1) == /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getOrigin(m2) && 
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getSequenceNumber(m1) == /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getSequenceNumber(m2) && 
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getThl(m1) == /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getThl(m2) && 
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getType(m1) == /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getType(m2);
}

# 112 "/opt/CVSTinyOS/tinyos-2.x/tos/system/QueueC.nc"
static inline /*CtpP.SendQueueP*/QueueC$0$queue_t /*CtpP.SendQueueP*/QueueC$0$Queue$element(uint8_t idx)
#line 112
{
  idx += /*CtpP.SendQueueP*/QueueC$0$head;
  idx %= 13;
  return /*CtpP.SendQueueP*/QueueC$0$queue[idx];
}

# 101 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Queue.nc"
inline static /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$t  /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$element(uint8_t idx){
#line 101
  struct __nesc_unnamed4320 *__nesc_result;
#line 101

#line 101
  __nesc_result = /*CtpP.SendQueueP*/QueueC$0$Queue$element(idx);
#line 101

#line 101
  return __nesc_result;
#line 101
}
#line 101
# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/system/QueueC.nc"
static inline uint8_t /*CtpP.SendQueueP*/QueueC$0$Queue$size(void )
#line 57
{
  return /*CtpP.SendQueueP*/QueueC$0$size;
}

# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Queue.nc"
inline static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$size(void ){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = /*CtpP.SendQueueP*/QueueC$0$Queue$size();
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline uint8_t CC2420ActiveMessageP$AMSend$maxPayloadLength(am_id_t id)
#line 80
{
  return CC2420ActiveMessageP$Packet$maxPayloadLength();
}

# 112 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$maxPayloadLength(am_id_t arg_0x40f631b8){
#line 112
  unsigned char __nesc_result;
#line 112

#line 112
  __nesc_result = CC2420ActiveMessageP$AMSend$maxPayloadLength(arg_0x40f631b8);
#line 112

#line 112
  return __nesc_result;
#line 112
}
#line 112
# 199 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$maxPayloadLength(uint8_t id)
#line 199
{
  return /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$maxPayloadLength(0);
}

# 101 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static uint8_t /*CtpP.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$maxPayloadLength(void ){
#line 101
  unsigned char __nesc_result;
#line 101

#line 101
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$maxPayloadLength(0U);
#line 101

#line 101
  return __nesc_result;
#line 101
}
#line 101
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline uint8_t /*CtpP.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$maxPayloadLength(void )
#line 61
{
  return /*CtpP.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$maxPayloadLength();
}

# 112 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubSend$maxPayloadLength(void ){
#line 112
  unsigned char __nesc_result;
#line 112

#line 112
  __nesc_result = /*CtpP.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$maxPayloadLength();
#line 112

#line 112
  return __nesc_result;
#line 112
}
#line 112
# 884 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$setThl(message_t *msg, uint8_t thl)
#line 884
{
#line 884
  __nesc_hton_uint8(/*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(msg)->thl.data, thl);
}

#line 734
static inline message_t *
/*CtpP.Forwarder*/CtpForwardingEngineP$0$SubReceive$receive(message_t *msg, void *payload, uint8_t len)
#line 735
{
  collection_id_t collectid;
  bool duplicate = FALSE;
  fe_queue_entry_t *qe;
  uint8_t i;
#line 739
  uint8_t thl;


  collectid = /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getType(msg);



  thl = /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getThl(msg);
  thl++;
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$setThl(msg, thl);

  /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEventMsg(NET_C_FE_RCV_MSG, 
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getSequenceNumber(msg), 
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getOrigin(msg), 
  thl--);
  if (len > /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubSend$maxPayloadLength()) {
      return msg;
    }



  if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$SentCache$lookup(msg)) {
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_DUPLICATE_CACHE);
      return msg;
    }

  if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$size() > 0) {
      for (i = /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$size(); --i; ) {
          qe = /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$element(i);
          if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$matchInstance(qe->msg, msg)) {
              duplicate = TRUE;
              break;
            }
        }
    }

  if (duplicate) {
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_DUPLICATE_QUEUE);
      return msg;
    }
  else {

    if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$RootControl$isRoot()) {
      return /*CtpP.Forwarder*/CtpForwardingEngineP$0$Receive$receive(collectid, msg, 
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$getPayload(msg, /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$payloadLength(msg)), 
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$payloadLength(msg));
      }
    else {
      if (!/*CtpP.Forwarder*/CtpForwardingEngineP$0$Intercept$forward(collectid, msg, 
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$getPayload(msg, /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$payloadLength(msg)), 
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$payloadLength(msg))) {
        return msg;
        }
      else 
#line 791
        {
          ;
          return /*CtpP.Forwarder*/CtpForwardingEngineP$0$forward(msg);
        }
      }
    }
}

# 718 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline error_t /*CtpP.Router*/CtpRoutingEngineP$0$routingTableUpdateEntry(am_addr_t from, am_addr_t parent, uint16_t etx)
#line 718
{
  uint8_t idx;
  uint16_t linkEtx;

#line 721
  linkEtx = /*CtpP.Router*/CtpRoutingEngineP$0$evaluateEtx(/*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$getLinkQuality(from));

  idx = /*CtpP.Router*/CtpRoutingEngineP$0$routingTableFind(from);
  if (idx == 10) {




      ;
      return FAIL;
    }
  else {
#line 732
    if (idx == /*CtpP.Router*/CtpRoutingEngineP$0$routingTableActive) {

        if (/*CtpP.Router*/CtpRoutingEngineP$0$passLinkEtxThreshold(linkEtx)) {
            { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 735
              {
                /*CtpP.Router*/CtpRoutingEngineP$0$routingTable[idx].neighbor = from;
                /*CtpP.Router*/CtpRoutingEngineP$0$routingTable[idx].info.parent = parent;
                /*CtpP.Router*/CtpRoutingEngineP$0$routingTable[idx].info.etx = etx;
                /*CtpP.Router*/CtpRoutingEngineP$0$routingTable[idx].info.haveHeard = 1;
                /*CtpP.Router*/CtpRoutingEngineP$0$routingTable[idx].info.congested = FALSE;
                /*CtpP.Router*/CtpRoutingEngineP$0$routingTableActive++;
              }
#line 742
              __nesc_atomic_end(__nesc_atomic); }
            ;
          }
        else 
#line 744
          {
            ;
          }
      }
    else 
#line 747
      {

        { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 749
          {
            /*CtpP.Router*/CtpRoutingEngineP$0$routingTable[idx].neighbor = from;
            /*CtpP.Router*/CtpRoutingEngineP$0$routingTable[idx].info.parent = parent;
            /*CtpP.Router*/CtpRoutingEngineP$0$routingTable[idx].info.etx = etx;
            /*CtpP.Router*/CtpRoutingEngineP$0$routingTable[idx].info.haveHeard = 1;
          }
#line 754
          __nesc_atomic_end(__nesc_atomic); }
        ;
      }
    }
#line 757
  return SUCCESS;
}

# 962 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$LinkEstimator$evicted(am_addr_t neighbor)
#line 962
{
}

# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/4bitle/LinkEstimator.nc"
inline static void LinkEstimatorP$LinkEstimator$evicted(am_addr_t neighbor){
#line 61
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$LinkEstimator$evicted(neighbor);
#line 61
  /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$evicted(neighbor);
#line 61
}
#line 61
# 467 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline error_t LinkEstimatorP$LinkEstimator$insertNeighbor(am_addr_t neighbor)
#line 467
{
  uint8_t nidx;

  nidx = LinkEstimatorP$findIdx(neighbor);
  if (nidx != LinkEstimatorP$INVALID_RVAL) {
      ;
      return SUCCESS;
    }

  nidx = LinkEstimatorP$findEmptyNeighborIdx();
  if (nidx != LinkEstimatorP$INVALID_RVAL) {
      ;
      LinkEstimatorP$initNeighborIdx(nidx, neighbor);
      return SUCCESS;
    }
  else 
#line 481
    {
      nidx = LinkEstimatorP$findWorstNeighborIdx(LinkEstimatorP$BEST_EETX);
      if (nidx != LinkEstimatorP$INVALID_RVAL) {
          ;

          LinkEstimatorP$LinkEstimator$evicted(LinkEstimatorP$NeighborTable[nidx].ll_addr);
          LinkEstimatorP$initNeighborIdx(nidx, neighbor);
          return SUCCESS;
        }
    }
  return FAIL;
}

# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/4bitle/LinkEstimator.nc"
inline static error_t /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$insertNeighbor(am_addr_t neighbor){
#line 41
  unsigned char __nesc_result;
#line 41

#line 41
  __nesc_result = LinkEstimatorP$LinkEstimator$insertNeighbor(neighbor);
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 77 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*CtpP.Router*/CtpRoutingEngineP$0$AMPacket$source(message_t * amsg){
#line 77
  unsigned short __nesc_result;
#line 77

#line 77
  __nesc_result = CC2420ActiveMessageP$AMPacket$source(amsg);
#line 77

#line 77
  return __nesc_result;
#line 77
}
#line 77
# 463 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline message_t */*CtpP.Router*/CtpRoutingEngineP$0$BeaconReceive$receive(message_t *msg, void *payload, uint8_t len)
#line 463
{
  am_addr_t from;
  ctp_routing_header_t *rcvBeacon;
  bool congested;


  if (len != sizeof(ctp_routing_header_t )) {
      ;




      return msg;
    }


  from = /*CtpP.Router*/CtpRoutingEngineP$0$AMPacket$source(msg);
  rcvBeacon = (ctp_routing_header_t *)payload;

  congested = /*CtpP.Router*/CtpRoutingEngineP$0$CtpRoutingPacket$getOption(msg, CTP_OPT_ECN);

  ;




  if (__nesc_ntoh_uint16(rcvBeacon->parent.data) != INVALID_ADDR) {



      if (__nesc_ntoh_uint16(rcvBeacon->etx.data) == 0) {
          ;
          /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$insertNeighbor(from);
          /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$pinNeighbor(from);
        }


      /*CtpP.Router*/CtpRoutingEngineP$0$routingTableUpdateEntry(from, __nesc_ntoh_uint16(rcvBeacon->parent.data), __nesc_ntoh_uint16(rcvBeacon->etx.data));
      /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$setNeighborCongested(from, congested);
    }

  if (/*CtpP.Router*/CtpRoutingEngineP$0$CtpRoutingPacket$getOption(msg, CTP_OPT_PULL)) {
      /*CtpP.Router*/CtpRoutingEngineP$0$resetInterval();
    }
  return msg;
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * LinkEstimatorP$Receive$receive(message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  __nesc_result = /*CtpP.Router*/CtpRoutingEngineP$0$BeaconReceive$receive(msg, payload, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Random.nc"
inline static uint16_t LinkEstimatorP$Random$rand16(void ){
#line 41
  unsigned short __nesc_result;
#line 41

#line 41
  __nesc_result = RandomMlcgC$Random$rand16();
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 240 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline uint8_t LinkEstimatorP$findRandomNeighborIdx(void )
#line 240
{
  uint8_t i;
  uint8_t cnt;
  uint8_t num_eligible_eviction;

  num_eligible_eviction = 0;
  for (i = 0; i < 10; i++) {
      if (LinkEstimatorP$NeighborTable[i].flags & VALID_ENTRY) {
          if (LinkEstimatorP$NeighborTable[i].flags & PINNED_ENTRY || 
          LinkEstimatorP$NeighborTable[i].flags & MATURE_ENTRY) {
            }
          else 
#line 250
            {
              num_eligible_eviction++;
            }
        }
    }

  if (num_eligible_eviction == 0) {
      return LinkEstimatorP$INVALID_RVAL;
    }

  cnt = LinkEstimatorP$Random$rand16() % num_eligible_eviction;

  for (i = 0; i < 10; i++) {
      if (! LinkEstimatorP$NeighborTable[i].flags & VALID_ENTRY) {
        continue;
        }
#line 265
      if (LinkEstimatorP$NeighborTable[i].flags & PINNED_ENTRY || 
      LinkEstimatorP$NeighborTable[i].flags & MATURE_ENTRY) {
        continue;
        }
#line 268
      if (cnt-- == 0) {
        return i;
        }
    }
#line 271
  return LinkEstimatorP$INVALID_RVAL;
}

# 94 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline uint8_t CC2420PacketP$CC2420Packet$getLqi(message_t *p_msg)
#line 94
{
  return __nesc_ntoh_uint8(CC2420PacketP$CC2420PacketBody$getMetadata(p_msg)->lqi.data);
}










static inline bool CC2420PacketP$LinkPacketMetadata$highChannelQuality(message_t *msg)
#line 107
{
  return CC2420PacketP$CC2420Packet$getLqi(msg) > 105;
}

# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/LinkPacketMetadata.nc"
inline static bool LinkEstimatorP$LinkPacketMetadata$highChannelQuality(message_t * msg){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = CC2420PacketP$LinkPacketMetadata$highChannelQuality(msg);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 136 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_id_t /*CtpP.Router*/CtpRoutingEngineP$0$AMPacket$type(message_t * amsg){
#line 136
  unsigned char __nesc_result;
#line 136

#line 136
  __nesc_result = CC2420ActiveMessageP$AMPacket$type(amsg);
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 649 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline bool /*CtpP.Router*/CtpRoutingEngineP$0$CompareBit$shouldInsert(message_t *msg, void *payload, uint8_t len, bool white_bit)
#line 649
{

  bool found = FALSE;
  uint16_t pathEtx;

  uint16_t neighEtx;
  int i;
  routing_table_entry *entry;
  ctp_routing_header_t *rcvBeacon;

  if (/*CtpP.Router*/CtpRoutingEngineP$0$AMPacket$type(msg) != AM_CTP_ROUTING || 
  len != sizeof(ctp_routing_header_t )) {
    return FALSE;
    }

  rcvBeacon = (ctp_routing_header_t *)payload;

  if (__nesc_ntoh_uint16(rcvBeacon->parent.data) == INVALID_ADDR) {
    return FALSE;
    }
  if (__nesc_ntoh_uint16(rcvBeacon->etx.data) == 0) {
      return TRUE;
    }

  pathEtx = __nesc_ntoh_uint16(rcvBeacon->etx.data);


  for (i = 0; i < /*CtpP.Router*/CtpRoutingEngineP$0$routingTableActive && !found; i++) {
      entry = &/*CtpP.Router*/CtpRoutingEngineP$0$routingTable[i];

      if (entry->neighbor == /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo.parent) {
        continue;
        }
#line 681
      neighEtx = entry->info.etx;

      found |= pathEtx < neighEtx;
    }
  return found;
}

# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CompareBit.nc"
inline static bool LinkEstimatorP$CompareBit$shouldInsert(message_t * msg, void * payload, uint8_t len, bool white_bit){
#line 41
  unsigned char __nesc_result;
#line 41

#line 41
  __nesc_result = /*CtpP.Router*/CtpRoutingEngineP$0$CompareBit$shouldInsert(msg, payload, len, white_bit);
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 401 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline void LinkEstimatorP$print_neighbor_table(void )
#line 401
{
  uint8_t i;
  neighbor_table_entry_t *ne;

#line 404
  for (i = 0; i < 10; i++) {
      ne = &LinkEstimatorP$NeighborTable[i];
      if (ne->flags & VALID_ENTRY) {
          ;
        }
    }
}

# 77 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_addr_t LinkEstimatorP$SubAMPacket$source(message_t * amsg){
#line 77
  unsigned short __nesc_result;
#line 77

#line 77
  __nesc_result = CC2420ActiveMessageP$AMPacket$source(amsg);
#line 77

#line 77
  return __nesc_result;
#line 77
}
#line 77
#line 67
inline static am_addr_t LinkEstimatorP$SubAMPacket$destination(message_t * amsg){
#line 67
  unsigned short __nesc_result;
#line 67

#line 67
  __nesc_result = CC2420ActiveMessageP$AMPacket$destination(amsg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 596 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline void LinkEstimatorP$processReceivedMessage(message_t * msg, void * payload, uint8_t len)
#line 596
{
  uint8_t nidx;
  uint8_t num_entries;

  ;
  LinkEstimatorP$print_packet(msg, len);

  if (LinkEstimatorP$SubAMPacket$destination(msg) == AM_BROADCAST_ADDR) {
      linkest_header_t *hdr = LinkEstimatorP$getHeader(msg);
      am_addr_t ll_addr;

      ll_addr = LinkEstimatorP$SubAMPacket$source(msg);

      ;

      num_entries = __nesc_ntoh_uint8(hdr->flags.data) & NUM_ENTRIES_FLAG;
      LinkEstimatorP$print_neighbor_table();
#line 628
      nidx = LinkEstimatorP$findIdx(ll_addr);
      if (nidx != LinkEstimatorP$INVALID_RVAL) {
          ;
          LinkEstimatorP$updateNeighborEntryIdx(nidx, __nesc_ntoh_uint8(hdr->seq.data));
        }
      else 
#line 632
        {
          nidx = LinkEstimatorP$findEmptyNeighborIdx();
          if (nidx != LinkEstimatorP$INVALID_RVAL) {
              ;
              LinkEstimatorP$initNeighborIdx(nidx, ll_addr);
              LinkEstimatorP$updateNeighborEntryIdx(nidx, __nesc_ntoh_uint8(hdr->seq.data));
            }
          else 
#line 638
            {
              nidx = LinkEstimatorP$findWorstNeighborIdx(LinkEstimatorP$EVICT_EETX_THRESHOLD);
              if (nidx != LinkEstimatorP$INVALID_RVAL) {
                  ;

                  LinkEstimatorP$LinkEstimator$evicted(LinkEstimatorP$NeighborTable[nidx].ll_addr);
                  LinkEstimatorP$initNeighborIdx(nidx, ll_addr);
                }
              else 
#line 645
                {
                  ;
                  if (LinkEstimatorP$CompareBit$shouldInsert(msg, 
                  LinkEstimatorP$Packet$getPayload(msg, LinkEstimatorP$Packet$payloadLength(msg)), 
                  LinkEstimatorP$Packet$payloadLength(msg), 
                  LinkEstimatorP$LinkPacketMetadata$highChannelQuality(msg))) {
                      nidx = LinkEstimatorP$findRandomNeighborIdx();
                      if (nidx != LinkEstimatorP$INVALID_RVAL) {
                          LinkEstimatorP$LinkEstimator$evicted(LinkEstimatorP$NeighborTable[nidx].ll_addr);
                          LinkEstimatorP$initNeighborIdx(nidx, ll_addr);
                        }
                    }
                }
            }
        }
    }
}





static inline message_t *LinkEstimatorP$SubReceive$receive(message_t *msg, 
void *payload, 
uint8_t len)
#line 669
{
  ;
  LinkEstimatorP$processReceivedMessage(msg, payload, len);
  return LinkEstimatorP$Receive$receive(msg, 
  LinkEstimatorP$Packet$getPayload(msg, LinkEstimatorP$Packet$payloadLength(msg)), 
  LinkEstimatorP$Packet$payloadLength(msg));
}

# 240 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline message_t *CC2420ActiveMessageP$Receive$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 240
{
  return msg;
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * CC2420ActiveMessageP$Receive$receive(am_id_t arg_0x407521d8, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  switch (arg_0x407521d8) {
#line 67
    case 112:
#line 67
      __nesc_result = LinkEstimatorP$SubReceive$receive(msg, payload, len);
#line 67
      break;
#line 67
    case 113:
#line 67
      __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubReceive$receive(msg, payload, len);
#line 67
      break;
#line 67
    default:
#line 67
      __nesc_result = CC2420ActiveMessageP$Receive$default$receive(arg_0x407521d8, msg, payload, len);
#line 67
      break;
#line 67
    }
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static inline am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void )
#line 61
{
  return ActiveMessageAddressC$amAddress();
}

# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
inline static am_addr_t CC2420ActiveMessageP$ActiveMessageAddress$amAddress(void ){
#line 50
  unsigned short __nesc_result;
#line 50

#line 50
  __nesc_result = ActiveMessageAddressC$ActiveMessageAddress$amAddress();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline am_addr_t CC2420ActiveMessageP$AMPacket$address(void )
#line 89
{
  return CC2420ActiveMessageP$ActiveMessageAddress$amAddress();
}

#line 113
static inline bool CC2420ActiveMessageP$AMPacket$isForMe(message_t *amsg)
#line 113
{
  return CC2420ActiveMessageP$AMPacket$destination(amsg) == CC2420ActiveMessageP$AMPacket$address() || 
  CC2420ActiveMessageP$AMPacket$destination(amsg) == AM_BROADCAST_ADDR;
}

# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/system/NoLedsC.nc"
static inline void NoLedsC$Leds$led0Toggle(void )
#line 44
{
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void CC2420ActiveMessageP$Leds$led0Toggle(void ){
#line 56
  NoLedsC$Leds$led0Toggle();
#line 56
}
#line 56
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * CC2420ActiveMessageP$CC2420PacketBody$getMetadata(message_t * msg){
#line 47
  nx_struct cc2420_metadata_t *__nesc_result;
#line 47

#line 47
  __nesc_result = CC2420PacketP$CC2420PacketBody$getMetadata(msg);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 172 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline message_t *CC2420ActiveMessageP$SubReceive$receive(message_t *msg, void *payload, uint8_t len)
#line 172
{

  if (! __nesc_ntoh_int8(CC2420ActiveMessageP$CC2420PacketBody$getMetadata(msg)->crc.data)) {
      CC2420ActiveMessageP$Leds$led0Toggle();
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
inline static message_t * DefaultLplP$Receive$receive(message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  __nesc_result = CC2420ActiveMessageP$SubReceive$receive(msg, payload, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 412 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/lpl/DefaultLplP.nc"
static inline message_t *DefaultLplP$SubReceive$receive(message_t *msg, void *payload, 
uint8_t len)
#line 413
{
  DefaultLplP$startOffTimer();
  return DefaultLplP$Receive$receive(msg, payload, len);
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * UniqueReceiveP$Receive$receive(message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  __nesc_result = DefaultLplP$SubReceive$receive(msg, payload, len);
#line 67

#line 67
  return __nesc_result;
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


static inline message_t *UniqueReceiveP$DuplicateReceive$default$receive(message_t *msg, void *payload, uint8_t len)
#line 158
{
  return msg;
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * UniqueReceiveP$DuplicateReceive$receive(message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  __nesc_result = UniqueReceiveP$DuplicateReceive$default$receive(msg, payload, len);
#line 67

#line 67
  return __nesc_result;
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
inline static cc2420_header_t * UniqueReceiveP$CC2420PacketBody$getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP$CC2420PacketBody$getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 85 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline message_t *UniqueReceiveP$SubReceive$receive(message_t *msg, void *payload, 
uint8_t len)
#line 86
{
  uint16_t msgSource = __nesc_ntoh_leuint16(UniqueReceiveP$CC2420PacketBody$getHeader(msg)->src.data);
  uint8_t msgDsn = __nesc_ntoh_leuint8(UniqueReceiveP$CC2420PacketBody$getHeader(msg)->dsn.data);

  if (UniqueReceiveP$hasSeen(msgSource, msgDsn)) {
      return UniqueReceiveP$DuplicateReceive$receive(msg, payload, len);
    }
  else {
      UniqueReceiveP$insert(msgSource, msgDsn);
      return UniqueReceiveP$Receive$receive(msg, payload, len);
    }
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * CC2420TinyosNetworkP$Receive$receive(message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  __nesc_result = UniqueReceiveP$SubReceive$receive(msg, payload, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline message_t *CC2420TinyosNetworkP$SubReceive$receive(message_t *msg, void *payload, uint8_t len)
#line 84
{
  if (__nesc_ntoh_leuint8(CC2420TinyosNetworkP$CC2420PacketBody$getHeader(msg)->network.data) == 0x3f) {
      return CC2420TinyosNetworkP$Receive$receive(msg, payload, len);
    }
  else 
#line 87
    {
      return CC2420TinyosNetworkP$NonTinyosReceive$receive(__nesc_ntoh_leuint8(CC2420TinyosNetworkP$CC2420PacketBody$getHeader(msg)->network.data), msg, payload, len);
    }
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * CC2420ReceiveP$Receive$receive(message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  __nesc_result = CC2420TinyosNetworkP$SubReceive$receive(msg, payload, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static uint16_t CC2420ReceiveP$CC2420Config$getShortAddr(void ){
#line 64
  unsigned short __nesc_result;
#line 64

#line 64
  __nesc_result = CC2420ControlP$CC2420Config$getShortAddr();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 332 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline bool CC2420ControlP$CC2420Config$isAddressRecognitionEnabled(void )
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
inline static bool CC2420ReceiveP$CC2420Config$isAddressRecognitionEnabled(void ){
#line 86
  unsigned char __nesc_result;
#line 86

#line 86
  __nesc_result = CC2420ControlP$CC2420Config$isAddressRecognitionEnabled();
#line 86

#line 86
  return __nesc_result;
#line 86
}
#line 86
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * CC2420ReceiveP$CC2420PacketBody$getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP$CC2420PacketBody$getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 452 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline bool CC2420ReceiveP$passesAddressCheck(message_t *msg)
#line 452
{
  cc2420_header_t *header = CC2420ReceiveP$CC2420PacketBody$getHeader(msg);

  if (!CC2420ReceiveP$CC2420Config$isAddressRecognitionEnabled()) {
      return TRUE;
    }

  return __nesc_ntoh_leuint16(header->dest.data) == CC2420ReceiveP$CC2420Config$getShortAddr()
   || __nesc_ntoh_leuint16(header->dest.data) == AM_BROADCAST_ADDR;
}

# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * CC2420ReceiveP$CC2420PacketBody$getMetadata(message_t * msg){
#line 47
  nx_struct cc2420_metadata_t *__nesc_result;
#line 47

#line 47
  __nesc_result = CC2420PacketP$CC2420PacketBody$getMetadata(msg);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 327 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP$receiveDone_task$runTask(void )
#line 327
{
  cc2420_metadata_t *metadata = CC2420ReceiveP$CC2420PacketBody$getMetadata(CC2420ReceiveP$m_p_rx_buf);
  cc2420_header_t *header = CC2420ReceiveP$CC2420PacketBody$getHeader(CC2420ReceiveP$m_p_rx_buf);
  uint8_t length = __nesc_ntoh_leuint8(header->length.data);
  uint8_t tmpLen __attribute((unused))  = sizeof(message_t ) - ((unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t ));
  uint8_t * buf = (uint8_t * )header;

  __nesc_hton_int8(metadata->crc.data, buf[length] >> 7);
  __nesc_hton_uint8(metadata->lqi.data, buf[length] & 0x7f);
  __nesc_hton_uint8(metadata->rssi.data, buf[length - 1]);

  if (CC2420ReceiveP$passesAddressCheck(CC2420ReceiveP$m_p_rx_buf)) 
    {
      CC2420ReceiveP$m_p_rx_buf = CC2420ReceiveP$Receive$receive(CC2420ReceiveP$m_p_rx_buf, CC2420ReceiveP$m_p_rx_buf->data, 
      length - CC2420_SIZE);
    }


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 345
    CC2420ReceiveP$receivingPacket = FALSE;
#line 345
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ReceiveP$waitForNextPacket();
}

# 304 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline uint8_t LinkEstimatorP$computeEETX(uint8_t q1)
#line 304
{
  uint16_t q;

#line 306
  if (q1 > 0) {
      q = 2550 / q1 - 10;
      if (q > 255) {
          q = LinkEstimatorP$VERY_LARGE_EETX_VALUE;
        }
      return (uint8_t )q;
    }
  else 
#line 312
    {
      return LinkEstimatorP$VERY_LARGE_EETX_VALUE;
    }
}



static inline void LinkEstimatorP$updateNeighborTableEst(am_addr_t n)
#line 319
{
  uint8_t i;
#line 320
  uint8_t totalPkt;
  neighbor_table_entry_t *ne;
  uint8_t newEst;
  uint8_t minPkt;

  minPkt = LinkEstimatorP$BLQ_PKT_WINDOW;
  ;
  for (i = 0; i < 10; i++) {
      ne = &LinkEstimatorP$NeighborTable[i];
      if (ne->ll_addr == n) {
          if (ne->flags & VALID_ENTRY) {
              if (ne->inage > 0) {
                ne->inage--;
                }
              if (ne->inage == 0) {
                  ne->flags ^= VALID_ENTRY;
                  ne->inquality = 0;
                }
              else 
#line 337
                {
                  ;
                  ne->flags |= MATURE_ENTRY;
                  totalPkt = ne->rcvcnt + ne->failcnt;
                  ;
                  if (totalPkt < minPkt) {
                      totalPkt = minPkt;
                    }
                  if (totalPkt == 0) {
                      ne->inquality = LinkEstimatorP$ALPHA * ne->inquality / 10;
                    }
                  else 
#line 347
                    {
                      newEst = 255 * ne->rcvcnt / totalPkt;
                      ;
                      ne->inquality = (LinkEstimatorP$ALPHA * ne->inquality + (10 - LinkEstimatorP$ALPHA) * newEst) / 10;
                    }
                  ne->rcvcnt = 0;
                  ne->failcnt = 0;
                }
              LinkEstimatorP$updateEETX(ne, LinkEstimatorP$computeEETX(ne->inquality));
            }
          else {
              ;
            }
        }
    }
}

# 761 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline error_t /*CtpP.Router*/CtpRoutingEngineP$0$routingTableEvict(am_addr_t neighbor)
#line 761
{
  uint8_t idx;
#line 762
  uint8_t i;

#line 763
  idx = /*CtpP.Router*/CtpRoutingEngineP$0$routingTableFind(neighbor);
  if (idx == /*CtpP.Router*/CtpRoutingEngineP$0$routingTableActive) {
    return FAIL;
    }
#line 766
  /*CtpP.Router*/CtpRoutingEngineP$0$routingTableActive--;
  for (i = idx; i < /*CtpP.Router*/CtpRoutingEngineP$0$routingTableActive; i++) {
      /*CtpP.Router*/CtpRoutingEngineP$0$routingTable[i] = /*CtpP.Router*/CtpRoutingEngineP$0$routingTable[i + 1];
    }
  return SUCCESS;
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
inline static uint8_t LinkEstimatorP$SubPacket$payloadLength(message_t * msg){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = CC2420ActiveMessageP$Packet$payloadLength(msg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 702 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline uint8_t LinkEstimatorP$Packet$maxPayloadLength(void )
#line 702
{
  return LinkEstimatorP$SubPacket$maxPayloadLength() - sizeof(linkest_header_t );
}

#line 585
static inline uint8_t LinkEstimatorP$Send$maxPayloadLength(void )
#line 585
{
  return LinkEstimatorP$Packet$maxPayloadLength();
}

# 112 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static uint8_t /*CtpP.Router*/CtpRoutingEngineP$0$BeaconSend$maxPayloadLength(void ){
#line 112
  unsigned char __nesc_result;
#line 112

#line 112
  __nesc_result = LinkEstimatorP$Send$maxPayloadLength();
#line 112

#line 112
  return __nesc_result;
#line 112
}
#line 112
# 589 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline void *LinkEstimatorP$Send$getPayload(message_t *msg, uint8_t len)
#line 589
{
  return LinkEstimatorP$Packet$getPayload(msg, len);
}

# 124 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void * /*CtpP.Router*/CtpRoutingEngineP$0$BeaconSend$getPayload(message_t * msg, uint8_t len){
#line 124
  void *__nesc_result;
#line 124

#line 124
  __nesc_result = LinkEstimatorP$Send$getPayload(msg, len);
#line 124

#line 124
  return __nesc_result;
#line 124
}
#line 124
# 456 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline ctp_routing_header_t */*CtpP.Router*/CtpRoutingEngineP$0$getHeader(message_t * m)
#line 456
{
  return (ctp_routing_header_t *)/*CtpP.Router*/CtpRoutingEngineP$0$BeaconSend$getPayload(m, /*CtpP.Router*/CtpRoutingEngineP$0$BeaconSend$maxPayloadLength());
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Random.nc"
inline static uint32_t /*CtpP.Router*/CtpRoutingEngineP$0$Random$rand32(void ){
#line 35
  unsigned long __nesc_result;
#line 35

#line 35
  __nesc_result = RandomMlcgC$Random$rand32();
#line 35

#line 35
  return __nesc_result;
#line 35
}
#line 35
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*CtpP.Router*/CtpRoutingEngineP$0$BeaconTimer$stop(void ){
#line 67
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(6U);
#line 67
}
#line 67
# 178 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline uint8_t CC2420SpiP$Resource$isOwner(uint8_t id)
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
inline static bool CC2420ReceiveP$SpiResource$isOwner(void ){
#line 118
  unsigned char __nesc_result;
#line 118

#line 118
  __nesc_result = CC2420SpiP$Resource$isOwner(/*CC2420ReceiveC.Spi*/CC2420SpiC$4$CLIENT_ID);
#line 118

#line 118
  return __nesc_result;
#line 118
}
#line 118
#line 87
inline static error_t CC2420ReceiveP$SpiResource$immediateRequest(void ){
#line 87
  unsigned char __nesc_result;
#line 87

#line 87
  __nesc_result = CC2420SpiP$Resource$immediateRequest(/*CC2420ReceiveC.Spi*/CC2420SpiC$4$CLIENT_ID);
#line 87

#line 87
  return __nesc_result;
#line 87
}
#line 87
#line 78
inline static error_t CC2420ReceiveP$SpiResource$request(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = CC2420SpiP$Resource$request(/*CC2420ReceiveC.Spi*/CC2420SpiC$4$CLIENT_ID);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420SpiP$grant$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(CC2420SpiP$grant);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 184 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP$SpiResource$granted(void )
#line 184
{
  CC2420SpiP$grant$postTask();
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void HplCC2420SpiP$Resource$granted(void ){
#line 92
  CC2420SpiP$SpiResource$granted();
#line 92
}
#line 92
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline void HplCC2420SpiP$SubResource$granted(void )
{
  HplCC2420SpiP$SS$makeOutput();
  HplCC2420SpiP$SS$clr();

  HplCC2420SpiP$Resource$granted();
}

# 340 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP$Resource$default$granted(uint8_t id)
#line 340
{
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void Atm128SpiP$Resource$granted(uint8_t arg_0x40a3f010){
#line 92
  switch (arg_0x40a3f010) {
#line 92
    case 0U:
#line 92
      HplCC2420SpiP$SubResource$granted();
#line 92
      break;
#line 92
    default:
#line 92
      Atm128SpiP$Resource$default$granted(arg_0x40a3f010);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 336 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP$ResourceArbiter$granted(uint8_t id)
#line 336
{
  Atm128SpiP$Resource$granted(id);
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$granted(uint8_t arg_0x40a9b088){
#line 92
  Atm128SpiP$ResourceArbiter$granted(arg_0x40a9b088);
#line 92
}
#line 92
# 154 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$runTask(void )
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
inline static void Atm128SpiP$SpiPacket$sendDone(uint8_t * txBuf, uint8_t * rxBuf, uint16_t len, error_t error){
#line 71
  CC2420SpiP$SpiPacket$sendDone(txBuf, rxBuf, len, error);
#line 71
}
#line 71
# 207 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP$zeroTask$runTask(void )
#line 207
{
  uint16_t myLen;
  uint8_t * rx;
  uint8_t * tx;

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
static inline void CC2420TransmitP$TXFIFO$readDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error)
#line 452
{
}

# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420ReceiveP$SpiResource$release(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = CC2420SpiP$Resource$release(/*CC2420ReceiveC.Spi*/CC2420SpiC$4$CLIENT_ID);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420ReceiveP$receiveDone_task$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(CC2420ReceiveP$receiveDone_task);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * CC2420TransmitP$CC2420PacketBody$getMetadata(message_t * msg){
#line 47
  nx_struct cc2420_metadata_t *__nesc_result;
#line 47

#line 47
  __nesc_result = CC2420PacketP$CC2420PacketBody$getMetadata(msg);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
#line 42
inline static cc2420_header_t * CC2420TransmitP$CC2420PacketBody$getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP$CC2420PacketBody$getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 353 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP$CC2420Receive$receive(uint8_t type, message_t *ack_msg)
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


      if (CC2420TransmitP$m_state == CC2420TransmitP$S_ACK_WAIT && __nesc_ntoh_leuint8(msg_header->dsn.data) == __nesc_ntoh_leuint8(ack_header->dsn.data)) {
          CC2420TransmitP$BackoffTimer$stop();

          msg_metadata = CC2420TransmitP$CC2420PacketBody$getMetadata(CC2420TransmitP$m_msg);
          ack_buf = (uint8_t *)ack_header;
          length = __nesc_ntoh_leuint8(ack_header->length.data);

          __nesc_hton_int8(msg_metadata->ack.data, TRUE);
          __nesc_hton_uint8(msg_metadata->rssi.data, ack_buf[length - 1]);
          __nesc_hton_uint8(msg_metadata->lqi.data, ack_buf[length] & 0x7f);
          CC2420TransmitP$signalDone(SUCCESS);
        }
    }
}

# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static void CC2420ReceiveP$CC2420Receive$receive(uint8_t type, message_t * message){
#line 63
  CC2420TransmitP$CC2420Receive$receive(type, message);
#line 63
}
#line 63
# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
inline static void CC2420ReceiveP$PacketTimeStamp$clear(message_t * msg){
#line 59
  CC2420PacketP$PacketTimeStamp32khz$clear(msg);
#line 59
}
#line 59
# 128 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline void CC2420PacketP$PacketTimeStamp32khz$set(message_t *msg, uint32_t value)
{
  __nesc_hton_uint32(CC2420PacketP$CC2420PacketBody$getMetadata(msg)->timestamp.data, value);
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
inline static void CC2420ReceiveP$PacketTimeStamp$set(message_t * msg, CC2420ReceiveP$PacketTimeStamp$size_type value){
#line 67
  CC2420PacketP$PacketTimeStamp32khz$set(msg, value);
#line 67
}
#line 67
# 209 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline error_t CC2420SpiP$Fifo$continueRead(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 210
{
  return CC2420SpiP$SpiPacket$send((void *)0, data, len);
}

# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static error_t CC2420ReceiveP$RXFIFO$continueRead(uint8_t * data, uint8_t length){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = CC2420SpiP$Fifo$continueRead(CC2420_RXFIFO, data, length);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
#line 51
inline static cc2420_status_t CC2420ReceiveP$RXFIFO$beginRead(uint8_t * data, uint8_t length){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = CC2420SpiP$Fifo$beginRead(CC2420_RXFIFO, data, length);
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ReceiveP$CSN$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$clr();
#line 30
}
#line 30
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ReceiveP$SACK$strobe(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = CC2420SpiP$Strobe$strobe(CC2420_SACK);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 359 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline bool CC2420ControlP$CC2420Config$isHwAutoAckDefault(void )
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
inline static bool CC2420ReceiveP$CC2420Config$isHwAutoAckDefault(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = CC2420ControlP$CC2420Config$isHwAutoAckDefault();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 366 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline bool CC2420ControlP$CC2420Config$isAutoAckEnabled(void )
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
inline static bool CC2420ReceiveP$CC2420Config$isAutoAckEnabled(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = CC2420ControlP$CC2420Config$isAutoAckEnabled();
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP$38$IO$get(void )
#line 45
{
#line 45
  return (* (volatile uint8_t * )33U & (1 << 6)) != 0;
}

# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static bool CC2420ReceiveP$FIFOP$get(void ){
#line 32
  unsigned char __nesc_result;
#line 32

#line 32
  __nesc_result = /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP$38$IO$get();
#line 32

#line 32
  return __nesc_result;
#line 32
}
#line 32
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$get(void )
#line 45
{
#line 45
  return (* (volatile uint8_t * )54U & (1 << 7)) != 0;
}

# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static bool CC2420ReceiveP$FIFO$get(void ){
#line 32
  unsigned char __nesc_result;
#line 32

#line 32
  __nesc_result = /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$get();
#line 32

#line 32
  return __nesc_result;
#line 32
}
#line 32
# 195 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP$RXFIFO$readDone(uint8_t *rx_buf, uint8_t rx_len, 
error_t error)
#line 196
{
  cc2420_header_t *header = CC2420ReceiveP$CC2420PacketBody$getHeader(CC2420ReceiveP$m_p_rx_buf);
  uint8_t tmpLen __attribute((unused))  = sizeof(message_t ) - ((unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t ));
  uint8_t * buf = (uint8_t * )header;
  uint8_t type;

#line 201
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



          if (((__nesc_ntoh_leuint16(
#line 256
          header->fcf.data) >> IEEE154_FCF_ACK_REQ) & 0x01) == 1
           && (__nesc_ntoh_leuint16(header->dest.data) == CC2420ReceiveP$CC2420Config$getShortAddr()
           || __nesc_ntoh_leuint16(header->dest.data) == AM_BROADCAST_ADDR)
           && ((__nesc_ntoh_leuint16(header->fcf.data) >> IEEE154_FCF_FRAME_TYPE) & 7) == IEEE154_TYPE_DATA) {

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
#line 291
        {
          CC2420ReceiveP$PacketTimeStamp$clear(CC2420ReceiveP$m_p_rx_buf);
        }



      if (buf[CC2420ReceiveP$rxFrameLength] >> 7 && rx_buf) {
          type = (__nesc_ntoh_leuint16(header->fcf.data) >> IEEE154_FCF_FRAME_TYPE) & 7;
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
static inline void CC2420SpiP$Fifo$default$readDone(uint8_t addr, uint8_t *rx_buf, uint8_t rx_len, error_t error)
#line 370
{
}

# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static void CC2420SpiP$Fifo$readDone(uint8_t arg_0x409ce280, uint8_t * data, uint8_t length, error_t error){
#line 71
  switch (arg_0x409ce280) {
#line 71
    case CC2420_TXFIFO:
#line 71
      CC2420TransmitP$TXFIFO$readDone(data, length, error);
#line 71
      break;
#line 71
    case CC2420_RXFIFO:
#line 71
      CC2420ReceiveP$RXFIFO$readDone(data, length, error);
#line 71
      break;
#line 71
    default:
#line 71
      CC2420SpiP$Fifo$default$readDone(arg_0x409ce280, data, length, error);
#line 71
      break;
#line 71
    }
#line 71
}
#line 71
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ReceiveP$SFLUSHRX$strobe(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = CC2420SpiP$Strobe$strobe(CC2420_SFLUSHRX);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 102 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline error_t CC2420SpiP$ChipSpiResource$attemptRelease(void )
#line 102
{
  return CC2420SpiP$attemptRelease();
}

# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static error_t CC2420TransmitP$ChipSpiResource$attemptRelease(void ){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  __nesc_result = CC2420SpiP$ChipSpiResource$attemptRelease();
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 637 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP$releaseSpiResource(void )
#line 637
{
  CC2420TransmitP$SpiResource$release();
  return SUCCESS;
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420CsmaP$sendDone_task$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(CC2420CsmaP$sendDone_task);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 199 "CC2420CsmaP.nc"
static inline void CC2420CsmaP$CC2420Transmit$sendDone(message_t *p_msg, error_t err)
#line 199
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 200
    CC2420CsmaP$sendErr = err;
#line 200
    __nesc_atomic_end(__nesc_atomic); }
  CC2420CsmaP$sendDone_task$postTask();
}

# 450 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/lpl/DefaultLplP.nc"
static inline void DefaultLplP$Resend$sendDone(message_t *p_msg, error_t error)
#line 450
{
}

# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
inline static void CC2420TransmitP$Send$sendDone(message_t * p_msg, error_t error){
#line 73
  DefaultLplP$Resend$sendDone(p_msg, error);
#line 73
  CC2420CsmaP$CC2420Transmit$sendDone(p_msg, error);
#line 73
}
#line 73
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420TransmitP$SFLUSHTX$strobe(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = CC2420SpiP$Strobe$strobe(CC2420_SFLUSHTX);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP$CSN$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$clr();
#line 30
}
#line 30
# 419 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP$TXFIFO$writeDone(uint8_t *tx_buf, uint8_t tx_len, 
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

# 319 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP$RXFIFO$writeDone(uint8_t *tx_buf, uint8_t tx_len, error_t error)
#line 319
{
}

# 373 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP$Fifo$default$writeDone(uint8_t addr, uint8_t *tx_buf, uint8_t tx_len, error_t error)
#line 373
{
}

# 91 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static void CC2420SpiP$Fifo$writeDone(uint8_t arg_0x409ce280, uint8_t * data, uint8_t length, error_t error){
#line 91
  switch (arg_0x409ce280) {
#line 91
    case CC2420_TXFIFO:
#line 91
      CC2420TransmitP$TXFIFO$writeDone(data, length, error);
#line 91
      break;
#line 91
    case CC2420_RXFIFO:
#line 91
      CC2420ReceiveP$RXFIFO$writeDone(data, length, error);
#line 91
      break;
#line 91
    default:
#line 91
      CC2420SpiP$Fifo$default$writeDone(arg_0x409ce280, data, length, error);
#line 91
      break;
#line 91
    }
#line 91
}
#line 91
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP$RXCTRL1$write(uint16_t data){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = CC2420SpiP$Reg$write(CC2420_RXCTRL1, data);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
inline static cc2420_status_t CC2420ControlP$IOCFG0$write(uint16_t data){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = CC2420SpiP$Reg$write(CC2420_IOCFG0, data);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ControlP$SXOSCON$strobe(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = CC2420SpiP$Strobe$strobe(CC2420_SXOSCON);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t HplCC2420InterruptsP$CCATask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(HplCC2420InterruptsP$CCATask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static bool HplCC2420InterruptsP$CC_CCA$get(void ){
#line 32
  unsigned char __nesc_result;
#line 32

#line 32
  __nesc_result = /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$get();
#line 32

#line 32
  return __nesc_result;
#line 32
}
#line 32
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/micaz/chips/cc2420/HplCC2420InterruptsP.nc"
static inline error_t HplCC2420InterruptsP$CCA$enableRisingEdge(void )
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
inline static error_t CC2420ControlP$InterruptCCA$enableRisingEdge(void ){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = HplCC2420InterruptsP$CCA$enableRisingEdge();
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP$IOCFG1$write(uint16_t data){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = CC2420SpiP$Reg$write(CC2420_IOCFG1, data);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 207 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP$CC2420Power$startOscillator(void )
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
inline static error_t CC2420CsmaP$CC2420Power$startOscillator(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = CC2420ControlP$CC2420Power$startOscillator();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 208 "CC2420CsmaP.nc"
static inline void CC2420CsmaP$Resource$granted(void )
#line 208
{
  CC2420CsmaP$CC2420Power$startOscillator();
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void CC2420ControlP$Resource$granted(void ){
#line 92
  CC2420CsmaP$Resource$granted();
#line 92
}
#line 92
# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP$CSN$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$clr();
#line 30
}
#line 30
# 390 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP$SpiResource$granted(void )
#line 390
{
  CC2420ControlP$CSN$clr();
  CC2420ControlP$Resource$granted();
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420ControlP$syncDone$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(CC2420ControlP$syncDone);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP$SyncResource$release(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = CC2420SpiP$Resource$release(/*CC2420ControlC.SyncSpiC*/CC2420SpiC$1$CLIENT_ID);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP$CSN$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$set();
#line 29
}
#line 29
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ControlP$SRXON$strobe(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = CC2420SpiP$Strobe$strobe(CC2420_SRXON);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
inline static cc2420_status_t CC2420ControlP$SRFOFF$strobe(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = CC2420SpiP$Strobe$strobe(CC2420_SRFOFF);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 376 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP$SyncResource$granted(void )
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
static inline void CC2420ControlP$ReadRssi$default$readDone(error_t error, uint16_t data)
#line 509
{
}

# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Read.nc"
inline static void CC2420ControlP$ReadRssi$readDone(error_t result, CC2420ControlP$ReadRssi$val_t val){
#line 63
  CC2420ControlP$ReadRssi$default$readDone(result, val);
#line 63
}
#line 63
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP$RssiResource$release(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = CC2420SpiP$Resource$release(/*CC2420ControlC.RssiResource*/CC2420SpiC$2$CLIENT_ID);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 287 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline cc2420_status_t CC2420SpiP$Reg$read(uint8_t addr, uint16_t *data)
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
inline static cc2420_status_t CC2420ControlP$RSSI$read(uint16_t *data){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = CC2420SpiP$Reg$read(CC2420_RSSI, data);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 395 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP$RssiResource$granted(void )
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
static inline void CC2420TransmitP$SpiResource$granted(void )
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
static inline void CC2420ReceiveP$SpiResource$granted(void )
#line 186
{
  CC2420ReceiveP$receive();
}

# 367 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP$Resource$default$granted(uint8_t id)
#line 367
{
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void CC2420SpiP$Resource$granted(uint8_t arg_0x409cf818){
#line 92
  switch (arg_0x409cf818) {
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
      CC2420SpiP$Resource$default$granted(arg_0x409cf818);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 358 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP$grant$runTask(void )
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
inline static cc2420_status_t CC2420ControlP$FSCTRL$write(uint16_t data){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = CC2420SpiP$Reg$write(CC2420_FSCTRL, data);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
inline static cc2420_status_t CC2420ControlP$MDMCTRL0$write(uint16_t data){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = CC2420SpiP$Reg$write(CC2420_MDMCTRL0, data);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
inline static cc2420_status_t CC2420ControlP$PANID$write(uint8_t offset, uint8_t * data, uint8_t length){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP$Ram$write(CC2420_RAM_PANID, offset, data, length);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420CsmaP$startDone_task$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(CC2420CsmaP$startDone_task);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 212 "CC2420CsmaP.nc"
static inline void CC2420CsmaP$CC2420Power$startOscillatorDone(void )
#line 212
{
  CC2420CsmaP$startDone_task$postTask();
}

# 76 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static void CC2420ControlP$CC2420Power$startOscillatorDone(void ){
#line 76
  CC2420CsmaP$CC2420Power$startOscillatorDone();
#line 76
}
#line 76
# 105 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/micaz/chips/cc2420/HplCC2420InterruptsP.nc"
static inline error_t HplCC2420InterruptsP$CCA$disable(void )
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
inline static error_t CC2420ControlP$InterruptCCA$disable(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = HplCC2420InterruptsP$CCA$disable();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 418 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP$InterruptCCA$fired(void )
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
inline static void HplCC2420InterruptsP$CCA$fired(void ){
#line 57
  CC2420ControlP$InterruptCCA$fired();
#line 57
}
#line 57
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/micaz/chips/cc2420/HplCC2420InterruptsP.nc"
static inline void HplCC2420InterruptsP$CCATask$runTask(void )
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

# 194 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP$CC2420Config$syncDone(error_t error)
#line 194
{
}

# 350 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP$CC2420Config$syncDone(error_t error)
#line 350
{
}

# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static void CC2420ControlP$CC2420Config$syncDone(error_t error){
#line 53
  CC2420ReceiveP$CC2420Config$syncDone(error);
#line 53
  CC2420ActiveMessageP$CC2420Config$syncDone(error);
#line 53
}
#line 53
# 446 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP$syncDone$runTask(void )
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
inline static error_t CC2420ControlP$SyncResource$request(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = CC2420SpiP$Resource$request(/*CC2420ControlC.SyncSpiC*/CC2420SpiC$1$CLIENT_ID);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 300 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP$CC2420Config$sync(void )
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
static inline void CC2420ControlP$sync$runTask(void )
#line 442
{
  CC2420ControlP$CC2420Config$sync();
}

# 181 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(am_id_t id, message_t *msg, error_t err)
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
inline static void CC2420ActiveMessageP$AMSend$sendDone(am_id_t arg_0x407567f8, message_t * msg, error_t error){
#line 99
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(arg_0x407567f8, msg, error);
#line 99
}
#line 99
# 166 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP$SubSend$sendDone(message_t *msg, error_t result)
#line 166
{
  CC2420ActiveMessageP$AMSend$sendDone(CC2420ActiveMessageP$AMPacket$type(msg), msg, result);
}

# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static void UniqueSendP$Send$sendDone(message_t * msg, error_t error){
#line 89
  CC2420ActiveMessageP$SubSend$sendDone(msg, error);
#line 89
}
#line 89
# 104 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline void UniqueSendP$SubSend$sendDone(message_t *msg, error_t error)
#line 104
{
  UniqueSendP$State$toIdle();
  UniqueSendP$Send$sendDone(msg, error);
}

# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static void DefaultLplP$Send$sendDone(message_t * msg, error_t error){
#line 89
  UniqueSendP$SubSend$sendDone(msg, error);
#line 89
}
#line 89
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/State.nc"
inline static void DefaultLplP$SendState$toIdle(void ){
#line 56
  StateImplP$State$toIdle(5U);
#line 56
}
#line 56
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc"
inline static bool DefaultLplP$PacketAcknowledgements$wasAcked(message_t * msg){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = CC2420PacketP$Acks$wasAcked(msg);
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 81 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static bool DefaultLplP$SendDoneTimer$isRunning(void ){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$isRunning(5U);
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 375 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/lpl/DefaultLplP.nc"
static inline void DefaultLplP$SubSend$sendDone(message_t *msg, error_t error)
#line 375
{

  switch (DefaultLplP$SendState$getState()) {
      case S_LPL_SENDING: 
        if (DefaultLplP$SendDoneTimer$isRunning()) {
            if (!DefaultLplP$PacketAcknowledgements$wasAcked(msg)) {
                DefaultLplP$resend$postTask();
                return;
              }
          }
      break;

      case S_LPL_CLEAN_UP: 




        break;

      default: 
        break;
    }

  DefaultLplP$SendState$toIdle();
  DefaultLplP$SendDoneTimer$stop();
  DefaultLplP$startOffTimer();
  DefaultLplP$Send$sendDone(msg, error);
}

# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static void CC2420TinyosNetworkP$Send$sendDone(message_t * msg, error_t error){
#line 89
  DefaultLplP$SubSend$sendDone(msg, error);
#line 89
}
#line 89
# 79 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline void CC2420TinyosNetworkP$SubSend$sendDone(message_t *msg, error_t error)
#line 79
{
  CC2420TinyosNetworkP$Send$sendDone(msg, error);
}

# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static void CC2420CsmaP$Send$sendDone(message_t * msg, error_t error){
#line 89
  CC2420TinyosNetworkP$SubSend$sendDone(msg, error);
#line 89
}
#line 89
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420CsmaP$stopDone_task$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(CC2420CsmaP$stopDone_task);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static error_t CC2420CsmaP$CC2420Power$stopVReg(void ){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420ControlP$CC2420Power$stopVReg();
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 271 "CC2420CsmaP.nc"
static inline void CC2420CsmaP$shutdown(void )
#line 271
{
  CC2420CsmaP$SubControl$stop();
  CC2420CsmaP$CC2420Power$stopVReg();
  CC2420CsmaP$stopDone_task$postTask();
}

#line 240
static inline void CC2420CsmaP$sendDone_task$runTask(void )
#line 240
{
  error_t packetErr;

#line 242
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 242
    packetErr = CC2420CsmaP$sendErr;
#line 242
    __nesc_atomic_end(__nesc_atomic); }
  if (CC2420CsmaP$SplitControlState$isState(CC2420CsmaP$S_STOPPING)) {
      CC2420CsmaP$shutdown();
    }
  else {
      CC2420CsmaP$SplitControlState$forceState(CC2420CsmaP$S_STARTED);
    }

  CC2420CsmaP$Send$sendDone(CC2420CsmaP$m_msg, packetErr);
}

# 359 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/lpl/DefaultLplP.nc"
static inline void DefaultLplP$SubControl$stopDone(error_t error)
#line 359
{
  if (!error) {


      if (
#line 362
      DefaultLplP$SendState$getState() == S_LPL_FIRST_MESSAGE
       || DefaultLplP$SendState$getState() == S_LPL_SENDING) {

          DefaultLplP$startRadio$postTask();
        }
      else {
          DefaultLplP$OffTimer$stop();
          DefaultLplP$SendDoneTimer$stop();
        }
    }
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/State.nc"
inline static void PowerCycleP$RadioPowerState$forceState(uint8_t reqState){
#line 51
  StateImplP$State$forceState(3U, reqState);
#line 51
}
#line 51
# 209 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/lpl/PowerCycleP.nc"
static inline void PowerCycleP$SubControl$stopDone(error_t error)
#line 209
{
  PowerCycleP$RadioPowerState$forceState(PowerCycleP$S_OFF);


  if (PowerCycleP$finishSplitControlRequests()) {
      return;
    }
  else {
#line 216
    if (PowerCycleP$isDutyCycling()) {
        PowerCycleP$OnTimer$startOneShot(PowerCycleP$sleepInterval);
      }
    }
}

# 117 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void CC2420CsmaP$SplitControl$stopDone(error_t error){
#line 117
  PowerCycleP$SubControl$stopDone(error);
#line 117
  DefaultLplP$SubControl$stopDone(error);
#line 117
}
#line 117
# 261 "CC2420CsmaP.nc"
static inline void CC2420CsmaP$stopDone_task$runTask(void )
#line 261
{
  CC2420CsmaP$SplitControlState$forceState(CC2420CsmaP$S_STOPPED);
  CC2420CsmaP$SplitControl$stopDone(SUCCESS);
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/State.nc"
inline static void DefaultLplP$RadioPowerState$forceState(uint8_t reqState){
#line 51
  StateImplP$State$forceState(3U, reqState);
#line 51
}
#line 51
# 348 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/lpl/DefaultLplP.nc"
static inline void DefaultLplP$SubControl$startDone(error_t error)
#line 348
{
  if (!error) {
      DefaultLplP$RadioPowerState$forceState(DefaultLplP$S_ON);


      if (
#line 352
      DefaultLplP$SendState$getState() == S_LPL_FIRST_MESSAGE
       || DefaultLplP$SendState$getState() == S_LPL_SENDING) {
          DefaultLplP$initializeSend();
        }
    }
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t PowerCycleP$getCca$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(PowerCycleP$getCca);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 197 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/lpl/PowerCycleP.nc"
static inline void PowerCycleP$SubControl$startDone(error_t error)
#line 197
{
  PowerCycleP$RadioPowerState$forceState(PowerCycleP$S_ON);


  if (PowerCycleP$finishSplitControlRequests()) {
      return;
    }
  else {
#line 204
    if (PowerCycleP$isDutyCycling()) {
        PowerCycleP$getCca$postTask();
      }
    }
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void CC2420CsmaP$SplitControl$startDone(error_t error){
#line 92
  PowerCycleP$SubControl$startDone(error);
#line 92
  DefaultLplP$SubControl$startDone(error);
#line 92
}
#line 92
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP$SpiResource$release(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = CC2420SpiP$Resource$release(/*CC2420ControlC.Spi*/CC2420SpiC$0$CLIENT_ID);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 179 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP$Resource$release(void )
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
inline static error_t CC2420CsmaP$Resource$release(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = CC2420ControlP$Resource$release();
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 249 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP$CC2420Power$rxOn(void )
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
inline static error_t CC2420CsmaP$CC2420Power$rxOn(void ){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = CC2420ControlP$CC2420Power$rxOn();
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$enable(void )
#line 42
{
#line 42
  * (volatile uint8_t *)(0x39 + 0x20) |= 1 << 6;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$enable(void ){
#line 35
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$enable();
#line 35
}
#line 35
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$edge(bool low_to_high)
#line 47
{
  * (volatile uint8_t * )90U |= 1 << 5;

  if (low_to_high) {
    * (volatile uint8_t * )90U |= 1 << 4;
    }
  else {
#line 53
    * (volatile uint8_t * )90U &= ~(1 << 4);
    }
}

# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$edge(bool low_to_high){
#line 59
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$edge(low_to_high);
#line 59
}
#line 59
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$clear(void )
#line 41
{
#line 41
  * (volatile uint8_t *)(0x38 + 0x20) = 1 << 6;
}

# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$clear(void ){
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





static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$enableFallingEdge(void )
#line 29
{
  return /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$enable(FALSE);
}

# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ReceiveP$InterruptFIFOP$enableFallingEdge(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$enableFallingEdge();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 124 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline error_t CC2420ReceiveP$StdControl$start(void )
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
static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captureRisingEdge(void )
#line 52
{
  return /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$enableCapture(TRUE);
}

# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioCapture.nc"
inline static error_t CC2420TransmitP$CaptureSFD$captureRisingEdge(void ){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captureRisingEdge();
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 148 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP$StdControl$start(void )
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
inline static error_t CC2420CsmaP$SubControl$start(void ){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = CC2420TransmitP$StdControl$start();
#line 74
  __nesc_result = ecombine(__nesc_result, CC2420ReceiveP$StdControl$start());
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 253 "CC2420CsmaP.nc"
static inline void CC2420CsmaP$startDone_task$runTask(void )
#line 253
{
  CC2420CsmaP$SubControl$start();
  CC2420CsmaP$CC2420Power$rxOn();
  CC2420CsmaP$Resource$release();
  CC2420CsmaP$SplitControlState$forceState(CC2420CsmaP$S_STARTED);
  CC2420CsmaP$SplitControl$startDone(SUCCESS);
}

# 122 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P$Capture$setEdge(bool up)
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
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$setEdge(bool up){
#line 79
  HplAtm128Timer1P$Capture$setEdge(up);
#line 79
}
#line 79
# 132 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P$Capture$start(void )
#line 132
{
#line 132
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 5;
}

# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$start(void ){
#line 58
  HplAtm128Timer1P$Capture$start();
#line 58
}
#line 58
# 268 "MultihopOscilloscopeC.nc"
static inline void MultihopOscilloscopeC$Read$readDone(error_t result, uint16_t data)
#line 268
{
  if (result != SUCCESS) {
      data = 0xffff;
      MultihopOscilloscopeC$report_problem();
    }
  __nesc_hton_uint16(MultihopOscilloscopeC$local.readings[MultihopOscilloscopeC$reading++].data, data);
}

# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbitratedReadC.nc"
static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$default$readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$width_t data)
#line 48
{
}

# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Read.nc"
inline static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$readDone(uint8_t arg_0x4070a0c8, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$val_t val){
#line 63
  switch (arg_0x4070a0c8) {
#line 63
    case /*MultihopOscilloscopeAppC.Sensor.DemoChannel.AdcReadClientC*/AdcReadClientC$0$ID:
#line 63
      MultihopOscilloscopeC$Read$readDone(result, val);
#line 63
      break;
#line 63
    default:
#line 63
      /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$default$readDone(arg_0x4070a0c8, result, val);
#line 63
      break;
#line 63
    }
#line 63
}
#line 63
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuPowerState.nc"
inline static void HplAtm128AdcP$McuPowerState$update(void ){
#line 44
  McuSleepC$McuPowerState$update();
#line 44
}
#line 44
# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline void HplAtm128AdcP$HplAtm128Adc$disableAdc(void )
#line 73
{
  * (volatile uint8_t *)(0x06 + 0x20) &= ~(1 << 7);
  HplAtm128AdcP$McuPowerState$update();
}

# 77 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP$HplAtm128Adc$disableAdc(void ){
#line 77
  HplAtm128AdcP$HplAtm128Adc$disableAdc();
#line 77
}
#line 77
# 109 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline error_t Atm128AdcP$AsyncStdControl$stop(void )
#line 109
{
  /* atomic removed: atomic calls only */
#line 110
  Atm128AdcP$HplAtm128Adc$disableAdc();

  return SUCCESS;
}

# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AsyncStdControl.nc"
inline static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$AsyncStdControl$stop(void ){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = Atm128AdcP$AsyncStdControl$stop();
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$PowerDownCleanup$default$cleanup(void )
#line 74
{
}

# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/power/PowerDownCleanup.nc"
inline static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$PowerDownCleanup$cleanup(void ){
#line 52
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$PowerDownCleanup$default$cleanup();
#line 52
}
#line 52
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$granted(void )
#line 69
{
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$PowerDownCleanup$cleanup();
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$AsyncStdControl$stop();
}

# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$granted(void ){
#line 46
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$granted();
#line 46
}
#line 46
# 214 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(uint8_t id)
#line 214
{
}

# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$unconfigure(uint8_t arg_0x406c35e0){
#line 55
    /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(arg_0x406c35e0);
#line 55
}
#line 55
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$grantedTask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$grantedTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/system/RoundRobinResourceQueueC.nc"
static inline void /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$clearEntry(uint8_t id)
#line 47
{
  /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$resQ[id / 8] &= ~(1 << id % 8);
}

#line 69
static inline resource_client_id_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$dequeue(void )
#line 69
{
  int i;

  /* atomic removed: atomic calls only */
#line 71
  {
    for (i = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$last + 1; ; i++) {
        if (i == 1U) {
          i = 0;
          }
#line 75
        if (/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEnqueued(i)) {
            /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$clearEntry(i);
            /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$last = i;
            {
              unsigned char __nesc_temp = 
#line 78
              i;

#line 78
              return __nesc_temp;
            }
          }
#line 80
        if (i == /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$last) {
          break;
          }
      }
#line 83
    {
      unsigned char __nesc_temp = 
#line 83
      /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$NO_ENTRY;

#line 83
      return __nesc_temp;
    }
  }
}

# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Queue$dequeue(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$dequeue();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/system/RoundRobinResourceQueueC.nc"
static inline bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEmpty(void )
#line 56
{
  int i;

  /* atomic removed: atomic calls only */
#line 58
  {
    for (i = 0; i < sizeof /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$resQ; i++) 
      if (/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$resQ[i] > 0) {
          unsigned char __nesc_temp = 
#line 60
          FALSE;

#line 60
          return __nesc_temp;
        }
#line 61
    {
      unsigned char __nesc_temp = 
#line 61
      TRUE;

#line 61
      return __nesc_temp;
    }
  }
}

# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static bool /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Queue$isEmpty(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEmpty();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 108 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$release(uint8_t id)
#line 108
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 109
    {
      if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$RES_BUSY && /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$resId == id) {
          if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Queue$isEmpty() == FALSE) {
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$reqResId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Queue$dequeue();
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$RES_GRANTING;
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$grantedTask$postTask();
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$unconfigure(id);
            }
          else {
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$default_owner_id;
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$RES_CONTROLLED;
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$unconfigure(id);
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$granted();
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

# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbitratedReadC.nc"
static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$default$release(uint8_t client)
#line 47
{
#line 47
  return FAIL;
}

# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$release(uint8_t arg_0x4071d010){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  switch (arg_0x4071d010) {
#line 110
    case /*MultihopOscilloscopeAppC.Sensor.DemoChannel.AdcReadClientC*/AdcReadClientC$0$ID:
#line 110
      __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$release(/*MultihopOscilloscopeAppC.Sensor.DemoChannel.AdcReadClientC*/AdcReadClientC$0$HAL_ID);
#line 110
      break;
#line 110
    default:
#line 110
      __nesc_result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$default$release(arg_0x4071d010);
#line 110
      break;
#line 110
    }
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbitratedReadC.nc"
static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$width_t data)
#line 39
{
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$release(client);
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$readDone(client, result, data);
}

# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Read.nc"
inline static void AdcP$Read$readDone(uint8_t arg_0x406f60e8, error_t result, AdcP$Read$val_t val){
#line 63
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$readDone(arg_0x406f60e8, result, val);
#line 63
}
#line 63
# 103 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
static inline void AdcP$acquiredData$runTask(void )
#line 103
{
  AdcP$state = AdcP$IDLE;
  AdcP$Read$readDone(AdcP$client, SUCCESS, AdcP$val);
}

#line 86
static inline error_t AdcP$startGet(uint8_t newState, uint8_t newClient)
#line 86
{

  AdcP$state = newState;
  AdcP$client = newClient;
  AdcP$sample();

  return SUCCESS;
}

static inline error_t AdcP$Read$read(uint8_t c)
#line 95
{
  return AdcP$startGet(AdcP$ACQUIRE_DATA, c);
}

# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Read.nc"
inline static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$read(uint8_t arg_0x407080e8){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = AdcP$Read$read(arg_0x407080e8);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbitratedReadC.nc"
static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$granted(uint8_t client)
#line 35
{
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$read(client);
}

# 198 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$default$granted(uint8_t id)
#line 198
{
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$granted(uint8_t arg_0x406b07d8){
#line 92
  switch (arg_0x406b07d8) {
#line 92
    case /*MultihopOscilloscopeAppC.Sensor.DemoChannel.AdcReadClientC*/AdcReadClientC$0$HAL_ID:
#line 92
      /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$granted(/*MultihopOscilloscopeAppC.Sensor.DemoChannel.AdcReadClientC*/AdcReadClientC$0$ID);
#line 92
      break;
#line 92
    default:
#line 92
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$default$granted(arg_0x406b07d8);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 212 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(uint8_t id)
#line 212
{
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$configure(uint8_t arg_0x406c35e0){
#line 49
    /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(arg_0x406c35e0);
#line 49
}
#line 49
# 186 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$grantedTask$runTask(void )
#line 186
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 187
    {
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$reqResId;
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$RES_BUSY;
    }
#line 190
    __nesc_atomic_end(__nesc_atomic); }
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$configure(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$resId);
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$granted(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$resId);
}

# 103 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/mica/MeasureClockC.nc"
static inline uint8_t MeasureClockC$Atm128Calibrate$adcPrescaler(void )
#line 103
{

  if (MeasureClockC$cycles >= 390) {
    return ATM128_ADC_PRESCALE_128;
    }
#line 107
  if (MeasureClockC$cycles >= 195) {
    return ATM128_ADC_PRESCALE_64;
    }
#line 109
  if (MeasureClockC$cycles >= 97) {
    return ATM128_ADC_PRESCALE_32;
    }
#line 111
  if (MeasureClockC$cycles >= 48) {
    return ATM128_ADC_PRESCALE_16;
    }
#line 113
  if (MeasureClockC$cycles >= 24) {
    return ATM128_ADC_PRESCALE_8;
    }
#line 115
  if (MeasureClockC$cycles >= 12) {
    return ATM128_ADC_PRESCALE_4;
    }
#line 117
  return ATM128_ADC_PRESCALE_2;
}

# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128Calibrate.nc"
inline static uint8_t Atm128AdcP$Atm128Calibrate$adcPrescaler(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = MeasureClockC$Atm128Calibrate$adcPrescaler();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline uint8_t HplAtm128AdcP$Admux2int(Atm128Admux_t x)
#line 50
{
#line 50
  union __nesc_unnamed4438 {
#line 50
    Atm128Admux_t f;
#line 50
    uint8_t t;
  } 
#line 50
  c = { .f = x };

#line 50
  return c.t;
}


static inline void HplAtm128AdcP$HplAtm128Adc$setAdmux(Atm128Admux_t x)
#line 54
{
  * (volatile uint8_t *)(0x07 + 0x20) = HplAtm128AdcP$Admux2int(x);
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP$HplAtm128Adc$setAdmux(Atm128Admux_t admux){
#line 49
  HplAtm128AdcP$HplAtm128Adc$setAdmux(admux);
#line 49
}
#line 49
# 119 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcP.nc"
static __inline bool Atm128AdcP$isPrecise(Atm128Admux_t admux, uint8_t channel, uint8_t refVoltage)
#line 119
{
  return refVoltage == admux.refs && ((
  channel <= ATM128_ADC_SNGL_ADC7 || channel >= ATM128_ADC_SNGL_1_23) || channel == admux.mux);
}

# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline Atm128Admux_t HplAtm128AdcP$HplAtm128Adc$getAdmux(void )
#line 40
{
  return * (Atm128Admux_t *)& * (volatile uint8_t *)(0x07 + 0x20);
}

# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static Atm128Admux_t Atm128AdcP$HplAtm128Adc$getAdmux(void ){
#line 44
  struct __nesc_unnamed4251 __nesc_result;
#line 44

#line 44
  __nesc_result = HplAtm128AdcP$HplAtm128Adc$getAdmux();
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 184 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline void Atm128AdcP$getData(uint8_t channel, uint8_t refVoltage, bool leftJustify, uint8_t prescaler)
#line 184
{
  Atm128Admux_t admux;
  Atm128Adcsra_t adcsr;

  admux = Atm128AdcP$HplAtm128Adc$getAdmux();
  Atm128AdcP$f.precise = Atm128AdcP$isPrecise(admux, channel, refVoltage);
  Atm128AdcP$f.channel = channel;

  admux.refs = refVoltage;
  admux.adlar = leftJustify;
  admux.mux = channel;
  Atm128AdcP$HplAtm128Adc$setAdmux(admux);

  adcsr.aden = ATM128_ADC_ENABLE_ON;
  adcsr.adsc = ATM128_ADC_START_CONVERSION_ON;
  adcsr.adfr = Atm128AdcP$f.multiple;
  adcsr.adif = ATM128_ADC_INT_FLAG_ON;
  adcsr.adie = ATM128_ADC_INT_ENABLE_ON;
  if (prescaler == ATM128_ADC_PRESCALE) {
    prescaler = Atm128AdcP$Atm128Calibrate$adcPrescaler();
    }
#line 204
  adcsr.adps = prescaler;
  Atm128AdcP$HplAtm128Adc$setAdcsra(adcsr);
}

static inline bool Atm128AdcP$Atm128AdcSingle$getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler)
#line 209
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      Atm128AdcP$f.multiple = FALSE;
      Atm128AdcP$getData(channel, refVoltage, leftJustify, prescaler);

      {
        unsigned char __nesc_temp = 
#line 215
        Atm128AdcP$f.precise;

        {
#line 215
          __nesc_atomic_end(__nesc_atomic); 
#line 215
          return __nesc_temp;
        }
      }
    }
#line 218
    __nesc_atomic_end(__nesc_atomic); }
}

# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcSingle.nc"
inline static bool AdcP$Atm128AdcSingle$getData(uint8_t channel, uint8_t refVoltage, bool leftJustify, uint8_t prescaler){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = Atm128AdcP$Atm128AdcSingle$getData(channel, refVoltage, leftJustify, prescaler);
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 34 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/mica/VoltageP.nc"
static inline uint8_t VoltageP$Atm128AdcConfig$getChannel(void )
{

  return ATM128_ADC_SNGL_1_23;
}

# 137 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP$Atm128AdcConfig$default$getChannel(uint8_t c)
#line 137
{
  return ATM128_ADC_SNGL_GND;
}

# 25 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
inline static uint8_t AdcP$Atm128AdcConfig$getChannel(uint8_t arg_0x406f45c0){
#line 25
  unsigned char __nesc_result;
#line 25

#line 25
  switch (arg_0x406f45c0) {
#line 25
    case /*MultihopOscilloscopeAppC.Sensor.DemoChannel.AdcReadClientC*/AdcReadClientC$0$ID:
#line 25
      __nesc_result = VoltageP$Atm128AdcConfig$getChannel();
#line 25
      break;
#line 25
    default:
#line 25
      __nesc_result = AdcP$Atm128AdcConfig$default$getChannel(arg_0x406f45c0);
#line 25
      break;
#line 25
    }
#line 25

#line 25
  return __nesc_result;
#line 25
}
#line 25
# 70 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP$channel(void )
#line 70
{
  return AdcP$Atm128AdcConfig$getChannel(AdcP$client);
}

# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/mica/VoltageP.nc"
static inline uint8_t VoltageP$Atm128AdcConfig$getRefVoltage(void )
{
  return ATM128_ADC_VREF_OFF;
}

# 141 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP$Atm128AdcConfig$default$getRefVoltage(uint8_t c)
#line 141
{
  return ATM128_ADC_VREF_OFF;
}

# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
inline static uint8_t AdcP$Atm128AdcConfig$getRefVoltage(uint8_t arg_0x406f45c0){
#line 32
  unsigned char __nesc_result;
#line 32

#line 32
  switch (arg_0x406f45c0) {
#line 32
    case /*MultihopOscilloscopeAppC.Sensor.DemoChannel.AdcReadClientC*/AdcReadClientC$0$ID:
#line 32
      __nesc_result = VoltageP$Atm128AdcConfig$getRefVoltage();
#line 32
      break;
#line 32
    default:
#line 32
      __nesc_result = AdcP$Atm128AdcConfig$default$getRefVoltage(arg_0x406f45c0);
#line 32
      break;
#line 32
    }
#line 32

#line 32
  return __nesc_result;
#line 32
}
#line 32
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP$refVoltage(void )
#line 74
{
  return AdcP$Atm128AdcConfig$getRefVoltage(AdcP$client);
}

# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/mica/VoltageP.nc"
static inline uint8_t VoltageP$Atm128AdcConfig$getPrescaler(void )
{
  return ATM128_ADC_PRESCALE;
}

# 145 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP$Atm128AdcConfig$default$getPrescaler(uint8_t c)
#line 145
{
  return ATM128_ADC_PRESCALE_2;
}

# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
inline static uint8_t AdcP$Atm128AdcConfig$getPrescaler(uint8_t arg_0x406f45c0){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  switch (arg_0x406f45c0) {
#line 39
    case /*MultihopOscilloscopeAppC.Sensor.DemoChannel.AdcReadClientC*/AdcReadClientC$0$ID:
#line 39
      __nesc_result = VoltageP$Atm128AdcConfig$getPrescaler();
#line 39
      break;
#line 39
    default:
#line 39
      __nesc_result = AdcP$Atm128AdcConfig$default$getPrescaler(arg_0x406f45c0);
#line 39
      break;
#line 39
    }
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP$prescaler(void )
#line 78
{
  return AdcP$Atm128AdcConfig$getPrescaler(AdcP$client);
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type dt){
#line 92
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(t0, dt);
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
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 83
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(t0, dt, TRUE);
}

# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(uint32_t t0, uint32_t dt){
#line 118
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(t0, dt);
#line 118
}
#line 118
# 204 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop(void )
#line 204
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 205
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set = FALSE;
#line 205
    __nesc_atomic_end(__nesc_atomic); }
}

# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop(void ){
#line 62
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop();
#line 62
}
#line 62
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void )
{
#line 61
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop();
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop(void ){
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop();
#line 67
}
#line 67
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void )
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

# 129 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$release(void )
#line 129
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 130
    {
      if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$resId == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$default_owner_id) {
          if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$RES_GRANTING) {
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$grantedTask$postTask();
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
            if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$RES_IMM_GRANTING) {
                /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$reqResId;
                /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$RES_BUSY;
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

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
inline static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$release(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$release();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline void HplAtm128AdcP$HplAtm128Adc$enableAdc(void )
#line 69
{
  * (volatile uint8_t *)(0x06 + 0x20) |= 1 << 7;
  HplAtm128AdcP$McuPowerState$update();
}

# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP$HplAtm128Adc$enableAdc(void ){
#line 73
  HplAtm128AdcP$HplAtm128Adc$enableAdc();
#line 73
}
#line 73
# 104 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline error_t Atm128AdcP$AsyncStdControl$start(void )
#line 104
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 105
    Atm128AdcP$HplAtm128Adc$enableAdc();
#line 105
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AsyncStdControl.nc"
inline static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$AsyncStdControl$start(void ){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = Atm128AdcP$AsyncStdControl$start();
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$requested(void )
#line 59
{
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$AsyncStdControl$start();
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$release();
}

# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$requested(void ){
#line 73
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceDefaultOwner$requested();
#line 73
}
#line 73
# 87 "/opt/CVSTinyOS/tinyos-2.x/tos/system/RoundRobinResourceQueueC.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$enqueue(resource_client_id_t id)
#line 87
{
  /* atomic removed: atomic calls only */
#line 88
  {
    if (!/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEnqueued(id)) {
        /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$resQ[id / 8] |= 1 << id % 8;
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
      EBUSY;

#line 93
      return __nesc_temp;
    }
  }
}

# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Queue$enqueue(resource_client_id_t id){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$enqueue(id);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 200 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(uint8_t id)
#line 200
{
}

# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceRequested$requested(uint8_t arg_0x406c4230){
#line 43
    /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(arg_0x406c4230);
#line 43
}
#line 43
# 77 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$request(uint8_t id)
#line 77
{
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceRequested$requested(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 79
    {
      if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$RES_CONTROLLED) {
          /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$RES_GRANTING;
          /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$reqResId = id;
        }
      else {
          unsigned char __nesc_temp = 
#line 84
          /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Queue$enqueue(id);

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
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$requested();
  return SUCCESS;
}

# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbitratedReadC.nc"
static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$default$request(uint8_t client)
#line 44
{
  return FAIL;
}

# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$request(uint8_t arg_0x4071d010){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  switch (arg_0x4071d010) {
#line 78
    case /*MultihopOscilloscopeAppC.Sensor.DemoChannel.AdcReadClientC*/AdcReadClientC$0$ID:
#line 78
      __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$request(/*MultihopOscilloscopeAppC.Sensor.DemoChannel.AdcReadClientC*/AdcReadClientC$0$HAL_ID);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$default$request(arg_0x4071d010);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbitratedReadC.nc"
static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$read(uint8_t client)
#line 31
{
  return /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$request(client);
}

# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Read.nc"
inline static error_t MultihopOscilloscopeC$Read$read(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$read(/*MultihopOscilloscopeAppC.Sensor.DemoChannel.AdcReadClientC*/AdcReadClientC$0$ID);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/CollectionIdP.nc"
static inline collection_id_t /*MultihopOscilloscopeAppC.CollectionSenderC.CollectionSenderP.CollectionIdP*/CollectionIdP$0$CollectionId$fetch(void )
#line 50
{
  return 147;
}

# 941 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline collection_id_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionId$default$fetch(uint8_t client)
#line 941
{
  return 0;
}

# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/CollectionId.nc"
inline static collection_id_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionId$fetch(uint8_t arg_0x40dde780){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  switch (arg_0x40dde780) {
#line 46
    case 0U:
#line 46
      __nesc_result = /*MultihopOscilloscopeAppC.CollectionSenderC.CollectionSenderP.CollectionIdP*/CollectionIdP$0$CollectionId$fetch();
#line 46
      break;
#line 46
    default:
#line 46
      __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionId$default$fetch(arg_0x40dde780);
#line 46
      break;
#line 46
    }
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 307 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$send(uint8_t client, message_t *msg, uint8_t len)
#line 307
{
  ctp_data_header_t *hdr;
  fe_queue_entry_t *qe;

#line 310
  ;
  if (!/*CtpP.Forwarder*/CtpForwardingEngineP$0$running) {
#line 311
      return EOFF;
    }
#line 312
  if (len > /*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$maxPayloadLength(client)) {
#line 312
      return ESIZE;
    }
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$setPayloadLength(msg, len);
  hdr = /*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(msg);
  __nesc_hton_uint16(hdr->origin.data, TOS_NODE_ID);
  __nesc_hton_uint8(hdr->originSeqNo.data, /*CtpP.Forwarder*/CtpForwardingEngineP$0$seqno++);
  __nesc_hton_uint8(hdr->type.data, /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionId$fetch(client));
  __nesc_hton_uint8(hdr->thl.data, 0);

  if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$clientPtrs[client] == (void *)0) {
      ;
      return EBUSY;
    }

  qe = /*CtpP.Forwarder*/CtpForwardingEngineP$0$clientPtrs[client];
  qe->msg = msg;
  qe->client = client;
  qe->retries = MAX_RETRIES;
  ;
  if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$enqueue(qe) == SUCCESS) {
      if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$radioOn && !/*CtpP.Forwarder*/CtpForwardingEngineP$0$RetxmitTimer$isRunning()) {
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask$postTask();
        }
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$clientPtrs[client] = (void *)0;
      return SUCCESS;
    }
  else {
      ;




      /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_SEND_QUEUE_FULL);


      return FAIL;
    }
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t MultihopOscilloscopeC$Send$send(message_t * msg, uint8_t len){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$send(0U, msg, len);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 203 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/lpl/DefaultLplP.nc"
static inline void DefaultLplP$LowPowerListening$setRxDutyCycle(message_t *msg, 
uint16_t dutyCycle)
#line 204
{
  __nesc_hton_uint16(DefaultLplP$CC2420PacketBody$getMetadata(msg)->rxInterval.data, 
  DefaultLplP$LowPowerListening$dutyCycleToSleepInterval(dutyCycle));
}

# 107 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/LowPowerListening.nc"
inline static void MultihopOscilloscopeC$LowPowerListening$setRxDutyCycle(message_t * msg, uint16_t dutyCycle){
#line 107
  DefaultLplP$LowPowerListening$setRxDutyCycle(msg, dutyCycle);
#line 107
}
#line 107
# 361 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void */*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$getPayload(uint8_t client, message_t *msg, uint8_t len)
#line 361
{
  return /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$getPayload(msg, len);
}

# 114 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static void * MultihopOscilloscopeC$Send$getPayload(message_t * msg, uint8_t len){
#line 114
  void *__nesc_result;
#line 114

#line 114
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$getPayload(0U, msg, len);
#line 114

#line 114
  return __nesc_result;
#line 114
}
#line 114
# 231 "MultihopOscilloscopeC.nc"
static inline void MultihopOscilloscopeC$Timer$fired(void )
#line 231
{
  unsigned short __nesc_temp43;
  unsigned char *__nesc_temp42;

#line 232
  if (MultihopOscilloscopeC$reading == NREADINGS) {
      if (!MultihopOscilloscopeC$sendbusy) {
          oscilloscope_t *o = (oscilloscope_t *)MultihopOscilloscopeC$Send$getPayload(&MultihopOscilloscopeC$sendbuf, sizeof(oscilloscope_t ));

#line 235
          if (o == (void *)0) {
              MultihopOscilloscopeC$fatal_problem();
              return;
            }
          memcpy(o, &MultihopOscilloscopeC$local, sizeof MultihopOscilloscopeC$local);
          MultihopOscilloscopeC$LowPowerListening$setRxDutyCycle(&MultihopOscilloscopeC$sendbuf, 100);
          if (MultihopOscilloscopeC$Send$send(&MultihopOscilloscopeC$sendbuf, sizeof MultihopOscilloscopeC$local) == SUCCESS) {
            MultihopOscilloscopeC$sendbusy = TRUE;
            }
          else {
#line 244
            MultihopOscilloscopeC$report_problem();
            }
        }
      MultihopOscilloscopeC$reading = 0;


      if (!MultihopOscilloscopeC$suppress_count_change) {
        (__nesc_temp42 = MultihopOscilloscopeC$local.count.data, __nesc_hton_uint16(__nesc_temp42, (__nesc_temp43 = __nesc_ntoh_uint16(__nesc_temp42)) + 1), __nesc_temp43);
        }
#line 252
      MultihopOscilloscopeC$suppress_count_change = FALSE;
    }

  if (MultihopOscilloscopeC$Read$read() != SUCCESS) {
    MultihopOscilloscopeC$fatal_problem();
    }
}

# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/State.nc"
inline static uint8_t PowerCycleP$RadioPowerState$getState(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = StateImplP$State$getState(3U);
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 178 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/lpl/PowerCycleP.nc"
static inline void PowerCycleP$OnTimer$fired(void )
#line 178
{
  if (PowerCycleP$isDutyCycling()) {
      if (PowerCycleP$RadioPowerState$getState() == PowerCycleP$S_OFF) {
          PowerCycleP$ccaChecks = 0;





          PowerCycleP$getCca$postTask();
        }
      else {

          PowerCycleP$OnTimer$startOneShot(PowerCycleP$sleepInterval);
        }
    }
}

#line 130
static inline uint16_t PowerCycleP$PowerCycle$getSleepInterval(void )
#line 130
{
  return PowerCycleP$sleepInterval;
}

# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/PowerCycle.nc"
inline static uint16_t DefaultLplP$PowerCycle$getSleepInterval(void ){
#line 48
  unsigned short __nesc_result;
#line 48

#line 48
  __nesc_result = PowerCycleP$PowerCycle$getSleepInterval();
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 419 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/lpl/DefaultLplP.nc"
static inline void DefaultLplP$OffTimer$fired(void )
#line 419
{





  if (
#line 424
  DefaultLplP$SplitControlState$getState() == DefaultLplP$S_OFF
   || (DefaultLplP$PowerCycle$getSleepInterval() > 0
   && DefaultLplP$SplitControlState$getState() != DefaultLplP$S_OFF
   && DefaultLplP$SendState$getState() == S_LPL_NOT_SENDING)) {
      DefaultLplP$stopRadio$postTask();
    }
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/State.nc"
inline static void DefaultLplP$SendState$forceState(uint8_t reqState){
#line 51
  StateImplP$State$forceState(5U, reqState);
#line 51
}
#line 51
# 436 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/lpl/DefaultLplP.nc"
static inline void DefaultLplP$SendDoneTimer$fired(void )
#line 436
{
  if (DefaultLplP$SendState$getState() == S_LPL_SENDING) {

      DefaultLplP$SendState$forceState(S_LPL_CLEAN_UP);
    }
}

# 185 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$decayInterval(void )
#line 185
{
  /*CtpP.Router*/CtpRoutingEngineP$0$currentInterval *= 2;
  if (/*CtpP.Router*/CtpRoutingEngineP$0$currentInterval > 512000L) {
      /*CtpP.Router*/CtpRoutingEngineP$0$currentInterval = 512000L;
    }
  /*CtpP.Router*/CtpRoutingEngineP$0$chooseAdvertiseTime();
}

static inline void /*CtpP.Router*/CtpRoutingEngineP$0$remainingInterval(void )
#line 193
{
  uint32_t remaining = /*CtpP.Router*/CtpRoutingEngineP$0$currentInterval;

#line 195
  remaining -= /*CtpP.Router*/CtpRoutingEngineP$0$t;
  /*CtpP.Router*/CtpRoutingEngineP$0$tHasPassed = TRUE;
  /*CtpP.Router*/CtpRoutingEngineP$0$BeaconTimer$startOneShot(remaining);
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*CtpP.Router*/CtpRoutingEngineP$0$sendBeaconTask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(/*CtpP.Router*/CtpRoutingEngineP$0$sendBeaconTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 441 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$BeaconTimer$fired(void )
#line 441
{
  if (/*CtpP.Router*/CtpRoutingEngineP$0$radioOn && /*CtpP.Router*/CtpRoutingEngineP$0$running) {
      if (!/*CtpP.Router*/CtpRoutingEngineP$0$tHasPassed) {
          /*CtpP.Router*/CtpRoutingEngineP$0$updateRouteTask$postTask();
          /*CtpP.Router*/CtpRoutingEngineP$0$sendBeaconTask$postTask();
          ;
          /*CtpP.Router*/CtpRoutingEngineP$0$remainingInterval();
        }
      else {
          /*CtpP.Router*/CtpRoutingEngineP$0$decayInterval();
        }
    }
}

#line 435
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$RouteTimer$fired(void )
#line 435
{
  if (/*CtpP.Router*/CtpRoutingEngineP$0$radioOn && /*CtpP.Router*/CtpRoutingEngineP$0$running) {
      /*CtpP.Router*/CtpRoutingEngineP$0$updateRouteTask$postTask();
    }
}

# 814 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$RetxmitTimer$fired(void )
#line 814
{
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$sending = FALSE;
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask$postTask();
}

static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CongestionTimer$fired(void )
#line 819
{


  /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask$postTask();
}

# 193 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num)
{
}

# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(uint8_t arg_0x405fc010){
#line 72
  switch (arg_0x405fc010) {
#line 72
    case 0U:
#line 72
      MultihopOscilloscopeC$Timer$fired();
#line 72
      break;
#line 72
    case 2U:
#line 72
      PowerCycleP$OnTimer$fired();
#line 72
      break;
#line 72
    case 4U:
#line 72
      DefaultLplP$OffTimer$fired();
#line 72
      break;
#line 72
    case 5U:
#line 72
      DefaultLplP$SendDoneTimer$fired();
#line 72
      break;
#line 72
    case 6U:
#line 72
      /*CtpP.Router*/CtpRoutingEngineP$0$BeaconTimer$fired();
#line 72
      break;
#line 72
    case 7U:
#line 72
      /*CtpP.Router*/CtpRoutingEngineP$0$RouteTimer$fired();
#line 72
      break;
#line 72
    case 8U:
#line 72
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$RetxmitTimer$fired();
#line 72
      break;
#line 72
    case 9U:
#line 72
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$CongestionTimer$fired();
#line 72
      break;
#line 72
    default:
#line 72
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(arg_0x405fc010);
#line 72
      break;
#line 72
    }
#line 72
}
#line 72
# 510 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/lpl/DefaultLplP.nc"
static inline uint16_t DefaultLplP$getActualDutyCycle(uint16_t dutyCycle)
#line 510
{
  if (dutyCycle > 10000) {
      return 10000;
    }
  else {
#line 513
    if (dutyCycle == 0) {
        return 1;
      }
    }
  return dutyCycle;
}

# 135 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$Compare$set(uint8_t t)
#line 135
{
  * (volatile uint8_t *)(0x31 + 0x20) = t;
}

# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type t){
#line 45
  HplAtm128Timer0AsyncP$Compare$set(t);
#line 45
}
#line 45
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline uint8_t HplAtm128Timer0AsyncP$Timer$get(void )
#line 50
{
#line 50
  return * (volatile uint8_t *)(0x32 + 0x20);
}

# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get(void ){
#line 52
  unsigned char __nesc_result;
#line 52

#line 52
  __nesc_result = HplAtm128Timer0AsyncP$Timer$get();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 206 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline int HplAtm128Timer0AsyncP$TimerAsync$compareBusy(void )
#line 206
{
  return (* (volatile uint8_t *)(0x30 + 0x20) & (1 << 1)) != 0;
}

# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$compareBusy(void ){
#line 44
  int __nesc_result;
#line 44

#line 44
  __nesc_result = HplAtm128Timer0AsyncP$TimerAsync$compareBusy();
#line 44

#line 44
  return __nesc_result;
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
inline static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 70 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void )
{
#line 71
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask();
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$fired(void ){
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired();
#line 67
}
#line 67
# 128 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void )
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow());
}

# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired(void ){
#line 72
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired();
#line 72
}
#line 72
# 226 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm(void )
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
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(void ){
#line 105
  unsigned long __nesc_result;
#line 105

#line 105
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void )
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt, FALSE);
    }
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired();
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$Send$send(message_t * msg, uint8_t len){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$send(0U, msg, len);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 151 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static void /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$AMPacket$setType(message_t * amsg, am_id_t t){
#line 151
  /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$setType(amsg, t);
#line 151
}
#line 151
#line 92
inline static void /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$AMPacket$setDestination(message_t * amsg, am_addr_t addr){
#line 92
  /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$setDestination(amsg, addr);
#line 92
}
#line 92
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline error_t /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 47
{
  /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$AMPacket$setDestination(msg, dest);
  /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$AMPacket$setType(msg, 147);
  return /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$Send$send(msg, len);
}

# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t MultihopOscilloscopeC$SerialSend$send(am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = /*MultihopOscilloscopeAppC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$send(addr, msg, len);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 174 "MultihopOscilloscopeC.nc"
static inline void MultihopOscilloscopeC$uartSendTask$runTask(void )
#line 174
{
  if (MultihopOscilloscopeC$SerialSend$send(0xffff, &MultihopOscilloscopeC$uartbuf, MultihopOscilloscopeC$uartlen) != SUCCESS) {
      MultihopOscilloscopeC$report_problem();
    }
  else 
#line 177
    {
      MultihopOscilloscopeC$uartbusy = TRUE;
    }
}

# 122 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$Compare$start(void )
#line 122
{
#line 122
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 1;
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$start(void ){
#line 56
  HplAtm128Timer0AsyncP$Compare$start();
#line 56
}
#line 56
# 76 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$TimerCtrl$setControl(Atm128TimerControl_t x)
#line 76
{
  * (volatile uint8_t *)(0x33 + 0x20) = x.flat;
}

# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$setControl(Atm128TimerControl_t control){
#line 37
  HplAtm128Timer0AsyncP$TimerCtrl$setControl(control);
#line 37
}
#line 37
# 198 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous(void )
#line 198
{
  * (volatile uint8_t *)(0x30 + 0x20) |= 1 << 3;
}

# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$setTimer0Asynchronous(void ){
#line 32
  HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous();
#line 32
}
#line 32
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init(void )
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

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/system/RoundRobinResourceQueueC.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$Init$init(void )
#line 51
{
  memset(/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$resQ, 0, sizeof /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$resQ);
  return SUCCESS;
}

# 82 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static inline am_group_t ActiveMessageAddressC$ActiveMessageAddress$amGroup(void )
#line 82
{
  am_group_t myGroup;

  /* atomic removed: atomic calls only */
#line 84
  myGroup = ActiveMessageAddressC$group;
  return myGroup;
}

# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
inline static am_group_t CC2420ControlP$ActiveMessageAddress$amGroup(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = ActiveMessageAddressC$ActiveMessageAddress$amGroup();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
#line 50
inline static am_addr_t CC2420ControlP$ActiveMessageAddress$amAddress(void ){
#line 50
  unsigned short __nesc_result;
#line 50

#line 50
  __nesc_result = ActiveMessageAddressC$ActiveMessageAddress$amAddress();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )58U |= 1 << 5;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP$VREN$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$makeOutput();
#line 35
}
#line 35
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )58U |= 1 << 6;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP$RSTN$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$makeOutput();
#line 35
}
#line 35
inline static void CC2420ControlP$CSN$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$makeOutput();
#line 35
}
#line 35
# 121 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP$Init$init(void )
#line 121
{
  CC2420ControlP$CSN$makeOutput();
  CC2420ControlP$RSTN$makeOutput();
  CC2420ControlP$VREN$makeOutput();

  CC2420ControlP$m_short_addr = CC2420ControlP$ActiveMessageAddress$amAddress();
  CC2420ControlP$m_pan = CC2420ControlP$ActiveMessageAddress$amGroup();
  CC2420ControlP$m_tx_power = 31;
  CC2420ControlP$m_channel = 26;





  CC2420ControlP$addressRecognition = TRUE;





  CC2420ControlP$hwAddressRecognition = FALSE;






  CC2420ControlP$autoAckEnabled = TRUE;






  CC2420ControlP$hwAutoAckDefault = FALSE;



  return SUCCESS;
}

# 81 "/opt/CVSTinyOS/tinyos-2.x/tos/system/StateImplP.nc"
static inline error_t StateImplP$Init$init(void )
#line 81
{
  int i;

#line 83
  for (i = 0; i < 6U; i++) {
      StateImplP$state[i] = StateImplP$S_IDLE;
    }
  return SUCCESS;
}

# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$Init$init(void )
#line 45
{
  memset(/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ, /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY, sizeof /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ);
  return SUCCESS;
}

# 22 "/opt/CVSTinyOS/tinyos-2.x/tos/system/NoInitC.nc"
static inline error_t NoInitC$Init$init(void )
#line 22
{
  return SUCCESS;
}

# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )49U &= ~(1 << 4);
}

# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP$SFD$makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$makeInput();
#line 33
}
#line 33


inline static void CC2420TransmitP$CSN$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$makeOutput();
#line 35
}
#line 35
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )49U &= ~(1 << 6);
}

# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP$CCA$makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$makeInput();
#line 33
}
#line 33
# 140 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP$Init$init(void )
#line 140
{
  CC2420TransmitP$CCA$makeInput();
  CC2420TransmitP$CSN$makeOutput();
  CC2420TransmitP$SFD$makeInput();
  return SUCCESS;
}

# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline error_t CC2420ReceiveP$Init$init(void )
#line 118
{
  CC2420ReceiveP$m_p_rx_buf = &CC2420ReceiveP$m_rx_buf;
  return SUCCESS;
}

# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/system/RandomMlcgC.nc"
static inline error_t RandomMlcgC$Init$init(void )
#line 44
{
  /* atomic removed: atomic calls only */
#line 45
  RandomMlcgC$seed = (uint32_t )(TOS_NODE_ID + 1);

  return SUCCESS;
}

# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Random.nc"
inline static uint16_t UniqueSendP$Random$rand16(void ){
#line 41
  unsigned short __nesc_result;
#line 41

#line 41
  __nesc_result = RandomMlcgC$Random$rand16();
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline error_t UniqueSendP$Init$init(void )
#line 62
{
  UniqueSendP$localSendId = UniqueSendP$Random$rand16();
  return SUCCESS;
}

# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline error_t UniqueReceiveP$Init$init(void )
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

# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/lpl/DefaultLplP.nc"
static inline error_t DefaultLplP$Init$init(void )
#line 118
{
  DefaultLplP$dutyCycling = FALSE;
  return SUCCESS;
}

# 426 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline void LinkEstimatorP$initNeighborTable(void )
#line 426
{
  uint8_t i;

  for (i = 0; i < 10; i++) {
      LinkEstimatorP$NeighborTable[i].flags = 0;
    }
}











static inline error_t LinkEstimatorP$Init$init(void )
#line 444
{
  ;
  LinkEstimatorP$initNeighborTable();
  return SUCCESS;
}

# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$AMPacket$address(void ){
#line 57
  unsigned short __nesc_result;
#line 57

#line 57
  __nesc_result = CC2420ActiveMessageP$AMPacket$address();
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/system/QueueC.nc"
static inline uint8_t /*CtpP.SendQueueP*/QueueC$0$Queue$maxSize(void )
#line 61
{
  return 13;
}

# 65 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Queue.nc"
inline static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$maxSize(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = /*CtpP.SendQueueP*/QueueC$0$Queue$maxSize();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 234 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$Init$init(void )
#line 234
{
  int i;

#line 236
  for (i = 0; i < /*CtpP.Forwarder*/CtpForwardingEngineP$0$CLIENT_COUNT; i++) {
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$clientPtrs[i] = /*CtpP.Forwarder*/CtpForwardingEngineP$0$clientEntries + i;
      ;
    }
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$congestionThreshold = /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$maxSize() >> 1;
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsgPtr = &/*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsg;
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$lastParent = /*CtpP.Forwarder*/CtpForwardingEngineP$0$AMPacket$address();
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$seqno = 0;
  return SUCCESS;
}

# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*CtpP.Router*/CtpRoutingEngineP$0$AMPacket$address(void ){
#line 57
  unsigned short __nesc_result;
#line 57

#line 57
  __nesc_result = CC2420ActiveMessageP$AMPacket$address();
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
# 700 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$routingTableInit(void )
#line 700
{
  /*CtpP.Router*/CtpRoutingEngineP$0$routingTableActive = 0;
}

# 26 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/TreeRouting.h"
static __inline void routeInfoInit(route_info_t *ri)
#line 26
{
  ri->parent = INVALID_ADDR;
  ri->etx = 0;
  ri->haveHeard = 0;
  ri->congested = FALSE;
}

# 200 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline error_t /*CtpP.Router*/CtpRoutingEngineP$0$Init$init(void )
#line 200
{
  uint8_t maxLength;

#line 202
  /*CtpP.Router*/CtpRoutingEngineP$0$routeUpdateTimerCount = 0;
  /*CtpP.Router*/CtpRoutingEngineP$0$radioOn = FALSE;
  /*CtpP.Router*/CtpRoutingEngineP$0$running = FALSE;
  /*CtpP.Router*/CtpRoutingEngineP$0$parentChanges = 0;
  /*CtpP.Router*/CtpRoutingEngineP$0$state_is_root = 0;
  routeInfoInit(&/*CtpP.Router*/CtpRoutingEngineP$0$routeInfo);
  /*CtpP.Router*/CtpRoutingEngineP$0$routingTableInit();
  /*CtpP.Router*/CtpRoutingEngineP$0$my_ll_addr = /*CtpP.Router*/CtpRoutingEngineP$0$AMPacket$address();
  /*CtpP.Router*/CtpRoutingEngineP$0$beaconMsg = /*CtpP.Router*/CtpRoutingEngineP$0$BeaconSend$getPayload(&/*CtpP.Router*/CtpRoutingEngineP$0$beaconMsgBuffer, /*CtpP.Router*/CtpRoutingEngineP$0$BeaconSend$maxPayloadLength());
  maxLength = /*CtpP.Router*/CtpRoutingEngineP$0$BeaconSend$maxPayloadLength();
  ;

  return SUCCESS;
}

# 65 "/opt/CVSTinyOS/tinyos-2.x/tos/system/PoolP.nc"
static inline error_t /*CtpP.MessagePoolP.PoolP*/PoolP$0$Init$init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 12; i++) {
      /*CtpP.MessagePoolP.PoolP*/PoolP$0$queue[i] = &/*CtpP.MessagePoolP.PoolP*/PoolP$0$pool[i];
    }
  /*CtpP.MessagePoolP.PoolP*/PoolP$0$free = 12;
  /*CtpP.MessagePoolP.PoolP*/PoolP$0$index = 0;
  return SUCCESS;
}

#line 65
static inline error_t /*CtpP.QEntryPoolP.PoolP*/PoolP$1$Init$init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 12; i++) {
      /*CtpP.QEntryPoolP.PoolP*/PoolP$1$queue[i] = &/*CtpP.QEntryPoolP.PoolP*/PoolP$1$pool[i];
    }
  /*CtpP.QEntryPoolP.PoolP*/PoolP$1$free = 12;
  /*CtpP.QEntryPoolP.PoolP*/PoolP$1$index = 0;
  return SUCCESS;
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/LruCtpMsgCacheP.nc"
static inline error_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$Init$init(void )
#line 64
{
  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$first = 0;
  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count = 0;
  return SUCCESS;
}

# 214 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline void SerialP$ackInit(void )
#line 214
{
  SerialP$ackQ.writePtr = SerialP$ackQ.readPtr = 0;
}

#line 205
static __inline void SerialP$rxInit(void )
#line 205
{
  SerialP$rxBuf.writePtr = SerialP$rxBuf.readPtr = 0;
  SerialP$rxState = SerialP$RXSTATE_NOSYNC;
  SerialP$rxByteCnt = 0;
  SerialP$rxProto = 0;
  SerialP$rxSeqno = 0;
  SerialP$rxCRC = 0;
}

#line 193
static __inline void SerialP$txInit(void )
#line 193
{
  uint8_t i;

  /* atomic removed: atomic calls only */
#line 195
  for (i = 0; i < SerialP$TX_BUFFER_COUNT; i++) SerialP$txBuf[i].state = SerialP$BUFFER_AVAILABLE;
  SerialP$txState = SerialP$TXSTATE_IDLE;
  SerialP$txByteCnt = 0;
  SerialP$txProto = 0;
  SerialP$txSeqno = 0;
  SerialP$txCRC = 0;
  SerialP$txPending = FALSE;
  SerialP$txIndex = 0;
}

#line 218
static inline error_t SerialP$Init$init(void )
#line 218
{

  SerialP$txInit();
  SerialP$rxInit();
  SerialP$ackInit();

  return SUCCESS;
}

# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$Init$init(void )
#line 69
{
  if (PLATFORM_BAUDRATE == 19200UL) {
    /*Atm128Uart0C.UartP*/Atm128UartP$0$m_byte_time = 200;
    }
  else {
#line 72
    if (PLATFORM_BAUDRATE == 57600UL) {
      /*Atm128Uart0C.UartP*/Atm128UartP$0$m_byte_time = 68;
      }
    }
#line 74
  return SUCCESS;
}

# 120 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/mica/MeasureClockC.nc"
static inline uint16_t MeasureClockC$Atm128Calibrate$baudrateRegister(uint32_t baudrate)
#line 120
{

  return ((uint32_t )MeasureClockC$cycles << 12) / baudrate - 1;
}

# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128Calibrate.nc"
inline static uint16_t HplAtm128UartP$Atm128Calibrate$baudrateRegister(uint32_t baudrate){
#line 60
  unsigned short __nesc_result;
#line 60

#line 60
  __nesc_result = MeasureClockC$Atm128Calibrate$baudrateRegister(baudrate);
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 181 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP$Uart1Init$init(void )
#line 181
{
  Atm128UartMode_t mode;
  Atm128UartStatus_t stts;
  Atm128UartControl_t ctrl;
  uint16_t ubrr1;

  ctrl.bits = (struct Atm128_UCSRB_t ){ .rxcie = 0, .txcie = 0, .rxen = 0, .txen = 0 };
  stts.bits = (struct Atm128_UCSRA_t ){ .u2x = 1 };
  mode.bits = (struct Atm128_UCSRC_t ){ .ucsz = ATM128_UART_DATA_SIZE_8_BITS };

  ubrr1 = HplAtm128UartP$Atm128Calibrate$baudrateRegister(PLATFORM_BAUDRATE);
  * (volatile uint8_t *)0x99 = ubrr1;
  * (volatile uint8_t *)0x98 = ubrr1 >> 8;
  * (volatile uint8_t *)0x9B = stts.flat;
  * (volatile uint8_t *)0x9D = mode.flat;
  * (volatile uint8_t *)0x9A = ctrl.flat;

  return SUCCESS;
}

#line 87
static inline error_t HplAtm128UartP$Uart0Init$init(void )
#line 87
{
  Atm128UartMode_t mode;
  Atm128UartStatus_t stts;
  Atm128UartControl_t ctrl;
  uint16_t ubrr0;

  ctrl.bits = (struct Atm128_UCSRB_t ){ .rxcie = 0, .txcie = 0, .rxen = 0, .txen = 0 };
  stts.bits = (struct Atm128_UCSRA_t ){ .u2x = 1 };
  mode.bits = (struct Atm128_UCSRC_t ){ .ucsz = ATM128_UART_DATA_SIZE_8_BITS };

  ubrr0 = HplAtm128UartP$Atm128Calibrate$baudrateRegister(PLATFORM_BAUDRATE);
  * (volatile uint8_t *)(0x09 + 0x20) = ubrr0;
  * (volatile uint8_t *)0x90 = ubrr0 >> 8;
  * (volatile uint8_t *)(0x0B + 0x20) = stts.flat;
  * (volatile uint8_t *)0x95 = mode.flat;
  * (volatile uint8_t *)(0x0A + 0x20) = ctrl.flat;

  return SUCCESS;
}

# 65 "/opt/CVSTinyOS/tinyos-2.x/tos/system/PoolP.nc"
static inline error_t /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$Init$init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 10; i++) {
      /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$queue[i] = &/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$pool[i];
    }
  /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$free = 10;
  /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$index = 0;
  return SUCCESS;
}

#line 65
static inline error_t /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$Init$init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 20; i++) {
      /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$queue[i] = &/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$pool[i];
    }
  /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$free = 20;
  /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$index = 0;
  return SUCCESS;
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t RealMainP$SoftwareInit$init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$Init$init();
#line 51
  __nesc_result = ecombine(__nesc_result, /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, HplAtm128UartP$Uart0Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, HplAtm128UartP$Uart1Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*Atm128Uart0C.UartP*/Atm128UartP$0$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, SerialP$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*CtpP.QEntryPoolP.PoolP*/PoolP$1$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*CtpP.MessagePoolP.PoolP*/PoolP$0$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*CtpP.Router*/CtpRoutingEngineP$0$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*CtpP.Forwarder*/CtpForwardingEngineP$0$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, LinkEstimatorP$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, DefaultLplP$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, UniqueReceiveP$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, UniqueSendP$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, RandomMlcgC$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, CC2420ReceiveP$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, CC2420TransmitP$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, NoInitC$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, StateImplP$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, CC2420ControlP$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init());
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 25 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/UARTDebugSenderP.nc"
static inline void UARTDebugSenderP$Boot$booted(void )
#line 25
{
  UARTDebugSenderP$sending = FALSE;
  UARTDebugSenderP$len = sizeof(CollectionDebugMsg );
  UARTDebugSenderP$statSendFail = 0;
  UARTDebugSenderP$statLogReceived = 0;
  UARTDebugSenderP$statEnqueueFail = 0;
  UARTDebugSenderP$statSendDoneOk = 0;
  UARTDebugSenderP$statSendDoneFail = 0;
  UARTDebugSenderP$statSendDoneBug = 0;
}

# 434 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline error_t LinkEstimatorP$StdControl$start(void )
#line 434
{
  ;
  return SUCCESS;
}

# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*CtpP.Router*/CtpRoutingEngineP$0$RouteTimer$startPeriodic(uint32_t dt){
#line 53
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(7U, dt);
#line 53
}
#line 53
# 217 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline error_t /*CtpP.Router*/CtpRoutingEngineP$0$StdControl$start(void )
#line 217
{

  if (!/*CtpP.Router*/CtpRoutingEngineP$0$running) {
      /*CtpP.Router*/CtpRoutingEngineP$0$running = TRUE;
      /*CtpP.Router*/CtpRoutingEngineP$0$resetInterval();
      /*CtpP.Router*/CtpRoutingEngineP$0$RouteTimer$startPeriodic(BEACON_INTERVAL);
      ;
    }
  return SUCCESS;
}

# 247 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$StdControl$start(void )
#line 247
{
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$running = TRUE;
  return SUCCESS;
}

# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t MultihopOscilloscopeC$RoutingControl$start(void ){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP$0$StdControl$start();
#line 74
  __nesc_result = ecombine(__nesc_result, /*CtpP.Router*/CtpRoutingEngineP$0$StdControl$start());
#line 74
  __nesc_result = ecombine(__nesc_result, LinkEstimatorP$StdControl$start());
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/State.nc"
inline static void PowerCycleP$SplitControlState$forceState(uint8_t reqState){
#line 51
  StateImplP$State$forceState(4U, reqState);
#line 51
}
#line 51
# 136 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/lpl/PowerCycleP.nc"
static inline error_t PowerCycleP$SplitControl$start(void )
#line 136
{
  if (PowerCycleP$SplitControlState$isState(PowerCycleP$S_ON)) {
      return EALREADY;
    }
  else {
#line 140
    if (PowerCycleP$SplitControlState$isState(PowerCycleP$S_TURNING_ON)) {
        return SUCCESS;
      }
    else {
#line 143
      if (!PowerCycleP$SplitControlState$isState(PowerCycleP$S_OFF)) {
          return EBUSY;
        }
      }
    }
  PowerCycleP$SplitControlState$forceState(PowerCycleP$S_TURNING_ON);

  if (PowerCycleP$sleepInterval > 0) {

      PowerCycleP$stopRadio$postTask();
      return SUCCESS;
    }
  else {
      PowerCycleP$startRadio$postTask();
      return SUCCESS;
    }
}

# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t MultihopOscilloscopeC$RadioControl$start(void ){
#line 83
  unsigned char __nesc_result;
#line 83

#line 83
  __nesc_result = PowerCycleP$SplitControl$start();
#line 83

#line 83
  return __nesc_result;
#line 83
}
#line 83
# 108 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/lpl/PowerCycleP.nc"
static inline void PowerCycleP$PowerCycle$setSleepInterval(uint16_t sleepIntervalMs)
#line 108
{
  if (!PowerCycleP$sleepInterval && sleepIntervalMs) {

      PowerCycleP$stopRadio$postTask();
    }

  PowerCycleP$sleepInterval = sleepIntervalMs;

  if (PowerCycleP$sleepInterval == 0 && PowerCycleP$SplitControlState$isState(PowerCycleP$S_ON)) {




      if (PowerCycleP$RadioPowerState$getState() == PowerCycleP$S_OFF) {
          PowerCycleP$SubControl$start();
        }
    }
}

# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/PowerCycle.nc"
inline static void DefaultLplP$PowerCycle$setSleepInterval(uint16_t sleepIntervalMs){
#line 43
  PowerCycleP$PowerCycle$setSleepInterval(sleepIntervalMs);
#line 43
}
#line 43
# 162 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/lpl/DefaultLplP.nc"
static inline void DefaultLplP$LowPowerListening$setLocalDutyCycle(uint16_t dutyCycle)
#line 162
{
  DefaultLplP$PowerCycle$setSleepInterval(
  DefaultLplP$LowPowerListening$dutyCycleToSleepInterval(dutyCycle));
}

# 76 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/LowPowerListening.nc"
inline static void MultihopOscilloscopeC$LowPowerListening$setLocalDutyCycle(uint16_t dutyCycle){
#line 76
  DefaultLplP$LowPowerListening$setLocalDutyCycle(dutyCycle);
#line 76
}
#line 76
# 79 "MultihopOscilloscopeC.nc"
static inline void MultihopOscilloscopeC$Boot$booted(void )
#line 79
{
  __nesc_hton_uint16(MultihopOscilloscopeC$local.interval.data, DEFAULT_INTERVAL);
  __nesc_hton_uint16(MultihopOscilloscopeC$local.id.data, TOS_NODE_ID);
  __nesc_hton_uint16(MultihopOscilloscopeC$local.version.data, 0);

  MultihopOscilloscopeC$LowPowerListening$setLocalDutyCycle(100);


  if (MultihopOscilloscopeC$RadioControl$start() != SUCCESS) {
    MultihopOscilloscopeC$fatal_problem();
    }
  if (MultihopOscilloscopeC$RoutingControl$start() != SUCCESS) {
    MultihopOscilloscopeC$fatal_problem();
    }
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Boot.nc"
inline static void RealMainP$Boot$booted(void ){
#line 49
  MultihopOscilloscopeC$Boot$booted();
#line 49
  UARTDebugSenderP$Boot$booted();
#line 49
}
#line 49
# 155 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline mcu_power_t HplAtm128Timer0AsyncP$McuPowerOverride$lowestState(void )
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
inline static mcu_power_t McuSleepC$McuPowerOverride$lowestState(void ){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = HplAtm128Timer0AsyncP$McuPowerOverride$lowestState();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 66 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/McuSleepC.nc"
static inline mcu_power_t McuSleepC$getPowerState(void )
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
static inline void McuSleepC$McuSleep$sleep(void )
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

# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuSleep.nc"
inline static void SchedulerBasicP$McuSleep$sleep(void ){
#line 59
  McuSleepC$McuSleep$sleep();
#line 59
}
#line 59
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static __inline uint8_t SchedulerBasicP$popTask(void )
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
static inline void SchedulerBasicP$Scheduler$taskLoop(void )
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
inline static void RealMainP$Scheduler$taskLoop(void ){
#line 61
  SchedulerBasicP$Scheduler$taskLoop();
#line 61
}
#line 61
# 140 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static __inline void HplAtm128Timer0AsyncP$stabiliseTimer0(void )
#line 140
{
  * (volatile uint8_t *)(0x33 + 0x20) = * (volatile uint8_t *)(0x33 + 0x20);
  while (* (volatile uint8_t *)(0x30 + 0x20) & (1 << 0)) 
    ;
}

# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void )
{
}

# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$overflow(void ){
#line 71
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow();
#line 71
}
#line 71
# 82 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/atm128hardware.h"
static __inline  void __nesc_enable_interrupt()
#line 82
{
   __asm volatile ("sei");}

# 132 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline uint8_t HplAtm128Timer0AsyncP$Compare$get(void )
#line 132
{
#line 132
  return * (volatile uint8_t *)(0x31 + 0x20);
}

# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get(void ){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  __nesc_result = HplAtm128Timer0AsyncP$Compare$get();
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 149 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired(void )
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
inline static void HplAtm128Timer0AsyncP$Compare$fired(void ){
#line 49
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired();
#line 49
}
#line 49
# 230 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow(void )
#line 230
{
}

# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm128Timer0AsyncP$Timer$overflow(void ){
#line 61
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow();
#line 61
}
#line 61
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline uint16_t HplAtm128AdcP$HplAtm128Adc$getValue(void )
#line 46
{
  return * (volatile uint16_t *)(0x04 + 0x20);
}

#line 43
static inline Atm128Adcsra_t HplAtm128AdcP$HplAtm128Adc$getAdcsra(void )
#line 43
{
  return * (Atm128Adcsra_t *)& * (volatile uint8_t *)(0x06 + 0x20);
}

#line 108
static inline bool HplAtm128AdcP$HplAtm128Adc$cancel(void )
#line 108
{
  /* atomic removed: atomic calls only */

  {
    Atm128Adcsra_t oldSr = HplAtm128AdcP$HplAtm128Adc$getAdcsra();
#line 112
    Atm128Adcsra_t newSr;





    newSr = oldSr;
    newSr.aden = FALSE;
    newSr.adif = TRUE;
    newSr.adie = FALSE;

    HplAtm128AdcP$HplAtm128Adc$setAdcsra(newSr);
    newSr.adsc = FALSE;
    HplAtm128AdcP$HplAtm128Adc$setAdcsra(newSr);
    newSr.aden = TRUE;
    HplAtm128AdcP$HplAtm128Adc$setAdcsra(newSr);

    {
      unsigned char __nesc_temp = 
#line 129
      oldSr.adif || oldSr.adsc;

#line 129
      return __nesc_temp;
    }
  }
}

# 141 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static bool Atm128AdcP$HplAtm128Adc$cancel(void ){
#line 141
  unsigned char __nesc_result;
#line 141

#line 141
  __nesc_result = HplAtm128AdcP$HplAtm128Adc$cancel();
#line 141

#line 141
  return __nesc_result;
#line 141
}
#line 141
# 242 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline bool Atm128AdcP$Atm128AdcMultiple$default$dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage)
#line 243
{
  return FALSE;
}

# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcMultiple.nc"
inline static bool Atm128AdcP$Atm128AdcMultiple$dataReady(uint16_t data, bool precise, uint8_t channel, uint8_t *newChannel, uint8_t *newRefVoltage){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = Atm128AdcP$Atm128AdcMultiple$default$dataReady(data, precise, channel, newChannel, newRefVoltage);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 150 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
static inline void AdcP$ReadNow$default$readDone(uint8_t c, error_t e, uint16_t d)
#line 150
{
}

# 66 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ReadNow.nc"
inline static void AdcP$ReadNow$readDone(uint8_t arg_0x406f5088, error_t result, AdcP$ReadNow$val_t val){
#line 66
    AdcP$ReadNow$default$readDone(arg_0x406f5088, result, val);
#line 66
}
#line 66
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t AdcP$acquiredData$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(AdcP$acquiredData);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 108 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
static inline void AdcP$Atm128AdcSingle$dataReady(uint16_t data, bool precise)
#line 108
{
  switch (AdcP$state) 
    {
      case AdcP$ACQUIRE_DATA: 
        if (!precise) {
          AdcP$sample();
          }
        else {
            AdcP$val = data;
            AdcP$acquiredData$postTask();
          }
      break;

      case AdcP$ACQUIRE_DATA_NOW: 
        if (!precise) {
          AdcP$sample();
          }
        else {
            AdcP$state = AdcP$IDLE;
            AdcP$ReadNow$readDone(AdcP$client, SUCCESS, data);
          }
      break;

      default: 
        break;
    }
}

# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcSingle.nc"
inline static void Atm128AdcP$Atm128AdcSingle$dataReady(uint16_t data, bool precise){
#line 72
  AdcP$Atm128AdcSingle$dataReady(data, precise);
#line 72
}
#line 72
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline void HplAtm128AdcP$HplAtm128Adc$disableInterruption(void )
#line 78
{
#line 78
  * (volatile uint8_t *)(0x06 + 0x20) &= ~(1 << 3);
}

# 86 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP$HplAtm128Adc$disableInterruption(void ){
#line 86
  HplAtm128AdcP$HplAtm128Adc$disableInterruption();
#line 86
}
#line 86
# 124 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline void Atm128AdcP$HplAtm128Adc$dataReady(uint16_t data)
#line 124
{
  bool precise;
#line 125
  bool multiple;
  uint8_t channel;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      channel = Atm128AdcP$f.channel;
      precise = Atm128AdcP$f.precise;
      multiple = Atm128AdcP$f.multiple;
    }
#line 133
    __nesc_atomic_end(__nesc_atomic); }

  if (!multiple) 
    {


      Atm128AdcP$HplAtm128Adc$disableInterruption();
      Atm128AdcP$Atm128AdcSingle$dataReady(data, precise);
    }
  else 
    {







      bool cont;
      uint8_t nextChannel;
#line 152
      uint8_t nextVoltage;
      Atm128Admux_t admux;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          admux = Atm128AdcP$HplAtm128Adc$getAdmux();
          nextVoltage = admux.refs;
          nextChannel = admux.mux;
        }
#line 160
        __nesc_atomic_end(__nesc_atomic); }

      cont = Atm128AdcP$Atm128AdcMultiple$dataReady(data, precise, channel, 
      &nextChannel, &nextVoltage);
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        if (cont) 
          {



            admux.refs = nextVoltage;
            admux.mux = nextChannel;
            Atm128AdcP$HplAtm128Adc$setAdmux(admux);

            Atm128AdcP$f = Atm128AdcP$nextF;
            Atm128AdcP$nextF.channel = nextChannel;
            Atm128AdcP$nextF.precise = Atm128AdcP$isPrecise(admux, nextChannel, nextVoltage);
          }
        else {
          Atm128AdcP$HplAtm128Adc$cancel();
          }
#line 180
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 147 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void HplAtm128AdcP$HplAtm128Adc$dataReady(uint16_t data){
#line 147
  Atm128AdcP$HplAtm128Adc$dataReady(data);
#line 147
}
#line 147
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP$SpiResource$request(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = CC2420SpiP$Resource$request(/*CC2420ControlC.Spi*/CC2420SpiC$0$CLIENT_ID);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 171 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP$Resource$request(void )
#line 171
{
  return CC2420ControlP$SpiResource$request();
}

# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420CsmaP$Resource$request(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = CC2420ControlP$Resource$request();
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 204 "CC2420CsmaP.nc"
static inline void CC2420CsmaP$CC2420Power$startVRegDone(void )
#line 204
{
  CC2420CsmaP$Resource$request();
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static void CC2420ControlP$CC2420Power$startVRegDone(void ){
#line 56
  CC2420CsmaP$CC2420Power$startVRegDone();
#line 56
}
#line 56
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )59U |= 1 << 6;
}

# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP$RSTN$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$set();
#line 29
}
#line 29
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )59U &= ~(1 << 6);
}

# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP$RSTN$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$clr();
#line 30
}
#line 30
# 408 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP$StartupTimer$fired(void )
#line 408
{
  if (CC2420ControlP$m_state == CC2420ControlP$S_VREG_STARTING) {
      CC2420ControlP$m_state = CC2420ControlP$S_VREG_STARTED;
      CC2420ControlP$RSTN$clr();
      CC2420ControlP$RSTN$set();
      CC2420ControlP$CC2420Power$startVRegDone();
    }
}

# 463 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP$BackoffTimer$fired(void )
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
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$fired(void ){
#line 67
  CC2420TransmitP$BackoffTimer$fired();
#line 67
  CC2420ControlP$StartupTimer$fired();
#line 67
}
#line 67
# 151 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$fired(void )
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
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$fired(void ){
#line 67
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$fired();
#line 67
}
#line 67
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$fired(void )
#line 110
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$stop();
  ;
  __nesc_enable_interrupt();
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$fired();
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer1P$CompareA$fired(void ){
#line 49
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$fired();
#line 49
}
#line 49
# 198 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P$CompareB$default$fired(void )
#line 198
{
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer1P$CompareB$fired(void ){
#line 49
  HplAtm128Timer1P$CompareB$default$fired();
#line 49
}
#line 49
# 202 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P$CompareC$default$fired(void )
#line 202
{
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer1P$CompareC$fired(void ){
#line 49
  HplAtm128Timer1P$CompareC$default$fired();
#line 49
}
#line 49
# 294 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint32_t __nesc_ntoh_uint32(const void * source)
#line 294
{
  const uint8_t *base = source;

#line 296
  return ((((uint32_t )base[0] << 24) | (
  (uint32_t )base[1] << 16)) | (
  (uint32_t )base[2] << 8)) | base[3];
}

# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
inline static void CC2420TransmitP$PacketTimeStamp$clear(message_t * msg){
#line 59
  CC2420PacketP$PacketTimeStamp32khz$clear(msg);
#line 59
}
#line 59
# 158 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP$CC2420Receive$sfd_dropped(void )
#line 158
{
  if (CC2420ReceiveP$m_timestamp_size) {
      CC2420ReceiveP$m_timestamp_size--;
    }
}

# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static void CC2420TransmitP$CC2420Receive$sfd_dropped(void ){
#line 55
  CC2420ReceiveP$CC2420Receive$sfd_dropped();
#line 55
}
#line 55
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$get(void )
#line 45
{
#line 45
  return (* (volatile uint8_t * )48U & (1 << 4)) != 0;
}

# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static bool CC2420TransmitP$SFD$get(void ){
#line 32
  unsigned char __nesc_result;
#line 32

#line 32
  __nesc_result = /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$get();
#line 32

#line 32
  return __nesc_result;
#line 32
}
#line 32
# 149 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP$CC2420Receive$sfd(uint32_t time)
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
inline static void CC2420TransmitP$CC2420Receive$sfd(uint32_t time){
#line 49
  CC2420ReceiveP$CC2420Receive$sfd(time);
#line 49
}
#line 49
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captureFallingEdge(void )
#line 56
{
  return /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$enableCapture(FALSE);
}

# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioCapture.nc"
inline static error_t CC2420TransmitP$CaptureSFD$captureFallingEdge(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captureFallingEdge();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
inline static void CC2420TransmitP$PacketTimeStamp$set(message_t * msg, CC2420TransmitP$PacketTimeStamp$size_type value){
#line 67
  CC2420PacketP$PacketTimeStamp32khz$set(msg, value);
#line 67
}
#line 67
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
inline static uint8_t CC2420TransmitP$PacketTimeSyncOffset$get(message_t * msg){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = CC2420PacketP$PacketTimeSyncOffset$get(msg);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
inline static cc2420_status_t CC2420TransmitP$TXFIFO_RAM$write(uint8_t offset, uint8_t * data, uint8_t length){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP$Ram$write(CC2420_RAM_TXFIFO, offset, data, length);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 158 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline bool CC2420PacketP$PacketTimeSyncOffset$isSet(message_t *msg)
{
  return __nesc_ntoh_int8(CC2420PacketP$CC2420PacketBody$getMetadata(msg)->timesync.data);
}

# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
inline static bool CC2420TransmitP$PacketTimeSyncOffset$isSet(message_t * msg){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  __nesc_result = CC2420PacketP$PacketTimeSyncOffset$isSet(msg);
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 98 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static CC2420TransmitP$BackoffTimer$size_type CC2420TransmitP$BackoffTimer$getNow(void ){
#line 98
  unsigned long __nesc_result;
#line 98

#line 98
  __nesc_result = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$getNow();
#line 98

#line 98
  return __nesc_result;
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
static inline void CC2420TransmitP$CaptureSFD$captured(uint16_t time)
#line 260
{
  unsigned char *__nesc_temp46;
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

              (__nesc_temp46 = (*timesync).data, __nesc_hton_uint32(__nesc_temp46, __nesc_ntoh_uint32(__nesc_temp46) - time32));
              CC2420TransmitP$CSN$clr();
              CC2420TransmitP$TXFIFO_RAM$write(CC2420TransmitP$PacketTimeSyncOffset$get(CC2420TransmitP$m_msg), (uint8_t *)timesync, sizeof(timesync_radio_t ));
              CC2420TransmitP$CSN$set();
            }

          if (__nesc_ntoh_leuint16(CC2420TransmitP$CC2420PacketBody$getHeader(CC2420TransmitP$m_msg)->fcf.data) & (1 << IEEE154_FCF_ACK_REQ)) {

              CC2420TransmitP$abortSpiRelease = TRUE;
            }
          CC2420TransmitP$releaseSpiResource();
          CC2420TransmitP$BackoffTimer$stop();


          if (((__nesc_ntoh_leuint16(CC2420TransmitP$CC2420PacketBody$getHeader(CC2420TransmitP$m_msg)->fcf.data) >> IEEE154_FCF_FRAME_TYPE) & 7) == IEEE154_TYPE_DATA) {
              CC2420TransmitP$PacketTimeStamp$set(CC2420TransmitP$m_msg, time32);
            }

          if (CC2420TransmitP$SFD$get()) {
              break;
            }


          case CC2420TransmitP$S_EFD: 
            CC2420TransmitP$sfdHigh = FALSE;
          CC2420TransmitP$CaptureSFD$captureRisingEdge();

          if (__nesc_ntoh_leuint16(CC2420TransmitP$CC2420PacketBody$getHeader(CC2420TransmitP$m_msg)->fcf.data) & (1 << IEEE154_FCF_ACK_REQ)) {
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
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captured(uint16_t time){
#line 50
  CC2420TransmitP$CaptureSFD$captured(time);
#line 50
}
#line 50
# 126 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P$Capture$reset(void )
#line 126
{
#line 126
  * (volatile uint8_t *)(0x36 + 0x20) = 1 << 5;
}

# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$reset(void ){
#line 55
  HplAtm128Timer1P$Capture$reset();
#line 55
}
#line 55
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static inline void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$captured(uint16_t time)
#line 64
{
  /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$reset();
  /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captured(time);
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplAtm128Timer1P$Capture$captured(HplAtm128Timer1P$Capture$size_type t){
#line 51
  /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$captured(t);
#line 51
}
#line 51
# 117 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$overflow(void )
#line 117
{
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$overflow(void )
#line 51
{
}

# 166 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$overflow(void )
{
}

# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC$1$Counter$overflow(void )
{
}

# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*Counter32khz32C.Transform32*/TransformCounterC$0$Counter$overflow(void ){
#line 71
  /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC$1$Counter$overflow();
#line 71
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$overflow();
#line 71
}
#line 71
# 122 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static inline void /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$overflow(void )
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
inline static void /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$overflow(void ){
#line 71
  /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$overflow();
#line 71
}
#line 71
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline void /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$overflow(void )
{
  /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$overflow();
}

# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm128Timer1P$Timer$overflow(void ){
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
static inline void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$Irq$default$fired(void )
#line 63
{
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$Irq$fired(void ){
#line 64
  /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$Irq$default$fired();
#line 64
}
#line 64
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$IrqSignal$fired(void )
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$Irq$fired();
}

# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP$IntSig0$fired(void ){
#line 41
  /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$IrqSignal$fired();
#line 41
}
#line 41
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$default$fired(void )
#line 63
{
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$fired(void ){
#line 64
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$default$fired();
#line 64
}
#line 64
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$IrqSignal$fired(void )
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$fired();
}

# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP$IntSig1$fired(void ){
#line 41
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$IrqSignal$fired();
#line 41
}
#line 41
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$default$fired(void )
#line 63
{
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$fired(void ){
#line 64
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$default$fired();
#line 64
}
#line 64
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$IrqSignal$fired(void )
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$fired();
}

# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP$IntSig2$fired(void ){
#line 41
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$IrqSignal$fired();
#line 41
}
#line 41
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$Irq$default$fired(void )
#line 63
{
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$Irq$fired(void ){
#line 64
  /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$Irq$default$fired();
#line 64
}
#line 64
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$IrqSignal$fired(void )
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$Irq$fired();
}

# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP$IntSig3$fired(void ){
#line 41
  /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$IrqSignal$fired();
#line 41
}
#line 41
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$default$fired(void )
#line 63
{
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$fired(void ){
#line 64
  /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$default$fired();
#line 64
}
#line 64
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$IrqSignal$fired(void )
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$fired();
}

# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP$IntSig4$fired(void ){
#line 41
  /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$IrqSignal$fired();
#line 41
}
#line 41
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$default$fired(void )
#line 63
{
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$fired(void ){
#line 64
  /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$default$fired();
#line 64
}
#line 64
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$IrqSignal$fired(void )
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$fired();
}

# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP$IntSig5$fired(void ){
#line 41
  /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$IrqSignal$fired();
#line 41
}
#line 41
# 175 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP$InterruptFIFOP$fired(void )
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
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$fired(void ){
#line 57
  CC2420ReceiveP$InterruptFIFOP$fired();
#line 57
}
#line 57
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$fired(void )
#line 38
{
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$fired();
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$fired(void ){
#line 64
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$fired();
#line 64
}
#line 64
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$IrqSignal$fired(void )
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$fired();
}

# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP$IntSig6$fired(void ){
#line 41
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$IrqSignal$fired();
#line 41
}
#line 41
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$default$fired(void )
#line 63
{
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$fired(void ){
#line 64
  /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$default$fired();
#line 64
}
#line 64
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$IrqSignal$fired(void )
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$fired();
}

# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP$IntSig7$fired(void ){
#line 41
  /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$IrqSignal$fired();
#line 41
}
#line 41
# 98 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline uint8_t HplAtm128SpiP$SPI$read(void )
#line 98
{
#line 98
  return * (volatile uint8_t *)(0x0F + 0x20);
}

# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static uint8_t Atm128SpiP$Spi$read(void ){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = HplAtm128SpiP$SPI$read();
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
#line 96
inline static void Atm128SpiP$Spi$enableInterrupt(bool enabled){
#line 96
  HplAtm128SpiP$SPI$enableInterrupt(enabled);
#line 96
}
#line 96
# 265 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP$Spi$dataReady(uint8_t data)
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
      uint8_t * rx;
      uint8_t * tx;

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
inline static void HplAtm128SpiP$SPI$dataReady(uint8_t data){
#line 92
  Atm128SpiP$Spi$dataReady(data);
#line 92
}
#line 92
# 387 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP$SerialFrameComm$dataReceived(uint8_t data)
#line 387
{
  SerialP$rx_state_machine(FALSE, data);
}

# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC$SerialFrameComm$dataReceived(uint8_t data){
#line 83
  SerialP$SerialFrameComm$dataReceived(data);
#line 83
}
#line 83
# 384 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP$SerialFrameComm$delimiterReceived(void )
#line 384
{
  SerialP$rx_state_machine(TRUE, 0);
}

# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC$SerialFrameComm$delimiterReceived(void ){
#line 74
  SerialP$SerialFrameComm$delimiterReceived();
#line 74
}
#line 74
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC$UartStream$receivedByte(uint8_t data)
#line 61
{






  if (data == HDLC_FLAG_BYTE) {

      HdlcTranslateC$SerialFrameComm$delimiterReceived();
      return;
    }
  else {
#line 73
    if (data == HDLC_CTLESC_BYTE) {

        HdlcTranslateC$state.receiveEscape = 1;
        return;
      }
    else {
#line 78
      if (HdlcTranslateC$state.receiveEscape) {

          HdlcTranslateC$state.receiveEscape = 0;
          data = data ^ 0x20;
        }
      }
    }
#line 83
  HdlcTranslateC$SerialFrameComm$dataReceived(data);
}

# 79 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$receivedByte(uint8_t byte){
#line 79
  HdlcTranslateC$UartStream$receivedByte(byte);
#line 79
}
#line 79
# 116 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC$UartStream$receiveDone(uint8_t *buf, uint16_t len, error_t error)
#line 116
{
}

# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$receiveDone(uint8_t * buf, uint16_t len, error_t error){
#line 99
  HdlcTranslateC$UartStream$receiveDone(buf, len, error);
#line 99
}
#line 99
# 133 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$rxDone(uint8_t data)
#line 133
{

  if (/*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_buf) {
      /*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_buf[/*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_pos++] = data;
      if (/*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_pos >= /*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_len) {
          uint8_t *buf = /*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_buf;

          /* atomic removed: atomic calls only */
#line 139
          {
            /*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_buf = (void *)0;
            if (/*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_intr != 3) {
                /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$disableRxIntr();
                /*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_intr = 0;
              }
          }
          /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$receiveDone(buf, /*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_len, SUCCESS);
        }
    }
  else {
      /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$receivedByte(data);
    }
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP$HplUart0$rxDone(uint8_t data){
#line 49
  /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$rxDone(data);
#line 49
}
#line 49
# 391 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline bool SerialP$valid_rx_proto(uint8_t proto)
#line 391
{
  switch (proto) {
      case SERIAL_PROTO_PACKET_ACK: 
        return TRUE;
      case SERIAL_PROTO_ACK: 
        case SERIAL_PROTO_PACKET_NOACK: 
          default: 
            return FALSE;
    }
}

# 192 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$lockCurrentBuffer(void )
#line 192
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.bufOneLocked = 1;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.bufZeroLocked = 1;
    }
}

#line 188
static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$isCurrentBufferLocked(void )
#line 188
{
  return /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.which ? /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.bufZeroLocked : /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.bufOneLocked;
}

#line 215
static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$startPacket(void )
#line 215
{
  error_t result = SUCCESS;

  /* atomic removed: atomic calls only */
#line 217
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$isCurrentBufferLocked()) {


        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$lockCurrentBuffer();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$RECV_STATE_BEGIN;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvIndex = 0;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvType = TOS_SERIAL_UNKNOWN_ID;
      }
    else {
        result = EBUSY;
      }
  }
  return result;
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
inline static error_t SerialP$ReceiveBytePacket$startPacket(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$startPacket();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 309 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline uint16_t SerialP$rx_current_crc(void )
#line 309
{
  uint16_t crc;
  uint8_t tmp = SerialP$rxBuf.writePtr;

#line 312
  tmp = tmp == 0 ? SerialP$RX_DATA_BUFFER_SIZE : tmp - 1;
  crc = SerialP$rxBuf.buf[tmp] & 0x00ff;
  crc = (crc << 8) & 0xFF00;
  tmp = tmp == 0 ? SerialP$RX_DATA_BUFFER_SIZE : tmp - 1;
  crc |= SerialP$rxBuf.buf[tmp] & 0x00FF;
  return crc;
}

# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
inline static void SerialP$ReceiveBytePacket$endPacket(error_t result){
#line 69
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$endPacket(result);
#line 69
}
#line 69
# 210 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveBufferSwap(void )
#line 210
{
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.which = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.which ? 0 : 1;
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveBuffer = (uint8_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$messagePtrs[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.which];
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 232 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline bool SerialP$ack_queue_is_full(void )
#line 232
{
  uint8_t tmp;
#line 233
  uint8_t tmp2;

  /* atomic removed: atomic calls only */
#line 234
  {
    tmp = SerialP$ackQ.writePtr;
    tmp2 = SerialP$ackQ.readPtr;
  }
  if (++tmp > SerialP$ACK_QUEUE_SIZE) {
#line 238
    tmp = 0;
    }
#line 239
  return tmp == tmp2;
}







static __inline void SerialP$ack_queue_push(uint8_t token)
#line 248
{
  if (!SerialP$ack_queue_is_full()) {
      /* atomic removed: atomic calls only */
#line 250
      {
        SerialP$ackQ.buf[SerialP$ackQ.writePtr] = token;
        if (++ SerialP$ackQ.writePtr > SerialP$ACK_QUEUE_SIZE) {
#line 252
          SerialP$ackQ.writePtr = 0;
          }
      }
#line 254
      SerialP$MaybeScheduleTx();
    }
}

# 233 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$byteReceived(uint8_t b)
#line 233
{
  /* atomic removed: atomic calls only */
#line 234
  {
    switch (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.state) {
        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$RECV_STATE_BEGIN: 
          /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$RECV_STATE_DATA;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$offset(b);
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvType = b;
        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$RECV_STATE_DATA: 
          if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvIndex < sizeof(message_t )) {
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvIndex] = b;
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvIndex++;
            }
          else {
            }




        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$RECV_STATE_IDLE: 
          default: 
#line 255
            ;
      }
  }
}

# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
inline static void SerialP$ReceiveBytePacket$byteReceived(uint8_t data){
#line 58
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$byteReceived(data);
#line 58
}
#line 58
# 299 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline uint8_t SerialP$rx_buffer_top(void )
#line 299
{
  uint8_t tmp = SerialP$rxBuf.buf[SerialP$rxBuf.readPtr];

#line 301
  return tmp;
}

#line 303
static __inline uint8_t SerialP$rx_buffer_pop(void )
#line 303
{
  uint8_t tmp = SerialP$rxBuf.buf[SerialP$rxBuf.readPtr];

#line 305
  if (++ SerialP$rxBuf.readPtr > SerialP$RX_DATA_BUFFER_SIZE) {
#line 305
    SerialP$rxBuf.readPtr = 0;
    }
#line 306
  return tmp;
}

#line 295
static __inline void SerialP$rx_buffer_push(uint8_t data)
#line 295
{
  SerialP$rxBuf.buf[SerialP$rxBuf.writePtr] = data;
  if (++ SerialP$rxBuf.writePtr > SerialP$RX_DATA_BUFFER_SIZE) {
#line 297
    SerialP$rxBuf.writePtr = 0;
    }
}

# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC$SerialFrameComm$resetReceive(void )
#line 55
{
  HdlcTranslateC$state.receiveEscape = 0;
}

# 68 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static void SerialP$SerialFrameComm$resetReceive(void ){
#line 68
  HdlcTranslateC$SerialFrameComm$resetReceive();
#line 68
}
#line 68
#line 54
inline static error_t SerialP$SerialFrameComm$putData(uint8_t data){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = HdlcTranslateC$SerialFrameComm$putData(data);
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 513 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline error_t SerialP$SendBytePacket$completeSend(void )
#line 513
{
  bool ret = FAIL;

  /* atomic removed: atomic calls only */
#line 515
  {
    SerialP$txBuf[SerialP$TX_DATA_INDEX].state = SerialP$BUFFER_COMPLETE;
    ret = SUCCESS;
  }
  return ret;
}

# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$completeSend(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = SerialP$SendBytePacket$completeSend();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 167 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$nextByte(void )
#line 167
{
  uint8_t b;
  uint8_t indx;

  /* atomic removed: atomic calls only */
#line 170
  {
    b = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendIndex];
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendIndex++;
    indx = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendIndex;
  }
  if (indx > /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendLen) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$completeSend();
      return 0;
    }
  else {
      return b;
    }
}

# 70 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
inline static uint8_t SerialP$SendBytePacket$nextByte(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$nextByte();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 642 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP$SerialFrameComm$putDone(void )
#line 642
{
  {
    error_t txResult = SUCCESS;

    switch (SerialP$txState) {

        case SerialP$TXSTATE_PROTO: 

          txResult = SerialP$SerialFrameComm$putData(SerialP$txProto);

        SerialP$txState = SerialP$TXSTATE_INFO;



        SerialP$txCRC = crcByte(SerialP$txCRC, SerialP$txProto);
        break;

        case SerialP$TXSTATE_SEQNO: 
          txResult = SerialP$SerialFrameComm$putData(SerialP$txSeqno);
        SerialP$txState = SerialP$TXSTATE_INFO;
        SerialP$txCRC = crcByte(SerialP$txCRC, SerialP$txSeqno);
        break;

        case SerialP$TXSTATE_INFO: 
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 666
            {
              txResult = SerialP$SerialFrameComm$putData(SerialP$txBuf[SerialP$txIndex].buf);
              SerialP$txCRC = crcByte(SerialP$txCRC, SerialP$txBuf[SerialP$txIndex].buf);
              ++SerialP$txByteCnt;

              if (SerialP$txIndex == SerialP$TX_DATA_INDEX) {
                  uint8_t nextByte;

#line 673
                  nextByte = SerialP$SendBytePacket$nextByte();
                  if (SerialP$txBuf[SerialP$txIndex].state == SerialP$BUFFER_COMPLETE || SerialP$txByteCnt >= SerialP$SERIAL_MTU) {
                      SerialP$txState = SerialP$TXSTATE_FCS1;
                    }
                  else {
                      SerialP$txBuf[SerialP$txIndex].buf = nextByte;
                    }
                }
              else {
                  SerialP$txState = SerialP$TXSTATE_FCS1;
                }
            }
#line 684
            __nesc_atomic_end(__nesc_atomic); }
        break;

        case SerialP$TXSTATE_FCS1: 
          txResult = SerialP$SerialFrameComm$putData(SerialP$txCRC & 0xff);
        SerialP$txState = SerialP$TXSTATE_FCS2;
        break;

        case SerialP$TXSTATE_FCS2: 
          txResult = SerialP$SerialFrameComm$putData((SerialP$txCRC >> 8) & 0xff);
        SerialP$txState = SerialP$TXSTATE_ENDFLAG;
        break;

        case SerialP$TXSTATE_ENDFLAG: 
          txResult = SerialP$SerialFrameComm$putDelimiter();
        SerialP$txState = SerialP$TXSTATE_ENDWAIT;
        break;

        case SerialP$TXSTATE_ENDWAIT: 
          SerialP$txState = SerialP$TXSTATE_FINISH;
        case SerialP$TXSTATE_FINISH: 
          SerialP$MaybeScheduleTx();
        break;
        case SerialP$TXSTATE_ERROR: 
          default: 
            txResult = FAIL;
        break;
      }

    if (txResult != SUCCESS) {
        SerialP$txState = SerialP$TXSTATE_ERROR;
        SerialP$MaybeScheduleTx();
      }
  }
}

# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC$SerialFrameComm$putDone(void ){
#line 89
  SerialP$SerialFrameComm$putDone();
#line 89
}
#line 89
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/UartStream.nc"
inline static error_t HdlcTranslateC$UartStream$send(uint8_t * buf, uint16_t len){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$send(buf, len);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 104 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC$UartStream$sendDone(uint8_t *buf, uint16_t len, 
error_t error)
#line 105
{
  if (HdlcTranslateC$state.sendEscape) {
      HdlcTranslateC$state.sendEscape = 0;
      HdlcTranslateC$m_data = HdlcTranslateC$txTemp;
      HdlcTranslateC$UartStream$send(&HdlcTranslateC$m_data, 1);
    }
  else {
      HdlcTranslateC$SerialFrameComm$putDone();
    }
}

# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$sendDone(uint8_t * buf, uint16_t len, error_t error){
#line 57
  HdlcTranslateC$UartStream$sendDone(buf, len, error);
#line 57
}
#line 57
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$tx(uint8_t data){
#line 46
  HplAtm128UartP$HplUart0$tx(data);
#line 46
}
#line 46
# 173 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$txDone(void )
#line 173
{

  if (/*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_pos < /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_len) {
      /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$tx(/*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_buf[/*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_pos++]);
    }
  else {
      uint8_t *buf = /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_buf;

#line 180
      /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_buf = (void *)0;
      /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_intr = 0;
      /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$disableTxIntr();
      /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$sendDone(buf, /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_len, SUCCESS);
    }
}

# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP$HplUart0$txDone(void ){
#line 47
  /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$txDone();
#line 47
}
#line 47
# 277 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline void HplAtm128UartP$HplUart1$default$rxDone(uint8_t data)
#line 277
{
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP$HplUart1$rxDone(uint8_t data){
#line 49
  HplAtm128UartP$HplUart1$default$rxDone(data);
#line 49
}
#line 49
# 276 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline void HplAtm128UartP$HplUart1$default$txDone(void )
#line 276
{
}

# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP$HplUart1$txDone(void ){
#line 47
  HplAtm128UartP$HplUart1$default$txDone();
#line 47
}
#line 47
# 188 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P$CompareA$default$fired(void )
#line 188
{
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer3P$CompareA$fired(void ){
#line 49
  HplAtm128Timer3P$CompareA$default$fired();
#line 49
}
#line 49
# 192 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P$CompareB$default$fired(void )
#line 192
{
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer3P$CompareB$fired(void ){
#line 49
  HplAtm128Timer3P$CompareB$default$fired();
#line 49
}
#line 49
# 196 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P$CompareC$default$fired(void )
#line 196
{
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer3P$CompareC$fired(void ){
#line 49
  HplAtm128Timer3P$CompareC$default$fired();
#line 49
}
#line 49
# 200 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P$Capture$default$captured(uint16_t time)
#line 200
{
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplAtm128Timer3P$Capture$captured(HplAtm128Timer3P$Capture$size_type t){
#line 51
  HplAtm128Timer3P$Capture$default$captured(t);
#line 51
}
#line 51
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline uint16_t HplAtm128Timer3P$Timer$get(void )
#line 47
{
#line 47
  return * (volatile uint16_t *)0x88;
}

# 216 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP$0$Counter$overflow(void )
#line 216
{
}

# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*CounterMicro32C.Transform32*/TransformCounterC$1$Counter$overflow(void ){
#line 71
  /*Atm128Uart0C.UartP*/Atm128UartP$0$Counter$overflow();
#line 71
}
#line 71
# 122 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static inline void /*CounterMicro32C.Transform32*/TransformCounterC$1$CounterFrom$overflow(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*CounterMicro32C.Transform32*/TransformCounterC$1$m_upper++;
      if ((/*CounterMicro32C.Transform32*/TransformCounterC$1$m_upper & /*CounterMicro32C.Transform32*/TransformCounterC$1$OVERFLOW_MASK) == 0) {
        /*CounterMicro32C.Transform32*/TransformCounterC$1$Counter$overflow();
        }
    }
#line 130
    __nesc_atomic_end(__nesc_atomic); }
}

# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*CounterThree16C.NCounter*/Atm128CounterC$1$Counter$overflow(void ){
#line 71
  /*CounterMicro32C.Transform32*/TransformCounterC$1$CounterFrom$overflow();
#line 71
}
#line 71
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline void /*CounterThree16C.NCounter*/Atm128CounterC$1$Timer$overflow(void )
{
  /*CounterThree16C.NCounter*/Atm128CounterC$1$Counter$overflow();
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline void /*InitThreeP.InitThree*/Atm128TimerInitC$1$Timer$overflow(void )
#line 51
{
}

# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm128Timer3P$Timer$overflow(void ){
#line 61
  /*InitThreeP.InitThree*/Atm128TimerInitC$1$Timer$overflow();
#line 61
  /*CounterThree16C.NCounter*/Atm128CounterC$1$Timer$overflow();
#line 61
}
#line 61
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/system/RealMainP.nc"
  int main(void )
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
static bool SchedulerBasicP$Scheduler$runNextTask(void )
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
static void SchedulerBasicP$TaskBasic$default$runTask(uint8_t id)
{
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP$TaskBasic$runTask(uint8_t arg_0x40358860){
#line 64
  switch (arg_0x40358860) {
#line 64
    case MultihopOscilloscopeC$uartSendTask:
#line 64
      MultihopOscilloscopeC$uartSendTask$runTask();
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
    case /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$grantedTask:
#line 64
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$grantedTask$runTask();
#line 64
      break;
#line 64
    case AdcP$acquiredData:
#line 64
      AdcP$acquiredData$runTask();
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
    case DefaultLplP$send:
#line 64
      DefaultLplP$send$runTask();
#line 64
      break;
#line 64
    case DefaultLplP$resend:
#line 64
      DefaultLplP$resend$runTask();
#line 64
      break;
#line 64
    case DefaultLplP$startRadio:
#line 64
      DefaultLplP$startRadio$runTask();
#line 64
      break;
#line 64
    case DefaultLplP$stopRadio:
#line 64
      DefaultLplP$stopRadio$runTask();
#line 64
      break;
#line 64
    case PowerCycleP$stopRadio:
#line 64
      PowerCycleP$stopRadio$runTask();
#line 64
      break;
#line 64
    case PowerCycleP$startRadio:
#line 64
      PowerCycleP$startRadio$runTask();
#line 64
      break;
#line 64
    case PowerCycleP$getCca:
#line 64
      PowerCycleP$getCca$runTask();
#line 64
      break;
#line 64
    case /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask:
#line 64
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask$runTask();
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
    case /*CtpP.Router*/CtpRoutingEngineP$0$updateRouteTask:
#line 64
      /*CtpP.Router*/CtpRoutingEngineP$0$updateRouteTask$runTask();
#line 64
      break;
#line 64
    case /*CtpP.Router*/CtpRoutingEngineP$0$sendBeaconTask:
#line 64
      /*CtpP.Router*/CtpRoutingEngineP$0$sendBeaconTask$runTask();
#line 64
      break;
#line 64
    case SerialP$RunTx:
#line 64
      SerialP$RunTx$runTask();
#line 64
      break;
#line 64
    case SerialP$startDoneTask:
#line 64
      SerialP$startDoneTask$runTask();
#line 64
      break;
#line 64
    case SerialP$stopDoneTask:
#line 64
      SerialP$stopDoneTask$runTask();
#line 64
      break;
#line 64
    case SerialP$defaultSerialFlushTask:
#line 64
      SerialP$defaultSerialFlushTask$runTask();
#line 64
      break;
#line 64
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone:
#line 64
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone$runTask();
#line 64
      break;
#line 64
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask:
#line 64
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask$runTask();
#line 64
      break;
#line 64
    case /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$CancelTask:
#line 64
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$CancelTask$runTask();
#line 64
      break;
#line 64
    case /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$errorTask:
#line 64
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$errorTask$runTask();
#line 64
      break;
#line 64
    case UARTDebugSenderP$sendTask:
#line 64
      UARTDebugSenderP$sendTask$runTask();
#line 64
      break;
#line 64
    default:
#line 64
      SchedulerBasicP$TaskBasic$default$runTask(arg_0x40358860);
#line 64
      break;
#line 64
    }
#line 64
}
#line 64
# 161 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$setType(message_t *amsg, am_id_t type)
#line 161
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$getHeader(amsg);

#line 163
  __nesc_hton_uint8(header->type.data, type);
}

# 82 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$send(uint8_t clientId, message_t *msg, 
uint8_t len)
#line 83
{
  if (clientId >= 2) {
      return FAIL;
    }
  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[clientId].msg != (void *)0) {
      return EBUSY;
    }
  ;

  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[clientId].msg = msg;
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Packet$setPayloadLength(msg, len);

  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current >= 2) {
      error_t err;
      am_id_t amId = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$AMPacket$type(msg);
      am_addr_t dest = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$AMPacket$destination(msg);

      ;
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current = clientId;

      err = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$AMSend$send(amId, dest, msg, len);
      if (err != SUCCESS) {
          ;
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current = 2;
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[clientId].msg = (void *)0;
        }

      return err;
    }
  else {
      ;
    }
  return SUCCESS;
}

# 156 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$type(message_t *amsg)
#line 156
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$getHeader(amsg);

#line 158
  return __nesc_ntoh_uint8(header->type.data);
}

#line 132
static am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$destination(message_t *amsg)
#line 132
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$getHeader(amsg);

#line 134
  return __nesc_ntoh_uint16(header->dest.data);
}

#line 57
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 59
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$getHeader(msg);

#line 61
  __nesc_hton_uint16(header->dest.data, dest);





  __nesc_hton_uint8(header->type.data, id);
  __nesc_hton_uint8(header->length.data, len);

  return /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$send(msg, len);
}

# 502 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialP.nc"
static void SerialP$MaybeScheduleTx(void )
#line 502
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 503
    {
      if (SerialP$txPending == 0) {
          if (SerialP$RunTx$postTask() == SUCCESS) {
              SerialP$txPending = 1;
            }
        }
    }
#line 509
    __nesc_atomic_end(__nesc_atomic); }
}

# 159 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static error_t SchedulerBasicP$TaskBasic$postTask(uint8_t id)
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

# 85 "/opt/CVSTinyOS/tinyos-2.x/tos/system/QueueC.nc"
static /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$queue_t /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$dequeue(void )
#line 85
{
  /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$queue_t t = /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$head();

#line 87
  ;
  if (!/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$empty()) {
      /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$head++;
      if (/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$head == 20) {
#line 90
        /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$head = 0;
        }
#line 91
      /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$size--;
      /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$printQueue();
    }
  return t;
}

# 103 "/opt/CVSTinyOS/tinyos-2.x/tos/system/PoolP.nc"
static error_t /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$Pool$put(/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$pool_t *newVal)
#line 103
{
  if (/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$free >= 20) {
      return FAIL;
    }
  else {
      uint8_t emptyIndex = /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$index + /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$free;

#line 109
      if (emptyIndex >= 20) {
          emptyIndex -= 20;
        }
      /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$queue[emptyIndex] = newVal;
      /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$free++;
      ;
      return SUCCESS;
    }
}

# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/UARTDebugSenderP.nc"
static void UARTDebugSenderP$UARTSend$sendDone(message_t *msg, error_t error)
#line 58
{
  message_t *qh = UARTDebugSenderP$SendQueue$head();

#line 60
  if (qh == (void *)0 || qh != msg) {

      UARTDebugSenderP$statSendDoneBug++;
    }
  else 
#line 63
    {
      UARTDebugSenderP$SendQueue$dequeue();
      UARTDebugSenderP$MessagePool$put(msg);
      if (error == SUCCESS) {
        UARTDebugSenderP$statSendDoneOk++;
        }
      else {
#line 69
        UARTDebugSenderP$statSendDoneFail++;
        }
    }
#line 71
  UARTDebugSenderP$sending = FALSE;
  if (!UARTDebugSenderP$SendQueue$empty()) {
    UARTDebugSenderP$sendTask$postTask();
    }
}

# 182 "MultihopOscilloscopeC.nc"
static void MultihopOscilloscopeC$SerialSend$sendDone(message_t *msg, error_t error)
#line 182
{
  MultihopOscilloscopeC$uartbusy = FALSE;
  if (MultihopOscilloscopeC$UARTQueue$empty() == FALSE) {


      message_t *queuemsg = MultihopOscilloscopeC$UARTQueue$dequeue();

#line 188
      if (queuemsg == (void *)0) {
          MultihopOscilloscopeC$fatal_problem();
          return;
        }
      memcpy(&MultihopOscilloscopeC$uartbuf, queuemsg, sizeof(message_t ));
      if (MultihopOscilloscopeC$UARTMessagePool$put(queuemsg) != SUCCESS) {
          MultihopOscilloscopeC$fatal_problem();
          return;
        }
      MultihopOscilloscopeC$uartSendTask$postTask();
    }
}

#line 278
static void MultihopOscilloscopeC$fatal_problem(void )
#line 278
{
  MultihopOscilloscopeC$Leds$led0On();
  MultihopOscilloscopeC$Leds$led1On();
  MultihopOscilloscopeC$Leds$led2On();
  MultihopOscilloscopeC$Timer$stop();
}

# 103 "/opt/CVSTinyOS/tinyos-2.x/tos/system/PoolP.nc"
static error_t /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$Pool$put(/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$pool_t *newVal)
#line 103
{
  if (/*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$free >= 10) {
      return FAIL;
    }
  else {
      uint8_t emptyIndex = /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$index + /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$free;

#line 109
      if (emptyIndex >= 10) {
          emptyIndex -= 10;
        }
      /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$queue[emptyIndex] = newVal;
      /*MultihopOscilloscopeAppC.UARTMessagePoolP.PoolP*/PoolP$2$free++;
      ;
      return SUCCESS;
    }
}

# 155 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$sendDone(uint8_t last, message_t * msg, error_t err)
#line 155
{
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[last].msg = (void *)0;
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$tryToSend();
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$sendDone(last, msg, err);
}

# 132 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/UARTDebugSenderP.nc"
static error_t  UARTDebugSenderP$CollectionDebug$logEventRoute(uint8_t type, am_addr_t parent, uint8_t hopcount, uint16_t metric)
#line 132
{
  UARTDebugSenderP$statLogReceived++;
  if (UARTDebugSenderP$MessagePool$empty()) {
      return FAIL;
    }
  else 
#line 136
    {
      message_t *msg = UARTDebugSenderP$MessagePool$get();
      CollectionDebugMsg *dbg_msg = UARTDebugSenderP$UARTSend$getPayload(msg, sizeof(CollectionDebugMsg ));

#line 139
      if (dbg_msg == (void *)0) {
          return FAIL;
        }
      memset(dbg_msg, 0, UARTDebugSenderP$len);

      __nesc_hton_uint8(dbg_msg->type.data, type);
      __nesc_hton_uint16(dbg_msg->data.route_info.parent.data, parent);
      __nesc_hton_uint8(dbg_msg->data.route_info.hopcount.data, hopcount);
      __nesc_hton_uint16(dbg_msg->data.route_info.metric.data, metric);
      __nesc_hton_uint16(dbg_msg->seqno.data, UARTDebugSenderP$statLogReceived);

      if (UARTDebugSenderP$SendQueue$enqueue(msg) == SUCCESS) {
          UARTDebugSenderP$sendTask$postTask();
          return SUCCESS;
        }
      else 
#line 153
        {
          UARTDebugSenderP$statEnqueueFail++;
          UARTDebugSenderP$MessagePool$put(msg);
          return FAIL;
        }
    }
}

# 88 "/opt/CVSTinyOS/tinyos-2.x/tos/system/PoolP.nc"
static /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$pool_t */*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$Pool$get(void )
#line 88
{
  if (/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$free) {
      /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$pool_t *rval = /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$queue[/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$index];

#line 91
      /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$queue[/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$index] = (void *)0;
      /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$free--;
      /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$index++;
      if (/*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$index == 20) {
          /*MultihopOscilloscopeAppC.DebugMessagePool.PoolP*/PoolP$3$index = 0;
        }
      ;
      return rval;
    }
  return (void *)0;
}

# 119 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static void */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$getPayload(message_t *msg, uint8_t len)
#line 119
{
  if (len > /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$maxPayloadLength()) {
      return (void *)0;
    }
  else {
      return (void * )msg->data;
    }
}

# 97 "/opt/CVSTinyOS/tinyos-2.x/tos/system/QueueC.nc"
static error_t /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$enqueue(/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$queue_t newVal)
#line 97
{
  if (/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$size() < /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$Queue$maxSize()) {
      ;
      /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$queue[/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$tail] = newVal;
      /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$tail++;
      if (/*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$tail == 20) {
#line 102
        /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$tail = 0;
        }
#line 103
      /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$size++;
      /*MultihopOscilloscopeAppC.DebugSendQueue*/QueueC$2$printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

# 116 "MultihopOscilloscopeC.nc"
static void MultihopOscilloscopeC$startTimer(void )
#line 116
{
  if (MultihopOscilloscopeC$Timer$isRunning()) {
#line 117
    MultihopOscilloscopeC$Timer$stop();
    }
#line 118
  MultihopOscilloscopeC$Timer$startPeriodic(__nesc_ntoh_uint16(MultihopOscilloscopeC$local.interval.data));
  MultihopOscilloscopeC$reading = 0;
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
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get(void )
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

# 347 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialP.nc"
static void SerialP$testOff(void )
#line 347
{
  bool turnOff = FALSE;

#line 349
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 349
    {
      if (SerialP$txState == SerialP$TXSTATE_INACTIVE && 
      SerialP$rxState == SerialP$RXSTATE_INACTIVE) {
          turnOff = TRUE;
        }
    }
#line 354
    __nesc_atomic_end(__nesc_atomic); }
  if (turnOff) {
      SerialP$stopDoneTask$postTask();
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 357
        SerialP$offPending = FALSE;
#line 357
        __nesc_atomic_end(__nesc_atomic); }
    }
  else {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 360
        SerialP$offPending = TRUE;
#line 360
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 86 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static error_t HdlcTranslateC$SerialFrameComm$putDelimiter(void )
#line 86
{
  HdlcTranslateC$state.sendEscape = 0;
  HdlcTranslateC$m_data = HDLC_FLAG_BYTE;
  return HdlcTranslateC$UartStream$send(&HdlcTranslateC$m_data, 1);
}

# 155 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$send(uint8_t *buf, uint16_t len)
#line 155
{

  if (len == 0) {
    return FAIL;
    }
  else {
#line 159
    if (/*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_buf) {
      return EBUSY;
      }
    }
#line 162
  /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_len = len;
  /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_buf = buf;
  /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_pos = 0;
  /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_intr = 1;
  /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$enableTxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$tx(buf[/*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_pos++]);

  return SUCCESS;
}

# 164 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static void HplAtm128UartP$HplUart0$tx(uint8_t data)
#line 164
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 165
    {
      * (volatile uint8_t *)(0x0C + 0x20) = data;
      * (volatile uint8_t *)(0x0B + 0x20) |= 1 << 6;
    }
#line 168
    __nesc_atomic_end(__nesc_atomic); }
}

# 451 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static uint16_t LinkEstimatorP$LinkEstimator$getLinkQuality(am_addr_t neighbor)
#line 451
{
  uint8_t idx;

#line 453
  idx = LinkEstimatorP$findIdx(neighbor);
  if (idx == LinkEstimatorP$INVALID_RVAL) {
      return LinkEstimatorP$VERY_LARGE_EETX_VALUE;
    }
  else 
#line 456
    {
      if (LinkEstimatorP$NeighborTable[idx].flags & MATURE_ENTRY) {
          return LinkEstimatorP$NeighborTable[idx].eetx;
        }
      else 
#line 459
        {
          return LinkEstimatorP$VERY_LARGE_EETX_VALUE;
        }
    }
}

#line 179
static uint8_t LinkEstimatorP$findIdx(am_addr_t ll_addr)
#line 179
{
  uint8_t i;

#line 181
  for (i = 0; i < 10; i++) {
      if (LinkEstimatorP$NeighborTable[i].flags & VALID_ENTRY) {
          if (LinkEstimatorP$NeighborTable[i].ll_addr == ll_addr) {
              return i;
            }
        }
    }
  return LinkEstimatorP$INVALID_RVAL;
}

#line 495
static error_t LinkEstimatorP$LinkEstimator$pinNeighbor(am_addr_t neighbor)
#line 495
{
  uint8_t nidx = LinkEstimatorP$findIdx(neighbor);

#line 497
  if (nidx == LinkEstimatorP$INVALID_RVAL) {
      return FAIL;
    }
  LinkEstimatorP$NeighborTable[nidx].flags |= PINNED_ENTRY;
  return SUCCESS;
}

# 826 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpCongestion$isCongested(void )
#line 826
{


  bool congested = /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$size() > /*CtpP.Forwarder*/CtpForwardingEngineP$0$congestionThreshold ? 
  TRUE : FALSE;

#line 831
  return congested || /*CtpP.Forwarder*/CtpForwardingEngineP$0$clientCongested ? TRUE : FALSE;
}

# 158 "CC2420CsmaP.nc"
static void *CC2420CsmaP$Send$getPayload(message_t *m, uint8_t len)
#line 158
{
  if (len <= CC2420CsmaP$Send$maxPayloadLength()) {
      return (void * )m->data;
    }
  else {
      return (void *)0;
    }
}

# 707 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static void *LinkEstimatorP$Packet$getPayload(message_t *msg, uint8_t len)
#line 707
{
  void *payload = LinkEstimatorP$SubPacket$getPayload(msg, len + sizeof(linkest_header_t ));

#line 709
  if (payload != (void *)0) {
      payload += sizeof(linkest_header_t );
    }
  return payload;
}

#line 415
static void LinkEstimatorP$print_packet(message_t *msg, uint8_t len)
#line 415
{
  uint8_t i;
  uint8_t *b;

  b = (uint8_t *)msg->data;
  for (i = 0; i < len; i++) 
    ;
  ;
}

# 123 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static void CC2420ActiveMessageP$AMPacket$setType(message_t *amsg, am_id_t type)
#line 123
{
  cc2420_header_t *header = CC2420ActiveMessageP$CC2420PacketBody$getHeader(amsg);

#line 125
  __nesc_hton_leuint8(header->type.data, type);
}

# 82 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(uint8_t clientId, message_t *msg, 
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

# 152 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static void CC2420ActiveMessageP$Packet$setPayloadLength(message_t *msg, uint8_t len)
#line 152
{
  __nesc_hton_leuint8(CC2420ActiveMessageP$CC2420PacketBody$getHeader(msg)->length.data, len + CC2420_SIZE);
}

#line 118
static am_id_t CC2420ActiveMessageP$AMPacket$type(message_t *amsg)
#line 118
{
  cc2420_header_t *header = CC2420ActiveMessageP$CC2420PacketBody$getHeader(amsg);

#line 120
  return __nesc_ntoh_leuint8(header->type.data);
}

#line 93
static am_addr_t CC2420ActiveMessageP$AMPacket$destination(message_t *amsg)
#line 93
{
  cc2420_header_t *header = CC2420ActiveMessageP$CC2420PacketBody$getHeader(amsg);

#line 95
  return __nesc_ntoh_leuint16(header->dest.data);
}

#line 62
static error_t CC2420ActiveMessageP$AMSend$send(am_id_t id, am_addr_t addr, 
message_t *msg, 
uint8_t len)
#line 64
{
  cc2420_header_t *header = CC2420ActiveMessageP$CC2420PacketBody$getHeader(msg);

#line 66
  __nesc_hton_leuint8(header->type.data, id);
  __nesc_hton_leuint16(header->dest.data, addr);
  __nesc_hton_leuint16(header->destpan.data, CC2420ActiveMessageP$CC2420Config$getPanAddr());
  __nesc_hton_leuint16(header->src.data, CC2420ActiveMessageP$AMPacket$address());

  CC2420ActiveMessageP$SendNotifier$aboutToSend(id, addr, msg);

  return CC2420ActiveMessageP$SubSend$send(msg, len);
}

# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC$amAddress(void )
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

# 96 "/opt/CVSTinyOS/tinyos-2.x/tos/system/StateImplP.nc"
static error_t StateImplP$State$requestState(uint8_t id, uint8_t reqState)
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

#line 143
static uint8_t StateImplP$State$getState(uint8_t id)
#line 143
{
  uint8_t theState;

#line 145
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 145
    theState = StateImplP$state[id];
#line 145
    __nesc_atomic_end(__nesc_atomic); }
  return theState;
}

# 483 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/lpl/DefaultLplP.nc"
static void DefaultLplP$initializeSend(void )
#line 483
{

  if (
#line 484
  DefaultLplP$LowPowerListening$getRxSleepInterval(DefaultLplP$currentSendMsg)
   > DefaultLplP$ONE_MESSAGE) {

      if (DefaultLplP$AMPacket$destination(DefaultLplP$currentSendMsg) == AM_BROADCAST_ADDR) {
          DefaultLplP$PacketAcknowledgements$noAck(DefaultLplP$currentSendMsg);
        }
      else 
#line 489
        {

          DefaultLplP$PacketAcknowledgements$requestAck(DefaultLplP$currentSendMsg);
        }

      DefaultLplP$SendDoneTimer$startOneShot(
      DefaultLplP$LowPowerListening$getRxSleepInterval(DefaultLplP$currentSendMsg) + 20);
    }

  DefaultLplP$send$postTask();
}

# 65 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static error_t CC2420PacketP$Acks$requestAck(message_t *p_msg)
#line 65
{
  unsigned char *__nesc_temp47;

#line 66
  (__nesc_temp47 = CC2420PacketP$CC2420PacketBody$getHeader(p_msg)->fcf.data, __nesc_hton_leuint16(__nesc_temp47, __nesc_ntoh_leuint16(__nesc_temp47) | (1 << IEEE154_FCF_ACK_REQ)));
  return SUCCESS;
}

# 148 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(), dt, TRUE);
}

# 545 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubSend$sendDone(message_t *msg, error_t error)
#line 545
{
  fe_queue_entry_t *qe = /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$head();

#line 547
  ;
  if (qe == (void *)0 || qe->msg != msg) {
      ;
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendDoneBug();
      return;
    }
  else {
#line 553
    if (error != SUCCESS) {

        ;
        /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEventMsg(NET_C_FE_SENDDONE_FAIL, 
        /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getSequenceNumber(msg), 
        /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getOrigin(msg), 
        /*CtpP.Forwarder*/CtpForwardingEngineP$0$AMPacket$destination(msg));
        /*CtpP.Forwarder*/CtpForwardingEngineP$0$startRetxmitTimer(SENDDONE_FAIL_WINDOW, SENDDONE_FAIL_OFFSET);
      }
    else {
#line 562
      if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$ackPending && !/*CtpP.Forwarder*/CtpForwardingEngineP$0$PacketAcknowledgements$wasAcked(msg)) {

          /*CtpP.Forwarder*/CtpForwardingEngineP$0$LinkEstimator$txNoAck(/*CtpP.Forwarder*/CtpForwardingEngineP$0$AMPacket$destination(msg));
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpInfo$recomputeRoutes();
          if (-- qe->retries) {
              ;
              /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEventMsg(NET_C_FE_SENDDONE_WAITACK, 
              /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getSequenceNumber(msg), 
              /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getOrigin(msg), 
              /*CtpP.Forwarder*/CtpForwardingEngineP$0$AMPacket$destination(msg));
              /*CtpP.Forwarder*/CtpForwardingEngineP$0$startRetxmitTimer(SENDDONE_NOACK_WINDOW, SENDDONE_NOACK_OFFSET);
            }
          else 
#line 573
            {

              if (qe->client < /*CtpP.Forwarder*/CtpForwardingEngineP$0$CLIENT_COUNT) {
                  /*CtpP.Forwarder*/CtpForwardingEngineP$0$clientPtrs[qe->client] = qe;
                  /*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$sendDone(qe->client, msg, FAIL);
                  /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEventMsg(NET_C_FE_SENDDONE_FAIL_ACK_SEND, 
                  /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getSequenceNumber(msg), 
                  /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getOrigin(msg), 
                  /*CtpP.Forwarder*/CtpForwardingEngineP$0$AMPacket$destination(msg));
                }
              else 
#line 582
                {
                  if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$put(qe->msg) != SUCCESS) {
                    /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_PUT_MSGPOOL_ERR);
                    }
#line 585
                  if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$put(qe) != SUCCESS) {
                    /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_PUT_QEPOOL_ERR);
                    }
#line 587
                  /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEventMsg(NET_C_FE_SENDDONE_FAIL_ACK_FWD, 
                  /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getSequenceNumber(msg), 
                  /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getOrigin(msg), 
                  /*CtpP.Forwarder*/CtpForwardingEngineP$0$AMPacket$destination(msg));
                }
              /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$dequeue();
              /*CtpP.Forwarder*/CtpForwardingEngineP$0$sending = FALSE;
              /*CtpP.Forwarder*/CtpForwardingEngineP$0$startRetxmitTimer(SENDDONE_OK_WINDOW, SENDDONE_OK_OFFSET);
            }
        }
      else {
#line 597
        if (qe->client < /*CtpP.Forwarder*/CtpForwardingEngineP$0$CLIENT_COUNT) {
            ctp_data_header_t *hdr;
            uint8_t client = qe->client;

#line 600
            ;

            /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEventMsg(NET_C_FE_SENT_MSG, 
            /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getSequenceNumber(msg), 
            /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getOrigin(msg), 
            /*CtpP.Forwarder*/CtpForwardingEngineP$0$AMPacket$destination(msg));
            /*CtpP.Forwarder*/CtpForwardingEngineP$0$LinkEstimator$txAck(/*CtpP.Forwarder*/CtpForwardingEngineP$0$AMPacket$destination(msg));
            /*CtpP.Forwarder*/CtpForwardingEngineP$0$clientPtrs[client] = qe;
            hdr = /*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(qe->msg);
            /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$dequeue();
            /*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$sendDone(client, msg, SUCCESS);
            /*CtpP.Forwarder*/CtpForwardingEngineP$0$sending = FALSE;
            /*CtpP.Forwarder*/CtpForwardingEngineP$0$startRetxmitTimer(SENDDONE_OK_WINDOW, SENDDONE_OK_OFFSET);
          }
        else {
#line 614
          if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$size() < /*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$maxSize()) {

              ;
              /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEventMsg(NET_C_FE_FWD_MSG, 
              /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getSequenceNumber(msg), 
              /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getOrigin(msg), 
              /*CtpP.Forwarder*/CtpForwardingEngineP$0$AMPacket$destination(msg));
              /*CtpP.Forwarder*/CtpForwardingEngineP$0$LinkEstimator$txAck(/*CtpP.Forwarder*/CtpForwardingEngineP$0$AMPacket$destination(msg));
              /*CtpP.Forwarder*/CtpForwardingEngineP$0$SentCache$insert(qe->msg);
              /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$dequeue();
              if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$put(qe->msg) != SUCCESS) {
                /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_PUT_MSGPOOL_ERR);
                }
#line 626
              if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$put(qe) != SUCCESS) {
                /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_PUT_QEPOOL_ERR);
                }
#line 628
              /*CtpP.Forwarder*/CtpForwardingEngineP$0$sending = FALSE;
              /*CtpP.Forwarder*/CtpForwardingEngineP$0$startRetxmitTimer(SENDDONE_OK_WINDOW, SENDDONE_OK_OFFSET);
            }
          else {
              ;
              /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendDoneBug();
            }
          }
        }
      }
    }
}

# 76 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/UARTDebugSenderP.nc"
static error_t UARTDebugSenderP$CollectionDebug$logEvent(uint8_t type)
#line 76
{
  UARTDebugSenderP$statLogReceived++;
  if (UARTDebugSenderP$MessagePool$empty()) {
      return FAIL;
    }
  else 
#line 80
    {
      message_t *msg = UARTDebugSenderP$MessagePool$get();
      CollectionDebugMsg *dbg_msg = UARTDebugSenderP$UARTSend$getPayload(msg, sizeof(CollectionDebugMsg ));

#line 83
      if (dbg_msg == (void *)0) {
          return FAIL;
        }

      memset(dbg_msg, 0, UARTDebugSenderP$len);

      __nesc_hton_uint8(dbg_msg->type.data, type);
      __nesc_hton_uint16(dbg_msg->seqno.data, UARTDebugSenderP$statLogReceived);

      if (UARTDebugSenderP$SendQueue$enqueue(msg) == SUCCESS) {
          UARTDebugSenderP$sendTask$postTask();
          return SUCCESS;
        }
      else 
#line 95
        {
          UARTDebugSenderP$statEnqueueFail++;
          UARTDebugSenderP$MessagePool$put(msg);
          return FAIL;
        }
    }
}

static error_t  UARTDebugSenderP$CollectionDebug$logEventMsg(uint8_t type, uint16_t msg_id, am_addr_t origin, am_addr_t node)
#line 103
{
  UARTDebugSenderP$statLogReceived++;
  if (UARTDebugSenderP$MessagePool$empty()) {
      return FAIL;
    }
  else 
#line 107
    {
      message_t *msg = UARTDebugSenderP$MessagePool$get();
      CollectionDebugMsg *dbg_msg = UARTDebugSenderP$UARTSend$getPayload(msg, sizeof(CollectionDebugMsg ));

#line 110
      if (dbg_msg == (void *)0) {
          return FAIL;
        }
      memset(dbg_msg, 0, UARTDebugSenderP$len);

      __nesc_hton_uint8(dbg_msg->type.data, type);
      __nesc_hton_uint16(dbg_msg->data.msg.msg_uid.data, msg_id);
      __nesc_hton_uint16(dbg_msg->data.msg.origin.data, origin);
      __nesc_hton_uint16(dbg_msg->data.msg.other_node.data, node);
      __nesc_hton_uint16(dbg_msg->seqno.data, UARTDebugSenderP$statLogReceived);

      if (UARTDebugSenderP$SendQueue$enqueue(msg) == SUCCESS) {
          UARTDebugSenderP$sendTask$postTask();
          return SUCCESS;
        }
      else 
#line 124
        {
          UARTDebugSenderP$statEnqueueFail++;
          UARTDebugSenderP$MessagePool$put(msg);
          return FAIL;
        }
    }
}

# 115 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
static void * /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubPacket$getPayload(message_t * msg, uint8_t len){
#line 115
  void *__nesc_result;
#line 115

#line 115
  __nesc_result = CC2420ActiveMessageP$Packet$getPayload(msg, len);
#line 115

#line 115
  return __nesc_result;
#line 115
}
#line 115
# 868 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getOrigin(message_t *msg)
#line 868
{
#line 868
  return __nesc_ntoh_uint16(/*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(msg)->origin.data);
}

#line 945
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$startRetxmitTimer(uint16_t mask, uint16_t offset)
#line 945
{
  uint16_t r = /*CtpP.Forwarder*/CtpForwardingEngineP$0$Random$rand16();

#line 947
  r &= mask;
  r += offset;
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$RetxmitTimer$startOneShot(r);
  ;
}

# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/system/RandomMlcgC.nc"
static uint32_t RandomMlcgC$Random$rand32(void )
#line 58
{
  uint32_t mlcg;
#line 59
  uint32_t p;
#line 59
  uint32_t q;
  uint64_t tmpseed;

#line 61
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
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
#line 73
    __nesc_atomic_end(__nesc_atomic); }
  return mlcg;
}

# 284 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static void LinkEstimatorP$updateDEETX(neighbor_table_entry_t *ne)
#line 284
{
  uint16_t estETX;

  if (ne->data_success == 0) {



      estETX = (ne->data_total - 1) * 10;
    }
  else 
#line 292
    {
      estETX = 10 * ne->data_total / ne->data_success - 10;
      ne->data_success = 0;
      ne->data_total = 0;
    }
  LinkEstimatorP$updateEETX(ne, estETX);
}

#line 278
static void LinkEstimatorP$updateEETX(neighbor_table_entry_t *ne, uint16_t newEst)
#line 278
{
  ne->eetx = (LinkEstimatorP$ALPHA * ne->eetx + (10 - LinkEstimatorP$ALPHA) * newEst) / 10;
}

# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$toggle(void )
#line 48
{
#line 48
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 48
    * (volatile uint8_t * )59U ^= 1 << 1;
#line 48
    __nesc_atomic_end(__nesc_atomic); }
}

#line 48
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$toggle(void )
#line 48
{
#line 48
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 48
    * (volatile uint8_t * )59U ^= 1 << 2;
#line 48
    __nesc_atomic_end(__nesc_atomic); }
}

# 103 "/opt/CVSTinyOS/tinyos-2.x/tos/system/PoolP.nc"
static error_t /*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$put(/*CtpP.MessagePoolP.PoolP*/PoolP$0$pool_t *newVal)
#line 103
{
  if (/*CtpP.MessagePoolP.PoolP*/PoolP$0$free >= 12) {
      return FAIL;
    }
  else {
      uint8_t emptyIndex = /*CtpP.MessagePoolP.PoolP*/PoolP$0$index + /*CtpP.MessagePoolP.PoolP*/PoolP$0$free;

#line 109
      if (emptyIndex >= 12) {
          emptyIndex -= 12;
        }
      /*CtpP.MessagePoolP.PoolP*/PoolP$0$queue[emptyIndex] = newVal;
      /*CtpP.MessagePoolP.PoolP*/PoolP$0$free++;
      ;
      return SUCCESS;
    }
}

#line 103
static error_t /*CtpP.QEntryPoolP.PoolP*/PoolP$1$Pool$put(/*CtpP.QEntryPoolP.PoolP*/PoolP$1$pool_t *newVal)
#line 103
{
  if (/*CtpP.QEntryPoolP.PoolP*/PoolP$1$free >= 12) {
      return FAIL;
    }
  else {
      uint8_t emptyIndex = /*CtpP.QEntryPoolP.PoolP*/PoolP$1$index + /*CtpP.QEntryPoolP.PoolP*/PoolP$1$free;

#line 109
      if (emptyIndex >= 12) {
          emptyIndex -= 12;
        }
      /*CtpP.QEntryPoolP.PoolP*/PoolP$1$queue[emptyIndex] = newVal;
      /*CtpP.QEntryPoolP.PoolP*/PoolP$1$free++;
      ;
      return SUCCESS;
    }
}

# 85 "/opt/CVSTinyOS/tinyos-2.x/tos/system/QueueC.nc"
static /*CtpP.SendQueueP*/QueueC$0$queue_t /*CtpP.SendQueueP*/QueueC$0$Queue$dequeue(void )
#line 85
{
  /*CtpP.SendQueueP*/QueueC$0$queue_t t = /*CtpP.SendQueueP*/QueueC$0$Queue$head();

#line 87
  ;
  if (!/*CtpP.SendQueueP*/QueueC$0$Queue$empty()) {
      /*CtpP.SendQueueP*/QueueC$0$head++;
      if (/*CtpP.SendQueueP*/QueueC$0$head == 13) {
#line 90
        /*CtpP.SendQueueP*/QueueC$0$head = 0;
        }
#line 91
      /*CtpP.SendQueueP*/QueueC$0$size--;
      /*CtpP.SendQueueP*/QueueC$0$printQueue();
    }
  return t;
}

# 517 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static error_t LinkEstimatorP$LinkEstimator$txAck(am_addr_t neighbor)
#line 517
{
  neighbor_table_entry_t *ne;
  uint8_t nidx = LinkEstimatorP$findIdx(neighbor);

#line 520
  if (nidx == LinkEstimatorP$INVALID_RVAL) {
      return FAIL;
    }
  ne = &LinkEstimatorP$NeighborTable[nidx];
  ne->data_success++;
  ne->data_total++;
  if (ne->data_total >= LinkEstimatorP$DLQ_PKT_WINDOW) {
      LinkEstimatorP$updateDEETX(ne);
    }
  return SUCCESS;
}

# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/LruCtpMsgCacheP.nc"
static uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$lookup(message_t *m)
#line 84
{
  uint8_t i;
  uint8_t idx;

#line 87
  for (i = 0; i < /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count; i++) {
      idx = (i + /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$first) % 4;


      if (
#line 89
      /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$CtpPacket$getOrigin(m) == /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$cache[idx].origin && 
      /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$CtpPacket$getSequenceNumber(m) == /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$cache[idx].seqno && 
      /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$CtpPacket$getThl(m) == /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$cache[idx].thl && 
      /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$CtpPacket$getType(m) == /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$cache[idx].type) {
          break;
        }
    }
  return i;
}

# 879 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getOrigin(message_t *msg)
#line 879
{
#line 879
  return __nesc_ntoh_uint16(/*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(msg)->origin.data);
}

#line 881
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getSequenceNumber(message_t *msg)
#line 881
{
#line 881
  return __nesc_ntoh_uint8(/*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(msg)->originSeqNo.data);
}

#line 882
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getThl(message_t *msg)
#line 882
{
#line 882
  return __nesc_ntoh_uint8(/*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(msg)->thl.data);
}

#line 878
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getType(message_t *msg)
#line 878
{
#line 878
  return __nesc_ntoh_uint8(/*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(msg)->type.data);
}

# 155 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(uint8_t last, message_t * msg, error_t err)
#line 155
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[last].msg = (void *)0;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend();
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(last, msg, err);
}

# 148 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static uint8_t CC2420ActiveMessageP$Packet$payloadLength(message_t *msg)
#line 148
{
  return __nesc_ntoh_leuint8(CC2420ActiveMessageP$CC2420PacketBody$getHeader(msg)->length.data) - CC2420_SIZE;
}

# 706 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static uint8_t /*CtpP.Router*/CtpRoutingEngineP$0$routingTableFind(am_addr_t neighbor)
#line 706
{
  uint8_t i;

#line 708
  if (neighbor == INVALID_ADDR) {
    return /*CtpP.Router*/CtpRoutingEngineP$0$routingTableActive;
    }
#line 710
  for (i = 0; i < /*CtpP.Router*/CtpRoutingEngineP$0$routingTableActive; i++) {
      if (/*CtpP.Router*/CtpRoutingEngineP$0$routingTable[i].neighbor == neighbor) {
        break;
        }
    }
#line 714
  return i;
}

# 130 "MultihopOscilloscopeC.nc"
static message_t *
MultihopOscilloscopeC$Receive$receive(message_t *msg, void *payload, uint8_t len)
#line 131
{
  oscilloscope_t *in = (oscilloscope_t *)payload;
  oscilloscope_t *out;

#line 134
  if (MultihopOscilloscopeC$uartbusy == FALSE) {
      out = (oscilloscope_t *)MultihopOscilloscopeC$SerialSend$getPayload(&MultihopOscilloscopeC$uartbuf, sizeof(oscilloscope_t ));
      if (len != sizeof(oscilloscope_t ) || out == (void *)0) {
          return msg;
        }
      else {
          memcpy(out, in, sizeof(oscilloscope_t ));
        }
      MultihopOscilloscopeC$uartlen = sizeof(oscilloscope_t );
      MultihopOscilloscopeC$uartSendTask$postTask();
    }
  else 
#line 144
    {


      message_t *newmsg = MultihopOscilloscopeC$UARTMessagePool$get();

#line 148
      if (newmsg == (void *)0) {

          MultihopOscilloscopeC$report_problem();
          return msg;
        }


      out = (oscilloscope_t *)MultihopOscilloscopeC$SerialSend$getPayload(newmsg, sizeof(oscilloscope_t ));
      if (out == (void *)0) {
          return msg;
        }
      memcpy(out, in, sizeof(oscilloscope_t ));

      if (MultihopOscilloscopeC$UARTQueue$enqueue(newmsg) != SUCCESS) {



          MultihopOscilloscopeC$UARTMessagePool$put(newmsg);
          MultihopOscilloscopeC$fatal_problem();
          return msg;
        }
    }

  return msg;
}

# 860 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static void */*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$getPayload(message_t *msg, uint8_t len)
#line 860
{
  uint8_t *payload = /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubPacket$getPayload(msg, len + sizeof(ctp_data_header_t ));

#line 862
  if (payload != (void *)0) {
      payload += sizeof(ctp_data_header_t );
    }
  return payload;
}

# 542 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static error_t /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$getEtx(uint16_t *etx)
#line 542
{
  if (etx == (void *)0) {
    return FAIL;
    }
#line 545
  if (/*CtpP.Router*/CtpRoutingEngineP$0$routeInfo.parent == INVALID_ADDR) {
    return FAIL;
    }
#line 547
  if (/*CtpP.Router*/CtpRoutingEngineP$0$state_is_root == 1) {
      *etx = 0;
    }
  else 
#line 549
    {

      *etx = /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo.etx + /*CtpP.Router*/CtpRoutingEngineP$0$evaluateEtx(/*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$getLinkQuality(/*CtpP.Router*/CtpRoutingEngineP$0$routeInfo.parent));
    }
  return SUCCESS;
}

# 133 "/opt/CVSTinyOS/tinyos-2.x/tos/system/StateImplP.nc"
static bool StateImplP$State$isState(uint8_t id, uint8_t myState)
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

# 82 "CC2420CsmaP.nc"
static error_t CC2420CsmaP$SplitControl$start(void )
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

# 136 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type dt)
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
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$set_alarm(void )
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
static /*Counter32khz32C.Transform32*/TransformCounterC$0$to_size_type /*Counter32khz32C.Transform32*/TransformCounterC$0$Counter$get(void )
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

# 97 "CC2420CsmaP.nc"
static error_t CC2420CsmaP$SplitControl$stop(void )
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

# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t CC2420CsmaP$SubControl$stop(void ){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = CC2420TransmitP$StdControl$stop();
#line 84
  __nesc_result = ecombine(__nesc_result, CC2420ReceiveP$StdControl$stop());
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 149 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static error_t CC2420SpiP$Resource$release(uint8_t id)
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

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/State.nc"
static void CC2420SpiP$WorkingState$toIdle(void ){
#line 56
  StateImplP$State$toIdle(0U);
#line 56
}
#line 56
# 339 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static error_t CC2420SpiP$attemptRelease(void )
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

# 147 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$isOwner(uint8_t id)
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

#line 123
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ArbiterInfo$inUse(void )
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

# 130 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static void HplAtm128SpiP$SPI$enableSpi(bool enabled)
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

# 441 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static void CC2420ReceiveP$reset_state(void )
#line 441
{
  CC2420ReceiveP$m_bytes_left = CC2420ReceiveP$RXFIFO_SIZE;
  /* atomic removed: atomic calls only */
#line 443
  CC2420ReceiveP$receivingPacket = FALSE;
  CC2420ReceiveP$m_timestamp_head = 0;
  CC2420ReceiveP$m_timestamp_size = 0;
  CC2420ReceiveP$m_missed_packets = 0;
}

# 199 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static error_t CC2420ControlP$CC2420Power$stopVReg(void )
#line 199
{
  CC2420ControlP$m_state = CC2420ControlP$S_VREG_STOPPED;
  CC2420ControlP$RSTN$clr();
  CC2420ControlP$VREN$clr();
  CC2420ControlP$RSTN$set();
  return SUCCESS;
}

# 285 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/lpl/PowerCycleP.nc"
static bool PowerCycleP$finishSplitControlRequests(void )
#line 285
{
  if (PowerCycleP$SplitControlState$isState(PowerCycleP$S_TURNING_OFF)) {
      PowerCycleP$SplitControlState$forceState(PowerCycleP$S_OFF);
      PowerCycleP$SplitControl$stopDone(SUCCESS);
      return TRUE;
    }
  else {
#line 291
    if (PowerCycleP$SplitControlState$isState(PowerCycleP$S_TURNING_ON)) {

        PowerCycleP$SplitControlState$forceState(PowerCycleP$S_ON);
        PowerCycleP$SplitControl$startDone(SUCCESS);
        return TRUE;
      }
    }
  return FALSE;
}

# 629 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static error_t CC2420TransmitP$acquireSpiResource(void )
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
static error_t CC2420SpiP$Resource$immediateRequest(uint8_t id)
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

# 105 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static void Atm128SpiP$startSpi(void )
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

# 115 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static void HplAtm128SpiP$SPI$enableInterrupt(bool enabled)
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
static error_t CC2420SpiP$Resource$request(uint8_t id)
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

# 580 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static void CC2420TransmitP$attemptSend(void )
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

# 318 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP$Strobe$strobe(uint8_t addr)
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

# 127 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static uint8_t Atm128SpiP$SpiByte$write(uint8_t tx)
#line 127
{
  Atm128SpiP$Spi$enableSpi(TRUE);
  Atm128SpiP$McuPowerState$update();
  Atm128SpiP$Spi$write(tx);
  while (!(* (volatile uint8_t *)(0x0E + 0x20) & 0x80)) ;
  return Atm128SpiP$Spi$read();
}

# 622 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static void CC2420TransmitP$congestionBackoff(void )
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

#line 659
static void CC2420TransmitP$loadTXFIFO(void )
#line 659
{
  cc2420_header_t *header = CC2420TransmitP$CC2420PacketBody$getHeader(CC2420TransmitP$m_msg);
  uint8_t tx_power = __nesc_ntoh_uint8(CC2420TransmitP$CC2420PacketBody$getMetadata(CC2420TransmitP$m_msg)->tx_power.data);

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

  {
    uint8_t tmpLen __attribute((unused))  = __nesc_ntoh_leuint8(header->length.data) - 1;

#line 680
    CC2420TransmitP$TXFIFO$write((uint8_t * )header, __nesc_ntoh_leuint8(header->length.data) - 1);
  }
}

# 305 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP$Reg$write(uint8_t addr, uint16_t data)
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

# 241 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static error_t Atm128SpiP$SpiPacket$send(uint8_t *writeBuf, 
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
static error_t Atm128SpiP$sendNextPart(void )
#line 162
{
  uint16_t end;
  uint16_t tmpPos;
  uint16_t myLen;
  uint8_t * tx;
  uint8_t * rx;

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

# 279 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static uint16_t CC2420ControlP$CC2420Config$getShortAddr(void )
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

# 98 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static am_addr_t CC2420ActiveMessageP$AMPacket$source(message_t *amsg)
#line 98
{
  cc2420_header_t *header = CC2420ActiveMessageP$CC2420PacketBody$getHeader(amsg);

#line 100
  return __nesc_ntoh_leuint16(header->src.data);
}

# 368 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static void LinkEstimatorP$updateNeighborEntryIdx(uint8_t idx, uint8_t seq)
#line 368
{
  uint8_t packetGap;

  if (LinkEstimatorP$NeighborTable[idx].flags & INIT_ENTRY) {
      ;
      LinkEstimatorP$NeighborTable[idx].lastseq = seq;
      LinkEstimatorP$NeighborTable[idx].flags &= ~INIT_ENTRY;
    }

  packetGap = seq - LinkEstimatorP$NeighborTable[idx].lastseq;
  ;

  LinkEstimatorP$NeighborTable[idx].lastseq = seq;
  LinkEstimatorP$NeighborTable[idx].rcvcnt++;
  LinkEstimatorP$NeighborTable[idx].inage = LinkEstimatorP$MAX_AGE;
  if (packetGap > 0) {
      LinkEstimatorP$NeighborTable[idx].failcnt += packetGap - 1;
    }
  if (packetGap > LinkEstimatorP$MAX_PKT_GAP) {
      LinkEstimatorP$NeighborTable[idx].failcnt = 0;
      LinkEstimatorP$NeighborTable[idx].rcvcnt = 1;
      LinkEstimatorP$NeighborTable[idx].inquality = 0;
    }

  if (LinkEstimatorP$NeighborTable[idx].rcvcnt >= LinkEstimatorP$BLQ_PKT_WINDOW) {
      LinkEstimatorP$updateNeighborTableEst(LinkEstimatorP$NeighborTable[idx].ll_addr);
    }
}

#line 192
static uint8_t LinkEstimatorP$findEmptyNeighborIdx(void )
#line 192
{
  uint8_t i;

#line 194
  for (i = 0; i < 10; i++) {
      if (LinkEstimatorP$NeighborTable[i].flags & VALID_ENTRY) {
        }
      else 
#line 196
        {
          return i;
        }
    }
  return LinkEstimatorP$INVALID_RVAL;
}

#line 165
static void LinkEstimatorP$initNeighborIdx(uint8_t i, am_addr_t ll_addr)
#line 165
{
  neighbor_table_entry_t *ne;

#line 167
  ne = &LinkEstimatorP$NeighborTable[i];
  ne->ll_addr = ll_addr;
  ne->lastseq = 0;
  ne->rcvcnt = 0;
  ne->failcnt = 0;
  ne->flags = INIT_ENTRY | VALID_ENTRY;
  ne->inage = LinkEstimatorP$MAX_AGE;
  ne->inquality = 0;
  ne->eetx = 0;
}

#line 205
static uint8_t LinkEstimatorP$findWorstNeighborIdx(uint8_t thresholdEETX)
#line 205
{
  uint8_t i;
#line 206
  uint8_t worstNeighborIdx;
  uint16_t worstEETX;
#line 207
  uint16_t thisEETX;

  worstNeighborIdx = LinkEstimatorP$INVALID_RVAL;
  worstEETX = 0;
  for (i = 0; i < 10; i++) {
      if (!(LinkEstimatorP$NeighborTable[i].flags & VALID_ENTRY)) {
          ;
          continue;
        }
      if (!(LinkEstimatorP$NeighborTable[i].flags & MATURE_ENTRY)) {
          ;
          continue;
        }
      if (LinkEstimatorP$NeighborTable[i].flags & PINNED_ENTRY) {
          ;
          continue;
        }
      thisEETX = LinkEstimatorP$NeighborTable[i].eetx;
      if (thisEETX >= worstEETX) {
          worstNeighborIdx = i;
          worstEETX = thisEETX;
        }
    }
  if (worstEETX >= thresholdEETX) {
      return worstNeighborIdx;
    }
  else 
#line 232
    {
      return LinkEstimatorP$INVALID_RVAL;
    }
}

# 513 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static void /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$evicted(am_addr_t neighbor)
#line 513
{
  /*CtpP.Router*/CtpRoutingEngineP$0$routingTableEvict(neighbor);
  ;
  if (/*CtpP.Router*/CtpRoutingEngineP$0$routeInfo.parent == neighbor) {
      routeInfoInit(&/*CtpP.Router*/CtpRoutingEngineP$0$routeInfo);
      /*CtpP.Router*/CtpRoutingEngineP$0$justEvicted = TRUE;
      /*CtpP.Router*/CtpRoutingEngineP$0$updateRouteTask$postTask();
    }
}

# 683 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/4bitle/LinkEstimatorP.nc"
static uint8_t LinkEstimatorP$Packet$payloadLength(message_t *msg)
#line 683
{
  linkest_header_t *hdr;

#line 685
  hdr = LinkEstimatorP$getHeader(msg);
  return LinkEstimatorP$SubPacket$payloadLength(msg)
   - sizeof(linkest_header_t )
   - sizeof(linkest_footer_t ) * (NUM_ENTRIES_FLAG & __nesc_ntoh_uint8(hdr->flags.data));
}

# 794 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static bool /*CtpP.Router*/CtpRoutingEngineP$0$CtpRoutingPacket$getOption(message_t *msg, ctp_options_t opt)
#line 794
{
  return (__nesc_ntoh_uint8(/*CtpP.Router*/CtpRoutingEngineP$0$getHeader(msg)->options.data) & opt) == opt ? TRUE : FALSE;
}

#line 568
static void /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$setNeighborCongested(am_addr_t n, bool congested)
#line 568
{
  uint8_t idx;

#line 570
  if (/*CtpP.Router*/CtpRoutingEngineP$0$ECNOff) {
    return;
    }
#line 572
  idx = /*CtpP.Router*/CtpRoutingEngineP$0$routingTableFind(n);
  if (idx < /*CtpP.Router*/CtpRoutingEngineP$0$routingTableActive) {
      /*CtpP.Router*/CtpRoutingEngineP$0$routingTable[idx].info.congested = congested;
    }
  if (/*CtpP.Router*/CtpRoutingEngineP$0$routeInfo.congested && !congested) {
    /*CtpP.Router*/CtpRoutingEngineP$0$updateRouteTask$postTask();
    }
  else {
#line 578
    if (/*CtpP.Router*/CtpRoutingEngineP$0$routeInfo.parent == n && congested) {
      /*CtpP.Router*/CtpRoutingEngineP$0$updateRouteTask$postTask();
      }
    }
}

#line 171
static void /*CtpP.Router*/CtpRoutingEngineP$0$chooseAdvertiseTime(void )
#line 171
{
  /*CtpP.Router*/CtpRoutingEngineP$0$t = /*CtpP.Router*/CtpRoutingEngineP$0$currentInterval;
  /*CtpP.Router*/CtpRoutingEngineP$0$t /= 2;
  /*CtpP.Router*/CtpRoutingEngineP$0$t += /*CtpP.Router*/CtpRoutingEngineP$0$Random$rand32() % /*CtpP.Router*/CtpRoutingEngineP$0$t;
  /*CtpP.Router*/CtpRoutingEngineP$0$tHasPassed = FALSE;
  /*CtpP.Router*/CtpRoutingEngineP$0$BeaconTimer$stop();
  /*CtpP.Router*/CtpRoutingEngineP$0$BeaconTimer$startOneShot(/*CtpP.Router*/CtpRoutingEngineP$0$t);
}

# 97 "/opt/CVSTinyOS/tinyos-2.x/tos/system/QueueC.nc"
static error_t /*CtpP.SendQueueP*/QueueC$0$Queue$enqueue(/*CtpP.SendQueueP*/QueueC$0$queue_t newVal)
#line 97
{
  if (/*CtpP.SendQueueP*/QueueC$0$Queue$size() < /*CtpP.SendQueueP*/QueueC$0$Queue$maxSize()) {
      ;
      /*CtpP.SendQueueP*/QueueC$0$queue[/*CtpP.SendQueueP*/QueueC$0$tail] = newVal;
      /*CtpP.SendQueueP*/QueueC$0$tail++;
      if (/*CtpP.SendQueueP*/QueueC$0$tail == 13) {
#line 102
        /*CtpP.SendQueueP*/QueueC$0$tail = 0;
        }
#line 103
      /*CtpP.SendQueueP*/QueueC$0$size++;
      /*CtpP.SendQueueP*/QueueC$0$printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

# 888 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$option(message_t *msg, ctp_options_t opt)
#line 888
{
  return (__nesc_ntoh_uint8(/*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(msg)->options.data) & opt) == opt ? TRUE : FALSE;
}

# 403 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static void CC2420ReceiveP$waitForNextPacket(void )
#line 403
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 404
    {
      if (CC2420ReceiveP$m_state == CC2420ReceiveP$S_STOPPED) {
          CC2420ReceiveP$SpiResource$release();
          {
#line 407
            __nesc_atomic_end(__nesc_atomic); 
#line 407
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
#line 435
    __nesc_atomic_end(__nesc_atomic); }
}

#line 357
static void CC2420ReceiveP$beginReceive(void )
#line 357
{
  CC2420ReceiveP$m_state = CC2420ReceiveP$S_RX_LENGTH;
  /* atomic removed: atomic calls only */
  CC2420ReceiveP$receivingPacket = TRUE;
  if (CC2420ReceiveP$SpiResource$isOwner()) {
      CC2420ReceiveP$receive();
    }
  else {
#line 364
    if (CC2420ReceiveP$SpiResource$immediateRequest() == SUCCESS) {
        CC2420ReceiveP$receive();
      }
    else {
        CC2420ReceiveP$SpiResource$request();
      }
    }
}

#line 392
static void CC2420ReceiveP$receive(void )
#line 392
{
  CC2420ReceiveP$CSN$clr();

  CC2420ReceiveP$RXFIFO$beginRead((uint8_t *)CC2420ReceiveP$CC2420PacketBody$getHeader(CC2420ReceiveP$m_p_rx_buf), 1);
}

# 189 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP$Fifo$beginRead(uint8_t addr, uint8_t *data, 
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
static void CC2420SpiP$SpiPacket$sendDone(uint8_t *tx_buf, uint8_t *rx_buf, 
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

# 375 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static void CC2420ReceiveP$flush(void )
#line 375
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

# 122 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static void CC2420PacketP$PacketTimeStamp32khz$clear(message_t *msg)
{
  __nesc_hton_int8(CC2420PacketP$CC2420PacketBody$getMetadata(msg)->timesync.data, FALSE);
  __nesc_hton_uint32(CC2420PacketP$CC2420PacketBody$getMetadata(msg)->timestamp.data, CC2420_INVALID_TIMESTAMP);
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

# 456 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static void CC2420ControlP$writeFsctrl(void )
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







static void CC2420ControlP$writeMdmctrl0(void )
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







static void CC2420ControlP$writeId(void )
#line 492
{
  nxle_uint16_t id[2];

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 495
    {
      __nesc_hton_leuint16(id[0].data, CC2420ControlP$m_pan);
      __nesc_hton_leuint16(id[1].data, CC2420ControlP$m_short_addr);
    }
#line 498
    __nesc_atomic_end(__nesc_atomic); }

  CC2420ControlP$PANID$write(0, (uint8_t *)&id, sizeof id);
}

# 260 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP$Ram$write(uint16_t addr, uint8_t offset, 
uint8_t *data, 
uint8_t len)
#line 262
{

  cc2420_status_t status = 0;
  uint8_t tmpLen = len;
  uint8_t * tmpData = (uint8_t * )data;

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

# 65 "/opt/CVSTinyOS/tinyos-2.x/tos/system/RoundRobinResourceQueueC.nc"
static bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEnqueued(resource_client_id_t id)
#line 65
{
  return /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$resQ[id / 8] & (1 << id % 8);
}

# 82 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
static void AdcP$sample(void )
#line 82
{
  AdcP$Atm128AdcSingle$getData(AdcP$channel(), AdcP$refVoltage(), FALSE, AdcP$prescaler());
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

# 225 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/lpl/DefaultLplP.nc"
static uint16_t DefaultLplP$LowPowerListening$dutyCycleToSleepInterval(
uint16_t dutyCycle)
#line 226
{
  dutyCycle = DefaultLplP$getActualDutyCycle(dutyCycle);

  if (dutyCycle == 10000) {
      return 0;
    }

  return 11 * (10000 - dutyCycle) / dutyCycle;
}

# 212 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(uint32_t nt0, uint32_t ndt)
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
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt(void )
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

# 178 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
__attribute((signal))   void __vector_15(void )
#line 178
{
  HplAtm128Timer0AsyncP$stabiliseTimer0();
  HplAtm128Timer0AsyncP$Compare$fired();
}


__attribute((signal))   void __vector_16(void )
#line 184
{
  HplAtm128Timer0AsyncP$stabiliseTimer0();
  HplAtm128Timer0AsyncP$Timer$overflow();
}

# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/HplAtm128AdcP.nc"
__attribute((signal))   void __vector_21(void )
#line 99
{
  uint16_t data = HplAtm128AdcP$HplAtm128Adc$getValue();

  __nesc_enable_interrupt();
  HplAtm128AdcP$HplAtm128Adc$dataReady(data);
}

# 195 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
__attribute((interrupt))   void __vector_12(void )
#line 195
{
  HplAtm128Timer1P$CompareA$fired();
}

__attribute((interrupt))   void __vector_13(void )
#line 199
{
  HplAtm128Timer1P$CompareB$fired();
}

__attribute((interrupt))   void __vector_24(void )
#line 203
{
  HplAtm128Timer1P$CompareC$fired();
}

__attribute((interrupt))   void __vector_11(void )
#line 207
{
  HplAtm128Timer1P$Capture$captured(HplAtm128Timer1P$Timer$get());
}

# 167 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static uint8_t CC2420PacketP$PacketTimeSyncOffset$get(message_t *msg)
{
  return __nesc_ntoh_leuint8(CC2420PacketP$CC2420PacketBody$getHeader(msg)->length.data)
   + (sizeof(cc2420_header_t ) - MAC_HEADER_SIZE)
   - MAC_FOOTER_SIZE
   - sizeof(timesync_radio_t );
}

# 211 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
__attribute((interrupt))   void __vector_14(void )
#line 211
{
  HplAtm128Timer1P$Timer$overflow();
}

# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSigP.nc"
__attribute((signal))   void __vector_1(void )
#line 46
{
  HplAtm128InterruptSigP$IntSig0$fired();
}


__attribute((signal))   void __vector_2(void )
#line 51
{
  HplAtm128InterruptSigP$IntSig1$fired();
}


__attribute((signal))   void __vector_3(void )
#line 56
{
  HplAtm128InterruptSigP$IntSig2$fired();
}


__attribute((signal))   void __vector_4(void )
#line 61
{
  HplAtm128InterruptSigP$IntSig3$fired();
}


__attribute((signal))   void __vector_5(void )
#line 66
{
  HplAtm128InterruptSigP$IntSig4$fired();
}


__attribute((signal))   void __vector_6(void )
#line 71
{
  HplAtm128InterruptSigP$IntSig5$fired();
}


__attribute((signal))   void __vector_7(void )
#line 76
{
  HplAtm128InterruptSigP$IntSig6$fired();
}


__attribute((signal))   void __vector_8(void )
#line 81
{
  HplAtm128InterruptSigP$IntSig7$fired();
}

# 102 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
__attribute((signal))   void __vector_17(void )
#line 102
{
  HplAtm128SpiP$SPI$dataReady(HplAtm128SpiP$SPI$read());
}

# 171 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
__attribute((signal))   void __vector_18(void )
#line 171
{
  if ((* (volatile uint8_t *)(0x0B + 0x20) & (1 << 7)) != 0) {
      HplAtm128UartP$HplUart0$rxDone(* (volatile uint8_t *)(0x0C + 0x20));
    }
}

# 402 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialP.nc"
static void SerialP$rx_state_machine(bool isDelimeter, uint8_t data)
#line 402
{

  switch (SerialP$rxState) {

      case SerialP$RXSTATE_NOSYNC: 
        if (isDelimeter) {
            SerialP$rxInit();
            SerialP$rxState = SerialP$RXSTATE_PROTO;
          }
      break;

      case SerialP$RXSTATE_PROTO: 
        if (!isDelimeter) {
            SerialP$rxCRC = crcByte(SerialP$rxCRC, data);
            SerialP$rxState = SerialP$RXSTATE_TOKEN;
            SerialP$rxProto = data;
            if (!SerialP$valid_rx_proto(SerialP$rxProto)) {
              goto nosync;
              }
            if (SerialP$rxProto != SERIAL_PROTO_PACKET_ACK) {
                goto nosync;
              }
            if (SerialP$ReceiveBytePacket$startPacket() != SUCCESS) {
                goto nosync;
              }
          }
      break;

      case SerialP$RXSTATE_TOKEN: 
        if (isDelimeter) {
            goto nosync;
          }
        else {
            SerialP$rxSeqno = data;
            SerialP$rxCRC = crcByte(SerialP$rxCRC, SerialP$rxSeqno);
            SerialP$rxState = SerialP$RXSTATE_INFO;
          }
      break;

      case SerialP$RXSTATE_INFO: 
        if (SerialP$rxByteCnt < SerialP$SERIAL_MTU) {
            if (isDelimeter) {
                if (SerialP$rxByteCnt >= 2) {
                    if (SerialP$rx_current_crc() == SerialP$rxCRC) {
                        SerialP$ReceiveBytePacket$endPacket(SUCCESS);
                        SerialP$ack_queue_push(SerialP$rxSeqno);
                        goto nosync;
                      }
                    else {
                        goto nosync;
                      }
                  }
                else {
                    goto nosync;
                  }
              }
            else {
                if (SerialP$rxByteCnt >= 2) {
                    SerialP$ReceiveBytePacket$byteReceived(SerialP$rx_buffer_top());
                    SerialP$rxCRC = crcByte(SerialP$rxCRC, SerialP$rx_buffer_pop());
                  }
                SerialP$rx_buffer_push(data);
                SerialP$rxByteCnt++;
              }
          }
        else 

          {
            goto nosync;
          }
      break;

      default: 
        goto nosync;
    }
  goto done;

  nosync: 

    SerialP$rxInit();
  SerialP$SerialFrameComm$resetReceive();
  SerialP$ReceiveBytePacket$endPacket(FAIL);
  if (SerialP$offPending) {
      SerialP$rxState = SerialP$RXSTATE_INACTIVE;
      SerialP$testOff();
    }
  else {
    if (isDelimeter) {
        SerialP$rxState = SerialP$RXSTATE_PROTO;
      }
    }
  done: ;
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

# 285 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$endPacket(error_t result)
#line 285
{
  uint8_t postsignalreceive = FALSE;

  /* atomic removed: atomic calls only */
#line 287
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskPending && result == SUCCESS) {
        postsignalreceive = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskPending = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvType;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.which;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskBuf = (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveBuffer;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskSize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvIndex;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveBufferSwap();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$RECV_STATE_IDLE;
      }
  }
  if (postsignalreceive) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask$postTask();
    }
}

# 177 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
__attribute((interrupt))   void __vector_20(void )
#line 177
{
  HplAtm128UartP$HplUart0$txDone();
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static error_t HdlcTranslateC$SerialFrameComm$putData(uint8_t data)
#line 92
{
  if (data == HDLC_CTLESC_BYTE || data == HDLC_FLAG_BYTE) {
      HdlcTranslateC$state.sendEscape = 1;
      HdlcTranslateC$txTemp = data ^ 0x20;
      HdlcTranslateC$m_data = HDLC_CTLESC_BYTE;
    }
  else {
      HdlcTranslateC$m_data = data;
    }
  return HdlcTranslateC$UartStream$send(&HdlcTranslateC$m_data, 1);
}

# 265 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
__attribute((signal))   void __vector_30(void )
#line 265
{
  if ((* (volatile uint8_t *)0x9B & (1 << 7)) != 0) {
    HplAtm128UartP$HplUart1$rxDone(* (volatile uint8_t *)0x9C);
    }
}

#line 270
__attribute((interrupt))   void __vector_32(void )
#line 270
{
  HplAtm128UartP$HplUart1$txDone();
}

# 189 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
__attribute((interrupt))   void __vector_26(void )
#line 189
{
  HplAtm128Timer3P$CompareA$fired();
}

__attribute((interrupt))   void __vector_27(void )
#line 193
{
  HplAtm128Timer3P$CompareB$fired();
}

__attribute((interrupt))   void __vector_28(void )
#line 197
{
  HplAtm128Timer3P$CompareC$fired();
}

__attribute((interrupt))   void __vector_25(void )
#line 201
{
  HplAtm128Timer3P$Capture$captured(HplAtm128Timer3P$Timer$get());
}

__attribute((interrupt))   void __vector_29(void )
#line 205
{
  HplAtm128Timer3P$Timer$overflow();
}

