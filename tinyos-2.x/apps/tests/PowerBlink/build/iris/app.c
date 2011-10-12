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
# 264 "/usr/local/lib/ncc/nesc_nx.h"
static __inline uint16_t __nesc_ntoh_uint16(const void *source);




static __inline uint16_t __nesc_hton_uint16(void *target, uint16_t value);
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
# 116 "/usr/lib/gcc/avr/3.4.6/../../../../avr/include/string.h" 3
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
# 105 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/atm128hardware.h"
static __inline void __nesc_enable_interrupt(void)  ;



static __inline void __nesc_disable_interrupt(void)  ;




typedef uint8_t __nesc_atomic_t;
__nesc_atomic_t __nesc_atomic_start(void );
void __nesc_atomic_end(__nesc_atomic_t original_SREG);









#line 125
__inline __nesc_atomic_t 
__nesc_atomic_start(void )   ;









#line 135
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
#line 170
#line 162
typedef struct __nesc_unnamed4247 {

  uint8_t porf : 1;
  uint8_t extrf : 1;
  uint8_t borf : 1;
  uint8_t wdrf : 1;
  uint8_t jtrf : 1;
  uint8_t resv1 : 3;
} Atm128_MCUSR_t;










#line 173
typedef struct __nesc_unnamed4248 {

  uint8_t srw00 : 1;
  uint8_t srw01 : 1;
  uint8_t srw10 : 1;
  uint8_t srw11 : 1;
  uint8_t srl : 3;
  uint8_t sre : 1;
} Atm128_XMCRA_t;







#line 184
typedef struct __nesc_unnamed4249 {

  uint8_t xmm : 3;
  uint8_t resv1 : 4;
  uint8_t xmbk : 1;
} Atm128_XMCRB_t;
# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/adc/Atm128Adc.h"
enum __nesc_unnamed4250 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVCC = 1, 
  ATM128_ADC_VREF_RSVD, 
  ATM128_ADC_VREF_2_56 = 3
};


enum __nesc_unnamed4251 {
  ATM128_ADC_RIGHT_ADJUST = 0, 
  ATM128_ADC_LEFT_ADJUST = 1
};



