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
#line 264
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
# 111 "/usr/lib/gcc/avr/3.4.6/../../../../avr/include/string.h" 3
extern int memcmp(const void *, const void *, size_t ) __attribute((__pure__)) ;




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
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.h"
#line 27
typedef nx_struct ieee154_header_t {

  nxle_uint8_t length;
  nxle_uint16_t fcf;
  nxle_uint8_t dsn;
  nxle_uint16_t destpan;
  nxle_uint16_t dest;
  nxle_uint16_t src;



  nxle_uint8_t network;


  nxle_uint8_t type;
} __attribute__((packed)) ieee154_header_t;





#line 45
typedef nx_struct ieee154_footer_t {

  nxle_uint16_t crc;
} __attribute__((packed)) ieee154_footer_t;

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
  IEEE154_TYPE_MAC_CMD = 3, 
  IEEE154_TYPE_MASK = 7
};

enum iee154_fcf_addr_mode_enums {
  IEEE154_ADDR_NONE = 0, 
  IEEE154_ADDR_SHORT = 2, 
  IEEE154_ADDR_EXT = 3, 
  IEEE154_ADDR_MASK = 3
};
# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230Packet.h"
typedef ieee154_header_t rf230packet_header_t;




#line 31
typedef nx_struct rf230packet_footer_t {
} __attribute__((packed)) 

rf230packet_footer_t;










#line 36
typedef struct rf230packet_metadata_t {

  uint8_t flags;
  uint8_t lqi;
  uint8_t power;



  uint32_t timestamp;
} rf230packet_metadata_t;

enum rf230packet_metadata_flags {

  RF230PACKET_WAS_ACKED = 0x01, 
  RF230PACKET_TIMESTAMP = 0x02, 
  RF230PACKET_TXPOWER = 0x04, 
  RF230PACKET_RSSI = 0x08, 
  RF230PACKET_TIMESYNC = 0x10, 
  RF230PACKET_LPL_SLEEPINT = 0x20, 

  RF230PACKET_CLEAR_METADATA = 0x00
};
# 6 "/opt/CVSTinyOS/tinyos-2.x/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4316 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4317 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4318 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4319 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4320 {
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
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/platform_message.h"
#line 68
typedef union message_header {
  rf230packet_header_t rf230;
  serial_header_t serial;
} message_header_t;



#line 73
typedef union message_footer {
  rf230packet_footer_t rf230;
} message_footer_t;



