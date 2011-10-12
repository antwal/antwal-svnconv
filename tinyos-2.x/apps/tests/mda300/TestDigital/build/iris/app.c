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
# 246 "/usr/local/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_leuint8(const void *source);




static __inline uint8_t __nesc_hton_leuint8(void *target, uint8_t value);
#line 264
static __inline uint16_t __nesc_ntoh_uint16(const void *source);




static __inline uint16_t __nesc_hton_uint16(void *target, uint16_t value);






static __inline uint16_t __nesc_ntoh_leuint16(const void *source);




static __inline uint16_t __nesc_hton_leuint16(void *target, uint16_t value);
#line 294
static __inline uint32_t __nesc_ntoh_uint32(const void *source);






static __inline uint32_t __nesc_hton_uint32(void *target, uint32_t value);
#line 326
static __inline int32_t __nesc_ntoh_int32(const void *source);
#line 326
static __inline int32_t __nesc_hton_int32(void *target, int32_t value);
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
# 13 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/sensorboard.h"
enum __nesc_unnamed4310 {
  SAMPLER_DEFAULT = 0x00, 
  AVERAGE_FOUR = 0x01, 
  AVERAGE_EIGHT = 0x02, 
  AVERAGE_SIXTEEN = 0x04, 
  EXITATION_25 = 0x08, 
  EXITATION_33 = 0x10, 
  EXITATION_50 = 0x20, 
  EXITATION_ALWAYS_ON = 0x40, 
  DELAY_BEFORE_MEASUREMENT = 0x80
};


enum __nesc_unnamed4311 {

  RISING_EDGE = 0x01, 
  FALLING_EDGE = 0x02, 
  EVENT = 0x04, 
  EEPROM_TOTALIZER = 0x08, 


  RESET_ZERO_AFTER_READ = 0x30, 
  DIG_OUTPUT = 0x40
};

enum __nesc_unnamed4312 {
  InputChannel = 0, 
  OutputChannel = 1
};

enum __nesc_unnamed4313 {
  RisingEdge = 0, 
  FallingEdge = 1, 
  Edge = 2
};


enum __nesc_unnamed4314 {
  NO_EXITATION = 0, 
  ADCREF = 1, 
  THREE_VOLT = 2, 
  FIVE_VOLT = 3, 
  ALL_EXITATION = 4, 
  NO_ADCREF = 5, 
  NO_THREE_VOLT = 6, 
  NO_FIVE_VOLT = 7
};

enum __nesc_unnamed4315 {
  POWER_SAVING_MODE = 0, 
  NO_POWER_SAVING_MODE = 1
};

enum __nesc_unnamed4316 {
  FAST_COVERSION_MODE = 0, 
  SLOW_COVERSION_MODE = 1
};








enum __nesc_unnamed4317 {
  ATTENTION_PACKET = 9
};

enum __nesc_unnamed4318 {
  ANALOG = 0, 
  BATTERY = 1, 
  TEMPERATURE = 2, 
  HUMIDITY = 3, 
  DIGITAL = 4, 
  COUNTER = 5
};

enum __nesc_unnamed4319 {
  PENDING, 
  NOT_PENDING
};

enum __nesc_unnamed4320 {
  MUX_CHANNEL_SEVEN = 0xC0, 
  MUX_CHANNEL_EIGHT = 0x30, 
  MUX_CHANNEL_NINE = 0x0C, 
  MUX_CHANNEL_TEN = 0x03
};

enum __nesc_unnamed4321 {
  LOCK, 
  UNLOCK
};

enum __nesc_unnamed4322 {
  SAMPLE_RECORD_FREE = -1, 
  SAMPLE_ONCE = -2
};

enum __nesc_unnamed4323 {
  NORMALY_OPEN = 6, 
  NORMALY_CLOSED = 7, 
  SET_HIGH, 
  SET_LOW, 
  SET_TOGGLE, 
  SET_CLOSE, 
  SET_OPEN
};

enum __nesc_unnamed4324 {
  TOS_DIGITAL_I2C_ADDR = 0x3F, 
  TOS_IBADC_I2C_ADDR = 0x4A, 
  TOS_SWITCH_I2C_ADDR = 0x4B
};
# 16 "Oscilloscope.h"
enum __nesc_unnamed4325 {


  NREADINGS = 1, 


  DEFAULT_INTERVAL = 1024 * 10, 

  AM_OSCILLOSCOPE = 0x93
};







#line 27
typedef nx_struct oscilloscope {
  nx_uint16_t version;
  nx_uint16_t interval;
  nx_uint16_t id;
  nx_uint16_t count;
  nx_uint16_t readings[NREADINGS];
} __attribute__((packed)) oscilloscope_t;
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

enum __nesc_unnamed4326 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4327 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4328 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4329 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4330 {
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
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/types/Leds.h"
enum __nesc_unnamed4331 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 27 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230.h"
enum rf230_registers_enum {

  RF230_TRX_STATUS = 0x01, 
  RF230_TRX_STATE = 0x02, 
  RF230_TRX_CTRL_0 = 0x03, 
  RF230_PHY_TX_PWR = 0x05, 
  RF230_PHY_RSSI = 0x06, 
  RF230_PHY_ED_LEVEL = 0x07, 
  RF230_PHY_CC_CCA = 0x08, 
  RF230_CCA_THRES = 0x09, 
  RF230_IRQ_MASK = 0x0E, 
  RF230_IRQ_STATUS = 0x0F, 
  RF230_VREG_CTRL = 0x10, 
  RF230_BATMON = 0x11, 
  RF230_XOSC_CTRL = 0x12, 
  RF230_PLL_CF = 0x1A, 
  RF230_PLL_DCU = 0x1B, 
  RF230_PART_NUM = 0x1C, 
  RF230_VERSION_NUM = 0x1D, 
  RF230_MAN_ID_0 = 0x1E, 
  RF230_MAN_ID_1 = 0x1F, 
  RF230_SHORT_ADDR_0 = 0x20, 
  RF230_SHORT_ADDR_1 = 0x21, 
  RF230_PAN_ID_0 = 0x22, 
  RF230_PAN_ID_1 = 0x23, 
  RF230_IEEE_ADDR_0 = 0x24, 
  RF230_IEEE_ADDR_1 = 0x25, 
  RF230_IEEE_ADDR_2 = 0x26, 
  RF230_IEEE_ADDR_3 = 0x27, 
  RF230_IEEE_ADDR_4 = 0x28, 
  RF230_IEEE_ADDR_5 = 0x29, 
  RF230_IEEE_ADDR_6 = 0x2A, 
  RF230_IEEE_ADDR_7 = 0x2B, 
  RF230_XAH_CTRL = 0x2C, 
  RF230_CSMA_SEED_0 = 0x2D, 
  RF230_CSMA_SEED_1 = 0x2E
};

enum rf230_trx_register_enums {

  RF230_CCA_DONE = 1 << 7, 
  RF230_CCA_STATUS = 1 << 6, 
  RF230_TRX_STATUS_MASK = 0x1F, 
  RF230_P_ON = 0, 
  RF230_BUSY_RX = 1, 
  RF230_BUSY_TX = 2, 
  RF230_RX_ON = 6, 
  RF230_TRX_OFF = 8, 
  RF230_PLL_ON = 9, 
  RF230_SLEEP = 15, 
  RF230_BUSY_RX_AACK = 16, 
  RF230_BUSR_TX_ARET = 17, 
  RF230_RX_AACK_ON = 22, 
  RF230_TX_ARET_ON = 25, 
  RF230_RX_ON_NOCLK = 28, 
  RF230_AACK_ON_NOCLK = 29, 
  RF230_BUSY_RX_AACK_NOCLK = 30, 
  RF230_STATE_TRANSITION_IN_PROGRESS = 31, 
  RF230_TRAC_STATUS_MASK = 0xE0, 
  RF230_TRAC_SUCCESS = 0, 
  RF230_TRAC_CHANNEL_ACCESS_FAILURE = 3 << 5, 
  RF230_TRAC_NO_ACK = 5 << 5, 
  RF230_TRX_CMD_MASK = 0x1F, 
  RF230_NOP = 0, 
  RF230_TX_START = 2, 
  RF230_FORCE_TRX_OFF = 3
};

enum rf230_phy_register_enums {

  RF230_TX_AUTO_CRC_ON = 1 << 7, 
  RF230_TX_PWR_MASK = 0x0F, 
  RF230_TX_PWR_DEFAULT = 0, 
  RF230_RSSI_MASK = 0x1F, 
  RF230_CCA_REQUEST = 1 << 7, 
  RF230_CCA_MODE_0 = 0 << 5, 
  RF230_CCA_MODE_1 = 1 << 5, 
  RF230_CCA_MODE_2 = 2 << 5, 
  RF230_CCA_MODE_3 = 3 << 5, 
  RF230_CHANNEL_DEFAULT = 11, 
  RF230_CHANNEL_MASK = 0x1F, 
  RF230_CCA_CS_THRES_SHIFT = 4, 
  RF230_CCA_ED_THRES_SHIFT = 0
};

enum rf230_irq_register_enums {

  RF230_IRQ_BAT_LOW = 1 << 7, 
  RF230_IRQ_TRX_UR = 1 << 6, 
  RF230_IRQ_TRX_END = 1 << 3, 
  RF230_IRQ_RX_START = 1 << 2, 
  RF230_IRQ_PLL_UNLOCK = 1 << 1, 
  RF230_IRQ_PLL_LOCK = 1 << 0
};

enum rf230_control_register_enums {

  RF230_AVREG_EXT = 1 << 7, 
  RF230_AVDD_OK = 1 << 6, 
  RF230_DVREG_EXT = 1 << 3, 
  RF230_DVDD_OK = 1 << 2, 
  RF230_BATMON_OK = 1 << 5, 
  RF230_BATMON_VHR = 1 << 4, 
  RF230_BATMON_VTH_MASK = 0x0F, 
  RF230_XTAL_MODE_OFF = 0 << 4, 
  RF230_XTAL_MODE_EXTERNAL = 4 << 4, 
  RF230_XTAL_MODE_INTERNAL = 15 << 4
};

enum rf230_pll_register_enums {

  RF230_PLL_CF_START = 1 << 7, 
  RF230_PLL_DCU_START = 1 << 7
};

enum rf230_spi_command_enums {

  RF230_CMD_REGISTER_READ = 0x80, 
  RF230_CMD_REGISTER_WRITE = 0xC0, 
  RF230_CMD_REGISTER_MASK = 0x3F, 
  RF230_CMD_FRAME_READ = 0x20, 
  RF230_CMD_FRAME_WRITE = 0x60, 
  RF230_CMD_SRAM_READ = 0x00, 
  RF230_CMD_SRAM_WRITE = 0x40
};
# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230.h"
enum __nesc_unnamed4332 {





  RF230_TRX_CTRL_0_VALUE = 0, 





  RF230_CCA_MODE_VALUE = RF230_CCA_MODE_3, 





  RF230_CCA_THRES_VALUE = 0xC7
};




typedef TOne TRF230;
# 28 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TimeSyncMessage.h"
typedef nx_int32_t timesync_relative_t;


typedef uint32_t timesync_absolute_t;
# 251 "/usr/lib/gcc/avr/3.4.6/../../../../avr/include/util/crc16.h"
#line 250
static __inline uint16_t 
_crc_ccitt_update(uint16_t __crc, uint8_t __data);
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.h"
enum __nesc_unnamed4333 {
  ATM128_SPI_CLK_DIVIDE_4 = 0, 
  ATM128_SPI_CLK_DIVIDE_16 = 1, 
  ATM128_SPI_CLK_DIVIDE_64 = 2, 
  ATM128_SPI_CLK_DIVIDE_128 = 3
};
#line 49
#line 40
typedef struct __nesc_unnamed4334 {
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
typedef union __nesc_unnamed4335 {
  uint8_t flat;
  Atm128SPIControl_s bits;
} Atm128SPIControl_t;

typedef Atm128SPIControl_t Atm128_SPCR_t;








#line 58
typedef struct __nesc_unnamed4336 {
  uint8_t spif : 1;
  uint8_t wcol : 1;
  uint8_t rsvd : 5;
  uint8_t spi2x : 1;
} 
Atm128SPIStatus_s;



#line 65
typedef union __nesc_unnamed4337 {
  uint8_t flat;
  Atm128SPIStatus_s bits;
} Atm128SPIStatus_t;

typedef Atm128SPIStatus_t Atm128_SPSR_t;

typedef uint8_t Atm128_SPDR_t;
# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/types/I2C.h"
typedef struct __nesc_unnamed4338 {
} 
#line 40
TI2CExtdAddr;
typedef struct __nesc_unnamed4339 {
} 
#line 41
TI2CBasicAddr;

typedef uint8_t i2c_flags_t;

enum __nesc_unnamed4340 {
  I2C_START = 0x01, 
  I2C_STOP = 0x02, 
  I2C_ACK_END = 0x04
};
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2C.h"
enum __nesc_unnamed4341 {
  ATM128_I2C_BUSERROR = 0x00, 
  ATM128_I2C_START = 0x08, 
  ATM128_I2C_RSTART = 0x10, 
  ATM128_I2C_MW_SLA_ACK = 0x18, 
  ATM128_I2C_MW_SLA_NACK = 0x20, 
  ATM128_I2C_MW_DATA_ACK = 0x28, 
  ATM128_I2C_MW_DATA_NACK = 0x30, 
  ATM128_I2C_M_ARB_LOST = 0x38, 
  ATM128_I2C_MR_SLA_ACK = 0x40, 
  ATM128_I2C_MR_SLA_NACK = 0x48, 
  ATM128_I2C_MR_DATA_ACK = 0x50, 
  ATM128_I2C_MR_DATA_NACK = 0x58
};
typedef TMilli OscilloscopeC__Timer__precision_tag;
typedef uint8_t RF230PacketP__PacketRSSI__value_type;
typedef uint8_t RF230PacketP__PacketTransmitPower__value_type;
typedef uint16_t RF230PacketP__PacketSleepInterval__value_type;
typedef uint8_t RF230PacketP__PacketTimeSyncOffset__value_type;
typedef TRF230 RF230PacketP__PacketTimeStampRadio__precision_tag;
typedef uint32_t RF230PacketP__PacketTimeStampRadio__size_type;
typedef TRF230 RF230PacketP__LocalTimeRadio__precision_tag;
typedef uint8_t RF230PacketP__PacketLinkQuality__value_type;
typedef TMilli RF230PacketP__LocalTimeMilli__precision_tag;
typedef TMilli RF230PacketP__PacketTimeStampMilli__precision_tag;
typedef uint32_t RF230PacketP__PacketTimeStampMilli__size_type;
typedef uint16_t HplAtm1281Timer1P__CompareA__size_type;
typedef uint16_t HplAtm1281Timer1P__Capture__size_type;
typedef uint16_t HplAtm1281Timer1P__CompareB__size_type;
typedef uint16_t HplAtm1281Timer1P__CompareC__size_type;
typedef uint16_t HplAtm1281Timer1P__Timer__timer_size;
typedef uint16_t /*InitOneP.InitOne*/Atm128TimerInitC$0__timer_size;
typedef /*InitOneP.InitOne*/Atm128TimerInitC$0__timer_size /*InitOneP.InitOne*/Atm128TimerInitC$0__Timer__timer_size;
typedef TOne /*CounterOne16C.NCounter*/Atm128CounterC$0__frequency_tag;
typedef uint16_t /*CounterOne16C.NCounter*/Atm128CounterC$0__timer_size;
typedef /*CounterOne16C.NCounter*/Atm128CounterC$0__frequency_tag /*CounterOne16C.NCounter*/Atm128CounterC$0__Counter__precision_tag;
typedef /*CounterOne16C.NCounter*/Atm128CounterC$0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC$0__Counter__size_type;
typedef /*CounterOne16C.NCounter*/Atm128CounterC$0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC$0__Timer__timer_size;
typedef TMicro /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__to_precision_tag;
typedef uint32_t /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__to_size_type;
typedef TMicro /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__from_precision_tag;
typedef uint16_t /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__from_size_type;
typedef uint32_t /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__upper_count_type;
typedef /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__from_precision_tag /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__CounterFrom__precision_tag;
typedef /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__from_size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__CounterFrom__size_type;
typedef /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__to_precision_tag /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__Counter__precision_tag;
typedef /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__to_size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__Counter__size_type;
typedef TMicro /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC$0__precision_tag;
typedef /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC$0__precision_tag /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC$0__LocalTime__precision_tag;
typedef /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC$0__precision_tag /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC$0__Counter__precision_tag;
typedef uint32_t /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC$0__Counter__size_type;
enum HilTimerMilliC____nesc_unnamed4342 {
  HilTimerMilliC__TIMER_COUNT = 3U
};
typedef TMilli /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC$0__precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC$0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Alarm__precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Alarm__size_type;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Counter__precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Counter__size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Compare__size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Timer__timer_size;
typedef uint8_t HplAtm1281Timer2AsyncP__Compare__size_type;
typedef uint8_t HplAtm1281Timer2AsyncP__Timer__timer_size;
typedef TMilli /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__precision_tag;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__Alarm__precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__Alarm__size_type;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__TimerFrom__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$1__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$1__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$1__LocalTime__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$1__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$1__Counter__precision_tag;
typedef uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$1__Counter__size_type;
typedef TRF230 RadioAlarmP__Alarm__precision_tag;
typedef uint16_t RadioAlarmP__Alarm__size_type;
typedef TMilli TrafficMonitorLayerP__Timer__precision_tag;
typedef uint16_t RandomMlcgC__SeedInit__parameter;
typedef TMicro RF230LayerP__BusyWait__precision_tag;
typedef uint16_t RF230LayerP__BusyWait__size_type;
typedef uint8_t RF230LayerP__PacketRSSI__value_type;
typedef TRF230 RF230LayerP__PacketTimeStamp__precision_tag;
typedef uint32_t RF230LayerP__PacketTimeStamp__size_type;
typedef uint8_t RF230LayerP__PacketTransmitPower__value_type;
typedef TRF230 RF230LayerP__LocalTime__precision_tag;
typedef uint8_t RF230LayerP__PacketTimeSyncOffset__value_type;
typedef uint8_t RF230LayerP__PacketLinkQuality__value_type;
typedef uint16_t HplRF230P__Capture__size_type;
typedef TOne /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__frequency_tag;
typedef uint16_t /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__timer_size;
typedef /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__frequency_tag /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__Alarm__precision_tag;
typedef /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__Alarm__size_type;
typedef /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__HplAtm128Compare__size_type;
typedef /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__HplAtm128Timer__timer_size;
enum /*HplRF230C.AlarmC*/AlarmOne16C$0____nesc_unnamed4343 {
  AlarmOne16C$0__COMPARE_ID = 0U
};
typedef TMicro BusyWaitMicroC__BusyWait__precision_tag;
typedef uint16_t BusyWaitMicroC__BusyWait__size_type;
typedef TI2CBasicAddr MDA300DigitalLogicP__I2CPacket__addr_size;
enum /*HplMDA300DigitalC.I2C*/Atm128I2CMasterC$0____nesc_unnamed4344 {
  Atm128I2CMasterC$0__CLIENT_ID = 0U
};
enum Atm128I2CMasterP____nesc_unnamed4345 {
  Atm128I2CMasterP__ATM128_I2C_CLIENT_COUNT = 1U
};
typedef TI2CBasicAddr /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__SubPacket__addr_size;
typedef TI2CBasicAddr /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__I2CPacket__addr_size;
typedef TI2CBasicAddr /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2CPacket__addr_size;
enum AMQueueP____nesc_unnamed4346 {
  AMQueueP__NUM_CLIENTS = 1U
};
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  void OscilloscopeC__SensorControl__startDone(error_t arg_0x4032c640);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Boot.nc"
static  void OscilloscopeC__Boot__booted(void);
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void OscilloscopeC__AMSend__sendDone(message_t *arg_0x4033f068, error_t arg_0x4033f1f0);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  void OscilloscopeC__RadioControl__startDone(error_t arg_0x4032c640);
#line 117
static  void OscilloscopeC__RadioControl__stopDone(error_t arg_0x4032a200);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *OscilloscopeC__Receive__receive(message_t *arg_0x40344308, void *arg_0x403444a8, uint8_t arg_0x40344630);
# 15 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/Dio.nc"
static  void OscilloscopeC__Read1__readDone(uint16_t arg_0x40351ce0);
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void OscilloscopeC__Timer__fired(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t PlatformP__Init__init(void);
#line 51
static  error_t MotePlatformP__PlatformInit__init(void);
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0__IO__toggle(void);



static   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0__IO__makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0__IO__set(void);

static   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1__IO__toggle(void);



static   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1__IO__makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1__IO__set(void);

static   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2__IO__toggle(void);



static   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2__IO__makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2__IO__set(void);



static   void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4__IO__makeInput(void);
#line 30
static   void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4__IO__clr(void);




static   void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6__IO__makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6__IO__set(void);
static   void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6__IO__clr(void);




static   void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8__IO__makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8__IO__set(void);
static   void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8__IO__clr(void);




static   void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP$9__IO__makeOutput(void);
#line 35
static   void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP$10__IO__makeOutput(void);
#line 33
static   void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP$11__IO__makeInput(void);

static   void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15__IO__makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15__IO__set(void);
static   void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15__IO__clr(void);


static   void /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24__IO__makeInput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24__IO__set(void);



static   void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25__IO__makeInput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25__IO__set(void);



static   void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28__IO__makeInput(void);
#line 30
static   void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28__IO__clr(void);


static   void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30__IO__makeInput(void);
#line 30
static   void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30__IO__clr(void);


static   void /*HplAtm128GeneralIOC.PortE.Bit4*/HplAtm128GeneralIOPinP$36__IO__makeInput(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t MeasureClockC__Init__init(void);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t SchedulerBasicP__TaskBasic__postTask(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x402f61b0);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void SchedulerBasicP__TaskBasic__default__runTask(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x402f61b0);
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Scheduler.nc"
static  void SchedulerBasicP__Scheduler__init(void);
#line 61
static  void SchedulerBasicP__Scheduler__taskLoop(void);
#line 54
static  bool SchedulerBasicP__Scheduler__runNextTask(void);
# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuSleep.nc"
static   void McuSleepC__McuSleep__sleep(void);
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static   void McuSleepC__McuPowerState__update(void);
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorConfig.nc"
static   uint16_t RF230ActiveMessageP__TrafficMonitorConfig__getUpdatePeriod(void);




static   uint16_t RF230ActiveMessageP__TrafficMonitorConfig__getChannelTime(message_t *arg_0x404be288);
#line 79
static   void RF230ActiveMessageP__TrafficMonitorConfig__timerTick(void);
#line 43
static   am_addr_t RF230ActiveMessageP__TrafficMonitorConfig__getSender(message_t *arg_0x404be7b0);
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SlottedCollisionConfig.nc"
static   void RF230ActiveMessageP__SlottedCollisionConfig__default__timerTick(void);
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageConfig.nc"
static  error_t RF230ActiveMessageP__ActiveMessageConfig__checkPacket(message_t *arg_0x404c1358);
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SoftwareAckConfig.nc"
static   void RF230ActiveMessageP__SoftwareAckConfig__reportChannelError(void);
#line 68
static   void RF230ActiveMessageP__SoftwareAckConfig__createAckPacket(message_t *arg_0x404b8548, message_t *arg_0x404b86f8);
#line 38
static   bool RF230ActiveMessageP__SoftwareAckConfig__requiresAckWait(message_t *arg_0x404ad620);
#line 50
static   bool RF230ActiveMessageP__SoftwareAckConfig__isAckPacket(message_t *arg_0x404ac230);






static   bool RF230ActiveMessageP__SoftwareAckConfig__verifyAckPacket(message_t *arg_0x404ac820, message_t *arg_0x404ac9d0);
#line 32
static   uint16_t RF230ActiveMessageP__SoftwareAckConfig__getAckTimeout(void);










static   void RF230ActiveMessageP__SoftwareAckConfig__setAckReceived(message_t *arg_0x404adb70, bool arg_0x404adcf8);
#line 63
static   bool RF230ActiveMessageP__SoftwareAckConfig__requiresAckReply(message_t *arg_0x404b8010);
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static   void RF230ActiveMessageP__RadioAlarm__fired(void);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/UniqueConfig.nc"
static   void RF230ActiveMessageP__UniqueConfig__setSequenceNumber(message_t *arg_0x404b5640, uint8_t arg_0x404b57c8);





static   void RF230ActiveMessageP__UniqueConfig__reportChannelError(void);
#line 31
static   uint8_t RF230ActiveMessageP__UniqueConfig__getSequenceNumber(message_t *arg_0x404b6c20);




static   am_addr_t RF230ActiveMessageP__UniqueConfig__getSender(message_t *arg_0x404b5140);
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RandomCollisionConfig.nc"
static   uint16_t RF230ActiveMessageP__RandomCollisionConfig__getCongestionBackoff(message_t *arg_0x404b90a8);
#line 29
static   uint16_t RF230ActiveMessageP__RandomCollisionConfig__getInitialBackoff(message_t *arg_0x404bbb68);










static   uint16_t RF230ActiveMessageP__RandomCollisionConfig__getMinimumBackoff(void);





static   uint16_t RF230ActiveMessageP__RandomCollisionConfig__getTransmitBarrier(message_t *arg_0x404b9970);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230Config.nc"
static   uint8_t RF230ActiveMessageP__RF230Config__getHeaderLength(void);










static   uint8_t RF230ActiveMessageP__RF230Config__getDefaultChannel(void);
#line 46
static   uint8_t *RF230ActiveMessageP__RF230Config__getPayload(message_t *arg_0x404a4f18);
#line 39
static   void RF230ActiveMessageP__RF230Config__setLength(message_t *arg_0x404a4888, uint8_t arg_0x404a4a10);
#line 34
static   uint8_t RF230ActiveMessageP__RF230Config__getLength(message_t *arg_0x404a4300);
#line 60
static   uint8_t RF230ActiveMessageP__RF230Config__getMaxLength(void);
#line 72
static   bool RF230ActiveMessageP__RF230Config__requiresRssiCca(message_t *arg_0x404af190);
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/PacketField.nc"
static   void RF230PacketP__PacketRSSI__clear(message_t *arg_0x40497598);





static   void RF230PacketP__PacketRSSI__set(message_t *arg_0x40497a80, RF230PacketP__PacketRSSI__value_type arg_0x40497c10);
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
static  void RF230PacketP__Packet__clear(message_t *arg_0x404628d8);
#line 67
static  uint8_t RF230PacketP__Packet__payloadLength(message_t *arg_0x40462e88);
#line 115
static  void *RF230PacketP__Packet__getPayload(message_t *arg_0x4046c358, uint8_t arg_0x4046c4e0);
#line 95
static  uint8_t RF230PacketP__Packet__maxPayloadLength(void);
#line 83
static  void RF230PacketP__Packet__setPayloadLength(message_t *arg_0x4046d548, uint8_t arg_0x4046d6d0);
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/PacketField.nc"
static   RF230PacketP__PacketTransmitPower__value_type RF230PacketP__PacketTransmitPower__get(message_t *arg_0x40497010);
#line 29
static   bool RF230PacketP__PacketTransmitPower__isSet(message_t *arg_0x40498a58);





static   RF230PacketP__PacketTimeSyncOffset__value_type RF230PacketP__PacketTimeSyncOffset__get(message_t *arg_0x40497010);
#line 29
static   bool RF230PacketP__PacketTimeSyncOffset__isSet(message_t *arg_0x40498a58);
# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
static   void RF230PacketP__PacketTimeStampRadio__clear(message_t *arg_0x4047b5c8);







static   void RF230PacketP__PacketTimeStampRadio__set(message_t *arg_0x4047baf0, RF230PacketP__PacketTimeStampRadio__size_type arg_0x4047bc80);
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/PacketField.nc"
static   void RF230PacketP__PacketLinkQuality__set(message_t *arg_0x40497a80, RF230PacketP__PacketLinkQuality__value_type arg_0x40497c10);
# 124 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
static   uint8_t IEEE154PacketP__IEEE154Packet__getDSN(message_t *arg_0x404d2820);
#line 79
static   bool IEEE154PacketP__IEEE154Packet__isAckFrame(message_t *arg_0x404c85c0);
#line 172
static   void IEEE154PacketP__IEEE154Packet__set6LowPan(message_t *arg_0x404cecd0, uint8_t arg_0x404cee58);
#line 160
static   void IEEE154PacketP__IEEE154Packet__setSrcAddr(message_t *arg_0x404ce120, uint16_t arg_0x404ce2b0);
#line 73
static   void IEEE154PacketP__IEEE154Packet__createDataFrame(message_t *arg_0x404c8010);
#line 129
static   void IEEE154PacketP__IEEE154Packet__setDSN(message_t *arg_0x404d2d10, uint8_t arg_0x404d2e98);
#line 92
static   void IEEE154PacketP__IEEE154Packet__createAckReply(message_t *arg_0x404c70d0, message_t *arg_0x404c7280);
#line 39
static   ieee154_header_t *IEEE154PacketP__IEEE154Packet__getHeader(message_t *arg_0x404ccca0);
#line 155
static   uint16_t IEEE154PacketP__IEEE154Packet__getSrcAddr(message_t *arg_0x404cfbd8);
#line 67
static   bool IEEE154PacketP__IEEE154Packet__isDataFrame(message_t *arg_0x404caa80);
#line 184
static   void IEEE154PacketP__IEEE154Packet__setType(message_t *arg_0x404db978, am_id_t arg_0x404dbb00);
#line 103
static   bool IEEE154PacketP__IEEE154Packet__getAckRequired(message_t *arg_0x404d4010);
#line 98
static   bool IEEE154PacketP__IEEE154Packet__verifyAckReply(message_t *arg_0x404c7850, message_t *arg_0x404c7a00);
#line 49
static   void IEEE154PacketP__IEEE154Packet__setLength(message_t *arg_0x404cb708, uint8_t arg_0x404cb890);
#line 167
static   uint8_t IEEE154PacketP__IEEE154Packet__get6LowPan(message_t *arg_0x404ce7c8);
#line 190
static   bool IEEE154PacketP__IEEE154Packet__requiresAckWait(message_t *arg_0x404d9030);
#line 150
static   void IEEE154PacketP__IEEE154Packet__setDestAddr(message_t *arg_0x404cf520, uint16_t arg_0x404cf6b0);
#line 44
static   uint8_t IEEE154PacketP__IEEE154Packet__getLength(message_t *arg_0x404cb1f8);
#line 140
static   void IEEE154PacketP__IEEE154Packet__setDestPan(message_t *arg_0x404d1908, uint16_t arg_0x404d1a98);
#line 179
static   am_id_t IEEE154PacketP__IEEE154Packet__getType(message_t *arg_0x404db478);
#line 196
static   bool IEEE154PacketP__IEEE154Packet__requiresAckReply(message_t *arg_0x404d9598);
#line 145
static   uint16_t IEEE154PacketP__IEEE154Packet__getDestAddr(message_t *arg_0x404cf010);
# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t IEEE154PacketP__AMPacket__address(void);









static  am_addr_t IEEE154PacketP__AMPacket__destination(message_t *arg_0x40469120);
#line 110
static  void IEEE154PacketP__AMPacket__setSource(message_t *arg_0x404735d8, am_addr_t arg_0x40473768);
#line 92
static  void IEEE154PacketP__AMPacket__setDestination(message_t *arg_0x40469ce8, am_addr_t arg_0x40469e78);
#line 136
static  am_id_t IEEE154PacketP__AMPacket__type(message_t *arg_0x40472680);
#line 151
static  void IEEE154PacketP__AMPacket__setType(message_t *arg_0x40472c18, am_id_t arg_0x40472da0);
#line 125
static  bool IEEE154PacketP__AMPacket__isForMe(message_t *arg_0x40473f20);
#line 176
static  void IEEE154PacketP__AMPacket__setGroup(message_t *arg_0x40471c48, am_group_t arg_0x40471dd8);







static  am_group_t IEEE154PacketP__AMPacket__localGroup(void);
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static   am_addr_t ActiveMessageAddressC__amAddress(void);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static   am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void);




static   am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void);
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerCtrl16.nc"
static   uint8_t HplAtm1281Timer1P__TimerCtrl__getInterruptFlag(void);
#line 63
static   void HplAtm1281Timer1P__TimerCtrl__setControlB(uint8_t arg_0x405c27f8);
#line 60
static   uint8_t HplAtm1281Timer1P__TimerCtrl__getControlB(void);
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void HplAtm1281Timer1P__CompareA__reset(void);
#line 45
static   void HplAtm1281Timer1P__CompareA__set(HplAtm1281Timer1P__CompareA__size_type arg_0x405db088);










static   void HplAtm1281Timer1P__CompareA__start(void);


static   void HplAtm1281Timer1P__CompareA__stop(void);
# 79 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static   void HplAtm1281Timer1P__Capture__setEdge(bool arg_0x405cec20);
#line 38
static   HplAtm1281Timer1P__Capture__size_type HplAtm1281Timer1P__Capture__get(void);
#line 55
static   void HplAtm1281Timer1P__Capture__reset(void);


static   void HplAtm1281Timer1P__Capture__start(void);


static   void HplAtm1281Timer1P__Capture__stop(void);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void HplAtm1281Timer1P__CompareB__default__fired(void);
#line 49
static   void HplAtm1281Timer1P__CompareC__default__fired(void);
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   bool HplAtm1281Timer1P__Timer__test(void);
#line 52
static   HplAtm1281Timer1P__Timer__timer_size HplAtm1281Timer1P__Timer__get(void);
#line 95
static   void HplAtm1281Timer1P__Timer__setScale(uint8_t arg_0x405c9c78);
#line 58
static   void HplAtm1281Timer1P__Timer__set(HplAtm1281Timer1P__Timer__timer_size arg_0x405b7010);










static   void HplAtm1281Timer1P__Timer__start(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*InitOneP.InitOne*/Atm128TimerInitC$0__Init__init(void);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void /*InitOneP.InitOne*/Atm128TimerInitC$0__Timer__overflow(void);
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static   /*CounterOne16C.NCounter*/Atm128CounterC$0__Counter__size_type /*CounterOne16C.NCounter*/Atm128CounterC$0__Counter__get(void);






static   bool /*CounterOne16C.NCounter*/Atm128CounterC$0__Counter__isOverflowPending(void);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void /*CounterOne16C.NCounter*/Atm128CounterC$0__Timer__overflow(void);
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__CounterFrom__overflow(void);
#line 53
static   /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__Counter__size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__Counter__get(void);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/LocalTime.nc"
static   uint32_t /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC$0__LocalTime__get(void);
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC$0__Counter__overflow(void);
# 98 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Alarm__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Alarm__getNow(void);
#line 92
static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Alarm__startAt(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Alarm__size_type arg_0x4066c1d8, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Alarm__size_type arg_0x4066c368);
#line 105
static   /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Alarm__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Alarm__getAlarm(void);
#line 62
static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Alarm__stop(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Init__init(void);
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static   /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Counter__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Counter__get(void);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Compare__fired(void);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Timer__overflow(void);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerCtrl8.nc"
static   uint8_t HplAtm1281Timer2AsyncP__TimerCtrl__getInterruptFlag(void);
#line 62
static   void HplAtm1281Timer2AsyncP__TimerCtrl__setControlB(uint8_t arg_0x4067c240);
#line 61
static   void HplAtm1281Timer2AsyncP__TimerCtrl__setControlA(uint8_t arg_0x4067dd80);
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
static   mcu_power_t HplAtm1281Timer2AsyncP__McuPowerOverride__lowestState(void);
# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerAsync.nc"
static   void HplAtm1281Timer2AsyncP__TimerAsync__setTimer2Asynchronous(void);
#line 75
static   int HplAtm1281Timer2AsyncP__TimerAsync__compareABusy(void);
# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   HplAtm1281Timer2AsyncP__Compare__size_type HplAtm1281Timer2AsyncP__Compare__get(void);





static   void HplAtm1281Timer2AsyncP__Compare__set(HplAtm1281Timer2AsyncP__Compare__size_type arg_0x405db088);










static   void HplAtm1281Timer2AsyncP__Compare__start(void);
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   HplAtm1281Timer2AsyncP__Timer__timer_size HplAtm1281Timer2AsyncP__Timer__get(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__fired__runTask(void);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__Alarm__fired(void);
# 125 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static  uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__Timer__getNow(void);
#line 118
static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__Timer__startOneShotAt(uint32_t arg_0x40347b10, uint32_t arg_0x40347ca0);
#line 67
static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__Timer__stop(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__updateFromTimer__runTask(void);
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__TimerFrom__fired(void);
#line 72
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__Timer__default__fired(
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x406fe770);
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__Timer__startPeriodic(
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x406fe770, 
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t arg_0x403428e0);
#line 67
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__Timer__stop(
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x406fe770);
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$1__Counter__overflow(void);
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static   void RadioAlarmP__RadioAlarm__default__fired(
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
uint8_t arg_0x407414c8);
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static   void RadioAlarmP__RadioAlarm__wait(
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
uint8_t arg_0x407414c8, 
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
uint16_t arg_0x404d5608);




static   void RadioAlarmP__RadioAlarm__cancel(
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
uint8_t arg_0x407414c8);
# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static   bool RadioAlarmP__RadioAlarm__isFree(
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
uint8_t arg_0x407414c8);
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static   uint16_t RadioAlarmP__RadioAlarm__getNow(
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
uint8_t arg_0x407414c8);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void RadioAlarmP__Alarm__fired(void);
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
static   void RadioAlarmP__Tasklet__run(void);










static   void TaskletC__Tasklet__schedule(void);
#line 61
static  void TaskletC__Tasklet__suspend(void);






static  void TaskletC__Tasklet__resume(void);
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  void ActiveMessageLayerC__SubSend__sendDone(message_t *arg_0x40752010, error_t arg_0x40752198);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *ActiveMessageLayerC__SubReceive__receive(message_t *arg_0x40344308, void *arg_0x403444a8, uint8_t arg_0x40344630);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t ActiveMessageLayerC__AMSend__send(
# 28 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
am_id_t arg_0x40759188, 
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t arg_0x4033ace8, message_t *arg_0x4033ae98, uint8_t arg_0x40340030);
#line 124
static  void *ActiveMessageLayerC__AMSend__getPayload(
# 28 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
am_id_t arg_0x40759188, 
# 124 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0x4033fcb0, uint8_t arg_0x4033fe38);
#line 112
static  uint8_t ActiveMessageLayerC__AMSend__maxPayloadLength(
# 28 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
am_id_t arg_0x40759188);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *ActiveMessageLayerC__Snoop__default__receive(
# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
am_id_t arg_0x407580b0, 
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x40344308, void *arg_0x403444a8, uint8_t arg_0x40344630);
#line 67
static  message_t *ActiveMessageLayerC__Receive__default__receive(
# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
am_id_t arg_0x40759ab8, 
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x40344308, void *arg_0x403444a8, uint8_t arg_0x40344630);
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  void IEEE154NetworkLayerP__SubSend__sendDone(message_t *arg_0x40752010, error_t arg_0x40752198);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *IEEE154NetworkLayerP__SubReceive__receive(message_t *arg_0x40344308, void *arg_0x403444a8, uint8_t arg_0x40344630);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  error_t IEEE154NetworkLayerP__Send__send(message_t *arg_0x40754e80, uint8_t arg_0x40753030);
#line 114
static  void *IEEE154NetworkLayerP__Send__getPayload(message_t *arg_0x40752c70, uint8_t arg_0x40752df8);
#line 101
static  uint8_t IEEE154NetworkLayerP__Send__maxPayloadLength(void);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *IEEE154NetworkLayerP__NonTinyosReceive__default__receive(
# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154NetworkLayerP.nc"
uint8_t arg_0x4076bd28, 
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x40344308, void *arg_0x403444a8, uint8_t arg_0x40344630);
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  error_t MessageBufferLayerP__SplitControl__start(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t MessageBufferLayerP__SoftwareInit__init(void);
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioState.nc"
static   void MessageBufferLayerP__RadioState__done(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  error_t MessageBufferLayerP__Send__send(message_t *arg_0x40754e80, uint8_t arg_0x40753030);
#line 114
static  void *MessageBufferLayerP__Send__getPayload(message_t *arg_0x40752c70, uint8_t arg_0x40752df8);
#line 101
static  uint8_t MessageBufferLayerP__Send__maxPayloadLength(void);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
static   message_t *MessageBufferLayerP__RadioReceive__receive(message_t *arg_0x40781380);
#line 35
static   bool MessageBufferLayerP__RadioReceive__header(message_t *arg_0x40782c10);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void MessageBufferLayerP__stateDoneTask__runTask(void);
#line 64
static  void MessageBufferLayerP__sendTask__runTask(void);
#line 64
static  void MessageBufferLayerP__deliverTask__runTask(void);
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static   void MessageBufferLayerP__RadioSend__ready(void);
#line 45
static   void MessageBufferLayerP__RadioSend__sendDone(error_t arg_0x407849f8);
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
static   void MessageBufferLayerP__Tasklet__run(void);
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  void UniqueLayerP__SubSend__sendDone(message_t *arg_0x40752010, error_t arg_0x40752198);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
static   message_t *UniqueLayerP__SubReceive__receive(message_t *arg_0x40781380);
#line 35
static   bool UniqueLayerP__SubReceive__header(message_t *arg_0x40782c10);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  error_t UniqueLayerP__Send__send(message_t *arg_0x40754e80, uint8_t arg_0x40753030);
#line 114
static  void *UniqueLayerP__Send__getPayload(message_t *arg_0x40752c70, uint8_t arg_0x40752df8);
#line 101
static  uint8_t UniqueLayerP__Send__maxPayloadLength(void);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Neighborhood.nc"
static   void UniqueLayerP__Neighborhood__evicted(uint8_t arg_0x407e0010);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t UniqueLayerP__Init__init(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodFlag.nc"
static   void NeighborhoodP__NeighborhoodFlag__clearAll(
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodP.nc"
uint8_t arg_0x40801bf0);
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodFlag.nc"
static   bool NeighborhoodP__NeighborhoodFlag__get(
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodP.nc"
uint8_t arg_0x40801bf0, 
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodFlag.nc"
uint8_t arg_0x407de068);




static   void NeighborhoodP__NeighborhoodFlag__set(
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodP.nc"
uint8_t arg_0x40801bf0, 
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodFlag.nc"
uint8_t arg_0x407de540);
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Neighborhood.nc"
static   uint8_t NeighborhoodP__Neighborhood__insertNode(am_addr_t arg_0x407e29a0);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t NeighborhoodP__Init__init(void);
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static   void TrafficMonitorLayerP__SubSend__ready(void);
#line 45
static   void TrafficMonitorLayerP__SubSend__sendDone(error_t arg_0x407849f8);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorConfig.nc"
static   void TrafficMonitorLayerP__TrafficMonitorConfig__channelError(void);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
static   message_t *TrafficMonitorLayerP__SubReceive__receive(message_t *arg_0x40781380);
#line 35
static   bool TrafficMonitorLayerP__SubReceive__header(message_t *arg_0x40782c10);
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioState.nc"
static   error_t TrafficMonitorLayerP__RadioState__turnOn(void);
#line 58
static   void TrafficMonitorLayerP__SubState__done(void);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Neighborhood.nc"
static   void TrafficMonitorLayerP__Neighborhood__evicted(uint8_t arg_0x407e0010);
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
static   void TrafficMonitorLayerP__Tasklet__run(void);
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static   error_t TrafficMonitorLayerP__RadioSend__send(message_t *arg_0x40784338);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void TrafficMonitorLayerP__startStopTimer__runTask(void);
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void TrafficMonitorLayerP__Timer__fired(void);
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static   void RandomCollisionLayerP__SubSend__ready(void);
#line 45
static   void RandomCollisionLayerP__SubSend__sendDone(error_t arg_0x407849f8);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
static   message_t *RandomCollisionLayerP__SubReceive__receive(message_t *arg_0x40781380);
#line 35
static   bool RandomCollisionLayerP__SubReceive__header(message_t *arg_0x40782c10);
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static   void RandomCollisionLayerP__RadioAlarm__fired(void);
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static   error_t RandomCollisionLayerP__RadioSend__send(message_t *arg_0x40784338);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void RandomCollisionLayerP__calcNextRandom__runTask(void);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Random.nc"
static   uint16_t RandomMlcgC__Random__rand16(void);
#line 35
static   uint32_t RandomMlcgC__Random__rand32(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t RandomMlcgC__Init__init(void);
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static   void SoftwareAckLayerP__SubSend__ready(void);
#line 45
static   void SoftwareAckLayerP__SubSend__sendDone(error_t arg_0x407849f8);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
static   message_t *SoftwareAckLayerP__SubReceive__receive(message_t *arg_0x40781380);
#line 35
static   bool SoftwareAckLayerP__SubReceive__header(message_t *arg_0x40782c10);
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static   void SoftwareAckLayerP__RadioAlarm__fired(void);
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static   error_t SoftwareAckLayerP__RadioSend__send(message_t *arg_0x40784338);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioCCA.nc"
static   void RF230LayerP__RadioCCA__default__done(error_t arg_0x40799b28);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t RF230LayerP__SoftwareInit__init(void);
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioState.nc"
static   error_t RF230LayerP__RadioState__turnOn(void);
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static   void RF230LayerP__RadioAlarm__fired(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t RF230LayerP__PlatformInit__init(void);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static  void RF230LayerP__SpiResource__granted(void);
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static   error_t RF230LayerP__RadioSend__send(message_t *arg_0x40784338);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static   void RF230LayerP__IRQ__captured(uint16_t arg_0x408a63d8);
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
static   void RF230LayerP__Tasklet__run(void);
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230.nc"
static   uint8_t HplRF230P__HplRF230__spiSplitRead(void);





static   uint8_t HplRF230P__HplRF230__spiSplitReadWrite(uint8_t arg_0x408aa5d0);





static   uint8_t HplRF230P__HplRF230__spiWrite(uint8_t arg_0x408aaae0);
#line 41
static   void HplRF230P__HplRF230__spiSplitWrite(uint8_t arg_0x408abc50);
#line 33
static   uint16_t HplRF230P__HplRF230__crcByte(uint16_t arg_0x408ab598, uint8_t arg_0x408ab720);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static   void HplRF230P__Capture__captured(HplRF230P__Capture__size_type arg_0x405d0630);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t HplRF230P__PlatformInit__init(void);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static   void HplRF230P__IRQ__disable(void);
#line 42
static   error_t HplRF230P__IRQ__captureRisingEdge(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void Atm128SpiP__zeroTask__runTask(void);
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static   void Atm128SpiP__SpiPacket__default__sendDone(uint8_t *arg_0x40932ac8, uint8_t *arg_0x40932c70, uint16_t arg_0x40932e00, 
error_t arg_0x40931010);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static  void Atm128SpiP__ResourceArbiter__granted(
# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x4092b790);
# 34 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SpiByte.nc"
static   uint8_t Atm128SpiP__SpiByte__write(uint8_t arg_0x40893ed0);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static   void Atm128SpiP__Spi__dataReady(uint8_t arg_0x40948350);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t Atm128SpiP__Resource__release(
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x4092d300);
# 87 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t Atm128SpiP__Resource__immediateRequest(
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x4092d300);
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t Atm128SpiP__Resource__request(
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x4092d300);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static  void Atm128SpiP__Resource__default__granted(
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x4092d300);
# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   bool Atm128SpiP__Resource__isOwner(
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x4092d300);
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static   void HplAtm128SpiP__SPI__sleep(void);
#line 66
static   void HplAtm128SpiP__SPI__initMaster(void);
#line 105
static   void HplAtm128SpiP__SPI__setMasterBit(bool arg_0x40945068);
#line 96
static   void HplAtm128SpiP__SPI__enableInterrupt(bool arg_0x40948898);
#line 80
static   uint8_t HplAtm128SpiP__SPI__read(void);
#line 125
static   void HplAtm128SpiP__SPI__setMasterDoubleSpeed(bool arg_0x409429f8);
#line 114
static   void HplAtm128SpiP__SPI__setClock(uint8_t arg_0x40944888);
#line 108
static   void HplAtm128SpiP__SPI__setClockPolarity(bool arg_0x409458c0);
#line 86
static   void HplAtm128SpiP__SPI__write(uint8_t arg_0x40949e00);
#line 99
static   void HplAtm128SpiP__SPI__enableSpi(bool arg_0x40947088);
#line 111
static   void HplAtm128SpiP__SPI__setClockPhase(bool arg_0x409440c0);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__Init__init(void);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static   error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__FcfsQueue__enqueue(resource_client_id_t arg_0x409a1360);
#line 43
static   bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__FcfsQueue__isEmpty(void);








static   bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__FcfsQueue__isEnqueued(resource_client_id_t arg_0x409a28d0);







static   resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__FcfsQueue__dequeue(void);
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__ResourceRequested__default__requested(
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409b8860);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__ResourceRequested__default__immediateRequested(
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409b8860);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__ResourceConfigure__default__unconfigure(
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409b7428);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__ResourceConfigure__default__configure(
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409b7428);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__Resource__release(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409b9ee8);
# 87 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__Resource__immediateRequest(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409b9ee8);
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__Resource__request(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409b9ee8);
# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__Resource__isOwner(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409b9ee8);
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
static   bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__ArbiterInfo__inUse(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__grantedTask__runTask(void);
# 98 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__Alarm__size_type /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__Alarm__getNow(void);
#line 92
static   void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__Alarm__startAt(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__Alarm__size_type arg_0x4066c1d8, /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__Alarm__size_type arg_0x4066c368);
#line 55
static   void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__Alarm__start(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__Alarm__size_type arg_0x4066d0b0);






static   void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__Alarm__stop(void);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__HplAtm128Compare__fired(void);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__HplAtm128Timer__overflow(void);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/BusyWait.nc"
static   void BusyWaitMicroC__BusyWait__wait(BusyWaitMicroC__BusyWait__size_type arg_0x408a3bd0);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t LedsP__Init__init(void);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Leds.nc"
static   void LedsP__Leds__led0Toggle(void);
#line 72
static   void LedsP__Leds__led1Toggle(void);
#line 89
static   void LedsP__Leds__led2Toggle(void);
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  error_t MDA300DigitalLogicP__SplitControl__start(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void MDA300DigitalLogicP__set_io_toggle__runTask(void);
# 10 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/Dio.nc"
static  error_t MDA300DigitalLogicP__Dio__read(
# 12 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300DigitalLogicP.nc"
uint8_t arg_0x40a28e10);
# 14 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/Dio.nc"
static  error_t MDA300DigitalLogicP__Dio__setParam(
# 12 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300DigitalLogicP.nc"
uint8_t arg_0x40a28e10, 
# 14 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/Dio.nc"
uint8_t arg_0x40351850);
static  void MDA300DigitalLogicP__Dio__default__readDone(
# 12 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300DigitalLogicP.nc"
uint8_t arg_0x40a28e10, 
# 15 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/Dio.nc"
uint16_t arg_0x40351ce0);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void MDA300DigitalLogicP__read_io__runTask(void);
#line 64
static  void MDA300DigitalLogicP__init_io__runTask(void);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static  void MDA300DigitalLogicP__I2CResource__granted(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void MDA300DigitalLogicP__set_io_low__runTask(void);
# 101 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/I2CPacket.nc"
static   void MDA300DigitalLogicP__I2CPacket__writeDone(error_t arg_0x40a46e78, uint16_t arg_0x40a45030, uint8_t arg_0x40a451b8, uint8_t *arg_0x40a45360);
#line 91
static   void MDA300DigitalLogicP__I2CPacket__readDone(error_t arg_0x40a463b0, uint16_t arg_0x40a46540, uint8_t arg_0x40a466c8, uint8_t *arg_0x40a46870);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void MDA300DigitalLogicP__Interrupt__fired(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void MDA300DigitalLogicP__set_io_high__runTask(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0__Irq__default__fired(void);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static   void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0__IrqSignal__fired(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1__Irq__default__fired(void);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1__IrqSignal__fired(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2__Irq__default__fired(void);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static   void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2__IrqSignal__fired(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3__Irq__default__fired(void);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static   void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3__IrqSignal__fired(void);
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4__Irq__disable(void);
#line 35
static   void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4__Irq__enable(void);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static   void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4__IrqSignal__fired(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5__Irq__default__fired(void);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static   void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5__IrqSignal__fired(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6__Irq__default__fired(void);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6__IrqSignal__fired(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7__Irq__default__fired(void);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static   void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7__IrqSignal__fired(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$1__Init__init(void);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static   error_t /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$1__FcfsQueue__enqueue(resource_client_id_t arg_0x409a1360);
#line 52
static   bool /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$1__FcfsQueue__isEnqueued(resource_client_id_t arg_0x409a28d0);
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static   void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__ResourceRequested__default__requested(
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40ae7688);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__ResourceConfigure__default__configure(
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40ae6838);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
static   error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__ResourceDefaultOwner__release(void);
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__Resource__request(
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40ae8cd8);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__grantedTask__runTask(void);
# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
static   void /*Atm128I2CMasterP.Power*/AsyncPowerManagerP$0__ResourceDefaultOwner__requested(void);
# 101 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/I2CPacket.nc"
static   void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__SubPacket__writeDone(error_t arg_0x40a46e78, uint16_t arg_0x40a45030, uint8_t arg_0x40a451b8, uint8_t *arg_0x40a45360);
#line 91
static   void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__SubPacket__readDone(error_t arg_0x40a463b0, uint16_t arg_0x40a46540, uint8_t arg_0x40a466c8, uint8_t *arg_0x40a46870);
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__Resource__request(
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x40b06ee8);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static  void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__Resource__default__granted(
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x40b06ee8);
# 65 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/I2CPacket.nc"
static   error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__I2CPacket__read(
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x40b2b918, 
# 65 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/I2CPacket.nc"
i2c_flags_t arg_0x40a49af0, uint16_t arg_0x40a49c80, uint8_t arg_0x40a49e08, uint8_t *arg_0x40a48010);
#line 101
static   void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__I2CPacket__default__writeDone(
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x40b2b918, 
# 101 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/I2CPacket.nc"
error_t arg_0x40a46e78, uint16_t arg_0x40a45030, uint8_t arg_0x40a451b8, uint8_t *arg_0x40a45360);
#line 81
static   error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__I2CPacket__write(
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x40b2b918, 
# 81 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/I2CPacket.nc"
i2c_flags_t arg_0x40a487c0, uint16_t arg_0x40a48950, uint8_t arg_0x40a48ad8, uint8_t *arg_0x40a48c80);









static   void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__I2CPacket__default__readDone(
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x40b2b918, 
# 91 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/I2CPacket.nc"
error_t arg_0x40a463b0, uint16_t arg_0x40a46540, uint8_t arg_0x40a466c8, uint8_t *arg_0x40a46870);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static  void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__SubResource__granted(
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x40b28488);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
static   void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__commandComplete(void);
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AsyncStdControl.nc"
static   error_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__AsyncStdControl__start(void);
# 65 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/I2CPacket.nc"
static   error_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2CPacket__read(i2c_flags_t arg_0x40a49af0, uint16_t arg_0x40a49c80, uint8_t arg_0x40a49e08, uint8_t *arg_0x40a48010);
#line 81
static   error_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2CPacket__write(i2c_flags_t arg_0x40a487c0, uint16_t arg_0x40a48950, uint8_t arg_0x40a48ad8, uint8_t *arg_0x40a48c80);
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
static   void HplAtm128I2CBusP__I2C__readCurrent(void);
static   void HplAtm128I2CBusP__I2C__sendCommand(void);




static   void HplAtm128I2CBusP__I2C__setStart(bool arg_0x40b518a0);
#line 45
static   uint8_t HplAtm128I2CBusP__I2C__status(void);
#line 60
static   void HplAtm128I2CBusP__I2C__enableInterrupt(bool arg_0x40b4e030);
#line 82
static   uint8_t HplAtm128I2CBusP__I2C__read(void);
#line 42
static   void HplAtm128I2CBusP__I2C__init(bool arg_0x40b52470);
#line 57
static   void HplAtm128I2CBusP__I2C__enableAck(bool arg_0x40b50848);
#line 76
static   void HplAtm128I2CBusP__I2C__enable(bool arg_0x40b4d3a0);




static   void HplAtm128I2CBusP__I2C__write(uint8_t arg_0x40b4de88);
#line 55
static   void HplAtm128I2CBusP__I2C__setStop(bool arg_0x40b50088);
#line 74
static   void HplAtm128I2CBusP__I2C__setInterruptPending(bool arg_0x40b4eed8);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Leds.nc"
static   void NoLedsC__Leds__led1On(void);
#line 45
static   void NoLedsC__Leds__led0On(void);
#line 78
static   void NoLedsC__Leds__led2On(void);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0__AMSend__send(am_addr_t arg_0x4033ace8, message_t *arg_0x4033ae98, uint8_t arg_0x40340030);
#line 124
static  void */*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0__AMSend__getPayload(message_t *arg_0x4033fcb0, uint8_t arg_0x4033fe38);
#line 112
static  uint8_t /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0__AMSend__maxPayloadLength(void);
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  void /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0__Send__sendDone(message_t *arg_0x40752010, error_t arg_0x40752198);
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__AMSend__sendDone(
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40bcb6a8, 
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0x4033f068, error_t arg_0x4033f1f0);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__Send__send(
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40bcccf0, 
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
message_t *arg_0x40754e80, uint8_t arg_0x40753030);
#line 114
static  void */*AMQueueP.AMQueueImplP*/AMQueueImplP$0__Send__getPayload(
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40bcccf0, 
# 114 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
message_t *arg_0x40752c70, uint8_t arg_0x40752df8);
#line 101
static  uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__Send__maxPayloadLength(
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40bcccf0);
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__Send__default__sendDone(
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40bcccf0, 
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
message_t *arg_0x40752010, error_t arg_0x40752198);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__errorTask__runTask(void);
#line 64
static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__CancelTask__runTask(void);
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  error_t OscilloscopeC__SensorControl__start(void);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t OscilloscopeC__AMSend__send(am_addr_t arg_0x4033ace8, message_t *arg_0x4033ae98, uint8_t arg_0x40340030);
#line 124
static  void *OscilloscopeC__AMSend__getPayload(message_t *arg_0x4033fcb0, uint8_t arg_0x4033fe38);
#line 112
static  uint8_t OscilloscopeC__AMSend__maxPayloadLength(void);
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  error_t OscilloscopeC__RadioControl__start(void);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Leds.nc"
static   void OscilloscopeC__Leds__led0Toggle(void);
#line 72
static   void OscilloscopeC__Leds__led1Toggle(void);
#line 89
static   void OscilloscopeC__Leds__led2Toggle(void);
# 10 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/Dio.nc"
static  error_t OscilloscopeC__Read1__read(void);



static  error_t OscilloscopeC__Read1__setParam(uint8_t arg_0x40351850);
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void OscilloscopeC__Timer__startPeriodic(uint32_t arg_0x403428e0);
# 35 "OscilloscopeC.nc"
message_t OscilloscopeC__sendbuf;
bool OscilloscopeC__sendbusy;


oscilloscope_t OscilloscopeC__local;

uint8_t OscilloscopeC__reading;
uint8_t OscilloscopeC__param;






bool OscilloscopeC__suppress_count_change;


static inline void OscilloscopeC__report_problem(void);
static inline void OscilloscopeC__report_sent(void);
static inline void OscilloscopeC__report_received(void);

static inline  void OscilloscopeC__Boot__booted(void);







static inline void OscilloscopeC__startTimer(void);




static inline  void OscilloscopeC__SensorControl__startDone(error_t error);






static inline  void OscilloscopeC__RadioControl__startDone(error_t error);






static inline  void OscilloscopeC__RadioControl__stopDone(error_t error);


static inline  message_t *OscilloscopeC__Receive__receive(message_t *msg, void *payload, uint8_t len);
#line 113
static inline  void OscilloscopeC__Timer__fired(void);
#line 137
static inline  void OscilloscopeC__AMSend__sendDone(message_t *msg, error_t error);








static  void OscilloscopeC__Read1__readDone(uint16_t data);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t PlatformP__MoteInit__init(void);
#line 51
static  error_t PlatformP__MeasureClock__init(void);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/mica/PlatformP.nc"
static inline void PlatformP__power_init(void);






static inline  error_t PlatformP__Init__init(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t MotePlatformP__SubInit__init(void);
# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void MotePlatformP__SerialIdPin__makeInput(void);
#line 30
static   void MotePlatformP__SerialIdPin__clr(void);
# 26 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/micaz/MotePlatformP.nc"
static inline  error_t MotePlatformP__PlatformInit__init(void);
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0__IO__set(void);

static   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0__IO__toggle(void);



static __inline   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0__IO__makeOutput(void);
#line 46
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1__IO__set(void);

static   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1__IO__toggle(void);



static __inline   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1__IO__makeOutput(void);
#line 46
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2__IO__set(void);

static   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2__IO__toggle(void);



static __inline   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2__IO__makeOutput(void);
#line 47
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4__IO__clr(void);


static __inline   void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4__IO__makeInput(void);
#line 46
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6__IO__set(void);
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6__IO__clr(void);




static __inline   void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6__IO__makeOutput(void);
#line 46
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8__IO__set(void);
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8__IO__clr(void);




static __inline   void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8__IO__makeOutput(void);
#line 52
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP$9__IO__makeOutput(void);
#line 52
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP$10__IO__makeOutput(void);
#line 50
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP$11__IO__makeInput(void);
#line 46
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15__IO__set(void);
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15__IO__clr(void);




static __inline   void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15__IO__makeOutput(void);
#line 46
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24__IO__set(void);



static __inline   void /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24__IO__makeInput(void);
#line 46
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25__IO__set(void);



static __inline   void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25__IO__makeInput(void);
#line 47
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28__IO__clr(void);


static __inline   void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28__IO__makeInput(void);
#line 47
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30__IO__clr(void);


static __inline   void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30__IO__makeInput(void);
#line 50
static __inline   void /*HplAtm128GeneralIOC.PortE.Bit4*/HplAtm128GeneralIOPinP$36__IO__makeInput(void);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/MeasureClockC.nc"
enum MeasureClockC____nesc_unnamed4347 {


  MeasureClockC__MAGIC = 488 / (16 / PLATFORM_MHZ)
};

uint16_t MeasureClockC__cycles;

static inline  error_t MeasureClockC__Init__init(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t RealMainP__SoftwareInit__init(void);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Boot.nc"
static  void RealMainP__Boot__booted(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t RealMainP__PlatformInit__init(void);
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Scheduler.nc"
static  void RealMainP__Scheduler__init(void);
#line 61
static  void RealMainP__Scheduler__taskLoop(void);
#line 54
static  bool RealMainP__Scheduler__runNextTask(void);
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/system/RealMainP.nc"
int main(void)   ;
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void SchedulerBasicP__TaskBasic__runTask(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x402f61b0);
# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuSleep.nc"
static   void SchedulerBasicP__McuSleep__sleep(void);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4348 {

  SchedulerBasicP__NUM_TASKS = 17U, 
  SchedulerBasicP__NO_TASK = 255
};

volatile uint8_t SchedulerBasicP__m_head;
volatile uint8_t SchedulerBasicP__m_tail;
volatile uint8_t SchedulerBasicP__m_next[SchedulerBasicP__NUM_TASKS];








static __inline uint8_t SchedulerBasicP__popTask(void);
#line 86
static inline bool SchedulerBasicP__isWaiting(uint8_t id);




static inline bool SchedulerBasicP__pushTask(uint8_t id);
#line 113
static inline  void SchedulerBasicP__Scheduler__init(void);









static  bool SchedulerBasicP__Scheduler__runNextTask(void);
#line 138
static inline  void SchedulerBasicP__Scheduler__taskLoop(void);
#line 159
static   error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id);




static   void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id);
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
static   mcu_power_t McuSleepC__McuPowerOverride__lowestState(void);
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/McuSleepC.nc"
const_uint8_t McuSleepC__atm128PowerBits[ATM128_POWER_DOWN + 1] = { 
0, 
1 << 1, ((
1 << 3) | (1 << 2)) | (1 << 1), (
1 << 2) | (1 << 1), (
1 << 3) | (1 << 2), 
1 << 2 };

static inline mcu_power_t McuSleepC__getPowerState(void);
#line 128
static inline   void McuSleepC__McuSleep__sleep(void);
#line 141
static inline   void McuSleepC__McuPowerState__update(void);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorConfig.nc"
static   void RF230ActiveMessageP__TrafficMonitorConfig__channelError(void);
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SlottedCollisionConfig.nc"
static   void RF230ActiveMessageP__SlottedCollisionConfig__timerTick(void);
# 124 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
static   uint8_t RF230ActiveMessageP__IEEE154Packet__getDSN(message_t *arg_0x404d2820);
#line 79
static   bool RF230ActiveMessageP__IEEE154Packet__isAckFrame(message_t *arg_0x404c85c0);
#line 129
static   void RF230ActiveMessageP__IEEE154Packet__setDSN(message_t *arg_0x404d2d10, uint8_t arg_0x404d2e98);
#line 92
static   void RF230ActiveMessageP__IEEE154Packet__createAckReply(message_t *arg_0x404c70d0, message_t *arg_0x404c7280);
#line 39
static   ieee154_header_t *RF230ActiveMessageP__IEEE154Packet__getHeader(message_t *arg_0x404ccca0);
#line 155
static   uint16_t RF230ActiveMessageP__IEEE154Packet__getSrcAddr(message_t *arg_0x404cfbd8);
#line 67
static   bool RF230ActiveMessageP__IEEE154Packet__isDataFrame(message_t *arg_0x404caa80);
#line 103
static   bool RF230ActiveMessageP__IEEE154Packet__getAckRequired(message_t *arg_0x404d4010);
#line 98
static   bool RF230ActiveMessageP__IEEE154Packet__verifyAckReply(message_t *arg_0x404c7850, message_t *arg_0x404c7a00);
#line 49
static   void RF230ActiveMessageP__IEEE154Packet__setLength(message_t *arg_0x404cb708, uint8_t arg_0x404cb890);
#line 190
static   bool RF230ActiveMessageP__IEEE154Packet__requiresAckWait(message_t *arg_0x404d9030);
#line 44
static   uint8_t RF230ActiveMessageP__IEEE154Packet__getLength(message_t *arg_0x404cb1f8);
#line 196
static   bool RF230ActiveMessageP__IEEE154Packet__requiresAckReply(message_t *arg_0x404d9598);
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
static  void RF230ActiveMessageP__Packet__clear(message_t *arg_0x404628d8);
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static   uint16_t RF230ActiveMessageP__RadioAlarm__getNow(void);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   uint8_t RF230ActiveMessageP__RF230Config__getLength(message_t *msg);




static inline   void RF230ActiveMessageP__RF230Config__setLength(message_t *msg, uint8_t len);




static inline   uint8_t *RF230ActiveMessageP__RF230Config__getPayload(message_t *msg);




static __inline rf230packet_metadata_t *RF230ActiveMessageP__getMeta(message_t *msg);




static inline   uint8_t RF230ActiveMessageP__RF230Config__getHeaderLength(void);





static inline   uint8_t RF230ActiveMessageP__RF230Config__getMaxLength(void);





static inline   uint8_t RF230ActiveMessageP__RF230Config__getDefaultChannel(void);




static inline   bool RF230ActiveMessageP__RF230Config__requiresRssiCca(message_t *msg);






static inline   bool RF230ActiveMessageP__SoftwareAckConfig__requiresAckWait(message_t *msg);




static inline   bool RF230ActiveMessageP__SoftwareAckConfig__isAckPacket(message_t *msg);




static inline   bool RF230ActiveMessageP__SoftwareAckConfig__verifyAckPacket(message_t *data, message_t *ack);




static inline   bool RF230ActiveMessageP__SoftwareAckConfig__requiresAckReply(message_t *msg);




static inline   void RF230ActiveMessageP__SoftwareAckConfig__createAckPacket(message_t *data, message_t *ack);




static   void RF230ActiveMessageP__SoftwareAckConfig__setAckReceived(message_t *msg, bool acked);







static inline   uint16_t RF230ActiveMessageP__SoftwareAckConfig__getAckTimeout(void);




static inline   void RF230ActiveMessageP__SoftwareAckConfig__reportChannelError(void);






static inline   uint8_t RF230ActiveMessageP__UniqueConfig__getSequenceNumber(message_t *msg);




static inline   void RF230ActiveMessageP__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t dsn);




static inline   am_addr_t RF230ActiveMessageP__UniqueConfig__getSender(message_t *msg);




static inline   void RF230ActiveMessageP__UniqueConfig__reportChannelError(void);






static inline  error_t RF230ActiveMessageP__ActiveMessageConfig__checkPacket(message_t *msg);
#line 184
enum RF230ActiveMessageP____nesc_unnamed4349 {

  RF230ActiveMessageP__TRAFFIC_UPDATE_PERIOD = 100, 
  RF230ActiveMessageP__TRAFFIC_MAX_BYTES = (uint16_t )(RF230ActiveMessageP__TRAFFIC_UPDATE_PERIOD * 1000UL / 32)
};

static inline   uint16_t RF230ActiveMessageP__TrafficMonitorConfig__getUpdatePeriod(void);




static   uint16_t RF230ActiveMessageP__TrafficMonitorConfig__getChannelTime(message_t *msg);
#line 208
static inline   am_addr_t RF230ActiveMessageP__TrafficMonitorConfig__getSender(message_t *msg);




static inline   void RF230ActiveMessageP__TrafficMonitorConfig__timerTick(void);
#line 229
static inline   uint16_t RF230ActiveMessageP__RandomCollisionConfig__getMinimumBackoff(void);




static inline   uint16_t RF230ActiveMessageP__RandomCollisionConfig__getInitialBackoff(message_t *msg);




static inline   uint16_t RF230ActiveMessageP__RandomCollisionConfig__getCongestionBackoff(message_t *msg);




static inline   uint16_t RF230ActiveMessageP__RandomCollisionConfig__getTransmitBarrier(message_t *msg);
#line 260
static inline   void RF230ActiveMessageP__RadioAlarm__fired(void);
#line 291
static inline    void RF230ActiveMessageP__SlottedCollisionConfig__default__timerTick(void);
# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
static   void RF230PacketP__IEEE154Packet__createDataFrame(message_t *arg_0x404c8010);
#line 49
static   void RF230PacketP__IEEE154Packet__setLength(message_t *arg_0x404cb708, uint8_t arg_0x404cb890);
#line 44
static   uint8_t RF230PacketP__IEEE154Packet__getLength(message_t *arg_0x404cb1f8);
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
enum RF230PacketP____nesc_unnamed4350 {

  RF230PacketP__PACKET_LENGTH_INCREASE = 
  sizeof(rf230packet_header_t ) - 1
   + sizeof(ieee154_footer_t )
};

static __inline rf230packet_metadata_t *RF230PacketP__getMeta(message_t *msg);






static inline  void RF230PacketP__Packet__clear(message_t *msg);






static __inline  void RF230PacketP__Packet__setPayloadLength(message_t *msg, uint8_t len);




static __inline  uint8_t RF230PacketP__Packet__payloadLength(message_t *msg);




static __inline  uint8_t RF230PacketP__Packet__maxPayloadLength(void);




static inline  void *RF230PacketP__Packet__getPayload(message_t *msg, uint8_t len);
#line 135
static inline   void RF230PacketP__PacketLinkQuality__set(message_t *msg, uint8_t value);
#line 152
static inline   void RF230PacketP__PacketTimeStampRadio__clear(message_t *msg);




static   void RF230PacketP__PacketTimeStampRadio__set(message_t *msg, uint32_t value);
#line 193
static inline   bool RF230PacketP__PacketTransmitPower__isSet(message_t *msg);




static inline   uint8_t RF230PacketP__PacketTransmitPower__get(message_t *msg);
#line 227
static inline   void RF230PacketP__PacketRSSI__clear(message_t *msg);




static inline   void RF230PacketP__PacketRSSI__set(message_t *msg, uint8_t value);








static inline   bool RF230PacketP__PacketTimeSyncOffset__isSet(message_t *msg);




static inline   uint8_t RF230PacketP__PacketTimeSyncOffset__get(message_t *msg);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static   am_addr_t IEEE154PacketP__ActiveMessageAddress__amAddress(void);




static   am_group_t IEEE154PacketP__ActiveMessageAddress__amGroup(void);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
enum IEEE154PacketP____nesc_unnamed4351 {

  IEEE154PacketP__IEEE154_DATA_FRAME_MASK = (((IEEE154_TYPE_MASK << IEEE154_FCF_FRAME_TYPE)
   | (1 << IEEE154_FCF_INTRAPAN))
   | (IEEE154_ADDR_MASK << IEEE154_FCF_DEST_ADDR_MODE))
   | (IEEE154_ADDR_MASK << IEEE154_FCF_SRC_ADDR_MODE), 

  IEEE154PacketP__IEEE154_DATA_FRAME_VALUE = (((IEEE154_TYPE_DATA << IEEE154_FCF_FRAME_TYPE)
   | (1 << IEEE154_FCF_INTRAPAN))
   | (IEEE154_ADDR_SHORT << IEEE154_FCF_DEST_ADDR_MODE))
   | (IEEE154_ADDR_SHORT << IEEE154_FCF_SRC_ADDR_MODE), 

  IEEE154PacketP__IEEE154_ACK_FRAME_LENGTH = 5, 
  IEEE154PacketP__IEEE154_ACK_FRAME_MASK = IEEE154_TYPE_MASK << IEEE154_FCF_FRAME_TYPE, 
  IEEE154PacketP__IEEE154_ACK_FRAME_VALUE = IEEE154_TYPE_ACK << IEEE154_FCF_FRAME_TYPE
};

static __inline ieee154_header_t *IEEE154PacketP__getHeader(message_t *msg);




static __inline   ieee154_header_t *IEEE154PacketP__IEEE154Packet__getHeader(message_t *msg);




static __inline   uint8_t IEEE154PacketP__IEEE154Packet__getLength(message_t *msg);




static __inline   void IEEE154PacketP__IEEE154Packet__setLength(message_t *msg, uint8_t length);
#line 88
static __inline   bool IEEE154PacketP__IEEE154Packet__isDataFrame(message_t *msg);




static __inline   void IEEE154PacketP__IEEE154Packet__createDataFrame(message_t *msg);




static __inline   bool IEEE154PacketP__IEEE154Packet__isAckFrame(message_t *msg);
#line 111
static __inline   void IEEE154PacketP__IEEE154Packet__createAckReply(message_t *data, message_t *ack);








static __inline   bool IEEE154PacketP__IEEE154Packet__verifyAckReply(message_t *data, message_t *ack);







static __inline   bool IEEE154PacketP__IEEE154Packet__getAckRequired(message_t *msg);
#line 154
static __inline   uint8_t IEEE154PacketP__IEEE154Packet__getDSN(message_t *msg);




static __inline   void IEEE154PacketP__IEEE154Packet__setDSN(message_t *msg, uint8_t dsn);









static __inline   void IEEE154PacketP__IEEE154Packet__setDestPan(message_t *msg, uint16_t pan);




static __inline   uint16_t IEEE154PacketP__IEEE154Packet__getDestAddr(message_t *msg);




static __inline   void IEEE154PacketP__IEEE154Packet__setDestAddr(message_t *msg, uint16_t addr);




static __inline   uint16_t IEEE154PacketP__IEEE154Packet__getSrcAddr(message_t *msg);




static __inline   void IEEE154PacketP__IEEE154Packet__setSrcAddr(message_t *msg, uint16_t addr);






static __inline   uint8_t IEEE154PacketP__IEEE154Packet__get6LowPan(message_t *msg);




static __inline   void IEEE154PacketP__IEEE154Packet__set6LowPan(message_t *msg, uint8_t network);






static __inline   am_id_t IEEE154PacketP__IEEE154Packet__getType(message_t *msg);




static __inline   void IEEE154PacketP__IEEE154Packet__setType(message_t *msg, am_id_t type);




static inline   bool IEEE154PacketP__IEEE154Packet__requiresAckWait(message_t *msg);






static   bool IEEE154PacketP__IEEE154Packet__requiresAckReply(message_t *msg);
#line 238
static __inline  am_addr_t IEEE154PacketP__AMPacket__address(void);




static __inline  am_group_t IEEE154PacketP__AMPacket__localGroup(void);





static __inline  am_addr_t IEEE154PacketP__AMPacket__destination(message_t *msg);









static __inline  void IEEE154PacketP__AMPacket__setDestination(message_t *msg, am_addr_t addr);




static __inline  void IEEE154PacketP__AMPacket__setSource(message_t *msg, am_addr_t addr);




static __inline  bool IEEE154PacketP__AMPacket__isForMe(message_t *msg);





static __inline  am_id_t IEEE154PacketP__AMPacket__type(message_t *msg);




static __inline  void IEEE154PacketP__AMPacket__setType(message_t *msg, am_id_t type);









static __inline  void IEEE154PacketP__AMPacket__setGroup(message_t *msg, am_group_t grp);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
am_addr_t ActiveMessageAddressC__addr = TOS_AM_ADDRESS;


am_group_t ActiveMessageAddressC__group = TOS_AM_GROUP;






static inline   am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void);
#line 82
static inline   am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void);
#line 95
static   am_addr_t ActiveMessageAddressC__amAddress(void);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void HplAtm1281Timer1P__CompareA__fired(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static   void HplAtm1281Timer1P__Capture__captured(HplAtm1281Timer1P__Capture__size_type arg_0x405d0630);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void HplAtm1281Timer1P__CompareB__fired(void);
#line 49
static   void HplAtm1281Timer1P__CompareC__fired(void);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void HplAtm1281Timer1P__Timer__overflow(void);
# 70 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline   uint16_t HplAtm1281Timer1P__Timer__get(void);


static inline   void HplAtm1281Timer1P__Timer__set(uint16_t t);








static inline   void HplAtm1281Timer1P__Timer__setScale(uint8_t s);










static inline   uint8_t HplAtm1281Timer1P__TimerCtrl__getControlB(void);
#line 106
static inline   void HplAtm1281Timer1P__TimerCtrl__setControlB(uint8_t x);
#line 125
static inline   uint8_t HplAtm1281Timer1P__TimerCtrl__getInterruptFlag(void);









static inline   void HplAtm1281Timer1P__Capture__setEdge(bool up);



static inline   void HplAtm1281Timer1P__Capture__reset(void);
static inline   void HplAtm1281Timer1P__CompareA__reset(void);



static inline   void HplAtm1281Timer1P__Timer__start(void);
static inline   void HplAtm1281Timer1P__Capture__start(void);
static inline   void HplAtm1281Timer1P__CompareA__start(void);




static inline   void HplAtm1281Timer1P__Capture__stop(void);
static inline   void HplAtm1281Timer1P__CompareA__stop(void);



static inline   bool HplAtm1281Timer1P__Timer__test(void);
#line 194
static inline   void HplAtm1281Timer1P__CompareA__set(uint16_t t);




static inline   uint16_t HplAtm1281Timer1P__Capture__get(void);






void __vector_17(void) __attribute((interrupt))   ;


static inline    void HplAtm1281Timer1P__CompareB__default__fired(void);
void __vector_18(void) __attribute((interrupt))   ;


static inline    void HplAtm1281Timer1P__CompareC__default__fired(void);
void __vector_19(void) __attribute((interrupt))   ;



void __vector_16(void) __attribute((interrupt))   ;



void __vector_20(void) __attribute((interrupt))   ;
# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void /*InitOneP.InitOne*/Atm128TimerInitC$0__Timer__setScale(uint8_t arg_0x405c9c78);
#line 58
static   void /*InitOneP.InitOne*/Atm128TimerInitC$0__Timer__set(/*InitOneP.InitOne*/Atm128TimerInitC$0__Timer__timer_size arg_0x405b7010);










static   void /*InitOneP.InitOne*/Atm128TimerInitC$0__Timer__start(void);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline  error_t /*InitOneP.InitOne*/Atm128TimerInitC$0__Init__init(void);








static inline   void /*InitOneP.InitOne*/Atm128TimerInitC$0__Timer__overflow(void);
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*CounterOne16C.NCounter*/Atm128CounterC$0__Counter__overflow(void);
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   bool /*CounterOne16C.NCounter*/Atm128CounterC$0__Timer__test(void);
#line 52
static   /*CounterOne16C.NCounter*/Atm128CounterC$0__Timer__timer_size /*CounterOne16C.NCounter*/Atm128CounterC$0__Timer__get(void);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline   /*CounterOne16C.NCounter*/Atm128CounterC$0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC$0__Counter__get(void);




static inline   bool /*CounterOne16C.NCounter*/Atm128CounterC$0__Counter__isOverflowPending(void);









static inline   void /*CounterOne16C.NCounter*/Atm128CounterC$0__Timer__overflow(void);
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static   /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__CounterFrom__size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__CounterFrom__get(void);






static   bool /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__CounterFrom__isOverflowPending(void);










static   void /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__Counter__overflow(void);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
/*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__upper_count_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__m_upper;

enum /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0____nesc_unnamed4352 {

  TransformCounterC$0__LOW_SHIFT_RIGHT = 0, 
  TransformCounterC$0__HIGH_SHIFT_LEFT = 8 * sizeof(/*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__from_size_type ) - /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__LOW_SHIFT_RIGHT, 
  TransformCounterC$0__NUM_UPPER_BITS = 8 * sizeof(/*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__to_size_type ) - 8 * sizeof(/*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__from_size_type ) + 0, 



  TransformCounterC$0__OVERFLOW_MASK = /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__NUM_UPPER_BITS ? ((/*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__upper_count_type )2 << (/*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__NUM_UPPER_BITS - 1)) - 1 : 0
};

static   /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__to_size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__Counter__get(void);
#line 122
static inline   void /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__CounterFrom__overflow(void);
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static   /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC$0__Counter__size_type /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC$0__Counter__get(void);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline   uint32_t /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC$0__LocalTime__get(void);




static inline   void /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC$0__Counter__overflow(void);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerCtrl8.nc"
static   uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__TimerCtrl__getInterruptFlag(void);
#line 62
static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__TimerCtrl__setControlB(uint8_t arg_0x4067c240);
#line 61
static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__TimerCtrl__setControlA(uint8_t arg_0x4067dd80);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Alarm__fired(void);
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Counter__overflow(void);
# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerAsync.nc"
static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__TimerAsync__setTimer2Asynchronous(void);
#line 75
static   int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__TimerAsync__compareABusy(void);
# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Compare__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Compare__get(void);





static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Compare__size_type arg_0x405db088);










static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Compare__start(void);
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Timer__timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Timer__get(void);
# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__set;
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__t0;
#line 63
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__dt;
 uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__base;



enum /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0____nesc_unnamed4353 {
  Atm1281AlarmAsyncP$0__MINDT = 2, 
  Atm1281AlarmAsyncP$0__MAXT = 230
};



static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__setInterrupt(void);


static inline  error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Init__init(void);
#line 101
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__setOcr2A(uint8_t n);
#line 117
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__setInterrupt(void);
#line 176
static inline   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Compare__fired(void);
#line 188
static   uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Counter__get(void);
#line 231
static inline   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Alarm__stop(void);







static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Alarm__startAt(uint32_t nt0, uint32_t ndt);









static inline   uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Alarm__getNow(void);



static inline   uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Alarm__getAlarm(void);



static inline   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Timer__overflow(void);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void HplAtm1281Timer2AsyncP__Compare__fired(void);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void HplAtm1281Timer2AsyncP__Timer__overflow(void);
# 79 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline   uint8_t HplAtm1281Timer2AsyncP__Timer__get(void);
#line 111
static inline   void HplAtm1281Timer2AsyncP__TimerCtrl__setControlA(uint8_t x);





static inline   void HplAtm1281Timer2AsyncP__TimerCtrl__setControlB(uint8_t x);
#line 134
static inline   uint8_t HplAtm1281Timer2AsyncP__TimerCtrl__getInterruptFlag(void);
#line 161
static inline   void HplAtm1281Timer2AsyncP__Compare__start(void);









static inline   uint8_t HplAtm1281Timer2AsyncP__Compare__get(void);


static inline   void HplAtm1281Timer2AsyncP__Compare__set(uint8_t t);









static __inline void HplAtm1281Timer2AsyncP__stabiliseTimer2(void);
#line 199
static inline   mcu_power_t HplAtm1281Timer2AsyncP__McuPowerOverride__lowestState(void);
#line 222
void __vector_13(void) __attribute((signal))   ;







void __vector_15(void) __attribute((signal))   ;
#line 246
static inline   void HplAtm1281Timer2AsyncP__TimerAsync__setTimer2Asynchronous(void);
#line 258
static inline   int HplAtm1281Timer2AsyncP__TimerAsync__compareABusy(void);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__fired__postTask(void);
# 98 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__Alarm__getNow(void);
#line 92
static   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__Alarm__size_type arg_0x4066c1d8, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__Alarm__size_type arg_0x4066c368);
#line 105
static   /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__Alarm__getAlarm(void);
#line 62
static   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__Alarm__stop(void);
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__Timer__fired(void);
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0____nesc_unnamed4354 {
#line 63
  AlarmToTimerC$0__fired = 0U
};
#line 63
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0____nesc_sillytask_fired[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__fired];
#line 44
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__m_dt;
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__m_oneshot;

static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__start(uint32_t t0, uint32_t dt, bool oneshot);
#line 60
static inline  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__Timer__stop(void);


static inline  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__fired__runTask(void);






static inline   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__Alarm__fired(void);
#line 82
static inline  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);


static inline  uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__Timer__getNow(void);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__updateFromTimer__postTask(void);
# 125 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static  uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__TimerFrom__getNow(void);
#line 118
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__TimerFrom__startOneShotAt(uint32_t arg_0x40347b10, uint32_t arg_0x40347ca0);
#line 67
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__TimerFrom__stop(void);




static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__Timer__fired(
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x406fe770);
#line 60
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0____nesc_unnamed4355 {
#line 60
  VirtualizeTimerC$0__updateFromTimer = 1U
};
#line 60
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0____nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__updateFromTimer];
#line 42
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0____nesc_unnamed4356 {

  VirtualizeTimerC$0__NUM_TIMERS = 3, 
  VirtualizeTimerC$0__END_OF_LIST = 255
};








#line 48
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0____nesc_unnamed4357 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__m_timers[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__NUM_TIMERS];




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__fireTimers(uint32_t now);
#line 89
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__updateFromTimer__runTask(void);
#line 128
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__TimerFrom__fired(void);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);









static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__Timer__startPeriodic(uint8_t num, uint32_t dt);









static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__Timer__stop(uint8_t num);
#line 193
static inline   void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__Timer__default__fired(uint8_t num);
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline   void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$1__Counter__overflow(void);
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static   void RadioAlarmP__RadioAlarm__fired(
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
uint8_t arg_0x407414c8);
# 98 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   RadioAlarmP__Alarm__size_type RadioAlarmP__Alarm__getNow(void);
#line 55
static   void RadioAlarmP__Alarm__start(RadioAlarmP__Alarm__size_type arg_0x4066d0b0);






static   void RadioAlarmP__Alarm__stop(void);
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
static   void RadioAlarmP__Tasklet__schedule(void);
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
 uint8_t RadioAlarmP__state;
enum RadioAlarmP____nesc_unnamed4358 {

  RadioAlarmP__STATE_READY = 0, 
  RadioAlarmP__STATE_WAIT = 1, 
  RadioAlarmP__STATE_FIRED = 2
};

 uint8_t RadioAlarmP__alarm;

static inline   void RadioAlarmP__Alarm__fired(void);










static __inline   uint16_t RadioAlarmP__RadioAlarm__getNow(uint8_t id);




static inline   void RadioAlarmP__Tasklet__run(void);








static inline    void RadioAlarmP__RadioAlarm__default__fired(uint8_t id);



static __inline   bool RadioAlarmP__RadioAlarm__isFree(uint8_t id);




static inline   void RadioAlarmP__RadioAlarm__wait(uint8_t id, uint16_t timeout);








static inline   void RadioAlarmP__RadioAlarm__cancel(uint8_t id);
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
static   void TaskletC__Tasklet__run(void);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TaskletC.nc"
uint8_t TaskletC__state;

static void TaskletC__doit(void);
#line 83
static __inline  void TaskletC__Tasklet__suspend(void);




static  void TaskletC__Tasklet__resume(void);
#line 101
static   void TaskletC__Tasklet__schedule(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  error_t ActiveMessageLayerC__SubSend__send(message_t *arg_0x40754e80, uint8_t arg_0x40753030);
#line 114
static  void *ActiveMessageLayerC__SubSend__getPayload(message_t *arg_0x40752c70, uint8_t arg_0x40752df8);
#line 101
static  uint8_t ActiveMessageLayerC__SubSend__maxPayloadLength(void);
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void ActiveMessageLayerC__AMSend__sendDone(
# 28 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
am_id_t arg_0x40759188, 
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0x4033f068, error_t arg_0x4033f1f0);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *ActiveMessageLayerC__Snoop__receive(
# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
am_id_t arg_0x407580b0, 
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x40344308, void *arg_0x403444a8, uint8_t arg_0x40344630);
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageConfig.nc"
static  error_t ActiveMessageLayerC__Config__checkPacket(message_t *arg_0x404c1358);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *ActiveMessageLayerC__Receive__receive(
# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
am_id_t arg_0x40759ab8, 
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x40344308, void *arg_0x403444a8, uint8_t arg_0x40344630);
# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t ActiveMessageLayerC__AMPacket__address(void);
#line 110
static  void ActiveMessageLayerC__AMPacket__setSource(message_t *arg_0x404735d8, am_addr_t arg_0x40473768);
#line 92
static  void ActiveMessageLayerC__AMPacket__setDestination(message_t *arg_0x40469ce8, am_addr_t arg_0x40469e78);
#line 136
static  am_id_t ActiveMessageLayerC__AMPacket__type(message_t *arg_0x40472680);
#line 151
static  void ActiveMessageLayerC__AMPacket__setType(message_t *arg_0x40472c18, am_id_t arg_0x40472da0);
#line 125
static  bool ActiveMessageLayerC__AMPacket__isForMe(message_t *arg_0x40473f20);
#line 176
static  void ActiveMessageLayerC__AMPacket__setGroup(message_t *arg_0x40471c48, am_group_t arg_0x40471dd8);







static  am_group_t ActiveMessageLayerC__AMPacket__localGroup(void);
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
static  error_t ActiveMessageLayerC__AMSend__send(am_id_t id, am_addr_t addr, message_t *msg, uint8_t len);
#line 61
static __inline  void ActiveMessageLayerC__SubSend__sendDone(message_t *msg, error_t error);
#line 75
static __inline  uint8_t ActiveMessageLayerC__AMSend__maxPayloadLength(am_id_t id);




static __inline  void *ActiveMessageLayerC__AMSend__getPayload(am_id_t id, message_t *msg, uint8_t len);






static inline  message_t *ActiveMessageLayerC__SubReceive__receive(message_t *msg, void *payload, uint8_t len);










static inline   message_t *ActiveMessageLayerC__Receive__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);




static inline   message_t *ActiveMessageLayerC__Snoop__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  error_t IEEE154NetworkLayerP__SubSend__send(message_t *arg_0x40754e80, uint8_t arg_0x40753030);
#line 114
static  void *IEEE154NetworkLayerP__SubSend__getPayload(message_t *arg_0x40752c70, uint8_t arg_0x40752df8);
#line 101
static  uint8_t IEEE154NetworkLayerP__SubSend__maxPayloadLength(void);
#line 89
static  void IEEE154NetworkLayerP__Send__sendDone(message_t *arg_0x40752010, error_t arg_0x40752198);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *IEEE154NetworkLayerP__NonTinyosReceive__receive(
# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154NetworkLayerP.nc"
uint8_t arg_0x4076bd28, 
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x40344308, void *arg_0x403444a8, uint8_t arg_0x40344630);
# 172 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
static   void IEEE154NetworkLayerP__IEEE154Packet__set6LowPan(message_t *arg_0x404cecd0, uint8_t arg_0x404cee58);
#line 167
static   uint8_t IEEE154NetworkLayerP__IEEE154Packet__get6LowPan(message_t *arg_0x404ce7c8);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *IEEE154NetworkLayerP__Receive__receive(message_t *arg_0x40344308, void *arg_0x403444a8, uint8_t arg_0x40344630);
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154NetworkLayerP.nc"
static inline  error_t IEEE154NetworkLayerP__Send__send(message_t *msg, uint8_t len);










static inline  uint8_t IEEE154NetworkLayerP__Send__maxPayloadLength(void);




static inline  void *IEEE154NetworkLayerP__Send__getPayload(message_t *msg, uint8_t len);




static inline  void IEEE154NetworkLayerP__SubSend__sendDone(message_t *msg, error_t error);




static inline  message_t *IEEE154NetworkLayerP__SubReceive__receive(message_t *msg, void *payload, uint8_t len);








static inline   message_t *IEEE154NetworkLayerP__NonTinyosReceive__default__receive(uint8_t network, message_t *msg, void *payload, uint8_t len);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  void MessageBufferLayerP__SplitControl__startDone(error_t arg_0x4032c640);
#line 117
static  void MessageBufferLayerP__SplitControl__stopDone(error_t arg_0x4032a200);
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioState.nc"
static   error_t MessageBufferLayerP__RadioState__turnOn(void);
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  void MessageBufferLayerP__Send__sendDone(message_t *arg_0x40752010, error_t arg_0x40752198);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t MessageBufferLayerP__Packet__payloadLength(message_t *arg_0x40462e88);
#line 115
static  void *MessageBufferLayerP__Packet__getPayload(message_t *arg_0x4046c358, uint8_t arg_0x4046c4e0);
#line 95
static  uint8_t MessageBufferLayerP__Packet__maxPayloadLength(void);
#line 83
static  void MessageBufferLayerP__Packet__setPayloadLength(message_t *arg_0x4046d548, uint8_t arg_0x4046d6d0);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t MessageBufferLayerP__stateDoneTask__postTask(void);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *MessageBufferLayerP__Receive__receive(message_t *arg_0x40344308, void *arg_0x403444a8, uint8_t arg_0x40344630);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t MessageBufferLayerP__sendTask__postTask(void);
#line 56
static   error_t MessageBufferLayerP__deliverTask__postTask(void);
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static   error_t MessageBufferLayerP__RadioSend__send(message_t *arg_0x40784338);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
static  void MessageBufferLayerP__Tasklet__suspend(void);






static  void MessageBufferLayerP__Tasklet__resume(void);
# 101 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
enum MessageBufferLayerP____nesc_unnamed4359 {
#line 101
  MessageBufferLayerP__stateDoneTask = 2U
};
#line 101
typedef int MessageBufferLayerP____nesc_sillytask_stateDoneTask[MessageBufferLayerP__stateDoneTask];
#line 139
enum MessageBufferLayerP____nesc_unnamed4360 {
#line 139
  MessageBufferLayerP__sendTask = 3U
};
#line 139
typedef int MessageBufferLayerP____nesc_sillytask_sendTask[MessageBufferLayerP__sendTask];
#line 267
enum MessageBufferLayerP____nesc_unnamed4361 {
#line 267
  MessageBufferLayerP__deliverTask = 4U
};
#line 267
typedef int MessageBufferLayerP____nesc_sillytask_deliverTask[MessageBufferLayerP__deliverTask];
#line 52
 uint8_t MessageBufferLayerP__state;
enum MessageBufferLayerP____nesc_unnamed4362 {

  MessageBufferLayerP__STATE_READY = 0, 
  MessageBufferLayerP__STATE_TX_PENDING = 1, 
  MessageBufferLayerP__STATE_TX_SEND = 2, 
  MessageBufferLayerP__STATE_TX_DONE = 3, 
  MessageBufferLayerP__STATE_TURN_ON = 4, 
  MessageBufferLayerP__STATE_TURN_OFF = 5
};

static inline  error_t MessageBufferLayerP__SplitControl__start(void);
#line 101
static inline  void MessageBufferLayerP__stateDoneTask__runTask(void);
#line 117
static inline   void MessageBufferLayerP__RadioState__done(void);
#line 132
message_t *MessageBufferLayerP__txMsg;
error_t MessageBufferLayerP__txError;
uint8_t MessageBufferLayerP__retries;


enum MessageBufferLayerP____nesc_unnamed4363 {
#line 137
  MessageBufferLayerP__MAX_RETRIES = 5
};
static inline  void MessageBufferLayerP__sendTask__runTask(void);
#line 170
static inline   void MessageBufferLayerP__RadioSend__sendDone(error_t error);







static inline  error_t MessageBufferLayerP__Send__send(message_t *msg, uint8_t len);
#line 195
static inline   void MessageBufferLayerP__RadioSend__ready(void);





static inline   void MessageBufferLayerP__Tasklet__run(void);
#line 224
static __inline  uint8_t MessageBufferLayerP__Send__maxPayloadLength(void);




static __inline  void *MessageBufferLayerP__Send__getPayload(message_t *msg, uint8_t len);






enum MessageBufferLayerP____nesc_unnamed4364 {

  MessageBufferLayerP__RECEIVE_QUEUE_SIZE = 3
};

message_t MessageBufferLayerP__receiveQueueData[MessageBufferLayerP__RECEIVE_QUEUE_SIZE];
message_t *MessageBufferLayerP__receiveQueue[MessageBufferLayerP__RECEIVE_QUEUE_SIZE];

uint8_t MessageBufferLayerP__receiveQueueHead;
uint8_t MessageBufferLayerP__receiveQueueSize;

static inline  error_t MessageBufferLayerP__SoftwareInit__init(void);









static inline   bool MessageBufferLayerP__RadioReceive__header(message_t *msg);









static inline  void MessageBufferLayerP__deliverTask__runTask(void);
#line 298
static inline   message_t *MessageBufferLayerP__RadioReceive__receive(message_t *msg);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  error_t UniqueLayerP__SubSend__send(message_t *arg_0x40754e80, uint8_t arg_0x40753030);
#line 114
static  void *UniqueLayerP__SubSend__getPayload(message_t *arg_0x40752c70, uint8_t arg_0x40752df8);
#line 101
static  uint8_t UniqueLayerP__SubSend__maxPayloadLength(void);
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodFlag.nc"
static   bool UniqueLayerP__NeighborhoodFlag__get(uint8_t arg_0x407de068);




static   void UniqueLayerP__NeighborhoodFlag__set(uint8_t arg_0x407de540);
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  void UniqueLayerP__Send__sendDone(message_t *arg_0x40752010, error_t arg_0x40752198);
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Neighborhood.nc"
static   uint8_t UniqueLayerP__Neighborhood__insertNode(am_addr_t arg_0x407e29a0);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
static   message_t *UniqueLayerP__RadioReceive__receive(message_t *arg_0x40781380);
#line 35
static   bool UniqueLayerP__RadioReceive__header(message_t *arg_0x40782c10);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/UniqueConfig.nc"
static   void UniqueLayerP__UniqueConfig__setSequenceNumber(message_t *arg_0x404b5640, uint8_t arg_0x404b57c8);





static   void UniqueLayerP__UniqueConfig__reportChannelError(void);
#line 31
static   uint8_t UniqueLayerP__UniqueConfig__getSequenceNumber(message_t *arg_0x404b6c20);




static   am_addr_t UniqueLayerP__UniqueConfig__getSender(message_t *arg_0x404b5140);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/UniqueLayerP.nc"
uint8_t UniqueLayerP__sequenceNumber;

static inline  error_t UniqueLayerP__Init__init(void);





static inline  error_t UniqueLayerP__Send__send(message_t *msg, uint8_t len);










static inline  void UniqueLayerP__SubSend__sendDone(message_t *msg, error_t error);




static inline  uint8_t UniqueLayerP__Send__maxPayloadLength(void);




static inline  void *UniqueLayerP__Send__getPayload(message_t *msg, uint8_t len);




static inline   bool UniqueLayerP__SubReceive__header(message_t *msg);





 uint8_t UniqueLayerP__receivedNumbers[5];

static inline   message_t *UniqueLayerP__SubReceive__receive(message_t *msg);
#line 115
static inline   void UniqueLayerP__Neighborhood__evicted(uint8_t index);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Neighborhood.nc"
static   void NeighborhoodP__Neighborhood__evicted(uint8_t arg_0x407e0010);
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodP.nc"
 am_addr_t NeighborhoodP__nodes[5];
 uint8_t NeighborhoodP__ages[5];
 uint8_t NeighborhoodP__flags[5];
 uint8_t NeighborhoodP__time;
 uint8_t NeighborhoodP__last;

static inline  error_t NeighborhoodP__Init__init(void);
#line 83
static  uint8_t  NeighborhoodP__Neighborhood__insertNode(am_addr_t node);
#line 147
static __inline   bool NeighborhoodP__NeighborhoodFlag__get(uint8_t bit, uint8_t index);




static __inline   void NeighborhoodP__NeighborhoodFlag__set(uint8_t bit, uint8_t index);









static inline   void NeighborhoodP__NeighborhoodFlag__clearAll(uint8_t bit);
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static   error_t TrafficMonitorLayerP__SubSend__send(message_t *arg_0x40784338);
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorConfig.nc"
static   uint16_t TrafficMonitorLayerP__TrafficMonitorConfig__getUpdatePeriod(void);




static   uint16_t TrafficMonitorLayerP__TrafficMonitorConfig__getChannelTime(message_t *arg_0x404be288);
#line 79
static   void TrafficMonitorLayerP__TrafficMonitorConfig__timerTick(void);
#line 43
static   am_addr_t TrafficMonitorLayerP__TrafficMonitorConfig__getSender(message_t *arg_0x404be7b0);
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioState.nc"
static   void TrafficMonitorLayerP__RadioState__done(void);
#line 45
static   error_t TrafficMonitorLayerP__SubState__turnOn(void);
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Neighborhood.nc"
static   uint8_t TrafficMonitorLayerP__Neighborhood__insertNode(am_addr_t arg_0x407e29a0);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
static   message_t *TrafficMonitorLayerP__RadioReceive__receive(message_t *arg_0x40781380);
#line 35
static   bool TrafficMonitorLayerP__RadioReceive__header(message_t *arg_0x40782c10);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodFlag.nc"
static   void TrafficMonitorLayerP__NeighborhoodFlag__clearAll(void);
#line 35
static   bool TrafficMonitorLayerP__NeighborhoodFlag__get(uint8_t arg_0x407de068);




static   void TrafficMonitorLayerP__NeighborhoodFlag__set(uint8_t arg_0x407de540);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
static  void TrafficMonitorLayerP__Tasklet__suspend(void);






static  void TrafficMonitorLayerP__Tasklet__resume(void);
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static   void TrafficMonitorLayerP__RadioSend__ready(void);
#line 45
static   void TrafficMonitorLayerP__RadioSend__sendDone(error_t arg_0x407849f8);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t TrafficMonitorLayerP__startStopTimer__postTask(void);
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void TrafficMonitorLayerP__Timer__startPeriodic(uint32_t arg_0x403428e0);
#line 67
static  void TrafficMonitorLayerP__Timer__stop(void);
# 229 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
enum TrafficMonitorLayerP____nesc_unnamed4365 {
#line 229
  TrafficMonitorLayerP__startStopTimer = 5U
};
#line 229
typedef int TrafficMonitorLayerP____nesc_sillytask_startStopTimer[TrafficMonitorLayerP__startStopTimer];
#line 61
 message_t *TrafficMonitorLayerP__txMsg;
 uint8_t TrafficMonitorLayerP__neighborCount;

 uint16_t TrafficMonitorLayerP__txAverage;
 uint16_t TrafficMonitorLayerP__rxAverage;
 uint8_t TrafficMonitorLayerP__neighborAverage;
 uint8_t TrafficMonitorLayerP__errorAverage;

enum TrafficMonitorLayerP____nesc_unnamed4366 {


  TrafficMonitorLayerP__TRAFFIC_MONITOR_UINT8_MAX = 1 << (7 - 3), 


  TrafficMonitorLayerP__TRAFFIC_MONITOR_MASK = (1 << 3) - 1, 


  TrafficMonitorLayerP__TRAFFIC_MONITOR_ROUND_UP = (1 << 3) - 1
};

static inline   void TrafficMonitorLayerP__SubSend__ready(void);




static inline   error_t TrafficMonitorLayerP__RadioSend__send(message_t *msg);





static   void TrafficMonitorLayerP__SubSend__sendDone(error_t error);







static inline   bool TrafficMonitorLayerP__SubReceive__header(message_t *msg);




static inline   message_t *TrafficMonitorLayerP__SubReceive__receive(message_t *msg);
#line 124
static inline   void TrafficMonitorLayerP__TrafficMonitorConfig__channelError(void);







static inline  void TrafficMonitorLayerP__Timer__fired(void);
#line 171
static inline   void TrafficMonitorLayerP__Tasklet__run(void);
#line 195
static inline   void TrafficMonitorLayerP__Neighborhood__evicted(uint8_t index);

enum TrafficMonitorLayerP____nesc_unnamed4367 {

  TrafficMonitorLayerP__RADIO_CMD_NONE = 0, 
  TrafficMonitorLayerP__RADIO_CMD_TURNON = 1, 
  TrafficMonitorLayerP__RADIO_CMD_TURNOFF = 2
};
 uint8_t TrafficMonitorLayerP__radioCmd;
#line 217
static inline   error_t TrafficMonitorLayerP__RadioState__turnOn(void);
#line 229
static inline  void TrafficMonitorLayerP__startStopTimer__runTask(void);







static inline   void TrafficMonitorLayerP__SubState__done(void);
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static   error_t RandomCollisionLayerP__SubSend__send(message_t *arg_0x40784338);
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static   void RandomCollisionLayerP__RadioAlarm__wait(uint16_t arg_0x404d5608);
#line 33
static   bool RandomCollisionLayerP__RadioAlarm__isFree(void);
#line 53
static   uint16_t RandomCollisionLayerP__RadioAlarm__getNow(void);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Random.nc"
static   uint16_t RandomCollisionLayerP__Random__rand16(void);
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RandomCollisionConfig.nc"
static   uint16_t RandomCollisionLayerP__Config__getCongestionBackoff(message_t *arg_0x404b90a8);
#line 29
static   uint16_t RandomCollisionLayerP__Config__getInitialBackoff(message_t *arg_0x404bbb68);










static   uint16_t RandomCollisionLayerP__Config__getMinimumBackoff(void);





static   uint16_t RandomCollisionLayerP__Config__getTransmitBarrier(message_t *arg_0x404b9970);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
static   message_t *RandomCollisionLayerP__RadioReceive__receive(message_t *arg_0x40781380);
#line 35
static   bool RandomCollisionLayerP__RadioReceive__header(message_t *arg_0x40782c10);
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static   void RandomCollisionLayerP__RadioSend__ready(void);
#line 45
static   void RandomCollisionLayerP__RadioSend__sendDone(error_t arg_0x407849f8);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t RandomCollisionLayerP__calcNextRandom__postTask(void);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RandomCollisionLayerP.nc"
enum RandomCollisionLayerP____nesc_unnamed4368 {
#line 67
  RandomCollisionLayerP__calcNextRandom = 6U
};
#line 67
typedef int RandomCollisionLayerP____nesc_sillytask_calcNextRandom[RandomCollisionLayerP__calcNextRandom];
#line 46
 uint8_t RandomCollisionLayerP__state;
enum RandomCollisionLayerP____nesc_unnamed4369 {

  RandomCollisionLayerP__STATE_READY = 0, 
  RandomCollisionLayerP__STATE_TX_PENDING_FIRST = 1, 
  RandomCollisionLayerP__STATE_TX_PENDING_SECOND = 2, 
  RandomCollisionLayerP__STATE_TX_SENDING = 3, 

  RandomCollisionLayerP__STATE_BARRIER = 0x80
};

 message_t *RandomCollisionLayerP__txMsg;
 uint16_t RandomCollisionLayerP__txBarrier;

static inline   void RandomCollisionLayerP__SubSend__ready(void);





uint16_t RandomCollisionLayerP__nextRandom;
static inline  void RandomCollisionLayerP__calcNextRandom__runTask(void);





static uint16_t RandomCollisionLayerP__getBackoff(uint16_t maxBackoff);
#line 87
static inline   error_t RandomCollisionLayerP__RadioSend__send(message_t *msg);
#line 99
static inline   void RandomCollisionLayerP__RadioAlarm__fired(void);
#line 144
static inline   void RandomCollisionLayerP__SubSend__sendDone(error_t error);







static inline   bool RandomCollisionLayerP__SubReceive__header(message_t *msg);




static inline   message_t *RandomCollisionLayerP__SubReceive__receive(message_t *msg);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/system/RandomMlcgC.nc"
uint32_t RandomMlcgC__seed;


static inline  error_t RandomMlcgC__Init__init(void);
#line 58
static   uint32_t RandomMlcgC__Random__rand32(void);
#line 78
static inline   uint16_t RandomMlcgC__Random__rand16(void);
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static   error_t SoftwareAckLayerP__SubSend__send(message_t *arg_0x40784338);
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static   void SoftwareAckLayerP__RadioAlarm__wait(uint16_t arg_0x404d5608);




static   void SoftwareAckLayerP__RadioAlarm__cancel(void);
#line 33
static   bool SoftwareAckLayerP__RadioAlarm__isFree(void);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
static   message_t *SoftwareAckLayerP__RadioReceive__receive(message_t *arg_0x40781380);
#line 35
static   bool SoftwareAckLayerP__RadioReceive__header(message_t *arg_0x40782c10);
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SoftwareAckConfig.nc"
static   void SoftwareAckLayerP__SoftwareAckConfig__reportChannelError(void);
#line 68
static   void SoftwareAckLayerP__SoftwareAckConfig__createAckPacket(message_t *arg_0x404b8548, message_t *arg_0x404b86f8);
#line 38
static   bool SoftwareAckLayerP__SoftwareAckConfig__requiresAckWait(message_t *arg_0x404ad620);
#line 50
static   bool SoftwareAckLayerP__SoftwareAckConfig__isAckPacket(message_t *arg_0x404ac230);






static   bool SoftwareAckLayerP__SoftwareAckConfig__verifyAckPacket(message_t *arg_0x404ac820, message_t *arg_0x404ac9d0);
#line 32
static   uint16_t SoftwareAckLayerP__SoftwareAckConfig__getAckTimeout(void);










static   void SoftwareAckLayerP__SoftwareAckConfig__setAckReceived(message_t *arg_0x404adb70, bool arg_0x404adcf8);
#line 63
static   bool SoftwareAckLayerP__SoftwareAckConfig__requiresAckReply(message_t *arg_0x404b8010);
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static   void SoftwareAckLayerP__RadioSend__ready(void);
#line 45
static   void SoftwareAckLayerP__RadioSend__sendDone(error_t arg_0x407849f8);
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SoftwareAckLayerP.nc"
 uint8_t SoftwareAckLayerP__state;
enum SoftwareAckLayerP____nesc_unnamed4370 {

  SoftwareAckLayerP__STATE_READY = 0, 
  SoftwareAckLayerP__STATE_DATA_SEND = 1, 
  SoftwareAckLayerP__STATE_ACK_WAIT = 2, 
  SoftwareAckLayerP__STATE_ACK_SEND = 3
};

 message_t *SoftwareAckLayerP__txMsg;
 message_t SoftwareAckLayerP__ackMsg;

static inline   void SoftwareAckLayerP__SubSend__ready(void);





static inline   error_t SoftwareAckLayerP__RadioSend__send(message_t *msg);
#line 83
static inline   void SoftwareAckLayerP__SubSend__sendDone(error_t error);
#line 110
static inline   void SoftwareAckLayerP__RadioAlarm__fired(void);









static inline   bool SoftwareAckLayerP__SubReceive__header(message_t *msg);







static inline   message_t *SoftwareAckLayerP__SubReceive__receive(message_t *msg);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioCCA.nc"
static   void RF230LayerP__RadioCCA__done(error_t arg_0x40799b28);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/BusyWait.nc"
static   void RF230LayerP__BusyWait__wait(RF230LayerP__BusyWait__size_type arg_0x408a3bd0);
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/PacketField.nc"
static   void RF230LayerP__PacketRSSI__clear(message_t *arg_0x40497598);





static   void RF230LayerP__PacketRSSI__set(message_t *arg_0x40497a80, RF230LayerP__PacketRSSI__value_type arg_0x40497c10);
# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
static   void RF230LayerP__PacketTimeStamp__clear(message_t *arg_0x4047b5c8);







static   void RF230LayerP__PacketTimeStamp__set(message_t *arg_0x4047baf0, RF230LayerP__PacketTimeStamp__size_type arg_0x4047bc80);
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230.nc"
static   uint8_t RF230LayerP__HplRF230__spiSplitRead(void);





static   uint8_t RF230LayerP__HplRF230__spiSplitReadWrite(uint8_t arg_0x408aa5d0);





static   uint8_t RF230LayerP__HplRF230__spiWrite(uint8_t arg_0x408aaae0);
#line 41
static   void RF230LayerP__HplRF230__spiSplitWrite(uint8_t arg_0x408abc50);
#line 33
static   uint16_t RF230LayerP__HplRF230__crcByte(uint16_t arg_0x408ab598, uint8_t arg_0x408ab720);
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioState.nc"
static   void RF230LayerP__RadioState__done(void);
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void RF230LayerP__RSTN__makeOutput(void);
#line 29
static   void RF230LayerP__RSTN__set(void);
static   void RF230LayerP__RSTN__clr(void);
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/PacketField.nc"
static   RF230LayerP__PacketTransmitPower__value_type RF230LayerP__PacketTransmitPower__get(message_t *arg_0x40497010);
#line 29
static   bool RF230LayerP__PacketTransmitPower__isSet(message_t *arg_0x40498a58);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/LocalTime.nc"
static   uint32_t RF230LayerP__LocalTime__get(void);
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void RF230LayerP__SLP_TR__makeOutput(void);
#line 29
static   void RF230LayerP__SLP_TR__set(void);
static   void RF230LayerP__SLP_TR__clr(void);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
static   message_t *RF230LayerP__RadioReceive__receive(message_t *arg_0x40781380);
#line 35
static   bool RF230LayerP__RadioReceive__header(message_t *arg_0x40782c10);
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static   void RF230LayerP__RadioAlarm__wait(uint16_t arg_0x404d5608);
#line 33
static   bool RF230LayerP__RadioAlarm__isFree(void);
#line 53
static   uint16_t RF230LayerP__RadioAlarm__getNow(void);
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/PacketField.nc"
static   RF230LayerP__PacketTimeSyncOffset__value_type RF230LayerP__PacketTimeSyncOffset__get(message_t *arg_0x40497010);
#line 29
static   bool RF230LayerP__PacketTimeSyncOffset__isSet(message_t *arg_0x40498a58);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t RF230LayerP__SpiResource__release(void);
#line 87
static   error_t RF230LayerP__SpiResource__immediateRequest(void);
#line 78
static   error_t RF230LayerP__SpiResource__request(void);
#line 118
static   bool RF230LayerP__SpiResource__isOwner(void);
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void RF230LayerP__SELN__makeOutput(void);
#line 29
static   void RF230LayerP__SELN__set(void);
static   void RF230LayerP__SELN__clr(void);
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static   void RF230LayerP__RadioSend__ready(void);
#line 45
static   void RF230LayerP__RadioSend__sendDone(error_t arg_0x407849f8);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static   void RF230LayerP__IRQ__disable(void);
#line 42
static   error_t RF230LayerP__IRQ__captureRisingEdge(void);
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/PacketField.nc"
static   void RF230LayerP__PacketLinkQuality__set(message_t *arg_0x40497a80, RF230LayerP__PacketLinkQuality__value_type arg_0x40497c10);
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
static   void RF230LayerP__Tasklet__schedule(void);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230Config.nc"
static   uint8_t RF230LayerP__RF230Config__getHeaderLength(void);










static   uint8_t RF230LayerP__RF230Config__getDefaultChannel(void);
#line 46
static   uint8_t *RF230LayerP__RF230Config__getPayload(message_t *arg_0x404a4f18);
#line 39
static   void RF230LayerP__RF230Config__setLength(message_t *arg_0x404a4888, uint8_t arg_0x404a4a10);
#line 34
static   uint8_t RF230LayerP__RF230Config__getLength(message_t *arg_0x404a4300);
#line 60
static   uint8_t RF230LayerP__RF230Config__getMaxLength(void);
#line 72
static   bool RF230LayerP__RF230Config__requiresRssiCca(message_t *arg_0x404af190);
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
 uint8_t RF230LayerP__state;
enum RF230LayerP____nesc_unnamed4371 {

  RF230LayerP__STATE_P_ON = 0, 
  RF230LayerP__STATE_SLEEP = 1, 
  RF230LayerP__STATE_SLEEP_2_TRX_OFF = 2, 
  RF230LayerP__STATE_TRX_OFF = 3, 
  RF230LayerP__STATE_TRX_OFF_2_RX_ON = 4, 
  RF230LayerP__STATE_RX_ON = 5, 
  RF230LayerP__STATE_BUSY_TX_2_RX_ON = 6, 
  RF230LayerP__STATE_PLL_ON_2_RX_ON = 7
};

 uint8_t RF230LayerP__cmd;
enum RF230LayerP____nesc_unnamed4372 {

  RF230LayerP__CMD_NONE = 0, 
  RF230LayerP__CMD_TURNOFF = 1, 
  RF230LayerP__CMD_STANDBY = 2, 
  RF230LayerP__CMD_TURNON = 3, 
  RF230LayerP__CMD_TRANSMIT = 4, 
  RF230LayerP__CMD_RECEIVE = 5, 
  RF230LayerP__CMD_CCA = 6, 
  RF230LayerP__CMD_CHANNEL = 7, 
  RF230LayerP__CMD_SIGNAL_DONE = 8, 
  RF230LayerP__CMD_DOWNLOAD = 9
};

 bool RF230LayerP__radioIrq;

 uint8_t RF230LayerP__txPower;
 uint8_t RF230LayerP__channel;

 message_t *RF230LayerP__rxMsg;
message_t RF230LayerP__rxMsgBuffer;

uint16_t RF230LayerP__capturedTime;

 uint8_t RF230LayerP__rssiClear;
 uint8_t RF230LayerP__rssiBusy;



static __inline void RF230LayerP__writeRegister(uint8_t reg, uint8_t value);
#line 135
static __inline uint8_t RF230LayerP__readRegister(uint8_t reg);
#line 151
enum RF230LayerP____nesc_unnamed4373 {

  RF230LayerP__SLEEP_WAKEUP_TIME = (uint16_t )(880 * (7372800UL / 8 / 32 * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2)) / 1000000UL), 
  RF230LayerP__CCA_REQUEST_TIME = (uint16_t )(140 * (7372800UL / 8 / 32 * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2)) / 1000000UL), 

  RF230LayerP__TX_SFD_DELAY = (uint16_t )(176 * (7372800UL / 8 / 32 * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2)) / 1000000UL), 
  RF230LayerP__RX_SFD_DELAY = (uint16_t )(8 * (7372800UL / 8 / 32 * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2)) / 1000000UL)
};

static inline   void RF230LayerP__RadioAlarm__fired(void);
#line 186
static inline  error_t RF230LayerP__PlatformInit__init(void);
#line 204
static inline  error_t RF230LayerP__SoftwareInit__init(void);





static inline void RF230LayerP__initRadio(void);
#line 238
static inline  void RF230LayerP__SpiResource__granted(void);
#line 252
static bool RF230LayerP__isSpiAcquired(void);
#line 287
static __inline void RF230LayerP__changeChannel(void);
#line 305
static __inline void RF230LayerP__changeState(void);
#line 372
static inline   error_t RF230LayerP__RadioState__turnOn(void);
#line 389
static   error_t RF230LayerP__RadioSend__send(message_t *msg);
#line 537
static inline    void RF230LayerP__RadioCCA__default__done(error_t error);



static __inline void RF230LayerP__downloadMessage(void);
#line 622
static inline   void RF230LayerP__IRQ__captured(uint16_t time);
#line 635
static inline void RF230LayerP__serviceRadio(void);
#line 787
static inline   void RF230LayerP__Tasklet__run(void);
# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void HplRF230P__PortCLKM__makeInput(void);
#line 30
static   void HplRF230P__PortCLKM__clr(void);
# 79 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static   void HplRF230P__Capture__setEdge(bool arg_0x405cec20);
#line 38
static   HplRF230P__Capture__size_type HplRF230P__Capture__get(void);
#line 55
static   void HplRF230P__Capture__reset(void);


static   void HplRF230P__Capture__start(void);


static   void HplRF230P__Capture__stop(void);
# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void HplRF230P__PortIRQ__makeInput(void);
#line 30
static   void HplRF230P__PortIRQ__clr(void);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static   void HplRF230P__IRQ__captured(uint16_t arg_0x408a63d8);
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static inline  error_t HplRF230P__PlatformInit__init(void);










static inline   void HplRF230P__Capture__captured(uint16_t time);









static inline   error_t HplRF230P__IRQ__captureRisingEdge(void);
#line 83
static inline   void HplRF230P__IRQ__disable(void);





static __inline   uint16_t HplRF230P__HplRF230__crcByte(uint16_t crc, uint8_t data);




static __inline   void HplRF230P__HplRF230__spiSplitWrite(uint8_t data);







static __inline   uint8_t HplRF230P__HplRF230__spiSplitRead(void);






static __inline   uint8_t HplRF230P__HplRF230__spiSplitReadWrite(uint8_t data);
#line 121
static __inline   uint8_t HplRF230P__HplRF230__spiWrite(uint8_t data);
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static   void Atm128SpiP__SpiPacket__sendDone(uint8_t *arg_0x40932ac8, uint8_t *arg_0x40932c70, uint16_t arg_0x40932e00, 
error_t arg_0x40931010);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t Atm128SpiP__ResourceArbiter__release(
# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x4092b790);
# 87 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t Atm128SpiP__ResourceArbiter__immediateRequest(
# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x4092b790);
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t Atm128SpiP__ResourceArbiter__request(
# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x4092b790);
# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   bool Atm128SpiP__ResourceArbiter__isOwner(
# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x4092b790);
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static   void Atm128SpiP__Spi__sleep(void);
#line 66
static   void Atm128SpiP__Spi__initMaster(void);
#line 96
static   void Atm128SpiP__Spi__enableInterrupt(bool arg_0x40948898);
#line 80
static   uint8_t Atm128SpiP__Spi__read(void);
#line 125
static   void Atm128SpiP__Spi__setMasterDoubleSpeed(bool arg_0x409429f8);
#line 114
static   void Atm128SpiP__Spi__setClock(uint8_t arg_0x40944888);
#line 108
static   void Atm128SpiP__Spi__setClockPolarity(bool arg_0x409458c0);
#line 86
static   void Atm128SpiP__Spi__write(uint8_t arg_0x40949e00);
#line 99
static   void Atm128SpiP__Spi__enableSpi(bool arg_0x40947088);
#line 111
static   void Atm128SpiP__Spi__setClockPhase(bool arg_0x409440c0);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static  void Atm128SpiP__Resource__granted(
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x4092d300);
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static   void Atm128SpiP__McuPowerState__update(void);
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
static   bool Atm128SpiP__ArbiterInfo__inUse(void);
# 207 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
enum Atm128SpiP____nesc_unnamed4374 {
#line 207
  Atm128SpiP__zeroTask = 7U
};
#line 207
typedef int Atm128SpiP____nesc_sillytask_zeroTask[Atm128SpiP__zeroTask];
#line 90
uint16_t Atm128SpiP__len;
uint8_t *Atm128SpiP__txBuffer;
uint8_t *Atm128SpiP__rxBuffer;
uint16_t Atm128SpiP__pos;

enum Atm128SpiP____nesc_unnamed4375 {
  Atm128SpiP__SPI_IDLE, 
  Atm128SpiP__SPI_BUSY, 
  Atm128SpiP__SPI_ATOMIC_SIZE = 10
};





static void Atm128SpiP__startSpi(void);
#line 119
static inline void Atm128SpiP__stopSpi(void);







static   uint8_t Atm128SpiP__SpiByte__write(uint8_t tx);
#line 162
static inline error_t Atm128SpiP__sendNextPart(void);
#line 207
static inline  void Atm128SpiP__zeroTask__runTask(void);
#line 262
static inline    
#line 261
void Atm128SpiP__SpiPacket__default__sendDone(
uint8_t *_txbuffer, uint8_t *_rxbuffer, 
uint16_t _length, error_t _success);

static inline   void Atm128SpiP__Spi__dataReady(uint8_t data);
#line 305
static inline   error_t Atm128SpiP__Resource__immediateRequest(uint8_t id);







static   error_t Atm128SpiP__Resource__request(uint8_t id);








static   error_t Atm128SpiP__Resource__release(uint8_t id);









static inline   uint8_t Atm128SpiP__Resource__isOwner(uint8_t id);



static inline  void Atm128SpiP__ResourceArbiter__granted(uint8_t id);



static inline   void Atm128SpiP__Resource__default__granted(uint8_t id);
# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void HplAtm128SpiP__MISO__makeInput(void);

static   void HplAtm128SpiP__SCK__makeOutput(void);
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static   void HplAtm128SpiP__Mcu__update(void);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static   void HplAtm128SpiP__SPI__dataReady(uint8_t arg_0x40948350);
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void HplAtm128SpiP__MOSI__makeOutput(void);
# 79 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline   void HplAtm128SpiP__SPI__initMaster(void);
#line 94
static inline   void HplAtm128SpiP__SPI__sleep(void);



static inline   uint8_t HplAtm128SpiP__SPI__read(void);
static inline   void HplAtm128SpiP__SPI__write(uint8_t d);


void __vector_24(void) __attribute((signal))   ;
#line 115
static   void HplAtm128SpiP__SPI__enableInterrupt(bool enabled);
#line 130
static   void HplAtm128SpiP__SPI__enableSpi(bool enabled);
#line 156
static inline   void HplAtm128SpiP__SPI__setMasterBit(bool isMaster);
#line 169
static inline   void HplAtm128SpiP__SPI__setClockPolarity(bool highWhenIdle);
#line 183
static inline   void HplAtm128SpiP__SPI__setClockPhase(bool sampleOnTrailing);
#line 200
static inline   void HplAtm128SpiP__SPI__setClock(uint8_t v);
#line 213
static inline   void HplAtm128SpiP__SPI__setMasterDoubleSpeed(bool on);
# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
enum /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0____nesc_unnamed4376 {
#line 39
  FcfsResourceQueueC$0__NO_ENTRY = 0xFF
};
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__resQ[1U];
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__qHead = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__NO_ENTRY;
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__qTail = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__NO_ENTRY;

static inline  error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__Init__init(void);




static inline   bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__FcfsQueue__isEmpty(void);



static inline   bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__FcfsQueue__isEnqueued(resource_client_id_t id);



static inline   resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__FcfsQueue__dequeue(void);
#line 72
static inline   error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__FcfsQueue__enqueue(resource_client_id_t id);
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__ResourceRequested__requested(
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409b8860);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__ResourceRequested__immediateRequested(
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409b8860);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__ResourceConfigure__unconfigure(
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409b7428);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__ResourceConfigure__configure(
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409b7428);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__Queue__enqueue(resource_client_id_t arg_0x409a1360);
#line 43
static   bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__Queue__isEmpty(void);
#line 60
static   resource_client_id_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__Queue__dequeue(void);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static  void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__Resource__granted(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409b9ee8);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__grantedTask__postTask(void);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0____nesc_unnamed4377 {
#line 69
  SimpleArbiterP$0__grantedTask = 8U
};
#line 69
typedef int /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0____nesc_sillytask_grantedTask[/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__grantedTask];
#line 62
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0____nesc_unnamed4378 {
#line 62
  SimpleArbiterP$0__RES_IDLE = 0, SimpleArbiterP$0__RES_GRANTING = 1, SimpleArbiterP$0__RES_BUSY = 2
};
#line 63
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0____nesc_unnamed4379 {
#line 63
  SimpleArbiterP$0__NO_RES = 0xFF
};
uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__RES_IDLE;
 uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__NO_RES;
 uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__reqResId;



static inline   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__Resource__request(uint8_t id);
#line 84
static inline   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__Resource__immediateRequest(uint8_t id);
#line 97
static inline   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__Resource__release(uint8_t id);
#line 123
static   bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__ArbiterInfo__inUse(void);
#line 147
static inline   uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__Resource__isOwner(uint8_t id);






static inline  void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__grantedTask__runTask(void);
#line 166
static inline    void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__ResourceRequested__default__requested(uint8_t id);

static inline    void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__ResourceRequested__default__immediateRequested(uint8_t id);

static inline    void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__ResourceConfigure__default__configure(uint8_t id);

static inline    void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__ResourceConfigure__default__unconfigure(uint8_t id);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__Alarm__fired(void);
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__HplAtm128Compare__reset(void);
#line 45
static   void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__HplAtm128Compare__set(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__HplAtm128Compare__size_type arg_0x405db088);










static   void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__HplAtm128Compare__start(void);


static   void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__HplAtm128Compare__stop(void);
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__HplAtm128Timer__timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__HplAtm128Timer__get(void);
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline   /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__Alarm__getNow(void);
#line 65
static inline   void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__Alarm__stop(void);



static inline   void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__Alarm__start(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__timer_size dt);




static   void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__Alarm__startAt(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__timer_size t0, /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__timer_size dt);
#line 110
static inline   void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__HplAtm128Compare__fired(void);






static inline   void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__HplAtm128Timer__overflow(void);
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/micaz/BusyWaitMicroC.nc"
static __inline   void BusyWaitMicroC__BusyWait__wait(uint16_t dt);
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void LedsP__Led0__toggle(void);



static   void LedsP__Led0__makeOutput(void);
#line 29
static   void LedsP__Led0__set(void);

static   void LedsP__Led1__toggle(void);



static   void LedsP__Led1__makeOutput(void);
#line 29
static   void LedsP__Led1__set(void);

static   void LedsP__Led2__toggle(void);



static   void LedsP__Led2__makeOutput(void);
#line 29
static   void LedsP__Led2__set(void);
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/LedsP.nc"
static inline  error_t LedsP__Init__init(void);
#line 73
static inline   void LedsP__Leds__led0Toggle(void);
#line 88
static inline   void LedsP__Leds__led1Toggle(void);
#line 103
static inline   void LedsP__Leds__led2Toggle(void);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  void MDA300DigitalLogicP__SplitControl__startDone(error_t arg_0x4032c640);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t MDA300DigitalLogicP__set_io_toggle__postTask(void);
# 15 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/Dio.nc"
static  void MDA300DigitalLogicP__Dio__readDone(
# 12 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300DigitalLogicP.nc"
uint8_t arg_0x40a28e10, 
# 15 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/Dio.nc"
uint16_t arg_0x40351ce0);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t MDA300DigitalLogicP__read_io__postTask(void);
#line 56
static   error_t MDA300DigitalLogicP__init_io__postTask(void);
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t MDA300DigitalLogicP__I2CResource__request(void);
# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void MDA300DigitalLogicP__IntPin__makeInput(void);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t MDA300DigitalLogicP__set_io_low__postTask(void);
# 65 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/I2CPacket.nc"
static   error_t MDA300DigitalLogicP__I2CPacket__read(i2c_flags_t arg_0x40a49af0, uint16_t arg_0x40a49c80, uint8_t arg_0x40a49e08, uint8_t *arg_0x40a48010);
#line 81
static   error_t MDA300DigitalLogicP__I2CPacket__write(i2c_flags_t arg_0x40a487c0, uint16_t arg_0x40a48950, uint8_t arg_0x40a48ad8, uint8_t *arg_0x40a48c80);
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void MDA300DigitalLogicP__Interrupt__disable(void);
#line 35
static   void MDA300DigitalLogicP__Interrupt__enable(void);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t MDA300DigitalLogicP__set_io_high__postTask(void);
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300DigitalLogicP.nc"
enum MDA300DigitalLogicP____nesc_unnamed4380 {
#line 43
  MDA300DigitalLogicP__init_io = 9U
};
#line 43
typedef int MDA300DigitalLogicP____nesc_sillytask_init_io[MDA300DigitalLogicP__init_io];
#line 86
enum MDA300DigitalLogicP____nesc_unnamed4381 {
#line 86
  MDA300DigitalLogicP__set_io_high = 10U
};
#line 86
typedef int MDA300DigitalLogicP____nesc_sillytask_set_io_high[MDA300DigitalLogicP__set_io_high];
#line 110
enum MDA300DigitalLogicP____nesc_unnamed4382 {
#line 110
  MDA300DigitalLogicP__set_io_low = 11U
};
#line 110
typedef int MDA300DigitalLogicP____nesc_sillytask_set_io_low[MDA300DigitalLogicP__set_io_low];
#line 134
enum MDA300DigitalLogicP____nesc_unnamed4383 {
#line 134
  MDA300DigitalLogicP__set_io_toggle = 12U
};
#line 134
typedef int MDA300DigitalLogicP____nesc_sillytask_set_io_toggle[MDA300DigitalLogicP__set_io_toggle];
#line 206
enum MDA300DigitalLogicP____nesc_unnamed4384 {
#line 206
  MDA300DigitalLogicP__read_io = 13U
};
#line 206
typedef int MDA300DigitalLogicP____nesc_sillytask_read_io[MDA300DigitalLogicP__read_io];
#line 26
uint8_t MDA300DigitalLogicP__state;
uint8_t MDA300DigitalLogicP__io_value;
uint8_t MDA300DigitalLogicP__mode[8];
uint16_t MDA300DigitalLogicP__count[8];
uint8_t MDA300DigitalLogicP__bitmap_high;
#line 30
uint8_t MDA300DigitalLogicP__bitmap_low;
#line 30
uint8_t MDA300DigitalLogicP__bitmap_toggle;
uint8_t MDA300DigitalLogicP__i2c_data;
#line 31
uint8_t MDA300DigitalLogicP__buff;









enum MDA300DigitalLogicP____nesc_unnamed4385 {
#line 41
  MDA300DigitalLogicP__GET_DATA, MDA300DigitalLogicP__SET_OUTPUT_HIGH, MDA300DigitalLogicP__SET_OUTPUT_LOW, MDA300DigitalLogicP__SET_OUTPUT_TOGGLE, MDA300DigitalLogicP__GET_THEN_SET_INPUT, MDA300DigitalLogicP__IDLE, MDA300DigitalLogicP__INIT
};
static inline  void MDA300DigitalLogicP__init_io__runTask(void);








static inline  void MDA300DigitalLogicP__I2CResource__granted(void);




static inline  error_t MDA300DigitalLogicP__SplitControl__start(void);
#line 78
static inline  error_t MDA300DigitalLogicP__Dio__setParam(uint8_t channel, uint8_t modeToSet);







static inline  void MDA300DigitalLogicP__set_io_high__runTask(void);
#line 110
static inline  void MDA300DigitalLogicP__set_io_low__runTask(void);
#line 134
static inline  void MDA300DigitalLogicP__set_io_toggle__runTask(void);
#line 192
static inline  error_t MDA300DigitalLogicP__Dio__read(uint8_t channel);








static inline   void MDA300DigitalLogicP__Dio__default__readDone(uint8_t channel, uint16_t data);




static inline  void MDA300DigitalLogicP__read_io__runTask(void);
#line 220
static   void MDA300DigitalLogicP__I2CPacket__writeDone(error_t error, uint16_t addr, uint8_t length, uint8_t *data);
#line 233
static   void MDA300DigitalLogicP__I2CPacket__readDone(error_t error, uint16_t addr, uint8_t length, uint8_t *data);
#line 283
static inline   void MDA300DigitalLogicP__Interrupt__fired(void);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static   void HplAtm128InterruptSigP__IntSig6__fired(void);
#line 41
static   void HplAtm128InterruptSigP__IntSig1__fired(void);
#line 41
static   void HplAtm128InterruptSigP__IntSig4__fired(void);
#line 41
static   void HplAtm128InterruptSigP__IntSig7__fired(void);
#line 41
static   void HplAtm128InterruptSigP__IntSig2__fired(void);
#line 41
static   void HplAtm128InterruptSigP__IntSig5__fired(void);
#line 41
static   void HplAtm128InterruptSigP__IntSig0__fired(void);
#line 41
static   void HplAtm128InterruptSigP__IntSig3__fired(void);
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
static   void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0__Irq__fired(void);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0__IrqSignal__fired(void);

static inline    void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0__Irq__default__fired(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1__Irq__fired(void);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1__IrqSignal__fired(void);

static inline    void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1__Irq__default__fired(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2__Irq__fired(void);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2__IrqSignal__fired(void);

static inline    void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2__Irq__default__fired(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3__Irq__fired(void);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3__IrqSignal__fired(void);

static inline    void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3__Irq__default__fired(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4__Irq__fired(void);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline   void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4__Irq__enable(void);
static __inline   void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4__Irq__disable(void);
#line 61
static inline   void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4__IrqSignal__fired(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5__Irq__fired(void);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5__IrqSignal__fired(void);

static inline    void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5__Irq__default__fired(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6__Irq__fired(void);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6__IrqSignal__fired(void);

static inline    void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6__Irq__default__fired(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7__Irq__fired(void);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7__IrqSignal__fired(void);

static inline    void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7__Irq__default__fired(void);
# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
enum /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$1____nesc_unnamed4386 {
#line 39
  FcfsResourceQueueC$1__NO_ENTRY = 0xFF
};
uint8_t /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$1__resQ[1U];
uint8_t /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$1__qHead = /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$1__NO_ENTRY;
uint8_t /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$1__qTail = /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$1__NO_ENTRY;

static inline  error_t /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$1__Init__init(void);








static inline   bool /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$1__FcfsQueue__isEnqueued(resource_client_id_t id);
#line 72
static inline   error_t /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$1__FcfsQueue__enqueue(resource_client_id_t id);
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static   void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__ResourceRequested__requested(
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40ae7688);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__ResourceConfigure__configure(
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40ae6838);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static   error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__Queue__enqueue(resource_client_id_t arg_0x409a1360);
# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
static   void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__ResourceDefaultOwner__requested(void);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static  void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__Resource__granted(
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40ae8cd8);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__grantedTask__postTask(void);
# 75 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
enum /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0____nesc_unnamed4387 {
#line 75
  ArbiterP$0__grantedTask = 14U
};
#line 75
typedef int /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0____nesc_sillytask_grantedTask[/*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__grantedTask];
#line 67
enum /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0____nesc_unnamed4388 {
#line 67
  ArbiterP$0__RES_CONTROLLED, ArbiterP$0__RES_GRANTING, ArbiterP$0__RES_IMM_GRANTING, ArbiterP$0__RES_BUSY
};
#line 68
enum /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0____nesc_unnamed4389 {
#line 68
  ArbiterP$0__default_owner_id = 1U
};
#line 69
enum /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0____nesc_unnamed4390 {
#line 69
  ArbiterP$0__NO_RES = 0xFF
};
uint8_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__state = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__RES_CONTROLLED;
 uint8_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__resId = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__default_owner_id;
 uint8_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__reqResId;



static inline   error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__Resource__request(uint8_t id);
#line 129
static inline   error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__ResourceDefaultOwner__release(void);
#line 186
static inline  void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__grantedTask__runTask(void);
#line 200
static inline    void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__ResourceRequested__default__requested(uint8_t id);
#line 212
static inline    void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__ResourceConfigure__default__configure(uint8_t id);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
static   error_t /*Atm128I2CMasterP.Power*/AsyncPowerManagerP$0__ResourceDefaultOwner__release(void);
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AsyncStdControl.nc"
static   error_t /*Atm128I2CMasterP.Power*/AsyncPowerManagerP$0__AsyncStdControl__start(void);
# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/power/AsyncPowerManagerP.nc"
static inline   void /*Atm128I2CMasterP.Power*/AsyncPowerManagerP$0__ResourceDefaultOwner__requested(void);
# 65 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/I2CPacket.nc"
static   error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__SubPacket__read(i2c_flags_t arg_0x40a49af0, uint16_t arg_0x40a49c80, uint8_t arg_0x40a49e08, uint8_t *arg_0x40a48010);
#line 81
static   error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__SubPacket__write(i2c_flags_t arg_0x40a487c0, uint16_t arg_0x40a48950, uint8_t arg_0x40a48ad8, uint8_t *arg_0x40a48c80);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static  void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__Resource__granted(
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x40b06ee8);
# 101 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/I2CPacket.nc"
static   void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__I2CPacket__writeDone(
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x40b2b918, 
# 101 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/I2CPacket.nc"
error_t arg_0x40a46e78, uint16_t arg_0x40a45030, uint8_t arg_0x40a451b8, uint8_t *arg_0x40a45360);
#line 91
static   void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__I2CPacket__readDone(
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x40b2b918, 
# 91 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/I2CPacket.nc"
error_t arg_0x40a463b0, uint16_t arg_0x40a46540, uint8_t arg_0x40a466c8, uint8_t *arg_0x40a46870);
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__SubResource__request(
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x40b28488);





enum /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0____nesc_unnamed4391 {
  Atm128I2CMasterImplP$0__NO_CLIENT = 0xff
};

uint8_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__currentClient = /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__NO_CLIENT;

static inline   error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__Resource__request(uint8_t id);
#line 67
static inline  void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__SubResource__granted(uint8_t id);
#line 81
static   error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__I2CPacket__write(uint8_t id, i2c_flags_t flags, uint16_t addr, uint8_t len, uint8_t *data);








static   error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__I2CPacket__read(uint8_t id, i2c_flags_t flags, uint16_t addr, uint8_t len, uint8_t *data);








static inline   void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__SubPacket__readDone(error_t error, uint16_t addr, uint8_t len, uint8_t *data);


static inline   void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__SubPacket__writeDone(error_t error, uint16_t addr, uint8_t len, uint8_t *data);



static inline   void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__Resource__default__granted(uint8_t id);
static inline    void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__I2CPacket__default__writeDone(uint8_t id, error_t error, uint16_t addr, uint8_t len, uint8_t *data);
static inline    void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__I2CPacket__default__readDone(uint8_t id, error_t error, uint16_t addr, uint8_t len, uint8_t *data);
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
static   void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__readCurrent(void);
static   void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__sendCommand(void);




static   void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__setStart(bool arg_0x40b518a0);
#line 45
static   uint8_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__status(void);
#line 60
static   void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__enableInterrupt(bool arg_0x40b4e030);
#line 82
static   uint8_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__read(void);
#line 42
static   void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__init(bool arg_0x40b52470);
#line 57
static   void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__enableAck(bool arg_0x40b50848);
#line 76
static   void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__enable(bool arg_0x40b4d3a0);




static   void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__write(uint8_t arg_0x40b4de88);
#line 55
static   void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__setStop(bool arg_0x40b50088);
#line 74
static   void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__setInterruptPending(bool arg_0x40b4eed8);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Leds.nc"
static   void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__WriteDebugLeds__led1On(void);
#line 78
static   void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__WriteDebugLeds__led2On(void);
#line 45
static   void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__WriteDebugLeds__led0On(void);
# 101 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/I2CPacket.nc"
static   void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2CPacket__writeDone(error_t arg_0x40a46e78, uint16_t arg_0x40a45030, uint8_t arg_0x40a451b8, uint8_t *arg_0x40a45360);
#line 91
static   void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2CPacket__readDone(error_t arg_0x40a463b0, uint16_t arg_0x40a46540, uint8_t arg_0x40a466c8, uint8_t *arg_0x40a46870);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterPacketP.nc"
enum /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0____nesc_unnamed4392 {
  Atm128I2CMasterPacketP$0__I2C_OFF = 0, 
  Atm128I2CMasterPacketP$0__I2C_IDLE = 1, 
  Atm128I2CMasterPacketP$0__I2C_BUSY = 2, 
  Atm128I2CMasterPacketP$0__I2C_ADDR = 3, 
  Atm128I2CMasterPacketP$0__I2C_DATA = 4, 
  Atm128I2CMasterPacketP$0__I2C_STARTING = 5, 
  Atm128I2CMasterPacketP$0__I2C_STOPPING = 6
};

uint8_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C_OFF;
i2c_flags_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__packetFlags;
uint8_t */*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__packetPtr;
uint8_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__packetLen;
uint8_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__index;
uint16_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__packetAddr;
bool /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__reading = FALSE;

static inline void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__i2c_abort(error_t err);
#line 93
static inline   error_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__AsyncStdControl__start(void);
#line 128
static inline   error_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2CPacket__read(i2c_flags_t flags, uint16_t addr, uint8_t len, uint8_t *data);
#line 179
static inline   error_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2CPacket__write(i2c_flags_t flags, uint16_t addr, uint8_t len, uint8_t *data);
#line 254
static inline   void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__commandComplete(void);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
static   void HplAtm128I2CBusP__I2C__commandComplete(void);
# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void HplAtm128I2CBusP__I2CClk__makeInput(void);
#line 29
static   void HplAtm128I2CBusP__I2CClk__set(void);



static   void HplAtm128I2CBusP__I2CData__makeInput(void);
#line 29
static   void HplAtm128I2CBusP__I2CData__set(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBusP.nc"
uint8_t HplAtm128I2CBusP__current;

static inline   void HplAtm128I2CBusP__I2C__init(bool hasExternalPulldown);
#line 75
static inline   uint8_t HplAtm128I2CBusP__I2C__status(void);



static inline   void HplAtm128I2CBusP__I2C__sendCommand(void);



static   void HplAtm128I2CBusP__I2C__readCurrent(void);




static inline   void HplAtm128I2CBusP__I2C__setStart(bool on);
#line 100
static inline   void HplAtm128I2CBusP__I2C__setStop(bool on);
#line 113
static inline   void HplAtm128I2CBusP__I2C__write(uint8_t data);



static inline   uint8_t HplAtm128I2CBusP__I2C__read(void);



static inline   void HplAtm128I2CBusP__I2C__enableAck(bool enable);
#line 134
static inline   void HplAtm128I2CBusP__I2C__enableInterrupt(bool enable);
#line 155
static inline   void HplAtm128I2CBusP__I2C__setInterruptPending(bool on);








static inline   void HplAtm128I2CBusP__I2C__enable(bool enable);
#line 182
void __vector_39(void) __attribute((signal))   ;
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/system/NoLedsC.nc"
static inline   void NoLedsC__Leds__led0On(void);



static inline   void NoLedsC__Leds__led1On(void);



static inline   void NoLedsC__Leds__led2On(void);
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0__AMSend__sendDone(message_t *arg_0x4033f068, error_t arg_0x4033f1f0);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  error_t /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0__Send__send(message_t *arg_0x40754e80, uint8_t arg_0x40753030);
#line 114
static  void */*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0__Send__getPayload(message_t *arg_0x40752c70, uint8_t arg_0x40752df8);
#line 101
static  uint8_t /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0__Send__maxPayloadLength(void);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  void /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0__AMPacket__setDestination(message_t *arg_0x40469ce8, am_addr_t arg_0x40469e78);
#line 151
static  void /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0__AMPacket__setType(message_t *arg_0x40472c18, am_id_t arg_0x40472da0);
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline  error_t /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline  void /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0__Send__sendDone(message_t *m, error_t err);



static inline  uint8_t /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0__AMSend__maxPayloadLength(void);



static inline  void */*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0__AMSend__getPayload(message_t *m, uint8_t len);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__AMSend__send(
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40bcb6a8, 
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t arg_0x4033ace8, message_t *arg_0x4033ae98, uint8_t arg_0x40340030);
#line 124
static  void */*AMQueueP.AMQueueImplP*/AMQueueImplP$0__AMSend__getPayload(
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40bcb6a8, 
# 124 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0x4033fcb0, uint8_t arg_0x4033fe38);
#line 112
static  uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__AMSend__maxPayloadLength(
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40bcb6a8);
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__Send__sendDone(
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40bcccf0, 
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
message_t *arg_0x40752010, error_t arg_0x40752198);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__Packet__payloadLength(message_t *arg_0x40462e88);
#line 83
static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__Packet__setPayloadLength(message_t *arg_0x4046d548, uint8_t arg_0x4046d6d0);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__errorTask__postTask(void);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__AMPacket__destination(message_t *arg_0x40469120);
#line 136
static  am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__AMPacket__type(message_t *arg_0x40472680);
# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP$0____nesc_unnamed4393 {
#line 118
  AMQueueImplP$0__CancelTask = 15U
};
#line 118
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP$0____nesc_sillytask_CancelTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0__CancelTask];
#line 161
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP$0____nesc_unnamed4394 {
#line 161
  AMQueueImplP$0__errorTask = 16U
};
#line 161
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP$0____nesc_sillytask_errorTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0__errorTask];
#line 49
#line 47
typedef struct /*AMQueueP.AMQueueImplP*/AMQueueImplP$0____nesc_unnamed4395 {
  message_t *msg;
} /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__queue_entry_t;

uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__current = 1;
/*AMQueueP.AMQueueImplP*/AMQueueImplP$0__queue_entry_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__queue[1];
uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__cancelMask[1 / 8 + 1];

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__tryToSend(void);

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__nextPacket(void);
#line 82
static inline  error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len);
#line 118
static inline  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__CancelTask__runTask(void);
#line 155
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__sendDone(uint8_t last, message_t *msg, error_t err);





static inline  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__errorTask__runTask(void);




static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__tryToSend(void);
#line 181
static inline  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__AMSend__sendDone(am_id_t id, message_t *msg, error_t err);
#line 199
static inline  uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__Send__maxPayloadLength(uint8_t id);



static inline  void */*AMQueueP.AMQueueImplP*/AMQueueImplP$0__Send__getPayload(uint8_t id, message_t *m, uint8_t len);



static inline   void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__Send__default__sendDone(uint8_t id, message_t *msg, error_t err);
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
static inline  void SchedulerBasicP__Scheduler__init(void)
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP__m_next, SchedulerBasicP__NO_TASK, sizeof SchedulerBasicP__m_next);
    SchedulerBasicP__m_head = SchedulerBasicP__NO_TASK;
    SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
  }
}

# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static  void RealMainP__Scheduler__init(void){
#line 46
  SchedulerBasicP__Scheduler__init();
#line 46
}
#line 46
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/mica/PlatformP.nc"
static inline void PlatformP__power_init(void)
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    * (volatile uint8_t *)(0X35 + 0x20) = 1 << 0;
  }
}

# 106 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline   void HplAtm1281Timer1P__TimerCtrl__setControlB(uint8_t x)
#line 106
{
  * (volatile uint8_t *)0x81 = x;
}

#line 93
static inline   uint8_t HplAtm1281Timer1P__TimerCtrl__getControlB(void)
#line 93
{
  return * (volatile uint8_t *)0x81;
}

#line 82
static inline   void HplAtm1281Timer1P__Timer__setScale(uint8_t s)
#line 82
{
  Atm128_TCCRB_t x = (Atm128_TCCRB_t )HplAtm1281Timer1P__TimerCtrl__getControlB();

#line 84
  x.bits.cs = s;
  HplAtm1281Timer1P__TimerCtrl__setControlB(x.flat);
}

# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   void /*InitOneP.InitOne*/Atm128TimerInitC$0__Timer__setScale(uint8_t arg_0x405c9c78){
#line 95
  HplAtm1281Timer1P__Timer__setScale(arg_0x405c9c78);
#line 95
}
#line 95
# 144 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline   void HplAtm1281Timer1P__Timer__start(void)
#line 144
{
#line 144
  * (volatile uint8_t *)0x6F |= 1 << 0;
}

# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   void /*InitOneP.InitOne*/Atm128TimerInitC$0__Timer__start(void){
#line 69
  HplAtm1281Timer1P__Timer__start();
#line 69
}
#line 69
# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline   void HplAtm1281Timer1P__Timer__set(uint16_t t)
#line 73
{
#line 73
  * (volatile uint16_t *)0x84 = t;
}

# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   void /*InitOneP.InitOne*/Atm128TimerInitC$0__Timer__set(/*InitOneP.InitOne*/Atm128TimerInitC$0__Timer__timer_size arg_0x405b7010){
#line 58
  HplAtm1281Timer1P__Timer__set(arg_0x405b7010);
#line 58
}
#line 58
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline  error_t /*InitOneP.InitOne*/Atm128TimerInitC$0__Init__init(void)
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    /*InitOneP.InitOne*/Atm128TimerInitC$0__Timer__set(0);
    /*InitOneP.InitOne*/Atm128TimerInitC$0__Timer__start();
    /*InitOneP.InitOne*/Atm128TimerInitC$0__Timer__setScale(2);
  }
  return SUCCESS;
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
inline static  error_t MotePlatformP__SubInit__init(void){
#line 51
  unsigned char result;
#line 51

#line 51
  result = /*InitOneP.InitOne*/Atm128TimerInitC$0__Init__init();
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4__IO__clr(void)
#line 47
{
#line 47
  * (volatile uint8_t *)34U &= ~(1 << 4);
}

# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void MotePlatformP__SerialIdPin__clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4__IO__clr();
#line 30
}
#line 30
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4__IO__makeInput(void)
#line 50
{
#line 50
  * (volatile uint8_t *)33U &= ~(1 << 4);
}

# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void MotePlatformP__SerialIdPin__makeInput(void){
#line 33
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4__IO__makeInput();
#line 33
}
#line 33
# 26 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/micaz/MotePlatformP.nc"
static inline  error_t MotePlatformP__PlatformInit__init(void)
#line 26
{

  * (volatile uint8_t *)(0x08 + 0x20) = 0;
  * (volatile uint8_t *)(0x07 + 0x20) = 0xff;


  MotePlatformP__SerialIdPin__makeInput();
  MotePlatformP__SerialIdPin__clr();

  return MotePlatformP__SubInit__init();
}

# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0__IO__set(void)
#line 46
{
#line 46
  * (volatile uint8_t *)34U |= 1 << 0;
}

# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP__Led2__set(void){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0__IO__set();
#line 29
}
#line 29
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1__IO__set(void)
#line 46
{
#line 46
  * (volatile uint8_t *)34U |= 1 << 1;
}

# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP__Led1__set(void){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1__IO__set();
#line 29
}
#line 29
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2__IO__set(void)
#line 46
{
#line 46
  * (volatile uint8_t *)34U |= 1 << 2;
}

# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP__Led0__set(void){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2__IO__set();
#line 29
}
#line 29
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0__IO__makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)33U |= 1 << 0;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP__Led2__makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0__IO__makeOutput();
#line 35
}
#line 35
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1__IO__makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)33U |= 1 << 1;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP__Led1__makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1__IO__makeOutput();
#line 35
}
#line 35
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2__IO__makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)33U |= 1 << 2;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP__Led0__makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2__IO__makeOutput();
#line 35
}
#line 35
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/LedsP.nc"
static inline  error_t LedsP__Init__init(void)
#line 45
{
  /* atomic removed: atomic calls only */
#line 46
  {
    ;
    LedsP__Led0__makeOutput();
    LedsP__Led1__makeOutput();
    LedsP__Led2__makeOutput();
    LedsP__Led0__set();
    LedsP__Led1__set();
    LedsP__Led2__set();
  }
  return SUCCESS;
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
inline static  error_t PlatformP__MoteInit__init(void){
#line 51
  unsigned char result;
#line 51

#line 51
  result = LedsP__Init__init();
#line 51
  result = ecombine(result, MotePlatformP__PlatformInit__init());
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/MeasureClockC.nc"
static inline  error_t MeasureClockC__Init__init(void)
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
    for (wraps = MeasureClockC__MAGIC / 2; wraps; ) 
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
    MeasureClockC__cycles = * (volatile uint16_t *)0x84;

    MeasureClockC__cycles = (MeasureClockC__cycles - start + 16) >> 5;


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
inline static  error_t PlatformP__MeasureClock__init(void){
#line 51
  unsigned char result;
#line 51

#line 51
  result = MeasureClockC__Init__init();
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/mica/PlatformP.nc"
static inline  error_t PlatformP__Init__init(void)
{
  error_t ok;


  ok = PlatformP__MeasureClock__init();
  ok = ecombine(ok, PlatformP__MoteInit__init());

  if (ok != SUCCESS) {
    return ok;
    }
  PlatformP__power_init();

  return SUCCESS;
}

# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6__IO__set(void)
#line 46
{
#line 46
  * (volatile uint8_t *)34U |= 1 << 6;
}

# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void RF230LayerP__RSTN__set(void){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6__IO__set();
#line 29
}
#line 29
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6__IO__makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)33U |= 1 << 6;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void RF230LayerP__RSTN__makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6__IO__makeOutput();
#line 35
}
#line 35
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15__IO__clr(void)
#line 47
{
#line 47
  * (volatile uint8_t *)37U &= ~(1 << 7);
}

# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void RF230LayerP__SLP_TR__clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15__IO__clr();
#line 30
}
#line 30
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15__IO__makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)36U |= 1 << 7;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void RF230LayerP__SLP_TR__makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15__IO__makeOutput();
#line 35
}
#line 35
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8__IO__set(void)
#line 46
{
#line 46
  * (volatile uint8_t *)37U |= 1 << 0;
}

# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void RF230LayerP__SELN__set(void){
#line 29
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8__IO__set();
#line 29
}
#line 29
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8__IO__makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)36U |= 1 << 0;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void RF230LayerP__SELN__makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8__IO__makeOutput();
#line 35
}
#line 35
# 186 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
static inline  error_t RF230LayerP__PlatformInit__init(void)
{
  RF230LayerP__SELN__makeOutput();
  RF230LayerP__SELN__set();
  RF230LayerP__SLP_TR__makeOutput();
  RF230LayerP__SLP_TR__clr();
  RF230LayerP__RSTN__makeOutput();
  RF230LayerP__RSTN__set();

  RF230LayerP__rxMsg = &RF230LayerP__rxMsgBuffer;


  RF230LayerP__rssiClear = 0;
  RF230LayerP__rssiBusy = 90;

  return SUCCESS;
}

# 151 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline   void HplAtm1281Timer1P__Capture__stop(void)
#line 151
{
#line 151
  * (volatile uint8_t *)0x6F &= ~(1 << 5);
}

# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static   void HplRF230P__Capture__stop(void){
#line 61
  HplAtm1281Timer1P__Capture__stop();
#line 61
}
#line 61
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28__IO__clr(void)
#line 47
{
#line 47
  * (volatile uint8_t *)43U &= ~(1 << 4);
}

# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplRF230P__PortIRQ__clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28__IO__clr();
#line 30
}
#line 30
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28__IO__makeInput(void)
#line 50
{
#line 50
  * (volatile uint8_t *)42U &= ~(1 << 4);
}

# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplRF230P__PortIRQ__makeInput(void){
#line 33
  /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28__IO__makeInput();
#line 33
}
#line 33
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30__IO__clr(void)
#line 47
{
#line 47
  * (volatile uint8_t *)43U &= ~(1 << 6);
}

# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplRF230P__PortCLKM__clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30__IO__clr();
#line 30
}
#line 30
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30__IO__makeInput(void)
#line 50
{
#line 50
  * (volatile uint8_t *)42U &= ~(1 << 6);
}

# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplRF230P__PortCLKM__makeInput(void){
#line 33
  /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30__IO__makeInput();
#line 33
}
#line 33
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static inline  error_t HplRF230P__PlatformInit__init(void)
{
  HplRF230P__PortCLKM__makeInput();
  HplRF230P__PortCLKM__clr();
  HplRF230P__PortIRQ__makeInput();
  HplRF230P__PortIRQ__clr();
  HplRF230P__Capture__stop();

  return SUCCESS;
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
inline static  error_t RealMainP__PlatformInit__init(void){
#line 51
  unsigned char result;
#line 51

#line 51
  result = HplRF230P__PlatformInit__init();
#line 51
  result = ecombine(result, RF230LayerP__PlatformInit__init());
#line 51
  result = ecombine(result, PlatformP__Init__init());
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static  bool RealMainP__Scheduler__runNextTask(void){
#line 54
  unsigned char result;
#line 54

#line 54
  result = SchedulerBasicP__Scheduler__runNextTask();
#line 54

#line 54
  return result;
#line 54
}
#line 54
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP__Led0__toggle(void){
#line 31
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2__IO__toggle();
#line 31
}
#line 31
# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/system/LedsP.nc"
static inline   void LedsP__Leds__led0Toggle(void)
#line 73
{
  LedsP__Led0__toggle();
  ;
#line 75
  ;
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Leds.nc"
inline static   void OscilloscopeC__Leds__led0Toggle(void){
#line 56
  LedsP__Leds__led0Toggle();
#line 56
}
#line 56
# 52 "OscilloscopeC.nc"
static inline void OscilloscopeC__report_problem(void)
#line 52
{
#line 52
  OscilloscopeC__Leds__led0Toggle();
}

# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP__Led1__toggle(void){
#line 31
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1__IO__toggle();
#line 31
}
#line 31
# 88 "/opt/CVSTinyOS/tinyos-2.x/tos/system/LedsP.nc"
static inline   void LedsP__Leds__led1Toggle(void)
#line 88
{
  LedsP__Led1__toggle();
  ;
#line 90
  ;
}

# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Leds.nc"
inline static   void OscilloscopeC__Leds__led1Toggle(void){
#line 72
  LedsP__Leds__led1Toggle();
#line 72
}
#line 72
# 53 "OscilloscopeC.nc"
static inline void OscilloscopeC__report_sent(void)
#line 53
{
#line 53
  OscilloscopeC__Leds__led1Toggle();
}

#line 137
static inline  void OscilloscopeC__AMSend__sendDone(message_t *msg, error_t error)
#line 137
{
  if (error == SUCCESS) {
    OscilloscopeC__report_sent();
    }
  else {
#line 141
    OscilloscopeC__report_problem();
    }
  OscilloscopeC__sendbusy = FALSE;
}

# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  void /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0__AMSend__sendDone(message_t *arg_0x4033f068, error_t arg_0x4033f1f0){
#line 99
  OscilloscopeC__AMSend__sendDone(arg_0x4033f068, arg_0x4033f1f0);
#line 99
}
#line 99
# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline  void /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0__Send__sendDone(message_t *m, error_t err)
#line 57
{
  /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0__AMSend__sendDone(m, err);
}

# 207 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline   void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__Send__default__sendDone(uint8_t id, message_t *msg, error_t err)
#line 207
{
}

# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__Send__sendDone(uint8_t arg_0x40bcccf0, message_t *arg_0x40752010, error_t arg_0x40752198){
#line 89
  switch (arg_0x40bcccf0) {
#line 89
    case 0U:
#line 89
      /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0__Send__sendDone(arg_0x40752010, arg_0x40752198);
#line 89
      break;
#line 89
    default:
#line 89
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__Send__default__sendDone(arg_0x40bcccf0, arg_0x40752010, arg_0x40752198);
#line 89
      break;
#line 89
    }
#line 89
}
#line 89
# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__CancelTask__runTask(void)
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
  for (i = 0; i < 1 / 8 + 1; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0__cancelMask[i]) {
          for (mask = 1, j = 0; j < 8; j++) {
              if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0__cancelMask[i] & mask) {
                  last = i * 8 + j;
                  msg = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__queue[last].msg;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__queue[last].msg = (void *)0;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__cancelMask[i] &= ~mask;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__Send__sendDone(last, msg, ECANCEL);
                }
              mask <<= 1;
            }
        }
    }
}

#line 161
static inline  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__errorTask__runTask(void)
#line 161
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0__current, /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0__current].msg, FAIL);
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__errorTask__postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP__TaskBasic__postTask(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0__errorTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__AMSend__send(am_id_t arg_0x40bcb6a8, am_addr_t arg_0x4033ace8, message_t *arg_0x4033ae98, uint8_t arg_0x40340030){
#line 69
  unsigned char result;
#line 69

#line 69
  result = ActiveMessageLayerC__AMSend__send(arg_0x40bcb6a8, arg_0x4033ace8, arg_0x4033ae98, arg_0x40340030);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 246 "/usr/local/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_leuint8(const void *source)
#line 246
{
  const uint8_t *base = source;

#line 248
  return base[0];
}

# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline ieee154_header_t *IEEE154PacketP__getHeader(message_t *msg)
{
  return (ieee154_header_t *)(msg->data - sizeof(ieee154_header_t ));
}






static __inline   uint8_t IEEE154PacketP__IEEE154Packet__getLength(message_t *msg)
{
  return __nesc_ntoh_leuint8((unsigned char *)&IEEE154PacketP__getHeader(msg)->length);
}

# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static   uint8_t RF230PacketP__IEEE154Packet__getLength(message_t *arg_0x404cb1f8){
#line 44
  unsigned char result;
#line 44

#line 44
  result = IEEE154PacketP__IEEE154Packet__getLength(arg_0x404cb1f8);
#line 44

#line 44
  return result;
#line 44
}
#line 44
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static __inline  uint8_t RF230PacketP__Packet__payloadLength(message_t *msg)
{
  return RF230PacketP__IEEE154Packet__getLength(msg) - RF230PacketP__PACKET_LENGTH_INCREASE;
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__Packet__payloadLength(message_t *arg_0x40462e88){
#line 67
  unsigned char result;
#line 67

#line 67
  result = RF230PacketP__Packet__payloadLength(arg_0x40462e88);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 276 "/usr/local/lib/ncc/nesc_nx.h"
static __inline uint16_t __nesc_ntoh_leuint16(const void *source)
#line 276
{
  const uint8_t *base = source;

#line 278
  return ((uint16_t )base[1] << 8) | base[0];
}

# 174 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline   uint16_t IEEE154PacketP__IEEE154Packet__getDestAddr(message_t *msg)
{
  return __nesc_ntoh_leuint16((unsigned char *)&IEEE154PacketP__getHeader(msg)->dest);
}

#line 249
static __inline  am_addr_t IEEE154PacketP__AMPacket__destination(message_t *msg)
{
  return IEEE154PacketP__IEEE154Packet__getDestAddr(msg);
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__AMPacket__destination(message_t *arg_0x40469120){
#line 67
  unsigned short result;
#line 67

#line 67
  result = IEEE154PacketP__AMPacket__destination(arg_0x40469120);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 208 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline   am_id_t IEEE154PacketP__IEEE154Packet__getType(message_t *msg)
{
  return __nesc_ntoh_leuint8((unsigned char *)&IEEE154PacketP__getHeader(msg)->type);
}

#line 275
static __inline  am_id_t IEEE154PacketP__AMPacket__type(message_t *msg)
{
  return IEEE154PacketP__IEEE154Packet__getType(msg);
}

# 136 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__AMPacket__type(message_t *arg_0x40472680){
#line 136
  unsigned char result;
#line 136

#line 136
  result = IEEE154PacketP__AMPacket__type(arg_0x40472680);
#line 136

#line 136
  return result;
#line 136
}
#line 136
# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__nextPacket(void)
#line 57
{
  uint8_t i;

#line 59
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__current = (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0__current + 1) % 1;
  for (i = 0; i < 1; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0__current].msg == (void *)0 || 
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__cancelMask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0__current / 8] & (1 << /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__current % 8)) 
        {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__current = (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0__current + 1) % 1;
        }
      else {
          break;
        }
    }
  if (i >= 1) {
#line 70
    /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__current = 1;
    }
}

#line 166
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__tryToSend(void)
#line 166
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__nextPacket();
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0__current < 1) {
      error_t nextErr;
      message_t *nextMsg = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0__current].msg;
      am_id_t nextId = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__AMPacket__type(nextMsg);
      am_addr_t nextDest = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__AMPacket__destination(nextMsg);
      uint8_t len = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__Packet__payloadLength(nextMsg);

#line 174
      nextErr = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__AMSend__send(nextId, nextDest, nextMsg, len);
      if (nextErr != SUCCESS) {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__errorTask__postTask();
        }
    }
}

# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static __inline rf230packet_metadata_t *RF230PacketP__getMeta(message_t *msg)
{
  return (rf230packet_metadata_t *)msg->metadata;
}

# 281 "/usr/local/lib/ncc/nesc_nx.h"
static __inline uint16_t __nesc_hton_leuint16(void *target, uint16_t value)
#line 281
{
  uint8_t *base = target;

#line 283
  base[0] = value;
  base[1] = value >> 8;
  return value;
}

# 93 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline   void IEEE154PacketP__IEEE154Packet__createDataFrame(message_t *msg)
{
  __nesc_hton_leuint16((unsigned char *)&IEEE154PacketP__getHeader(msg)->fcf, IEEE154PacketP__IEEE154_DATA_FRAME_VALUE);
}

# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static   void RF230PacketP__IEEE154Packet__createDataFrame(message_t *arg_0x404c8010){
#line 73
  IEEE154PacketP__IEEE154Packet__createDataFrame(arg_0x404c8010);
#line 73
}
#line 73
# 68 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static inline  void RF230PacketP__Packet__clear(message_t *msg)
{
  RF230PacketP__IEEE154Packet__createDataFrame(msg);

  RF230PacketP__getMeta(msg)->flags = RF230PACKET_CLEAR_METADATA;
}

# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  void RF230ActiveMessageP__Packet__clear(message_t *arg_0x404628d8){
#line 54
  RF230PacketP__Packet__clear(arg_0x404628d8);
#line 54
}
#line 54
# 88 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline   bool IEEE154PacketP__IEEE154Packet__isDataFrame(message_t *msg)
{
  return (__nesc_ntoh_leuint16((unsigned char *)&IEEE154PacketP__getHeader(msg)->fcf) & IEEE154PacketP__IEEE154_DATA_FRAME_MASK) == IEEE154PacketP__IEEE154_DATA_FRAME_VALUE;
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static   bool RF230ActiveMessageP__IEEE154Packet__isDataFrame(message_t *arg_0x404caa80){
#line 67
  unsigned char result;
#line 67

#line 67
  result = IEEE154PacketP__IEEE154Packet__isDataFrame(arg_0x404caa80);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 166 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline  error_t RF230ActiveMessageP__ActiveMessageConfig__checkPacket(message_t *msg)
{

  if (!RF230ActiveMessageP__IEEE154Packet__isDataFrame(msg)) {
    RF230ActiveMessageP__Packet__clear(msg);
    }
  return SUCCESS;
}

# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageConfig.nc"
inline static  error_t ActiveMessageLayerC__Config__checkPacket(message_t *arg_0x404c1358){
#line 31
  unsigned char result;
#line 31

#line 31
  result = RF230ActiveMessageP__ActiveMessageConfig__checkPacket(arg_0x404c1358);
#line 31

#line 31
  return result;
#line 31
}
#line 31
# 189 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline   void IEEE154PacketP__IEEE154Packet__setSrcAddr(message_t *msg, uint16_t addr)
{
  __nesc_hton_leuint16((unsigned char *)&IEEE154PacketP__getHeader(msg)->src, addr);
}

#line 264
static __inline  void IEEE154PacketP__AMPacket__setSource(message_t *msg, am_addr_t addr)
{
  IEEE154PacketP__IEEE154Packet__setSrcAddr(msg, addr);
}

# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  void ActiveMessageLayerC__AMPacket__setSource(message_t *arg_0x404735d8, am_addr_t arg_0x40473768){
#line 110
  IEEE154PacketP__AMPacket__setSource(arg_0x404735d8, arg_0x40473768);
#line 110
}
#line 110
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static inline   am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void)
#line 61
{
  return ActiveMessageAddressC__amAddress();
}

# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
inline static   am_addr_t IEEE154PacketP__ActiveMessageAddress__amAddress(void){
#line 50
  unsigned short result;
#line 50

#line 50
  result = ActiveMessageAddressC__ActiveMessageAddress__amAddress();
#line 50

#line 50
  return result;
#line 50
}
#line 50
# 238 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline  am_addr_t IEEE154PacketP__AMPacket__address(void)
{
  return IEEE154PacketP__ActiveMessageAddress__amAddress();
}

# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  am_addr_t ActiveMessageLayerC__AMPacket__address(void){
#line 57
  unsigned short result;
#line 57

#line 57
  result = IEEE154PacketP__AMPacket__address();
#line 57

#line 57
  return result;
#line 57
}
#line 57
# 169 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline   void IEEE154PacketP__IEEE154Packet__setDestPan(message_t *msg, uint16_t pan)
{
  __nesc_hton_leuint16((unsigned char *)&IEEE154PacketP__getHeader(msg)->destpan, pan);
}

#line 290
static __inline  void IEEE154PacketP__AMPacket__setGroup(message_t *msg, am_group_t grp)
{
  IEEE154PacketP__IEEE154Packet__setDestPan(msg, grp);
}

# 176 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  void ActiveMessageLayerC__AMPacket__setGroup(message_t *arg_0x40471c48, am_group_t arg_0x40471dd8){
#line 176
  IEEE154PacketP__AMPacket__setGroup(arg_0x40471c48, arg_0x40471dd8);
#line 176
}
#line 176
# 82 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static inline   am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void)
#line 82
{
  am_group_t myGroup;

#line 84
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 84
    myGroup = ActiveMessageAddressC__group;
#line 84
    __nesc_atomic_end(__nesc_atomic); }
  return myGroup;
}

# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
inline static   am_group_t IEEE154PacketP__ActiveMessageAddress__amGroup(void){
#line 55
  unsigned char result;
#line 55

#line 55
  result = ActiveMessageAddressC__ActiveMessageAddress__amGroup();
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 243 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline  am_group_t IEEE154PacketP__AMPacket__localGroup(void)
{

  return IEEE154PacketP__ActiveMessageAddress__amGroup();
}

# 184 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  am_group_t ActiveMessageLayerC__AMPacket__localGroup(void){
#line 184
  unsigned char result;
#line 184

#line 184
  result = IEEE154PacketP__AMPacket__localGroup();
#line 184

#line 184
  return result;
#line 184
}
#line 184
# 251 "/usr/local/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_hton_leuint8(void *target, uint8_t value)
#line 251
{
  uint8_t *base = target;

#line 253
  base[0] = value;
  return value;
}

# 213 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline   void IEEE154PacketP__IEEE154Packet__setType(message_t *msg, am_id_t type)
{
  __nesc_hton_leuint8((unsigned char *)&IEEE154PacketP__getHeader(msg)->type, type);
}

#line 280
static __inline  void IEEE154PacketP__AMPacket__setType(message_t *msg, am_id_t type)
{
  IEEE154PacketP__IEEE154Packet__setType(msg, type);
}

# 151 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  void ActiveMessageLayerC__AMPacket__setType(message_t *arg_0x40472c18, am_id_t arg_0x40472da0){
#line 151
  IEEE154PacketP__AMPacket__setType(arg_0x40472c18, arg_0x40472da0);
#line 151
}
#line 151
# 179 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline   void IEEE154PacketP__IEEE154Packet__setDestAddr(message_t *msg, uint16_t addr)
{
  __nesc_hton_leuint16((unsigned char *)&IEEE154PacketP__getHeader(msg)->dest, addr);
}

#line 259
static __inline  void IEEE154PacketP__AMPacket__setDestination(message_t *msg, am_addr_t addr)
{
  IEEE154PacketP__IEEE154Packet__setDestAddr(msg, addr);
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  void ActiveMessageLayerC__AMPacket__setDestination(message_t *arg_0x40469ce8, am_addr_t arg_0x40469e78){
#line 92
  IEEE154PacketP__AMPacket__setDestination(arg_0x40469ce8, arg_0x40469e78);
#line 92
}
#line 92
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t MessageBufferLayerP__sendTask__postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP__TaskBasic__postTask(MessageBufferLayerP__sendTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline   void IEEE154PacketP__IEEE154Packet__setLength(message_t *msg, uint8_t length)
{
  __nesc_hton_leuint8((unsigned char *)&IEEE154PacketP__getHeader(msg)->length, length);
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static   void RF230PacketP__IEEE154Packet__setLength(message_t *arg_0x404cb708, uint8_t arg_0x404cb890){
#line 49
  IEEE154PacketP__IEEE154Packet__setLength(arg_0x404cb708, arg_0x404cb890);
#line 49
}
#line 49
# 75 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static __inline  void RF230PacketP__Packet__setPayloadLength(message_t *msg, uint8_t len)
{
  RF230PacketP__IEEE154Packet__setLength(msg, len + RF230PacketP__PACKET_LENGTH_INCREASE);
}

# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  void MessageBufferLayerP__Packet__setPayloadLength(message_t *arg_0x4046d548, uint8_t arg_0x4046d6d0){
#line 83
  RF230PacketP__Packet__setPayloadLength(arg_0x4046d548, arg_0x4046d6d0);
#line 83
}
#line 83
# 85 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static __inline  uint8_t RF230PacketP__Packet__maxPayloadLength(void)
{
  return 28;
}

# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  uint8_t MessageBufferLayerP__Packet__maxPayloadLength(void){
#line 95
  unsigned char result;
#line 95

#line 95
  result = RF230PacketP__Packet__maxPayloadLength();
#line 95

#line 95
  return result;
#line 95
}
#line 95
# 178 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static inline  error_t MessageBufferLayerP__Send__send(message_t *msg, uint8_t len)
{
  if (len > MessageBufferLayerP__Packet__maxPayloadLength()) {
    return EINVAL;
    }
  else {
#line 182
    if (MessageBufferLayerP__state != MessageBufferLayerP__STATE_READY) {
      return EBUSY;
      }
    }
#line 185
  MessageBufferLayerP__Packet__setPayloadLength(msg, len);

  MessageBufferLayerP__txMsg = msg;
  MessageBufferLayerP__state = MessageBufferLayerP__STATE_TX_PENDING;
  MessageBufferLayerP__retries = 0;
  MessageBufferLayerP__sendTask__postTask();

  return SUCCESS;
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static  error_t UniqueLayerP__SubSend__send(message_t *arg_0x40754e80, uint8_t arg_0x40753030){
#line 64
  unsigned char result;
#line 64

#line 64
  result = MessageBufferLayerP__Send__send(arg_0x40754e80, arg_0x40753030);
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 159 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline   void IEEE154PacketP__IEEE154Packet__setDSN(message_t *msg, uint8_t dsn)
{
  __nesc_hton_leuint8((unsigned char *)&IEEE154PacketP__getHeader(msg)->dsn, dsn);
}

# 129 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static   void RF230ActiveMessageP__IEEE154Packet__setDSN(message_t *arg_0x404d2d10, uint8_t arg_0x404d2e98){
#line 129
  IEEE154PacketP__IEEE154Packet__setDSN(arg_0x404d2d10, arg_0x404d2e98);
#line 129
}
#line 129
# 149 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   void RF230ActiveMessageP__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t dsn)
{
  RF230ActiveMessageP__IEEE154Packet__setDSN(msg, dsn);
}

# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/UniqueConfig.nc"
inline static   void UniqueLayerP__UniqueConfig__setSequenceNumber(message_t *arg_0x404b5640, uint8_t arg_0x404b57c8){
#line 41
  RF230ActiveMessageP__UniqueConfig__setSequenceNumber(arg_0x404b5640, arg_0x404b57c8);
#line 41
}
#line 41
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/UniqueLayerP.nc"
static inline  error_t UniqueLayerP__Send__send(message_t *msg, uint8_t len)
{
  UniqueLayerP__UniqueConfig__setSequenceNumber(msg, ++UniqueLayerP__sequenceNumber);
  return UniqueLayerP__SubSend__send(msg, len);
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static  error_t IEEE154NetworkLayerP__SubSend__send(message_t *arg_0x40754e80, uint8_t arg_0x40753030){
#line 64
  unsigned char result;
#line 64

#line 64
  result = UniqueLayerP__Send__send(arg_0x40754e80, arg_0x40753030);
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 201 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline   void IEEE154PacketP__IEEE154Packet__set6LowPan(message_t *msg, uint8_t network)
{
  __nesc_hton_leuint8((unsigned char *)&IEEE154PacketP__getHeader(msg)->network, network);
}

# 172 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static   void IEEE154NetworkLayerP__IEEE154Packet__set6LowPan(message_t *arg_0x404cecd0, uint8_t arg_0x404cee58){
#line 172
  IEEE154PacketP__IEEE154Packet__set6LowPan(arg_0x404cecd0, arg_0x404cee58);
#line 172
}
#line 172
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154NetworkLayerP.nc"
static inline  error_t IEEE154NetworkLayerP__Send__send(message_t *msg, uint8_t len)
{
  IEEE154NetworkLayerP__IEEE154Packet__set6LowPan(msg, 0x3f);
  return IEEE154NetworkLayerP__SubSend__send(msg, len);
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static  error_t ActiveMessageLayerC__SubSend__send(message_t *arg_0x40754e80, uint8_t arg_0x40753030){
#line 64
  unsigned char result;
#line 64

#line 64
  result = IEEE154NetworkLayerP__Send__send(arg_0x40754e80, arg_0x40753030);
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 86 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static inline bool SchedulerBasicP__isWaiting(uint8_t id)
{
  return SchedulerBasicP__m_next[id] != SchedulerBasicP__NO_TASK || SchedulerBasicP__m_tail == id;
}

static inline bool SchedulerBasicP__pushTask(uint8_t id)
{
  if (!SchedulerBasicP__isWaiting(id)) 
    {
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_head = id;
          SchedulerBasicP__m_tail = id;
        }
      else 
        {
          SchedulerBasicP__m_next[SchedulerBasicP__m_tail] = id;
          SchedulerBasicP__m_tail = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t MDA300DigitalLogicP__init_io__postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP__TaskBasic__postTask(MDA300DigitalLogicP__init_io);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300DigitalLogicP.nc"
static inline  void MDA300DigitalLogicP__I2CResource__granted(void)
{
  MDA300DigitalLogicP__init_io__postTask();
}

# 106 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
static inline   void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__Resource__default__granted(uint8_t id)
#line 106
{
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static  void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__Resource__granted(uint8_t arg_0x40b06ee8){
#line 92
  switch (arg_0x40b06ee8) {
#line 92
    case /*HplMDA300DigitalC.I2C*/Atm128I2CMasterC$0__CLIENT_ID:
#line 92
      MDA300DigitalLogicP__I2CResource__granted();
#line 92
      break;
#line 92
    default:
#line 92
      /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__Resource__default__granted(arg_0x40b06ee8);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
static inline  void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__SubResource__granted(uint8_t id)
#line 67
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 68
    /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__currentClient = id;
#line 68
    __nesc_atomic_end(__nesc_atomic); }
  /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__Resource__granted(id);
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static  void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__Resource__granted(uint8_t arg_0x40ae8cd8){
#line 92
  /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__SubResource__granted(arg_0x40ae8cd8);
#line 92
}
#line 92
# 212 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
static inline    void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__ResourceConfigure__default__configure(uint8_t id)
#line 212
{
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static   void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__ResourceConfigure__configure(uint8_t arg_0x40ae6838){
#line 49
    /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__ResourceConfigure__default__configure(arg_0x40ae6838);
#line 49
}
#line 49
# 186 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
static inline  void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__grantedTask__runTask(void)
#line 186
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 187
    {
      /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__resId = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__reqResId;
      /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__state = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__RES_BUSY;
    }
#line 190
    __nesc_atomic_end(__nesc_atomic); }
  /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__ResourceConfigure__configure(/*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__resId);
  /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__Resource__granted(/*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__resId);
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t MDA300DigitalLogicP__read_io__postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP__TaskBasic__postTask(MDA300DigitalLogicP__read_io);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 65 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/I2CPacket.nc"
inline static   error_t MDA300DigitalLogicP__I2CPacket__read(i2c_flags_t arg_0x40a49af0, uint16_t arg_0x40a49c80, uint8_t arg_0x40a49e08, uint8_t *arg_0x40a48010){
#line 65
  unsigned char result;
#line 65

#line 65
  result = /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__I2CPacket__read(/*HplMDA300DigitalC.I2C*/Atm128I2CMasterC$0__CLIENT_ID, arg_0x40a49af0, arg_0x40a49c80, arg_0x40a49e08, arg_0x40a48010);
#line 65

#line 65
  return result;
#line 65
}
#line 65
# 206 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300DigitalLogicP.nc"
static inline  void MDA300DigitalLogicP__read_io__runTask(void)
{
  uint8_t status;

#line 209
  status = FALSE;
  if (MDA300DigitalLogicP__state == MDA300DigitalLogicP__IDLE) {
#line 210
    MDA300DigitalLogicP__state = MDA300DigitalLogicP__GET_DATA;
    }
  else 
#line 211
    {
#line 211
      status = TRUE;
#line 211
      MDA300DigitalLogicP__read_io__postTask();
    }
#line 212
  if (status == TRUE) {
#line 212
    return;
    }
  else {
#line 213
    if (MDA300DigitalLogicP__I2CPacket__read(0x03, TOS_DIGITAL_I2C_ADDR, 1, &MDA300DigitalLogicP__buff) == FAIL) 
      {
        MDA300DigitalLogicP__state = MDA300DigitalLogicP__IDLE;
        MDA300DigitalLogicP__read_io__postTask();
      }
    }
}

# 79 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBusP.nc"
static inline   void HplAtm128I2CBusP__I2C__sendCommand(void)
#line 79
{
  /* atomic removed: atomic calls only */
#line 80
  * (volatile uint8_t *)0xBC = HplAtm128I2CBusP__current;
}

# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
inline static   void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__sendCommand(void){
#line 48
  HplAtm128I2CBusP__I2C__sendCommand();
#line 48
}
#line 48
# 100 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBusP.nc"
static inline   void HplAtm128I2CBusP__I2C__setStop(bool on)
#line 100
{
  if (on) {
      /* atomic removed: atomic calls only */
#line 102
      HplAtm128I2CBusP__current |= 1 << 4;
    }
  else {
      /* atomic removed: atomic calls only */
#line 105
      HplAtm128I2CBusP__current &= ~(1 << 4);
    }
}

# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
inline static   void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__setStop(bool arg_0x40b50088){
#line 55
  HplAtm128I2CBusP__I2C__setStop(arg_0x40b50088);
#line 55
}
#line 55
# 121 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBusP.nc"
static inline   void HplAtm128I2CBusP__I2C__enableAck(bool enable)
#line 121
{
  if (enable) {
      /* atomic removed: atomic calls only */
#line 123
      HplAtm128I2CBusP__current |= 1 << 6;
    }
  else {
      /* atomic removed: atomic calls only */
#line 126
      HplAtm128I2CBusP__current &= ~(1 << 6);
    }
}

# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
inline static   void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__enableAck(bool arg_0x40b50848){
#line 57
  HplAtm128I2CBusP__I2C__enableAck(arg_0x40b50848);
#line 57
}
#line 57
# 88 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBusP.nc"
static inline   void HplAtm128I2CBusP__I2C__setStart(bool on)
#line 88
{
  if (on) {
      /* atomic removed: atomic calls only */
#line 90
      HplAtm128I2CBusP__current |= 1 << 5;
    }
  else {
      /* atomic removed: atomic calls only */
#line 93
      HplAtm128I2CBusP__current &= ~(1 << 5);
    }
}

# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
inline static   void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__setStart(bool arg_0x40b518a0){
#line 53
  HplAtm128I2CBusP__I2C__setStart(arg_0x40b518a0);
#line 53
}
#line 53
# 155 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBusP.nc"
static inline   void HplAtm128I2CBusP__I2C__setInterruptPending(bool on)
#line 155
{
  if (on) {
      /* atomic removed: atomic calls only */
#line 157
      HplAtm128I2CBusP__current |= 1 << 7;
    }
  else {
      /* atomic removed: atomic calls only */
#line 160
      HplAtm128I2CBusP__current &= ~(1 << 7);
    }
}

# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
inline static   void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__setInterruptPending(bool arg_0x40b4eed8){
#line 74
  HplAtm128I2CBusP__I2C__setInterruptPending(arg_0x40b4eed8);
#line 74
}
#line 74
# 134 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBusP.nc"
static inline   void HplAtm128I2CBusP__I2C__enableInterrupt(bool enable)
#line 134
{
  if (enable) {
      /* atomic removed: atomic calls only */
#line 136
      HplAtm128I2CBusP__current |= 1 << 0;
    }
  else {
      /* atomic removed: atomic calls only */
#line 139
      HplAtm128I2CBusP__current &= ~(1 << 0);
    }
}

# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
inline static   void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__enableInterrupt(bool arg_0x40b4e030){
#line 60
  HplAtm128I2CBusP__I2C__enableInterrupt(arg_0x40b4e030);
#line 60
}
#line 60
#line 47
inline static   void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__readCurrent(void){
#line 47
  HplAtm128I2CBusP__I2C__readCurrent();
#line 47
}
#line 47
# 128 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterPacketP.nc"
static inline   error_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2CPacket__read(i2c_flags_t flags, uint16_t addr, uint8_t len, uint8_t *data)
#line 128
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 129
    {
      if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__state == /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C_IDLE) {
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C_BUSY;
        }
      else {
#line 133
        if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__state == /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C_OFF) {
            {
              unsigned char __nesc_temp = 
#line 134
              EOFF;

              {
#line 134
                __nesc_atomic_end(__nesc_atomic); 
#line 134
                return __nesc_temp;
              }
            }
          }
        else 
#line 136
          {
            {
              unsigned char __nesc_temp = 
#line 137
              EBUSY;

              {
#line 137
                __nesc_atomic_end(__nesc_atomic); 
#line 137
                return __nesc_temp;
              }
            }
          }
        }
    }
#line 142
    __nesc_atomic_end(__nesc_atomic); }
#line 142
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 142
    {
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__packetAddr = addr;
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__packetPtr = data;
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__packetLen = len;
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__packetFlags = flags;
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__index = 0;
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__reading = TRUE;
    }
#line 149
    __nesc_atomic_end(__nesc_atomic); }


  /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__readCurrent();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 153
    {
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__enableInterrupt(TRUE);
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__setInterruptPending(TRUE);
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__enableAck(FALSE);

      if (flags & I2C_START) {
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__setStart(TRUE);
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C_STARTING;
        }
      else {
#line 162
        if (len > 1 || (len > 0 && flags & I2C_ACK_END)) {
            /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__enableAck(TRUE);
            /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C_DATA;
          }
        else {
#line 166
          if (len == 1) {
              /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C_DATA;
            }
          else {
#line 169
            if (flags & I2C_STOP) {
                /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C_STOPPING;
                /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__enableAck(FALSE);
                /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__setStop(TRUE);
              }
            }
          }
        }
#line 174
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__sendCommand();
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 65 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/I2CPacket.nc"
inline static   error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__SubPacket__read(i2c_flags_t arg_0x40a49af0, uint16_t arg_0x40a49c80, uint8_t arg_0x40a49e08, uint8_t *arg_0x40a48010){
#line 65
  unsigned char result;
#line 65

#line 65
  result = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2CPacket__read(arg_0x40a49af0, arg_0x40a49c80, arg_0x40a49e08, arg_0x40a48010);
#line 65

#line 65
  return result;
#line 65
}
#line 65
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t MDA300DigitalLogicP__set_io_toggle__postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP__TaskBasic__postTask(MDA300DigitalLogicP__set_io_toggle);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 81 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/I2CPacket.nc"
inline static   error_t MDA300DigitalLogicP__I2CPacket__write(i2c_flags_t arg_0x40a487c0, uint16_t arg_0x40a48950, uint8_t arg_0x40a48ad8, uint8_t *arg_0x40a48c80){
#line 81
  unsigned char result;
#line 81

#line 81
  result = /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__I2CPacket__write(/*HplMDA300DigitalC.I2C*/Atm128I2CMasterC$0__CLIENT_ID, arg_0x40a487c0, arg_0x40a48950, arg_0x40a48ad8, arg_0x40a48c80);
#line 81

#line 81
  return result;
#line 81
}
#line 81
# 134 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300DigitalLogicP.nc"
static inline  void MDA300DigitalLogicP__set_io_toggle__runTask(void)
{
  uint8_t i;

#line 137
  if (MDA300DigitalLogicP__state == MDA300DigitalLogicP__IDLE) {
#line 137
    MDA300DigitalLogicP__state = MDA300DigitalLogicP__SET_OUTPUT_TOGGLE;
    }
  else 
#line 138
    {
#line 138
      MDA300DigitalLogicP__set_io_toggle__postTask();
#line 138
      return;
    }
#line 139
  MDA300DigitalLogicP__i2c_data = MDA300DigitalLogicP__io_value;

  for (i = 0; i <= 7; i++) {
      if (MDA300DigitalLogicP__bitmap_toggle & (1 << i)) {
          if (MDA300DigitalLogicP__i2c_data & (1 << i)) {
              MDA300DigitalLogicP__i2c_data &= ~(1 << i);
            }
          else 
#line 145
            {
              MDA300DigitalLogicP__i2c_data |= 1 << i;
            }
        }
      if (!(MDA300DigitalLogicP__mode[i] & DIG_OUTPUT)) {
#line 149
        MDA300DigitalLogicP__i2c_data |= 1 << i;
        }
    }
#line 151
  if (MDA300DigitalLogicP__I2CPacket__write(0x01, TOS_DIGITAL_I2C_ADDR, 1, (uint8_t *)&MDA300DigitalLogicP__i2c_data) == FAIL) 
    {
      MDA300DigitalLogicP__state = MDA300DigitalLogicP__IDLE;
      MDA300DigitalLogicP__set_io_toggle__postTask();
    }
  else {
#line 156
    MDA300DigitalLogicP__bitmap_toggle = 0x0;
    }
}

# 113 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBusP.nc"
static inline   void HplAtm128I2CBusP__I2C__write(uint8_t data)
#line 113
{
  * (volatile uint8_t *)0xBB = data;
}

# 81 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
inline static   void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__write(uint8_t arg_0x40b4de88){
#line 81
  HplAtm128I2CBusP__I2C__write(arg_0x40b4de88);
#line 81
}
#line 81
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/system/NoLedsC.nc"
static inline   void NoLedsC__Leds__led0On(void)
#line 42
{
}

# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Leds.nc"
inline static   void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__WriteDebugLeds__led0On(void){
#line 45
  NoLedsC__Leds__led0On();
#line 45
}
#line 45
# 179 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterPacketP.nc"
static inline   error_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2CPacket__write(i2c_flags_t flags, uint16_t addr, uint8_t len, uint8_t *data)
#line 179
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 180
    {
      if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__state == /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C_IDLE) {
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C_BUSY;
        }
      else {
#line 184
        if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__state == /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C_OFF) {
            {
              unsigned char __nesc_temp = 
#line 185
              EOFF;

              {
#line 185
                __nesc_atomic_end(__nesc_atomic); 
#line 185
                return __nesc_temp;
              }
            }
          }
        else 
#line 187
          {
            {
              unsigned char __nesc_temp = 
#line 188
              EBUSY;

              {
#line 188
                __nesc_atomic_end(__nesc_atomic); 
#line 188
                return __nesc_temp;
              }
            }
          }
        }
    }
#line 193
    __nesc_atomic_end(__nesc_atomic); }
#line 193
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 193
    {
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__packetAddr = addr;
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__packetPtr = data;
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__packetLen = len;
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__packetFlags = flags;
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__index = 0;
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__reading = FALSE;
    }
#line 200
    __nesc_atomic_end(__nesc_atomic); }
  /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__readCurrent();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 202
    {
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__setInterruptPending(TRUE);
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__enableAck(TRUE);
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__enableInterrupt(TRUE);

      if (flags & I2C_START) {
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__setStart(TRUE);
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__WriteDebugLeds__led0On();
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C_STARTING;
        }
      else {
#line 212
        if (len > 0) {
            /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C_DATA;
            /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__write(data[/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__index]);
          }
        else {
#line 216
          if (flags & I2C_STOP) {
              /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C_STOPPING;
              /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__enableAck(FALSE);
              /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__setStop(TRUE);
            }
          else {
              /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C_IDLE;
              {
                unsigned char __nesc_temp = 
#line 223
                FAIL;

                {
#line 223
                  __nesc_atomic_end(__nesc_atomic); 
#line 223
                  return __nesc_temp;
                }
              }
            }
          }
        }
#line 225
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__sendCommand();
    }
#line 226
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 81 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/I2CPacket.nc"
inline static   error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__SubPacket__write(i2c_flags_t arg_0x40a487c0, uint16_t arg_0x40a48950, uint8_t arg_0x40a48ad8, uint8_t *arg_0x40a48c80){
#line 81
  unsigned char result;
#line 81

#line 81
  result = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2CPacket__write(arg_0x40a487c0, arg_0x40a48950, arg_0x40a48ad8, arg_0x40a48c80);
#line 81

#line 81
  return result;
#line 81
}
#line 81
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t MDA300DigitalLogicP__set_io_low__postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP__TaskBasic__postTask(MDA300DigitalLogicP__set_io_low);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300DigitalLogicP.nc"
static inline  void MDA300DigitalLogicP__set_io_low__runTask(void)
{
  uint8_t status;
  uint8_t i;

#line 114
  status = FALSE;
  if (MDA300DigitalLogicP__state == MDA300DigitalLogicP__IDLE) {
#line 115
    MDA300DigitalLogicP__state = MDA300DigitalLogicP__SET_OUTPUT_LOW;
    }
  else 
#line 116
    {
#line 116
      status = TRUE;
#line 116
      MDA300DigitalLogicP__set_io_low__postTask();
    }
#line 117
  if (status == TRUE) {
#line 117
    return;
    }
#line 118
  MDA300DigitalLogicP__i2c_data = MDA300DigitalLogicP__io_value;

  for (i = 0; i <= 7; i++) {
      if (MDA300DigitalLogicP__bitmap_low & (1 << i)) {
          MDA300DigitalLogicP__i2c_data &= ~(1 << i);
        }
      if (!(MDA300DigitalLogicP__mode[i] & DIG_OUTPUT)) {
#line 124
        MDA300DigitalLogicP__i2c_data |= 1 << i;
        }
    }
#line 126
  if (MDA300DigitalLogicP__I2CPacket__write(0x01, TOS_DIGITAL_I2C_ADDR, 1, (uint8_t *)&MDA300DigitalLogicP__i2c_data) == FAIL) 
    {
      MDA300DigitalLogicP__state = MDA300DigitalLogicP__IDLE;
      MDA300DigitalLogicP__set_io_low__postTask();
    }
  else {
#line 131
    MDA300DigitalLogicP__bitmap_low = 0x0;
    }
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t MDA300DigitalLogicP__set_io_high__postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP__TaskBasic__postTask(MDA300DigitalLogicP__set_io_high);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 86 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300DigitalLogicP.nc"
static inline  void MDA300DigitalLogicP__set_io_high__runTask(void)
{
  uint8_t status;
  uint8_t i;

#line 90
  status = FALSE;
  if (MDA300DigitalLogicP__state == MDA300DigitalLogicP__IDLE) {
#line 91
    MDA300DigitalLogicP__state = MDA300DigitalLogicP__SET_OUTPUT_HIGH;
    }
  else 
#line 92
    {
#line 92
      status = TRUE;
#line 92
      MDA300DigitalLogicP__set_io_high__postTask();
    }
#line 93
  if (status == TRUE) {
#line 93
    return;
    }
#line 94
  MDA300DigitalLogicP__i2c_data = MDA300DigitalLogicP__io_value;
  for (i = 0; i <= 7; i++) {
      if (MDA300DigitalLogicP__bitmap_high & (1 << i)) {
          MDA300DigitalLogicP__i2c_data |= 1 << i;
        }
      if (!(MDA300DigitalLogicP__mode[i] & DIG_OUTPUT)) {
#line 99
        MDA300DigitalLogicP__i2c_data |= 1 << i;
        }
    }
  if (MDA300DigitalLogicP__I2CPacket__write(0x01, TOS_DIGITAL_I2C_ADDR, 1, (uint8_t *)&MDA300DigitalLogicP__i2c_data) == FAIL) 
    {
      MDA300DigitalLogicP__state = MDA300DigitalLogicP__IDLE;
      MDA300DigitalLogicP__set_io_high__postTask();
    }
  else {
#line 107
    MDA300DigitalLogicP__bitmap_high = 0x0;
    }
}

# 68 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
inline static  void MessageBufferLayerP__Tasklet__resume(void){
#line 68
  TaskletC__Tasklet__resume();
#line 68
}
#line 68
#line 48
inline static   void RF230LayerP__Tasklet__schedule(void){
#line 48
  TaskletC__Tasklet__schedule();
#line 48
}
#line 48
# 82 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
static __inline   bool RadioAlarmP__RadioAlarm__isFree(uint8_t id)
{
  return RadioAlarmP__state == RadioAlarmP__STATE_READY;
}

# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
inline static   bool RF230LayerP__RadioAlarm__isFree(void){
#line 33
  unsigned char result;
#line 33

#line 33
  result = RadioAlarmP__RadioAlarm__isFree(3U);
#line 33

#line 33
  return result;
#line 33
}
#line 33
# 372 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
static inline   error_t RF230LayerP__RadioState__turnOn(void)
{
  if (RF230LayerP__cmd != RF230LayerP__CMD_NONE || (RF230LayerP__state == RF230LayerP__STATE_SLEEP && !RF230LayerP__RadioAlarm__isFree())) {
    return EBUSY;
    }
  else {
#line 376
    if (RF230LayerP__state == RF230LayerP__STATE_RX_ON) {
      return EALREADY;
      }
    }
#line 379
  RF230LayerP__cmd = RF230LayerP__CMD_TURNON;
  RF230LayerP__Tasklet__schedule();

  return SUCCESS;
}

# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioState.nc"
inline static   error_t TrafficMonitorLayerP__SubState__turnOn(void){
#line 45
  unsigned char result;
#line 45

#line 45
  result = RF230LayerP__RadioState__turnOn();
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 217 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
static inline   error_t TrafficMonitorLayerP__RadioState__turnOn(void)
{
  TrafficMonitorLayerP__radioCmd = TrafficMonitorLayerP__RADIO_CMD_TURNON;
  return TrafficMonitorLayerP__SubState__turnOn();
}

# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioState.nc"
inline static   error_t MessageBufferLayerP__RadioState__turnOn(void){
#line 45
  unsigned char result;
#line 45

#line 45
  result = TrafficMonitorLayerP__RadioState__turnOn();
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TaskletC.nc"
static __inline  void TaskletC__Tasklet__suspend(void)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 85
    ++TaskletC__state;
#line 85
    __nesc_atomic_end(__nesc_atomic); }
}

# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
inline static  void MessageBufferLayerP__Tasklet__suspend(void){
#line 61
  TaskletC__Tasklet__suspend();
#line 61
}
#line 61
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static inline  error_t MessageBufferLayerP__SplitControl__start(void)
{
  error_t error;

  MessageBufferLayerP__Tasklet__suspend();

  if (MessageBufferLayerP__state != MessageBufferLayerP__STATE_READY) {
    error = EBUSY;
    }
  else {
#line 72
    error = MessageBufferLayerP__RadioState__turnOn();
    }
  if (error == SUCCESS) {
    MessageBufferLayerP__state = MessageBufferLayerP__STATE_TURN_ON;
    }
  MessageBufferLayerP__Tasklet__resume();

  return error;
}

# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static  error_t OscilloscopeC__RadioControl__start(void){
#line 83
  unsigned char result;
#line 83

#line 83
  result = MessageBufferLayerP__SplitControl__start();
#line 83

#line 83
  return result;
#line 83
}
#line 83
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300DigitalLogicP.nc"
static inline  error_t MDA300DigitalLogicP__Dio__setParam(uint8_t channel, uint8_t modeToSet)
{

  MDA300DigitalLogicP__mode[channel] = modeToSet;
  if (((modeToSet & RISING_EDGE) == 0) & ((modeToSet & FALLING_EDGE) == 0)) {
#line 82
    MDA300DigitalLogicP__mode[channel] |= RISING_EDGE;
    }
#line 83
  return FAIL;
}

# 14 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/Dio.nc"
inline static  error_t OscilloscopeC__Read1__setParam(uint8_t arg_0x40351850){
#line 14
  unsigned char result;
#line 14

#line 14
  result = MDA300DigitalLogicP__Dio__setParam(0, arg_0x40351850);
#line 14

#line 14
  return result;
#line 14
}
#line 14
# 69 "OscilloscopeC.nc"
static inline  void OscilloscopeC__SensorControl__startDone(error_t error)
#line 69
{
  if (OscilloscopeC__Read1__setParam(OscilloscopeC__param) != SUCCESS) {
    OscilloscopeC__report_problem();
    }
#line 72
  if (OscilloscopeC__RadioControl__start() != SUCCESS) {
    OscilloscopeC__report_problem();
    }
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static  void MDA300DigitalLogicP__SplitControl__startDone(error_t arg_0x4032c640){
#line 92
  OscilloscopeC__SensorControl__startDone(arg_0x4032c640);
#line 92
}
#line 92
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300DigitalLogicP.nc"
static inline  void MDA300DigitalLogicP__init_io__runTask(void)
{
  if (MDA300DigitalLogicP__I2CPacket__read(0x03, TOS_DIGITAL_I2C_ADDR, 1, &MDA300DigitalLogicP__buff) == FAIL) 
    {
      MDA300DigitalLogicP__init_io__postTask();
    }
  else {
#line 49
    MDA300DigitalLogicP__SplitControl__startDone(SUCCESS);
    }
}

# 260 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   void RF230ActiveMessageP__RadioAlarm__fired(void)
#line 260
{
}

# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
inline static   void RandomCollisionLayerP__RadioSend__sendDone(error_t arg_0x407849f8){
#line 45
  TrafficMonitorLayerP__SubSend__sendDone(arg_0x407849f8);
#line 45
}
#line 45
# 239 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   uint16_t RF230ActiveMessageP__RandomCollisionConfig__getCongestionBackoff(message_t *msg)
{
  return (uint16_t )(2240 * (7372800UL / 8 / 32 * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 1000000.0));
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RandomCollisionConfig.nc"
inline static   uint16_t RandomCollisionLayerP__Config__getCongestionBackoff(message_t *arg_0x404b90a8){
#line 35
  unsigned short result;
#line 35

#line 35
  result = RF230ActiveMessageP__RandomCollisionConfig__getCongestionBackoff(arg_0x404b90a8);
#line 35

#line 35
  return result;
#line 35
}
#line 35
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SoftwareAckConfig.nc"
inline static   void SoftwareAckLayerP__SoftwareAckConfig__setAckReceived(message_t *arg_0x404adb70, bool arg_0x404adcf8){
#line 43
  RF230ActiveMessageP__SoftwareAckConfig__setAckReceived(arg_0x404adb70, arg_0x404adcf8);
#line 43
}
#line 43
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
inline static   error_t SoftwareAckLayerP__SubSend__send(message_t *arg_0x40784338){
#line 37
  unsigned char result;
#line 37

#line 37
  result = RF230LayerP__RadioSend__send(arg_0x40784338);
#line 37

#line 37
  return result;
#line 37
}
#line 37
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SoftwareAckLayerP.nc"
static inline   error_t SoftwareAckLayerP__RadioSend__send(message_t *msg)
{
  error_t error;

  if (SoftwareAckLayerP__state == SoftwareAckLayerP__STATE_READY) 
    {
      if ((error = SoftwareAckLayerP__SubSend__send(msg)) == SUCCESS) 
        {
          SoftwareAckLayerP__SoftwareAckConfig__setAckReceived(msg, FALSE);
          SoftwareAckLayerP__state = SoftwareAckLayerP__STATE_DATA_SEND;
          SoftwareAckLayerP__txMsg = msg;
        }
    }
  else {
    error = EBUSY;
    }
  return error;
}

# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
inline static   error_t RandomCollisionLayerP__SubSend__send(message_t *arg_0x40784338){
#line 37
  unsigned char result;
#line 37

#line 37
  result = SoftwareAckLayerP__RadioSend__send(arg_0x40784338);
#line 37

#line 37
  return result;
#line 37
}
#line 37
# 195 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static inline   void MessageBufferLayerP__RadioSend__ready(void)
{
  if (MessageBufferLayerP__state == MessageBufferLayerP__STATE_TX_PENDING) {
    MessageBufferLayerP__sendTask__postTask();
    }
}

# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
inline static   void TrafficMonitorLayerP__RadioSend__ready(void){
#line 52
  MessageBufferLayerP__RadioSend__ready();
#line 52
}
#line 52
# 81 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
static inline   void TrafficMonitorLayerP__SubSend__ready(void)
{
  TrafficMonitorLayerP__RadioSend__ready();
}

# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
inline static   void RandomCollisionLayerP__RadioSend__ready(void){
#line 52
  TrafficMonitorLayerP__SubSend__ready();
#line 52
}
#line 52
# 70 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline   uint16_t HplAtm1281Timer1P__Timer__get(void)
#line 70
{
#line 70
  return * (volatile uint16_t *)0x84;
}

# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__HplAtm128Timer__timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__HplAtm128Timer__get(void){
#line 52
  unsigned short result;
#line 52

#line 52
  result = HplAtm1281Timer1P__Timer__get();
#line 52

#line 52
  return result;
#line 52
}
#line 52
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline   /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__Alarm__getNow(void)
#line 53
{
  return /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__HplAtm128Timer__get();
}

# 98 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   RadioAlarmP__Alarm__size_type RadioAlarmP__Alarm__getNow(void){
#line 98
  unsigned short result;
#line 98

#line 98
  result = /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__Alarm__getNow();
#line 98

#line 98
  return result;
#line 98
}
#line 98
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
static __inline   uint16_t RadioAlarmP__RadioAlarm__getNow(uint8_t id)
{
  return RadioAlarmP__Alarm__getNow();
}

# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
inline static   uint16_t RandomCollisionLayerP__RadioAlarm__getNow(void){
#line 53
  unsigned short result;
#line 53

#line 53
  result = RadioAlarmP__RadioAlarm__getNow(1U);
#line 53

#line 53
  return result;
#line 53
}
#line 53
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RandomCollisionLayerP.nc"
static inline   void RandomCollisionLayerP__RadioAlarm__fired(void)
{
  error_t error;
  int16_t delay;

  for (; 0; ) ;

  delay = (int16_t )RandomCollisionLayerP__txBarrier - RandomCollisionLayerP__RadioAlarm__getNow();

  if (RandomCollisionLayerP__state == RandomCollisionLayerP__STATE_BARRIER) 
    {
      RandomCollisionLayerP__state = RandomCollisionLayerP__STATE_READY;

      RandomCollisionLayerP__RadioSend__ready();
      return;
    }
  else {
#line 115
    if (RandomCollisionLayerP__state & RandomCollisionLayerP__STATE_BARRIER && delay > 0) {
      error = EBUSY;
      }
    else {
#line 118
      error = RandomCollisionLayerP__SubSend__send(RandomCollisionLayerP__txMsg);
      }
    }
#line 120
  if (error != SUCCESS) 
    {
      if ((RandomCollisionLayerP__state & ~RandomCollisionLayerP__STATE_BARRIER) == RandomCollisionLayerP__STATE_TX_PENDING_FIRST) 
        {
          RandomCollisionLayerP__state = (RandomCollisionLayerP__state & RandomCollisionLayerP__STATE_BARRIER) | RandomCollisionLayerP__STATE_TX_PENDING_SECOND;
          RandomCollisionLayerP__RadioAlarm__wait(RandomCollisionLayerP__getBackoff(RandomCollisionLayerP__Config__getCongestionBackoff(RandomCollisionLayerP__txMsg)));
        }
      else 
        {
          if (RandomCollisionLayerP__state & RandomCollisionLayerP__STATE_BARRIER && delay > 0) 
            {
              RandomCollisionLayerP__state = RandomCollisionLayerP__STATE_BARRIER;
              RandomCollisionLayerP__RadioAlarm__wait(delay);
            }
          else {
            RandomCollisionLayerP__state = RandomCollisionLayerP__STATE_READY;
            }
          RandomCollisionLayerP__RadioSend__sendDone(error);
        }
    }
  else {
    RandomCollisionLayerP__state = RandomCollisionLayerP__STATE_TX_SENDING;
    }
}

#line 144
static inline   void RandomCollisionLayerP__SubSend__sendDone(error_t error)
{
  for (; 0; ) ;

  RandomCollisionLayerP__state = RandomCollisionLayerP__STATE_READY;
  RandomCollisionLayerP__RadioSend__sendDone(error);
}

# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
inline static   void SoftwareAckLayerP__RadioSend__sendDone(error_t arg_0x407849f8){
#line 45
  RandomCollisionLayerP__SubSend__sendDone(arg_0x407849f8);
#line 45
}
#line 45
# 124 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
static inline   void TrafficMonitorLayerP__TrafficMonitorConfig__channelError(void)
{
  if (TrafficMonitorLayerP__errorAverage < 255) {
    ++TrafficMonitorLayerP__errorAverage;
    }
}

# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorConfig.nc"
inline static   void RF230ActiveMessageP__TrafficMonitorConfig__channelError(void){
#line 50
  TrafficMonitorLayerP__TrafficMonitorConfig__channelError();
#line 50
}
#line 50
# 137 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   void RF230ActiveMessageP__SoftwareAckConfig__reportChannelError(void)
{
  RF230ActiveMessageP__TrafficMonitorConfig__channelError();
}

# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SoftwareAckConfig.nc"
inline static   void SoftwareAckLayerP__SoftwareAckConfig__reportChannelError(void){
#line 74
  RF230ActiveMessageP__SoftwareAckConfig__reportChannelError();
#line 74
}
#line 74
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SoftwareAckLayerP.nc"
static inline   void SoftwareAckLayerP__RadioAlarm__fired(void)
{
  for (; 0; ) ;

  SoftwareAckLayerP__SoftwareAckConfig__reportChannelError();

  SoftwareAckLayerP__state = SoftwareAckLayerP__STATE_READY;
  SoftwareAckLayerP__RadioSend__sendDone(SUCCESS);
}

# 537 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
static inline    void RF230LayerP__RadioCCA__default__done(error_t error)
#line 537
{
}

# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioCCA.nc"
inline static   void RF230LayerP__RadioCCA__done(error_t arg_0x40799b28){
#line 41
  RF230LayerP__RadioCCA__default__done(arg_0x40799b28);
#line 41
}
#line 41
# 102 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static __inline   uint8_t HplRF230P__HplRF230__spiSplitRead(void)
{
  while (!(* (volatile uint8_t *)(0x2D + 0x20) & 0x80)) 
    ;
  return * (volatile uint8_t *)(0X2E + 0x20);
}

# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230.nc"
inline static   uint8_t RF230LayerP__HplRF230__spiSplitRead(void){
#line 47
  unsigned char result;
#line 47

#line 47
  result = HplRF230P__HplRF230__spiSplitRead();
#line 47

#line 47
  return result;
#line 47
}
#line 47
# 109 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static __inline   uint8_t HplRF230P__HplRF230__spiSplitReadWrite(uint8_t data)
{
  uint8_t b;

  while (!(* (volatile uint8_t *)(0x2D + 0x20) & 0x80)) 
    ;
  b = * (volatile uint8_t *)(0X2E + 0x20);
  * (volatile uint8_t *)(0X2E + 0x20) = data;

  return b;
}

# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230.nc"
inline static   uint8_t RF230LayerP__HplRF230__spiSplitReadWrite(uint8_t arg_0x408aa5d0){
#line 53
  unsigned char result;
#line 53

#line 53
  result = HplRF230P__HplRF230__spiSplitReadWrite(arg_0x408aa5d0);
#line 53

#line 53
  return result;
#line 53
}
#line 53
# 94 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static __inline   void HplRF230P__HplRF230__spiSplitWrite(uint8_t data)
{



  * (volatile uint8_t *)(0X2E + 0x20) = data;
}

# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230.nc"
inline static   void RF230LayerP__HplRF230__spiSplitWrite(uint8_t arg_0x408abc50){
#line 41
  HplRF230P__HplRF230__spiSplitWrite(arg_0x408abc50);
#line 41
}
#line 41
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8__IO__clr(void)
#line 47
{
#line 47
  * (volatile uint8_t *)37U &= ~(1 << 0);
}

# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void RF230LayerP__SELN__clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8__IO__clr();
#line 30
}
#line 30
# 135 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
static __inline uint8_t RF230LayerP__readRegister(uint8_t reg)
{
  for (; 0; ) ;
  for (; 0; ) ;

  RF230LayerP__SELN__clr();
  RF230LayerP__HplRF230__spiSplitWrite(RF230_CMD_REGISTER_READ | reg);
  RF230LayerP__HplRF230__spiSplitReadWrite(0);
  reg = RF230LayerP__HplRF230__spiSplitRead();
  RF230LayerP__SELN__set();

  return reg;
}

#line 160
static inline   void RF230LayerP__RadioAlarm__fired(void)
{
  if (RF230LayerP__state == RF230LayerP__STATE_SLEEP_2_TRX_OFF) {
    RF230LayerP__state = RF230LayerP__STATE_TRX_OFF;
    }
  else {
#line 164
    if (RF230LayerP__cmd == RF230LayerP__CMD_CCA) 
      {
        uint8_t cca;

        for (; 0; ) ;

        RF230LayerP__cmd = RF230LayerP__CMD_NONE;
        cca = RF230LayerP__readRegister(RF230_TRX_STATUS);

        for (; 0; ) ;

        RF230LayerP__RadioCCA__done(cca & RF230_CCA_DONE ? cca & RF230_CCA_STATUS ? SUCCESS : EBUSY : FAIL);
      }
    else {
      for (; 0; ) ;
      }
    }
  RF230LayerP__Tasklet__schedule();
}

# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
static inline    void RadioAlarmP__RadioAlarm__default__fired(uint8_t id)
{
}

# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
inline static   void RadioAlarmP__RadioAlarm__fired(uint8_t arg_0x407414c8){
#line 48
  switch (arg_0x407414c8) {
#line 48
    case 0U:
#line 48
      RF230ActiveMessageP__RadioAlarm__fired();
#line 48
      break;
#line 48
    case 1U:
#line 48
      RandomCollisionLayerP__RadioAlarm__fired();
#line 48
      break;
#line 48
    case 2U:
#line 48
      SoftwareAckLayerP__RadioAlarm__fired();
#line 48
      break;
#line 48
    case 3U:
#line 48
      RF230LayerP__RadioAlarm__fired();
#line 48
      break;
#line 48
    default:
#line 48
      RadioAlarmP__RadioAlarm__default__fired(arg_0x407414c8);
#line 48
      break;
#line 48
    }
#line 48
}
#line 48
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
static inline   void RadioAlarmP__Tasklet__run(void)
{
  if (RadioAlarmP__state == RadioAlarmP__STATE_FIRED) 
    {
      RadioAlarmP__state = RadioAlarmP__STATE_READY;
      RadioAlarmP__RadioAlarm__fired(RadioAlarmP__alarm);
    }
}

# 201 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static inline   void MessageBufferLayerP__Tasklet__run(void)
{
}

# 171 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
static inline   void TrafficMonitorLayerP__Tasklet__run(void)
{
}

# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t RF230LayerP__SpiResource__release(void){
#line 110
  unsigned char result;
#line 110

#line 110
  result = Atm128SpiP__Resource__release(0U);
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
inline static   bool RandomCollisionLayerP__RadioAlarm__isFree(void){
#line 33
  unsigned char result;
#line 33

#line 33
  result = RadioAlarmP__RadioAlarm__isFree(1U);
#line 33

#line 33
  return result;
#line 33
}
#line 33
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RandomCollisionLayerP.nc"
static inline   void RandomCollisionLayerP__SubSend__ready(void)
{
  if (RandomCollisionLayerP__state == RandomCollisionLayerP__STATE_READY && RandomCollisionLayerP__RadioAlarm__isFree()) {
    RandomCollisionLayerP__RadioSend__ready();
    }
}

# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
inline static   void SoftwareAckLayerP__RadioSend__ready(void){
#line 52
  RandomCollisionLayerP__SubSend__ready();
#line 52
}
#line 52
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SoftwareAckLayerP.nc"
static inline   void SoftwareAckLayerP__SubSend__ready(void)
{
  if (SoftwareAckLayerP__state == SoftwareAckLayerP__STATE_READY) {
    SoftwareAckLayerP__RadioSend__ready();
    }
}

# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
inline static   void RF230LayerP__RadioSend__ready(void){
#line 52
  SoftwareAckLayerP__SubSend__ready();
#line 52
}
#line 52
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t MessageBufferLayerP__stateDoneTask__postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP__TaskBasic__postTask(MessageBufferLayerP__stateDoneTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 117 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static inline   void MessageBufferLayerP__RadioState__done(void)
{
  MessageBufferLayerP__stateDoneTask__postTask();
}

# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioState.nc"
inline static   void TrafficMonitorLayerP__RadioState__done(void){
#line 58
  MessageBufferLayerP__RadioState__done();
#line 58
}
#line 58
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t TrafficMonitorLayerP__startStopTimer__postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP__TaskBasic__postTask(TrafficMonitorLayerP__startStopTimer);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 237 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
static inline   void TrafficMonitorLayerP__SubState__done(void)
{
  TrafficMonitorLayerP__startStopTimer__postTask();
  TrafficMonitorLayerP__RadioState__done();
}

# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioState.nc"
inline static   void RF230LayerP__RadioState__done(void){
#line 58
  TrafficMonitorLayerP__SubState__done();
#line 58
}
#line 58
# 123 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
static __inline void RF230LayerP__writeRegister(uint8_t reg, uint8_t value)
{
  for (; 0; ) ;
  for (; 0; ) ;

  RF230LayerP__SELN__clr();
  RF230LayerP__HplRF230__spiSplitWrite(RF230_CMD_REGISTER_WRITE | reg);
  RF230LayerP__HplRF230__spiSplitReadWrite(value);
  RF230LayerP__HplRF230__spiSplitRead();
  RF230LayerP__SELN__set();
}

#line 287
static __inline void RF230LayerP__changeChannel(void)
{
  for (; 0; ) ;
  for (; 0; ) ;

  if (RF230LayerP__isSpiAcquired()) 
    {
      RF230LayerP__writeRegister(RF230_PHY_CC_CCA, RF230_CCA_MODE_VALUE | RF230LayerP__channel);

      if (RF230LayerP__state == RF230LayerP__STATE_RX_ON) {
        RF230LayerP__state = RF230LayerP__STATE_TRX_OFF_2_RX_ON;
        }
      else {
#line 299
        RF230LayerP__cmd = RF230LayerP__CMD_SIGNAL_DONE;
        }
    }
}

# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15__IO__set(void)
#line 46
{
#line 46
  * (volatile uint8_t *)37U |= 1 << 7;
}

# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void RF230LayerP__SLP_TR__set(void){
#line 29
  /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15__IO__set();
#line 29
}
#line 29
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static inline   void HplRF230P__IRQ__disable(void)
{
  HplRF230P__Capture__stop();
}

# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioCapture.nc"
inline static   void RF230LayerP__IRQ__disable(void){
#line 55
  HplRF230P__IRQ__disable();
#line 55
}
#line 55
# 145 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline   void HplAtm1281Timer1P__Capture__start(void)
#line 145
{
#line 145
  * (volatile uint8_t *)0x6F |= 1 << 5;
}

# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static   void HplRF230P__Capture__start(void){
#line 58
  HplAtm1281Timer1P__Capture__start();
#line 58
}
#line 58
# 139 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline   void HplAtm1281Timer1P__Capture__reset(void)
#line 139
{
#line 139
  * (volatile uint8_t *)(0x16 + 0x20) = 1 << 5;
}

# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static   void HplRF230P__Capture__reset(void){
#line 55
  HplAtm1281Timer1P__Capture__reset();
#line 55
}
#line 55
# 135 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline   void HplAtm1281Timer1P__Capture__setEdge(bool up)
#line 135
{
#line 135
  if (up) {
#line 135
    * (volatile uint8_t *)0x81 |= 1 << 6;
    }
  else {
#line 135
    * (volatile uint8_t *)0x81 &= ~(1 << 6);
    }
}

# 79 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static   void HplRF230P__Capture__setEdge(bool arg_0x405cec20){
#line 79
  HplAtm1281Timer1P__Capture__setEdge(arg_0x405cec20);
#line 79
}
#line 79
# 68 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static inline   error_t HplRF230P__IRQ__captureRisingEdge(void)
{
  HplRF230P__Capture__setEdge(TRUE);
  HplRF230P__Capture__reset();
  HplRF230P__Capture__start();

  return SUCCESS;
}

# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioCapture.nc"
inline static   error_t RF230LayerP__IRQ__captureRisingEdge(void){
#line 42
  unsigned char result;
#line 42

#line 42
  result = HplRF230P__IRQ__captureRisingEdge();
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline   void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__Alarm__start(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__timer_size dt)
{
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__Alarm__startAt(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__HplAtm128Timer__get(), dt);
}

# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void RadioAlarmP__Alarm__start(RadioAlarmP__Alarm__size_type arg_0x4066d0b0){
#line 55
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__Alarm__start(arg_0x4066d0b0);
#line 55
}
#line 55
# 87 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
static inline   void RadioAlarmP__RadioAlarm__wait(uint8_t id, uint16_t timeout)
{
  for (; 0; ) ;

  RadioAlarmP__alarm = id;
  RadioAlarmP__state = RadioAlarmP__STATE_WAIT;
  RadioAlarmP__Alarm__start(timeout);
}

# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
inline static   void RF230LayerP__RadioAlarm__wait(uint16_t arg_0x404d5608){
#line 38
  RadioAlarmP__RadioAlarm__wait(3U, arg_0x404d5608);
#line 38
}
#line 38
# 305 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
static __inline void RF230LayerP__changeState(void)
{

  if ((
#line 307
  RF230LayerP__cmd == RF230LayerP__CMD_STANDBY || RF230LayerP__cmd == RF230LayerP__CMD_TURNON)
   && RF230LayerP__state == RF230LayerP__STATE_SLEEP && RF230LayerP__RadioAlarm__isFree()) 
    {
      RF230LayerP__SLP_TR__clr();

      RF230LayerP__RadioAlarm__wait(RF230LayerP__SLEEP_WAKEUP_TIME);
      RF230LayerP__state = RF230LayerP__STATE_SLEEP_2_TRX_OFF;
    }
  else {
#line 315
    if (RF230LayerP__cmd == RF230LayerP__CMD_TURNON && RF230LayerP__state == RF230LayerP__STATE_TRX_OFF && RF230LayerP__isSpiAcquired()) 
      {
        for (; 0; ) ;

        RF230LayerP__readRegister(RF230_IRQ_STATUS);
        RF230LayerP__IRQ__captureRisingEdge();

        RF230LayerP__writeRegister(RF230_TRX_STATE, RF230_RX_ON);
        RF230LayerP__state = RF230LayerP__STATE_TRX_OFF_2_RX_ON;
      }
    else {
      if ((
#line 325
      RF230LayerP__cmd == RF230LayerP__CMD_TURNOFF || RF230LayerP__cmd == RF230LayerP__CMD_STANDBY)
       && RF230LayerP__state == RF230LayerP__STATE_RX_ON && RF230LayerP__isSpiAcquired()) 
        {
          RF230LayerP__writeRegister(RF230_TRX_STATE, RF230_FORCE_TRX_OFF);

          RF230LayerP__IRQ__disable();
          RF230LayerP__radioIrq = FALSE;

          RF230LayerP__state = RF230LayerP__STATE_TRX_OFF;
        }
      }
    }
#line 336
  if (RF230LayerP__cmd == RF230LayerP__CMD_TURNOFF && RF230LayerP__state == RF230LayerP__STATE_TRX_OFF) 
    {
      RF230LayerP__SLP_TR__set();
      RF230LayerP__state = RF230LayerP__STATE_SLEEP;
      RF230LayerP__cmd = RF230LayerP__CMD_SIGNAL_DONE;
    }
  else {
#line 342
    if (RF230LayerP__cmd == RF230LayerP__CMD_STANDBY && RF230LayerP__state == RF230LayerP__STATE_TRX_OFF) {
      RF230LayerP__cmd = RF230LayerP__CMD_SIGNAL_DONE;
      }
    }
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t MessageBufferLayerP__deliverTask__postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP__TaskBasic__postTask(MessageBufferLayerP__deliverTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 298 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static inline   message_t *MessageBufferLayerP__RadioReceive__receive(message_t *msg)
{
  message_t *m;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (MessageBufferLayerP__receiveQueueSize >= MessageBufferLayerP__RECEIVE_QUEUE_SIZE) {
        m = msg;
        }
      else {
          uint8_t index = MessageBufferLayerP__receiveQueueHead + MessageBufferLayerP__receiveQueueSize;

#line 309
          if (index >= MessageBufferLayerP__RECEIVE_QUEUE_SIZE) {
            index -= MessageBufferLayerP__RECEIVE_QUEUE_SIZE;
            }
          m = MessageBufferLayerP__receiveQueue[index];
          MessageBufferLayerP__receiveQueue[index] = msg;

          ++MessageBufferLayerP__receiveQueueSize;
          MessageBufferLayerP__deliverTask__postTask();
        }
    }
#line 318
    __nesc_atomic_end(__nesc_atomic); }

  return m;
}

# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
inline static   message_t *UniqueLayerP__RadioReceive__receive(message_t *arg_0x40781380){
#line 42
  nx_struct message_t *result;
#line 42

#line 42
  result = MessageBufferLayerP__RadioReceive__receive(arg_0x40781380);
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 152 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodP.nc"
static __inline   void NeighborhoodP__NeighborhoodFlag__set(uint8_t bit, uint8_t index)
{
  NeighborhoodP__flags[index] |= 1 << bit;
}

# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodFlag.nc"
inline static   void UniqueLayerP__NeighborhoodFlag__set(uint8_t arg_0x407de540){
#line 40
  NeighborhoodP__NeighborhoodFlag__set(0U, arg_0x407de540);
#line 40
}
#line 40
# 159 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   void RF230ActiveMessageP__UniqueConfig__reportChannelError(void)
{
  RF230ActiveMessageP__TrafficMonitorConfig__channelError();
}

# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/UniqueConfig.nc"
inline static   void UniqueLayerP__UniqueConfig__reportChannelError(void){
#line 47
  RF230ActiveMessageP__UniqueConfig__reportChannelError();
#line 47
}
#line 47
# 147 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodP.nc"
static __inline   bool NeighborhoodP__NeighborhoodFlag__get(uint8_t bit, uint8_t index)
{
  return NeighborhoodP__flags[index] & (1 << bit);
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodFlag.nc"
inline static   bool UniqueLayerP__NeighborhoodFlag__get(uint8_t arg_0x407de068){
#line 35
  unsigned char result;
#line 35

#line 35
  result = NeighborhoodP__NeighborhoodFlag__get(0U, arg_0x407de068);
#line 35

#line 35
  return result;
#line 35
}
#line 35
# 154 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline   uint8_t IEEE154PacketP__IEEE154Packet__getDSN(message_t *msg)
{
  return __nesc_ntoh_leuint8((unsigned char *)&IEEE154PacketP__getHeader(msg)->dsn);
}

# 124 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static   uint8_t RF230ActiveMessageP__IEEE154Packet__getDSN(message_t *arg_0x404d2820){
#line 124
  unsigned char result;
#line 124

#line 124
  result = IEEE154PacketP__IEEE154Packet__getDSN(arg_0x404d2820);
#line 124

#line 124
  return result;
#line 124
}
#line 124
# 144 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   uint8_t RF230ActiveMessageP__UniqueConfig__getSequenceNumber(message_t *msg)
{
  return RF230ActiveMessageP__IEEE154Packet__getDSN(msg);
}

# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/UniqueConfig.nc"
inline static   uint8_t UniqueLayerP__UniqueConfig__getSequenceNumber(message_t *arg_0x404b6c20){
#line 31
  unsigned char result;
#line 31

#line 31
  result = RF230ActiveMessageP__UniqueConfig__getSequenceNumber(arg_0x404b6c20);
#line 31

#line 31
  return result;
#line 31
}
#line 31
# 184 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline   uint16_t IEEE154PacketP__IEEE154Packet__getSrcAddr(message_t *msg)
{
  return __nesc_ntoh_leuint16((unsigned char *)&IEEE154PacketP__getHeader(msg)->src);
}

# 155 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static   uint16_t RF230ActiveMessageP__IEEE154Packet__getSrcAddr(message_t *arg_0x404cfbd8){
#line 155
  unsigned short result;
#line 155

#line 155
  result = IEEE154PacketP__IEEE154Packet__getSrcAddr(arg_0x404cfbd8);
#line 155

#line 155
  return result;
#line 155
}
#line 155
# 154 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   am_addr_t RF230ActiveMessageP__UniqueConfig__getSender(message_t *msg)
{
  return RF230ActiveMessageP__IEEE154Packet__getSrcAddr(msg);
}

# 36 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/UniqueConfig.nc"
inline static   am_addr_t UniqueLayerP__UniqueConfig__getSender(message_t *arg_0x404b5140){
#line 36
  unsigned short result;
#line 36

#line 36
  result = RF230ActiveMessageP__UniqueConfig__getSender(arg_0x404b5140);
#line 36

#line 36
  return result;
#line 36
}
#line 36
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Neighborhood.nc"
inline static   uint8_t UniqueLayerP__Neighborhood__insertNode(am_addr_t arg_0x407e29a0){
#line 60
  unsigned char result;
#line 60

#line 60
  result = NeighborhoodP__Neighborhood__insertNode(arg_0x407e29a0);
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/UniqueLayerP.nc"
static inline   message_t *UniqueLayerP__SubReceive__receive(message_t *msg)
{
  uint8_t index = UniqueLayerP__Neighborhood__insertNode(UniqueLayerP__UniqueConfig__getSender(msg));
  uint8_t dsn = UniqueLayerP__UniqueConfig__getSequenceNumber(msg);

  if (UniqueLayerP__NeighborhoodFlag__get(index)) 
    {
      uint8_t diff = dsn - UniqueLayerP__receivedNumbers[index];

      if (diff == 0) 
        {
          UniqueLayerP__UniqueConfig__reportChannelError();
          return msg;
        }
    }
  else {
    UniqueLayerP__NeighborhoodFlag__set(index);
    }
  UniqueLayerP__receivedNumbers[index] = dsn;

  return UniqueLayerP__RadioReceive__receive(msg);
}

# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
inline static   message_t *TrafficMonitorLayerP__RadioReceive__receive(message_t *arg_0x40781380){
#line 42
  nx_struct message_t *result;
#line 42

#line 42
  result = UniqueLayerP__SubReceive__receive(arg_0x40781380);
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodFlag.nc"
inline static   void TrafficMonitorLayerP__NeighborhoodFlag__set(uint8_t arg_0x407de540){
#line 40
  NeighborhoodP__NeighborhoodFlag__set(1U, arg_0x407de540);
#line 40
}
#line 40
#line 35
inline static   bool TrafficMonitorLayerP__NeighborhoodFlag__get(uint8_t arg_0x407de068){
#line 35
  unsigned char result;
#line 35

#line 35
  result = NeighborhoodP__NeighborhoodFlag__get(1U, arg_0x407de068);
#line 35

#line 35
  return result;
#line 35
}
#line 35
# 208 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   am_addr_t RF230ActiveMessageP__TrafficMonitorConfig__getSender(message_t *msg)
{
  return RF230ActiveMessageP__IEEE154Packet__getSrcAddr(msg);
}

# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorConfig.nc"
inline static   am_addr_t TrafficMonitorLayerP__TrafficMonitorConfig__getSender(message_t *arg_0x404be7b0){
#line 43
  unsigned short result;
#line 43

#line 43
  result = RF230ActiveMessageP__TrafficMonitorConfig__getSender(arg_0x404be7b0);
#line 43

#line 43
  return result;
#line 43
}
#line 43
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Neighborhood.nc"
inline static   uint8_t TrafficMonitorLayerP__Neighborhood__insertNode(am_addr_t arg_0x407e29a0){
#line 60
  unsigned char result;
#line 60

#line 60
  result = NeighborhoodP__Neighborhood__insertNode(arg_0x407e29a0);
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorConfig.nc"
inline static   uint16_t TrafficMonitorLayerP__TrafficMonitorConfig__getChannelTime(message_t *arg_0x404be288){
#line 37
  unsigned short result;
#line 37

#line 37
  result = RF230ActiveMessageP__TrafficMonitorConfig__getChannelTime(arg_0x404be288);
#line 37

#line 37
  return result;
#line 37
}
#line 37
# 105 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
static inline   message_t *TrafficMonitorLayerP__SubReceive__receive(message_t *msg)
{
  uint8_t index;

  TrafficMonitorLayerP__rxAverage += TrafficMonitorLayerP__TrafficMonitorConfig__getChannelTime(msg);

  index = TrafficMonitorLayerP__Neighborhood__insertNode(TrafficMonitorLayerP__TrafficMonitorConfig__getSender(msg));
  if (!TrafficMonitorLayerP__NeighborhoodFlag__get(index)) 
    {
      if (TrafficMonitorLayerP__neighborCount < TrafficMonitorLayerP__TRAFFIC_MONITOR_UINT8_MAX) 
        {
          ++TrafficMonitorLayerP__neighborCount;
          TrafficMonitorLayerP__NeighborhoodFlag__set(index);
        }
    }

  return TrafficMonitorLayerP__RadioReceive__receive(msg);
}

# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
inline static   message_t *RandomCollisionLayerP__RadioReceive__receive(message_t *arg_0x40781380){
#line 42
  nx_struct message_t *result;
#line 42

#line 42
  result = TrafficMonitorLayerP__SubReceive__receive(arg_0x40781380);
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 196 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static   bool RF230ActiveMessageP__IEEE154Packet__requiresAckReply(message_t *arg_0x404d9598){
#line 196
  unsigned char result;
#line 196

#line 196
  result = IEEE154PacketP__IEEE154Packet__requiresAckReply(arg_0x404d9598);
#line 196

#line 196
  return result;
#line 196
}
#line 196
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
inline static   uint16_t RF230ActiveMessageP__RadioAlarm__getNow(void){
#line 53
  unsigned short result;
#line 53

#line 53
  result = RadioAlarmP__RadioAlarm__getNow(0U);
#line 53

#line 53
  return result;
#line 53
}
#line 53
# 244 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   uint16_t RF230ActiveMessageP__RandomCollisionConfig__getTransmitBarrier(message_t *msg)
{
  uint16_t time;


  time = RF230ActiveMessageP__RadioAlarm__getNow();


  if (RF230ActiveMessageP__IEEE154Packet__requiresAckReply(msg)) {
    time += (uint16_t )(32 * (-5 + 16 + 11 + 5) * (7372800UL / 8 / 32 * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 1000000.0));
    }
  else {
#line 255
    time += (uint16_t )(32 * (-5 + 5) * (7372800UL / 8 / 32 * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 1000000.0));
    }
  return time;
}

# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RandomCollisionConfig.nc"
inline static   uint16_t RandomCollisionLayerP__Config__getTransmitBarrier(message_t *arg_0x404b9970){
#line 46
  unsigned short result;
#line 46

#line 46
  result = RF230ActiveMessageP__RandomCollisionConfig__getTransmitBarrier(arg_0x404b9970);
#line 46

#line 46
  return result;
#line 46
}
#line 46
# 157 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RandomCollisionLayerP.nc"
static inline   message_t *RandomCollisionLayerP__SubReceive__receive(message_t *msg)
{
  int16_t delay;

  RandomCollisionLayerP__txBarrier = RandomCollisionLayerP__Config__getTransmitBarrier(msg);
  delay = RandomCollisionLayerP__txBarrier - RandomCollisionLayerP__RadioAlarm__getNow();

  if (delay > 0) 
    {
      if (RandomCollisionLayerP__state == RandomCollisionLayerP__STATE_READY) 
        {
          RandomCollisionLayerP__RadioAlarm__wait(delay);
          RandomCollisionLayerP__state = RandomCollisionLayerP__STATE_BARRIER;
        }
      else {
        RandomCollisionLayerP__state |= RandomCollisionLayerP__STATE_BARRIER;
        }
    }
  return RandomCollisionLayerP__RadioReceive__receive(msg);
}

# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
inline static   message_t *SoftwareAckLayerP__RadioReceive__receive(message_t *arg_0x40781380){
#line 42
  nx_struct message_t *result;
#line 42

#line 42
  result = RandomCollisionLayerP__SubReceive__receive(arg_0x40781380);
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 111 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline   void IEEE154PacketP__IEEE154Packet__createAckReply(message_t *data, message_t *ack)
{
  ieee154_header_t *header = IEEE154PacketP__getHeader(ack);

  __nesc_hton_leuint8((unsigned char *)&header->length, IEEE154PacketP__IEEE154_ACK_FRAME_LENGTH);
  __nesc_hton_leuint16((unsigned char *)&header->fcf, IEEE154PacketP__IEEE154_ACK_FRAME_VALUE);
  __nesc_hton_leuint8((unsigned char *)&header->dsn, __nesc_ntoh_leuint8((unsigned char *)&IEEE154PacketP__getHeader(data)->dsn));
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static   void RF230ActiveMessageP__IEEE154Packet__createAckReply(message_t *arg_0x404c70d0, message_t *arg_0x404c7280){
#line 92
  IEEE154PacketP__IEEE154Packet__createAckReply(arg_0x404c70d0, arg_0x404c7280);
#line 92
}
#line 92
# 119 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   void RF230ActiveMessageP__SoftwareAckConfig__createAckPacket(message_t *data, message_t *ack)
{
  RF230ActiveMessageP__IEEE154Packet__createAckReply(data, ack);
}

# 68 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SoftwareAckConfig.nc"
inline static   void SoftwareAckLayerP__SoftwareAckConfig__createAckPacket(message_t *arg_0x404b8548, message_t *arg_0x404b86f8){
#line 68
  RF230ActiveMessageP__SoftwareAckConfig__createAckPacket(arg_0x404b8548, arg_0x404b86f8);
#line 68
}
#line 68
# 114 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   bool RF230ActiveMessageP__SoftwareAckConfig__requiresAckReply(message_t *msg)
{
  return RF230ActiveMessageP__IEEE154Packet__requiresAckReply(msg);
}

# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SoftwareAckConfig.nc"
inline static   bool SoftwareAckLayerP__SoftwareAckConfig__requiresAckReply(message_t *arg_0x404b8010){
#line 63
  unsigned char result;
#line 63

#line 63
  result = RF230ActiveMessageP__SoftwareAckConfig__requiresAckReply(arg_0x404b8010);
#line 63

#line 63
  return result;
#line 63
}
#line 63
# 152 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline   void HplAtm1281Timer1P__CompareA__stop(void)
#line 152
{
#line 152
  * (volatile uint8_t *)0x6F &= ~(1 << 1);
}

# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__HplAtm128Compare__stop(void){
#line 59
  HplAtm1281Timer1P__CompareA__stop();
#line 59
}
#line 59
# 65 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline   void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__Alarm__stop(void)
#line 65
{
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__HplAtm128Compare__stop();
}

# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void RadioAlarmP__Alarm__stop(void){
#line 62
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__Alarm__stop();
#line 62
}
#line 62
# 96 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
static inline   void RadioAlarmP__RadioAlarm__cancel(uint8_t id)
{
  for (; 0; ) ;
  for (; 0; ) ;

  RadioAlarmP__Alarm__stop();
  RadioAlarmP__state = RadioAlarmP__STATE_READY;
}

# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
inline static   void SoftwareAckLayerP__RadioAlarm__cancel(void){
#line 43
  RadioAlarmP__RadioAlarm__cancel(2U);
#line 43
}
#line 43
# 98 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline   bool IEEE154PacketP__IEEE154Packet__isAckFrame(message_t *msg)
{
  return (__nesc_ntoh_leuint16((unsigned char *)&IEEE154PacketP__getHeader(msg)->fcf) & IEEE154PacketP__IEEE154_ACK_FRAME_MASK) == IEEE154PacketP__IEEE154_ACK_FRAME_VALUE;
}

# 79 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static   bool RF230ActiveMessageP__IEEE154Packet__isAckFrame(message_t *arg_0x404c85c0){
#line 79
  unsigned char result;
#line 79

#line 79
  result = IEEE154PacketP__IEEE154Packet__isAckFrame(arg_0x404c85c0);
#line 79

#line 79
  return result;
#line 79
}
#line 79
# 104 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   bool RF230ActiveMessageP__SoftwareAckConfig__isAckPacket(message_t *msg)
{
  return RF230ActiveMessageP__IEEE154Packet__isAckFrame(msg);
}

# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SoftwareAckConfig.nc"
inline static   bool SoftwareAckLayerP__SoftwareAckConfig__isAckPacket(message_t *arg_0x404ac230){
#line 50
  unsigned char result;
#line 50

#line 50
  result = RF230ActiveMessageP__SoftwareAckConfig__isAckPacket(arg_0x404ac230);
#line 50

#line 50
  return result;
#line 50
}
#line 50
# 128 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SoftwareAckLayerP.nc"
static inline   message_t *SoftwareAckLayerP__SubReceive__receive(message_t *msg)
{
  bool ack = SoftwareAckLayerP__SoftwareAckConfig__isAckPacket(msg);

  for (; 0; ) ;

  if (SoftwareAckLayerP__state == SoftwareAckLayerP__STATE_ACK_WAIT) 
    {
      for (; 0; ) ;

      SoftwareAckLayerP__RadioAlarm__cancel();
      SoftwareAckLayerP__SoftwareAckConfig__setAckReceived(SoftwareAckLayerP__txMsg, ack);

      SoftwareAckLayerP__state = SoftwareAckLayerP__STATE_READY;
      SoftwareAckLayerP__RadioSend__sendDone(SUCCESS);
    }

  if (ack) {
    return msg;
    }
  if (SoftwareAckLayerP__SoftwareAckConfig__requiresAckReply(msg)) 
    {
      SoftwareAckLayerP__SoftwareAckConfig__createAckPacket(msg, &SoftwareAckLayerP__ackMsg);


      if (SoftwareAckLayerP__SubSend__send(&SoftwareAckLayerP__ackMsg) == SUCCESS) {
        SoftwareAckLayerP__state = SoftwareAckLayerP__STATE_ACK_SEND;
        }
      else {
#line 156
        for (; 0; ) ;
        }
    }
  return SoftwareAckLayerP__RadioReceive__receive(msg);
}

# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
inline static   message_t *RF230LayerP__RadioReceive__receive(message_t *arg_0x40781380){
#line 42
  nx_struct message_t *result;
#line 42

#line 42
  result = SoftwareAckLayerP__SubReceive__receive(arg_0x40781380);
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 135 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static inline   void RF230PacketP__PacketLinkQuality__set(message_t *msg, uint8_t value)
{
  RF230PacketP__getMeta(msg)->lqi = value;
}

# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/PacketField.nc"
inline static   void RF230LayerP__PacketLinkQuality__set(message_t *arg_0x40497a80, RF230LayerP__PacketLinkQuality__value_type arg_0x40497c10){
#line 46
  RF230PacketP__PacketLinkQuality__set(arg_0x40497a80, arg_0x40497c10);
#line 46
}
#line 46
# 251 "/usr/lib/gcc/avr/3.4.6/../../../../avr/include/util/crc16.h"
#line 250
static __inline uint16_t 
_crc_ccitt_update(uint16_t __crc, uint8_t __data)
{
  uint16_t __ret;

   __asm volatile (
  "eor    %A0,%1""\n\t"

  "mov    __tmp_reg__,%A0""\n\t"
  "swap   %A0""\n\t"
  "andi   %A0,0xf0""\n\t"
  "eor    %A0,__tmp_reg__""\n\t"

  "mov    __tmp_reg__,%B0""\n\t"

  "mov    %B0,%A0""\n\t"

  "swap   %A0""\n\t"
  "andi   %A0,0x0f""\n\t"
  "eor    __tmp_reg__,%A0""\n\t"

  "lsr    %A0""\n\t"
  "eor    %B0,%A0""\n\t"

  "eor    %A0,%B0""\n\t"
  "lsl    %A0""\n\t"
  "lsl    %A0""\n\t"
  "lsl    %A0""\n\t"
  "eor    %A0,__tmp_reg__" : 

  "=d"(__ret) : 
  "r"(__data), "0"(__crc) : 
  "r0");

  return __ret;
}

# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static __inline   uint16_t HplRF230P__HplRF230__crcByte(uint16_t crc, uint8_t data)
{
  return _crc_ccitt_update(crc, data);
}

# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230.nc"
inline static   uint16_t RF230LayerP__HplRF230__crcByte(uint16_t arg_0x408ab598, uint8_t arg_0x408ab720){
#line 33
  unsigned short result;
#line 33

#line 33
  result = HplRF230P__HplRF230__crcByte(arg_0x408ab598, arg_0x408ab720);
#line 33

#line 33
  return result;
#line 33
}
#line 33
# 257 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static inline   bool MessageBufferLayerP__RadioReceive__header(message_t *msg)
{
  bool notFull;


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 262
    notFull = MessageBufferLayerP__receiveQueueSize < MessageBufferLayerP__RECEIVE_QUEUE_SIZE;
#line 262
    __nesc_atomic_end(__nesc_atomic); }

  return notFull;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
inline static   bool UniqueLayerP__RadioReceive__header(message_t *arg_0x40782c10){
#line 35
  unsigned char result;
#line 35

#line 35
  result = MessageBufferLayerP__RadioReceive__header(arg_0x40782c10);
#line 35

#line 35
  return result;
#line 35
}
#line 35
# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/UniqueLayerP.nc"
static inline   bool UniqueLayerP__SubReceive__header(message_t *msg)
{

  return UniqueLayerP__RadioReceive__header(msg);
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
inline static   bool TrafficMonitorLayerP__RadioReceive__header(message_t *arg_0x40782c10){
#line 35
  unsigned char result;
#line 35

#line 35
  result = UniqueLayerP__SubReceive__header(arg_0x40782c10);
#line 35

#line 35
  return result;
#line 35
}
#line 35
# 100 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
static inline   bool TrafficMonitorLayerP__SubReceive__header(message_t *msg)
{
  return TrafficMonitorLayerP__RadioReceive__header(msg);
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
inline static   bool RandomCollisionLayerP__RadioReceive__header(message_t *arg_0x40782c10){
#line 35
  unsigned char result;
#line 35

#line 35
  result = TrafficMonitorLayerP__SubReceive__header(arg_0x40782c10);
#line 35

#line 35
  return result;
#line 35
}
#line 35
# 152 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RandomCollisionLayerP.nc"
static inline   bool RandomCollisionLayerP__SubReceive__header(message_t *msg)
{
  return RandomCollisionLayerP__RadioReceive__header(msg);
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
inline static   bool SoftwareAckLayerP__RadioReceive__header(message_t *arg_0x40782c10){
#line 35
  unsigned char result;
#line 35

#line 35
  result = RandomCollisionLayerP__SubReceive__header(arg_0x40782c10);
#line 35

#line 35
  return result;
#line 35
}
#line 35
# 120 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline   bool IEEE154PacketP__IEEE154Packet__verifyAckReply(message_t *data, message_t *ack)
{
  ieee154_header_t *header = IEEE154PacketP__getHeader(ack);

  return __nesc_ntoh_leuint8((unsigned char *)&header->dsn) == __nesc_ntoh_leuint8((unsigned char *)&IEEE154PacketP__getHeader(data)->dsn)
   && (__nesc_ntoh_leuint16((unsigned char *)&header->fcf) & IEEE154PacketP__IEEE154_ACK_FRAME_MASK) == IEEE154PacketP__IEEE154_ACK_FRAME_VALUE;
}

# 98 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static   bool RF230ActiveMessageP__IEEE154Packet__verifyAckReply(message_t *arg_0x404c7850, message_t *arg_0x404c7a00){
#line 98
  unsigned char result;
#line 98

#line 98
  result = IEEE154PacketP__IEEE154Packet__verifyAckReply(arg_0x404c7850, arg_0x404c7a00);
#line 98

#line 98
  return result;
#line 98
}
#line 98
# 109 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   bool RF230ActiveMessageP__SoftwareAckConfig__verifyAckPacket(message_t *data, message_t *ack)
{
  return RF230ActiveMessageP__IEEE154Packet__verifyAckReply(data, ack);
}

# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SoftwareAckConfig.nc"
inline static   bool SoftwareAckLayerP__SoftwareAckConfig__verifyAckPacket(message_t *arg_0x404ac820, message_t *arg_0x404ac9d0){
#line 57
  unsigned char result;
#line 57

#line 57
  result = RF230ActiveMessageP__SoftwareAckConfig__verifyAckPacket(arg_0x404ac820, arg_0x404ac9d0);
#line 57

#line 57
  return result;
#line 57
}
#line 57
# 120 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SoftwareAckLayerP.nc"
static inline   bool SoftwareAckLayerP__SubReceive__header(message_t *msg)
{
  if (SoftwareAckLayerP__SoftwareAckConfig__isAckPacket(msg)) {
    return SoftwareAckLayerP__state == SoftwareAckLayerP__STATE_ACK_WAIT && SoftwareAckLayerP__SoftwareAckConfig__verifyAckPacket(SoftwareAckLayerP__txMsg, msg);
    }
  else {
#line 125
    return SoftwareAckLayerP__RadioReceive__header(msg);
    }
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
inline static   bool RF230LayerP__RadioReceive__header(message_t *arg_0x40782c10){
#line 35
  unsigned char result;
#line 35

#line 35
  result = SoftwareAckLayerP__SubReceive__header(arg_0x40782c10);
#line 35

#line 35
  return result;
#line 35
}
#line 35
# 75 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   uint8_t RF230ActiveMessageP__RF230Config__getHeaderLength(void)
{

  return 7;
}

# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230Config.nc"
inline static   uint8_t RF230LayerP__RF230Config__getHeaderLength(void){
#line 55
  unsigned char result;
#line 55

#line 55
  result = RF230ActiveMessageP__RF230Config__getHeaderLength();
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline   ieee154_header_t *IEEE154PacketP__IEEE154Packet__getHeader(message_t *msg)
{
  return IEEE154PacketP__getHeader(msg);
}

# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static   ieee154_header_t *RF230ActiveMessageP__IEEE154Packet__getHeader(message_t *arg_0x404ccca0){
#line 39
  nx_struct ieee154_header_t *result;
#line 39

#line 39
  result = IEEE154PacketP__IEEE154Packet__getHeader(arg_0x404ccca0);
#line 39

#line 39
  return result;
#line 39
}
#line 39
# 65 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   uint8_t *RF230ActiveMessageP__RF230Config__getPayload(message_t *msg)
{
  return (uint8_t *)RF230ActiveMessageP__IEEE154Packet__getHeader(msg) + 1;
}

# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230Config.nc"
inline static   uint8_t *RF230LayerP__RF230Config__getPayload(message_t *arg_0x404a4f18){
#line 46
  unsigned char *result;
#line 46

#line 46
  result = RF230ActiveMessageP__RF230Config__getPayload(arg_0x404a4f18);
#line 46

#line 46
  return result;
#line 46
}
#line 46
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static   void RF230ActiveMessageP__IEEE154Packet__setLength(message_t *arg_0x404cb708, uint8_t arg_0x404cb890){
#line 49
  IEEE154PacketP__IEEE154Packet__setLength(arg_0x404cb708, arg_0x404cb890);
#line 49
}
#line 49
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   void RF230ActiveMessageP__RF230Config__setLength(message_t *msg, uint8_t len)
{
  RF230ActiveMessageP__IEEE154Packet__setLength(msg, len);
}

# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230Config.nc"
inline static   void RF230LayerP__RF230Config__setLength(message_t *arg_0x404a4888, uint8_t arg_0x404a4a10){
#line 39
  RF230ActiveMessageP__RF230Config__setLength(arg_0x404a4888, arg_0x404a4a10);
#line 39
}
#line 39
# 81 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   uint8_t RF230ActiveMessageP__RF230Config__getMaxLength(void)
{

  return sizeof(rf230packet_header_t ) - 1 + 28 + sizeof(ieee154_footer_t );
}

# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230Config.nc"
inline static   uint8_t RF230LayerP__RF230Config__getMaxLength(void){
#line 60
  unsigned char result;
#line 60

#line 60
  result = RF230ActiveMessageP__RF230Config__getMaxLength();
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 121 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static __inline   uint8_t HplRF230P__HplRF230__spiWrite(uint8_t data)
{



  * (volatile uint8_t *)(0X2E + 0x20) = data;
  while (!(* (volatile uint8_t *)(0x2D + 0x20) & 0x80)) 
    ;

  return * (volatile uint8_t *)(0X2E + 0x20);
}

# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230.nc"
inline static   uint8_t RF230LayerP__HplRF230__spiWrite(uint8_t arg_0x408aaae0){
#line 59
  unsigned char result;
#line 59

#line 59
  result = HplRF230P__HplRF230__spiWrite(arg_0x408aaae0);
#line 59

#line 59
  return result;
#line 59
}
#line 59
# 541 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
static __inline void RF230LayerP__downloadMessage(void)
{
  uint8_t length;
  uint16_t crc;

  RF230LayerP__SELN__clr();
  RF230LayerP__HplRF230__spiWrite(RF230_CMD_FRAME_READ);


  length = RF230LayerP__HplRF230__spiWrite(0);


  if (length >= 3 && length <= RF230LayerP__RF230Config__getMaxLength()) 
    {
      uint8_t read;
      uint8_t *data;


      RF230LayerP__HplRF230__spiSplitWrite(0);

      RF230LayerP__RF230Config__setLength(RF230LayerP__rxMsg, length);
      data = RF230LayerP__RF230Config__getPayload(RF230LayerP__rxMsg);
      crc = 0;


      length -= 2;

      read = RF230LayerP__RF230Config__getHeaderLength();
      if (length < read) {
        read = length;
        }
      length -= read;

      do {
          crc = RF230LayerP__HplRF230__crcByte(crc, * data++ = RF230LayerP__HplRF230__spiSplitReadWrite(0));
        }
      while (--read != 0);

      if (RF230LayerP__RadioReceive__header(RF230LayerP__rxMsg)) 
        {
          while (length-- != 0) 
            crc = RF230LayerP__HplRF230__crcByte(crc, * data++ = RF230LayerP__HplRF230__spiSplitReadWrite(0));

          crc = RF230LayerP__HplRF230__crcByte(crc, RF230LayerP__HplRF230__spiSplitReadWrite(0));
          crc = RF230LayerP__HplRF230__crcByte(crc, RF230LayerP__HplRF230__spiSplitReadWrite(0));

          RF230LayerP__PacketLinkQuality__set(RF230LayerP__rxMsg, RF230LayerP__HplRF230__spiSplitRead());
        }
      else {
        crc = 1;
        }
    }
  else {
#line 593
    crc = 1;
    }
  RF230LayerP__SELN__set();
  RF230LayerP__state = RF230LayerP__STATE_RX_ON;
#line 613
  RF230LayerP__cmd = RF230LayerP__CMD_NONE;


  if (crc == 0) {
    RF230LayerP__rxMsg = RF230LayerP__RadioReceive__receive(RF230LayerP__rxMsg);
    }
}

# 132 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   uint16_t RF230ActiveMessageP__SoftwareAckConfig__getAckTimeout(void)
{
  return (uint16_t )(800 * (7372800UL / 8 / 32 * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 1000000.0));
}

# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SoftwareAckConfig.nc"
inline static   uint16_t SoftwareAckLayerP__SoftwareAckConfig__getAckTimeout(void){
#line 32
  unsigned short result;
#line 32

#line 32
  result = RF230ActiveMessageP__SoftwareAckConfig__getAckTimeout();
#line 32

#line 32
  return result;
#line 32
}
#line 32
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
inline static   void SoftwareAckLayerP__RadioAlarm__wait(uint16_t arg_0x404d5608){
#line 38
  RadioAlarmP__RadioAlarm__wait(2U, arg_0x404d5608);
#line 38
}
#line 38
#line 33
inline static   bool SoftwareAckLayerP__RadioAlarm__isFree(void){
#line 33
  unsigned char result;
#line 33

#line 33
  result = RadioAlarmP__RadioAlarm__isFree(2U);
#line 33

#line 33
  return result;
#line 33
}
#line 33
# 128 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline   bool IEEE154PacketP__IEEE154Packet__getAckRequired(message_t *msg)
{
  return __nesc_ntoh_leuint16((unsigned char *)&IEEE154PacketP__getHeader(msg)->fcf) & (1 << IEEE154_FCF_ACK_REQ);
}

#line 218
static inline   bool IEEE154PacketP__IEEE154Packet__requiresAckWait(message_t *msg)
{
  return IEEE154PacketP__IEEE154Packet__getAckRequired(msg)
   && IEEE154PacketP__IEEE154Packet__isDataFrame(msg)
   && IEEE154PacketP__IEEE154Packet__getDestAddr(msg) != 0xFFFF;
}

# 190 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static   bool RF230ActiveMessageP__IEEE154Packet__requiresAckWait(message_t *arg_0x404d9030){
#line 190
  unsigned char result;
#line 190

#line 190
  result = IEEE154PacketP__IEEE154Packet__requiresAckWait(arg_0x404d9030);
#line 190

#line 190
  return result;
#line 190
}
#line 190
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   bool RF230ActiveMessageP__SoftwareAckConfig__requiresAckWait(message_t *msg)
{
  return RF230ActiveMessageP__IEEE154Packet__requiresAckWait(msg);
}

# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SoftwareAckConfig.nc"
inline static   bool SoftwareAckLayerP__SoftwareAckConfig__requiresAckWait(message_t *arg_0x404ad620){
#line 38
  unsigned char result;
#line 38

#line 38
  result = RF230ActiveMessageP__SoftwareAckConfig__requiresAckWait(arg_0x404ad620);
#line 38

#line 38
  return result;
#line 38
}
#line 38
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SoftwareAckLayerP.nc"
static inline   void SoftwareAckLayerP__SubSend__sendDone(error_t error)
{
  if (SoftwareAckLayerP__state == SoftwareAckLayerP__STATE_ACK_SEND) 
    {

      for (; 0; ) ;

      SoftwareAckLayerP__state = SoftwareAckLayerP__STATE_READY;
    }
  else 
    {
      for (; 0; ) ;
      for (; 0; ) ;

      if (error == SUCCESS && SoftwareAckLayerP__SoftwareAckConfig__requiresAckWait(SoftwareAckLayerP__txMsg) && SoftwareAckLayerP__RadioAlarm__isFree()) 
        {
          SoftwareAckLayerP__RadioAlarm__wait(SoftwareAckLayerP__SoftwareAckConfig__getAckTimeout());
          SoftwareAckLayerP__state = SoftwareAckLayerP__STATE_ACK_WAIT;
        }
      else 
        {
          SoftwareAckLayerP__state = SoftwareAckLayerP__STATE_READY;
          SoftwareAckLayerP__RadioSend__sendDone(error);
        }
    }
}

# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
inline static   void RF230LayerP__RadioSend__sendDone(error_t arg_0x407849f8){
#line 45
  SoftwareAckLayerP__SubSend__sendDone(arg_0x407849f8);
#line 45
}
#line 45
# 152 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static inline   void RF230PacketP__PacketTimeStampRadio__clear(message_t *msg)
{
  RF230PacketP__getMeta(msg)->flags &= ~RF230PACKET_TIMESTAMP;
}

# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
inline static   void RF230LayerP__PacketTimeStamp__clear(message_t *arg_0x4047b5c8){
#line 59
  RF230PacketP__PacketTimeStampRadio__clear(arg_0x4047b5c8);
#line 59
}
#line 59








inline static   void RF230LayerP__PacketTimeStamp__set(message_t *arg_0x4047baf0, RF230LayerP__PacketTimeStamp__size_type arg_0x4047bc80){
#line 67
  RF230PacketP__PacketTimeStampRadio__set(arg_0x4047baf0, arg_0x4047bc80);
#line 67
}
#line 67
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC$0__Counter__size_type /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC$0__Counter__get(void){
#line 53
  unsigned long result;
#line 53

#line 53
  result = /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__Counter__get();
#line 53

#line 53
  return result;
#line 53
}
#line 53
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline   uint32_t /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC$0__LocalTime__get(void)
{
  return /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC$0__Counter__get();
}

# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/LocalTime.nc"
inline static   uint32_t RF230LayerP__LocalTime__get(void){
#line 50
  unsigned long result;
#line 50

#line 50
  result = /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC$0__LocalTime__get();
#line 50

#line 50
  return result;
#line 50
}
#line 50
# 227 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static inline   void RF230PacketP__PacketRSSI__clear(message_t *msg)
{
  RF230PacketP__getMeta(msg)->flags &= ~RF230PACKET_RSSI;
}

# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/PacketField.nc"
inline static   void RF230LayerP__PacketRSSI__clear(message_t *arg_0x40497598){
#line 40
  RF230PacketP__PacketRSSI__clear(arg_0x40497598);
#line 40
}
#line 40
# 232 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static inline   void RF230PacketP__PacketRSSI__set(message_t *msg, uint8_t value)
{
  RF230PacketP__getMeta(msg)->flags &= ~RF230PACKET_TXPOWER;
  RF230PacketP__getMeta(msg)->flags |= RF230PACKET_RSSI;
  RF230PacketP__getMeta(msg)->power = value;
}

# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/PacketField.nc"
inline static   void RF230LayerP__PacketRSSI__set(message_t *arg_0x40497a80, RF230LayerP__PacketRSSI__value_type arg_0x40497c10){
#line 46
  RF230PacketP__PacketRSSI__set(arg_0x40497a80, arg_0x40497c10);
#line 46
}
#line 46
# 635 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
static inline void RF230LayerP__serviceRadio(void)
{
  if (RF230LayerP__isSpiAcquired()) 
    {
      uint16_t time;
      uint32_t time32;
      uint8_t irq;
      uint8_t temp;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 644
        time = RF230LayerP__capturedTime;
#line 644
        __nesc_atomic_end(__nesc_atomic); }
      RF230LayerP__radioIrq = FALSE;
      irq = RF230LayerP__readRegister(RF230_IRQ_STATUS);
#line 666
      if (irq & RF230_IRQ_PLL_LOCK) 
        {
          if (RF230LayerP__cmd == RF230LayerP__CMD_TURNON || RF230LayerP__cmd == RF230LayerP__CMD_CHANNEL) 
            {
              for (; 0; ) ;

              RF230LayerP__state = RF230LayerP__STATE_RX_ON;
              RF230LayerP__cmd = RF230LayerP__CMD_SIGNAL_DONE;
            }
          else {
#line 675
            if (RF230LayerP__cmd == RF230LayerP__CMD_TRANSMIT) 
              {
                for (; 0; ) ;
              }
            else {
              for (; 0; ) ;
              }
            }
        }
#line 683
      if (irq & RF230_IRQ_RX_START) 
        {
          if (RF230LayerP__cmd == RF230LayerP__CMD_CCA) 
            {
              RF230LayerP__RadioCCA__done(FAIL);
              RF230LayerP__cmd = RF230LayerP__CMD_NONE;
            }

          if (RF230LayerP__cmd == RF230LayerP__CMD_NONE) 
            {
              for (; 0; ) ;


              if (irq == RF230_IRQ_RX_START) 
                {
                  temp = RF230LayerP__readRegister(RF230_PHY_RSSI) & RF230_RSSI_MASK;
                  RF230LayerP__rssiBusy += temp - (RF230LayerP__rssiBusy >> 2);

                  RF230LayerP__PacketRSSI__set(RF230LayerP__rxMsg, temp);
                }
              else 
                {
                  RF230LayerP__PacketRSSI__clear(RF230LayerP__rxMsg);
                }










              if (irq == RF230_IRQ_RX_START) 
                {
                  time32 = RF230LayerP__LocalTime__get();
                  time32 += (int16_t )(time - RF230LayerP__RX_SFD_DELAY) - (int16_t )time32;
                  RF230LayerP__PacketTimeStamp__set(RF230LayerP__rxMsg, time32);
                }
              else {
                RF230LayerP__PacketTimeStamp__clear(RF230LayerP__rxMsg);
                }
              RF230LayerP__cmd = RF230LayerP__CMD_RECEIVE;
            }
          else {
            for (; 0; ) ;
            }
        }
      if (irq & RF230_IRQ_TRX_END) 
        {
          if (RF230LayerP__cmd == RF230LayerP__CMD_TRANSMIT) 
            {
              for (; 0; ) ;

              RF230LayerP__state = RF230LayerP__STATE_RX_ON;
              RF230LayerP__cmd = RF230LayerP__CMD_NONE;
              RF230LayerP__RadioSend__sendDone(SUCCESS);


              for (; 0; ) ;
            }
          else {
#line 745
            if (RF230LayerP__cmd == RF230LayerP__CMD_RECEIVE) 
              {
                for (; 0; ) ;






                if (RF230LayerP__state == RF230LayerP__STATE_PLL_ON_2_RX_ON) 
                  {
                    for (; 0; ) ;

                    RF230LayerP__writeRegister(RF230_TRX_STATE, RF230_RX_ON);
                    RF230LayerP__state = RF230LayerP__STATE_RX_ON;
                  }
                else 
                  {

                    RF230LayerP__rssiClear += (RF230LayerP__readRegister(RF230_PHY_RSSI) & RF230_RSSI_MASK) - (RF230LayerP__rssiClear >> 2);
                  }

                RF230LayerP__cmd = RF230LayerP__CMD_DOWNLOAD;
              }
            else {
              for (; 0; ) ;
              }
            }
        }
    }
}











static inline   void RF230LayerP__Tasklet__run(void)
{
  if (RF230LayerP__radioIrq) {
    RF230LayerP__serviceRadio();
    }
  if (RF230LayerP__cmd != RF230LayerP__CMD_NONE) 
    {
      if (RF230LayerP__cmd == RF230LayerP__CMD_DOWNLOAD) {
        RF230LayerP__downloadMessage();
        }
      else {
#line 796
        if (RF230LayerP__CMD_TURNOFF <= RF230LayerP__cmd && RF230LayerP__cmd <= RF230LayerP__CMD_TURNON) {
          RF230LayerP__changeState();
          }
        else {
#line 798
          if (RF230LayerP__cmd == RF230LayerP__CMD_CHANNEL) {
            RF230LayerP__changeChannel();
            }
          }
        }
#line 801
      if (RF230LayerP__cmd == RF230LayerP__CMD_SIGNAL_DONE) 
        {
          RF230LayerP__cmd = RF230LayerP__CMD_NONE;
          RF230LayerP__RadioState__done();
        }
    }

  if (RF230LayerP__cmd == RF230LayerP__CMD_NONE && RF230LayerP__state == RF230LayerP__STATE_RX_ON && !RF230LayerP__radioIrq) {
    RF230LayerP__RadioSend__ready();
    }
  if (RF230LayerP__cmd == RF230LayerP__CMD_NONE) {
    RF230LayerP__SpiResource__release();
    }
}

# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
inline static   void TaskletC__Tasklet__run(void){
#line 37
  RF230LayerP__Tasklet__run();
#line 37
  TrafficMonitorLayerP__Tasklet__run();
#line 37
  MessageBufferLayerP__Tasklet__run();
#line 37
  RadioAlarmP__Tasklet__run();
#line 37
}
#line 37
# 147 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline   uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__Resource__isOwner(uint8_t id)
#line 147
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 148
    {
      if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__resId == id && /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__RES_BUSY) {
          unsigned char __nesc_temp = 
#line 149
          TRUE;

          {
#line 149
            __nesc_atomic_end(__nesc_atomic); 
#line 149
            return __nesc_temp;
          }
        }
      else 
#line 150
        {
          unsigned char __nesc_temp = 
#line 150
          FALSE;

          {
#line 150
            __nesc_atomic_end(__nesc_atomic); 
#line 150
            return __nesc_temp;
          }
        }
    }
#line 153
    __nesc_atomic_end(__nesc_atomic); }
}

# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   bool Atm128SpiP__ResourceArbiter__isOwner(uint8_t arg_0x4092b790){
#line 118
  unsigned char result;
#line 118

#line 118
  result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__Resource__isOwner(arg_0x4092b790);
#line 118

#line 118
  return result;
#line 118
}
#line 118
# 332 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline   uint8_t Atm128SpiP__Resource__isOwner(uint8_t id)
#line 332
{
  return Atm128SpiP__ResourceArbiter__isOwner(id);
}

# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   bool RF230LayerP__SpiResource__isOwner(void){
#line 118
  unsigned char result;
#line 118

#line 118
  result = Atm128SpiP__Resource__isOwner(0U);
#line 118

#line 118
  return result;
#line 118
}
#line 118
# 170 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline    void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__ResourceConfigure__default__configure(uint8_t id)
#line 170
{
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__ResourceConfigure__configure(uint8_t arg_0x409b7428){
#line 49
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__ResourceConfigure__default__configure(arg_0x409b7428);
#line 49
}
#line 49
# 168 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline    void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__ResourceRequested__default__immediateRequested(uint8_t id)
#line 168
{
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__ResourceRequested__immediateRequested(uint8_t arg_0x409b8860){
#line 51
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__ResourceRequested__default__immediateRequested(arg_0x409b8860);
#line 51
}
#line 51
# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__Resource__immediateRequest(uint8_t id)
#line 84
{
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__ResourceRequested__immediateRequested(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 86
    {
      if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__RES_IDLE) {
          /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__RES_BUSY;
          /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__resId = id;
          /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__ResourceConfigure__configure(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__resId);
          {
            unsigned char __nesc_temp = 
#line 91
            SUCCESS;

            {
#line 91
              __nesc_atomic_end(__nesc_atomic); 
#line 91
              return __nesc_temp;
            }
          }
        }
#line 93
      {
        unsigned char __nesc_temp = 
#line 93
        FAIL;

        {
#line 93
          __nesc_atomic_end(__nesc_atomic); 
#line 93
          return __nesc_temp;
        }
      }
    }
#line 96
    __nesc_atomic_end(__nesc_atomic); }
}

# 87 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t Atm128SpiP__ResourceArbiter__immediateRequest(uint8_t arg_0x4092b790){
#line 87
  unsigned char result;
#line 87

#line 87
  result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__Resource__immediateRequest(arg_0x4092b790);
#line 87

#line 87
  return result;
#line 87
}
#line 87
# 305 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline   error_t Atm128SpiP__Resource__immediateRequest(uint8_t id)
#line 305
{
  error_t result = Atm128SpiP__ResourceArbiter__immediateRequest(id);

#line 307
  if (result == SUCCESS) {
      Atm128SpiP__startSpi();
    }
  return result;
}

# 87 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t RF230LayerP__SpiResource__immediateRequest(void){
#line 87
  unsigned char result;
#line 87

#line 87
  result = Atm128SpiP__Resource__immediateRequest(0U);
#line 87

#line 87
  return result;
#line 87
}
#line 87
# 141 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/McuSleepC.nc"
static inline   void McuSleepC__McuPowerState__update(void)
#line 141
{
}

# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuPowerState.nc"
inline static   void HplAtm128SpiP__Mcu__update(void){
#line 44
  McuSleepC__McuPowerState__update();
#line 44
}
#line 44
# 156 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline   void HplAtm128SpiP__SPI__setMasterBit(bool isMaster)
#line 156
{
  if (isMaster) {
      * (volatile uint8_t *)(0x2C + 0x20) |= 1 << 4;
    }
  else {
      * (volatile uint8_t *)(0x2C + 0x20) &= ~(1 << 4);
    }
}

# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP$9__IO__makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)36U |= 1 << 1;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplAtm128SpiP__SCK__makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP$9__IO__makeOutput();
#line 35
}
#line 35
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP$11__IO__makeInput(void)
#line 50
{
#line 50
  * (volatile uint8_t *)36U &= ~(1 << 3);
}

# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplAtm128SpiP__MISO__makeInput(void){
#line 33
  /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP$11__IO__makeInput();
#line 33
}
#line 33
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP$10__IO__makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)36U |= 1 << 2;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplAtm128SpiP__MOSI__makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP$10__IO__makeOutput();
#line 35
}
#line 35
# 79 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline   void HplAtm128SpiP__SPI__initMaster(void)
#line 79
{
  HplAtm128SpiP__MOSI__makeOutput();
  HplAtm128SpiP__MISO__makeInput();
  HplAtm128SpiP__SCK__makeOutput();
  HplAtm128SpiP__SPI__setMasterBit(TRUE);
}

# 66 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static   void Atm128SpiP__Spi__initMaster(void){
#line 66
  HplAtm128SpiP__SPI__initMaster();
#line 66
}
#line 66
# 213 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline   void HplAtm128SpiP__SPI__setMasterDoubleSpeed(bool on)
#line 213
{
  if (on) {
      * (volatile uint8_t *)(0x2D + 0x20) |= 1 << 0;
    }
  else {
      * (volatile uint8_t *)(0x2D + 0x20) &= ~(1 << 0);
    }
}

# 125 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static   void Atm128SpiP__Spi__setMasterDoubleSpeed(bool arg_0x409429f8){
#line 125
  HplAtm128SpiP__SPI__setMasterDoubleSpeed(arg_0x409429f8);
#line 125
}
#line 125
# 169 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline   void HplAtm128SpiP__SPI__setClockPolarity(bool highWhenIdle)
#line 169
{
  if (highWhenIdle) {
      * (volatile uint8_t *)(0x2C + 0x20) |= 1 << 3;
    }
  else {
      * (volatile uint8_t *)(0x2C + 0x20) &= ~(1 << 3);
    }
}

# 108 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static   void Atm128SpiP__Spi__setClockPolarity(bool arg_0x409458c0){
#line 108
  HplAtm128SpiP__SPI__setClockPolarity(arg_0x409458c0);
#line 108
}
#line 108
# 183 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline   void HplAtm128SpiP__SPI__setClockPhase(bool sampleOnTrailing)
#line 183
{
  if (sampleOnTrailing) {
      * (volatile uint8_t *)(0x2C + 0x20) |= 1 << 2;
    }
  else {
      * (volatile uint8_t *)(0x2C + 0x20) &= ~(1 << 2);
    }
}

# 111 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static   void Atm128SpiP__Spi__setClockPhase(bool arg_0x409440c0){
#line 111
  HplAtm128SpiP__SPI__setClockPhase(arg_0x409440c0);
#line 111
}
#line 111
# 200 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline   void HplAtm128SpiP__SPI__setClock(uint8_t v)
#line 200
{
  v &= 1 | 0;
  * (volatile uint8_t *)(0x2C + 0x20) = (* (volatile uint8_t *)(0x2C + 0x20) & ~(1 | 0)) | v;
}

# 114 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static   void Atm128SpiP__Spi__setClock(uint8_t arg_0x40944888){
#line 114
  HplAtm128SpiP__SPI__setClock(arg_0x40944888);
#line 114
}
#line 114
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
inline static   bool Atm128SpiP__ArbiterInfo__inUse(void){
#line 80
  unsigned char result;
#line 80

#line 80
  result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__ArbiterInfo__inUse();
#line 80

#line 80
  return result;
#line 80
}
#line 80
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline   bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__FcfsQueue__isEnqueued(resource_client_id_t id)
#line 54
{
  return /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__resQ[id] != /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__NO_ENTRY || /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__qTail == id;
}

#line 72
static inline   error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__FcfsQueue__enqueue(resource_client_id_t id)
#line 72
{
  /* atomic removed: atomic calls only */
#line 73
  {
    if (!/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__FcfsQueue__isEnqueued(id)) {
        if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__NO_ENTRY) {
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__qHead = id;
          }
        else {
#line 78
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__resQ[/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__qTail] = id;
          }
#line 79
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__qTail = id;
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
inline static   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__Queue__enqueue(resource_client_id_t arg_0x409a1360){
#line 69
  unsigned char result;
#line 69

#line 69
  result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__FcfsQueue__enqueue(arg_0x409a1360);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__grantedTask__postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP__TaskBasic__postTask(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__grantedTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 166 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline    void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__ResourceRequested__default__requested(uint8_t id)
#line 166
{
}

# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__ResourceRequested__requested(uint8_t arg_0x409b8860){
#line 43
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__ResourceRequested__default__requested(arg_0x409b8860);
#line 43
}
#line 43
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__Resource__request(uint8_t id)
#line 71
{
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__ResourceRequested__requested(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 73
    {
      if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__RES_IDLE) {
          /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__RES_GRANTING;
          /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__reqResId = id;
          /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__grantedTask__postTask();
          {
            unsigned char __nesc_temp = 
#line 78
            SUCCESS;

            {
#line 78
              __nesc_atomic_end(__nesc_atomic); 
#line 78
              return __nesc_temp;
            }
          }
        }
#line 80
      {
        unsigned char __nesc_temp = 
#line 80
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__Queue__enqueue(id);

        {
#line 80
          __nesc_atomic_end(__nesc_atomic); 
#line 80
          return __nesc_temp;
        }
      }
    }
#line 83
    __nesc_atomic_end(__nesc_atomic); }
}

# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t Atm128SpiP__ResourceArbiter__request(uint8_t arg_0x4092b790){
#line 78
  unsigned char result;
#line 78

#line 78
  result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__Resource__request(arg_0x4092b790);
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   /*CounterOne16C.NCounter*/Atm128CounterC$0__Timer__timer_size /*CounterOne16C.NCounter*/Atm128CounterC$0__Timer__get(void){
#line 52
  unsigned short result;
#line 52

#line 52
  result = HplAtm1281Timer1P__Timer__get();
#line 52

#line 52
  return result;
#line 52
}
#line 52
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline   /*CounterOne16C.NCounter*/Atm128CounterC$0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC$0__Counter__get(void)
{
  return /*CounterOne16C.NCounter*/Atm128CounterC$0__Timer__get();
}

# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__CounterFrom__size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__CounterFrom__get(void){
#line 53
  unsigned short result;
#line 53

#line 53
  result = /*CounterOne16C.NCounter*/Atm128CounterC$0__Counter__get();
#line 53

#line 53
  return result;
#line 53
}
#line 53
# 125 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline   uint8_t HplAtm1281Timer1P__TimerCtrl__getInterruptFlag(void)
#line 125
{
  return * (volatile uint8_t *)(0x16 + 0x20);
}

#line 156
static inline   bool HplAtm1281Timer1P__Timer__test(void)
#line 156
{
  return ((Atm128_TIFR_t )HplAtm1281Timer1P__TimerCtrl__getInterruptFlag()).bits.tov;
}

# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   bool /*CounterOne16C.NCounter*/Atm128CounterC$0__Timer__test(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = HplAtm1281Timer1P__Timer__test();
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline   bool /*CounterOne16C.NCounter*/Atm128CounterC$0__Counter__isOverflowPending(void)
{
  return /*CounterOne16C.NCounter*/Atm128CounterC$0__Timer__test();
}

# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   bool /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__CounterFrom__isOverflowPending(void){
#line 60
  unsigned char result;
#line 60

#line 60
  result = /*CounterOne16C.NCounter*/Atm128CounterC$0__Counter__isOverflowPending();
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 194 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline   void HplAtm1281Timer1P__CompareA__set(uint16_t t)
#line 194
{
#line 194
  * (volatile uint16_t *)0x88 = t;
}

# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__HplAtm128Compare__set(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__HplAtm128Compare__size_type arg_0x405db088){
#line 45
  HplAtm1281Timer1P__CompareA__set(arg_0x405db088);
#line 45
}
#line 45
# 140 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline   void HplAtm1281Timer1P__CompareA__reset(void)
#line 140
{
#line 140
  * (volatile uint8_t *)(0x16 + 0x20) = 1 << 1;
}

# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__HplAtm128Compare__reset(void){
#line 53
  HplAtm1281Timer1P__CompareA__reset();
#line 53
}
#line 53
# 146 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline   void HplAtm1281Timer1P__CompareA__start(void)
#line 146
{
#line 146
  * (volatile uint8_t *)0x6F |= 1 << 1;
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__HplAtm128Compare__start(void){
#line 56
  HplAtm1281Timer1P__CompareA__start();
#line 56
}
#line 56
# 103 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static   bool RF230ActiveMessageP__IEEE154Packet__getAckRequired(message_t *arg_0x404d4010){
#line 103
  unsigned char result;
#line 103

#line 103
  result = IEEE154PacketP__IEEE154Packet__getAckRequired(arg_0x404d4010);
#line 103

#line 103
  return result;
#line 103
}
#line 103
# 170 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static inline   void MessageBufferLayerP__RadioSend__sendDone(error_t error)
{
  for (; 0; ) ;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 174
    MessageBufferLayerP__txError = error;
#line 174
    __nesc_atomic_end(__nesc_atomic); }
  MessageBufferLayerP__sendTask__postTask();
}

# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
inline static   void TrafficMonitorLayerP__RadioSend__sendDone(error_t arg_0x407849f8){
#line 45
  MessageBufferLayerP__RadioSend__sendDone(arg_0x407849f8);
#line 45
}
#line 45
# 70 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static __inline rf230packet_metadata_t *RF230ActiveMessageP__getMeta(message_t *msg)
{
  return (rf230packet_metadata_t *)msg->metadata;
}

# 193 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static inline   bool RF230PacketP__PacketTransmitPower__isSet(message_t *msg)
{
  return RF230PacketP__getMeta(msg)->flags & RF230PACKET_TXPOWER;
}

# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/PacketField.nc"
inline static   bool RF230LayerP__PacketTransmitPower__isSet(message_t *arg_0x40498a58){
#line 29
  unsigned char result;
#line 29

#line 29
  result = RF230PacketP__PacketTransmitPower__isSet(arg_0x40498a58);
#line 29

#line 29
  return result;
#line 29
}
#line 29
# 198 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static inline   uint8_t RF230PacketP__PacketTransmitPower__get(message_t *msg)
{
  return RF230PacketP__getMeta(msg)->power;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/PacketField.nc"
inline static   RF230LayerP__PacketTransmitPower__value_type RF230LayerP__PacketTransmitPower__get(message_t *arg_0x40497010){
#line 35
  unsigned char result;
#line 35

#line 35
  result = RF230PacketP__PacketTransmitPower__get(arg_0x40497010);
#line 35

#line 35
  return result;
#line 35
}
#line 35
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   bool RF230ActiveMessageP__RF230Config__requiresRssiCca(message_t *msg)
{
  return RF230ActiveMessageP__IEEE154Packet__isDataFrame(msg);
}

# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230Config.nc"
inline static   bool RF230LayerP__RF230Config__requiresRssiCca(message_t *arg_0x404af190){
#line 72
  unsigned char result;
#line 72

#line 72
  result = RF230ActiveMessageP__RF230Config__requiresRssiCca(arg_0x404af190);
#line 72

#line 72
  return result;
#line 72
}
#line 72
# 241 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static inline   bool RF230PacketP__PacketTimeSyncOffset__isSet(message_t *msg)
{
  return RF230PacketP__getMeta(msg)->flags & RF230PACKET_TIMESYNC;
}

# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/PacketField.nc"
inline static   bool RF230LayerP__PacketTimeSyncOffset__isSet(message_t *arg_0x40498a58){
#line 29
  unsigned char result;
#line 29

#line 29
  result = RF230PacketP__PacketTimeSyncOffset__isSet(arg_0x40498a58);
#line 29

#line 29
  return result;
#line 29
}
#line 29
# 246 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static inline   uint8_t RF230PacketP__PacketTimeSyncOffset__get(message_t *msg)
{
  return RF230PacketP__IEEE154Packet__getLength(msg) - RF230PacketP__PACKET_LENGTH_INCREASE - sizeof(timesync_absolute_t );
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/PacketField.nc"
inline static   RF230LayerP__PacketTimeSyncOffset__value_type RF230LayerP__PacketTimeSyncOffset__get(message_t *arg_0x40497010){
#line 35
  unsigned char result;
#line 35

#line 35
  result = RF230PacketP__PacketTimeSyncOffset__get(arg_0x40497010);
#line 35

#line 35
  return result;
#line 35
}
#line 35
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
inline static   uint16_t RF230LayerP__RadioAlarm__getNow(void){
#line 53
  unsigned short result;
#line 53

#line 53
  result = RadioAlarmP__RadioAlarm__getNow(3U);
#line 53

#line 53
  return result;
#line 53
}
#line 53
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static   uint8_t RF230ActiveMessageP__IEEE154Packet__getLength(message_t *arg_0x404cb1f8){
#line 44
  unsigned char result;
#line 44

#line 44
  result = IEEE154PacketP__IEEE154Packet__getLength(arg_0x404cb1f8);
#line 44

#line 44
  return result;
#line 44
}
#line 44
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   uint8_t RF230ActiveMessageP__RF230Config__getLength(message_t *msg)
{
  return RF230ActiveMessageP__IEEE154Packet__getLength(msg);
}

# 34 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230Config.nc"
inline static   uint8_t RF230LayerP__RF230Config__getLength(message_t *arg_0x404a4300){
#line 34
  unsigned char result;
#line 34

#line 34
  result = RF230ActiveMessageP__RF230Config__getLength(arg_0x404a4300);
#line 34

#line 34
  return result;
#line 34
}
#line 34
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

#line 326
static __inline int32_t __nesc_hton_int32(void *target, int32_t value)
#line 326
{
#line 326
  __nesc_hton_uint32(target, value);
#line 326
  return value;
}

#line 294
static __inline uint32_t __nesc_ntoh_uint32(const void *source)
#line 294
{
  const uint8_t *base = source;

#line 296
  return ((((uint32_t )base[0] << 24) | (
  (uint32_t )base[1] << 16)) | (
  (uint32_t )base[2] << 8)) | base[3];
}

#line 326
static __inline int32_t __nesc_ntoh_int32(const void *source)
#line 326
{
#line 326
  return __nesc_ntoh_uint32(source);
}

# 115 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/UniqueLayerP.nc"
static inline   void UniqueLayerP__Neighborhood__evicted(uint8_t index)
#line 115
{
}

# 195 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
static inline   void TrafficMonitorLayerP__Neighborhood__evicted(uint8_t index)
#line 195
{
}

# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Neighborhood.nc"
inline static   void NeighborhoodP__Neighborhood__evicted(uint8_t arg_0x407e0010){
#line 69
  TrafficMonitorLayerP__Neighborhood__evicted(arg_0x407e0010);
#line 69
  UniqueLayerP__Neighborhood__evicted(arg_0x407e0010);
#line 69
}
#line 69
# 172 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline    void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__ResourceConfigure__default__unconfigure(uint8_t id)
#line 172
{
}

# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__ResourceConfigure__unconfigure(uint8_t arg_0x409b7428){
#line 55
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__ResourceConfigure__default__unconfigure(arg_0x409b7428);
#line 55
}
#line 55
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline   resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__FcfsQueue__dequeue(void)
#line 58
{
  /* atomic removed: atomic calls only */
#line 59
  {
    if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__qHead != /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__NO_ENTRY) {
        uint8_t id = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__qHead;

#line 62
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__qHead = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__resQ[/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__qHead];
        if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__NO_ENTRY) {
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__qTail = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__NO_ENTRY;
          }
#line 65
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__resQ[id] = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__NO_ENTRY;
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
      /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__NO_ENTRY;

#line 68
      return __nesc_temp;
    }
  }
}

# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static   resource_client_id_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__Queue__dequeue(void){
#line 60
  unsigned char result;
#line 60

#line 60
  result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__FcfsQueue__dequeue();
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline   bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__FcfsQueue__isEmpty(void)
#line 50
{
  return /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__NO_ENTRY;
}

# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static   bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__Queue__isEmpty(void){
#line 43
  unsigned char result;
#line 43

#line 43
  result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__FcfsQueue__isEmpty();
#line 43

#line 43
  return result;
#line 43
}
#line 43
# 97 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__Resource__release(uint8_t id)
#line 97
{
  bool released = FALSE;

#line 99
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 99
    {
      if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__RES_BUSY && /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__resId == id) {
          if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__Queue__isEmpty() == FALSE) {
              /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__reqResId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__Queue__dequeue();
              /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__RES_GRANTING;
              /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__grantedTask__postTask();
            }
          else {
              /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__NO_RES;
              /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__RES_IDLE;
            }
          released = TRUE;
        }
    }
#line 112
    __nesc_atomic_end(__nesc_atomic); }
  if (released == TRUE) {
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__ResourceConfigure__unconfigure(id);
      return SUCCESS;
    }
  return FAIL;
}

# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t Atm128SpiP__ResourceArbiter__release(uint8_t arg_0x4092b790){
#line 110
  unsigned char result;
#line 110

#line 110
  result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__Resource__release(arg_0x4092b790);
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuPowerState.nc"
inline static   void Atm128SpiP__McuPowerState__update(void){
#line 44
  McuSleepC__McuPowerState__update();
#line 44
}
#line 44
# 94 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline   void HplAtm128SpiP__SPI__sleep(void)
#line 94
{
}

# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static   void Atm128SpiP__Spi__sleep(void){
#line 72
  HplAtm128SpiP__SPI__sleep();
#line 72
}
#line 72
#line 99
inline static   void Atm128SpiP__Spi__enableSpi(bool arg_0x40947088){
#line 99
  HplAtm128SpiP__SPI__enableSpi(arg_0x40947088);
#line 99
}
#line 99
# 119 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP__stopSpi(void)
#line 119
{
  Atm128SpiP__Spi__enableSpi(FALSE);
  /* atomic removed: atomic calls only */
#line 121
  {
    Atm128SpiP__Spi__sleep();
  }
  Atm128SpiP__McuPowerState__update();
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t RandomCollisionLayerP__calcNextRandom__postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP__TaskBasic__postTask(RandomCollisionLayerP__calcNextRandom);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 229 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   uint16_t RF230ActiveMessageP__RandomCollisionConfig__getMinimumBackoff(void)
{
  return (uint16_t )(320 * (7372800UL / 8 / 32 * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 1000000.0));
}

# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RandomCollisionConfig.nc"
inline static   uint16_t RandomCollisionLayerP__Config__getMinimumBackoff(void){
#line 40
  unsigned short result;
#line 40

#line 40
  result = RF230ActiveMessageP__RandomCollisionConfig__getMinimumBackoff();
#line 40

#line 40
  return result;
#line 40
}
#line 40
# 87 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   uint8_t RF230ActiveMessageP__RF230Config__getDefaultChannel(void)
{
  return 11;
}

# 66 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230Config.nc"
inline static   uint8_t RF230LayerP__RF230Config__getDefaultChannel(void){
#line 66
  unsigned char result;
#line 66

#line 66
  result = RF230ActiveMessageP__RF230Config__getDefaultChannel();
#line 66

#line 66
  return result;
#line 66
}
#line 66
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/micaz/BusyWaitMicroC.nc"
static __inline   void BusyWaitMicroC__BusyWait__wait(uint16_t dt)
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
inline static   void RF230LayerP__BusyWait__wait(RF230LayerP__BusyWait__size_type arg_0x408a3bd0){
#line 55
  BusyWaitMicroC__BusyWait__wait(arg_0x408a3bd0);
#line 55
}
#line 55
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6__IO__clr(void)
#line 47
{
#line 47
  * (volatile uint8_t *)34U &= ~(1 << 6);
}

# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void RF230LayerP__RSTN__clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6__IO__clr();
#line 30
}
#line 30
# 210 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
static inline void RF230LayerP__initRadio(void)
{
  RF230LayerP__BusyWait__wait(510);

  RF230LayerP__RSTN__clr();
  RF230LayerP__SLP_TR__clr();
  RF230LayerP__BusyWait__wait(6);
  RF230LayerP__RSTN__set();

  RF230LayerP__writeRegister(RF230_TRX_CTRL_0, RF230_TRX_CTRL_0_VALUE);
  RF230LayerP__writeRegister(RF230_TRX_STATE, RF230_TRX_OFF);

  RF230LayerP__BusyWait__wait(510);

  RF230LayerP__writeRegister(RF230_IRQ_MASK, ((RF230_IRQ_TRX_UR | RF230_IRQ_PLL_LOCK) | RF230_IRQ_TRX_END) | RF230_IRQ_RX_START);
  RF230LayerP__writeRegister(RF230_CCA_THRES, RF230_CCA_THRES_VALUE);
  RF230LayerP__writeRegister(RF230_PHY_TX_PWR, RF230_TX_AUTO_CRC_ON | RF230_TX_PWR_DEFAULT);

  RF230LayerP__txPower = RF230_TX_PWR_DEFAULT;
  RF230LayerP__channel = RF230LayerP__RF230Config__getDefaultChannel() & RF230_CHANNEL_MASK;
  RF230LayerP__writeRegister(RF230_PHY_CC_CCA, RF230_CCA_MODE_VALUE | RF230LayerP__channel);

  RF230LayerP__SLP_TR__set();
  RF230LayerP__state = RF230LayerP__STATE_SLEEP;
}



static inline  void RF230LayerP__SpiResource__granted(void)
{
  RF230LayerP__SELN__makeOutput();
  RF230LayerP__SELN__set();

  if (RF230LayerP__state == RF230LayerP__STATE_P_ON) 
    {
      RF230LayerP__initRadio();
      RF230LayerP__SpiResource__release();
    }
  else {
    RF230LayerP__Tasklet__schedule();
    }
}

# 340 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline   void Atm128SpiP__Resource__default__granted(uint8_t id)
#line 340
{
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static  void Atm128SpiP__Resource__granted(uint8_t arg_0x4092d300){
#line 92
  switch (arg_0x4092d300) {
#line 92
    case 0U:
#line 92
      RF230LayerP__SpiResource__granted();
#line 92
      break;
#line 92
    default:
#line 92
      Atm128SpiP__Resource__default__granted(arg_0x4092d300);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 336 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline  void Atm128SpiP__ResourceArbiter__granted(uint8_t id)
#line 336
{
  Atm128SpiP__Resource__granted(id);
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static  void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__Resource__granted(uint8_t arg_0x409b9ee8){
#line 92
  Atm128SpiP__ResourceArbiter__granted(arg_0x409b9ee8);
#line 92
}
#line 92
# 154 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline  void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__grantedTask__runTask(void)
#line 154
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 155
    {
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__reqResId;
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__RES_BUSY;
    }
#line 158
    __nesc_atomic_end(__nesc_atomic); }
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__ResourceConfigure__configure(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__resId);
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__Resource__granted(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__resId);
}

# 262 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline    
#line 261
void Atm128SpiP__SpiPacket__default__sendDone(
uint8_t *_txbuffer, uint8_t *_rxbuffer, 
uint16_t _length, error_t _success)
#line 263
{
}

# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SpiPacket.nc"
inline static   void Atm128SpiP__SpiPacket__sendDone(uint8_t *arg_0x40932ac8, uint8_t *arg_0x40932c70, uint16_t arg_0x40932e00, error_t arg_0x40931010){
#line 71
  Atm128SpiP__SpiPacket__default__sendDone(arg_0x40932ac8, arg_0x40932c70, arg_0x40932e00, arg_0x40931010);
#line 71
}
#line 71
# 207 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline  void Atm128SpiP__zeroTask__runTask(void)
#line 207
{
  uint16_t myLen;
  uint8_t *rx;
  uint8_t *tx;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 212
    {
      myLen = Atm128SpiP__len;
      rx = Atm128SpiP__rxBuffer;
      tx = Atm128SpiP__txBuffer;
      Atm128SpiP__rxBuffer = (void *)0;
      Atm128SpiP__txBuffer = (void *)0;
      Atm128SpiP__len = 0;
      Atm128SpiP__pos = 0;
      Atm128SpiP__SpiPacket__sendDone(tx, rx, myLen, SUCCESS);
    }
#line 221
    __nesc_atomic_end(__nesc_atomic); }
}

# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/system/RandomMlcgC.nc"
static inline   uint16_t RandomMlcgC__Random__rand16(void)
#line 78
{
  return (uint16_t )RandomMlcgC__Random__rand32();
}

# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Random.nc"
inline static   uint16_t RandomCollisionLayerP__Random__rand16(void){
#line 41
  unsigned short result;
#line 41

#line 41
  result = RandomMlcgC__Random__rand16();
#line 41

#line 41
  return result;
#line 41
}
#line 41
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RandomCollisionLayerP.nc"
static inline  void RandomCollisionLayerP__calcNextRandom__runTask(void)
{
  uint16_t a = RandomCollisionLayerP__Random__rand16();

#line 70
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 70
    RandomCollisionLayerP__nextRandom = a;
#line 70
    __nesc_atomic_end(__nesc_atomic); }
}

# 153 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__Timer__stop(uint8_t num)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__m_timers[num].isrunning = FALSE;
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void TrafficMonitorLayerP__Timer__stop(void){
#line 67
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__Timer__stop(0U);
#line 67
}
#line 67
# 190 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   uint16_t RF230ActiveMessageP__TrafficMonitorConfig__getUpdatePeriod(void)
{
  return RF230ActiveMessageP__TRAFFIC_UPDATE_PERIOD;
}

# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorConfig.nc"
inline static   uint16_t TrafficMonitorLayerP__TrafficMonitorConfig__getUpdatePeriod(void){
#line 32
  unsigned short result;
#line 32

#line 32
  result = RF230ActiveMessageP__TrafficMonitorConfig__getUpdatePeriod();
#line 32

#line 32
  return result;
#line 32
}
#line 32
# 249 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline   uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Alarm__getNow(void)
#line 249
{
  return /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Counter__get();
}

# 98 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__Alarm__getNow(void){
#line 98
  unsigned long result;
#line 98

#line 98
  result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Alarm__getNow();
#line 98

#line 98
  return result;
#line 98
}
#line 98
# 85 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline  uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__Timer__getNow(void)
{
#line 86
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__Alarm__getNow();
}

# 125 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__TimerFrom__getNow(void){
#line 125
  unsigned long result;
#line 125

#line 125
  result = /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__Timer__getNow();
#line 125

#line 125
  return result;
#line 125
}
#line 125
# 143 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__Timer__startPeriodic(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__TimerFrom__getNow(), dt, FALSE);
}

# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void TrafficMonitorLayerP__Timer__startPeriodic(uint32_t arg_0x403428e0){
#line 53
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__Timer__startPeriodic(0U, arg_0x403428e0);
#line 53
}
#line 53
# 229 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
static inline  void TrafficMonitorLayerP__startStopTimer__runTask(void)
{
  if (TrafficMonitorLayerP__radioCmd == TrafficMonitorLayerP__RADIO_CMD_TURNON) {
    TrafficMonitorLayerP__Timer__startPeriodic(TrafficMonitorLayerP__TrafficMonitorConfig__getUpdatePeriod());
    }
  else {
#line 233
    if (TrafficMonitorLayerP__radioCmd == TrafficMonitorLayerP__RADIO_CMD_TURNOFF) {
      TrafficMonitorLayerP__Timer__stop();
      }
    }
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__updateFromTimer__postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__updateFromTimer);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 134 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline   uint8_t HplAtm1281Timer2AsyncP__TimerCtrl__getInterruptFlag(void)
#line 134
{
  return * (volatile uint8_t *)(0x17 + 0x20);
}

# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerCtrl8.nc"
inline static   uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__TimerCtrl__getInterruptFlag(void){
#line 69
  unsigned char result;
#line 69

#line 69
  result = HplAtm1281Timer2AsyncP__TimerCtrl__getInterruptFlag();
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  uint8_t MessageBufferLayerP__Packet__payloadLength(message_t *arg_0x40462e88){
#line 67
  unsigned char result;
#line 67

#line 67
  result = RF230PacketP__Packet__payloadLength(arg_0x40462e88);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 90 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static inline  void *RF230PacketP__Packet__getPayload(message_t *msg, uint8_t len)
{
  if (len > 28) {
    return (void *)0;
    }
  return msg->data;
}

# 115 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  void *MessageBufferLayerP__Packet__getPayload(message_t *arg_0x4046c358, uint8_t arg_0x4046c4e0){
#line 115
  void *result;
#line 115

#line 115
  result = RF230PacketP__Packet__getPayload(arg_0x4046c358, arg_0x4046c4e0);
#line 115

#line 115
  return result;
#line 115
}
#line 115
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154NetworkLayerP.nc"
static inline   message_t *IEEE154NetworkLayerP__NonTinyosReceive__default__receive(uint8_t network, message_t *msg, void *payload, uint8_t len)
{
  return msg;
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
inline static  message_t *IEEE154NetworkLayerP__NonTinyosReceive__receive(uint8_t arg_0x4076bd28, message_t *arg_0x40344308, void *arg_0x403444a8, uint8_t arg_0x40344630){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
    result = IEEE154NetworkLayerP__NonTinyosReceive__default__receive(arg_0x4076bd28, arg_0x40344308, arg_0x403444a8, arg_0x40344630);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 103 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
static inline   message_t *ActiveMessageLayerC__Snoop__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
{
  return msg;
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
inline static  message_t *ActiveMessageLayerC__Snoop__receive(am_id_t arg_0x407580b0, message_t *arg_0x40344308, void *arg_0x403444a8, uint8_t arg_0x40344630){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
    result = ActiveMessageLayerC__Snoop__default__receive(arg_0x407580b0, arg_0x40344308, arg_0x403444a8, arg_0x40344630);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 264 "/usr/local/lib/ncc/nesc_nx.h"
static __inline uint16_t __nesc_ntoh_uint16(const void *source)
#line 264
{
  const uint8_t *base = source;

#line 266
  return ((uint16_t )base[0] << 8) | base[1];
}

static __inline uint16_t __nesc_hton_uint16(void *target, uint16_t value)
#line 269
{
  uint8_t *base = target;

#line 271
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

# 64 "OscilloscopeC.nc"
static inline void OscilloscopeC__startTimer(void)
#line 64
{
  OscilloscopeC__Timer__startPeriodic(__nesc_ntoh_uint16((unsigned char *)&OscilloscopeC__local.interval));
  OscilloscopeC__reading = 0;
}

# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP__Led2__toggle(void){
#line 31
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0__IO__toggle();
#line 31
}
#line 31
# 103 "/opt/CVSTinyOS/tinyos-2.x/tos/system/LedsP.nc"
static inline   void LedsP__Leds__led2Toggle(void)
#line 103
{
  LedsP__Led2__toggle();
  ;
#line 105
  ;
}

# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Leds.nc"
inline static   void OscilloscopeC__Leds__led2Toggle(void){
#line 89
  LedsP__Leds__led2Toggle();
#line 89
}
#line 89
# 54 "OscilloscopeC.nc"
static inline void OscilloscopeC__report_received(void)
#line 54
{
#line 54
  OscilloscopeC__Leds__led2Toggle();
}

#line 86
static inline  message_t *OscilloscopeC__Receive__receive(message_t *msg, void *payload, uint8_t len)
#line 86
{
  oscilloscope_t *omsg = payload;

  OscilloscopeC__report_received();




  if (__nesc_ntoh_uint16((unsigned char *)&omsg->version) > __nesc_ntoh_uint16((unsigned char *)&OscilloscopeC__local.version)) 
    {
      __nesc_hton_uint16((unsigned char *)&OscilloscopeC__local.version, __nesc_ntoh_uint16((unsigned char *)&omsg->version));
      __nesc_hton_uint16((unsigned char *)&OscilloscopeC__local.interval, __nesc_ntoh_uint16((unsigned char *)&omsg->interval));
      OscilloscopeC__startTimer();
    }
  if (__nesc_ntoh_uint16((unsigned char *)&omsg->count) > __nesc_ntoh_uint16((unsigned char *)&OscilloscopeC__local.count)) 
    {
      __nesc_hton_uint16((unsigned char *)&OscilloscopeC__local.count, __nesc_ntoh_uint16((unsigned char *)&omsg->count));
      OscilloscopeC__suppress_count_change = TRUE;
    }

  return msg;
}

# 98 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
static inline   message_t *ActiveMessageLayerC__Receive__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
{
  return msg;
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
inline static  message_t *ActiveMessageLayerC__Receive__receive(am_id_t arg_0x40759ab8, message_t *arg_0x40344308, void *arg_0x403444a8, uint8_t arg_0x40344630){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  switch (arg_0x40759ab8) {
#line 67
    case 147:
#line 67
      result = OscilloscopeC__Receive__receive(arg_0x40344308, arg_0x403444a8, arg_0x40344630);
#line 67
      break;
#line 67
    default:
#line 67
      result = ActiveMessageLayerC__Receive__default__receive(arg_0x40759ab8, arg_0x40344308, arg_0x403444a8, arg_0x40344630);
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
# 269 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline  bool IEEE154PacketP__AMPacket__isForMe(message_t *msg)
{
  am_addr_t addr = IEEE154PacketP__AMPacket__destination(msg);

#line 272
  return addr == IEEE154PacketP__AMPacket__address() || addr == AM_BROADCAST_ADDR;
}

# 125 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  bool ActiveMessageLayerC__AMPacket__isForMe(message_t *arg_0x40473f20){
#line 125
  unsigned char result;
#line 125

#line 125
  result = IEEE154PacketP__AMPacket__isForMe(arg_0x40473f20);
#line 125

#line 125
  return result;
#line 125
}
#line 125
#line 136
inline static  am_id_t ActiveMessageLayerC__AMPacket__type(message_t *arg_0x40472680){
#line 136
  unsigned char result;
#line 136

#line 136
  result = IEEE154PacketP__AMPacket__type(arg_0x40472680);
#line 136

#line 136
  return result;
#line 136
}
#line 136
# 87 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
static inline  message_t *ActiveMessageLayerC__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
{
  am_id_t type = ActiveMessageLayerC__AMPacket__type(msg);

  msg = ActiveMessageLayerC__AMPacket__isForMe(msg) ? 
  ActiveMessageLayerC__Receive__receive(type, msg, payload, len) : 
  ActiveMessageLayerC__Snoop__receive(type, msg, payload, len);

  return msg;
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
inline static  message_t *IEEE154NetworkLayerP__Receive__receive(message_t *arg_0x40344308, void *arg_0x403444a8, uint8_t arg_0x40344630){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  result = ActiveMessageLayerC__SubReceive__receive(arg_0x40344308, arg_0x403444a8, arg_0x40344630);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 196 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline   uint8_t IEEE154PacketP__IEEE154Packet__get6LowPan(message_t *msg)
{
  return __nesc_ntoh_leuint8((unsigned char *)&IEEE154PacketP__getHeader(msg)->network);
}

# 167 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static   uint8_t IEEE154NetworkLayerP__IEEE154Packet__get6LowPan(message_t *arg_0x404ce7c8){
#line 167
  unsigned char result;
#line 167

#line 167
  result = IEEE154PacketP__IEEE154Packet__get6LowPan(arg_0x404ce7c8);
#line 167

#line 167
  return result;
#line 167
}
#line 167
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154NetworkLayerP.nc"
static inline  message_t *IEEE154NetworkLayerP__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
{
  uint8_t network = IEEE154NetworkLayerP__IEEE154Packet__get6LowPan(msg);

#line 77
  if (network == 0x3f) {
    return IEEE154NetworkLayerP__Receive__receive(msg, payload, len);
    }
  else {
#line 80
    return IEEE154NetworkLayerP__NonTinyosReceive__receive(network, msg, payload, len);
    }
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
inline static  message_t *MessageBufferLayerP__Receive__receive(message_t *arg_0x40344308, void *arg_0x403444a8, uint8_t arg_0x40344630){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  result = IEEE154NetworkLayerP__SubReceive__receive(arg_0x40344308, arg_0x403444a8, arg_0x40344630);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 267 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static inline  void MessageBufferLayerP__deliverTask__runTask(void)
{

  for (; ; ) 
    {
      message_t *msg;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          if (MessageBufferLayerP__receiveQueueSize == 0) {
            {
#line 277
              __nesc_atomic_end(__nesc_atomic); 
#line 277
              return;
            }
            }
#line 279
          msg = MessageBufferLayerP__receiveQueue[MessageBufferLayerP__receiveQueueHead];
        }
#line 280
        __nesc_atomic_end(__nesc_atomic); }

      msg = MessageBufferLayerP__Receive__receive(msg, 
      MessageBufferLayerP__Packet__getPayload(msg, MessageBufferLayerP__Packet__maxPayloadLength()), 
      MessageBufferLayerP__Packet__payloadLength(msg));

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          MessageBufferLayerP__receiveQueue[MessageBufferLayerP__receiveQueueHead] = msg;

          if (++MessageBufferLayerP__receiveQueueHead >= MessageBufferLayerP__RECEIVE_QUEUE_SIZE) {
            MessageBufferLayerP__receiveQueueHead = 0;
            }
          --MessageBufferLayerP__receiveQueueSize;
        }
#line 294
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 181 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__AMSend__sendDone(am_id_t id, message_t *msg, error_t err)
#line 181
{





  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0__current >= 1) {
      return;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0__current].msg == msg) {
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0__current, msg, err);
    }
  else {
      ;
    }
}

# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  void ActiveMessageLayerC__AMSend__sendDone(am_id_t arg_0x40759188, message_t *arg_0x4033f068, error_t arg_0x4033f1f0){
#line 99
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__AMSend__sendDone(arg_0x40759188, arg_0x4033f068, arg_0x4033f1f0);
#line 99
}
#line 99
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
static __inline  void ActiveMessageLayerC__SubSend__sendDone(message_t *msg, error_t error)
{
  ActiveMessageLayerC__AMSend__sendDone(ActiveMessageLayerC__AMPacket__type(msg), msg, error);
}

# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static  void IEEE154NetworkLayerP__Send__sendDone(message_t *arg_0x40752010, error_t arg_0x40752198){
#line 89
  ActiveMessageLayerC__SubSend__sendDone(arg_0x40752010, arg_0x40752198);
#line 89
}
#line 89
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154NetworkLayerP.nc"
static inline  void IEEE154NetworkLayerP__SubSend__sendDone(message_t *msg, error_t error)
{
  IEEE154NetworkLayerP__Send__sendDone(msg, error);
}

# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static  void UniqueLayerP__Send__sendDone(message_t *arg_0x40752010, error_t arg_0x40752198){
#line 89
  IEEE154NetworkLayerP__SubSend__sendDone(arg_0x40752010, arg_0x40752198);
#line 89
}
#line 89
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/UniqueLayerP.nc"
static inline  void UniqueLayerP__SubSend__sendDone(message_t *msg, error_t error)
{
  UniqueLayerP__Send__sendDone(msg, error);
}

# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static  void MessageBufferLayerP__Send__sendDone(message_t *arg_0x40752010, error_t arg_0x40752198){
#line 89
  UniqueLayerP__SubSend__sendDone(arg_0x40752010, arg_0x40752198);
#line 89
}
#line 89
# 234 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   uint16_t RF230ActiveMessageP__RandomCollisionConfig__getInitialBackoff(message_t *msg)
{
  return (uint16_t )(9920 * (7372800UL / 8 / 32 * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 1000000.0));
}

# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RandomCollisionConfig.nc"
inline static   uint16_t RandomCollisionLayerP__Config__getInitialBackoff(message_t *arg_0x404bbb68){
#line 29
  unsigned short result;
#line 29

#line 29
  result = RF230ActiveMessageP__RandomCollisionConfig__getInitialBackoff(arg_0x404bbb68);
#line 29

#line 29
  return result;
#line 29
}
#line 29
# 87 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RandomCollisionLayerP.nc"
static inline   error_t RandomCollisionLayerP__RadioSend__send(message_t *msg)
{
  if (RandomCollisionLayerP__state != RandomCollisionLayerP__STATE_READY || !RandomCollisionLayerP__RadioAlarm__isFree()) {
    return EBUSY;
    }
  RandomCollisionLayerP__txMsg = msg;
  RandomCollisionLayerP__state = RandomCollisionLayerP__STATE_TX_PENDING_FIRST;
  RandomCollisionLayerP__RadioAlarm__wait(RandomCollisionLayerP__getBackoff(RandomCollisionLayerP__Config__getInitialBackoff(msg)));

  return SUCCESS;
}

# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
inline static   error_t TrafficMonitorLayerP__SubSend__send(message_t *arg_0x40784338){
#line 37
  unsigned char result;
#line 37

#line 37
  result = RandomCollisionLayerP__RadioSend__send(arg_0x40784338);
#line 37

#line 37
  return result;
#line 37
}
#line 37
# 86 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
static inline   error_t TrafficMonitorLayerP__RadioSend__send(message_t *msg)
{
  TrafficMonitorLayerP__txMsg = msg;
  return TrafficMonitorLayerP__SubSend__send(msg);
}

# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
inline static   error_t MessageBufferLayerP__RadioSend__send(message_t *arg_0x40784338){
#line 37
  unsigned char result;
#line 37

#line 37
  result = TrafficMonitorLayerP__RadioSend__send(arg_0x40784338);
#line 37

#line 37
  return result;
#line 37
}
#line 37
# 139 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static inline  void MessageBufferLayerP__sendTask__runTask(void)
{
  error_t error;

  for (; 0; ) ;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 145
    error = MessageBufferLayerP__txError;
#line 145
    __nesc_atomic_end(__nesc_atomic); }
  if ((MessageBufferLayerP__state == MessageBufferLayerP__STATE_TX_SEND && error == SUCCESS) || ++MessageBufferLayerP__retries > MessageBufferLayerP__MAX_RETRIES) {
    MessageBufferLayerP__state = MessageBufferLayerP__STATE_TX_DONE;
    }
  else {
      MessageBufferLayerP__Tasklet__suspend();

      error = MessageBufferLayerP__RadioSend__send(MessageBufferLayerP__txMsg);
      if (error == SUCCESS) {
        MessageBufferLayerP__state = MessageBufferLayerP__STATE_TX_SEND;
        }
      else {
#line 155
        if (MessageBufferLayerP__retries == MessageBufferLayerP__MAX_RETRIES) {
          MessageBufferLayerP__state = MessageBufferLayerP__STATE_TX_DONE;
          }
        else {
#line 158
          MessageBufferLayerP__state = MessageBufferLayerP__STATE_TX_PENDING;
          }
        }
#line 160
      MessageBufferLayerP__Tasklet__resume();
    }

  if (MessageBufferLayerP__state == MessageBufferLayerP__STATE_TX_DONE) 
    {
      MessageBufferLayerP__state = MessageBufferLayerP__STATE_READY;
      MessageBufferLayerP__Send__sendDone(MessageBufferLayerP__txMsg, error);
    }
}

# 83 "OscilloscopeC.nc"
static inline  void OscilloscopeC__RadioControl__stopDone(error_t error)
#line 83
{
}

# 117 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static  void MessageBufferLayerP__SplitControl__stopDone(error_t arg_0x4032a200){
#line 117
  OscilloscopeC__RadioControl__stopDone(arg_0x4032a200);
#line 117
}
#line 117
# 76 "OscilloscopeC.nc"
static inline  void OscilloscopeC__RadioControl__startDone(error_t error)
#line 76
{
  OscilloscopeC__startTimer();
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static  void MessageBufferLayerP__SplitControl__startDone(error_t arg_0x4032c640){
#line 92
  OscilloscopeC__RadioControl__startDone(arg_0x4032c640);
#line 92
}
#line 92
# 101 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static inline  void MessageBufferLayerP__stateDoneTask__runTask(void)
{
  uint8_t s;

  s = MessageBufferLayerP__state;


  if (s == MessageBufferLayerP__STATE_TURN_ON || s == MessageBufferLayerP__STATE_TURN_OFF) {
    MessageBufferLayerP__state = MessageBufferLayerP__STATE_READY;
    }
  if (s == MessageBufferLayerP__STATE_TURN_ON) {
    MessageBufferLayerP__SplitControl__startDone(SUCCESS);
    }
  else {
#line 114
    MessageBufferLayerP__SplitControl__stopDone(SUCCESS);
    }
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__Alarm__size_type arg_0x4066c1d8, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__Alarm__size_type arg_0x4066c368){
#line 92
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Alarm__startAt(arg_0x4066c1d8, arg_0x4066c368);
#line 92
}
#line 92
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__m_dt = dt;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__m_oneshot = oneshot;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__Alarm__startAt(t0, dt);
}

#line 82
static inline  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__Timer__startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 83
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__start(t0, dt, TRUE);
}

# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__TimerFrom__startOneShotAt(uint32_t arg_0x40347b10, uint32_t arg_0x40347ca0){
#line 118
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__Timer__startOneShotAt(arg_0x40347b10, arg_0x40347ca0);
#line 118
}
#line 118
# 231 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Alarm__stop(void)
#line 231
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 232
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__set = FALSE;
#line 232
    __nesc_atomic_end(__nesc_atomic); }
}

# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__Alarm__stop(void){
#line 62
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Alarm__stop();
#line 62
}
#line 62
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__Timer__stop(void)
{
#line 61
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__Alarm__stop();
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__TimerFrom__stop(void){
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__Timer__stop();
#line 67
}
#line 67
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__updateFromTimer__runTask(void)
{




  uint32_t now = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__TimerFrom__getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint8_t num;

  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__TimerFrom__stop();

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__m_timers[num];

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
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__fireTimers(now);
        }
      else {
#line 124
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__TimerFrom__startOneShotAt(now, min_remaining);
        }
    }
}

# 68 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
inline static  void TrafficMonitorLayerP__Tasklet__resume(void){
#line 68
  TaskletC__Tasklet__resume();
#line 68
}
#line 68
# 291 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline    void RF230ActiveMessageP__SlottedCollisionConfig__default__timerTick(void)
#line 291
{
}

# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SlottedCollisionConfig.nc"
inline static   void RF230ActiveMessageP__SlottedCollisionConfig__timerTick(void){
#line 60
  RF230ActiveMessageP__SlottedCollisionConfig__default__timerTick();
#line 60
}
#line 60
# 213 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   void RF230ActiveMessageP__TrafficMonitorConfig__timerTick(void)
{
  RF230ActiveMessageP__SlottedCollisionConfig__timerTick();
}

# 79 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorConfig.nc"
inline static   void TrafficMonitorLayerP__TrafficMonitorConfig__timerTick(void){
#line 79
  RF230ActiveMessageP__TrafficMonitorConfig__timerTick();
#line 79
}
#line 79
# 162 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodP.nc"
static inline   void NeighborhoodP__NeighborhoodFlag__clearAll(uint8_t bit)
{
  uint8_t i;

  bit = ~(1 << bit);

  for (i = 0; i < 5; ++i) 
    NeighborhoodP__flags[i] &= bit;
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodFlag.nc"
inline static   void TrafficMonitorLayerP__NeighborhoodFlag__clearAll(void){
#line 51
  NeighborhoodP__NeighborhoodFlag__clearAll(1U);
#line 51
}
#line 51
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
inline static  void TrafficMonitorLayerP__Tasklet__suspend(void){
#line 61
  TaskletC__Tasklet__suspend();
#line 61
}
#line 61
# 132 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
static inline  void TrafficMonitorLayerP__Timer__fired(void)
{
  uint8_t fraction;

  TrafficMonitorLayerP__Tasklet__suspend();

  TrafficMonitorLayerP__txAverage -= TrafficMonitorLayerP__txAverage >> 3;
  TrafficMonitorLayerP__rxAverage -= TrafficMonitorLayerP__rxAverage >> 3;
  TrafficMonitorLayerP__errorAverage -= TrafficMonitorLayerP__errorAverage >> 3;


  fraction = TrafficMonitorLayerP__neighborAverage >> 3;
  if (fraction == TrafficMonitorLayerP__neighborCount && (TrafficMonitorLayerP__neighborAverage & TrafficMonitorLayerP__TRAFFIC_MONITOR_MASK) != 0) {
    --TrafficMonitorLayerP__neighborAverage;
    }
  else {
#line 147
    TrafficMonitorLayerP__neighborAverage += TrafficMonitorLayerP__neighborCount - fraction;
    }
  TrafficMonitorLayerP__NeighborhoodFlag__clearAll();
  TrafficMonitorLayerP__neighborCount = 0;

  TrafficMonitorLayerP__TrafficMonitorConfig__timerTick();

  TrafficMonitorLayerP__Tasklet__resume();
}

# 201 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300DigitalLogicP.nc"
static inline   void MDA300DigitalLogicP__Dio__default__readDone(uint8_t channel, uint16_t data)
{
  return;
}

# 15 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/Dio.nc"
inline static  void MDA300DigitalLogicP__Dio__readDone(uint8_t arg_0x40a28e10, uint16_t arg_0x40351ce0){
#line 15
  switch (arg_0x40a28e10) {
#line 15
    case 0:
#line 15
      OscilloscopeC__Read1__readDone(arg_0x40351ce0);
#line 15
      break;
#line 15
    default:
#line 15
      MDA300DigitalLogicP__Dio__default__readDone(arg_0x40a28e10, arg_0x40351ce0);
#line 15
      break;
#line 15
    }
#line 15
}
#line 15
# 192 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300DigitalLogicP.nc"
static inline  error_t MDA300DigitalLogicP__Dio__read(uint8_t channel)
{
  uint16_t counter;

#line 195
  counter = MDA300DigitalLogicP__count[channel];
  if (RESET_ZERO_AFTER_READ & MDA300DigitalLogicP__mode[channel]) {
#line 196
      MDA300DigitalLogicP__count[channel] = 0;
    }
#line 197
  MDA300DigitalLogicP__Dio__readDone(channel, counter);
  return SUCCESS;
}

# 10 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/Dio.nc"
inline static  error_t OscilloscopeC__Read1__read(void){
#line 10
  unsigned char result;
#line 10

#line 10
  result = MDA300DigitalLogicP__Dio__read(0);
#line 10

#line 10
  return result;
#line 10
}
#line 10
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__Packet__setPayloadLength(message_t *arg_0x4046d548, uint8_t arg_0x4046d6d0){
#line 83
  RF230PacketP__Packet__setPayloadLength(arg_0x4046d548, arg_0x4046d6d0);
#line 83
}
#line 83
# 82 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline  error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len)
#line 83
{
  if (clientId >= 1) {
      return FAIL;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0__queue[clientId].msg != (void *)0) {
      return EBUSY;
    }
  ;

  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__queue[clientId].msg = msg;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__Packet__setPayloadLength(msg, len);

  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0__current >= 1) {
      error_t err;
      am_id_t amId = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__AMPacket__type(msg);
      am_addr_t dest = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__AMPacket__destination(msg);

      ;
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__current = clientId;

      err = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__AMSend__send(amId, dest, msg, len);
      if (err != SUCCESS) {
          ;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__current = 1;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__queue[clientId].msg = (void *)0;
        }

      return err;
    }
  else {
      ;
    }
  return SUCCESS;
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static  error_t /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0__Send__send(message_t *arg_0x40754e80, uint8_t arg_0x40753030){
#line 64
  unsigned char result;
#line 64

#line 64
  result = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__Send__send(0U, arg_0x40754e80, arg_0x40753030);
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 151 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  void /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0__AMPacket__setType(message_t *arg_0x40472c18, am_id_t arg_0x40472da0){
#line 151
  IEEE154PacketP__AMPacket__setType(arg_0x40472c18, arg_0x40472da0);
#line 151
}
#line 151
#line 92
inline static  void /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0__AMPacket__setDestination(message_t *arg_0x40469ce8, am_addr_t arg_0x40469e78){
#line 92
  IEEE154PacketP__AMPacket__setDestination(arg_0x40469ce8, arg_0x40469e78);
#line 92
}
#line 92
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline  error_t /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 47
{
  /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0__AMPacket__setDestination(msg, dest);
  /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0__AMPacket__setType(msg, 147);
  return /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0__Send__send(msg, len);
}

# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  error_t OscilloscopeC__AMSend__send(am_addr_t arg_0x4033ace8, message_t *arg_0x4033ae98, uint8_t arg_0x40340030){
#line 69
  unsigned char result;
#line 69

#line 69
  result = /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0__AMSend__send(arg_0x4033ace8, arg_0x4033ae98, arg_0x40340030);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 229 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static __inline  void *MessageBufferLayerP__Send__getPayload(message_t *msg, uint8_t len)
{
  return MessageBufferLayerP__Packet__getPayload(msg, len);
}

# 114 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static  void *UniqueLayerP__SubSend__getPayload(message_t *arg_0x40752c70, uint8_t arg_0x40752df8){
#line 114
  void *result;
#line 114

#line 114
  result = MessageBufferLayerP__Send__getPayload(arg_0x40752c70, arg_0x40752df8);
#line 114

#line 114
  return result;
#line 114
}
#line 114
# 79 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/UniqueLayerP.nc"
static inline  void *UniqueLayerP__Send__getPayload(message_t *msg, uint8_t len)
{
  return UniqueLayerP__SubSend__getPayload(msg, len);
}

# 114 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static  void *IEEE154NetworkLayerP__SubSend__getPayload(message_t *arg_0x40752c70, uint8_t arg_0x40752df8){
#line 114
  void *result;
#line 114

#line 114
  result = UniqueLayerP__Send__getPayload(arg_0x40752c70, arg_0x40752df8);
#line 114

#line 114
  return result;
#line 114
}
#line 114
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154NetworkLayerP.nc"
static inline  void *IEEE154NetworkLayerP__Send__getPayload(message_t *msg, uint8_t len)
{
  return IEEE154NetworkLayerP__SubSend__getPayload(msg, len);
}

# 114 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static  void *ActiveMessageLayerC__SubSend__getPayload(message_t *arg_0x40752c70, uint8_t arg_0x40752df8){
#line 114
  void *result;
#line 114

#line 114
  result = IEEE154NetworkLayerP__Send__getPayload(arg_0x40752c70, arg_0x40752df8);
#line 114

#line 114
  return result;
#line 114
}
#line 114
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
static __inline  void *ActiveMessageLayerC__AMSend__getPayload(am_id_t id, message_t *msg, uint8_t len)
{
  return ActiveMessageLayerC__SubSend__getPayload(msg, len);
}

# 124 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  void */*AMQueueP.AMQueueImplP*/AMQueueImplP$0__AMSend__getPayload(am_id_t arg_0x40bcb6a8, message_t *arg_0x4033fcb0, uint8_t arg_0x4033fe38){
#line 124
  void *result;
#line 124

#line 124
  result = ActiveMessageLayerC__AMSend__getPayload(arg_0x40bcb6a8, arg_0x4033fcb0, arg_0x4033fe38);
#line 124

#line 124
  return result;
#line 124
}
#line 124
# 203 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline  void */*AMQueueP.AMQueueImplP*/AMQueueImplP$0__Send__getPayload(uint8_t id, message_t *m, uint8_t len)
#line 203
{
  return /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__AMSend__getPayload(0, m, len);
}

# 114 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static  void */*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0__Send__getPayload(message_t *arg_0x40752c70, uint8_t arg_0x40752df8){
#line 114
  void *result;
#line 114

#line 114
  result = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__Send__getPayload(0U, arg_0x40752c70, arg_0x40752df8);
#line 114

#line 114
  return result;
#line 114
}
#line 114
# 65 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline  void */*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0__AMSend__getPayload(message_t *m, uint8_t len)
#line 65
{
  return /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0__Send__getPayload(m, len);
}

# 124 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  void *OscilloscopeC__AMSend__getPayload(message_t *arg_0x4033fcb0, uint8_t arg_0x4033fe38){
#line 124
  void *result;
#line 124

#line 124
  result = /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0__AMSend__getPayload(arg_0x4033fcb0, arg_0x4033fe38);
#line 124

#line 124
  return result;
#line 124
}
#line 124
# 224 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static __inline  uint8_t MessageBufferLayerP__Send__maxPayloadLength(void)
{
  return MessageBufferLayerP__Packet__maxPayloadLength();
}

# 101 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static  uint8_t UniqueLayerP__SubSend__maxPayloadLength(void){
#line 101
  unsigned char result;
#line 101

#line 101
  result = MessageBufferLayerP__Send__maxPayloadLength();
#line 101

#line 101
  return result;
#line 101
}
#line 101
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/UniqueLayerP.nc"
static inline  uint8_t UniqueLayerP__Send__maxPayloadLength(void)
{
  return UniqueLayerP__SubSend__maxPayloadLength();
}

# 101 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static  uint8_t IEEE154NetworkLayerP__SubSend__maxPayloadLength(void){
#line 101
  unsigned char result;
#line 101

#line 101
  result = UniqueLayerP__Send__maxPayloadLength();
#line 101

#line 101
  return result;
#line 101
}
#line 101
# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154NetworkLayerP.nc"
static inline  uint8_t IEEE154NetworkLayerP__Send__maxPayloadLength(void)
{
  return IEEE154NetworkLayerP__SubSend__maxPayloadLength();
}

# 101 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static  uint8_t ActiveMessageLayerC__SubSend__maxPayloadLength(void){
#line 101
  unsigned char result;
#line 101

#line 101
  result = IEEE154NetworkLayerP__Send__maxPayloadLength();
#line 101

#line 101
  return result;
#line 101
}
#line 101
# 75 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
static __inline  uint8_t ActiveMessageLayerC__AMSend__maxPayloadLength(am_id_t id)
{
  return ActiveMessageLayerC__SubSend__maxPayloadLength();
}

# 112 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__AMSend__maxPayloadLength(am_id_t arg_0x40bcb6a8){
#line 112
  unsigned char result;
#line 112

#line 112
  result = ActiveMessageLayerC__AMSend__maxPayloadLength(arg_0x40bcb6a8);
#line 112

#line 112
  return result;
#line 112
}
#line 112
# 199 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline  uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__Send__maxPayloadLength(uint8_t id)
#line 199
{
  return /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__AMSend__maxPayloadLength(0);
}

# 101 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static  uint8_t /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0__Send__maxPayloadLength(void){
#line 101
  unsigned char result;
#line 101

#line 101
  result = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__Send__maxPayloadLength(0U);
#line 101

#line 101
  return result;
#line 101
}
#line 101
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline  uint8_t /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0__AMSend__maxPayloadLength(void)
#line 61
{
  return /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0__Send__maxPayloadLength();
}

# 112 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  uint8_t OscilloscopeC__AMSend__maxPayloadLength(void){
#line 112
  unsigned char result;
#line 112

#line 112
  result = /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0__AMSend__maxPayloadLength();
#line 112

#line 112
  return result;
#line 112
}
#line 112
# 113 "OscilloscopeC.nc"
static inline  void OscilloscopeC__Timer__fired(void)
#line 113
{
  unsigned short __nesc_temp43;
  unsigned char *__nesc_temp42;

#line 114
  if (OscilloscopeC__reading == NREADINGS) 
    {
      if (!OscilloscopeC__sendbusy && sizeof OscilloscopeC__local <= OscilloscopeC__AMSend__maxPayloadLength()) 
        {
          memcpy(OscilloscopeC__AMSend__getPayload(&OscilloscopeC__sendbuf, sizeof OscilloscopeC__local), &OscilloscopeC__local, sizeof OscilloscopeC__local);
          if (OscilloscopeC__AMSend__send(AM_BROADCAST_ADDR, &OscilloscopeC__sendbuf, sizeof OscilloscopeC__local) == SUCCESS) {
            OscilloscopeC__sendbusy = TRUE;
            }
        }
#line 122
      if (!OscilloscopeC__sendbusy) {
        OscilloscopeC__report_problem();
        }
      OscilloscopeC__reading = 0;


      if (!OscilloscopeC__suppress_count_change) {
        (__nesc_temp42 = (unsigned char *)&OscilloscopeC__local.count, __nesc_hton_uint16(__nesc_temp42, (__nesc_temp43 = __nesc_ntoh_uint16(__nesc_temp42)) + 1), __nesc_temp43);
        }
#line 130
      OscilloscopeC__suppress_count_change = FALSE;
    }

  if (OscilloscopeC__Read1__read() != SUCCESS) {
    OscilloscopeC__report_problem();
    }
}

# 193 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline   void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__Timer__default__fired(uint8_t num)
{
}

# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__Timer__fired(uint8_t arg_0x406fe770){
#line 72
  switch (arg_0x406fe770) {
#line 72
    case 0U:
#line 72
      TrafficMonitorLayerP__Timer__fired();
#line 72
      break;
#line 72
    case 1U:
#line 72
      OscilloscopeC__Timer__fired();
#line 72
      break;
#line 72
    default:
#line 72
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__Timer__default__fired(arg_0x406fe770);
#line 72
      break;
#line 72
    }
#line 72
}
#line 72
# 174 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline   void HplAtm1281Timer2AsyncP__Compare__set(uint8_t t)
#line 174
{
  /* atomic removed: atomic calls only */
  {
    while (* (volatile uint8_t *)0xB6 & (1 << 3)) 
      ;
    * (volatile uint8_t *)0xB3 = t;
  }
}

# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Compare__size_type arg_0x405db088){
#line 45
  HplAtm1281Timer2AsyncP__Compare__set(arg_0x405db088);
#line 45
}
#line 45
# 79 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline   uint8_t HplAtm1281Timer2AsyncP__Timer__get(void)
#line 79
{
#line 79
  return * (volatile uint8_t *)0xB2;
}

# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Timer__timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Timer__get(void){
#line 52
  unsigned char result;
#line 52

#line 52
  result = HplAtm1281Timer2AsyncP__Timer__get();
#line 52

#line 52
  return result;
#line 52
}
#line 52
# 258 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline   int HplAtm1281Timer2AsyncP__TimerAsync__compareABusy(void)
#line 258
{
  return (* (volatile uint8_t *)0xB6 & (1 << 3)) != 0;
}

# 75 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerAsync.nc"
inline static   int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__TimerAsync__compareABusy(void){
#line 75
  int result;
#line 75

#line 75
  result = HplAtm1281Timer2AsyncP__TimerAsync__compareABusy();
#line 75

#line 75
  return result;
#line 75
}
#line 75
# 101 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__setOcr2A(uint8_t n)
#line 101
{
  while (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__TimerAsync__compareABusy()) 
    ;
  if (n == /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Timer__get()) {
    n++;
    }


  if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__base + n + 1 < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__base) {
    n = -/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__base - 1;
    }
#line 111
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Compare__set(n);
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__fired__postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__fired);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 70 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__Alarm__fired(void)
{
#line 71
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__fired__postTask();
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Alarm__fired(void){
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__Alarm__fired();
#line 67
}
#line 67
# 128 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__TimerFrom__fired(void)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__TimerFrom__getNow());
}

# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__Timer__fired(void){
#line 72
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__TimerFrom__fired();
#line 72
}
#line 72
# 253 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline   uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Alarm__getAlarm(void)
#line 253
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 254
    {
      unsigned long __nesc_temp = 
#line 254
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__t0 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__dt;

      {
#line 254
        __nesc_atomic_end(__nesc_atomic); 
#line 254
        return __nesc_temp;
      }
    }
#line 256
    __nesc_atomic_end(__nesc_atomic); }
}

# 105 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__Alarm__getAlarm(void){
#line 105
  unsigned long result;
#line 105

#line 105
  result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Alarm__getAlarm();
#line 105

#line 105
  return result;
#line 105
}
#line 105
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__fired__runTask(void)
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__m_oneshot == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__Alarm__getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__m_dt, FALSE);
    }
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__Timer__fired();
}

# 247 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static inline  error_t MessageBufferLayerP__SoftwareInit__init(void)
{
  uint8_t i;

  for (i = 0; i < MessageBufferLayerP__RECEIVE_QUEUE_SIZE; ++i) 
    MessageBufferLayerP__receiveQueue[i] = MessageBufferLayerP__receiveQueueData + i;

  return SUCCESS;
}

# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/UniqueLayerP.nc"
static inline  error_t UniqueLayerP__Init__init(void)
{
  UniqueLayerP__sequenceNumber = TOS_NODE_ID << 4;
  return SUCCESS;
}

# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodP.nc"
static inline  error_t NeighborhoodP__Init__init(void)
{
  uint8_t i;

  for (i = 0; i < 5; ++i) 
    NeighborhoodP__nodes[i] = AM_BROADCAST_ADDR;

  return SUCCESS;
}

# 161 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline   void HplAtm1281Timer2AsyncP__Compare__start(void)
#line 161
{
#line 161
  * (volatile uint8_t *)0x70 |= 1 << 1;
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Compare__start(void){
#line 56
  HplAtm1281Timer2AsyncP__Compare__start();
#line 56
}
#line 56
# 117 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline   void HplAtm1281Timer2AsyncP__TimerCtrl__setControlB(uint8_t x)
#line 117
{
  while (* (volatile uint8_t *)0xB6 & (1 << 0)) 
    ;
  * (volatile uint8_t *)0xB1 = ((Atm128_TCCR2B_t )x).flat;
}

# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerCtrl8.nc"
inline static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__TimerCtrl__setControlB(uint8_t arg_0x4067c240){
#line 62
  HplAtm1281Timer2AsyncP__TimerCtrl__setControlB(arg_0x4067c240);
#line 62
}
#line 62
# 111 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline   void HplAtm1281Timer2AsyncP__TimerCtrl__setControlA(uint8_t x)
#line 111
{
  while (* (volatile uint8_t *)0xB6 & (1 << 1)) 
    ;
  * (volatile uint8_t *)0xB0 = ((Atm128_TCCR2A_t )x).flat;
}

# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerCtrl8.nc"
inline static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__TimerCtrl__setControlA(uint8_t arg_0x4067dd80){
#line 61
  HplAtm1281Timer2AsyncP__TimerCtrl__setControlA(arg_0x4067dd80);
#line 61
}
#line 61
# 246 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline   void HplAtm1281Timer2AsyncP__TimerAsync__setTimer2Asynchronous(void)
#line 246
{
  * (volatile uint8_t *)0xB6 |= 1 << 5;
}

# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerAsync.nc"
inline static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__TimerAsync__setTimer2Asynchronous(void){
#line 57
  HplAtm1281Timer2AsyncP__TimerAsync__setTimer2Asynchronous();
#line 57
}
#line 57
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline  error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Init__init(void)
#line 78
{
  /* atomic removed: atomic calls only */
  {
    Atm128_TCCR2A_t x;
    Atm128_TCCR2B_t y;

    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__TimerAsync__setTimer2Asynchronous();
    x.flat = 0;
    x.bits.wgm21 = 1;
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__TimerCtrl__setControlA(x.flat);
    y.flat = 0;
    y.bits.cs = 3;
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__TimerCtrl__setControlB(y.flat);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__MAXT);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Compare__start();
  }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__setInterrupt();
  return SUCCESS;
}

# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/system/RandomMlcgC.nc"
static inline  error_t RandomMlcgC__Init__init(void)
#line 44
{
  /* atomic removed: atomic calls only */
#line 45
  RandomMlcgC__seed = (uint32_t )(TOS_NODE_ID + 1);

  return SUCCESS;
}

# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t RF230LayerP__SpiResource__request(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = Atm128SpiP__Resource__request(0U);
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 204 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
static inline  error_t RF230LayerP__SoftwareInit__init(void)
{

  return RF230LayerP__SpiResource__request();
}

# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline  error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__Init__init(void)
#line 45
{
  memset(/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__resQ, /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__NO_ENTRY, sizeof /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__resQ);
  return SUCCESS;
}

#line 45
static inline  error_t /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$1__Init__init(void)
#line 45
{
  memset(/*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$1__resQ, /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$1__NO_ENTRY, sizeof /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$1__resQ);
  return SUCCESS;
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
inline static  error_t RealMainP__SoftwareInit__init(void){
#line 51
  unsigned char result;
#line 51

#line 51
  result = /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$1__Init__init();
#line 51
  result = ecombine(result, /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0__Init__init());
#line 51
  result = ecombine(result, RF230LayerP__SoftwareInit__init());
#line 51
  result = ecombine(result, RandomMlcgC__Init__init());
#line 51
  result = ecombine(result, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Init__init());
#line 51
  result = ecombine(result, NeighborhoodP__Init__init());
#line 51
  result = ecombine(result, UniqueLayerP__Init__init());
#line 51
  result = ecombine(result, MessageBufferLayerP__SoftwareInit__init());
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__grantedTask__postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP__TaskBasic__postTask(/*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__grantedTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 129 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
static inline   error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__ResourceDefaultOwner__release(void)
#line 129
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 130
    {
      if (/*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__resId == /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__default_owner_id) {
          if (/*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__state == /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__RES_GRANTING) {
              /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__grantedTask__postTask();
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
            if (/*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__state == /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__RES_IMM_GRANTING) {
                /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__resId = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__reqResId;
                /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__state = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__RES_BUSY;
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
inline static   error_t /*Atm128I2CMasterP.Power*/AsyncPowerManagerP$0__ResourceDefaultOwner__release(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__ResourceDefaultOwner__release();
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 164 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBusP.nc"
static inline   void HplAtm128I2CBusP__I2C__enable(bool enable)
#line 164
{
  if (enable) {
      /* atomic removed: atomic calls only */
#line 166
      HplAtm128I2CBusP__current |= 1 << 2;
    }
  else {
      /* atomic removed: atomic calls only */
#line 169
      HplAtm128I2CBusP__current &= ~(1 << 2);
    }
}

# 76 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
inline static   void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__enable(bool arg_0x40b4d3a0){
#line 76
  HplAtm128I2CBusP__I2C__enable(arg_0x40b4d3a0);
#line 76
}
#line 76
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25__IO__makeInput(void)
#line 50
{
#line 50
  * (volatile uint8_t *)42U &= ~(1 << 1);
}

# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplAtm128I2CBusP__I2CData__makeInput(void){
#line 33
  /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25__IO__makeInput();
#line 33
}
#line 33
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24__IO__makeInput(void)
#line 50
{
#line 50
  * (volatile uint8_t *)42U &= ~(1 << 0);
}

# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplAtm128I2CBusP__I2CClk__makeInput(void){
#line 33
  /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24__IO__makeInput();
#line 33
}
#line 33
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25__IO__set(void)
#line 46
{
#line 46
  * (volatile uint8_t *)43U |= 1 << 1;
}

# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplAtm128I2CBusP__I2CData__set(void){
#line 29
  /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25__IO__set();
#line 29
}
#line 29
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24__IO__set(void)
#line 46
{
#line 46
  * (volatile uint8_t *)43U |= 1 << 0;
}

# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplAtm128I2CBusP__I2CClk__set(void){
#line 29
  /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24__IO__set();
#line 29
}
#line 29
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBusP.nc"
static inline   void HplAtm128I2CBusP__I2C__init(bool hasExternalPulldown)
#line 53
{

  if (TRUE) {


      HplAtm128I2CBusP__I2CClk__set();
      HplAtm128I2CBusP__I2CData__set();
    }
  HplAtm128I2CBusP__I2CClk__makeInput();
  HplAtm128I2CBusP__I2CData__makeInput();
  * (volatile uint8_t *)0xB9 = 0;
  * (volatile uint8_t *)0xB8 = (7372800 / 50000UL - 16) / 2;

  * (volatile uint8_t *)0xBA = 0;
  * (volatile uint8_t *)0xBC = 0;
}

# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
inline static   void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__init(bool arg_0x40b52470){
#line 42
  HplAtm128I2CBusP__I2C__init(arg_0x40b52470);
#line 42
}
#line 42
# 93 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterPacketP.nc"
static inline   error_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__AsyncStdControl__start(void)
#line 93
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 94
    {
      if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__state == /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C_OFF) {
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__init(FALSE);
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__readCurrent();
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__enable(TRUE);
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__enableInterrupt(FALSE);
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__sendCommand();
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C_IDLE;
          {
            unsigned char __nesc_temp = 
#line 102
            SUCCESS;

            {
#line 102
              __nesc_atomic_end(__nesc_atomic); 
#line 102
              return __nesc_temp;
            }
          }
        }
      else 
#line 104
        {
          {
            unsigned char __nesc_temp = 
#line 105
            FAIL;

            {
#line 105
              __nesc_atomic_end(__nesc_atomic); 
#line 105
              return __nesc_temp;
            }
          }
        }
    }
#line 109
    __nesc_atomic_end(__nesc_atomic); }
}

# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AsyncStdControl.nc"
inline static   error_t /*Atm128I2CMasterP.Power*/AsyncPowerManagerP$0__AsyncStdControl__start(void){
#line 74
  unsigned char result;
#line 74

#line 74
  result = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__AsyncStdControl__start();
#line 74

#line 74
  return result;
#line 74
}
#line 74
# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/power/AsyncPowerManagerP.nc"
static inline   void /*Atm128I2CMasterP.Power*/AsyncPowerManagerP$0__ResourceDefaultOwner__requested(void)
#line 59
{
  /*Atm128I2CMasterP.Power*/AsyncPowerManagerP$0__AsyncStdControl__start();
  /*Atm128I2CMasterP.Power*/AsyncPowerManagerP$0__ResourceDefaultOwner__release();
}

# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
inline static   void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__ResourceDefaultOwner__requested(void){
#line 73
  /*Atm128I2CMasterP.Power*/AsyncPowerManagerP$0__ResourceDefaultOwner__requested();
#line 73
}
#line 73
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline   bool /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$1__FcfsQueue__isEnqueued(resource_client_id_t id)
#line 54
{
  return /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$1__resQ[id] != /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$1__NO_ENTRY || /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$1__qTail == id;
}

#line 72
static inline   error_t /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$1__FcfsQueue__enqueue(resource_client_id_t id)
#line 72
{
  /* atomic removed: atomic calls only */
#line 73
  {
    if (!/*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$1__FcfsQueue__isEnqueued(id)) {
        if (/*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$1__qHead == /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$1__NO_ENTRY) {
          /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$1__qHead = id;
          }
        else {
#line 78
          /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$1__resQ[/*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$1__qTail] = id;
          }
#line 79
        /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$1__qTail = id;
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
inline static   error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__Queue__enqueue(resource_client_id_t arg_0x409a1360){
#line 69
  unsigned char result;
#line 69

#line 69
  result = /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$1__FcfsQueue__enqueue(arg_0x409a1360);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 200 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
static inline    void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__ResourceRequested__default__requested(uint8_t id)
#line 200
{
}

# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static   void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__ResourceRequested__requested(uint8_t arg_0x40ae7688){
#line 43
    /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__ResourceRequested__default__requested(arg_0x40ae7688);
#line 43
}
#line 43
# 77 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
static inline   error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__Resource__request(uint8_t id)
#line 77
{
  /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__ResourceRequested__requested(/*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 79
    {
      if (/*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__state == /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__RES_CONTROLLED) {
          /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__state = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__RES_GRANTING;
          /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__reqResId = id;
        }
      else {
          unsigned char __nesc_temp = 
#line 84
          /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__Queue__enqueue(id);

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
  /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__ResourceDefaultOwner__requested();
  return SUCCESS;
}

# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__SubResource__request(uint8_t arg_0x40b28488){
#line 78
  unsigned char result;
#line 78

#line 78
  result = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__Resource__request(arg_0x40b28488);
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
static inline   error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__Resource__request(uint8_t id)
#line 55
{
  return /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__SubResource__request(id);
}

# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t MDA300DigitalLogicP__I2CResource__request(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__Resource__request(/*HplMDA300DigitalC.I2C*/Atm128I2CMasterC$0__CLIENT_ID);
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortE.Bit4*/HplAtm128GeneralIOPinP$36__IO__makeInput(void)
#line 50
{
#line 50
  * (volatile uint8_t *)45U &= ~(1 << 4);
}

# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void MDA300DigitalLogicP__IntPin__makeInput(void){
#line 33
  /*HplAtm128GeneralIOC.PortE.Bit4*/HplAtm128GeneralIOPinP$36__IO__makeInput();
#line 33
}
#line 33
# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300DigitalLogicP.nc"
static inline  error_t MDA300DigitalLogicP__SplitControl__start(void)
#line 57
{
  MDA300DigitalLogicP__mode[0] = RISING_EDGE;
  MDA300DigitalLogicP__mode[1] = RISING_EDGE;
  MDA300DigitalLogicP__mode[2] = RISING_EDGE;
  MDA300DigitalLogicP__mode[3] = RISING_EDGE;
  MDA300DigitalLogicP__mode[4] = RISING_EDGE;
  MDA300DigitalLogicP__mode[5] = RISING_EDGE;
  MDA300DigitalLogicP__mode[6] = DIG_OUTPUT;
  MDA300DigitalLogicP__mode[7] = DIG_OUTPUT;
  MDA300DigitalLogicP__io_value = 0xff;
  MDA300DigitalLogicP__state = MDA300DigitalLogicP__INIT;
  MDA300DigitalLogicP__IntPin__makeInput();
  MDA300DigitalLogicP__I2CResource__request();
  return SUCCESS;
}

# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static  error_t OscilloscopeC__SensorControl__start(void){
#line 83
  unsigned char result;
#line 83

#line 83
  result = MDA300DigitalLogicP__SplitControl__start();
#line 83

#line 83
  return result;
#line 83
}
#line 83
# 56 "OscilloscopeC.nc"
static inline  void OscilloscopeC__Boot__booted(void)
#line 56
{
  __nesc_hton_uint16((unsigned char *)&OscilloscopeC__local.interval, DEFAULT_INTERVAL);
  __nesc_hton_uint16((unsigned char *)&OscilloscopeC__local.id, TOS_NODE_ID);
  OscilloscopeC__param = RESET_ZERO_AFTER_READ | RISING_EDGE;
  if (OscilloscopeC__SensorControl__start() != SUCCESS) {
    OscilloscopeC__report_problem();
    }
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Boot.nc"
inline static  void RealMainP__Boot__booted(void){
#line 49
  OscilloscopeC__Boot__booted();
#line 49
}
#line 49
# 199 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline   mcu_power_t HplAtm1281Timer2AsyncP__McuPowerOverride__lowestState(void)
#line 199
{
  uint8_t diff;


  if (* (volatile uint8_t *)0x70 & ((1 << 1) | (1 << 0))) {




      while (* (volatile uint8_t *)0xB6 & (((1 << 4) | (1 << 3)) | (1 << 1))) 
        ;
      diff = * (volatile uint8_t *)0xB3 - * (volatile uint8_t *)0xB2;
      if (diff < EXT_STANDBY_T0_THRESHOLD || 
      * (volatile uint8_t *)0xB2 > 256 - EXT_STANDBY_T0_THRESHOLD) {
        return ATM128_POWER_EXT_STANDBY;
        }
#line 214
      return ATM128_POWER_SAVE;
    }
  else {
      return ATM128_POWER_DOWN;
    }
}

# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
inline static   mcu_power_t McuSleepC__McuPowerOverride__lowestState(void){
#line 54
  unsigned char result;
#line 54

#line 54
  result = HplAtm1281Timer2AsyncP__McuPowerOverride__lowestState();
#line 54

#line 54
  return result;
#line 54
}
#line 54
# 88 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/McuSleepC.nc"
static inline mcu_power_t McuSleepC__getPowerState(void)
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
static inline   void McuSleepC__McuSleep__sleep(void)
#line 128
{
  uint8_t powerState;

  powerState = mcombine(McuSleepC__getPowerState(), McuSleepC__McuPowerOverride__lowestState());
  * (volatile uint8_t *)(0x33 + 0x20) = ((
  * (volatile uint8_t *)(0x33 + 0x20) & 0xf0) | (1 << 0)) | __extension__ ({
#line 133
    uint16_t __addr16 = (uint16_t )(uint16_t )&McuSleepC__atm128PowerBits[powerState];
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
inline static   void SchedulerBasicP__McuSleep__sleep(void){
#line 59
  McuSleepC__McuSleep__sleep();
#line 59
}
#line 59
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static __inline uint8_t SchedulerBasicP__popTask(void)
{
  if (SchedulerBasicP__m_head != SchedulerBasicP__NO_TASK) 
    {
      uint8_t id = SchedulerBasicP__m_head;

#line 72
      SchedulerBasicP__m_head = SchedulerBasicP__m_next[SchedulerBasicP__m_head];
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
        }
      SchedulerBasicP__m_next[id] = SchedulerBasicP__NO_TASK;
      return id;
    }
  else 
    {
      return SchedulerBasicP__NO_TASK;
    }
}

#line 138
static inline  void SchedulerBasicP__Scheduler__taskLoop(void)
{
  for (; ; ) 
    {
      uint8_t nextTask;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          while ((nextTask = SchedulerBasicP__popTask()) == SchedulerBasicP__NO_TASK) 
            {
              SchedulerBasicP__McuSleep__sleep();
            }
        }
#line 150
        __nesc_atomic_end(__nesc_atomic); }
      SchedulerBasicP__TaskBasic__runTask(nextTask);
    }
}

# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static  void RealMainP__Scheduler__taskLoop(void){
#line 61
  SchedulerBasicP__Scheduler__taskLoop();
#line 61
}
#line 61
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
inline static   void RadioAlarmP__Tasklet__schedule(void){
#line 48
  TaskletC__Tasklet__schedule();
#line 48
}
#line 48
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
static inline   void RadioAlarmP__Alarm__fired(void)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (RadioAlarmP__state == RadioAlarmP__STATE_WAIT) {
        RadioAlarmP__state = RadioAlarmP__STATE_FIRED;
        }
    }
#line 60
    __nesc_atomic_end(__nesc_atomic); }
  RadioAlarmP__Tasklet__schedule();
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__Alarm__fired(void){
#line 67
  RadioAlarmP__Alarm__fired();
#line 67
}
#line 67
# 105 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/atm128hardware.h"
static  __inline void __nesc_enable_interrupt(void)
#line 105
{
   __asm volatile ("sei");}

# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline   void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__HplAtm128Compare__fired(void)
#line 110
{
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__HplAtm128Compare__stop();
  ;
  __nesc_enable_interrupt();
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__Alarm__fired();
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void HplAtm1281Timer1P__CompareA__fired(void){
#line 49
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__HplAtm128Compare__fired();
#line 49
}
#line 49
# 209 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline    void HplAtm1281Timer1P__CompareB__default__fired(void)
#line 209
{
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void HplAtm1281Timer1P__CompareB__fired(void){
#line 49
  HplAtm1281Timer1P__CompareB__default__fired();
#line 49
}
#line 49
# 213 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline    void HplAtm1281Timer1P__CompareC__default__fired(void)
#line 213
{
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void HplAtm1281Timer1P__CompareC__fired(void){
#line 49
  HplAtm1281Timer1P__CompareC__default__fired();
#line 49
}
#line 49
# 622 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
static inline   void RF230LayerP__IRQ__captured(uint16_t time)
{
  for (; 0; ) ;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      RF230LayerP__capturedTime = time;
      RF230LayerP__radioIrq = TRUE;
    }
#line 630
    __nesc_atomic_end(__nesc_atomic); }

  RF230LayerP__Tasklet__schedule();
}

# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioCapture.nc"
inline static   void HplRF230P__IRQ__captured(uint16_t arg_0x408a63d8){
#line 50
  RF230LayerP__IRQ__captured(arg_0x408a63d8);
#line 50
}
#line 50
# 199 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline   uint16_t HplAtm1281Timer1P__Capture__get(void)
#line 199
{
#line 199
  return * (volatile uint16_t *)0x86;
}

# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static   HplRF230P__Capture__size_type HplRF230P__Capture__get(void){
#line 38
  unsigned short result;
#line 38

#line 38
  result = HplAtm1281Timer1P__Capture__get();
#line 38

#line 38
  return result;
#line 38
}
#line 38
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static inline   void HplRF230P__Capture__captured(uint16_t time)
{
  time = HplRF230P__Capture__get();
  HplRF230P__IRQ__captured(time);
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static   void HplAtm1281Timer1P__Capture__captured(HplAtm1281Timer1P__Capture__size_type arg_0x405d0630){
#line 51
  HplRF230P__Capture__captured(arg_0x405d0630);
#line 51
}
#line 51
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline   void /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC$0__Counter__overflow(void)
{
}

# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   void /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__Counter__overflow(void){
#line 71
  /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC$0__Counter__overflow();
#line 71
}
#line 71
# 122 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static inline   void /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__CounterFrom__overflow(void)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__m_upper++;
      if ((/*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__m_upper & /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__OVERFLOW_MASK) == 0) {
        /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__Counter__overflow();
        }
    }
#line 130
    __nesc_atomic_end(__nesc_atomic); }
}

# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   void /*CounterOne16C.NCounter*/Atm128CounterC$0__Counter__overflow(void){
#line 71
  /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__CounterFrom__overflow();
#line 71
}
#line 71
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline   void /*CounterOne16C.NCounter*/Atm128CounterC$0__Timer__overflow(void)
{
  /*CounterOne16C.NCounter*/Atm128CounterC$0__Counter__overflow();
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline   void /*InitOneP.InitOne*/Atm128TimerInitC$0__Timer__overflow(void)
#line 51
{
}

# 117 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline   void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__HplAtm128Timer__overflow(void)
#line 117
{
}

# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   void HplAtm1281Timer1P__Timer__overflow(void){
#line 61
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__HplAtm128Timer__overflow();
#line 61
  /*InitOneP.InitOne*/Atm128TimerInitC$0__Timer__overflow();
#line 61
  /*CounterOne16C.NCounter*/Atm128CounterC$0__Timer__overflow();
#line 61
}
#line 61
# 184 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static __inline void HplAtm1281Timer2AsyncP__stabiliseTimer2(void)
#line 184
{
  * (volatile uint8_t *)0xB0 = * (volatile uint8_t *)0xB0;
  while (* (volatile uint8_t *)0xB6 & (1 << 1)) 
    ;
}

# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline   void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$1__Counter__overflow(void)
{
}

# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Counter__overflow(void){
#line 71
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$1__Counter__overflow();
#line 71
}
#line 71
# 171 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline   uint8_t HplAtm1281Timer2AsyncP__Compare__get(void)
#line 171
{
#line 171
  return * (volatile uint8_t *)0xB3;
}

# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Compare__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Compare__get(void){
#line 39
  unsigned char result;
#line 39

#line 39
  result = HplAtm1281Timer2AsyncP__Compare__get();
#line 39

#line 39
  return result;
#line 39
}
#line 39
# 176 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Compare__fired(void)
#line 176
{
  int overflowed;


  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__base += /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Compare__get() + 1U;
  overflowed = !/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__base;
  __nesc_enable_interrupt();
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__setInterrupt();
  if (overflowed) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Counter__overflow();
    }
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void HplAtm1281Timer2AsyncP__Compare__fired(void){
#line 49
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Compare__fired();
#line 49
}
#line 49
# 257 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Timer__overflow(void)
#line 257
{
}

# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   void HplAtm1281Timer2AsyncP__Timer__overflow(void){
#line 61
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Timer__overflow();
#line 61
}
#line 61
# 98 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline   uint8_t HplAtm128SpiP__SPI__read(void)
#line 98
{
#line 98
  return * (volatile uint8_t *)(0X2E + 0x20);
}

# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static   uint8_t Atm128SpiP__Spi__read(void){
#line 80
  unsigned char result;
#line 80

#line 80
  result = HplAtm128SpiP__SPI__read();
#line 80

#line 80
  return result;
#line 80
}
#line 80
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline   void HplAtm128SpiP__SPI__write(uint8_t d)
#line 99
{
#line 99
  * (volatile uint8_t *)(0X2E + 0x20) = d;
}

# 86 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static   void Atm128SpiP__Spi__write(uint8_t arg_0x40949e00){
#line 86
  HplAtm128SpiP__SPI__write(arg_0x40949e00);
#line 86
}
#line 86










inline static   void Atm128SpiP__Spi__enableInterrupt(bool arg_0x40948898){
#line 96
  HplAtm128SpiP__SPI__enableInterrupt(arg_0x40948898);
#line 96
}
#line 96
# 162 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline error_t Atm128SpiP__sendNextPart(void)
#line 162
{
  uint16_t end;
  uint16_t tmpPos;
  uint16_t myLen;
  uint8_t *tx;
  uint8_t *rx;

  /* atomic removed: atomic calls only */
#line 169
  {
    myLen = Atm128SpiP__len;
    tx = Atm128SpiP__txBuffer;
    rx = Atm128SpiP__rxBuffer;
    tmpPos = Atm128SpiP__pos;
    end = Atm128SpiP__pos + Atm128SpiP__SPI_ATOMIC_SIZE;
    end = end > Atm128SpiP__len ? Atm128SpiP__len : end;
  }

  for (; tmpPos < end - 1; tmpPos++) {
      uint8_t val;

#line 180
      if (tx != (void *)0) {
        val = Atm128SpiP__SpiByte__write(tx[tmpPos]);
        }
      else {
#line 183
        val = Atm128SpiP__SpiByte__write(0);
        }
      if (rx != (void *)0) {
          rx[tmpPos] = val;
        }
    }



  Atm128SpiP__Spi__enableInterrupt(TRUE);
  /* atomic removed: atomic calls only */
#line 193
  {
    if (tx != (void *)0) {
      Atm128SpiP__Spi__write(tx[tmpPos]);
      }
    else {
#line 197
      Atm128SpiP__Spi__write(0);
      }
    Atm128SpiP__pos = tmpPos;
  }


  return SUCCESS;
}

#line 265
static inline   void Atm128SpiP__Spi__dataReady(uint8_t data)
#line 265
{
  bool again;

  /* atomic removed: atomic calls only */
#line 268
  {
    if (Atm128SpiP__rxBuffer != (void *)0) {
        Atm128SpiP__rxBuffer[Atm128SpiP__pos] = data;
      }

    Atm128SpiP__pos++;
  }
  Atm128SpiP__Spi__enableInterrupt(FALSE);
  /* atomic removed: atomic calls only */
  {
    again = Atm128SpiP__pos < Atm128SpiP__len;
  }

  if (again) {
      Atm128SpiP__sendNextPart();
    }
  else {
      uint8_t discard;
      uint16_t myLen;
      uint8_t *rx;
      uint8_t *tx;

      /* atomic removed: atomic calls only */
#line 290
      {
        myLen = Atm128SpiP__len;
        rx = Atm128SpiP__rxBuffer;
        tx = Atm128SpiP__txBuffer;
        Atm128SpiP__rxBuffer = (void *)0;
        Atm128SpiP__txBuffer = (void *)0;
        Atm128SpiP__len = 0;
        Atm128SpiP__pos = 0;
      }
      discard = Atm128SpiP__Spi__read();

      Atm128SpiP__SpiPacket__sendDone(tx, rx, myLen, SUCCESS);
    }
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static   void HplAtm128SpiP__SPI__dataReady(uint8_t arg_0x40948350){
#line 92
  Atm128SpiP__Spi__dataReady(arg_0x40948350);
#line 92
}
#line 92
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline    void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0__Irq__default__fired(void)
#line 63
{
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0__Irq__fired(void){
#line 64
  /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0__Irq__default__fired();
#line 64
}
#line 64
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0__IrqSignal__fired(void)
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0__Irq__fired();
}

# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static   void HplAtm128InterruptSigP__IntSig0__fired(void){
#line 41
  /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0__IrqSignal__fired();
#line 41
}
#line 41
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline    void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1__Irq__default__fired(void)
#line 63
{
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1__Irq__fired(void){
#line 64
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1__Irq__default__fired();
#line 64
}
#line 64
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1__IrqSignal__fired(void)
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1__Irq__fired();
}

# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static   void HplAtm128InterruptSigP__IntSig1__fired(void){
#line 41
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1__IrqSignal__fired();
#line 41
}
#line 41
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline    void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2__Irq__default__fired(void)
#line 63
{
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2__Irq__fired(void){
#line 64
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2__Irq__default__fired();
#line 64
}
#line 64
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2__IrqSignal__fired(void)
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2__Irq__fired();
}

# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static   void HplAtm128InterruptSigP__IntSig2__fired(void){
#line 41
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2__IrqSignal__fired();
#line 41
}
#line 41
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline    void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3__Irq__default__fired(void)
#line 63
{
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3__Irq__fired(void){
#line 64
  /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3__Irq__default__fired();
#line 64
}
#line 64
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3__IrqSignal__fired(void)
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3__Irq__fired();
}

# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static   void HplAtm128InterruptSigP__IntSig3__fired(void){
#line 41
  /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3__IrqSignal__fired();
#line 41
}
#line 41
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline   void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4__Irq__enable(void)
#line 42
{
#line 42
  * (volatile uint8_t *)(0x1D + 0x20) |= 1 << 4;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void MDA300DigitalLogicP__Interrupt__enable(void){
#line 35
  /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4__Irq__enable();
#line 35
}
#line 35
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline   void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4__Irq__disable(void)
#line 43
{
#line 43
  * (volatile uint8_t *)(0x1D + 0x20) &= ~(1 << 4);
}

# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void MDA300DigitalLogicP__Interrupt__disable(void){
#line 40
  /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4__Irq__disable();
#line 40
}
#line 40
# 283 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300DigitalLogicP.nc"
static inline   void MDA300DigitalLogicP__Interrupt__fired(void)
{
  MDA300DigitalLogicP__Interrupt__disable();
  if (!MDA300DigitalLogicP__read_io__postTask()) {
#line 286
    MDA300DigitalLogicP__Interrupt__enable();
    }
#line 287
  return;
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4__Irq__fired(void){
#line 64
  MDA300DigitalLogicP__Interrupt__fired();
#line 64
}
#line 64
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4__IrqSignal__fired(void)
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4__Irq__fired();
}

# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static   void HplAtm128InterruptSigP__IntSig4__fired(void){
#line 41
  /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4__IrqSignal__fired();
#line 41
}
#line 41
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline    void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5__Irq__default__fired(void)
#line 63
{
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5__Irq__fired(void){
#line 64
  /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5__Irq__default__fired();
#line 64
}
#line 64
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5__IrqSignal__fired(void)
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5__Irq__fired();
}

# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static   void HplAtm128InterruptSigP__IntSig5__fired(void){
#line 41
  /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5__IrqSignal__fired();
#line 41
}
#line 41
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline    void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6__Irq__default__fired(void)
#line 63
{
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6__Irq__fired(void){
#line 64
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6__Irq__default__fired();
#line 64
}
#line 64
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6__IrqSignal__fired(void)
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6__Irq__fired();
}

# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static   void HplAtm128InterruptSigP__IntSig6__fired(void){
#line 41
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6__IrqSignal__fired();
#line 41
}
#line 41
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline    void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7__Irq__default__fired(void)
#line 63
{
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7__Irq__fired(void){
#line 64
  /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7__Irq__default__fired();
#line 64
}
#line 64
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7__IrqSignal__fired(void)
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7__Irq__fired();
}

# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static   void HplAtm128InterruptSigP__IntSig7__fired(void){
#line 41
  /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7__IrqSignal__fired();
#line 41
}
#line 41
# 107 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
static inline    void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__I2CPacket__default__writeDone(uint8_t id, error_t error, uint16_t addr, uint8_t len, uint8_t *data)
#line 107
{
}

# 101 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/I2CPacket.nc"
inline static   void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__I2CPacket__writeDone(uint8_t arg_0x40b2b918, error_t arg_0x40a46e78, uint16_t arg_0x40a45030, uint8_t arg_0x40a451b8, uint8_t *arg_0x40a45360){
#line 101
  switch (arg_0x40b2b918) {
#line 101
    case /*HplMDA300DigitalC.I2C*/Atm128I2CMasterC$0__CLIENT_ID:
#line 101
      MDA300DigitalLogicP__I2CPacket__writeDone(arg_0x40a46e78, arg_0x40a45030, arg_0x40a451b8, arg_0x40a45360);
#line 101
      break;
#line 101
    default:
#line 101
      /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__I2CPacket__default__writeDone(arg_0x40b2b918, arg_0x40a46e78, arg_0x40a45030, arg_0x40a451b8, arg_0x40a45360);
#line 101
      break;
#line 101
    }
#line 101
}
#line 101
# 102 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
static inline   void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__SubPacket__writeDone(error_t error, uint16_t addr, uint8_t len, uint8_t *data)
#line 102
{
  /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__I2CPacket__writeDone(/*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__currentClient, error, addr, len, data);
}

# 101 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/I2CPacket.nc"
inline static   void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2CPacket__writeDone(error_t arg_0x40a46e78, uint16_t arg_0x40a45030, uint8_t arg_0x40a451b8, uint8_t *arg_0x40a45360){
#line 101
  /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__SubPacket__writeDone(arg_0x40a46e78, arg_0x40a45030, arg_0x40a451b8, arg_0x40a45360);
#line 101
}
#line 101
# 108 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
static inline    void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__I2CPacket__default__readDone(uint8_t id, error_t error, uint16_t addr, uint8_t len, uint8_t *data)
#line 108
{
}

# 91 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/I2CPacket.nc"
inline static   void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__I2CPacket__readDone(uint8_t arg_0x40b2b918, error_t arg_0x40a463b0, uint16_t arg_0x40a46540, uint8_t arg_0x40a466c8, uint8_t *arg_0x40a46870){
#line 91
  switch (arg_0x40b2b918) {
#line 91
    case /*HplMDA300DigitalC.I2C*/Atm128I2CMasterC$0__CLIENT_ID:
#line 91
      MDA300DigitalLogicP__I2CPacket__readDone(arg_0x40a463b0, arg_0x40a46540, arg_0x40a466c8, arg_0x40a46870);
#line 91
      break;
#line 91
    default:
#line 91
      /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__I2CPacket__default__readDone(arg_0x40b2b918, arg_0x40a463b0, arg_0x40a46540, arg_0x40a466c8, arg_0x40a46870);
#line 91
      break;
#line 91
    }
#line 91
}
#line 91
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
static inline   void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__SubPacket__readDone(error_t error, uint16_t addr, uint8_t len, uint8_t *data)
#line 99
{
  /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__I2CPacket__readDone(/*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__currentClient, error, addr, len, data);
}

# 91 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/I2CPacket.nc"
inline static   void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2CPacket__readDone(error_t arg_0x40a463b0, uint16_t arg_0x40a46540, uint8_t arg_0x40a466c8, uint8_t *arg_0x40a46870){
#line 91
  /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__SubPacket__readDone(arg_0x40a463b0, arg_0x40a46540, arg_0x40a466c8, arg_0x40a46870);
#line 91
}
#line 91
# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterPacketP.nc"
static inline void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__i2c_abort(error_t err)
#line 73
{
  /* atomic removed: atomic calls only */
#line 74
  {

    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__readCurrent();
    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__enableInterrupt(FALSE);
    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__enable(FALSE);
    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__sendCommand();
    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__readCurrent();
    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__enable(TRUE);
    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__sendCommand();
    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C_IDLE;
    if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__reading) {
        /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2CPacket__readDone(err, /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__packetAddr, /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__packetLen, /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__packetPtr);
      }
    else {
        /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2CPacket__writeDone(err, /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__packetAddr, /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__packetLen, /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__packetPtr);
      }
  }
}

# 75 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBusP.nc"
static inline   uint8_t HplAtm128I2CBusP__I2C__status(void)
#line 75
{
  return * (volatile uint8_t *)0xB9 & 0xf8;
}

# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
inline static   uint8_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__status(void){
#line 45
  unsigned char result;
#line 45

#line 45
  result = HplAtm128I2CBusP__I2C__status();
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/system/NoLedsC.nc"
static inline   void NoLedsC__Leds__led2On(void)
#line 50
{
}

# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Leds.nc"
inline static   void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__WriteDebugLeds__led2On(void){
#line 78
  NoLedsC__Leds__led2On();
#line 78
}
#line 78
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/system/NoLedsC.nc"
static inline   void NoLedsC__Leds__led1On(void)
#line 46
{
}

# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Leds.nc"
inline static   void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__WriteDebugLeds__led1On(void){
#line 61
  NoLedsC__Leds__led1On();
#line 61
}
#line 61
# 117 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBusP.nc"
static inline   uint8_t HplAtm128I2CBusP__I2C__read(void)
#line 117
{
  return * (volatile uint8_t *)0xBB;
}

# 82 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
inline static   uint8_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__read(void){
#line 82
  unsigned char result;
#line 82

#line 82
  result = HplAtm128I2CBusP__I2C__read();
#line 82

#line 82
  return result;
#line 82
}
#line 82
# 254 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterPacketP.nc"
static inline   void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__commandComplete(void)
#line 254
{
  /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__readCurrent();
  /* atomic removed: atomic calls only */
#line 256
  {
    if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__state == /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C_DATA) {
        if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__reading == TRUE) {
            if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__index < /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__packetLen) {
                /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__packetPtr[/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__index] = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__read();
                if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__index == /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__packetLen - 1 && 
                !(/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__packetFlags & I2C_ACK_END)) {
                    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__enableAck(FALSE);
                  }
              }
            else {
                /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__enableInterrupt(FALSE);
                if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__packetFlags & I2C_STOP) {
                    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__packetFlags &= ~I2C_STOP;
                    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__setStop(TRUE);
                    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__status();
                  }
                else {
                    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__setInterruptPending(FALSE);
                  }
                /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__sendCommand();
                /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C_IDLE;
                /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2CPacket__readDone(SUCCESS, /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__packetAddr, /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__packetLen, /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__packetPtr);
                return;
              }
            /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__index++;
            /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__sendCommand();
            return;
          }
        else {
            if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__index < /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__packetLen) {
                /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__write(/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__packetPtr[/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__index]);
                /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__index++;
                /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__sendCommand();
              }
            else {
                /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__enableInterrupt(FALSE);
                if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__packetFlags & I2C_STOP) {
                    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__packetFlags &= ~I2C_STOP;
                    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__setStop(TRUE);
                    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__WriteDebugLeds__led1On();
                  }
                else {
                    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__setInterruptPending(FALSE);
                  }
                /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__sendCommand();
                /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C_IDLE;
                /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__WriteDebugLeds__led2On();
                /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2CPacket__writeDone(SUCCESS, /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__packetAddr, /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__packetLen, /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__packetPtr);
                return;
              }
          }
      }
    else {
#line 309
      if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__state == /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C_STARTING) {
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__packetFlags &= ~I2C_START;
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__setStart(FALSE);
          if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__status() != ATM128_I2C_START && 
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__status() != ATM128_I2C_RSTART) {
              if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__reading) {
                }


              /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__i2c_abort(FAIL);
              return;
            }
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C_ADDR;
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__enableAck(TRUE);
        }
      }
#line 324
    if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__state == /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C_ADDR) {
        if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__reading == TRUE) {
            /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__write(((/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__packetAddr & 0x7f) << 1) | 0x01);
          }
        else {
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__write(((/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__packetAddr & 0x7f) << 1) | 0x00);
          }
#line 330
        /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C_DATA;
        /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__sendCommand();
      }
  }
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
inline static   void HplAtm128I2CBusP__I2C__commandComplete(void){
#line 49
  /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0__I2C__commandComplete();
#line 49
}
#line 49
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

      RealMainP__Scheduler__init();





      RealMainP__PlatformInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;





      RealMainP__SoftwareInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;
    }
#line 77
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  RealMainP__Boot__booted();


  RealMainP__Scheduler__taskLoop();




  return -1;
}

# 123 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static  bool SchedulerBasicP__Scheduler__runNextTask(void)
{
  uint8_t nextTask;

  /* atomic removed: atomic calls only */
#line 127
  {
    nextTask = SchedulerBasicP__popTask();
    if (nextTask == SchedulerBasicP__NO_TASK) 
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
  SchedulerBasicP__TaskBasic__runTask(nextTask);
  return TRUE;
}

#line 164
static   void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id)
{
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x402f61b0){
#line 64
  switch (arg_0x402f61b0) {
#line 64
    case /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__fired:
#line 64
      /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0__fired__runTask();
#line 64
      break;
#line 64
    case /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__updateFromTimer:
#line 64
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__updateFromTimer__runTask();
#line 64
      break;
#line 64
    case MessageBufferLayerP__stateDoneTask:
#line 64
      MessageBufferLayerP__stateDoneTask__runTask();
#line 64
      break;
#line 64
    case MessageBufferLayerP__sendTask:
#line 64
      MessageBufferLayerP__sendTask__runTask();
#line 64
      break;
#line 64
    case MessageBufferLayerP__deliverTask:
#line 64
      MessageBufferLayerP__deliverTask__runTask();
#line 64
      break;
#line 64
    case TrafficMonitorLayerP__startStopTimer:
#line 64
      TrafficMonitorLayerP__startStopTimer__runTask();
#line 64
      break;
#line 64
    case RandomCollisionLayerP__calcNextRandom:
#line 64
      RandomCollisionLayerP__calcNextRandom__runTask();
#line 64
      break;
#line 64
    case Atm128SpiP__zeroTask:
#line 64
      Atm128SpiP__zeroTask__runTask();
#line 64
      break;
#line 64
    case /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__grantedTask:
#line 64
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__grantedTask__runTask();
#line 64
      break;
#line 64
    case MDA300DigitalLogicP__init_io:
#line 64
      MDA300DigitalLogicP__init_io__runTask();
#line 64
      break;
#line 64
    case MDA300DigitalLogicP__set_io_high:
#line 64
      MDA300DigitalLogicP__set_io_high__runTask();
#line 64
      break;
#line 64
    case MDA300DigitalLogicP__set_io_low:
#line 64
      MDA300DigitalLogicP__set_io_low__runTask();
#line 64
      break;
#line 64
    case MDA300DigitalLogicP__set_io_toggle:
#line 64
      MDA300DigitalLogicP__set_io_toggle__runTask();
#line 64
      break;
#line 64
    case MDA300DigitalLogicP__read_io:
#line 64
      MDA300DigitalLogicP__read_io__runTask();
#line 64
      break;
#line 64
    case /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__grantedTask:
#line 64
      /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0__grantedTask__runTask();
#line 64
      break;
#line 64
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__CancelTask:
#line 64
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__CancelTask__runTask();
#line 64
      break;
#line 64
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__errorTask:
#line 64
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__errorTask__runTask();
#line 64
      break;
#line 64
    default:
#line 64
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x402f61b0);
#line 64
      break;
#line 64
    }
#line 64
}
#line 64
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1__IO__toggle(void)
#line 48
{
#line 48
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 48
    * (volatile uint8_t *)34U ^= 1 << 1;
#line 48
    __nesc_atomic_end(__nesc_atomic); }
}

#line 48
static   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2__IO__toggle(void)
#line 48
{
#line 48
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 48
    * (volatile uint8_t *)34U ^= 1 << 2;
#line 48
    __nesc_atomic_end(__nesc_atomic); }
}

# 155 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__sendDone(uint8_t last, message_t *msg, error_t err)
#line 155
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__queue[last].msg = (void *)0;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__tryToSend();
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0__Send__sendDone(last, msg, err);
}

# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
static  error_t ActiveMessageLayerC__AMSend__send(am_id_t id, am_addr_t addr, message_t *msg, uint8_t len)
{
  error_t error;

  error = ActiveMessageLayerC__Config__checkPacket(msg);
  if (error != SUCCESS) {
    return error;
    }
  ActiveMessageLayerC__AMPacket__setSource(msg, ActiveMessageLayerC__AMPacket__address());
  ActiveMessageLayerC__AMPacket__setGroup(msg, ActiveMessageLayerC__AMPacket__localGroup());
  ActiveMessageLayerC__AMPacket__setType(msg, id);
  ActiveMessageLayerC__AMPacket__setDestination(msg, addr);

  return ActiveMessageLayerC__SubSend__send(msg, len);
}

# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static   am_addr_t ActiveMessageAddressC__amAddress(void)
#line 95
{
  am_addr_t myAddr;

#line 97
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 97
    myAddr = ActiveMessageAddressC__addr;
#line 97
    __nesc_atomic_end(__nesc_atomic); }
  return myAddr;
}

# 159 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static   error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 161
    {
#line 161
      {
        unsigned char __nesc_temp = 
#line 161
        SchedulerBasicP__pushTask(id) ? SUCCESS : EBUSY;

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

# 90 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
static   error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__I2CPacket__read(uint8_t id, i2c_flags_t flags, uint16_t addr, uint8_t len, uint8_t *data)
#line 90
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 91
    {
      if (/*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__currentClient != id) {
          {
            unsigned char __nesc_temp = 
#line 93
            FAIL;

            {
#line 93
              __nesc_atomic_end(__nesc_atomic); 
#line 93
              return __nesc_temp;
            }
          }
        }
    }
#line 97
    __nesc_atomic_end(__nesc_atomic); }
#line 96
  return /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__SubPacket__read(flags, addr, len, data);
}

# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBusP.nc"
static   void HplAtm128I2CBusP__I2C__readCurrent(void)
#line 83
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 84
    HplAtm128I2CBusP__current = * (volatile uint8_t *)0xBC;
#line 84
    __nesc_atomic_end(__nesc_atomic); }
}

# 81 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
static   error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__I2CPacket__write(uint8_t id, i2c_flags_t flags, uint16_t addr, uint8_t len, uint8_t *data)
#line 81
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 82
    {
      if (/*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__currentClient != id) {
          {
            unsigned char __nesc_temp = 
#line 84
            FAIL;

            {
#line 84
              __nesc_atomic_end(__nesc_atomic); 
#line 84
              return __nesc_temp;
            }
          }
        }
    }
#line 88
    __nesc_atomic_end(__nesc_atomic); }
#line 87
  return /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0__SubPacket__write(flags, addr, len, data);
}

# 101 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TaskletC.nc"
static   void TaskletC__Tasklet__schedule(void)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (TaskletC__state != 0) 
        {
          TaskletC__state |= 0x80;
          {
#line 108
            __nesc_atomic_end(__nesc_atomic); 
#line 108
            return;
          }
        }
      TaskletC__state = 1;
    }
#line 112
    __nesc_atomic_end(__nesc_atomic); }

  TaskletC__doit();
}

#line 63
static void TaskletC__doit(void)
{
  for (; ; ) 
    {
      TaskletC__Tasklet__run();

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          if (TaskletC__state == 1) 
            {
              TaskletC__state = 0;
              {
#line 74
                __nesc_atomic_end(__nesc_atomic); 
#line 74
                return;
              }
            }
          for (; 0; ) ;
          TaskletC__state = 1;
        }
#line 79
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 252 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
static bool RF230LayerP__isSpiAcquired(void)
{
  if (RF230LayerP__SpiResource__isOwner()) {
    return TRUE;
    }
  if (RF230LayerP__SpiResource__immediateRequest() == SUCCESS) 
    {
      RF230LayerP__SELN__makeOutput();
      RF230LayerP__SELN__set();

      return TRUE;
    }

  RF230LayerP__SpiResource__request();
  return FALSE;
}

# 105 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static void Atm128SpiP__startSpi(void)
#line 105
{
  Atm128SpiP__Spi__enableSpi(FALSE);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 107
    {
      Atm128SpiP__Spi__initMaster();
      Atm128SpiP__Spi__enableInterrupt(FALSE);
      Atm128SpiP__Spi__setMasterDoubleSpeed(TRUE);
      Atm128SpiP__Spi__setClockPolarity(FALSE);
      Atm128SpiP__Spi__setClockPhase(FALSE);
      Atm128SpiP__Spi__setClock(0);
      Atm128SpiP__Spi__enableSpi(TRUE);
    }
#line 115
    __nesc_atomic_end(__nesc_atomic); }
  Atm128SpiP__McuPowerState__update();
}

# 130 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static   void HplAtm128SpiP__SPI__enableSpi(bool enabled)
#line 130
{
  if (enabled) {
      * (volatile uint8_t *)(0x2C + 0x20) |= 1 << 6;
      HplAtm128SpiP__Mcu__update();
    }
  else {
      * (volatile uint8_t *)(0x2C + 0x20) &= ~(1 << 6);
      HplAtm128SpiP__Mcu__update();
    }
}

#line 115
static   void HplAtm128SpiP__SPI__enableInterrupt(bool enabled)
#line 115
{
  if (enabled) {
      * (volatile uint8_t *)(0x2C + 0x20) |= 1 << 7;
      HplAtm128SpiP__Mcu__update();
    }
  else {
      * (volatile uint8_t *)(0x2C + 0x20) &= ~(1 << 7);
      HplAtm128SpiP__Mcu__update();
    }
}

# 313 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static   error_t Atm128SpiP__Resource__request(uint8_t id)
#line 313
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 314
    {
      if (!Atm128SpiP__ArbiterInfo__inUse()) {
          Atm128SpiP__startSpi();
        }
    }
#line 318
    __nesc_atomic_end(__nesc_atomic); }
  return Atm128SpiP__ResourceArbiter__request(id);
}

# 123 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static   bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__ArbiterInfo__inUse(void)
#line 123
{
  /* atomic removed: atomic calls only */
#line 124
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0__RES_IDLE) 
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

# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static   /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__to_size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__Counter__get(void)
{
  /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__to_size_type rv = 0;

#line 72
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__upper_count_type high = /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__m_upper;
      /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__from_size_type low = /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__CounterFrom__get();

#line 76
      if (/*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__CounterFrom__isOverflowPending()) 
        {






          high++;
          low = /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__CounterFrom__get();
        }
      {
        /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__to_size_type high_to = high;
        /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__to_size_type low_to = low >> /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__LOW_SHIFT_RIGHT;

#line 90
        rv = (high_to << /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0__HIGH_SHIFT_LEFT) | low_to;
      }
    }
#line 92
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

# 157 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static   void RF230PacketP__PacketTimeStampRadio__set(message_t *msg, uint32_t value)
{
  RF230PacketP__getMeta(msg)->flags |= RF230PACKET_TIMESTAMP;
  RF230PacketP__getMeta(msg)->timestamp = value;
}

# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static   void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__Alarm__startAt(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__timer_size t0, /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__timer_size dt)
#line 74
{






  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__timer_size now;
#line 83
      /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__timer_size elapsed;
#line 83
      /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__timer_size expires;

      ;


      now = /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__HplAtm128Timer__get();
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



      /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__HplAtm128Compare__set(expires - 1);
      /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__HplAtm128Compare__reset();
      /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0__HplAtm128Compare__start();
    }
#line 107
    __nesc_atomic_end(__nesc_atomic); }
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
static   void TrafficMonitorLayerP__SubSend__sendDone(error_t error)
{
  if (error == SUCCESS) {
    TrafficMonitorLayerP__txAverage += TrafficMonitorLayerP__TrafficMonitorConfig__getChannelTime(TrafficMonitorLayerP__txMsg);
    }
  TrafficMonitorLayerP__RadioSend__sendDone(error);
}

# 195 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static   uint16_t RF230ActiveMessageP__TrafficMonitorConfig__getChannelTime(message_t *msg)
{







  uint8_t len = RF230ActiveMessageP__IEEE154Packet__getLength(msg);

#line 205
  return RF230ActiveMessageP__IEEE154Packet__getAckRequired(msg) ? len + 6 + 16 + 11 + 10 : len + 6 + 10;
}

#line 124
static   void RF230ActiveMessageP__SoftwareAckConfig__setAckReceived(message_t *msg, bool acked)
{
  if (acked) {
    RF230ActiveMessageP__getMeta(msg)->flags |= RF230PACKET_WAS_ACKED;
    }
  else {
#line 129
    RF230ActiveMessageP__getMeta(msg)->flags &= ~RF230PACKET_WAS_ACKED;
    }
}

# 225 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static   bool IEEE154PacketP__IEEE154Packet__requiresAckReply(message_t *msg)
{
  return IEEE154PacketP__IEEE154Packet__getAckRequired(msg)
   && IEEE154PacketP__IEEE154Packet__isDataFrame(msg)
   && IEEE154PacketP__IEEE154Packet__getDestAddr(msg) == IEEE154PacketP__ActiveMessageAddress__amAddress();
}

# 389 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
static   error_t RF230LayerP__RadioSend__send(message_t *msg)
{
  uint16_t time;
  uint8_t length;
  uint8_t *data;
  uint8_t header;
  uint32_t time32;
  void *timesync;

  if (((RF230LayerP__cmd != RF230LayerP__CMD_NONE || RF230LayerP__state != RF230LayerP__STATE_RX_ON) || !RF230LayerP__isSpiAcquired()) || RF230LayerP__radioIrq) {
    return EBUSY;
    }
  length = (RF230LayerP__PacketTransmitPower__isSet(msg) ? 
  RF230LayerP__PacketTransmitPower__get(msg) : 0) & RF230_TX_PWR_MASK;

  if (length != RF230LayerP__txPower) 
    {
      RF230LayerP__txPower = length;
      RF230LayerP__writeRegister(RF230_PHY_TX_PWR, RF230_TX_AUTO_CRC_ON | RF230LayerP__txPower);
    }


  if (
#line 410
  RF230LayerP__RF230Config__requiresRssiCca(msg)
   && (RF230LayerP__readRegister(RF230_PHY_RSSI) & RF230_RSSI_MASK) > (RF230LayerP__rssiClear + RF230LayerP__rssiBusy) >> 3) {
    return EBUSY;
    }
  RF230LayerP__writeRegister(RF230_TRX_STATE, RF230_PLL_ON);


  time32 = RF230LayerP__LocalTime__get();
  timesync = RF230LayerP__PacketTimeSyncOffset__isSet(msg) ? msg->data + RF230LayerP__PacketTimeSyncOffset__get(msg) : 0;


  if ((RF230LayerP__readRegister(RF230_TRX_STATUS) & RF230_TRX_STATUS_MASK) != RF230_PLL_ON) 
    {
      for (; 0; ) ;

      RF230LayerP__state = RF230LayerP__STATE_PLL_ON_2_RX_ON;
      return EBUSY;
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      RF230LayerP__SLP_TR__set();
      time = RF230LayerP__RadioAlarm__getNow() + RF230LayerP__TX_SFD_DELAY;
    }
#line 433
    __nesc_atomic_end(__nesc_atomic); }
  RF230LayerP__SLP_TR__clr();

  for (; 0; ) ;

  RF230LayerP__SELN__clr();
  RF230LayerP__HplRF230__spiSplitWrite(RF230_CMD_FRAME_WRITE);

  length = RF230LayerP__RF230Config__getLength(msg);
  data = RF230LayerP__RF230Config__getPayload(msg);


  RF230LayerP__HplRF230__spiSplitReadWrite(length);


  length -= 2;

  header = RF230LayerP__RF230Config__getHeaderLength();
  if (header > length) {
    header = length;
    }
  length -= header;


  do {
      RF230LayerP__HplRF230__spiSplitReadWrite(* data++);
    }
  while (--header != 0);

  time32 += (int16_t )time - (int16_t )time32;

  if (timesync != 0) {
    __nesc_hton_int32((unsigned char *)&* (timesync_relative_t *)timesync, * (timesync_absolute_t *)timesync - time32);
    }
  do {
      RF230LayerP__HplRF230__spiSplitReadWrite(* data++);
    }
  while (--length != 0);


  RF230LayerP__HplRF230__spiSplitRead();
  RF230LayerP__SELN__set();
#line 489
  RF230LayerP__writeRegister(RF230_TRX_STATE, RF230_RX_ON);
#line 504
  if (timesync != 0) {
    * (timesync_absolute_t *)timesync = __nesc_ntoh_int32((unsigned char *)&* (timesync_relative_t *)timesync) + time32;
    }
  RF230LayerP__PacketTimeStamp__set(msg, time32);


  RF230LayerP__state = RF230LayerP__STATE_BUSY_TX_2_RX_ON;
  RF230LayerP__cmd = RF230LayerP__CMD_TRANSMIT;

  return SUCCESS;
}

# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static   void RandomCollisionLayerP__RadioAlarm__wait(uint16_t arg_0x404d5608){
#line 38
  RadioAlarmP__RadioAlarm__wait(1U, arg_0x404d5608);
#line 38
}
#line 38
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodP.nc"
static  uint8_t  NeighborhoodP__Neighborhood__insertNode(am_addr_t node)
{
  uint8_t i;
  uint8_t maxAge;

  if (NeighborhoodP__nodes[NeighborhoodP__last] == node) 
    {
      if (NeighborhoodP__ages[NeighborhoodP__last] == NeighborhoodP__time) {
        return NeighborhoodP__last;
        }
      NeighborhoodP__ages[NeighborhoodP__last] = ++NeighborhoodP__time;
      maxAge = 0x80;
    }
  else 
    {
      uint8_t oldest = 0;

#line 99
      maxAge = 0;

      for (i = 0; i < 5; ++i) 
        {
          uint8_t age;

          if (NeighborhoodP__nodes[i] == node) 
            {
              NeighborhoodP__last = i;
              if (NeighborhoodP__ages[i] == NeighborhoodP__time) {
                return i;
                }
              NeighborhoodP__ages[i] = ++NeighborhoodP__time;
              maxAge = 0x80;
              break;
            }

          age = NeighborhoodP__time - NeighborhoodP__ages[i];
          if (age > maxAge) 
            {
              maxAge = age;
              oldest = i;
            }
        }

      if (i == 5) 
        {
          NeighborhoodP__Neighborhood__evicted(oldest);

          NeighborhoodP__last = oldest;
          NeighborhoodP__nodes[oldest] = node;
          NeighborhoodP__ages[oldest] = ++NeighborhoodP__time;
          NeighborhoodP__flags[oldest] = 0;
        }
    }

  if ((NeighborhoodP__time & 0x7F) == 0x7F && maxAge >= 0x7F) 
    {
      for (i = 0; i < 5; ++i) 
        {
          if ((NeighborhoodP__ages[i] | 0x7F) != NeighborhoodP__time) {
            NeighborhoodP__ages[i] = NeighborhoodP__time & 0x80;
            }
        }
    }
  return NeighborhoodP__last;
}

# 322 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static   error_t Atm128SpiP__Resource__release(uint8_t id)
#line 322
{
  error_t error = Atm128SpiP__ResourceArbiter__release(id);

#line 324
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 324
    {
      if (!Atm128SpiP__ArbiterInfo__inUse()) {
          Atm128SpiP__stopSpi();
        }
    }
#line 328
    __nesc_atomic_end(__nesc_atomic); }
  return error;
}

# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RandomCollisionLayerP.nc"
static uint16_t RandomCollisionLayerP__getBackoff(uint16_t maxBackoff)
{
  uint16_t a;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      a = RandomCollisionLayerP__nextRandom;
      RandomCollisionLayerP__nextRandom += 273;
    }
#line 81
    __nesc_atomic_end(__nesc_atomic); }
  RandomCollisionLayerP__calcNextRandom__postTask();

  return a % maxBackoff + RandomCollisionLayerP__Config__getMinimumBackoff();
}

# 88 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TaskletC.nc"
static  void TaskletC__Tasklet__resume(void)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (--TaskletC__state != 0x80) {
        {
#line 93
          __nesc_atomic_end(__nesc_atomic); 
#line 93
          return;
        }
        }
#line 95
      TaskletC__state = 1;
    }
#line 96
    __nesc_atomic_end(__nesc_atomic); }

  TaskletC__doit();
}

# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/system/RandomMlcgC.nc"
static   uint32_t RandomMlcgC__Random__rand32(void)
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
      tmpseed = (uint64_t )33614U * (uint64_t )RandomMlcgC__seed;
      q = tmpseed;
      q = q >> 1;
      p = tmpseed >> 32;
      mlcg = p + q;
      if (mlcg & 0x80000000) {
          mlcg = mlcg & 0x7FFFFFFF;
          mlcg++;
        }
      RandomMlcgC__seed = mlcg;
    }
#line 73
    __nesc_atomic_end(__nesc_atomic); }
  return mlcg;
}

# 133 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__m_timers[num];

#line 136
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__updateFromTimer__postTask();
}

# 188 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static   uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Counter__get(void)
#line 188
{
  uint32_t now;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {


      uint8_t now8 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Timer__get();

      if (((Atm128_TIFR2_t )/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__TimerCtrl__getInterruptFlag()).bits.ocfa) {


        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__base + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Compare__get() + 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Timer__get();
        }
      else {

        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__base + now8;
        }
    }
#line 206
    __nesc_atomic_end(__nesc_atomic); }
#line 206
  return now;
}

# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0__IO__toggle(void)
#line 48
{
#line 48
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 48
    * (volatile uint8_t *)34U ^= 1 << 0;
#line 48
    __nesc_atomic_end(__nesc_atomic); }
}

# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void OscilloscopeC__Timer__startPeriodic(uint32_t arg_0x403428e0){
#line 53
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__Timer__startPeriodic(1U, arg_0x403428e0);
#line 53
}
#line 53
# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__fireTimers(uint32_t now)
{
  uint8_t num;

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__m_timers[num];

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
              /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__Timer__fired(num);
              break;
            }
        }
    }
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0__updateFromTimer__postTask();
}

# 146 "OscilloscopeC.nc"
static  void OscilloscopeC__Read1__readDone(uint16_t data)
#line 146
{
  __nesc_hton_uint16((unsigned char *)&OscilloscopeC__local.readings[OscilloscopeC__reading++], data);
  OscilloscopeC__report_received();
}

# 239 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Alarm__startAt(uint32_t nt0, uint32_t ndt)
#line 239
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__set = TRUE;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__t0 = nt0;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__dt = ndt;
    }
#line 245
    __nesc_atomic_end(__nesc_atomic); }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__setInterrupt();
}

#line 117
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__setInterrupt(void)
#line 117
{
  bool fired = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {



      uint8_t interrupt_in = 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Compare__get() - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Timer__get();
      uint8_t newOcr2A;
      uint8_t tifr2 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__TimerCtrl__getInterruptFlag();

#line 128
      ;
      if ((interrupt_in != 0 && interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__MINDT) || tifr2 & (1 << 1)) {
          if (interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__MINDT) {
              ;
            }
          else {
              ;
            }
          {
#line 136
            __nesc_atomic_end(__nesc_atomic); 
#line 136
            return;
          }
        }

      if (!/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__set) {
          newOcr2A = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__MAXT;
          ;
        }
      else 
        {
          uint32_t now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Counter__get();

#line 147
          ;

          if ((uint32_t )(now - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__t0) >= /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__dt) 
            {
              /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__set = FALSE;
              fired = TRUE;
              newOcr2A = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__MAXT;
            }
          else 
            {


              uint32_t alarm_in = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__t0 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__dt - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__base;

              if (alarm_in > /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__MAXT) {
                newOcr2A = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__MAXT;
                }
              else {
#line 163
                if ((uint8_t )alarm_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__MINDT) {
                  newOcr2A = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__MINDT;
                  }
                else {
#line 166
                  newOcr2A = alarm_in;
                  }
                }
            }
        }
#line 169
      newOcr2A--;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__setOcr2A(newOcr2A);
    }
#line 171
    __nesc_atomic_end(__nesc_atomic); }
  if (fired) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0__Alarm__fired();
    }
}

# 206 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
__attribute((interrupt))   void __vector_17(void)
#line 206
{
  HplAtm1281Timer1P__CompareA__fired();
}

__attribute((interrupt))   void __vector_18(void)
#line 210
{
  HplAtm1281Timer1P__CompareB__fired();
}

__attribute((interrupt))   void __vector_19(void)
#line 214
{
  HplAtm1281Timer1P__CompareC__fired();
}

__attribute((interrupt))   void __vector_16(void)
#line 218
{
  HplAtm1281Timer1P__Capture__captured(HplAtm1281Timer1P__Timer__get());
}

__attribute((interrupt))   void __vector_20(void)
#line 222
{
  HplAtm1281Timer1P__Timer__overflow();
}

# 222 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
__attribute((signal))   void __vector_13(void)
#line 222
{
  HplAtm1281Timer2AsyncP__stabiliseTimer2();


  HplAtm1281Timer2AsyncP__Compare__fired();
}


__attribute((signal))   void __vector_15(void)
#line 230
{
  HplAtm1281Timer2AsyncP__stabiliseTimer2();

  HplAtm1281Timer2AsyncP__Timer__overflow();
}

# 102 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
__attribute((signal))   void __vector_24(void)
#line 102
{
  HplAtm128SpiP__SPI__dataReady(HplAtm128SpiP__SPI__read());
}

# 127 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static   uint8_t Atm128SpiP__SpiByte__write(uint8_t tx)
#line 127
{
  Atm128SpiP__Spi__enableSpi(TRUE);
  Atm128SpiP__McuPowerState__update();
  Atm128SpiP__Spi__write(tx);
  while (!(* (volatile uint8_t *)(0x2D + 0x20) & 0x80)) ;
  return Atm128SpiP__Spi__read();
}

# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSigP.nc"
__attribute((signal))   void __vector_1(void)
#line 46
{
  HplAtm128InterruptSigP__IntSig0__fired();
}


__attribute((signal))   void __vector_2(void)
#line 51
{
  HplAtm128InterruptSigP__IntSig1__fired();
}


__attribute((signal))   void __vector_3(void)
#line 56
{
  HplAtm128InterruptSigP__IntSig2__fired();
}


__attribute((signal))   void __vector_4(void)
#line 61
{
  HplAtm128InterruptSigP__IntSig3__fired();
}


__attribute((signal))   void __vector_5(void)
#line 66
{
  HplAtm128InterruptSigP__IntSig4__fired();
}


__attribute((signal))   void __vector_6(void)
#line 71
{
  HplAtm128InterruptSigP__IntSig5__fired();
}


__attribute((signal))   void __vector_7(void)
#line 76
{
  HplAtm128InterruptSigP__IntSig6__fired();
}


__attribute((signal))   void __vector_8(void)
#line 81
{
  HplAtm128InterruptSigP__IntSig7__fired();
}

# 182 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBusP.nc"
__attribute((signal))   void __vector_39(void)
#line 182
{
  HplAtm128I2CBusP__I2C__commandComplete();
}

# 233 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300DigitalLogicP.nc"
static   void MDA300DigitalLogicP__I2CPacket__readDone(error_t error, uint16_t addr, uint8_t length, uint8_t *data)
#line 233
{
  uint8_t ChangedState;
  int i;

#line 236
  MDA300DigitalLogicP__i2c_data = *data;
  if (length != 1) 
    {
      MDA300DigitalLogicP__state = MDA300DigitalLogicP__IDLE;
      MDA300DigitalLogicP__Interrupt__enable();
      return;
    }


  if (MDA300DigitalLogicP__state == MDA300DigitalLogicP__INIT) 
    {
      MDA300DigitalLogicP__io_value = MDA300DigitalLogicP__i2c_data;
      MDA300DigitalLogicP__state = MDA300DigitalLogicP__IDLE;
      MDA300DigitalLogicP__Interrupt__enable();
    }

  if (MDA300DigitalLogicP__state == MDA300DigitalLogicP__GET_DATA) {
      ChangedState = (MDA300DigitalLogicP__io_value & ~MDA300DigitalLogicP__i2c_data) | (~MDA300DigitalLogicP__io_value & MDA300DigitalLogicP__i2c_data);
      for (i = 0; i < 8; i++) {
          if (!(MDA300DigitalLogicP__mode[i] & DIG_OUTPUT)) {
              if (ChangedState & (1 << i)) {
                  if (MDA300DigitalLogicP__mode[i] & RISING_EDGE) 
                    {
                      if ((MDA300DigitalLogicP__io_value & (1 << i)) == 0 && (MDA300DigitalLogicP__i2c_data & (1 << i)) != 0) {
                          if (EVENT & MDA300DigitalLogicP__mode[i]) {
#line 260
                            MDA300DigitalLogicP__Dio__readDone(i, MDA300DigitalLogicP__count[i]);
                            }
                          MDA300DigitalLogicP__count[i]++;
                        }
                    }
                  if (MDA300DigitalLogicP__mode[i] & FALLING_EDGE) 
                    {
                      if ((MDA300DigitalLogicP__io_value & (1 << i)) != 0 && (MDA300DigitalLogicP__i2c_data & (1 << i)) == 0) {
                          if (EVENT & MDA300DigitalLogicP__mode[i]) {
#line 268
                            MDA300DigitalLogicP__Dio__readDone(i, MDA300DigitalLogicP__count[i]);
                            }
                          MDA300DigitalLogicP__count[i]++;
                        }
                    }
                }
            }
        }
      MDA300DigitalLogicP__io_value = MDA300DigitalLogicP__i2c_data;
      MDA300DigitalLogicP__Interrupt__enable();
      MDA300DigitalLogicP__state = MDA300DigitalLogicP__IDLE;
    }
  return;
}

#line 220
static   void MDA300DigitalLogicP__I2CPacket__writeDone(error_t error, uint16_t addr, uint8_t length, uint8_t *data)
#line 220
{
  if (!error) {
      if ((MDA300DigitalLogicP__state == MDA300DigitalLogicP__SET_OUTPUT_HIGH || MDA300DigitalLogicP__state == MDA300DigitalLogicP__SET_OUTPUT_LOW) || MDA300DigitalLogicP__state == MDA300DigitalLogicP__SET_OUTPUT_TOGGLE) {

          MDA300DigitalLogicP__state = MDA300DigitalLogicP__IDLE;
        }
    }



  return;
}