enum __nesc_unnamed4252 {
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







#line 113
typedef struct __nesc_unnamed4253 {

  uint8_t mux : 5;
  uint8_t adlar : 1;
  uint8_t refs : 2;
} Atm128Admux_t;




enum __nesc_unnamed4254 {
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


enum __nesc_unnamed4255 {
  ATM128_ADC_ENABLE_OFF = 0, 
  ATM128_ADC_ENABLE_ON
};


enum __nesc_unnamed4256 {
  ATM128_ADC_START_CONVERSION_OFF = 0, 
  ATM128_ADC_START_CONVERSION_ON
};


enum __nesc_unnamed4257 {
  ATM128_ADC_FREE_RUNNING_OFF = 0, 
  ATM128_ADC_FREE_RUNNING_ON
};


enum __nesc_unnamed4258 {
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4259 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 169
typedef struct __nesc_unnamed4260 {

  uint8_t adps : 3;
  uint8_t adie : 1;
  uint8_t adif : 1;
  uint8_t adate : 1;
  uint8_t adsc : 1;
  uint8_t aden : 1;
} Atm128Adcsra_t;









#line 180
typedef struct __nesc_unnamed4261 {

  uint8_t adts : 3;
  uint8_t mux5 : 1;
  uint8_t resv1 : 2;
  uint8_t acme : 1;
  uint8_t resv2 : 1;
} Atm128Adcsrb_t;


typedef uint8_t Atm128_ADCH_t;
typedef uint8_t Atm128_ADCL_t;
# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4262 {
#line 29
  int notUsed;
} 
#line 29
TMilli;
typedef struct __nesc_unnamed4263 {
#line 30
  int notUsed;
} 
#line 30
T32khz;
typedef struct __nesc_unnamed4264 {
#line 31
  int notUsed;
} 
#line 31
TMicro;
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/Atm128Timer.h"
enum __nesc_unnamed4265 {
  ATM128_CLK8_OFF = 0x0, 
  ATM128_CLK8_NORMAL = 0x1, 
  ATM128_CLK8_DIVIDE_8 = 0x2, 
  ATM128_CLK8_DIVIDE_32 = 0x3, 
  ATM128_CLK8_DIVIDE_64 = 0x4, 
  ATM128_CLK8_DIVIDE_128 = 0x5, 
  ATM128_CLK8_DIVIDE_256 = 0x6, 
  ATM128_CLK8_DIVIDE_1024 = 0x7
};


enum __nesc_unnamed4266 {
  ATM128_CLK16_OFF = 0x0, 
  ATM128_CLK16_NORMAL = 0x1, 
  ATM128_CLK16_DIVIDE_8 = 0x2, 
  ATM128_CLK16_DIVIDE_64 = 0x3, 
  ATM128_CLK16_DIVIDE_256 = 0x4, 
  ATM128_CLK16_DIVIDE_1024 = 0x5, 
  ATM128_CLK16_EXTERNAL_FALL = 0x6, 
  ATM128_CLK16_EXTERNAL_RISE = 0x7
};


enum __nesc_unnamed4267 {
  AVR_CLOCK_OFF = 0, 
  AVR_CLOCK_ON = 1, 
  AVR_CLOCK_DIVIDE_8 = 2
};

enum __nesc_unnamed4268 {
  ATM128_TIMER_COMPARE_NORMAL = 0, 
  ATM128_TIMER_COMPARE_TOGGLE, 
  ATM128_TIMER_COMPARE_CLEAR, 
  ATM128_TIMER_COMPARE_SET
};



enum __nesc_unnamed4269 {
  ATM128_WAVE8_NORMAL = 0, 
  ATM128_WAVE8_PWM, 
  ATM128_WAVE8_CTC, 
  ATM128_WAVE8_PWM_FAST
};


enum __nesc_unnamed4270 {
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


enum __nesc_unnamed4271 {
  ATM128_COMPARE_OFF = 0, 
  ATM128_COMPARE_TOGGLE, 
  ATM128_COMPARE_CLEAR, 
  ATM128_COMPARE_SET
};
#line 148
#line 136
typedef union __nesc_unnamed4272 {

  uint8_t flat;
  struct __nesc_unnamed4273 {
    uint8_t wgm00 : 1;
    uint8_t wgm01 : 1;
    uint8_t resv1 : 2;
    uint8_t com0b0 : 1;
    uint8_t com0b1 : 1;
    uint8_t com0a0 : 1;
    uint8_t com0a1 : 1;
  } bits;
} Atm128_TCCR0A_t;
#line 163
#line 151
typedef union __nesc_unnamed4274 {

  uint8_t flat;
  struct __nesc_unnamed4275 {
    uint8_t cs00 : 1;
    uint8_t cs01 : 1;
    uint8_t cs02 : 2;
    uint8_t wgm02 : 1;
    uint8_t resv1 : 2;
    uint8_t foc0b : 1;
    uint8_t foc0a : 1;
  } bits;
} Atm128_TCCR0B_t;
#line 175
#line 166
typedef union __nesc_unnamed4276 {

  uint8_t flat;
  struct __nesc_unnamed4277 {
    uint8_t toie0 : 1;
    uint8_t ocie0a : 1;
    uint8_t ocie0e : 1;
    uint8_t resv1 : 5;
  } bits;
} Atm128_TIMSK0_t;
#line 187
#line 178
typedef union __nesc_unnamed4278 {

  uint8_t flat;
  struct __nesc_unnamed4279 {
    uint8_t tov0 : 1;
    uint8_t ocf0a : 1;
    uint8_t ocf0b : 1;
    uint8_t resv1 : 5;
  } bits;
} Atm128_TIFR0_t;
#line 203
#line 190
typedef union __nesc_unnamed4280 {

  uint8_t flat;
  struct __nesc_unnamed4281 {
    uint8_t tcr2bub : 1;
    uint8_t tcr2aub : 1;
    uint8_t ocr2bub : 1;
    uint8_t ocr2aub : 1;
    uint8_t tcn2ub : 1;
    uint8_t as2 : 1;
    uint8_t exclk : 1;
    uint8_t resv1 : 1;
  } bits;
} Atm128_ASSR_t;
#line 216
#line 206
typedef union __nesc_unnamed4282 {

  uint8_t flat;
  struct __nesc_unnamed4283 {
    uint8_t wgm20 : 1;
    uint8_t wgm21 : 1;
    uint8_t resv1 : 2;
    uint8_t comb : 2;
    uint8_t coma : 2;
  } bits;
} Atm128_TCCR2A_t;
#line 229
#line 219
typedef union __nesc_unnamed4284 {

  uint8_t flat;
  struct __nesc_unnamed4285 {
    uint8_t cs : 3;
    uint8_t wgm22 : 1;
    uint8_t resv1 : 2;
    uint8_t foc2b : 1;
    uint8_t foc2a : 1;
  } bits;
} Atm128_TCCR2B_t;
#line 241
#line 232
typedef union __nesc_unnamed4286 {

  uint8_t flat;
  struct __nesc_unnamed4287 {
    uint8_t toie : 1;
    uint8_t ociea : 1;
    uint8_t ocieb : 1;
    uint8_t resv1 : 5;
  } bits;
} Atm128_TIMSK2_t;
#line 253
#line 244
typedef union __nesc_unnamed4288 {

  uint8_t flat;
  struct __nesc_unnamed4289 {
    uint8_t tov : 1;
    uint8_t ocfa : 1;
    uint8_t ocfb : 1;
    uint8_t resv1 : 5;
  } bits;
} Atm128_TIFR2_t;
#line 266
#line 257
typedef union __nesc_unnamed4290 {

  uint8_t flat;
  struct __nesc_unnamed4291 {
    uint8_t wgm01 : 2;
    uint8_t comc : 2;
    uint8_t comb : 2;
    uint8_t coma : 2;
  } bits;
} Atm128_TCCRA_t;
#line 279
#line 269
typedef union __nesc_unnamed4292 {

  uint8_t flat;
  struct __nesc_unnamed4293 {
    uint8_t cs : 3;
    uint8_t wgm23 : 2;
    uint8_t resv1 : 1;
    uint8_t ices : 1;
    uint8_t icnc : 1;
  } bits;
} Atm128_TCCRB_t;
#line 291
#line 282
typedef union __nesc_unnamed4294 {

  uint8_t flat;
  struct __nesc_unnamed4295 {
    uint8_t resv1 : 5;
    uint8_t focc : 1;
    uint8_t focb : 1;
    uint8_t foca : 1;
  } bits;
} Atm128_TCCRC_t;
#line 306
#line 294
typedef union __nesc_unnamed4296 {

  uint8_t flat;
  struct __nesc_unnamed4297 {
    uint8_t toie : 1;
    uint8_t ociea : 1;
    uint8_t ocieb : 1;
    uint8_t ociec : 1;
    uint8_t resv1 : 1;
    uint8_t icie : 1;
    uint8_t resv2 : 2;
  } bits;
} Atm128_TIMSK_t;
#line 321
#line 309
typedef union __nesc_unnamed4298 {

  uint8_t flat;
  struct __nesc_unnamed4299 {
    uint8_t tov : 1;
    uint8_t ocfa : 1;
    uint8_t ocfb : 1;
    uint8_t ocfc : 1;
    uint8_t resv1 : 1;
    uint8_t icf : 1;
    uint8_t resv2 : 2;
  } bits;
} Atm128_TIFR_t;
#line 333
#line 324
typedef union __nesc_unnamed4300 {

  uint8_t flat;
  struct __nesc_unnamed4301 {
    uint8_t psrsync : 1;
    uint8_t psrasy : 1;
    uint8_t resv1 : 5;
    uint8_t tsm : 1;
  } bits;
} Atm128_GTCCR_t;



typedef uint8_t Atm128_TCNT1H_t;
typedef uint8_t Atm128_TCNT1L_t;
typedef uint8_t Atm128_TCNT3H_t;
typedef uint8_t Atm128_TCNT3L_t;
typedef uint8_t Atm128_TCNT4H_t;
typedef uint8_t Atm128_TCNT4L_t;
typedef uint8_t Atm128_TCNT5H_t;
typedef uint8_t Atm128_TCNT5L_t;


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


typedef uint8_t Atm128_OCR4AH_t;
typedef uint8_t Atm128_OCR4AL_t;
typedef uint8_t Atm128_OCR4BH_t;
typedef uint8_t Atm128_OCR4BL_t;
typedef uint8_t Atm128_OCR4CH_t;
typedef uint8_t Atm128_OCR4CL_t;


typedef uint8_t Atm128_OCR5AH_t;
typedef uint8_t Atm128_OCR5AL_t;
typedef uint8_t Atm128_OCR5BH_t;
typedef uint8_t Atm128_OCR5BL_t;
typedef uint8_t Atm128_OCR5CH_t;
typedef uint8_t Atm128_OCR5CL_t;


typedef uint8_t Atm128_ICR1H_t;
typedef uint8_t Atm128_ICR1L_t;
typedef uint8_t Atm128_ICR3H_t;
typedef uint8_t Atm128_ICR3L_t;
typedef uint8_t Atm128_ICR4H_t;
typedef uint8_t Atm128_ICR4L_t;
typedef uint8_t Atm128_ICR5H_t;
typedef uint8_t Atm128_ICR5L_t;
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/MicaTimer.h"
typedef struct __nesc_unnamed4302 {
} 
#line 74
T64khz;
typedef struct __nesc_unnamed4303 {
} 
#line 75
T128khz;
typedef struct __nesc_unnamed4304 {
} 
#line 76
T2mhz;
typedef struct __nesc_unnamed4305 {
} 
#line 77
T4mhz;
#line 147
typedef TMicro TOne;
typedef TMicro TThree;
typedef uint32_t counter_one_overflow_t;
typedef uint16_t counter_three_overflow_t;
enum __nesc_unnamed4306 {
  MICA_PRESCALER_ONE = ATM128_CLK16_DIVIDE_8, 
  MICA_DIVIDE_ONE_FOR_32KHZ_LOG2 = 5, 
  MICA_PRESCALER_THREE = ATM128_CLK16_DIVIDE_8, 
  MICA_DIVIDE_THREE_FOR_MICRO_LOG2 = 0, 
  EXT_STANDBY_T0_THRESHOLD = 12
};





enum __nesc_unnamed4307 {
  PLATFORM_MHZ = 8
};
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/micaz/hardware.h"
enum __nesc_unnamed4308 {
  CHANNEL_THERMISTOR = ATM128_ADC_SNGL_ADC1
};

enum __nesc_unnamed4309 {
  PLATFORM_BAUDRATE = 57600L
};
# 4 "build/iris/StorageVolumes.h"
enum __nesc_unnamed4310 {
  VOLUME_CONFIGTEST, 
  VOLUME_LOGTEST
};
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/types/Leds.h"
enum __nesc_unnamed4311 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/types/Storage.h"
typedef uint8_t volume_id_t;
typedef uint32_t storage_addr_t;
typedef uint32_t storage_len_t;
typedef uint32_t storage_cookie_t;

enum __nesc_unnamed4312 {
  SEEK_BEGINNING = 0
};
# 36 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/mica2/chips/at45db/HplAt45db_chip.h"
enum __nesc_unnamed4313 {
  AT45_MAX_PAGES = 2048, 
  AT45_PAGE_SIZE = 264, 
  AT45_PAGE_SIZE_LOG2 = 8
};

typedef uint16_t at45page_t;
typedef uint16_t at45pageoffset_t;
# 16 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45db.h"
enum __nesc_unnamed4314 {
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
enum __nesc_unnamed4315 {
  AT45_ERASE, 
  AT45_DONT_ERASE, 
  AT45_PREVIOUSLY_ERASED
};
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
# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
enum /*RandRWAppC.ConfigStorageC*/ConfigStorageC$0$__nesc_unnamed4316 {
  ConfigStorageC$0$CONFIG_ID = 0U, ConfigStorageC$0$RESOURCE_ID = 0U
};
typedef TMicro At45dbP$BusyWait$precision_tag;
typedef uint16_t At45dbP$BusyWait$size_type;
typedef TMicro HplAt45dbIOP$BusyWait$precision_tag;
typedef uint16_t HplAt45dbIOP$BusyWait$size_type;
typedef TMicro BusyWaitMicroC$BusyWait$precision_tag;
typedef uint16_t BusyWaitMicroC$BusyWait$size_type;
# 36 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Mount.nc"
static  void RandRWC$ConfigMount$mountDone(error_t arg_0xb7c3ef00);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Boot.nc"
static  void RandRWC$Boot$booted(void);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
static  void RandRWC$ConfigStorage$writeDone(storage_addr_t arg_0xb7c425c0, void *arg_0xb7c42760, storage_len_t arg_0xb7c428f0, 
error_t arg_0xb7c42a88);
#line 133
static  void RandRWC$ConfigStorage$commitDone(error_t arg_0xb7c415f0);
#line 80
static  void RandRWC$ConfigStorage$readDone(storage_addr_t arg_0xb7c43100, void *arg_0xb7c432a0, storage_len_t arg_0xb7c43430, 
error_t arg_0xb7c435c8);
# 85 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45db.nc"
static  void ConfigStorageP$At45db$copyPageDone(error_t arg_0xb7c0f330);
#line 125
static  void ConfigStorageP$At45db$syncDone(error_t arg_0xb7c0c0b0);
#line 143
static  void ConfigStorageP$At45db$flushDone(error_t arg_0xb7c0b010);
#line 69
static  void ConfigStorageP$At45db$writeDone(error_t arg_0xb7c10588);
#line 105
static  void ConfigStorageP$At45db$eraseDone(error_t arg_0xb7c0d188);
#line 183
static  void ConfigStorageP$At45db$computeCrcDone(error_t arg_0xb7c08330, uint16_t arg_0xb7c084c0);
#line 162
static  void ConfigStorageP$At45db$readDone(error_t arg_0xb7c0a168);
# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static  int ConfigStorageP$BConfig$flipped(
# 27 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7c14a20);
# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static  int ConfigStorageP$BConfig$isConfig(
# 27 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7c14a20);
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static  int ConfigStorageP$BConfig$writeHook(
# 27 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7c14a20);
# 25 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Mount.nc"
static  error_t ConfigStorageP$Mount$mount(
# 25 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7c1be18);
# 36 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Mount.nc"
static  void ConfigStorageP$Mount$default$mountDone(
# 25 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7c1be18, 
# 36 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Mount.nc"
error_t arg_0xb7c3ef00);
# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
static  void ConfigStorageP$BlockRead$computeCrcDone(
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7c03b88, 
# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
storage_addr_t arg_0xb7c04cc0, storage_len_t arg_0xb7c04e50, 
uint16_t arg_0xb7c03010, error_t arg_0xb7c03198);
#line 67
static  void ConfigStorageP$BlockRead$readDone(
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7c03b88, 
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
storage_addr_t arg_0xb7c05830, void *arg_0xb7c059d0, storage_len_t arg_0xb7c05b60, 
error_t arg_0xb7c05cf8);
# 112 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
static  void ConfigStorageP$BlockWrite$syncDone(
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7c071f0, 
# 112 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
error_t arg_0xb7bfec30);
#line 71
static  void ConfigStorageP$BlockWrite$writeDone(
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7c071f0, 
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
storage_addr_t arg_0xb7bff338, void *arg_0xb7bff4d8, storage_len_t arg_0xb7bff668, 
error_t arg_0xb7bff800);
#line 91
static  void ConfigStorageP$BlockWrite$eraseDone(
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7c071f0, 
# 91 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
error_t arg_0xb7bfe258);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
static  error_t ConfigStorageP$ConfigStorage$read(
# 26 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7c1a4c0, 
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
storage_addr_t arg_0xb7c45638, void *arg_0xb7c457d8, storage_len_t arg_0xb7c45968);
#line 110
static  void ConfigStorageP$ConfigStorage$default$writeDone(
# 26 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7c1a4c0, 
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
storage_addr_t arg_0xb7c425c0, void *arg_0xb7c42760, storage_len_t arg_0xb7c428f0, 
error_t arg_0xb7c42a88);
#line 124
static  error_t ConfigStorageP$ConfigStorage$commit(
# 26 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7c1a4c0);
# 97 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
static  error_t ConfigStorageP$ConfigStorage$write(
# 26 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7c1a4c0, 
# 97 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
storage_addr_t arg_0xb7c43ba8, void *arg_0xb7c43d48, storage_len_t arg_0xb7c43ed8);
#line 133
static  void ConfigStorageP$ConfigStorage$default$commitDone(
# 26 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7c1a4c0, 
# 133 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
error_t arg_0xb7c415f0);
#line 80
static  void ConfigStorageP$ConfigStorage$default$readDone(
# 26 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7c1a4c0, 
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
storage_addr_t arg_0xb7c43100, void *arg_0xb7c432a0, storage_len_t arg_0xb7c43430, 
error_t arg_0xb7c435c8);
# 85 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45db.nc"
static  void BlockStorageP$At45db$copyPageDone(error_t arg_0xb7c0f330);
#line 125
static  void BlockStorageP$At45db$syncDone(error_t arg_0xb7c0c0b0);
#line 143
static  void BlockStorageP$At45db$flushDone(error_t arg_0xb7c0b010);
#line 69
static  void BlockStorageP$At45db$writeDone(error_t arg_0xb7c10588);
#line 105
static  void BlockStorageP$At45db$eraseDone(error_t arg_0xb7c0d188);
#line 183
static  void BlockStorageP$At45db$computeCrcDone(error_t arg_0xb7c08330, uint16_t arg_0xb7c084c0);
#line 162
static  void BlockStorageP$At45db$readDone(error_t arg_0xb7c0a168);
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
static  error_t BlockStorageP$BlockWrite$write(
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0xb7bb18e8, 
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
storage_addr_t arg_0xb7c00898, void *arg_0xb7c00a38, storage_len_t arg_0xb7c00bc8);
#line 103
static  error_t BlockStorageP$BlockWrite$sync(
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0xb7bb18e8);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
static  error_t BlockStorageP$BlockRead$read(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0xb7bb03e0, 
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
storage_addr_t arg_0xb7c06e38, void *arg_0xb7c05010, storage_len_t arg_0xb7c051a0);
#line 83
static  error_t BlockStorageP$BlockRead$computeCrc(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0xb7bb03e0, 
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
storage_addr_t arg_0xb7c04340, storage_len_t arg_0xb7c044d0, 
uint16_t arg_0xb7c04670);
#line 103
static  storage_len_t BlockStorageP$BlockRead$getSize(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0xb7bb03e0);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static  at45page_t BlockStorageP$BConfig$npages(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0xb7ba8118);
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static  at45page_t BlockStorageP$BConfig$remap(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0xb7ba8118, 
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
at45page_t arg_0xb7c14440);
#line 44
static  void BlockStorageP$BConfig$writeContinue(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0xb7ba8118, 
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
error_t arg_0xb7c15ad8);
# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
static  at45page_t BlockStorageP$At45dbVolume$default$volumeSize(
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0xb7baab68);
# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
static  at45page_t BlockStorageP$At45dbVolume$default$remap(
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0xb7baab68, 
# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
at45page_t arg_0xb7baa280);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t BlockStorageP$Resource$default$release(
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0xb7ba5798);
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t BlockStorageP$Resource$default$request(
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0xb7ba5798);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static  void BlockStorageP$Resource$granted(
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0xb7ba5798);
# 163 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45db.nc"
static  void At45dbP$HplAt45db$crcDone(uint16_t arg_0xb7b4a920);
#line 79
static  void At45dbP$HplAt45db$flushDone(void);
#line 185
static  void At45dbP$HplAt45db$writeDone(void);
#line 35
static  void At45dbP$HplAt45db$waitIdleDone(void);
#line 47
static  void At45dbP$HplAt45db$waitCompareDone(bool arg_0xb7b51b80);
#line 106
static  void At45dbP$HplAt45db$eraseDone(void);
#line 93
static  void At45dbP$HplAt45db$compareDone(void);
#line 61
static  void At45dbP$HplAt45db$fillDone(void);
#line 141
static  void At45dbP$HplAt45db$readDone(void);
# 155 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45db.nc"
static  void At45dbP$At45db$read(at45page_t arg_0xb7c0b558, at45pageoffset_t arg_0xb7c0b6f0, 
void *arg_0xb7c0b8a0, at45pageoffset_t arg_0xb7c0ba38);
#line 80
static  void At45dbP$At45db$copyPage(at45page_t arg_0xb7c10ae8, at45page_t arg_0xb7c10c78);
#line 100
static  void At45dbP$At45db$erase(at45page_t arg_0xb7c0f858, uint8_t arg_0xb7c0f9e8);
#line 120
static  void At45dbP$At45db$syncAll(void);
#line 62
static  void At45dbP$At45db$write(at45page_t arg_0xb7c11a28, at45pageoffset_t arg_0xb7c11bc0, 
void *arg_0xb7c11d70, at45pageoffset_t arg_0xb7c11f08);
#line 176
static  void At45dbP$At45db$computeCrc(at45page_t arg_0xb7c0a6c0, at45pageoffset_t arg_0xb7c0a858, 
at45pageoffset_t arg_0xb7c0aa00, uint16_t arg_0xb7c0ab90);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void At45dbP$taskSuccess$runTask(void);
#line 64
static  void At45dbP$taskFail$runTask(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t At45dbP$Init$init(void);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45db.nc"
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$waitCompare(void);
#line 100
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$erase(uint8_t arg_0xb7b4d3c8, at45page_t arg_0xb7b4d558);
#line 30
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$waitIdle(void);
#line 73
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$flush(uint8_t arg_0xb7b50b78, at45page_t arg_0xb7b50d08);
#line 178
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$write(uint8_t arg_0xb7b4ae10, at45page_t arg_0xb7b48010, at45pageoffset_t arg_0xb7b481a8, 
uint8_t *arg_0xb7b48360, at45pageoffset_t arg_0xb7b484f8);
#line 87
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$compare(uint8_t arg_0xb7b4f898, at45page_t arg_0xb7b4fa28);
#line 157
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$crc(uint8_t arg_0xb7b4bb30, at45page_t arg_0xb7b4bcc0, at45pageoffset_t arg_0xb7b4be58, 
at45pageoffset_t arg_0xb7b4a030, uint16_t arg_0xb7b4a1c0);
#line 119
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$readBuffer(uint8_t arg_0xb7b4ddf8, at45pageoffset_t arg_0xb7b4c010, 
uint8_t *arg_0xb7b4c1c8, uint16_t arg_0xb7b4c358);
#line 55
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$fill(uint8_t arg_0xb7b500f8, at45page_t arg_0xb7b50288);
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45dbByte.nc"
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45dbByte$idle(void);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$Resource$granted(void);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45dbByte.nc"
static  bool HplAt45dbIOP$HplAt45dbByte$getCompareStatus(void);
#line 31
static  void HplAt45dbIOP$HplAt45dbByte$waitIdle(void);
#line 47
static  void HplAt45dbIOP$HplAt45dbByte$select(void);




static  void HplAt45dbIOP$HplAt45dbByte$deselect(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void HplAt45dbIOP$avail$runTask(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t HplAt45dbIOP$Init$init(void);
# 34 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SpiByte.nc"
static   uint8_t HplAt45dbIOP$FlashSpi$write(uint8_t arg_0xb7afaca0);
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void);
static   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$clr(void);




static   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set(void);
static   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$clr(void);




static   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set(void);
static   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$clr(void);




static   void /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP$3$IO$makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP$3$IO$set(void);
static   void /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP$3$IO$clr(void);


static   void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void);
#line 30
static   void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void);


static   void /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP$26$IO$makeInput(void);
#line 32
static   bool /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP$26$IO$get(void);
#line 30
static   void /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP$26$IO$clr(void);




static   void /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP$27$IO$makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP$27$IO$set(void);





static   void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP$29$IO$makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP$29$IO$set(void);
static   void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP$29$IO$clr(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t PlatformP$Init$init(void);
#line 51
static  error_t MotePlatformP$PlatformInit$init(void);
#line 51
static  error_t MeasureClockC$Init$init(void);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/BusyWait.nc"
static   void BusyWaitMicroC$BusyWait$wait(BusyWaitMicroC$BusyWait$size_type arg_0xb7b45c90);
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
#line 56
static   error_t SchedulerBasicP$TaskBasic$postTask(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0xb7c7a1b0);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void SchedulerBasicP$TaskBasic$default$runTask(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0xb7c7a1b0);
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Scheduler.nc"
static  void SchedulerBasicP$Scheduler$init(void);
#line 61
static  void SchedulerBasicP$Scheduler$taskLoop(void);
#line 54
static  bool SchedulerBasicP$Scheduler$runNextTask(void);
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
static   mcu_power_t McuSleepC$McuPowerOverride$default$lowestState(void);
# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuSleep.nc"
static   void McuSleepC$McuSleep$sleep(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$Init$init(void);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static   error_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(resource_client_id_t arg_0xb7999ee8);
#line 43
static   bool /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty(void);








static   bool /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(resource_client_id_t arg_0xb7999500);







static   resource_client_id_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue(void);
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static   void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0xb798b738);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0xb798a910);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0xb798a910);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
static   error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$release(void);
#line 73
static   void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$default$requested(void);
#line 46
static   void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$default$granted(void);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Resource$release(
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0xb798cdd8);
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Resource$request(
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0xb798cdd8);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static  void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Resource$default$granted(
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0xb798cdd8);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$grantedTask$runTask(void);
# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
static  at45page_t At45dbStorageManagerC$At45dbVolume$volumeSize(
# 18 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbStorageManagerC.nc"
volume_id_t arg_0xb79627b0);
# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
static  at45page_t At45dbStorageManagerC$At45dbVolume$remap(
# 18 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbStorageManagerC.nc"
volume_id_t arg_0xb79627b0, 
# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
at45page_t arg_0xb7baa280);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t LedsP$Init$init(void);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Leds.nc"
static   void LedsP$Leds$led1On(void);
#line 45
static   void LedsP$Leds$led0On(void);
#line 78
static   void LedsP$Leds$led2On(void);
# 25 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Mount.nc"
static  error_t RandRWC$ConfigMount$mount(void);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Leds.nc"
static   void RandRWC$Leds$led1On(void);
#line 45
static   void RandRWC$Leds$led0On(void);
#line 78
static   void RandRWC$Leds$led2On(void);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
static  error_t RandRWC$ConfigStorage$read(storage_addr_t arg_0xb7c45638, void *arg_0xb7c457d8, storage_len_t arg_0xb7c45968);
#line 124
static  error_t RandRWC$ConfigStorage$commit(void);
#line 97
static  error_t RandRWC$ConfigStorage$write(storage_addr_t arg_0xb7c43ba8, void *arg_0xb7c43d48, storage_len_t arg_0xb7c43ed8);
# 25 "RandRWC.nc"
enum RandRWC$__nesc_unnamed4317 {
  RandRWC$SIZE = 2048, 
  RandRWC$NWRITES = 100
};

uint8_t RandRWC$count;

static bool RandRWC$scheck(error_t r) __attribute((noinline)) ;







static  void RandRWC$ConfigStorage$readDone(storage_addr_t x, void *buf, storage_len_t rlen, error_t result) __attribute((noinline)) ;
#line 54
static inline  void RandRWC$ConfigStorage$writeDone(storage_addr_t x, void *buf, storage_len_t y, error_t result);




static inline  void RandRWC$ConfigStorage$commitDone(error_t result);



static inline  void RandRWC$Boot$booted(void);




static  void RandRWC$ConfigMount$mountDone(error_t e);
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45db.nc"
static  void ConfigStorageP$At45db$copyPage(at45page_t arg_0xb7c10ae8, at45page_t arg_0xb7c10c78);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static  at45page_t ConfigStorageP$BConfig$npages(
# 27 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7c14a20);
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static  at45page_t ConfigStorageP$BConfig$remap(
# 27 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7c14a20, 
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
at45page_t arg_0xb7c14440);
#line 44
static  void ConfigStorageP$BConfig$writeContinue(
# 27 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7c14a20, 
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
error_t arg_0xb7c15ad8);
# 36 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Mount.nc"
static  void ConfigStorageP$Mount$mountDone(
# 25 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7c1be18, 
# 36 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Mount.nc"
error_t arg_0xb7c3ef00);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
static  error_t ConfigStorageP$BlockRead$read(
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7c03b88, 
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
storage_addr_t arg_0xb7c06e38, void *arg_0xb7c05010, storage_len_t arg_0xb7c051a0);
#line 83
static  error_t ConfigStorageP$BlockRead$computeCrc(
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7c03b88, 
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
storage_addr_t arg_0xb7c04340, storage_len_t arg_0xb7c044d0, 
uint16_t arg_0xb7c04670);
#line 103
static  storage_len_t ConfigStorageP$BlockRead$getSize(
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7c03b88);
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
static  error_t ConfigStorageP$BlockWrite$write(
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7c071f0, 
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
storage_addr_t arg_0xb7c00898, void *arg_0xb7c00a38, storage_len_t arg_0xb7c00bc8);
#line 103
static  error_t ConfigStorageP$BlockWrite$sync(
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7c071f0);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
static  void ConfigStorageP$ConfigStorage$writeDone(
# 26 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7c1a4c0, 
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
storage_addr_t arg_0xb7c425c0, void *arg_0xb7c42760, storage_len_t arg_0xb7c428f0, 
error_t arg_0xb7c42a88);
#line 133
static  void ConfigStorageP$ConfigStorage$commitDone(
# 26 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7c1a4c0, 
# 133 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
error_t arg_0xb7c415f0);
#line 80
static  void ConfigStorageP$ConfigStorage$readDone(
# 26 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7c1a4c0, 
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
storage_addr_t arg_0xb7c43100, void *arg_0xb7c432a0, storage_len_t arg_0xb7c43430, 
error_t arg_0xb7c435c8);
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
enum ConfigStorageP$__nesc_unnamed4318 {
  ConfigStorageP$S_STOPPED, 
  ConfigStorageP$S_MOUNT, 
  ConfigStorageP$S_COMMIT, 
  ConfigStorageP$S_CLEAN, 
  ConfigStorageP$S_DIRTY, 
  ConfigStorageP$S_INVALID
};

enum ConfigStorageP$__nesc_unnamed4319 {
  ConfigStorageP$N = 1U, 
  ConfigStorageP$NO_CLIENT = 0xff
};








#line 72
struct ConfigStorageP$__nesc_unnamed4320 {
  uint8_t state : 3;
  uint8_t committing : 1;
} ConfigStorageP$s[ConfigStorageP$N];



#line 76
nx_struct ConfigStorageP$__nesc_unnamed4321 {
  nx_uint16_t crc;
  nx_uint32_t version;
} __attribute__((packed)) ConfigStorageP$low[ConfigStorageP$N];
#line 79
#line 76
nx_struct ConfigStorageP$__nesc_unnamed4321 


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







static  error_t ConfigStorageP$ConfigStorage$write(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len);









static void ConfigStorageP$copyCopyPageDone(error_t error);
static inline void ConfigStorageP$writeContinue(error_t error);

static inline  int ConfigStorageP$BConfig$writeHook(uint8_t id);
#line 230
static void ConfigStorageP$copyCopyPageDone(error_t error);
#line 253
static inline void ConfigStorageP$writeContinue(error_t error);






static inline void ConfigStorageP$writeWriteDone(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len, error_t error);








static void ConfigStorageP$commitSyncDone(uint8_t id, error_t error);

static inline  error_t ConfigStorageP$ConfigStorage$commit(uint8_t id);
#line 297
static inline void ConfigStorageP$commitCrcDone(uint8_t id, uint16_t crc, error_t error);
#line 314
static inline void ConfigStorageP$commitWriteDone(uint8_t id, error_t error);






static void ConfigStorageP$commitSyncDone(uint8_t id, error_t error);
#line 353
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
static  void BlockStorageP$At45db$read(at45page_t arg_0xb7c0b558, at45pageoffset_t arg_0xb7c0b6f0, 
void *arg_0xb7c0b8a0, at45pageoffset_t arg_0xb7c0ba38);
#line 100
static  void BlockStorageP$At45db$erase(at45page_t arg_0xb7c0f858, uint8_t arg_0xb7c0f9e8);
#line 120
static  void BlockStorageP$At45db$syncAll(void);
#line 62
static  void BlockStorageP$At45db$write(at45page_t arg_0xb7c11a28, at45pageoffset_t arg_0xb7c11bc0, 
void *arg_0xb7c11d70, at45pageoffset_t arg_0xb7c11f08);
#line 176
static  void BlockStorageP$At45db$computeCrc(at45page_t arg_0xb7c0a6c0, at45pageoffset_t arg_0xb7c0a858, 
at45pageoffset_t arg_0xb7c0aa00, uint16_t arg_0xb7c0ab90);
# 112 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
static  void BlockStorageP$BlockWrite$syncDone(
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0xb7bb18e8, 
# 112 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
error_t arg_0xb7bfec30);
#line 71
static  void BlockStorageP$BlockWrite$writeDone(
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0xb7bb18e8, 
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
storage_addr_t arg_0xb7bff338, void *arg_0xb7bff4d8, storage_len_t arg_0xb7bff668, 
error_t arg_0xb7bff800);
#line 91
static  void BlockStorageP$BlockWrite$eraseDone(
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0xb7bb18e8, 
# 91 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
error_t arg_0xb7bfe258);
# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
static  void BlockStorageP$BlockRead$computeCrcDone(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0xb7bb03e0, 
# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
storage_addr_t arg_0xb7c04cc0, storage_len_t arg_0xb7c04e50, 
uint16_t arg_0xb7c03010, error_t arg_0xb7c03198);
#line 67
static  void BlockStorageP$BlockRead$readDone(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0xb7bb03e0, 
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
storage_addr_t arg_0xb7c05830, void *arg_0xb7c059d0, storage_len_t arg_0xb7c05b60, 
error_t arg_0xb7c05cf8);
# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static  int BlockStorageP$BConfig$flipped(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0xb7ba8118);
# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static  int BlockStorageP$BConfig$isConfig(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0xb7ba8118);
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static  int BlockStorageP$BConfig$writeHook(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0xb7ba8118);
# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
static  at45page_t BlockStorageP$At45dbVolume$volumeSize(
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0xb7baab68);
# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
static  at45page_t BlockStorageP$At45dbVolume$remap(
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0xb7baab68, 
# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
at45page_t arg_0xb7baa280);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t BlockStorageP$Resource$release(
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0xb7ba5798);
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t BlockStorageP$Resource$request(
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0xb7ba5798);
#line 76
enum BlockStorageP$__nesc_unnamed4322 {
  BlockStorageP$R_IDLE, 
  BlockStorageP$R_WRITE, 
  BlockStorageP$R_ERASE, 
  BlockStorageP$R_SYNC, 
  BlockStorageP$R_READ, 
  BlockStorageP$R_CRC
};

enum BlockStorageP$__nesc_unnamed4323 {
  BlockStorageP$N = 0U + 1U, 
  BlockStorageP$NO_CLIENT = 0xff
};

uint8_t BlockStorageP$client = BlockStorageP$NO_CLIENT;
storage_addr_t BlockStorageP$currentOffset;







#line 93
struct BlockStorageP$__nesc_unnamed4324 {

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
static  void At45dbP$HplAt45db$fill(uint8_t arg_0xb7b500f8, at45page_t arg_0xb7b50288);
#line 41
static  void At45dbP$HplAt45db$waitCompare(void);
#line 100
static  void At45dbP$HplAt45db$erase(uint8_t arg_0xb7b4d3c8, at45page_t arg_0xb7b4d558);
#line 30
static  void At45dbP$HplAt45db$waitIdle(void);
#line 73
static  void At45dbP$HplAt45db$flush(uint8_t arg_0xb7b50b78, at45page_t arg_0xb7b50d08);
#line 178
static  void At45dbP$HplAt45db$write(uint8_t arg_0xb7b4ae10, at45page_t arg_0xb7b48010, at45pageoffset_t arg_0xb7b481a8, 
uint8_t *arg_0xb7b48360, at45pageoffset_t arg_0xb7b484f8);
#line 87
static  void At45dbP$HplAt45db$compare(uint8_t arg_0xb7b4f898, at45page_t arg_0xb7b4fa28);
#line 157
static  void At45dbP$HplAt45db$crc(uint8_t arg_0xb7b4bb30, at45page_t arg_0xb7b4bcc0, at45pageoffset_t arg_0xb7b4be58, 
at45pageoffset_t arg_0xb7b4a030, uint16_t arg_0xb7b4a1c0);
#line 119
static  void At45dbP$HplAt45db$readBuffer(uint8_t arg_0xb7b4ddf8, at45pageoffset_t arg_0xb7b4c010, 
uint8_t *arg_0xb7b4c1c8, uint16_t arg_0xb7b4c358);
# 85 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45db.nc"
static  void At45dbP$At45db$copyPageDone(error_t arg_0xb7c0f330);
#line 125
static  void At45dbP$At45db$syncDone(error_t arg_0xb7c0c0b0);
#line 143
static  void At45dbP$At45db$flushDone(error_t arg_0xb7c0b010);
#line 69
static  void At45dbP$At45db$writeDone(error_t arg_0xb7c10588);
#line 105
static  void At45dbP$At45db$eraseDone(error_t arg_0xb7c0d188);
#line 183
static  void At45dbP$At45db$computeCrcDone(error_t arg_0xb7c08330, uint16_t arg_0xb7c084c0);
#line 162
static  void At45dbP$At45db$readDone(error_t arg_0xb7c0a168);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/BusyWait.nc"
static   void At45dbP$BusyWait$wait(At45dbP$BusyWait$size_type arg_0xb7b45c90);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t At45dbP$taskSuccess$postTask(void);
#line 56
static   error_t At45dbP$taskFail$postTask(void);
# 134 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbP.nc"
enum At45dbP$__nesc_unnamed4325 {
#line 134
  At45dbP$taskSuccess = 0U
};
#line 134
typedef int At45dbP$__nesc_sillytask_taskSuccess[At45dbP$taskSuccess];


enum At45dbP$__nesc_unnamed4326 {
#line 137
  At45dbP$taskFail = 1U
};
#line 137
typedef int At45dbP$__nesc_sillytask_taskFail[At45dbP$taskFail];
#line 69
enum At45dbP$__nesc_unnamed4327 {
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

enum At45dbP$__nesc_unnamed4328 {
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
struct At45dbP$__nesc_unnamed4329 {
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
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$crcDone(uint16_t arg_0xb7b4a920);
#line 79
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$flushDone(void);
#line 185
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$writeDone(void);
#line 35
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$waitIdleDone(void);
#line 47
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$waitCompareDone(bool arg_0xb7b51b80);
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
static   uint8_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$FlashSpi$write(uint8_t arg_0xb7afaca0);
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45dbByteC.nc"
enum /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$__nesc_unnamed4330 {
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
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/BusyWait.nc"
static   void HplAt45dbIOP$BusyWait$wait(HplAt45dbIOP$BusyWait$size_type arg_0xb7b45c90);
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
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t HplAt45dbIOP$avail$postTask(void);
# 141 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/at45db/HplAt45dbIOP.nc"
enum HplAt45dbIOP$__nesc_unnamed4331 {
#line 141
  HplAt45dbIOP$avail = 2U
};
#line 141
typedef int HplAt45dbIOP$__nesc_sillytask_avail[HplAt45dbIOP$avail];
#line 86
static inline  error_t HplAt45dbIOP$Init$init(void);
#line 98
static inline  void HplAt45dbIOP$HplAt45dbByte$select(void);




static inline  void HplAt45dbIOP$HplAt45dbByte$deselect(void);
#line 120
static   uint8_t HplAt45dbIOP$FlashSpi$write(uint8_t spiOut);
#line 141
static inline  void HplAt45dbIOP$avail$runTask(void);



static inline  void HplAt45dbIOP$HplAt45dbByte$waitIdle(void);
#line 161
static inline  bool HplAt45dbIOP$HplAt45dbByte$getCompareStatus(void);
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void);
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$clr(void);




static __inline   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput(void);
#line 46
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set(void);
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$clr(void);




static __inline   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput(void);
#line 46
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set(void);
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$clr(void);




static __inline   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput(void);
#line 46
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP$3$IO$set(void);
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP$3$IO$clr(void);




static __inline   void /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP$3$IO$makeOutput(void);
#line 47
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void);


static __inline   void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void);
#line 45
static __inline   bool /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP$26$IO$get(void);

static __inline   void /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP$26$IO$clr(void);


static __inline   void /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP$26$IO$makeInput(void);
#line 46
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP$27$IO$set(void);





static __inline   void /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP$27$IO$makeOutput(void);
#line 46
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP$29$IO$set(void);
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP$29$IO$clr(void);




static __inline   void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP$29$IO$makeOutput(void);
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
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/MeasureClockC.nc"
enum MeasureClockC$__nesc_unnamed4332 {


  MeasureClockC$MAGIC = 488 / (16 / PLATFORM_MHZ)
};

uint16_t MeasureClockC$cycles;

static inline  error_t MeasureClockC$Init$init(void);
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
enum /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$__nesc_unnamed4333 {
#line 25
  NoArbiterC$0$granted = 3U
};
#line 25
typedef int /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$__nesc_sillytask_granted[/*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$granted];
#line 25
static inline  void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$granted$runTask(void);




static inline   error_t /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$Resource$request(void);









static inline   error_t /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$Resource$release(void);








static inline    void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$ResourceConfigure$default$configure(void);
static inline    void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$ResourceConfigure$default$unconfigure(void);
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
uint8_t arg_0xb7c7a1b0);
# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuSleep.nc"
static   void SchedulerBasicP$McuSleep$sleep(void);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP$__nesc_unnamed4334 {

  SchedulerBasicP$NUM_TASKS = 5U, 
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
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/McuSleepC.nc"
const_uint8_t McuSleepC$atm128PowerBits[ATM128_POWER_DOWN + 1] = { 
0, 
1 << 1, ((
1 << 3) | (1 << 2)) | (1 << 1), (
1 << 2) | (1 << 1), (
1 << 3) | (1 << 2), 
1 << 2 };

static inline mcu_power_t McuSleepC$getPowerState(void);
#line 128
static inline   void McuSleepC$McuSleep$sleep(void);
#line 144
static inline    mcu_power_t McuSleepC$McuPowerOverride$default$lowestState(void);
# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
enum /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$__nesc_unnamed4335 {
#line 39
  FcfsResourceQueueC$0$NO_ENTRY = 0xFF
};
uint8_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ[1U];
uint8_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;
uint8_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$qTail = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;

static inline  error_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$Init$init(void);




static inline   bool /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty(void);



static inline   bool /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(resource_client_id_t id);



static inline   resource_client_id_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue(void);
#line 72
static inline   error_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(resource_client_id_t id);
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static   void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceRequested$requested(
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0xb798b738);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$unconfigure(
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0xb798a910);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$configure(
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0xb798a910);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static   error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Queue$enqueue(resource_client_id_t arg_0xb7999ee8);
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
uint8_t arg_0xb798cdd8);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$grantedTask$postTask(void);
# 75 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
enum /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$__nesc_unnamed4336 {
#line 75
  ArbiterP$0$grantedTask = 4U
};
#line 75
typedef int /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$__nesc_sillytask_grantedTask[/*At45dbC.Arbiter.Arbiter*/ArbiterP$0$grantedTask];
#line 67
enum /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$__nesc_unnamed4337 {
#line 67
  ArbiterP$0$RES_CONTROLLED, ArbiterP$0$RES_GRANTING, ArbiterP$0$RES_IMM_GRANTING, ArbiterP$0$RES_BUSY
};
#line 68
enum /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$__nesc_unnamed4338 {
#line 68
  ArbiterP$0$default_owner_id = 1U
};
#line 69
enum /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$__nesc_unnamed4339 {
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
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void LedsP$Led0$makeOutput(void);
#line 29
static   void LedsP$Led0$set(void);
static   void LedsP$Led0$clr(void);




static   void LedsP$Led1$makeOutput(void);
#line 29
static   void LedsP$Led1$set(void);
static   void LedsP$Led1$clr(void);




static   void LedsP$Led2$makeOutput(void);
#line 29
static   void LedsP$Led2$set(void);
static   void LedsP$Led2$clr(void);
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/LedsP.nc"
static inline  error_t LedsP$Init$init(void);
#line 63
static inline   void LedsP$Leds$led0On(void);
#line 78
static inline   void LedsP$Leds$led1On(void);
#line 93
static inline   void LedsP$Leds$led2On(void);
# 109 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/atm128hardware.h"
static  __inline void __nesc_disable_interrupt(void)
#line 109
{
   __asm volatile ("cli");}

#line 126
  
#line 125
__inline __nesc_atomic_t 
__nesc_atomic_start(void )
{
  __nesc_atomic_t result = * (volatile uint8_t *)(0x3F + 0x20);

#line 129
  __nesc_disable_interrupt();
   __asm volatile ("" :  :  : "memory");
  return result;
}



  
#line 135
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
    * (volatile uint8_t *)(0X35 + 0x20) = 1 << 0;
  }
}

# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP$26$IO$makeInput(void)
#line 50
{
#line 50
  * (volatile uint8_t *)42U &= ~(1 << 2);
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
  * (volatile uint8_t *)43U &= ~(1 << 2);
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
  * (volatile uint8_t *)42U |= 1 << 3;
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
  * (volatile uint8_t *)43U |= 1 << 3;
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
  * (volatile uint8_t *)42U |= 1 << 5;
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
  * (volatile uint8_t *)43U &= ~(1 << 5);
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
  * (volatile uint8_t *)34U |= 1 << 3;
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
  * (volatile uint8_t *)33U |= 1 << 3;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplAt45dbIOP$Select$makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP$3$IO$makeOutput();
#line 35
}
#line 35
# 86 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/at45db/HplAt45dbIOP.nc"
static inline  error_t HplAt45dbIOP$Init$init(void)
#line 86
{
  HplAt45dbIOP$Select$makeOutput();
  HplAt45dbIOP$Select$set();
  HplAt45dbIOP$Clk$clr();
  HplAt45dbIOP$Clk$makeOutput();
  HplAt45dbIOP$Out$set();
  HplAt45dbIOP$Out$makeOutput();
  HplAt45dbIOP$In$clr();
  HplAt45dbIOP$In$makeInput();
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
  * (volatile uint8_t *)34U &= ~(1 << 4);
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
  * (volatile uint8_t *)33U &= ~(1 << 4);
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

  * (volatile uint8_t *)(0x08 + 0x20) = 0;
  * (volatile uint8_t *)(0x07 + 0x20) = 0xff;


  MotePlatformP$SerialIdPin$makeInput();
  MotePlatformP$SerialIdPin$clr();

  return MotePlatformP$SubInit$init();
}

# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void)
#line 46
{
#line 46
  * (volatile uint8_t *)34U |= 1 << 0;
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
  * (volatile uint8_t *)34U |= 1 << 1;
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
  * (volatile uint8_t *)34U |= 1 << 2;
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
  * (volatile uint8_t *)33U |= 1 << 0;
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
  * (volatile uint8_t *)33U |= 1 << 1;
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
  * (volatile uint8_t *)33U |= 1 << 2;
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
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/MeasureClockC.nc"
static inline  error_t MeasureClockC$Init$init(void)
#line 64
{
  /* atomic removed: atomic calls only */



  {
    uint8_t now;
#line 70
    uint8_t wraps;
    uint16_t start;


    * (volatile uint8_t *)0x81 = 1 << 0;
    * (volatile uint8_t *)0xB6 = 1 << 5;
    * (volatile uint8_t *)0xB1 = (1 << 1) | (1 << 0);




    start = * (volatile uint16_t *)0x84;
    for (wraps = MeasureClockC$MAGIC / 2; wraps; ) 
      {
        uint16_t next = * (volatile uint16_t *)0x84;

        if (next < start) {
          wraps--;
          }
#line 88
        start = next;
      }


    now = * (volatile uint8_t *)0xB2;
    while (* (volatile uint8_t *)0xB2 == now) ;


    start = * (volatile uint16_t *)0x84;
    now = * (volatile uint8_t *)0xB2;
    while (* (volatile uint8_t *)0xB2 == now) ;
    MeasureClockC$cycles = * (volatile uint16_t *)0x84;

    MeasureClockC$cycles = (MeasureClockC$cycles - start + 16) >> 5;


    * (volatile uint8_t *)0xB6 = * (volatile uint8_t *)0x81 = * (volatile uint8_t *)0xB1 = 0;
    * (volatile uint8_t *)0xB2 = 0;
    * (volatile uint16_t *)0x84 = 0;
    * (volatile uint8_t *)(0x16 + 0x20) = * (volatile uint8_t *)(0x17 + 0x20) = 0xff;
    while (* (volatile uint8_t *)0xB6 & (((1 << 4) | (1 << 2)) | (1 << 0))) 
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
# 11 "build/iris/StorageVolumes.h"
      case VOLUME_CONFIGTEST: return 18;
      case VOLUME_LOGTEST: return 1024;
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
inline static  at45page_t BlockStorageP$At45dbVolume$volumeSize(uint8_t arg_0xb7baab68){
#line 30
  unsigned short result;
#line 30

#line 30
  switch (arg_0xb7baab68) {
#line 30
    case /*RandRWAppC.ConfigStorageC*/ConfigStorageC$0$CONFIG_ID:
#line 30
      result = At45dbStorageManagerC$At45dbVolume$volumeSize(0);
#line 30
      break;
#line 30
    default:
#line 30
      result = BlockStorageP$At45dbVolume$default$volumeSize(arg_0xb7baab68);
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
inline static  at45page_t ConfigStorageP$BConfig$npages(uint8_t arg_0xb7c14a20){
#line 50
  unsigned short result;
#line 50

#line 50
  result = BlockStorageP$BConfig$npages(arg_0xb7c14a20);
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
inline static  int BlockStorageP$BConfig$writeHook(uint8_t arg_0xb7ba8118){
#line 37
  int result;
#line 37

#line 37
  result = ConfigStorageP$BConfig$writeHook(arg_0xb7ba8118);
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
inline static  void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Resource$granted(uint8_t arg_0xb798cdd8){
#line 92
  switch (arg_0xb798cdd8) {
#line 92
    case /*RandRWAppC.ConfigStorageC*/ConfigStorageC$0$RESOURCE_ID:
#line 92
      BlockStorageP$Resource$granted(/*RandRWAppC.ConfigStorageC*/ConfigStorageC$0$CONFIG_ID);
#line 92
      break;
#line 92
    default:
#line 92
      /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Resource$default$granted(arg_0xb798cdd8);
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
inline static   void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$configure(uint8_t arg_0xb798a910){
#line 49
    /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(arg_0xb798a910);
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
inline static  void ConfigStorageP$BConfig$writeContinue(uint8_t arg_0xb7c14a20, error_t arg_0xb7c15ad8){
#line 44
  BlockStorageP$BConfig$writeContinue(arg_0xb7c14a20, arg_0xb7c15ad8);
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
inline static  void BlockStorageP$At45db$erase(at45page_t arg_0xb7c0f858, uint8_t arg_0xb7c0f9e8){
#line 100
  At45dbP$At45db$erase(arg_0xb7c0f858, arg_0xb7c0f9e8);
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
inline static  void At45dbP$HplAt45db$erase(uint8_t arg_0xb7b4d3c8, at45page_t arg_0xb7b4d558){
#line 100
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$erase(arg_0xb7b4d3c8, arg_0xb7b4d558);
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
inline static  void At45dbP$At45db$readDone(error_t arg_0xb7c0a168){
#line 162
  BlockStorageP$At45db$readDone(arg_0xb7c0a168);
#line 162
  ConfigStorageP$At45db$readDone(arg_0xb7c0a168);
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
inline static   void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$unconfigure(uint8_t arg_0xb798a910){
#line 55
    /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(arg_0xb798a910);
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
static inline   resource_client_id_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue(void)
#line 58
{
  /* atomic removed: atomic calls only */
#line 59
  {
    if (/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead != /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY) {
        uint8_t id = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead;

#line 62
        /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ[/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead];
        if (/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead == /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY) {
          /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$qTail = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;
          }
#line 65
        /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ[id] = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;
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
      /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;

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
  result = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue();
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline   bool /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty(void)
#line 50
{
  return /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead == /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;
}

# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static   bool /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Queue$isEmpty(void){
#line 43
  unsigned char result;
#line 43

#line 43
  result = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty();
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
inline static   error_t BlockStorageP$Resource$release(uint8_t arg_0xb7ba5798){
#line 110
  unsigned char result;
#line 110

#line 110
  switch (arg_0xb7ba5798) {
#line 110
    case /*RandRWAppC.ConfigStorageC*/ConfigStorageC$0$CONFIG_ID:
#line 110
      result = /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Resource$release(/*RandRWAppC.ConfigStorageC*/ConfigStorageC$0$RESOURCE_ID);
#line 110
      break;
#line 110
    default:
#line 110
      result = BlockStorageP$Resource$default$release(arg_0xb7ba5798);
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
inline static  void ConfigStorageP$ConfigStorage$readDone(uint8_t arg_0xb7c1a4c0, storage_addr_t arg_0xb7c43100, void *arg_0xb7c432a0, storage_len_t arg_0xb7c43430, error_t arg_0xb7c435c8){
#line 80
  switch (arg_0xb7c1a4c0) {
#line 80
    case /*RandRWAppC.ConfigStorageC*/ConfigStorageC$0$CONFIG_ID:
#line 80
      RandRWC$ConfigStorage$readDone(arg_0xb7c43100, arg_0xb7c432a0, arg_0xb7c43430, arg_0xb7c435c8);
#line 80
      break;
#line 80
    default:
#line 80
      ConfigStorageP$ConfigStorage$default$readDone(arg_0xb7c1a4c0, arg_0xb7c43100, arg_0xb7c432a0, arg_0xb7c43430, arg_0xb7c435c8);
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
inline static  error_t ConfigStorageP$BlockRead$read(uint8_t arg_0xb7c03b88, storage_addr_t arg_0xb7c06e38, void *arg_0xb7c05010, storage_len_t arg_0xb7c051a0){
#line 56
  unsigned char result;
#line 56

#line 56
  result = BlockStorageP$BlockRead$read(arg_0xb7c03b88, arg_0xb7c06e38, arg_0xb7c05010, arg_0xb7c051a0);
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
inline static  void ConfigStorageP$Mount$mountDone(uint8_t arg_0xb7c1be18, error_t arg_0xb7c3ef00){
#line 36
  switch (arg_0xb7c1be18) {
#line 36
    case /*RandRWAppC.ConfigStorageC*/ConfigStorageC$0$CONFIG_ID:
#line 36
      RandRWC$ConfigMount$mountDone(arg_0xb7c3ef00);
#line 36
      break;
#line 36
    default:
#line 36
      ConfigStorageP$Mount$default$mountDone(arg_0xb7c1be18, arg_0xb7c3ef00);
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
inline static  void BlockStorageP$BlockRead$readDone(uint8_t arg_0xb7bb03e0, storage_addr_t arg_0xb7c05830, void *arg_0xb7c059d0, storage_len_t arg_0xb7c05b60, error_t arg_0xb7c05cf8){
#line 67
  ConfigStorageP$BlockRead$readDone(arg_0xb7bb03e0, arg_0xb7c05830, arg_0xb7c059d0, arg_0xb7c05b60, arg_0xb7c05cf8);
#line 67
}
#line 67
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
inline static  error_t RandRWC$ConfigStorage$read(storage_addr_t arg_0xb7c45638, void *arg_0xb7c457d8, storage_len_t arg_0xb7c45968){
#line 69
  unsigned char result;
#line 69

#line 69
  result = ConfigStorageP$ConfigStorage$read(/*RandRWAppC.ConfigStorageC*/ConfigStorageC$0$CONFIG_ID, arg_0xb7c45638, arg_0xb7c457d8, arg_0xb7c45968);
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
inline static  int BlockStorageP$BConfig$isConfig(uint8_t arg_0xb7ba8118){
#line 24
  int result;
#line 24

#line 24
  result = ConfigStorageP$BConfig$isConfig(arg_0xb7ba8118);
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
static inline   bool /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(resource_client_id_t id)
#line 54
{
  return /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ[id] != /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY || /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$qTail == id;
}

#line 72
static inline   error_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(resource_client_id_t id)
#line 72
{
  /* atomic removed: atomic calls only */
#line 73
  {
    if (!/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(id)) {
        if (/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead == /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY) {
          /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead = id;
          }
        else {
#line 78
          /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ[/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$qTail] = id;
          }
#line 79
        /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$qTail = id;
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
inline static   error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Queue$enqueue(resource_client_id_t arg_0xb7999ee8){
#line 69
  unsigned char result;
#line 69

#line 69
  result = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(arg_0xb7999ee8);
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
inline static   void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceRequested$requested(uint8_t arg_0xb798b738){
#line 43
    /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(arg_0xb798b738);
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
inline static   error_t BlockStorageP$Resource$request(uint8_t arg_0xb7ba5798){
#line 78
  unsigned char result;
#line 78

#line 78
  switch (arg_0xb7ba5798) {
#line 78
    case /*RandRWAppC.ConfigStorageC*/ConfigStorageC$0$CONFIG_ID:
#line 78
      result = /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Resource$request(/*RandRWAppC.ConfigStorageC*/ConfigStorageC$0$RESOURCE_ID);
#line 78
      break;
#line 78
    default:
#line 78
      result = BlockStorageP$Resource$default$request(arg_0xb7ba5798);
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
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$clr(void)
#line 47
{
#line 47
  * (volatile uint8_t *)34U &= ~(1 << 0);
}

# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led2$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$clr();
#line 30
}
#line 30
# 93 "/opt/CVSTinyOS/tinyos-2.x/tos/system/LedsP.nc"
static inline   void LedsP$Leds$led2On(void)
#line 93
{
  LedsP$Led2$clr();
  ;
#line 95
  ;
}

# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Leds.nc"
inline static   void RandRWC$Leds$led2On(void){
#line 78
  LedsP$Leds$led2On();
#line 78
}
#line 78
# 97 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
inline static  error_t RandRWC$ConfigStorage$write(storage_addr_t arg_0xb7c43ba8, void *arg_0xb7c43d48, storage_len_t arg_0xb7c43ed8){
#line 97
  unsigned char result;
#line 97

#line 97
  result = ConfigStorageP$ConfigStorage$write(/*RandRWAppC.ConfigStorageC*/ConfigStorageC$0$CONFIG_ID, arg_0xb7c43ba8, arg_0xb7c43d48, arg_0xb7c43ed8);
#line 97

#line 97
  return result;
#line 97
}
#line 97
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

# 103 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
inline static  storage_len_t ConfigStorageP$BlockRead$getSize(uint8_t arg_0xb7c03b88){
#line 103
  unsigned long result;
#line 103

#line 103
  result = BlockStorageP$BlockRead$getSize(arg_0xb7c03b88);
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

# 333 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline  error_t BlockStorageP$BlockRead$computeCrc(uint8_t id, storage_addr_t addr, storage_len_t len, uint16_t basecrc)
#line 333
{
  return BlockStorageP$newRequest(BlockStorageP$R_CRC, id, addr, (void *)basecrc, len);
}

# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
inline static  error_t ConfigStorageP$BlockRead$computeCrc(uint8_t arg_0xb7c03b88, storage_addr_t arg_0xb7c04340, storage_len_t arg_0xb7c044d0, uint16_t arg_0xb7c04670){
#line 83
  unsigned char result;
#line 83

#line 83
  result = BlockStorageP$BlockRead$computeCrc(arg_0xb7c03b88, arg_0xb7c04340, arg_0xb7c044d0, arg_0xb7c04670);
#line 83

#line 83
  return result;
#line 83
}
#line 83
# 271 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
static inline  error_t ConfigStorageP$ConfigStorage$commit(uint8_t id)
#line 271
{
  unsigned long __nesc_temp43;
  unsigned char *__nesc_temp42;
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
  (__nesc_temp42 = (unsigned char *)&ConfigStorageP$low[id].version, __nesc_hton_uint32(__nesc_temp42, (__nesc_temp43 = __nesc_ntoh_uint32(__nesc_temp42)) + 1), __nesc_temp43);
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

# 124 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
inline static  error_t RandRWC$ConfigStorage$commit(void){
#line 124
  unsigned char result;
#line 124

#line 124
  result = ConfigStorageP$ConfigStorage$commit(/*RandRWAppC.ConfigStorageC*/ConfigStorageC$0$CONFIG_ID);
#line 124

#line 124
  return result;
#line 124
}
#line 124
# 54 "RandRWC.nc"
static inline  void RandRWC$ConfigStorage$writeDone(storage_addr_t x, void *buf, storage_len_t y, error_t result)
#line 54
{
  if (RandRWC$scheck(result)) {
    RandRWC$scheck(RandRWC$ConfigStorage$commit());
    }
}

# 405 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
static inline   void ConfigStorageP$ConfigStorage$default$writeDone(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len, error_t error)
#line 405
{
}

# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
inline static  void ConfigStorageP$ConfigStorage$writeDone(uint8_t arg_0xb7c1a4c0, storage_addr_t arg_0xb7c425c0, void *arg_0xb7c42760, storage_len_t arg_0xb7c428f0, error_t arg_0xb7c42a88){
#line 110
  switch (arg_0xb7c1a4c0) {
#line 110
    case /*RandRWAppC.ConfigStorageC*/ConfigStorageC$0$CONFIG_ID:
#line 110
      RandRWC$ConfigStorage$writeDone(arg_0xb7c425c0, arg_0xb7c42760, arg_0xb7c428f0, arg_0xb7c42a88);
#line 110
      break;
#line 110
    default:
#line 110
      ConfigStorageP$ConfigStorage$default$writeDone(arg_0xb7c1a4c0, arg_0xb7c425c0, arg_0xb7c42760, arg_0xb7c428f0, arg_0xb7c42a88);
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
inline static  error_t ConfigStorageP$BlockWrite$sync(uint8_t arg_0xb7c071f0){
#line 103
  unsigned char result;
#line 103

#line 103
  result = BlockStorageP$BlockWrite$sync(arg_0xb7c071f0);
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
inline static  void BlockStorageP$BlockWrite$writeDone(uint8_t arg_0xb7bb18e8, storage_addr_t arg_0xb7bff338, void *arg_0xb7bff4d8, storage_len_t arg_0xb7bff668, error_t arg_0xb7bff800){
#line 71
  ConfigStorageP$BlockWrite$writeDone(arg_0xb7bb18e8, arg_0xb7bff338, arg_0xb7bff4d8, arg_0xb7bff668, arg_0xb7bff800);
#line 71
}
#line 71
# 395 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
static inline  void ConfigStorageP$BlockWrite$eraseDone(uint8_t id, error_t error)
#line 395
{
}

# 91 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
inline static  void BlockStorageP$BlockWrite$eraseDone(uint8_t arg_0xb7bb18e8, error_t arg_0xb7bfe258){
#line 91
  ConfigStorageP$BlockWrite$eraseDone(arg_0xb7bb18e8, arg_0xb7bfe258);
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
inline static  error_t ConfigStorageP$BlockWrite$write(uint8_t arg_0xb7c071f0, storage_addr_t arg_0xb7c00898, void *arg_0xb7c00a38, storage_len_t arg_0xb7c00bc8){
#line 58
  unsigned char result;
#line 58

#line 58
  result = BlockStorageP$BlockWrite$write(arg_0xb7c071f0, arg_0xb7c00898, arg_0xb7c00a38, arg_0xb7c00bc8);
#line 58

#line 58
  return result;
#line 58
}
#line 58
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$clr(void)
#line 47
{
#line 47
  * (volatile uint8_t *)34U &= ~(1 << 1);
}

# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led1$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$clr();
#line 30
}
#line 30
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/system/LedsP.nc"
static inline   void LedsP$Leds$led1On(void)
#line 78
{
  LedsP$Led1$clr();
  ;
#line 80
  ;
}

# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Leds.nc"
inline static   void RandRWC$Leds$led1On(void){
#line 61
  LedsP$Leds$led1On();
#line 61
}
#line 61
# 59 "RandRWC.nc"
static inline  void RandRWC$ConfigStorage$commitDone(error_t result)
#line 59
{
  RandRWC$Leds$led1On();
}

# 406 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
static inline   void ConfigStorageP$ConfigStorage$default$commitDone(uint8_t id, error_t error)
#line 406
{
}

# 133 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
inline static  void ConfigStorageP$ConfigStorage$commitDone(uint8_t arg_0xb7c1a4c0, error_t arg_0xb7c415f0){
#line 133
  switch (arg_0xb7c1a4c0) {
#line 133
    case /*RandRWAppC.ConfigStorageC*/ConfigStorageC$0$CONFIG_ID:
#line 133
      RandRWC$ConfigStorage$commitDone(arg_0xb7c415f0);
#line 133
      break;
#line 133
    default:
#line 133
      ConfigStorageP$ConfigStorage$default$commitDone(arg_0xb7c1a4c0, arg_0xb7c415f0);
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

# 264 "/usr/local/lib/ncc/nesc_nx.h"
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
inline static  void BlockStorageP$BlockRead$computeCrcDone(uint8_t arg_0xb7bb03e0, storage_addr_t arg_0xb7c04cc0, storage_len_t arg_0xb7c04e50, uint16_t arg_0xb7c03010, error_t arg_0xb7c03198){
#line 95
  ConfigStorageP$BlockRead$computeCrcDone(arg_0xb7bb03e0, arg_0xb7c04cc0, arg_0xb7c04e50, arg_0xb7c03010, arg_0xb7c03198);
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
inline static  void BlockStorageP$BlockWrite$syncDone(uint8_t arg_0xb7bb18e8, error_t arg_0xb7bfec30){
#line 112
  ConfigStorageP$BlockWrite$syncDone(arg_0xb7bb18e8, arg_0xb7bfec30);
#line 112
}
#line 112
# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
inline static  int BlockStorageP$BConfig$flipped(uint8_t arg_0xb7ba8118){
#line 30
  int result;
#line 30

#line 30
  result = ConfigStorageP$BConfig$flipped(arg_0xb7ba8118);
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
# 16 "build/iris/StorageVolumes.h"
      case VOLUME_CONFIGTEST: return volumePage + 0;
      case VOLUME_LOGTEST: return volumePage + 18;
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
inline static  at45page_t BlockStorageP$At45dbVolume$remap(uint8_t arg_0xb7baab68, at45page_t arg_0xb7baa280){
#line 24
  unsigned short result;
#line 24

#line 24
  switch (arg_0xb7baab68) {
#line 24
    case /*RandRWAppC.ConfigStorageC*/ConfigStorageC$0$CONFIG_ID:
#line 24
      result = At45dbStorageManagerC$At45dbVolume$remap(0, arg_0xb7baa280);
#line 24
      break;
#line 24
    default:
#line 24
      result = BlockStorageP$At45dbVolume$default$remap(arg_0xb7baab68, arg_0xb7baa280);
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
inline static  void BlockStorageP$At45db$write(at45page_t arg_0xb7c11a28, at45pageoffset_t arg_0xb7c11bc0, void *arg_0xb7c11d70, at45pageoffset_t arg_0xb7c11f08){
#line 62
  At45dbP$At45db$write(arg_0xb7c11a28, arg_0xb7c11bc0, arg_0xb7c11d70, arg_0xb7c11f08);
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
inline static  void BlockStorageP$At45db$read(at45page_t arg_0xb7c0b558, at45pageoffset_t arg_0xb7c0b6f0, void *arg_0xb7c0b8a0, at45pageoffset_t arg_0xb7c0ba38){
#line 155
  At45dbP$At45db$read(arg_0xb7c0b558, arg_0xb7c0b6f0, arg_0xb7c0b8a0, arg_0xb7c0ba38);
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
inline static  void BlockStorageP$At45db$computeCrc(at45page_t arg_0xb7c0a6c0, at45pageoffset_t arg_0xb7c0a858, at45pageoffset_t arg_0xb7c0aa00, uint16_t arg_0xb7c0ab90){
#line 176
  At45dbP$At45db$computeCrc(arg_0xb7c0a6c0, arg_0xb7c0a858, arg_0xb7c0aa00, arg_0xb7c0ab90);
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
inline static  void At45dbP$At45db$computeCrcDone(error_t arg_0xb7c08330, uint16_t arg_0xb7c084c0){
#line 183
  BlockStorageP$At45db$computeCrcDone(arg_0xb7c08330, arg_0xb7c084c0);
#line 183
  ConfigStorageP$At45db$computeCrcDone(arg_0xb7c08330, arg_0xb7c084c0);
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
inline static  void At45dbP$At45db$writeDone(error_t arg_0xb7c10588){
#line 69
  BlockStorageP$At45db$writeDone(arg_0xb7c10588);
#line 69
  ConfigStorageP$At45db$writeDone(arg_0xb7c10588);
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
inline static  void At45dbP$At45db$syncDone(error_t arg_0xb7c0c0b0){
#line 125
  BlockStorageP$At45db$syncDone(arg_0xb7c0c0b0);
#line 125
  ConfigStorageP$At45db$syncDone(arg_0xb7c0c0b0);
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
inline static  void At45dbP$At45db$flushDone(error_t arg_0xb7c0b010){
#line 143
  BlockStorageP$At45db$flushDone(arg_0xb7c0b010);
#line 143
  ConfigStorageP$At45db$flushDone(arg_0xb7c0b010);
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
inline static  void At45dbP$At45db$eraseDone(error_t arg_0xb7c0d188){
#line 105
  BlockStorageP$At45db$eraseDone(arg_0xb7c0d188);
#line 105
  ConfigStorageP$At45db$eraseDone(arg_0xb7c0d188);
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
inline static  void At45dbP$At45db$copyPageDone(error_t arg_0xb7c0f330){
#line 85
  BlockStorageP$At45db$copyPageDone(arg_0xb7c0f330);
#line 85
  ConfigStorageP$At45db$copyPageDone(arg_0xb7c0f330);
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
inline static  void At45dbP$HplAt45db$flush(uint8_t arg_0xb7b50b78, at45page_t arg_0xb7b50d08){
#line 73
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$flush(arg_0xb7b50b78, arg_0xb7b50d08);
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
inline static  void At45dbP$HplAt45db$compare(uint8_t arg_0xb7b4f898, at45page_t arg_0xb7b4fa28){
#line 87
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$compare(arg_0xb7b4f898, arg_0xb7b4fa28);
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
inline static  void At45dbP$HplAt45db$readBuffer(uint8_t arg_0xb7b4ddf8, at45pageoffset_t arg_0xb7b4c010, uint8_t *arg_0xb7b4c1c8, uint16_t arg_0xb7b4c358){
#line 119
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$readBuffer(arg_0xb7b4ddf8, arg_0xb7b4c010, arg_0xb7b4c1c8, arg_0xb7b4c358);
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
inline static  void At45dbP$HplAt45db$crc(uint8_t arg_0xb7b4bb30, at45page_t arg_0xb7b4bcc0, at45pageoffset_t arg_0xb7b4be58, at45pageoffset_t arg_0xb7b4a030, uint16_t arg_0xb7b4a1c0){
#line 157
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$crc(arg_0xb7b4bb30, arg_0xb7b4bcc0, arg_0xb7b4be58, arg_0xb7b4a030, arg_0xb7b4a1c0);
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
inline static  void At45dbP$HplAt45db$write(uint8_t arg_0xb7b4ae10, at45page_t arg_0xb7b48010, at45pageoffset_t arg_0xb7b481a8, uint8_t *arg_0xb7b48360, at45pageoffset_t arg_0xb7b484f8){
#line 178
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$write(arg_0xb7b4ae10, arg_0xb7b48010, arg_0xb7b481a8, arg_0xb7b48360, arg_0xb7b484f8);
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
inline static  void At45dbP$HplAt45db$fill(uint8_t arg_0xb7b500f8, at45page_t arg_0xb7b50288){
#line 55
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$fill(arg_0xb7b500f8, arg_0xb7b50288);
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
inline static  at45page_t ConfigStorageP$BConfig$remap(uint8_t arg_0xb7c14a20, at45page_t arg_0xb7c14440){
#line 58
  unsigned short result;
#line 58

#line 58
  result = BlockStorageP$BConfig$remap(arg_0xb7c14a20, arg_0xb7c14440);
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
inline static  void ConfigStorageP$At45db$copyPage(at45page_t arg_0xb7c10ae8, at45page_t arg_0xb7c10c78){
#line 80
  At45dbP$At45db$copyPage(arg_0xb7c10ae8, arg_0xb7c10c78);
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
inline static   void At45dbP$BusyWait$wait(At45dbP$BusyWait$size_type arg_0xb7b45c90){
#line 55
  BusyWaitMicroC$BusyWait$wait(arg_0xb7b45c90);
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
inline static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$crcDone(uint16_t arg_0xb7b4a920){
#line 163
  At45dbP$HplAt45db$crcDone(arg_0xb7b4a920);
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
# 103 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/at45db/HplAt45dbIOP.nc"
static inline  void HplAt45dbIOP$HplAt45dbByte$deselect(void)
#line 103
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
inline static   uint8_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$FlashSpi$write(uint8_t arg_0xb7afaca0){
#line 34
  unsigned char result;
#line 34

#line 34
  result = HplAt45dbIOP$FlashSpi$write(arg_0xb7afaca0);
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
  * (volatile uint8_t *)34U &= ~(1 << 3);
}

# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplAt45dbIOP$Select$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP$3$IO$clr();
#line 30
}
#line 30
# 98 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/at45db/HplAt45dbIOP.nc"
static inline  void HplAt45dbIOP$HplAt45dbByte$select(void)
#line 98
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
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/BusyWait.nc"
inline static   void HplAt45dbIOP$BusyWait$wait(HplAt45dbIOP$BusyWait$size_type arg_0xb7b45c90){
#line 55
  BusyWaitMicroC$BusyWait$wait(arg_0xb7b45c90);
#line 55
}
#line 55
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP$29$IO$set(void)
#line 46
{
#line 46
  * (volatile uint8_t *)43U |= 1 << 5;
}

# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplAt45dbIOP$Clk$set(void){
#line 29
  /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP$29$IO$set();
#line 29
}
#line 29
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   bool /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP$26$IO$get(void)
#line 45
{
#line 45
  return (* (volatile uint8_t *)41U & (1 << 2)) != 0;
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
# 145 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/at45db/HplAt45dbIOP.nc"
static inline  void HplAt45dbIOP$HplAt45dbByte$waitIdle(void)
#line 145
{


  int i;

#line 149
  HplAt45dbIOP$Clk$clr();
  HplAt45dbIOP$BusyWait$wait(2);
  while (!HplAt45dbIOP$In$get()) {
      for (i = 0; i < 8; i++) {
          HplAt45dbIOP$Clk$set();
          HplAt45dbIOP$Clk$clr();
          HplAt45dbIOP$BusyWait$wait(2);
        }
    }
  HplAt45dbIOP$avail$postTask();
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
inline static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$waitCompareDone(bool arg_0xb7b51b80){
#line 47
  At45dbP$HplAt45db$waitCompareDone(arg_0xb7b51b80);
#line 47
}
#line 47
# 161 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/at45db/HplAt45dbIOP.nc"
static inline  bool HplAt45dbIOP$HplAt45dbByte$getCompareStatus(void)
#line 161
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
# 141 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/at45db/HplAt45dbIOP.nc"
static inline  void HplAt45dbIOP$avail$runTask(void)
#line 141
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

#line 113
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
static inline  error_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$Init$init(void)
#line 45
{
  memset(/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ, /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY, sizeof /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ);
  return SUCCESS;
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
inline static  error_t RealMainP$SoftwareInit$init(void){
#line 51
  unsigned char result;
#line 51

#line 51
  result = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$Init$init();
#line 51
  result = ecombine(result, At45dbP$Init$init());
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 105 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/atm128hardware.h"
static  __inline void __nesc_enable_interrupt(void)
#line 105
{
   __asm volatile ("sei");}

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
inline static  error_t RandRWC$ConfigMount$mount(void){
#line 25
  unsigned char result;
#line 25

#line 25
  result = ConfigStorageP$Mount$mount(/*RandRWAppC.ConfigStorageC*/ConfigStorageC$0$CONFIG_ID);
#line 25

#line 25
  return result;
#line 25
}
#line 25
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$clr(void)
#line 47
{
#line 47
  * (volatile uint8_t *)34U &= ~(1 << 2);
}

# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led0$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$clr();
#line 30
}
#line 30
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/system/LedsP.nc"
static inline   void LedsP$Leds$led0On(void)
#line 63
{
  LedsP$Led0$clr();
  ;
#line 65
  ;
}

# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Leds.nc"
inline static   void RandRWC$Leds$led0On(void){
#line 45
  LedsP$Leds$led0On();
#line 45
}
#line 45
# 63 "RandRWC.nc"
static inline  void RandRWC$Boot$booted(void)
#line 63
{
  RandRWC$Leds$led0On();
  RandRWC$scheck(RandRWC$ConfigMount$mount());
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Boot.nc"
inline static  void RealMainP$Boot$booted(void){
#line 49
  RandRWC$Boot$booted();
#line 49
}
#line 49
# 144 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/McuSleepC.nc"
static inline    mcu_power_t McuSleepC$McuPowerOverride$default$lowestState(void)
#line 144
{
  return ATM128_POWER_DOWN;
}

# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
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
# 88 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/McuSleepC.nc"
static inline mcu_power_t McuSleepC$getPowerState(void)
#line 88
{










  if ((
#line 98
  * (volatile uint8_t *)0x6E & ((1 << 1) | (1 << 2)) || 
  * (volatile uint8_t *)0x6F & ((((1 << 5) | (1 << 1)) | (1 << 2)) | (1 << 3))) || 
  * (volatile uint8_t *)0x71 & ((((1 << 5) | (1 << 1)) | (1 << 2)) | (1 << 3))) 
    {
      return ATM128_POWER_IDLE;
    }
  else {
    if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)(0x2C + 0x20) & (1 << 7)) {
        return ATM128_POWER_IDLE;
      }
    else {
      if (* (volatile uint8_t *)0XC1 & ((1 << 6) | (1 << 7))) {
          return ATM128_POWER_IDLE;
        }
      else {
#line 112
        if (* (volatile uint8_t *)0XC9 & ((1 << 6) | (1 << 7))) {
            return ATM128_POWER_IDLE;
          }
        else {
          if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)0xBC & (1 << 2)) {
              return ATM128_POWER_IDLE;
            }
          else {
            if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)0x7A & (1 << 7)) {
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
}

# 157 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/atm128hardware.h"
static inline  mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
#line 157
{
  return m1 < m2 ? m1 : m2;
}

# 128 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/McuSleepC.nc"
static inline   void McuSleepC$McuSleep$sleep(void)
#line 128
{
  uint8_t powerState;

  powerState = mcombine(McuSleepC$getPowerState(), McuSleepC$McuPowerOverride$lowestState());
  * (volatile uint8_t *)(0x33 + 0x20) = ((
  * (volatile uint8_t *)(0x33 + 0x20) & 0xf0) | (1 << 0)) | __extension__ ({
#line 133
    uint16_t __addr16 = (uint16_t )(uint16_t )&McuSleepC$atm128PowerBits[powerState];
#line 133
    uint8_t __result;

#line 133
     __asm ("lpm %0, Z""\n\t" : "=r"(__result) : "z"(__addr16));__result;
  }
  );
#line 134
   __asm volatile ("sei");
   __asm volatile ("sleep");
   __asm volatile ("cli");

  * (volatile uint8_t *)(0x33 + 0x20) &= ~(1 << 0);
}

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
static  void SchedulerBasicP$TaskBasic$runTask(uint8_t arg_0xb7c7a1b0){
#line 64
  switch (arg_0xb7c7a1b0) {
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
      SchedulerBasicP$TaskBasic$default$runTask(arg_0xb7c7a1b0);
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

# 68 "RandRWC.nc"
static  void RandRWC$ConfigMount$mountDone(error_t e)
#line 68
{
  if (!RandRWC$scheck(RandRWC$ConfigStorage$read(10, (uint8_t *)&RandRWC$count, 1))) {
      RandRWC$Leds$led2On();
      RandRWC$scheck(RandRWC$ConfigStorage$write(10, (uint8_t *)&RandRWC$count, 1));
    }
}

#line 32
static __attribute((noinline)) bool RandRWC$scheck(error_t r)
#line 32
{
  return r == SUCCESS;
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

# 201 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
static  error_t ConfigStorageP$ConfigStorage$write(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len)
#line 201
{




  if (ConfigStorageP$s[id].state < ConfigStorageP$S_CLEAN) {
    return EOFF;
    }
#line 208
  return ConfigStorageP$BlockWrite$write(id, addr + sizeof ConfigStorageP$low[0], buf, len);
}

#line 124
static void ConfigStorageP$computeCrc(uint8_t id)
#line 124
{
  ConfigStorageP$BlockRead$computeCrc(id, sizeof(nx_uint16_t ), 
  ConfigStorageP$volumeSize(id) - sizeof(nx_uint16_t ), 
  0);
}

# 40 "RandRWC.nc"
static __attribute((noinline))  void RandRWC$ConfigStorage$readDone(storage_addr_t x, void *buf, storage_len_t rlen, error_t result)
#line 40
{
  if (RandRWC$scheck(result)) {
      RandRWC$count++;
      if (RandRWC$count == 11) {
#line 43
          RandRWC$count = 1;
        }
#line 44
      RandRWC$scheck(RandRWC$ConfigStorage$write(10, (uint8_t *)&RandRWC$count, 1));
      if (RandRWC$count % 2 != 0) {
        RandRWC$Leds$led2On();
        }
    }
  else 
#line 47
    {
      RandRWC$Leds$led2On();
      RandRWC$count = 1;
      RandRWC$scheck(RandRWC$ConfigStorage$write(10, (uint8_t *)&RandRWC$count, 1));
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

# 120 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/at45db/HplAt45dbIOP.nc"
static   uint8_t HplAt45dbIOP$FlashSpi$write(uint8_t spiOut)
#line 120
{
  uint8_t spiIn = 0;


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      uint8_t clrClkAndData = * (volatile uint8_t *)(0x0B + 0x20) & ~0x28;

      * (volatile uint8_t *)(0x0B + 0x20) = clrClkAndData;
#line 128
       __asm volatile ("sbrc %2,""7""\n""\tsbi 11,3\n""\tsbi 11,5\n""\tsbic 9,2\n""\tori %0,1<<""7""\n" : "=d"(spiIn) : "0"(spiIn), "r"(spiOut));
      * (volatile uint8_t *)(0x0B + 0x20) = clrClkAndData;
#line 129
       __asm volatile ("sbrc %2,""6""\n""\tsbi 11,3\n""\tsbi 11,5\n""\tsbic 9,2\n""\tori %0,1<<""6""\n" : "=d"(spiIn) : "0"(spiIn), "r"(spiOut));
      * (volatile uint8_t *)(0x0B + 0x20) = clrClkAndData;
#line 130
       __asm volatile ("sbrc %2,""5""\n""\tsbi 11,3\n""\tsbi 11,5\n""\tsbic 9,2\n""\tori %0,1<<""5""\n" : "=d"(spiIn) : "0"(spiIn), "r"(spiOut));
      * (volatile uint8_t *)(0x0B + 0x20) = clrClkAndData;
#line 131
       __asm volatile ("sbrc %2,""4""\n""\tsbi 11,3\n""\tsbi 11,5\n""\tsbic 9,2\n""\tori %0,1<<""4""\n" : "=d"(spiIn) : "0"(spiIn), "r"(spiOut));
      * (volatile uint8_t *)(0x0B + 0x20) = clrClkAndData;
#line 132
       __asm volatile ("sbrc %2,""3""\n""\tsbi 11,3\n""\tsbi 11,5\n""\tsbic 9,2\n""\tori %0,1<<""3""\n" : "=d"(spiIn) : "0"(spiIn), "r"(spiOut));
      * (volatile uint8_t *)(0x0B + 0x20) = clrClkAndData;
#line 133
       __asm volatile ("sbrc %2,""2""\n""\tsbi 11,3\n""\tsbi 11,5\n""\tsbic 9,2\n""\tori %0,1<<""2""\n" : "=d"(spiIn) : "0"(spiIn), "r"(spiOut));
      * (volatile uint8_t *)(0x0B + 0x20) = clrClkAndData;
#line 134
       __asm volatile ("sbrc %2,""1""\n""\tsbi 11,3\n""\tsbi 11,5\n""\tsbic 9,2\n""\tori %0,1<<""1""\n" : "=d"(spiIn) : "0"(spiIn), "r"(spiOut));
      * (volatile uint8_t *)(0x0B + 0x20) = clrClkAndData;
#line 135
       __asm volatile ("sbrc %2,""0""\n""\tsbi 11,3\n""\tsbi 11,5\n""\tsbic 9,2\n""\tori %0,1<<""0""\n" : "=d"(spiIn) : "0"(spiIn), "r"(spiOut));}
#line 135
    __nesc_atomic_end(__nesc_atomic); }


  return spiIn;
}

# 127 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbP.nc"
static void At45dbP$flashIdle(void)
#line 127
{
  At45dbP$flashBusy = At45dbP$buffer[0].busy = At45dbP$buffer[1].busy = FALSE;
}