#line 77
typedef union message_metadata {
  rf230packet_metadata_t rf230;
} message_metadata_t;
# 19 "/opt/CVSTinyOS/tinyos-2.x/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[28];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
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
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/Atm128Uart.h"
typedef uint8_t Atm128_UDR0_t;
typedef uint8_t Atm128_UDR1_t;
#line 48
#line 36
typedef union __nesc_unnamed4321 {
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
typedef union __nesc_unnamed4322 {
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

enum __nesc_unnamed4323 {
  ATM128_UART_DATA_SIZE_5_BITS = 0, 
  ATM128_UART_DATA_SIZE_6_BITS = 1, 
  ATM128_UART_DATA_SIZE_7_BITS = 2, 
  ATM128_UART_DATA_SIZE_8_BITS = 3
};
#line 89
#line 79
typedef union __nesc_unnamed4324 {
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





enum __nesc_unnamed4325 {
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
enum /*RandRWAppC.ConfigStorageC*/ConfigStorageC$0$__nesc_unnamed4326 {
  ConfigStorageC$0$CONFIG_ID = 0U, ConfigStorageC$0$RESOURCE_ID = 0U
};
typedef TMicro At45dbP$BusyWait$precision_tag;
typedef uint16_t At45dbP$BusyWait$size_type;
typedef TMicro HplAt45dbIOP$BusyWait$precision_tag;
typedef uint16_t HplAt45dbIOP$BusyWait$size_type;
typedef TMicro BusyWaitMicroC$BusyWait$precision_tag;
typedef uint16_t BusyWaitMicroC$BusyWait$size_type;
typedef TMicro /*Atm128Uart0C.UartP*/Atm128UartP$0$Counter$precision_tag;
typedef uint32_t /*Atm128Uart0C.UartP*/Atm128UartP$0$Counter$size_type;
typedef uint16_t HplAtm1281Timer3P$CompareA$size_type;
typedef uint16_t HplAtm1281Timer3P$Capture$size_type;
typedef uint16_t HplAtm1281Timer3P$CompareB$size_type;
typedef uint16_t HplAtm1281Timer3P$CompareC$size_type;
typedef uint16_t HplAtm1281Timer3P$Timer$timer_size;
typedef uint16_t /*InitThreeP.InitThree*/Atm128TimerInitC$0$timer_size;
typedef /*InitThreeP.InitThree*/Atm128TimerInitC$0$timer_size /*InitThreeP.InitThree*/Atm128TimerInitC$0$Timer$timer_size;
typedef TThree /*CounterThree16C.NCounter*/Atm128CounterC$0$frequency_tag;
typedef uint16_t /*CounterThree16C.NCounter*/Atm128CounterC$0$timer_size;
typedef /*CounterThree16C.NCounter*/Atm128CounterC$0$frequency_tag /*CounterThree16C.NCounter*/Atm128CounterC$0$Counter$precision_tag;
typedef /*CounterThree16C.NCounter*/Atm128CounterC$0$timer_size /*CounterThree16C.NCounter*/Atm128CounterC$0$Counter$size_type;
typedef /*CounterThree16C.NCounter*/Atm128CounterC$0$timer_size /*CounterThree16C.NCounter*/Atm128CounterC$0$Timer$timer_size;
typedef TMicro /*CounterMicro32C.Transform32*/TransformCounterC$0$to_precision_tag;
typedef uint32_t /*CounterMicro32C.Transform32*/TransformCounterC$0$to_size_type;
typedef TThree /*CounterMicro32C.Transform32*/TransformCounterC$0$from_precision_tag;
typedef uint16_t /*CounterMicro32C.Transform32*/TransformCounterC$0$from_size_type;
typedef counter_three_overflow_t /*CounterMicro32C.Transform32*/TransformCounterC$0$upper_count_type;
typedef /*CounterMicro32C.Transform32*/TransformCounterC$0$from_precision_tag /*CounterMicro32C.Transform32*/TransformCounterC$0$CounterFrom$precision_tag;
typedef /*CounterMicro32C.Transform32*/TransformCounterC$0$from_size_type /*CounterMicro32C.Transform32*/TransformCounterC$0$CounterFrom$size_type;
typedef /*CounterMicro32C.Transform32*/TransformCounterC$0$to_precision_tag /*CounterMicro32C.Transform32*/TransformCounterC$0$Counter$precision_tag;
typedef /*CounterMicro32C.Transform32*/TransformCounterC$0$to_size_type /*CounterMicro32C.Transform32*/TransformCounterC$0$Counter$size_type;
# 36 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Mount.nc"
static  void RandRWC$ConfigMount$mountDone(error_t arg_0xb7be8a38);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Boot.nc"
static  void RandRWC$Boot$booted(void);
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void RandRWC$AMSend$sendDone(message_t *arg_0xb7bed068, error_t arg_0xb7bed1f0);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  void RandRWC$SerialControl$startDone(error_t arg_0xb7bea198);
#line 117
static  void RandRWC$SerialControl$stopDone(error_t arg_0xb7bead48);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
static  void RandRWC$ConfigStorage$writeDone(storage_addr_t arg_0xb7c045c0, void *arg_0xb7c04760, storage_len_t arg_0xb7c048f0, 
error_t arg_0xb7c04a88);
#line 133
static  void RandRWC$ConfigStorage$commitDone(error_t arg_0xb7c035f0);
#line 80
static  void RandRWC$ConfigStorage$readDone(storage_addr_t arg_0xb7c05100, void *arg_0xb7c052a0, storage_len_t arg_0xb7c05430, 
error_t arg_0xb7c055c8);
# 85 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45db.nc"
static  void ConfigStorageP$At45db$copyPageDone(error_t arg_0xb7b9a330);
#line 125
static  void ConfigStorageP$At45db$syncDone(error_t arg_0xb7b970b0);
#line 143
static  void ConfigStorageP$At45db$flushDone(error_t arg_0xb7b96010);
#line 69
static  void ConfigStorageP$At45db$writeDone(error_t arg_0xb7b9b520);
#line 105
static  void ConfigStorageP$At45db$eraseDone(error_t arg_0xb7b99188);
#line 183
static  void ConfigStorageP$At45db$computeCrcDone(error_t arg_0xb7b94330, uint16_t arg_0xb7b944c0);
#line 162
static  void ConfigStorageP$At45db$readDone(error_t arg_0xb7b95168);
# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static  int ConfigStorageP$BConfig$flipped(
# 27 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7b9f920);
# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static  int ConfigStorageP$BConfig$isConfig(
# 27 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7b9f920);
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static  int ConfigStorageP$BConfig$writeHook(
# 27 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7b9f920);
# 25 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Mount.nc"
static  error_t ConfigStorageP$Mount$mount(
# 25 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7ba6d40);
# 36 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Mount.nc"
static  void ConfigStorageP$Mount$default$mountDone(
# 25 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7ba6d40, 
# 36 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Mount.nc"
error_t arg_0xb7be8a38);
# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
static  void ConfigStorageP$BlockRead$computeCrcDone(
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7b8eb88, 
# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
storage_addr_t arg_0xb7b8fcc0, storage_len_t arg_0xb7b8fe50, 
uint16_t arg_0xb7b8e010, error_t arg_0xb7b8e198);
#line 67
static  void ConfigStorageP$BlockRead$readDone(
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7b8eb88, 
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
storage_addr_t arg_0xb7b90830, void *arg_0xb7b909d0, storage_len_t arg_0xb7b90b60, 
error_t arg_0xb7b90cf8);
# 112 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
static  void ConfigStorageP$BlockWrite$syncDone(
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7b8d1f0, 
# 112 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
error_t arg_0xb7b89c30);
#line 71
static  void ConfigStorageP$BlockWrite$writeDone(
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7b8d1f0, 
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
storage_addr_t arg_0xb7b8a338, void *arg_0xb7b8a4d8, storage_len_t arg_0xb7b8a668, 
error_t arg_0xb7b8a800);
#line 91
static  void ConfigStorageP$BlockWrite$eraseDone(
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7b8d1f0, 
# 91 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
error_t arg_0xb7b89258);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
static  error_t ConfigStorageP$ConfigStorage$read(
# 26 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7ba4420, 
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
storage_addr_t arg_0xb7c07638, void *arg_0xb7c077d8, storage_len_t arg_0xb7c07968);
#line 110
static  void ConfigStorageP$ConfigStorage$default$writeDone(
# 26 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7ba4420, 
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
storage_addr_t arg_0xb7c045c0, void *arg_0xb7c04760, storage_len_t arg_0xb7c048f0, 
error_t arg_0xb7c04a88);
#line 124
static  error_t ConfigStorageP$ConfigStorage$commit(
# 26 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7ba4420);
# 97 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
static  error_t ConfigStorageP$ConfigStorage$write(
# 26 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7ba4420, 
# 97 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
storage_addr_t arg_0xb7c05ba8, void *arg_0xb7c05d48, storage_len_t arg_0xb7c05ed8);
#line 133
static  void ConfigStorageP$ConfigStorage$default$commitDone(
# 26 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7ba4420, 
# 133 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
error_t arg_0xb7c035f0);
#line 80
static  void ConfigStorageP$ConfigStorage$default$readDone(
# 26 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7ba4420, 
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
storage_addr_t arg_0xb7c05100, void *arg_0xb7c052a0, storage_len_t arg_0xb7c05430, 
error_t arg_0xb7c055c8);
# 85 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45db.nc"
static  void BlockStorageP$At45db$copyPageDone(error_t arg_0xb7b9a330);
#line 125
static  void BlockStorageP$At45db$syncDone(error_t arg_0xb7b970b0);
#line 143
static  void BlockStorageP$At45db$flushDone(error_t arg_0xb7b96010);
#line 69
static  void BlockStorageP$At45db$writeDone(error_t arg_0xb7b9b520);
#line 105
static  void BlockStorageP$At45db$eraseDone(error_t arg_0xb7b99188);
#line 183
static  void BlockStorageP$At45db$computeCrcDone(error_t arg_0xb7b94330, uint16_t arg_0xb7b944c0);
#line 162
static  void BlockStorageP$At45db$readDone(error_t arg_0xb7b95168);
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
static  error_t BlockStorageP$BlockWrite$write(
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0xb7b3c8e8, 
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
storage_addr_t arg_0xb7b8b898, void *arg_0xb7b8ba38, storage_len_t arg_0xb7b8bbc8);
#line 103
static  error_t BlockStorageP$BlockWrite$sync(
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0xb7b3c8e8);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
static  error_t BlockStorageP$BlockRead$read(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0xb7b3b3e0, 
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
storage_addr_t arg_0xb7b91e38, void *arg_0xb7b90010, storage_len_t arg_0xb7b901a0);
#line 83
static  error_t BlockStorageP$BlockRead$computeCrc(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0xb7b3b3e0, 
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
storage_addr_t arg_0xb7b8f340, storage_len_t arg_0xb7b8f4d0, 
uint16_t arg_0xb7b8f670);
#line 103
static  storage_len_t BlockStorageP$BlockRead$getSize(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0xb7b3b3e0);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static  at45page_t BlockStorageP$BConfig$npages(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0xb7b36410);
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static  at45page_t BlockStorageP$BConfig$remap(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0xb7b36410, 
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
at45page_t arg_0xb7b9f340);
#line 44
static  void BlockStorageP$BConfig$writeContinue(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0xb7b36410, 
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
error_t arg_0xb7ba0980);
# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
static  at45page_t BlockStorageP$At45dbVolume$default$volumeSize(
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0xb7b35c10);
# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
static  at45page_t BlockStorageP$At45dbVolume$default$remap(
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0xb7b35c10, 
# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
at45page_t arg_0xb7b35328);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t BlockStorageP$Resource$default$release(
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0xb7b31a60);
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t BlockStorageP$Resource$default$request(
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0xb7b31a60);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static  void BlockStorageP$Resource$granted(
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0xb7b31a60);
# 163 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45db.nc"
static  void At45dbP$HplAt45db$crcDone(uint16_t arg_0xb7ad7aa8);
#line 79
static  void At45dbP$HplAt45db$flushDone(void);
#line 185
static  void At45dbP$HplAt45db$writeDone(void);
#line 35
static  void At45dbP$HplAt45db$waitIdleDone(void);
#line 47
static  void At45dbP$HplAt45db$waitCompareDone(bool arg_0xb7adfd68);
#line 106
static  void At45dbP$HplAt45db$eraseDone(void);
#line 93
static  void At45dbP$HplAt45db$compareDone(void);
#line 61
static  void At45dbP$HplAt45db$fillDone(void);
#line 141
static  void At45dbP$HplAt45db$readDone(void);
# 155 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45db.nc"
static  void At45dbP$At45db$read(at45page_t arg_0xb7b96558, at45pageoffset_t arg_0xb7b966f0, 
void *arg_0xb7b968a0, at45pageoffset_t arg_0xb7b96a38);
#line 80
static  void At45dbP$At45db$copyPage(at45page_t arg_0xb7b9ba80, at45page_t arg_0xb7b9bc10);
#line 100
static  void At45dbP$At45db$erase(at45page_t arg_0xb7b9a858, uint8_t arg_0xb7b9a9e8);
#line 120
static  void At45dbP$At45db$syncAll(void);
#line 62
static  void At45dbP$At45db$write(at45page_t arg_0xb7b9c958, at45pageoffset_t arg_0xb7b9caf0, 
void *arg_0xb7b9cca0, at45pageoffset_t arg_0xb7b9ce38);
#line 176
static  void At45dbP$At45db$computeCrc(at45page_t arg_0xb7b956c0, at45pageoffset_t arg_0xb7b95858, 
at45pageoffset_t arg_0xb7b95a00, uint16_t arg_0xb7b95b90);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void At45dbP$taskSuccess$runTask(void);
#line 64
static  void At45dbP$taskFail$runTask(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t At45dbP$Init$init(void);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45db.nc"
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$waitCompare(void);
#line 100
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$erase(uint8_t arg_0xb7adb4e0, at45page_t arg_0xb7adb670);
#line 30
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$waitIdle(void);
#line 73
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$flush(uint8_t arg_0xb7addda8, at45page_t arg_0xb7adc010);
#line 178
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$write(uint8_t arg_0xb7ad6010, at45page_t arg_0xb7ad61a0, at45pageoffset_t arg_0xb7ad6338, 
uint8_t *arg_0xb7ad64f0, at45pageoffset_t arg_0xb7ad6688);
#line 87
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$compare(uint8_t arg_0xb7adc9e0, at45page_t arg_0xb7adcb70);
#line 157
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$crc(uint8_t arg_0xb7ad8c08, at45page_t arg_0xb7ad8d98, at45pageoffset_t arg_0xb7ad7010, 
at45pageoffset_t arg_0xb7ad71b8, uint16_t arg_0xb7ad7348);
#line 119
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$readBuffer(uint8_t arg_0xb7adbf10, at45pageoffset_t arg_0xb7ad90c8, 
uint8_t *arg_0xb7ad9280, uint16_t arg_0xb7ad9410);
#line 55
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$fill(uint8_t arg_0xb7add328, at45page_t arg_0xb7add4b8);
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
static   uint8_t HplAt45dbIOP$FlashSpi$write(uint8_t arg_0xb7a89ca0);
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$toggle(void);



static   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void);





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
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128Calibrate.nc"
static   uint16_t MeasureClockC$Atm128Calibrate$baudrateRegister(uint32_t arg_0xb7971178);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/BusyWait.nc"
static   void BusyWaitMicroC$BusyWait$wait(BusyWaitMicroC$BusyWait$size_type arg_0xb7ad2e50);
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
uint8_t arg_0xb7c3c1b0);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void SchedulerBasicP$TaskBasic$default$runTask(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0xb7c3c1b0);
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
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static   void McuSleepC$McuPowerState$update(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$Init$init(void);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static   error_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(resource_client_id_t arg_0xb7928ee8);
#line 43
static   bool /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty(void);








static   bool /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(resource_client_id_t arg_0xb7928500);







static   resource_client_id_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue(void);
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static   void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0xb791c738);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0xb791b910);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0xb791b910);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
static   error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$release(void);
#line 73
static   void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$default$requested(void);
#line 46
static   void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$default$granted(void);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Resource$release(
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0xb791ddd8);
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Resource$request(
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0xb791ddd8);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static  void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Resource$default$granted(
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0xb791ddd8);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$grantedTask$runTask(void);
# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
static  at45page_t At45dbStorageManagerC$At45dbVolume$volumeSize(
# 18 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbStorageManagerC.nc"
volume_id_t arg_0xb78f37b0);
# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
static  at45page_t At45dbStorageManagerC$At45dbVolume$remap(
# 18 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbStorageManagerC.nc"
volume_id_t arg_0xb78f37b0, 
# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
at45page_t arg_0xb7b35328);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t LedsP$Init$init(void);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Leds.nc"
static   void LedsP$Leds$led1On(void);
#line 89
static   void LedsP$Leds$led2Toggle(void);
#line 45
static   void LedsP$Leds$led0On(void);
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$sendDone(message_t *arg_0xb78ad878, error_t arg_0xb78ada00);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubReceive$receive(message_t *arg_0xb78c9a00, void *arg_0xb78c9ba0, uint8_t arg_0xb78c9d28);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$send(
# 36 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0xb78b5748, 
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t arg_0xb7bf0ce8, message_t *arg_0xb7bf0e98, uint8_t arg_0xb7bef030);
#line 124
static  void */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$getPayload(
# 36 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0xb78b5748, 
# 124 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0xb7bedcb0, uint8_t arg_0xb7bede38);
#line 99
static  void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$default$sendDone(
# 36 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0xb78b5748, 
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0xb7bed068, error_t arg_0xb7bed1f0);
# 115 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
static  void */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$getPayload(message_t *arg_0xb78c4aa0, uint8_t arg_0xb78c4c28);
#line 95
static  uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$maxPayloadLength(void);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Receive$default$receive(
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0xb78b3088, 
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0xb78c9a00, void *arg_0xb78c9ba0, uint8_t arg_0xb78c9d28);
# 136 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$type(message_t *arg_0xb78bd010);
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  error_t SerialP$SplitControl$start(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void SerialP$stopDoneTask$runTask(void);
#line 64
static  void SerialP$RunTx$runTask(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t SerialP$Init$init(void);
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialFlush.nc"
static  void SerialP$SerialFlush$flushDone(void);
#line 38
static  void SerialP$SerialFlush$default$flush(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void SerialP$startDoneTask$runTask(void);
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
static   void SerialP$SerialFrameComm$dataReceived(uint8_t arg_0xb786c758);





static   void SerialP$SerialFrameComm$putDone(void);
#line 74
static   void SerialP$SerialFrameComm$delimiterReceived(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void SerialP$defaultSerialFlushTask$runTask(void);
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
static   error_t SerialP$SendBytePacket$completeSend(void);
#line 51
static   error_t SerialP$SendBytePacket$startSend(uint8_t arg_0xb7874bf0);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask$runTask(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$send(
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0xb780fe48, 
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
message_t *arg_0xb78ae760, uint8_t arg_0xb78ae8e8);
#line 89
static  void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$default$sendDone(
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0xb780fe48, 
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
message_t *arg_0xb78ad878, error_t arg_0xb78ada00);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone$runTask(void);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Receive$default$receive(
# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0xb780f890, 
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0xb78c9a00, void *arg_0xb78c9ba0, uint8_t arg_0xb78c9d28);
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static   uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$upperLength(
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0xb780e8d8, 
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *arg_0xb787bdc0, uint8_t arg_0xb787a010);
#line 15
static   uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$offset(
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0xb780e8d8);
# 23 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static   uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$dataLinkLength(
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0xb780e8d8, 
# 23 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *arg_0xb787b5c8, uint8_t arg_0xb787b758);
# 70 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
static   uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$nextByte(void);









static   void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$sendCompleted(error_t arg_0xb7873c08);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
static   error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$startPacket(void);






static   void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$byteReceived(uint8_t arg_0xb7870de8);










static   void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$endPacket(error_t arg_0xb786f3c8);
# 79 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/UartStream.nc"
static   void HdlcTranslateC$UartStream$receivedByte(uint8_t arg_0xb77d4430);
#line 99
static   void HdlcTranslateC$UartStream$receiveDone(uint8_t *arg_0xb77d2138, uint16_t arg_0xb77d22c8, error_t arg_0xb77d2450);
#line 57
static   void HdlcTranslateC$UartStream$sendDone(uint8_t *arg_0xb77d5370, uint16_t arg_0xb77d5500, error_t arg_0xb77d5688);
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
static   error_t HdlcTranslateC$SerialFrameComm$putDelimiter(void);
#line 68
static   void HdlcTranslateC$SerialFrameComm$resetReceive(void);
#line 54
static   error_t HdlcTranslateC$SerialFrameComm$putData(uint8_t arg_0xb786d508);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$Init$init(void);
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/UartStream.nc"
static   error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$send(uint8_t *arg_0xb77d6b08, uint16_t arg_0xb77d6c98);
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*Atm128Uart0C.UartP*/Atm128UartP$0$Counter$overflow(void);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static   void /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$rxDone(uint8_t arg_0xb77ae198);
#line 47
static   void /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$txDone(void);
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$StdControl$start(void);









static  error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$StdControl$stop(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t HplAtm128UartP$Uart0Init$init(void);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static   error_t HplAtm128UartP$HplUart0$enableRxIntr(void);
#line 40
static   error_t HplAtm128UartP$HplUart0$enableTxIntr(void);
static   error_t HplAtm128UartP$HplUart0$disableTxIntr(void);

static   error_t HplAtm128UartP$HplUart0$disableRxIntr(void);


static   void HplAtm128UartP$HplUart0$tx(uint8_t arg_0xb77b06b8);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t HplAtm128UartP$Uart1Init$init(void);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static   void HplAtm128UartP$HplUart1$default$rxDone(uint8_t arg_0xb77ae198);
#line 47
static   void HplAtm128UartP$HplUart1$default$txDone(void);
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t HplAtm128UartP$Uart0RxControl$start(void);









static  error_t HplAtm128UartP$Uart0RxControl$stop(void);
#line 74
static  error_t HplAtm128UartP$Uart0TxControl$start(void);









static  error_t HplAtm128UartP$Uart0TxControl$stop(void);
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerCtrl16.nc"
static   void HplAtm1281Timer3P$TimerCtrl$setControlB(uint8_t arg_0xb7735560);
#line 60
static   uint8_t HplAtm1281Timer3P$TimerCtrl$getControlB(void);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void HplAtm1281Timer3P$CompareA$default$fired(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static   void HplAtm1281Timer3P$Capture$default$captured(HplAtm1281Timer3P$Capture$size_type arg_0xb77307a0);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void HplAtm1281Timer3P$CompareB$default$fired(void);
#line 49
static   void HplAtm1281Timer3P$CompareC$default$fired(void);
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   HplAtm1281Timer3P$Timer$timer_size HplAtm1281Timer3P$Timer$get(void);
#line 95
static   void HplAtm1281Timer3P$Timer$setScale(uint8_t arg_0xb773ba08);
#line 58
static   void HplAtm1281Timer3P$Timer$set(HplAtm1281Timer3P$Timer$timer_size arg_0xb7741d60);










static   void HplAtm1281Timer3P$Timer$start(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*InitThreeP.InitThree*/Atm128TimerInitC$0$Init$init(void);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void /*InitThreeP.InitThree*/Atm128TimerInitC$0$Timer$overflow(void);
#line 61
static   void /*CounterThree16C.NCounter*/Atm128CounterC$0$Timer$overflow(void);
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*CounterMicro32C.Transform32*/TransformCounterC$0$CounterFrom$overflow(void);
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static   uint8_t SerialPacketInfoActiveMessageP$Info$upperLength(message_t *arg_0xb787bdc0, uint8_t arg_0xb787a010);
#line 15
static   uint8_t SerialPacketInfoActiveMessageP$Info$offset(void);







static   uint8_t SerialPacketInfoActiveMessageP$Info$dataLinkLength(message_t *arg_0xb787b5c8, uint8_t arg_0xb787b758);
# 25 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Mount.nc"
static  error_t RandRWC$ConfigMount$mount(void);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t RandRWC$AMSend$send(am_addr_t arg_0xb7bf0ce8, message_t *arg_0xb7bf0e98, uint8_t arg_0xb7bef030);
#line 124
static  void *RandRWC$AMSend$getPayload(message_t *arg_0xb7bedcb0, uint8_t arg_0xb7bede38);
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  error_t RandRWC$SerialControl$start(void);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Leds.nc"
static   void RandRWC$Leds$led1On(void);
#line 89
static   void RandRWC$Leds$led2Toggle(void);
#line 45
static   void RandRWC$Leds$led0On(void);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
static  error_t RandRWC$ConfigStorage$read(storage_addr_t arg_0xb7c07638, void *arg_0xb7c077d8, storage_len_t arg_0xb7c07968);
#line 124
static  error_t RandRWC$ConfigStorage$commit(void);
#line 97
static  error_t RandRWC$ConfigStorage$write(storage_addr_t arg_0xb7c05ba8, void *arg_0xb7c05d48, storage_len_t arg_0xb7c05ed8);
# 27 "RandRWC.nc"
enum RandRWC$__nesc_unnamed4327 {
  RandRWC$SIZE = 2048, 
  RandRWC$NWRITES = 100
};

uint16_t RandRWC$shiftReg;
uint16_t RandRWC$initSeed;
uint16_t RandRWC$mask;

uint8_t RandRWC$data[512];
#line 36
uint8_t RandRWC$rdata[512];
int RandRWC$count;
#line 37
int RandRWC$testCount;
#line 37
int RandRWC$writeCount;
#line 37
int RandRWC$countAtCommit;




#line 38
struct RandRWC$__nesc_unnamed4328 {
  uint32_t addr;
  void *data;
  uint16_t len;
} RandRWC$ops[RandRWC$NWRITES];

message_t RandRWC$reportMsg;


static void RandRWC$done(void);


static uint16_t RandRWC$rand(void);
#line 66
static void RandRWC$resetSeed(int offset);





static void RandRWC$report(error_t e);







static inline  void RandRWC$AMSend$sendDone(message_t *msg, error_t error);




static inline void RandRWC$fail(error_t e);




static inline void RandRWC$success(void);




static bool RandRWC$scheck(error_t r) __attribute((noinline)) ;





static bool RandRWC$bcheck(bool b);





static void RandRWC$setupOps(int wcount);
#line 130
static int RandRWC$overlap(int a, int b);




static inline int RandRWC$overwritten(int c);









static void RandRWC$nextRead(void);








static  void RandRWC$ConfigStorage$readDone(storage_addr_t x, void *buf, storage_len_t rlen, error_t result) __attribute((noinline)) ;








static void RandRWC$nextWrite(void);








static inline  void RandRWC$ConfigStorage$writeDone(storage_addr_t x, void *buf, storage_len_t y, error_t result);







static inline  void RandRWC$ConfigStorage$commitDone(error_t result);




static inline  void RandRWC$Boot$booted(void);









static inline  void RandRWC$SerialControl$startDone(error_t e);









static  void RandRWC$ConfigMount$mountDone(error_t e);






enum RandRWC$__nesc_unnamed4329 {
#line 212
  RandRWC$A_COMMIT, RandRWC$A_READ, RandRWC$A_WRITE
};
static void RandRWC$doAction(int act);
#line 232
const uint8_t RandRWC$actions[8] = { 
RandRWC$A_WRITE, 
RandRWC$A_COMMIT, 
RandRWC$A_READ, 
RandRWC$A_WRITE, 
RandRWC$A_COMMIT, 
RandRWC$A_READ, 
RandRWC$A_WRITE, 
RandRWC$A_READ };


static void RandRWC$done(void);
#line 284
static inline  void RandRWC$SerialControl$stopDone(error_t e);
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45db.nc"
static  void ConfigStorageP$At45db$copyPage(at45page_t arg_0xb7b9ba80, at45page_t arg_0xb7b9bc10);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static  at45page_t ConfigStorageP$BConfig$npages(
# 27 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7b9f920);
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static  at45page_t ConfigStorageP$BConfig$remap(
# 27 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7b9f920, 
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
at45page_t arg_0xb7b9f340);
#line 44
static  void ConfigStorageP$BConfig$writeContinue(
# 27 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7b9f920, 
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
error_t arg_0xb7ba0980);
# 36 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Mount.nc"
static  void ConfigStorageP$Mount$mountDone(
# 25 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7ba6d40, 
# 36 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Mount.nc"
error_t arg_0xb7be8a38);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
static  error_t ConfigStorageP$BlockRead$read(
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7b8eb88, 
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
storage_addr_t arg_0xb7b91e38, void *arg_0xb7b90010, storage_len_t arg_0xb7b901a0);
#line 83
static  error_t ConfigStorageP$BlockRead$computeCrc(
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7b8eb88, 
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
storage_addr_t arg_0xb7b8f340, storage_len_t arg_0xb7b8f4d0, 
uint16_t arg_0xb7b8f670);
#line 103
static  storage_len_t ConfigStorageP$BlockRead$getSize(
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7b8eb88);
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
static  error_t ConfigStorageP$BlockWrite$write(
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7b8d1f0, 
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
storage_addr_t arg_0xb7b8b898, void *arg_0xb7b8ba38, storage_len_t arg_0xb7b8bbc8);
#line 103
static  error_t ConfigStorageP$BlockWrite$sync(
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7b8d1f0);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
static  void ConfigStorageP$ConfigStorage$writeDone(
# 26 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7ba4420, 
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
storage_addr_t arg_0xb7c045c0, void *arg_0xb7c04760, storage_len_t arg_0xb7c048f0, 
error_t arg_0xb7c04a88);
#line 133
static  void ConfigStorageP$ConfigStorage$commitDone(
# 26 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7ba4420, 
# 133 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
error_t arg_0xb7c035f0);
#line 80
static  void ConfigStorageP$ConfigStorage$readDone(
# 26 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0xb7ba4420, 
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
storage_addr_t arg_0xb7c05100, void *arg_0xb7c052a0, storage_len_t arg_0xb7c05430, 
error_t arg_0xb7c055c8);
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
enum ConfigStorageP$__nesc_unnamed4330 {
  ConfigStorageP$S_STOPPED, 
  ConfigStorageP$S_MOUNT, 
  ConfigStorageP$S_COMMIT, 
  ConfigStorageP$S_CLEAN, 
  ConfigStorageP$S_DIRTY, 
  ConfigStorageP$S_INVALID
};

enum ConfigStorageP$__nesc_unnamed4331 {
  ConfigStorageP$N = 1U, 
  ConfigStorageP$NO_CLIENT = 0xff
};








#line 72
struct ConfigStorageP$__nesc_unnamed4332 {
  uint8_t state : 3;
  uint8_t committing : 1;
} ConfigStorageP$s[ConfigStorageP$N];



#line 76
nx_struct ConfigStorageP$__nesc_unnamed4333 {
  nx_uint16_t crc;
  nx_uint32_t version;
} __attribute__((packed)) ConfigStorageP$low[ConfigStorageP$N];
#line 79
#line 76
nx_struct ConfigStorageP$__nesc_unnamed4333 


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
static  void BlockStorageP$At45db$read(at45page_t arg_0xb7b96558, at45pageoffset_t arg_0xb7b966f0, 
void *arg_0xb7b968a0, at45pageoffset_t arg_0xb7b96a38);
#line 100
static  void BlockStorageP$At45db$erase(at45page_t arg_0xb7b9a858, uint8_t arg_0xb7b9a9e8);
#line 120
static  void BlockStorageP$At45db$syncAll(void);
#line 62
static  void BlockStorageP$At45db$write(at45page_t arg_0xb7b9c958, at45pageoffset_t arg_0xb7b9caf0, 
void *arg_0xb7b9cca0, at45pageoffset_t arg_0xb7b9ce38);
#line 176
static  void BlockStorageP$At45db$computeCrc(at45page_t arg_0xb7b956c0, at45pageoffset_t arg_0xb7b95858, 
at45pageoffset_t arg_0xb7b95a00, uint16_t arg_0xb7b95b90);
# 112 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
static  void BlockStorageP$BlockWrite$syncDone(
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0xb7b3c8e8, 
# 112 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
error_t arg_0xb7b89c30);
#line 71
static  void BlockStorageP$BlockWrite$writeDone(
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0xb7b3c8e8, 
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
storage_addr_t arg_0xb7b8a338, void *arg_0xb7b8a4d8, storage_len_t arg_0xb7b8a668, 
error_t arg_0xb7b8a800);
#line 91
static  void BlockStorageP$BlockWrite$eraseDone(
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0xb7b3c8e8, 
# 91 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
error_t arg_0xb7b89258);
# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
static  void BlockStorageP$BlockRead$computeCrcDone(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0xb7b3b3e0, 
# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
storage_addr_t arg_0xb7b8fcc0, storage_len_t arg_0xb7b8fe50, 
uint16_t arg_0xb7b8e010, error_t arg_0xb7b8e198);
#line 67
static  void BlockStorageP$BlockRead$readDone(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0xb7b3b3e0, 
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
storage_addr_t arg_0xb7b90830, void *arg_0xb7b909d0, storage_len_t arg_0xb7b90b60, 
error_t arg_0xb7b90cf8);
# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static  int BlockStorageP$BConfig$flipped(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0xb7b36410);
# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static  int BlockStorageP$BConfig$isConfig(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0xb7b36410);
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static  int BlockStorageP$BConfig$writeHook(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0xb7b36410);
# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
static  at45page_t BlockStorageP$At45dbVolume$volumeSize(
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0xb7b35c10);
# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
static  at45page_t BlockStorageP$At45dbVolume$remap(
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0xb7b35c10, 
# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
at45page_t arg_0xb7b35328);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t BlockStorageP$Resource$release(
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0xb7b31a60);
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t BlockStorageP$Resource$request(
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0xb7b31a60);
#line 76
enum BlockStorageP$__nesc_unnamed4334 {
  BlockStorageP$R_IDLE, 
  BlockStorageP$R_WRITE, 
  BlockStorageP$R_ERASE, 
  BlockStorageP$R_SYNC, 
  BlockStorageP$R_READ, 
  BlockStorageP$R_CRC
};

enum BlockStorageP$__nesc_unnamed4335 {
  BlockStorageP$N = 0U + 1U, 
  BlockStorageP$NO_CLIENT = 0xff
};

uint8_t BlockStorageP$client = BlockStorageP$NO_CLIENT;
storage_addr_t BlockStorageP$currentOffset;







#line 93
struct BlockStorageP$__nesc_unnamed4336 {

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
static  void At45dbP$HplAt45db$fill(uint8_t arg_0xb7add328, at45page_t arg_0xb7add4b8);
#line 41
static  void At45dbP$HplAt45db$waitCompare(void);
#line 100
static  void At45dbP$HplAt45db$erase(uint8_t arg_0xb7adb4e0, at45page_t arg_0xb7adb670);
#line 30
static  void At45dbP$HplAt45db$waitIdle(void);
#line 73
static  void At45dbP$HplAt45db$flush(uint8_t arg_0xb7addda8, at45page_t arg_0xb7adc010);
#line 178
static  void At45dbP$HplAt45db$write(uint8_t arg_0xb7ad6010, at45page_t arg_0xb7ad61a0, at45pageoffset_t arg_0xb7ad6338, 
uint8_t *arg_0xb7ad64f0, at45pageoffset_t arg_0xb7ad6688);
#line 87
static  void At45dbP$HplAt45db$compare(uint8_t arg_0xb7adc9e0, at45page_t arg_0xb7adcb70);
#line 157
static  void At45dbP$HplAt45db$crc(uint8_t arg_0xb7ad8c08, at45page_t arg_0xb7ad8d98, at45pageoffset_t arg_0xb7ad7010, 
at45pageoffset_t arg_0xb7ad71b8, uint16_t arg_0xb7ad7348);
#line 119
static  void At45dbP$HplAt45db$readBuffer(uint8_t arg_0xb7adbf10, at45pageoffset_t arg_0xb7ad90c8, 
uint8_t *arg_0xb7ad9280, uint16_t arg_0xb7ad9410);
# 85 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45db.nc"
static  void At45dbP$At45db$copyPageDone(error_t arg_0xb7b9a330);
#line 125
static  void At45dbP$At45db$syncDone(error_t arg_0xb7b970b0);
#line 143
static  void At45dbP$At45db$flushDone(error_t arg_0xb7b96010);
#line 69
static  void At45dbP$At45db$writeDone(error_t arg_0xb7b9b520);
#line 105
static  void At45dbP$At45db$eraseDone(error_t arg_0xb7b99188);
#line 183
static  void At45dbP$At45db$computeCrcDone(error_t arg_0xb7b94330, uint16_t arg_0xb7b944c0);
#line 162
static  void At45dbP$At45db$readDone(error_t arg_0xb7b95168);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/BusyWait.nc"
static   void At45dbP$BusyWait$wait(At45dbP$BusyWait$size_type arg_0xb7ad2e50);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t At45dbP$taskSuccess$postTask(void);
#line 56
static   error_t At45dbP$taskFail$postTask(void);
# 134 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbP.nc"
enum At45dbP$__nesc_unnamed4337 {
#line 134
  At45dbP$taskSuccess = 0U
};
#line 134
typedef int At45dbP$__nesc_sillytask_taskSuccess[At45dbP$taskSuccess];


enum At45dbP$__nesc_unnamed4338 {
#line 137
  At45dbP$taskFail = 1U
};
#line 137
typedef int At45dbP$__nesc_sillytask_taskFail[At45dbP$taskFail];
#line 69
enum At45dbP$__nesc_unnamed4339 {
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

enum At45dbP$__nesc_unnamed4340 {
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
struct At45dbP$__nesc_unnamed4341 {
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
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$crcDone(uint16_t arg_0xb7ad7aa8);
#line 79
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$flushDone(void);
#line 185
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$writeDone(void);
#line 35
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$waitIdleDone(void);
#line 47
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$waitCompareDone(bool arg_0xb7adfd68);
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
static   uint8_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$FlashSpi$write(uint8_t arg_0xb7a89ca0);
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45dbByteC.nc"
enum /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$__nesc_unnamed4342 {
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
static   void HplAt45dbIOP$BusyWait$wait(HplAt45dbIOP$BusyWait$size_type arg_0xb7ad2e50);
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
enum HplAt45dbIOP$__nesc_unnamed4343 {
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

static inline   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$toggle(void);



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
enum MeasureClockC$__nesc_unnamed4344 {


  MeasureClockC$MAGIC = 488 / (16 / PLATFORM_MHZ)
};

uint16_t MeasureClockC$cycles;

static inline  error_t MeasureClockC$Init$init(void);
#line 143
static inline   uint16_t MeasureClockC$Atm128Calibrate$baudrateRegister(uint32_t baudrate);
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
enum /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$__nesc_unnamed4345 {
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
uint8_t arg_0xb7c3c1b0);
# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuSleep.nc"
static   void SchedulerBasicP$McuSleep$sleep(void);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP$__nesc_unnamed4346 {

  SchedulerBasicP$NUM_TASKS = 11U, 
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
#line 141
static inline   void McuSleepC$McuPowerState$update(void);


static inline    mcu_power_t McuSleepC$McuPowerOverride$default$lowestState(void);
# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
enum /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$__nesc_unnamed4347 {
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
uint8_t arg_0xb791c738);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$unconfigure(
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0xb791b910);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$configure(
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0xb791b910);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static   error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Queue$enqueue(resource_client_id_t arg_0xb7928ee8);
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
uint8_t arg_0xb791ddd8);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$grantedTask$postTask(void);
# 75 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
enum /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$__nesc_unnamed4348 {
#line 75
  ArbiterP$0$grantedTask = 4U
};
#line 75
typedef int /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$__nesc_sillytask_grantedTask[/*At45dbC.Arbiter.Arbiter*/ArbiterP$0$grantedTask];
#line 67
enum /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$__nesc_unnamed4349 {
#line 67
  ArbiterP$0$RES_CONTROLLED, ArbiterP$0$RES_GRANTING, ArbiterP$0$RES_IMM_GRANTING, ArbiterP$0$RES_BUSY
};
#line 68
enum /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$__nesc_unnamed4350 {
#line 68
  ArbiterP$0$default_owner_id = 1U
};
#line 69
enum /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$__nesc_unnamed4351 {
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
static   void LedsP$Led2$toggle(void);



static   void LedsP$Led2$makeOutput(void);
#line 29
static   void LedsP$Led2$set(void);
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/LedsP.nc"
static inline  error_t LedsP$Init$init(void);
#line 63
static inline   void LedsP$Leds$led0On(void);
#line 78
static inline   void LedsP$Leds$led1On(void);
#line 103
static inline   void LedsP$Leds$led2Toggle(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$send(message_t *arg_0xb78ae760, uint8_t arg_0xb78ae8e8);
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$sendDone(
# 36 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0xb78b5748, 
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0xb7bed068, error_t arg_0xb7bed1f0);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Receive$receive(
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0xb78b3088, 
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0xb78c9a00, void *arg_0xb78c9ba0, uint8_t arg_0xb78c9d28);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$getHeader(message_t *msg);







static inline  error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len);
#line 81
static inline  void */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$getPayload(am_id_t id, message_t *m, uint8_t len);



static inline  void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$sendDone(message_t *msg, error_t result);



static inline   void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$default$sendDone(uint8_t id, message_t *msg, error_t result);



static inline   message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Receive$default$receive(uint8_t id, message_t *msg, void *payload, uint8_t len);



static inline  message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubReceive$receive(message_t *msg, void *payload, uint8_t len);
#line 115
static inline  uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$maxPayloadLength(void);



static inline  void */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$getPayload(message_t *msg, uint8_t len);
#line 156
static inline  am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$type(message_t *amsg);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  void SerialP$SplitControl$startDone(error_t arg_0xb7bea198);
#line 117
static  void SerialP$SplitControl$stopDone(error_t arg_0xb7bead48);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t SerialP$stopDoneTask$postTask(void);
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t SerialP$SerialControl$start(void);









static  error_t SerialP$SerialControl$stop(void);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t SerialP$RunTx$postTask(void);
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialFlush.nc"
static  void SerialP$SerialFlush$flush(void);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t SerialP$startDoneTask$postTask(void);
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
static   error_t SerialP$SerialFrameComm$putDelimiter(void);
#line 68
static   void SerialP$SerialFrameComm$resetReceive(void);
#line 54
static   error_t SerialP$SerialFrameComm$putData(uint8_t arg_0xb786d508);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t SerialP$defaultSerialFlushTask$postTask(void);
# 70 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
static   uint8_t SerialP$SendBytePacket$nextByte(void);









static   void SerialP$SendBytePacket$sendCompleted(error_t arg_0xb7873c08);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
static   error_t SerialP$ReceiveBytePacket$startPacket(void);






static   void SerialP$ReceiveBytePacket$byteReceived(uint8_t arg_0xb7870de8);










static   void SerialP$ReceiveBytePacket$endPacket(error_t arg_0xb786f3c8);
# 189 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialP.nc"
enum SerialP$__nesc_unnamed4352 {
#line 189
  SerialP$RunTx = 5U
};
#line 189
typedef int SerialP$__nesc_sillytask_RunTx[SerialP$RunTx];
#line 320
enum SerialP$__nesc_unnamed4353 {
#line 320
  SerialP$startDoneTask = 6U
};
#line 320
typedef int SerialP$__nesc_sillytask_startDoneTask[SerialP$startDoneTask];





enum SerialP$__nesc_unnamed4354 {
#line 326
  SerialP$stopDoneTask = 7U
};
#line 326
typedef int SerialP$__nesc_sillytask_stopDoneTask[SerialP$stopDoneTask];








enum SerialP$__nesc_unnamed4355 {
#line 335
  SerialP$defaultSerialFlushTask = 8U
};
#line 335
typedef int SerialP$__nesc_sillytask_defaultSerialFlushTask[SerialP$defaultSerialFlushTask];
#line 79
enum SerialP$__nesc_unnamed4356 {
  SerialP$RX_DATA_BUFFER_SIZE = 2, 
  SerialP$TX_DATA_BUFFER_SIZE = 4, 
  SerialP$SERIAL_MTU = 255, 
  SerialP$SERIAL_VERSION = 1, 
  SerialP$ACK_QUEUE_SIZE = 5
};

enum SerialP$__nesc_unnamed4357 {
  SerialP$RXSTATE_NOSYNC, 
  SerialP$RXSTATE_PROTO, 
  SerialP$RXSTATE_TOKEN, 
  SerialP$RXSTATE_INFO, 
  SerialP$RXSTATE_INACTIVE
};

enum SerialP$__nesc_unnamed4358 {
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
typedef enum SerialP$__nesc_unnamed4359 {
  SerialP$BUFFER_AVAILABLE, 
  SerialP$BUFFER_FILLING, 
  SerialP$BUFFER_COMPLETE
} SerialP$tx_data_buffer_states_t;

enum SerialP$__nesc_unnamed4360 {
  SerialP$TX_ACK_INDEX = 0, 
  SerialP$TX_DATA_INDEX = 1, 
  SerialP$TX_BUFFER_COUNT = 2
};






#line 122
typedef struct SerialP$__nesc_unnamed4361 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP$RX_DATA_BUFFER_SIZE + 1];
} SerialP$rx_buf_t;




#line 128
typedef struct SerialP$__nesc_unnamed4362 {
  uint8_t state;
  uint8_t buf;
} SerialP$tx_buf_t;





#line 133
typedef struct SerialP$__nesc_unnamed4363 {
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



static __inline void SerialP$txInit(void);
static __inline void SerialP$rxInit(void);
static __inline void SerialP$ackInit(void);

static __inline bool SerialP$ack_queue_is_full(void);
static __inline bool SerialP$ack_queue_is_empty(void);
static __inline void SerialP$ack_queue_push(uint8_t token);
static __inline uint8_t SerialP$ack_queue_top(void);
static inline uint8_t SerialP$ack_queue_pop(void);




static __inline void SerialP$rx_buffer_push(uint8_t data);
static __inline uint8_t SerialP$rx_buffer_top(void);
static __inline uint8_t SerialP$rx_buffer_pop(void);
static __inline uint16_t SerialP$rx_current_crc(void);

static void SerialP$rx_state_machine(bool isDelimeter, uint8_t data);
static void SerialP$MaybeScheduleTx(void);




static __inline void SerialP$txInit(void);
#line 205
static __inline void SerialP$rxInit(void);








static __inline void SerialP$ackInit(void);



static inline  error_t SerialP$Init$init(void);
#line 232
static __inline bool SerialP$ack_queue_is_full(void);









static __inline bool SerialP$ack_queue_is_empty(void);





static __inline void SerialP$ack_queue_push(uint8_t token);









static __inline uint8_t SerialP$ack_queue_top(void);









static inline uint8_t SerialP$ack_queue_pop(void);
#line 295
static __inline void SerialP$rx_buffer_push(uint8_t data);



static __inline uint8_t SerialP$rx_buffer_top(void);



static __inline uint8_t SerialP$rx_buffer_pop(void);





static __inline uint16_t SerialP$rx_current_crc(void);










static inline  void SerialP$startDoneTask$runTask(void);





static inline  void SerialP$stopDoneTask$runTask(void);



static inline  void SerialP$SerialFlush$flushDone(void);




static inline  void SerialP$defaultSerialFlushTask$runTask(void);


static inline   void SerialP$SerialFlush$default$flush(void);



static inline  error_t SerialP$SplitControl$start(void);




static void SerialP$testOff(void);
#line 384
static inline   void SerialP$SerialFrameComm$delimiterReceived(void);


static inline   void SerialP$SerialFrameComm$dataReceived(uint8_t data);



static inline bool SerialP$valid_rx_proto(uint8_t proto);










static void SerialP$rx_state_machine(bool isDelimeter, uint8_t data);
#line 502
static void SerialP$MaybeScheduleTx(void);










static inline   error_t SerialP$SendBytePacket$completeSend(void);








static inline   error_t SerialP$SendBytePacket$startSend(uint8_t b);
#line 539
static inline  void SerialP$RunTx$runTask(void);
#line 642
static inline   void SerialP$SerialFrameComm$putDone(void);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask$postTask(void);
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$sendDone(
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0xb780fe48, 
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
message_t *arg_0xb78ad878, error_t arg_0xb78ada00);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone$postTask(void);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Receive$receive(
# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0xb780f890, 
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0xb78c9a00, void *arg_0xb78c9ba0, uint8_t arg_0xb78c9d28);
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static   uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$upperLength(
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0xb780e8d8, 
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *arg_0xb787bdc0, uint8_t arg_0xb787a010);
#line 15
static   uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$offset(
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0xb780e8d8);
# 23 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static   uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$dataLinkLength(
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0xb780e8d8, 
# 23 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *arg_0xb787b5c8, uint8_t arg_0xb787b758);
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
static   error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$completeSend(void);
#line 51
static   error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$startSend(uint8_t arg_0xb7874bf0);
# 147 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_unnamed4364 {
#line 147
  SerialDispatcherP$0$signalSendDone = 9U
};
#line 147
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_sillytask_signalSendDone[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone];
#line 264
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_unnamed4365 {
#line 264
  SerialDispatcherP$0$receiveTask = 10U
};
#line 264
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_sillytask_receiveTask[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask];
#line 55
#line 51
typedef enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_unnamed4366 {
  SerialDispatcherP$0$SEND_STATE_IDLE = 0, 
  SerialDispatcherP$0$SEND_STATE_BEGIN = 1, 
  SerialDispatcherP$0$SEND_STATE_DATA = 2
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$send_state_t;

enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_unnamed4367 {
  SerialDispatcherP$0$RECV_STATE_IDLE = 0, 
  SerialDispatcherP$0$RECV_STATE_BEGIN = 1, 
  SerialDispatcherP$0$RECV_STATE_DATA = 2
};






#line 63
typedef struct /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_unnamed4368 {
  uint8_t which : 1;
  uint8_t bufZeroLocked : 1;
  uint8_t bufOneLocked : 1;
  uint8_t state : 2;
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recv_state_t;



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recv_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState = { 0, 0, 0, /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$RECV_STATE_IDLE };
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvType = TOS_SERIAL_UNKNOWN_ID;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvIndex = 0;


message_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$messages[2];
message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$messagePtrs[2] = { &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$messages[0], &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$messages[1] };




uint8_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveBuffer = (uint8_t *)&/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$messages[0];

uint8_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendBuffer = (void *)0;
/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$send_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SEND_STATE_IDLE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendLen = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendIndex = 0;
 error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendError = SUCCESS;
bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendCancelled = FALSE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendId = 0;


uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskPending = FALSE;
uart_id_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskType = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskWhich;
message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskBuf = (void *)0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskSize = 0;

static inline  error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$send(uint8_t id, message_t *msg, uint8_t len);
#line 147
static inline  void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone$runTask(void);
#line 167
static inline   uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$nextByte(void);
#line 183
static inline   void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$sendCompleted(error_t error);




static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$isCurrentBufferLocked(void);



static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$lockCurrentBuffer(void);








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$unlockBuffer(uint8_t which);








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveBufferSwap(void);




static inline   error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$startPacket(void);
#line 233
static inline   void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$byteReceived(uint8_t b);
#line 264
static inline  void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask$runTask(void);
#line 285
static   void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$endPacket(error_t result);
#line 344
static inline    uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$offset(uart_id_t id);


static inline    uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen);


static inline    uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen);




static inline   message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Receive$default$receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len);


static inline   void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$default$sendDone(uart_id_t idxxx, message_t *msg, error_t error);
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/UartStream.nc"
static   error_t HdlcTranslateC$UartStream$send(uint8_t *arg_0xb77d6b08, uint16_t arg_0xb77d6c98);
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
static   void HdlcTranslateC$SerialFrameComm$dataReceived(uint8_t arg_0xb786c758);





static   void HdlcTranslateC$SerialFrameComm$putDone(void);
#line 74
static   void HdlcTranslateC$SerialFrameComm$delimiterReceived(void);
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
#line 44
typedef struct HdlcTranslateC$__nesc_unnamed4369 {
  uint8_t sendEscape : 1;
  uint8_t receiveEscape : 1;
} HdlcTranslateC$HdlcState;


 HdlcTranslateC$HdlcState HdlcTranslateC$state = { 0, 0 };
 uint8_t HdlcTranslateC$txTemp;
 uint8_t HdlcTranslateC$m_data;


static inline   void HdlcTranslateC$SerialFrameComm$resetReceive(void);





static inline   void HdlcTranslateC$UartStream$receivedByte(uint8_t data);
#line 86
static   error_t HdlcTranslateC$SerialFrameComm$putDelimiter(void);





static   error_t HdlcTranslateC$SerialFrameComm$putData(uint8_t data);
#line 104
static inline   void HdlcTranslateC$UartStream$sendDone(uint8_t *buf, uint16_t len, 
error_t error);










static inline   void HdlcTranslateC$UartStream$receiveDone(uint8_t *buf, uint16_t len, error_t error);
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartTxControl$start(void);









static  error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartTxControl$stop(void);
# 79 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/UartStream.nc"
static   void /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$receivedByte(uint8_t arg_0xb77d4430);
#line 99
static   void /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$receiveDone(uint8_t *arg_0xb77d2138, uint16_t arg_0xb77d22c8, error_t arg_0xb77d2450);
#line 57
static   void /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$sendDone(uint8_t *arg_0xb77d5370, uint16_t arg_0xb77d5500, error_t arg_0xb77d5688);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static   error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$enableRxIntr(void);
#line 40
static   error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$enableTxIntr(void);
static   error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$disableTxIntr(void);

static   error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$disableRxIntr(void);


static   void /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$tx(uint8_t arg_0xb77b06b8);
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartRxControl$start(void);









static  error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartRxControl$stop(void);
# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
 uint16_t /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_len;
#line 62
 uint16_t /*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_len;
 uint8_t */*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_buf;
#line 63
 uint8_t */*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_buf;
 uint16_t /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_pos;
#line 64
 uint16_t /*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_pos;
 uint16_t /*Atm128Uart0C.UartP*/Atm128UartP$0$m_byte_time;
 uint8_t /*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_intr;
 uint8_t /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_intr;

static inline  error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$Init$init(void);







static inline  error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$StdControl$start(void);
#line 93
static inline  error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$StdControl$stop(void);
#line 133
static inline   void /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$rxDone(uint8_t data);
#line 155
static   error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$send(uint8_t *buf, uint16_t len);
#line 173
static inline   void /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$txDone(void);
#line 216
static inline   void /*Atm128Uart0C.UartP*/Atm128UartP$0$Counter$overflow(void);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static   void HplAtm128UartP$HplUart0$rxDone(uint8_t arg_0xb77ae198);
#line 47
static   void HplAtm128UartP$HplUart0$txDone(void);

static   void HplAtm128UartP$HplUart1$rxDone(uint8_t arg_0xb77ae198);
#line 47
static   void HplAtm128UartP$HplUart1$txDone(void);
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128Calibrate.nc"
static   uint16_t HplAtm128UartP$Atm128Calibrate$baudrateRegister(uint32_t arg_0xb7971178);
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static   void HplAtm128UartP$McuPowerState$update(void);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/HplAtm128UartP.nc"
static inline  error_t HplAtm128UartP$Uart0Init$init(void);
#line 130
static inline  error_t HplAtm128UartP$Uart0TxControl$start(void);





static inline  error_t HplAtm128UartP$Uart0TxControl$stop(void);





static inline  error_t HplAtm128UartP$Uart0RxControl$start(void);





static inline  error_t HplAtm128UartP$Uart0RxControl$stop(void);





static inline   error_t HplAtm128UartP$HplUart0$enableTxIntr(void);





static inline   error_t HplAtm128UartP$HplUart0$disableTxIntr(void);




static inline   error_t HplAtm128UartP$HplUart0$enableRxIntr(void);




static inline   error_t HplAtm128UartP$HplUart0$disableRxIntr(void);
#line 187
static   void HplAtm128UartP$HplUart0$tx(uint8_t data);






void __vector_25(void) __attribute((signal))   ;





void __vector_27(void) __attribute((interrupt))   ;



static inline  error_t HplAtm128UartP$Uart1Init$init(void);
#line 288
void __vector_36(void) __attribute((signal))   ;




void __vector_38(void) __attribute((interrupt))   ;





static inline    void HplAtm128UartP$HplUart1$default$txDone(void);
static inline    void HplAtm128UartP$HplUart1$default$rxDone(uint8_t data);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void HplAtm1281Timer3P$CompareA$fired(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static   void HplAtm1281Timer3P$Capture$captured(HplAtm1281Timer3P$Capture$size_type arg_0xb77307a0);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void HplAtm1281Timer3P$CompareB$fired(void);
#line 49
static   void HplAtm1281Timer3P$CompareC$fired(void);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void HplAtm1281Timer3P$Timer$overflow(void);
# 70 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline   uint16_t HplAtm1281Timer3P$Timer$get(void);


static inline   void HplAtm1281Timer3P$Timer$set(uint16_t t);








static inline   void HplAtm1281Timer3P$Timer$setScale(uint8_t s);










static inline   uint8_t HplAtm1281Timer3P$TimerCtrl$getControlB(void);
#line 106
static inline   void HplAtm1281Timer3P$TimerCtrl$setControlB(uint8_t x);
#line 144
static inline   void HplAtm1281Timer3P$Timer$start(void);
#line 205
static inline    void HplAtm1281Timer3P$CompareA$default$fired(void);
void __vector_32(void) __attribute((interrupt))   ;


static inline    void HplAtm1281Timer3P$CompareB$default$fired(void);
void __vector_33(void) __attribute((interrupt))   ;


static inline    void HplAtm1281Timer3P$CompareC$default$fired(void);
void __vector_34(void) __attribute((interrupt))   ;


static inline    void HplAtm1281Timer3P$Capture$default$captured(uint16_t time);
void __vector_31(void) __attribute((interrupt))   ;



void __vector_35(void) __attribute((interrupt))   ;
# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void /*InitThreeP.InitThree*/Atm128TimerInitC$0$Timer$setScale(uint8_t arg_0xb773ba08);
#line 58
static   void /*InitThreeP.InitThree*/Atm128TimerInitC$0$Timer$set(/*InitThreeP.InitThree*/Atm128TimerInitC$0$Timer$timer_size arg_0xb7741d60);










static   void /*InitThreeP.InitThree*/Atm128TimerInitC$0$Timer$start(void);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline  error_t /*InitThreeP.InitThree*/Atm128TimerInitC$0$Init$init(void);








static inline   void /*InitThreeP.InitThree*/Atm128TimerInitC$0$Timer$overflow(void);
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*CounterThree16C.NCounter*/Atm128CounterC$0$Counter$overflow(void);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline   void /*CounterThree16C.NCounter*/Atm128CounterC$0$Timer$overflow(void);
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*CounterMicro32C.Transform32*/TransformCounterC$0$Counter$overflow(void);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
/*CounterMicro32C.Transform32*/TransformCounterC$0$upper_count_type /*CounterMicro32C.Transform32*/TransformCounterC$0$m_upper;

enum /*CounterMicro32C.Transform32*/TransformCounterC$0$__nesc_unnamed4370 {

  TransformCounterC$0$LOW_SHIFT_RIGHT = 0, 
  TransformCounterC$0$HIGH_SHIFT_LEFT = 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC$0$from_size_type ) - /*CounterMicro32C.Transform32*/TransformCounterC$0$LOW_SHIFT_RIGHT, 
  TransformCounterC$0$NUM_UPPER_BITS = 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC$0$to_size_type ) - 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC$0$from_size_type ) + 0, 



  TransformCounterC$0$OVERFLOW_MASK = /*CounterMicro32C.Transform32*/TransformCounterC$0$NUM_UPPER_BITS ? ((/*CounterMicro32C.Transform32*/TransformCounterC$0$upper_count_type )2 << (/*CounterMicro32C.Transform32*/TransformCounterC$0$NUM_UPPER_BITS - 1)) - 1 : 0
};
#line 122
static inline   void /*CounterMicro32C.Transform32*/TransformCounterC$0$CounterFrom$overflow(void);
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline   uint8_t SerialPacketInfoActiveMessageP$Info$offset(void);


static inline   uint8_t SerialPacketInfoActiveMessageP$Info$dataLinkLength(message_t *msg, uint8_t upperLen);


static inline   uint8_t SerialPacketInfoActiveMessageP$Info$upperLength(message_t *msg, uint8_t dataLinkLen);
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

# 106 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline   void HplAtm1281Timer3P$TimerCtrl$setControlB(uint8_t x)
#line 106
{
  * (volatile uint8_t *)0x91 = x;
}

#line 93
static inline   uint8_t HplAtm1281Timer3P$TimerCtrl$getControlB(void)
#line 93
{
  return * (volatile uint8_t *)0x91;
}

#line 82
static inline   void HplAtm1281Timer3P$Timer$setScale(uint8_t s)
#line 82
{
  Atm128_TCCRB_t x = (Atm128_TCCRB_t )HplAtm1281Timer3P$TimerCtrl$getControlB();

#line 84
  x.bits.cs = s;
  HplAtm1281Timer3P$TimerCtrl$setControlB(x.flat);
}

# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   void /*InitThreeP.InitThree*/Atm128TimerInitC$0$Timer$setScale(uint8_t arg_0xb773ba08){
#line 95
  HplAtm1281Timer3P$Timer$setScale(arg_0xb773ba08);
#line 95
}
#line 95
# 144 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline   void HplAtm1281Timer3P$Timer$start(void)
#line 144
{
#line 144
  * (volatile uint8_t *)0x71 |= 1 << 0;
}

# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   void /*InitThreeP.InitThree*/Atm128TimerInitC$0$Timer$start(void){
#line 69
  HplAtm1281Timer3P$Timer$start();
#line 69
}
#line 69
# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline   void HplAtm1281Timer3P$Timer$set(uint16_t t)
#line 73
{
#line 73
  * (volatile uint16_t *)0x94 = t;
}

# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   void /*InitThreeP.InitThree*/Atm128TimerInitC$0$Timer$set(/*InitThreeP.InitThree*/Atm128TimerInitC$0$Timer$timer_size arg_0xb7741d60){
#line 58
  HplAtm1281Timer3P$Timer$set(arg_0xb7741d60);
#line 58
}
#line 58
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline  error_t /*InitThreeP.InitThree*/Atm128TimerInitC$0$Init$init(void)
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    /*InitThreeP.InitThree*/Atm128TimerInitC$0$Timer$set(0);
    /*InitThreeP.InitThree*/Atm128TimerInitC$0$Timer$start();
    /*InitThreeP.InitThree*/Atm128TimerInitC$0$Timer$setScale(2);
  }
  return SUCCESS;
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
inline static  error_t MotePlatformP$SubInit$init(void){
#line 51
  unsigned char result;
#line 51

#line 51
  result = /*InitThreeP.InitThree*/Atm128TimerInitC$0$Init$init();
#line 51
  result = ecombine(result, HplAt45dbIOP$Init$init());
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
# 235 "/usr/local/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void *source)
#line 235
{
  const uint8_t *base = source;

#line 237
  return base[0];
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$getHeader(message_t *msg)
#line 49
{
  return (serial_header_t *)((uint8_t *)msg + (size_t )& ((message_t *)0)->data - sizeof(serial_header_t ));
}

#line 156
static inline  am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$type(message_t *amsg)
#line 156
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$getHeader(amsg);

#line 158
  return __nesc_ntoh_uint8((unsigned char *)&header->type);
}

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
# 80 "RandRWC.nc"
static inline  void RandRWC$AMSend$sendDone(message_t *msg, error_t error)
#line 80
{
  if (error != SUCCESS) {
    RandRWC$Leds$led0On();
    }
}

# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline   void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$default$sendDone(uint8_t id, message_t *msg, error_t result)
#line 89
{
  return;
}

# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$sendDone(am_id_t arg_0xb78b5748, message_t *arg_0xb7bed068, error_t arg_0xb7bed1f0){
#line 99
  switch (arg_0xb78b5748) {
#line 99
    case 139:
#line 99
      RandRWC$AMSend$sendDone(arg_0xb7bed068, arg_0xb7bed1f0);
#line 99
      break;
#line 99
    default:
#line 99
      /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$default$sendDone(arg_0xb78b5748, arg_0xb7bed068, arg_0xb7bed1f0);
#line 99
      break;
#line 99
    }
#line 99
}
#line 99
# 85 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline  void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$sendDone(message_t *msg, error_t result)
#line 85
{
  /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$sendDone(/*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$type(msg), msg, result);
}

# 362 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline   void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$default$sendDone(uart_id_t idxxx, message_t *msg, error_t error)
#line 362
{
  return;
}

# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static  void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$sendDone(uart_id_t arg_0xb780fe48, message_t *arg_0xb78ad878, error_t arg_0xb78ada00){
#line 89
  switch (arg_0xb780fe48) {
#line 89
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 89
      /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$sendDone(arg_0xb78ad878, arg_0xb78ada00);
#line 89
      break;
#line 89
    default:
#line 89
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$default$sendDone(arg_0xb780fe48, arg_0xb78ad878, arg_0xb78ada00);
#line 89
      break;
#line 89
    }
#line 89
}
#line 89
# 147 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline  void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone$runTask(void)
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
static inline   message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Receive$default$receive(uint8_t id, message_t *msg, void *payload, uint8_t len)
#line 93
{
  return msg;
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
inline static  message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Receive$receive(am_id_t arg_0xb78b3088, message_t *arg_0xb78c9a00, void *arg_0xb78c9ba0, uint8_t arg_0xb78c9d28){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
    result = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Receive$default$receive(arg_0xb78b3088, arg_0xb78c9a00, arg_0xb78c9ba0, arg_0xb78c9d28);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 97 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline  message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubReceive$receive(message_t *msg, void *payload, uint8_t len)
#line 97
{
  return /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Receive$receive(/*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$type(msg), msg, msg->data, len);
}

# 357 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline   message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Receive$default$receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len)
#line 359
{
  return msg;
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
inline static  message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Receive$receive(uart_id_t arg_0xb780f890, message_t *arg_0xb78c9a00, void *arg_0xb78c9ba0, uint8_t arg_0xb78c9d28){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  switch (arg_0xb780f890) {
#line 67
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 67
      result = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubReceive$receive(arg_0xb78c9a00, arg_0xb78c9ba0, arg_0xb78c9d28);
#line 67
      break;
#line 67
    default:
#line 67
      result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Receive$default$receive(arg_0xb780f890, arg_0xb78c9a00, arg_0xb78c9ba0, arg_0xb78c9d28);
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
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline   uint8_t SerialPacketInfoActiveMessageP$Info$upperLength(message_t *msg, uint8_t dataLinkLen)
#line 46
{
  return dataLinkLen - sizeof(serial_header_t );
}

# 351 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline    uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen)
#line 352
{
  return 0;
}

# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
inline static   uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$upperLength(uart_id_t arg_0xb780e8d8, message_t *arg_0xb787bdc0, uint8_t arg_0xb787a010){
#line 31
  unsigned char result;
#line 31

#line 31
  switch (arg_0xb780e8d8) {
#line 31
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 31
      result = SerialPacketInfoActiveMessageP$Info$upperLength(arg_0xb787bdc0, arg_0xb787a010);
#line 31
      break;
#line 31
    default:
#line 31
      result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$upperLength(arg_0xb780e8d8, arg_0xb787bdc0, arg_0xb787a010);
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
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline   uint8_t SerialPacketInfoActiveMessageP$Info$offset(void)
#line 40
{
  return (uint8_t )(sizeof(message_header_t ) - sizeof(serial_header_t ));
}

# 344 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline    uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$offset(uart_id_t id)
#line 344
{
  return 0;
}

# 15 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
inline static   uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$offset(uart_id_t arg_0xb780e8d8){
#line 15
  unsigned char result;
#line 15

#line 15
  switch (arg_0xb780e8d8) {
#line 15
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 15
      result = SerialPacketInfoActiveMessageP$Info$offset();
#line 15
      break;
#line 15
    default:
#line 15
      result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$offset(arg_0xb780e8d8);
#line 15
      break;
#line 15
    }
#line 15

#line 15
  return result;
#line 15
}
#line 15
# 264 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline  void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask$runTask(void)
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

# 284 "RandRWC.nc"
static inline  void RandRWC$SerialControl$stopDone(error_t e)
#line 284
{
}

# 117 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static  void SerialP$SplitControl$stopDone(error_t arg_0xb7bead48){
#line 117
  RandRWC$SerialControl$stopDone(arg_0xb7bead48);
#line 117
}
#line 117
# 141 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/McuSleepC.nc"
static inline   void McuSleepC$McuPowerState$update(void)
#line 141
{
}

# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuPowerState.nc"
inline static   void HplAtm128UartP$McuPowerState$update(void){
#line 44
  McuSleepC$McuPowerState$update();
#line 44
}
#line 44
# 148 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/HplAtm128UartP.nc"
static inline  error_t HplAtm128UartP$Uart0RxControl$stop(void)
#line 148
{
  * (volatile uint8_t *)0XC1 &= ~(1 << 4);
  HplAtm128UartP$McuPowerState$update();
  return SUCCESS;
}

# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static  error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartRxControl$stop(void){
#line 84
  unsigned char result;
#line 84

#line 84
  result = HplAtm128UartP$Uart0RxControl$stop();
#line 84

#line 84
  return result;
#line 84
}
#line 84
# 136 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/HplAtm128UartP.nc"
static inline  error_t HplAtm128UartP$Uart0TxControl$stop(void)
#line 136
{
  * (volatile uint8_t *)0XC1 &= ~(1 << 3);
  HplAtm128UartP$McuPowerState$update();
  return SUCCESS;
}

# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static  error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartTxControl$stop(void){
#line 84
  unsigned char result;
#line 84

#line 84
  result = HplAtm128UartP$Uart0TxControl$stop();
#line 84

#line 84
  return result;
#line 84
}
#line 84
# 93 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline  error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$StdControl$stop(void)
#line 93
{
  /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartTxControl$stop();
  /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartRxControl$stop();
  return SUCCESS;
}

# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static  error_t SerialP$SerialControl$stop(void){
#line 84
  unsigned char result;
#line 84

#line 84
  result = /*Atm128Uart0C.UartP*/Atm128UartP$0$StdControl$stop();
#line 84

#line 84
  return result;
#line 84
}
#line 84
# 330 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline  void SerialP$SerialFlush$flushDone(void)
#line 330
{
  SerialP$SerialControl$stop();
  SerialP$SplitControl$stopDone(SUCCESS);
}

static inline  void SerialP$defaultSerialFlushTask$runTask(void)
#line 335
{
  SerialP$SerialFlush$flushDone();
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t SerialP$defaultSerialFlushTask$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(SerialP$defaultSerialFlushTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 338 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline   void SerialP$SerialFlush$default$flush(void)
#line 338
{
  SerialP$defaultSerialFlushTask$postTask();
}

# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialFlush.nc"
inline static  void SerialP$SerialFlush$flush(void){
#line 38
  SerialP$SerialFlush$default$flush();
#line 38
}
#line 38
# 326 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline  void SerialP$stopDoneTask$runTask(void)
#line 326
{
  SerialP$SerialFlush$flush();
}

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

# 325 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline  error_t BlockStorageP$BlockRead$read(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len)
#line 325
{
  return BlockStorageP$newRequest(BlockStorageP$R_READ, id, addr, buf, len);
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
inline static  error_t ConfigStorageP$BlockRead$read(uint8_t arg_0xb7b8eb88, storage_addr_t arg_0xb7b91e38, void *arg_0xb7b90010, storage_len_t arg_0xb7b901a0){
#line 56
  unsigned char result;
#line 56

#line 56
  result = BlockStorageP$BlockRead$read(arg_0xb7b8eb88, arg_0xb7b91e38, arg_0xb7b90010, arg_0xb7b901a0);
#line 56

#line 56
  return result;
#line 56
}
#line 56
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
# 195 "RandRWC.nc"
static inline  void RandRWC$SerialControl$startDone(error_t e)
#line 195
{
  if (e != SUCCESS) 
    {
      RandRWC$Leds$led0On();
      return;
    }

  RandRWC$scheck(RandRWC$ConfigMount$mount());
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static  void SerialP$SplitControl$startDone(error_t arg_0xb7bea198){
#line 92
  RandRWC$SerialControl$startDone(arg_0xb7bea198);
#line 92
}
#line 92
# 165 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/HplAtm128UartP.nc"
static inline   error_t HplAtm128UartP$HplUart0$enableRxIntr(void)
#line 165
{
  * (volatile uint8_t *)0XC1 |= 1 << 7;
  return SUCCESS;
}

# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static   error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$enableRxIntr(void){
#line 42
  unsigned char result;
#line 42

#line 42
  result = HplAtm128UartP$HplUart0$enableRxIntr();
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 142 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/HplAtm128UartP.nc"
static inline  error_t HplAtm128UartP$Uart0RxControl$start(void)
#line 142
{
  * (volatile uint8_t *)0XC1 |= 1 << 4;
  HplAtm128UartP$McuPowerState$update();
  return SUCCESS;
}

# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static  error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartRxControl$start(void){
#line 74
  unsigned char result;
#line 74

#line 74
  result = HplAtm128UartP$Uart0RxControl$start();
#line 74

#line 74
  return result;
#line 74
}
#line 74
# 130 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/HplAtm128UartP.nc"
static inline  error_t HplAtm128UartP$Uart0TxControl$start(void)
#line 130
{
  * (volatile uint8_t *)0XC1 |= 1 << 3;
  HplAtm128UartP$McuPowerState$update();
  return SUCCESS;
}

# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static  error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartTxControl$start(void){
#line 74
  unsigned char result;
#line 74

#line 74
  result = HplAtm128UartP$Uart0TxControl$start();
#line 74

#line 74
  return result;
#line 74
}
#line 74
# 170 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/HplAtm128UartP.nc"
static inline   error_t HplAtm128UartP$HplUart0$disableRxIntr(void)
#line 170
{
  * (volatile uint8_t *)0XC1 &= ~(1 << 7);
  return SUCCESS;
}

# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static   error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$disableRxIntr(void){
#line 43
  unsigned char result;
#line 43

#line 43
  result = HplAtm128UartP$HplUart0$disableRxIntr();
#line 43

#line 43
  return result;
#line 43
}
#line 43
# 160 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/HplAtm128UartP.nc"
static inline   error_t HplAtm128UartP$HplUart0$disableTxIntr(void)
#line 160
{
  * (volatile uint8_t *)0XC1 &= ~(1 << 6);
  return SUCCESS;
}

# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static   error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$disableTxIntr(void){
#line 41
  unsigned char result;
#line 41

#line 41
  result = HplAtm128UartP$HplUart0$disableTxIntr();
#line 41

#line 41
  return result;
#line 41
}
#line 41
# 77 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline  error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$StdControl$start(void)
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
inline static  error_t SerialP$SerialControl$start(void){
#line 74
  unsigned char result;
#line 74

#line 74
  result = /*Atm128Uart0C.UartP*/Atm128UartP$0$StdControl$start();
#line 74

#line 74
  return result;
#line 74
}
#line 74
# 320 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline  void SerialP$startDoneTask$runTask(void)
#line 320
{
  SerialP$SerialControl$start();
  SerialP$SplitControl$startDone(SUCCESS);
}

# 85 "RandRWC.nc"
static inline void RandRWC$fail(error_t e)
#line 85
{
  RandRWC$Leds$led0On();
  RandRWC$report(e);
}

# 115 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline  uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$maxPayloadLength(void)
#line 115
{
  return 28;
}

static inline  void */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$getPayload(message_t *msg, uint8_t len)
#line 119
{
  if (len > /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$maxPayloadLength()) {
      return (void *)0;
    }
  else {
      return (void *)msg->data;
    }
}

#line 81
static inline  void */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$getPayload(am_id_t id, message_t *m, uint8_t len)
#line 81
{
  return /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$getPayload(m, len);
}

# 124 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  void *RandRWC$AMSend$getPayload(message_t *arg_0xb7bedcb0, uint8_t arg_0xb7bede38){
#line 124
  void *result;
#line 124

#line 124
  result = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$getPayload(139, arg_0xb7bedcb0, arg_0xb7bede38);
#line 124

#line 124
  return result;
#line 124
}
#line 124
# 240 "/usr/local/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_hton_uint8(void *target, uint8_t value)
#line 240
{
  uint8_t *base = target;

#line 242
  base[0] = value;
  return value;
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

# 522 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline   error_t SerialP$SendBytePacket$startSend(uint8_t b)
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
inline static   error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$startSend(uint8_t arg_0xb7874bf0){
#line 51
  unsigned char result;
#line 51

#line 51
  result = SerialP$SendBytePacket$startSend(arg_0xb7874bf0);
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline   uint8_t SerialPacketInfoActiveMessageP$Info$dataLinkLength(message_t *msg, uint8_t upperLen)
#line 43
{
  return upperLen + sizeof(serial_header_t );
}

# 347 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline    uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen)
#line 348
{
  return 0;
}

# 23 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
inline static   uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$dataLinkLength(uart_id_t arg_0xb780e8d8, message_t *arg_0xb787b5c8, uint8_t arg_0xb787b758){
#line 23
  unsigned char result;
#line 23

#line 23
  switch (arg_0xb780e8d8) {
#line 23
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 23
      result = SerialPacketInfoActiveMessageP$Info$dataLinkLength(arg_0xb787b5c8, arg_0xb787b758);
#line 23
      break;
#line 23
    default:
#line 23
      result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$dataLinkLength(arg_0xb780e8d8, arg_0xb787b5c8, arg_0xb787b758);
#line 23
      break;
#line 23
    }
#line 23

#line 23
  return result;
#line 23
}
#line 23
# 100 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline  error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$send(uint8_t id, message_t *msg, uint8_t len)
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
inline static  error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$send(message_t *arg_0xb78ae760, uint8_t arg_0xb78ae8e8){
#line 64
  unsigned char result;
#line 64

#line 64
  result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$send(TOS_SERIAL_ACTIVE_MESSAGE_ID, arg_0xb78ae760, arg_0xb78ae8e8);
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline  error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 59
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$getHeader(msg);

#line 61
  __nesc_hton_uint16((unsigned char *)&header->dest, dest);





  __nesc_hton_uint8((unsigned char *)&header->type, id);
  __nesc_hton_uint8((unsigned char *)&header->length, len);

  return /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$send(msg, len);
}

# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  error_t RandRWC$AMSend$send(am_addr_t arg_0xb7bf0ce8, message_t *arg_0xb7bf0e98, uint8_t arg_0xb7bef030){
#line 69
  unsigned char result;
#line 69

#line 69
  result = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$send(139, arg_0xb7bf0ce8, arg_0xb7bf0e98, arg_0xb7bef030);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t SerialP$RunTx$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(SerialP$RunTx);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 353 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
static inline  int ConfigStorageP$BConfig$isConfig(uint8_t id)
#line 353
{
  return id < ConfigStorageP$N;
}

# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
inline static  int BlockStorageP$BConfig$isConfig(uint8_t arg_0xb7b36410){
#line 24
  int result;
#line 24

#line 24
  result = ConfigStorageP$BConfig$isConfig(arg_0xb7b36410);
#line 24

#line 24
  return result;
#line 24
}
#line 24
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
inline static  at45page_t BlockStorageP$At45dbVolume$volumeSize(uint8_t arg_0xb7b35c10){
#line 30
  unsigned short result;
#line 30

#line 30
  switch (arg_0xb7b35c10) {
#line 30
    case /*RandRWAppC.ConfigStorageC*/ConfigStorageC$0$CONFIG_ID:
#line 30
      result = At45dbStorageManagerC$At45dbVolume$volumeSize(0);
#line 30
      break;
#line 30
    default:
#line 30
      result = BlockStorageP$At45dbVolume$default$volumeSize(arg_0xb7b35c10);
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
inline static   error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Queue$enqueue(resource_client_id_t arg_0xb7928ee8){
#line 69
  unsigned char result;
#line 69

#line 69
  result = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(arg_0xb7928ee8);
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
inline static   void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceRequested$requested(uint8_t arg_0xb791c738){
#line 43
    /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(arg_0xb791c738);
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
inline static   error_t BlockStorageP$Resource$request(uint8_t arg_0xb7b31a60){
#line 78
  unsigned char result;
#line 78

#line 78
  switch (arg_0xb7b31a60) {
#line 78
    case /*RandRWAppC.ConfigStorageC*/ConfigStorageC$0$CONFIG_ID:
#line 78
      result = /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Resource$request(/*RandRWAppC.ConfigStorageC*/ConfigStorageC$0$RESOURCE_ID);
#line 78
      break;
#line 78
    default:
#line 78
      result = BlockStorageP$Resource$default$request(arg_0xb7b31a60);
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
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static   error_t SerialP$SerialFrameComm$putDelimiter(void){
#line 45
  unsigned char result;
#line 45

#line 45
  result = HdlcTranslateC$SerialFrameComm$putDelimiter();
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 183 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline   void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$sendCompleted(error_t error)
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
inline static   void SerialP$SendBytePacket$sendCompleted(error_t arg_0xb7873c08){
#line 80
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$sendCompleted(arg_0xb7873c08);
#line 80
}
#line 80
# 242 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline bool SerialP$ack_queue_is_empty(void)
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











static __inline uint8_t SerialP$ack_queue_top(void)
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

static inline uint8_t SerialP$ack_queue_pop(void)
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
static inline  void SerialP$RunTx$runTask(void)
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
inline static   error_t SerialP$stopDoneTask$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(SerialP$stopDoneTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 154 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/HplAtm128UartP.nc"
static inline   error_t HplAtm128UartP$HplUart0$enableTxIntr(void)
#line 154
{
  * (volatile uint8_t *)0xC0 |= 1 << 6;
  * (volatile uint8_t *)0XC1 |= 1 << 6;
  return SUCCESS;
}

# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static   error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$enableTxIntr(void){
#line 40
  unsigned char result;
#line 40

#line 40
  result = HplAtm128UartP$HplUart0$enableTxIntr();
#line 40

#line 40
  return result;
#line 40
}
#line 40
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
inline static  int BlockStorageP$BConfig$writeHook(uint8_t arg_0xb7b36410){
#line 37
  int result;
#line 37

#line 37
  result = ConfigStorageP$BConfig$writeHook(arg_0xb7b36410);
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
inline static  void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Resource$granted(uint8_t arg_0xb791ddd8){
#line 92
  switch (arg_0xb791ddd8) {
#line 92
    case /*RandRWAppC.ConfigStorageC*/ConfigStorageC$0$RESOURCE_ID:
#line 92
      BlockStorageP$Resource$granted(/*RandRWAppC.ConfigStorageC*/ConfigStorageC$0$CONFIG_ID);
#line 92
      break;
#line 92
    default:
#line 92
      /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Resource$default$granted(arg_0xb791ddd8);
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
inline static   void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$configure(uint8_t arg_0xb791b910){
#line 49
    /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(arg_0xb791b910);
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
inline static  void ConfigStorageP$BConfig$writeContinue(uint8_t arg_0xb7b9f920, error_t arg_0xb7ba0980){
#line 44
  BlockStorageP$BConfig$writeContinue(arg_0xb7b9f920, arg_0xb7ba0980);
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
inline static  void BlockStorageP$At45db$erase(at45page_t arg_0xb7b9a858, uint8_t arg_0xb7b9a9e8){
#line 100
  At45dbP$At45db$erase(arg_0xb7b9a858, arg_0xb7b9a9e8);
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
inline static  void At45dbP$HplAt45db$erase(uint8_t arg_0xb7adb4e0, at45page_t arg_0xb7adb670){
#line 100
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$erase(arg_0xb7adb4e0, arg_0xb7adb670);
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
inline static  void At45dbP$At45db$readDone(error_t arg_0xb7b95168){
#line 162
  BlockStorageP$At45db$readDone(arg_0xb7b95168);
#line 162
  ConfigStorageP$At45db$readDone(arg_0xb7b95168);
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
inline static   void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$unconfigure(uint8_t arg_0xb791b910){
#line 55
    /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(arg_0xb791b910);
#line 55
}
#line 55
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
inline static   error_t BlockStorageP$Resource$release(uint8_t arg_0xb7b31a60){
#line 110
  unsigned char result;
#line 110

#line 110
  switch (arg_0xb7b31a60) {
#line 110
    case /*RandRWAppC.ConfigStorageC*/ConfigStorageC$0$CONFIG_ID:
#line 110
      result = /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Resource$release(/*RandRWAppC.ConfigStorageC*/ConfigStorageC$0$RESOURCE_ID);
#line 110
      break;
#line 110
    default:
#line 110
      result = BlockStorageP$Resource$default$release(arg_0xb7b31a60);
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
inline static  void ConfigStorageP$ConfigStorage$readDone(uint8_t arg_0xb7ba4420, storage_addr_t arg_0xb7c05100, void *arg_0xb7c052a0, storage_len_t arg_0xb7c05430, error_t arg_0xb7c055c8){
#line 80
  switch (arg_0xb7ba4420) {
#line 80
    case /*RandRWAppC.ConfigStorageC*/ConfigStorageC$0$CONFIG_ID:
#line 80
      RandRWC$ConfigStorage$readDone(arg_0xb7c05100, arg_0xb7c052a0, arg_0xb7c05430, arg_0xb7c055c8);
#line 80
      break;
#line 80
    default:
#line 80
      ConfigStorageP$ConfigStorage$default$readDone(arg_0xb7ba4420, arg_0xb7c05100, arg_0xb7c052a0, arg_0xb7c05430, arg_0xb7c055c8);
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

# 403 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
static inline   void ConfigStorageP$Mount$default$mountDone(uint8_t id, error_t error)
#line 403
{
}

# 36 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Mount.nc"
inline static  void ConfigStorageP$Mount$mountDone(uint8_t arg_0xb7ba6d40, error_t arg_0xb7be8a38){
#line 36
  switch (arg_0xb7ba6d40) {
#line 36
    case /*RandRWAppC.ConfigStorageC*/ConfigStorageC$0$CONFIG_ID:
#line 36
      RandRWC$ConfigMount$mountDone(arg_0xb7be8a38);
#line 36
      break;
#line 36
    default:
#line 36
      ConfigStorageP$Mount$default$mountDone(arg_0xb7ba6d40, arg_0xb7be8a38);
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
inline static  void BlockStorageP$BlockRead$readDone(uint8_t arg_0xb7b3b3e0, storage_addr_t arg_0xb7b90830, void *arg_0xb7b909d0, storage_len_t arg_0xb7b90b60, error_t arg_0xb7b90cf8){
#line 67
  ConfigStorageP$BlockRead$readDone(arg_0xb7b3b3e0, arg_0xb7b90830, arg_0xb7b909d0, arg_0xb7b90b60, arg_0xb7b90cf8);
#line 67
}
#line 67
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static inline   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$toggle(void)
#line 48
{
#line 48
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 48
    * (volatile uint8_t *)34U ^= 1 << 0;
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
inline static   void RandRWC$Leds$led2Toggle(void){
#line 89
  LedsP$Leds$led2Toggle();
#line 89
}
#line 89
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
inline static  storage_len_t ConfigStorageP$BlockRead$getSize(uint8_t arg_0xb7b8eb88){
#line 103
  unsigned long result;
#line 103

#line 103
  result = BlockStorageP$BlockRead$getSize(arg_0xb7b8eb88);
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
inline static  error_t ConfigStorageP$BlockRead$computeCrc(uint8_t arg_0xb7b8eb88, storage_addr_t arg_0xb7b8f340, storage_len_t arg_0xb7b8f4d0, uint16_t arg_0xb7b8f670){
#line 83
  unsigned char result;
#line 83

#line 83
  result = BlockStorageP$BlockRead$computeCrc(arg_0xb7b8eb88, arg_0xb7b8f340, arg_0xb7b8f4d0, arg_0xb7b8f670);
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
# 301 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline  error_t BlockStorageP$BlockWrite$write(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len)
#line 301
{
  return BlockStorageP$newRequest(BlockStorageP$R_WRITE, id, addr, buf, len);
}

# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
inline static  error_t ConfigStorageP$BlockWrite$write(uint8_t arg_0xb7b8d1f0, storage_addr_t arg_0xb7b8b898, void *arg_0xb7b8ba38, storage_len_t arg_0xb7b8bbc8){
#line 58
  unsigned char result;
#line 58

#line 58
  result = BlockStorageP$BlockWrite$write(arg_0xb7b8d1f0, arg_0xb7b8b898, arg_0xb7b8ba38, arg_0xb7b8bbc8);
#line 58

#line 58
  return result;
#line 58
}
#line 58
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
inline static  error_t RandRWC$ConfigStorage$write(storage_addr_t arg_0xb7c05ba8, void *arg_0xb7c05d48, storage_len_t arg_0xb7c05ed8){
#line 97
  unsigned char result;
#line 97

#line 97
  result = ConfigStorageP$ConfigStorage$write(/*RandRWAppC.ConfigStorageC*/ConfigStorageC$0$CONFIG_ID, arg_0xb7c05ba8, arg_0xb7c05d48, arg_0xb7c05ed8);
#line 97

#line 97
  return result;
#line 97
}
#line 97
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
inline static  error_t RandRWC$ConfigStorage$read(storage_addr_t arg_0xb7c07638, void *arg_0xb7c077d8, storage_len_t arg_0xb7c07968){
#line 69
  unsigned char result;
#line 69

#line 69
  result = ConfigStorageP$ConfigStorage$read(/*RandRWAppC.ConfigStorageC*/ConfigStorageC$0$CONFIG_ID, arg_0xb7c07638, arg_0xb7c077d8, arg_0xb7c07968);
#line 69

#line 69
  return result;
#line 69
}
#line 69
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
# 90 "RandRWC.nc"
static inline void RandRWC$success(void)
#line 90
{
  RandRWC$Leds$led1On();
  RandRWC$report(0x80);
}

#line 135
static inline int RandRWC$overwritten(int c)
#line 135
{
  int i;


  for (i = c + 1; i < RandRWC$NWRITES; i++) 
    if (RandRWC$overlap(i, c) || RandRWC$overlap(c, i)) {
      return TRUE;
      }
#line 142
  return FALSE;
}

#line 172
static inline  void RandRWC$ConfigStorage$writeDone(storage_addr_t x, void *buf, storage_len_t y, error_t result)
#line 172
{
  int c = RandRWC$count - 1;

  if (RandRWC$scheck(result) && 
  RandRWC$bcheck(x == RandRWC$ops[c].addr && y == RandRWC$ops[c].len && buf == RandRWC$ops[c].data)) {
    RandRWC$nextWrite();
    }
}

# 405 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
static inline   void ConfigStorageP$ConfigStorage$default$writeDone(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len, error_t error)
#line 405
{
}

# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
inline static  void ConfigStorageP$ConfigStorage$writeDone(uint8_t arg_0xb7ba4420, storage_addr_t arg_0xb7c045c0, void *arg_0xb7c04760, storage_len_t arg_0xb7c048f0, error_t arg_0xb7c04a88){
#line 110
  switch (arg_0xb7ba4420) {
#line 110
    case /*RandRWAppC.ConfigStorageC*/ConfigStorageC$0$CONFIG_ID:
#line 110
      RandRWC$ConfigStorage$writeDone(arg_0xb7c045c0, arg_0xb7c04760, arg_0xb7c048f0, arg_0xb7c04a88);
#line 110
      break;
#line 110
    default:
#line 110
      ConfigStorageP$ConfigStorage$default$writeDone(arg_0xb7ba4420, arg_0xb7c045c0, arg_0xb7c04760, arg_0xb7c048f0, arg_0xb7c04a88);
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
inline static  error_t ConfigStorageP$BlockWrite$sync(uint8_t arg_0xb7b8d1f0){
#line 103
  unsigned char result;
#line 103

#line 103
  result = BlockStorageP$BlockWrite$sync(arg_0xb7b8d1f0);
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
inline static  void BlockStorageP$BlockWrite$writeDone(uint8_t arg_0xb7b3c8e8, storage_addr_t arg_0xb7b8a338, void *arg_0xb7b8a4d8, storage_len_t arg_0xb7b8a668, error_t arg_0xb7b8a800){
#line 71
  ConfigStorageP$BlockWrite$writeDone(arg_0xb7b3c8e8, arg_0xb7b8a338, arg_0xb7b8a4d8, arg_0xb7b8a668, arg_0xb7b8a800);
#line 71
}
#line 71
# 395 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
static inline  void ConfigStorageP$BlockWrite$eraseDone(uint8_t id, error_t error)
#line 395
{
}

# 91 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
inline static  void BlockStorageP$BlockWrite$eraseDone(uint8_t arg_0xb7b3c8e8, error_t arg_0xb7b89258){
#line 91
  ConfigStorageP$BlockWrite$eraseDone(arg_0xb7b3c8e8, arg_0xb7b89258);
#line 91
}
#line 91
# 180 "RandRWC.nc"
static inline  void RandRWC$ConfigStorage$commitDone(error_t result)
#line 180
{
  if (RandRWC$scheck(result)) {
    RandRWC$done();
    }
}

# 406 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
static inline   void ConfigStorageP$ConfigStorage$default$commitDone(uint8_t id, error_t error)
#line 406
{
}

# 133 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
inline static  void ConfigStorageP$ConfigStorage$commitDone(uint8_t arg_0xb7ba4420, error_t arg_0xb7c035f0){
#line 133
  switch (arg_0xb7ba4420) {
#line 133
    case /*RandRWAppC.ConfigStorageC*/ConfigStorageC$0$CONFIG_ID:
#line 133
      RandRWC$ConfigStorage$commitDone(arg_0xb7c035f0);
#line 133
      break;
#line 133
    default:
#line 133
      ConfigStorageP$ConfigStorage$default$commitDone(arg_0xb7ba4420, arg_0xb7c035f0);
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
inline static  void BlockStorageP$BlockRead$computeCrcDone(uint8_t arg_0xb7b3b3e0, storage_addr_t arg_0xb7b8fcc0, storage_len_t arg_0xb7b8fe50, uint16_t arg_0xb7b8e010, error_t arg_0xb7b8e198){
#line 95
  ConfigStorageP$BlockRead$computeCrcDone(arg_0xb7b3b3e0, arg_0xb7b8fcc0, arg_0xb7b8fe50, arg_0xb7b8e010, arg_0xb7b8e198);
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
inline static  void BlockStorageP$BlockWrite$syncDone(uint8_t arg_0xb7b3c8e8, error_t arg_0xb7b89c30){
#line 112
  ConfigStorageP$BlockWrite$syncDone(arg_0xb7b3c8e8, arg_0xb7b89c30);
#line 112
}
#line 112
# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
inline static  int BlockStorageP$BConfig$flipped(uint8_t arg_0xb7b36410){
#line 30
  int result;
#line 30

#line 30
  result = ConfigStorageP$BConfig$flipped(arg_0xb7b36410);
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
inline static  at45page_t BlockStorageP$At45dbVolume$remap(uint8_t arg_0xb7b35c10, at45page_t arg_0xb7b35328){
#line 24
  unsigned short result;
#line 24

#line 24
  switch (arg_0xb7b35c10) {
#line 24
    case /*RandRWAppC.ConfigStorageC*/ConfigStorageC$0$CONFIG_ID:
#line 24
      result = At45dbStorageManagerC$At45dbVolume$remap(0, arg_0xb7b35328);
#line 24
      break;
#line 24
    default:
#line 24
      result = BlockStorageP$At45dbVolume$default$remap(arg_0xb7b35c10, arg_0xb7b35328);
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
inline static  void BlockStorageP$At45db$write(at45page_t arg_0xb7b9c958, at45pageoffset_t arg_0xb7b9caf0, void *arg_0xb7b9cca0, at45pageoffset_t arg_0xb7b9ce38){
#line 62
  At45dbP$At45db$write(arg_0xb7b9c958, arg_0xb7b9caf0, arg_0xb7b9cca0, arg_0xb7b9ce38);
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
inline static  void BlockStorageP$At45db$read(at45page_t arg_0xb7b96558, at45pageoffset_t arg_0xb7b966f0, void *arg_0xb7b968a0, at45pageoffset_t arg_0xb7b96a38){
#line 155
  At45dbP$At45db$read(arg_0xb7b96558, arg_0xb7b966f0, arg_0xb7b968a0, arg_0xb7b96a38);
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
inline static  void BlockStorageP$At45db$computeCrc(at45page_t arg_0xb7b956c0, at45pageoffset_t arg_0xb7b95858, at45pageoffset_t arg_0xb7b95a00, uint16_t arg_0xb7b95b90){
#line 176
  At45dbP$At45db$computeCrc(arg_0xb7b956c0, arg_0xb7b95858, arg_0xb7b95a00, arg_0xb7b95b90);
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
inline static  void At45dbP$At45db$computeCrcDone(error_t arg_0xb7b94330, uint16_t arg_0xb7b944c0){
#line 183
  BlockStorageP$At45db$computeCrcDone(arg_0xb7b94330, arg_0xb7b944c0);
#line 183
  ConfigStorageP$At45db$computeCrcDone(arg_0xb7b94330, arg_0xb7b944c0);
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
inline static  void At45dbP$At45db$writeDone(error_t arg_0xb7b9b520){
#line 69
  BlockStorageP$At45db$writeDone(arg_0xb7b9b520);
#line 69
  ConfigStorageP$At45db$writeDone(arg_0xb7b9b520);
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
inline static  void At45dbP$At45db$syncDone(error_t arg_0xb7b970b0){
#line 125
  BlockStorageP$At45db$syncDone(arg_0xb7b970b0);
#line 125
  ConfigStorageP$At45db$syncDone(arg_0xb7b970b0);
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
inline static  void At45dbP$At45db$flushDone(error_t arg_0xb7b96010){
#line 143
  BlockStorageP$At45db$flushDone(arg_0xb7b96010);
#line 143
  ConfigStorageP$At45db$flushDone(arg_0xb7b96010);
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
inline static  void At45dbP$At45db$eraseDone(error_t arg_0xb7b99188){
#line 105
  BlockStorageP$At45db$eraseDone(arg_0xb7b99188);
#line 105
  ConfigStorageP$At45db$eraseDone(arg_0xb7b99188);
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
inline static  void At45dbP$At45db$copyPageDone(error_t arg_0xb7b9a330){
#line 85
  BlockStorageP$At45db$copyPageDone(arg_0xb7b9a330);
#line 85
  ConfigStorageP$At45db$copyPageDone(arg_0xb7b9a330);
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
inline static  void At45dbP$HplAt45db$flush(uint8_t arg_0xb7addda8, at45page_t arg_0xb7adc010){
#line 73
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$flush(arg_0xb7addda8, arg_0xb7adc010);
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
inline static  void At45dbP$HplAt45db$compare(uint8_t arg_0xb7adc9e0, at45page_t arg_0xb7adcb70){
#line 87
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$compare(arg_0xb7adc9e0, arg_0xb7adcb70);
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
inline static  void At45dbP$HplAt45db$readBuffer(uint8_t arg_0xb7adbf10, at45pageoffset_t arg_0xb7ad90c8, uint8_t *arg_0xb7ad9280, uint16_t arg_0xb7ad9410){
#line 119
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$readBuffer(arg_0xb7adbf10, arg_0xb7ad90c8, arg_0xb7ad9280, arg_0xb7ad9410);
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
inline static  void At45dbP$HplAt45db$crc(uint8_t arg_0xb7ad8c08, at45page_t arg_0xb7ad8d98, at45pageoffset_t arg_0xb7ad7010, at45pageoffset_t arg_0xb7ad71b8, uint16_t arg_0xb7ad7348){
#line 157
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$crc(arg_0xb7ad8c08, arg_0xb7ad8d98, arg_0xb7ad7010, arg_0xb7ad71b8, arg_0xb7ad7348);
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
inline static  void At45dbP$HplAt45db$write(uint8_t arg_0xb7ad6010, at45page_t arg_0xb7ad61a0, at45pageoffset_t arg_0xb7ad6338, uint8_t *arg_0xb7ad64f0, at45pageoffset_t arg_0xb7ad6688){
#line 178
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$write(arg_0xb7ad6010, arg_0xb7ad61a0, arg_0xb7ad6338, arg_0xb7ad64f0, arg_0xb7ad6688);
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
inline static  void At45dbP$HplAt45db$fill(uint8_t arg_0xb7add328, at45page_t arg_0xb7add4b8){
#line 55
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$fill(arg_0xb7add328, arg_0xb7add4b8);
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
inline static  at45page_t ConfigStorageP$BConfig$remap(uint8_t arg_0xb7b9f920, at45page_t arg_0xb7b9f340){
#line 58
  unsigned short result;
#line 58

#line 58
  result = BlockStorageP$BConfig$remap(arg_0xb7b9f920, arg_0xb7b9f340);
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
inline static  void ConfigStorageP$At45db$copyPage(at45page_t arg_0xb7b9ba80, at45page_t arg_0xb7b9bc10){
#line 80
  At45dbP$At45db$copyPage(arg_0xb7b9ba80, arg_0xb7b9bc10);
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
inline static   void At45dbP$BusyWait$wait(At45dbP$BusyWait$size_type arg_0xb7ad2e50){
#line 55
  BusyWaitMicroC$BusyWait$wait(arg_0xb7ad2e50);
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
inline static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$crcDone(uint16_t arg_0xb7ad7aa8){
#line 163
  At45dbP$HplAt45db$crcDone(arg_0xb7ad7aa8);
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
inline static   uint8_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$FlashSpi$write(uint8_t arg_0xb7a89ca0){
#line 34
  unsigned char result;
#line 34

#line 34
  result = HplAt45dbIOP$FlashSpi$write(arg_0xb7a89ca0);
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
inline static   void HplAt45dbIOP$BusyWait$wait(HplAt45dbIOP$BusyWait$size_type arg_0xb7ad2e50){
#line 55
  BusyWaitMicroC$BusyWait$wait(arg_0xb7ad2e50);
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
inline static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$waitCompareDone(bool arg_0xb7adfd68){
#line 47
  At45dbP$HplAt45db$waitCompareDone(arg_0xb7adfd68);
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

# 214 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline void SerialP$ackInit(void)
#line 214
{
  SerialP$ackQ.writePtr = SerialP$ackQ.readPtr = 0;
}

#line 205
static __inline void SerialP$rxInit(void)
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
static __inline void SerialP$txInit(void)
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
static inline  error_t SerialP$Init$init(void)
#line 218
{

  SerialP$txInit();
  SerialP$rxInit();
  SerialP$ackInit();

  return SUCCESS;
}

# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline  error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$Init$init(void)
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

# 143 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/MeasureClockC.nc"
static inline   uint16_t MeasureClockC$Atm128Calibrate$baudrateRegister(uint32_t baudrate)
#line 143
{

  return ((uint32_t )MeasureClockC$cycles << 12) / baudrate - 1;
}

# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128Calibrate.nc"
inline static   uint16_t HplAtm128UartP$Atm128Calibrate$baudrateRegister(uint32_t arg_0xb7971178){
#line 60
  unsigned short result;
#line 60

#line 60
  result = MeasureClockC$Atm128Calibrate$baudrateRegister(arg_0xb7971178);
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 204 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/HplAtm128UartP.nc"
static inline  error_t HplAtm128UartP$Uart1Init$init(void)
#line 204
{
  Atm128UartMode_t mode;
  Atm128UartStatus_t stts;
  Atm128UartControl_t ctrl;
  uint16_t ubrr1;

  ctrl.bits = (struct Atm128_UCSRB_t ){ .rxcie = 0, .txcie = 0, .rxen = 0, .txen = 0 };
  stts.bits = (struct Atm128_UCSRA_t ){ .u2x = 1 };
  mode.bits = (struct Atm128_UCSRC_t ){ .ucsz = ATM128_UART_DATA_SIZE_8_BITS };

  ubrr1 = HplAtm128UartP$Atm128Calibrate$baudrateRegister(PLATFORM_BAUDRATE);
  * (volatile uint8_t *)0xCC = ubrr1;
  * (volatile uint8_t *)0xCD = ubrr1 >> 8;
  * (volatile uint8_t *)0xC8 = stts.flat;
  * (volatile uint8_t *)0xCA = mode.flat;
  * (volatile uint8_t *)0XC9 = ctrl.flat;

  return SUCCESS;
}

#line 110
static inline  error_t HplAtm128UartP$Uart0Init$init(void)
#line 110
{
  Atm128UartMode_t mode;
  Atm128UartStatus_t stts;
  Atm128UartControl_t ctrl;
  uint16_t ubrr0;

  ctrl.bits = (struct Atm128_UCSRB_t ){ .rxcie = 0, .txcie = 0, .rxen = 0, .txen = 0 };
  stts.bits = (struct Atm128_UCSRA_t ){ .u2x = 1 };
  mode.bits = (struct Atm128_UCSRC_t ){ .ucsz = ATM128_UART_DATA_SIZE_8_BITS };

  ubrr0 = HplAtm128UartP$Atm128Calibrate$baudrateRegister(PLATFORM_BAUDRATE);
  * (volatile uint8_t *)0xC4 = ubrr0;
  * (volatile uint8_t *)0xC5 = ubrr0 >> 8;
  * (volatile uint8_t *)0xC0 = stts.flat;
  * (volatile uint8_t *)0xC2 = mode.flat;
  * (volatile uint8_t *)0XC1 = ctrl.flat;

  return SUCCESS;
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
inline static  error_t RealMainP$SoftwareInit$init(void){
#line 51
  unsigned char result;
#line 51

#line 51
  result = HplAtm128UartP$Uart0Init$init();
#line 51
  result = ecombine(result, HplAtm128UartP$Uart1Init$init());
#line 51
  result = ecombine(result, /*Atm128Uart0C.UartP*/Atm128UartP$0$Init$init());
#line 51
  result = ecombine(result, SerialP$Init$init());
#line 51
  result = ecombine(result, /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$0$Init$init());
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

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t SerialP$startDoneTask$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(SerialP$startDoneTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 342 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline  error_t SerialP$SplitControl$start(void)
#line 342
{
  SerialP$startDoneTask$postTask();
  return SUCCESS;
}

# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static  error_t RandRWC$SerialControl$start(void){
#line 83
  unsigned char result;
#line 83

#line 83
  result = SerialP$SplitControl$start();
#line 83

#line 83
  return result;
#line 83
}
#line 83
# 185 "RandRWC.nc"
static inline  void RandRWC$Boot$booted(void)
#line 185
{
  int i;

  RandRWC$resetSeed(0);
  for (i = 0; i < sizeof RandRWC$data; i++) 
    RandRWC$data[i++] = RandRWC$rand() >> 8;

  RandRWC$SerialControl$start();
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
# 387 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline   void SerialP$SerialFrameComm$dataReceived(uint8_t data)
#line 387
{
  SerialP$rx_state_machine(FALSE, data);
}

# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static   void HdlcTranslateC$SerialFrameComm$dataReceived(uint8_t arg_0xb786c758){
#line 83
  SerialP$SerialFrameComm$dataReceived(arg_0xb786c758);
#line 83
}
#line 83
# 384 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline   void SerialP$SerialFrameComm$delimiterReceived(void)
#line 384
{
  SerialP$rx_state_machine(TRUE, 0);
}

# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static   void HdlcTranslateC$SerialFrameComm$delimiterReceived(void){
#line 74
  SerialP$SerialFrameComm$delimiterReceived();
#line 74
}
#line 74
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static inline   void HdlcTranslateC$UartStream$receivedByte(uint8_t data)
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
inline static   void /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$receivedByte(uint8_t arg_0xb77d4430){
#line 79
  HdlcTranslateC$UartStream$receivedByte(arg_0xb77d4430);
#line 79
}
#line 79
# 116 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static inline   void HdlcTranslateC$UartStream$receiveDone(uint8_t *buf, uint16_t len, error_t error)
#line 116
{
}

# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/UartStream.nc"
inline static   void /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$receiveDone(uint8_t *arg_0xb77d2138, uint16_t arg_0xb77d22c8, error_t arg_0xb77d2450){
#line 99
  HdlcTranslateC$UartStream$receiveDone(arg_0xb77d2138, arg_0xb77d22c8, arg_0xb77d2450);
#line 99
}
#line 99
# 133 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline   void /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$rxDone(uint8_t data)
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
inline static   void HplAtm128UartP$HplUart0$rxDone(uint8_t arg_0xb77ae198){
#line 49
  /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$rxDone(arg_0xb77ae198);
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
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$lockCurrentBuffer(void)
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
static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$isCurrentBufferLocked(void)
#line 188
{
  return /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.which ? /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.bufZeroLocked : /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.bufOneLocked;
}

#line 215
static inline   error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$startPacket(void)
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
inline static   error_t SerialP$ReceiveBytePacket$startPacket(void){
#line 51
  unsigned char result;
#line 51

#line 51
  result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$startPacket();
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 309 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline uint16_t SerialP$rx_current_crc(void)
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
inline static   void SerialP$ReceiveBytePacket$endPacket(error_t arg_0xb786f3c8){
#line 69
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$endPacket(arg_0xb786f3c8);
#line 69
}
#line 69
# 210 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveBufferSwap(void)
#line 210
{
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.which = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.which ? 0 : 1;
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveBuffer = (uint8_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$messagePtrs[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.which];
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 232 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline bool SerialP$ack_queue_is_full(void)
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
static inline   void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$byteReceived(uint8_t b)
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
inline static   void SerialP$ReceiveBytePacket$byteReceived(uint8_t arg_0xb7870de8){
#line 58
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$byteReceived(arg_0xb7870de8);
#line 58
}
#line 58
# 299 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline uint8_t SerialP$rx_buffer_top(void)
#line 299
{
  uint8_t tmp = SerialP$rxBuf.buf[SerialP$rxBuf.readPtr];

#line 301
  return tmp;
}

#line 303
static __inline uint8_t SerialP$rx_buffer_pop(void)
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
static inline   void HdlcTranslateC$SerialFrameComm$resetReceive(void)
#line 55
{
  HdlcTranslateC$state.receiveEscape = 0;
}

# 68 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static   void SerialP$SerialFrameComm$resetReceive(void){
#line 68
  HdlcTranslateC$SerialFrameComm$resetReceive();
#line 68
}
#line 68
#line 54
inline static   error_t SerialP$SerialFrameComm$putData(uint8_t arg_0xb786d508){
#line 54
  unsigned char result;
#line 54

#line 54
  result = HdlcTranslateC$SerialFrameComm$putData(arg_0xb786d508);
#line 54

#line 54
  return result;
#line 54
}
#line 54
# 513 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline   error_t SerialP$SendBytePacket$completeSend(void)
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
inline static   error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$completeSend(void){
#line 60
  unsigned char result;
#line 60

#line 60
  result = SerialP$SendBytePacket$completeSend();
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 167 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline   uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$nextByte(void)
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
inline static   uint8_t SerialP$SendBytePacket$nextByte(void){
#line 70
  unsigned char result;
#line 70

#line 70
  result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$nextByte();
#line 70

#line 70
  return result;
#line 70
}
#line 70
# 642 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline   void SerialP$SerialFrameComm$putDone(void)
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
inline static   void HdlcTranslateC$SerialFrameComm$putDone(void){
#line 89
  SerialP$SerialFrameComm$putDone();
#line 89
}
#line 89
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/UartStream.nc"
inline static   error_t HdlcTranslateC$UartStream$send(uint8_t *arg_0xb77d6b08, uint16_t arg_0xb77d6c98){
#line 48
  unsigned char result;
#line 48

#line 48
  result = /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$send(arg_0xb77d6b08, arg_0xb77d6c98);
#line 48

#line 48
  return result;
#line 48
}
#line 48
# 104 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static inline   void HdlcTranslateC$UartStream$sendDone(uint8_t *buf, uint16_t len, 
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
inline static   void /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$sendDone(uint8_t *arg_0xb77d5370, uint16_t arg_0xb77d5500, error_t arg_0xb77d5688){
#line 57
  HdlcTranslateC$UartStream$sendDone(arg_0xb77d5370, arg_0xb77d5500, arg_0xb77d5688);
#line 57
}
#line 57
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static   void /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$tx(uint8_t arg_0xb77b06b8){
#line 46
  HplAtm128UartP$HplUart0$tx(arg_0xb77b06b8);
#line 46
}
#line 46
# 173 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline   void /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$txDone(void)
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
inline static   void HplAtm128UartP$HplUart0$txDone(void){
#line 47
  /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$txDone();
#line 47
}
#line 47
# 300 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/HplAtm128UartP.nc"
static inline    void HplAtm128UartP$HplUart1$default$rxDone(uint8_t data)
#line 300
{
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static   void HplAtm128UartP$HplUart1$rxDone(uint8_t arg_0xb77ae198){
#line 49
  HplAtm128UartP$HplUart1$default$rxDone(arg_0xb77ae198);
#line 49
}
#line 49
# 299 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/HplAtm128UartP.nc"
static inline    void HplAtm128UartP$HplUart1$default$txDone(void)
#line 299
{
}

# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static   void HplAtm128UartP$HplUart1$txDone(void){
#line 47
  HplAtm128UartP$HplUart1$default$txDone();
#line 47
}
#line 47
# 205 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline    void HplAtm1281Timer3P$CompareA$default$fired(void)
#line 205
{
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void HplAtm1281Timer3P$CompareA$fired(void){
#line 49
  HplAtm1281Timer3P$CompareA$default$fired();
#line 49
}
#line 49
# 209 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline    void HplAtm1281Timer3P$CompareB$default$fired(void)
#line 209
{
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void HplAtm1281Timer3P$CompareB$fired(void){
#line 49
  HplAtm1281Timer3P$CompareB$default$fired();
#line 49
}
#line 49
# 213 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline    void HplAtm1281Timer3P$CompareC$default$fired(void)
#line 213
{
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void HplAtm1281Timer3P$CompareC$fired(void){
#line 49
  HplAtm1281Timer3P$CompareC$default$fired();
#line 49
}
#line 49
# 217 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline    void HplAtm1281Timer3P$Capture$default$captured(uint16_t time)
#line 217
{
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static   void HplAtm1281Timer3P$Capture$captured(HplAtm1281Timer3P$Capture$size_type arg_0xb77307a0){
#line 51
  HplAtm1281Timer3P$Capture$default$captured(arg_0xb77307a0);
#line 51
}
#line 51
# 70 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline   uint16_t HplAtm1281Timer3P$Timer$get(void)
#line 70
{
#line 70
  return * (volatile uint16_t *)0x94;
}

# 216 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline   void /*Atm128Uart0C.UartP*/Atm128UartP$0$Counter$overflow(void)
#line 216
{
}

# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   void /*CounterMicro32C.Transform32*/TransformCounterC$0$Counter$overflow(void){
#line 71
  /*Atm128Uart0C.UartP*/Atm128UartP$0$Counter$overflow();
#line 71
}
#line 71
# 122 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static inline   void /*CounterMicro32C.Transform32*/TransformCounterC$0$CounterFrom$overflow(void)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*CounterMicro32C.Transform32*/TransformCounterC$0$m_upper++;
      if ((/*CounterMicro32C.Transform32*/TransformCounterC$0$m_upper & /*CounterMicro32C.Transform32*/TransformCounterC$0$OVERFLOW_MASK) == 0) {
        /*CounterMicro32C.Transform32*/TransformCounterC$0$Counter$overflow();
        }
    }
#line 130
    __nesc_atomic_end(__nesc_atomic); }
}

# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   void /*CounterThree16C.NCounter*/Atm128CounterC$0$Counter$overflow(void){
#line 71
  /*CounterMicro32C.Transform32*/TransformCounterC$0$CounterFrom$overflow();
#line 71
}
#line 71
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline   void /*CounterThree16C.NCounter*/Atm128CounterC$0$Timer$overflow(void)
{
  /*CounterThree16C.NCounter*/Atm128CounterC$0$Counter$overflow();
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline   void /*InitThreeP.InitThree*/Atm128TimerInitC$0$Timer$overflow(void)
#line 51
{
}

# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   void HplAtm1281Timer3P$Timer$overflow(void){
#line 61
  /*InitThreeP.InitThree*/Atm128TimerInitC$0$Timer$overflow();
#line 61
  /*CounterThree16C.NCounter*/Atm128CounterC$0$Timer$overflow();
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
static  void SchedulerBasicP$TaskBasic$runTask(uint8_t arg_0xb7c3c1b0){
#line 64
  switch (arg_0xb7c3c1b0) {
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
    default:
#line 64
      SchedulerBasicP$TaskBasic$default$runTask(arg_0xb7c3c1b0);
#line 64
      break;
#line 64
    }
#line 64
}
#line 64
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

# 95 "RandRWC.nc"
static __attribute((noinline)) bool RandRWC$scheck(error_t r)
#line 95
{
  if (r != SUCCESS) {
    RandRWC$fail(r);
    }
#line 98
  return r == SUCCESS;
}

#line 72
static void RandRWC$report(error_t e)
#line 72
{
  uint8_t *msg = RandRWC$AMSend$getPayload(&RandRWC$reportMsg, 1);

  msg[0] = e;
  if (RandRWC$AMSend$send(AM_BROADCAST_ADDR, &RandRWC$reportMsg, 1) != SUCCESS) {
    RandRWC$Leds$led0On();
    }
}

# 502 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialP.nc"
static void SerialP$MaybeScheduleTx(void)
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

# 347 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialP.nc"
static void SerialP$testOff(void)
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
static   error_t HdlcTranslateC$SerialFrameComm$putDelimiter(void)
#line 86
{
  HdlcTranslateC$state.sendEscape = 0;
  HdlcTranslateC$m_data = HDLC_FLAG_BYTE;
  return HdlcTranslateC$UartStream$send(&HdlcTranslateC$m_data, 1);
}

# 155 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static   error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$send(uint8_t *buf, uint16_t len)
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

# 187 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/HplAtm128UartP.nc"
static   void HplAtm128UartP$HplUart0$tx(uint8_t data)
#line 187
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 188
    {
      * (volatile uint8_t *)0XC6 = data;
      * (volatile uint8_t *)0xC0 |= 1 << 6;
    }
#line 191
    __nesc_atomic_end(__nesc_atomic); }
}

# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static  at45page_t ConfigStorageP$BConfig$npages(uint8_t arg_0xb7b9f920){
#line 50
  unsigned short result;
#line 50

#line 50
  result = BlockStorageP$BConfig$npages(arg_0xb7b9f920);
#line 50

#line 50
  return result;
#line 50
}
#line 50
# 230 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
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

#line 244
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

# 205 "RandRWC.nc"
static  void RandRWC$ConfigMount$mountDone(error_t e)
#line 205
{
  if (e != SUCCESS) {
    RandRWC$fail(e);
    }
  else {
#line 209
    RandRWC$done();
    }
}

#line 243
static void RandRWC$done(void)
#line 243
{
  uint8_t act = TOS_NODE_ID / 100;

  RandRWC$Leds$led2Toggle();

  switch (act) 
    {
      case 0: 
        if (RandRWC$testCount < sizeof RandRWC$actions) {
          RandRWC$doAction(RandRWC$actions[RandRWC$testCount]);
          }
        else {
#line 254
          RandRWC$success();
          }
#line 255
      break;

      default: 
        if (RandRWC$testCount) {
          RandRWC$success();
          }
        else {
            uint8_t i;
#line 262
            uint8_t nwrites = 0;


            for (i = 0; i < sizeof RandRWC$actions; i++) 
              switch (RandRWC$actions[i]) 
                {
                  case RandRWC$A_WRITE: 
                    nwrites++;
                  break;
                  case RandRWC$A_COMMIT: 
                    RandRWC$countAtCommit = nwrites;
                  break;
                }


            RandRWC$doAction(RandRWC$A_READ);
          }
      break;
    }
  RandRWC$testCount++;
}

#line 214
static void RandRWC$doAction(int act)
#line 214
{
  switch (act) 
    {
      case RandRWC$A_COMMIT: 
        RandRWC$countAtCommit = RandRWC$writeCount;
      RandRWC$scheck(RandRWC$ConfigStorage$commit());
      break;
      case RandRWC$A_WRITE: 
        RandRWC$setupOps(++RandRWC$writeCount);
      RandRWC$nextWrite();
      break;
      case RandRWC$A_READ: 
        RandRWC$setupOps(RandRWC$countAtCommit);
      RandRWC$nextRead();
      break;
    }
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

# 107 "RandRWC.nc"
static void RandRWC$setupOps(int wcount)
#line 107
{
  int i;
  uint16_t offset;

  RandRWC$count = 0;
  RandRWC$resetSeed(wcount);

  for (i = 0; i < RandRWC$NWRITES; i++) 
    {
      uint16_t addr = RandRWC$rand() & (RandRWC$SIZE - 1);
      uint16_t len = RandRWC$rand() >> 7;

#line 118
      if (addr + len > RandRWC$SIZE) {
        addr = RandRWC$SIZE - len;
        }
#line 120
      RandRWC$ops[i].addr = addr;
      RandRWC$ops[i].data = (void *)0;
      RandRWC$ops[i].len = len;
      offset = RandRWC$rand() >> 8;
      if (offset + RandRWC$ops[i].len > sizeof RandRWC$data) {
        offset = sizeof RandRWC$data - RandRWC$ops[i].len;
        }
#line 126
      RandRWC$ops[i].data = RandRWC$data + offset;
    }
}

#line 66
static void RandRWC$resetSeed(int offset)
#line 66
{
  RandRWC$shiftReg = 119 * 119 * (TOS_NODE_ID % 100 + 1 + offset);
  RandRWC$initSeed = RandRWC$shiftReg;
  RandRWC$mask = 137 * 29 * (TOS_NODE_ID % 100 + 1 + offset);
}

#line 50
static uint16_t RandRWC$rand(void)
#line 50
{
  bool endbit;
  uint16_t tmpShiftReg;

  tmpShiftReg = RandRWC$shiftReg;
  endbit = (tmpShiftReg & 0x8000) != 0;
  tmpShiftReg <<= 1;
  if (endbit) {
    tmpShiftReg ^= 0x100b;
    }
#line 59
  tmpShiftReg++;
  RandRWC$shiftReg = tmpShiftReg;
  tmpShiftReg = tmpShiftReg ^ RandRWC$mask;

  return tmpShiftReg;
}

#line 163
static void RandRWC$nextWrite(void)
#line 163
{
  int c = RandRWC$count++;

  if (c == RandRWC$NWRITES) {
    RandRWC$done();
    }
  else {
#line 169
    RandRWC$scheck(RandRWC$ConfigStorage$write(RandRWC$ops[c].addr, RandRWC$ops[c].data, RandRWC$ops[c].len));
    }
}

#line 145
static void RandRWC$nextRead(void)
#line 145
{
  int c = RandRWC$count++;

  if (c == RandRWC$NWRITES) {
    RandRWC$done();
    }
  else {
#line 151
    RandRWC$scheck(RandRWC$ConfigStorage$read(RandRWC$ops[c].addr, RandRWC$rdata, RandRWC$ops[c].len));
    }
}

# 124 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
static void ConfigStorageP$computeCrc(uint8_t id)
#line 124
{
  ConfigStorageP$BlockRead$computeCrc(id, sizeof(nx_uint16_t ), 
  ConfigStorageP$volumeSize(id) - sizeof(nx_uint16_t ), 
  0);
}

# 154 "RandRWC.nc"
static __attribute((noinline))  void RandRWC$ConfigStorage$readDone(storage_addr_t x, void *buf, storage_len_t rlen, error_t result)
#line 154
{
  int c = RandRWC$count - 1;


  if (
#line 157
  RandRWC$scheck(result) && 
  RandRWC$bcheck(x == RandRWC$ops[c].addr && rlen == RandRWC$ops[c].len && buf == RandRWC$rdata) && 
  RandRWC$bcheck(RandRWC$overwritten(c) || memcmp(RandRWC$ops[c].data, RandRWC$rdata, rlen) == 0)) {
    RandRWC$nextRead();
    }
}

#line 101
static bool RandRWC$bcheck(bool b)
#line 101
{
  if (!b) {
    RandRWC$fail(FAIL);
    }
#line 104
  return b;
}

#line 130
static int RandRWC$overlap(int a, int b)
#line 130
{

  return RandRWC$ops[a].addr >= RandRWC$ops[b].addr && RandRWC$ops[a].addr < RandRWC$ops[b].addr + RandRWC$ops[b].len;
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

# 194 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/HplAtm128UartP.nc"
__attribute((signal))   void __vector_25(void)
#line 194
{
  if ((* (volatile uint8_t *)0xC0 & (1 << 7)) != 0) {
      HplAtm128UartP$HplUart0$rxDone(* (volatile uint8_t *)0XC6);
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

# 285 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static   void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$endPacket(error_t result)
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

# 200 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/HplAtm128UartP.nc"
__attribute((interrupt))   void __vector_27(void)
#line 200
{
  HplAtm128UartP$HplUart0$txDone();
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static   error_t HdlcTranslateC$SerialFrameComm$putData(uint8_t data)
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

# 288 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/HplAtm128UartP.nc"
__attribute((signal))   void __vector_36(void)
#line 288
{
  if ((* (volatile uint8_t *)0xC8 & (1 << 7)) != 0) {
    HplAtm128UartP$HplUart1$rxDone(* (volatile uint8_t *)0XCE);
    }
}

#line 293
__attribute((interrupt))   void __vector_38(void)
#line 293
{
  HplAtm128UartP$HplUart1$txDone();
}

# 206 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
__attribute((interrupt))   void __vector_32(void)
#line 206
{
  HplAtm1281Timer3P$CompareA$fired();
}

__attribute((interrupt))   void __vector_33(void)
#line 210
{
  HplAtm1281Timer3P$CompareB$fired();
}

__attribute((interrupt))   void __vector_34(void)
#line 214
{
  HplAtm1281Timer3P$CompareC$fired();
}

__attribute((interrupt))   void __vector_31(void)
#line 218
{
  HplAtm1281Timer3P$Capture$captured(HplAtm1281Timer3P$Timer$get());
}

__attribute((interrupt))   void __vector_35(void)
#line 222
{
  HplAtm1281Timer3P$Timer$overflow();
}

