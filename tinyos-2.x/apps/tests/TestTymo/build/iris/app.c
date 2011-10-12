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
# 6 "/opt/CVSTinyOS/tinyos-2.x/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4310 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4311 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 11 "../../../tos/lib/net/tymo/routing.h"
typedef am_addr_t addr_t;
typedef nx_am_addr_t nx_addr_t;
typedef uint16_t seqnum_t;
typedef nx_uint16_t nx_seqnum_t;
#line 48
enum __nesc_unnamed4312 {
  AM_MULTIHOP = 9, 
  AM_DYMO = 8
};





#line 53
typedef enum __nesc_unnamed4313 {
  DYMO_RREQ = 10, 
  DYMO_RREP, 
  DYMO_RERR
} dymo_msg_t;







#line 60
typedef enum __nesc_unnamed4314 {
  ACTION_KEEP, 

  ACTION_DISCARD, 
  ACTION_DISCARD_MSG
} proc_action_t;






#line 67
typedef enum __nesc_unnamed4315 {
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
typedef enum __nesc_unnamed4316 {
  REASON_FULL, 
  REASON_OLD, 
  REASON_UNREACHABLE
} reason_t;
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/types/Leds.h"
enum __nesc_unnamed4317 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
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
enum __nesc_unnamed4321 {





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
enum __nesc_unnamed4322 {
  ATM128_SPI_CLK_DIVIDE_4 = 0, 
  ATM128_SPI_CLK_DIVIDE_16 = 1, 
  ATM128_SPI_CLK_DIVIDE_64 = 2, 
  ATM128_SPI_CLK_DIVIDE_128 = 3
};
#line 49
#line 40
typedef struct __nesc_unnamed4323 {
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
typedef union __nesc_unnamed4324 {
  uint8_t flat;
  Atm128SPIControl_s bits;
} Atm128SPIControl_t;

typedef Atm128SPIControl_t Atm128_SPCR_t;








#line 58
typedef struct __nesc_unnamed4325 {
  uint8_t spif : 1;
  uint8_t wcol : 1;
  uint8_t rsvd : 5;
  uint8_t spi2x : 1;
} 
Atm128SPIStatus_s;



#line 65
typedef union __nesc_unnamed4326 {
  uint8_t flat;
  Atm128SPIStatus_s bits;
} Atm128SPIStatus_t;

typedef Atm128SPIStatus_t Atm128_SPSR_t;

typedef uint8_t Atm128_SPDR_t;
# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
# 19 "../../../tos/lib/net/tymo/dymo/dymo_table.h"
#line 16
typedef struct rt_entry {
  rt_info_t info;
  uint8_t flags;
} rt_entry_t;






#line 21
typedef enum __nesc_unnamed4327 {
  FLAG_BROKEN = 0x01, 
  FLAG_NEW = 0x02, 
  FLAG_USED = 0x04, 
  FLAG_DELETED = 0x08
} rt_flag_t;








#line 28
typedef enum __nesc_unnamed4328 {
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

enum __nesc_unnamed4329 {
  AM_MHPACKET = AM_MULTIHOP
};
# 4 "build/iris/StorageVolumes.h"
enum __nesc_unnamed4330 {
  VOLUME_DYMODATA
};
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/types/Storage.h"
typedef uint8_t volume_id_t;
typedef uint32_t storage_addr_t;
typedef uint32_t storage_len_t;
typedef uint32_t storage_cookie_t;

enum __nesc_unnamed4331 {
  SEEK_BEGINNING = 0
};
# 36 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/mica2/chips/at45db/HplAt45db_chip.h"
enum __nesc_unnamed4332 {
  AT45_MAX_PAGES = 2048, 
  AT45_PAGE_SIZE = 264, 
  AT45_PAGE_SIZE_LOG2 = 8
};

typedef uint16_t at45page_t;
typedef uint16_t at45pageoffset_t;
# 16 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45db.h"
enum __nesc_unnamed4333 {
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
enum __nesc_unnamed4334 {
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
typedef TMilli TestM$Timer$precision_tag;
typedef uint8_t RF230PacketP$PacketRSSI$value_type;
typedef uint8_t RF230PacketP$PacketTransmitPower$value_type;
typedef uint16_t RF230PacketP$PacketSleepInterval$value_type;
typedef uint8_t RF230PacketP$PacketTimeSyncOffset$value_type;
typedef TRF230 RF230PacketP$PacketTimeStampRadio$precision_tag;
typedef uint32_t RF230PacketP$PacketTimeStampRadio$size_type;
typedef TRF230 RF230PacketP$LocalTimeRadio$precision_tag;
typedef uint8_t RF230PacketP$PacketLinkQuality$value_type;
typedef TMilli RF230PacketP$LocalTimeMilli$precision_tag;
typedef TMilli RF230PacketP$PacketTimeStampMilli$precision_tag;
typedef uint32_t RF230PacketP$PacketTimeStampMilli$size_type;
typedef uint16_t HplAtm1281Timer1P$CompareA$size_type;
typedef uint16_t HplAtm1281Timer1P$Capture$size_type;
typedef uint16_t HplAtm1281Timer1P$CompareB$size_type;
typedef uint16_t HplAtm1281Timer1P$CompareC$size_type;
typedef uint16_t HplAtm1281Timer1P$Timer$timer_size;
typedef uint16_t /*InitOneP.InitOne*/Atm128TimerInitC$0$timer_size;
typedef /*InitOneP.InitOne*/Atm128TimerInitC$0$timer_size /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$timer_size;
typedef TOne /*CounterOne16C.NCounter*/Atm128CounterC$0$frequency_tag;
typedef uint16_t /*CounterOne16C.NCounter*/Atm128CounterC$0$timer_size;
typedef /*CounterOne16C.NCounter*/Atm128CounterC$0$frequency_tag /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$precision_tag;
typedef /*CounterOne16C.NCounter*/Atm128CounterC$0$timer_size /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$size_type;
typedef /*CounterOne16C.NCounter*/Atm128CounterC$0$timer_size /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$timer_size;
typedef TMicro /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$to_precision_tag;
typedef uint32_t /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$to_size_type;
typedef TMicro /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$from_precision_tag;
typedef uint16_t /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$from_size_type;
typedef uint32_t /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$upper_count_type;
typedef /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$from_precision_tag /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$CounterFrom$precision_tag;
typedef /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$from_size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$CounterFrom$size_type;
typedef /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$to_precision_tag /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$Counter$precision_tag;
typedef /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$to_size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$Counter$size_type;
typedef TMicro /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag;
typedef /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC$0$LocalTime$precision_tag;
typedef /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$precision_tag;
typedef uint32_t /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$size_type;
enum HilTimerMilliC$__nesc_unnamed4335 {
  HilTimerMilliC$TIMER_COUNT = 4U
};
typedef TMilli /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC$0$precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC$0$precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Alarm$precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Alarm$size_type;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Counter$precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Counter$size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Compare$size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Timer$timer_size;
typedef uint8_t HplAtm1281Timer2AsyncP$Compare$size_type;
typedef uint8_t HplAtm1281Timer2AsyncP$Timer$timer_size;
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
typedef TRF230 RadioAlarmP$Alarm$precision_tag;
typedef uint16_t RadioAlarmP$Alarm$size_type;
typedef TMilli TrafficMonitorLayerP$Timer$precision_tag;
typedef uint16_t RandomMlcgC$SeedInit$parameter;
typedef TMicro RF230LayerP$BusyWait$precision_tag;
typedef uint16_t RF230LayerP$BusyWait$size_type;
typedef uint8_t RF230LayerP$PacketRSSI$value_type;
typedef TRF230 RF230LayerP$PacketTimeStamp$precision_tag;
typedef uint32_t RF230LayerP$PacketTimeStamp$size_type;
typedef uint8_t RF230LayerP$PacketTransmitPower$value_type;
typedef TRF230 RF230LayerP$LocalTime$precision_tag;
typedef uint8_t RF230LayerP$PacketTimeSyncOffset$value_type;
typedef uint8_t RF230LayerP$PacketLinkQuality$value_type;
typedef uint16_t HplRF230P$Capture$size_type;
typedef TOne /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$frequency_tag;
typedef uint16_t /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$timer_size;
typedef /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$frequency_tag /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$Alarm$precision_tag;
typedef /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$Alarm$size_type;
typedef /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$size_type;
typedef /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$timer_size;
enum /*HplRF230C.AlarmC*/AlarmOne16C$0$__nesc_unnamed4336 {
  AlarmOne16C$0$COMPARE_ID = 0U
};
typedef TMicro BusyWaitMicroC$BusyWait$precision_tag;
typedef uint16_t BusyWaitMicroC$BusyWait$size_type;
enum AMQueueP$__nesc_unnamed4337 {
  AMQueueP$NUM_CLIENTS = 2U
};
typedef TMilli /*DymoTableC.DymoTableM*/DymoTableM$0$Timer$precision_tag;
typedef TMilli /*DymoTableC.Timers*/VirtualizeTimerC$1$precision_tag;
typedef /*DymoTableC.Timers*/VirtualizeTimerC$1$precision_tag /*DymoTableC.Timers*/VirtualizeTimerC$1$TimerFrom$precision_tag;
typedef /*DymoTableC.Timers*/VirtualizeTimerC$1$precision_tag /*DymoTableC.Timers*/VirtualizeTimerC$1$Timer$precision_tag;
typedef TMilli /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Timer$precision_tag;
enum /*DymoServiceC.ConfigStorageC*/ConfigStorageC$0$__nesc_unnamed4338 {
  ConfigStorageC$0$CONFIG_ID = 0U, ConfigStorageC$0$RESOURCE_ID = 0U
};
typedef TMicro At45dbP$BusyWait$precision_tag;
typedef uint16_t At45dbP$BusyWait$size_type;
typedef TMicro HplAt45dbIOP$BusyWait$precision_tag;
typedef uint16_t HplAt45dbIOP$BusyWait$size_type;
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  void TestM$SplitControl$startDone(error_t arg_0x4032ae98);
#line 117
static  void TestM$SplitControl$stopDone(error_t arg_0x40331a78);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void TestM$stop$runTask(void);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Boot.nc"
static  void TestM$Boot$booted(void);
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Intercept.nc"
static  bool TestM$Intercept$forward(message_t *arg_0x40351c90, void *arg_0x40351e30, uint8_t arg_0x40350010);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *TestM$Receive$receive(message_t *arg_0x4034b5a0, void *arg_0x4034b740, uint8_t arg_0x4034b8c8);
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void TestM$MHSend$sendDone(message_t *arg_0x40354a98, error_t arg_0x40354c20);
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void TestM$Timer$fired(void);
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorConfig.nc"
static   uint16_t RF230ActiveMessageP$TrafficMonitorConfig$getUpdatePeriod(void);




static   uint16_t RF230ActiveMessageP$TrafficMonitorConfig$getChannelTime(message_t *arg_0x403c4940);
#line 79
static   void RF230ActiveMessageP$TrafficMonitorConfig$timerTick(void);
#line 43
static   am_addr_t RF230ActiveMessageP$TrafficMonitorConfig$getSender(message_t *arg_0x403c4e68);
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SlottedCollisionConfig.nc"
static   void RF230ActiveMessageP$SlottedCollisionConfig$default$timerTick(void);
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageConfig.nc"
static  error_t RF230ActiveMessageP$ActiveMessageConfig$checkPacket(message_t *arg_0x403cda00);
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SoftwareAckConfig.nc"
static   void RF230ActiveMessageP$SoftwareAckConfig$reportChannelError(void);
#line 68
static   void RF230ActiveMessageP$SoftwareAckConfig$createAckPacket(message_t *arg_0x403b9ba0, message_t *arg_0x403b9d50);
#line 38
static   bool RF230ActiveMessageP$SoftwareAckConfig$requiresAckWait(message_t *arg_0x403bbc88);
#line 50
static   bool RF230ActiveMessageP$SoftwareAckConfig$isAckPacket(message_t *arg_0x403ba8a8);






static   bool RF230ActiveMessageP$SoftwareAckConfig$verifyAckPacket(message_t *arg_0x403bae98, message_t *arg_0x403b9068);
#line 32
static   uint16_t RF230ActiveMessageP$SoftwareAckConfig$getAckTimeout(void);










static   void RF230ActiveMessageP$SoftwareAckConfig$setAckReceived(message_t *arg_0x403ba1f8, bool arg_0x403ba380);
#line 63
static   bool RF230ActiveMessageP$SoftwareAckConfig$requiresAckReply(message_t *arg_0x403b9668);
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static   void RF230ActiveMessageP$RadioAlarm$fired(void);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/UniqueConfig.nc"
static   void RF230ActiveMessageP$UniqueConfig$setSequenceNumber(message_t *arg_0x403bfc40, uint8_t arg_0x403bfdc8);





static   void RF230ActiveMessageP$UniqueConfig$reportChannelError(void);
#line 31
static   uint8_t RF230ActiveMessageP$UniqueConfig$getSequenceNumber(message_t *arg_0x403bf230);




static   am_addr_t RF230ActiveMessageP$UniqueConfig$getSender(message_t *arg_0x403bf740);
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RandomCollisionConfig.nc"
static   uint16_t RF230ActiveMessageP$RandomCollisionConfig$getCongestionBackoff(message_t *arg_0x403c97f0);
#line 29
static   uint16_t RF230ActiveMessageP$RandomCollisionConfig$getInitialBackoff(message_t *arg_0x403c92c0);










static   uint16_t RF230ActiveMessageP$RandomCollisionConfig$getMinimumBackoff(void);





static   uint16_t RF230ActiveMessageP$RandomCollisionConfig$getTransmitBarrier(message_t *arg_0x403c80d0);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230Config.nc"
static   uint8_t RF230ActiveMessageP$RF230Config$getHeaderLength(void);










static   uint8_t RF230ActiveMessageP$RF230Config$getDefaultChannel(void);
#line 46
static   uint8_t *RF230ActiveMessageP$RF230Config$getPayload(message_t *arg_0x403b5518);
#line 39
static   void RF230ActiveMessageP$RF230Config$setLength(message_t *arg_0x403b6db8, uint8_t arg_0x403b5010);
#line 34
static   uint8_t RF230ActiveMessageP$RF230Config$getLength(message_t *arg_0x403b6830);
#line 60
static   uint8_t RF230ActiveMessageP$RF230Config$getMaxLength(void);
#line 72
static   bool RF230ActiveMessageP$RF230Config$requiresRssiCca(message_t *arg_0x403b3758);
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/PacketField.nc"
static   void RF230PacketP$PacketRSSI$clear(message_t *arg_0x403a6b00);





static   void RF230PacketP$PacketRSSI$set(message_t *arg_0x403a5010, RF230PacketP$PacketRSSI$value_type arg_0x403a51a0);
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
static  void RF230PacketP$Packet$clear(message_t *arg_0x40348360);
#line 67
static  uint8_t RF230PacketP$Packet$payloadLength(message_t *arg_0x40348910);
#line 115
static  void *RF230PacketP$Packet$getPayload(message_t *arg_0x40346d70, uint8_t arg_0x40346ef8);
#line 95
static  uint8_t RF230PacketP$Packet$maxPayloadLength(void);
#line 83
static  void RF230PacketP$Packet$setPayloadLength(message_t *arg_0x40346010, uint8_t arg_0x40346198);
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/PacketField.nc"
static   RF230PacketP$PacketTransmitPower$value_type RF230PacketP$PacketTransmitPower$get(message_t *arg_0x403a6578);
#line 29
static   bool RF230PacketP$PacketTransmitPower$isSet(message_t *arg_0x403a6068);





static   RF230PacketP$PacketTimeSyncOffset$value_type RF230PacketP$PacketTimeSyncOffset$get(message_t *arg_0x403a6578);
#line 29
static   bool RF230PacketP$PacketTimeSyncOffset$isSet(message_t *arg_0x403a6068);
# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
static   void RF230PacketP$PacketTimeStampRadio$clear(message_t *arg_0x40386d10);







static   void RF230PacketP$PacketTimeStampRadio$set(message_t *arg_0x40385260, RF230PacketP$PacketTimeStampRadio$size_type arg_0x403853f0);
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc"
static   error_t RF230PacketP$PacketAcknowledgements$requestAck(message_t *arg_0x4037c818);
#line 74
static   bool RF230PacketP$PacketAcknowledgements$wasAcked(message_t *arg_0x4037b6c0);
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/PacketField.nc"
static   void RF230PacketP$PacketLinkQuality$set(message_t *arg_0x403a5010, RF230PacketP$PacketLinkQuality$value_type arg_0x403a51a0);
# 124 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
static   uint8_t IEEE154PacketP$IEEE154Packet$getDSN(message_t *arg_0x403d6cc0);
#line 79
static   bool IEEE154PacketP$IEEE154Packet$isAckFrame(message_t *arg_0x403daa20);
#line 172
static   void IEEE154PacketP$IEEE154Packet$set6LowPan(message_t *arg_0x403db120, uint8_t arg_0x403db2a8);
#line 160
static   void IEEE154PacketP$IEEE154Packet$setSrcAddr(message_t *arg_0x403dc540, uint16_t arg_0x403dc6d0);
#line 73
static   void IEEE154PacketP$IEEE154Packet$createDataFrame(message_t *arg_0x403da470);
#line 129
static   void IEEE154PacketP$IEEE154Packet$setDSN(message_t *arg_0x403df1c0, uint8_t arg_0x403df348);
#line 92
static   void IEEE154PacketP$IEEE154Packet$createAckReply(message_t *arg_0x403d95b0, message_t *arg_0x403d9760);
#line 39
static   ieee154_header_t *IEEE154PacketP$IEEE154Packet$getHeader(message_t *arg_0x403d3190);
#line 155
static   uint16_t IEEE154PacketP$IEEE154Packet$getSrcAddr(message_t *arg_0x403dc030);
#line 67
static   bool IEEE154PacketP$IEEE154Packet$isDataFrame(message_t *arg_0x403d2f00);
#line 184
static   void IEEE154PacketP$IEEE154Packet$setType(message_t *arg_0x403dbdb0, am_id_t arg_0x403e3010);
#line 103
static   bool IEEE154PacketP$IEEE154Packet$getAckRequired(message_t *arg_0x403d84a8);
#line 98
static   bool IEEE154PacketP$IEEE154Packet$verifyAckReply(message_t *arg_0x403d9d30, message_t *arg_0x403d9ee0);
#line 49
static   void IEEE154PacketP$IEEE154Packet$setLength(message_t *arg_0x403d3bd8, uint8_t arg_0x403d3d60);
#line 167
static   uint8_t IEEE154PacketP$IEEE154Packet$get6LowPan(message_t *arg_0x403dcbe8);
#line 190
static   bool IEEE154PacketP$IEEE154Packet$requiresAckWait(message_t *arg_0x403e3510);
#line 150
static   void IEEE154PacketP$IEEE154Packet$setDestAddr(message_t *arg_0x403dd968, uint16_t arg_0x403ddaf8);
#line 44
static   uint8_t IEEE154PacketP$IEEE154Packet$getLength(message_t *arg_0x403d36c8);
#line 140
static   void IEEE154PacketP$IEEE154Packet$setDestPan(message_t *arg_0x403dfd88, uint16_t arg_0x403dff18);
#line 109
static   void IEEE154PacketP$IEEE154Packet$setAckRequired(message_t *arg_0x403d89b8, bool arg_0x403d8b40);
#line 179
static   am_id_t IEEE154PacketP$IEEE154Packet$getType(message_t *arg_0x403db8b0);
#line 196
static   bool IEEE154PacketP$IEEE154Packet$requiresAckReply(message_t *arg_0x403e3a78);
#line 145
static   uint16_t IEEE154PacketP$IEEE154Packet$getDestAddr(message_t *arg_0x403dd458);
# 77 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t IEEE154PacketP$AMPacket$source(message_t *arg_0x4033f380);
#line 57
static  am_addr_t IEEE154PacketP$AMPacket$address(void);









static  am_addr_t IEEE154PacketP$AMPacket$destination(message_t *arg_0x40340d70);
#line 110
static  void IEEE154PacketP$AMPacket$setSource(message_t *arg_0x4033e208, am_addr_t arg_0x4033e398);
#line 92
static  void IEEE154PacketP$AMPacket$setDestination(message_t *arg_0x4033f958, am_addr_t arg_0x4033fae8);
#line 136
static  am_id_t IEEE154PacketP$AMPacket$type(message_t *arg_0x40344358);
#line 151
static  void IEEE154PacketP$AMPacket$setType(message_t *arg_0x403448f0, am_id_t arg_0x40344a78);
#line 125
static  bool IEEE154PacketP$AMPacket$isForMe(message_t *arg_0x4033eb50);
#line 176
static  void IEEE154PacketP$AMPacket$setGroup(message_t *arg_0x40343838, am_group_t arg_0x403439c8);







static  am_group_t IEEE154PacketP$AMPacket$localGroup(void);
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static   am_addr_t ActiveMessageAddressC$amAddress(void);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static   am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void);




static   am_group_t ActiveMessageAddressC$ActiveMessageAddress$amGroup(void);
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerCtrl16.nc"
static   uint8_t HplAtm1281Timer1P$TimerCtrl$getInterruptFlag(void);
#line 63
static   void HplAtm1281Timer1P$TimerCtrl$setControlB(uint8_t arg_0x404cde38);
#line 60
static   uint8_t HplAtm1281Timer1P$TimerCtrl$getControlB(void);
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void HplAtm1281Timer1P$CompareA$reset(void);
#line 45
static   void HplAtm1281Timer1P$CompareA$set(HplAtm1281Timer1P$CompareA$size_type arg_0x404de8c8);










static   void HplAtm1281Timer1P$CompareA$start(void);


static   void HplAtm1281Timer1P$CompareA$stop(void);
# 79 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static   void HplAtm1281Timer1P$Capture$setEdge(bool arg_0x404d4438);
#line 38
static   HplAtm1281Timer1P$Capture$size_type HplAtm1281Timer1P$Capture$get(void);
#line 55
static   void HplAtm1281Timer1P$Capture$reset(void);


static   void HplAtm1281Timer1P$Capture$start(void);


static   void HplAtm1281Timer1P$Capture$stop(void);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void HplAtm1281Timer1P$CompareB$default$fired(void);
#line 49
static   void HplAtm1281Timer1P$CompareC$default$fired(void);
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   bool HplAtm1281Timer1P$Timer$test(void);
#line 52
static   HplAtm1281Timer1P$Timer$timer_size HplAtm1281Timer1P$Timer$get(void);
#line 95
static   void HplAtm1281Timer1P$Timer$setScale(uint8_t arg_0x404d2350);
#line 58
static   void HplAtm1281Timer1P$Timer$set(HplAtm1281Timer1P$Timer$timer_size arg_0x404c6688);










static   void HplAtm1281Timer1P$Timer$start(void);
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

static   void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$set(void);
static   void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$clr(void);


static   void /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP$26$IO$makeInput(void);
#line 32
static   bool /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP$26$IO$get(void);
#line 30
static   void /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP$26$IO$clr(void);




static   void /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP$27$IO$makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP$27$IO$set(void);



static   void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$makeInput(void);
#line 30
static   void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$clr(void);




static   void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP$29$IO$makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP$29$IO$set(void);
static   void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP$29$IO$clr(void);


static   void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$makeInput(void);
#line 30
static   void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$clr(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t MeasureClockC$Init$init(void);
#line 51
static  error_t /*InitOneP.InitOne*/Atm128TimerInitC$0$Init$init(void);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$overflow(void);
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static   /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$size_type /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$get(void);






static   bool /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$isOverflowPending(void);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$overflow(void);
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$CounterFrom$overflow(void);
#line 53
static   /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$Counter$size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$Counter$get(void);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/LocalTime.nc"
static   uint32_t /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC$0$LocalTime$get(void);
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void);
# 98 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Alarm$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Alarm$getNow(void);
#line 92
static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Alarm$startAt(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Alarm$size_type arg_0x406639e0, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Alarm$size_type arg_0x40663b70);
#line 105
static   /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Alarm$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Alarm$getAlarm(void);
#line 62
static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Alarm$stop(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Init$init(void);
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static   /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Counter$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Counter$get(void);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Compare$fired(void);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Timer$overflow(void);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerCtrl8.nc"
static   uint8_t HplAtm1281Timer2AsyncP$TimerCtrl$getInterruptFlag(void);
#line 62
static   void HplAtm1281Timer2AsyncP$TimerCtrl$setControlB(uint8_t arg_0x40673b18);
#line 61
static   void HplAtm1281Timer2AsyncP$TimerCtrl$setControlA(uint8_t arg_0x40673670);
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
static   mcu_power_t HplAtm1281Timer2AsyncP$McuPowerOverride$lowestState(void);
# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerAsync.nc"
static   void HplAtm1281Timer2AsyncP$TimerAsync$setTimer2Asynchronous(void);
#line 75
static   int HplAtm1281Timer2AsyncP$TimerAsync$compareABusy(void);
# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   HplAtm1281Timer2AsyncP$Compare$size_type HplAtm1281Timer2AsyncP$Compare$get(void);





static   void HplAtm1281Timer2AsyncP$Compare$set(HplAtm1281Timer2AsyncP$Compare$size_type arg_0x404de8c8);










static   void HplAtm1281Timer2AsyncP$Compare$start(void);
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   HplAtm1281Timer2AsyncP$Timer$timer_size HplAtm1281Timer2AsyncP$Timer$get(void);
# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuSleep.nc"
static   void McuSleepC$McuSleep$sleep(void);
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static   void McuSleepC$McuPowerState$update(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void);
# 125 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static  uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void);
#line 118
static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t arg_0x4035d010, uint32_t arg_0x4035d1a0);
#line 67
static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void);
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void);
#line 125
static  uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$getNow(
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40706208);
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40706208);
# 140 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static  uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$getdt(
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40706208);
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40706208, 
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t arg_0x40359d78);
#line 118
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShotAt(
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40706208, 
# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t arg_0x4035d010, uint32_t arg_0x4035d1a0);
#line 62
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40706208, 
# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t arg_0x40358358);




static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40706208);
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$1$Counter$overflow(void);
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static   void RadioAlarmP$RadioAlarm$default$fired(
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
uint8_t arg_0x40732e00);
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static   void RadioAlarmP$RadioAlarm$wait(
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
uint8_t arg_0x40732e00, 
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
uint16_t arg_0x403eab60);




static   void RadioAlarmP$RadioAlarm$cancel(
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
uint8_t arg_0x40732e00);
# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static   bool RadioAlarmP$RadioAlarm$isFree(
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
uint8_t arg_0x40732e00);
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static   uint16_t RadioAlarmP$RadioAlarm$getNow(
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
uint8_t arg_0x40732e00);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void RadioAlarmP$Alarm$fired(void);
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
static   void RadioAlarmP$Tasklet$run(void);










static   void TaskletC$Tasklet$schedule(void);
#line 61
static  void TaskletC$Tasklet$suspend(void);






static  void TaskletC$Tasklet$resume(void);
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  void ActiveMessageLayerC$SubSend$sendDone(message_t *arg_0x40744878, error_t arg_0x40744a00);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *ActiveMessageLayerC$SubReceive$receive(message_t *arg_0x4034b5a0, void *arg_0x4034b740, uint8_t arg_0x4034b8c8);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t ActiveMessageLayerC$AMSend$send(
# 28 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
am_id_t arg_0x4074a9f0, 
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t arg_0x4034e690, message_t *arg_0x4034e840, uint8_t arg_0x4034e9c8);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *ActiveMessageLayerC$Snoop$default$receive(
# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
am_id_t arg_0x407499b0, 
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x4034b5a0, void *arg_0x4034b740, uint8_t arg_0x4034b8c8);
#line 67
static  message_t *ActiveMessageLayerC$Receive$default$receive(
# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
am_id_t arg_0x407493d8, 
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x4034b5a0, void *arg_0x4034b740, uint8_t arg_0x4034b8c8);
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  void IEEE154NetworkLayerP$SubSend$sendDone(message_t *arg_0x40744878, error_t arg_0x40744a00);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *IEEE154NetworkLayerP$SubReceive$receive(message_t *arg_0x4034b5a0, void *arg_0x4034b740, uint8_t arg_0x4034b8c8);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  error_t IEEE154NetworkLayerP$Send$send(message_t *arg_0x40745760, uint8_t arg_0x407458e8);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *IEEE154NetworkLayerP$NonTinyosReceive$default$receive(
# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154NetworkLayerP.nc"
uint8_t arg_0x4075c578, 
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x4034b5a0, void *arg_0x4034b740, uint8_t arg_0x4034b8c8);
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  error_t MessageBufferLayerP$SplitControl$start(void);
#line 109
static  error_t MessageBufferLayerP$SplitControl$stop(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t MessageBufferLayerP$SoftwareInit$init(void);
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioState.nc"
static   void MessageBufferLayerP$RadioState$done(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  error_t MessageBufferLayerP$Send$send(message_t *arg_0x40745760, uint8_t arg_0x407458e8);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
static   message_t *MessageBufferLayerP$RadioReceive$receive(message_t *arg_0x4078a9c0);
#line 35
static   bool MessageBufferLayerP$RadioReceive$header(message_t *arg_0x4078a2e8);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void MessageBufferLayerP$stateDoneTask$runTask(void);
#line 64
static  void MessageBufferLayerP$sendTask$runTask(void);
#line 64
static  void MessageBufferLayerP$deliverTask$runTask(void);
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static   void MessageBufferLayerP$RadioSend$ready(void);
#line 45
static   void MessageBufferLayerP$RadioSend$sendDone(error_t arg_0x40774118);
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
static   void MessageBufferLayerP$Tasklet$run(void);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t SchedulerBasicP$TaskBasic$postTask(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x402f61b0);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void SchedulerBasicP$TaskBasic$default$runTask(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x402f61b0);
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Scheduler.nc"
static  void SchedulerBasicP$Scheduler$init(void);
#line 61
static  void SchedulerBasicP$Scheduler$taskLoop(void);
#line 54
static  bool SchedulerBasicP$Scheduler$runNextTask(void);
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  void UniqueLayerP$SubSend$sendDone(message_t *arg_0x40744878, error_t arg_0x40744a00);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
static   message_t *UniqueLayerP$SubReceive$receive(message_t *arg_0x4078a9c0);
#line 35
static   bool UniqueLayerP$SubReceive$header(message_t *arg_0x4078a2e8);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  error_t UniqueLayerP$Send$send(message_t *arg_0x40745760, uint8_t arg_0x407458e8);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Neighborhood.nc"
static   void UniqueLayerP$Neighborhood$evicted(uint8_t arg_0x407df010);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t UniqueLayerP$Init$init(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodFlag.nc"
static   void NeighborhoodP$NeighborhoodFlag$clearAll(
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodP.nc"
uint8_t arg_0x40800bf0);
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodFlag.nc"
static   bool NeighborhoodP$NeighborhoodFlag$get(
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodP.nc"
uint8_t arg_0x40800bf0, 
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodFlag.nc"
uint8_t arg_0x407dd068);




static   void NeighborhoodP$NeighborhoodFlag$set(
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodP.nc"
uint8_t arg_0x40800bf0, 
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodFlag.nc"
uint8_t arg_0x407dd540);
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Neighborhood.nc"
static   uint8_t NeighborhoodP$Neighborhood$insertNode(am_addr_t arg_0x407e19a0);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t NeighborhoodP$Init$init(void);
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static   void TrafficMonitorLayerP$SubSend$ready(void);
#line 45
static   void TrafficMonitorLayerP$SubSend$sendDone(error_t arg_0x40774118);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorConfig.nc"
static   void TrafficMonitorLayerP$TrafficMonitorConfig$channelError(void);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
static   message_t *TrafficMonitorLayerP$SubReceive$receive(message_t *arg_0x4078a9c0);
#line 35
static   bool TrafficMonitorLayerP$SubReceive$header(message_t *arg_0x4078a2e8);
# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioState.nc"
static   error_t TrafficMonitorLayerP$RadioState$turnOff(void);
#line 45
static   error_t TrafficMonitorLayerP$RadioState$turnOn(void);
#line 58
static   void TrafficMonitorLayerP$SubState$done(void);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Neighborhood.nc"
static   void TrafficMonitorLayerP$Neighborhood$evicted(uint8_t arg_0x407df010);
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
static   void TrafficMonitorLayerP$Tasklet$run(void);
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static   error_t TrafficMonitorLayerP$RadioSend$send(message_t *arg_0x40775a30);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void TrafficMonitorLayerP$startStopTimer$runTask(void);
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void TrafficMonitorLayerP$Timer$fired(void);
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static   void RandomCollisionLayerP$SubSend$ready(void);
#line 45
static   void RandomCollisionLayerP$SubSend$sendDone(error_t arg_0x40774118);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
static   message_t *RandomCollisionLayerP$SubReceive$receive(message_t *arg_0x4078a9c0);
#line 35
static   bool RandomCollisionLayerP$SubReceive$header(message_t *arg_0x4078a2e8);
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static   void RandomCollisionLayerP$RadioAlarm$fired(void);
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static   error_t RandomCollisionLayerP$RadioSend$send(message_t *arg_0x40775a30);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void RandomCollisionLayerP$calcNextRandom$runTask(void);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Random.nc"
static   uint16_t RandomMlcgC$Random$rand16(void);
#line 35
static   uint32_t RandomMlcgC$Random$rand32(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t RandomMlcgC$Init$init(void);
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static   void SoftwareAckLayerP$SubSend$ready(void);
#line 45
static   void SoftwareAckLayerP$SubSend$sendDone(error_t arg_0x40774118);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
static   message_t *SoftwareAckLayerP$SubReceive$receive(message_t *arg_0x4078a9c0);
#line 35
static   bool SoftwareAckLayerP$SubReceive$header(message_t *arg_0x4078a2e8);
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static   void SoftwareAckLayerP$RadioAlarm$fired(void);
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static   error_t SoftwareAckLayerP$RadioSend$send(message_t *arg_0x40775a30);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioCCA.nc"
static   void RF230LayerP$RadioCCA$default$done(error_t arg_0x40788e10);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t RF230LayerP$SoftwareInit$init(void);
# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioState.nc"
static   error_t RF230LayerP$RadioState$turnOff(void);
#line 45
static   error_t RF230LayerP$RadioState$turnOn(void);
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static   void RF230LayerP$RadioAlarm$fired(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t RF230LayerP$PlatformInit$init(void);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static  void RF230LayerP$SpiResource$granted(void);
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static   error_t RF230LayerP$RadioSend$send(message_t *arg_0x40775a30);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static   void RF230LayerP$IRQ$captured(uint16_t arg_0x408a53d8);
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
static   void RF230LayerP$Tasklet$run(void);
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230.nc"
static   uint8_t HplRF230P$HplRF230$spiSplitRead(void);





static   uint8_t HplRF230P$HplRF230$spiSplitReadWrite(uint8_t arg_0x408a95d0);





static   uint8_t HplRF230P$HplRF230$spiWrite(uint8_t arg_0x408a9ae0);
#line 41
static   void HplRF230P$HplRF230$spiSplitWrite(uint8_t arg_0x408abc50);
#line 33
static   uint16_t HplRF230P$HplRF230$crcByte(uint16_t arg_0x408ab598, uint8_t arg_0x408ab720);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static   void HplRF230P$Capture$captured(HplRF230P$Capture$size_type arg_0x404d7d60);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t HplRF230P$PlatformInit$init(void);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static   void HplRF230P$IRQ$disable(void);
#line 42
static   error_t HplRF230P$IRQ$captureRisingEdge(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void Atm128SpiP$zeroTask$runTask(void);
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static   void Atm128SpiP$SpiPacket$default$sendDone(uint8_t *arg_0x4092eac8, uint8_t *arg_0x4092ec70, uint16_t arg_0x4092ee00, 
error_t arg_0x4092d010);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static  void Atm128SpiP$ResourceArbiter$granted(
# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40927790);
# 34 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SpiByte.nc"
static   uint8_t Atm128SpiP$SpiByte$write(uint8_t arg_0x40893ed0);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static   void Atm128SpiP$Spi$dataReady(uint8_t arg_0x40944350);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t Atm128SpiP$Resource$release(
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x4092a300);
# 87 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t Atm128SpiP$Resource$immediateRequest(
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x4092a300);
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t Atm128SpiP$Resource$request(
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x4092a300);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static  void Atm128SpiP$Resource$default$granted(
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x4092a300);
# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   bool Atm128SpiP$Resource$isOwner(
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x4092a300);
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static   void HplAtm128SpiP$SPI$sleep(void);
#line 66
static   void HplAtm128SpiP$SPI$initMaster(void);
#line 105
static   void HplAtm128SpiP$SPI$setMasterBit(bool arg_0x40941068);
#line 96
static   void HplAtm128SpiP$SPI$enableInterrupt(bool arg_0x40944898);
#line 80
static   uint8_t HplAtm128SpiP$SPI$read(void);
#line 125
static   void HplAtm128SpiP$SPI$setMasterDoubleSpeed(bool arg_0x4093f9f8);
#line 114
static   void HplAtm128SpiP$SPI$setClock(uint8_t arg_0x40940888);
#line 108
static   void HplAtm128SpiP$SPI$setClockPolarity(bool arg_0x409418c0);
#line 86
static   void HplAtm128SpiP$SPI$write(uint8_t arg_0x40945e00);
#line 99
static   void HplAtm128SpiP$SPI$enableSpi(bool arg_0x40943088);
#line 111
static   void HplAtm128SpiP$SPI$setClockPhase(bool arg_0x409400c0);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$Init$init(void);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static   error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(resource_client_id_t arg_0x4099d360);
#line 43
static   bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty(void);








static   bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(resource_client_id_t arg_0x4099f8d0);







static   resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue(void);
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$requested(
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409b5860);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$immediateRequested(
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409b5860);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$unconfigure(
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409b3428);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$configure(
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409b3428);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$release(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409b6ee8);
# 87 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$immediateRequest(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409b6ee8);
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$request(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409b6ee8);
# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$isOwner(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409b6ee8);
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
static   bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ArbiterInfo$inUse(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$runTask(void);
# 98 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$Alarm$size_type /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$Alarm$getNow(void);
#line 92
static   void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$Alarm$startAt(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$Alarm$size_type arg_0x406639e0, /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$Alarm$size_type arg_0x40663b70);
#line 55
static   void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$Alarm$start(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$Alarm$size_type arg_0x406648c8);






static   void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$Alarm$stop(void);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$fired(void);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$overflow(void);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/BusyWait.nc"
static   void BusyWaitMicroC$BusyWait$wait(BusyWaitMicroC$BusyWait$size_type arg_0x408a3bd0);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t /*DymoNetworkC.MHQueue.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t arg_0x4034e690, message_t *arg_0x4034e840, uint8_t arg_0x4034e9c8);
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  void /*DymoNetworkC.MHQueue.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(message_t *arg_0x40744878, error_t arg_0x40744a00);
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40a2b6a8, 
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0x40354a98, error_t arg_0x40354c20);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40a2ccf0, 
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
message_t *arg_0x40745760, uint8_t arg_0x407458e8);
#line 89
static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40a2ccf0, 
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
message_t *arg_0x40744878, error_t arg_0x40744a00);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void);
#line 64
static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask(void);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t /*DymoNetworkC.DymoQueue.AMQueueEntryP*/AMQueueEntryP$1$AMSend$send(am_addr_t arg_0x4034e690, message_t *arg_0x4034e840, uint8_t arg_0x4034e9c8);
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  void /*DymoNetworkC.DymoQueue.AMQueueEntryP*/AMQueueEntryP$1$Send$sendDone(message_t *arg_0x40744878, error_t arg_0x40744a00);
# 27 "../../../tos/lib/net/tymo/dymo/DymoTable.nc"
static  bool /*DymoTableC.DymoTableM*/DymoTableM$0$DymoTable$isSuperior(const rt_info_t *arg_0x40a76068, dymo_msg_t arg_0x40a76200);
#line 25
static  error_t /*DymoTableC.DymoTableM*/DymoTableM$0$DymoTable$update(const rt_info_t *arg_0x40a777b8, dymo_msg_t arg_0x40a77950);
# 26 "../../../tos/lib/net/tymo/RoutingTable.nc"
static  error_t /*DymoTableC.DymoTableM*/DymoTableM$0$RoutingTable$getRoute(addr_t arg_0x40a7ab18, rt_info_t *arg_0x40a7acc8);

static  error_t /*DymoTableC.DymoTableM*/DymoTableM$0$RoutingTable$getForwardingRoute(addr_t arg_0x40a79340, rt_info_t *arg_0x40a794f0);
# 16 "../../../tos/lib/net/tymo/LinkMonitor.nc"
static  void /*DymoTableC.DymoTableM*/DymoTableM$0$LinkMonitor$brokenLink(am_addr_t arg_0x40a62198);
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t /*DymoTableC.DymoTableM*/DymoTableM$0$StdControl$start(void);









static  error_t /*DymoTableC.DymoTableM*/DymoTableM$0$StdControl$stop(void);
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*DymoTableC.DymoTableM*/DymoTableM$0$Timer$fired(
# 22 "../../../tos/lib/net/tymo/dymo/DymoTableM.nc"
uint8_t arg_0x40a71168);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*DymoTableC.Timers*/VirtualizeTimerC$1$updateFromTimer$runTask(void);
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*DymoTableC.Timers*/VirtualizeTimerC$1$TimerFrom$fired(void);
#line 62
static  void /*DymoTableC.Timers*/VirtualizeTimerC$1$Timer$startOneShot(
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40706208, 
# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t arg_0x40358358);




static  void /*DymoTableC.Timers*/VirtualizeTimerC$1$Timer$stop(
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40706208);
# 24 "../../../tos/lib/net/tymo/RouteSelect.nc"
static  fw_action_t MHEngineM$RouteSelect$selectRoute(message_t *arg_0x40abe010, addr_t *arg_0x40abe1c0, uint8_t *arg_0x40abe368);
# 35 "../../../tos/lib/net/tymo/RoutingTable.nc"
static  void MHEngineM$RoutingTable$evicted(const rt_info_t *arg_0x40a799c8, reason_t arg_0x40a79b58);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t MHPacketM$Packet$payloadLength(message_t *arg_0x40348910);
#line 115
static  void *MHPacketM$Packet$getPayload(message_t *arg_0x40346d70, uint8_t arg_0x40346ef8);
#line 83
static  void MHPacketM$Packet$setPayloadLength(message_t *arg_0x40346010, uint8_t arg_0x40346198);
# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t MHPacketM$MHPacket$address(void);









static  am_addr_t MHPacketM$MHPacket$destination(message_t *arg_0x40340d70);
#line 110
static  void MHPacketM$MHPacket$setSource(message_t *arg_0x4033e208, am_addr_t arg_0x4033e398);
#line 92
static  void MHPacketM$MHPacket$setDestination(message_t *arg_0x4033f958, am_addr_t arg_0x4033fae8);
#line 136
static  am_id_t MHPacketM$MHPacket$type(message_t *arg_0x40344358);
#line 151
static  void MHPacketM$MHPacket$setType(message_t *arg_0x403448f0, am_id_t arg_0x40344a78);
#line 125
static  bool MHPacketM$MHPacket$isForMe(message_t *arg_0x4033eb50);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t */*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$SubReceive$receive(message_t *arg_0x4034b5a0, void *arg_0x4034b740, uint8_t arg_0x4034b8c8);
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$SubSend$sendDone(message_t *arg_0x40354a98, error_t arg_0x40354c20);
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Intercept.nc"
static  bool /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Intercept$default$forward(
# 23 "../../../tos/lib/net/tymo/ForwardingEngineM.nc"
uint8_t arg_0x40ae5188, 
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Intercept.nc"
message_t *arg_0x40351c90, void *arg_0x40351e30, uint8_t arg_0x40350010);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$AMSend$send(
# 21 "../../../tos/lib/net/tymo/ForwardingEngineM.nc"
uint8_t arg_0x40ae6288, 
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t arg_0x4034e690, message_t *arg_0x4034e840, uint8_t arg_0x4034e9c8);
#line 99
static  void /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$AMSend$default$sendDone(
# 21 "../../../tos/lib/net/tymo/ForwardingEngineM.nc"
uint8_t arg_0x40ae6288, 
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0x40354a98, error_t arg_0x40354c20);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t */*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Receive$default$receive(
# 22 "../../../tos/lib/net/tymo/ForwardingEngineM.nc"
uint8_t arg_0x40ae6bb8, 
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x4034b5a0, void *arg_0x4034b740, uint8_t arg_0x4034b8c8);
# 5 "../../../tos/lib/net/tymo/mh/MHControl.nc"
static  void /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$MHControl$default$sendFailed(message_t *arg_0x403731d8, uint8_t arg_0x40373360);
#line 3
static  void /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$MHControl$default$msgReceived(message_t *arg_0x4036ed10);
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Timer$fired(void);
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  error_t DymoEngineM$SplitControl$start(void);
# 36 "../../../tos/lib/net/tymo/dymo/DymoTable.nc"
static  void DymoEngineM$DymoTable$brokenRouteNeeded(const rt_info_t *arg_0x40a76c60);
#line 34
static  void DymoEngineM$DymoTable$routeNeeded(addr_t arg_0x40a76698);
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void DymoEngineM$AMSend$sendDone(message_t *arg_0x40354a98, error_t arg_0x40354c20);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void DymoEngineM$issueRERR$runTask(void);
# 36 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Mount.nc"
static  void DymoEngineM$Mount$mountDone(error_t arg_0x40b359e0);
# 35 "../../../tos/lib/net/tymo/RoutingTable.nc"
static  void DymoEngineM$RoutingTable$evicted(const rt_info_t *arg_0x40a799c8, reason_t arg_0x40a79b58);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *DymoEngineM$Receive$receive(message_t *arg_0x4034b5a0, void *arg_0x4034b740, uint8_t arg_0x4034b8c8);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void DymoEngineM$issueRREP$runTask(void);
#line 64
static  void DymoEngineM$forward$runTask(void);
#line 64
static  void DymoEngineM$issueRREQ$runTask(void);
# 95 "../../../tos/lib/net/tymo/dymo/DymoPacket.nc"
static  proc_action_t DymoEngineM$DymoPacket$infoProcessed(message_t *arg_0x40b3ab40, rt_info_t *arg_0x40b3acf0);
#line 85
static  proc_action_t DymoEngineM$DymoPacket$hopsProcessed(message_t *arg_0x40b3a190, uint8_t arg_0x40b3a320, uint8_t arg_0x40b3a4b0);
#line 101
static  void DymoEngineM$DymoPacket$messageProcessed(message_t *arg_0x40b383d8);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
static  void DymoEngineM$ConfigStorage$writeDone(storage_addr_t arg_0x40b2baf0, void *arg_0x40b2bc90, storage_len_t arg_0x40b2be20, 
error_t arg_0x40b2a010);
#line 133
static  void DymoEngineM$ConfigStorage$commitDone(error_t arg_0x40b2ab58);
#line 80
static  void DymoEngineM$ConfigStorage$readDone(storage_addr_t arg_0x40b2c630, void *arg_0x40b2c7d0, storage_len_t arg_0x40b2c960, 
error_t arg_0x40b2caf8);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void DymoPacketM$processMessage$runTask(void);
# 74 "../../../tos/lib/net/tymo/dymo/DymoPacket.nc"
static  void DymoPacketM$DymoPacket$startProcessing(message_t *arg_0x40b3b918, message_t *arg_0x40b3bac8);
#line 58
static  error_t DymoPacketM$DymoPacket$addInfo(message_t *arg_0x40b3b0d0, const rt_info_t *arg_0x40b3b2a0);
#line 45
static  void DymoPacketM$DymoPacket$createRM(message_t *arg_0x40b3c4f0, dymo_msg_t arg_0x40b3c688, 
const rt_info_t *arg_0x40b3c868, const rt_info_t *arg_0x40b3ca38);
#line 29
static  uint16_t DymoPacketM$DymoPacket$getSize(message_t *arg_0x40b3c010);
#line 24
static  dymo_msg_t DymoPacketM$DymoPacket$getType(message_t *arg_0x40b16ad8);
# 85 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45db.nc"
static  void ConfigStorageP$At45db$copyPageDone(error_t arg_0x40bd3330);
#line 125
static  void ConfigStorageP$At45db$syncDone(error_t arg_0x40bd10b0);
#line 143
static  void ConfigStorageP$At45db$flushDone(error_t arg_0x40bcf010);
#line 69
static  void ConfigStorageP$At45db$writeDone(error_t arg_0x40bd4588);
#line 105
static  void ConfigStorageP$At45db$eraseDone(error_t arg_0x40bd2188);
#line 183
static  void ConfigStorageP$At45db$computeCrcDone(error_t arg_0x40bf7330, uint16_t arg_0x40bf74c0);
#line 162
static  void ConfigStorageP$At45db$readDone(error_t arg_0x40bf8168);
# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static  int ConfigStorageP$BConfig$flipped(
# 27 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40bd8a20);
# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static  int ConfigStorageP$BConfig$isConfig(
# 27 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40bd8a20);
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static  int ConfigStorageP$BConfig$writeHook(
# 27 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40bd8a20);
# 25 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Mount.nc"
static  error_t ConfigStorageP$Mount$mount(
# 25 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40bdfe18);
# 36 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Mount.nc"
static  void ConfigStorageP$Mount$default$mountDone(
# 25 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40bdfe18, 
# 36 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Mount.nc"
error_t arg_0x40b359e0);
# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
static  void ConfigStorageP$BlockRead$computeCrcDone(
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40bf1b88, 
# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
storage_addr_t arg_0x40bf2cc0, storage_len_t arg_0x40bf2e50, 
uint16_t arg_0x40bf1010, error_t arg_0x40bf1198);
#line 67
static  void ConfigStorageP$BlockRead$readDone(
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40bf1b88, 
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
storage_addr_t arg_0x40bf3830, void *arg_0x40bf39d0, storage_len_t arg_0x40bf3b60, 
error_t arg_0x40bf3cf8);
# 112 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
static  void ConfigStorageP$BlockWrite$syncDone(
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40bf61f0, 
# 112 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
error_t arg_0x40becc30);
#line 71
static  void ConfigStorageP$BlockWrite$writeDone(
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40bf61f0, 
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
storage_addr_t arg_0x40bed338, void *arg_0x40bed4d8, storage_len_t arg_0x40bed668, 
error_t arg_0x40bed800);
#line 91
static  void ConfigStorageP$BlockWrite$eraseDone(
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40bf61f0, 
# 91 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
error_t arg_0x40bec258);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
static  error_t ConfigStorageP$ConfigStorage$read(
# 26 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40bde4c0, 
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
storage_addr_t arg_0x40b2e9a0, void *arg_0x40b2eb40, storage_len_t arg_0x40b2ecd0);
#line 110
static  void ConfigStorageP$ConfigStorage$default$writeDone(
# 26 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40bde4c0, 
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
storage_addr_t arg_0x40b2baf0, void *arg_0x40b2bc90, storage_len_t arg_0x40b2be20, 
error_t arg_0x40b2a010);
#line 124
static  error_t ConfigStorageP$ConfigStorage$commit(
# 26 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40bde4c0);
# 152 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
static  bool ConfigStorageP$ConfigStorage$valid(
# 26 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40bde4c0);
# 97 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
static  error_t ConfigStorageP$ConfigStorage$write(
# 26 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40bde4c0, 
# 97 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
storage_addr_t arg_0x40b2b100, void *arg_0x40b2b2a0, storage_len_t arg_0x40b2b430);
#line 133
static  void ConfigStorageP$ConfigStorage$default$commitDone(
# 26 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40bde4c0, 
# 133 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
error_t arg_0x40b2ab58);
#line 80
static  void ConfigStorageP$ConfigStorage$default$readDone(
# 26 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40bde4c0, 
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
storage_addr_t arg_0x40b2c630, void *arg_0x40b2c7d0, storage_len_t arg_0x40b2c960, 
error_t arg_0x40b2caf8);
# 85 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45db.nc"
static  void BlockStorageP$At45db$copyPageDone(error_t arg_0x40bd3330);
#line 125
static  void BlockStorageP$At45db$syncDone(error_t arg_0x40bd10b0);
#line 143
static  void BlockStorageP$At45db$flushDone(error_t arg_0x40bcf010);
#line 69
static  void BlockStorageP$At45db$writeDone(error_t arg_0x40bd4588);
#line 105
static  void BlockStorageP$At45db$eraseDone(error_t arg_0x40bd2188);
#line 183
static  void BlockStorageP$At45db$computeCrcDone(error_t arg_0x40bf7330, uint16_t arg_0x40bf74c0);
#line 162
static  void BlockStorageP$At45db$readDone(error_t arg_0x40bf8168);
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
static  error_t BlockStorageP$BlockWrite$write(
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x40c4c8e8, 
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
storage_addr_t arg_0x40bef898, void *arg_0x40befa38, storage_len_t arg_0x40befbc8);
#line 103
static  error_t BlockStorageP$BlockWrite$sync(
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x40c4c8e8);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
static  error_t BlockStorageP$BlockRead$read(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x40c4b3e0, 
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
storage_addr_t arg_0x40bf5e38, void *arg_0x40bf3010, storage_len_t arg_0x40bf31a0);
#line 83
static  error_t BlockStorageP$BlockRead$computeCrc(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x40c4b3e0, 
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
storage_addr_t arg_0x40bf2340, storage_len_t arg_0x40bf24d0, 
uint16_t arg_0x40bf2670);
#line 103
static  storage_len_t BlockStorageP$BlockRead$getSize(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x40c4b3e0);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static  at45page_t BlockStorageP$BConfig$npages(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x40c48b88);
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static  at45page_t BlockStorageP$BConfig$remap(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x40c48b88, 
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
at45page_t arg_0x40bd8440);
#line 44
static  void BlockStorageP$BConfig$writeContinue(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x40c48b88, 
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
error_t arg_0x40bd9ad8);
# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
static  at45page_t BlockStorageP$At45dbVolume$default$volumeSize(
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x40c46b68);
# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
static  at45page_t BlockStorageP$At45dbVolume$default$remap(
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x40c46b68, 
# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
at45page_t arg_0x40c46280);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t BlockStorageP$Resource$default$release(
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x40c48220);
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t BlockStorageP$Resource$default$request(
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x40c48220);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static  void BlockStorageP$Resource$granted(
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x40c48220);
# 163 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45db.nc"
static  void At45dbP$HplAt45db$crcDone(uint16_t arg_0x40c9f628);
#line 79
static  void At45dbP$HplAt45db$flushDone(void);
#line 185
static  void At45dbP$HplAt45db$writeDone(void);
#line 35
static  void At45dbP$HplAt45db$waitIdleDone(void);
#line 47
static  void At45dbP$HplAt45db$waitCompareDone(bool arg_0x40ca7710);
#line 106
static  void At45dbP$HplAt45db$eraseDone(void);
#line 93
static  void At45dbP$HplAt45db$compareDone(void);
#line 61
static  void At45dbP$HplAt45db$fillDone(void);
#line 141
static  void At45dbP$HplAt45db$readDone(void);
# 155 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45db.nc"
static  void At45dbP$At45db$read(at45page_t arg_0x40bcf558, at45pageoffset_t arg_0x40bcf6f0, 
void *arg_0x40bcf8a0, at45pageoffset_t arg_0x40bcfa38);
#line 80
static  void At45dbP$At45db$copyPage(at45page_t arg_0x40bd4ae8, at45page_t arg_0x40bd4c78);
#line 100
static  void At45dbP$At45db$erase(at45page_t arg_0x40bd3858, uint8_t arg_0x40bd39e8);
#line 120
static  void At45dbP$At45db$syncAll(void);
#line 62
static  void At45dbP$At45db$write(at45page_t arg_0x40bd5a28, at45pageoffset_t arg_0x40bd5bc0, 
void *arg_0x40bd5d70, at45pageoffset_t arg_0x40bd5f08);
#line 176
static  void At45dbP$At45db$computeCrc(at45page_t arg_0x40bf86c0, at45pageoffset_t arg_0x40bf8858, 
at45pageoffset_t arg_0x40bf8a00, uint16_t arg_0x40bf8b90);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void At45dbP$taskSuccess$runTask(void);
#line 64
static  void At45dbP$taskFail$runTask(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t At45dbP$Init$init(void);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45db.nc"
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$waitCompare(void);
#line 100
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$erase(uint8_t arg_0x40ca5df0, at45page_t arg_0x40ca3010);
#line 30
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$waitIdle(void);
#line 73
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$flush(uint8_t arg_0x40ca67b8, at45page_t arg_0x40ca6948);
#line 178
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$write(uint8_t arg_0x40c9fb18, at45page_t arg_0x40c9fca8, at45pageoffset_t arg_0x40c9fe40, 
uint8_t *arg_0x40c9e010, at45pageoffset_t arg_0x40c9e1a8);
#line 87
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$compare(uint8_t arg_0x40ca5330, at45page_t arg_0x40ca54c0);
#line 157
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$crc(uint8_t arg_0x40ca16b0, at45page_t arg_0x40ca1840, at45pageoffset_t arg_0x40ca19d8, 
at45pageoffset_t arg_0x40ca1b80, uint16_t arg_0x40ca1d10);
#line 119
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$readBuffer(uint8_t arg_0x40ca38b0, at45pageoffset_t arg_0x40ca3a48, 
uint8_t *arg_0x40ca3c00, uint16_t arg_0x40ca3d90);
#line 55
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$fill(uint8_t arg_0x40ca7c50, at45page_t arg_0x40ca7de0);
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
static   uint8_t HplAt45dbIOP$FlashSpi$write(uint8_t arg_0x40893ed0);
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
static   error_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$enqueue(resource_client_id_t arg_0x4099d360);
#line 43
static   bool /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$isEmpty(void);








static   bool /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$isEnqueued(resource_client_id_t arg_0x4099f8d0);







static   resource_client_id_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$dequeue(void);
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static   void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40d3ee40);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40d3c0f8);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40d3c0f8);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
static   error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$release(void);
#line 73
static   void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$default$requested(void);
#line 46
static   void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$default$granted(void);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Resource$release(
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40d3e500);
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Resource$request(
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40d3e500);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static  void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Resource$default$granted(
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40d3e500);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$grantedTask$runTask(void);
# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
static  at45page_t At45dbStorageManagerC$At45dbVolume$volumeSize(
# 18 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbStorageManagerC.nc"
volume_id_t arg_0x40d74068);
# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
static  at45page_t At45dbStorageManagerC$At45dbVolume$remap(
# 18 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbStorageManagerC.nc"
volume_id_t arg_0x40d74068, 
# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
at45page_t arg_0x40c46280);
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  error_t NetControlM$SplitControl$start(void);
#line 109
static  error_t NetControlM$SplitControl$stop(void);
#line 92
static  void NetControlM$AMControl$startDone(error_t arg_0x4032ae98);
#line 117
static  void NetControlM$AMControl$stopDone(error_t arg_0x40331a78);
#line 92
static  void NetControlM$EngineControl$startDone(error_t arg_0x4032ae98);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t LedsP$Init$init(void);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Leds.nc"
static   void LedsP$Leds$led0Toggle(void);
#line 72
static   void LedsP$Leds$led1Toggle(void);
#line 89
static   void LedsP$Leds$led2Toggle(void);
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  error_t TestM$SplitControl$start(void);
#line 109
static  error_t TestM$SplitControl$stop(void);
# 115 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
static  void *TestM$Packet$getPayload(message_t *arg_0x40346d70, uint8_t arg_0x40346ef8);
# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t TestM$MHPacket$address(void);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t TestM$MHSend$send(am_addr_t arg_0x4034e690, message_t *arg_0x4034e840, uint8_t arg_0x4034e9c8);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Leds.nc"
static   void TestM$Leds$led0Toggle(void);
#line 72
static   void TestM$Leds$led1Toggle(void);
#line 89
static   void TestM$Leds$led2Toggle(void);
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void TestM$Timer$startPeriodic(uint32_t arg_0x40359d78);
# 49 "TestM.nc"
enum TestM$__nesc_unnamed4339 {
#line 49
  TestM$stop = 0U
};
#line 49
typedef int TestM$__nesc_sillytask_stop[TestM$stop];
#line 23
message_t TestM$packet;

enum TestM$__nesc_unnamed4340 {
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
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorConfig.nc"
static   void RF230ActiveMessageP$TrafficMonitorConfig$channelError(void);
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SlottedCollisionConfig.nc"
static   void RF230ActiveMessageP$SlottedCollisionConfig$timerTick(void);
# 124 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
static   uint8_t RF230ActiveMessageP$IEEE154Packet$getDSN(message_t *arg_0x403d6cc0);
#line 79
static   bool RF230ActiveMessageP$IEEE154Packet$isAckFrame(message_t *arg_0x403daa20);
#line 129
static   void RF230ActiveMessageP$IEEE154Packet$setDSN(message_t *arg_0x403df1c0, uint8_t arg_0x403df348);
#line 92
static   void RF230ActiveMessageP$IEEE154Packet$createAckReply(message_t *arg_0x403d95b0, message_t *arg_0x403d9760);
#line 39
static   ieee154_header_t *RF230ActiveMessageP$IEEE154Packet$getHeader(message_t *arg_0x403d3190);
#line 155
static   uint16_t RF230ActiveMessageP$IEEE154Packet$getSrcAddr(message_t *arg_0x403dc030);
#line 67
static   bool RF230ActiveMessageP$IEEE154Packet$isDataFrame(message_t *arg_0x403d2f00);
#line 103
static   bool RF230ActiveMessageP$IEEE154Packet$getAckRequired(message_t *arg_0x403d84a8);
#line 98
static   bool RF230ActiveMessageP$IEEE154Packet$verifyAckReply(message_t *arg_0x403d9d30, message_t *arg_0x403d9ee0);
#line 49
static   void RF230ActiveMessageP$IEEE154Packet$setLength(message_t *arg_0x403d3bd8, uint8_t arg_0x403d3d60);
#line 190
static   bool RF230ActiveMessageP$IEEE154Packet$requiresAckWait(message_t *arg_0x403e3510);
#line 44
static   uint8_t RF230ActiveMessageP$IEEE154Packet$getLength(message_t *arg_0x403d36c8);
#line 196
static   bool RF230ActiveMessageP$IEEE154Packet$requiresAckReply(message_t *arg_0x403e3a78);
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
static  void RF230ActiveMessageP$Packet$clear(message_t *arg_0x40348360);
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static   uint16_t RF230ActiveMessageP$RadioAlarm$getNow(void);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   uint8_t RF230ActiveMessageP$RF230Config$getLength(message_t *msg);




static inline   void RF230ActiveMessageP$RF230Config$setLength(message_t *msg, uint8_t len);




static inline   uint8_t *RF230ActiveMessageP$RF230Config$getPayload(message_t *msg);




static __inline rf230packet_metadata_t *RF230ActiveMessageP$getMeta(message_t *msg);




static inline   uint8_t RF230ActiveMessageP$RF230Config$getHeaderLength(void);





static inline   uint8_t RF230ActiveMessageP$RF230Config$getMaxLength(void);





static inline   uint8_t RF230ActiveMessageP$RF230Config$getDefaultChannel(void);




static inline   bool RF230ActiveMessageP$RF230Config$requiresRssiCca(message_t *msg);






static inline   bool RF230ActiveMessageP$SoftwareAckConfig$requiresAckWait(message_t *msg);




static inline   bool RF230ActiveMessageP$SoftwareAckConfig$isAckPacket(message_t *msg);




static inline   bool RF230ActiveMessageP$SoftwareAckConfig$verifyAckPacket(message_t *data, message_t *ack);




static inline   bool RF230ActiveMessageP$SoftwareAckConfig$requiresAckReply(message_t *msg);




static inline   void RF230ActiveMessageP$SoftwareAckConfig$createAckPacket(message_t *data, message_t *ack);




static   void RF230ActiveMessageP$SoftwareAckConfig$setAckReceived(message_t *msg, bool acked);







static inline   uint16_t RF230ActiveMessageP$SoftwareAckConfig$getAckTimeout(void);




static inline   void RF230ActiveMessageP$SoftwareAckConfig$reportChannelError(void);






static inline   uint8_t RF230ActiveMessageP$UniqueConfig$getSequenceNumber(message_t *msg);




static inline   void RF230ActiveMessageP$UniqueConfig$setSequenceNumber(message_t *msg, uint8_t dsn);




static inline   am_addr_t RF230ActiveMessageP$UniqueConfig$getSender(message_t *msg);




static inline   void RF230ActiveMessageP$UniqueConfig$reportChannelError(void);






static inline  error_t RF230ActiveMessageP$ActiveMessageConfig$checkPacket(message_t *msg);
#line 184
enum RF230ActiveMessageP$__nesc_unnamed4341 {

  RF230ActiveMessageP$TRAFFIC_UPDATE_PERIOD = 100, 
  RF230ActiveMessageP$TRAFFIC_MAX_BYTES = (uint16_t )(RF230ActiveMessageP$TRAFFIC_UPDATE_PERIOD * 1000UL / 32)
};

static inline   uint16_t RF230ActiveMessageP$TrafficMonitorConfig$getUpdatePeriod(void);




static   uint16_t RF230ActiveMessageP$TrafficMonitorConfig$getChannelTime(message_t *msg);
#line 208
static inline   am_addr_t RF230ActiveMessageP$TrafficMonitorConfig$getSender(message_t *msg);




static inline   void RF230ActiveMessageP$TrafficMonitorConfig$timerTick(void);
#line 229
static inline   uint16_t RF230ActiveMessageP$RandomCollisionConfig$getMinimumBackoff(void);




static inline   uint16_t RF230ActiveMessageP$RandomCollisionConfig$getInitialBackoff(message_t *msg);




static inline   uint16_t RF230ActiveMessageP$RandomCollisionConfig$getCongestionBackoff(message_t *msg);




static inline   uint16_t RF230ActiveMessageP$RandomCollisionConfig$getTransmitBarrier(message_t *msg);
#line 260
static inline   void RF230ActiveMessageP$RadioAlarm$fired(void);
#line 291
static inline    void RF230ActiveMessageP$SlottedCollisionConfig$default$timerTick(void);
# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
static   void RF230PacketP$IEEE154Packet$createDataFrame(message_t *arg_0x403da470);
#line 49
static   void RF230PacketP$IEEE154Packet$setLength(message_t *arg_0x403d3bd8, uint8_t arg_0x403d3d60);
#line 44
static   uint8_t RF230PacketP$IEEE154Packet$getLength(message_t *arg_0x403d36c8);
#line 109
static   void RF230PacketP$IEEE154Packet$setAckRequired(message_t *arg_0x403d89b8, bool arg_0x403d8b40);
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
enum RF230PacketP$__nesc_unnamed4342 {

  RF230PacketP$PACKET_LENGTH_INCREASE = 
  sizeof(rf230packet_header_t ) - 1
   + sizeof(ieee154_footer_t )
};

static __inline rf230packet_metadata_t *RF230PacketP$getMeta(message_t *msg);






static inline  void RF230PacketP$Packet$clear(message_t *msg);






static __inline  void RF230PacketP$Packet$setPayloadLength(message_t *msg, uint8_t len);




static __inline  uint8_t RF230PacketP$Packet$payloadLength(message_t *msg);




static __inline  uint8_t RF230PacketP$Packet$maxPayloadLength(void);




static inline  void *RF230PacketP$Packet$getPayload(message_t *msg, uint8_t len);









static inline   error_t RF230PacketP$PacketAcknowledgements$requestAck(message_t *msg);
#line 114
static inline   bool RF230PacketP$PacketAcknowledgements$wasAcked(message_t *msg);
#line 135
static inline   void RF230PacketP$PacketLinkQuality$set(message_t *msg, uint8_t value);
#line 152
static inline   void RF230PacketP$PacketTimeStampRadio$clear(message_t *msg);




static   void RF230PacketP$PacketTimeStampRadio$set(message_t *msg, uint32_t value);
#line 193
static inline   bool RF230PacketP$PacketTransmitPower$isSet(message_t *msg);




static inline   uint8_t RF230PacketP$PacketTransmitPower$get(message_t *msg);
#line 227
static inline   void RF230PacketP$PacketRSSI$clear(message_t *msg);




static inline   void RF230PacketP$PacketRSSI$set(message_t *msg, uint8_t value);








static inline   bool RF230PacketP$PacketTimeSyncOffset$isSet(message_t *msg);




static inline   uint8_t RF230PacketP$PacketTimeSyncOffset$get(message_t *msg);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static   am_addr_t IEEE154PacketP$ActiveMessageAddress$amAddress(void);




static   am_group_t IEEE154PacketP$ActiveMessageAddress$amGroup(void);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
enum IEEE154PacketP$__nesc_unnamed4343 {

  IEEE154PacketP$IEEE154_DATA_FRAME_MASK = (((IEEE154_TYPE_MASK << IEEE154_FCF_FRAME_TYPE)
   | (1 << IEEE154_FCF_INTRAPAN))
   | (IEEE154_ADDR_MASK << IEEE154_FCF_DEST_ADDR_MODE))
   | (IEEE154_ADDR_MASK << IEEE154_FCF_SRC_ADDR_MODE), 

  IEEE154PacketP$IEEE154_DATA_FRAME_VALUE = (((IEEE154_TYPE_DATA << IEEE154_FCF_FRAME_TYPE)
   | (1 << IEEE154_FCF_INTRAPAN))
   | (IEEE154_ADDR_SHORT << IEEE154_FCF_DEST_ADDR_MODE))
   | (IEEE154_ADDR_SHORT << IEEE154_FCF_SRC_ADDR_MODE), 

  IEEE154PacketP$IEEE154_ACK_FRAME_LENGTH = 5, 
  IEEE154PacketP$IEEE154_ACK_FRAME_MASK = IEEE154_TYPE_MASK << IEEE154_FCF_FRAME_TYPE, 
  IEEE154PacketP$IEEE154_ACK_FRAME_VALUE = IEEE154_TYPE_ACK << IEEE154_FCF_FRAME_TYPE
};

static __inline ieee154_header_t *IEEE154PacketP$getHeader(message_t *msg);




static __inline   ieee154_header_t *IEEE154PacketP$IEEE154Packet$getHeader(message_t *msg);




static __inline   uint8_t IEEE154PacketP$IEEE154Packet$getLength(message_t *msg);




static __inline   void IEEE154PacketP$IEEE154Packet$setLength(message_t *msg, uint8_t length);
#line 88
static __inline   bool IEEE154PacketP$IEEE154Packet$isDataFrame(message_t *msg);




static __inline   void IEEE154PacketP$IEEE154Packet$createDataFrame(message_t *msg);




static __inline   bool IEEE154PacketP$IEEE154Packet$isAckFrame(message_t *msg);
#line 111
static __inline   void IEEE154PacketP$IEEE154Packet$createAckReply(message_t *data, message_t *ack);








static __inline   bool IEEE154PacketP$IEEE154Packet$verifyAckReply(message_t *data, message_t *ack);







static __inline   bool IEEE154PacketP$IEEE154Packet$getAckRequired(message_t *msg);




static __inline   void IEEE154PacketP$IEEE154Packet$setAckRequired(message_t *msg, bool ack);
#line 154
static __inline   uint8_t IEEE154PacketP$IEEE154Packet$getDSN(message_t *msg);




static __inline   void IEEE154PacketP$IEEE154Packet$setDSN(message_t *msg, uint8_t dsn);









static __inline   void IEEE154PacketP$IEEE154Packet$setDestPan(message_t *msg, uint16_t pan);




static __inline   uint16_t IEEE154PacketP$IEEE154Packet$getDestAddr(message_t *msg);




static __inline   void IEEE154PacketP$IEEE154Packet$setDestAddr(message_t *msg, uint16_t addr);




static __inline   uint16_t IEEE154PacketP$IEEE154Packet$getSrcAddr(message_t *msg);




static __inline   void IEEE154PacketP$IEEE154Packet$setSrcAddr(message_t *msg, uint16_t addr);






static __inline   uint8_t IEEE154PacketP$IEEE154Packet$get6LowPan(message_t *msg);




static __inline   void IEEE154PacketP$IEEE154Packet$set6LowPan(message_t *msg, uint8_t network);






static __inline   am_id_t IEEE154PacketP$IEEE154Packet$getType(message_t *msg);




static __inline   void IEEE154PacketP$IEEE154Packet$setType(message_t *msg, am_id_t type);




static inline   bool IEEE154PacketP$IEEE154Packet$requiresAckWait(message_t *msg);






static   bool IEEE154PacketP$IEEE154Packet$requiresAckReply(message_t *msg);
#line 238
static __inline  am_addr_t IEEE154PacketP$AMPacket$address(void);




static __inline  am_group_t IEEE154PacketP$AMPacket$localGroup(void);





static __inline  am_addr_t IEEE154PacketP$AMPacket$destination(message_t *msg);




static __inline  am_addr_t IEEE154PacketP$AMPacket$source(message_t *msg);




static __inline  void IEEE154PacketP$AMPacket$setDestination(message_t *msg, am_addr_t addr);




static __inline  void IEEE154PacketP$AMPacket$setSource(message_t *msg, am_addr_t addr);




static __inline  bool IEEE154PacketP$AMPacket$isForMe(message_t *msg);





static __inline  am_id_t IEEE154PacketP$AMPacket$type(message_t *msg);




static __inline  void IEEE154PacketP$AMPacket$setType(message_t *msg, am_id_t type);









static __inline  void IEEE154PacketP$AMPacket$setGroup(message_t *msg, am_group_t grp);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
am_addr_t ActiveMessageAddressC$addr = TOS_AM_ADDRESS;


am_group_t ActiveMessageAddressC$group = TOS_AM_GROUP;






static inline   am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void);
#line 82
static inline   am_group_t ActiveMessageAddressC$ActiveMessageAddress$amGroup(void);
#line 95
static   am_addr_t ActiveMessageAddressC$amAddress(void);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void HplAtm1281Timer1P$CompareA$fired(void);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static   void HplAtm1281Timer1P$Capture$captured(HplAtm1281Timer1P$Capture$size_type arg_0x404d7d60);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void HplAtm1281Timer1P$CompareB$fired(void);
#line 49
static   void HplAtm1281Timer1P$CompareC$fired(void);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void HplAtm1281Timer1P$Timer$overflow(void);
# 70 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline   uint16_t HplAtm1281Timer1P$Timer$get(void);


static inline   void HplAtm1281Timer1P$Timer$set(uint16_t t);








static inline   void HplAtm1281Timer1P$Timer$setScale(uint8_t s);










static inline   uint8_t HplAtm1281Timer1P$TimerCtrl$getControlB(void);
#line 106
static inline   void HplAtm1281Timer1P$TimerCtrl$setControlB(uint8_t x);
#line 125
static inline   uint8_t HplAtm1281Timer1P$TimerCtrl$getInterruptFlag(void);









static inline   void HplAtm1281Timer1P$Capture$setEdge(bool up);



static inline   void HplAtm1281Timer1P$Capture$reset(void);
static inline   void HplAtm1281Timer1P$CompareA$reset(void);



static inline   void HplAtm1281Timer1P$Timer$start(void);
static inline   void HplAtm1281Timer1P$Capture$start(void);
static inline   void HplAtm1281Timer1P$CompareA$start(void);




static inline   void HplAtm1281Timer1P$Capture$stop(void);
static inline   void HplAtm1281Timer1P$CompareA$stop(void);



static inline   bool HplAtm1281Timer1P$Timer$test(void);
#line 194
static inline   void HplAtm1281Timer1P$CompareA$set(uint16_t t);




static inline   uint16_t HplAtm1281Timer1P$Capture$get(void);






void __vector_17(void) __attribute((interrupt))   ;


static inline    void HplAtm1281Timer1P$CompareB$default$fired(void);
void __vector_18(void) __attribute((interrupt))   ;


static inline    void HplAtm1281Timer1P$CompareC$default$fired(void);
void __vector_19(void) __attribute((interrupt))   ;



void __vector_16(void) __attribute((interrupt))   ;



void __vector_20(void) __attribute((interrupt))   ;
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
#line 46
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$set(void);
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$clr(void);




static __inline   void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$makeOutput(void);
#line 45
static __inline   bool /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP$26$IO$get(void);

static __inline   void /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP$26$IO$clr(void);


static __inline   void /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP$26$IO$makeInput(void);
#line 46
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP$27$IO$set(void);





static __inline   void /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP$27$IO$makeOutput(void);
#line 47
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$clr(void);


static __inline   void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$makeInput(void);
#line 46
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP$29$IO$set(void);
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP$29$IO$clr(void);




static __inline   void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP$29$IO$makeOutput(void);
#line 47
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$clr(void);


static __inline   void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$makeInput(void);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/MeasureClockC.nc"
enum MeasureClockC$__nesc_unnamed4344 {


  MeasureClockC$MAGIC = 488 / (16 / PLATFORM_MHZ)
};

uint16_t MeasureClockC$cycles;

static inline  error_t MeasureClockC$Init$init(void);
# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$setScale(uint8_t arg_0x404d2350);
#line 58
static   void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$set(/*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$timer_size arg_0x404c6688);










static   void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$start(void);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline  error_t /*InitOneP.InitOne*/Atm128TimerInitC$0$Init$init(void);








static inline   void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$overflow(void);
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
static   /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$CounterFrom$size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$CounterFrom$get(void);






static   bool /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$CounterFrom$isOverflowPending(void);










static   void /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$Counter$overflow(void);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
/*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$upper_count_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$m_upper;

enum /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$__nesc_unnamed4345 {

  TransformCounterC$0$LOW_SHIFT_RIGHT = 0, 
  TransformCounterC$0$HIGH_SHIFT_LEFT = 8 * sizeof(/*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$from_size_type ) - /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$LOW_SHIFT_RIGHT, 
  TransformCounterC$0$NUM_UPPER_BITS = 8 * sizeof(/*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$to_size_type ) - 8 * sizeof(/*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$from_size_type ) + 0, 



  TransformCounterC$0$OVERFLOW_MASK = /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$NUM_UPPER_BITS ? ((/*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$upper_count_type )2 << (/*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$NUM_UPPER_BITS - 1)) - 1 : 0
};

static   /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$to_size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$Counter$get(void);
#line 122
static inline   void /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$CounterFrom$overflow(void);
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static   /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$size_type /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$get(void);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline   uint32_t /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC$0$LocalTime$get(void);




static inline   void /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerCtrl8.nc"
static   uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$TimerCtrl$getInterruptFlag(void);
#line 62
static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$TimerCtrl$setControlB(uint8_t arg_0x40673b18);
#line 61
static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$TimerCtrl$setControlA(uint8_t arg_0x40673670);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Alarm$fired(void);
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Counter$overflow(void);
# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerAsync.nc"
static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$TimerAsync$setTimer2Asynchronous(void);
#line 75
static   int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$TimerAsync$compareABusy(void);
# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Compare$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Compare$get(void);





static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Compare$set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Compare$size_type arg_0x404de8c8);










static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Compare$start(void);
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Timer$timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Timer$get(void);
# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$set;
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$t0;
#line 63
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$dt;
 uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$base;



enum /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$__nesc_unnamed4346 {
  Atm1281AlarmAsyncP$0$MINDT = 2, 
  Atm1281AlarmAsyncP$0$MAXT = 230
};



static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$setInterrupt(void);


static inline  error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Init$init(void);
#line 101
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$setOcr2A(uint8_t n);
#line 117
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$setInterrupt(void);
#line 176
static inline   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Compare$fired(void);
#line 188
static   uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Counter$get(void);
#line 231
static inline   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Alarm$stop(void);







static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Alarm$startAt(uint32_t nt0, uint32_t ndt);









static inline   uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Alarm$getNow(void);



static inline   uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Alarm$getAlarm(void);



static inline   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Timer$overflow(void);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void HplAtm1281Timer2AsyncP$Compare$fired(void);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void HplAtm1281Timer2AsyncP$Timer$overflow(void);
# 79 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline   uint8_t HplAtm1281Timer2AsyncP$Timer$get(void);
#line 111
static inline   void HplAtm1281Timer2AsyncP$TimerCtrl$setControlA(uint8_t x);





static inline   void HplAtm1281Timer2AsyncP$TimerCtrl$setControlB(uint8_t x);
#line 134
static inline   uint8_t HplAtm1281Timer2AsyncP$TimerCtrl$getInterruptFlag(void);
#line 161
static inline   void HplAtm1281Timer2AsyncP$Compare$start(void);









static inline   uint8_t HplAtm1281Timer2AsyncP$Compare$get(void);


static inline   void HplAtm1281Timer2AsyncP$Compare$set(uint8_t t);









static __inline void HplAtm1281Timer2AsyncP$stabiliseTimer2(void);
#line 199
static inline   mcu_power_t HplAtm1281Timer2AsyncP$McuPowerOverride$lowestState(void);
#line 222
void __vector_13(void) __attribute((signal))   ;







void __vector_15(void) __attribute((signal))   ;
#line 246
static inline   void HplAtm1281Timer2AsyncP$TimerAsync$setTimer2Asynchronous(void);
#line 258
static inline   int HplAtm1281Timer2AsyncP$TimerAsync$compareABusy(void);
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
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask(void);
# 98 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow(void);
#line 92
static   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type arg_0x406639e0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type arg_0x40663b70);
#line 105
static   /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(void);
#line 62
static   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop(void);
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired(void);
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$__nesc_unnamed4347 {
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
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(uint32_t arg_0x4035d010, uint32_t arg_0x4035d1a0);
#line 67
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop(void);




static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40706208);
#line 60
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4348 {
#line 60
  VirtualizeTimerC$0$updateFromTimer = 2U
};
#line 60
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer];
#line 42
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4349 {

  VirtualizeTimerC$0$NUM_TIMERS = 4, 
  VirtualizeTimerC$0$END_OF_LIST = 255
};








#line 48
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4350 {

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
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static   void RadioAlarmP$RadioAlarm$fired(
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
uint8_t arg_0x40732e00);
# 98 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   RadioAlarmP$Alarm$size_type RadioAlarmP$Alarm$getNow(void);
#line 55
static   void RadioAlarmP$Alarm$start(RadioAlarmP$Alarm$size_type arg_0x406648c8);






static   void RadioAlarmP$Alarm$stop(void);
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
static   void RadioAlarmP$Tasklet$schedule(void);
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
 uint8_t RadioAlarmP$state;
enum RadioAlarmP$__nesc_unnamed4351 {

  RadioAlarmP$STATE_READY = 0, 
  RadioAlarmP$STATE_WAIT = 1, 
  RadioAlarmP$STATE_FIRED = 2
};

 uint8_t RadioAlarmP$alarm;

static inline   void RadioAlarmP$Alarm$fired(void);










static __inline   uint16_t RadioAlarmP$RadioAlarm$getNow(uint8_t id);




static inline   void RadioAlarmP$Tasklet$run(void);








static inline    void RadioAlarmP$RadioAlarm$default$fired(uint8_t id);



static __inline   bool RadioAlarmP$RadioAlarm$isFree(uint8_t id);




static inline   void RadioAlarmP$RadioAlarm$wait(uint8_t id, uint16_t timeout);








static inline   void RadioAlarmP$RadioAlarm$cancel(uint8_t id);
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
static   void TaskletC$Tasklet$run(void);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TaskletC.nc"
uint8_t TaskletC$state;

static void TaskletC$doit(void);
#line 83
static __inline  void TaskletC$Tasklet$suspend(void);




static  void TaskletC$Tasklet$resume(void);
#line 101
static   void TaskletC$Tasklet$schedule(void);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  error_t ActiveMessageLayerC$SubSend$send(message_t *arg_0x40745760, uint8_t arg_0x407458e8);
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void ActiveMessageLayerC$AMSend$sendDone(
# 28 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
am_id_t arg_0x4074a9f0, 
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0x40354a98, error_t arg_0x40354c20);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *ActiveMessageLayerC$Snoop$receive(
# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
am_id_t arg_0x407499b0, 
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x4034b5a0, void *arg_0x4034b740, uint8_t arg_0x4034b8c8);
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageConfig.nc"
static  error_t ActiveMessageLayerC$Config$checkPacket(message_t *arg_0x403cda00);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *ActiveMessageLayerC$Receive$receive(
# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
am_id_t arg_0x407493d8, 
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x4034b5a0, void *arg_0x4034b740, uint8_t arg_0x4034b8c8);
# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t ActiveMessageLayerC$AMPacket$address(void);
#line 110
static  void ActiveMessageLayerC$AMPacket$setSource(message_t *arg_0x4033e208, am_addr_t arg_0x4033e398);
#line 92
static  void ActiveMessageLayerC$AMPacket$setDestination(message_t *arg_0x4033f958, am_addr_t arg_0x4033fae8);
#line 136
static  am_id_t ActiveMessageLayerC$AMPacket$type(message_t *arg_0x40344358);
#line 151
static  void ActiveMessageLayerC$AMPacket$setType(message_t *arg_0x403448f0, am_id_t arg_0x40344a78);
#line 125
static  bool ActiveMessageLayerC$AMPacket$isForMe(message_t *arg_0x4033eb50);
#line 176
static  void ActiveMessageLayerC$AMPacket$setGroup(message_t *arg_0x40343838, am_group_t arg_0x403439c8);







static  am_group_t ActiveMessageLayerC$AMPacket$localGroup(void);
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
static  error_t ActiveMessageLayerC$AMSend$send(am_id_t id, am_addr_t addr, message_t *msg, uint8_t len);
#line 61
static __inline  void ActiveMessageLayerC$SubSend$sendDone(message_t *msg, error_t error);
#line 87
static inline  message_t *ActiveMessageLayerC$SubReceive$receive(message_t *msg, void *payload, uint8_t len);










static inline   message_t *ActiveMessageLayerC$Receive$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len);




static inline   message_t *ActiveMessageLayerC$Snoop$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  error_t IEEE154NetworkLayerP$SubSend$send(message_t *arg_0x40745760, uint8_t arg_0x407458e8);
#line 89
static  void IEEE154NetworkLayerP$Send$sendDone(message_t *arg_0x40744878, error_t arg_0x40744a00);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *IEEE154NetworkLayerP$NonTinyosReceive$receive(
# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154NetworkLayerP.nc"
uint8_t arg_0x4075c578, 
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x4034b5a0, void *arg_0x4034b740, uint8_t arg_0x4034b8c8);
# 172 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
static   void IEEE154NetworkLayerP$IEEE154Packet$set6LowPan(message_t *arg_0x403db120, uint8_t arg_0x403db2a8);
#line 167
static   uint8_t IEEE154NetworkLayerP$IEEE154Packet$get6LowPan(message_t *arg_0x403dcbe8);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *IEEE154NetworkLayerP$Receive$receive(message_t *arg_0x4034b5a0, void *arg_0x4034b740, uint8_t arg_0x4034b8c8);
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154NetworkLayerP.nc"
static inline  error_t IEEE154NetworkLayerP$Send$send(message_t *msg, uint8_t len);
#line 69
static inline  void IEEE154NetworkLayerP$SubSend$sendDone(message_t *msg, error_t error);




static inline  message_t *IEEE154NetworkLayerP$SubReceive$receive(message_t *msg, void *payload, uint8_t len);








static inline   message_t *IEEE154NetworkLayerP$NonTinyosReceive$default$receive(uint8_t network, message_t *msg, void *payload, uint8_t len);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  void MessageBufferLayerP$SplitControl$startDone(error_t arg_0x4032ae98);
#line 117
static  void MessageBufferLayerP$SplitControl$stopDone(error_t arg_0x40331a78);
# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioState.nc"
static   error_t MessageBufferLayerP$RadioState$turnOff(void);
#line 45
static   error_t MessageBufferLayerP$RadioState$turnOn(void);
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  void MessageBufferLayerP$Send$sendDone(message_t *arg_0x40744878, error_t arg_0x40744a00);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t MessageBufferLayerP$Packet$payloadLength(message_t *arg_0x40348910);
#line 115
static  void *MessageBufferLayerP$Packet$getPayload(message_t *arg_0x40346d70, uint8_t arg_0x40346ef8);
#line 95
static  uint8_t MessageBufferLayerP$Packet$maxPayloadLength(void);
#line 83
static  void MessageBufferLayerP$Packet$setPayloadLength(message_t *arg_0x40346010, uint8_t arg_0x40346198);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t MessageBufferLayerP$stateDoneTask$postTask(void);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *MessageBufferLayerP$Receive$receive(message_t *arg_0x4034b5a0, void *arg_0x4034b740, uint8_t arg_0x4034b8c8);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t MessageBufferLayerP$sendTask$postTask(void);
#line 56
static   error_t MessageBufferLayerP$deliverTask$postTask(void);
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static   error_t MessageBufferLayerP$RadioSend$send(message_t *arg_0x40775a30);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
static  void MessageBufferLayerP$Tasklet$suspend(void);






static  void MessageBufferLayerP$Tasklet$resume(void);
# 101 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
enum MessageBufferLayerP$__nesc_unnamed4352 {
#line 101
  MessageBufferLayerP$stateDoneTask = 3U
};
#line 101
typedef int MessageBufferLayerP$__nesc_sillytask_stateDoneTask[MessageBufferLayerP$stateDoneTask];
#line 139
enum MessageBufferLayerP$__nesc_unnamed4353 {
#line 139
  MessageBufferLayerP$sendTask = 4U
};
#line 139
typedef int MessageBufferLayerP$__nesc_sillytask_sendTask[MessageBufferLayerP$sendTask];
#line 267
enum MessageBufferLayerP$__nesc_unnamed4354 {
#line 267
  MessageBufferLayerP$deliverTask = 5U
};
#line 267
typedef int MessageBufferLayerP$__nesc_sillytask_deliverTask[MessageBufferLayerP$deliverTask];
#line 52
 uint8_t MessageBufferLayerP$state;
enum MessageBufferLayerP$__nesc_unnamed4355 {

  MessageBufferLayerP$STATE_READY = 0, 
  MessageBufferLayerP$STATE_TX_PENDING = 1, 
  MessageBufferLayerP$STATE_TX_SEND = 2, 
  MessageBufferLayerP$STATE_TX_DONE = 3, 
  MessageBufferLayerP$STATE_TURN_ON = 4, 
  MessageBufferLayerP$STATE_TURN_OFF = 5
};

static inline  error_t MessageBufferLayerP$SplitControl$start(void);
#line 82
static inline  error_t MessageBufferLayerP$SplitControl$stop(void);
#line 101
static inline  void MessageBufferLayerP$stateDoneTask$runTask(void);
#line 117
static inline   void MessageBufferLayerP$RadioState$done(void);
#line 132
message_t *MessageBufferLayerP$txMsg;
error_t MessageBufferLayerP$txError;
uint8_t MessageBufferLayerP$retries;


enum MessageBufferLayerP$__nesc_unnamed4356 {
#line 137
  MessageBufferLayerP$MAX_RETRIES = 5
};
static inline  void MessageBufferLayerP$sendTask$runTask(void);
#line 170
static inline   void MessageBufferLayerP$RadioSend$sendDone(error_t error);







static inline  error_t MessageBufferLayerP$Send$send(message_t *msg, uint8_t len);
#line 195
static inline   void MessageBufferLayerP$RadioSend$ready(void);





static inline   void MessageBufferLayerP$Tasklet$run(void);
#line 236
enum MessageBufferLayerP$__nesc_unnamed4357 {

  MessageBufferLayerP$RECEIVE_QUEUE_SIZE = 3
};

message_t MessageBufferLayerP$receiveQueueData[MessageBufferLayerP$RECEIVE_QUEUE_SIZE];
message_t *MessageBufferLayerP$receiveQueue[MessageBufferLayerP$RECEIVE_QUEUE_SIZE];

uint8_t MessageBufferLayerP$receiveQueueHead;
uint8_t MessageBufferLayerP$receiveQueueSize;

static inline  error_t MessageBufferLayerP$SoftwareInit$init(void);









static inline   bool MessageBufferLayerP$RadioReceive$header(message_t *msg);









static inline  void MessageBufferLayerP$deliverTask$runTask(void);
#line 298
static inline   message_t *MessageBufferLayerP$RadioReceive$receive(message_t *msg);
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
uint8_t arg_0x402f61b0);
# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuSleep.nc"
static   void SchedulerBasicP$McuSleep$sleep(void);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP$__nesc_unnamed4358 {

  SchedulerBasicP$NUM_TASKS = 23U, 
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
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  error_t UniqueLayerP$SubSend$send(message_t *arg_0x40745760, uint8_t arg_0x407458e8);
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodFlag.nc"
static   bool UniqueLayerP$NeighborhoodFlag$get(uint8_t arg_0x407dd068);




static   void UniqueLayerP$NeighborhoodFlag$set(uint8_t arg_0x407dd540);
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  void UniqueLayerP$Send$sendDone(message_t *arg_0x40744878, error_t arg_0x40744a00);
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Neighborhood.nc"
static   uint8_t UniqueLayerP$Neighborhood$insertNode(am_addr_t arg_0x407e19a0);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
static   message_t *UniqueLayerP$RadioReceive$receive(message_t *arg_0x4078a9c0);
#line 35
static   bool UniqueLayerP$RadioReceive$header(message_t *arg_0x4078a2e8);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/UniqueConfig.nc"
static   void UniqueLayerP$UniqueConfig$setSequenceNumber(message_t *arg_0x403bfc40, uint8_t arg_0x403bfdc8);





static   void UniqueLayerP$UniqueConfig$reportChannelError(void);
#line 31
static   uint8_t UniqueLayerP$UniqueConfig$getSequenceNumber(message_t *arg_0x403bf230);




static   am_addr_t UniqueLayerP$UniqueConfig$getSender(message_t *arg_0x403bf740);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/UniqueLayerP.nc"
uint8_t UniqueLayerP$sequenceNumber;

static inline  error_t UniqueLayerP$Init$init(void);





static inline  error_t UniqueLayerP$Send$send(message_t *msg, uint8_t len);










static inline  void UniqueLayerP$SubSend$sendDone(message_t *msg, error_t error);
#line 84
static inline   bool UniqueLayerP$SubReceive$header(message_t *msg);





 uint8_t UniqueLayerP$receivedNumbers[5];

static inline   message_t *UniqueLayerP$SubReceive$receive(message_t *msg);
#line 115
static inline   void UniqueLayerP$Neighborhood$evicted(uint8_t index);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Neighborhood.nc"
static   void NeighborhoodP$Neighborhood$evicted(uint8_t arg_0x407df010);
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodP.nc"
 am_addr_t NeighborhoodP$nodes[5];
 uint8_t NeighborhoodP$ages[5];
 uint8_t NeighborhoodP$flags[5];
 uint8_t NeighborhoodP$time;
 uint8_t NeighborhoodP$last;

static inline  error_t NeighborhoodP$Init$init(void);
#line 83
static  uint8_t  NeighborhoodP$Neighborhood$insertNode(am_addr_t node);
#line 147
static __inline   bool NeighborhoodP$NeighborhoodFlag$get(uint8_t bit, uint8_t index);




static __inline   void NeighborhoodP$NeighborhoodFlag$set(uint8_t bit, uint8_t index);









static inline   void NeighborhoodP$NeighborhoodFlag$clearAll(uint8_t bit);
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static   error_t TrafficMonitorLayerP$SubSend$send(message_t *arg_0x40775a30);
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorConfig.nc"
static   uint16_t TrafficMonitorLayerP$TrafficMonitorConfig$getUpdatePeriod(void);




static   uint16_t TrafficMonitorLayerP$TrafficMonitorConfig$getChannelTime(message_t *arg_0x403c4940);
#line 79
static   void TrafficMonitorLayerP$TrafficMonitorConfig$timerTick(void);
#line 43
static   am_addr_t TrafficMonitorLayerP$TrafficMonitorConfig$getSender(message_t *arg_0x403c4e68);
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioState.nc"
static   void TrafficMonitorLayerP$RadioState$done(void);
#line 33
static   error_t TrafficMonitorLayerP$SubState$turnOff(void);
#line 45
static   error_t TrafficMonitorLayerP$SubState$turnOn(void);
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Neighborhood.nc"
static   uint8_t TrafficMonitorLayerP$Neighborhood$insertNode(am_addr_t arg_0x407e19a0);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
static   message_t *TrafficMonitorLayerP$RadioReceive$receive(message_t *arg_0x4078a9c0);
#line 35
static   bool TrafficMonitorLayerP$RadioReceive$header(message_t *arg_0x4078a2e8);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodFlag.nc"
static   void TrafficMonitorLayerP$NeighborhoodFlag$clearAll(void);
#line 35
static   bool TrafficMonitorLayerP$NeighborhoodFlag$get(uint8_t arg_0x407dd068);




static   void TrafficMonitorLayerP$NeighborhoodFlag$set(uint8_t arg_0x407dd540);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
static  void TrafficMonitorLayerP$Tasklet$suspend(void);






static  void TrafficMonitorLayerP$Tasklet$resume(void);
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static   void TrafficMonitorLayerP$RadioSend$ready(void);
#line 45
static   void TrafficMonitorLayerP$RadioSend$sendDone(error_t arg_0x40774118);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t TrafficMonitorLayerP$startStopTimer$postTask(void);
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void TrafficMonitorLayerP$Timer$startPeriodic(uint32_t arg_0x40359d78);
#line 67
static  void TrafficMonitorLayerP$Timer$stop(void);
# 229 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
enum TrafficMonitorLayerP$__nesc_unnamed4359 {
#line 229
  TrafficMonitorLayerP$startStopTimer = 6U
};
#line 229
typedef int TrafficMonitorLayerP$__nesc_sillytask_startStopTimer[TrafficMonitorLayerP$startStopTimer];
#line 61
 message_t *TrafficMonitorLayerP$txMsg;
 uint8_t TrafficMonitorLayerP$neighborCount;

 uint16_t TrafficMonitorLayerP$txAverage;
 uint16_t TrafficMonitorLayerP$rxAverage;
 uint8_t TrafficMonitorLayerP$neighborAverage;
 uint8_t TrafficMonitorLayerP$errorAverage;

enum TrafficMonitorLayerP$__nesc_unnamed4360 {


  TrafficMonitorLayerP$TRAFFIC_MONITOR_UINT8_MAX = 1 << (7 - 3), 


  TrafficMonitorLayerP$TRAFFIC_MONITOR_MASK = (1 << 3) - 1, 


  TrafficMonitorLayerP$TRAFFIC_MONITOR_ROUND_UP = (1 << 3) - 1
};

static inline   void TrafficMonitorLayerP$SubSend$ready(void);




static inline   error_t TrafficMonitorLayerP$RadioSend$send(message_t *msg);





static   void TrafficMonitorLayerP$SubSend$sendDone(error_t error);







static inline   bool TrafficMonitorLayerP$SubReceive$header(message_t *msg);




static inline   message_t *TrafficMonitorLayerP$SubReceive$receive(message_t *msg);
#line 124
static inline   void TrafficMonitorLayerP$TrafficMonitorConfig$channelError(void);







static inline  void TrafficMonitorLayerP$Timer$fired(void);
#line 171
static inline   void TrafficMonitorLayerP$Tasklet$run(void);
#line 195
static inline   void TrafficMonitorLayerP$Neighborhood$evicted(uint8_t index);

enum TrafficMonitorLayerP$__nesc_unnamed4361 {

  TrafficMonitorLayerP$RADIO_CMD_NONE = 0, 
  TrafficMonitorLayerP$RADIO_CMD_TURNON = 1, 
  TrafficMonitorLayerP$RADIO_CMD_TURNOFF = 2
};
 uint8_t TrafficMonitorLayerP$radioCmd;

static inline   error_t TrafficMonitorLayerP$RadioState$turnOff(void);
#line 217
static inline   error_t TrafficMonitorLayerP$RadioState$turnOn(void);
#line 229
static inline  void TrafficMonitorLayerP$startStopTimer$runTask(void);







static inline   void TrafficMonitorLayerP$SubState$done(void);
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static   error_t RandomCollisionLayerP$SubSend$send(message_t *arg_0x40775a30);
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static   void RandomCollisionLayerP$RadioAlarm$wait(uint16_t arg_0x403eab60);
#line 33
static   bool RandomCollisionLayerP$RadioAlarm$isFree(void);
#line 53
static   uint16_t RandomCollisionLayerP$RadioAlarm$getNow(void);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Random.nc"
static   uint16_t RandomCollisionLayerP$Random$rand16(void);
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RandomCollisionConfig.nc"
static   uint16_t RandomCollisionLayerP$Config$getCongestionBackoff(message_t *arg_0x403c97f0);
#line 29
static   uint16_t RandomCollisionLayerP$Config$getInitialBackoff(message_t *arg_0x403c92c0);










static   uint16_t RandomCollisionLayerP$Config$getMinimumBackoff(void);





static   uint16_t RandomCollisionLayerP$Config$getTransmitBarrier(message_t *arg_0x403c80d0);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
static   message_t *RandomCollisionLayerP$RadioReceive$receive(message_t *arg_0x4078a9c0);
#line 35
static   bool RandomCollisionLayerP$RadioReceive$header(message_t *arg_0x4078a2e8);
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static   void RandomCollisionLayerP$RadioSend$ready(void);
#line 45
static   void RandomCollisionLayerP$RadioSend$sendDone(error_t arg_0x40774118);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t RandomCollisionLayerP$calcNextRandom$postTask(void);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RandomCollisionLayerP.nc"
enum RandomCollisionLayerP$__nesc_unnamed4362 {
#line 67
  RandomCollisionLayerP$calcNextRandom = 7U
};
#line 67
typedef int RandomCollisionLayerP$__nesc_sillytask_calcNextRandom[RandomCollisionLayerP$calcNextRandom];
#line 46
 uint8_t RandomCollisionLayerP$state;
enum RandomCollisionLayerP$__nesc_unnamed4363 {

  RandomCollisionLayerP$STATE_READY = 0, 
  RandomCollisionLayerP$STATE_TX_PENDING_FIRST = 1, 
  RandomCollisionLayerP$STATE_TX_PENDING_SECOND = 2, 
  RandomCollisionLayerP$STATE_TX_SENDING = 3, 

  RandomCollisionLayerP$STATE_BARRIER = 0x80
};

 message_t *RandomCollisionLayerP$txMsg;
 uint16_t RandomCollisionLayerP$txBarrier;

static inline   void RandomCollisionLayerP$SubSend$ready(void);





uint16_t RandomCollisionLayerP$nextRandom;
static inline  void RandomCollisionLayerP$calcNextRandom$runTask(void);





static uint16_t RandomCollisionLayerP$getBackoff(uint16_t maxBackoff);
#line 87
static inline   error_t RandomCollisionLayerP$RadioSend$send(message_t *msg);
#line 99
static inline   void RandomCollisionLayerP$RadioAlarm$fired(void);
#line 144
static inline   void RandomCollisionLayerP$SubSend$sendDone(error_t error);







static inline   bool RandomCollisionLayerP$SubReceive$header(message_t *msg);




static inline   message_t *RandomCollisionLayerP$SubReceive$receive(message_t *msg);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/system/RandomMlcgC.nc"
uint32_t RandomMlcgC$seed;


static inline  error_t RandomMlcgC$Init$init(void);
#line 58
static   uint32_t RandomMlcgC$Random$rand32(void);
#line 78
static inline   uint16_t RandomMlcgC$Random$rand16(void);
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static   error_t SoftwareAckLayerP$SubSend$send(message_t *arg_0x40775a30);
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static   void SoftwareAckLayerP$RadioAlarm$wait(uint16_t arg_0x403eab60);




static   void SoftwareAckLayerP$RadioAlarm$cancel(void);
#line 33
static   bool SoftwareAckLayerP$RadioAlarm$isFree(void);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
static   message_t *SoftwareAckLayerP$RadioReceive$receive(message_t *arg_0x4078a9c0);
#line 35
static   bool SoftwareAckLayerP$RadioReceive$header(message_t *arg_0x4078a2e8);
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SoftwareAckConfig.nc"
static   void SoftwareAckLayerP$SoftwareAckConfig$reportChannelError(void);
#line 68
static   void SoftwareAckLayerP$SoftwareAckConfig$createAckPacket(message_t *arg_0x403b9ba0, message_t *arg_0x403b9d50);
#line 38
static   bool SoftwareAckLayerP$SoftwareAckConfig$requiresAckWait(message_t *arg_0x403bbc88);
#line 50
static   bool SoftwareAckLayerP$SoftwareAckConfig$isAckPacket(message_t *arg_0x403ba8a8);






static   bool SoftwareAckLayerP$SoftwareAckConfig$verifyAckPacket(message_t *arg_0x403bae98, message_t *arg_0x403b9068);
#line 32
static   uint16_t SoftwareAckLayerP$SoftwareAckConfig$getAckTimeout(void);










static   void SoftwareAckLayerP$SoftwareAckConfig$setAckReceived(message_t *arg_0x403ba1f8, bool arg_0x403ba380);
#line 63
static   bool SoftwareAckLayerP$SoftwareAckConfig$requiresAckReply(message_t *arg_0x403b9668);
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static   void SoftwareAckLayerP$RadioSend$ready(void);
#line 45
static   void SoftwareAckLayerP$RadioSend$sendDone(error_t arg_0x40774118);
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SoftwareAckLayerP.nc"
 uint8_t SoftwareAckLayerP$state;
enum SoftwareAckLayerP$__nesc_unnamed4364 {

  SoftwareAckLayerP$STATE_READY = 0, 
  SoftwareAckLayerP$STATE_DATA_SEND = 1, 
  SoftwareAckLayerP$STATE_ACK_WAIT = 2, 
  SoftwareAckLayerP$STATE_ACK_SEND = 3
};

 message_t *SoftwareAckLayerP$txMsg;
 message_t SoftwareAckLayerP$ackMsg;

static inline   void SoftwareAckLayerP$SubSend$ready(void);





static inline   error_t SoftwareAckLayerP$RadioSend$send(message_t *msg);
#line 83
static inline   void SoftwareAckLayerP$SubSend$sendDone(error_t error);
#line 110
static inline   void SoftwareAckLayerP$RadioAlarm$fired(void);









static inline   bool SoftwareAckLayerP$SubReceive$header(message_t *msg);







static inline   message_t *SoftwareAckLayerP$SubReceive$receive(message_t *msg);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioCCA.nc"
static   void RF230LayerP$RadioCCA$done(error_t arg_0x40788e10);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/BusyWait.nc"
static   void RF230LayerP$BusyWait$wait(RF230LayerP$BusyWait$size_type arg_0x408a3bd0);
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/PacketField.nc"
static   void RF230LayerP$PacketRSSI$clear(message_t *arg_0x403a6b00);





static   void RF230LayerP$PacketRSSI$set(message_t *arg_0x403a5010, RF230LayerP$PacketRSSI$value_type arg_0x403a51a0);
# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
static   void RF230LayerP$PacketTimeStamp$clear(message_t *arg_0x40386d10);







static   void RF230LayerP$PacketTimeStamp$set(message_t *arg_0x40385260, RF230LayerP$PacketTimeStamp$size_type arg_0x403853f0);
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230.nc"
static   uint8_t RF230LayerP$HplRF230$spiSplitRead(void);





static   uint8_t RF230LayerP$HplRF230$spiSplitReadWrite(uint8_t arg_0x408a95d0);





static   uint8_t RF230LayerP$HplRF230$spiWrite(uint8_t arg_0x408a9ae0);
#line 41
static   void RF230LayerP$HplRF230$spiSplitWrite(uint8_t arg_0x408abc50);
#line 33
static   uint16_t RF230LayerP$HplRF230$crcByte(uint16_t arg_0x408ab598, uint8_t arg_0x408ab720);
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioState.nc"
static   void RF230LayerP$RadioState$done(void);
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void RF230LayerP$RSTN$makeOutput(void);
#line 29
static   void RF230LayerP$RSTN$set(void);
static   void RF230LayerP$RSTN$clr(void);
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/PacketField.nc"
static   RF230LayerP$PacketTransmitPower$value_type RF230LayerP$PacketTransmitPower$get(message_t *arg_0x403a6578);
#line 29
static   bool RF230LayerP$PacketTransmitPower$isSet(message_t *arg_0x403a6068);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/LocalTime.nc"
static   uint32_t RF230LayerP$LocalTime$get(void);
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void RF230LayerP$SLP_TR$makeOutput(void);
#line 29
static   void RF230LayerP$SLP_TR$set(void);
static   void RF230LayerP$SLP_TR$clr(void);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
static   message_t *RF230LayerP$RadioReceive$receive(message_t *arg_0x4078a9c0);
#line 35
static   bool RF230LayerP$RadioReceive$header(message_t *arg_0x4078a2e8);
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static   void RF230LayerP$RadioAlarm$wait(uint16_t arg_0x403eab60);
#line 33
static   bool RF230LayerP$RadioAlarm$isFree(void);
#line 53
static   uint16_t RF230LayerP$RadioAlarm$getNow(void);
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/PacketField.nc"
static   RF230LayerP$PacketTimeSyncOffset$value_type RF230LayerP$PacketTimeSyncOffset$get(message_t *arg_0x403a6578);
#line 29
static   bool RF230LayerP$PacketTimeSyncOffset$isSet(message_t *arg_0x403a6068);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t RF230LayerP$SpiResource$release(void);
#line 87
static   error_t RF230LayerP$SpiResource$immediateRequest(void);
#line 78
static   error_t RF230LayerP$SpiResource$request(void);
#line 118
static   bool RF230LayerP$SpiResource$isOwner(void);
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void RF230LayerP$SELN$makeOutput(void);
#line 29
static   void RF230LayerP$SELN$set(void);
static   void RF230LayerP$SELN$clr(void);
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static   void RF230LayerP$RadioSend$ready(void);
#line 45
static   void RF230LayerP$RadioSend$sendDone(error_t arg_0x40774118);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static   void RF230LayerP$IRQ$disable(void);
#line 42
static   error_t RF230LayerP$IRQ$captureRisingEdge(void);
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/PacketField.nc"
static   void RF230LayerP$PacketLinkQuality$set(message_t *arg_0x403a5010, RF230LayerP$PacketLinkQuality$value_type arg_0x403a51a0);
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
static   void RF230LayerP$Tasklet$schedule(void);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230Config.nc"
static   uint8_t RF230LayerP$RF230Config$getHeaderLength(void);










static   uint8_t RF230LayerP$RF230Config$getDefaultChannel(void);
#line 46
static   uint8_t *RF230LayerP$RF230Config$getPayload(message_t *arg_0x403b5518);
#line 39
static   void RF230LayerP$RF230Config$setLength(message_t *arg_0x403b6db8, uint8_t arg_0x403b5010);
#line 34
static   uint8_t RF230LayerP$RF230Config$getLength(message_t *arg_0x403b6830);
#line 60
static   uint8_t RF230LayerP$RF230Config$getMaxLength(void);
#line 72
static   bool RF230LayerP$RF230Config$requiresRssiCca(message_t *arg_0x403b3758);
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
 uint8_t RF230LayerP$state;
enum RF230LayerP$__nesc_unnamed4365 {

  RF230LayerP$STATE_P_ON = 0, 
  RF230LayerP$STATE_SLEEP = 1, 
  RF230LayerP$STATE_SLEEP_2_TRX_OFF = 2, 
  RF230LayerP$STATE_TRX_OFF = 3, 
  RF230LayerP$STATE_TRX_OFF_2_RX_ON = 4, 
  RF230LayerP$STATE_RX_ON = 5, 
  RF230LayerP$STATE_BUSY_TX_2_RX_ON = 6, 
  RF230LayerP$STATE_PLL_ON_2_RX_ON = 7
};

 uint8_t RF230LayerP$cmd;
enum RF230LayerP$__nesc_unnamed4366 {

  RF230LayerP$CMD_NONE = 0, 
  RF230LayerP$CMD_TURNOFF = 1, 
  RF230LayerP$CMD_STANDBY = 2, 
  RF230LayerP$CMD_TURNON = 3, 
  RF230LayerP$CMD_TRANSMIT = 4, 
  RF230LayerP$CMD_RECEIVE = 5, 
  RF230LayerP$CMD_CCA = 6, 
  RF230LayerP$CMD_CHANNEL = 7, 
  RF230LayerP$CMD_SIGNAL_DONE = 8, 
  RF230LayerP$CMD_DOWNLOAD = 9
};

 bool RF230LayerP$radioIrq;

 uint8_t RF230LayerP$txPower;
 uint8_t RF230LayerP$channel;

 message_t *RF230LayerP$rxMsg;
message_t RF230LayerP$rxMsgBuffer;

uint16_t RF230LayerP$capturedTime;

 uint8_t RF230LayerP$rssiClear;
 uint8_t RF230LayerP$rssiBusy;



static __inline void RF230LayerP$writeRegister(uint8_t reg, uint8_t value);
#line 135
static __inline uint8_t RF230LayerP$readRegister(uint8_t reg);
#line 151
enum RF230LayerP$__nesc_unnamed4367 {

  RF230LayerP$SLEEP_WAKEUP_TIME = (uint16_t )(880 * (7372800UL / 8 / 32 * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2)) / 1000000UL), 
  RF230LayerP$CCA_REQUEST_TIME = (uint16_t )(140 * (7372800UL / 8 / 32 * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2)) / 1000000UL), 

  RF230LayerP$TX_SFD_DELAY = (uint16_t )(176 * (7372800UL / 8 / 32 * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2)) / 1000000UL), 
  RF230LayerP$RX_SFD_DELAY = (uint16_t )(8 * (7372800UL / 8 / 32 * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2)) / 1000000UL)
};

static inline   void RF230LayerP$RadioAlarm$fired(void);
#line 186
static inline  error_t RF230LayerP$PlatformInit$init(void);
#line 204
static inline  error_t RF230LayerP$SoftwareInit$init(void);





static inline void RF230LayerP$initRadio(void);
#line 238
static inline  void RF230LayerP$SpiResource$granted(void);
#line 252
static bool RF230LayerP$isSpiAcquired(void);
#line 287
static __inline void RF230LayerP$changeChannel(void);
#line 305
static __inline void RF230LayerP$changeState(void);
#line 346
static inline   error_t RF230LayerP$RadioState$turnOff(void);
#line 372
static inline   error_t RF230LayerP$RadioState$turnOn(void);
#line 389
static   error_t RF230LayerP$RadioSend$send(message_t *msg);
#line 537
static inline    void RF230LayerP$RadioCCA$default$done(error_t error);



static __inline void RF230LayerP$downloadMessage(void);
#line 622
static inline   void RF230LayerP$IRQ$captured(uint16_t time);
#line 635
static inline void RF230LayerP$serviceRadio(void);
#line 787
static inline   void RF230LayerP$Tasklet$run(void);
# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void HplRF230P$PortCLKM$makeInput(void);
#line 30
static   void HplRF230P$PortCLKM$clr(void);
# 79 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static   void HplRF230P$Capture$setEdge(bool arg_0x404d4438);
#line 38
static   HplRF230P$Capture$size_type HplRF230P$Capture$get(void);
#line 55
static   void HplRF230P$Capture$reset(void);


static   void HplRF230P$Capture$start(void);


static   void HplRF230P$Capture$stop(void);
# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void HplRF230P$PortIRQ$makeInput(void);
#line 30
static   void HplRF230P$PortIRQ$clr(void);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static   void HplRF230P$IRQ$captured(uint16_t arg_0x408a53d8);
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static inline  error_t HplRF230P$PlatformInit$init(void);










static inline   void HplRF230P$Capture$captured(uint16_t time);









static inline   error_t HplRF230P$IRQ$captureRisingEdge(void);
#line 83
static inline   void HplRF230P$IRQ$disable(void);





static __inline   uint16_t HplRF230P$HplRF230$crcByte(uint16_t crc, uint8_t data);




static __inline   void HplRF230P$HplRF230$spiSplitWrite(uint8_t data);







static __inline   uint8_t HplRF230P$HplRF230$spiSplitRead(void);






static __inline   uint8_t HplRF230P$HplRF230$spiSplitReadWrite(uint8_t data);
#line 121
static __inline   uint8_t HplRF230P$HplRF230$spiWrite(uint8_t data);
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static   void Atm128SpiP$SpiPacket$sendDone(uint8_t *arg_0x4092eac8, uint8_t *arg_0x4092ec70, uint16_t arg_0x4092ee00, 
error_t arg_0x4092d010);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t Atm128SpiP$ResourceArbiter$release(
# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40927790);
# 87 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t Atm128SpiP$ResourceArbiter$immediateRequest(
# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40927790);
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t Atm128SpiP$ResourceArbiter$request(
# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40927790);
# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   bool Atm128SpiP$ResourceArbiter$isOwner(
# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40927790);
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static   void Atm128SpiP$Spi$sleep(void);
#line 66
static   void Atm128SpiP$Spi$initMaster(void);
#line 96
static   void Atm128SpiP$Spi$enableInterrupt(bool arg_0x40944898);
#line 80
static   uint8_t Atm128SpiP$Spi$read(void);
#line 125
static   void Atm128SpiP$Spi$setMasterDoubleSpeed(bool arg_0x4093f9f8);
#line 114
static   void Atm128SpiP$Spi$setClock(uint8_t arg_0x40940888);
#line 108
static   void Atm128SpiP$Spi$setClockPolarity(bool arg_0x409418c0);
#line 86
static   void Atm128SpiP$Spi$write(uint8_t arg_0x40945e00);
#line 99
static   void Atm128SpiP$Spi$enableSpi(bool arg_0x40943088);
#line 111
static   void Atm128SpiP$Spi$setClockPhase(bool arg_0x409400c0);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static  void Atm128SpiP$Resource$granted(
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x4092a300);
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static   void Atm128SpiP$McuPowerState$update(void);
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
static   bool Atm128SpiP$ArbiterInfo$inUse(void);
# 207 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
enum Atm128SpiP$__nesc_unnamed4368 {
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

enum Atm128SpiP$__nesc_unnamed4369 {
  Atm128SpiP$SPI_IDLE, 
  Atm128SpiP$SPI_BUSY, 
  Atm128SpiP$SPI_ATOMIC_SIZE = 10
};





static void Atm128SpiP$startSpi(void);
#line 119
static inline void Atm128SpiP$stopSpi(void);







static   uint8_t Atm128SpiP$SpiByte$write(uint8_t tx);
#line 162
static inline error_t Atm128SpiP$sendNextPart(void);
#line 207
static inline  void Atm128SpiP$zeroTask$runTask(void);
#line 262
static inline    
#line 261
void Atm128SpiP$SpiPacket$default$sendDone(
uint8_t *_txbuffer, uint8_t *_rxbuffer, 
uint16_t _length, error_t _success);

static inline   void Atm128SpiP$Spi$dataReady(uint8_t data);
#line 305
static inline   error_t Atm128SpiP$Resource$immediateRequest(uint8_t id);







static   error_t Atm128SpiP$Resource$request(uint8_t id);








static   error_t Atm128SpiP$Resource$release(uint8_t id);









static inline   uint8_t Atm128SpiP$Resource$isOwner(uint8_t id);



static inline  void Atm128SpiP$ResourceArbiter$granted(uint8_t id);



static inline   void Atm128SpiP$Resource$default$granted(uint8_t id);
# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void HplAtm128SpiP$MISO$makeInput(void);

static   void HplAtm128SpiP$SCK$makeOutput(void);
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static   void HplAtm128SpiP$Mcu$update(void);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static   void HplAtm128SpiP$SPI$dataReady(uint8_t arg_0x40944350);
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void HplAtm128SpiP$MOSI$makeOutput(void);
# 79 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline   void HplAtm128SpiP$SPI$initMaster(void);
#line 94
static inline   void HplAtm128SpiP$SPI$sleep(void);



static inline   uint8_t HplAtm128SpiP$SPI$read(void);
static inline   void HplAtm128SpiP$SPI$write(uint8_t d);


void __vector_24(void) __attribute((signal))   ;
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
enum /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$__nesc_unnamed4370 {
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
uint8_t arg_0x409b5860);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$immediateRequested(
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409b5860);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$unconfigure(
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409b3428);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$configure(
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409b3428);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$enqueue(resource_client_id_t arg_0x4099d360);
#line 43
static   bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$isEmpty(void);
#line 60
static   resource_client_id_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$dequeue(void);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static  void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$granted(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409b6ee8);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$postTask(void);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$__nesc_unnamed4371 {
#line 69
  SimpleArbiterP$0$grantedTask = 9U
};
#line 69
typedef int /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$__nesc_sillytask_grantedTask[/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask];
#line 62
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$__nesc_unnamed4372 {
#line 62
  SimpleArbiterP$0$RES_IDLE = 0, SimpleArbiterP$0$RES_GRANTING = 1, SimpleArbiterP$0$RES_BUSY = 2
};
#line 63
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$__nesc_unnamed4373 {
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
static inline   uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$isOwner(uint8_t id);






static inline  void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$runTask(void);
#line 166
static inline    void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$requested(uint8_t id);

static inline    void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$immediateRequested(uint8_t id);

static inline    void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$configure(uint8_t id);

static inline    void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$unconfigure(uint8_t id);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$Alarm$fired(void);
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$reset(void);
#line 45
static   void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$set(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$size_type arg_0x404de8c8);










static   void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$start(void);


static   void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$stop(void);
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$get(void);
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline   /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$Alarm$getNow(void);
#line 65
static inline   void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$Alarm$stop(void);



static inline   void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$Alarm$start(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$timer_size dt);




static   void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$Alarm$startAt(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$timer_size t0, /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$timer_size dt);
#line 110
static inline   void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$fired(void);






static inline   void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$overflow(void);
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/micaz/BusyWaitMicroC.nc"
static __inline   void BusyWaitMicroC$BusyWait$wait(uint16_t dt);
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*DymoNetworkC.MHQueue.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(message_t *arg_0x40354a98, error_t arg_0x40354c20);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  error_t /*DymoNetworkC.MHQueue.AMQueueEntryP*/AMQueueEntryP$0$Send$send(message_t *arg_0x40745760, uint8_t arg_0x407458e8);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  void /*DymoNetworkC.MHQueue.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(message_t *arg_0x4033f958, am_addr_t arg_0x4033fae8);
#line 151
static  void /*DymoNetworkC.MHQueue.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(message_t *arg_0x403448f0, am_id_t arg_0x40344a78);
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static  error_t /*DymoNetworkC.MHQueue.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline  void /*DymoNetworkC.MHQueue.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(message_t *m, error_t err);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40a2b6a8, 
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t arg_0x4034e690, message_t *arg_0x4034e840, uint8_t arg_0x4034e9c8);
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40a2ccf0, 
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
message_t *arg_0x40744878, error_t arg_0x40744a00);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(message_t *arg_0x40348910);
#line 83
static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(message_t *arg_0x40346010, uint8_t arg_0x40346198);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$postTask(void);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(message_t *arg_0x40340d70);
#line 136
static  am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(message_t *arg_0x40344358);
# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4374 {
#line 118
  AMQueueImplP$0$CancelTask = 10U
};
#line 118
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_sillytask_CancelTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask];
#line 161
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4375 {
#line 161
  AMQueueImplP$0$errorTask = 11U
};
#line 161
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_sillytask_errorTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask];
#line 49
#line 47
typedef struct /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4376 {
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
static  void /*DymoNetworkC.DymoQueue.AMQueueEntryP*/AMQueueEntryP$1$AMSend$sendDone(message_t *arg_0x40354a98, error_t arg_0x40354c20);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static  error_t /*DymoNetworkC.DymoQueue.AMQueueEntryP*/AMQueueEntryP$1$Send$send(message_t *arg_0x40745760, uint8_t arg_0x407458e8);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  void /*DymoNetworkC.DymoQueue.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setDestination(message_t *arg_0x4033f958, am_addr_t arg_0x4033fae8);
#line 151
static  void /*DymoNetworkC.DymoQueue.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setType(message_t *arg_0x403448f0, am_id_t arg_0x40344a78);
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static  error_t /*DymoNetworkC.DymoQueue.AMQueueEntryP*/AMQueueEntryP$1$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline  void /*DymoNetworkC.DymoQueue.AMQueueEntryP*/AMQueueEntryP$1$Send$sendDone(message_t *m, error_t err);
# 36 "../../../tos/lib/net/tymo/dymo/DymoTable.nc"
static  void /*DymoTableC.DymoTableM*/DymoTableM$0$DymoTable$brokenRouteNeeded(const rt_info_t *arg_0x40a76c60);
#line 34
static  void /*DymoTableC.DymoTableM*/DymoTableM$0$DymoTable$routeNeeded(addr_t arg_0x40a76698);
# 35 "../../../tos/lib/net/tymo/RoutingTable.nc"
static  void /*DymoTableC.DymoTableM*/DymoTableM$0$RoutingTable$evicted(const rt_info_t *arg_0x40a799c8, reason_t arg_0x40a79b58);
# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*DymoTableC.DymoTableM*/DymoTableM$0$Timer$startOneShot(
# 22 "../../../tos/lib/net/tymo/dymo/DymoTableM.nc"
uint8_t arg_0x40a71168, 
# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t arg_0x40358358);




static  void /*DymoTableC.DymoTableM*/DymoTableM$0$Timer$stop(
# 22 "../../../tos/lib/net/tymo/dymo/DymoTableM.nc"
uint8_t arg_0x40a71168);









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
static  void /*DymoTableC.Timers*/VirtualizeTimerC$1$TimerFrom$startOneShotAt(uint32_t arg_0x4035d010, uint32_t arg_0x4035d1a0);
#line 67
static  void /*DymoTableC.Timers*/VirtualizeTimerC$1$TimerFrom$stop(void);




static  void /*DymoTableC.Timers*/VirtualizeTimerC$1$Timer$fired(
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40706208);
#line 60
enum /*DymoTableC.Timers*/VirtualizeTimerC$1$__nesc_unnamed4377 {
#line 60
  VirtualizeTimerC$1$updateFromTimer = 12U
};
#line 60
typedef int /*DymoTableC.Timers*/VirtualizeTimerC$1$__nesc_sillytask_updateFromTimer[/*DymoTableC.Timers*/VirtualizeTimerC$1$updateFromTimer];
#line 42
enum /*DymoTableC.Timers*/VirtualizeTimerC$1$__nesc_unnamed4378 {

  VirtualizeTimerC$1$NUM_TIMERS = 50, 
  VirtualizeTimerC$1$END_OF_LIST = 255
};








#line 48
typedef struct /*DymoTableC.Timers*/VirtualizeTimerC$1$__nesc_unnamed4379 {

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









static  am_addr_t MHEngineM$MHPacket$destination(message_t *arg_0x40340d70);
#line 110
static  void MHEngineM$MHPacket$setSource(message_t *arg_0x4033e208, am_addr_t arg_0x4033e398);
#line 92
static  void MHEngineM$MHPacket$setDestination(message_t *arg_0x4033f958, am_addr_t arg_0x4033fae8);
#line 136
static  am_id_t MHEngineM$MHPacket$type(message_t *arg_0x40344358);
#line 151
static  void MHEngineM$MHPacket$setType(message_t *arg_0x403448f0, am_id_t arg_0x40344a78);
#line 125
static  bool MHEngineM$MHPacket$isForMe(message_t *arg_0x4033eb50);
# 26 "../../../tos/lib/net/tymo/RoutingTable.nc"
static  error_t MHEngineM$RoutingTable$getRoute(addr_t arg_0x40a7ab18, rt_info_t *arg_0x40a7acc8);

static  error_t MHEngineM$RoutingTable$getForwardingRoute(addr_t arg_0x40a79340, rt_info_t *arg_0x40a794f0);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  void MHEngineM$AMPacket$setDestination(message_t *arg_0x4033f958, am_addr_t arg_0x4033fae8);
# 25 "../../../tos/lib/net/tymo/mh/MHEngineM.nc"
rt_info_t MHEngineM$info;

static  fw_action_t MHEngineM$RouteSelect$selectRoute(message_t *msg, addr_t *destination, uint8_t *am_type);
#line 68
static inline  void MHEngineM$RoutingTable$evicted(const rt_info_t *rt_info, reason_t r);
# 115 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
static  void *MHPacketM$SubPacket$getPayload(message_t *arg_0x40346d70, uint8_t arg_0x40346ef8);
#line 95
static  uint8_t MHPacketM$SubPacket$maxPayloadLength(void);
#line 83
static  void MHPacketM$SubPacket$setPayloadLength(message_t *arg_0x40346010, uint8_t arg_0x40346198);
# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t MHPacketM$AMPacket$address(void);
#line 151
static  void MHPacketM$AMPacket$setType(message_t *arg_0x403448f0, am_id_t arg_0x40344a78);
# 38 "../../../tos/lib/net/tymo/mh/MHPacketM.nc"
static  void *MHPacketM$Packet$getPayload(message_t *msg, uint8_t len);








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
static  fw_action_t /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$RouteSelect$selectRoute(message_t *arg_0x40abe010, addr_t *arg_0x40abe1c0, uint8_t *arg_0x40abe368);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$SubSend$send(am_addr_t arg_0x4034e690, message_t *arg_0x4034e840, uint8_t arg_0x4034e9c8);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$PPacket$payloadLength(message_t *arg_0x40348910);
#line 115
static  void */*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$PPacket$getPayload(message_t *arg_0x40346d70, uint8_t arg_0x40346ef8);
#line 83
static  void /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$PPacket$setPayloadLength(message_t *arg_0x40346010, uint8_t arg_0x40346198);
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Intercept.nc"
static  bool /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Intercept$forward(
# 23 "../../../tos/lib/net/tymo/ForwardingEngineM.nc"
uint8_t arg_0x40ae5188, 
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Intercept.nc"
message_t *arg_0x40351c90, void *arg_0x40351e30, uint8_t arg_0x40350010);
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$AMSend$sendDone(
# 21 "../../../tos/lib/net/tymo/ForwardingEngineM.nc"
uint8_t arg_0x40ae6288, 
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0x40354a98, error_t arg_0x40354c20);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$SubPacket$payloadLength(message_t *arg_0x40348910);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t */*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Receive$receive(
# 22 "../../../tos/lib/net/tymo/ForwardingEngineM.nc"
uint8_t arg_0x40ae6bb8, 
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x4034b5a0, void *arg_0x4034b740, uint8_t arg_0x4034b8c8);
# 16 "../../../tos/lib/net/tymo/LinkMonitor.nc"
static  void /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$LinkMonitor$brokenLink(am_addr_t arg_0x40a62198);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$AMPacket$destination(message_t *arg_0x40340d70);
# 5 "../../../tos/lib/net/tymo/mh/MHControl.nc"
static  void /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$MHControl$sendFailed(message_t *arg_0x403731d8, uint8_t arg_0x40373360);
#line 3
static  void /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$MHControl$msgReceived(message_t *arg_0x4036ed10);
# 140 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static  uint32_t /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Timer$getdt(void);
#line 62
static  void /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Timer$startOneShot(uint32_t arg_0x40358358);




static  void /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Timer$stop(void);
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc"
static   error_t /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Acks$requestAck(message_t *arg_0x4037c818);
#line 74
static   bool /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Acks$wasAcked(message_t *arg_0x4037b6c0);
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

enum /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$__nesc_unnamed4380 {
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
static  void DymoEngineM$SplitControl$startDone(error_t arg_0x4032ae98);
# 27 "../../../tos/lib/net/tymo/dymo/DymoTable.nc"
static  bool DymoEngineM$DymoTable$isSuperior(const rt_info_t *arg_0x40a76068, dymo_msg_t arg_0x40a76200);
#line 25
static  error_t DymoEngineM$DymoTable$update(const rt_info_t *arg_0x40a777b8, dymo_msg_t arg_0x40a77950);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t DymoEngineM$AMSend$send(am_addr_t arg_0x4034e690, message_t *arg_0x4034e840, uint8_t arg_0x4034e9c8);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t DymoEngineM$issueRERR$postTask(void);
# 25 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Mount.nc"
static  error_t DymoEngineM$Mount$mount(void);
# 26 "../../../tos/lib/net/tymo/RoutingTable.nc"
static  error_t DymoEngineM$RoutingTable$getRoute(addr_t arg_0x40a7ab18, rt_info_t *arg_0x40a7acc8);

static  error_t DymoEngineM$RoutingTable$getForwardingRoute(addr_t arg_0x40a79340, rt_info_t *arg_0x40a794f0);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t DymoEngineM$issueRREP$postTask(void);
#line 56
static   error_t DymoEngineM$forward$postTask(void);
#line 56
static   error_t DymoEngineM$issueRREQ$postTask(void);
# 74 "../../../tos/lib/net/tymo/dymo/DymoPacket.nc"
static  void DymoEngineM$DymoPacket$startProcessing(message_t *arg_0x40b3b918, message_t *arg_0x40b3bac8);
#line 58
static  error_t DymoEngineM$DymoPacket$addInfo(message_t *arg_0x40b3b0d0, const rt_info_t *arg_0x40b3b2a0);
#line 45
static  void DymoEngineM$DymoPacket$createRM(message_t *arg_0x40b3c4f0, dymo_msg_t arg_0x40b3c688, 
const rt_info_t *arg_0x40b3c868, const rt_info_t *arg_0x40b3ca38);
#line 29
static  uint16_t DymoEngineM$DymoPacket$getSize(message_t *arg_0x40b3c010);
#line 24
static  dymo_msg_t DymoEngineM$DymoPacket$getType(message_t *arg_0x40b16ad8);
# 77 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t DymoEngineM$AMPacket$source(message_t *arg_0x4033f380);
#line 57
static  am_addr_t DymoEngineM$AMPacket$address(void);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
static  error_t DymoEngineM$ConfigStorage$read(storage_addr_t arg_0x40b2e9a0, void *arg_0x40b2eb40, storage_len_t arg_0x40b2ecd0);
#line 124
static  error_t DymoEngineM$ConfigStorage$commit(void);
#line 152
static  bool DymoEngineM$ConfigStorage$valid(void);
#line 97
static  error_t DymoEngineM$ConfigStorage$write(storage_addr_t arg_0x40b2b100, void *arg_0x40b2b2a0, storage_len_t arg_0x40b2b430);
# 149 "../../../tos/lib/net/tymo/dymo/DymoEngineM.nc"
enum DymoEngineM$__nesc_unnamed4381 {
#line 149
  DymoEngineM$issueRREQ = 13U
};
#line 149
typedef int DymoEngineM$__nesc_sillytask_issueRREQ[DymoEngineM$issueRREQ];
#line 163
enum DymoEngineM$__nesc_unnamed4382 {
#line 163
  DymoEngineM$issueRREP = 14U
};
#line 163
typedef int DymoEngineM$__nesc_sillytask_issueRREP[DymoEngineM$issueRREP];
#line 179
enum DymoEngineM$__nesc_unnamed4383 {
#line 179
  DymoEngineM$issueRERR = 15U
};
#line 179
typedef int DymoEngineM$__nesc_sillytask_issueRERR[DymoEngineM$issueRERR];
#line 192
enum DymoEngineM$__nesc_unnamed4384 {
#line 192
  DymoEngineM$forward = 16U
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
static  void *DymoPacketM$Packet$getPayload(message_t *arg_0x40346d70, uint8_t arg_0x40346ef8);
#line 95
static  uint8_t DymoPacketM$Packet$maxPayloadLength(void);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t DymoPacketM$processMessage$postTask(void);
# 95 "../../../tos/lib/net/tymo/dymo/DymoPacket.nc"
static  proc_action_t DymoPacketM$DymoPacket$infoProcessed(message_t *arg_0x40b3ab40, rt_info_t *arg_0x40b3acf0);
#line 85
static  proc_action_t DymoPacketM$DymoPacket$hopsProcessed(message_t *arg_0x40b3a190, uint8_t arg_0x40b3a320, uint8_t arg_0x40b3a4b0);
#line 101
static  void DymoPacketM$DymoPacket$messageProcessed(message_t *arg_0x40b383d8);
# 131 "../../../tos/lib/net/tymo/dymo/DymoPacketM.nc"
enum DymoPacketM$__nesc_unnamed4385 {
#line 131
  DymoPacketM$processMessage = 17U
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
static  void ConfigStorageP$At45db$copyPage(at45page_t arg_0x40bd4ae8, at45page_t arg_0x40bd4c78);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static  at45page_t ConfigStorageP$BConfig$npages(
# 27 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40bd8a20);
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static  at45page_t ConfigStorageP$BConfig$remap(
# 27 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40bd8a20, 
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
at45page_t arg_0x40bd8440);
#line 44
static  void ConfigStorageP$BConfig$writeContinue(
# 27 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40bd8a20, 
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
error_t arg_0x40bd9ad8);
# 36 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Mount.nc"
static  void ConfigStorageP$Mount$mountDone(
# 25 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40bdfe18, 
# 36 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Mount.nc"
error_t arg_0x40b359e0);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
static  error_t ConfigStorageP$BlockRead$read(
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40bf1b88, 
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
storage_addr_t arg_0x40bf5e38, void *arg_0x40bf3010, storage_len_t arg_0x40bf31a0);
#line 83
static  error_t ConfigStorageP$BlockRead$computeCrc(
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40bf1b88, 
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
storage_addr_t arg_0x40bf2340, storage_len_t arg_0x40bf24d0, 
uint16_t arg_0x40bf2670);
#line 103
static  storage_len_t ConfigStorageP$BlockRead$getSize(
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40bf1b88);
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
static  error_t ConfigStorageP$BlockWrite$write(
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40bf61f0, 
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
storage_addr_t arg_0x40bef898, void *arg_0x40befa38, storage_len_t arg_0x40befbc8);
#line 103
static  error_t ConfigStorageP$BlockWrite$sync(
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40bf61f0);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
static  void ConfigStorageP$ConfigStorage$writeDone(
# 26 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40bde4c0, 
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
storage_addr_t arg_0x40b2baf0, void *arg_0x40b2bc90, storage_len_t arg_0x40b2be20, 
error_t arg_0x40b2a010);
#line 133
static  void ConfigStorageP$ConfigStorage$commitDone(
# 26 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40bde4c0, 
# 133 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
error_t arg_0x40b2ab58);
#line 80
static  void ConfigStorageP$ConfigStorage$readDone(
# 26 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
uint8_t arg_0x40bde4c0, 
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ConfigStorage.nc"
storage_addr_t arg_0x40b2c630, void *arg_0x40b2c7d0, storage_len_t arg_0x40b2c960, 
error_t arg_0x40b2caf8);
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
enum ConfigStorageP$__nesc_unnamed4386 {
  ConfigStorageP$S_STOPPED, 
  ConfigStorageP$S_MOUNT, 
  ConfigStorageP$S_COMMIT, 
  ConfigStorageP$S_CLEAN, 
  ConfigStorageP$S_DIRTY, 
  ConfigStorageP$S_INVALID
};

enum ConfigStorageP$__nesc_unnamed4387 {
  ConfigStorageP$N = 1U, 
  ConfigStorageP$NO_CLIENT = 0xff
};








#line 72
struct ConfigStorageP$__nesc_unnamed4388 {
  uint8_t state : 3;
  uint8_t committing : 1;
} ConfigStorageP$s[ConfigStorageP$N];



#line 76
nx_struct ConfigStorageP$__nesc_unnamed4389 {
  nx_uint16_t crc;
  nx_uint32_t version;
} __attribute__((packed)) ConfigStorageP$low[ConfigStorageP$N];
#line 79
#line 76
nx_struct ConfigStorageP$__nesc_unnamed4389 


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
static  void BlockStorageP$At45db$read(at45page_t arg_0x40bcf558, at45pageoffset_t arg_0x40bcf6f0, 
void *arg_0x40bcf8a0, at45pageoffset_t arg_0x40bcfa38);
#line 100
static  void BlockStorageP$At45db$erase(at45page_t arg_0x40bd3858, uint8_t arg_0x40bd39e8);
#line 120
static  void BlockStorageP$At45db$syncAll(void);
#line 62
static  void BlockStorageP$At45db$write(at45page_t arg_0x40bd5a28, at45pageoffset_t arg_0x40bd5bc0, 
void *arg_0x40bd5d70, at45pageoffset_t arg_0x40bd5f08);
#line 176
static  void BlockStorageP$At45db$computeCrc(at45page_t arg_0x40bf86c0, at45pageoffset_t arg_0x40bf8858, 
at45pageoffset_t arg_0x40bf8a00, uint16_t arg_0x40bf8b90);
# 112 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
static  void BlockStorageP$BlockWrite$syncDone(
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x40c4c8e8, 
# 112 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
error_t arg_0x40becc30);
#line 71
static  void BlockStorageP$BlockWrite$writeDone(
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x40c4c8e8, 
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
storage_addr_t arg_0x40bed338, void *arg_0x40bed4d8, storage_len_t arg_0x40bed668, 
error_t arg_0x40bed800);
#line 91
static  void BlockStorageP$BlockWrite$eraseDone(
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x40c4c8e8, 
# 91 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
error_t arg_0x40bec258);
# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
static  void BlockStorageP$BlockRead$computeCrcDone(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x40c4b3e0, 
# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
storage_addr_t arg_0x40bf2cc0, storage_len_t arg_0x40bf2e50, 
uint16_t arg_0x40bf1010, error_t arg_0x40bf1198);
#line 67
static  void BlockStorageP$BlockRead$readDone(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x40c4b3e0, 
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
storage_addr_t arg_0x40bf3830, void *arg_0x40bf39d0, storage_len_t arg_0x40bf3b60, 
error_t arg_0x40bf3cf8);
# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static  int BlockStorageP$BConfig$flipped(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x40c48b88);
# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static  int BlockStorageP$BConfig$isConfig(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x40c48b88);
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static  int BlockStorageP$BConfig$writeHook(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x40c48b88);
# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
static  at45page_t BlockStorageP$At45dbVolume$volumeSize(
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x40c46b68);
# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
static  at45page_t BlockStorageP$At45dbVolume$remap(
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x40c46b68, 
# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
at45page_t arg_0x40c46280);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t BlockStorageP$Resource$release(
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x40c48220);
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t BlockStorageP$Resource$request(
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x40c48220);
#line 76
enum BlockStorageP$__nesc_unnamed4390 {
  BlockStorageP$R_IDLE, 
  BlockStorageP$R_WRITE, 
  BlockStorageP$R_ERASE, 
  BlockStorageP$R_SYNC, 
  BlockStorageP$R_READ, 
  BlockStorageP$R_CRC
};

enum BlockStorageP$__nesc_unnamed4391 {
  BlockStorageP$N = 0U + 1U, 
  BlockStorageP$NO_CLIENT = 0xff
};

uint8_t BlockStorageP$client = BlockStorageP$NO_CLIENT;
storage_addr_t BlockStorageP$currentOffset;







#line 93
struct BlockStorageP$__nesc_unnamed4392 {

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
static  void At45dbP$HplAt45db$fill(uint8_t arg_0x40ca7c50, at45page_t arg_0x40ca7de0);
#line 41
static  void At45dbP$HplAt45db$waitCompare(void);
#line 100
static  void At45dbP$HplAt45db$erase(uint8_t arg_0x40ca5df0, at45page_t arg_0x40ca3010);
#line 30
static  void At45dbP$HplAt45db$waitIdle(void);
#line 73
static  void At45dbP$HplAt45db$flush(uint8_t arg_0x40ca67b8, at45page_t arg_0x40ca6948);
#line 178
static  void At45dbP$HplAt45db$write(uint8_t arg_0x40c9fb18, at45page_t arg_0x40c9fca8, at45pageoffset_t arg_0x40c9fe40, 
uint8_t *arg_0x40c9e010, at45pageoffset_t arg_0x40c9e1a8);
#line 87
static  void At45dbP$HplAt45db$compare(uint8_t arg_0x40ca5330, at45page_t arg_0x40ca54c0);
#line 157
static  void At45dbP$HplAt45db$crc(uint8_t arg_0x40ca16b0, at45page_t arg_0x40ca1840, at45pageoffset_t arg_0x40ca19d8, 
at45pageoffset_t arg_0x40ca1b80, uint16_t arg_0x40ca1d10);
#line 119
static  void At45dbP$HplAt45db$readBuffer(uint8_t arg_0x40ca38b0, at45pageoffset_t arg_0x40ca3a48, 
uint8_t *arg_0x40ca3c00, uint16_t arg_0x40ca3d90);
# 85 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45db.nc"
static  void At45dbP$At45db$copyPageDone(error_t arg_0x40bd3330);
#line 125
static  void At45dbP$At45db$syncDone(error_t arg_0x40bd10b0);
#line 143
static  void At45dbP$At45db$flushDone(error_t arg_0x40bcf010);
#line 69
static  void At45dbP$At45db$writeDone(error_t arg_0x40bd4588);
#line 105
static  void At45dbP$At45db$eraseDone(error_t arg_0x40bd2188);
#line 183
static  void At45dbP$At45db$computeCrcDone(error_t arg_0x40bf7330, uint16_t arg_0x40bf74c0);
#line 162
static  void At45dbP$At45db$readDone(error_t arg_0x40bf8168);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/BusyWait.nc"
static   void At45dbP$BusyWait$wait(At45dbP$BusyWait$size_type arg_0x408a3bd0);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t At45dbP$taskSuccess$postTask(void);
#line 56
static   error_t At45dbP$taskFail$postTask(void);
# 134 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbP.nc"
enum At45dbP$__nesc_unnamed4393 {
#line 134
  At45dbP$taskSuccess = 18U
};
#line 134
typedef int At45dbP$__nesc_sillytask_taskSuccess[At45dbP$taskSuccess];


enum At45dbP$__nesc_unnamed4394 {
#line 137
  At45dbP$taskFail = 19U
};
#line 137
typedef int At45dbP$__nesc_sillytask_taskFail[At45dbP$taskFail];
#line 69
enum At45dbP$__nesc_unnamed4395 {
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

enum At45dbP$__nesc_unnamed4396 {
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
struct At45dbP$__nesc_unnamed4397 {
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
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$crcDone(uint16_t arg_0x40c9f628);
#line 79
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$flushDone(void);
#line 185
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$writeDone(void);
#line 35
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$waitIdleDone(void);
#line 47
static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$waitCompareDone(bool arg_0x40ca7710);
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
static   uint8_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$FlashSpi$write(uint8_t arg_0x40893ed0);
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/HplAt45dbByteC.nc"
enum /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$__nesc_unnamed4398 {
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
static   void HplAt45dbIOP$BusyWait$wait(HplAt45dbIOP$BusyWait$size_type arg_0x408a3bd0);
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
enum HplAt45dbIOP$__nesc_unnamed4399 {
#line 141
  HplAt45dbIOP$avail = 20U
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
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$ResourceConfigure$unconfigure(void);
#line 49
static   void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$ResourceConfigure$configure(void);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static  void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$Resource$granted(void);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$granted$postTask(void);
# 25 "/opt/CVSTinyOS/tinyos-2.x/tos/system/NoArbiterC.nc"
enum /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$__nesc_unnamed4400 {
#line 25
  NoArbiterC$0$granted = 21U
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
enum /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$__nesc_unnamed4401 {
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
uint8_t arg_0x40d3ee40);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$unconfigure(
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40d3c0f8);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$configure(
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40d3c0f8);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static   error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Queue$enqueue(resource_client_id_t arg_0x4099d360);
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
uint8_t arg_0x40d3e500);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$grantedTask$postTask(void);
# 75 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
enum /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$__nesc_unnamed4402 {
#line 75
  ArbiterP$0$grantedTask = 22U
};
#line 75
typedef int /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$__nesc_sillytask_grantedTask[/*At45dbC.Arbiter.Arbiter*/ArbiterP$0$grantedTask];
#line 67
enum /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$__nesc_unnamed4403 {
#line 67
  ArbiterP$0$RES_CONTROLLED, ArbiterP$0$RES_GRANTING, ArbiterP$0$RES_IMM_GRANTING, ArbiterP$0$RES_BUSY
};
#line 68
enum /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$__nesc_unnamed4404 {
#line 68
  ArbiterP$0$default_owner_id = 1U
};
#line 69
enum /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$__nesc_unnamed4405 {
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
static  void NetControlM$SplitControl$startDone(error_t arg_0x4032ae98);
#line 117
static  void NetControlM$SplitControl$stopDone(error_t arg_0x40331a78);
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

# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
inline static   void RadioAlarmP$Tasklet$schedule(void){
#line 48
  TaskletC$Tasklet$schedule();
#line 48
}
#line 48
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
static inline   void RadioAlarmP$Alarm$fired(void)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (RadioAlarmP$state == RadioAlarmP$STATE_WAIT) {
        RadioAlarmP$state = RadioAlarmP$STATE_FIRED;
        }
    }
#line 60
    __nesc_atomic_end(__nesc_atomic); }
  RadioAlarmP$Tasklet$schedule();
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$Alarm$fired(void){
#line 67
  RadioAlarmP$Alarm$fired();
#line 67
}
#line 67
# 105 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/atm128hardware.h"
static  __inline void __nesc_enable_interrupt(void)
#line 105
{
   __asm volatile ("sei");}

# 152 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline   void HplAtm1281Timer1P$CompareA$stop(void)
#line 152
{
#line 152
  * (volatile uint8_t *)0x6F &= ~(1 << 1);
}

# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$stop(void){
#line 59
  HplAtm1281Timer1P$CompareA$stop();
#line 59
}
#line 59
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline   void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$fired(void)
#line 110
{
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$stop();
  ;
  __nesc_enable_interrupt();
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$Alarm$fired();
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void HplAtm1281Timer1P$CompareA$fired(void){
#line 49
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$fired();
#line 49
}
#line 49
# 260 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   void RF230ActiveMessageP$RadioAlarm$fired(void)
#line 260
{
}

# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
inline static   void RandomCollisionLayerP$RadioSend$sendDone(error_t arg_0x40774118){
#line 45
  TrafficMonitorLayerP$SubSend$sendDone(arg_0x40774118);
#line 45
}
#line 45
# 239 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   uint16_t RF230ActiveMessageP$RandomCollisionConfig$getCongestionBackoff(message_t *msg)
{
  return (uint16_t )(2240 * (7372800UL / 8 / 32 * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 1000000.0));
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RandomCollisionConfig.nc"
inline static   uint16_t RandomCollisionLayerP$Config$getCongestionBackoff(message_t *arg_0x403c97f0){
#line 35
  unsigned short result;
#line 35

#line 35
  result = RF230ActiveMessageP$RandomCollisionConfig$getCongestionBackoff(arg_0x403c97f0);
#line 35

#line 35
  return result;
#line 35
}
#line 35
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SoftwareAckConfig.nc"
inline static   void SoftwareAckLayerP$SoftwareAckConfig$setAckReceived(message_t *arg_0x403ba1f8, bool arg_0x403ba380){
#line 43
  RF230ActiveMessageP$SoftwareAckConfig$setAckReceived(arg_0x403ba1f8, arg_0x403ba380);
#line 43
}
#line 43
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
inline static   error_t SoftwareAckLayerP$SubSend$send(message_t *arg_0x40775a30){
#line 37
  unsigned char result;
#line 37

#line 37
  result = RF230LayerP$RadioSend$send(arg_0x40775a30);
#line 37

#line 37
  return result;
#line 37
}
#line 37
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SoftwareAckLayerP.nc"
static inline   error_t SoftwareAckLayerP$RadioSend$send(message_t *msg)
{
  error_t error;

  if (SoftwareAckLayerP$state == SoftwareAckLayerP$STATE_READY) 
    {
      if ((error = SoftwareAckLayerP$SubSend$send(msg)) == SUCCESS) 
        {
          SoftwareAckLayerP$SoftwareAckConfig$setAckReceived(msg, FALSE);
          SoftwareAckLayerP$state = SoftwareAckLayerP$STATE_DATA_SEND;
          SoftwareAckLayerP$txMsg = msg;
        }
    }
  else {
    error = EBUSY;
    }
  return error;
}

# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
inline static   error_t RandomCollisionLayerP$SubSend$send(message_t *arg_0x40775a30){
#line 37
  unsigned char result;
#line 37

#line 37
  result = SoftwareAckLayerP$RadioSend$send(arg_0x40775a30);
#line 37

#line 37
  return result;
#line 37
}
#line 37
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t MessageBufferLayerP$sendTask$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(MessageBufferLayerP$sendTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 195 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static inline   void MessageBufferLayerP$RadioSend$ready(void)
{
  if (MessageBufferLayerP$state == MessageBufferLayerP$STATE_TX_PENDING) {
    MessageBufferLayerP$sendTask$postTask();
    }
}

# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
inline static   void TrafficMonitorLayerP$RadioSend$ready(void){
#line 52
  MessageBufferLayerP$RadioSend$ready();
#line 52
}
#line 52
# 81 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
static inline   void TrafficMonitorLayerP$SubSend$ready(void)
{
  TrafficMonitorLayerP$RadioSend$ready();
}

# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
inline static   void RandomCollisionLayerP$RadioSend$ready(void){
#line 52
  TrafficMonitorLayerP$SubSend$ready();
#line 52
}
#line 52
# 70 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline   uint16_t HplAtm1281Timer1P$Timer$get(void)
#line 70
{
#line 70
  return * (volatile uint16_t *)0x84;
}

# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$get(void){
#line 52
  unsigned short result;
#line 52

#line 52
  result = HplAtm1281Timer1P$Timer$get();
#line 52

#line 52
  return result;
#line 52
}
#line 52
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline   /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$Alarm$getNow(void)
#line 53
{
  return /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$get();
}

# 98 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   RadioAlarmP$Alarm$size_type RadioAlarmP$Alarm$getNow(void){
#line 98
  unsigned short result;
#line 98

#line 98
  result = /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$Alarm$getNow();
#line 98

#line 98
  return result;
#line 98
}
#line 98
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
static __inline   uint16_t RadioAlarmP$RadioAlarm$getNow(uint8_t id)
{
  return RadioAlarmP$Alarm$getNow();
}

# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
inline static   uint16_t RandomCollisionLayerP$RadioAlarm$getNow(void){
#line 53
  unsigned short result;
#line 53

#line 53
  result = RadioAlarmP$RadioAlarm$getNow(1U);
#line 53

#line 53
  return result;
#line 53
}
#line 53
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RandomCollisionLayerP.nc"
static inline   void RandomCollisionLayerP$RadioAlarm$fired(void)
{
  error_t error;
  int16_t delay;

  for (; 0; ) ;

  delay = (int16_t )RandomCollisionLayerP$txBarrier - RandomCollisionLayerP$RadioAlarm$getNow();

  if (RandomCollisionLayerP$state == RandomCollisionLayerP$STATE_BARRIER) 
    {
      RandomCollisionLayerP$state = RandomCollisionLayerP$STATE_READY;

      RandomCollisionLayerP$RadioSend$ready();
      return;
    }
  else {
#line 115
    if (RandomCollisionLayerP$state & RandomCollisionLayerP$STATE_BARRIER && delay > 0) {
      error = EBUSY;
      }
    else {
#line 118
      error = RandomCollisionLayerP$SubSend$send(RandomCollisionLayerP$txMsg);
      }
    }
#line 120
  if (error != SUCCESS) 
    {
      if ((RandomCollisionLayerP$state & ~RandomCollisionLayerP$STATE_BARRIER) == RandomCollisionLayerP$STATE_TX_PENDING_FIRST) 
        {
          RandomCollisionLayerP$state = (RandomCollisionLayerP$state & RandomCollisionLayerP$STATE_BARRIER) | RandomCollisionLayerP$STATE_TX_PENDING_SECOND;
          RandomCollisionLayerP$RadioAlarm$wait(RandomCollisionLayerP$getBackoff(RandomCollisionLayerP$Config$getCongestionBackoff(RandomCollisionLayerP$txMsg)));
        }
      else 
        {
          if (RandomCollisionLayerP$state & RandomCollisionLayerP$STATE_BARRIER && delay > 0) 
            {
              RandomCollisionLayerP$state = RandomCollisionLayerP$STATE_BARRIER;
              RandomCollisionLayerP$RadioAlarm$wait(delay);
            }
          else {
            RandomCollisionLayerP$state = RandomCollisionLayerP$STATE_READY;
            }
          RandomCollisionLayerP$RadioSend$sendDone(error);
        }
    }
  else {
    RandomCollisionLayerP$state = RandomCollisionLayerP$STATE_TX_SENDING;
    }
}

#line 144
static inline   void RandomCollisionLayerP$SubSend$sendDone(error_t error)
{
  for (; 0; ) ;

  RandomCollisionLayerP$state = RandomCollisionLayerP$STATE_READY;
  RandomCollisionLayerP$RadioSend$sendDone(error);
}

# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
inline static   void SoftwareAckLayerP$RadioSend$sendDone(error_t arg_0x40774118){
#line 45
  RandomCollisionLayerP$SubSend$sendDone(arg_0x40774118);
#line 45
}
#line 45
# 124 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
static inline   void TrafficMonitorLayerP$TrafficMonitorConfig$channelError(void)
{
  if (TrafficMonitorLayerP$errorAverage < 255) {
    ++TrafficMonitorLayerP$errorAverage;
    }
}

# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorConfig.nc"
inline static   void RF230ActiveMessageP$TrafficMonitorConfig$channelError(void){
#line 50
  TrafficMonitorLayerP$TrafficMonitorConfig$channelError();
#line 50
}
#line 50
# 137 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   void RF230ActiveMessageP$SoftwareAckConfig$reportChannelError(void)
{
  RF230ActiveMessageP$TrafficMonitorConfig$channelError();
}

# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SoftwareAckConfig.nc"
inline static   void SoftwareAckLayerP$SoftwareAckConfig$reportChannelError(void){
#line 74
  RF230ActiveMessageP$SoftwareAckConfig$reportChannelError();
#line 74
}
#line 74
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SoftwareAckLayerP.nc"
static inline   void SoftwareAckLayerP$RadioAlarm$fired(void)
{
  for (; 0; ) ;

  SoftwareAckLayerP$SoftwareAckConfig$reportChannelError();

  SoftwareAckLayerP$state = SoftwareAckLayerP$STATE_READY;
  SoftwareAckLayerP$RadioSend$sendDone(SUCCESS);
}

# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
inline static   void RF230LayerP$Tasklet$schedule(void){
#line 48
  TaskletC$Tasklet$schedule();
#line 48
}
#line 48
# 537 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
static inline    void RF230LayerP$RadioCCA$default$done(error_t error)
#line 537
{
}

# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioCCA.nc"
inline static   void RF230LayerP$RadioCCA$done(error_t arg_0x40788e10){
#line 41
  RF230LayerP$RadioCCA$default$done(arg_0x40788e10);
#line 41
}
#line 41
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$set(void)
#line 46
{
#line 46
  * (volatile uint8_t *)37U |= 1 << 0;
}

# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void RF230LayerP$SELN$set(void){
#line 29
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$set();
#line 29
}
#line 29
# 102 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static __inline   uint8_t HplRF230P$HplRF230$spiSplitRead(void)
{
  while (!(* (volatile uint8_t *)(0x2D + 0x20) & 0x80)) 
    ;
  return * (volatile uint8_t *)(0X2E + 0x20);
}

# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230.nc"
inline static   uint8_t RF230LayerP$HplRF230$spiSplitRead(void){
#line 47
  unsigned char result;
#line 47

#line 47
  result = HplRF230P$HplRF230$spiSplitRead();
#line 47

#line 47
  return result;
#line 47
}
#line 47
# 109 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static __inline   uint8_t HplRF230P$HplRF230$spiSplitReadWrite(uint8_t data)
{
  uint8_t b;

  while (!(* (volatile uint8_t *)(0x2D + 0x20) & 0x80)) 
    ;
  b = * (volatile uint8_t *)(0X2E + 0x20);
  * (volatile uint8_t *)(0X2E + 0x20) = data;

  return b;
}

# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230.nc"
inline static   uint8_t RF230LayerP$HplRF230$spiSplitReadWrite(uint8_t arg_0x408a95d0){
#line 53
  unsigned char result;
#line 53

#line 53
  result = HplRF230P$HplRF230$spiSplitReadWrite(arg_0x408a95d0);
#line 53

#line 53
  return result;
#line 53
}
#line 53
# 94 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static __inline   void HplRF230P$HplRF230$spiSplitWrite(uint8_t data)
{



  * (volatile uint8_t *)(0X2E + 0x20) = data;
}

# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230.nc"
inline static   void RF230LayerP$HplRF230$spiSplitWrite(uint8_t arg_0x408abc50){
#line 41
  HplRF230P$HplRF230$spiSplitWrite(arg_0x408abc50);
#line 41
}
#line 41
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$clr(void)
#line 47
{
#line 47
  * (volatile uint8_t *)37U &= ~(1 << 0);
}

# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void RF230LayerP$SELN$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$clr();
#line 30
}
#line 30
# 135 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
static __inline uint8_t RF230LayerP$readRegister(uint8_t reg)
{
  for (; 0; ) ;
  for (; 0; ) ;

  RF230LayerP$SELN$clr();
  RF230LayerP$HplRF230$spiSplitWrite(RF230_CMD_REGISTER_READ | reg);
  RF230LayerP$HplRF230$spiSplitReadWrite(0);
  reg = RF230LayerP$HplRF230$spiSplitRead();
  RF230LayerP$SELN$set();

  return reg;
}

#line 160
static inline   void RF230LayerP$RadioAlarm$fired(void)
{
  if (RF230LayerP$state == RF230LayerP$STATE_SLEEP_2_TRX_OFF) {
    RF230LayerP$state = RF230LayerP$STATE_TRX_OFF;
    }
  else {
#line 164
    if (RF230LayerP$cmd == RF230LayerP$CMD_CCA) 
      {
        uint8_t cca;

        for (; 0; ) ;

        RF230LayerP$cmd = RF230LayerP$CMD_NONE;
        cca = RF230LayerP$readRegister(RF230_TRX_STATUS);

        for (; 0; ) ;

        RF230LayerP$RadioCCA$done(cca & RF230_CCA_DONE ? cca & RF230_CCA_STATUS ? SUCCESS : EBUSY : FAIL);
      }
    else {
      for (; 0; ) ;
      }
    }
  RF230LayerP$Tasklet$schedule();
}

# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
static inline    void RadioAlarmP$RadioAlarm$default$fired(uint8_t id)
{
}

# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
inline static   void RadioAlarmP$RadioAlarm$fired(uint8_t arg_0x40732e00){
#line 48
  switch (arg_0x40732e00) {
#line 48
    case 0U:
#line 48
      RF230ActiveMessageP$RadioAlarm$fired();
#line 48
      break;
#line 48
    case 1U:
#line 48
      RandomCollisionLayerP$RadioAlarm$fired();
#line 48
      break;
#line 48
    case 2U:
#line 48
      SoftwareAckLayerP$RadioAlarm$fired();
#line 48
      break;
#line 48
    case 3U:
#line 48
      RF230LayerP$RadioAlarm$fired();
#line 48
      break;
#line 48
    default:
#line 48
      RadioAlarmP$RadioAlarm$default$fired(arg_0x40732e00);
#line 48
      break;
#line 48
    }
#line 48
}
#line 48
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
static inline   void RadioAlarmP$Tasklet$run(void)
{
  if (RadioAlarmP$state == RadioAlarmP$STATE_FIRED) 
    {
      RadioAlarmP$state = RadioAlarmP$STATE_READY;
      RadioAlarmP$RadioAlarm$fired(RadioAlarmP$alarm);
    }
}

# 201 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static inline   void MessageBufferLayerP$Tasklet$run(void)
{
}

# 171 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
static inline   void TrafficMonitorLayerP$Tasklet$run(void)
{
}

# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t RF230LayerP$SpiResource$release(void){
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
# 82 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
static __inline   bool RadioAlarmP$RadioAlarm$isFree(uint8_t id)
{
  return RadioAlarmP$state == RadioAlarmP$STATE_READY;
}

# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
inline static   bool RandomCollisionLayerP$RadioAlarm$isFree(void){
#line 33
  unsigned char result;
#line 33

#line 33
  result = RadioAlarmP$RadioAlarm$isFree(1U);
#line 33

#line 33
  return result;
#line 33
}
#line 33
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RandomCollisionLayerP.nc"
static inline   void RandomCollisionLayerP$SubSend$ready(void)
{
  if (RandomCollisionLayerP$state == RandomCollisionLayerP$STATE_READY && RandomCollisionLayerP$RadioAlarm$isFree()) {
    RandomCollisionLayerP$RadioSend$ready();
    }
}

# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
inline static   void SoftwareAckLayerP$RadioSend$ready(void){
#line 52
  RandomCollisionLayerP$SubSend$ready();
#line 52
}
#line 52
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SoftwareAckLayerP.nc"
static inline   void SoftwareAckLayerP$SubSend$ready(void)
{
  if (SoftwareAckLayerP$state == SoftwareAckLayerP$STATE_READY) {
    SoftwareAckLayerP$RadioSend$ready();
    }
}

# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
inline static   void RF230LayerP$RadioSend$ready(void){
#line 52
  SoftwareAckLayerP$SubSend$ready();
#line 52
}
#line 52
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t MessageBufferLayerP$stateDoneTask$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(MessageBufferLayerP$stateDoneTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 117 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static inline   void MessageBufferLayerP$RadioState$done(void)
{
  MessageBufferLayerP$stateDoneTask$postTask();
}

# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioState.nc"
inline static   void TrafficMonitorLayerP$RadioState$done(void){
#line 58
  MessageBufferLayerP$RadioState$done();
#line 58
}
#line 58
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t TrafficMonitorLayerP$startStopTimer$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(TrafficMonitorLayerP$startStopTimer);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 237 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
static inline   void TrafficMonitorLayerP$SubState$done(void)
{
  TrafficMonitorLayerP$startStopTimer$postTask();
  TrafficMonitorLayerP$RadioState$done();
}

# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioState.nc"
inline static   void RF230LayerP$RadioState$done(void){
#line 58
  TrafficMonitorLayerP$SubState$done();
#line 58
}
#line 58
# 123 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
static __inline void RF230LayerP$writeRegister(uint8_t reg, uint8_t value)
{
  for (; 0; ) ;
  for (; 0; ) ;

  RF230LayerP$SELN$clr();
  RF230LayerP$HplRF230$spiSplitWrite(RF230_CMD_REGISTER_WRITE | reg);
  RF230LayerP$HplRF230$spiSplitReadWrite(value);
  RF230LayerP$HplRF230$spiSplitRead();
  RF230LayerP$SELN$set();
}

#line 287
static __inline void RF230LayerP$changeChannel(void)
{
  for (; 0; ) ;
  for (; 0; ) ;

  if (RF230LayerP$isSpiAcquired()) 
    {
      RF230LayerP$writeRegister(RF230_PHY_CC_CCA, RF230_CCA_MODE_VALUE | RF230LayerP$channel);

      if (RF230LayerP$state == RF230LayerP$STATE_RX_ON) {
        RF230LayerP$state = RF230LayerP$STATE_TRX_OFF_2_RX_ON;
        }
      else {
#line 299
        RF230LayerP$cmd = RF230LayerP$CMD_SIGNAL_DONE;
        }
    }
}

# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$set(void)
#line 46
{
#line 46
  * (volatile uint8_t *)37U |= 1 << 7;
}

# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void RF230LayerP$SLP_TR$set(void){
#line 29
  /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$set();
#line 29
}
#line 29
# 151 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline   void HplAtm1281Timer1P$Capture$stop(void)
#line 151
{
#line 151
  * (volatile uint8_t *)0x6F &= ~(1 << 5);
}

# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static   void HplRF230P$Capture$stop(void){
#line 61
  HplAtm1281Timer1P$Capture$stop();
#line 61
}
#line 61
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static inline   void HplRF230P$IRQ$disable(void)
{
  HplRF230P$Capture$stop();
}

# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioCapture.nc"
inline static   void RF230LayerP$IRQ$disable(void){
#line 55
  HplRF230P$IRQ$disable();
#line 55
}
#line 55
# 145 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline   void HplAtm1281Timer1P$Capture$start(void)
#line 145
{
#line 145
  * (volatile uint8_t *)0x6F |= 1 << 5;
}

# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static   void HplRF230P$Capture$start(void){
#line 58
  HplAtm1281Timer1P$Capture$start();
#line 58
}
#line 58
# 139 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline   void HplAtm1281Timer1P$Capture$reset(void)
#line 139
{
#line 139
  * (volatile uint8_t *)(0x16 + 0x20) = 1 << 5;
}

# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static   void HplRF230P$Capture$reset(void){
#line 55
  HplAtm1281Timer1P$Capture$reset();
#line 55
}
#line 55
# 135 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline   void HplAtm1281Timer1P$Capture$setEdge(bool up)
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
inline static   void HplRF230P$Capture$setEdge(bool arg_0x404d4438){
#line 79
  HplAtm1281Timer1P$Capture$setEdge(arg_0x404d4438);
#line 79
}
#line 79
# 68 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static inline   error_t HplRF230P$IRQ$captureRisingEdge(void)
{
  HplRF230P$Capture$setEdge(TRUE);
  HplRF230P$Capture$reset();
  HplRF230P$Capture$start();

  return SUCCESS;
}

# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioCapture.nc"
inline static   error_t RF230LayerP$IRQ$captureRisingEdge(void){
#line 42
  unsigned char result;
#line 42

#line 42
  result = HplRF230P$IRQ$captureRisingEdge();
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline   void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$Alarm$start(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$timer_size dt)
{
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$Alarm$startAt(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$get(), dt);
}

# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void RadioAlarmP$Alarm$start(RadioAlarmP$Alarm$size_type arg_0x406648c8){
#line 55
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$Alarm$start(arg_0x406648c8);
#line 55
}
#line 55
# 87 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
static inline   void RadioAlarmP$RadioAlarm$wait(uint8_t id, uint16_t timeout)
{
  for (; 0; ) ;

  RadioAlarmP$alarm = id;
  RadioAlarmP$state = RadioAlarmP$STATE_WAIT;
  RadioAlarmP$Alarm$start(timeout);
}

# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
inline static   void RF230LayerP$RadioAlarm$wait(uint16_t arg_0x403eab60){
#line 38
  RadioAlarmP$RadioAlarm$wait(3U, arg_0x403eab60);
#line 38
}
#line 38
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$clr(void)
#line 47
{
#line 47
  * (volatile uint8_t *)37U &= ~(1 << 7);
}

# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void RF230LayerP$SLP_TR$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$clr();
#line 30
}
#line 30
# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
inline static   bool RF230LayerP$RadioAlarm$isFree(void){
#line 33
  unsigned char result;
#line 33

#line 33
  result = RadioAlarmP$RadioAlarm$isFree(3U);
#line 33

#line 33
  return result;
#line 33
}
#line 33
# 305 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
static __inline void RF230LayerP$changeState(void)
{

  if ((
#line 307
  RF230LayerP$cmd == RF230LayerP$CMD_STANDBY || RF230LayerP$cmd == RF230LayerP$CMD_TURNON)
   && RF230LayerP$state == RF230LayerP$STATE_SLEEP && RF230LayerP$RadioAlarm$isFree()) 
    {
      RF230LayerP$SLP_TR$clr();

      RF230LayerP$RadioAlarm$wait(RF230LayerP$SLEEP_WAKEUP_TIME);
      RF230LayerP$state = RF230LayerP$STATE_SLEEP_2_TRX_OFF;
    }
  else {
#line 315
    if (RF230LayerP$cmd == RF230LayerP$CMD_TURNON && RF230LayerP$state == RF230LayerP$STATE_TRX_OFF && RF230LayerP$isSpiAcquired()) 
      {
        for (; 0; ) ;

        RF230LayerP$readRegister(RF230_IRQ_STATUS);
        RF230LayerP$IRQ$captureRisingEdge();

        RF230LayerP$writeRegister(RF230_TRX_STATE, RF230_RX_ON);
        RF230LayerP$state = RF230LayerP$STATE_TRX_OFF_2_RX_ON;
      }
    else {
      if ((
#line 325
      RF230LayerP$cmd == RF230LayerP$CMD_TURNOFF || RF230LayerP$cmd == RF230LayerP$CMD_STANDBY)
       && RF230LayerP$state == RF230LayerP$STATE_RX_ON && RF230LayerP$isSpiAcquired()) 
        {
          RF230LayerP$writeRegister(RF230_TRX_STATE, RF230_FORCE_TRX_OFF);

          RF230LayerP$IRQ$disable();
          RF230LayerP$radioIrq = FALSE;

          RF230LayerP$state = RF230LayerP$STATE_TRX_OFF;
        }
      }
    }
#line 336
  if (RF230LayerP$cmd == RF230LayerP$CMD_TURNOFF && RF230LayerP$state == RF230LayerP$STATE_TRX_OFF) 
    {
      RF230LayerP$SLP_TR$set();
      RF230LayerP$state = RF230LayerP$STATE_SLEEP;
      RF230LayerP$cmd = RF230LayerP$CMD_SIGNAL_DONE;
    }
  else {
#line 342
    if (RF230LayerP$cmd == RF230LayerP$CMD_STANDBY && RF230LayerP$state == RF230LayerP$STATE_TRX_OFF) {
      RF230LayerP$cmd = RF230LayerP$CMD_SIGNAL_DONE;
      }
    }
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t MessageBufferLayerP$deliverTask$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(MessageBufferLayerP$deliverTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 298 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static inline   message_t *MessageBufferLayerP$RadioReceive$receive(message_t *msg)
{
  message_t *m;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (MessageBufferLayerP$receiveQueueSize >= MessageBufferLayerP$RECEIVE_QUEUE_SIZE) {
        m = msg;
        }
      else {
          uint8_t index = MessageBufferLayerP$receiveQueueHead + MessageBufferLayerP$receiveQueueSize;

#line 309
          if (index >= MessageBufferLayerP$RECEIVE_QUEUE_SIZE) {
            index -= MessageBufferLayerP$RECEIVE_QUEUE_SIZE;
            }
          m = MessageBufferLayerP$receiveQueue[index];
          MessageBufferLayerP$receiveQueue[index] = msg;

          ++MessageBufferLayerP$receiveQueueSize;
          MessageBufferLayerP$deliverTask$postTask();
        }
    }
#line 318
    __nesc_atomic_end(__nesc_atomic); }

  return m;
}

# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
inline static   message_t *UniqueLayerP$RadioReceive$receive(message_t *arg_0x4078a9c0){
#line 42
  nx_struct message_t *result;
#line 42

#line 42
  result = MessageBufferLayerP$RadioReceive$receive(arg_0x4078a9c0);
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 152 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodP.nc"
static __inline   void NeighborhoodP$NeighborhoodFlag$set(uint8_t bit, uint8_t index)
{
  NeighborhoodP$flags[index] |= 1 << bit;
}

# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodFlag.nc"
inline static   void UniqueLayerP$NeighborhoodFlag$set(uint8_t arg_0x407dd540){
#line 40
  NeighborhoodP$NeighborhoodFlag$set(0U, arg_0x407dd540);
#line 40
}
#line 40
# 159 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   void RF230ActiveMessageP$UniqueConfig$reportChannelError(void)
{
  RF230ActiveMessageP$TrafficMonitorConfig$channelError();
}

# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/UniqueConfig.nc"
inline static   void UniqueLayerP$UniqueConfig$reportChannelError(void){
#line 47
  RF230ActiveMessageP$UniqueConfig$reportChannelError();
#line 47
}
#line 47
# 147 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodP.nc"
static __inline   bool NeighborhoodP$NeighborhoodFlag$get(uint8_t bit, uint8_t index)
{
  return NeighborhoodP$flags[index] & (1 << bit);
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodFlag.nc"
inline static   bool UniqueLayerP$NeighborhoodFlag$get(uint8_t arg_0x407dd068){
#line 35
  unsigned char result;
#line 35

#line 35
  result = NeighborhoodP$NeighborhoodFlag$get(0U, arg_0x407dd068);
#line 35

#line 35
  return result;
#line 35
}
#line 35
# 246 "/usr/local/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_leuint8(const void *source)
#line 246
{
  const uint8_t *base = source;

#line 248
  return base[0];
}

# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline ieee154_header_t *IEEE154PacketP$getHeader(message_t *msg)
{
  return (ieee154_header_t *)(msg->data - sizeof(ieee154_header_t ));
}

#line 154
static __inline   uint8_t IEEE154PacketP$IEEE154Packet$getDSN(message_t *msg)
{
  return __nesc_ntoh_leuint8((unsigned char *)&IEEE154PacketP$getHeader(msg)->dsn);
}

# 124 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static   uint8_t RF230ActiveMessageP$IEEE154Packet$getDSN(message_t *arg_0x403d6cc0){
#line 124
  unsigned char result;
#line 124

#line 124
  result = IEEE154PacketP$IEEE154Packet$getDSN(arg_0x403d6cc0);
#line 124

#line 124
  return result;
#line 124
}
#line 124
# 144 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   uint8_t RF230ActiveMessageP$UniqueConfig$getSequenceNumber(message_t *msg)
{
  return RF230ActiveMessageP$IEEE154Packet$getDSN(msg);
}

# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/UniqueConfig.nc"
inline static   uint8_t UniqueLayerP$UniqueConfig$getSequenceNumber(message_t *arg_0x403bf230){
#line 31
  unsigned char result;
#line 31

#line 31
  result = RF230ActiveMessageP$UniqueConfig$getSequenceNumber(arg_0x403bf230);
#line 31

#line 31
  return result;
#line 31
}
#line 31
# 276 "/usr/local/lib/ncc/nesc_nx.h"
static __inline uint16_t __nesc_ntoh_leuint16(const void *source)
#line 276
{
  const uint8_t *base = source;

#line 278
  return ((uint16_t )base[1] << 8) | base[0];
}

# 184 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline   uint16_t IEEE154PacketP$IEEE154Packet$getSrcAddr(message_t *msg)
{
  return __nesc_ntoh_leuint16((unsigned char *)&IEEE154PacketP$getHeader(msg)->src);
}

# 155 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static   uint16_t RF230ActiveMessageP$IEEE154Packet$getSrcAddr(message_t *arg_0x403dc030){
#line 155
  unsigned short result;
#line 155

#line 155
  result = IEEE154PacketP$IEEE154Packet$getSrcAddr(arg_0x403dc030);
#line 155

#line 155
  return result;
#line 155
}
#line 155
# 154 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   am_addr_t RF230ActiveMessageP$UniqueConfig$getSender(message_t *msg)
{
  return RF230ActiveMessageP$IEEE154Packet$getSrcAddr(msg);
}

# 36 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/UniqueConfig.nc"
inline static   am_addr_t UniqueLayerP$UniqueConfig$getSender(message_t *arg_0x403bf740){
#line 36
  unsigned short result;
#line 36

#line 36
  result = RF230ActiveMessageP$UniqueConfig$getSender(arg_0x403bf740);
#line 36

#line 36
  return result;
#line 36
}
#line 36
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Neighborhood.nc"
inline static   uint8_t UniqueLayerP$Neighborhood$insertNode(am_addr_t arg_0x407e19a0){
#line 60
  unsigned char result;
#line 60

#line 60
  result = NeighborhoodP$Neighborhood$insertNode(arg_0x407e19a0);
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/UniqueLayerP.nc"
static inline   message_t *UniqueLayerP$SubReceive$receive(message_t *msg)
{
  uint8_t index = UniqueLayerP$Neighborhood$insertNode(UniqueLayerP$UniqueConfig$getSender(msg));
  uint8_t dsn = UniqueLayerP$UniqueConfig$getSequenceNumber(msg);

  if (UniqueLayerP$NeighborhoodFlag$get(index)) 
    {
      uint8_t diff = dsn - UniqueLayerP$receivedNumbers[index];

      if (diff == 0) 
        {
          UniqueLayerP$UniqueConfig$reportChannelError();
          return msg;
        }
    }
  else {
    UniqueLayerP$NeighborhoodFlag$set(index);
    }
  UniqueLayerP$receivedNumbers[index] = dsn;

  return UniqueLayerP$RadioReceive$receive(msg);
}

# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
inline static   message_t *TrafficMonitorLayerP$RadioReceive$receive(message_t *arg_0x4078a9c0){
#line 42
  nx_struct message_t *result;
#line 42

#line 42
  result = UniqueLayerP$SubReceive$receive(arg_0x4078a9c0);
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodFlag.nc"
inline static   void TrafficMonitorLayerP$NeighborhoodFlag$set(uint8_t arg_0x407dd540){
#line 40
  NeighborhoodP$NeighborhoodFlag$set(1U, arg_0x407dd540);
#line 40
}
#line 40
#line 35
inline static   bool TrafficMonitorLayerP$NeighborhoodFlag$get(uint8_t arg_0x407dd068){
#line 35
  unsigned char result;
#line 35

#line 35
  result = NeighborhoodP$NeighborhoodFlag$get(1U, arg_0x407dd068);
#line 35

#line 35
  return result;
#line 35
}
#line 35
# 208 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   am_addr_t RF230ActiveMessageP$TrafficMonitorConfig$getSender(message_t *msg)
{
  return RF230ActiveMessageP$IEEE154Packet$getSrcAddr(msg);
}

# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorConfig.nc"
inline static   am_addr_t TrafficMonitorLayerP$TrafficMonitorConfig$getSender(message_t *arg_0x403c4e68){
#line 43
  unsigned short result;
#line 43

#line 43
  result = RF230ActiveMessageP$TrafficMonitorConfig$getSender(arg_0x403c4e68);
#line 43

#line 43
  return result;
#line 43
}
#line 43
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Neighborhood.nc"
inline static   uint8_t TrafficMonitorLayerP$Neighborhood$insertNode(am_addr_t arg_0x407e19a0){
#line 60
  unsigned char result;
#line 60

#line 60
  result = NeighborhoodP$Neighborhood$insertNode(arg_0x407e19a0);
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorConfig.nc"
inline static   uint16_t TrafficMonitorLayerP$TrafficMonitorConfig$getChannelTime(message_t *arg_0x403c4940){
#line 37
  unsigned short result;
#line 37

#line 37
  result = RF230ActiveMessageP$TrafficMonitorConfig$getChannelTime(arg_0x403c4940);
#line 37

#line 37
  return result;
#line 37
}
#line 37
# 105 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
static inline   message_t *TrafficMonitorLayerP$SubReceive$receive(message_t *msg)
{
  uint8_t index;

  TrafficMonitorLayerP$rxAverage += TrafficMonitorLayerP$TrafficMonitorConfig$getChannelTime(msg);

  index = TrafficMonitorLayerP$Neighborhood$insertNode(TrafficMonitorLayerP$TrafficMonitorConfig$getSender(msg));
  if (!TrafficMonitorLayerP$NeighborhoodFlag$get(index)) 
    {
      if (TrafficMonitorLayerP$neighborCount < TrafficMonitorLayerP$TRAFFIC_MONITOR_UINT8_MAX) 
        {
          ++TrafficMonitorLayerP$neighborCount;
          TrafficMonitorLayerP$NeighborhoodFlag$set(index);
        }
    }

  return TrafficMonitorLayerP$RadioReceive$receive(msg);
}

# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
inline static   message_t *RandomCollisionLayerP$RadioReceive$receive(message_t *arg_0x4078a9c0){
#line 42
  nx_struct message_t *result;
#line 42

#line 42
  result = TrafficMonitorLayerP$SubReceive$receive(arg_0x4078a9c0);
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 196 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static   bool RF230ActiveMessageP$IEEE154Packet$requiresAckReply(message_t *arg_0x403e3a78){
#line 196
  unsigned char result;
#line 196

#line 196
  result = IEEE154PacketP$IEEE154Packet$requiresAckReply(arg_0x403e3a78);
#line 196

#line 196
  return result;
#line 196
}
#line 196
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
inline static   uint16_t RF230ActiveMessageP$RadioAlarm$getNow(void){
#line 53
  unsigned short result;
#line 53

#line 53
  result = RadioAlarmP$RadioAlarm$getNow(0U);
#line 53

#line 53
  return result;
#line 53
}
#line 53
# 244 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   uint16_t RF230ActiveMessageP$RandomCollisionConfig$getTransmitBarrier(message_t *msg)
{
  uint16_t time;


  time = RF230ActiveMessageP$RadioAlarm$getNow();


  if (RF230ActiveMessageP$IEEE154Packet$requiresAckReply(msg)) {
    time += (uint16_t )(32 * (-5 + 16 + 11 + 5) * (7372800UL / 8 / 32 * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 1000000.0));
    }
  else {
#line 255
    time += (uint16_t )(32 * (-5 + 5) * (7372800UL / 8 / 32 * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 1000000.0));
    }
  return time;
}

# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RandomCollisionConfig.nc"
inline static   uint16_t RandomCollisionLayerP$Config$getTransmitBarrier(message_t *arg_0x403c80d0){
#line 46
  unsigned short result;
#line 46

#line 46
  result = RF230ActiveMessageP$RandomCollisionConfig$getTransmitBarrier(arg_0x403c80d0);
#line 46

#line 46
  return result;
#line 46
}
#line 46
# 157 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RandomCollisionLayerP.nc"
static inline   message_t *RandomCollisionLayerP$SubReceive$receive(message_t *msg)
{
  int16_t delay;

  RandomCollisionLayerP$txBarrier = RandomCollisionLayerP$Config$getTransmitBarrier(msg);
  delay = RandomCollisionLayerP$txBarrier - RandomCollisionLayerP$RadioAlarm$getNow();

  if (delay > 0) 
    {
      if (RandomCollisionLayerP$state == RandomCollisionLayerP$STATE_READY) 
        {
          RandomCollisionLayerP$RadioAlarm$wait(delay);
          RandomCollisionLayerP$state = RandomCollisionLayerP$STATE_BARRIER;
        }
      else {
        RandomCollisionLayerP$state |= RandomCollisionLayerP$STATE_BARRIER;
        }
    }
  return RandomCollisionLayerP$RadioReceive$receive(msg);
}

# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
inline static   message_t *SoftwareAckLayerP$RadioReceive$receive(message_t *arg_0x4078a9c0){
#line 42
  nx_struct message_t *result;
#line 42

#line 42
  result = RandomCollisionLayerP$SubReceive$receive(arg_0x4078a9c0);
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 251 "/usr/local/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_hton_leuint8(void *target, uint8_t value)
#line 251
{
  uint8_t *base = target;

#line 253
  base[0] = value;
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

# 111 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline   void IEEE154PacketP$IEEE154Packet$createAckReply(message_t *data, message_t *ack)
{
  ieee154_header_t *header = IEEE154PacketP$getHeader(ack);

  __nesc_hton_leuint8((unsigned char *)&header->length, IEEE154PacketP$IEEE154_ACK_FRAME_LENGTH);
  __nesc_hton_leuint16((unsigned char *)&header->fcf, IEEE154PacketP$IEEE154_ACK_FRAME_VALUE);
  __nesc_hton_leuint8((unsigned char *)&header->dsn, __nesc_ntoh_leuint8((unsigned char *)&IEEE154PacketP$getHeader(data)->dsn));
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static   void RF230ActiveMessageP$IEEE154Packet$createAckReply(message_t *arg_0x403d95b0, message_t *arg_0x403d9760){
#line 92
  IEEE154PacketP$IEEE154Packet$createAckReply(arg_0x403d95b0, arg_0x403d9760);
#line 92
}
#line 92
# 119 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   void RF230ActiveMessageP$SoftwareAckConfig$createAckPacket(message_t *data, message_t *ack)
{
  RF230ActiveMessageP$IEEE154Packet$createAckReply(data, ack);
}

# 68 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SoftwareAckConfig.nc"
inline static   void SoftwareAckLayerP$SoftwareAckConfig$createAckPacket(message_t *arg_0x403b9ba0, message_t *arg_0x403b9d50){
#line 68
  RF230ActiveMessageP$SoftwareAckConfig$createAckPacket(arg_0x403b9ba0, arg_0x403b9d50);
#line 68
}
#line 68
# 114 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   bool RF230ActiveMessageP$SoftwareAckConfig$requiresAckReply(message_t *msg)
{
  return RF230ActiveMessageP$IEEE154Packet$requiresAckReply(msg);
}

# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SoftwareAckConfig.nc"
inline static   bool SoftwareAckLayerP$SoftwareAckConfig$requiresAckReply(message_t *arg_0x403b9668){
#line 63
  unsigned char result;
#line 63

#line 63
  result = RF230ActiveMessageP$SoftwareAckConfig$requiresAckReply(arg_0x403b9668);
#line 63

#line 63
  return result;
#line 63
}
#line 63
# 65 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline   void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$Alarm$stop(void)
#line 65
{
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$stop();
}

# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void RadioAlarmP$Alarm$stop(void){
#line 62
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$Alarm$stop();
#line 62
}
#line 62
# 96 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
static inline   void RadioAlarmP$RadioAlarm$cancel(uint8_t id)
{
  for (; 0; ) ;
  for (; 0; ) ;

  RadioAlarmP$Alarm$stop();
  RadioAlarmP$state = RadioAlarmP$STATE_READY;
}

# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
inline static   void SoftwareAckLayerP$RadioAlarm$cancel(void){
#line 43
  RadioAlarmP$RadioAlarm$cancel(2U);
#line 43
}
#line 43
# 98 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline   bool IEEE154PacketP$IEEE154Packet$isAckFrame(message_t *msg)
{
  return (__nesc_ntoh_leuint16((unsigned char *)&IEEE154PacketP$getHeader(msg)->fcf) & IEEE154PacketP$IEEE154_ACK_FRAME_MASK) == IEEE154PacketP$IEEE154_ACK_FRAME_VALUE;
}

# 79 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static   bool RF230ActiveMessageP$IEEE154Packet$isAckFrame(message_t *arg_0x403daa20){
#line 79
  unsigned char result;
#line 79

#line 79
  result = IEEE154PacketP$IEEE154Packet$isAckFrame(arg_0x403daa20);
#line 79

#line 79
  return result;
#line 79
}
#line 79
# 104 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   bool RF230ActiveMessageP$SoftwareAckConfig$isAckPacket(message_t *msg)
{
  return RF230ActiveMessageP$IEEE154Packet$isAckFrame(msg);
}

# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SoftwareAckConfig.nc"
inline static   bool SoftwareAckLayerP$SoftwareAckConfig$isAckPacket(message_t *arg_0x403ba8a8){
#line 50
  unsigned char result;
#line 50

#line 50
  result = RF230ActiveMessageP$SoftwareAckConfig$isAckPacket(arg_0x403ba8a8);
#line 50

#line 50
  return result;
#line 50
}
#line 50
# 128 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SoftwareAckLayerP.nc"
static inline   message_t *SoftwareAckLayerP$SubReceive$receive(message_t *msg)
{
  bool ack = SoftwareAckLayerP$SoftwareAckConfig$isAckPacket(msg);

  for (; 0; ) ;

  if (SoftwareAckLayerP$state == SoftwareAckLayerP$STATE_ACK_WAIT) 
    {
      for (; 0; ) ;

      SoftwareAckLayerP$RadioAlarm$cancel();
      SoftwareAckLayerP$SoftwareAckConfig$setAckReceived(SoftwareAckLayerP$txMsg, ack);

      SoftwareAckLayerP$state = SoftwareAckLayerP$STATE_READY;
      SoftwareAckLayerP$RadioSend$sendDone(SUCCESS);
    }

  if (ack) {
    return msg;
    }
  if (SoftwareAckLayerP$SoftwareAckConfig$requiresAckReply(msg)) 
    {
      SoftwareAckLayerP$SoftwareAckConfig$createAckPacket(msg, &SoftwareAckLayerP$ackMsg);


      if (SoftwareAckLayerP$SubSend$send(&SoftwareAckLayerP$ackMsg) == SUCCESS) {
        SoftwareAckLayerP$state = SoftwareAckLayerP$STATE_ACK_SEND;
        }
      else {
#line 156
        for (; 0; ) ;
        }
    }
  return SoftwareAckLayerP$RadioReceive$receive(msg);
}

# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
inline static   message_t *RF230LayerP$RadioReceive$receive(message_t *arg_0x4078a9c0){
#line 42
  nx_struct message_t *result;
#line 42

#line 42
  result = SoftwareAckLayerP$SubReceive$receive(arg_0x4078a9c0);
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static __inline rf230packet_metadata_t *RF230PacketP$getMeta(message_t *msg)
{
  return (rf230packet_metadata_t *)msg->metadata;
}

#line 135
static inline   void RF230PacketP$PacketLinkQuality$set(message_t *msg, uint8_t value)
{
  RF230PacketP$getMeta(msg)->lqi = value;
}

# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/PacketField.nc"
inline static   void RF230LayerP$PacketLinkQuality$set(message_t *arg_0x403a5010, RF230LayerP$PacketLinkQuality$value_type arg_0x403a51a0){
#line 46
  RF230PacketP$PacketLinkQuality$set(arg_0x403a5010, arg_0x403a51a0);
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
static __inline   uint16_t HplRF230P$HplRF230$crcByte(uint16_t crc, uint8_t data)
{
  return _crc_ccitt_update(crc, data);
}

# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230.nc"
inline static   uint16_t RF230LayerP$HplRF230$crcByte(uint16_t arg_0x408ab598, uint8_t arg_0x408ab720){
#line 33
  unsigned short result;
#line 33

#line 33
  result = HplRF230P$HplRF230$crcByte(arg_0x408ab598, arg_0x408ab720);
#line 33

#line 33
  return result;
#line 33
}
#line 33
# 257 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static inline   bool MessageBufferLayerP$RadioReceive$header(message_t *msg)
{
  bool notFull;


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 262
    notFull = MessageBufferLayerP$receiveQueueSize < MessageBufferLayerP$RECEIVE_QUEUE_SIZE;
#line 262
    __nesc_atomic_end(__nesc_atomic); }

  return notFull;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
inline static   bool UniqueLayerP$RadioReceive$header(message_t *arg_0x4078a2e8){
#line 35
  unsigned char result;
#line 35

#line 35
  result = MessageBufferLayerP$RadioReceive$header(arg_0x4078a2e8);
#line 35

#line 35
  return result;
#line 35
}
#line 35
# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/UniqueLayerP.nc"
static inline   bool UniqueLayerP$SubReceive$header(message_t *msg)
{

  return UniqueLayerP$RadioReceive$header(msg);
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
inline static   bool TrafficMonitorLayerP$RadioReceive$header(message_t *arg_0x4078a2e8){
#line 35
  unsigned char result;
#line 35

#line 35
  result = UniqueLayerP$SubReceive$header(arg_0x4078a2e8);
#line 35

#line 35
  return result;
#line 35
}
#line 35
# 100 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
static inline   bool TrafficMonitorLayerP$SubReceive$header(message_t *msg)
{
  return TrafficMonitorLayerP$RadioReceive$header(msg);
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
inline static   bool RandomCollisionLayerP$RadioReceive$header(message_t *arg_0x4078a2e8){
#line 35
  unsigned char result;
#line 35

#line 35
  result = TrafficMonitorLayerP$SubReceive$header(arg_0x4078a2e8);
#line 35

#line 35
  return result;
#line 35
}
#line 35
# 152 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RandomCollisionLayerP.nc"
static inline   bool RandomCollisionLayerP$SubReceive$header(message_t *msg)
{
  return RandomCollisionLayerP$RadioReceive$header(msg);
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
inline static   bool SoftwareAckLayerP$RadioReceive$header(message_t *arg_0x4078a2e8){
#line 35
  unsigned char result;
#line 35

#line 35
  result = RandomCollisionLayerP$SubReceive$header(arg_0x4078a2e8);
#line 35

#line 35
  return result;
#line 35
}
#line 35
# 120 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline   bool IEEE154PacketP$IEEE154Packet$verifyAckReply(message_t *data, message_t *ack)
{
  ieee154_header_t *header = IEEE154PacketP$getHeader(ack);

  return __nesc_ntoh_leuint8((unsigned char *)&header->dsn) == __nesc_ntoh_leuint8((unsigned char *)&IEEE154PacketP$getHeader(data)->dsn)
   && (__nesc_ntoh_leuint16((unsigned char *)&header->fcf) & IEEE154PacketP$IEEE154_ACK_FRAME_MASK) == IEEE154PacketP$IEEE154_ACK_FRAME_VALUE;
}

# 98 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static   bool RF230ActiveMessageP$IEEE154Packet$verifyAckReply(message_t *arg_0x403d9d30, message_t *arg_0x403d9ee0){
#line 98
  unsigned char result;
#line 98

#line 98
  result = IEEE154PacketP$IEEE154Packet$verifyAckReply(arg_0x403d9d30, arg_0x403d9ee0);
#line 98

#line 98
  return result;
#line 98
}
#line 98
# 109 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   bool RF230ActiveMessageP$SoftwareAckConfig$verifyAckPacket(message_t *data, message_t *ack)
{
  return RF230ActiveMessageP$IEEE154Packet$verifyAckReply(data, ack);
}

# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SoftwareAckConfig.nc"
inline static   bool SoftwareAckLayerP$SoftwareAckConfig$verifyAckPacket(message_t *arg_0x403bae98, message_t *arg_0x403b9068){
#line 57
  unsigned char result;
#line 57

#line 57
  result = RF230ActiveMessageP$SoftwareAckConfig$verifyAckPacket(arg_0x403bae98, arg_0x403b9068);
#line 57

#line 57
  return result;
#line 57
}
#line 57
# 120 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SoftwareAckLayerP.nc"
static inline   bool SoftwareAckLayerP$SubReceive$header(message_t *msg)
{
  if (SoftwareAckLayerP$SoftwareAckConfig$isAckPacket(msg)) {
    return SoftwareAckLayerP$state == SoftwareAckLayerP$STATE_ACK_WAIT && SoftwareAckLayerP$SoftwareAckConfig$verifyAckPacket(SoftwareAckLayerP$txMsg, msg);
    }
  else {
#line 125
    return SoftwareAckLayerP$RadioReceive$header(msg);
    }
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
inline static   bool RF230LayerP$RadioReceive$header(message_t *arg_0x4078a2e8){
#line 35
  unsigned char result;
#line 35

#line 35
  result = SoftwareAckLayerP$SubReceive$header(arg_0x4078a2e8);
#line 35

#line 35
  return result;
#line 35
}
#line 35
# 75 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   uint8_t RF230ActiveMessageP$RF230Config$getHeaderLength(void)
{

  return 7;
}

# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230Config.nc"
inline static   uint8_t RF230LayerP$RF230Config$getHeaderLength(void){
#line 55
  unsigned char result;
#line 55

#line 55
  result = RF230ActiveMessageP$RF230Config$getHeaderLength();
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline   ieee154_header_t *IEEE154PacketP$IEEE154Packet$getHeader(message_t *msg)
{
  return IEEE154PacketP$getHeader(msg);
}

# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static   ieee154_header_t *RF230ActiveMessageP$IEEE154Packet$getHeader(message_t *arg_0x403d3190){
#line 39
  nx_struct ieee154_header_t *result;
#line 39

#line 39
  result = IEEE154PacketP$IEEE154Packet$getHeader(arg_0x403d3190);
#line 39

#line 39
  return result;
#line 39
}
#line 39
# 65 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   uint8_t *RF230ActiveMessageP$RF230Config$getPayload(message_t *msg)
{
  return (uint8_t *)RF230ActiveMessageP$IEEE154Packet$getHeader(msg) + 1;
}

# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230Config.nc"
inline static   uint8_t *RF230LayerP$RF230Config$getPayload(message_t *arg_0x403b5518){
#line 46
  unsigned char *result;
#line 46

#line 46
  result = RF230ActiveMessageP$RF230Config$getPayload(arg_0x403b5518);
#line 46

#line 46
  return result;
#line 46
}
#line 46
# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline   void IEEE154PacketP$IEEE154Packet$setLength(message_t *msg, uint8_t length)
{
  __nesc_hton_leuint8((unsigned char *)&IEEE154PacketP$getHeader(msg)->length, length);
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static   void RF230ActiveMessageP$IEEE154Packet$setLength(message_t *arg_0x403d3bd8, uint8_t arg_0x403d3d60){
#line 49
  IEEE154PacketP$IEEE154Packet$setLength(arg_0x403d3bd8, arg_0x403d3d60);
#line 49
}
#line 49
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   void RF230ActiveMessageP$RF230Config$setLength(message_t *msg, uint8_t len)
{
  RF230ActiveMessageP$IEEE154Packet$setLength(msg, len);
}

# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230Config.nc"
inline static   void RF230LayerP$RF230Config$setLength(message_t *arg_0x403b6db8, uint8_t arg_0x403b5010){
#line 39
  RF230ActiveMessageP$RF230Config$setLength(arg_0x403b6db8, arg_0x403b5010);
#line 39
}
#line 39
# 81 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   uint8_t RF230ActiveMessageP$RF230Config$getMaxLength(void)
{

  return sizeof(rf230packet_header_t ) - 1 + 28 + sizeof(ieee154_footer_t );
}

# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230Config.nc"
inline static   uint8_t RF230LayerP$RF230Config$getMaxLength(void){
#line 60
  unsigned char result;
#line 60

#line 60
  result = RF230ActiveMessageP$RF230Config$getMaxLength();
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 121 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static __inline   uint8_t HplRF230P$HplRF230$spiWrite(uint8_t data)
{



  * (volatile uint8_t *)(0X2E + 0x20) = data;
  while (!(* (volatile uint8_t *)(0x2D + 0x20) & 0x80)) 
    ;

  return * (volatile uint8_t *)(0X2E + 0x20);
}

# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230.nc"
inline static   uint8_t RF230LayerP$HplRF230$spiWrite(uint8_t arg_0x408a9ae0){
#line 59
  unsigned char result;
#line 59

#line 59
  result = HplRF230P$HplRF230$spiWrite(arg_0x408a9ae0);
#line 59

#line 59
  return result;
#line 59
}
#line 59
# 541 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
static __inline void RF230LayerP$downloadMessage(void)
{
  uint8_t length;
  uint16_t crc;

  RF230LayerP$SELN$clr();
  RF230LayerP$HplRF230$spiWrite(RF230_CMD_FRAME_READ);


  length = RF230LayerP$HplRF230$spiWrite(0);


  if (length >= 3 && length <= RF230LayerP$RF230Config$getMaxLength()) 
    {
      uint8_t read;
      uint8_t *data;


      RF230LayerP$HplRF230$spiSplitWrite(0);

      RF230LayerP$RF230Config$setLength(RF230LayerP$rxMsg, length);
      data = RF230LayerP$RF230Config$getPayload(RF230LayerP$rxMsg);
      crc = 0;


      length -= 2;

      read = RF230LayerP$RF230Config$getHeaderLength();
      if (length < read) {
        read = length;
        }
      length -= read;

      do {
          crc = RF230LayerP$HplRF230$crcByte(crc, * data++ = RF230LayerP$HplRF230$spiSplitReadWrite(0));
        }
      while (--read != 0);

      if (RF230LayerP$RadioReceive$header(RF230LayerP$rxMsg)) 
        {
          while (length-- != 0) 
            crc = RF230LayerP$HplRF230$crcByte(crc, * data++ = RF230LayerP$HplRF230$spiSplitReadWrite(0));

          crc = RF230LayerP$HplRF230$crcByte(crc, RF230LayerP$HplRF230$spiSplitReadWrite(0));
          crc = RF230LayerP$HplRF230$crcByte(crc, RF230LayerP$HplRF230$spiSplitReadWrite(0));

          RF230LayerP$PacketLinkQuality$set(RF230LayerP$rxMsg, RF230LayerP$HplRF230$spiSplitRead());
        }
      else {
        crc = 1;
        }
    }
  else {
#line 593
    crc = 1;
    }
  RF230LayerP$SELN$set();
  RF230LayerP$state = RF230LayerP$STATE_RX_ON;
#line 613
  RF230LayerP$cmd = RF230LayerP$CMD_NONE;


  if (crc == 0) {
    RF230LayerP$rxMsg = RF230LayerP$RadioReceive$receive(RF230LayerP$rxMsg);
    }
}

# 132 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   uint16_t RF230ActiveMessageP$SoftwareAckConfig$getAckTimeout(void)
{
  return (uint16_t )(800 * (7372800UL / 8 / 32 * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 1000000.0));
}

# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SoftwareAckConfig.nc"
inline static   uint16_t SoftwareAckLayerP$SoftwareAckConfig$getAckTimeout(void){
#line 32
  unsigned short result;
#line 32

#line 32
  result = RF230ActiveMessageP$SoftwareAckConfig$getAckTimeout();
#line 32

#line 32
  return result;
#line 32
}
#line 32
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
inline static   void SoftwareAckLayerP$RadioAlarm$wait(uint16_t arg_0x403eab60){
#line 38
  RadioAlarmP$RadioAlarm$wait(2U, arg_0x403eab60);
#line 38
}
#line 38
#line 33
inline static   bool SoftwareAckLayerP$RadioAlarm$isFree(void){
#line 33
  unsigned char result;
#line 33

#line 33
  result = RadioAlarmP$RadioAlarm$isFree(2U);
#line 33

#line 33
  return result;
#line 33
}
#line 33
# 174 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline   uint16_t IEEE154PacketP$IEEE154Packet$getDestAddr(message_t *msg)
{
  return __nesc_ntoh_leuint16((unsigned char *)&IEEE154PacketP$getHeader(msg)->dest);
}

#line 88
static __inline   bool IEEE154PacketP$IEEE154Packet$isDataFrame(message_t *msg)
{
  return (__nesc_ntoh_leuint16((unsigned char *)&IEEE154PacketP$getHeader(msg)->fcf) & IEEE154PacketP$IEEE154_DATA_FRAME_MASK) == IEEE154PacketP$IEEE154_DATA_FRAME_VALUE;
}

#line 128
static __inline   bool IEEE154PacketP$IEEE154Packet$getAckRequired(message_t *msg)
{
  return __nesc_ntoh_leuint16((unsigned char *)&IEEE154PacketP$getHeader(msg)->fcf) & (1 << IEEE154_FCF_ACK_REQ);
}

#line 218
static inline   bool IEEE154PacketP$IEEE154Packet$requiresAckWait(message_t *msg)
{
  return IEEE154PacketP$IEEE154Packet$getAckRequired(msg)
   && IEEE154PacketP$IEEE154Packet$isDataFrame(msg)
   && IEEE154PacketP$IEEE154Packet$getDestAddr(msg) != 0xFFFF;
}

# 190 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static   bool RF230ActiveMessageP$IEEE154Packet$requiresAckWait(message_t *arg_0x403e3510){
#line 190
  unsigned char result;
#line 190

#line 190
  result = IEEE154PacketP$IEEE154Packet$requiresAckWait(arg_0x403e3510);
#line 190

#line 190
  return result;
#line 190
}
#line 190
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   bool RF230ActiveMessageP$SoftwareAckConfig$requiresAckWait(message_t *msg)
{
  return RF230ActiveMessageP$IEEE154Packet$requiresAckWait(msg);
}

# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SoftwareAckConfig.nc"
inline static   bool SoftwareAckLayerP$SoftwareAckConfig$requiresAckWait(message_t *arg_0x403bbc88){
#line 38
  unsigned char result;
#line 38

#line 38
  result = RF230ActiveMessageP$SoftwareAckConfig$requiresAckWait(arg_0x403bbc88);
#line 38

#line 38
  return result;
#line 38
}
#line 38
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SoftwareAckLayerP.nc"
static inline   void SoftwareAckLayerP$SubSend$sendDone(error_t error)
{
  if (SoftwareAckLayerP$state == SoftwareAckLayerP$STATE_ACK_SEND) 
    {

      for (; 0; ) ;

      SoftwareAckLayerP$state = SoftwareAckLayerP$STATE_READY;
    }
  else 
    {
      for (; 0; ) ;
      for (; 0; ) ;

      if (error == SUCCESS && SoftwareAckLayerP$SoftwareAckConfig$requiresAckWait(SoftwareAckLayerP$txMsg) && SoftwareAckLayerP$RadioAlarm$isFree()) 
        {
          SoftwareAckLayerP$RadioAlarm$wait(SoftwareAckLayerP$SoftwareAckConfig$getAckTimeout());
          SoftwareAckLayerP$state = SoftwareAckLayerP$STATE_ACK_WAIT;
        }
      else 
        {
          SoftwareAckLayerP$state = SoftwareAckLayerP$STATE_READY;
          SoftwareAckLayerP$RadioSend$sendDone(error);
        }
    }
}

# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
inline static   void RF230LayerP$RadioSend$sendDone(error_t arg_0x40774118){
#line 45
  SoftwareAckLayerP$SubSend$sendDone(arg_0x40774118);
#line 45
}
#line 45
# 152 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static inline   void RF230PacketP$PacketTimeStampRadio$clear(message_t *msg)
{
  RF230PacketP$getMeta(msg)->flags &= ~RF230PACKET_TIMESTAMP;
}

# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
inline static   void RF230LayerP$PacketTimeStamp$clear(message_t *arg_0x40386d10){
#line 59
  RF230PacketP$PacketTimeStampRadio$clear(arg_0x40386d10);
#line 59
}
#line 59








inline static   void RF230LayerP$PacketTimeStamp$set(message_t *arg_0x40385260, RF230LayerP$PacketTimeStamp$size_type arg_0x403853f0){
#line 67
  RF230PacketP$PacketTimeStampRadio$set(arg_0x40385260, arg_0x403853f0);
#line 67
}
#line 67
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$size_type /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$get(void){
#line 53
  unsigned long result;
#line 53

#line 53
  result = /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$Counter$get();
#line 53

#line 53
  return result;
#line 53
}
#line 53
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline   uint32_t /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC$0$LocalTime$get(void)
{
  return /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$get();
}

# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/LocalTime.nc"
inline static   uint32_t RF230LayerP$LocalTime$get(void){
#line 50
  unsigned long result;
#line 50

#line 50
  result = /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC$0$LocalTime$get();
#line 50

#line 50
  return result;
#line 50
}
#line 50
# 227 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static inline   void RF230PacketP$PacketRSSI$clear(message_t *msg)
{
  RF230PacketP$getMeta(msg)->flags &= ~RF230PACKET_RSSI;
}

# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/PacketField.nc"
inline static   void RF230LayerP$PacketRSSI$clear(message_t *arg_0x403a6b00){
#line 40
  RF230PacketP$PacketRSSI$clear(arg_0x403a6b00);
#line 40
}
#line 40
# 232 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static inline   void RF230PacketP$PacketRSSI$set(message_t *msg, uint8_t value)
{
  RF230PacketP$getMeta(msg)->flags &= ~RF230PACKET_TXPOWER;
  RF230PacketP$getMeta(msg)->flags |= RF230PACKET_RSSI;
  RF230PacketP$getMeta(msg)->power = value;
}

# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/PacketField.nc"
inline static   void RF230LayerP$PacketRSSI$set(message_t *arg_0x403a5010, RF230LayerP$PacketRSSI$value_type arg_0x403a51a0){
#line 46
  RF230PacketP$PacketRSSI$set(arg_0x403a5010, arg_0x403a51a0);
#line 46
}
#line 46
# 635 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
static inline void RF230LayerP$serviceRadio(void)
{
  if (RF230LayerP$isSpiAcquired()) 
    {
      uint16_t time;
      uint32_t time32;
      uint8_t irq;
      uint8_t temp;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 644
        time = RF230LayerP$capturedTime;
#line 644
        __nesc_atomic_end(__nesc_atomic); }
      RF230LayerP$radioIrq = FALSE;
      irq = RF230LayerP$readRegister(RF230_IRQ_STATUS);
#line 666
      if (irq & RF230_IRQ_PLL_LOCK) 
        {
          if (RF230LayerP$cmd == RF230LayerP$CMD_TURNON || RF230LayerP$cmd == RF230LayerP$CMD_CHANNEL) 
            {
              for (; 0; ) ;

              RF230LayerP$state = RF230LayerP$STATE_RX_ON;
              RF230LayerP$cmd = RF230LayerP$CMD_SIGNAL_DONE;
            }
          else {
#line 675
            if (RF230LayerP$cmd == RF230LayerP$CMD_TRANSMIT) 
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
          if (RF230LayerP$cmd == RF230LayerP$CMD_CCA) 
            {
              RF230LayerP$RadioCCA$done(FAIL);
              RF230LayerP$cmd = RF230LayerP$CMD_NONE;
            }

          if (RF230LayerP$cmd == RF230LayerP$CMD_NONE) 
            {
              for (; 0; ) ;


              if (irq == RF230_IRQ_RX_START) 
                {
                  temp = RF230LayerP$readRegister(RF230_PHY_RSSI) & RF230_RSSI_MASK;
                  RF230LayerP$rssiBusy += temp - (RF230LayerP$rssiBusy >> 2);

                  RF230LayerP$PacketRSSI$set(RF230LayerP$rxMsg, temp);
                }
              else 
                {
                  RF230LayerP$PacketRSSI$clear(RF230LayerP$rxMsg);
                }










              if (irq == RF230_IRQ_RX_START) 
                {
                  time32 = RF230LayerP$LocalTime$get();
                  time32 += (int16_t )(time - RF230LayerP$RX_SFD_DELAY) - (int16_t )time32;
                  RF230LayerP$PacketTimeStamp$set(RF230LayerP$rxMsg, time32);
                }
              else {
                RF230LayerP$PacketTimeStamp$clear(RF230LayerP$rxMsg);
                }
              RF230LayerP$cmd = RF230LayerP$CMD_RECEIVE;
            }
          else {
            for (; 0; ) ;
            }
        }
      if (irq & RF230_IRQ_TRX_END) 
        {
          if (RF230LayerP$cmd == RF230LayerP$CMD_TRANSMIT) 
            {
              for (; 0; ) ;

              RF230LayerP$state = RF230LayerP$STATE_RX_ON;
              RF230LayerP$cmd = RF230LayerP$CMD_NONE;
              RF230LayerP$RadioSend$sendDone(SUCCESS);


              for (; 0; ) ;
            }
          else {
#line 745
            if (RF230LayerP$cmd == RF230LayerP$CMD_RECEIVE) 
              {
                for (; 0; ) ;






                if (RF230LayerP$state == RF230LayerP$STATE_PLL_ON_2_RX_ON) 
                  {
                    for (; 0; ) ;

                    RF230LayerP$writeRegister(RF230_TRX_STATE, RF230_RX_ON);
                    RF230LayerP$state = RF230LayerP$STATE_RX_ON;
                  }
                else 
                  {

                    RF230LayerP$rssiClear += (RF230LayerP$readRegister(RF230_PHY_RSSI) & RF230_RSSI_MASK) - (RF230LayerP$rssiClear >> 2);
                  }

                RF230LayerP$cmd = RF230LayerP$CMD_DOWNLOAD;
              }
            else {
              for (; 0; ) ;
              }
            }
        }
    }
}











static inline   void RF230LayerP$Tasklet$run(void)
{
  if (RF230LayerP$radioIrq) {
    RF230LayerP$serviceRadio();
    }
  if (RF230LayerP$cmd != RF230LayerP$CMD_NONE) 
    {
      if (RF230LayerP$cmd == RF230LayerP$CMD_DOWNLOAD) {
        RF230LayerP$downloadMessage();
        }
      else {
#line 796
        if (RF230LayerP$CMD_TURNOFF <= RF230LayerP$cmd && RF230LayerP$cmd <= RF230LayerP$CMD_TURNON) {
          RF230LayerP$changeState();
          }
        else {
#line 798
          if (RF230LayerP$cmd == RF230LayerP$CMD_CHANNEL) {
            RF230LayerP$changeChannel();
            }
          }
        }
#line 801
      if (RF230LayerP$cmd == RF230LayerP$CMD_SIGNAL_DONE) 
        {
          RF230LayerP$cmd = RF230LayerP$CMD_NONE;
          RF230LayerP$RadioState$done();
        }
    }

  if (RF230LayerP$cmd == RF230LayerP$CMD_NONE && RF230LayerP$state == RF230LayerP$STATE_RX_ON && !RF230LayerP$radioIrq) {
    RF230LayerP$RadioSend$ready();
    }
  if (RF230LayerP$cmd == RF230LayerP$CMD_NONE) {
    RF230LayerP$SpiResource$release();
    }
}

# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
inline static   void TaskletC$Tasklet$run(void){
#line 37
  RF230LayerP$Tasklet$run();
#line 37
  TrafficMonitorLayerP$Tasklet$run();
#line 37
  MessageBufferLayerP$Tasklet$run();
#line 37
  RadioAlarmP$Tasklet$run();
#line 37
}
#line 37
# 147 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline   uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$isOwner(uint8_t id)
#line 147
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 148
    {
      if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId == id && /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_BUSY) {
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
inline static   bool Atm128SpiP$ResourceArbiter$isOwner(uint8_t arg_0x40927790){
#line 118
  unsigned char result;
#line 118

#line 118
  result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$isOwner(arg_0x40927790);
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
inline static   bool RF230LayerP$SpiResource$isOwner(void){
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
# 170 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline    void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$configure(uint8_t id)
#line 170
{
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$configure(uint8_t arg_0x409b3428){
#line 49
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$configure(arg_0x409b3428);
#line 49
}
#line 49
# 168 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline    void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$immediateRequested(uint8_t id)
#line 168
{
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$immediateRequested(uint8_t arg_0x409b5860){
#line 51
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$immediateRequested(arg_0x409b5860);
#line 51
}
#line 51
# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$immediateRequest(uint8_t id)
#line 84
{
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$immediateRequested(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
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
inline static   error_t Atm128SpiP$ResourceArbiter$immediateRequest(uint8_t arg_0x40927790){
#line 87
  unsigned char result;
#line 87

#line 87
  result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$immediateRequest(arg_0x40927790);
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
inline static   error_t RF230LayerP$SpiResource$immediateRequest(void){
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
# 141 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/McuSleepC.nc"
static inline   void McuSleepC$McuPowerState$update(void)
#line 141
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
      * (volatile uint8_t *)(0x2C + 0x20) |= 1 << 4;
    }
  else {
      * (volatile uint8_t *)(0x2C + 0x20) &= ~(1 << 4);
    }
}

# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP$9$IO$makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)36U |= 1 << 1;
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
  * (volatile uint8_t *)36U &= ~(1 << 3);
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
  * (volatile uint8_t *)36U |= 1 << 2;
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
      * (volatile uint8_t *)(0x2D + 0x20) |= 1 << 0;
    }
  else {
      * (volatile uint8_t *)(0x2D + 0x20) &= ~(1 << 0);
    }
}

# 125 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static   void Atm128SpiP$Spi$setMasterDoubleSpeed(bool arg_0x4093f9f8){
#line 125
  HplAtm128SpiP$SPI$setMasterDoubleSpeed(arg_0x4093f9f8);
#line 125
}
#line 125
# 169 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline   void HplAtm128SpiP$SPI$setClockPolarity(bool highWhenIdle)
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
inline static   void Atm128SpiP$Spi$setClockPolarity(bool arg_0x409418c0){
#line 108
  HplAtm128SpiP$SPI$setClockPolarity(arg_0x409418c0);
#line 108
}
#line 108
# 183 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline   void HplAtm128SpiP$SPI$setClockPhase(bool sampleOnTrailing)
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
inline static   void Atm128SpiP$Spi$setClockPhase(bool arg_0x409400c0){
#line 111
  HplAtm128SpiP$SPI$setClockPhase(arg_0x409400c0);
#line 111
}
#line 111
# 200 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline   void HplAtm128SpiP$SPI$setClock(uint8_t v)
#line 200
{
  v &= 1 | 0;
  * (volatile uint8_t *)(0x2C + 0x20) = (* (volatile uint8_t *)(0x2C + 0x20) & ~(1 | 0)) | v;
}

# 114 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static   void Atm128SpiP$Spi$setClock(uint8_t arg_0x40940888){
#line 114
  HplAtm128SpiP$SPI$setClock(arg_0x40940888);
#line 114
}
#line 114
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
inline static   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$enqueue(resource_client_id_t arg_0x4099d360){
#line 69
  unsigned char result;
#line 69

#line 69
  result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(arg_0x4099d360);
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
inline static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$requested(uint8_t arg_0x409b5860){
#line 43
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$requested(arg_0x409b5860);
#line 43
}
#line 43
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$request(uint8_t id)
#line 71
{
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$requested(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
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
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$enqueue(id);

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
inline static   error_t Atm128SpiP$ResourceArbiter$request(uint8_t arg_0x40927790){
#line 78
  unsigned char result;
#line 78

#line 78
  result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$request(arg_0x40927790);
#line 78

#line 78
  return result;
#line 78
}
#line 78
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

# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$timer_size /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$get(void){
#line 52
  unsigned short result;
#line 52

#line 52
  result = HplAtm1281Timer1P$Timer$get();
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
inline static   /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$CounterFrom$size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$CounterFrom$get(void){
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
# 125 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline   uint8_t HplAtm1281Timer1P$TimerCtrl$getInterruptFlag(void)
#line 125
{
  return * (volatile uint8_t *)(0x16 + 0x20);
}

#line 156
static inline   bool HplAtm1281Timer1P$Timer$test(void)
#line 156
{
  return ((Atm128_TIFR_t )HplAtm1281Timer1P$TimerCtrl$getInterruptFlag()).bits.tov;
}

# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   bool /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$test(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = HplAtm1281Timer1P$Timer$test();
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
inline static   bool /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$CounterFrom$isOverflowPending(void){
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
# 194 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline   void HplAtm1281Timer1P$CompareA$set(uint16_t t)
#line 194
{
#line 194
  * (volatile uint16_t *)0x88 = t;
}

# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$set(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$size_type arg_0x404de8c8){
#line 45
  HplAtm1281Timer1P$CompareA$set(arg_0x404de8c8);
#line 45
}
#line 45
# 140 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline   void HplAtm1281Timer1P$CompareA$reset(void)
#line 140
{
#line 140
  * (volatile uint8_t *)(0x16 + 0x20) = 1 << 1;
}

# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$reset(void){
#line 53
  HplAtm1281Timer1P$CompareA$reset();
#line 53
}
#line 53
# 146 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline   void HplAtm1281Timer1P$CompareA$start(void)
#line 146
{
#line 146
  * (volatile uint8_t *)0x6F |= 1 << 1;
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$start(void){
#line 56
  HplAtm1281Timer1P$CompareA$start();
#line 56
}
#line 56
# 103 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static   bool RF230ActiveMessageP$IEEE154Packet$getAckRequired(message_t *arg_0x403d84a8){
#line 103
  unsigned char result;
#line 103

#line 103
  result = IEEE154PacketP$IEEE154Packet$getAckRequired(arg_0x403d84a8);
#line 103

#line 103
  return result;
#line 103
}
#line 103
# 170 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static inline   void MessageBufferLayerP$RadioSend$sendDone(error_t error)
{
  for (; 0; ) ;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 174
    MessageBufferLayerP$txError = error;
#line 174
    __nesc_atomic_end(__nesc_atomic); }
  MessageBufferLayerP$sendTask$postTask();
}

# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
inline static   void TrafficMonitorLayerP$RadioSend$sendDone(error_t arg_0x40774118){
#line 45
  MessageBufferLayerP$RadioSend$sendDone(arg_0x40774118);
#line 45
}
#line 45
# 70 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static __inline rf230packet_metadata_t *RF230ActiveMessageP$getMeta(message_t *msg)
{
  return (rf230packet_metadata_t *)msg->metadata;
}

# 193 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static inline   bool RF230PacketP$PacketTransmitPower$isSet(message_t *msg)
{
  return RF230PacketP$getMeta(msg)->flags & RF230PACKET_TXPOWER;
}

# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/PacketField.nc"
inline static   bool RF230LayerP$PacketTransmitPower$isSet(message_t *arg_0x403a6068){
#line 29
  unsigned char result;
#line 29

#line 29
  result = RF230PacketP$PacketTransmitPower$isSet(arg_0x403a6068);
#line 29

#line 29
  return result;
#line 29
}
#line 29
# 198 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static inline   uint8_t RF230PacketP$PacketTransmitPower$get(message_t *msg)
{
  return RF230PacketP$getMeta(msg)->power;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/PacketField.nc"
inline static   RF230LayerP$PacketTransmitPower$value_type RF230LayerP$PacketTransmitPower$get(message_t *arg_0x403a6578){
#line 35
  unsigned char result;
#line 35

#line 35
  result = RF230PacketP$PacketTransmitPower$get(arg_0x403a6578);
#line 35

#line 35
  return result;
#line 35
}
#line 35
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static   bool RF230ActiveMessageP$IEEE154Packet$isDataFrame(message_t *arg_0x403d2f00){
#line 67
  unsigned char result;
#line 67

#line 67
  result = IEEE154PacketP$IEEE154Packet$isDataFrame(arg_0x403d2f00);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   bool RF230ActiveMessageP$RF230Config$requiresRssiCca(message_t *msg)
{
  return RF230ActiveMessageP$IEEE154Packet$isDataFrame(msg);
}

# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230Config.nc"
inline static   bool RF230LayerP$RF230Config$requiresRssiCca(message_t *arg_0x403b3758){
#line 72
  unsigned char result;
#line 72

#line 72
  result = RF230ActiveMessageP$RF230Config$requiresRssiCca(arg_0x403b3758);
#line 72

#line 72
  return result;
#line 72
}
#line 72
# 241 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static inline   bool RF230PacketP$PacketTimeSyncOffset$isSet(message_t *msg)
{
  return RF230PacketP$getMeta(msg)->flags & RF230PACKET_TIMESYNC;
}

# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/PacketField.nc"
inline static   bool RF230LayerP$PacketTimeSyncOffset$isSet(message_t *arg_0x403a6068){
#line 29
  unsigned char result;
#line 29

#line 29
  result = RF230PacketP$PacketTimeSyncOffset$isSet(arg_0x403a6068);
#line 29

#line 29
  return result;
#line 29
}
#line 29
# 68 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline   uint8_t IEEE154PacketP$IEEE154Packet$getLength(message_t *msg)
{
  return __nesc_ntoh_leuint8((unsigned char *)&IEEE154PacketP$getHeader(msg)->length);
}

# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static   uint8_t RF230PacketP$IEEE154Packet$getLength(message_t *arg_0x403d36c8){
#line 44
  unsigned char result;
#line 44

#line 44
  result = IEEE154PacketP$IEEE154Packet$getLength(arg_0x403d36c8);
#line 44

#line 44
  return result;
#line 44
}
#line 44
# 246 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static inline   uint8_t RF230PacketP$PacketTimeSyncOffset$get(message_t *msg)
{
  return RF230PacketP$IEEE154Packet$getLength(msg) - RF230PacketP$PACKET_LENGTH_INCREASE - sizeof(timesync_absolute_t );
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/PacketField.nc"
inline static   RF230LayerP$PacketTimeSyncOffset$value_type RF230LayerP$PacketTimeSyncOffset$get(message_t *arg_0x403a6578){
#line 35
  unsigned char result;
#line 35

#line 35
  result = RF230PacketP$PacketTimeSyncOffset$get(arg_0x403a6578);
#line 35

#line 35
  return result;
#line 35
}
#line 35
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
inline static   uint16_t RF230LayerP$RadioAlarm$getNow(void){
#line 53
  unsigned short result;
#line 53

#line 53
  result = RadioAlarmP$RadioAlarm$getNow(3U);
#line 53

#line 53
  return result;
#line 53
}
#line 53
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static   uint8_t RF230ActiveMessageP$IEEE154Packet$getLength(message_t *arg_0x403d36c8){
#line 44
  unsigned char result;
#line 44

#line 44
  result = IEEE154PacketP$IEEE154Packet$getLength(arg_0x403d36c8);
#line 44

#line 44
  return result;
#line 44
}
#line 44
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   uint8_t RF230ActiveMessageP$RF230Config$getLength(message_t *msg)
{
  return RF230ActiveMessageP$IEEE154Packet$getLength(msg);
}

# 34 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230Config.nc"
inline static   uint8_t RF230LayerP$RF230Config$getLength(message_t *arg_0x403b6830){
#line 34
  unsigned char result;
#line 34

#line 34
  result = RF230ActiveMessageP$RF230Config$getLength(arg_0x403b6830);
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
static inline   void UniqueLayerP$Neighborhood$evicted(uint8_t index)
#line 115
{
}

# 195 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
static inline   void TrafficMonitorLayerP$Neighborhood$evicted(uint8_t index)
#line 195
{
}

# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Neighborhood.nc"
inline static   void NeighborhoodP$Neighborhood$evicted(uint8_t arg_0x407df010){
#line 69
  TrafficMonitorLayerP$Neighborhood$evicted(arg_0x407df010);
#line 69
  UniqueLayerP$Neighborhood$evicted(arg_0x407df010);
#line 69
}
#line 69
# 172 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline    void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$unconfigure(uint8_t id)
#line 172
{
}

# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$unconfigure(uint8_t arg_0x409b3428){
#line 55
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$unconfigure(arg_0x409b3428);
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

#line 99
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
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
#line 112
    __nesc_atomic_end(__nesc_atomic); }
  if (released == TRUE) {
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$unconfigure(id);
      return SUCCESS;
    }
  return FAIL;
}

# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t Atm128SpiP$ResourceArbiter$release(uint8_t arg_0x40927790){
#line 110
  unsigned char result;
#line 110

#line 110
  result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$release(arg_0x40927790);
#line 110

#line 110
  return result;
#line 110
}
#line 110
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
inline static   void Atm128SpiP$Spi$enableSpi(bool arg_0x40943088){
#line 99
  HplAtm128SpiP$SPI$enableSpi(arg_0x40943088);
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

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t RandomCollisionLayerP$calcNextRandom$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(RandomCollisionLayerP$calcNextRandom);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 229 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   uint16_t RF230ActiveMessageP$RandomCollisionConfig$getMinimumBackoff(void)
{
  return (uint16_t )(320 * (7372800UL / 8 / 32 * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 1000000.0));
}

# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RandomCollisionConfig.nc"
inline static   uint16_t RandomCollisionLayerP$Config$getMinimumBackoff(void){
#line 40
  unsigned short result;
#line 40

#line 40
  result = RF230ActiveMessageP$RandomCollisionConfig$getMinimumBackoff();
#line 40

#line 40
  return result;
#line 40
}
#line 40
# 209 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline    void HplAtm1281Timer1P$CompareB$default$fired(void)
#line 209
{
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void HplAtm1281Timer1P$CompareB$fired(void){
#line 49
  HplAtm1281Timer1P$CompareB$default$fired();
#line 49
}
#line 49
# 213 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline    void HplAtm1281Timer1P$CompareC$default$fired(void)
#line 213
{
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void HplAtm1281Timer1P$CompareC$fired(void){
#line 49
  HplAtm1281Timer1P$CompareC$default$fired();
#line 49
}
#line 49
# 622 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
static inline   void RF230LayerP$IRQ$captured(uint16_t time)
{
  for (; 0; ) ;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      RF230LayerP$capturedTime = time;
      RF230LayerP$radioIrq = TRUE;
    }
#line 630
    __nesc_atomic_end(__nesc_atomic); }

  RF230LayerP$Tasklet$schedule();
}

# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioCapture.nc"
inline static   void HplRF230P$IRQ$captured(uint16_t arg_0x408a53d8){
#line 50
  RF230LayerP$IRQ$captured(arg_0x408a53d8);
#line 50
}
#line 50
# 199 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline   uint16_t HplAtm1281Timer1P$Capture$get(void)
#line 199
{
#line 199
  return * (volatile uint16_t *)0x86;
}

# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static   HplRF230P$Capture$size_type HplRF230P$Capture$get(void){
#line 38
  unsigned short result;
#line 38

#line 38
  result = HplAtm1281Timer1P$Capture$get();
#line 38

#line 38
  return result;
#line 38
}
#line 38
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static inline   void HplRF230P$Capture$captured(uint16_t time)
{
  time = HplRF230P$Capture$get();
  HplRF230P$IRQ$captured(time);
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static   void HplAtm1281Timer1P$Capture$captured(HplAtm1281Timer1P$Capture$size_type arg_0x404d7d60){
#line 51
  HplRF230P$Capture$captured(arg_0x404d7d60);
#line 51
}
#line 51
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline   void /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void)
{
}

# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   void /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$Counter$overflow(void){
#line 71
  /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow();
#line 71
}
#line 71
# 122 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static inline   void /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$CounterFrom$overflow(void)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$m_upper++;
      if ((/*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$m_upper & /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$OVERFLOW_MASK) == 0) {
        /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$Counter$overflow();
        }
    }
#line 130
    __nesc_atomic_end(__nesc_atomic); }
}

# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   void /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$overflow(void){
#line 71
  /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$CounterFrom$overflow();
#line 71
}
#line 71
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline   void /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$overflow(void)
{
  /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$overflow();
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline   void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$overflow(void)
#line 51
{
}

# 117 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline   void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$overflow(void)
#line 117
{
}

# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   void HplAtm1281Timer1P$Timer$overflow(void){
#line 61
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$overflow();
#line 61
  /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$overflow();
#line 61
  /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$overflow();
#line 61
}
#line 61
# 184 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static __inline void HplAtm1281Timer2AsyncP$stabiliseTimer2(void)
#line 184
{
  * (volatile uint8_t *)0xB0 = * (volatile uint8_t *)0xB0;
  while (* (volatile uint8_t *)0xB6 & (1 << 1)) 
    ;
}

# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline   void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$1$Counter$overflow(void)
{
}

# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Counter$overflow(void){
#line 71
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$1$Counter$overflow();
#line 71
}
#line 71
# 171 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline   uint8_t HplAtm1281Timer2AsyncP$Compare$get(void)
#line 171
{
#line 171
  return * (volatile uint8_t *)0xB3;
}

# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Compare$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Compare$get(void){
#line 39
  unsigned char result;
#line 39

#line 39
  result = HplAtm1281Timer2AsyncP$Compare$get();
#line 39

#line 39
  return result;
#line 39
}
#line 39
# 176 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Compare$fired(void)
#line 176
{
  int overflowed;


  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$base += /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Compare$get() + 1U;
  overflowed = !/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$base;
  __nesc_enable_interrupt();
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$setInterrupt();
  if (overflowed) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Counter$overflow();
    }
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void HplAtm1281Timer2AsyncP$Compare$fired(void){
#line 49
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Compare$fired();
#line 49
}
#line 49
# 134 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline   uint8_t HplAtm1281Timer2AsyncP$TimerCtrl$getInterruptFlag(void)
#line 134
{
  return * (volatile uint8_t *)(0x17 + 0x20);
}

# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerCtrl8.nc"
inline static   uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$TimerCtrl$getInterruptFlag(void){
#line 69
  unsigned char result;
#line 69

#line 69
  result = HplAtm1281Timer2AsyncP$TimerCtrl$getInterruptFlag();
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 174 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline   void HplAtm1281Timer2AsyncP$Compare$set(uint8_t t)
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
inline static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Compare$set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Compare$size_type arg_0x404de8c8){
#line 45
  HplAtm1281Timer2AsyncP$Compare$set(arg_0x404de8c8);
#line 45
}
#line 45
# 79 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline   uint8_t HplAtm1281Timer2AsyncP$Timer$get(void)
#line 79
{
#line 79
  return * (volatile uint8_t *)0xB2;
}

# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Timer$timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Timer$get(void){
#line 52
  unsigned char result;
#line 52

#line 52
  result = HplAtm1281Timer2AsyncP$Timer$get();
#line 52

#line 52
  return result;
#line 52
}
#line 52
# 258 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline   int HplAtm1281Timer2AsyncP$TimerAsync$compareABusy(void)
#line 258
{
  return (* (volatile uint8_t *)0xB6 & (1 << 3)) != 0;
}

# 75 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerAsync.nc"
inline static   int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$TimerAsync$compareABusy(void){
#line 75
  int result;
#line 75

#line 75
  result = HplAtm1281Timer2AsyncP$TimerAsync$compareABusy();
#line 75

#line 75
  return result;
#line 75
}
#line 75
# 101 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$setOcr2A(uint8_t n)
#line 101
{
  while (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$TimerAsync$compareABusy()) 
    ;
  if (n == /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Timer$get()) {
    n++;
    }


  if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$base + n + 1 < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$base) {
    n = -/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$base - 1;
    }
#line 111
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Compare$set(n);
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
inline static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Alarm$fired(void){
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired();
#line 67
}
#line 67
# 257 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Timer$overflow(void)
#line 257
{
}

# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   void HplAtm1281Timer2AsyncP$Timer$overflow(void){
#line 61
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Timer$overflow();
#line 61
}
#line 61
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
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

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

# 106 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline   void HplAtm1281Timer1P$TimerCtrl$setControlB(uint8_t x)
#line 106
{
  * (volatile uint8_t *)0x81 = x;
}

#line 93
static inline   uint8_t HplAtm1281Timer1P$TimerCtrl$getControlB(void)
#line 93
{
  return * (volatile uint8_t *)0x81;
}

#line 82
static inline   void HplAtm1281Timer1P$Timer$setScale(uint8_t s)
#line 82
{
  Atm128_TCCRB_t x = (Atm128_TCCRB_t )HplAtm1281Timer1P$TimerCtrl$getControlB();

#line 84
  x.bits.cs = s;
  HplAtm1281Timer1P$TimerCtrl$setControlB(x.flat);
}

# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$setScale(uint8_t arg_0x404d2350){
#line 95
  HplAtm1281Timer1P$Timer$setScale(arg_0x404d2350);
#line 95
}
#line 95
# 144 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline   void HplAtm1281Timer1P$Timer$start(void)
#line 144
{
#line 144
  * (volatile uint8_t *)0x6F |= 1 << 0;
}

# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$start(void){
#line 69
  HplAtm1281Timer1P$Timer$start();
#line 69
}
#line 69
# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline   void HplAtm1281Timer1P$Timer$set(uint16_t t)
#line 73
{
#line 73
  * (volatile uint16_t *)0x84 = t;
}

# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$set(/*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$timer_size arg_0x404c6688){
#line 58
  HplAtm1281Timer1P$Timer$set(arg_0x404c6688);
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
    /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$setScale(2);
  }
  return SUCCESS;
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

# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$set(void)
#line 46
{
#line 46
  * (volatile uint8_t *)34U |= 1 << 6;
}

# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void RF230LayerP$RSTN$set(void){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$set();
#line 29
}
#line 29
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)33U |= 1 << 6;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void RF230LayerP$RSTN$makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$makeOutput();
#line 35
}
#line 35
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)36U |= 1 << 7;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void RF230LayerP$SLP_TR$makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$makeOutput();
#line 35
}
#line 35
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)36U |= 1 << 0;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void RF230LayerP$SELN$makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$makeOutput();
#line 35
}
#line 35
# 186 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
static inline  error_t RF230LayerP$PlatformInit$init(void)
{
  RF230LayerP$SELN$makeOutput();
  RF230LayerP$SELN$set();
  RF230LayerP$SLP_TR$makeOutput();
  RF230LayerP$SLP_TR$clr();
  RF230LayerP$RSTN$makeOutput();
  RF230LayerP$RSTN$set();

  RF230LayerP$rxMsg = &RF230LayerP$rxMsgBuffer;


  RF230LayerP$rssiClear = 0;
  RF230LayerP$rssiBusy = 90;

  return SUCCESS;
}

# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$clr(void)
#line 47
{
#line 47
  * (volatile uint8_t *)43U &= ~(1 << 4);
}

# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplRF230P$PortIRQ$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$clr();
#line 30
}
#line 30
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$makeInput(void)
#line 50
{
#line 50
  * (volatile uint8_t *)42U &= ~(1 << 4);
}

# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplRF230P$PortIRQ$makeInput(void){
#line 33
  /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$makeInput();
#line 33
}
#line 33
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$clr(void)
#line 47
{
#line 47
  * (volatile uint8_t *)43U &= ~(1 << 6);
}

# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplRF230P$PortCLKM$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$clr();
#line 30
}
#line 30
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$makeInput(void)
#line 50
{
#line 50
  * (volatile uint8_t *)42U &= ~(1 << 6);
}

# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplRF230P$PortCLKM$makeInput(void){
#line 33
  /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$makeInput();
#line 33
}
#line 33
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static inline  error_t HplRF230P$PlatformInit$init(void)
{
  HplRF230P$PortCLKM$makeInput();
  HplRF230P$PortCLKM$clr();
  HplRF230P$PortIRQ$makeInput();
  HplRF230P$PortIRQ$clr();
  HplRF230P$Capture$stop();

  return SUCCESS;
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
inline static  error_t RealMainP$PlatformInit$init(void){
#line 51
  unsigned char result;
#line 51

#line 51
  result = HplRF230P$PlatformInit$init();
#line 51
  result = ecombine(result, RF230LayerP$PlatformInit$init());
#line 51
  result = ecombine(result, PlatformP$Init$init());
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
# 10 "build/iris/StorageVolumes.h"
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
inline static  at45page_t BlockStorageP$At45dbVolume$volumeSize(uint8_t arg_0x40c46b68){
#line 30
  unsigned short result;
#line 30

#line 30
  switch (arg_0x40c46b68) {
#line 30
    case /*DymoServiceC.ConfigStorageC*/ConfigStorageC$0$CONFIG_ID:
#line 30
      result = At45dbStorageManagerC$At45dbVolume$volumeSize(0);
#line 30
      break;
#line 30
    default:
#line 30
      result = BlockStorageP$At45dbVolume$default$volumeSize(arg_0x40c46b68);
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
inline static  at45page_t ConfigStorageP$BConfig$npages(uint8_t arg_0x40bd8a20){
#line 50
  unsigned short result;
#line 50

#line 50
  result = BlockStorageP$BConfig$npages(arg_0x40bd8a20);
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
inline static  int BlockStorageP$BConfig$writeHook(uint8_t arg_0x40c48b88){
#line 37
  int result;
#line 37

#line 37
  result = ConfigStorageP$BConfig$writeHook(arg_0x40c48b88);
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
inline static  void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Resource$granted(uint8_t arg_0x40d3e500){
#line 92
  switch (arg_0x40d3e500) {
#line 92
    case /*DymoServiceC.ConfigStorageC*/ConfigStorageC$0$RESOURCE_ID:
#line 92
      BlockStorageP$Resource$granted(/*DymoServiceC.ConfigStorageC*/ConfigStorageC$0$CONFIG_ID);
#line 92
      break;
#line 92
    default:
#line 92
      /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Resource$default$granted(arg_0x40d3e500);
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
inline static   void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$configure(uint8_t arg_0x40d3c0f8){
#line 49
    /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(arg_0x40d3c0f8);
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
inline static  void ConfigStorageP$BConfig$writeContinue(uint8_t arg_0x40bd8a20, error_t arg_0x40bd9ad8){
#line 44
  BlockStorageP$BConfig$writeContinue(arg_0x40bd8a20, arg_0x40bd9ad8);
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
inline static  void BlockStorageP$At45db$erase(at45page_t arg_0x40bd3858, uint8_t arg_0x40bd39e8){
#line 100
  At45dbP$At45db$erase(arg_0x40bd3858, arg_0x40bd39e8);
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
inline static  void At45dbP$HplAt45db$erase(uint8_t arg_0x40ca5df0, at45page_t arg_0x40ca3010){
#line 100
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$erase(arg_0x40ca5df0, arg_0x40ca3010);
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
inline static  void At45dbP$At45db$readDone(error_t arg_0x40bf8168){
#line 162
  BlockStorageP$At45db$readDone(arg_0x40bf8168);
#line 162
  ConfigStorageP$At45db$readDone(arg_0x40bf8168);
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
inline static   void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$unconfigure(uint8_t arg_0x40d3c0f8){
#line 55
    /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(arg_0x40d3c0f8);
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
inline static   error_t BlockStorageP$Resource$release(uint8_t arg_0x40c48220){
#line 110
  unsigned char result;
#line 110

#line 110
  switch (arg_0x40c48220) {
#line 110
    case /*DymoServiceC.ConfigStorageC*/ConfigStorageC$0$CONFIG_ID:
#line 110
      result = /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Resource$release(/*DymoServiceC.ConfigStorageC*/ConfigStorageC$0$RESOURCE_ID);
#line 110
      break;
#line 110
    default:
#line 110
      result = BlockStorageP$Resource$default$release(arg_0x40c48220);
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
inline static  void ConfigStorageP$ConfigStorage$readDone(uint8_t arg_0x40bde4c0, storage_addr_t arg_0x40b2c630, void *arg_0x40b2c7d0, storage_len_t arg_0x40b2c960, error_t arg_0x40b2caf8){
#line 80
  switch (arg_0x40bde4c0) {
#line 80
    case /*DymoServiceC.ConfigStorageC*/ConfigStorageC$0$CONFIG_ID:
#line 80
      DymoEngineM$ConfigStorage$readDone(arg_0x40b2c630, arg_0x40b2c7d0, arg_0x40b2c960, arg_0x40b2caf8);
#line 80
      break;
#line 80
    default:
#line 80
      ConfigStorageP$ConfigStorage$default$readDone(arg_0x40bde4c0, arg_0x40b2c630, arg_0x40b2c7d0, arg_0x40b2c960, arg_0x40b2caf8);
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

# 325 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline  error_t BlockStorageP$BlockRead$read(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len)
#line 325
{
  return BlockStorageP$newRequest(BlockStorageP$R_READ, id, addr, buf, len);
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
inline static  error_t ConfigStorageP$BlockRead$read(uint8_t arg_0x40bf1b88, storage_addr_t arg_0x40bf5e38, void *arg_0x40bf3010, storage_len_t arg_0x40bf31a0){
#line 56
  unsigned char result;
#line 56

#line 56
  result = BlockStorageP$BlockRead$read(arg_0x40bf1b88, arg_0x40bf5e38, arg_0x40bf3010, arg_0x40bf31a0);
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
inline static  void ConfigStorageP$Mount$mountDone(uint8_t arg_0x40bdfe18, error_t arg_0x40b359e0){
#line 36
  switch (arg_0x40bdfe18) {
#line 36
    case /*DymoServiceC.ConfigStorageC*/ConfigStorageC$0$CONFIG_ID:
#line 36
      DymoEngineM$Mount$mountDone(arg_0x40b359e0);
#line 36
      break;
#line 36
    default:
#line 36
      ConfigStorageP$Mount$default$mountDone(arg_0x40bdfe18, arg_0x40b359e0);
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
inline static  void BlockStorageP$BlockRead$readDone(uint8_t arg_0x40c4b3e0, storage_addr_t arg_0x40bf3830, void *arg_0x40bf39d0, storage_len_t arg_0x40bf3b60, error_t arg_0x40bf3cf8){
#line 67
  ConfigStorageP$BlockRead$readDone(arg_0x40c4b3e0, arg_0x40bf3830, arg_0x40bf39d0, arg_0x40bf3b60, arg_0x40bf3cf8);
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
inline static  error_t DymoEngineM$ConfigStorage$read(storage_addr_t arg_0x40b2e9a0, void *arg_0x40b2eb40, storage_len_t arg_0x40b2ecd0){
#line 69
  unsigned char result;
#line 69

#line 69
  result = ConfigStorageP$ConfigStorage$read(/*DymoServiceC.ConfigStorageC*/ConfigStorageC$0$CONFIG_ID, arg_0x40b2e9a0, arg_0x40b2eb40, arg_0x40b2ecd0);
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
inline static  int BlockStorageP$BConfig$isConfig(uint8_t arg_0x40c48b88){
#line 24
  int result;
#line 24

#line 24
  result = ConfigStorageP$BConfig$isConfig(arg_0x40c48b88);
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
inline static   error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Queue$enqueue(resource_client_id_t arg_0x4099d360){
#line 69
  unsigned char result;
#line 69

#line 69
  result = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$enqueue(arg_0x4099d360);
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
inline static   void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceRequested$requested(uint8_t arg_0x40d3ee40){
#line 43
    /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(arg_0x40d3ee40);
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
inline static   error_t BlockStorageP$Resource$request(uint8_t arg_0x40c48220){
#line 78
  unsigned char result;
#line 78

#line 78
  switch (arg_0x40c48220) {
#line 78
    case /*DymoServiceC.ConfigStorageC*/ConfigStorageC$0$CONFIG_ID:
#line 78
      result = /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Resource$request(/*DymoServiceC.ConfigStorageC*/ConfigStorageC$0$RESOURCE_ID);
#line 78
      break;
#line 78
    default:
#line 78
      result = BlockStorageP$Resource$default$request(arg_0x40c48220);
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
inline static  void DymoEngineM$SplitControl$startDone(error_t arg_0x4032ae98){
#line 92
  NetControlM$EngineControl$startDone(arg_0x4032ae98);
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
# 333 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline  error_t BlockStorageP$BlockRead$computeCrc(uint8_t id, storage_addr_t addr, storage_len_t len, uint16_t basecrc)
#line 333
{
  return BlockStorageP$newRequest(BlockStorageP$R_CRC, id, addr, (void *)basecrc, len);
}

# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockRead.nc"
inline static  error_t ConfigStorageP$BlockRead$computeCrc(uint8_t arg_0x40bf1b88, storage_addr_t arg_0x40bf2340, storage_len_t arg_0x40bf24d0, uint16_t arg_0x40bf2670){
#line 83
  unsigned char result;
#line 83

#line 83
  result = BlockStorageP$BlockRead$computeCrc(arg_0x40bf1b88, arg_0x40bf2340, arg_0x40bf24d0, arg_0x40bf2670);
#line 83

#line 83
  return result;
#line 83
}
#line 83
#line 103
inline static  storage_len_t ConfigStorageP$BlockRead$getSize(uint8_t arg_0x40bf1b88){
#line 103
  unsigned long result;
#line 103

#line 103
  result = BlockStorageP$BlockRead$getSize(arg_0x40bf1b88);
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
inline static  void ConfigStorageP$ConfigStorage$writeDone(uint8_t arg_0x40bde4c0, storage_addr_t arg_0x40b2baf0, void *arg_0x40b2bc90, storage_len_t arg_0x40b2be20, error_t arg_0x40b2a010){
#line 110
  switch (arg_0x40bde4c0) {
#line 110
    case /*DymoServiceC.ConfigStorageC*/ConfigStorageC$0$CONFIG_ID:
#line 110
      DymoEngineM$ConfigStorage$writeDone(arg_0x40b2baf0, arg_0x40b2bc90, arg_0x40b2be20, arg_0x40b2a010);
#line 110
      break;
#line 110
    default:
#line 110
      ConfigStorageP$ConfigStorage$default$writeDone(arg_0x40bde4c0, arg_0x40b2baf0, arg_0x40b2bc90, arg_0x40b2be20, arg_0x40b2a010);
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
inline static  error_t ConfigStorageP$BlockWrite$sync(uint8_t arg_0x40bf61f0){
#line 103
  unsigned char result;
#line 103

#line 103
  result = BlockStorageP$BlockWrite$sync(arg_0x40bf61f0);
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
inline static  void BlockStorageP$BlockWrite$writeDone(uint8_t arg_0x40c4c8e8, storage_addr_t arg_0x40bed338, void *arg_0x40bed4d8, storage_len_t arg_0x40bed668, error_t arg_0x40bed800){
#line 71
  ConfigStorageP$BlockWrite$writeDone(arg_0x40c4c8e8, arg_0x40bed338, arg_0x40bed4d8, arg_0x40bed668, arg_0x40bed800);
#line 71
}
#line 71
# 395 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
static inline  void ConfigStorageP$BlockWrite$eraseDone(uint8_t id, error_t error)
#line 395
{
}

# 91 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/BlockWrite.nc"
inline static  void BlockStorageP$BlockWrite$eraseDone(uint8_t arg_0x40c4c8e8, error_t arg_0x40bec258){
#line 91
  ConfigStorageP$BlockWrite$eraseDone(arg_0x40c4c8e8, arg_0x40bec258);
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
inline static  error_t ConfigStorageP$BlockWrite$write(uint8_t arg_0x40bf61f0, storage_addr_t arg_0x40bef898, void *arg_0x40befa38, storage_len_t arg_0x40befbc8){
#line 58
  unsigned char result;
#line 58

#line 58
  result = BlockStorageP$BlockWrite$write(arg_0x40bf61f0, arg_0x40bef898, arg_0x40befa38, arg_0x40befbc8);
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
inline static  void ConfigStorageP$ConfigStorage$commitDone(uint8_t arg_0x40bde4c0, error_t arg_0x40b2ab58){
#line 133
  switch (arg_0x40bde4c0) {
#line 133
    case /*DymoServiceC.ConfigStorageC*/ConfigStorageC$0$CONFIG_ID:
#line 133
      DymoEngineM$ConfigStorage$commitDone(arg_0x40b2ab58);
#line 133
      break;
#line 133
    default:
#line 133
      ConfigStorageP$ConfigStorage$default$commitDone(arg_0x40bde4c0, arg_0x40b2ab58);
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
inline static  void BlockStorageP$BlockRead$computeCrcDone(uint8_t arg_0x40c4b3e0, storage_addr_t arg_0x40bf2cc0, storage_len_t arg_0x40bf2e50, uint16_t arg_0x40bf1010, error_t arg_0x40bf1198){
#line 95
  ConfigStorageP$BlockRead$computeCrcDone(arg_0x40c4b3e0, arg_0x40bf2cc0, arg_0x40bf2e50, arg_0x40bf1010, arg_0x40bf1198);
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
inline static  void BlockStorageP$BlockWrite$syncDone(uint8_t arg_0x40c4c8e8, error_t arg_0x40becc30){
#line 112
  ConfigStorageP$BlockWrite$syncDone(arg_0x40c4c8e8, arg_0x40becc30);
#line 112
}
#line 112
# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
inline static  int BlockStorageP$BConfig$flipped(uint8_t arg_0x40c48b88){
#line 30
  int result;
#line 30

#line 30
  result = ConfigStorageP$BConfig$flipped(arg_0x40c48b88);
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
# 14 "build/iris/StorageVolumes.h"
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
inline static  at45page_t BlockStorageP$At45dbVolume$remap(uint8_t arg_0x40c46b68, at45page_t arg_0x40c46280){
#line 24
  unsigned short result;
#line 24

#line 24
  switch (arg_0x40c46b68) {
#line 24
    case /*DymoServiceC.ConfigStorageC*/ConfigStorageC$0$CONFIG_ID:
#line 24
      result = At45dbStorageManagerC$At45dbVolume$remap(0, arg_0x40c46280);
#line 24
      break;
#line 24
    default:
#line 24
      result = BlockStorageP$At45dbVolume$default$remap(arg_0x40c46b68, arg_0x40c46280);
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
inline static  void BlockStorageP$At45db$write(at45page_t arg_0x40bd5a28, at45pageoffset_t arg_0x40bd5bc0, void *arg_0x40bd5d70, at45pageoffset_t arg_0x40bd5f08){
#line 62
  At45dbP$At45db$write(arg_0x40bd5a28, arg_0x40bd5bc0, arg_0x40bd5d70, arg_0x40bd5f08);
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
inline static  void BlockStorageP$At45db$read(at45page_t arg_0x40bcf558, at45pageoffset_t arg_0x40bcf6f0, void *arg_0x40bcf8a0, at45pageoffset_t arg_0x40bcfa38){
#line 155
  At45dbP$At45db$read(arg_0x40bcf558, arg_0x40bcf6f0, arg_0x40bcf8a0, arg_0x40bcfa38);
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
inline static  void BlockStorageP$At45db$computeCrc(at45page_t arg_0x40bf86c0, at45pageoffset_t arg_0x40bf8858, at45pageoffset_t arg_0x40bf8a00, uint16_t arg_0x40bf8b90){
#line 176
  At45dbP$At45db$computeCrc(arg_0x40bf86c0, arg_0x40bf8858, arg_0x40bf8a00, arg_0x40bf8b90);
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
inline static  void At45dbP$At45db$computeCrcDone(error_t arg_0x40bf7330, uint16_t arg_0x40bf74c0){
#line 183
  BlockStorageP$At45db$computeCrcDone(arg_0x40bf7330, arg_0x40bf74c0);
#line 183
  ConfigStorageP$At45db$computeCrcDone(arg_0x40bf7330, arg_0x40bf74c0);
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
inline static  void At45dbP$At45db$writeDone(error_t arg_0x40bd4588){
#line 69
  BlockStorageP$At45db$writeDone(arg_0x40bd4588);
#line 69
  ConfigStorageP$At45db$writeDone(arg_0x40bd4588);
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
inline static  void At45dbP$At45db$syncDone(error_t arg_0x40bd10b0){
#line 125
  BlockStorageP$At45db$syncDone(arg_0x40bd10b0);
#line 125
  ConfigStorageP$At45db$syncDone(arg_0x40bd10b0);
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
inline static  void At45dbP$At45db$flushDone(error_t arg_0x40bcf010){
#line 143
  BlockStorageP$At45db$flushDone(arg_0x40bcf010);
#line 143
  ConfigStorageP$At45db$flushDone(arg_0x40bcf010);
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
inline static  void At45dbP$At45db$eraseDone(error_t arg_0x40bd2188){
#line 105
  BlockStorageP$At45db$eraseDone(arg_0x40bd2188);
#line 105
  ConfigStorageP$At45db$eraseDone(arg_0x40bd2188);
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
inline static  void At45dbP$At45db$copyPageDone(error_t arg_0x40bd3330){
#line 85
  BlockStorageP$At45db$copyPageDone(arg_0x40bd3330);
#line 85
  ConfigStorageP$At45db$copyPageDone(arg_0x40bd3330);
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
inline static  void At45dbP$HplAt45db$flush(uint8_t arg_0x40ca67b8, at45page_t arg_0x40ca6948){
#line 73
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$flush(arg_0x40ca67b8, arg_0x40ca6948);
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
inline static  void At45dbP$HplAt45db$compare(uint8_t arg_0x40ca5330, at45page_t arg_0x40ca54c0){
#line 87
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$compare(arg_0x40ca5330, arg_0x40ca54c0);
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
inline static  void At45dbP$HplAt45db$readBuffer(uint8_t arg_0x40ca38b0, at45pageoffset_t arg_0x40ca3a48, uint8_t *arg_0x40ca3c00, uint16_t arg_0x40ca3d90){
#line 119
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$readBuffer(arg_0x40ca38b0, arg_0x40ca3a48, arg_0x40ca3c00, arg_0x40ca3d90);
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
inline static  void At45dbP$HplAt45db$crc(uint8_t arg_0x40ca16b0, at45page_t arg_0x40ca1840, at45pageoffset_t arg_0x40ca19d8, at45pageoffset_t arg_0x40ca1b80, uint16_t arg_0x40ca1d10){
#line 157
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$crc(arg_0x40ca16b0, arg_0x40ca1840, arg_0x40ca19d8, arg_0x40ca1b80, arg_0x40ca1d10);
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
inline static  void At45dbP$HplAt45db$write(uint8_t arg_0x40c9fb18, at45page_t arg_0x40c9fca8, at45pageoffset_t arg_0x40c9fe40, uint8_t *arg_0x40c9e010, at45pageoffset_t arg_0x40c9e1a8){
#line 178
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$write(arg_0x40c9fb18, arg_0x40c9fca8, arg_0x40c9fe40, arg_0x40c9e010, arg_0x40c9e1a8);
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
inline static  void At45dbP$HplAt45db$fill(uint8_t arg_0x40ca7c50, at45page_t arg_0x40ca7de0){
#line 55
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$fill(arg_0x40ca7c50, arg_0x40ca7de0);
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
inline static  at45page_t ConfigStorageP$BConfig$remap(uint8_t arg_0x40bd8a20, at45page_t arg_0x40bd8440){
#line 58
  unsigned short result;
#line 58

#line 58
  result = BlockStorageP$BConfig$remap(arg_0x40bd8a20, arg_0x40bd8440);
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
inline static  void ConfigStorageP$At45db$copyPage(at45page_t arg_0x40bd4ae8, at45page_t arg_0x40bd4c78){
#line 80
  At45dbP$At45db$copyPage(arg_0x40bd4ae8, arg_0x40bd4c78);
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
inline static   void At45dbP$BusyWait$wait(At45dbP$BusyWait$size_type arg_0x408a3bd0){
#line 55
  BusyWaitMicroC$BusyWait$wait(arg_0x408a3bd0);
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
inline static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$crcDone(uint16_t arg_0x40c9f628){
#line 163
  At45dbP$HplAt45db$crcDone(arg_0x40c9f628);
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
inline static   uint8_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$FlashSpi$write(uint8_t arg_0x40893ed0){
#line 34
  unsigned char result;
#line 34

#line 34
  result = HplAt45dbIOP$FlashSpi$write(arg_0x40893ed0);
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
inline static   void HplAt45dbIOP$BusyWait$wait(HplAt45dbIOP$BusyWait$size_type arg_0x408a3bd0){
#line 55
  BusyWaitMicroC$BusyWait$wait(arg_0x408a3bd0);
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
inline static  void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$waitCompareDone(bool arg_0x40ca7710){
#line 47
  At45dbP$HplAt45db$waitCompareDone(arg_0x40ca7710);
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
inline static  dymo_msg_t DymoEngineM$DymoPacket$getType(message_t *arg_0x40b16ad8){
#line 24
  enum __nesc_unnamed4313 result;
#line 24

#line 24
  result = DymoPacketM$DymoPacket$getType(arg_0x40b16ad8);
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
inline static  void DymoPacketM$DymoPacket$messageProcessed(message_t *arg_0x40b383d8){
#line 101
  DymoEngineM$DymoPacket$messageProcessed(arg_0x40b383d8);
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
inline static  error_t DymoEngineM$DymoTable$update(const rt_info_t *arg_0x40a777b8, dymo_msg_t arg_0x40a77950){
#line 25
  unsigned char result;
#line 25

#line 25
  result = /*DymoTableC.DymoTableM*/DymoTableM$0$DymoTable$update(arg_0x40a777b8, arg_0x40a77950);
#line 25

#line 25
  return result;
#line 25
}
#line 25
# 254 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline  am_addr_t IEEE154PacketP$AMPacket$source(message_t *msg)
{
  return IEEE154PacketP$IEEE154Packet$getSrcAddr(msg);
}

# 77 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  am_addr_t DymoEngineM$AMPacket$source(message_t *arg_0x4033f380){
#line 77
  unsigned short result;
#line 77

#line 77
  result = IEEE154PacketP$AMPacket$source(arg_0x4033f380);
#line 77

#line 77
  return result;
#line 77
}
#line 77
# 28 "../../../tos/lib/net/tymo/RoutingTable.nc"
inline static  error_t DymoEngineM$RoutingTable$getForwardingRoute(addr_t arg_0x40a79340, rt_info_t *arg_0x40a794f0){
#line 28
  unsigned char result;
#line 28

#line 28
  result = /*DymoTableC.DymoTableM*/DymoTableM$0$RoutingTable$getForwardingRoute(arg_0x40a79340, arg_0x40a794f0);
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
inline static  bool DymoEngineM$DymoTable$isSuperior(const rt_info_t *arg_0x40a76068, dymo_msg_t arg_0x40a76200){
#line 27
  unsigned char result;
#line 27

#line 27
  result = /*DymoTableC.DymoTableM*/DymoTableM$0$DymoTable$isSuperior(arg_0x40a76068, arg_0x40a76200);
#line 27

#line 27
  return result;
#line 27
}
#line 27
# 26 "../../../tos/lib/net/tymo/RoutingTable.nc"
inline static  error_t DymoEngineM$RoutingTable$getRoute(addr_t arg_0x40a7ab18, rt_info_t *arg_0x40a7acc8){
#line 26
  unsigned char result;
#line 26

#line 26
  result = /*DymoTableC.DymoTableM*/DymoTableM$0$RoutingTable$getRoute(arg_0x40a7ab18, arg_0x40a7acc8);
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
inline static  proc_action_t DymoPacketM$DymoPacket$infoProcessed(message_t *arg_0x40b3ab40, rt_info_t *arg_0x40b3acf0){
#line 95
  enum __nesc_unnamed4314 result;
#line 95

#line 95
  result = DymoEngineM$DymoPacket$infoProcessed(arg_0x40b3ab40, arg_0x40b3acf0);
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
  unsigned char *__nesc_temp55;
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
        (__nesc_temp55 = (unsigned char *)&*block, __nesc_hton_uint8(__nesc_temp55, __nesc_ntoh_uint8(__nesc_temp55) + 1));
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

# 85 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static __inline  uint8_t RF230PacketP$Packet$maxPayloadLength(void)
{
  return 28;
}

# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  uint8_t DymoPacketM$Packet$maxPayloadLength(void){
#line 95
  unsigned char result;
#line 95

#line 95
  result = RF230PacketP$Packet$maxPayloadLength();
#line 95

#line 95
  return result;
#line 95
}
#line 95
# 90 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static inline  void *RF230PacketP$Packet$getPayload(message_t *msg, uint8_t len)
{
  if (len > 28) {
    return (void *)0;
    }
  return msg->data;
}

# 115 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  void *DymoPacketM$Packet$getPayload(message_t *arg_0x40346d70, uint8_t arg_0x40346ef8){
#line 115
  void *result;
#line 115

#line 115
  result = RF230PacketP$Packet$getPayload(arg_0x40346d70, arg_0x40346ef8);
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
inline static  proc_action_t DymoPacketM$DymoPacket$hopsProcessed(message_t *arg_0x40b3a190, uint8_t arg_0x40b3a320, uint8_t arg_0x40b3a4b0){
#line 85
  enum __nesc_unnamed4314 result;
#line 85

#line 85
  result = DymoEngineM$DymoPacket$hopsProcessed(arg_0x40b3a190, arg_0x40b3a320, arg_0x40b3a4b0);
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
  unsigned char *__nesc_temp53;
  unsigned char *__nesc_temp52;
  unsigned char *__nesc_temp51;
  unsigned char *__nesc_temp50;
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
  (__nesc_temp50 = (unsigned char *)&* payload++, __nesc_hton_uint8(__nesc_temp50, __nesc_ntoh_uint8(__nesc_temp50) - 1));
  (__nesc_temp51 = (unsigned char *)&* payload++, __nesc_hton_uint8(__nesc_temp51, __nesc_ntoh_uint8(__nesc_temp51) + 1));
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
                  (__nesc_temp52 = (unsigned char *)&*(fw_block + 1), __nesc_hton_uint8(__nesc_temp52, __nesc_ntoh_uint8(__nesc_temp52) + 1));
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
        (__nesc_temp53 = (unsigned char *)&*fw_size, __nesc_hton_uint16(__nesc_temp53, __nesc_ntoh_uint16(__nesc_temp53) + DymoPacketM$block_size(fw_block)));
        }
    }
  DymoPacketM$DymoPacket$messageProcessed(DymoPacketM$currentMsg);
}

# 153 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline  void /*DymoTableC.Timers*/VirtualizeTimerC$1$Timer$stop(uint8_t num)
{
  /*DymoTableC.Timers*/VirtualizeTimerC$1$m_timers[num].isrunning = FALSE;
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void /*DymoTableC.DymoTableM*/DymoTableM$0$Timer$stop(uint8_t arg_0x40a71168){
#line 67
  /*DymoTableC.Timers*/VirtualizeTimerC$1$Timer$stop(arg_0x40a71168);
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
inline static  error_t DymoEngineM$ConfigStorage$write(storage_addr_t arg_0x40b2b100, void *arg_0x40b2b2a0, storage_len_t arg_0x40b2b430){
#line 97
  unsigned char result;
#line 97

#line 97
  result = ConfigStorageP$ConfigStorage$write(/*DymoServiceC.ConfigStorageC*/ConfigStorageC$0$CONFIG_ID, arg_0x40b2b100, arg_0x40b2b2a0, arg_0x40b2b430);
#line 97

#line 97
  return result;
#line 97
}
#line 97
# 34 "../../../tos/lib/net/tymo/dymo/DymoTable.nc"
inline static  void /*DymoTableC.DymoTableM*/DymoTableM$0$DymoTable$routeNeeded(addr_t arg_0x40a76698){
#line 34
  DymoEngineM$DymoTable$routeNeeded(arg_0x40a76698);
#line 34
}
#line 34


inline static  void /*DymoTableC.DymoTableM*/DymoTableM$0$DymoTable$brokenRouteNeeded(const rt_info_t *arg_0x40a76c60){
#line 36
  DymoEngineM$DymoTable$brokenRouteNeeded(arg_0x40a76c60);
#line 36
}
#line 36
# 29 "../../../tos/lib/net/tymo/dymo/DymoPacket.nc"
inline static  uint16_t DymoEngineM$DymoPacket$getSize(message_t *arg_0x40b3c010){
#line 29
  unsigned short result;
#line 29

#line 29
  result = DymoPacketM$DymoPacket$getSize(arg_0x40b3c010);
#line 29

#line 29
  return result;
#line 29
}
#line 29
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  error_t DymoEngineM$AMSend$send(am_addr_t arg_0x4034e690, message_t *arg_0x4034e840, uint8_t arg_0x4034e9c8){
#line 69
  unsigned char result;
#line 69

#line 69
  result = /*DymoNetworkC.DymoQueue.AMQueueEntryP*/AMQueueEntryP$1$AMSend$send(arg_0x4034e690, arg_0x4034e840, arg_0x4034e9c8);
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

# 179 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline   void IEEE154PacketP$IEEE154Packet$setDestAddr(message_t *msg, uint16_t addr)
{
  __nesc_hton_leuint16((unsigned char *)&IEEE154PacketP$getHeader(msg)->dest, addr);
}

#line 259
static __inline  void IEEE154PacketP$AMPacket$setDestination(message_t *msg, am_addr_t addr)
{
  IEEE154PacketP$IEEE154Packet$setDestAddr(msg, addr);
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  void /*DymoNetworkC.DymoQueue.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setDestination(message_t *arg_0x4033f958, am_addr_t arg_0x4033fae8){
#line 92
  IEEE154PacketP$AMPacket$setDestination(arg_0x4033f958, arg_0x4033fae8);
#line 92
}
#line 92
# 213 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline   void IEEE154PacketP$IEEE154Packet$setType(message_t *msg, am_id_t type)
{
  __nesc_hton_leuint8((unsigned char *)&IEEE154PacketP$getHeader(msg)->type, type);
}

#line 280
static __inline  void IEEE154PacketP$AMPacket$setType(message_t *msg, am_id_t type)
{
  IEEE154PacketP$IEEE154Packet$setType(msg, type);
}

# 151 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  void /*DymoNetworkC.DymoQueue.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setType(message_t *arg_0x403448f0, am_id_t arg_0x40344a78){
#line 151
  IEEE154PacketP$AMPacket$setType(arg_0x403448f0, arg_0x40344a78);
#line 151
}
#line 151
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static  error_t /*DymoNetworkC.DymoQueue.AMQueueEntryP*/AMQueueEntryP$1$Send$send(message_t *arg_0x40745760, uint8_t arg_0x407458e8){
#line 64
  unsigned char result;
#line 64

#line 64
  result = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(1U, arg_0x40745760, arg_0x407458e8);
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static   void RF230PacketP$IEEE154Packet$setLength(message_t *arg_0x403d3bd8, uint8_t arg_0x403d3d60){
#line 49
  IEEE154PacketP$IEEE154Packet$setLength(arg_0x403d3bd8, arg_0x403d3d60);
#line 49
}
#line 49
# 75 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static __inline  void RF230PacketP$Packet$setPayloadLength(message_t *msg, uint8_t len)
{
  RF230PacketP$IEEE154Packet$setLength(msg, len + RF230PacketP$PACKET_LENGTH_INCREASE);
}

# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(message_t *arg_0x40346010, uint8_t arg_0x40346198){
#line 83
  RF230PacketP$Packet$setPayloadLength(arg_0x40346010, arg_0x40346198);
#line 83
}
#line 83
# 93 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline   void IEEE154PacketP$IEEE154Packet$createDataFrame(message_t *msg)
{
  __nesc_hton_leuint16((unsigned char *)&IEEE154PacketP$getHeader(msg)->fcf, IEEE154PacketP$IEEE154_DATA_FRAME_VALUE);
}

# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static   void RF230PacketP$IEEE154Packet$createDataFrame(message_t *arg_0x403da470){
#line 73
  IEEE154PacketP$IEEE154Packet$createDataFrame(arg_0x403da470);
#line 73
}
#line 73
# 68 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static inline  void RF230PacketP$Packet$clear(message_t *msg)
{
  RF230PacketP$IEEE154Packet$createDataFrame(msg);

  RF230PacketP$getMeta(msg)->flags = RF230PACKET_CLEAR_METADATA;
}

# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  void RF230ActiveMessageP$Packet$clear(message_t *arg_0x40348360){
#line 54
  RF230PacketP$Packet$clear(arg_0x40348360);
#line 54
}
#line 54
# 166 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline  error_t RF230ActiveMessageP$ActiveMessageConfig$checkPacket(message_t *msg)
{

  if (!RF230ActiveMessageP$IEEE154Packet$isDataFrame(msg)) {
    RF230ActiveMessageP$Packet$clear(msg);
    }
  return SUCCESS;
}

# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageConfig.nc"
inline static  error_t ActiveMessageLayerC$Config$checkPacket(message_t *arg_0x403cda00){
#line 31
  unsigned char result;
#line 31

#line 31
  result = RF230ActiveMessageP$ActiveMessageConfig$checkPacket(arg_0x403cda00);
#line 31

#line 31
  return result;
#line 31
}
#line 31
# 189 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline   void IEEE154PacketP$IEEE154Packet$setSrcAddr(message_t *msg, uint16_t addr)
{
  __nesc_hton_leuint16((unsigned char *)&IEEE154PacketP$getHeader(msg)->src, addr);
}

#line 264
static __inline  void IEEE154PacketP$AMPacket$setSource(message_t *msg, am_addr_t addr)
{
  IEEE154PacketP$IEEE154Packet$setSrcAddr(msg, addr);
}

# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  void ActiveMessageLayerC$AMPacket$setSource(message_t *arg_0x4033e208, am_addr_t arg_0x4033e398){
#line 110
  IEEE154PacketP$AMPacket$setSource(arg_0x4033e208, arg_0x4033e398);
#line 110
}
#line 110
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static inline   am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void)
#line 61
{
  return ActiveMessageAddressC$amAddress();
}

# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
inline static   am_addr_t IEEE154PacketP$ActiveMessageAddress$amAddress(void){
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
# 238 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline  am_addr_t IEEE154PacketP$AMPacket$address(void)
{
  return IEEE154PacketP$ActiveMessageAddress$amAddress();
}

# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  am_addr_t ActiveMessageLayerC$AMPacket$address(void){
#line 57
  unsigned short result;
#line 57

#line 57
  result = IEEE154PacketP$AMPacket$address();
#line 57

#line 57
  return result;
#line 57
}
#line 57
# 169 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline   void IEEE154PacketP$IEEE154Packet$setDestPan(message_t *msg, uint16_t pan)
{
  __nesc_hton_leuint16((unsigned char *)&IEEE154PacketP$getHeader(msg)->destpan, pan);
}

#line 290
static __inline  void IEEE154PacketP$AMPacket$setGroup(message_t *msg, am_group_t grp)
{
  IEEE154PacketP$IEEE154Packet$setDestPan(msg, grp);
}

# 176 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  void ActiveMessageLayerC$AMPacket$setGroup(message_t *arg_0x40343838, am_group_t arg_0x403439c8){
#line 176
  IEEE154PacketP$AMPacket$setGroup(arg_0x40343838, arg_0x403439c8);
#line 176
}
#line 176
# 82 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static inline   am_group_t ActiveMessageAddressC$ActiveMessageAddress$amGroup(void)
#line 82
{
  am_group_t myGroup;

#line 84
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 84
    myGroup = ActiveMessageAddressC$group;
#line 84
    __nesc_atomic_end(__nesc_atomic); }
  return myGroup;
}

# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
inline static   am_group_t IEEE154PacketP$ActiveMessageAddress$amGroup(void){
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
# 243 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline  am_group_t IEEE154PacketP$AMPacket$localGroup(void)
{

  return IEEE154PacketP$ActiveMessageAddress$amGroup();
}

# 184 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  am_group_t ActiveMessageLayerC$AMPacket$localGroup(void){
#line 184
  unsigned char result;
#line 184

#line 184
  result = IEEE154PacketP$AMPacket$localGroup();
#line 184

#line 184
  return result;
#line 184
}
#line 184
#line 151
inline static  void ActiveMessageLayerC$AMPacket$setType(message_t *arg_0x403448f0, am_id_t arg_0x40344a78){
#line 151
  IEEE154PacketP$AMPacket$setType(arg_0x403448f0, arg_0x40344a78);
#line 151
}
#line 151
#line 92
inline static  void ActiveMessageLayerC$AMPacket$setDestination(message_t *arg_0x4033f958, am_addr_t arg_0x4033fae8){
#line 92
  IEEE154PacketP$AMPacket$setDestination(arg_0x4033f958, arg_0x4033fae8);
#line 92
}
#line 92
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  void MessageBufferLayerP$Packet$setPayloadLength(message_t *arg_0x40346010, uint8_t arg_0x40346198){
#line 83
  RF230PacketP$Packet$setPayloadLength(arg_0x40346010, arg_0x40346198);
#line 83
}
#line 83
#line 95
inline static  uint8_t MessageBufferLayerP$Packet$maxPayloadLength(void){
#line 95
  unsigned char result;
#line 95

#line 95
  result = RF230PacketP$Packet$maxPayloadLength();
#line 95

#line 95
  return result;
#line 95
}
#line 95
# 178 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static inline  error_t MessageBufferLayerP$Send$send(message_t *msg, uint8_t len)
{
  if (len > MessageBufferLayerP$Packet$maxPayloadLength()) {
    return EINVAL;
    }
  else {
#line 182
    if (MessageBufferLayerP$state != MessageBufferLayerP$STATE_READY) {
      return EBUSY;
      }
    }
#line 185
  MessageBufferLayerP$Packet$setPayloadLength(msg, len);

  MessageBufferLayerP$txMsg = msg;
  MessageBufferLayerP$state = MessageBufferLayerP$STATE_TX_PENDING;
  MessageBufferLayerP$retries = 0;
  MessageBufferLayerP$sendTask$postTask();

  return SUCCESS;
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static  error_t UniqueLayerP$SubSend$send(message_t *arg_0x40745760, uint8_t arg_0x407458e8){
#line 64
  unsigned char result;
#line 64

#line 64
  result = MessageBufferLayerP$Send$send(arg_0x40745760, arg_0x407458e8);
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 159 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline   void IEEE154PacketP$IEEE154Packet$setDSN(message_t *msg, uint8_t dsn)
{
  __nesc_hton_leuint8((unsigned char *)&IEEE154PacketP$getHeader(msg)->dsn, dsn);
}

# 129 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static   void RF230ActiveMessageP$IEEE154Packet$setDSN(message_t *arg_0x403df1c0, uint8_t arg_0x403df348){
#line 129
  IEEE154PacketP$IEEE154Packet$setDSN(arg_0x403df1c0, arg_0x403df348);
#line 129
}
#line 129
# 149 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   void RF230ActiveMessageP$UniqueConfig$setSequenceNumber(message_t *msg, uint8_t dsn)
{
  RF230ActiveMessageP$IEEE154Packet$setDSN(msg, dsn);
}

# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/UniqueConfig.nc"
inline static   void UniqueLayerP$UniqueConfig$setSequenceNumber(message_t *arg_0x403bfc40, uint8_t arg_0x403bfdc8){
#line 41
  RF230ActiveMessageP$UniqueConfig$setSequenceNumber(arg_0x403bfc40, arg_0x403bfdc8);
#line 41
}
#line 41
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/UniqueLayerP.nc"
static inline  error_t UniqueLayerP$Send$send(message_t *msg, uint8_t len)
{
  UniqueLayerP$UniqueConfig$setSequenceNumber(msg, ++UniqueLayerP$sequenceNumber);
  return UniqueLayerP$SubSend$send(msg, len);
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static  error_t IEEE154NetworkLayerP$SubSend$send(message_t *arg_0x40745760, uint8_t arg_0x407458e8){
#line 64
  unsigned char result;
#line 64

#line 64
  result = UniqueLayerP$Send$send(arg_0x40745760, arg_0x407458e8);
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 201 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline   void IEEE154PacketP$IEEE154Packet$set6LowPan(message_t *msg, uint8_t network)
{
  __nesc_hton_leuint8((unsigned char *)&IEEE154PacketP$getHeader(msg)->network, network);
}

# 172 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static   void IEEE154NetworkLayerP$IEEE154Packet$set6LowPan(message_t *arg_0x403db120, uint8_t arg_0x403db2a8){
#line 172
  IEEE154PacketP$IEEE154Packet$set6LowPan(arg_0x403db120, arg_0x403db2a8);
#line 172
}
#line 172
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154NetworkLayerP.nc"
static inline  error_t IEEE154NetworkLayerP$Send$send(message_t *msg, uint8_t len)
{
  IEEE154NetworkLayerP$IEEE154Packet$set6LowPan(msg, 0x3f);
  return IEEE154NetworkLayerP$SubSend$send(msg, len);
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static  error_t ActiveMessageLayerC$SubSend$send(message_t *arg_0x40745760, uint8_t arg_0x407458e8){
#line 64
  unsigned char result;
#line 64

#line 64
  result = IEEE154NetworkLayerP$Send$send(arg_0x40745760, arg_0x407458e8);
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 45 "../../../tos/lib/net/tymo/dymo/DymoPacket.nc"
inline static  void DymoEngineM$DymoPacket$createRM(message_t *arg_0x40b3c4f0, dymo_msg_t arg_0x40b3c688, const rt_info_t *arg_0x40b3c868, const rt_info_t *arg_0x40b3ca38){
#line 45
  DymoPacketM$DymoPacket$createRM(arg_0x40b3c4f0, arg_0x40b3c688, arg_0x40b3c868, arg_0x40b3ca38);
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
  unsigned char *__nesc_temp49;
  unsigned char *__nesc_temp48;
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
              (__nesc_temp48 = (unsigned char *)&*size_p, __nesc_hton_uint16(__nesc_temp48, __nesc_ntoh_uint16(__nesc_temp48) + isize));
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
      (__nesc_temp49 = (unsigned char *)&*size_p, __nesc_hton_uint16(__nesc_temp49, __nesc_ntoh_uint16(__nesc_temp49) + bsize));
      return SUCCESS;
    }
}

# 58 "../../../tos/lib/net/tymo/dymo/DymoPacket.nc"
inline static  error_t DymoEngineM$DymoPacket$addInfo(message_t *arg_0x40b3b0d0, const rt_info_t *arg_0x40b3b2a0){
#line 58
  unsigned char result;
#line 58

#line 58
  result = DymoPacketM$DymoPacket$addInfo(arg_0x40b3b0d0, arg_0x40b3b2a0);
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
inline static  void /*DymoTableC.Timers*/VirtualizeTimerC$1$TimerFrom$startOneShotAt(uint32_t arg_0x4035d010, uint32_t arg_0x4035d1a0){
#line 118
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShotAt(1U, arg_0x4035d010, arg_0x4035d1a0);
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
# 249 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline   uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Alarm$getNow(void)
#line 249
{
  return /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Counter$get();
}

# 98 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow(void){
#line 98
  unsigned long result;
#line 98

#line 98
  result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Alarm$getNow();
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
inline static  void /*DymoTableC.DymoTableM*/DymoTableM$0$Timer$startOneShot(uint8_t arg_0x40a71168, uint32_t arg_0x40358358){
#line 62
  /*DymoTableC.Timers*/VirtualizeTimerC$1$Timer$startOneShot(arg_0x40a71168, arg_0x40358358);
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
inline static  void /*DymoTableC.Timers*/VirtualizeTimerC$1$Timer$fired(uint8_t arg_0x40706208){
#line 72
  /*DymoTableC.DymoTableM*/DymoTableM$0$Timer$fired(arg_0x40706208);
#line 72
}
#line 72
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  void /*DymoNetworkC.MHQueue.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(message_t *arg_0x40354a98, error_t arg_0x40354c20){
#line 99
  /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$SubSend$sendDone(arg_0x40354a98, arg_0x40354c20);
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
inline static  void /*DymoNetworkC.DymoQueue.AMQueueEntryP*/AMQueueEntryP$1$AMSend$sendDone(message_t *arg_0x40354a98, error_t arg_0x40354c20){
#line 99
  DymoEngineM$AMSend$sendDone(arg_0x40354a98, arg_0x40354c20);
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
inline static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(uint8_t arg_0x40a2ccf0, message_t *arg_0x40744878, error_t arg_0x40744a00){
#line 89
  switch (arg_0x40a2ccf0) {
#line 89
    case 0U:
#line 89
      /*DymoNetworkC.MHQueue.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(arg_0x40744878, arg_0x40744a00);
#line 89
      break;
#line 89
    case 1U:
#line 89
      /*DymoNetworkC.DymoQueue.AMQueueEntryP*/AMQueueEntryP$1$Send$sendDone(arg_0x40744878, arg_0x40744a00);
#line 89
      break;
#line 89
    default:
#line 89
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(arg_0x40a2ccf0, arg_0x40744878, arg_0x40744a00);
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

# 114 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static inline   bool RF230PacketP$PacketAcknowledgements$wasAcked(message_t *msg)
{
  return RF230PacketP$getMeta(msg)->flags & RF230PACKET_WAS_ACKED;
}

# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc"
inline static   bool /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Acks$wasAcked(message_t *arg_0x4037b6c0){
#line 74
  unsigned char result;
#line 74

#line 74
  result = RF230PacketP$PacketAcknowledgements$wasAcked(arg_0x4037b6c0);
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
inline static  void /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$MHControl$sendFailed(message_t *arg_0x403731d8, uint8_t arg_0x40373360){
#line 5
  /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$MHControl$default$sendFailed(arg_0x403731d8, arg_0x40373360);
#line 5
}
#line 5
# 68 "../../../tos/lib/net/tymo/mh/MHEngineM.nc"
static inline  void MHEngineM$RoutingTable$evicted(const rt_info_t *rt_info, reason_t r)
#line 68
{
}

# 35 "../../../tos/lib/net/tymo/RoutingTable.nc"
inline static  void /*DymoTableC.DymoTableM*/DymoTableM$0$RoutingTable$evicted(const rt_info_t *arg_0x40a799c8, reason_t arg_0x40a79b58){
#line 35
  DymoEngineM$RoutingTable$evicted(arg_0x40a799c8, arg_0x40a79b58);
#line 35
  MHEngineM$RoutingTable$evicted(arg_0x40a799c8, arg_0x40a79b58);
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
inline static  void /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$LinkMonitor$brokenLink(am_addr_t arg_0x40a62198){
#line 16
  /*DymoTableC.DymoTableM*/DymoTableM$0$LinkMonitor$brokenLink(arg_0x40a62198);
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
    * (volatile uint8_t *)34U ^= 1 << 2;
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
    * (volatile uint8_t *)34U ^= 1 << 1;
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
inline static  error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(am_id_t arg_0x40a2b6a8, am_addr_t arg_0x4034e690, message_t *arg_0x4034e840, uint8_t arg_0x4034e9c8){
#line 69
  unsigned char result;
#line 69

#line 69
  result = ActiveMessageLayerC$AMSend$send(arg_0x40a2b6a8, arg_0x4034e690, arg_0x4034e840, arg_0x4034e9c8);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static __inline  uint8_t RF230PacketP$Packet$payloadLength(message_t *msg)
{
  return RF230PacketP$IEEE154Packet$getLength(msg) - RF230PacketP$PACKET_LENGTH_INCREASE;
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(message_t *arg_0x40348910){
#line 67
  unsigned char result;
#line 67

#line 67
  result = RF230PacketP$Packet$payloadLength(arg_0x40348910);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 249 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline  am_addr_t IEEE154PacketP$AMPacket$destination(message_t *msg)
{
  return IEEE154PacketP$IEEE154Packet$getDestAddr(msg);
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(message_t *arg_0x40340d70){
#line 67
  unsigned short result;
#line 67

#line 67
  result = IEEE154PacketP$AMPacket$destination(arg_0x40340d70);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 208 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline   am_id_t IEEE154PacketP$IEEE154Packet$getType(message_t *msg)
{
  return __nesc_ntoh_leuint8((unsigned char *)&IEEE154PacketP$getHeader(msg)->type);
}

#line 275
static __inline  am_id_t IEEE154PacketP$AMPacket$type(message_t *msg)
{
  return IEEE154PacketP$IEEE154Packet$getType(msg);
}

# 136 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(message_t *arg_0x40344358){
#line 136
  unsigned char result;
#line 136

#line 136
  result = IEEE154PacketP$AMPacket$type(arg_0x40344358);
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

# 87 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   uint8_t RF230ActiveMessageP$RF230Config$getDefaultChannel(void)
{
  return 11;
}

# 66 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230Config.nc"
inline static   uint8_t RF230LayerP$RF230Config$getDefaultChannel(void){
#line 66
  unsigned char result;
#line 66

#line 66
  result = RF230ActiveMessageP$RF230Config$getDefaultChannel();
#line 66

#line 66
  return result;
#line 66
}
#line 66
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/BusyWait.nc"
inline static   void RF230LayerP$BusyWait$wait(RF230LayerP$BusyWait$size_type arg_0x408a3bd0){
#line 55
  BusyWaitMicroC$BusyWait$wait(arg_0x408a3bd0);
#line 55
}
#line 55
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$clr(void)
#line 47
{
#line 47
  * (volatile uint8_t *)34U &= ~(1 << 6);
}

# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void RF230LayerP$RSTN$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$clr();
#line 30
}
#line 30
# 210 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
static inline void RF230LayerP$initRadio(void)
{
  RF230LayerP$BusyWait$wait(510);

  RF230LayerP$RSTN$clr();
  RF230LayerP$SLP_TR$clr();
  RF230LayerP$BusyWait$wait(6);
  RF230LayerP$RSTN$set();

  RF230LayerP$writeRegister(RF230_TRX_CTRL_0, RF230_TRX_CTRL_0_VALUE);
  RF230LayerP$writeRegister(RF230_TRX_STATE, RF230_TRX_OFF);

  RF230LayerP$BusyWait$wait(510);

  RF230LayerP$writeRegister(RF230_IRQ_MASK, ((RF230_IRQ_TRX_UR | RF230_IRQ_PLL_LOCK) | RF230_IRQ_TRX_END) | RF230_IRQ_RX_START);
  RF230LayerP$writeRegister(RF230_CCA_THRES, RF230_CCA_THRES_VALUE);
  RF230LayerP$writeRegister(RF230_PHY_TX_PWR, RF230_TX_AUTO_CRC_ON | RF230_TX_PWR_DEFAULT);

  RF230LayerP$txPower = RF230_TX_PWR_DEFAULT;
  RF230LayerP$channel = RF230LayerP$RF230Config$getDefaultChannel() & RF230_CHANNEL_MASK;
  RF230LayerP$writeRegister(RF230_PHY_CC_CCA, RF230_CCA_MODE_VALUE | RF230LayerP$channel);

  RF230LayerP$SLP_TR$set();
  RF230LayerP$state = RF230LayerP$STATE_SLEEP;
}



static inline  void RF230LayerP$SpiResource$granted(void)
{
  RF230LayerP$SELN$makeOutput();
  RF230LayerP$SELN$set();

  if (RF230LayerP$state == RF230LayerP$STATE_P_ON) 
    {
      RF230LayerP$initRadio();
      RF230LayerP$SpiResource$release();
    }
  else {
    RF230LayerP$Tasklet$schedule();
    }
}

# 340 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline   void Atm128SpiP$Resource$default$granted(uint8_t id)
#line 340
{
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static  void Atm128SpiP$Resource$granted(uint8_t arg_0x4092a300){
#line 92
  switch (arg_0x4092a300) {
#line 92
    case 0U:
#line 92
      RF230LayerP$SpiResource$granted();
#line 92
      break;
#line 92
    default:
#line 92
      Atm128SpiP$Resource$default$granted(arg_0x4092a300);
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
inline static  void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$granted(uint8_t arg_0x409b6ee8){
#line 92
  Atm128SpiP$ResourceArbiter$granted(arg_0x409b6ee8);
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

# 262 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline    
#line 261
void Atm128SpiP$SpiPacket$default$sendDone(
uint8_t *_txbuffer, uint8_t *_rxbuffer, 
uint16_t _length, error_t _success)
#line 263
{
}

# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SpiPacket.nc"
inline static   void Atm128SpiP$SpiPacket$sendDone(uint8_t *arg_0x4092eac8, uint8_t *arg_0x4092ec70, uint16_t arg_0x4092ee00, error_t arg_0x4092d010){
#line 71
  Atm128SpiP$SpiPacket$default$sendDone(arg_0x4092eac8, arg_0x4092ec70, arg_0x4092ee00, arg_0x4092d010);
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

# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/system/RandomMlcgC.nc"
static inline   uint16_t RandomMlcgC$Random$rand16(void)
#line 78
{
  return (uint16_t )RandomMlcgC$Random$rand32();
}

# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Random.nc"
inline static   uint16_t RandomCollisionLayerP$Random$rand16(void){
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
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RandomCollisionLayerP.nc"
static inline  void RandomCollisionLayerP$calcNextRandom$runTask(void)
{
  uint16_t a = RandomCollisionLayerP$Random$rand16();

#line 70
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 70
    RandomCollisionLayerP$nextRandom = a;
#line 70
    __nesc_atomic_end(__nesc_atomic); }
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void TrafficMonitorLayerP$Timer$stop(void){
#line 67
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(0U);
#line 67
}
#line 67
# 190 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   uint16_t RF230ActiveMessageP$TrafficMonitorConfig$getUpdatePeriod(void)
{
  return RF230ActiveMessageP$TRAFFIC_UPDATE_PERIOD;
}

# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorConfig.nc"
inline static   uint16_t TrafficMonitorLayerP$TrafficMonitorConfig$getUpdatePeriod(void){
#line 32
  unsigned short result;
#line 32

#line 32
  result = RF230ActiveMessageP$TrafficMonitorConfig$getUpdatePeriod();
#line 32

#line 32
  return result;
#line 32
}
#line 32
# 143 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(), dt, FALSE);
}

# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void TrafficMonitorLayerP$Timer$startPeriodic(uint32_t arg_0x40359d78){
#line 53
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(0U, arg_0x40359d78);
#line 53
}
#line 53
# 229 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
static inline  void TrafficMonitorLayerP$startStopTimer$runTask(void)
{
  if (TrafficMonitorLayerP$radioCmd == TrafficMonitorLayerP$RADIO_CMD_TURNON) {
    TrafficMonitorLayerP$Timer$startPeriodic(TrafficMonitorLayerP$TrafficMonitorConfig$getUpdatePeriod());
    }
  else {
#line 233
    if (TrafficMonitorLayerP$radioCmd == TrafficMonitorLayerP$RADIO_CMD_TURNOFF) {
      TrafficMonitorLayerP$Timer$stop();
      }
    }
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  uint8_t MessageBufferLayerP$Packet$payloadLength(message_t *arg_0x40348910){
#line 67
  unsigned char result;
#line 67

#line 67
  result = RF230PacketP$Packet$payloadLength(arg_0x40348910);
#line 67

#line 67
  return result;
#line 67
}
#line 67
#line 115
inline static  void *MessageBufferLayerP$Packet$getPayload(message_t *arg_0x40346d70, uint8_t arg_0x40346ef8){
#line 115
  void *result;
#line 115

#line 115
  result = RF230PacketP$Packet$getPayload(arg_0x40346d70, arg_0x40346ef8);
#line 115

#line 115
  return result;
#line 115
}
#line 115
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154NetworkLayerP.nc"
static inline   message_t *IEEE154NetworkLayerP$NonTinyosReceive$default$receive(uint8_t network, message_t *msg, void *payload, uint8_t len)
{
  return msg;
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
inline static  message_t *IEEE154NetworkLayerP$NonTinyosReceive$receive(uint8_t arg_0x4075c578, message_t *arg_0x4034b5a0, void *arg_0x4034b740, uint8_t arg_0x4034b8c8){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
    result = IEEE154NetworkLayerP$NonTinyosReceive$default$receive(arg_0x4075c578, arg_0x4034b5a0, arg_0x4034b740, arg_0x4034b8c8);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 103 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
static inline   message_t *ActiveMessageLayerC$Snoop$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
{
  return msg;
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
inline static  message_t *ActiveMessageLayerC$Snoop$receive(am_id_t arg_0x407499b0, message_t *arg_0x4034b5a0, void *arg_0x4034b740, uint8_t arg_0x4034b8c8){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
    result = ActiveMessageLayerC$Snoop$default$receive(arg_0x407499b0, arg_0x4034b5a0, arg_0x4034b740, arg_0x4034b8c8);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Timer$startOneShot(uint32_t arg_0x40358358){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(2U, arg_0x40358358);
#line 62
}
#line 62
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  uint8_t /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$PPacket$payloadLength(message_t *arg_0x40348910){
#line 67
  unsigned char result;
#line 67

#line 67
  result = MHPacketM$Packet$payloadLength(arg_0x40348910);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  am_addr_t MHPacketM$AMPacket$address(void){
#line 57
  unsigned short result;
#line 57

#line 57
  result = IEEE154PacketP$AMPacket$address();
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
inline static  message_t */*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Receive$receive(uint8_t arg_0x40ae6bb8, message_t *arg_0x4034b5a0, void *arg_0x4034b740, uint8_t arg_0x4034b8c8){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  switch (arg_0x40ae6bb8) {
#line 67
    case 1:
#line 67
      result = TestM$Receive$receive(arg_0x4034b5a0, arg_0x4034b740, arg_0x4034b8c8);
#line 67
      break;
#line 67
    default:
#line 67
      result = /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Receive$default$receive(arg_0x40ae6bb8, arg_0x4034b5a0, arg_0x4034b740, arg_0x4034b8c8);
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
# 115 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  void */*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$PPacket$getPayload(message_t *arg_0x40346d70, uint8_t arg_0x40346ef8){
#line 115
  void *result;
#line 115

#line 115
  result = MHPacketM$Packet$getPayload(arg_0x40346d70, arg_0x40346ef8);
#line 115

#line 115
  return result;
#line 115
}
#line 115
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  am_addr_t /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$AMPacket$destination(message_t *arg_0x40340d70){
#line 67
  unsigned short result;
#line 67

#line 67
  result = IEEE154PacketP$AMPacket$destination(arg_0x40340d70);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  error_t /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$SubSend$send(am_addr_t arg_0x4034e690, message_t *arg_0x4034e840, uint8_t arg_0x4034e9c8){
#line 69
  unsigned char result;
#line 69

#line 69
  result = /*DymoNetworkC.MHQueue.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(arg_0x4034e690, arg_0x4034e840, arg_0x4034e9c8);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 133 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline   void IEEE154PacketP$IEEE154Packet$setAckRequired(message_t *msg, bool ack)
{
  unsigned char *__nesc_temp43;
  unsigned char *__nesc_temp42;

#line 135
  if (ack) {
    (__nesc_temp42 = (unsigned char *)&IEEE154PacketP$getHeader(msg)->fcf, __nesc_hton_leuint16(__nesc_temp42, __nesc_ntoh_leuint16(__nesc_temp42) | (1 << IEEE154_FCF_ACK_REQ)));
    }
  else {
#line 138
    (__nesc_temp43 = (unsigned char *)&IEEE154PacketP$getHeader(msg)->fcf, __nesc_hton_leuint16(__nesc_temp43, __nesc_ntoh_leuint16(__nesc_temp43) & ~ (uint16_t )(1 << IEEE154_FCF_ACK_REQ)));
    }
}

# 109 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static   void RF230PacketP$IEEE154Packet$setAckRequired(message_t *arg_0x403d89b8, bool arg_0x403d8b40){
#line 109
  IEEE154PacketP$IEEE154Packet$setAckRequired(arg_0x403d89b8, arg_0x403d8b40);
#line 109
}
#line 109
# 100 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static inline   error_t RF230PacketP$PacketAcknowledgements$requestAck(message_t *msg)
{
  RF230PacketP$IEEE154Packet$setAckRequired(msg, TRUE);

  return SUCCESS;
}

# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc"
inline static   error_t /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Acks$requestAck(message_t *arg_0x4037c818){
#line 48
  unsigned char result;
#line 48

#line 48
  result = RF230PacketP$PacketAcknowledgements$requestAck(arg_0x4037c818);
#line 48

#line 48
  return result;
#line 48
}
#line 48
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
inline static  bool /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Intercept$forward(uint8_t arg_0x40ae5188, message_t *arg_0x40351c90, void *arg_0x40351e30, uint8_t arg_0x40350010){
#line 31
  unsigned char result;
#line 31

#line 31
  switch (arg_0x40ae5188) {
#line 31
    case 1:
#line 31
      result = TestM$Intercept$forward(arg_0x40351c90, arg_0x40351e30, arg_0x40350010);
#line 31
      break;
#line 31
    default:
#line 31
      result = /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$Intercept$default$forward(arg_0x40ae5188, arg_0x40351c90, arg_0x40351e30, arg_0x40350010);
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
inline static  fw_action_t /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$RouteSelect$selectRoute(message_t *arg_0x40abe010, addr_t *arg_0x40abe1c0, uint8_t *arg_0x40abe368){
#line 24
  enum __nesc_unnamed4315 result;
#line 24

#line 24
  result = MHEngineM$RouteSelect$selectRoute(arg_0x40abe010, arg_0x40abe1c0, arg_0x40abe368);
#line 24

#line 24
  return result;
#line 24
}
#line 24
# 237 "../../../tos/lib/net/tymo/ForwardingEngineM.nc"
static inline   void /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$MHControl$default$msgReceived(message_t *msg)
#line 237
{
}

# 3 "../../../tos/lib/net/tymo/mh/MHControl.nc"
inline static  void /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$MHControl$msgReceived(message_t *arg_0x4036ed10){
#line 3
  /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$MHControl$default$msgReceived(arg_0x4036ed10);
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
inline static  void DymoEngineM$DymoPacket$startProcessing(message_t *arg_0x40b3b918, message_t *arg_0x40b3bac8){
#line 74
  DymoPacketM$DymoPacket$startProcessing(arg_0x40b3b918, arg_0x40b3bac8);
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

# 98 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
static inline   message_t *ActiveMessageLayerC$Receive$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
{
  return msg;
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
inline static  message_t *ActiveMessageLayerC$Receive$receive(am_id_t arg_0x407493d8, message_t *arg_0x4034b5a0, void *arg_0x4034b740, uint8_t arg_0x4034b8c8){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  switch (arg_0x407493d8) {
#line 67
    case 8:
#line 67
      result = DymoEngineM$Receive$receive(arg_0x4034b5a0, arg_0x4034b740, arg_0x4034b8c8);
#line 67
      break;
#line 67
    case 9:
#line 67
      result = /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$SubReceive$receive(arg_0x4034b5a0, arg_0x4034b740, arg_0x4034b8c8);
#line 67
      break;
#line 67
    default:
#line 67
      result = ActiveMessageLayerC$Receive$default$receive(arg_0x407493d8, arg_0x4034b5a0, arg_0x4034b740, arg_0x4034b8c8);
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
static __inline  bool IEEE154PacketP$AMPacket$isForMe(message_t *msg)
{
  am_addr_t addr = IEEE154PacketP$AMPacket$destination(msg);

#line 272
  return addr == IEEE154PacketP$AMPacket$address() || addr == AM_BROADCAST_ADDR;
}

# 125 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  bool ActiveMessageLayerC$AMPacket$isForMe(message_t *arg_0x4033eb50){
#line 125
  unsigned char result;
#line 125

#line 125
  result = IEEE154PacketP$AMPacket$isForMe(arg_0x4033eb50);
#line 125

#line 125
  return result;
#line 125
}
#line 125
#line 136
inline static  am_id_t ActiveMessageLayerC$AMPacket$type(message_t *arg_0x40344358){
#line 136
  unsigned char result;
#line 136

#line 136
  result = IEEE154PacketP$AMPacket$type(arg_0x40344358);
#line 136

#line 136
  return result;
#line 136
}
#line 136
# 87 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
static inline  message_t *ActiveMessageLayerC$SubReceive$receive(message_t *msg, void *payload, uint8_t len)
{
  am_id_t type = ActiveMessageLayerC$AMPacket$type(msg);

  msg = ActiveMessageLayerC$AMPacket$isForMe(msg) ? 
  ActiveMessageLayerC$Receive$receive(type, msg, payload, len) : 
  ActiveMessageLayerC$Snoop$receive(type, msg, payload, len);

  return msg;
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
inline static  message_t *IEEE154NetworkLayerP$Receive$receive(message_t *arg_0x4034b5a0, void *arg_0x4034b740, uint8_t arg_0x4034b8c8){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  result = ActiveMessageLayerC$SubReceive$receive(arg_0x4034b5a0, arg_0x4034b740, arg_0x4034b8c8);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 196 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline   uint8_t IEEE154PacketP$IEEE154Packet$get6LowPan(message_t *msg)
{
  return __nesc_ntoh_leuint8((unsigned char *)&IEEE154PacketP$getHeader(msg)->network);
}

# 167 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static   uint8_t IEEE154NetworkLayerP$IEEE154Packet$get6LowPan(message_t *arg_0x403dcbe8){
#line 167
  unsigned char result;
#line 167

#line 167
  result = IEEE154PacketP$IEEE154Packet$get6LowPan(arg_0x403dcbe8);
#line 167

#line 167
  return result;
#line 167
}
#line 167
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154NetworkLayerP.nc"
static inline  message_t *IEEE154NetworkLayerP$SubReceive$receive(message_t *msg, void *payload, uint8_t len)
{
  uint8_t network = IEEE154NetworkLayerP$IEEE154Packet$get6LowPan(msg);

#line 77
  if (network == 0x3f) {
    return IEEE154NetworkLayerP$Receive$receive(msg, payload, len);
    }
  else {
#line 80
    return IEEE154NetworkLayerP$NonTinyosReceive$receive(network, msg, payload, len);
    }
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
inline static  message_t *MessageBufferLayerP$Receive$receive(message_t *arg_0x4034b5a0, void *arg_0x4034b740, uint8_t arg_0x4034b8c8){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  result = IEEE154NetworkLayerP$SubReceive$receive(arg_0x4034b5a0, arg_0x4034b740, arg_0x4034b8c8);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 267 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static inline  void MessageBufferLayerP$deliverTask$runTask(void)
{

  for (; ; ) 
    {
      message_t *msg;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          if (MessageBufferLayerP$receiveQueueSize == 0) {
            {
#line 277
              __nesc_atomic_end(__nesc_atomic); 
#line 277
              return;
            }
            }
#line 279
          msg = MessageBufferLayerP$receiveQueue[MessageBufferLayerP$receiveQueueHead];
        }
#line 280
        __nesc_atomic_end(__nesc_atomic); }

      msg = MessageBufferLayerP$Receive$receive(msg, 
      MessageBufferLayerP$Packet$getPayload(msg, MessageBufferLayerP$Packet$maxPayloadLength()), 
      MessageBufferLayerP$Packet$payloadLength(msg));

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          MessageBufferLayerP$receiveQueue[MessageBufferLayerP$receiveQueueHead] = msg;

          if (++MessageBufferLayerP$receiveQueueHead >= MessageBufferLayerP$RECEIVE_QUEUE_SIZE) {
            MessageBufferLayerP$receiveQueueHead = 0;
            }
          --MessageBufferLayerP$receiveQueueSize;
        }
#line 294
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  uint8_t MHPacketM$SubPacket$maxPayloadLength(void){
#line 95
  unsigned char result;
#line 95

#line 95
  result = RF230PacketP$Packet$maxPayloadLength();
#line 95

#line 95
  return result;
#line 95
}
#line 95
#line 115
inline static  void *MHPacketM$SubPacket$getPayload(message_t *arg_0x40346d70, uint8_t arg_0x40346ef8){
#line 115
  void *result;
#line 115

#line 115
  result = RF230PacketP$Packet$getPayload(arg_0x40346d70, arg_0x40346ef8);
#line 115

#line 115
  return result;
#line 115
}
#line 115
# 69 "../../../tos/lib/net/tymo/mh/MHPacketM.nc"
static inline  bool MHPacketM$MHPacket$isForMe(message_t *amsg)
#line 69
{
  return __nesc_ntoh_uint16((unsigned char *)&((mhpacket_header_t *)MHPacketM$SubPacket$getPayload(amsg, MHPacketM$SubPacket$maxPayloadLength()))->dest) == MHPacketM$MHPacket$address() || __nesc_ntoh_uint16((unsigned char *)&((mhpacket_header_t *)MHPacketM$SubPacket$getPayload(amsg, MHPacketM$SubPacket$maxPayloadLength()))->dest) == AM_BROADCAST_ADDR;
}

# 125 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  bool MHEngineM$MHPacket$isForMe(message_t *arg_0x4033eb50){
#line 125
  unsigned char result;
#line 125

#line 125
  result = MHPacketM$MHPacket$isForMe(arg_0x4033eb50);
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
inline static  am_id_t MHEngineM$MHPacket$type(message_t *arg_0x40344358){
#line 136
  unsigned char result;
#line 136

#line 136
  result = MHPacketM$MHPacket$type(arg_0x40344358);
#line 136

#line 136
  return result;
#line 136
}
#line 136
# 26 "../../../tos/lib/net/tymo/RoutingTable.nc"
inline static  error_t MHEngineM$RoutingTable$getRoute(addr_t arg_0x40a7ab18, rt_info_t *arg_0x40a7acc8){
#line 26
  unsigned char result;
#line 26

#line 26
  result = /*DymoTableC.DymoTableM*/DymoTableM$0$RoutingTable$getRoute(arg_0x40a7ab18, arg_0x40a7acc8);
#line 26

#line 26
  return result;
#line 26
}
#line 26


inline static  error_t MHEngineM$RoutingTable$getForwardingRoute(addr_t arg_0x40a79340, rt_info_t *arg_0x40a794f0){
#line 28
  unsigned char result;
#line 28

#line 28
  result = /*DymoTableC.DymoTableM*/DymoTableM$0$RoutingTable$getForwardingRoute(arg_0x40a79340, arg_0x40a794f0);
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
inline static  am_addr_t MHEngineM$MHPacket$destination(message_t *arg_0x40340d70){
#line 67
  unsigned short result;
#line 67

#line 67
  result = MHPacketM$MHPacket$destination(arg_0x40340d70);
#line 67

#line 67
  return result;
#line 67
}
#line 67
#line 92
inline static  void MHEngineM$AMPacket$setDestination(message_t *arg_0x4033f958, am_addr_t arg_0x4033fae8){
#line 92
  IEEE154PacketP$AMPacket$setDestination(arg_0x4033f958, arg_0x4033fae8);
#line 92
}
#line 92
#line 151
inline static  void MHPacketM$AMPacket$setType(message_t *arg_0x403448f0, am_id_t arg_0x40344a78){
#line 151
  IEEE154PacketP$AMPacket$setType(arg_0x403448f0, arg_0x40344a78);
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
inline static  void MHEngineM$MHPacket$setType(message_t *arg_0x403448f0, am_id_t arg_0x40344a78){
#line 151
  MHPacketM$MHPacket$setType(arg_0x403448f0, arg_0x40344a78);
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
inline static  void MHEngineM$MHPacket$setDestination(message_t *arg_0x4033f958, am_addr_t arg_0x4033fae8){
#line 92
  MHPacketM$MHPacket$setDestination(arg_0x4033f958, arg_0x4033fae8);
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
inline static  void MHEngineM$MHPacket$setSource(message_t *arg_0x4033e208, am_addr_t arg_0x4033e398){
#line 110
  MHPacketM$MHPacket$setSource(arg_0x4033e208, arg_0x4033e398);
#line 110
}
#line 110
#line 92
inline static  void /*DymoNetworkC.MHQueue.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(message_t *arg_0x4033f958, am_addr_t arg_0x4033fae8){
#line 92
  IEEE154PacketP$AMPacket$setDestination(arg_0x4033f958, arg_0x4033fae8);
#line 92
}
#line 92
#line 151
inline static  void /*DymoNetworkC.MHQueue.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(message_t *arg_0x403448f0, am_id_t arg_0x40344a78){
#line 151
  IEEE154PacketP$AMPacket$setType(arg_0x403448f0, arg_0x40344a78);
#line 151
}
#line 151
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static  error_t /*DymoNetworkC.MHQueue.AMQueueEntryP*/AMQueueEntryP$0$Send$send(message_t *arg_0x40745760, uint8_t arg_0x407458e8){
#line 64
  unsigned char result;
#line 64

#line 64
  result = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(0U, arg_0x40745760, arg_0x407458e8);
#line 64

#line 64
  return result;
#line 64
}
#line 64
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
inline static  void ActiveMessageLayerC$AMSend$sendDone(am_id_t arg_0x4074a9f0, message_t *arg_0x40354a98, error_t arg_0x40354c20){
#line 99
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(arg_0x4074a9f0, arg_0x40354a98, arg_0x40354c20);
#line 99
}
#line 99
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
static __inline  void ActiveMessageLayerC$SubSend$sendDone(message_t *msg, error_t error)
{
  ActiveMessageLayerC$AMSend$sendDone(ActiveMessageLayerC$AMPacket$type(msg), msg, error);
}

# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static  void IEEE154NetworkLayerP$Send$sendDone(message_t *arg_0x40744878, error_t arg_0x40744a00){
#line 89
  ActiveMessageLayerC$SubSend$sendDone(arg_0x40744878, arg_0x40744a00);
#line 89
}
#line 89
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154NetworkLayerP.nc"
static inline  void IEEE154NetworkLayerP$SubSend$sendDone(message_t *msg, error_t error)
{
  IEEE154NetworkLayerP$Send$sendDone(msg, error);
}

# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static  void UniqueLayerP$Send$sendDone(message_t *arg_0x40744878, error_t arg_0x40744a00){
#line 89
  IEEE154NetworkLayerP$SubSend$sendDone(arg_0x40744878, arg_0x40744a00);
#line 89
}
#line 89
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/UniqueLayerP.nc"
static inline  void UniqueLayerP$SubSend$sendDone(message_t *msg, error_t error)
{
  UniqueLayerP$Send$sendDone(msg, error);
}

# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static  void MessageBufferLayerP$Send$sendDone(message_t *arg_0x40744878, error_t arg_0x40744a00){
#line 89
  UniqueLayerP$SubSend$sendDone(arg_0x40744878, arg_0x40744a00);
#line 89
}
#line 89
# 68 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
inline static  void MessageBufferLayerP$Tasklet$resume(void){
#line 68
  TaskletC$Tasklet$resume();
#line 68
}
#line 68
# 234 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   uint16_t RF230ActiveMessageP$RandomCollisionConfig$getInitialBackoff(message_t *msg)
{
  return (uint16_t )(9920 * (7372800UL / 8 / 32 * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 1000000.0));
}

# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RandomCollisionConfig.nc"
inline static   uint16_t RandomCollisionLayerP$Config$getInitialBackoff(message_t *arg_0x403c92c0){
#line 29
  unsigned short result;
#line 29

#line 29
  result = RF230ActiveMessageP$RandomCollisionConfig$getInitialBackoff(arg_0x403c92c0);
#line 29

#line 29
  return result;
#line 29
}
#line 29
# 87 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RandomCollisionLayerP.nc"
static inline   error_t RandomCollisionLayerP$RadioSend$send(message_t *msg)
{
  if (RandomCollisionLayerP$state != RandomCollisionLayerP$STATE_READY || !RandomCollisionLayerP$RadioAlarm$isFree()) {
    return EBUSY;
    }
  RandomCollisionLayerP$txMsg = msg;
  RandomCollisionLayerP$state = RandomCollisionLayerP$STATE_TX_PENDING_FIRST;
  RandomCollisionLayerP$RadioAlarm$wait(RandomCollisionLayerP$getBackoff(RandomCollisionLayerP$Config$getInitialBackoff(msg)));

  return SUCCESS;
}

# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
inline static   error_t TrafficMonitorLayerP$SubSend$send(message_t *arg_0x40775a30){
#line 37
  unsigned char result;
#line 37

#line 37
  result = RandomCollisionLayerP$RadioSend$send(arg_0x40775a30);
#line 37

#line 37
  return result;
#line 37
}
#line 37
# 86 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
static inline   error_t TrafficMonitorLayerP$RadioSend$send(message_t *msg)
{
  TrafficMonitorLayerP$txMsg = msg;
  return TrafficMonitorLayerP$SubSend$send(msg);
}

# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
inline static   error_t MessageBufferLayerP$RadioSend$send(message_t *arg_0x40775a30){
#line 37
  unsigned char result;
#line 37

#line 37
  result = TrafficMonitorLayerP$RadioSend$send(arg_0x40775a30);
#line 37

#line 37
  return result;
#line 37
}
#line 37
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TaskletC.nc"
static __inline  void TaskletC$Tasklet$suspend(void)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 85
    ++TaskletC$state;
#line 85
    __nesc_atomic_end(__nesc_atomic); }
}

# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
inline static  void MessageBufferLayerP$Tasklet$suspend(void){
#line 61
  TaskletC$Tasklet$suspend();
#line 61
}
#line 61
# 139 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static inline  void MessageBufferLayerP$sendTask$runTask(void)
{
  error_t error;

  for (; 0; ) ;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 145
    error = MessageBufferLayerP$txError;
#line 145
    __nesc_atomic_end(__nesc_atomic); }
  if ((MessageBufferLayerP$state == MessageBufferLayerP$STATE_TX_SEND && error == SUCCESS) || ++MessageBufferLayerP$retries > MessageBufferLayerP$MAX_RETRIES) {
    MessageBufferLayerP$state = MessageBufferLayerP$STATE_TX_DONE;
    }
  else {
      MessageBufferLayerP$Tasklet$suspend();

      error = MessageBufferLayerP$RadioSend$send(MessageBufferLayerP$txMsg);
      if (error == SUCCESS) {
        MessageBufferLayerP$state = MessageBufferLayerP$STATE_TX_SEND;
        }
      else {
#line 155
        if (MessageBufferLayerP$retries == MessageBufferLayerP$MAX_RETRIES) {
          MessageBufferLayerP$state = MessageBufferLayerP$STATE_TX_DONE;
          }
        else {
#line 158
          MessageBufferLayerP$state = MessageBufferLayerP$STATE_TX_PENDING;
          }
        }
#line 160
      MessageBufferLayerP$Tasklet$resume();
    }

  if (MessageBufferLayerP$state == MessageBufferLayerP$STATE_TX_DONE) 
    {
      MessageBufferLayerP$state = MessageBufferLayerP$STATE_READY;
      MessageBufferLayerP$Send$sendDone(MessageBufferLayerP$txMsg, error);
    }
}

# 103 "TestM.nc"
static inline  void TestM$SplitControl$stopDone(error_t e)
#line 103
{
}

# 117 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static  void NetControlM$SplitControl$stopDone(error_t arg_0x40331a78){
#line 117
  TestM$SplitControl$stopDone(arg_0x40331a78);
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
inline static  void MessageBufferLayerP$SplitControl$stopDone(error_t arg_0x40331a78){
#line 117
  NetControlM$AMControl$stopDone(arg_0x40331a78);
#line 117
}
#line 117
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void TestM$Timer$startPeriodic(uint32_t arg_0x40359d78){
#line 53
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(3U, arg_0x40359d78);
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
inline static  void NetControlM$SplitControl$startDone(error_t arg_0x4032ae98){
#line 92
  TestM$SplitControl$startDone(arg_0x4032ae98);
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
inline static  void MessageBufferLayerP$SplitControl$startDone(error_t arg_0x4032ae98){
#line 92
  NetControlM$AMControl$startDone(arg_0x4032ae98);
#line 92
}
#line 92
# 101 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static inline  void MessageBufferLayerP$stateDoneTask$runTask(void)
{
  uint8_t s;

  s = MessageBufferLayerP$state;


  if (s == MessageBufferLayerP$STATE_TURN_ON || s == MessageBufferLayerP$STATE_TURN_OFF) {
    MessageBufferLayerP$state = MessageBufferLayerP$STATE_READY;
    }
  if (s == MessageBufferLayerP$STATE_TURN_ON) {
    MessageBufferLayerP$SplitControl$startDone(SUCCESS);
    }
  else {
#line 114
    MessageBufferLayerP$SplitControl$stopDone(SUCCESS);
    }
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type arg_0x406639e0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type arg_0x40663b70){
#line 92
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Alarm$startAt(arg_0x406639e0, arg_0x40663b70);
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
inline static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(uint32_t arg_0x4035d010, uint32_t arg_0x4035d1a0){
#line 118
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(arg_0x4035d010, arg_0x4035d1a0);
#line 118
}
#line 118
# 231 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Alarm$stop(void)
#line 231
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 232
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$set = FALSE;
#line 232
    __nesc_atomic_end(__nesc_atomic); }
}

# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop(void){
#line 62
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Alarm$stop();
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

# 68 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
inline static  void TrafficMonitorLayerP$Tasklet$resume(void){
#line 68
  TaskletC$Tasklet$resume();
#line 68
}
#line 68
# 291 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline    void RF230ActiveMessageP$SlottedCollisionConfig$default$timerTick(void)
#line 291
{
}

# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SlottedCollisionConfig.nc"
inline static   void RF230ActiveMessageP$SlottedCollisionConfig$timerTick(void){
#line 60
  RF230ActiveMessageP$SlottedCollisionConfig$default$timerTick();
#line 60
}
#line 60
# 213 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline   void RF230ActiveMessageP$TrafficMonitorConfig$timerTick(void)
{
  RF230ActiveMessageP$SlottedCollisionConfig$timerTick();
}

# 79 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorConfig.nc"
inline static   void TrafficMonitorLayerP$TrafficMonitorConfig$timerTick(void){
#line 79
  RF230ActiveMessageP$TrafficMonitorConfig$timerTick();
#line 79
}
#line 79
# 162 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodP.nc"
static inline   void NeighborhoodP$NeighborhoodFlag$clearAll(uint8_t bit)
{
  uint8_t i;

  bit = ~(1 << bit);

  for (i = 0; i < 5; ++i) 
    NeighborhoodP$flags[i] &= bit;
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodFlag.nc"
inline static   void TrafficMonitorLayerP$NeighborhoodFlag$clearAll(void){
#line 51
  NeighborhoodP$NeighborhoodFlag$clearAll(1U);
#line 51
}
#line 51
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
inline static  void TrafficMonitorLayerP$Tasklet$suspend(void){
#line 61
  TaskletC$Tasklet$suspend();
#line 61
}
#line 61
# 132 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
static inline  void TrafficMonitorLayerP$Timer$fired(void)
{
  uint8_t fraction;

  TrafficMonitorLayerP$Tasklet$suspend();

  TrafficMonitorLayerP$txAverage -= TrafficMonitorLayerP$txAverage >> 3;
  TrafficMonitorLayerP$rxAverage -= TrafficMonitorLayerP$rxAverage >> 3;
  TrafficMonitorLayerP$errorAverage -= TrafficMonitorLayerP$errorAverage >> 3;


  fraction = TrafficMonitorLayerP$neighborAverage >> 3;
  if (fraction == TrafficMonitorLayerP$neighborCount && (TrafficMonitorLayerP$neighborAverage & TrafficMonitorLayerP$TRAFFIC_MONITOR_MASK) != 0) {
    --TrafficMonitorLayerP$neighborAverage;
    }
  else {
#line 147
    TrafficMonitorLayerP$neighborAverage += TrafficMonitorLayerP$neighborCount - fraction;
    }
  TrafficMonitorLayerP$NeighborhoodFlag$clearAll();
  TrafficMonitorLayerP$neighborCount = 0;

  TrafficMonitorLayerP$TrafficMonitorConfig$timerTick();

  TrafficMonitorLayerP$Tasklet$resume();
}

# 128 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
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
inline static  void /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$AMSend$sendDone(uint8_t arg_0x40ae6288, message_t *arg_0x40354a98, error_t arg_0x40354c20){
#line 99
  switch (arg_0x40ae6288) {
#line 99
    case 1:
#line 99
      TestM$MHSend$sendDone(arg_0x40354a98, arg_0x40354c20);
#line 99
      break;
#line 99
    default:
#line 99
      /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$AMSend$default$sendDone(arg_0x40ae6288, arg_0x40354a98, arg_0x40354c20);
#line 99
      break;
#line 99
    }
#line 99
}
#line 99
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
inline static  uint8_t /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$SubPacket$payloadLength(message_t *arg_0x40348910){
#line 67
  unsigned char result;
#line 67

#line 67
  result = RF230PacketP$Packet$payloadLength(arg_0x40348910);
#line 67

#line 67
  return result;
#line 67
}
#line 67
#line 83
inline static  void /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$PPacket$setPayloadLength(message_t *arg_0x40346010, uint8_t arg_0x40346198){
#line 83
  MHPacketM$Packet$setPayloadLength(arg_0x40346010, arg_0x40346198);
#line 83
}
#line 83
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
inline static  error_t TestM$MHSend$send(am_addr_t arg_0x4034e690, message_t *arg_0x4034e840, uint8_t arg_0x4034e9c8){
#line 69
  unsigned char result;
#line 69

#line 69
  result = /*MHServiceC.ForwardingEngineM*/ForwardingEngineM$0$AMSend$send(1, arg_0x4034e690, arg_0x4034e840, arg_0x4034e9c8);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 115 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  void *TestM$Packet$getPayload(message_t *arg_0x40346d70, uint8_t arg_0x40346ef8){
#line 115
  void *result;
#line 115

#line 115
  result = MHPacketM$Packet$getPayload(arg_0x40346d70, arg_0x40346ef8);
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
inline static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(uint8_t arg_0x40706208){
#line 72
  switch (arg_0x40706208) {
#line 72
    case 0U:
#line 72
      TrafficMonitorLayerP$Timer$fired();
#line 72
      break;
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
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(arg_0x40706208);
#line 72
      break;
#line 72
    }
#line 72
}
#line 72
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  void MHPacketM$SubPacket$setPayloadLength(message_t *arg_0x40346010, uint8_t arg_0x40346198){
#line 83
  RF230PacketP$Packet$setPayloadLength(arg_0x40346010, arg_0x40346198);
#line 83
}
#line 83
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
# 253 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline   uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Alarm$getAlarm(void)
#line 253
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 254
    {
      unsigned long __nesc_temp = 
#line 254
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$t0 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$dt;

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
inline static   /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(void){
#line 105
  unsigned long result;
#line 105

#line 105
  result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Alarm$getAlarm();
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
# 346 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
static inline   error_t RF230LayerP$RadioState$turnOff(void)
{
  if (RF230LayerP$cmd != RF230LayerP$CMD_NONE) {
    return EBUSY;
    }
  else {
#line 350
    if (RF230LayerP$state == RF230LayerP$STATE_SLEEP) {
      return EALREADY;
      }
    }
#line 353
  RF230LayerP$cmd = RF230LayerP$CMD_TURNOFF;
  RF230LayerP$Tasklet$schedule();

  return SUCCESS;
}

# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioState.nc"
inline static   error_t TrafficMonitorLayerP$SubState$turnOff(void){
#line 33
  unsigned char result;
#line 33

#line 33
  result = RF230LayerP$RadioState$turnOff();
#line 33

#line 33
  return result;
#line 33
}
#line 33
# 205 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
static inline   error_t TrafficMonitorLayerP$RadioState$turnOff(void)
{
  TrafficMonitorLayerP$radioCmd = TrafficMonitorLayerP$RADIO_CMD_TURNOFF;
  return TrafficMonitorLayerP$SubState$turnOff();
}

# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioState.nc"
inline static   error_t MessageBufferLayerP$RadioState$turnOff(void){
#line 33
  unsigned char result;
#line 33

#line 33
  result = TrafficMonitorLayerP$RadioState$turnOff();
#line 33

#line 33
  return result;
#line 33
}
#line 33
# 82 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static inline  error_t MessageBufferLayerP$SplitControl$stop(void)
{
  error_t error;

  MessageBufferLayerP$Tasklet$suspend();

  if (MessageBufferLayerP$state != MessageBufferLayerP$STATE_READY) {
    error = EBUSY;
    }
  else {
#line 91
    error = MessageBufferLayerP$RadioState$turnOff();
    }
  if (error == SUCCESS) {
    MessageBufferLayerP$state = MessageBufferLayerP$STATE_TURN_OFF;
    }
  MessageBufferLayerP$Tasklet$resume();

  return error;
}

# 109 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static  error_t NetControlM$AMControl$stop(void){
#line 109
  unsigned char result;
#line 109

#line 109
  result = MessageBufferLayerP$SplitControl$stop();
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

# 247 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static inline  error_t MessageBufferLayerP$SoftwareInit$init(void)
{
  uint8_t i;

  for (i = 0; i < MessageBufferLayerP$RECEIVE_QUEUE_SIZE; ++i) 
    MessageBufferLayerP$receiveQueue[i] = MessageBufferLayerP$receiveQueueData + i;

  return SUCCESS;
}

# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/UniqueLayerP.nc"
static inline  error_t UniqueLayerP$Init$init(void)
{
  UniqueLayerP$sequenceNumber = TOS_NODE_ID << 4;
  return SUCCESS;
}

# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodP.nc"
static inline  error_t NeighborhoodP$Init$init(void)
{
  uint8_t i;

  for (i = 0; i < 5; ++i) 
    NeighborhoodP$nodes[i] = AM_BROADCAST_ADDR;

  return SUCCESS;
}

# 161 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline   void HplAtm1281Timer2AsyncP$Compare$start(void)
#line 161
{
#line 161
  * (volatile uint8_t *)0x70 |= 1 << 1;
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Compare$start(void){
#line 56
  HplAtm1281Timer2AsyncP$Compare$start();
#line 56
}
#line 56
# 117 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline   void HplAtm1281Timer2AsyncP$TimerCtrl$setControlB(uint8_t x)
#line 117
{
  while (* (volatile uint8_t *)0xB6 & (1 << 0)) 
    ;
  * (volatile uint8_t *)0xB1 = ((Atm128_TCCR2B_t )x).flat;
}

# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerCtrl8.nc"
inline static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$TimerCtrl$setControlB(uint8_t arg_0x40673b18){
#line 62
  HplAtm1281Timer2AsyncP$TimerCtrl$setControlB(arg_0x40673b18);
#line 62
}
#line 62
# 111 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline   void HplAtm1281Timer2AsyncP$TimerCtrl$setControlA(uint8_t x)
#line 111
{
  while (* (volatile uint8_t *)0xB6 & (1 << 1)) 
    ;
  * (volatile uint8_t *)0xB0 = ((Atm128_TCCR2A_t )x).flat;
}

# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerCtrl8.nc"
inline static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$TimerCtrl$setControlA(uint8_t arg_0x40673670){
#line 61
  HplAtm1281Timer2AsyncP$TimerCtrl$setControlA(arg_0x40673670);
#line 61
}
#line 61
# 246 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline   void HplAtm1281Timer2AsyncP$TimerAsync$setTimer2Asynchronous(void)
#line 246
{
  * (volatile uint8_t *)0xB6 |= 1 << 5;
}

# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerAsync.nc"
inline static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$TimerAsync$setTimer2Asynchronous(void){
#line 57
  HplAtm1281Timer2AsyncP$TimerAsync$setTimer2Asynchronous();
#line 57
}
#line 57
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline  error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Init$init(void)
#line 78
{
  /* atomic removed: atomic calls only */
  {
    Atm128_TCCR2A_t x;
    Atm128_TCCR2B_t y;

    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$TimerAsync$setTimer2Asynchronous();
    x.flat = 0;
    x.bits.wgm21 = 1;
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$TimerCtrl$setControlA(x.flat);
    y.flat = 0;
    y.bits.cs = 3;
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$TimerCtrl$setControlB(y.flat);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Compare$set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$MAXT);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Compare$start();
  }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$setInterrupt();
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

# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t RF230LayerP$SpiResource$request(void){
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
# 204 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
static inline  error_t RF230LayerP$SoftwareInit$init(void)
{

  return RF230LayerP$SpiResource$request();
}

# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline  error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$Init$init(void)
#line 45
{
  memset(/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ, /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY, sizeof /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ);
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
  result = ecombine(result, /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$Init$init());
#line 51
  result = ecombine(result, RF230LayerP$SoftwareInit$init());
#line 51
  result = ecombine(result, RandomMlcgC$Init$init());
#line 51
  result = ecombine(result, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Init$init());
#line 51
  result = ecombine(result, NeighborhoodP$Init$init());
#line 51
  result = ecombine(result, UniqueLayerP$Init$init());
#line 51
  result = ecombine(result, MessageBufferLayerP$SoftwareInit$init());
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
  result = IEEE154PacketP$AMPacket$address();
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
# 372 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
static inline   error_t RF230LayerP$RadioState$turnOn(void)
{
  if (RF230LayerP$cmd != RF230LayerP$CMD_NONE || (RF230LayerP$state == RF230LayerP$STATE_SLEEP && !RF230LayerP$RadioAlarm$isFree())) {
    return EBUSY;
    }
  else {
#line 376
    if (RF230LayerP$state == RF230LayerP$STATE_RX_ON) {
      return EALREADY;
      }
    }
#line 379
  RF230LayerP$cmd = RF230LayerP$CMD_TURNON;
  RF230LayerP$Tasklet$schedule();

  return SUCCESS;
}

# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioState.nc"
inline static   error_t TrafficMonitorLayerP$SubState$turnOn(void){
#line 45
  unsigned char result;
#line 45

#line 45
  result = RF230LayerP$RadioState$turnOn();
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 217 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
static inline   error_t TrafficMonitorLayerP$RadioState$turnOn(void)
{
  TrafficMonitorLayerP$radioCmd = TrafficMonitorLayerP$RADIO_CMD_TURNON;
  return TrafficMonitorLayerP$SubState$turnOn();
}

# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioState.nc"
inline static   error_t MessageBufferLayerP$RadioState$turnOn(void){
#line 45
  unsigned char result;
#line 45

#line 45
  result = TrafficMonitorLayerP$RadioState$turnOn();
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static inline  error_t MessageBufferLayerP$SplitControl$start(void)
{
  error_t error;

  MessageBufferLayerP$Tasklet$suspend();

  if (MessageBufferLayerP$state != MessageBufferLayerP$STATE_READY) {
    error = EBUSY;
    }
  else {
#line 72
    error = MessageBufferLayerP$RadioState$turnOn();
    }
  if (error == SUCCESS) {
    MessageBufferLayerP$state = MessageBufferLayerP$STATE_TURN_ON;
    }
  MessageBufferLayerP$Tasklet$resume();

  return error;
}

# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static  error_t NetControlM$AMControl$start(void){
#line 83
  unsigned char result;
#line 83

#line 83
  result = MessageBufferLayerP$SplitControl$start();
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
# 199 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline   mcu_power_t HplAtm1281Timer2AsyncP$McuPowerOverride$lowestState(void)
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
inline static   mcu_power_t McuSleepC$McuPowerOverride$lowestState(void){
#line 54
  unsigned char result;
#line 54

#line 54
  result = HplAtm1281Timer2AsyncP$McuPowerOverride$lowestState();
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
# 98 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline   uint8_t HplAtm128SpiP$SPI$read(void)
#line 98
{
#line 98
  return * (volatile uint8_t *)(0X2E + 0x20);
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
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline   void HplAtm128SpiP$SPI$write(uint8_t d)
#line 99
{
#line 99
  * (volatile uint8_t *)(0X2E + 0x20) = d;
}

# 86 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static   void Atm128SpiP$Spi$write(uint8_t arg_0x40945e00){
#line 86
  HplAtm128SpiP$SPI$write(arg_0x40945e00);
#line 86
}
#line 86










inline static   void Atm128SpiP$Spi$enableInterrupt(bool arg_0x40944898){
#line 96
  HplAtm128SpiP$SPI$enableInterrupt(arg_0x40944898);
#line 96
}
#line 96
# 162 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline error_t Atm128SpiP$sendNextPart(void)
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
    myLen = Atm128SpiP$len;
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

#line 265
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
inline static   void HplAtm128SpiP$SPI$dataReady(uint8_t arg_0x40944350){
#line 92
  Atm128SpiP$Spi$dataReady(arg_0x40944350);
#line 92
}
#line 92
# 206 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
__attribute((interrupt))   void __vector_17(void)
#line 206
{
  HplAtm1281Timer1P$CompareA$fired();
}

# 101 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TaskletC.nc"
static   void TaskletC$Tasklet$schedule(void)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (TaskletC$state != 0) 
        {
          TaskletC$state |= 0x80;
          {
#line 108
            __nesc_atomic_end(__nesc_atomic); 
#line 108
            return;
          }
        }
      TaskletC$state = 1;
    }
#line 112
    __nesc_atomic_end(__nesc_atomic); }

  TaskletC$doit();
}

#line 63
static void TaskletC$doit(void)
{
  for (; ; ) 
    {
      TaskletC$Tasklet$run();

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          if (TaskletC$state == 1) 
            {
              TaskletC$state = 0;
              {
#line 74
                __nesc_atomic_end(__nesc_atomic); 
#line 74
                return;
              }
            }
          for (; 0; ) ;
          TaskletC$state = 1;
        }
#line 79
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 252 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
static bool RF230LayerP$isSpiAcquired(void)
{
  if (RF230LayerP$SpiResource$isOwner()) {
    return TRUE;
    }
  if (RF230LayerP$SpiResource$immediateRequest() == SUCCESS) 
    {
      RF230LayerP$SELN$makeOutput();
      RF230LayerP$SELN$set();

      return TRUE;
    }

  RF230LayerP$SpiResource$request();
  return FALSE;
}

# 105 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static void Atm128SpiP$startSpi(void)
#line 105
{
  Atm128SpiP$Spi$enableSpi(FALSE);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
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
#line 115
    __nesc_atomic_end(__nesc_atomic); }
  Atm128SpiP$McuPowerState$update();
}

# 130 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static   void HplAtm128SpiP$SPI$enableSpi(bool enabled)
#line 130
{
  if (enabled) {
      * (volatile uint8_t *)(0x2C + 0x20) |= 1 << 6;
      HplAtm128SpiP$Mcu$update();
    }
  else {
      * (volatile uint8_t *)(0x2C + 0x20) &= ~(1 << 6);
      HplAtm128SpiP$Mcu$update();
    }
}

#line 115
static   void HplAtm128SpiP$SPI$enableInterrupt(bool enabled)
#line 115
{
  if (enabled) {
      * (volatile uint8_t *)(0x2C + 0x20) |= 1 << 7;
      HplAtm128SpiP$Mcu$update();
    }
  else {
      * (volatile uint8_t *)(0x2C + 0x20) &= ~(1 << 7);
      HplAtm128SpiP$Mcu$update();
    }
}

# 313 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static   error_t Atm128SpiP$Resource$request(uint8_t id)
#line 313
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 314
    {
      if (!Atm128SpiP$ArbiterInfo$inUse()) {
          Atm128SpiP$startSpi();
        }
    }
#line 318
    __nesc_atomic_end(__nesc_atomic); }
  return Atm128SpiP$ResourceArbiter$request(id);
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

# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static   /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$to_size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$Counter$get(void)
{
  /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$to_size_type rv = 0;

#line 72
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$upper_count_type high = /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$m_upper;
      /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$from_size_type low = /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$CounterFrom$get();

#line 76
      if (/*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$CounterFrom$isOverflowPending()) 
        {






          high++;
          low = /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$CounterFrom$get();
        }
      {
        /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$to_size_type high_to = high;
        /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$to_size_type low_to = low >> /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$LOW_SHIFT_RIGHT;

#line 90
        rv = (high_to << /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$HIGH_SHIFT_LEFT) | low_to;
      }
    }
#line 92
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

# 157 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static   void RF230PacketP$PacketTimeStampRadio$set(message_t *msg, uint32_t value)
{
  RF230PacketP$getMeta(msg)->flags |= RF230PACKET_TIMESTAMP;
  RF230PacketP$getMeta(msg)->timestamp = value;
}

# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static   void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$Alarm$startAt(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$timer_size t0, /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$timer_size dt)
#line 74
{






  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$timer_size now;
#line 83
      /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$timer_size elapsed;
#line 83
      /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$timer_size expires;

      ;


      now = /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$get();
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



      /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$set(expires - 1);
      /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$reset();
      /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$start();
    }
#line 107
    __nesc_atomic_end(__nesc_atomic); }
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
static   void TrafficMonitorLayerP$SubSend$sendDone(error_t error)
{
  if (error == SUCCESS) {
    TrafficMonitorLayerP$txAverage += TrafficMonitorLayerP$TrafficMonitorConfig$getChannelTime(TrafficMonitorLayerP$txMsg);
    }
  TrafficMonitorLayerP$RadioSend$sendDone(error);
}

# 195 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static   uint16_t RF230ActiveMessageP$TrafficMonitorConfig$getChannelTime(message_t *msg)
{







  uint8_t len = RF230ActiveMessageP$IEEE154Packet$getLength(msg);

#line 205
  return RF230ActiveMessageP$IEEE154Packet$getAckRequired(msg) ? len + 6 + 16 + 11 + 10 : len + 6 + 10;
}

#line 124
static   void RF230ActiveMessageP$SoftwareAckConfig$setAckReceived(message_t *msg, bool acked)
{
  if (acked) {
    RF230ActiveMessageP$getMeta(msg)->flags |= RF230PACKET_WAS_ACKED;
    }
  else {
#line 129
    RF230ActiveMessageP$getMeta(msg)->flags &= ~RF230PACKET_WAS_ACKED;
    }
}

# 225 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static   bool IEEE154PacketP$IEEE154Packet$requiresAckReply(message_t *msg)
{
  return IEEE154PacketP$IEEE154Packet$getAckRequired(msg)
   && IEEE154PacketP$IEEE154Packet$isDataFrame(msg)
   && IEEE154PacketP$IEEE154Packet$getDestAddr(msg) == IEEE154PacketP$ActiveMessageAddress$amAddress();
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

# 389 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
static   error_t RF230LayerP$RadioSend$send(message_t *msg)
{
  uint16_t time;
  uint8_t length;
  uint8_t *data;
  uint8_t header;
  uint32_t time32;
  void *timesync;

  if (((RF230LayerP$cmd != RF230LayerP$CMD_NONE || RF230LayerP$state != RF230LayerP$STATE_RX_ON) || !RF230LayerP$isSpiAcquired()) || RF230LayerP$radioIrq) {
    return EBUSY;
    }
  length = (RF230LayerP$PacketTransmitPower$isSet(msg) ? 
  RF230LayerP$PacketTransmitPower$get(msg) : 0) & RF230_TX_PWR_MASK;

  if (length != RF230LayerP$txPower) 
    {
      RF230LayerP$txPower = length;
      RF230LayerP$writeRegister(RF230_PHY_TX_PWR, RF230_TX_AUTO_CRC_ON | RF230LayerP$txPower);
    }


  if (
#line 410
  RF230LayerP$RF230Config$requiresRssiCca(msg)
   && (RF230LayerP$readRegister(RF230_PHY_RSSI) & RF230_RSSI_MASK) > (RF230LayerP$rssiClear + RF230LayerP$rssiBusy) >> 3) {
    return EBUSY;
    }
  RF230LayerP$writeRegister(RF230_TRX_STATE, RF230_PLL_ON);


  time32 = RF230LayerP$LocalTime$get();
  timesync = RF230LayerP$PacketTimeSyncOffset$isSet(msg) ? msg->data + RF230LayerP$PacketTimeSyncOffset$get(msg) : 0;


  if ((RF230LayerP$readRegister(RF230_TRX_STATUS) & RF230_TRX_STATUS_MASK) != RF230_PLL_ON) 
    {
      for (; 0; ) ;

      RF230LayerP$state = RF230LayerP$STATE_PLL_ON_2_RX_ON;
      return EBUSY;
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      RF230LayerP$SLP_TR$set();
      time = RF230LayerP$RadioAlarm$getNow() + RF230LayerP$TX_SFD_DELAY;
    }
#line 433
    __nesc_atomic_end(__nesc_atomic); }
  RF230LayerP$SLP_TR$clr();

  for (; 0; ) ;

  RF230LayerP$SELN$clr();
  RF230LayerP$HplRF230$spiSplitWrite(RF230_CMD_FRAME_WRITE);

  length = RF230LayerP$RF230Config$getLength(msg);
  data = RF230LayerP$RF230Config$getPayload(msg);


  RF230LayerP$HplRF230$spiSplitReadWrite(length);


  length -= 2;

  header = RF230LayerP$RF230Config$getHeaderLength();
  if (header > length) {
    header = length;
    }
  length -= header;


  do {
      RF230LayerP$HplRF230$spiSplitReadWrite(* data++);
    }
  while (--header != 0);

  time32 += (int16_t )time - (int16_t )time32;

  if (timesync != 0) {
    __nesc_hton_int32((unsigned char *)&* (timesync_relative_t *)timesync, * (timesync_absolute_t *)timesync - time32);
    }
  do {
      RF230LayerP$HplRF230$spiSplitReadWrite(* data++);
    }
  while (--length != 0);


  RF230LayerP$HplRF230$spiSplitRead();
  RF230LayerP$SELN$set();
#line 489
  RF230LayerP$writeRegister(RF230_TRX_STATE, RF230_RX_ON);
#line 504
  if (timesync != 0) {
    * (timesync_absolute_t *)timesync = __nesc_ntoh_int32((unsigned char *)&* (timesync_relative_t *)timesync) + time32;
    }
  RF230LayerP$PacketTimeStamp$set(msg, time32);


  RF230LayerP$state = RF230LayerP$STATE_BUSY_TX_2_RX_ON;
  RF230LayerP$cmd = RF230LayerP$CMD_TRANSMIT;

  return SUCCESS;
}

# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static   void RandomCollisionLayerP$RadioAlarm$wait(uint16_t arg_0x403eab60){
#line 38
  RadioAlarmP$RadioAlarm$wait(1U, arg_0x403eab60);
#line 38
}
#line 38
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodP.nc"
static  uint8_t  NeighborhoodP$Neighborhood$insertNode(am_addr_t node)
{
  uint8_t i;
  uint8_t maxAge;

  if (NeighborhoodP$nodes[NeighborhoodP$last] == node) 
    {
      if (NeighborhoodP$ages[NeighborhoodP$last] == NeighborhoodP$time) {
        return NeighborhoodP$last;
        }
      NeighborhoodP$ages[NeighborhoodP$last] = ++NeighborhoodP$time;
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

          if (NeighborhoodP$nodes[i] == node) 
            {
              NeighborhoodP$last = i;
              if (NeighborhoodP$ages[i] == NeighborhoodP$time) {
                return i;
                }
              NeighborhoodP$ages[i] = ++NeighborhoodP$time;
              maxAge = 0x80;
              break;
            }

          age = NeighborhoodP$time - NeighborhoodP$ages[i];
          if (age > maxAge) 
            {
              maxAge = age;
              oldest = i;
            }
        }

      if (i == 5) 
        {
          NeighborhoodP$Neighborhood$evicted(oldest);

          NeighborhoodP$last = oldest;
          NeighborhoodP$nodes[oldest] = node;
          NeighborhoodP$ages[oldest] = ++NeighborhoodP$time;
          NeighborhoodP$flags[oldest] = 0;
        }
    }

  if ((NeighborhoodP$time & 0x7F) == 0x7F && maxAge >= 0x7F) 
    {
      for (i = 0; i < 5; ++i) 
        {
          if ((NeighborhoodP$ages[i] | 0x7F) != NeighborhoodP$time) {
            NeighborhoodP$ages[i] = NeighborhoodP$time & 0x80;
            }
        }
    }
  return NeighborhoodP$last;
}

# 322 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static   error_t Atm128SpiP$Resource$release(uint8_t id)
#line 322
{
  error_t error = Atm128SpiP$ResourceArbiter$release(id);

#line 324
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 324
    {
      if (!Atm128SpiP$ArbiterInfo$inUse()) {
          Atm128SpiP$stopSpi();
        }
    }
#line 328
    __nesc_atomic_end(__nesc_atomic); }
  return error;
}

# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RandomCollisionLayerP.nc"
static uint16_t RandomCollisionLayerP$getBackoff(uint16_t maxBackoff)
{
  uint16_t a;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      a = RandomCollisionLayerP$nextRandom;
      RandomCollisionLayerP$nextRandom += 273;
    }
#line 81
    __nesc_atomic_end(__nesc_atomic); }
  RandomCollisionLayerP$calcNextRandom$postTask();

  return a % maxBackoff + RandomCollisionLayerP$Config$getMinimumBackoff();
}

# 210 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
__attribute((interrupt))   void __vector_18(void)
#line 210
{
  HplAtm1281Timer1P$CompareB$fired();
}

__attribute((interrupt))   void __vector_19(void)
#line 214
{
  HplAtm1281Timer1P$CompareC$fired();
}

__attribute((interrupt))   void __vector_16(void)
#line 218
{
  HplAtm1281Timer1P$Capture$captured(HplAtm1281Timer1P$Timer$get());
}

__attribute((interrupt))   void __vector_20(void)
#line 222
{
  HplAtm1281Timer1P$Timer$overflow();
}

# 222 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
__attribute((signal))   void __vector_13(void)
#line 222
{
  HplAtm1281Timer2AsyncP$stabiliseTimer2();


  HplAtm1281Timer2AsyncP$Compare$fired();
}

# 117 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$setInterrupt(void)
#line 117
{
  bool fired = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {



      uint8_t interrupt_in = 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Compare$get() - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Timer$get();
      uint8_t newOcr2A;
      uint8_t tifr2 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$TimerCtrl$getInterruptFlag();

#line 128
      ;
      if ((interrupt_in != 0 && interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$MINDT) || tifr2 & (1 << 1)) {
          if (interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$MINDT) {
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

      if (!/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$set) {
          newOcr2A = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$MAXT;
          ;
        }
      else 
        {
          uint32_t now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Counter$get();

#line 147
          ;

          if ((uint32_t )(now - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$t0) >= /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$dt) 
            {
              /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$set = FALSE;
              fired = TRUE;
              newOcr2A = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$MAXT;
            }
          else 
            {


              uint32_t alarm_in = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$t0 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$dt - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$base;

              if (alarm_in > /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$MAXT) {
                newOcr2A = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$MAXT;
                }
              else {
#line 163
                if ((uint8_t )alarm_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$MINDT) {
                  newOcr2A = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$MINDT;
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
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$setOcr2A(newOcr2A);
    }
#line 171
    __nesc_atomic_end(__nesc_atomic); }
  if (fired) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Alarm$fired();
    }
}

#line 188
static   uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Counter$get(void)
#line 188
{
  uint32_t now;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {


      uint8_t now8 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Timer$get();

      if (((Atm128_TIFR2_t )/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$TimerCtrl$getInterruptFlag()).bits.ocfa) {


        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$base + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Compare$get() + 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Timer$get();
        }
      else {

        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$base + now8;
        }
    }
#line 206
    __nesc_atomic_end(__nesc_atomic); }
#line 206
  return now;
}

# 230 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
__attribute((signal))   void __vector_15(void)
#line 230
{
  HplAtm1281Timer2AsyncP$stabiliseTimer2();

  HplAtm1281Timer2AsyncP$Timer$overflow();
}

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
static  void SchedulerBasicP$TaskBasic$runTask(uint8_t arg_0x402f61b0){
#line 64
  switch (arg_0x402f61b0) {
#line 64
    case TestM$stop:
#line 64
      TestM$stop$runTask();
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
    case MessageBufferLayerP$stateDoneTask:
#line 64
      MessageBufferLayerP$stateDoneTask$runTask();
#line 64
      break;
#line 64
    case MessageBufferLayerP$sendTask:
#line 64
      MessageBufferLayerP$sendTask$runTask();
#line 64
      break;
#line 64
    case MessageBufferLayerP$deliverTask:
#line 64
      MessageBufferLayerP$deliverTask$runTask();
#line 64
      break;
#line 64
    case TrafficMonitorLayerP$startStopTimer:
#line 64
      TrafficMonitorLayerP$startStopTimer$runTask();
#line 64
      break;
#line 64
    case RandomCollisionLayerP$calcNextRandom:
#line 64
      RandomCollisionLayerP$calcNextRandom$runTask();
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
      SchedulerBasicP$TaskBasic$default$runTask(arg_0x402f61b0);
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

# 271 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/at45db/ConfigStorageP.nc"
static  error_t ConfigStorageP$ConfigStorage$commit(uint8_t id)
#line 271
{
  unsigned long __nesc_temp57;
  unsigned char *__nesc_temp56;
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
  (__nesc_temp56 = (unsigned char *)&ConfigStorageP$low[id].version, __nesc_hton_uint32(__nesc_temp56, (__nesc_temp57 = __nesc_ntoh_uint32(__nesc_temp56)) + 1), __nesc_temp57);
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

# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
static  error_t ActiveMessageLayerC$AMSend$send(am_id_t id, am_addr_t addr, message_t *msg, uint8_t len)
{
  error_t error;

  error = ActiveMessageLayerC$Config$checkPacket(msg);
  if (error != SUCCESS) {
    return error;
    }
  ActiveMessageLayerC$AMPacket$setSource(msg, ActiveMessageLayerC$AMPacket$address());
  ActiveMessageLayerC$AMPacket$setGroup(msg, ActiveMessageLayerC$AMPacket$localGroup());
  ActiveMessageLayerC$AMPacket$setType(msg, id);
  ActiveMessageLayerC$AMPacket$setDestination(msg, addr);

  return ActiveMessageLayerC$SubSend$send(msg, len);
}

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
  unsigned char *__nesc_temp47;
  unsigned char *__nesc_temp46;
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
          (__nesc_temp46 = (unsigned char *)&*size_p, __nesc_hton_uint16(__nesc_temp46, __nesc_ntoh_uint16(__nesc_temp46) + DymoPacketM$block_size(payload)));
        }
    }
  else 
#line 80
    {
      __nesc_hton_uint16((unsigned char *)&*size_p, DymoPacketM$block_size(payload));
    }



  (__nesc_temp47 = (unsigned char *)&*size_p, __nesc_hton_uint16(__nesc_temp47, __nesc_ntoh_uint16(__nesc_temp47) + 5));
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
  unsigned char *__nesc_temp54;
#line 230
  uint8_t semantics = __nesc_ntoh_uint8((unsigned char *)&*block);
  nx_uint8_t *size_p = block + 1;

#line 232
  block += DymoPacketM$block_size(block);
  (__nesc_temp54 = (unsigned char *)&*size_p, __nesc_hton_uint8(__nesc_temp54, __nesc_ntoh_uint8(__nesc_temp54) + 1));
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

#line 38
static  void *MHPacketM$Packet$getPayload(message_t *msg, uint8_t len)
#line 38
{
  nx_uint8_t *p = MHPacketM$SubPacket$getPayload(msg, len);

#line 40
  return (void *)(p + sizeof(mhpacket_header_t ));
}





static  uint8_t MHPacketM$Packet$payloadLength(message_t *amsg)
#line 47
{
  return __nesc_ntoh_uint8((unsigned char *)&((mhpacket_header_t *)MHPacketM$SubPacket$getPayload(amsg, MHPacketM$SubPacket$maxPayloadLength()))->len);
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

# 88 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TaskletC.nc"
static  void TaskletC$Tasklet$resume(void)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (--TaskletC$state != 0x80) {
        {
#line 93
          __nesc_atomic_end(__nesc_atomic); 
#line 93
          return;
        }
        }
#line 95
      TaskletC$state = 1;
    }
#line 96
    __nesc_atomic_end(__nesc_atomic); }

  TaskletC$doit();
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

# 51 "../../../tos/lib/net/tymo/mh/MHPacketM.nc"
static  void MHPacketM$Packet$setPayloadLength(message_t *amsg, uint8_t len)
#line 51
{
  __nesc_hton_uint8((unsigned char *)&((mhpacket_header_t *)MHPacketM$SubPacket$getPayload(amsg, MHPacketM$SubPacket$maxPayloadLength()))->len, len);
  MHPacketM$SubPacket$setPayloadLength(amsg, len + sizeof(mhpacket_header_t ));
}

# 239 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Alarm$startAt(uint32_t nt0, uint32_t ndt)
#line 239
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$set = TRUE;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$t0 = nt0;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$dt = ndt;
    }
#line 245
    __nesc_atomic_end(__nesc_atomic); }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$setInterrupt();
}

# 102 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
__attribute((signal))   void __vector_24(void)
#line 102
{
  HplAtm128SpiP$SPI$dataReady(HplAtm128SpiP$SPI$read());
}

# 127 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static   uint8_t Atm128SpiP$SpiByte$write(uint8_t tx)
#line 127
{
  Atm128SpiP$Spi$enableSpi(TRUE);
  Atm128SpiP$McuPowerState$update();
  Atm128SpiP$Spi$write(tx);
  while (!(* (volatile uint8_t *)(0x2D + 0x20) & 0x80)) ;
  return Atm128SpiP$Spi$read();
}

