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
#line 264
static __inline uint16_t __nesc_ntoh_uint16(const void * source)  ;




static __inline uint16_t __nesc_hton_uint16(void * target, uint16_t value)  ;






static __inline uint16_t __nesc_ntoh_leuint16(const void * source)  ;




static __inline uint16_t __nesc_hton_leuint16(void * target, uint16_t value)  ;
#line 294
static __inline uint32_t __nesc_ntoh_uint32(const void * source)  ;






static __inline uint32_t __nesc_hton_uint32(void * target, uint32_t value)  ;
#line 326
static __inline int32_t __nesc_ntoh_int32(const void * source)  ;
#line 326
static __inline int32_t __nesc_hton_int32(void * target, int32_t value)  ;
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
# 105 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/atm128hardware.h"
static __inline void __nesc_enable_interrupt()  ;



static __inline void __nesc_disable_interrupt()  ;




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
# 16 "Dozer.h"
enum __nesc_unnamed4310 {

  ROOT_MOTE_ID = 0x00, 

  DEFAULT_BEACON_INTERVAL = 30720U, 

  PARENTS_UPDATE_INTERVAL = 921600U, 

  DEFAULT_SEED_VALUE = 0, 

  AM_DOZER_MSG = 0x32, 
  AM_DATA_MSG = 0x33, 

  DOZER_BEACON = 0x96, 
  DOZER_CONNREQ = 0x98, 
  DOZER_CONNREP = 0x97, 
  DOZER_CONNACK = 0x99, 

  DATA_MSG = 0xA0, 
  DATA_ACK = 0xA1, 

  INVALID_VALUE = 0xFF, 
  MAX_POTENTIAL_PARENTS = 4, 
  MAX_CHILDREN = 5, 
  MAX_RETRIES = MAX_CHILDREN, 

  TDMA_SLOT_LEN = 50, 
  ACTIVATION_WAIT_PERIOD = 5, 
  CHILD_CONNECTION_PERIOD = TDMA_SLOT_LEN, 
  CLOCK_DRIFT = 100, 
  CLOCK_DRIFT_COMPENSATION = DEFAULT_BEACON_INTERVAL / 1024 * CLOCK_DRIFT / 1000, 
  GUARD_TIME = 1, 

  NBR_LISTEN_PERIOD = 61440U, 
  NBR_UPDATION_PERIOD = 3686400U, 
  NBR_TABLE_SIZE = 6, 
  HC = 7, 

  DATA_QUEUE_SIZE = 25, 
  MAX_CONSECUTIVE_MISSED_ACKS = 5
};


enum __nesc_unnamed4311 {
  BEACON_LISTEN = 0, 
  TSLOT_LISTEN, 
  TSLOT_LISTEN_STOP, 
  TSLOT_DATA_SEND, 
  TSLOT_DATA_SEND_STOP
};






#line 68
typedef struct dozer_beacon {
  uint8_t children;
  uint8_t hopcount;
  uint16_t seed;
} dozer_beacon_t;




#line 75
typedef struct dozer_conn_req {
  uint16_t parent_id;
} dozer_conn_req_t;




#line 80
typedef struct dozer_conn_rep {
  uint8_t tdma_slot;
} dozer_conn_rep_t;







#line 84
typedef struct dozer_parent {
  bool flag;
  uint16_t parent_id;
  uint16_t timestamp;
  uint8_t retries;
  dozer_beacon_t beacon;
} dozer_parent_t;




#line 92
typedef struct dozer_child {
  uint16_t child_id;
} 
dozer_child_t;





#line 97
typedef union dozer_data_t {
  dozer_beacon_t beacon;
  dozer_conn_req_t req;
  dozer_conn_rep_t rep;
} dozer_data_t;





#line 104
typedef struct dozer_msg {
  uint8_t type;
  dozer_data_t dozer_data;
} dozer_msg_t;
# 34 "qsort.h"
struct SortEntry {
  uint16_t id;
  uint8_t receiveEst;
};

static int cmp(const void *arg_0x40492988, const void *arg_0x40492b20);
static char *med3(char *arg_0x40491010, char *arg_0x40491188, char *arg_0x40491300);
static void swapfunc(char *arg_0x404917e0, char *arg_0x40491958, int arg_0x40491ab0);
#line 64
#line 63
static void 
swapfunc(char *a, char *b, int n);








static char *
med3(char *a, char *b, char *c);







static 
#line 81
void 
quick_sort(void *a, size_t n, size_t es);
#line 172
static int cmp(const void *x, const void *y);
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

enum __nesc_unnamed4312 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4313 {
  TOS_AM_GROUP = 0x00, 
  TOS_AM_ADDRESS = 1
};
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4314 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4315 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4316 {
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
enum __nesc_unnamed4318 {





  RF230_TRX_CTRL_0_VALUE = 0, 





  RF230_CCA_MODE_VALUE = RF230_CCA_MODE_3, 





  RF230_CCA_THRES_VALUE = 0xC7
};




typedef TOne TRF230;
# 28 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TimeSyncMessage.h"
typedef nx_int32_t timesync_relative_t;


typedef uint32_t timesync_absolute_t;
# 251 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/util/crc16.h" 3
#line 250
static __inline uint16_t 
_crc_ccitt_update(uint16_t __crc, uint8_t __data);
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.h"
enum __nesc_unnamed4319 {
  ATM128_SPI_CLK_DIVIDE_4 = 0, 
  ATM128_SPI_CLK_DIVIDE_16 = 1, 
  ATM128_SPI_CLK_DIVIDE_64 = 2, 
  ATM128_SPI_CLK_DIVIDE_128 = 3
};
#line 49
#line 40
typedef struct __nesc_unnamed4320 {
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
typedef union __nesc_unnamed4321 {
  uint8_t flat;
  Atm128SPIControl_s bits;
} Atm128SPIControl_t;

typedef Atm128SPIControl_t Atm128_SPCR_t;








#line 58
typedef struct __nesc_unnamed4322 {
  uint8_t spif : 1;
  uint8_t wcol : 1;
  uint8_t rsvd : 5;
  uint8_t spi2x : 1;
} 
Atm128SPIStatus_s;



#line 65
typedef union __nesc_unnamed4323 {
  uint8_t flat;
  Atm128SPIStatus_s bits;
} Atm128SPIStatus_t;

typedef Atm128SPIStatus_t Atm128_SPSR_t;

typedef uint8_t Atm128_SPDR_t;
# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
# 13 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/sensorboard.h"
enum __nesc_unnamed4324 {
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


enum __nesc_unnamed4325 {

  RISING_EDGE = 0x01, 
  FALLING_EDGE = 0x02, 
  EVENT = 0x04, 
  EEPROM_TOTALIZER = 0x08, 


  RESET_ZERO_AFTER_READ = 0x30, 
  DIG_OUTPUT = 0x40
};

enum __nesc_unnamed4326 {
  InputChannel = 0, 
  OutputChannel = 1
};

enum __nesc_unnamed4327 {
  RisingEdge = 0, 
  FallingEdge = 1, 
  Edge = 2
};


enum __nesc_unnamed4328 {
  NO_EXITATION = 0, 
  ADCREF = 1, 
  THREE_VOLT = 2, 
  FIVE_VOLT = 3, 
  ALL_EXITATION = 4, 
  NO_ADCREF = 5, 
  NO_THREE_VOLT = 6, 
  NO_FIVE_VOLT = 7
};

enum __nesc_unnamed4329 {
  POWER_SAVING_MODE = 0, 
  NO_POWER_SAVING_MODE = 1
};

enum __nesc_unnamed4330 {
  FAST_COVERSION_MODE = 0, 
  SLOW_COVERSION_MODE = 1
};








enum __nesc_unnamed4331 {
  ATTENTION_PACKET = 9
};

enum __nesc_unnamed4332 {
  ANALOG = 0, 
  BATTERY = 1, 
  TEMPERATURE = 2, 
  HUMIDITY = 3, 
  DIGITAL = 4, 
  COUNTER = 5
};

enum __nesc_unnamed4333 {
  PENDING, 
  NOT_PENDING
};

enum __nesc_unnamed4334 {
  MUX_CHANNEL_SEVEN = 0xC0, 
  MUX_CHANNEL_EIGHT = 0x30, 
  MUX_CHANNEL_NINE = 0x0C, 
  MUX_CHANNEL_TEN = 0x03
};

enum __nesc_unnamed4335 {
  LOCK, 
  UNLOCK
};

enum __nesc_unnamed4336 {
  SAMPLE_RECORD_FREE = -1, 
  SAMPLE_ONCE = -2
};

enum __nesc_unnamed4337 {
  NORMALY_OPEN = 6, 
  NORMALY_CLOSED = 7, 
  SET_HIGH, 
  SET_LOW, 
  SET_TOGGLE, 
  SET_CLOSE, 
  SET_OPEN
};

enum __nesc_unnamed4338 {
  TOS_DIGITAL_I2C_ADDR = 0x3F, 
  TOS_IBADC_I2C_ADDR = 0x4A, 
  TOS_SWITCH_I2C_ADDR = 0x4B
};
# 29 "sensorboardApp.h"
#line 22
typedef struct SensedData {
  uint8_t type;
  uint8_t more;
  uint8_t sensor_id;
  uint8_t crop_id;
  uint16_t plot_id;
  uint16_t value;
} __attribute((packed))  SensedData;






#line 33
typedef struct DataAck {
  uint8_t type;
  uint8_t more;
} __attribute((packed))  DataAck;







#line 39
typedef struct OneShotData {
  uint8_t type;
  uint8_t crop_id;
  uint16_t plot_id;
  uint16_t value[11];
} __attribute((packed))  OneShotData;






#line 47
typedef struct DissmnCtrlMsg {
  uint8_t type;
  uint16_t bitmap;
  uint16_t period[11];
} __attribute((packed))  DissmnCtrlMsg;
# 17 "sensors.h"
enum __nesc_unnamed4339 {
  BATTERY_SAMPLING_TIME = 0U, 
  TEMP_SAMPLING_TIME = 1000U, 
  HUMID_SAMPLING_TIME = 1000U, 
  RAIN_SAMPLING_TIME = 0, 
  SMOIST_SAMPLING_TIME = 0, 
  STEMP_SAMPLING_TIME = 0, 
  WSPEED_SAMPLING_TIME = 0, 
  WDIR_SAMPLING_TIME = 0U, 
  LWET_SAMPLING_TIME = 0U, 
  SOLAR_SAMPLING_TIME = 0
};



enum __nesc_unnamed4340 {
  DEFAULT_SAMPLING_TIME = 'd', 
  CHANGE_SAMPLING_TIME = 'c'
};
# 9 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15.h"
enum __nesc_unnamed4341 {
  SHT15_TEMPERATURE_BITS = 14, 
  SHT15_HUMIDITY_BITS = 12
};

enum __nesc_unnamed4342 {
  SHT15_STATUS_LOW_RES_BIT = 1 << 0, 
  SHT15_STATUS_NO_RELOAD_BIT = 1 << 1, 
  SHT15_STATUS_HEATER_ON_BIT = 1 << 2, 
  SHT15_STATUS_LOW_BATTERY_BIT = 1 << 6
};
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/types/I2C.h"
typedef struct __nesc_unnamed4343 {
} 
#line 40
TI2CExtdAddr;
typedef struct __nesc_unnamed4344 {
} 
#line 41
TI2CBasicAddr;

typedef uint8_t i2c_flags_t;

enum __nesc_unnamed4345 {
  I2C_START = 0x01, 
  I2C_STOP = 0x02, 
  I2C_ACK_END = 0x04
};
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2C.h"
enum __nesc_unnamed4346 {
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
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/Atm128Uart.h"
typedef uint8_t Atm128_UDR0_t;
typedef uint8_t Atm128_UDR1_t;
#line 48
#line 36
typedef union __nesc_unnamed4347 {
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
typedef union __nesc_unnamed4348 {
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

enum __nesc_unnamed4349 {
  ATM128_UART_DATA_SIZE_5_BITS = 0, 
  ATM128_UART_DATA_SIZE_6_BITS = 1, 
  ATM128_UART_DATA_SIZE_7_BITS = 2, 
  ATM128_UART_DATA_SIZE_8_BITS = 3
};
#line 89
#line 79
typedef union __nesc_unnamed4350 {
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





enum __nesc_unnamed4351 {
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
typedef TMilli TreeP$LocalTime$precision_tag;
typedef TMilli TreeP$ConnReqListenTimer$precision_tag;
typedef TMilli TreeP$BeaconWaitTimer$precision_tag;
typedef TMilli TreeP$ConnRepWaitTimer$precision_tag;
typedef uint16_t TreeP$SeedInit$parameter;
typedef TMilli TreeP$BeaconTimer$precision_tag;
typedef TMilli TreeP$NeighbourUpdateStopTimer$precision_tag;
typedef TMilli TreeP$NeighbourUpdateTimer$precision_tag;
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
enum HilTimerMilliC$__nesc_unnamed4352 {
  HilTimerMilliC$TIMER_COUNT = 18U
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
enum /*HplRF230C.AlarmC*/AlarmOne16C$0$__nesc_unnamed4353 {
  AlarmOne16C$0$COMPARE_ID = 0U
};
typedef TMicro BusyWaitMicroC$BusyWait$precision_tag;
typedef uint16_t BusyWaitMicroC$BusyWait$size_type;
enum AMQueueP$__nesc_unnamed4354 {
  AMQueueP$NUM_CLIENTS = 2U
};
typedef TMilli SchedulerP$PPBListenTimer3$precision_tag;
typedef TMilli SchedulerP$TDMAScheduleTimer$precision_tag;
typedef TMilli SchedulerP$LocalTime$precision_tag;
typedef TMilli SchedulerP$TDMASlotTimer$precision_tag;
typedef TMilli SchedulerP$PPBListenTimer1$precision_tag;
typedef uint16_t SchedulerP$SeedInit$parameter;
typedef TMilli SchedulerP$PPBListenTimer2$precision_tag;
typedef TMilli SchedulerP$PPBListenTimer0$precision_tag;
typedef message_t *DataManagerP$DataQueue$t;
typedef message_t DataManagerP$DataMessagePool$t;
typedef uint16_t SamplerM$Hum$val_t;
typedef TMilli SamplerM$SamplerTimer$precision_tag;
typedef uint16_t SamplerM$Temp$val_t;
typedef uint16_t /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Humidity$val_t;
typedef uint16_t /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Temperature$val_t;
typedef TMilli /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$Timer$precision_tag;
typedef TMilli HplSensirionSht15P$Timer$precision_tag;
enum /*SamplerC.TempHumC*/SensirionSht15C$0$__nesc_unnamed4355 {
  SensirionSht15C$0$TEMP_KEY = 0U
};
enum /*SamplerC.TempHumC*/SensirionSht15C$0$__nesc_unnamed4356 {
  SensirionSht15C$0$HUM_KEY = 1U
};
typedef TI2CBasicAddr MDA300DigitalLogicP$I2CPacket$addr_size;
enum /*HplMDA300DigitalC.I2C*/Atm128I2CMasterC$0$__nesc_unnamed4357 {
  Atm128I2CMasterC$0$CLIENT_ID = 0U
};
enum Atm128I2CMasterP$__nesc_unnamed4358 {
  Atm128I2CMasterP$ATM128_I2C_CLIENT_COUNT = 4U
};
typedef TI2CBasicAddr /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$SubPacket$addr_size;
typedef TI2CBasicAddr /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$I2CPacket$addr_size;
typedef TI2CBasicAddr /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2CPacket$addr_size;
typedef TMilli MDA300IBADCLogicP$PowerStabalizingTimer$precision_tag;
typedef TI2CBasicAddr MDA300IBADCLogicP$I2CPacket$addr_size;
enum /*MDA300IBADCSwitchC.I2C*/Atm128I2CMasterC$1$__nesc_unnamed4359 {
  Atm128I2CMasterC$1$CLIENT_ID = 1U
};
typedef TI2CBasicAddr MDA300IBADCSwitchP$I2CPacket$addr_size;
enum /*HplMDA300IBADCC.I2C*/Atm128I2CMasterC$2$__nesc_unnamed4360 {
  Atm128I2CMasterC$2$CLIENT_ID = 2U
};
typedef TMicro MDA300CounterLogicP$BusyWait$precision_tag;
typedef uint16_t MDA300CounterLogicP$BusyWait$size_type;
enum /*HplMDA300CounterC.I2C*/Atm128I2CMasterC$3$__nesc_unnamed4361 {
  Atm128I2CMasterC$3$CLIENT_ID = 3U
};
typedef message_t /*DataManagerC.DataMessagePoolP*/PoolC$0$pool_t;
typedef /*DataManagerC.DataMessagePoolP*/PoolC$0$pool_t /*DataManagerC.DataMessagePoolP.PoolP*/PoolP$0$pool_t;
typedef /*DataManagerC.DataMessagePoolP.PoolP*/PoolP$0$pool_t /*DataManagerC.DataMessagePoolP.PoolP*/PoolP$0$Pool$t;
typedef message_t */*DataManagerC.DataQueueP*/QueueC$0$queue_t;
typedef /*DataManagerC.DataQueueP*/QueueC$0$queue_t /*DataManagerC.DataQueueP*/QueueC$0$Queue$t;
enum SerialAMQueueP$__nesc_unnamed4362 {
  SerialAMQueueP$NUM_CLIENTS = 1U
};
typedef TMicro /*Atm128Uart0C.UartP*/Atm128UartP$0$Counter$precision_tag;
typedef uint32_t /*Atm128Uart0C.UartP*/Atm128UartP$0$Counter$size_type;
typedef uint16_t HplAtm1281Timer3P$CompareA$size_type;
typedef uint16_t HplAtm1281Timer3P$Capture$size_type;
typedef uint16_t HplAtm1281Timer3P$CompareB$size_type;
typedef uint16_t HplAtm1281Timer3P$CompareC$size_type;
typedef uint16_t HplAtm1281Timer3P$Timer$timer_size;
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
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t PlatformP$Init$init(void );
#line 51
static error_t MotePlatformP$PlatformInit$init(void );
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$toggle(void );



static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void );

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

static void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$set(void );
static void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$clr(void );


static void /*HplAtm128GeneralIOC.PortC.Bit0*/HplAtm128GeneralIOPinP$16$IO$makeInput(void );

static void /*HplAtm128GeneralIOC.PortC.Bit0*/HplAtm128GeneralIOPinP$16$IO$makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortC.Bit0*/HplAtm128GeneralIOPinP$16$IO$set(void );
static void /*HplAtm128GeneralIOC.PortC.Bit0*/HplAtm128GeneralIOPinP$16$IO$clr(void );




static void /*HplAtm128GeneralIOC.PortC.Bit1*/HplAtm128GeneralIOPinP$17$IO$makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortC.Bit1*/HplAtm128GeneralIOPinP$17$IO$set(void );
static void /*HplAtm128GeneralIOC.PortC.Bit1*/HplAtm128GeneralIOPinP$17$IO$clr(void );




static void /*HplAtm128GeneralIOC.PortC.Bit2*/HplAtm128GeneralIOPinP$18$IO$makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortC.Bit2*/HplAtm128GeneralIOPinP$18$IO$set(void );
static void /*HplAtm128GeneralIOC.PortC.Bit2*/HplAtm128GeneralIOPinP$18$IO$clr(void );




static void /*HplAtm128GeneralIOC.PortC.Bit3*/HplAtm128GeneralIOPinP$19$IO$makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortC.Bit3*/HplAtm128GeneralIOPinP$19$IO$set(void );
static void /*HplAtm128GeneralIOC.PortC.Bit3*/HplAtm128GeneralIOPinP$19$IO$clr(void );




static void /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP$20$IO$makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP$20$IO$set(void );
static void /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP$20$IO$clr(void );




static void /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP$21$IO$makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP$21$IO$set(void );
static void /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP$21$IO$clr(void );




static void /*HplAtm128GeneralIOC.PortC.Bit6*/HplAtm128GeneralIOPinP$22$IO$makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortC.Bit6*/HplAtm128GeneralIOPinP$22$IO$set(void );
static void /*HplAtm128GeneralIOC.PortC.Bit6*/HplAtm128GeneralIOPinP$22$IO$clr(void );


static void /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24$IO$makeInput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24$IO$set(void );
static void /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24$IO$clr(void );


static void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$makeInput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$set(void );
static void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$clr(void );


static void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$makeInput(void );
#line 30
static void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$clr(void );


static void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$makeInput(void );
#line 30
static void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$clr(void );


static void /*HplAtm128GeneralIOC.PortE.Bit4*/HplAtm128GeneralIOPinP$36$IO$makeInput(void );
#line 33
static void /*HplAtm128GeneralIOC.PortE.Bit5*/HplAtm128GeneralIOPinP$37$IO$makeInput(void );
#line 32
static bool /*HplAtm128GeneralIOC.PortE.Bit5*/HplAtm128GeneralIOPinP$37$IO$get(void );
#line 29
static void /*HplAtm128GeneralIOC.PortE.Bit5*/HplAtm128GeneralIOPinP$37$IO$set(void );



static void /*HplAtm128GeneralIOC.PortE.Bit7*/HplAtm128GeneralIOPinP$39$IO$makeInput(void );
#line 32
static bool /*HplAtm128GeneralIOC.PortE.Bit7*/HplAtm128GeneralIOPinP$39$IO$get(void );


static void /*HplAtm128GeneralIOC.PortE.Bit7*/HplAtm128GeneralIOPinP$39$IO$makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortE.Bit7*/HplAtm128GeneralIOPinP$39$IO$set(void );
static void /*HplAtm128GeneralIOC.PortE.Bit7*/HplAtm128GeneralIOPinP$39$IO$clr(void );
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t MeasureClockC$Init$init(void );
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint16_t MeasureClockC$Atm128Calibrate$baudrateRegister(uint32_t baudrate);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP$TaskBasic$postTask(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x40363c40);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP$TaskBasic$default$runTask(
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x40363c40);
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
# 29 "TreeP.nc"
static error_t TreeP$chooseParent(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void TreeP$sendReplyAck$runTask(void );
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Boot.nc"
static void TreeP$Boot$booted(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void TreeP$send_beacon$runTask(void );
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void TreeP$RadioControl$startDone(error_t error);
#line 117
static void TreeP$RadioControl$stopDone(error_t error);
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static void TreeP$ConnReqListenTimer$fired(void );
#line 72
static void TreeP$BeaconWaitTimer$fired(void );
#line 72
static void TreeP$ConnRepWaitTimer$fired(void );
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static void TreeP$BeaconSend$sendDone(
#line 92
message_t * msg, 






error_t error);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void TreeP$sendReply$runTask(void );
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static void TreeP$BeaconTimer$fired(void );
#line 72
static void TreeP$NeighbourUpdateStopTimer$fired(void );
# 23 "TDMASchedule.nc"
static void TreeP$TDMASchedule$radioWakeup(uint8_t type, uint16_t node_id);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



TreeP$BeaconReceive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static void TreeP$NeighbourUpdateTimer$fired(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void TreeP$sendRequest$runTask(void );
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorConfig.nc"
static uint16_t RF230ActiveMessageP$TrafficMonitorConfig$getUpdatePeriod(void );




static uint16_t RF230ActiveMessageP$TrafficMonitorConfig$getChannelTime(message_t *msg);
#line 79
static void RF230ActiveMessageP$TrafficMonitorConfig$timerTick(void );
#line 43
static am_addr_t RF230ActiveMessageP$TrafficMonitorConfig$getSender(message_t *msg);
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SlottedCollisionConfig.nc"
static void RF230ActiveMessageP$SlottedCollisionConfig$default$timerTick(void );
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageConfig.nc"
static error_t RF230ActiveMessageP$ActiveMessageConfig$checkPacket(message_t *msg);
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SoftwareAckConfig.nc"
static void RF230ActiveMessageP$SoftwareAckConfig$reportChannelError(void );
#line 68
static void RF230ActiveMessageP$SoftwareAckConfig$createAckPacket(message_t *data, message_t *ack);
#line 38
static bool RF230ActiveMessageP$SoftwareAckConfig$requiresAckWait(message_t *msg);
#line 50
static bool RF230ActiveMessageP$SoftwareAckConfig$isAckPacket(message_t *msg);






static bool RF230ActiveMessageP$SoftwareAckConfig$verifyAckPacket(message_t *data, message_t *ack);
#line 32
static uint16_t RF230ActiveMessageP$SoftwareAckConfig$getAckTimeout(void );










static void RF230ActiveMessageP$SoftwareAckConfig$setAckReceived(message_t *msg, bool acked);
#line 63
static bool RF230ActiveMessageP$SoftwareAckConfig$requiresAckReply(message_t *msg);
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static void RF230ActiveMessageP$RadioAlarm$fired(void );
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/UniqueConfig.nc"
static void RF230ActiveMessageP$UniqueConfig$setSequenceNumber(message_t *msg, uint8_t number);





static void RF230ActiveMessageP$UniqueConfig$reportChannelError(void );
#line 31
static uint8_t RF230ActiveMessageP$UniqueConfig$getSequenceNumber(message_t *msg);




static am_addr_t RF230ActiveMessageP$UniqueConfig$getSender(message_t *msg);
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RandomCollisionConfig.nc"
static uint16_t RF230ActiveMessageP$RandomCollisionConfig$getCongestionBackoff(message_t *msg);
#line 29
static uint16_t RF230ActiveMessageP$RandomCollisionConfig$getInitialBackoff(message_t *msg);










static uint16_t RF230ActiveMessageP$RandomCollisionConfig$getMinimumBackoff(void );





static uint16_t RF230ActiveMessageP$RandomCollisionConfig$getTransmitBarrier(message_t *msg);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230Config.nc"
static uint8_t RF230ActiveMessageP$RF230Config$getHeaderLength(void );










static uint8_t RF230ActiveMessageP$RF230Config$getDefaultChannel(void );
#line 46
static uint8_t *RF230ActiveMessageP$RF230Config$getPayload(message_t *msg);
#line 39
static void RF230ActiveMessageP$RF230Config$setLength(message_t *msg, uint8_t len);
#line 34
static uint8_t RF230ActiveMessageP$RF230Config$getLength(message_t *msg);
#line 60
static uint8_t RF230ActiveMessageP$RF230Config$getMaxLength(void );
#line 72
static bool RF230ActiveMessageP$RF230Config$requiresRssiCca(message_t *msg);
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/PacketField.nc"
static void RF230PacketP$PacketRSSI$clear(message_t *msg);





static void RF230PacketP$PacketRSSI$set(message_t *msg, RF230PacketP$PacketRSSI$value_type value);
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
static void RF230PacketP$Packet$clear(
#line 51
message_t * msg);
#line 67
static uint8_t RF230PacketP$Packet$payloadLength(
#line 63
message_t * msg);
#line 115
static 
#line 112
void * 


RF230PacketP$Packet$getPayload(
#line 110
message_t * msg, 




uint8_t len);
#line 95
static uint8_t RF230PacketP$Packet$maxPayloadLength(void );
#line 83
static void RF230PacketP$Packet$setPayloadLength(
#line 79
message_t * msg, 



uint8_t len);
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/PacketField.nc"
static RF230PacketP$PacketTransmitPower$value_type RF230PacketP$PacketTransmitPower$get(message_t *msg);
#line 29
static bool RF230PacketP$PacketTransmitPower$isSet(message_t *msg);





static RF230PacketP$PacketTimeSyncOffset$value_type RF230PacketP$PacketTimeSyncOffset$get(message_t *msg);
#line 29
static bool RF230PacketP$PacketTimeSyncOffset$isSet(message_t *msg);
# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
static void RF230PacketP$PacketTimeStampRadio$clear(
#line 55
message_t * msg);
#line 67
static void RF230PacketP$PacketTimeStampRadio$set(
#line 62
message_t * msg, 




RF230PacketP$PacketTimeStampRadio$size_type value);
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/PacketField.nc"
static void RF230PacketP$PacketLinkQuality$set(message_t *msg, RF230PacketP$PacketLinkQuality$value_type value);
# 124 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
static uint8_t IEEE154PacketP$IEEE154Packet$getDSN(message_t *msg);
#line 79
static bool IEEE154PacketP$IEEE154Packet$isAckFrame(message_t *msg);
#line 172
static void IEEE154PacketP$IEEE154Packet$set6LowPan(message_t *msg, uint8_t network);
#line 160
static void IEEE154PacketP$IEEE154Packet$setSrcAddr(message_t *msg, uint16_t addr);
#line 73
static void IEEE154PacketP$IEEE154Packet$createDataFrame(message_t *msg);
#line 129
static void IEEE154PacketP$IEEE154Packet$setDSN(message_t *msg, uint8_t dsn);
#line 92
static void IEEE154PacketP$IEEE154Packet$createAckReply(message_t *data, message_t *ack);
#line 39
static ieee154_header_t *IEEE154PacketP$IEEE154Packet$getHeader(message_t *msg);
#line 155
static uint16_t IEEE154PacketP$IEEE154Packet$getSrcAddr(message_t *msg);
#line 67
static bool IEEE154PacketP$IEEE154Packet$isDataFrame(message_t *msg);
#line 184
static void IEEE154PacketP$IEEE154Packet$setType(message_t *msg, am_id_t type);
#line 103
static bool IEEE154PacketP$IEEE154Packet$getAckRequired(message_t *msg);
#line 98
static bool IEEE154PacketP$IEEE154Packet$verifyAckReply(message_t *data, message_t *ack);
#line 49
static void IEEE154PacketP$IEEE154Packet$setLength(message_t *msg, uint8_t length);
#line 167
static uint8_t IEEE154PacketP$IEEE154Packet$get6LowPan(message_t *msg);
#line 190
static bool IEEE154PacketP$IEEE154Packet$requiresAckWait(message_t *msg);
#line 150
static void IEEE154PacketP$IEEE154Packet$setDestAddr(message_t *msg, uint16_t addr);
#line 44
static uint8_t IEEE154PacketP$IEEE154Packet$getLength(message_t *msg);
#line 140
static void IEEE154PacketP$IEEE154Packet$setDestPan(message_t *msg, uint16_t pan);
#line 179
static am_id_t IEEE154PacketP$IEEE154Packet$getType(message_t *msg);
#line 196
static bool IEEE154PacketP$IEEE154Packet$requiresAckReply(message_t *msg);
#line 145
static uint16_t IEEE154PacketP$IEEE154Packet$getDestAddr(message_t *msg);
# 77 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t IEEE154PacketP$AMPacket$source(
#line 73
message_t * amsg);
#line 57
static am_addr_t IEEE154PacketP$AMPacket$address(void );









static am_addr_t IEEE154PacketP$AMPacket$destination(
#line 63
message_t * amsg);
#line 110
static void IEEE154PacketP$AMPacket$setSource(
#line 106
message_t * amsg, 



am_addr_t addr);
#line 92
static void IEEE154PacketP$AMPacket$setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 136
static am_id_t IEEE154PacketP$AMPacket$type(
#line 132
message_t * amsg);
#line 151
static void IEEE154PacketP$AMPacket$setType(
#line 147
message_t * amsg, 



am_id_t t);
#line 125
static bool IEEE154PacketP$AMPacket$isForMe(
#line 122
message_t * amsg);
#line 176
static void IEEE154PacketP$AMPacket$setGroup(
#line 173
message_t * amsg, 


am_group_t grp);







static am_group_t IEEE154PacketP$AMPacket$localGroup(void );
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC$amAddress(void );
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void );




static am_group_t ActiveMessageAddressC$ActiveMessageAddress$amGroup(void );
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerCtrl16.nc"
static uint8_t HplAtm1281Timer1P$TimerCtrl$getInterruptFlag(void );
#line 63
static void HplAtm1281Timer1P$TimerCtrl$setControlB(uint8_t control);
#line 60
static uint8_t HplAtm1281Timer1P$TimerCtrl$getControlB(void );
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer1P$CompareA$reset(void );
#line 45
static void HplAtm1281Timer1P$CompareA$set(HplAtm1281Timer1P$CompareA$size_type t);










static void HplAtm1281Timer1P$CompareA$start(void );


static void HplAtm1281Timer1P$CompareA$stop(void );
# 79 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm1281Timer1P$Capture$setEdge(bool up);
#line 38
static HplAtm1281Timer1P$Capture$size_type HplAtm1281Timer1P$Capture$get(void );
#line 55
static void HplAtm1281Timer1P$Capture$reset(void );


static void HplAtm1281Timer1P$Capture$start(void );


static void HplAtm1281Timer1P$Capture$stop(void );
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer1P$CompareB$default$fired(void );
#line 49
static void HplAtm1281Timer1P$CompareC$default$fired(void );
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static bool HplAtm1281Timer1P$Timer$test(void );
#line 52
static HplAtm1281Timer1P$Timer$timer_size HplAtm1281Timer1P$Timer$get(void );
#line 95
static void HplAtm1281Timer1P$Timer$setScale(uint8_t scale);
#line 58
static void HplAtm1281Timer1P$Timer$set(HplAtm1281Timer1P$Timer$timer_size t);










static void HplAtm1281Timer1P$Timer$start(void );
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*InitOneP.InitOne*/Atm128TimerInitC$0$Init$init(void );
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$overflow(void );
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$size_type /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$get(void );






static bool /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$isOverflowPending(void );
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$overflow(void );
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$CounterFrom$overflow(void );
#line 53
static /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$Counter$size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$Counter$get(void );
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/LocalTime.nc"
static uint32_t /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC$0$LocalTime$get(void );
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void );
# 98 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Alarm$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Alarm$getNow(void );
#line 92
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Alarm$startAt(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Alarm$size_type t0, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Alarm$size_type dt);
#line 105
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Alarm$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Alarm$getAlarm(void );
#line 62
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Alarm$stop(void );
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Init$init(void );
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Counter$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Counter$get(void );
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Compare$fired(void );
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Timer$overflow(void );
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerCtrl8.nc"
static uint8_t HplAtm1281Timer2AsyncP$TimerCtrl$getInterruptFlag(void );
#line 62
static void HplAtm1281Timer2AsyncP$TimerCtrl$setControlB(uint8_t control);
#line 61
static void HplAtm1281Timer2AsyncP$TimerCtrl$setControlA(uint8_t control);
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t HplAtm1281Timer2AsyncP$McuPowerOverride$lowestState(void );
# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerAsync.nc"
static void HplAtm1281Timer2AsyncP$TimerAsync$setTimer2Asynchronous(void );
#line 75
static int HplAtm1281Timer2AsyncP$TimerAsync$compareABusy(void );
# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static HplAtm1281Timer2AsyncP$Compare$size_type HplAtm1281Timer2AsyncP$Compare$get(void );





static void HplAtm1281Timer2AsyncP$Compare$set(HplAtm1281Timer2AsyncP$Compare$size_type t);










static void HplAtm1281Timer2AsyncP$Compare$start(void );
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static HplAtm1281Timer2AsyncP$Timer$timer_size HplAtm1281Timer2AsyncP$Timer$get(void );
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
uint8_t arg_0x4080fa90);
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x4080fa90, 
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t dt);
#line 118
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShotAt(
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x4080fa90, 
# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t t0, uint32_t dt);
#line 62
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x4080fa90, 
# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t dt);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x4080fa90);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/LocalTime.nc"
static uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$1$LocalTime$get(void );
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$1$Counter$overflow(void );
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static void RadioAlarmP$RadioAlarm$default$fired(
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
uint8_t arg_0x40847a70);
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static void RadioAlarmP$RadioAlarm$wait(
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
uint8_t arg_0x40847a70, 
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
uint16_t timeout);




static void RadioAlarmP$RadioAlarm$cancel(
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
uint8_t arg_0x40847a70);
# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static bool RadioAlarmP$RadioAlarm$isFree(
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
uint8_t arg_0x40847a70);
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static uint16_t RadioAlarmP$RadioAlarm$getNow(
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
uint8_t arg_0x40847a70);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void RadioAlarmP$Alarm$fired(void );
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
static void RadioAlarmP$Tasklet$run(void );










static void TaskletC$Tasklet$schedule(void );
#line 61
static void TaskletC$Tasklet$suspend(void );






static void TaskletC$Tasklet$resume(void );
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static void ActiveMessageLayerC$SubSend$sendDone(
#line 85
message_t * msg, 



error_t error);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



ActiveMessageLayerC$SubReceive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t ActiveMessageLayerC$AMSend$send(
# 28 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
am_id_t arg_0x408515c0, 
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

ActiveMessageLayerC$AMSend$getPayload(
# 28 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
am_id_t arg_0x408515c0, 
# 121 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 


uint8_t len);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



ActiveMessageLayerC$Snoop$default$receive(
# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
am_id_t arg_0x408636a8, 
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 67
static 
#line 63
message_t * 



ActiveMessageLayerC$Receive$default$receive(
# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
am_id_t arg_0x40863010, 
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static void IEEE154NetworkLayerP$SubSend$sendDone(
#line 85
message_t * msg, 



error_t error);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



IEEE154NetworkLayerP$SubReceive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static error_t IEEE154NetworkLayerP$Send$send(
#line 56
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

IEEE154NetworkLayerP$Send$getPayload(
#line 111
message_t * msg, 


uint8_t len);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



IEEE154NetworkLayerP$NonTinyosReceive$default$receive(
# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154NetworkLayerP.nc"
uint8_t arg_0x4087c480, 
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t MessageBufferLayerP$SplitControl$start(void );
#line 109
static error_t MessageBufferLayerP$SplitControl$stop(void );
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t MessageBufferLayerP$SoftwareInit$init(void );
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioState.nc"
static void MessageBufferLayerP$RadioState$done(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static error_t MessageBufferLayerP$Send$send(
#line 56
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

MessageBufferLayerP$Send$getPayload(
#line 111
message_t * msg, 


uint8_t len);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
static message_t *MessageBufferLayerP$RadioReceive$receive(message_t *msg);
#line 35
static bool MessageBufferLayerP$RadioReceive$header(message_t *msg);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void MessageBufferLayerP$stateDoneTask$runTask(void );
#line 64
static void MessageBufferLayerP$sendTask$runTask(void );
#line 64
static void MessageBufferLayerP$deliverTask$runTask(void );
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static void MessageBufferLayerP$RadioSend$ready(void );
#line 45
static void MessageBufferLayerP$RadioSend$sendDone(error_t error);
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
static void MessageBufferLayerP$Tasklet$run(void );
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static void UniqueLayerP$SubSend$sendDone(
#line 85
message_t * msg, 



error_t error);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
static message_t *UniqueLayerP$SubReceive$receive(message_t *msg);
#line 35
static bool UniqueLayerP$SubReceive$header(message_t *msg);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static error_t UniqueLayerP$Send$send(
#line 56
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

UniqueLayerP$Send$getPayload(
#line 111
message_t * msg, 


uint8_t len);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Neighborhood.nc"
static void UniqueLayerP$Neighborhood$evicted(uint8_t index);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t UniqueLayerP$Init$init(void );
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodFlag.nc"
static void NeighborhoodP$NeighborhoodFlag$clearAll(
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodP.nc"
uint8_t arg_0x408fd770);
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodFlag.nc"
static bool NeighborhoodP$NeighborhoodFlag$get(
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodP.nc"
uint8_t arg_0x408fd770, 
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodFlag.nc"
uint8_t index);




static void NeighborhoodP$NeighborhoodFlag$set(
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodP.nc"
uint8_t arg_0x408fd770, 
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodFlag.nc"
uint8_t index);
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Neighborhood.nc"
static uint8_t NeighborhoodP$Neighborhood$insertNode(am_addr_t id);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t NeighborhoodP$Init$init(void );
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static void TrafficMonitorLayerP$SubSend$ready(void );
#line 45
static void TrafficMonitorLayerP$SubSend$sendDone(error_t error);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorConfig.nc"
static void TrafficMonitorLayerP$TrafficMonitorConfig$channelError(void );
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
static message_t *TrafficMonitorLayerP$SubReceive$receive(message_t *msg);
#line 35
static bool TrafficMonitorLayerP$SubReceive$header(message_t *msg);
# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioState.nc"
static error_t TrafficMonitorLayerP$RadioState$turnOff(void );
#line 45
static error_t TrafficMonitorLayerP$RadioState$turnOn(void );
#line 58
static void TrafficMonitorLayerP$SubState$done(void );
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Neighborhood.nc"
static void TrafficMonitorLayerP$Neighborhood$evicted(uint8_t index);
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
static void TrafficMonitorLayerP$Tasklet$run(void );
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static error_t TrafficMonitorLayerP$RadioSend$send(message_t *msg);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void TrafficMonitorLayerP$startStopTimer$runTask(void );
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static void TrafficMonitorLayerP$Timer$fired(void );
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static void RandomCollisionLayerP$SubSend$ready(void );
#line 45
static void RandomCollisionLayerP$SubSend$sendDone(error_t error);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
static message_t *RandomCollisionLayerP$SubReceive$receive(message_t *msg);
#line 35
static bool RandomCollisionLayerP$SubReceive$header(message_t *msg);
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static void RandomCollisionLayerP$RadioAlarm$fired(void );
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static error_t RandomCollisionLayerP$RadioSend$send(message_t *msg);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void RandomCollisionLayerP$calcNextRandom$runTask(void );
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Random.nc"
static uint16_t RandomMlcgC$Random$rand16(void );
#line 35
static uint32_t RandomMlcgC$Random$rand32(void );
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ParameterInit.nc"
static error_t RandomMlcgC$SeedInit$init(RandomMlcgC$SeedInit$parameter param);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t RandomMlcgC$Init$init(void );
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static void SoftwareAckLayerP$SubSend$ready(void );
#line 45
static void SoftwareAckLayerP$SubSend$sendDone(error_t error);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
static message_t *SoftwareAckLayerP$SubReceive$receive(message_t *msg);
#line 35
static bool SoftwareAckLayerP$SubReceive$header(message_t *msg);
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static void SoftwareAckLayerP$RadioAlarm$fired(void );
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static error_t SoftwareAckLayerP$RadioSend$send(message_t *msg);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioCCA.nc"
static void RF230LayerP$RadioCCA$default$done(error_t error);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t RF230LayerP$SoftwareInit$init(void );
# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioState.nc"
static error_t RF230LayerP$RadioState$turnOff(void );
#line 45
static error_t RF230LayerP$RadioState$turnOn(void );
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static void RF230LayerP$RadioAlarm$fired(void );
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t RF230LayerP$PlatformInit$init(void );
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static void RF230LayerP$SpiResource$granted(void );
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static error_t RF230LayerP$RadioSend$send(message_t *msg);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static void RF230LayerP$IRQ$captured(uint16_t time);
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
static void RF230LayerP$Tasklet$run(void );
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230.nc"
static uint8_t HplRF230P$HplRF230$spiSplitRead(void );





static uint8_t HplRF230P$HplRF230$spiSplitReadWrite(uint8_t data);





static uint8_t HplRF230P$HplRF230$spiWrite(uint8_t data);
#line 41
static void HplRF230P$HplRF230$spiSplitWrite(uint8_t data);
#line 33
static uint16_t HplRF230P$HplRF230$crcByte(uint16_t crc, uint8_t data);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplRF230P$Capture$captured(HplRF230P$Capture$size_type t);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t HplRF230P$PlatformInit$init(void );
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static void HplRF230P$IRQ$disable(void );
#line 42
static error_t HplRF230P$IRQ$captureRisingEdge(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void Atm128SpiP$zeroTask$runTask(void );
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static void Atm128SpiP$SpiPacket$default$sendDone(
#line 64
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static void Atm128SpiP$ResourceArbiter$granted(
# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40a63e70);
# 34 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SpiByte.nc"
static uint8_t Atm128SpiP$SpiByte$write(uint8_t tx);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static void Atm128SpiP$Spi$dataReady(uint8_t data);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Atm128SpiP$Resource$release(
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40a40010);
# 87 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Atm128SpiP$Resource$immediateRequest(
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40a40010);
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Atm128SpiP$Resource$request(
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40a40010);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static void Atm128SpiP$Resource$default$granted(
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40a40010);
# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static bool Atm128SpiP$Resource$isOwner(
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40a40010);
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
uint8_t arg_0x40ac1d38);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$immediateRequested(
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40ac1d38);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$unconfigure(
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40ac09b8);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$configure(
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40ac09b8);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$release(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40ac1310);
# 87 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$immediateRequest(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40ac1310);
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$request(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40ac1310);
# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$isOwner(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40ac1310);
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ArbiterInfo$inUse(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$runTask(void );
# 98 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
static /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$Alarm$size_type /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$Alarm$getNow(void );
#line 92
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$Alarm$startAt(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$Alarm$size_type t0, /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$Alarm$size_type dt);
#line 55
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$Alarm$start(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$Alarm$size_type dt);






static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$Alarm$stop(void );
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$fired(void );
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$overflow(void );
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/BusyWait.nc"
static void BusyWaitMicroC$BusyWait$wait(BusyWaitMicroC$BusyWait$size_type dt);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t LedsP$Init$init(void );
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Leds.nc"
static void LedsP$Leds$led0Off(void );





static void LedsP$Leds$led0Toggle(void );




static void LedsP$Leds$led1On(void );










static void LedsP$Leds$led1Toggle(void );
#line 89
static void LedsP$Leds$led2Toggle(void );
#line 45
static void LedsP$Leds$led0On(void );
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*DozerC.BeaconSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

/*DozerC.BeaconSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$getPayload(
#line 121
message_t * msg, 


uint8_t len);
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static void /*DozerC.BeaconSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(
#line 85
message_t * msg, 



error_t error);
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40b719f8, 
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40b71010, 
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$getPayload(
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40b71010, 
# 111 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 


uint8_t len);
#line 89
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40b71010, 
# 85 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void );
#line 64
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask(void );
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static void SchedulerP$PPBListenTimer3$fired(void );
#line 72
static void SchedulerP$TDMAScheduleTimer$fired(void );
#line 72
static void SchedulerP$TDMASlotTimer$fired(void );
#line 72
static void SchedulerP$PPBListenTimer1$fired(void );
# 13 "TDMASchedule.nc"
static error_t SchedulerP$TDMASchedule$clearTableEntry(uint16_t node_id, uint8_t parent);
#line 7
static error_t SchedulerP$TDMASchedule$getPPB(uint8_t *gIndex);









static void SchedulerP$TDMASchedule$setBeaconTimeStamp(uint32_t timestamp);

static void SchedulerP$TDMASchedule$setParentTDMASlot(uint8_t tslot);
#line 5
static error_t SchedulerP$TDMASchedule$setPPB(uint8_t *Index, dozer_parent_t *ppb);





static error_t SchedulerP$TDMASchedule$stopTimers(void );



static error_t SchedulerP$TDMASchedule$setParentTimeStamp(uint16_t node_id, uint16_t seed, uint32_t timestamp);
#line 9
static error_t SchedulerP$TDMASchedule$startTimers(void );
#line 21
static uint8_t SchedulerP$TDMASchedule$allocChildTimeSlot(uint16_t node_id);
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static void SchedulerP$PPBListenTimer2$fired(void );
#line 72
static void SchedulerP$PPBListenTimer0$fired(void );
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static void DataManagerP$DataSend$sendDone(
#line 92
message_t * msg, 






error_t error);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void DataManagerP$uartSendTask$runTask(void );
#line 64
static void DataManagerP$sendTask$runTask(void );
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static void DataManagerP$SerialSend$sendDone(
#line 92
message_t * msg, 






error_t error);
# 5 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/Sample.nc"
static error_t DataManagerP$Sample$readDone(uint8_t channel, uint8_t channelType, uint16_t data);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void DataManagerP$SamplerControl$startDone(error_t error);
# 23 "TDMASchedule.nc"
static void DataManagerP$TDMASchedule$radioWakeup(uint8_t type, uint16_t node_id);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t DataManagerP$Init$init(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void DataManagerP$sendAvailableData$runTask(void );
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



DataManagerP$DataReceive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/ADConvert.nc"
static void SamplerM$ADC6$readDone(uint16_t data);
#line 24
static void SamplerM$ADC0$readDone(uint16_t data);
# 15 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/Dio.nc"
static void SamplerM$Dio2$readDone(uint16_t data);
# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/ADConvert.nc"
static void SamplerM$ADC9$readDone(uint16_t data);
#line 24
static void SamplerM$ADC3$readDone(uint16_t data);
#line 24
static void SamplerM$ADC12$readDone(uint16_t data);
#line 24
static void SamplerM$ADC4$readDone(uint16_t data);
# 15 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/Dio.nc"
static void SamplerM$Dio5$readDone(uint16_t data);
#line 15
static void SamplerM$Dio0$readDone(uint16_t data);
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Read.nc"
static void SamplerM$Hum$readDone(error_t result, SamplerM$Hum$val_t val);
# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/ADConvert.nc"
static void SamplerM$ADC7$readDone(uint16_t data);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void SamplerM$TempHumControl$startDone(error_t error);
#line 117
static void SamplerM$TempHumControl$stopDone(error_t error);
# 3 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/Sample.nc"
static int8_t SamplerM$Sample$getSample(uint8_t channel, uint8_t channelType, uint32_t interval, uint8_t param);




static error_t SamplerM$Sample$start(void );
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static void SamplerM$SamplerTimer$fired(void );
# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/ADConvert.nc"
static void SamplerM$ADC1$readDone(uint16_t data);
#line 24
static void SamplerM$ADC10$readDone(uint16_t data);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t SamplerM$SamplerInit$init(void );
# 9 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/SamplerM.nc"
static error_t SamplerM$PlugPlay(void );
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t SamplerM$SamplerControl$start(void );
# 15 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/Dio.nc"
static void SamplerM$Dio3$readDone(uint16_t data);
#line 15
static void SamplerM$Counter$readDone(uint16_t data);
# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/ADConvert.nc"
static void SamplerM$ADC13$readDone(uint16_t data);
#line 24
static void SamplerM$ADC5$readDone(uint16_t data);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void SamplerM$IBADCcontrol$startDone(error_t error);
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Read.nc"
static void SamplerM$Temp$readDone(error_t result, SamplerM$Temp$val_t val);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void SamplerM$DioControl$startDone(error_t error);
# 15 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/Dio.nc"
static void SamplerM$Dio1$readDone(uint16_t data);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void SamplerM$CounterControl$startDone(error_t error);
# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/ADConvert.nc"
static void SamplerM$ADC8$readDone(uint16_t data);
#line 24
static void SamplerM$ADC2$readDone(uint16_t data);
#line 24
static void SamplerM$ADC11$readDone(uint16_t data);
# 15 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/Dio.nc"
static void SamplerM$Dio4$readDone(uint16_t data);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15.nc"
static void /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Sht15Temp$measureHumidityDone(error_t result, uint16_t val);
#line 87
static void /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Sht15Temp$writeStatusRegDone(error_t result);
#line 71
static void /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Sht15Temp$readStatusRegDone(error_t result, uint8_t val);
#line 25
static void /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Sht15Temp$resetDone(error_t result);
#line 40
static void /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Sht15Temp$measureTemperatureDone(error_t result, uint16_t val);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Read.nc"
static error_t /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Humidity$read(void );
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$TempResource$granted(void );
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15.nc"
static void /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Sht15Hum$measureHumidityDone(error_t result, uint16_t val);
#line 87
static void /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Sht15Hum$writeStatusRegDone(error_t result);
#line 71
static void /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Sht15Hum$readStatusRegDone(error_t result, uint8_t val);
#line 25
static void /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Sht15Hum$resetDone(error_t result);
#line 40
static void /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Sht15Hum$measureTemperatureDone(error_t result, uint16_t val);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$HumResource$granted(void );
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Read.nc"
static error_t /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Temperature$read(void );
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15.nc"
static void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$SensirionSht15$default$measureHumidityDone(
# 25 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15LogicP.nc"
uint8_t arg_0x40d68258, 
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15.nc"
error_t result, uint16_t val);
#line 47
static error_t /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$SensirionSht15$measureHumidity(
# 25 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15LogicP.nc"
uint8_t arg_0x40d68258);
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15.nc"
static error_t /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$SensirionSht15$measureTemperature(
# 25 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15LogicP.nc"
uint8_t arg_0x40d68258);
# 87 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15.nc"
static void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$SensirionSht15$default$writeStatusRegDone(
# 25 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15LogicP.nc"
uint8_t arg_0x40d68258, 
# 87 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15.nc"
error_t result);
#line 71
static void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$SensirionSht15$default$readStatusRegDone(
# 25 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15LogicP.nc"
uint8_t arg_0x40d68258, 
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15.nc"
error_t result, uint8_t val);
#line 25
static void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$SensirionSht15$default$resetDone(
# 25 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15LogicP.nc"
uint8_t arg_0x40d68258, 
# 25 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15.nc"
error_t result);
#line 40
static void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$SensirionSht15$default$measureTemperatureDone(
# 25 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15LogicP.nc"
uint8_t arg_0x40d68258, 
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15.nc"
error_t result, uint16_t val);
# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$InterruptDATA$fired(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$readSensor$runTask(void );
#line 64
static void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$signalStatusDone$runTask(void );
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$Timer$fired(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplSensirionSht15C.Int*/Atm128GpioInterruptC$0$Atm128Interrupt$fired(void );
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static error_t /*HplSensirionSht15C.Int*/Atm128GpioInterruptC$0$Interrupt$disable(void );
#line 43
static error_t /*HplSensirionSht15C.Int*/Atm128GpioInterruptC$0$Interrupt$enableFallingEdge(void );
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
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$disable(void );
#line 35
static void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$enable(void );
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$IrqSignal$fired(void );
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$disable(void );
#line 35
static void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$enable(void );
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$IrqSignal$fired(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$default$fired(void );
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$IrqSignal$fired(void );
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$clear(void );
#line 40
static void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$disable(void );
#line 59
static void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$edge(bool low_to_high);
#line 35
static void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$enable(void );
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$IrqSignal$fired(void );
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t HplSensirionSht15P$SplitControl$start(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void HplSensirionSht15P$stopTask$runTask(void );
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static void HplSensirionSht15P$Timer$fired(void );
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$Init$init(void );
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static error_t /*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$enqueue(resource_client_id_t id);
#line 43
static bool /*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$isEmpty(void );








static bool /*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$isEnqueued(resource_client_id_t id);







static resource_client_id_t /*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$dequeue(void );
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$ResourceRequested$default$requested(
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40ac1d38);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$ResourceConfigure$default$unconfigure(
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40ac09b8);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$ResourceConfigure$default$configure(
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40ac09b8);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$Resource$release(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40ac1310);
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$Resource$request(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40ac1310);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$Resource$default$granted(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40ac1310);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$grantedTask$runTask(void );
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Leds.nc"
static void NoLedsC$Leds$led1On(void );
#line 45
static void NoLedsC$Leds$led0On(void );
#line 78
static void NoLedsC$Leds$led2On(void );
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t MDA300DigitalLogicP$SplitControl$start(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void MDA300DigitalLogicP$set_io_toggle$runTask(void );
# 10 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/Dio.nc"
static error_t MDA300DigitalLogicP$Dio$read(
# 12 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300DigitalLogicP.nc"
uint8_t arg_0x40e3d550);
# 14 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/Dio.nc"
static error_t MDA300DigitalLogicP$Dio$setParam(
# 12 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300DigitalLogicP.nc"
uint8_t arg_0x40e3d550, 
# 14 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/Dio.nc"
uint8_t modeToSet);
static void MDA300DigitalLogicP$Dio$default$readDone(
# 12 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300DigitalLogicP.nc"
uint8_t arg_0x40e3d550, 
# 15 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/Dio.nc"
uint16_t data);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void MDA300DigitalLogicP$read_io$runTask(void );
#line 64
static void MDA300DigitalLogicP$init_io$runTask(void );
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static void MDA300DigitalLogicP$I2CResource$granted(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void MDA300DigitalLogicP$set_io_low$runTask(void );
# 101 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/I2CPacket.nc"
static void MDA300DigitalLogicP$I2CPacket$writeDone(error_t error, uint16_t addr, uint8_t length, 
#line 98
uint8_t * data);
#line 91
static void MDA300DigitalLogicP$I2CPacket$readDone(error_t error, uint16_t addr, uint8_t length, 
#line 88
uint8_t * data);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void MDA300DigitalLogicP$Interrupt$fired(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void MDA300DigitalLogicP$set_io_high$runTask(void );
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$Init$init(void );
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$FcfsQueue$enqueue(resource_client_id_t id);
#line 43
static bool /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$FcfsQueue$isEmpty(void );








static bool /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$FcfsQueue$isEnqueued(resource_client_id_t id);







static resource_client_id_t /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$FcfsQueue$dequeue(void );
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40ea5010);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40ea4430);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40ea4430);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$release(void );
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$Resource$release(
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40ea6540);
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$Resource$request(
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40ea6540);
# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static bool /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$Resource$isOwner(
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40ea6540);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$grantedTask$runTask(void );
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/power/PowerDownCleanup.nc"
static void /*Atm128I2CMasterP.Power*/AsyncPowerManagerP$0$PowerDownCleanup$default$cleanup(void );
# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
static void /*Atm128I2CMasterP.Power*/AsyncPowerManagerP$0$ResourceDefaultOwner$requested(void );
#line 46
static void /*Atm128I2CMasterP.Power*/AsyncPowerManagerP$0$ResourceDefaultOwner$granted(void );
# 101 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/I2CPacket.nc"
static void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$SubPacket$writeDone(error_t error, uint16_t addr, uint8_t length, 
#line 98
uint8_t * data);
#line 91
static void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$SubPacket$readDone(error_t error, uint16_t addr, uint8_t length, 
#line 88
uint8_t * data);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$Resource$release(
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x40edee88);
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$Resource$request(
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x40edee88);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$Resource$default$granted(
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x40edee88);
# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static bool /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$Resource$isOwner(
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x40edee88);
# 65 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/I2CPacket.nc"
static error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$I2CPacket$read(
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x40edba58, 
# 65 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/I2CPacket.nc"
i2c_flags_t flags, uint16_t addr, uint8_t length, 
#line 61
uint8_t * data);
#line 101
static void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$I2CPacket$default$writeDone(
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x40edba58, 
# 101 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/I2CPacket.nc"
error_t error, uint16_t addr, uint8_t length, 
#line 98
uint8_t * data);
#line 81
static error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$I2CPacket$write(
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x40edba58, 
# 81 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/I2CPacket.nc"
i2c_flags_t flags, uint16_t addr, uint8_t length, 
#line 77
uint8_t * data);
#line 91
static void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$I2CPacket$default$readDone(
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x40edba58, 
# 91 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/I2CPacket.nc"
error_t error, uint16_t addr, uint8_t length, 
#line 88
uint8_t * data);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$SubResource$granted(
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x40ed9d10);
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2C.nc"
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$Atm128I2C$stop(void );
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$commandComplete(void );
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AsyncStdControl.nc"
static error_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$AsyncStdControl$start(void );









static error_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$AsyncStdControl$stop(void );
# 65 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/I2CPacket.nc"
static error_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2CPacket$read(i2c_flags_t flags, uint16_t addr, uint8_t length, 
#line 61
uint8_t * data);
#line 81
static error_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2CPacket$write(i2c_flags_t flags, uint16_t addr, uint8_t length, 
#line 77
uint8_t * data);
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
static void HplAtm128I2CBusP$I2C$readCurrent(void );
static void HplAtm128I2CBusP$I2C$sendCommand(void );




static void HplAtm128I2CBusP$I2C$setStart(bool on);
#line 45
static uint8_t HplAtm128I2CBusP$I2C$status(void );
#line 60
static void HplAtm128I2CBusP$I2C$enableInterrupt(bool enable);
#line 82
static uint8_t HplAtm128I2CBusP$I2C$read(void );
#line 42
static void HplAtm128I2CBusP$I2C$init(bool hasExternalPulldown);
#line 57
static void HplAtm128I2CBusP$I2C$enableAck(bool enable);
#line 76
static void HplAtm128I2CBusP$I2C$enable(bool on);




static void HplAtm128I2CBusP$I2C$write(uint8_t data);
#line 43
static void HplAtm128I2CBusP$I2C$off(void );
#line 55
static void HplAtm128I2CBusP$I2C$setStop(bool on);
#line 74
static void HplAtm128I2CBusP$I2C$setInterruptPending(bool on);
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static void MDA300IBADCLogicP$PowerStabalizingTimer$fired(void );
# 15 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/ADConvert.nc"
static error_t MDA300IBADCLogicP$ADConvert$read(
# 13 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300IBADCLogicP.nc"
uint8_t arg_0x40f88248);
# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/ADConvert.nc"
static void MDA300IBADCLogicP$ADConvert$default$readDone(
# 13 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300IBADCLogicP.nc"
uint8_t arg_0x40f88248, 
# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/ADConvert.nc"
uint16_t data);
# 10 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/SetParam.nc"
static error_t MDA300IBADCLogicP$SetParam$setParam(
# 14 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300IBADCLogicP.nc"
uint8_t arg_0x40f88990, 
# 10 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/SetParam.nc"
uint8_t param);
# 15 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/Switch.nc"
static void MDA300IBADCLogicP$Switch$setDone(bool result);
static void MDA300IBADCLogicP$Switch$setAllDone(bool result);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static void MDA300IBADCLogicP$I2CResource$granted(void );
# 101 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/I2CPacket.nc"
static void MDA300IBADCLogicP$I2CPacket$writeDone(error_t error, uint16_t addr, uint8_t length, 
#line 98
uint8_t * data);
#line 91
static void MDA300IBADCLogicP$I2CPacket$readDone(error_t error, uint16_t addr, uint8_t length, 
#line 88
uint8_t * data);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void MDA300IBADCLogicP$adc_get_data$runTask(void );
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t MDA300IBADCSwitchP$SwitchControl$start(void );
# 12 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/Switch.nc"
static error_t MDA300IBADCSwitchP$Switch$setAll(uint8_t value);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static void MDA300IBADCSwitchP$I2CResource$granted(void );
# 101 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/I2CPacket.nc"
static void MDA300IBADCSwitchP$I2CPacket$writeDone(error_t error, uint16_t addr, uint8_t length, 
#line 98
uint8_t * data);
#line 91
static void MDA300IBADCSwitchP$I2CPacket$readDone(error_t error, uint16_t addr, uint8_t length, 
#line 88
uint8_t * data);
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t HplMDA300IBADCP$SplitControl$start(void );








static void HplMDA300IBADCP$SwitchControl$startDone(error_t error);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void MDA300CounterLogicP$Interrupt$fired(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void MDA300CounterLogicP$count_ready$runTask(void );
# 10 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/Dio.nc"
static error_t MDA300CounterLogicP$Counter$read(void );



static error_t MDA300CounterLogicP$Counter$setParam(uint8_t modeToSet);
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t MDA300CounterLogicP$CounterControl$start(void );
# 13 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300CounterLogicP.nc"
static error_t MDA300CounterLogicP$Plugged(void );
# 97 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Pool.nc"
static 
#line 94
/*DataManagerC.DataMessagePoolP.PoolP*/PoolP$0$Pool$t * 


/*DataManagerC.DataMessagePoolP.PoolP*/PoolP$0$Pool$get(void );
#line 89
static error_t /*DataManagerC.DataMessagePoolP.PoolP*/PoolP$0$Pool$put(
#line 85
/*DataManagerC.DataMessagePoolP.PoolP*/PoolP$0$Pool$t * newVal);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*DataManagerC.DataMessagePoolP.PoolP*/PoolP$0$Init$init(void );
# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Queue.nc"
static 
#line 71
/*DataManagerC.DataQueueP*/QueueC$0$Queue$t  

/*DataManagerC.DataQueueP*/QueueC$0$Queue$head(void );
#line 90
static error_t /*DataManagerC.DataQueueP*/QueueC$0$Queue$enqueue(
#line 86
/*DataManagerC.DataQueueP*/QueueC$0$Queue$t  newVal);
#line 65
static uint8_t /*DataManagerC.DataQueueP*/QueueC$0$Queue$maxSize(void );
#line 81
static 
#line 79
/*DataManagerC.DataQueueP*/QueueC$0$Queue$t  

/*DataManagerC.DataQueueP*/QueueC$0$Queue$dequeue(void );
#line 50
static bool /*DataManagerC.DataQueueP*/QueueC$0$Queue$empty(void );







static uint8_t /*DataManagerC.DataQueueP*/QueueC$0$Queue$size(void );
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*DozerC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static void /*DozerC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$sendDone(
#line 85
message_t * msg, 



error_t error);
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$AMSend$sendDone(
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40b719f8, 
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$send(
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40b71010, 
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 89
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$default$sendDone(
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40b71010, 
# 85 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$errorTask$runTask(void );
#line 64
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$CancelTask$runTask(void );
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
am_id_t arg_0x41082148, 
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$payloadLength(
#line 63
message_t * msg);
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
am_id_t arg_0x41082b08, 
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
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void SerialP$SplitControl$default$startDone(error_t error);
#line 117
static void SerialP$SplitControl$default$stopDone(error_t error);
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
uart_id_t arg_0x41134010, 
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 89
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$default$sendDone(
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x41134010, 
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
uart_id_t arg_0x41137920, 
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$upperLength(
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x41134b10, 
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$offset(
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x41134b10);
# 23 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$dataLinkLength(
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x41134b10, 
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
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerCtrl16.nc"
static void HplAtm1281Timer3P$TimerCtrl$setControlB(uint8_t control);
#line 60
static uint8_t HplAtm1281Timer3P$TimerCtrl$getControlB(void );
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer3P$CompareA$default$fired(void );
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm1281Timer3P$Capture$default$captured(HplAtm1281Timer3P$Capture$size_type t);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer3P$CompareB$default$fired(void );
#line 49
static void HplAtm1281Timer3P$CompareC$default$fired(void );
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static HplAtm1281Timer3P$Timer$timer_size HplAtm1281Timer3P$Timer$get(void );
#line 95
static void HplAtm1281Timer3P$Timer$setScale(uint8_t scale);
#line 58
static void HplAtm1281Timer3P$Timer$set(HplAtm1281Timer3P$Timer$timer_size t);










static void HplAtm1281Timer3P$Timer$start(void );
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
static error_t /*DozerC.DataSenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

/*DozerC.DataSenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$getPayload(
#line 121
message_t * msg, 


uint8_t len);
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static void /*DozerC.DataSenderC.AMQueueEntryP*/AMQueueEntryP$2$Send$sendDone(
#line 85
message_t * msg, 



error_t error);
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

static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$toggle(void );



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
#line 46
static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$set(void );
static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$clr(void );




static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortC.Bit0*/HplAtm128GeneralIOPinP$16$IO$set(void );
static __inline void /*HplAtm128GeneralIOC.PortC.Bit0*/HplAtm128GeneralIOPinP$16$IO$clr(void );


static __inline void /*HplAtm128GeneralIOC.PortC.Bit0*/HplAtm128GeneralIOPinP$16$IO$makeInput(void );

static __inline void /*HplAtm128GeneralIOC.PortC.Bit0*/HplAtm128GeneralIOPinP$16$IO$makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortC.Bit1*/HplAtm128GeneralIOPinP$17$IO$set(void );
static __inline void /*HplAtm128GeneralIOC.PortC.Bit1*/HplAtm128GeneralIOPinP$17$IO$clr(void );




static __inline void /*HplAtm128GeneralIOC.PortC.Bit1*/HplAtm128GeneralIOPinP$17$IO$makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortC.Bit2*/HplAtm128GeneralIOPinP$18$IO$set(void );
static __inline void /*HplAtm128GeneralIOC.PortC.Bit2*/HplAtm128GeneralIOPinP$18$IO$clr(void );




static __inline void /*HplAtm128GeneralIOC.PortC.Bit2*/HplAtm128GeneralIOPinP$18$IO$makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortC.Bit3*/HplAtm128GeneralIOPinP$19$IO$set(void );
static __inline void /*HplAtm128GeneralIOC.PortC.Bit3*/HplAtm128GeneralIOPinP$19$IO$clr(void );




static __inline void /*HplAtm128GeneralIOC.PortC.Bit3*/HplAtm128GeneralIOPinP$19$IO$makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP$20$IO$set(void );
static __inline void /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP$20$IO$clr(void );




static __inline void /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP$20$IO$makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP$21$IO$set(void );
static __inline void /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP$21$IO$clr(void );




static __inline void /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP$21$IO$makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortC.Bit6*/HplAtm128GeneralIOPinP$22$IO$set(void );
static __inline void /*HplAtm128GeneralIOC.PortC.Bit6*/HplAtm128GeneralIOPinP$22$IO$clr(void );




static __inline void /*HplAtm128GeneralIOC.PortC.Bit6*/HplAtm128GeneralIOPinP$22$IO$makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24$IO$set(void );
static __inline void /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24$IO$clr(void );


static __inline void /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24$IO$makeInput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$set(void );
static __inline void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$clr(void );


static __inline void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$makeInput(void );
#line 47
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$clr(void );


static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$makeInput(void );
#line 47
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$clr(void );


static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$makeInput(void );
#line 50
static __inline void /*HplAtm128GeneralIOC.PortE.Bit4*/HplAtm128GeneralIOPinP$36$IO$makeInput(void );
#line 45
static __inline bool /*HplAtm128GeneralIOC.PortE.Bit5*/HplAtm128GeneralIOPinP$37$IO$get(void );
static __inline void /*HplAtm128GeneralIOC.PortE.Bit5*/HplAtm128GeneralIOPinP$37$IO$set(void );



static __inline void /*HplAtm128GeneralIOC.PortE.Bit5*/HplAtm128GeneralIOPinP$37$IO$makeInput(void );
#line 45
static __inline bool /*HplAtm128GeneralIOC.PortE.Bit7*/HplAtm128GeneralIOPinP$39$IO$get(void );
static __inline void /*HplAtm128GeneralIOC.PortE.Bit7*/HplAtm128GeneralIOPinP$39$IO$set(void );
static __inline void /*HplAtm128GeneralIOC.PortE.Bit7*/HplAtm128GeneralIOPinP$39$IO$clr(void );


static __inline void /*HplAtm128GeneralIOC.PortE.Bit7*/HplAtm128GeneralIOPinP$39$IO$makeInput(void );

static __inline void /*HplAtm128GeneralIOC.PortE.Bit7*/HplAtm128GeneralIOPinP$39$IO$makeOutput(void );
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/MeasureClockC.nc"
enum MeasureClockC$__nesc_unnamed4363 {


  MeasureClockC$MAGIC = 488 / (16 / PLATFORM_MHZ)
};

uint16_t MeasureClockC$cycles;

static inline error_t MeasureClockC$Init$init(void );
#line 143
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
uint8_t arg_0x40363c40);
# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuSleep.nc"
static void SchedulerBasicP$McuSleep$sleep(void );
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP$__nesc_unnamed4364 {

  SchedulerBasicP$NUM_TASKS = 38U, 
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
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/McuSleepC.nc"
const_uint8_t McuSleepC$atm128PowerBits[ATM128_POWER_DOWN + 1] = { 
0, 
1 << 1, ((
1 << 3) | (1 << 2)) | (1 << 1), (
1 << 2) | (1 << 1), (
1 << 3) | (1 << 2), 
1 << 2 };

static inline mcu_power_t McuSleepC$getPowerState(void );
#line 128
static inline void McuSleepC$McuSleep$sleep(void );
#line 141
static inline void McuSleepC$McuPowerState$update(void );
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t TreeP$sendReplyAck$postTask(void );
#line 56
static error_t TreeP$send_beacon$postTask(void );
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/LocalTime.nc"
static uint32_t TreeP$LocalTime$get(void );
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t TreeP$RadioControl$start(void );
#line 109
static error_t TreeP$RadioControl$stop(void );
# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static void TreeP$ConnReqListenTimer$startOneShot(uint32_t dt);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Random.nc"
static uint16_t TreeP$Random$rand16(void );
# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static void TreeP$BeaconWaitTimer$startOneShot(uint32_t dt);




static void TreeP$BeaconWaitTimer$stop(void );
#line 62
static void TreeP$ConnRepWaitTimer$startOneShot(uint32_t dt);




static void TreeP$ConnRepWaitTimer$stop(void );
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t TreeP$DataManagerInit$init(void );
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t TreeP$BeaconSend$send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

TreeP$BeaconSend$getPayload(
#line 121
message_t * msg, 


uint8_t len);
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ParameterInit.nc"
static error_t TreeP$SeedInit$init(TreeP$SeedInit$parameter param);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t TreeP$sendReply$postTask(void );
# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static void TreeP$BeaconTimer$startOneShotAt(uint32_t t0, uint32_t dt);
#line 62
static void TreeP$BeaconTimer$startOneShot(uint32_t dt);
#line 62
static void TreeP$NeighbourUpdateStopTimer$startOneShot(uint32_t dt);
# 13 "TDMASchedule.nc"
static error_t TreeP$TDMASchedule$clearTableEntry(uint16_t node_id, uint8_t parent);
#line 7
static error_t TreeP$TDMASchedule$getPPB(uint8_t *gIndex);









static void TreeP$TDMASchedule$setBeaconTimeStamp(uint32_t timestamp);

static void TreeP$TDMASchedule$setParentTDMASlot(uint8_t tslot);
#line 5
static error_t TreeP$TDMASchedule$setPPB(uint8_t *Index, dozer_parent_t *ppb);





static error_t TreeP$TDMASchedule$stopTimers(void );



static error_t TreeP$TDMASchedule$setParentTimeStamp(uint16_t node_id, uint16_t seed, uint32_t timestamp);
#line 9
static error_t TreeP$TDMASchedule$startTimers(void );
#line 21
static uint8_t TreeP$TDMASchedule$allocChildTimeSlot(uint16_t node_id);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Leds.nc"
static void TreeP$Leds$led0Off(void );
#line 72
static void TreeP$Leds$led1Toggle(void );
#line 89
static void TreeP$Leds$led2Toggle(void );
#line 45
static void TreeP$Leds$led0On(void );
# 77 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t TreeP$AMPacket$source(
#line 73
message_t * amsg);
# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static void TreeP$NeighbourUpdateTimer$startOneShot(uint32_t dt);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t TreeP$sendRequest$postTask(void );
# 55 "TreeP.nc"
enum TreeP$__nesc_unnamed4365 {
#line 55
  TreeP$send_beacon = 0U
};
#line 55
typedef int TreeP$__nesc_sillytask_send_beacon[TreeP$send_beacon];
#line 238
enum TreeP$__nesc_unnamed4366 {
#line 238
  TreeP$sendRequest = 1U
};
#line 238
typedef int TreeP$__nesc_sillytask_sendRequest[TreeP$sendRequest];
#line 250
enum TreeP$__nesc_unnamed4367 {
#line 250
  TreeP$sendReply = 2U
};
#line 250
typedef int TreeP$__nesc_sillytask_sendReply[TreeP$sendReply];
#line 264
enum TreeP$__nesc_unnamed4368 {
#line 264
  TreeP$sendReplyAck = 3U
};
#line 264
typedef int TreeP$__nesc_sillytask_sendReplyAck[TreeP$sendReplyAck];
#line 36
uint8_t TreeP$gPIndex = 0xFF;
uint16_t TreeP$gParent_id = 0xFF;
uint16_t TreeP$listen_id;
uint16_t TreeP$child_id;
uint32_t TreeP$beacon_interval;

message_t TreeP$sendBuf;
bool TreeP$radioOn;
#line 43
bool TreeP$sendBusy;
bool TreeP$TreeConnected = FALSE;
bool TreeP$NbrUpdatePending = FALSE;
bool TreeP$ConnRequestPending = FALSE;


dozer_beacon_t TreeP$local;


dozer_parent_t TreeP$nbrTable[NBR_TABLE_SIZE];
uint8_t TreeP$index[MAX_POTENTIAL_PARENTS];


static void TreeP$startTimer(void );
static void TreeP$start_radio(void );
static void TreeP$stop_radio(void );

static inline void TreeP$report_problem(void );
static inline void TreeP$report_sent(void );
static inline void TreeP$report_received(void );

static inline void TreeP$Boot$booted(void );
#line 92
static void TreeP$startTimer(void );
#line 105
static void TreeP$start_radio(void );







static void TreeP$stop_radio(void );







static inline void TreeP$RadioControl$startDone(error_t error);




static inline void TreeP$RadioControl$stopDone(error_t error);




static void TreeP$TDMASchedule$radioWakeup(uint8_t type, uint16_t node_id);
#line 165
static inline void TreeP$BeaconTimer$fired(void );
#line 183
static inline void TreeP$ConnRepWaitTimer$fired(void );





static inline void TreeP$NeighbourUpdateTimer$fired(void );






static inline void TreeP$NeighbourUpdateStopTimer$fired(void );










static inline void TreeP$BeaconWaitTimer$fired(void );





static inline void TreeP$ConnReqListenTimer$fired(void );








static inline void TreeP$send_beacon$runTask(void );
#line 238
static inline void TreeP$sendRequest$runTask(void );
#line 250
static inline void TreeP$sendReply$runTask(void );
#line 264
static inline void TreeP$sendReplyAck$runTask(void );
#line 276
static error_t TreeP$chooseParent(void );
#line 289
static inline void TreeP$replaceEntry(uint8_t src, dozer_beacon_t beacon);
#line 307
static inline void TreeP$updateNgbrs(uint8_t src, dozer_beacon_t beacon);
#line 364
static inline message_t *TreeP$BeaconReceive$receive(message_t *msg, void *payload, uint8_t len);
#line 423
static void TreeP$BeaconSend$sendDone(message_t *msg, error_t error);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorConfig.nc"
static void RF230ActiveMessageP$TrafficMonitorConfig$channelError(void );
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SlottedCollisionConfig.nc"
static void RF230ActiveMessageP$SlottedCollisionConfig$timerTick(void );
# 124 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
static uint8_t RF230ActiveMessageP$IEEE154Packet$getDSN(message_t *msg);
#line 79
static bool RF230ActiveMessageP$IEEE154Packet$isAckFrame(message_t *msg);
#line 129
static void RF230ActiveMessageP$IEEE154Packet$setDSN(message_t *msg, uint8_t dsn);
#line 92
static void RF230ActiveMessageP$IEEE154Packet$createAckReply(message_t *data, message_t *ack);
#line 39
static ieee154_header_t *RF230ActiveMessageP$IEEE154Packet$getHeader(message_t *msg);
#line 155
static uint16_t RF230ActiveMessageP$IEEE154Packet$getSrcAddr(message_t *msg);
#line 67
static bool RF230ActiveMessageP$IEEE154Packet$isDataFrame(message_t *msg);
#line 103
static bool RF230ActiveMessageP$IEEE154Packet$getAckRequired(message_t *msg);
#line 98
static bool RF230ActiveMessageP$IEEE154Packet$verifyAckReply(message_t *data, message_t *ack);
#line 49
static void RF230ActiveMessageP$IEEE154Packet$setLength(message_t *msg, uint8_t length);
#line 190
static bool RF230ActiveMessageP$IEEE154Packet$requiresAckWait(message_t *msg);
#line 44
static uint8_t RF230ActiveMessageP$IEEE154Packet$getLength(message_t *msg);
#line 196
static bool RF230ActiveMessageP$IEEE154Packet$requiresAckReply(message_t *msg);
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
static void RF230ActiveMessageP$Packet$clear(
#line 51
message_t * msg);
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static uint16_t RF230ActiveMessageP$RadioAlarm$getNow(void );
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline uint8_t RF230ActiveMessageP$RF230Config$getLength(message_t *msg);




static inline void RF230ActiveMessageP$RF230Config$setLength(message_t *msg, uint8_t len);




static inline uint8_t *RF230ActiveMessageP$RF230Config$getPayload(message_t *msg);




static __inline rf230packet_metadata_t *RF230ActiveMessageP$getMeta(message_t *msg);




static inline uint8_t RF230ActiveMessageP$RF230Config$getHeaderLength(void );





static inline uint8_t RF230ActiveMessageP$RF230Config$getMaxLength(void );





static inline uint8_t RF230ActiveMessageP$RF230Config$getDefaultChannel(void );




static inline bool RF230ActiveMessageP$RF230Config$requiresRssiCca(message_t *msg);






static inline bool RF230ActiveMessageP$SoftwareAckConfig$requiresAckWait(message_t *msg);




static inline bool RF230ActiveMessageP$SoftwareAckConfig$isAckPacket(message_t *msg);




static inline bool RF230ActiveMessageP$SoftwareAckConfig$verifyAckPacket(message_t *data, message_t *ack);




static inline bool RF230ActiveMessageP$SoftwareAckConfig$requiresAckReply(message_t *msg);




static inline void RF230ActiveMessageP$SoftwareAckConfig$createAckPacket(message_t *data, message_t *ack);




static void RF230ActiveMessageP$SoftwareAckConfig$setAckReceived(message_t *msg, bool acked);







static inline uint16_t RF230ActiveMessageP$SoftwareAckConfig$getAckTimeout(void );




static inline void RF230ActiveMessageP$SoftwareAckConfig$reportChannelError(void );






static inline uint8_t RF230ActiveMessageP$UniqueConfig$getSequenceNumber(message_t *msg);




static inline void RF230ActiveMessageP$UniqueConfig$setSequenceNumber(message_t *msg, uint8_t dsn);




static inline am_addr_t RF230ActiveMessageP$UniqueConfig$getSender(message_t *msg);




static inline void RF230ActiveMessageP$UniqueConfig$reportChannelError(void );






static inline error_t RF230ActiveMessageP$ActiveMessageConfig$checkPacket(message_t *msg);
#line 184
enum RF230ActiveMessageP$__nesc_unnamed4369 {

  RF230ActiveMessageP$TRAFFIC_UPDATE_PERIOD = 100, 
  RF230ActiveMessageP$TRAFFIC_MAX_BYTES = (uint16_t )(RF230ActiveMessageP$TRAFFIC_UPDATE_PERIOD * 1000UL / 32)
};

static inline uint16_t RF230ActiveMessageP$TrafficMonitorConfig$getUpdatePeriod(void );




static uint16_t RF230ActiveMessageP$TrafficMonitorConfig$getChannelTime(message_t *msg);
#line 208
static inline am_addr_t RF230ActiveMessageP$TrafficMonitorConfig$getSender(message_t *msg);




static inline void RF230ActiveMessageP$TrafficMonitorConfig$timerTick(void );
#line 229
static inline uint16_t RF230ActiveMessageP$RandomCollisionConfig$getMinimumBackoff(void );




static inline uint16_t RF230ActiveMessageP$RandomCollisionConfig$getInitialBackoff(message_t *msg);




static inline uint16_t RF230ActiveMessageP$RandomCollisionConfig$getCongestionBackoff(message_t *msg);




static inline uint16_t RF230ActiveMessageP$RandomCollisionConfig$getTransmitBarrier(message_t *msg);
#line 260
static inline void RF230ActiveMessageP$RadioAlarm$fired(void );
#line 291
static inline void RF230ActiveMessageP$SlottedCollisionConfig$default$timerTick(void );
# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
static void RF230PacketP$IEEE154Packet$createDataFrame(message_t *msg);
#line 49
static void RF230PacketP$IEEE154Packet$setLength(message_t *msg, uint8_t length);
#line 44
static uint8_t RF230PacketP$IEEE154Packet$getLength(message_t *msg);
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
enum RF230PacketP$__nesc_unnamed4370 {

  RF230PacketP$PACKET_LENGTH_INCREASE = 
  sizeof(rf230packet_header_t ) - 1
   + sizeof(ieee154_footer_t )
};

static __inline rf230packet_metadata_t *RF230PacketP$getMeta(message_t *msg);






static inline void RF230PacketP$Packet$clear(message_t *msg);






static __inline void RF230PacketP$Packet$setPayloadLength(message_t *msg, uint8_t len);




static __inline uint8_t RF230PacketP$Packet$payloadLength(message_t *msg);




static __inline uint8_t RF230PacketP$Packet$maxPayloadLength(void );




static inline void *RF230PacketP$Packet$getPayload(message_t *msg, uint8_t len);
#line 135
static inline void RF230PacketP$PacketLinkQuality$set(message_t *msg, uint8_t value);
#line 152
static inline void RF230PacketP$PacketTimeStampRadio$clear(message_t *msg);




static void RF230PacketP$PacketTimeStampRadio$set(message_t *msg, uint32_t value);
#line 193
static inline bool RF230PacketP$PacketTransmitPower$isSet(message_t *msg);




static inline uint8_t RF230PacketP$PacketTransmitPower$get(message_t *msg);
#line 227
static inline void RF230PacketP$PacketRSSI$clear(message_t *msg);




static inline void RF230PacketP$PacketRSSI$set(message_t *msg, uint8_t value);








static inline bool RF230PacketP$PacketTimeSyncOffset$isSet(message_t *msg);




static inline uint8_t RF230PacketP$PacketTimeSyncOffset$get(message_t *msg);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t IEEE154PacketP$ActiveMessageAddress$amAddress(void );




static am_group_t IEEE154PacketP$ActiveMessageAddress$amGroup(void );
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
enum IEEE154PacketP$__nesc_unnamed4371 {

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




static __inline ieee154_header_t *IEEE154PacketP$IEEE154Packet$getHeader(message_t *msg);




static __inline uint8_t IEEE154PacketP$IEEE154Packet$getLength(message_t *msg);




static __inline void IEEE154PacketP$IEEE154Packet$setLength(message_t *msg, uint8_t length);
#line 88
static __inline bool IEEE154PacketP$IEEE154Packet$isDataFrame(message_t *msg);




static __inline void IEEE154PacketP$IEEE154Packet$createDataFrame(message_t *msg);




static __inline bool IEEE154PacketP$IEEE154Packet$isAckFrame(message_t *msg);
#line 111
static __inline void IEEE154PacketP$IEEE154Packet$createAckReply(message_t *data, message_t *ack);








static __inline bool IEEE154PacketP$IEEE154Packet$verifyAckReply(message_t *data, message_t *ack);







static __inline bool IEEE154PacketP$IEEE154Packet$getAckRequired(message_t *msg);
#line 154
static __inline uint8_t IEEE154PacketP$IEEE154Packet$getDSN(message_t *msg);




static __inline void IEEE154PacketP$IEEE154Packet$setDSN(message_t *msg, uint8_t dsn);









static __inline void IEEE154PacketP$IEEE154Packet$setDestPan(message_t *msg, uint16_t pan);




static __inline uint16_t IEEE154PacketP$IEEE154Packet$getDestAddr(message_t *msg);




static __inline void IEEE154PacketP$IEEE154Packet$setDestAddr(message_t *msg, uint16_t addr);




static __inline uint16_t IEEE154PacketP$IEEE154Packet$getSrcAddr(message_t *msg);




static __inline void IEEE154PacketP$IEEE154Packet$setSrcAddr(message_t *msg, uint16_t addr);






static __inline uint8_t IEEE154PacketP$IEEE154Packet$get6LowPan(message_t *msg);




static __inline void IEEE154PacketP$IEEE154Packet$set6LowPan(message_t *msg, uint8_t network);






static __inline am_id_t IEEE154PacketP$IEEE154Packet$getType(message_t *msg);




static __inline void IEEE154PacketP$IEEE154Packet$setType(message_t *msg, am_id_t type);




static inline bool IEEE154PacketP$IEEE154Packet$requiresAckWait(message_t *msg);






static bool IEEE154PacketP$IEEE154Packet$requiresAckReply(message_t *msg);
#line 238
static __inline am_addr_t IEEE154PacketP$AMPacket$address(void );




static __inline am_group_t IEEE154PacketP$AMPacket$localGroup(void );





static __inline am_addr_t IEEE154PacketP$AMPacket$destination(message_t *msg);




static __inline am_addr_t IEEE154PacketP$AMPacket$source(message_t *msg);




static __inline void IEEE154PacketP$AMPacket$setDestination(message_t *msg, am_addr_t addr);




static __inline void IEEE154PacketP$AMPacket$setSource(message_t *msg, am_addr_t addr);




static __inline bool IEEE154PacketP$AMPacket$isForMe(message_t *msg);





static __inline am_id_t IEEE154PacketP$AMPacket$type(message_t *msg);




static __inline void IEEE154PacketP$AMPacket$setType(message_t *msg, am_id_t type);









static __inline void IEEE154PacketP$AMPacket$setGroup(message_t *msg, am_group_t grp);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
am_addr_t ActiveMessageAddressC$addr = TOS_AM_ADDRESS;


am_group_t ActiveMessageAddressC$group = TOS_AM_GROUP;






static inline am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void );
#line 82
static inline am_group_t ActiveMessageAddressC$ActiveMessageAddress$amGroup(void );
#line 95
static am_addr_t ActiveMessageAddressC$amAddress(void );
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer1P$CompareA$fired(void );
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm1281Timer1P$Capture$captured(HplAtm1281Timer1P$Capture$size_type t);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer1P$CompareB$fired(void );
#line 49
static void HplAtm1281Timer1P$CompareC$fired(void );
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm1281Timer1P$Timer$overflow(void );
# 70 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline uint16_t HplAtm1281Timer1P$Timer$get(void );


static inline void HplAtm1281Timer1P$Timer$set(uint16_t t);








static inline void HplAtm1281Timer1P$Timer$setScale(uint8_t s);










static inline uint8_t HplAtm1281Timer1P$TimerCtrl$getControlB(void );
#line 106
static inline void HplAtm1281Timer1P$TimerCtrl$setControlB(uint8_t x);
#line 125
static inline uint8_t HplAtm1281Timer1P$TimerCtrl$getInterruptFlag(void );









static inline void HplAtm1281Timer1P$Capture$setEdge(bool up);



static inline void HplAtm1281Timer1P$Capture$reset(void );
static inline void HplAtm1281Timer1P$CompareA$reset(void );



static inline void HplAtm1281Timer1P$Timer$start(void );
static inline void HplAtm1281Timer1P$Capture$start(void );
static inline void HplAtm1281Timer1P$CompareA$start(void );




static inline void HplAtm1281Timer1P$Capture$stop(void );
static inline void HplAtm1281Timer1P$CompareA$stop(void );



static inline bool HplAtm1281Timer1P$Timer$test(void );
#line 194
static inline void HplAtm1281Timer1P$CompareA$set(uint16_t t);




static inline uint16_t HplAtm1281Timer1P$Capture$get(void );






void __vector_17(void ) __attribute((interrupt))   ;


static inline void HplAtm1281Timer1P$CompareB$default$fired(void );
void __vector_18(void ) __attribute((interrupt))   ;


static inline void HplAtm1281Timer1P$CompareC$default$fired(void );
void __vector_19(void ) __attribute((interrupt))   ;



void __vector_16(void ) __attribute((interrupt))   ;



void __vector_20(void ) __attribute((interrupt))   ;
# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$setScale(uint8_t scale);
#line 58
static void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$set(/*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$timer_size t);










static void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$start(void );
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitOneP.InitOne*/Atm128TimerInitC$0$Init$init(void );








static inline void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$overflow(void );
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
static /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$CounterFrom$size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$CounterFrom$get(void );






static bool /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$CounterFrom$isOverflowPending(void );










static void /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$Counter$overflow(void );
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
/*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$upper_count_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$m_upper;

enum /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$__nesc_unnamed4372 {

  TransformCounterC$0$LOW_SHIFT_RIGHT = 0, 
  TransformCounterC$0$HIGH_SHIFT_LEFT = 8 * sizeof(/*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$from_size_type ) - /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$LOW_SHIFT_RIGHT, 
  TransformCounterC$0$NUM_UPPER_BITS = 8 * sizeof(/*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$to_size_type ) - 8 * sizeof(/*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$from_size_type ) + 0, 



  TransformCounterC$0$OVERFLOW_MASK = /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$NUM_UPPER_BITS ? ((/*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$upper_count_type )2 << (/*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$to_size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$Counter$get(void );
#line 122
static inline void /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$CounterFrom$overflow(void );
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$size_type /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$get(void );
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline uint32_t /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC$0$LocalTime$get(void );




static inline void /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void );
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerCtrl8.nc"
static uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$TimerCtrl$getInterruptFlag(void );
#line 62
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$TimerCtrl$setControlB(uint8_t control);
#line 61
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$TimerCtrl$setControlA(uint8_t control);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Alarm$fired(void );
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Counter$overflow(void );
# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerAsync.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$TimerAsync$setTimer2Asynchronous(void );
#line 75
static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$TimerAsync$compareABusy(void );
# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Compare$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Compare$get(void );





static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Compare$set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Compare$size_type t);










static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Compare$start(void );
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Timer$timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Timer$get(void );
# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$set;
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$t0;
#line 63
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$dt;
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$base;



enum /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$__nesc_unnamed4373 {
  Atm1281AlarmAsyncP$0$MINDT = 2, 
  Atm1281AlarmAsyncP$0$MAXT = 230
};



static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$setInterrupt(void );


static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Init$init(void );
#line 101
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$setOcr2A(uint8_t n);
#line 117
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$setInterrupt(void );
#line 176
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Compare$fired(void );
#line 188
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Counter$get(void );
#line 231
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Alarm$stop(void );







static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Alarm$startAt(uint32_t nt0, uint32_t ndt);









static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Alarm$getNow(void );



static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Alarm$getAlarm(void );



static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Timer$overflow(void );
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer2AsyncP$Compare$fired(void );
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm1281Timer2AsyncP$Timer$overflow(void );
# 79 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline uint8_t HplAtm1281Timer2AsyncP$Timer$get(void );
#line 111
static inline void HplAtm1281Timer2AsyncP$TimerCtrl$setControlA(uint8_t x);





static inline void HplAtm1281Timer2AsyncP$TimerCtrl$setControlB(uint8_t x);
#line 134
static inline uint8_t HplAtm1281Timer2AsyncP$TimerCtrl$getInterruptFlag(void );
#line 161
static inline void HplAtm1281Timer2AsyncP$Compare$start(void );









static inline uint8_t HplAtm1281Timer2AsyncP$Compare$get(void );


static inline void HplAtm1281Timer2AsyncP$Compare$set(uint8_t t);









static __inline void HplAtm1281Timer2AsyncP$stabiliseTimer2(void );
#line 199
static inline mcu_power_t HplAtm1281Timer2AsyncP$McuPowerOverride$lowestState(void );
#line 222
void __vector_13(void ) __attribute((signal))   ;







void __vector_15(void ) __attribute((signal))   ;
#line 246
static inline void HplAtm1281Timer2AsyncP$TimerAsync$setTimer2Asynchronous(void );
#line 258
static inline int HplAtm1281Timer2AsyncP$TimerAsync$compareABusy(void );
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
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$__nesc_unnamed4374 {
#line 63
  AlarmToTimerC$0$fired = 4U
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
uint8_t arg_0x4080fa90);
#line 60
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4375 {
#line 60
  VirtualizeTimerC$0$updateFromTimer = 5U
};
#line 60
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer];
#line 42
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4376 {

  VirtualizeTimerC$0$NUM_TIMERS = 18, 
  VirtualizeTimerC$0$END_OF_LIST = 255
};








#line 48
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4377 {

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




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(uint8_t num, uint32_t dt);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(uint8_t num);
#line 173
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShotAt(uint8_t num, uint32_t t0, uint32_t dt);
#line 193
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num);
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$1$Counter$size_type /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$1$Counter$get(void );
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$1$LocalTime$get(void );




static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$1$Counter$overflow(void );
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static void RadioAlarmP$RadioAlarm$fired(
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
uint8_t arg_0x40847a70);
# 98 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
static RadioAlarmP$Alarm$size_type RadioAlarmP$Alarm$getNow(void );
#line 55
static void RadioAlarmP$Alarm$start(RadioAlarmP$Alarm$size_type dt);






static void RadioAlarmP$Alarm$stop(void );
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
static void RadioAlarmP$Tasklet$schedule(void );
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
uint8_t RadioAlarmP$state;
enum RadioAlarmP$__nesc_unnamed4378 {

  RadioAlarmP$STATE_READY = 0, 
  RadioAlarmP$STATE_WAIT = 1, 
  RadioAlarmP$STATE_FIRED = 2
};

uint8_t RadioAlarmP$alarm;

static inline void RadioAlarmP$Alarm$fired(void );










static __inline uint16_t RadioAlarmP$RadioAlarm$getNow(uint8_t id);




static inline void RadioAlarmP$Tasklet$run(void );








static inline void RadioAlarmP$RadioAlarm$default$fired(uint8_t id);



static __inline bool RadioAlarmP$RadioAlarm$isFree(uint8_t id);




static inline void RadioAlarmP$RadioAlarm$wait(uint8_t id, uint16_t timeout);








static inline void RadioAlarmP$RadioAlarm$cancel(uint8_t id);
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
static void TaskletC$Tasklet$run(void );
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TaskletC.nc"
uint8_t TaskletC$state;

static void TaskletC$doit(void );
#line 83
static __inline void TaskletC$Tasklet$suspend(void );




static void TaskletC$Tasklet$resume(void );
#line 101
static void TaskletC$Tasklet$schedule(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static error_t ActiveMessageLayerC$SubSend$send(
#line 56
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

ActiveMessageLayerC$SubSend$getPayload(
#line 111
message_t * msg, 


uint8_t len);
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static void ActiveMessageLayerC$AMSend$sendDone(
# 28 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
am_id_t arg_0x408515c0, 
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



ActiveMessageLayerC$Snoop$receive(
# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
am_id_t arg_0x408636a8, 
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageConfig.nc"
static error_t ActiveMessageLayerC$Config$checkPacket(message_t *msg);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



ActiveMessageLayerC$Receive$receive(
# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
am_id_t arg_0x40863010, 
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t ActiveMessageLayerC$AMPacket$address(void );
#line 110
static void ActiveMessageLayerC$AMPacket$setSource(
#line 106
message_t * amsg, 



am_addr_t addr);
#line 92
static void ActiveMessageLayerC$AMPacket$setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 136
static am_id_t ActiveMessageLayerC$AMPacket$type(
#line 132
message_t * amsg);
#line 151
static void ActiveMessageLayerC$AMPacket$setType(
#line 147
message_t * amsg, 



am_id_t t);
#line 125
static bool ActiveMessageLayerC$AMPacket$isForMe(
#line 122
message_t * amsg);
#line 176
static void ActiveMessageLayerC$AMPacket$setGroup(
#line 173
message_t * amsg, 


am_group_t grp);







static am_group_t ActiveMessageLayerC$AMPacket$localGroup(void );
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
static error_t ActiveMessageLayerC$AMSend$send(am_id_t id, am_addr_t addr, message_t *msg, uint8_t len);
#line 61
static __inline void ActiveMessageLayerC$SubSend$sendDone(message_t *msg, error_t error);
#line 80
static __inline void *ActiveMessageLayerC$AMSend$getPayload(am_id_t id, message_t *msg, uint8_t len);






static inline message_t *ActiveMessageLayerC$SubReceive$receive(message_t *msg, void *payload, uint8_t len);










static inline message_t *ActiveMessageLayerC$Receive$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len);




static inline message_t *ActiveMessageLayerC$Snoop$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static error_t IEEE154NetworkLayerP$SubSend$send(
#line 56
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

IEEE154NetworkLayerP$SubSend$getPayload(
#line 111
message_t * msg, 


uint8_t len);
#line 89
static void IEEE154NetworkLayerP$Send$sendDone(
#line 85
message_t * msg, 



error_t error);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



IEEE154NetworkLayerP$NonTinyosReceive$receive(
# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154NetworkLayerP.nc"
uint8_t arg_0x4087c480, 
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 172 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
static void IEEE154NetworkLayerP$IEEE154Packet$set6LowPan(message_t *msg, uint8_t network);
#line 167
static uint8_t IEEE154NetworkLayerP$IEEE154Packet$get6LowPan(message_t *msg);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



IEEE154NetworkLayerP$Receive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154NetworkLayerP.nc"
static inline error_t IEEE154NetworkLayerP$Send$send(message_t *msg, uint8_t len);
#line 64
static inline void *IEEE154NetworkLayerP$Send$getPayload(message_t *msg, uint8_t len);




static inline void IEEE154NetworkLayerP$SubSend$sendDone(message_t *msg, error_t error);




static inline message_t *IEEE154NetworkLayerP$SubReceive$receive(message_t *msg, void *payload, uint8_t len);








static inline message_t *IEEE154NetworkLayerP$NonTinyosReceive$default$receive(uint8_t network, message_t *msg, void *payload, uint8_t len);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void MessageBufferLayerP$SplitControl$startDone(error_t error);
#line 117
static void MessageBufferLayerP$SplitControl$stopDone(error_t error);
# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioState.nc"
static error_t MessageBufferLayerP$RadioState$turnOff(void );
#line 45
static error_t MessageBufferLayerP$RadioState$turnOn(void );
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static void MessageBufferLayerP$Send$sendDone(
#line 85
message_t * msg, 



error_t error);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t MessageBufferLayerP$Packet$payloadLength(
#line 63
message_t * msg);
#line 115
static 
#line 112
void * 


MessageBufferLayerP$Packet$getPayload(
#line 110
message_t * msg, 




uint8_t len);
#line 95
static uint8_t MessageBufferLayerP$Packet$maxPayloadLength(void );
#line 83
static void MessageBufferLayerP$Packet$setPayloadLength(
#line 79
message_t * msg, 



uint8_t len);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t MessageBufferLayerP$stateDoneTask$postTask(void );
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



MessageBufferLayerP$Receive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t MessageBufferLayerP$sendTask$postTask(void );
#line 56
static error_t MessageBufferLayerP$deliverTask$postTask(void );
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static error_t MessageBufferLayerP$RadioSend$send(message_t *msg);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
static void MessageBufferLayerP$Tasklet$suspend(void );






static void MessageBufferLayerP$Tasklet$resume(void );
# 101 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
enum MessageBufferLayerP$__nesc_unnamed4379 {
#line 101
  MessageBufferLayerP$stateDoneTask = 6U
};
#line 101
typedef int MessageBufferLayerP$__nesc_sillytask_stateDoneTask[MessageBufferLayerP$stateDoneTask];
#line 139
enum MessageBufferLayerP$__nesc_unnamed4380 {
#line 139
  MessageBufferLayerP$sendTask = 7U
};
#line 139
typedef int MessageBufferLayerP$__nesc_sillytask_sendTask[MessageBufferLayerP$sendTask];
#line 267
enum MessageBufferLayerP$__nesc_unnamed4381 {
#line 267
  MessageBufferLayerP$deliverTask = 8U
};
#line 267
typedef int MessageBufferLayerP$__nesc_sillytask_deliverTask[MessageBufferLayerP$deliverTask];
#line 52
uint8_t MessageBufferLayerP$state;
enum MessageBufferLayerP$__nesc_unnamed4382 {

  MessageBufferLayerP$STATE_READY = 0, 
  MessageBufferLayerP$STATE_TX_PENDING = 1, 
  MessageBufferLayerP$STATE_TX_SEND = 2, 
  MessageBufferLayerP$STATE_TX_DONE = 3, 
  MessageBufferLayerP$STATE_TURN_ON = 4, 
  MessageBufferLayerP$STATE_TURN_OFF = 5
};

static inline error_t MessageBufferLayerP$SplitControl$start(void );
#line 82
static inline error_t MessageBufferLayerP$SplitControl$stop(void );
#line 101
static inline void MessageBufferLayerP$stateDoneTask$runTask(void );
#line 117
static inline void MessageBufferLayerP$RadioState$done(void );
#line 132
message_t *MessageBufferLayerP$txMsg;
error_t MessageBufferLayerP$txError;
uint8_t MessageBufferLayerP$retries;


enum MessageBufferLayerP$__nesc_unnamed4383 {
#line 137
  MessageBufferLayerP$MAX_RETRIES = 5
};
static inline void MessageBufferLayerP$sendTask$runTask(void );
#line 170
static inline void MessageBufferLayerP$RadioSend$sendDone(error_t error);







static inline error_t MessageBufferLayerP$Send$send(message_t *msg, uint8_t len);
#line 195
static inline void MessageBufferLayerP$RadioSend$ready(void );





static inline void MessageBufferLayerP$Tasklet$run(void );
#line 229
static __inline void *MessageBufferLayerP$Send$getPayload(message_t *msg, uint8_t len);






enum MessageBufferLayerP$__nesc_unnamed4384 {

  MessageBufferLayerP$RECEIVE_QUEUE_SIZE = 3
};

message_t MessageBufferLayerP$receiveQueueData[MessageBufferLayerP$RECEIVE_QUEUE_SIZE];
message_t *MessageBufferLayerP$receiveQueue[MessageBufferLayerP$RECEIVE_QUEUE_SIZE];

uint8_t MessageBufferLayerP$receiveQueueHead;
uint8_t MessageBufferLayerP$receiveQueueSize;

static inline error_t MessageBufferLayerP$SoftwareInit$init(void );









static inline bool MessageBufferLayerP$RadioReceive$header(message_t *msg);









static inline void MessageBufferLayerP$deliverTask$runTask(void );
#line 298
static inline message_t *MessageBufferLayerP$RadioReceive$receive(message_t *msg);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static error_t UniqueLayerP$SubSend$send(
#line 56
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

UniqueLayerP$SubSend$getPayload(
#line 111
message_t * msg, 


uint8_t len);
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodFlag.nc"
static bool UniqueLayerP$NeighborhoodFlag$get(uint8_t index);




static void UniqueLayerP$NeighborhoodFlag$set(uint8_t index);
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static void UniqueLayerP$Send$sendDone(
#line 85
message_t * msg, 



error_t error);
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Neighborhood.nc"
static uint8_t UniqueLayerP$Neighborhood$insertNode(am_addr_t id);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
static message_t *UniqueLayerP$RadioReceive$receive(message_t *msg);
#line 35
static bool UniqueLayerP$RadioReceive$header(message_t *msg);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/UniqueConfig.nc"
static void UniqueLayerP$UniqueConfig$setSequenceNumber(message_t *msg, uint8_t number);





static void UniqueLayerP$UniqueConfig$reportChannelError(void );
#line 31
static uint8_t UniqueLayerP$UniqueConfig$getSequenceNumber(message_t *msg);




static am_addr_t UniqueLayerP$UniqueConfig$getSender(message_t *msg);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/UniqueLayerP.nc"
uint8_t UniqueLayerP$sequenceNumber;

static inline error_t UniqueLayerP$Init$init(void );





static inline error_t UniqueLayerP$Send$send(message_t *msg, uint8_t len);










static inline void UniqueLayerP$SubSend$sendDone(message_t *msg, error_t error);









static inline void *UniqueLayerP$Send$getPayload(message_t *msg, uint8_t len);




static inline bool UniqueLayerP$SubReceive$header(message_t *msg);





uint8_t UniqueLayerP$receivedNumbers[5];

static inline message_t *UniqueLayerP$SubReceive$receive(message_t *msg);
#line 115
static inline void UniqueLayerP$Neighborhood$evicted(uint8_t index);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Neighborhood.nc"
static void NeighborhoodP$Neighborhood$evicted(uint8_t index);
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodP.nc"
am_addr_t NeighborhoodP$nodes[5];
uint8_t NeighborhoodP$ages[5];
uint8_t NeighborhoodP$flags[5];
uint8_t NeighborhoodP$time;
uint8_t NeighborhoodP$last;

static inline error_t NeighborhoodP$Init$init(void );
#line 83
static uint8_t NeighborhoodP$Neighborhood$insertNode(am_addr_t node);
#line 147
static __inline bool NeighborhoodP$NeighborhoodFlag$get(uint8_t bit, uint8_t index);




static __inline void NeighborhoodP$NeighborhoodFlag$set(uint8_t bit, uint8_t index);









static inline void NeighborhoodP$NeighborhoodFlag$clearAll(uint8_t bit);
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static error_t TrafficMonitorLayerP$SubSend$send(message_t *msg);
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorConfig.nc"
static uint16_t TrafficMonitorLayerP$TrafficMonitorConfig$getUpdatePeriod(void );




static uint16_t TrafficMonitorLayerP$TrafficMonitorConfig$getChannelTime(message_t *msg);
#line 79
static void TrafficMonitorLayerP$TrafficMonitorConfig$timerTick(void );
#line 43
static am_addr_t TrafficMonitorLayerP$TrafficMonitorConfig$getSender(message_t *msg);
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioState.nc"
static void TrafficMonitorLayerP$RadioState$done(void );
#line 33
static error_t TrafficMonitorLayerP$SubState$turnOff(void );
#line 45
static error_t TrafficMonitorLayerP$SubState$turnOn(void );
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Neighborhood.nc"
static uint8_t TrafficMonitorLayerP$Neighborhood$insertNode(am_addr_t id);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
static message_t *TrafficMonitorLayerP$RadioReceive$receive(message_t *msg);
#line 35
static bool TrafficMonitorLayerP$RadioReceive$header(message_t *msg);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodFlag.nc"
static void TrafficMonitorLayerP$NeighborhoodFlag$clearAll(void );
#line 35
static bool TrafficMonitorLayerP$NeighborhoodFlag$get(uint8_t index);




static void TrafficMonitorLayerP$NeighborhoodFlag$set(uint8_t index);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
static void TrafficMonitorLayerP$Tasklet$suspend(void );






static void TrafficMonitorLayerP$Tasklet$resume(void );
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static void TrafficMonitorLayerP$RadioSend$ready(void );
#line 45
static void TrafficMonitorLayerP$RadioSend$sendDone(error_t error);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t TrafficMonitorLayerP$startStopTimer$postTask(void );
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static void TrafficMonitorLayerP$Timer$startPeriodic(uint32_t dt);
#line 67
static void TrafficMonitorLayerP$Timer$stop(void );
# 229 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
enum TrafficMonitorLayerP$__nesc_unnamed4385 {
#line 229
  TrafficMonitorLayerP$startStopTimer = 9U
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

enum TrafficMonitorLayerP$__nesc_unnamed4386 {


  TrafficMonitorLayerP$TRAFFIC_MONITOR_UINT8_MAX = 1 << (7 - 3), 


  TrafficMonitorLayerP$TRAFFIC_MONITOR_MASK = (1 << 3) - 1, 


  TrafficMonitorLayerP$TRAFFIC_MONITOR_ROUND_UP = (1 << 3) - 1
};

static inline void TrafficMonitorLayerP$SubSend$ready(void );




static inline error_t TrafficMonitorLayerP$RadioSend$send(message_t *msg);





static void TrafficMonitorLayerP$SubSend$sendDone(error_t error);







static inline bool TrafficMonitorLayerP$SubReceive$header(message_t *msg);




static inline message_t *TrafficMonitorLayerP$SubReceive$receive(message_t *msg);
#line 124
static inline void TrafficMonitorLayerP$TrafficMonitorConfig$channelError(void );







static inline void TrafficMonitorLayerP$Timer$fired(void );
#line 171
static inline void TrafficMonitorLayerP$Tasklet$run(void );
#line 195
static inline void TrafficMonitorLayerP$Neighborhood$evicted(uint8_t index);

enum TrafficMonitorLayerP$__nesc_unnamed4387 {

  TrafficMonitorLayerP$RADIO_CMD_NONE = 0, 
  TrafficMonitorLayerP$RADIO_CMD_TURNON = 1, 
  TrafficMonitorLayerP$RADIO_CMD_TURNOFF = 2
};
uint8_t TrafficMonitorLayerP$radioCmd;

static inline error_t TrafficMonitorLayerP$RadioState$turnOff(void );
#line 217
static inline error_t TrafficMonitorLayerP$RadioState$turnOn(void );
#line 229
static inline void TrafficMonitorLayerP$startStopTimer$runTask(void );







static inline void TrafficMonitorLayerP$SubState$done(void );
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static error_t RandomCollisionLayerP$SubSend$send(message_t *msg);
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static void RandomCollisionLayerP$RadioAlarm$wait(uint16_t timeout);
#line 33
static bool RandomCollisionLayerP$RadioAlarm$isFree(void );
#line 53
static uint16_t RandomCollisionLayerP$RadioAlarm$getNow(void );
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Random.nc"
static uint16_t RandomCollisionLayerP$Random$rand16(void );
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RandomCollisionConfig.nc"
static uint16_t RandomCollisionLayerP$Config$getCongestionBackoff(message_t *msg);
#line 29
static uint16_t RandomCollisionLayerP$Config$getInitialBackoff(message_t *msg);










static uint16_t RandomCollisionLayerP$Config$getMinimumBackoff(void );





static uint16_t RandomCollisionLayerP$Config$getTransmitBarrier(message_t *msg);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
static message_t *RandomCollisionLayerP$RadioReceive$receive(message_t *msg);
#line 35
static bool RandomCollisionLayerP$RadioReceive$header(message_t *msg);
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static void RandomCollisionLayerP$RadioSend$ready(void );
#line 45
static void RandomCollisionLayerP$RadioSend$sendDone(error_t error);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t RandomCollisionLayerP$calcNextRandom$postTask(void );
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RandomCollisionLayerP.nc"
enum RandomCollisionLayerP$__nesc_unnamed4388 {
#line 67
  RandomCollisionLayerP$calcNextRandom = 10U
};
#line 67
typedef int RandomCollisionLayerP$__nesc_sillytask_calcNextRandom[RandomCollisionLayerP$calcNextRandom];
#line 46
uint8_t RandomCollisionLayerP$state;
enum RandomCollisionLayerP$__nesc_unnamed4389 {

  RandomCollisionLayerP$STATE_READY = 0, 
  RandomCollisionLayerP$STATE_TX_PENDING_FIRST = 1, 
  RandomCollisionLayerP$STATE_TX_PENDING_SECOND = 2, 
  RandomCollisionLayerP$STATE_TX_SENDING = 3, 

  RandomCollisionLayerP$STATE_BARRIER = 0x80
};

message_t *RandomCollisionLayerP$txMsg;
uint16_t RandomCollisionLayerP$txBarrier;

static inline void RandomCollisionLayerP$SubSend$ready(void );





uint16_t RandomCollisionLayerP$nextRandom;
static inline void RandomCollisionLayerP$calcNextRandom$runTask(void );





static uint16_t RandomCollisionLayerP$getBackoff(uint16_t maxBackoff);
#line 87
static inline error_t RandomCollisionLayerP$RadioSend$send(message_t *msg);
#line 99
static inline void RandomCollisionLayerP$RadioAlarm$fired(void );
#line 144
static inline void RandomCollisionLayerP$SubSend$sendDone(error_t error);







static inline bool RandomCollisionLayerP$SubReceive$header(message_t *msg);




static inline message_t *RandomCollisionLayerP$SubReceive$receive(message_t *msg);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/system/RandomMlcgC.nc"
uint32_t RandomMlcgC$seed;


static inline error_t RandomMlcgC$Init$init(void );






static error_t RandomMlcgC$SeedInit$init(uint16_t s);






static uint32_t RandomMlcgC$Random$rand32(void );
#line 78
static inline uint16_t RandomMlcgC$Random$rand16(void );
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static error_t SoftwareAckLayerP$SubSend$send(message_t *msg);
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static void SoftwareAckLayerP$RadioAlarm$wait(uint16_t timeout);




static void SoftwareAckLayerP$RadioAlarm$cancel(void );
#line 33
static bool SoftwareAckLayerP$RadioAlarm$isFree(void );
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
static message_t *SoftwareAckLayerP$RadioReceive$receive(message_t *msg);
#line 35
static bool SoftwareAckLayerP$RadioReceive$header(message_t *msg);
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SoftwareAckConfig.nc"
static void SoftwareAckLayerP$SoftwareAckConfig$reportChannelError(void );
#line 68
static void SoftwareAckLayerP$SoftwareAckConfig$createAckPacket(message_t *data, message_t *ack);
#line 38
static bool SoftwareAckLayerP$SoftwareAckConfig$requiresAckWait(message_t *msg);
#line 50
static bool SoftwareAckLayerP$SoftwareAckConfig$isAckPacket(message_t *msg);






static bool SoftwareAckLayerP$SoftwareAckConfig$verifyAckPacket(message_t *data, message_t *ack);
#line 32
static uint16_t SoftwareAckLayerP$SoftwareAckConfig$getAckTimeout(void );










static void SoftwareAckLayerP$SoftwareAckConfig$setAckReceived(message_t *msg, bool acked);
#line 63
static bool SoftwareAckLayerP$SoftwareAckConfig$requiresAckReply(message_t *msg);
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static void SoftwareAckLayerP$RadioSend$ready(void );
#line 45
static void SoftwareAckLayerP$RadioSend$sendDone(error_t error);
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SoftwareAckLayerP.nc"
uint8_t SoftwareAckLayerP$state;
enum SoftwareAckLayerP$__nesc_unnamed4390 {

  SoftwareAckLayerP$STATE_READY = 0, 
  SoftwareAckLayerP$STATE_DATA_SEND = 1, 
  SoftwareAckLayerP$STATE_ACK_WAIT = 2, 
  SoftwareAckLayerP$STATE_ACK_SEND = 3
};

message_t *SoftwareAckLayerP$txMsg;
message_t SoftwareAckLayerP$ackMsg;

static inline void SoftwareAckLayerP$SubSend$ready(void );





static inline error_t SoftwareAckLayerP$RadioSend$send(message_t *msg);
#line 83
static inline void SoftwareAckLayerP$SubSend$sendDone(error_t error);
#line 110
static inline void SoftwareAckLayerP$RadioAlarm$fired(void );









static inline bool SoftwareAckLayerP$SubReceive$header(message_t *msg);







static inline message_t *SoftwareAckLayerP$SubReceive$receive(message_t *msg);
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioCCA.nc"
static void RF230LayerP$RadioCCA$done(error_t error);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/BusyWait.nc"
static void RF230LayerP$BusyWait$wait(RF230LayerP$BusyWait$size_type dt);
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/PacketField.nc"
static void RF230LayerP$PacketRSSI$clear(message_t *msg);





static void RF230LayerP$PacketRSSI$set(message_t *msg, RF230LayerP$PacketRSSI$value_type value);
# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
static void RF230LayerP$PacketTimeStamp$clear(
#line 55
message_t * msg);
#line 67
static void RF230LayerP$PacketTimeStamp$set(
#line 62
message_t * msg, 




RF230LayerP$PacketTimeStamp$size_type value);
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230.nc"
static uint8_t RF230LayerP$HplRF230$spiSplitRead(void );





static uint8_t RF230LayerP$HplRF230$spiSplitReadWrite(uint8_t data);





static uint8_t RF230LayerP$HplRF230$spiWrite(uint8_t data);
#line 41
static void RF230LayerP$HplRF230$spiSplitWrite(uint8_t data);
#line 33
static uint16_t RF230LayerP$HplRF230$crcByte(uint16_t crc, uint8_t data);
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioState.nc"
static void RF230LayerP$RadioState$done(void );
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void RF230LayerP$RSTN$makeOutput(void );
#line 29
static void RF230LayerP$RSTN$set(void );
static void RF230LayerP$RSTN$clr(void );
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/PacketField.nc"
static RF230LayerP$PacketTransmitPower$value_type RF230LayerP$PacketTransmitPower$get(message_t *msg);
#line 29
static bool RF230LayerP$PacketTransmitPower$isSet(message_t *msg);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/LocalTime.nc"
static uint32_t RF230LayerP$LocalTime$get(void );
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void RF230LayerP$SLP_TR$makeOutput(void );
#line 29
static void RF230LayerP$SLP_TR$set(void );
static void RF230LayerP$SLP_TR$clr(void );
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
static message_t *RF230LayerP$RadioReceive$receive(message_t *msg);
#line 35
static bool RF230LayerP$RadioReceive$header(message_t *msg);
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static void RF230LayerP$RadioAlarm$wait(uint16_t timeout);
#line 33
static bool RF230LayerP$RadioAlarm$isFree(void );
#line 53
static uint16_t RF230LayerP$RadioAlarm$getNow(void );
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/PacketField.nc"
static RF230LayerP$PacketTimeSyncOffset$value_type RF230LayerP$PacketTimeSyncOffset$get(message_t *msg);
#line 29
static bool RF230LayerP$PacketTimeSyncOffset$isSet(message_t *msg);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t RF230LayerP$SpiResource$release(void );
#line 87
static error_t RF230LayerP$SpiResource$immediateRequest(void );
#line 78
static error_t RF230LayerP$SpiResource$request(void );
#line 118
static bool RF230LayerP$SpiResource$isOwner(void );
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void RF230LayerP$SELN$makeOutput(void );
#line 29
static void RF230LayerP$SELN$set(void );
static void RF230LayerP$SELN$clr(void );
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static void RF230LayerP$RadioSend$ready(void );
#line 45
static void RF230LayerP$RadioSend$sendDone(error_t error);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static void RF230LayerP$IRQ$disable(void );
#line 42
static error_t RF230LayerP$IRQ$captureRisingEdge(void );
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/PacketField.nc"
static void RF230LayerP$PacketLinkQuality$set(message_t *msg, RF230LayerP$PacketLinkQuality$value_type value);
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
static void RF230LayerP$Tasklet$schedule(void );
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230Config.nc"
static uint8_t RF230LayerP$RF230Config$getHeaderLength(void );










static uint8_t RF230LayerP$RF230Config$getDefaultChannel(void );
#line 46
static uint8_t *RF230LayerP$RF230Config$getPayload(message_t *msg);
#line 39
static void RF230LayerP$RF230Config$setLength(message_t *msg, uint8_t len);
#line 34
static uint8_t RF230LayerP$RF230Config$getLength(message_t *msg);
#line 60
static uint8_t RF230LayerP$RF230Config$getMaxLength(void );
#line 72
static bool RF230LayerP$RF230Config$requiresRssiCca(message_t *msg);
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
uint8_t RF230LayerP$state;
enum RF230LayerP$__nesc_unnamed4391 {

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
enum RF230LayerP$__nesc_unnamed4392 {

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
enum RF230LayerP$__nesc_unnamed4393 {

  RF230LayerP$SLEEP_WAKEUP_TIME = (uint16_t )(880 * (7372800UL / 8 / 32 * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2)) / 1000000UL), 
  RF230LayerP$CCA_REQUEST_TIME = (uint16_t )(140 * (7372800UL / 8 / 32 * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2)) / 1000000UL), 

  RF230LayerP$TX_SFD_DELAY = (uint16_t )(176 * (7372800UL / 8 / 32 * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2)) / 1000000UL), 
  RF230LayerP$RX_SFD_DELAY = (uint16_t )(8 * (7372800UL / 8 / 32 * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2)) / 1000000UL)
};

static inline void RF230LayerP$RadioAlarm$fired(void );
#line 186
static inline error_t RF230LayerP$PlatformInit$init(void );
#line 204
static inline error_t RF230LayerP$SoftwareInit$init(void );





static inline void RF230LayerP$initRadio(void );
#line 238
static inline void RF230LayerP$SpiResource$granted(void );
#line 252
static bool RF230LayerP$isSpiAcquired(void );
#line 287
static __inline void RF230LayerP$changeChannel(void );
#line 305
static __inline void RF230LayerP$changeState(void );
#line 346
static inline error_t RF230LayerP$RadioState$turnOff(void );
#line 372
static inline error_t RF230LayerP$RadioState$turnOn(void );
#line 389
static error_t RF230LayerP$RadioSend$send(message_t *msg);
#line 537
static inline void RF230LayerP$RadioCCA$default$done(error_t error);



static __inline void RF230LayerP$downloadMessage(void );
#line 622
static inline void RF230LayerP$IRQ$captured(uint16_t time);
#line 635
static inline void RF230LayerP$serviceRadio(void );
#line 787
static inline void RF230LayerP$Tasklet$run(void );
# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void HplRF230P$PortCLKM$makeInput(void );
#line 30
static void HplRF230P$PortCLKM$clr(void );
# 79 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplRF230P$Capture$setEdge(bool up);
#line 38
static HplRF230P$Capture$size_type HplRF230P$Capture$get(void );
#line 55
static void HplRF230P$Capture$reset(void );


static void HplRF230P$Capture$start(void );


static void HplRF230P$Capture$stop(void );
# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void HplRF230P$PortIRQ$makeInput(void );
#line 30
static void HplRF230P$PortIRQ$clr(void );
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static void HplRF230P$IRQ$captured(uint16_t time);
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static inline error_t HplRF230P$PlatformInit$init(void );










static inline void HplRF230P$Capture$captured(uint16_t time);









static inline error_t HplRF230P$IRQ$captureRisingEdge(void );
#line 83
static inline void HplRF230P$IRQ$disable(void );





static __inline uint16_t HplRF230P$HplRF230$crcByte(uint16_t crc, uint8_t data);




static __inline void HplRF230P$HplRF230$spiSplitWrite(uint8_t data);







static __inline uint8_t HplRF230P$HplRF230$spiSplitRead(void );






static __inline uint8_t HplRF230P$HplRF230$spiSplitReadWrite(uint8_t data);
#line 121
static __inline uint8_t HplRF230P$HplRF230$spiWrite(uint8_t data);
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
uint8_t arg_0x40a63e70);
# 87 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Atm128SpiP$ResourceArbiter$immediateRequest(
# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40a63e70);
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Atm128SpiP$ResourceArbiter$request(
# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40a63e70);
# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static bool Atm128SpiP$ResourceArbiter$isOwner(
# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40a63e70);
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
uint8_t arg_0x40a40010);
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static void Atm128SpiP$McuPowerState$update(void );
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
static bool Atm128SpiP$ArbiterInfo$inUse(void );
# 207 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
enum Atm128SpiP$__nesc_unnamed4394 {
#line 207
  Atm128SpiP$zeroTask = 11U
};
#line 207
typedef int Atm128SpiP$__nesc_sillytask_zeroTask[Atm128SpiP$zeroTask];
#line 90
uint16_t Atm128SpiP$len;
uint8_t * Atm128SpiP$txBuffer;
uint8_t * Atm128SpiP$rxBuffer;
uint16_t Atm128SpiP$pos;

enum Atm128SpiP$__nesc_unnamed4395 {
  Atm128SpiP$SPI_IDLE, 
  Atm128SpiP$SPI_BUSY, 
  Atm128SpiP$SPI_ATOMIC_SIZE = 10
};





static void Atm128SpiP$startSpi(void );
#line 119
static inline void Atm128SpiP$stopSpi(void );







static uint8_t Atm128SpiP$SpiByte$write(uint8_t tx);
#line 162
static inline error_t Atm128SpiP$sendNextPart(void );
#line 207
static inline void Atm128SpiP$zeroTask$runTask(void );
#line 262
static inline 
#line 261
void Atm128SpiP$SpiPacket$default$sendDone(
uint8_t *_txbuffer, uint8_t *_rxbuffer, 
uint16_t _length, error_t _success);

static inline void Atm128SpiP$Spi$dataReady(uint8_t data);
#line 305
static inline error_t Atm128SpiP$Resource$immediateRequest(uint8_t id);







static error_t Atm128SpiP$Resource$request(uint8_t id);








static error_t Atm128SpiP$Resource$release(uint8_t id);









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


void __vector_24(void ) __attribute((signal))   ;
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
enum /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$__nesc_unnamed4396 {
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
uint8_t arg_0x40ac1d38);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$immediateRequested(
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40ac1d38);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$unconfigure(
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40ac09b8);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$configure(
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40ac09b8);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$enqueue(resource_client_id_t id);
#line 43
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$isEmpty(void );
#line 60
static resource_client_id_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$dequeue(void );
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$granted(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40ac1310);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$postTask(void );
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$__nesc_unnamed4397 {
#line 69
  SimpleArbiterP$0$grantedTask = 12U
};
#line 69
typedef int /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$__nesc_sillytask_grantedTask[/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask];
#line 62
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$__nesc_unnamed4398 {
#line 62
  SimpleArbiterP$0$RES_IDLE = 0, SimpleArbiterP$0$RES_GRANTING = 1, SimpleArbiterP$0$RES_BUSY = 2
};
#line 63
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$__nesc_unnamed4399 {
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
static inline uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$isOwner(uint8_t id);






static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$runTask(void );
#line 166
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$requested(uint8_t id);

static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$immediateRequested(uint8_t id);

static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$configure(uint8_t id);

static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$unconfigure(uint8_t id);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$Alarm$fired(void );
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$reset(void );
#line 45
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$set(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$size_type t);










static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$start(void );


static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$stop(void );
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$get(void );
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$Alarm$getNow(void );
#line 65
static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$Alarm$stop(void );



static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$Alarm$start(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$timer_size dt);




static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$Alarm$startAt(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$timer_size t0, /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$timer_size dt);
#line 110
static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$fired(void );






static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$overflow(void );
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/micaz/BusyWaitMicroC.nc"
static __inline void BusyWaitMicroC$BusyWait$wait(uint16_t dt);
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
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/LedsP.nc"
static inline error_t LedsP$Init$init(void );
#line 63
static inline void LedsP$Leds$led0On(void );




static inline void LedsP$Leds$led0Off(void );




static inline void LedsP$Leds$led0Toggle(void );




static inline void LedsP$Leds$led1On(void );









static inline void LedsP$Leds$led1Toggle(void );
#line 103
static inline void LedsP$Leds$led2Toggle(void );
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*DozerC.BeaconSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(
#line 92
message_t * msg, 






error_t error);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*DozerC.BeaconSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$send(
#line 56
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

/*DozerC.BeaconSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$getPayload(
#line 111
message_t * msg, 


uint8_t len);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
static void /*DozerC.BeaconSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 151
static void /*DozerC.BeaconSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(
#line 147
message_t * amsg, 



am_id_t t);
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static error_t /*DozerC.BeaconSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*DozerC.BeaconSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(message_t *m, error_t err);







static inline void */*DozerC.BeaconSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$getPayload(message_t *m, uint8_t len);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40b719f8, 
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$getPayload(
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40b719f8, 
# 121 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 


uint8_t len);
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40b71010, 
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
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4400 {
#line 118
  AMQueueImplP$0$CancelTask = 13U
};
#line 118
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_sillytask_CancelTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask];
#line 161
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4401 {
#line 161
  AMQueueImplP$0$errorTask = 14U
};
#line 161
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_sillytask_errorTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask];
#line 49
#line 47
typedef struct /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4402 {
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
#line 203
static inline void */*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$getPayload(uint8_t id, message_t *m, uint8_t len);



static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(uint8_t id, message_t *msg, error_t err);
# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static void SchedulerP$PPBListenTimer3$startOneShotAt(uint32_t t0, uint32_t dt);
#line 67
static void SchedulerP$PPBListenTimer3$stop(void );
#line 118
static void SchedulerP$TDMAScheduleTimer$startOneShotAt(uint32_t t0, uint32_t dt);
#line 62
static void SchedulerP$TDMAScheduleTimer$startOneShot(uint32_t dt);
#line 118
static void SchedulerP$TDMASlotTimer$startOneShotAt(uint32_t t0, uint32_t dt);
#line 62
static void SchedulerP$TDMASlotTimer$startOneShot(uint32_t dt);




static void SchedulerP$TDMASlotTimer$stop(void );
#line 118
static void SchedulerP$PPBListenTimer1$startOneShotAt(uint32_t t0, uint32_t dt);
#line 67
static void SchedulerP$PPBListenTimer1$stop(void );
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Random.nc"
static uint16_t SchedulerP$Random$rand16(void );
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ParameterInit.nc"
static error_t SchedulerP$SeedInit$init(SchedulerP$SeedInit$parameter param);
# 23 "TDMASchedule.nc"
static void SchedulerP$TDMASchedule$radioWakeup(uint8_t type, uint16_t node_id);
# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static void SchedulerP$PPBListenTimer2$startOneShotAt(uint32_t t0, uint32_t dt);
#line 67
static void SchedulerP$PPBListenTimer2$stop(void );
#line 118
static void SchedulerP$PPBListenTimer0$startOneShotAt(uint32_t t0, uint32_t dt);
#line 67
static void SchedulerP$PPBListenTimer0$stop(void );
# 25 "SchedulerP.nc"
dozer_parent_t *SchedulerP$ParentNodes[MAX_POTENTIAL_PARENTS];
dozer_parent_t SchedulerP$gParentNode;
dozer_child_t SchedulerP$ChildNodes[MAX_CHILDREN];

uint8_t SchedulerP$gParentTSlot;
#line 29
uint8_t SchedulerP$gChildTSlot;
bool SchedulerP$DataSend = FALSE;
bool SchedulerP$DataListen = FALSE;

static inline error_t SchedulerP$TDMASchedule$setPPB(uint8_t *Index, dozer_parent_t *ppb);
#line 53
static inline error_t SchedulerP$TDMASchedule$getPPB(uint8_t *gIndex);
#line 102
static error_t SchedulerP$TDMASchedule$clearTableEntry(uint16_t node_id, uint8_t parent);
#line 167
static void SchedulerP$startBeaconListenTimer(uint8_t parent_index);
#line 220
static error_t SchedulerP$TDMASchedule$startTimers(void );









static error_t SchedulerP$TDMASchedule$stopTimers(void );









static error_t SchedulerP$TDMASchedule$setParentTimeStamp(uint16_t node_id, uint16_t seed, uint32_t timestamp);
#line 264
static inline void SchedulerP$PPBListenTimer0$fired(void );



static inline void SchedulerP$PPBListenTimer1$fired(void );



static inline void SchedulerP$PPBListenTimer2$fired(void );



static inline void SchedulerP$PPBListenTimer3$fired(void );



static inline void SchedulerP$TDMAScheduleTimer$fired(void );
#line 300
static inline void SchedulerP$TDMASlotTimer$fired(void );










static inline void SchedulerP$TDMASchedule$setBeaconTimeStamp(uint32_t timestamp);





static inline void SchedulerP$TDMASchedule$setParentTDMASlot(uint8_t tslot);




static inline uint8_t SchedulerP$TDMASchedule$allocChildTimeSlot(uint16_t node_id);
# 35 "DataManagerP.nc"
static error_t DataManagerP$chooseParent(void );
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t DataManagerP$DataSend$send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

DataManagerP$DataSend$getPayload(
#line 121
message_t * msg, 


uint8_t len);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t DataManagerP$uartSendTask$postTask(void );
#line 56
static error_t DataManagerP$sendTask$postTask(void );
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t DataManagerP$SerialSend$send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
# 3 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/Sample.nc"
static int8_t DataManagerP$Sample$getSample(uint8_t channel, uint8_t channelType, uint32_t interval, uint8_t param);




static error_t DataManagerP$Sample$start(void );
# 90 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Queue.nc"
static error_t DataManagerP$DataQueue$enqueue(
#line 86
DataManagerP$DataQueue$t  newVal);
#line 81
static 
#line 79
DataManagerP$DataQueue$t  

DataManagerP$DataQueue$dequeue(void );
#line 50
static bool DataManagerP$DataQueue$empty(void );







static uint8_t DataManagerP$DataQueue$size(void );
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t DataManagerP$SamplerInit$init(void );
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t DataManagerP$SamplerControl$start(void );
# 41 "DataManagerP.nc"
static error_t DataManagerP$PlugPlay(void );
# 97 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Pool.nc"
static 
#line 94
DataManagerP$DataMessagePool$t * 


DataManagerP$DataMessagePool$get(void );
#line 89
static error_t DataManagerP$DataMessagePool$put(
#line 85
DataManagerP$DataMessagePool$t * newVal);
# 13 "TDMASchedule.nc"
static error_t DataManagerP$TDMASchedule$clearTableEntry(uint16_t node_id, uint8_t parent);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Leds.nc"
static void DataManagerP$Leds$led0Toggle(void );




static void DataManagerP$Leds$led1On(void );
#line 89
static void DataManagerP$Leds$led2Toggle(void );
#line 45
static void DataManagerP$Leds$led0On(void );
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t DataManagerP$sendAvailableData$postTask(void );
# 77 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t DataManagerP$AMPacket$source(
#line 73
message_t * amsg);
# 79 "DataManagerP.nc"
enum DataManagerP$__nesc_unnamed4403 {
#line 79
  DataManagerP$sendAvailableData = 15U
};
#line 79
typedef int DataManagerP$__nesc_sillytask_sendAvailableData[DataManagerP$sendAvailableData];
#line 341
enum DataManagerP$__nesc_unnamed4404 {
#line 341
  DataManagerP$sendTask = 16U
};
#line 341
typedef int DataManagerP$__nesc_sillytask_sendTask[DataManagerP$sendTask];







enum DataManagerP$__nesc_unnamed4405 {
#line 349
  DataManagerP$uartSendTask = 17U
};
#line 349
typedef int DataManagerP$__nesc_sillytask_uartSendTask[DataManagerP$uartSendTask];
#line 65
enum DataManagerP$__nesc_unnamed4406 {
  DataManagerP$TEMP_TYPE = 0, 
  DataManagerP$HUMID_TYPE = 1, 
  DataManagerP$BATTERY_TYPE = 2, 
  DataManagerP$RAIN_TYPE = 3, 
  DataManagerP$SMOIST_TYPE = 4, 
  DataManagerP$STEMP_TYPE = 5, 
  DataManagerP$WSPEED_TYPE = 6, 
  DataManagerP$WDIR_TYPE = 7, 
  DataManagerP$LWET_TYPE = 8, 
  DataManagerP$SOLAR_TYPE = 9, 
  DataManagerP$LWET_TYPE1 = 10
};


static error_t DataManagerP$addToQueue(SensedData *in);

inline static void DataManagerP$start_sampling(void );
inline static void DataManagerP$fatal_problem(void );
inline static void DataManagerP$report_problem(void );

inline static void DataManagerP$report_received(void );


SensedData DataManagerP$packet[11];
message_t DataManagerP$msg_send_buffer;
message_t *DataManagerP$msg_ptr;
SensedData *DataManagerP$tmpdatapack;

uint16_t DataManagerP$parent_id;
#line 94
uint16_t DataManagerP$child_id;
uint16_t DataManagerP$dest;

bool DataManagerP$ackPending = FALSE;
uint8_t DataManagerP$missedAcks = 0;

uint8_t DataManagerP$ChNo[11];
#line 100
uint8_t DataManagerP$Channel[11];
#line 100
uint8_t DataManagerP$Flags[11];
uint32_t DataManagerP$periodicity[11];
int8_t DataManagerP$record[11];

uint16_t DataManagerP$sensor_bitmap;


bool DataManagerP$sending_packet;
bool DataManagerP$RadioOn = FALSE;
uint16_t DataManagerP$packet_ready;










uint8_t DataManagerP$oneshotflag = 0;
uint16_t DataManagerP$lcount[2] = { 0, 0 };
#line 121
uint16_t DataManagerP$lcountMax[2] = { 0, 0 };
uint16_t DataManagerP$lwet[2] = { 0, 0 };





inline static void DataManagerP$init_sensorflags(void );
#line 165
inline static void DataManagerP$initialize(void );
#line 208
static inline error_t DataManagerP$Init$init(void );
#line 235
inline static void DataManagerP$start_sampling(void );
#line 252
static inline void DataManagerP$SamplerControl$startDone(error_t error);









static void DataManagerP$TDMASchedule$radioWakeup(uint8_t type, uint16_t node_id);
#line 300
static error_t DataManagerP$addToQueue(SensedData *in);
#line 326
static void DataManagerP$addLocalDataToQueue(void );
#line 341
static inline void DataManagerP$sendTask$runTask(void );







static inline void DataManagerP$uartSendTask$runTask(void );








static inline void DataManagerP$sendAvailableData$runTask(void );
#line 387
static inline message_t *
DataManagerP$DataReceive$receive(message_t *msg, void *payload, uint8_t len);
#line 429
static inline void DataManagerP$DataSend$sendDone(message_t *msg, error_t error);







static inline void DataManagerP$SerialSend$sendDone(message_t *msg, error_t error);








static 
#line 445
error_t 
DataManagerP$Sample$readDone(uint8_t channel, uint8_t channelType, uint16_t data);
#line 620
inline static void DataManagerP$fatal_problem(void );





inline static void DataManagerP$report_problem(void );

inline static void DataManagerP$report_received(void );
# 10 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/SetParam.nc"
static error_t SamplerM$SetParam8$setParam(uint8_t param);
# 15 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/ADConvert.nc"
static error_t SamplerM$ADC6$read(void );
# 10 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/SetParam.nc"
static error_t SamplerM$SetParam11$setParam(uint8_t param);
#line 10
static error_t SamplerM$SetParam0$setParam(uint8_t param);
# 15 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/ADConvert.nc"
static error_t SamplerM$ADC0$read(void );
# 10 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/Dio.nc"
static error_t SamplerM$Dio2$read(void );



static error_t SamplerM$Dio2$setParam(uint8_t modeToSet);
# 15 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/ADConvert.nc"
static error_t SamplerM$ADC9$read(void );
#line 15
static error_t SamplerM$ADC3$read(void );
# 10 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/SetParam.nc"
static error_t SamplerM$SetParam3$setParam(uint8_t param);
# 15 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/ADConvert.nc"
static error_t SamplerM$ADC12$read(void );
#line 15
static error_t SamplerM$ADC4$read(void );
# 10 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/SetParam.nc"
static error_t SamplerM$SetParam6$setParam(uint8_t param);
# 10 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/Dio.nc"
static error_t SamplerM$Dio5$read(void );



static error_t SamplerM$Dio5$setParam(uint8_t modeToSet);
#line 10
static error_t SamplerM$Dio0$read(void );



static error_t SamplerM$Dio0$setParam(uint8_t modeToSet);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Read.nc"
static error_t SamplerM$Hum$read(void );
# 10 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/SetParam.nc"
static error_t SamplerM$SetParam9$setParam(uint8_t param);
# 15 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/ADConvert.nc"
static error_t SamplerM$ADC7$read(void );
# 10 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/SetParam.nc"
static error_t SamplerM$SetParam12$setParam(uint8_t param);
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t SamplerM$TempHumControl$start(void );
# 5 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/Sample.nc"
static error_t SamplerM$Sample$readDone(uint8_t channel, uint8_t channelType, uint16_t data);
# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static void SamplerM$SamplerTimer$startOneShot(uint32_t dt);
# 15 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/ADConvert.nc"
static error_t SamplerM$ADC1$read(void );
#line 15
static error_t SamplerM$ADC10$read(void );
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void SamplerM$SamplerControl$startDone(error_t error);
# 10 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/SetParam.nc"
static error_t SamplerM$SetParam1$setParam(uint8_t param);
#line 10
static error_t SamplerM$SetParam4$setParam(uint8_t param);
# 10 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/Dio.nc"
static error_t SamplerM$Dio3$read(void );



static error_t SamplerM$Dio3$setParam(uint8_t modeToSet);
#line 10
static error_t SamplerM$Counter$read(void );



static error_t SamplerM$Counter$setParam(uint8_t modeToSet);
# 15 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/ADConvert.nc"
static error_t SamplerM$ADC13$read(void );
#line 15
static error_t SamplerM$ADC5$read(void );
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t SamplerM$IBADCcontrol$start(void );
# 10 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/SetParam.nc"
static error_t SamplerM$SetParam7$setParam(uint8_t param);
#line 10
static error_t SamplerM$SetParam10$setParam(uint8_t param);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Read.nc"
static error_t SamplerM$Temp$read(void );
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t SamplerM$DioControl$start(void );
# 10 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/Dio.nc"
static error_t SamplerM$Dio1$read(void );



static error_t SamplerM$Dio1$setParam(uint8_t modeToSet);
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t SamplerM$CounterControl$start(void );
# 10 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/SetParam.nc"
static error_t SamplerM$SetParam13$setParam(uint8_t param);
# 15 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/ADConvert.nc"
static error_t SamplerM$ADC8$read(void );
# 10 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/SetParam.nc"
static error_t SamplerM$SetParam2$setParam(uint8_t param);
# 15 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/ADConvert.nc"
static error_t SamplerM$ADC2$read(void );
#line 15
static error_t SamplerM$ADC11$read(void );
# 10 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/SetParam.nc"
static error_t SamplerM$SetParam5$setParam(uint8_t param);
# 10 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/Dio.nc"
static error_t SamplerM$Dio4$read(void );



static error_t SamplerM$Dio4$setParam(uint8_t modeToSet);
# 70 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/SamplerM.nc"
static error_t SamplerM$Plugged(void );
#line 91
#line 85
struct SamplerM$SampleRecords {
  uint8_t channel;
  uint8_t channelType;

  int32_t ticks_left;
  uint32_t sampling_interval;
} SamplerM$SampleRecord[25];



static __inline int8_t SamplerM$get_avilable_SampleRecord(void );







static void SamplerM$next_schedule(void );
#line 125
static __inline void SamplerM$setparam_analog(uint8_t i, uint8_t param);
#line 175
static __inline void SamplerM$setparam_digital(int8_t i, uint8_t param);
#line 201
static __inline void SamplerM$setparam_counter(int8_t i, uint8_t param);





static inline void SamplerM$sampleRecord(uint8_t i);
#line 301
static inline error_t SamplerM$SamplerInit$init(void );
#line 315
static inline error_t SamplerM$SamplerControl$start(void );
#line 331
static inline void SamplerM$CounterControl$startDone(error_t error);



static inline void SamplerM$DioControl$startDone(error_t error);



static inline void SamplerM$IBADCcontrol$startDone(error_t error);



static inline void SamplerM$TempHumControl$startDone(error_t error);
#line 358
static inline void SamplerM$TempHumControl$stopDone(error_t error);


static inline error_t SamplerM$PlugPlay(void );





static inline void SamplerM$SamplerTimer$fired(void );
#line 394
static inline error_t SamplerM$Sample$start(void );





static inline int8_t SamplerM$Sample$getSample(uint8_t channel, uint8_t channelType, uint32_t interval, uint8_t param);
#line 435
static inline void SamplerM$ADC0$readDone(uint16_t data);



static inline void SamplerM$ADC1$readDone(uint16_t data);



static inline void SamplerM$ADC2$readDone(uint16_t data);



static inline void SamplerM$ADC3$readDone(uint16_t data);



static inline void SamplerM$ADC4$readDone(uint16_t data);



static inline void SamplerM$ADC5$readDone(uint16_t data);



static inline void SamplerM$ADC6$readDone(uint16_t data);



static inline void SamplerM$ADC7$readDone(uint16_t data);



static inline void SamplerM$ADC8$readDone(uint16_t data);



static inline void SamplerM$ADC9$readDone(uint16_t data);



static inline void SamplerM$ADC10$readDone(uint16_t data);



static inline void SamplerM$ADC11$readDone(uint16_t data);



static inline void SamplerM$ADC12$readDone(uint16_t data);



static inline void SamplerM$ADC13$readDone(uint16_t data);









static inline void SamplerM$Temp$readDone(error_t result, uint16_t data);



static inline void SamplerM$Hum$readDone(error_t result, uint16_t data);



static inline void SamplerM$Dio0$readDone(uint16_t data);



static inline void SamplerM$Dio1$readDone(uint16_t data);



static inline void SamplerM$Dio2$readDone(uint16_t data);



static inline void SamplerM$Dio3$readDone(uint16_t data);



static inline void SamplerM$Dio4$readDone(uint16_t data);



static inline void SamplerM$Dio5$readDone(uint16_t data);



static inline void SamplerM$Counter$readDone(uint16_t data);
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15.nc"
static error_t /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Sht15Temp$measureTemperature(void );
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Read.nc"
static void /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Humidity$readDone(error_t result, /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Humidity$val_t val);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$TempResource$release(void );
#line 78
static error_t /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$TempResource$request(void );
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15.nc"
static error_t /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Sht15Hum$measureHumidity(void );
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$HumResource$release(void );
#line 78
static error_t /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$HumResource$request(void );
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Read.nc"
static void /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Temperature$readDone(error_t result, /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Temperature$val_t val);
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15ReaderP.nc"
static inline error_t /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Temperature$read(void );




static inline void /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$TempResource$granted(void );







static inline void /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Sht15Temp$measureTemperatureDone(error_t result, uint16_t val);






static inline error_t /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Humidity$read(void );




static inline void /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$HumResource$granted(void );







static inline void /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Sht15Hum$measureHumidityDone(error_t result, uint16_t val);




static inline void /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Sht15Temp$resetDone(error_t result);
static inline void /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Sht15Temp$measureHumidityDone(error_t result, uint16_t val);
static inline void /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Sht15Temp$readStatusRegDone(error_t result, uint8_t val);
static inline void /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Sht15Temp$writeStatusRegDone(error_t result);

static inline void /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Sht15Hum$resetDone(error_t result);
static inline void /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Sht15Hum$measureTemperatureDone(error_t result, uint16_t val);
static inline void /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Sht15Hum$readStatusRegDone(error_t result, uint8_t val);
static inline void /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Sht15Hum$writeStatusRegDone(error_t result);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15.nc"
static void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$SensirionSht15$measureHumidityDone(
# 25 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15LogicP.nc"
uint8_t arg_0x40d68258, 
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15.nc"
error_t result, uint16_t val);
#line 87
static void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$SensirionSht15$writeStatusRegDone(
# 25 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15LogicP.nc"
uint8_t arg_0x40d68258, 
# 87 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15.nc"
error_t result);
#line 71
static void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$SensirionSht15$readStatusRegDone(
# 25 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15LogicP.nc"
uint8_t arg_0x40d68258, 
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15.nc"
error_t result, uint8_t val);
#line 25
static void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$SensirionSht15$resetDone(
# 25 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15LogicP.nc"
uint8_t arg_0x40d68258, 
# 25 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15.nc"
error_t result);
#line 40
static void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$SensirionSht15$measureTemperatureDone(
# 25 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15LogicP.nc"
uint8_t arg_0x40d68258, 
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15.nc"
error_t result, uint16_t val);
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static error_t /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$InterruptDATA$disable(void );
#line 43
static error_t /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$InterruptDATA$enableFallingEdge(void );
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$readSensor$postTask(void );
#line 56
static error_t /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$signalStatusDone$postTask(void );
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$CLOCK$makeOutput(void );
#line 29
static void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$CLOCK$set(void );
static void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$CLOCK$clr(void );


static void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$DATA$makeInput(void );
#line 32
static bool /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$DATA$get(void );


static void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$DATA$makeOutput(void );
#line 29
static void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$DATA$set(void );
static void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$DATA$clr(void );
# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$Timer$startOneShot(uint32_t dt);




static void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$Timer$stop(void );
# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15LogicP.nc"
enum /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$__nesc_unnamed4407 {
#line 73
  SensirionSht15LogicP$0$readSensor = 18U
};
#line 73
typedef int /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$__nesc_sillytask_readSensor[/*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$readSensor];
enum /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$__nesc_unnamed4408 {
#line 74
  SensirionSht15LogicP$0$signalStatusDone = 19U
};
#line 74
typedef int /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$__nesc_sillytask_signalStatusDone[/*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$signalStatusDone];
#line 43
#line 37
typedef enum /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$__nesc_unnamed4409 {
  SensirionSht15LogicP$0$CMD_MEASURE_TEMPERATURE = 0x3, 
  SensirionSht15LogicP$0$CMD_MEASURE_HUMIDITY = 0x5, 
  SensirionSht15LogicP$0$CMD_READ_STATUS = 0x7, 
  SensirionSht15LogicP$0$CMD_WRITE_STATUS = 0x6, 
  SensirionSht15LogicP$0$CMD_SOFT_RESET = 0x1E
} /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$sht_cmd_t;

enum /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$__nesc_unnamed4410 {
  SensirionSht15LogicP$0$TIMEOUT_RESET = 11, 
  SensirionSht15LogicP$0$TIMEOUT_14BIT = 250, 
  SensirionSht15LogicP$0$TIMEOUT_12BIT = 250, 
  SensirionSht15LogicP$0$TIMEOUT_8BIT = 250
};

bool /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$on = TRUE;
bool /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$busy = FALSE;
uint8_t /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$status = 0;
/*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$sht_cmd_t /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$cmd;
uint8_t /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$newStatus;
bool /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$writeFail = FALSE;

uint8_t /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$currentClient;

static error_t /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$performCommand(void );
static inline void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$initPins(void );
static inline void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$resetDevice(void );
static inline void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$transmissionStart(void );
static inline void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$sendCommand(uint8_t _cmd);
static void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$writeByte(uint8_t byte);
static error_t /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$waitForResponse(void );
static inline void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$enableInterrupt(void );
static uint8_t /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$readByte(void );
static inline void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$ack(void );
static void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$endTransmission(void );
#line 84
static inline error_t /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$SensirionSht15$measureTemperature(uint8_t client);







static inline error_t /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$SensirionSht15$measureHumidity(uint8_t client);
#line 120
static error_t /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$performCommand(void );
#line 191
static inline void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$initPins(void );







static inline void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$resetDevice(void );










static inline void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$transmissionStart(void );
#line 222
static inline void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$sendCommand(uint8_t _cmd);



static void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$writeByte(uint8_t byte);
#line 239
static error_t /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$waitForResponse(void );
#line 252
static inline void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$enableInterrupt(void );





static inline void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$Timer$fired(void );
#line 286
static inline void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$InterruptDATA$fired(void );




static inline void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$readSensor$runTask(void );
#line 326
static uint8_t /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$readByte(void );
#line 343
static inline void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$ack(void );








static void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$endTransmission(void );






static inline void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$signalStatusDone$runTask(void );
#line 377
static inline void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$SensirionSht15$default$resetDone(uint8_t client, error_t result);
static inline void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$SensirionSht15$default$measureTemperatureDone(uint8_t client, error_t result, uint16_t val);
static inline void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$SensirionSht15$default$measureHumidityDone(uint8_t client, error_t result, uint16_t val);
static inline void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$SensirionSht15$default$readStatusRegDone(uint8_t client, error_t result, uint8_t val);
static inline void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$SensirionSht15$default$writeStatusRegDone(uint8_t client, error_t result);
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplSensirionSht15C.Int*/Atm128GpioInterruptC$0$Atm128Interrupt$clear(void );
#line 40
static void /*HplSensirionSht15C.Int*/Atm128GpioInterruptC$0$Atm128Interrupt$disable(void );
#line 59
static void /*HplSensirionSht15C.Int*/Atm128GpioInterruptC$0$Atm128Interrupt$edge(bool low_to_high);
#line 35
static void /*HplSensirionSht15C.Int*/Atm128GpioInterruptC$0$Atm128Interrupt$enable(void );
# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static void /*HplSensirionSht15C.Int*/Atm128GpioInterruptC$0$Interrupt$fired(void );
# 15 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static error_t /*HplSensirionSht15C.Int*/Atm128GpioInterruptC$0$enable(bool rising);
#line 29
static inline error_t /*HplSensirionSht15C.Int*/Atm128GpioInterruptC$0$Interrupt$enableFallingEdge(void );



static inline error_t /*HplSensirionSht15C.Int*/Atm128GpioInterruptC$0$Interrupt$disable(void );




static inline void /*HplSensirionSht15C.Int*/Atm128GpioInterruptC$0$Atm128Interrupt$fired(void );
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
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$enable(void );
static __inline void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$disable(void );
#line 61
static inline void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$IrqSignal$fired(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$fired(void );
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$enable(void );
static __inline void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$disable(void );
#line 61
static inline void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$IrqSignal$fired(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$fired(void );
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$IrqSignal$fired(void );

static inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$default$fired(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$fired(void );
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$clear(void );
static __inline void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$enable(void );
static __inline void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$disable(void );



static __inline void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$edge(bool low_to_high);
#line 61
static inline void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$IrqSignal$fired(void );
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void HplSensirionSht15P$SplitControl$startDone(error_t error);
#line 117
static void HplSensirionSht15P$SplitControl$stopDone(error_t error);
# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void HplSensirionSht15P$SCK$makeInput(void );
#line 30
static void HplSensirionSht15P$SCK$clr(void );




static void HplSensirionSht15P$DATA$makeOutput(void );
#line 29
static void HplSensirionSht15P$DATA$set(void );
# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static void HplSensirionSht15P$Timer$startOneShot(uint32_t dt);
# 20 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/HplSensirionSht15P.nc"
enum HplSensirionSht15P$__nesc_unnamed4411 {
#line 20
  HplSensirionSht15P$stopTask = 20U
};
#line 20
typedef int HplSensirionSht15P$__nesc_sillytask_stopTask[HplSensirionSht15P$stopTask];

static inline error_t HplSensirionSht15P$SplitControl$start(void );








static inline void HplSensirionSht15P$Timer$fired(void );
#line 44
static inline void HplSensirionSht15P$stopTask$runTask(void );
# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
enum /*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$__nesc_unnamed4412 {
#line 39
  FcfsResourceQueueC$1$NO_ENTRY = 0xFF
};
uint8_t /*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$resQ[2U];
uint8_t /*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$qHead = /*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$NO_ENTRY;
uint8_t /*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$qTail = /*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$NO_ENTRY;

static inline error_t /*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$Init$init(void );




static inline bool /*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$isEmpty(void );



static inline bool /*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$dequeue(void );
#line 72
static inline error_t /*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$enqueue(resource_client_id_t id);
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$ResourceRequested$requested(
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40ac1d38);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$ResourceConfigure$unconfigure(
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40ac09b8);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$ResourceConfigure$configure(
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40ac09b8);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static error_t /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$Queue$enqueue(resource_client_id_t id);
#line 43
static bool /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$Queue$isEmpty(void );
#line 60
static resource_client_id_t /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$Queue$dequeue(void );
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$Resource$granted(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40ac1310);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$grantedTask$postTask(void );
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
enum /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$__nesc_unnamed4413 {
#line 69
  SimpleArbiterP$1$grantedTask = 21U
};
#line 69
typedef int /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$__nesc_sillytask_grantedTask[/*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$grantedTask];
#line 62
enum /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$__nesc_unnamed4414 {
#line 62
  SimpleArbiterP$1$RES_IDLE = 0, SimpleArbiterP$1$RES_GRANTING = 1, SimpleArbiterP$1$RES_BUSY = 2
};
#line 63
enum /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$__nesc_unnamed4415 {
#line 63
  SimpleArbiterP$1$NO_RES = 0xFF
};
uint8_t /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$state = /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$RES_IDLE;
uint8_t /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$resId = /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$NO_RES;
uint8_t /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$reqResId;



static error_t /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$Resource$request(uint8_t id);
#line 97
static error_t /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$Resource$release(uint8_t id);
#line 154
static inline void /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$grantedTask$runTask(void );









static inline void /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$Resource$default$granted(uint8_t id);

static inline void /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$ResourceRequested$default$requested(uint8_t id);



static inline void /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$ResourceConfigure$default$configure(uint8_t id);

static inline void /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$ResourceConfigure$default$unconfigure(uint8_t id);
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/system/NoLedsC.nc"
static inline void NoLedsC$Leds$led0On(void );



static inline void NoLedsC$Leds$led1On(void );



static inline void NoLedsC$Leds$led2On(void );
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void MDA300DigitalLogicP$SplitControl$startDone(error_t error);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t MDA300DigitalLogicP$set_io_toggle$postTask(void );
# 15 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/Dio.nc"
static void MDA300DigitalLogicP$Dio$readDone(
# 12 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300DigitalLogicP.nc"
uint8_t arg_0x40e3d550, 
# 15 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/Dio.nc"
uint16_t data);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t MDA300DigitalLogicP$read_io$postTask(void );
#line 56
static error_t MDA300DigitalLogicP$init_io$postTask(void );
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t MDA300DigitalLogicP$I2CResource$request(void );
# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void MDA300DigitalLogicP$IntPin$makeInput(void );
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t MDA300DigitalLogicP$set_io_low$postTask(void );
# 65 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/I2CPacket.nc"
static error_t MDA300DigitalLogicP$I2CPacket$read(i2c_flags_t flags, uint16_t addr, uint8_t length, 
#line 61
uint8_t * data);
#line 81
static error_t MDA300DigitalLogicP$I2CPacket$write(i2c_flags_t flags, uint16_t addr, uint8_t length, 
#line 77
uint8_t * data);
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void MDA300DigitalLogicP$Interrupt$disable(void );
#line 35
static void MDA300DigitalLogicP$Interrupt$enable(void );
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t MDA300DigitalLogicP$set_io_high$postTask(void );
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300DigitalLogicP.nc"
enum MDA300DigitalLogicP$__nesc_unnamed4416 {
#line 43
  MDA300DigitalLogicP$init_io = 22U
};
#line 43
typedef int MDA300DigitalLogicP$__nesc_sillytask_init_io[MDA300DigitalLogicP$init_io];
#line 87
enum MDA300DigitalLogicP$__nesc_unnamed4417 {
#line 87
  MDA300DigitalLogicP$set_io_high = 23U
};
#line 87
typedef int MDA300DigitalLogicP$__nesc_sillytask_set_io_high[MDA300DigitalLogicP$set_io_high];
#line 111
enum MDA300DigitalLogicP$__nesc_unnamed4418 {
#line 111
  MDA300DigitalLogicP$set_io_low = 24U
};
#line 111
typedef int MDA300DigitalLogicP$__nesc_sillytask_set_io_low[MDA300DigitalLogicP$set_io_low];
#line 135
enum MDA300DigitalLogicP$__nesc_unnamed4419 {
#line 135
  MDA300DigitalLogicP$set_io_toggle = 25U
};
#line 135
typedef int MDA300DigitalLogicP$__nesc_sillytask_set_io_toggle[MDA300DigitalLogicP$set_io_toggle];
#line 214
enum MDA300DigitalLogicP$__nesc_unnamed4420 {
#line 214
  MDA300DigitalLogicP$read_io = 26U
};
#line 214
typedef int MDA300DigitalLogicP$__nesc_sillytask_read_io[MDA300DigitalLogicP$read_io];
#line 26
uint8_t MDA300DigitalLogicP$state;
uint8_t MDA300DigitalLogicP$io_value;
uint8_t MDA300DigitalLogicP$mode[8];
uint16_t MDA300DigitalLogicP$count[8];
uint8_t MDA300DigitalLogicP$bitmap_high;
#line 30
uint8_t MDA300DigitalLogicP$bitmap_low;
#line 30
uint8_t MDA300DigitalLogicP$bitmap_toggle;
uint8_t MDA300DigitalLogicP$i2c_data;
#line 31
uint8_t MDA300DigitalLogicP$buff;









enum MDA300DigitalLogicP$__nesc_unnamed4421 {
#line 41
  MDA300DigitalLogicP$GET_DATA, MDA300DigitalLogicP$SET_OUTPUT_HIGH, MDA300DigitalLogicP$SET_OUTPUT_LOW, MDA300DigitalLogicP$SET_OUTPUT_TOGGLE, MDA300DigitalLogicP$GET_THEN_SET_INPUT, MDA300DigitalLogicP$IDLE, MDA300DigitalLogicP$INIT
};
static inline void MDA300DigitalLogicP$init_io$runTask(void );







static inline void MDA300DigitalLogicP$I2CResource$granted(void );




static inline error_t MDA300DigitalLogicP$SplitControl$start(void );
#line 79
static error_t MDA300DigitalLogicP$Dio$setParam(uint8_t channel, uint8_t modeToSet);







static inline void MDA300DigitalLogicP$set_io_high$runTask(void );
#line 111
static inline void MDA300DigitalLogicP$set_io_low$runTask(void );
#line 135
static inline void MDA300DigitalLogicP$set_io_toggle$runTask(void );
#line 199
static error_t MDA300DigitalLogicP$Dio$read(uint8_t channel);









static void MDA300DigitalLogicP$Dio$default$readDone(uint8_t channel, uint16_t data);




static inline void MDA300DigitalLogicP$read_io$runTask(void );
#line 229
static void MDA300DigitalLogicP$I2CPacket$writeDone(error_t error, uint16_t addr, uint8_t length, uint8_t *data);
#line 244
static void MDA300DigitalLogicP$I2CPacket$readDone(error_t error, uint16_t addr, uint8_t length, uint8_t *data);
#line 298
static inline void MDA300DigitalLogicP$Interrupt$fired(void );
# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
enum /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$__nesc_unnamed4422 {
#line 39
  FcfsResourceQueueC$2$NO_ENTRY = 0xFF
};
uint8_t /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$resQ[4U];
uint8_t /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$qHead = /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$NO_ENTRY;
uint8_t /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$qTail = /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$NO_ENTRY;

static inline error_t /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$Init$init(void );




static inline bool /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$FcfsQueue$isEmpty(void );



static inline bool /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$FcfsQueue$isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$FcfsQueue$dequeue(void );
#line 72
static inline error_t /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$FcfsQueue$enqueue(resource_client_id_t id);
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$ResourceRequested$requested(
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40ea5010);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$unconfigure(
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40ea4430);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$configure(
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40ea4430);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$Queue$enqueue(resource_client_id_t id);
#line 43
static bool /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$Queue$isEmpty(void );
#line 60
static resource_client_id_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$Queue$dequeue(void );
# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$requested(void );
#line 46
static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$granted(void );
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$Resource$granted(
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40ea6540);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$grantedTask$postTask(void );
# 75 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
enum /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$__nesc_unnamed4423 {
#line 75
  ArbiterP$0$grantedTask = 27U
};
#line 75
typedef int /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$__nesc_sillytask_grantedTask[/*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$grantedTask];
#line 67
enum /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$__nesc_unnamed4424 {
#line 67
  ArbiterP$0$RES_CONTROLLED, ArbiterP$0$RES_GRANTING, ArbiterP$0$RES_IMM_GRANTING, ArbiterP$0$RES_BUSY
};
#line 68
enum /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$__nesc_unnamed4425 {
#line 68
  ArbiterP$0$default_owner_id = 4U
};
#line 69
enum /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$__nesc_unnamed4426 {
#line 69
  ArbiterP$0$NO_RES = 0xFF
};
uint8_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$state = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$RES_CONTROLLED;
uint8_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$resId = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$default_owner_id;
uint8_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$reqResId;



static error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$Resource$request(uint8_t id);
#line 108
static error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$Resource$release(uint8_t id);
#line 129
static inline error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$release(void );
#line 173
static inline uint8_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$Resource$isOwner(uint8_t id);
#line 186
static inline void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$grantedTask$runTask(void );
#line 200
static inline void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(uint8_t id);
#line 212
static inline void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(uint8_t id);

static inline void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(uint8_t id);
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/power/PowerDownCleanup.nc"
static void /*Atm128I2CMasterP.Power*/AsyncPowerManagerP$0$PowerDownCleanup$cleanup(void );
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Atm128I2CMasterP.Power*/AsyncPowerManagerP$0$ResourceDefaultOwner$release(void );
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AsyncStdControl.nc"
static error_t /*Atm128I2CMasterP.Power*/AsyncPowerManagerP$0$AsyncStdControl$start(void );









static error_t /*Atm128I2CMasterP.Power*/AsyncPowerManagerP$0$AsyncStdControl$stop(void );
# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128I2CMasterP.Power*/AsyncPowerManagerP$0$ResourceDefaultOwner$requested(void );









static inline void /*Atm128I2CMasterP.Power*/AsyncPowerManagerP$0$ResourceDefaultOwner$granted(void );




static inline void /*Atm128I2CMasterP.Power*/AsyncPowerManagerP$0$PowerDownCleanup$default$cleanup(void );
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2C.nc"
static void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$Atm128I2C$stop(void );
# 65 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/I2CPacket.nc"
static error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$SubPacket$read(i2c_flags_t flags, uint16_t addr, uint8_t length, 
#line 61
uint8_t * data);
#line 81
static error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$SubPacket$write(i2c_flags_t flags, uint16_t addr, uint8_t length, 
#line 77
uint8_t * data);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$Resource$granted(
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x40edee88);
# 101 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/I2CPacket.nc"
static void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$I2CPacket$writeDone(
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x40edba58, 
# 101 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/I2CPacket.nc"
error_t error, uint16_t addr, uint8_t length, 
#line 98
uint8_t * data);
#line 91
static void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$I2CPacket$readDone(
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x40edba58, 
# 91 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/I2CPacket.nc"
error_t error, uint16_t addr, uint8_t length, 
#line 88
uint8_t * data);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$SubResource$release(
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x40ed9d10);
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$SubResource$request(
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x40ed9d10);
# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static bool /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$SubResource$isOwner(
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x40ed9d10);





enum /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$__nesc_unnamed4427 {
  Atm128I2CMasterImplP$0$NO_CLIENT = 0xff
};

uint8_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$currentClient = /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$NO_CLIENT;

static inline error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$Resource$request(uint8_t id);
#line 67
static inline void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$SubResource$granted(uint8_t id);




static inline error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$Resource$release(uint8_t id);




static inline bool /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$Resource$isOwner(uint8_t id);



static error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$I2CPacket$write(uint8_t id, i2c_flags_t flags, uint16_t addr, uint8_t len, uint8_t *data);








static error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$I2CPacket$read(uint8_t id, i2c_flags_t flags, uint16_t addr, uint8_t len, uint8_t *data);








static inline void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$SubPacket$readDone(error_t error, uint16_t addr, uint8_t len, uint8_t *data);


static inline void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$SubPacket$writeDone(error_t error, uint16_t addr, uint8_t len, uint8_t *data);



static inline void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$Resource$default$granted(uint8_t id);
static inline void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$I2CPacket$default$writeDone(uint8_t id, error_t error, uint16_t addr, uint8_t len, uint8_t *data);
static inline void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$I2CPacket$default$readDone(uint8_t id, error_t error, uint16_t addr, uint8_t len, uint8_t *data);
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$readCurrent(void );
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$sendCommand(void );




static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$setStart(bool on);
#line 45
static uint8_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$status(void );
#line 60
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$enableInterrupt(bool enable);
#line 82
static uint8_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$read(void );
#line 42
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$init(bool hasExternalPulldown);
#line 57
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$enableAck(bool enable);
#line 76
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$enable(bool on);




static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$write(uint8_t data);
#line 43
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$off(void );
#line 55
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$setStop(bool on);
#line 74
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$setInterruptPending(bool on);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Leds.nc"
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$WriteDebugLeds$led1On(void );
#line 78
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$WriteDebugLeds$led2On(void );
#line 45
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$WriteDebugLeds$led0On(void );
# 101 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/I2CPacket.nc"
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2CPacket$writeDone(error_t error, uint16_t addr, uint8_t length, 
#line 98
uint8_t * data);
#line 91
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2CPacket$readDone(error_t error, uint16_t addr, uint8_t length, 
#line 88
uint8_t * data);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterPacketP.nc"
enum /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$__nesc_unnamed4428 {
  Atm128I2CMasterPacketP$0$I2C_OFF = 0, 
  Atm128I2CMasterPacketP$0$I2C_IDLE = 1, 
  Atm128I2CMasterPacketP$0$I2C_BUSY = 2, 
  Atm128I2CMasterPacketP$0$I2C_ADDR = 3, 
  Atm128I2CMasterPacketP$0$I2C_DATA = 4, 
  Atm128I2CMasterPacketP$0$I2C_STARTING = 5, 
  Atm128I2CMasterPacketP$0$I2C_STOPPING = 6
};

uint8_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C_OFF;
i2c_flags_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$packetFlags;
uint8_t */*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$packetPtr;
uint8_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$packetLen;
uint8_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$index;
uint16_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$packetAddr;
bool /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$reading = FALSE;

static inline void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$i2c_abort(error_t err);
#line 93
static inline error_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$AsyncStdControl$start(void );
#line 110
static inline error_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$AsyncStdControl$stop(void );
#line 128
static inline error_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2CPacket$read(i2c_flags_t flags, uint16_t addr, uint8_t len, uint8_t *data);
#line 179
static inline error_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2CPacket$write(i2c_flags_t flags, uint16_t addr, uint8_t len, uint8_t *data);
#line 254
static inline void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$commandComplete(void );
#line 336
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$Atm128I2C$stop(void );
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
static void HplAtm128I2CBusP$I2C$commandComplete(void );
# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void HplAtm128I2CBusP$I2CClk$makeInput(void );
#line 29
static void HplAtm128I2CBusP$I2CClk$set(void );
static void HplAtm128I2CBusP$I2CClk$clr(void );


static void HplAtm128I2CBusP$I2CData$makeInput(void );
#line 29
static void HplAtm128I2CBusP$I2CData$set(void );
static void HplAtm128I2CBusP$I2CData$clr(void );
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBusP.nc"
uint8_t HplAtm128I2CBusP$current;

static inline void HplAtm128I2CBusP$I2C$init(bool hasExternalPulldown);
#line 70
static inline void HplAtm128I2CBusP$I2C$off(void );




static inline uint8_t HplAtm128I2CBusP$I2C$status(void );



static inline void HplAtm128I2CBusP$I2C$sendCommand(void );



static void HplAtm128I2CBusP$I2C$readCurrent(void );




static inline void HplAtm128I2CBusP$I2C$setStart(bool on);
#line 100
static inline void HplAtm128I2CBusP$I2C$setStop(bool on);
#line 113
static inline void HplAtm128I2CBusP$I2C$write(uint8_t data);



static inline uint8_t HplAtm128I2CBusP$I2C$read(void );



static inline void HplAtm128I2CBusP$I2C$enableAck(bool enable);
#line 134
static inline void HplAtm128I2CBusP$I2C$enableInterrupt(bool enable);
#line 155
static inline void HplAtm128I2CBusP$I2C$setInterruptPending(bool on);








static inline void HplAtm128I2CBusP$I2C$enable(bool enable);
#line 182
void __vector_39(void ) __attribute((signal))   ;
# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void MDA300IBADCLogicP$VoltageBuffer$set(void );
static void MDA300IBADCLogicP$VoltageBuffer$clr(void );
#line 29
static void MDA300IBADCLogicP$Exitation33$set(void );
static void MDA300IBADCLogicP$Exitation33$clr(void );
# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static void MDA300IBADCLogicP$PowerStabalizingTimer$startOneShot(uint32_t dt);
# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/ADConvert.nc"
static void MDA300IBADCLogicP$ADConvert$readDone(
# 13 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300IBADCLogicP.nc"
uint8_t arg_0x40f88248, 
# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/ADConvert.nc"
uint16_t data);
# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void MDA300IBADCLogicP$Exitation50$set(void );
static void MDA300IBADCLogicP$Exitation50$clr(void );
#line 29
static void MDA300IBADCLogicP$VoltageBooster$set(void );
static void MDA300IBADCLogicP$VoltageBooster$clr(void );
# 12 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/Switch.nc"
static error_t MDA300IBADCLogicP$Switch$setAll(uint8_t value);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t MDA300IBADCLogicP$I2CResource$release(void );
#line 78
static error_t MDA300IBADCLogicP$I2CResource$request(void );
#line 118
static bool MDA300IBADCLogicP$I2CResource$isOwner(void );
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Leds.nc"
static void MDA300IBADCLogicP$Leds$led1Toggle(void );
# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void MDA300IBADCLogicP$Amplifier$set(void );
static void MDA300IBADCLogicP$Amplifier$clr(void );
# 65 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/I2CPacket.nc"
static error_t MDA300IBADCLogicP$I2CPacket$read(i2c_flags_t flags, uint16_t addr, uint8_t length, 
#line 61
uint8_t * data);
#line 81
static error_t MDA300IBADCLogicP$I2CPacket$write(i2c_flags_t flags, uint16_t addr, uint8_t length, 
#line 77
uint8_t * data);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t MDA300IBADCLogicP$adc_get_data$postTask(void );
# 161 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300IBADCLogicP.nc"
enum MDA300IBADCLogicP$__nesc_unnamed4429 {
#line 161
  MDA300IBADCLogicP$adc_get_data = 28U
};
#line 161
typedef int MDA300IBADCLogicP$__nesc_sillytask_adc_get_data[MDA300IBADCLogicP$adc_get_data];
#line 32
enum MDA300IBADCLogicP$__nesc_unnamed4430 {
#line 32
  MDA300IBADCLogicP$IDLE, MDA300IBADCLogicP$PICK_CHANNEL, MDA300IBADCLogicP$GET_SAMPLE, MDA300IBADCLogicP$CONTINUE_SAMPLE, MDA300IBADCLogicP$START_CONVERSION_PROCESS
};
#line 47
uint8_t MDA300IBADCLogicP$state = MDA300IBADCLogicP$IDLE;
uint16_t MDA300IBADCLogicP$value;
uint8_t MDA300IBADCLogicP$buff[3];
uint8_t MDA300IBADCLogicP$chan;
uint8_t MDA300IBADCLogicP$param[13 + 1];
uint16_t MDA300IBADCLogicP$adc_bitmap = 0;
int8_t MDA300IBADCLogicP$conversionNumber;


uint8_t MDA300IBADCLogicP$condition;


static error_t MDA300IBADCLogicP$convert(void );


static inline void MDA300IBADCLogicP$setExcitation(void );
#line 76
static void MDA300IBADCLogicP$resetExcitation(void );
#line 101
static inline void MDA300IBADCLogicP$setNumberOfConversions(void );
#line 155
static inline error_t MDA300IBADCLogicP$SetParam$setParam(uint8_t id, uint8_t mode);





static inline void MDA300IBADCLogicP$adc_get_data$runTask(void );
#line 245
static error_t MDA300IBADCLogicP$convert(void );
#line 311
static error_t MDA300IBADCLogicP$ADConvert$read(uint8_t id);









static inline void MDA300IBADCLogicP$I2CResource$granted(void );





static inline void MDA300IBADCLogicP$Switch$setAllDone(bool r);
#line 350
static inline void MDA300IBADCLogicP$PowerStabalizingTimer$fired(void );



static void MDA300IBADCLogicP$I2CPacket$readDone(error_t error, uint16_t addr, uint8_t length, uint8_t *data);
#line 398
static void MDA300IBADCLogicP$I2CPacket$writeDone(error_t error, uint16_t addr, uint8_t length, uint8_t *data);
#line 424
static void MDA300IBADCLogicP$ADConvert$default$readDone(uint8_t port, uint16_t data);









static inline void MDA300IBADCLogicP$Switch$setDone(bool r);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void MDA300IBADCSwitchP$SwitchControl$startDone(error_t error);
# 15 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/Switch.nc"
static void MDA300IBADCSwitchP$Switch$setDone(bool result);
static void MDA300IBADCSwitchP$Switch$setAllDone(bool result);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t MDA300IBADCSwitchP$I2CResource$release(void );
#line 78
static error_t MDA300IBADCSwitchP$I2CResource$request(void );
# 81 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/I2CPacket.nc"
static error_t MDA300IBADCSwitchP$I2CPacket$write(i2c_flags_t flags, uint16_t addr, uint8_t length, 
#line 77
uint8_t * data);
# 22 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300IBADCSwitchP.nc"
enum MDA300IBADCSwitchP$__nesc_unnamed4431 {
#line 22
  MDA300IBADCSwitchP$GET_SWITCH, MDA300IBADCSwitchP$SET_SWITCH, MDA300IBADCSwitchP$SET_SWITCH_ALL, 
  MDA300IBADCSwitchP$SET_SWITCH_GET, MDA300IBADCSwitchP$IDLE
};
uint8_t MDA300IBADCSwitchP$sw_state;
uint8_t MDA300IBADCSwitchP$state;





static inline error_t MDA300IBADCSwitchP$SwitchControl$start(void );
#line 68
static inline error_t MDA300IBADCSwitchP$Switch$setAll(uint8_t val);
#line 81
static inline void MDA300IBADCSwitchP$I2CResource$granted(void );








static void MDA300IBADCSwitchP$I2CPacket$writeDone(error_t error, uint16_t addr, uint8_t length, uint8_t *data);
#line 105
static inline void MDA300IBADCSwitchP$I2CPacket$readDone(error_t error, uint16_t addr, uint8_t length, uint8_t *data);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void HplMDA300IBADCP$SplitControl$startDone(error_t error);
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void HplMDA300IBADCP$VoltageBuffer$makeOutput(void );
#line 30
static void HplMDA300IBADCP$VoltageBuffer$clr(void );




static void HplMDA300IBADCP$Exitation33$makeOutput(void );
#line 30
static void HplMDA300IBADCP$Exitation33$clr(void );




static void HplMDA300IBADCP$Exitation50$makeOutput(void );
#line 30
static void HplMDA300IBADCP$Exitation50$clr(void );




static void HplMDA300IBADCP$VoltageBooster$makeOutput(void );
#line 29
static void HplMDA300IBADCP$VoltageBooster$set(void );
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t HplMDA300IBADCP$SwitchControl$start(void );
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void HplMDA300IBADCP$Power$makeOutput(void );
#line 35
static void HplMDA300IBADCP$Amplifier$makeOutput(void );
#line 30
static void HplMDA300IBADCP$Amplifier$clr(void );
# 22 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/HplMDA300IBADCP.nc"
static inline error_t HplMDA300IBADCP$SplitControl$start(void );




static inline void HplMDA300IBADCP$SwitchControl$startDone(error_t error);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/BusyWait.nc"
static void MDA300CounterLogicP$BusyWait$wait(MDA300CounterLogicP$BusyWait$size_type dt);
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void MDA300CounterLogicP$Interrupt$disable(void );
#line 35
static void MDA300CounterLogicP$Interrupt$enable(void );
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t MDA300CounterLogicP$count_ready$postTask(void );
# 15 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/Dio.nc"
static void MDA300CounterLogicP$Counter$readDone(uint16_t data);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void MDA300CounterLogicP$CounterControl$startDone(error_t error);
# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void MDA300CounterLogicP$IntPin$makeInput(void );
#line 32
static bool MDA300CounterLogicP$IntPin$get(void );
#line 29
static void MDA300CounterLogicP$IntPin$set(void );





static void MDA300CounterLogicP$Power$makeOutput(void );
#line 29
static void MDA300CounterLogicP$Power$set(void );
static void MDA300CounterLogicP$Power$clr(void );
# 115 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300CounterLogicP.nc"
enum MDA300CounterLogicP$__nesc_unnamed4432 {
#line 115
  MDA300CounterLogicP$count_ready = 29U
};
#line 115
typedef int MDA300CounterLogicP$__nesc_sillytask_count_ready[MDA300CounterLogicP$count_ready];
#line 26
uint16_t MDA300CounterLogicP$count;
uint8_t MDA300CounterLogicP$state;
uint8_t MDA300CounterLogicP$mode;
error_t MDA300CounterLogicP$boardConnected;

static inline error_t MDA300CounterLogicP$CounterControl$start(void );
#line 68
static inline error_t MDA300CounterLogicP$Counter$setParam(uint8_t modeToSet);
#line 80
static inline error_t MDA300CounterLogicP$Plugged(void );
#line 99
static inline error_t MDA300CounterLogicP$Counter$read(void );
#line 115
static inline void MDA300CounterLogicP$count_ready$runTask(void );








static inline void MDA300CounterLogicP$Interrupt$fired(void );
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/system/PoolP.nc"
uint8_t /*DataManagerC.DataMessagePoolP.PoolP*/PoolP$0$free;
uint8_t /*DataManagerC.DataMessagePoolP.PoolP*/PoolP$0$index;
/*DataManagerC.DataMessagePoolP.PoolP*/PoolP$0$pool_t * /*DataManagerC.DataMessagePoolP.PoolP*/PoolP$0$queue[25UL];
/*DataManagerC.DataMessagePoolP.PoolP*/PoolP$0$pool_t /*DataManagerC.DataMessagePoolP.PoolP*/PoolP$0$pool[25UL];

static inline error_t /*DataManagerC.DataMessagePoolP.PoolP*/PoolP$0$Init$init(void );
#line 88
static inline /*DataManagerC.DataMessagePoolP.PoolP*/PoolP$0$pool_t */*DataManagerC.DataMessagePoolP.PoolP*/PoolP$0$Pool$get(void );
#line 103
static error_t /*DataManagerC.DataMessagePoolP.PoolP*/PoolP$0$Pool$put(/*DataManagerC.DataMessagePoolP.PoolP*/PoolP$0$pool_t *newVal);
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/system/QueueC.nc"
/*DataManagerC.DataQueueP*/QueueC$0$queue_t  /*DataManagerC.DataQueueP*/QueueC$0$queue[25UL];
uint8_t /*DataManagerC.DataQueueP*/QueueC$0$head = 0;
uint8_t /*DataManagerC.DataQueueP*/QueueC$0$tail = 0;
uint8_t /*DataManagerC.DataQueueP*/QueueC$0$size = 0;

static inline bool /*DataManagerC.DataQueueP*/QueueC$0$Queue$empty(void );



static inline uint8_t /*DataManagerC.DataQueueP*/QueueC$0$Queue$size(void );



static inline uint8_t /*DataManagerC.DataQueueP*/QueueC$0$Queue$maxSize(void );



static inline /*DataManagerC.DataQueueP*/QueueC$0$queue_t /*DataManagerC.DataQueueP*/QueueC$0$Queue$head(void );



static inline void /*DataManagerC.DataQueueP*/QueueC$0$printQueue(void );
#line 85
static inline /*DataManagerC.DataQueueP*/QueueC$0$queue_t /*DataManagerC.DataQueueP*/QueueC$0$Queue$dequeue(void );
#line 97
static inline error_t /*DataManagerC.DataQueueP*/QueueC$0$Queue$enqueue(/*DataManagerC.DataQueueP*/QueueC$0$queue_t newVal);
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*DozerC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$sendDone(
#line 92
message_t * msg, 






error_t error);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*DozerC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$send(
#line 56
message_t * msg, 







uint8_t len);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
static void /*DozerC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 151
static void /*DozerC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setType(
#line 147
message_t * amsg, 



am_id_t t);
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline error_t /*DozerC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*DozerC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$sendDone(message_t *m, error_t err);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$AMSend$send(
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40b719f8, 
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$sendDone(
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40b71010, 
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
enum /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$__nesc_unnamed4433 {
#line 118
  AMQueueImplP$1$CancelTask = 30U
};
#line 118
typedef int /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$__nesc_sillytask_CancelTask[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$CancelTask];
#line 161
enum /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$__nesc_unnamed4434 {
#line 161
  AMQueueImplP$1$errorTask = 31U
};
#line 161
typedef int /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$__nesc_sillytask_errorTask[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$errorTask];
#line 49
#line 47
typedef struct /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$__nesc_unnamed4435 {
  message_t * msg;
} /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$queue_entry_t;

uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current = 1;
/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$queue_entry_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[1];
uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$cancelMask[1 / 8 + 1];

static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$tryToSend(void );

static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$nextPacket(void );
#line 82
static inline error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$send(uint8_t clientId, message_t *msg, 
uint8_t len);
#line 118
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$CancelTask$runTask(void );
#line 155
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$sendDone(uint8_t last, message_t * msg, error_t err);





static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$errorTask$runTask(void );




static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$tryToSend(void );
#line 181
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$AMSend$sendDone(am_id_t id, message_t *msg, error_t err);
#line 207
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$default$sendDone(uint8_t id, message_t *msg, error_t err);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$send(
#line 56
message_t * msg, 







uint8_t len);
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$sendDone(
# 36 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x41082148, 
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Receive$receive(
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x41082b08, 
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$getHeader(message_t * msg);







static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len);
#line 85
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$sendDone(message_t *msg, error_t result);







static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Receive$default$receive(uint8_t id, message_t *msg, void *payload, uint8_t len);



static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubReceive$receive(message_t *msg, void *payload, uint8_t len);








static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$payloadLength(message_t *msg);




static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$setPayloadLength(message_t *msg, uint8_t len);
#line 132
static am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$destination(message_t *amsg);









static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$setDestination(message_t *amsg, am_addr_t addr);
#line 156
static inline am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$type(message_t *amsg);




static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$setType(message_t *amsg, am_id_t type);
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
enum SerialP$__nesc_unnamed4436 {
#line 189
  SerialP$RunTx = 32U
};
#line 189
typedef int SerialP$__nesc_sillytask_RunTx[SerialP$RunTx];
#line 320
enum SerialP$__nesc_unnamed4437 {
#line 320
  SerialP$startDoneTask = 33U
};
#line 320
typedef int SerialP$__nesc_sillytask_startDoneTask[SerialP$startDoneTask];





enum SerialP$__nesc_unnamed4438 {
#line 326
  SerialP$stopDoneTask = 34U
};
#line 326
typedef int SerialP$__nesc_sillytask_stopDoneTask[SerialP$stopDoneTask];








enum SerialP$__nesc_unnamed4439 {
#line 335
  SerialP$defaultSerialFlushTask = 35U
};
#line 335
typedef int SerialP$__nesc_sillytask_defaultSerialFlushTask[SerialP$defaultSerialFlushTask];
#line 79
enum SerialP$__nesc_unnamed4440 {
  SerialP$RX_DATA_BUFFER_SIZE = 2, 
  SerialP$TX_DATA_BUFFER_SIZE = 4, 
  SerialP$SERIAL_MTU = 255, 
  SerialP$SERIAL_VERSION = 1, 
  SerialP$ACK_QUEUE_SIZE = 5
};

enum SerialP$__nesc_unnamed4441 {
  SerialP$RXSTATE_NOSYNC, 
  SerialP$RXSTATE_PROTO, 
  SerialP$RXSTATE_TOKEN, 
  SerialP$RXSTATE_INFO, 
  SerialP$RXSTATE_INACTIVE
};

enum SerialP$__nesc_unnamed4442 {
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
typedef enum SerialP$__nesc_unnamed4443 {
  SerialP$BUFFER_AVAILABLE, 
  SerialP$BUFFER_FILLING, 
  SerialP$BUFFER_COMPLETE
} SerialP$tx_data_buffer_states_t;

enum SerialP$__nesc_unnamed4444 {
  SerialP$TX_ACK_INDEX = 0, 
  SerialP$TX_DATA_INDEX = 1, 
  SerialP$TX_BUFFER_COUNT = 2
};






#line 122
typedef struct SerialP$__nesc_unnamed4445 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP$RX_DATA_BUFFER_SIZE + 1];
} SerialP$rx_buf_t;




#line 128
typedef struct SerialP$__nesc_unnamed4446 {
  uint8_t state;
  uint8_t buf;
} SerialP$tx_buf_t;





#line 133
typedef struct SerialP$__nesc_unnamed4447 {
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
#line 721
static inline void SerialP$SplitControl$default$startDone(error_t err);
static inline void SerialP$SplitControl$default$stopDone(error_t err);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask$postTask(void );
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$sendDone(
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x41134010, 
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
uart_id_t arg_0x41137920, 
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$upperLength(
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x41134b10, 
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$offset(
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x41134b10);
# 23 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$dataLinkLength(
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x41134b10, 
# 23 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$completeSend(void );
#line 51
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$startSend(uint8_t first_byte);
# 147 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_unnamed4448 {
#line 147
  SerialDispatcherP$0$signalSendDone = 36U
};
#line 147
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_sillytask_signalSendDone[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone];
#line 264
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_unnamed4449 {
#line 264
  SerialDispatcherP$0$receiveTask = 37U
};
#line 264
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_sillytask_receiveTask[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask];
#line 55
#line 51
typedef enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_unnamed4450 {
  SerialDispatcherP$0$SEND_STATE_IDLE = 0, 
  SerialDispatcherP$0$SEND_STATE_BEGIN = 1, 
  SerialDispatcherP$0$SEND_STATE_DATA = 2
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$send_state_t;

enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_unnamed4451 {
  SerialDispatcherP$0$RECV_STATE_IDLE = 0, 
  SerialDispatcherP$0$RECV_STATE_BEGIN = 1, 
  SerialDispatcherP$0$RECV_STATE_DATA = 2
};






#line 63
typedef struct /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_unnamed4452 {
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
typedef struct HdlcTranslateC$__nesc_unnamed4453 {
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
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP$Uart0Init$init(void );
#line 130
static inline error_t HplAtm128UartP$Uart0TxControl$start(void );





static inline error_t HplAtm128UartP$Uart0TxControl$stop(void );





static inline error_t HplAtm128UartP$Uart0RxControl$start(void );





static inline error_t HplAtm128UartP$Uart0RxControl$stop(void );





static inline error_t HplAtm128UartP$HplUart0$enableTxIntr(void );





static inline error_t HplAtm128UartP$HplUart0$disableTxIntr(void );




static inline error_t HplAtm128UartP$HplUart0$enableRxIntr(void );




static inline error_t HplAtm128UartP$HplUart0$disableRxIntr(void );
#line 187
static void HplAtm128UartP$HplUart0$tx(uint8_t data);






void __vector_25(void ) __attribute((signal))   ;





void __vector_27(void ) __attribute((interrupt))   ;



static inline error_t HplAtm128UartP$Uart1Init$init(void );
#line 288
void __vector_36(void ) __attribute((signal))   ;




void __vector_38(void ) __attribute((interrupt))   ;





static inline void HplAtm128UartP$HplUart1$default$txDone(void );
static inline void HplAtm128UartP$HplUart1$default$rxDone(uint8_t data);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer3P$CompareA$fired(void );
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm1281Timer3P$Capture$captured(HplAtm1281Timer3P$Capture$size_type t);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer3P$CompareB$fired(void );
#line 49
static void HplAtm1281Timer3P$CompareC$fired(void );
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm1281Timer3P$Timer$overflow(void );
# 70 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline uint16_t HplAtm1281Timer3P$Timer$get(void );


static inline void HplAtm1281Timer3P$Timer$set(uint16_t t);








static inline void HplAtm1281Timer3P$Timer$setScale(uint8_t s);










static inline uint8_t HplAtm1281Timer3P$TimerCtrl$getControlB(void );
#line 106
static inline void HplAtm1281Timer3P$TimerCtrl$setControlB(uint8_t x);
#line 144
static inline void HplAtm1281Timer3P$Timer$start(void );
#line 205
static inline void HplAtm1281Timer3P$CompareA$default$fired(void );
void __vector_32(void ) __attribute((interrupt))   ;


static inline void HplAtm1281Timer3P$CompareB$default$fired(void );
void __vector_33(void ) __attribute((interrupt))   ;


static inline void HplAtm1281Timer3P$CompareC$default$fired(void );
void __vector_34(void ) __attribute((interrupt))   ;


static inline void HplAtm1281Timer3P$Capture$default$captured(uint16_t time);
void __vector_31(void ) __attribute((interrupt))   ;



void __vector_35(void ) __attribute((interrupt))   ;
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

enum /*CounterMicro32C.Transform32*/TransformCounterC$1$__nesc_unnamed4454 {

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
static void /*DozerC.DataSenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$sendDone(
#line 92
message_t * msg, 






error_t error);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*DozerC.DataSenderC.AMQueueEntryP*/AMQueueEntryP$2$Send$send(
#line 56
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

/*DozerC.DataSenderC.AMQueueEntryP*/AMQueueEntryP$2$Send$getPayload(
#line 111
message_t * msg, 


uint8_t len);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
static void /*DozerC.DataSenderC.AMQueueEntryP*/AMQueueEntryP$2$AMPacket$setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 151
static void /*DozerC.DataSenderC.AMQueueEntryP*/AMQueueEntryP$2$AMPacket$setType(
#line 147
message_t * amsg, 



am_id_t t);
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline error_t /*DozerC.DataSenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*DozerC.DataSenderC.AMQueueEntryP*/AMQueueEntryP$2$Send$sendDone(message_t *m, error_t err);







static inline void */*DozerC.DataSenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$getPayload(message_t *m, uint8_t len);
# 109 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/atm128hardware.h"
static __inline  void __nesc_disable_interrupt()
#line 109
{
   __asm volatile ("cli");}

#line 126
#line 125
__inline   __nesc_atomic_t 
__nesc_atomic_start(void )
{
  __nesc_atomic_t result = * (volatile uint8_t *)(0x3F + 0x20);

#line 129
  __nesc_disable_interrupt();
   __asm volatile ("" :  :  : "memory");
  return result;
}



#line 135
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
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/mica/PlatformP.nc"
static inline void PlatformP$power_init(void )
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    * (volatile uint8_t *)(0X35 + 0x20) = 1 << 0;
  }
}

# 106 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P$TimerCtrl$setControlB(uint8_t x)
#line 106
{
  * (volatile uint8_t *)0x81 = x;
}

#line 93
static inline uint8_t HplAtm1281Timer1P$TimerCtrl$getControlB(void )
#line 93
{
  return * (volatile uint8_t *)0x81;
}

#line 82
static inline void HplAtm1281Timer1P$Timer$setScale(uint8_t s)
#line 82
{
  Atm128_TCCRB_t x = (Atm128_TCCRB_t )HplAtm1281Timer1P$TimerCtrl$getControlB();

#line 84
  x.bits.cs = s;
  HplAtm1281Timer1P$TimerCtrl$setControlB(x.flat);
}

# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$setScale(uint8_t scale){
#line 95
  HplAtm1281Timer1P$Timer$setScale(scale);
#line 95
}
#line 95
# 144 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P$Timer$start(void )
#line 144
{
#line 144
  * (volatile uint8_t *)0x6F |= 1 << 0;
}

# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$start(void ){
#line 69
  HplAtm1281Timer1P$Timer$start();
#line 69
}
#line 69
# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P$Timer$set(uint16_t t)
#line 73
{
#line 73
  * (volatile uint16_t *)0x84 = t;
}

# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$set(/*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$timer_size t){
#line 58
  HplAtm1281Timer1P$Timer$set(t);
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
    /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$setScale(2);
  }
  return SUCCESS;
}

# 106 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline void HplAtm1281Timer3P$TimerCtrl$setControlB(uint8_t x)
#line 106
{
  * (volatile uint8_t *)0x91 = x;
}

#line 93
static inline uint8_t HplAtm1281Timer3P$TimerCtrl$getControlB(void )
#line 93
{
  return * (volatile uint8_t *)0x91;
}

#line 82
static inline void HplAtm1281Timer3P$Timer$setScale(uint8_t s)
#line 82
{
  Atm128_TCCRB_t x = (Atm128_TCCRB_t )HplAtm1281Timer3P$TimerCtrl$getControlB();

#line 84
  x.bits.cs = s;
  HplAtm1281Timer3P$TimerCtrl$setControlB(x.flat);
}

# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitThreeP.InitThree*/Atm128TimerInitC$1$Timer$setScale(uint8_t scale){
#line 95
  HplAtm1281Timer3P$Timer$setScale(scale);
#line 95
}
#line 95
# 144 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline void HplAtm1281Timer3P$Timer$start(void )
#line 144
{
#line 144
  * (volatile uint8_t *)0x71 |= 1 << 0;
}

# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitThreeP.InitThree*/Atm128TimerInitC$1$Timer$start(void ){
#line 69
  HplAtm1281Timer3P$Timer$start();
#line 69
}
#line 69
# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline void HplAtm1281Timer3P$Timer$set(uint16_t t)
#line 73
{
#line 73
  * (volatile uint16_t *)0x94 = t;
}

# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitThreeP.InitThree*/Atm128TimerInitC$1$Timer$set(/*InitThreeP.InitThree*/Atm128TimerInitC$1$Timer$timer_size t){
#line 58
  HplAtm1281Timer3P$Timer$set(t);
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
  * (volatile uint8_t * )34U &= ~(1 << 4);
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
  * (volatile uint8_t * )33U &= ~(1 << 4);
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

  * (volatile uint8_t *)(0x08 + 0x20) = 0;
  * (volatile uint8_t *)(0x07 + 0x20) = 0xff;


  MotePlatformP$SerialIdPin$makeInput();
  MotePlatformP$SerialIdPin$clr();

  return MotePlatformP$SubInit$init();
}

# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )34U |= 1 << 0;
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
  * (volatile uint8_t * )34U |= 1 << 1;
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
  * (volatile uint8_t * )34U |= 1 << 2;
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
  * (volatile uint8_t * )33U |= 1 << 0;
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
  * (volatile uint8_t * )33U |= 1 << 1;
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
  * (volatile uint8_t * )33U |= 1 << 2;
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
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/MeasureClockC.nc"
static inline error_t MeasureClockC$Init$init(void )
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

# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )34U |= 1 << 6;
}

# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void RF230LayerP$RSTN$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$set();
#line 29
}
#line 29
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )33U |= 1 << 6;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void RF230LayerP$RSTN$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$makeOutput();
#line 35
}
#line 35
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )37U &= ~(1 << 7);
}

# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void RF230LayerP$SLP_TR$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$clr();
#line 30
}
#line 30
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )36U |= 1 << 7;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void RF230LayerP$SLP_TR$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$makeOutput();
#line 35
}
#line 35
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )37U |= 1 << 0;
}

# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void RF230LayerP$SELN$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$set();
#line 29
}
#line 29
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )36U |= 1 << 0;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void RF230LayerP$SELN$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$makeOutput();
#line 35
}
#line 35
# 186 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
static inline error_t RF230LayerP$PlatformInit$init(void )
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

# 151 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P$Capture$stop(void )
#line 151
{
#line 151
  * (volatile uint8_t *)0x6F &= ~(1 << 5);
}

# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplRF230P$Capture$stop(void ){
#line 61
  HplAtm1281Timer1P$Capture$stop();
#line 61
}
#line 61
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )43U &= ~(1 << 4);
}

# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplRF230P$PortIRQ$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$clr();
#line 30
}
#line 30
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )42U &= ~(1 << 4);
}

# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplRF230P$PortIRQ$makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$makeInput();
#line 33
}
#line 33
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )43U &= ~(1 << 6);
}

# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplRF230P$PortCLKM$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$clr();
#line 30
}
#line 30
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )42U &= ~(1 << 6);
}

# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplRF230P$PortCLKM$makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$makeInput();
#line 33
}
#line 33
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static inline error_t HplRF230P$PlatformInit$init(void )
{
  HplRF230P$PortCLKM$makeInput();
  HplRF230P$PortCLKM$clr();
  HplRF230P$PortIRQ$makeInput();
  HplRF230P$PortIRQ$clr();
  HplRF230P$Capture$stop();

  return SUCCESS;
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t RealMainP$PlatformInit$init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = HplRF230P$PlatformInit$init();
#line 51
  __nesc_result = ecombine(__nesc_result, RF230LayerP$PlatformInit$init());
#line 51
  __nesc_result = ecombine(__nesc_result, PlatformP$Init$init());
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
# 235 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 235
{
  const uint8_t *base = source;

#line 237
  return base[0];
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$getHeader(message_t * msg)
#line 49
{
  return (serial_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(serial_header_t ));
}

#line 156
static inline am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$type(message_t *amsg)
#line 156
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$getHeader(amsg);

#line 158
  return __nesc_ntoh_uint8(header->type.data);
}

# 437 "DataManagerP.nc"
static inline void DataManagerP$SerialSend$sendDone(message_t *msg, error_t error)
#line 437
{
  DataManagerP$sending_packet = FALSE;
}

# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void /*DozerC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$sendDone(message_t * msg, error_t error){
#line 99
  DataManagerP$SerialSend$sendDone(msg, error);
#line 99
}
#line 99
# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline void /*DozerC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$sendDone(message_t *m, error_t err)
#line 57
{
  /*DozerC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$sendDone(m, err);
}

# 207 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$default$sendDone(uint8_t id, message_t *msg, error_t err)
#line 207
{
}

# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$sendDone(uint8_t arg_0x40b71010, message_t * msg, error_t error){
#line 89
  switch (arg_0x40b71010) {
#line 89
    case 0U:
#line 89
      /*DozerC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$sendDone(msg, error);
#line 89
      break;
#line 89
    default:
#line 89
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$default$sendDone(arg_0x40b71010, msg, error);
#line 89
      break;
#line 89
    }
#line 89
}
#line 89
# 155 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$sendDone(uint8_t last, message_t * msg, error_t err)
#line 155
{
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[last].msg = (void *)0;
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$tryToSend();
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$sendDone(last, msg, err);
}

#line 181
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$AMSend$sendDone(am_id_t id, message_t *msg, error_t err)
#line 181
{





  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current >= 1) {
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
inline static void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$sendDone(am_id_t arg_0x41082148, message_t * msg, error_t error){
#line 99
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$AMSend$sendDone(arg_0x41082148, msg, error);
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
inline static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$sendDone(uart_id_t arg_0x41134010, message_t * msg, error_t error){
#line 89
  switch (arg_0x41134010) {
#line 89
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 89
      /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$sendDone(msg, error);
#line 89
      break;
#line 89
    default:
#line 89
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$default$sendDone(arg_0x41134010, msg, error);
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

# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$nextPacket(void )
#line 57
{
  uint8_t i;

#line 59
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current = (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current + 1) % 1;
  for (i = 0; i < 1; i++) {
      if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current].msg == (void *)0 || 
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$cancelMask[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current / 8] & (1 << /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current % 8)) 
        {
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current = (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current + 1) % 1;
        }
      else {
          break;
        }
    }
  if (i >= 1) {
#line 70
    /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current = 1;
    }
}

# 264 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_uint16(const void * source)
#line 264
{
  const uint8_t *base = source;

#line 266
  return ((uint16_t )base[0] << 8) | base[1];
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
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$dataLinkLength(uart_id_t arg_0x41134b10, message_t *msg, uint8_t upperLen){
#line 23
  unsigned char __nesc_result;
#line 23

#line 23
  switch (arg_0x41134b10) {
#line 23
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 23
      __nesc_result = SerialPacketInfoActiveMessageP$Info$dataLinkLength(msg, upperLen);
#line 23
      break;
#line 23
    default:
#line 23
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$dataLinkLength(arg_0x41134b10, msg, upperLen);
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
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$offset(uart_id_t arg_0x41134b10){
#line 15
  unsigned char __nesc_result;
#line 15

#line 15
  switch (arg_0x41134b10) {
#line 15
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 15
      __nesc_result = SerialPacketInfoActiveMessageP$Info$offset();
#line 15
      break;
#line 15
    default:
#line 15
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$offset(arg_0x41134b10);
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
# 201 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
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
inline static message_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Receive$receive(am_id_t arg_0x41082b08, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
    __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Receive$default$receive(arg_0x41082b08, msg, payload, len);
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
inline static message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Receive$receive(uart_id_t arg_0x41137920, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  switch (arg_0x41137920) {
#line 67
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 67
      __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubReceive$receive(msg, payload, len);
#line 67
      break;
#line 67
    default:
#line 67
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Receive$default$receive(arg_0x41137920, msg, payload, len);
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
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$upperLength(uart_id_t arg_0x41134b10, message_t *msg, uint8_t dataLinkLen){
#line 31
  unsigned char __nesc_result;
#line 31

#line 31
  switch (arg_0x41134b10) {
#line 31
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 31
      __nesc_result = SerialPacketInfoActiveMessageP$Info$upperLength(msg, dataLinkLen);
#line 31
      break;
#line 31
    default:
#line 31
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$upperLength(arg_0x41134b10, msg, dataLinkLen);
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

# 722 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP$SplitControl$default$stopDone(error_t err)
#line 722
{
}

# 117 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void SerialP$SplitControl$stopDone(error_t error){
#line 117
  SerialP$SplitControl$default$stopDone(error);
#line 117
}
#line 117
# 141 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/McuSleepC.nc"
static inline void McuSleepC$McuPowerState$update(void )
#line 141
{
}

# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuPowerState.nc"
inline static void HplAtm128UartP$McuPowerState$update(void ){
#line 44
  McuSleepC$McuPowerState$update();
#line 44
}
#line 44
# 148 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP$Uart0RxControl$stop(void )
#line 148
{
  * (volatile uint8_t *)0XC1 &= ~(1 << 4);
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
# 136 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP$Uart0TxControl$stop(void )
#line 136
{
  * (volatile uint8_t *)0XC1 &= ~(1 << 3);
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

#line 721
static inline void SerialP$SplitControl$default$startDone(error_t err)
#line 721
{
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void SerialP$SplitControl$startDone(error_t error){
#line 92
  SerialP$SplitControl$default$startDone(error);
#line 92
}
#line 92
# 165 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP$HplUart0$enableRxIntr(void )
#line 165
{
  * (volatile uint8_t *)0XC1 |= 1 << 7;
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
# 142 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP$Uart0RxControl$start(void )
#line 142
{
  * (volatile uint8_t *)0XC1 |= 1 << 4;
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
# 130 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP$Uart0TxControl$start(void )
#line 130
{
  * (volatile uint8_t *)0XC1 |= 1 << 3;
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
# 170 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP$HplUart0$disableRxIntr(void )
#line 170
{
  * (volatile uint8_t *)0XC1 &= ~(1 << 7);
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
# 160 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP$HplUart0$disableTxIntr(void )
#line 160
{
  * (volatile uint8_t *)0XC1 &= ~(1 << 6);
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
# 154 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP$HplUart0$enableTxIntr(void )
#line 154
{
  * (volatile uint8_t *)0xC0 |= 1 << 6;
  * (volatile uint8_t *)0XC1 |= 1 << 6;
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
  for (i = 0; i < 1 / 8 + 1; i++) {
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

#line 161
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$errorTask$runTask(void )
#line 161
{
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$sendDone(/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current, /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current].msg, FAIL);
}

# 5 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/Sample.nc"
inline static error_t SamplerM$Sample$readDone(uint8_t channel, uint8_t channelType, uint16_t data){
#line 5
  unsigned char __nesc_result;
#line 5

#line 5
  __nesc_result = DataManagerP$Sample$readDone(channel, channelType, data);
#line 5

#line 5
  return __nesc_result;
#line 5
}
#line 5
# 529 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/SamplerM.nc"
static inline void SamplerM$Counter$readDone(uint16_t data)
#line 529
{
  SamplerM$Sample$readDone(0, COUNTER, data);
}

# 15 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/Dio.nc"
inline static void MDA300CounterLogicP$Counter$readDone(uint16_t data){
#line 15
  SamplerM$Counter$readDone(data);
#line 15
}
#line 15
# 115 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300CounterLogicP.nc"
static inline void MDA300CounterLogicP$count_ready$runTask(void )
{
  uint16_t counter;

#line 118
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 118
    {
      counter = MDA300CounterLogicP$count;
    }
#line 120
    __nesc_atomic_end(__nesc_atomic); }
  MDA300CounterLogicP$Counter$readDone(counter);
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
inline static void DataManagerP$Leds$led2Toggle(void ){
#line 89
  LedsP$Leds$led2Toggle();
#line 89
}
#line 89
# 628 "DataManagerP.nc"
inline static void DataManagerP$report_received(void )
#line 628
{
#line 628
  DataManagerP$Leds$led2Toggle();
}

# 88 "/opt/CVSTinyOS/tinyos-2.x/tos/system/PoolP.nc"
static inline /*DataManagerC.DataMessagePoolP.PoolP*/PoolP$0$pool_t */*DataManagerC.DataMessagePoolP.PoolP*/PoolP$0$Pool$get(void )
#line 88
{
  if (/*DataManagerC.DataMessagePoolP.PoolP*/PoolP$0$free) {
      /*DataManagerC.DataMessagePoolP.PoolP*/PoolP$0$pool_t *rval = /*DataManagerC.DataMessagePoolP.PoolP*/PoolP$0$queue[/*DataManagerC.DataMessagePoolP.PoolP*/PoolP$0$index];

#line 91
      /*DataManagerC.DataMessagePoolP.PoolP*/PoolP$0$queue[/*DataManagerC.DataMessagePoolP.PoolP*/PoolP$0$index] = (void *)0;
      /*DataManagerC.DataMessagePoolP.PoolP*/PoolP$0$free--;
      /*DataManagerC.DataMessagePoolP.PoolP*/PoolP$0$index++;
      if (/*DataManagerC.DataMessagePoolP.PoolP*/PoolP$0$index == 25UL) {
          /*DataManagerC.DataMessagePoolP.PoolP*/PoolP$0$index = 0;
        }
      ;
      return rval;
    }
  return (void *)0;
}

# 97 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Pool.nc"
inline static DataManagerP$DataMessagePool$t * DataManagerP$DataMessagePool$get(void ){
#line 97
  nx_struct message_t *__nesc_result;
#line 97

#line 97
  __nesc_result = /*DataManagerC.DataMessagePoolP.PoolP*/PoolP$0$Pool$get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/system/QueueC.nc"
static inline void /*DataManagerC.DataQueueP*/QueueC$0$printQueue(void )
#line 69
{
}

#line 61
static inline uint8_t /*DataManagerC.DataQueueP*/QueueC$0$Queue$maxSize(void )
#line 61
{
  return 25UL;
}

#line 57
static inline uint8_t /*DataManagerC.DataQueueP*/QueueC$0$Queue$size(void )
#line 57
{
  return /*DataManagerC.DataQueueP*/QueueC$0$size;
}

#line 97
static inline error_t /*DataManagerC.DataQueueP*/QueueC$0$Queue$enqueue(/*DataManagerC.DataQueueP*/QueueC$0$queue_t newVal)
#line 97
{
  if (/*DataManagerC.DataQueueP*/QueueC$0$Queue$size() < /*DataManagerC.DataQueueP*/QueueC$0$Queue$maxSize()) {
      ;
      /*DataManagerC.DataQueueP*/QueueC$0$queue[/*DataManagerC.DataQueueP*/QueueC$0$tail] = newVal;
      /*DataManagerC.DataQueueP*/QueueC$0$tail++;
      if (/*DataManagerC.DataQueueP*/QueueC$0$tail == 25UL) {
#line 102
        /*DataManagerC.DataQueueP*/QueueC$0$tail = 0;
        }
#line 103
      /*DataManagerC.DataQueueP*/QueueC$0$size++;
      /*DataManagerC.DataQueueP*/QueueC$0$printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

# 90 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Queue.nc"
inline static error_t DataManagerP$DataQueue$enqueue(DataManagerP$DataQueue$t  newVal){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*DataManagerC.DataQueueP*/QueueC$0$Queue$enqueue(newVal);
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 249 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Alarm$getNow(void )
#line 249
{
  return /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Counter$get();
}

# 98 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow(void ){
#line 98
  unsigned long __nesc_result;
#line 98

#line 98
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Alarm$getNow();
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
# 148 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(), dt, TRUE);
}

# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void MDA300IBADCLogicP$PowerStabalizingTimer$startOneShot(uint32_t dt){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(17U, dt);
#line 62
}
#line 62
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t MDA300IBADCLogicP$adc_get_data$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(MDA300IBADCLogicP$adc_get_data);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit6*/HplAtm128GeneralIOPinP$22$IO$clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )40U &= ~(1 << 6);
}

# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void MDA300IBADCLogicP$Amplifier$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortC.Bit6*/HplAtm128GeneralIOPinP$22$IO$clr();
#line 30
}
#line 30
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$SubResource$request(uint8_t arg_0x40ed9d10){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$Resource$request(arg_0x40ed9d10);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
static inline error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$Resource$request(uint8_t id)
#line 55
{
  return /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$SubResource$request(id);
}

# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t MDA300IBADCSwitchP$I2CResource$request(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$Resource$request(/*MDA300IBADCSwitchC.I2C*/Atm128I2CMasterC$1$CLIENT_ID);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 68 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300IBADCSwitchP.nc"
static inline error_t MDA300IBADCSwitchP$Switch$setAll(uint8_t val)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 70
    {
      if (MDA300IBADCSwitchP$state == MDA300IBADCSwitchP$IDLE) 
        {
          MDA300IBADCSwitchP$state = MDA300IBADCSwitchP$SET_SWITCH_ALL;
          MDA300IBADCSwitchP$sw_state = val;
          {
            unsigned char __nesc_temp = 
#line 75
            MDA300IBADCSwitchP$I2CResource$request();

            {
#line 75
              __nesc_atomic_end(__nesc_atomic); 
#line 75
              return __nesc_temp;
            }
          }
        }
    }
#line 79
    __nesc_atomic_end(__nesc_atomic); }
#line 78
  return FAIL;
}

# 12 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/Switch.nc"
inline static error_t MDA300IBADCLogicP$Switch$setAll(uint8_t value){
#line 12
  unsigned char __nesc_result;
#line 12

#line 12
  __nesc_result = MDA300IBADCSwitchP$Switch$setAll(value);
#line 12

#line 12
  return __nesc_result;
#line 12
}
#line 12
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit6*/HplAtm128GeneralIOPinP$22$IO$set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )40U |= 1 << 6;
}

# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void MDA300IBADCLogicP$Amplifier$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortC.Bit6*/HplAtm128GeneralIOPinP$22$IO$set();
#line 29
}
#line 29
# 101 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300IBADCLogicP.nc"
static inline void MDA300IBADCLogicP$setNumberOfConversions(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 103
    {
      MDA300IBADCLogicP$conversionNumber = 1;
      if (MDA300IBADCLogicP$param[MDA300IBADCLogicP$chan] & AVERAGE_FOUR) {
#line 105
        MDA300IBADCLogicP$conversionNumber = 4;
        }
#line 106
      if (MDA300IBADCLogicP$param[MDA300IBADCLogicP$chan] & AVERAGE_EIGHT) {
#line 106
        MDA300IBADCLogicP$conversionNumber = 8;
        }
#line 107
      if (MDA300IBADCLogicP$param[MDA300IBADCLogicP$chan] & AVERAGE_SIXTEEN) {
#line 107
        MDA300IBADCLogicP$conversionNumber = 16;
        }
    }
#line 109
    __nesc_atomic_end(__nesc_atomic); }
#line 109
  return;
}

# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP$21$IO$set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )40U |= 1 << 5;
}

# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void MDA300IBADCLogicP$Exitation50$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP$21$IO$set();
#line 29
}
#line 29
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit3*/HplAtm128GeneralIOPinP$19$IO$set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )40U |= 1 << 3;
}

# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void MDA300IBADCLogicP$Exitation33$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortC.Bit3*/HplAtm128GeneralIOPinP$19$IO$set();
#line 29
}
#line 29
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit2*/HplAtm128GeneralIOPinP$18$IO$set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )40U |= 1 << 2;
}

# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void MDA300IBADCLogicP$VoltageBuffer$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortC.Bit2*/HplAtm128GeneralIOPinP$18$IO$set();
#line 29
}
#line 29
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit1*/HplAtm128GeneralIOPinP$17$IO$clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )40U &= ~(1 << 1);
}

# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void MDA300IBADCLogicP$VoltageBooster$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortC.Bit1*/HplAtm128GeneralIOPinP$17$IO$clr();
#line 30
}
#line 30
# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300IBADCLogicP.nc"
static inline void MDA300IBADCLogicP$setExcitation(void )
{
  MDA300IBADCLogicP$VoltageBooster$clr();
  if (MDA300IBADCLogicP$param[MDA300IBADCLogicP$chan] & EXITATION_25) {
#line 65
    MDA300IBADCLogicP$VoltageBuffer$set();
    }
#line 66
  if (MDA300IBADCLogicP$param[MDA300IBADCLogicP$chan] & EXITATION_33) 
    {
      MDA300IBADCLogicP$Exitation33$set();
    }
  if (MDA300IBADCLogicP$param[MDA300IBADCLogicP$chan] & EXITATION_50) 
    {
      MDA300IBADCLogicP$Exitation50$set();
    }
}

# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$SubResource$release(uint8_t arg_0x40ed9d10){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$Resource$release(arg_0x40ed9d10);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2C.nc"
inline static void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$Atm128I2C$stop(void ){
#line 46
  /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$Atm128I2C$stop();
#line 46
}
#line 46
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
static inline error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$Resource$release(uint8_t id)
#line 72
{
  /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$Atm128I2C$stop();
  return /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$SubResource$release(id);
}

# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t MDA300IBADCLogicP$I2CResource$release(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$Resource$release(/*HplMDA300IBADCC.I2C*/Atm128I2CMasterC$2$CLIENT_ID);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
#line 78
inline static error_t MDA300IBADCLogicP$I2CResource$request(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$Resource$request(/*HplMDA300IBADCC.I2C*/Atm128I2CMasterC$2$CLIENT_ID);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 173 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
static inline uint8_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$Resource$isOwner(uint8_t id)
#line 173
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 174
    {
      if (/*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$resId == id && /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$state == /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$RES_BUSY) {
          unsigned char __nesc_temp = 
#line 175
          TRUE;

          {
#line 175
            __nesc_atomic_end(__nesc_atomic); 
#line 175
            return __nesc_temp;
          }
        }
      else 
#line 176
        {
          unsigned char __nesc_temp = 
#line 176
          FALSE;

          {
#line 176
            __nesc_atomic_end(__nesc_atomic); 
#line 176
            return __nesc_temp;
          }
        }
    }
#line 179
    __nesc_atomic_end(__nesc_atomic); }
}

# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static bool /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$SubResource$isOwner(uint8_t arg_0x40ed9d10){
#line 118
  unsigned char __nesc_result;
#line 118

#line 118
  __nesc_result = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$Resource$isOwner(arg_0x40ed9d10);
#line 118

#line 118
  return __nesc_result;
#line 118
}
#line 118
# 77 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
static inline bool /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$Resource$isOwner(uint8_t id)
#line 77
{
  return /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$SubResource$isOwner(id);
}

# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static bool MDA300IBADCLogicP$I2CResource$isOwner(void ){
#line 118
  unsigned char __nesc_result;
#line 118

#line 118
  __nesc_result = /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$Resource$isOwner(/*HplMDA300IBADCC.I2C*/Atm128I2CMasterC$2$CLIENT_ID);
#line 118

#line 118
  return __nesc_result;
#line 118
}
#line 118
# 161 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300IBADCLogicP.nc"
static inline void MDA300IBADCLogicP$adc_get_data$runTask(void )
{
  uint8_t myIndex;
  uint8_t count;
  uint16_t my_bitmap;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 167
    {
#line 167
      if (MDA300IBADCLogicP$state != MDA300IBADCLogicP$IDLE) {
        {
#line 167
          __nesc_atomic_end(__nesc_atomic); 
#line 167
          return;
        }
        }
    }
#line 170
    __nesc_atomic_end(__nesc_atomic); }
#line 170
  if (!MDA300IBADCLogicP$I2CResource$isOwner()) {
      MDA300IBADCLogicP$I2CResource$request();
      return;
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 175
    {
      MDA300IBADCLogicP$value = 0;
      MDA300IBADCLogicP$state = MDA300IBADCLogicP$START_CONVERSION_PROCESS;
      my_bitmap = MDA300IBADCLogicP$adc_bitmap;
    }
#line 179
    __nesc_atomic_end(__nesc_atomic); }


  count = 0;
  myIndex = MDA300IBADCLogicP$chan + 1;
  if (myIndex > 13) {
#line 184
    myIndex = 0;
    }
  while (!(my_bitmap & (1 << myIndex))) 
    {
      myIndex++;
      if (myIndex > 13) {
#line 189
        myIndex = 0;
        }
#line 190
      count++;
      if (count > 13) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 192
            MDA300IBADCLogicP$state = MDA300IBADCLogicP$IDLE;
#line 192
            __nesc_atomic_end(__nesc_atomic); }
          MDA300IBADCLogicP$I2CResource$release();
          return;
        }
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 198
    MDA300IBADCLogicP$chan = myIndex;
#line 198
    __nesc_atomic_end(__nesc_atomic); }
  MDA300IBADCLogicP$setExcitation();
  MDA300IBADCLogicP$setNumberOfConversions();

  if (((MDA300IBADCLogicP$chan == 7 || MDA300IBADCLogicP$chan == 8) || MDA300IBADCLogicP$chan == 9) || MDA300IBADCLogicP$chan == 10) 
    {
      uint8_t muxChannel;

      MDA300IBADCLogicP$Amplifier$set();
      switch (MDA300IBADCLogicP$chan) {
          default: 
            case 7: 
              muxChannel = MUX_CHANNEL_SEVEN;
          break;
          case 8: 
            muxChannel = MUX_CHANNEL_EIGHT;
          break;
          case 9: 
            muxChannel = MUX_CHANNEL_NINE;
          break;
          case 10: 
            muxChannel = MUX_CHANNEL_TEN;
          break;
        }
#line 221
      ;

      if (MDA300IBADCLogicP$Switch$setAll(muxChannel) == FAIL) 
        {

          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 226
            MDA300IBADCLogicP$state = MDA300IBADCLogicP$IDLE;
#line 226
            __nesc_atomic_end(__nesc_atomic); }
          MDA300IBADCLogicP$Amplifier$clr();
          MDA300IBADCLogicP$adc_get_data$postTask();
          MDA300IBADCLogicP$resetExcitation();
        }
    }
  else {


      if (MDA300IBADCLogicP$param[MDA300IBADCLogicP$chan] & DELAY_BEFORE_MEASUREMENT) {
          MDA300IBADCLogicP$PowerStabalizingTimer$startOneShot(50);
        }
      else {
          MDA300IBADCLogicP$convert();
        }
    }
  return;
}

# 200 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(uint8_t id)
#line 200
{
}

# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$ResourceRequested$requested(uint8_t arg_0x40ea5010){
#line 43
    /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(arg_0x40ea5010);
#line 43
}
#line 43
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$FcfsQueue$isEnqueued(resource_client_id_t id)
#line 54
{
  return /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$resQ[id] != /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$NO_ENTRY || /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$qTail == id;
}

#line 72
static inline error_t /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$FcfsQueue$enqueue(resource_client_id_t id)
#line 72
{
  /* atomic removed: atomic calls only */
#line 73
  {
    if (!/*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$FcfsQueue$isEnqueued(id)) {
        if (/*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$qHead == /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$NO_ENTRY) {
          /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$qHead = id;
          }
        else {
#line 78
          /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$resQ[/*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$qTail] = id;
          }
#line 79
        /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$qTail = id;
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
inline static error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$Queue$enqueue(resource_client_id_t id){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$FcfsQueue$enqueue(id);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$grantedTask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(/*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$grantedTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 129 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
static inline error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$release(void )
#line 129
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 130
    {
      if (/*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$resId == /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$default_owner_id) {
          if (/*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$state == /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$RES_GRANTING) {
              /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$grantedTask$postTask();
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
            if (/*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$state == /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$RES_IMM_GRANTING) {
                /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$resId = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$reqResId;
                /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$state = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$RES_BUSY;
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
inline static error_t /*Atm128I2CMasterP.Power*/AsyncPowerManagerP$0$ResourceDefaultOwner$release(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$release();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 79 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBusP.nc"
static inline void HplAtm128I2CBusP$I2C$sendCommand(void )
#line 79
{
  /* atomic removed: atomic calls only */
#line 80
  * (volatile uint8_t *)0xBC = HplAtm128I2CBusP$current;
}

# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
inline static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$sendCommand(void ){
#line 48
  HplAtm128I2CBusP$I2C$sendCommand();
#line 48
}
#line 48
# 134 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBusP.nc"
static inline void HplAtm128I2CBusP$I2C$enableInterrupt(bool enable)
#line 134
{
  if (enable) {
      /* atomic removed: atomic calls only */
#line 136
      HplAtm128I2CBusP$current |= 1 << 0;
    }
  else {
      /* atomic removed: atomic calls only */
#line 139
      HplAtm128I2CBusP$current &= ~(1 << 0);
    }
}

# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
inline static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$enableInterrupt(bool enable){
#line 60
  HplAtm128I2CBusP$I2C$enableInterrupt(enable);
#line 60
}
#line 60
# 164 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBusP.nc"
static inline void HplAtm128I2CBusP$I2C$enable(bool enable)
#line 164
{
  if (enable) {
      /* atomic removed: atomic calls only */
#line 166
      HplAtm128I2CBusP$current |= 1 << 2;
    }
  else {
      /* atomic removed: atomic calls only */
#line 169
      HplAtm128I2CBusP$current &= ~(1 << 2);
    }
}

# 76 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
inline static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$enable(bool on){
#line 76
  HplAtm128I2CBusP$I2C$enable(on);
#line 76
}
#line 76
#line 47
inline static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$readCurrent(void ){
#line 47
  HplAtm128I2CBusP$I2C$readCurrent();
#line 47
}
#line 47
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )42U &= ~(1 << 1);
}

# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128I2CBusP$I2CData$makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$makeInput();
#line 33
}
#line 33
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24$IO$makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )42U &= ~(1 << 0);
}

# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128I2CBusP$I2CClk$makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24$IO$makeInput();
#line 33
}
#line 33
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )43U |= 1 << 1;
}

# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128I2CBusP$I2CData$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$set();
#line 29
}
#line 29
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24$IO$set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )43U |= 1 << 0;
}

# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128I2CBusP$I2CClk$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24$IO$set();
#line 29
}
#line 29
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBusP.nc"
static inline void HplAtm128I2CBusP$I2C$init(bool hasExternalPulldown)
#line 53
{

  if (TRUE) {


      HplAtm128I2CBusP$I2CClk$set();
      HplAtm128I2CBusP$I2CData$set();
    }
  HplAtm128I2CBusP$I2CClk$makeInput();
  HplAtm128I2CBusP$I2CData$makeInput();
  * (volatile uint8_t *)0xB9 = 0;
  * (volatile uint8_t *)0xB8 = (7372800 / 50000UL - 16) / 2;

  * (volatile uint8_t *)0xBA = 0;
  * (volatile uint8_t *)0xBC = 0;
}

# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
inline static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$init(bool hasExternalPulldown){
#line 42
  HplAtm128I2CBusP$I2C$init(hasExternalPulldown);
#line 42
}
#line 42
# 93 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterPacketP.nc"
static inline error_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$AsyncStdControl$start(void )
#line 93
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 94
    {
      if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$state == /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C_OFF) {
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$init(FALSE);
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$readCurrent();
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$enable(TRUE);
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$enableInterrupt(FALSE);
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$sendCommand();
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C_IDLE;
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
inline static error_t /*Atm128I2CMasterP.Power*/AsyncPowerManagerP$0$AsyncStdControl$start(void ){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$AsyncStdControl$start();
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128I2CMasterP.Power*/AsyncPowerManagerP$0$ResourceDefaultOwner$requested(void )
#line 59
{
  /*Atm128I2CMasterP.Power*/AsyncPowerManagerP$0$AsyncStdControl$start();
  /*Atm128I2CMasterP.Power*/AsyncPowerManagerP$0$ResourceDefaultOwner$release();
}

# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$requested(void ){
#line 73
  /*Atm128I2CMasterP.Power*/AsyncPowerManagerP$0$ResourceDefaultOwner$requested();
#line 73
}
#line 73
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$FcfsQueue$isEmpty(void )
#line 50
{
  return /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$qHead == /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$NO_ENTRY;
}

# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static bool /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$Queue$isEmpty(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$FcfsQueue$isEmpty();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$FcfsQueue$dequeue(void )
#line 58
{
  /* atomic removed: atomic calls only */
#line 59
  {
    if (/*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$qHead != /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$NO_ENTRY) {
        uint8_t id = /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$qHead;

#line 62
        /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$qHead = /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$resQ[/*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$qHead];
        if (/*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$qHead == /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$NO_ENTRY) {
          /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$qTail = /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$NO_ENTRY;
          }
#line 65
        /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$resQ[id] = /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$NO_ENTRY;
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
      /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$NO_ENTRY;

#line 68
      return __nesc_temp;
    }
  }
}

# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$Queue$dequeue(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$FcfsQueue$dequeue();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 214 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(uint8_t id)
#line 214
{
}

# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$unconfigure(uint8_t arg_0x40ea4430){
#line 55
    /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(arg_0x40ea4430);
#line 55
}
#line 55
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )43U &= ~(1 << 1);
}

# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128I2CBusP$I2CData$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$clr();
#line 30
}
#line 30
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24$IO$clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )43U &= ~(1 << 0);
}

# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128I2CBusP$I2CClk$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24$IO$clr();
#line 30
}
#line 30
# 70 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBusP.nc"
static inline void HplAtm128I2CBusP$I2C$off(void )
#line 70
{
  HplAtm128I2CBusP$I2CClk$clr();
  HplAtm128I2CBusP$I2CData$clr();
}

# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
inline static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$off(void ){
#line 43
  HplAtm128I2CBusP$I2C$off();
#line 43
}
#line 43
# 155 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBusP.nc"
static inline void HplAtm128I2CBusP$I2C$setInterruptPending(bool on)
#line 155
{
  if (on) {
      /* atomic removed: atomic calls only */
#line 157
      HplAtm128I2CBusP$current |= 1 << 7;
    }
  else {
      /* atomic removed: atomic calls only */
#line 160
      HplAtm128I2CBusP$current &= ~(1 << 7);
    }
}

# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
inline static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$setInterruptPending(bool on){
#line 74
  HplAtm128I2CBusP$I2C$setInterruptPending(on);
#line 74
}
#line 74
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterPacketP.nc"
static inline error_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$AsyncStdControl$stop(void )
#line 110
{
  /* atomic removed: atomic calls only */
#line 111
  {
    if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$state == /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C_IDLE) {
        /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$readCurrent();
        /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$enable(FALSE);
        /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$enableInterrupt(FALSE);
        /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$setInterruptPending(FALSE);
        /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$sendCommand();
        /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$off();
        /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C_OFF;
        {
          unsigned char __nesc_temp = 
#line 120
          SUCCESS;

#line 120
          return __nesc_temp;
        }
      }
    else 
#line 122
      {
        {
          unsigned char __nesc_temp = 
#line 123
          FAIL;

#line 123
          return __nesc_temp;
        }
      }
  }
}

# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AsyncStdControl.nc"
inline static error_t /*Atm128I2CMasterP.Power*/AsyncPowerManagerP$0$AsyncStdControl$stop(void ){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$AsyncStdControl$stop();
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128I2CMasterP.Power*/AsyncPowerManagerP$0$PowerDownCleanup$default$cleanup(void )
#line 74
{
}

# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/power/PowerDownCleanup.nc"
inline static void /*Atm128I2CMasterP.Power*/AsyncPowerManagerP$0$PowerDownCleanup$cleanup(void ){
#line 52
  /*Atm128I2CMasterP.Power*/AsyncPowerManagerP$0$PowerDownCleanup$default$cleanup();
#line 52
}
#line 52
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128I2CMasterP.Power*/AsyncPowerManagerP$0$ResourceDefaultOwner$granted(void )
#line 69
{
  /*Atm128I2CMasterP.Power*/AsyncPowerManagerP$0$PowerDownCleanup$cleanup();
  /*Atm128I2CMasterP.Power*/AsyncPowerManagerP$0$AsyncStdControl$stop();
}

# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$granted(void ){
#line 46
  /*Atm128I2CMasterP.Power*/AsyncPowerManagerP$0$ResourceDefaultOwner$granted();
#line 46
}
#line 46
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit2*/HplAtm128GeneralIOPinP$18$IO$clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )40U &= ~(1 << 2);
}

# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void MDA300IBADCLogicP$VoltageBuffer$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortC.Bit2*/HplAtm128GeneralIOPinP$18$IO$clr();
#line 30
}
#line 30
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit3*/HplAtm128GeneralIOPinP$19$IO$clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )40U &= ~(1 << 3);
}

# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void MDA300IBADCLogicP$Exitation33$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortC.Bit3*/HplAtm128GeneralIOPinP$19$IO$clr();
#line 30
}
#line 30
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP$21$IO$clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )40U &= ~(1 << 5);
}

# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void MDA300IBADCLogicP$Exitation50$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP$21$IO$clr();
#line 30
}
#line 30
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit1*/HplAtm128GeneralIOPinP$17$IO$set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )40U |= 1 << 1;
}

# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void MDA300IBADCLogicP$VoltageBooster$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortC.Bit1*/HplAtm128GeneralIOPinP$17$IO$set();
#line 29
}
#line 29
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
# 134 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline uint8_t HplAtm1281Timer2AsyncP$TimerCtrl$getInterruptFlag(void )
#line 134
{
  return * (volatile uint8_t *)(0x17 + 0x20);
}

# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerCtrl8.nc"
inline static uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$TimerCtrl$getInterruptFlag(void ){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = HplAtm1281Timer2AsyncP$TimerCtrl$getInterruptFlag();
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 81 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/I2CPacket.nc"
inline static error_t MDA300IBADCLogicP$I2CPacket$write(i2c_flags_t flags, uint16_t addr, uint8_t length, uint8_t * data){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$I2CPacket$write(/*HplMDA300IBADCC.I2C*/Atm128I2CMasterC$2$CLIENT_ID, flags, addr, length, data);
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 100 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBusP.nc"
static inline void HplAtm128I2CBusP$I2C$setStop(bool on)
#line 100
{
  if (on) {
      /* atomic removed: atomic calls only */
#line 102
      HplAtm128I2CBusP$current |= 1 << 4;
    }
  else {
      /* atomic removed: atomic calls only */
#line 105
      HplAtm128I2CBusP$current &= ~(1 << 4);
    }
}

# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
inline static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$setStop(bool on){
#line 55
  HplAtm128I2CBusP$I2C$setStop(on);
#line 55
}
#line 55
# 121 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBusP.nc"
static inline void HplAtm128I2CBusP$I2C$enableAck(bool enable)
#line 121
{
  if (enable) {
      /* atomic removed: atomic calls only */
#line 123
      HplAtm128I2CBusP$current |= 1 << 6;
    }
  else {
      /* atomic removed: atomic calls only */
#line 126
      HplAtm128I2CBusP$current &= ~(1 << 6);
    }
}

# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
inline static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$enableAck(bool enable){
#line 57
  HplAtm128I2CBusP$I2C$enableAck(enable);
#line 57
}
#line 57
# 113 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBusP.nc"
static inline void HplAtm128I2CBusP$I2C$write(uint8_t data)
#line 113
{
  * (volatile uint8_t *)0xBB = data;
}

# 81 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
inline static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$write(uint8_t data){
#line 81
  HplAtm128I2CBusP$I2C$write(data);
#line 81
}
#line 81
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/system/NoLedsC.nc"
static inline void NoLedsC$Leds$led0On(void )
#line 42
{
}

# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$WriteDebugLeds$led0On(void ){
#line 45
  NoLedsC$Leds$led0On();
#line 45
}
#line 45
# 88 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBusP.nc"
static inline void HplAtm128I2CBusP$I2C$setStart(bool on)
#line 88
{
  if (on) {
      /* atomic removed: atomic calls only */
#line 90
      HplAtm128I2CBusP$current |= 1 << 5;
    }
  else {
      /* atomic removed: atomic calls only */
#line 93
      HplAtm128I2CBusP$current &= ~(1 << 5);
    }
}

# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
inline static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$setStart(bool on){
#line 53
  HplAtm128I2CBusP$I2C$setStart(on);
#line 53
}
#line 53
# 179 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterPacketP.nc"
static inline error_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2CPacket$write(i2c_flags_t flags, uint16_t addr, uint8_t len, uint8_t *data)
#line 179
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 180
    {
      if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$state == /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C_IDLE) {
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C_BUSY;
        }
      else {
#line 184
        if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$state == /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C_OFF) {
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
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$packetAddr = addr;
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$packetPtr = data;
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$packetLen = len;
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$packetFlags = flags;
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$index = 0;
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$reading = FALSE;
    }
#line 200
    __nesc_atomic_end(__nesc_atomic); }
  /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$readCurrent();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 202
    {
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$setInterruptPending(TRUE);
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$enableAck(TRUE);
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$enableInterrupt(TRUE);

      if (flags & I2C_START) {
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$setStart(TRUE);
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$WriteDebugLeds$led0On();
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C_STARTING;
        }
      else {
#line 212
        if (len > 0) {
            /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C_DATA;
            /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$write(data[/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$index]);
          }
        else {
#line 216
          if (flags & I2C_STOP) {
              /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C_STOPPING;
              /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$enableAck(FALSE);
              /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$setStop(TRUE);
            }
          else {
              /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C_IDLE;
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
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$sendCommand();
    }
#line 226
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 81 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/I2CPacket.nc"
inline static error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$SubPacket$write(i2c_flags_t flags, uint16_t addr, uint8_t length, uint8_t * data){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2CPacket$write(flags, addr, length, data);
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t MDA300DigitalLogicP$init_io$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(MDA300DigitalLogicP$init_io);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300DigitalLogicP.nc"
static inline void MDA300DigitalLogicP$I2CResource$granted(void )
{
  MDA300DigitalLogicP$init_io$postTask();
}

# 81 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/I2CPacket.nc"
inline static error_t MDA300IBADCSwitchP$I2CPacket$write(i2c_flags_t flags, uint16_t addr, uint8_t length, uint8_t * data){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$I2CPacket$write(/*MDA300IBADCSwitchC.I2C*/Atm128I2CMasterC$1$CLIENT_ID, flags, addr, length, data);
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 81 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300IBADCSwitchP.nc"
static inline void MDA300IBADCSwitchP$I2CResource$granted(void )
{
  if (MDA300IBADCSwitchP$I2CPacket$write(0x03, TOS_SWITCH_I2C_ADDR, 1, (uint8_t *)&MDA300IBADCSwitchP$sw_state) == FAIL) 
    {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 85
        MDA300IBADCSwitchP$state = MDA300IBADCSwitchP$IDLE;
#line 85
        __nesc_atomic_end(__nesc_atomic); }
      return;
    }
}

# 321 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300IBADCLogicP.nc"
static inline void MDA300IBADCLogicP$I2CResource$granted(void )
{
  MDA300IBADCLogicP$adc_get_data$postTask();
}

# 106 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
static inline void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$Resource$default$granted(uint8_t id)
#line 106
{
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$Resource$granted(uint8_t arg_0x40edee88){
#line 92
  switch (arg_0x40edee88) {
#line 92
    case /*HplMDA300DigitalC.I2C*/Atm128I2CMasterC$0$CLIENT_ID:
#line 92
      MDA300DigitalLogicP$I2CResource$granted();
#line 92
      break;
#line 92
    case /*MDA300IBADCSwitchC.I2C*/Atm128I2CMasterC$1$CLIENT_ID:
#line 92
      MDA300IBADCSwitchP$I2CResource$granted();
#line 92
      break;
#line 92
    case /*HplMDA300IBADCC.I2C*/Atm128I2CMasterC$2$CLIENT_ID:
#line 92
      MDA300IBADCLogicP$I2CResource$granted();
#line 92
      break;
#line 92
    default:
#line 92
      /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$Resource$default$granted(arg_0x40edee88);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
static inline void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$SubResource$granted(uint8_t id)
#line 67
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 68
    /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$currentClient = id;
#line 68
    __nesc_atomic_end(__nesc_atomic); }
  /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$Resource$granted(id);
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$Resource$granted(uint8_t arg_0x40ea6540){
#line 92
  /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$SubResource$granted(arg_0x40ea6540);
#line 92
}
#line 92
# 212 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(uint8_t id)
#line 212
{
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$configure(uint8_t arg_0x40ea4430){
#line 49
    /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(arg_0x40ea4430);
#line 49
}
#line 49
# 186 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$grantedTask$runTask(void )
#line 186
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 187
    {
      /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$resId = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$reqResId;
      /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$state = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$RES_BUSY;
    }
#line 190
    __nesc_atomic_end(__nesc_atomic); }
  /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$configure(/*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$resId);
  /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$Resource$granted(/*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$resId);
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t MDA300DigitalLogicP$read_io$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(MDA300DigitalLogicP$read_io);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 65 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/I2CPacket.nc"
inline static error_t MDA300DigitalLogicP$I2CPacket$read(i2c_flags_t flags, uint16_t addr, uint8_t length, uint8_t * data){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$I2CPacket$read(/*HplMDA300DigitalC.I2C*/Atm128I2CMasterC$0$CLIENT_ID, flags, addr, length, data);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 214 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300DigitalLogicP.nc"
static inline void MDA300DigitalLogicP$read_io$runTask(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 216
    {
      if (MDA300DigitalLogicP$state == MDA300DigitalLogicP$IDLE) {
        MDA300DigitalLogicP$state = MDA300DigitalLogicP$GET_DATA;
        }
      else 
#line 219
        {
#line 219
          MDA300DigitalLogicP$read_io$postTask();
          {
#line 219
            __nesc_atomic_end(__nesc_atomic); 
#line 219
            return;
          }
        }
    }
#line 222
    __nesc_atomic_end(__nesc_atomic); }
#line 222
  if (MDA300DigitalLogicP$I2CPacket$read(0x03, TOS_DIGITAL_I2C_ADDR, 1, &MDA300DigitalLogicP$buff) == FAIL) 
    {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 224
        MDA300DigitalLogicP$state = MDA300DigitalLogicP$IDLE;
#line 224
        __nesc_atomic_end(__nesc_atomic); }
      MDA300DigitalLogicP$read_io$postTask();
    }
}

# 128 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterPacketP.nc"
static inline error_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2CPacket$read(i2c_flags_t flags, uint16_t addr, uint8_t len, uint8_t *data)
#line 128
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 129
    {
      if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$state == /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C_IDLE) {
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C_BUSY;
        }
      else {
#line 133
        if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$state == /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C_OFF) {
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
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$packetAddr = addr;
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$packetPtr = data;
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$packetLen = len;
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$packetFlags = flags;
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$index = 0;
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$reading = TRUE;
    }
#line 149
    __nesc_atomic_end(__nesc_atomic); }


  /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$readCurrent();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 153
    {
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$enableInterrupt(TRUE);
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$setInterruptPending(TRUE);
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$enableAck(FALSE);

      if (flags & I2C_START) {
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$setStart(TRUE);
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C_STARTING;
        }
      else {
#line 162
        if (len > 1 || (len > 0 && flags & I2C_ACK_END)) {
            /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$enableAck(TRUE);
            /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C_DATA;
          }
        else {
#line 166
          if (len == 1) {
              /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C_DATA;
            }
          else {
#line 169
            if (flags & I2C_STOP) {
                /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C_STOPPING;
                /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$enableAck(FALSE);
                /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$setStop(TRUE);
              }
            }
          }
        }
#line 174
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$sendCommand();
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 65 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/I2CPacket.nc"
inline static error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$SubPacket$read(i2c_flags_t flags, uint16_t addr, uint8_t length, uint8_t * data){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2CPacket$read(flags, addr, length, data);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t MDA300DigitalLogicP$set_io_toggle$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(MDA300DigitalLogicP$set_io_toggle);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 81 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/I2CPacket.nc"
inline static error_t MDA300DigitalLogicP$I2CPacket$write(i2c_flags_t flags, uint16_t addr, uint8_t length, uint8_t * data){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$I2CPacket$write(/*HplMDA300DigitalC.I2C*/Atm128I2CMasterC$0$CLIENT_ID, flags, addr, length, data);
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 135 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300DigitalLogicP.nc"
static inline void MDA300DigitalLogicP$set_io_toggle$runTask(void )
{
  uint8_t i;

#line 138
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 138
    {
      if (MDA300DigitalLogicP$state == MDA300DigitalLogicP$IDLE) {
        MDA300DigitalLogicP$state = MDA300DigitalLogicP$SET_OUTPUT_TOGGLE;
        }
      else 
#line 141
        {
#line 141
          MDA300DigitalLogicP$set_io_toggle$postTask();
          {
#line 141
            __nesc_atomic_end(__nesc_atomic); 
#line 141
            return;
          }
        }
    }
#line 144
    __nesc_atomic_end(__nesc_atomic); }
#line 144
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 144
    MDA300DigitalLogicP$i2c_data = MDA300DigitalLogicP$io_value;
#line 144
    __nesc_atomic_end(__nesc_atomic); }

  for (i = 0; i <= 7; i++) {
      if (MDA300DigitalLogicP$bitmap_toggle & (1 << i)) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 148
            {
              if (MDA300DigitalLogicP$i2c_data & (1 << i)) {
                  MDA300DigitalLogicP$i2c_data &= ~(1 << i);
                }
              else 
#line 151
                {
                  MDA300DigitalLogicP$i2c_data |= 1 << i;
                }
            }
#line 154
            __nesc_atomic_end(__nesc_atomic); }
        }
      if (!(MDA300DigitalLogicP$mode[i] & DIG_OUTPUT)) {
#line 156
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 156
            MDA300DigitalLogicP$i2c_data |= 1 << i;
#line 156
            __nesc_atomic_end(__nesc_atomic); }
        }
    }
  if (MDA300DigitalLogicP$I2CPacket$write(0x01, TOS_DIGITAL_I2C_ADDR, 1, (uint8_t *)&MDA300DigitalLogicP$i2c_data) == FAIL) 
    {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 161
        MDA300DigitalLogicP$state = MDA300DigitalLogicP$IDLE;
#line 161
        __nesc_atomic_end(__nesc_atomic); }
      MDA300DigitalLogicP$set_io_toggle$postTask();
    }
  else 
#line 163
    {
#line 163
      MDA300DigitalLogicP$bitmap_toggle = 0x0;
    }
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t MDA300DigitalLogicP$set_io_low$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(MDA300DigitalLogicP$set_io_low);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 111 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300DigitalLogicP.nc"
static inline void MDA300DigitalLogicP$set_io_low$runTask(void )
{
  uint8_t i;

#line 114
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 114
    {
      if (MDA300DigitalLogicP$state == MDA300DigitalLogicP$IDLE) {
        MDA300DigitalLogicP$state = MDA300DigitalLogicP$SET_OUTPUT_LOW;
        }
      else 
#line 117
        {
#line 117
          MDA300DigitalLogicP$set_io_low$postTask();
          {
#line 117
            __nesc_atomic_end(__nesc_atomic); 
#line 117
            return;
          }
        }
    }
#line 120
    __nesc_atomic_end(__nesc_atomic); }
#line 120
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 120
    MDA300DigitalLogicP$i2c_data = MDA300DigitalLogicP$io_value;
#line 120
    __nesc_atomic_end(__nesc_atomic); }

  for (i = 0; i <= 7; i++) {
      if (MDA300DigitalLogicP$bitmap_low & (1 << i)) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 124
            MDA300DigitalLogicP$i2c_data &= ~(1 << i);
#line 124
            __nesc_atomic_end(__nesc_atomic); }
        }
      if (!(MDA300DigitalLogicP$mode[i] & DIG_OUTPUT)) {
#line 126
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 126
            MDA300DigitalLogicP$i2c_data |= 1 << i;
#line 126
            __nesc_atomic_end(__nesc_atomic); }
        }
    }
#line 128
  if (MDA300DigitalLogicP$I2CPacket$write(0x01, TOS_DIGITAL_I2C_ADDR, 1, (uint8_t *)&MDA300DigitalLogicP$i2c_data) == FAIL) 
    {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 130
        MDA300DigitalLogicP$state = MDA300DigitalLogicP$IDLE;
#line 130
        __nesc_atomic_end(__nesc_atomic); }
      MDA300DigitalLogicP$set_io_low$postTask();
    }
  else 
#line 132
    {
#line 132
      MDA300DigitalLogicP$bitmap_low = 0x0;
    }
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t MDA300DigitalLogicP$set_io_high$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(MDA300DigitalLogicP$set_io_high);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 87 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300DigitalLogicP.nc"
static inline void MDA300DigitalLogicP$set_io_high$runTask(void )
{
  uint8_t i;

#line 90
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 90
    {
      if (MDA300DigitalLogicP$state == MDA300DigitalLogicP$IDLE) {
        MDA300DigitalLogicP$state = MDA300DigitalLogicP$SET_OUTPUT_HIGH;
        }
      else 
#line 93
        {
#line 93
          MDA300DigitalLogicP$set_io_high$postTask();
          {
#line 93
            __nesc_atomic_end(__nesc_atomic); 
#line 93
            return;
          }
        }
    }
#line 96
    __nesc_atomic_end(__nesc_atomic); }
#line 96
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 96
    MDA300DigitalLogicP$i2c_data = MDA300DigitalLogicP$io_value;
#line 96
    __nesc_atomic_end(__nesc_atomic); }
  for (i = 0; i <= 7; i++) {
      if (MDA300DigitalLogicP$bitmap_high & (1 << i)) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 99
            MDA300DigitalLogicP$i2c_data |= 1 << i;
#line 99
            __nesc_atomic_end(__nesc_atomic); }
        }
      if (!(MDA300DigitalLogicP$mode[i] & DIG_OUTPUT)) {
#line 101
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 101
            MDA300DigitalLogicP$i2c_data |= 1 << i;
#line 101
            __nesc_atomic_end(__nesc_atomic); }
        }
    }
  if (MDA300DigitalLogicP$I2CPacket$write(0x01, TOS_DIGITAL_I2C_ADDR, 1, (uint8_t *)&MDA300DigitalLogicP$i2c_data) == FAIL) 
    {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 106
        MDA300DigitalLogicP$state = MDA300DigitalLogicP$IDLE;
#line 106
        __nesc_atomic_end(__nesc_atomic); }
      MDA300DigitalLogicP$set_io_high$postTask();
    }
  else 
#line 108
    {
#line 108
      MDA300DigitalLogicP$bitmap_high = 0x0;
    }
}

# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )34U &= ~(1 << 2);
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
inline static void DataManagerP$Leds$led0On(void ){
#line 45
  LedsP$Leds$led0On();
#line 45
}
#line 45
# 620 "DataManagerP.nc"
inline static void DataManagerP$fatal_problem(void )
#line 620
{
  DataManagerP$Leds$led0On();
}

# 394 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/SamplerM.nc"
static inline error_t SamplerM$Sample$start(void )
{
  SamplerM$next_schedule();
  return SUCCESS;
}

# 8 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/Sample.nc"
inline static error_t DataManagerP$Sample$start(void ){
#line 8
  unsigned char __nesc_result;
#line 8

#line 8
  __nesc_result = SamplerM$Sample$start();
#line 8

#line 8
  return __nesc_result;
#line 8
}
#line 8
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )34U &= ~(1 << 1);
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
inline static void DataManagerP$Leds$led1On(void ){
#line 61
  LedsP$Leds$led1On();
#line 61
}
#line 61
# 155 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300IBADCLogicP.nc"
static inline error_t MDA300IBADCLogicP$SetParam$setParam(uint8_t id, uint8_t mode)
#line 155
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 156
    MDA300IBADCLogicP$param[id] = mode;
#line 156
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 10 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/SetParam.nc"
inline static error_t SamplerM$SetParam13$setParam(uint8_t param){
#line 10
  unsigned char __nesc_result;
#line 10

#line 10
  __nesc_result = MDA300IBADCLogicP$SetParam$setParam(13, param);
#line 10

#line 10
  return __nesc_result;
#line 10
}
#line 10
inline static error_t SamplerM$SetParam12$setParam(uint8_t param){
#line 10
  unsigned char __nesc_result;
#line 10

#line 10
  __nesc_result = MDA300IBADCLogicP$SetParam$setParam(12, param);
#line 10

#line 10
  return __nesc_result;
#line 10
}
#line 10
inline static error_t SamplerM$SetParam11$setParam(uint8_t param){
#line 10
  unsigned char __nesc_result;
#line 10

#line 10
  __nesc_result = MDA300IBADCLogicP$SetParam$setParam(11, param);
#line 10

#line 10
  return __nesc_result;
#line 10
}
#line 10
inline static error_t SamplerM$SetParam10$setParam(uint8_t param){
#line 10
  unsigned char __nesc_result;
#line 10

#line 10
  __nesc_result = MDA300IBADCLogicP$SetParam$setParam(10, param);
#line 10

#line 10
  return __nesc_result;
#line 10
}
#line 10
inline static error_t SamplerM$SetParam9$setParam(uint8_t param){
#line 10
  unsigned char __nesc_result;
#line 10

#line 10
  __nesc_result = MDA300IBADCLogicP$SetParam$setParam(9, param);
#line 10

#line 10
  return __nesc_result;
#line 10
}
#line 10
inline static error_t SamplerM$SetParam8$setParam(uint8_t param){
#line 10
  unsigned char __nesc_result;
#line 10

#line 10
  __nesc_result = MDA300IBADCLogicP$SetParam$setParam(8, param);
#line 10

#line 10
  return __nesc_result;
#line 10
}
#line 10
inline static error_t SamplerM$SetParam7$setParam(uint8_t param){
#line 10
  unsigned char __nesc_result;
#line 10

#line 10
  __nesc_result = MDA300IBADCLogicP$SetParam$setParam(7, param);
#line 10

#line 10
  return __nesc_result;
#line 10
}
#line 10
inline static error_t SamplerM$SetParam6$setParam(uint8_t param){
#line 10
  unsigned char __nesc_result;
#line 10

#line 10
  __nesc_result = MDA300IBADCLogicP$SetParam$setParam(6, param);
#line 10

#line 10
  return __nesc_result;
#line 10
}
#line 10
inline static error_t SamplerM$SetParam5$setParam(uint8_t param){
#line 10
  unsigned char __nesc_result;
#line 10

#line 10
  __nesc_result = MDA300IBADCLogicP$SetParam$setParam(5, param);
#line 10

#line 10
  return __nesc_result;
#line 10
}
#line 10
inline static error_t SamplerM$SetParam4$setParam(uint8_t param){
#line 10
  unsigned char __nesc_result;
#line 10

#line 10
  __nesc_result = MDA300IBADCLogicP$SetParam$setParam(4, param);
#line 10

#line 10
  return __nesc_result;
#line 10
}
#line 10
inline static error_t SamplerM$SetParam3$setParam(uint8_t param){
#line 10
  unsigned char __nesc_result;
#line 10

#line 10
  __nesc_result = MDA300IBADCLogicP$SetParam$setParam(3, param);
#line 10

#line 10
  return __nesc_result;
#line 10
}
#line 10
inline static error_t SamplerM$SetParam2$setParam(uint8_t param){
#line 10
  unsigned char __nesc_result;
#line 10

#line 10
  __nesc_result = MDA300IBADCLogicP$SetParam$setParam(2, param);
#line 10

#line 10
  return __nesc_result;
#line 10
}
#line 10
inline static error_t SamplerM$SetParam1$setParam(uint8_t param){
#line 10
  unsigned char __nesc_result;
#line 10

#line 10
  __nesc_result = MDA300IBADCLogicP$SetParam$setParam(1, param);
#line 10

#line 10
  return __nesc_result;
#line 10
}
#line 10
inline static error_t SamplerM$SetParam0$setParam(uint8_t param){
#line 10
  unsigned char __nesc_result;
#line 10

#line 10
  __nesc_result = MDA300IBADCLogicP$SetParam$setParam(0, param);
#line 10

#line 10
  return __nesc_result;
#line 10
}
#line 10
# 125 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/SamplerM.nc"
static __inline void SamplerM$setparam_analog(uint8_t i, uint8_t param)
{
  switch (SamplerM$SampleRecord[i].channel) {
      case 0: 
        SamplerM$SetParam0$setParam(param);
      break;
      case 1: 
        SamplerM$SetParam1$setParam(param);
      break;
      case 2: 
        SamplerM$SetParam2$setParam(param);
      break;
      case 3: 
        SamplerM$SetParam3$setParam(param);
      break;
      case 4: 
        SamplerM$SetParam4$setParam(param);
      break;
      case 5: 
        SamplerM$SetParam5$setParam(param);
      break;
      case 6: 
        SamplerM$SetParam6$setParam(param);
      break;
      case 7: 
        SamplerM$SetParam7$setParam(param);
      break;
      case 8: 
        SamplerM$SetParam8$setParam(param);
      break;
      case 9: 
        SamplerM$SetParam9$setParam(param);
      break;
      case 10: 
        SamplerM$SetParam10$setParam(param);
      break;
      case 11: 
        SamplerM$SetParam11$setParam(param);
      break;
      case 12: 
        SamplerM$SetParam12$setParam(param);
      break;
      case 13: 
        SamplerM$SetParam13$setParam(param);
      break;
      default: ;
    }
  return;
}

# 68 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300CounterLogicP.nc"
static inline error_t MDA300CounterLogicP$Counter$setParam(uint8_t modeToSet)
{


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 72
    {
      MDA300CounterLogicP$mode = modeToSet;
      if (((MDA300CounterLogicP$mode & RISING_EDGE) == 0) & ((MDA300CounterLogicP$mode & FALLING_EDGE) == 0)) {
        MDA300CounterLogicP$mode |= RISING_EDGE;
        }
    }
#line 77
    __nesc_atomic_end(__nesc_atomic); }
#line 77
  return SUCCESS;
}

# 14 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/Dio.nc"
inline static error_t SamplerM$Counter$setParam(uint8_t modeToSet){
#line 14
  unsigned char __nesc_result;
#line 14

#line 14
  __nesc_result = MDA300CounterLogicP$Counter$setParam(modeToSet);
#line 14

#line 14
  return __nesc_result;
#line 14
}
#line 14
# 201 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/SamplerM.nc"
static __inline void SamplerM$setparam_counter(int8_t i, uint8_t param)
{
  SamplerM$Counter$setParam(param);
  return;
}

# 14 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/Dio.nc"
inline static error_t SamplerM$Dio5$setParam(uint8_t modeToSet){
#line 14
  unsigned char __nesc_result;
#line 14

#line 14
  __nesc_result = MDA300DigitalLogicP$Dio$setParam(5, modeToSet);
#line 14

#line 14
  return __nesc_result;
#line 14
}
#line 14
inline static error_t SamplerM$Dio4$setParam(uint8_t modeToSet){
#line 14
  unsigned char __nesc_result;
#line 14

#line 14
  __nesc_result = MDA300DigitalLogicP$Dio$setParam(4, modeToSet);
#line 14

#line 14
  return __nesc_result;
#line 14
}
#line 14
inline static error_t SamplerM$Dio3$setParam(uint8_t modeToSet){
#line 14
  unsigned char __nesc_result;
#line 14

#line 14
  __nesc_result = MDA300DigitalLogicP$Dio$setParam(3, modeToSet);
#line 14

#line 14
  return __nesc_result;
#line 14
}
#line 14
inline static error_t SamplerM$Dio2$setParam(uint8_t modeToSet){
#line 14
  unsigned char __nesc_result;
#line 14

#line 14
  __nesc_result = MDA300DigitalLogicP$Dio$setParam(2, modeToSet);
#line 14

#line 14
  return __nesc_result;
#line 14
}
#line 14
inline static error_t SamplerM$Dio1$setParam(uint8_t modeToSet){
#line 14
  unsigned char __nesc_result;
#line 14

#line 14
  __nesc_result = MDA300DigitalLogicP$Dio$setParam(1, modeToSet);
#line 14

#line 14
  return __nesc_result;
#line 14
}
#line 14
inline static error_t SamplerM$Dio0$setParam(uint8_t modeToSet){
#line 14
  unsigned char __nesc_result;
#line 14

#line 14
  __nesc_result = MDA300DigitalLogicP$Dio$setParam(0, modeToSet);
#line 14

#line 14
  return __nesc_result;
#line 14
}
#line 14
# 175 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/SamplerM.nc"
static __inline void SamplerM$setparam_digital(int8_t i, uint8_t param)
{
  switch (SamplerM$SampleRecord[i].channel) {
      case 0: 
        SamplerM$Dio0$setParam(param);
      break;
      case 1: 
        SamplerM$Dio1$setParam(param);
      break;
      case 2: 
        SamplerM$Dio2$setParam(param);
      break;
      case 3: 
        SamplerM$Dio3$setParam(param);
      break;
      case 4: 
        SamplerM$Dio4$setParam(param);
      break;
      case 5: 
        SamplerM$Dio5$setParam(param);
      break;
      default: ;
    }
  return;
}

#line 95
static __inline int8_t SamplerM$get_avilable_SampleRecord(void )
{
  int8_t i;

#line 98
  for (i = 0; i < 25; i++) if (SamplerM$SampleRecord[i].sampling_interval == SAMPLE_RECORD_FREE) {
#line 98
      return i;
      }
#line 99
  return -1;
}

#line 400
static inline int8_t SamplerM$Sample$getSample(uint8_t channel, uint8_t channelType, uint32_t interval, uint8_t param)
{
  int8_t i;

#line 403
  i = SamplerM$get_avilable_SampleRecord();
  if (i == -1) {
#line 404
    return i;
    }
#line 405
  SamplerM$SampleRecord[i].channel = channel;
  SamplerM$SampleRecord[i].channelType = channelType;
  SamplerM$SampleRecord[i].ticks_left = interval;
  SamplerM$SampleRecord[i].sampling_interval = interval;

  if (SamplerM$SampleRecord[i].channelType == DIGITAL) {
#line 410
    SamplerM$setparam_digital(i, param);
    }
#line 411
  if (SamplerM$SampleRecord[i].channelType == COUNTER) {
#line 411
    SamplerM$setparam_counter(i, param);
    }
#line 412
  if (SamplerM$SampleRecord[i].channelType == ANALOG) {
#line 412
    SamplerM$setparam_analog(i, param);
    }
#line 413
  return i;
}

# 3 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/Sample.nc"
inline static int8_t DataManagerP$Sample$getSample(uint8_t channel, uint8_t channelType, uint32_t interval, uint8_t param){
#line 3
  signed char __nesc_result;
#line 3

#line 3
  __nesc_result = SamplerM$Sample$getSample(channel, channelType, interval, param);
#line 3

#line 3
  return __nesc_result;
#line 3
}
#line 3
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300CounterLogicP.nc"
static inline error_t MDA300CounterLogicP$Plugged(void )
#line 80
{
  return MDA300CounterLogicP$boardConnected;
}

# 70 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/SamplerM.nc"
inline static error_t SamplerM$Plugged(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = MDA300CounterLogicP$Plugged();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
#line 361
static inline error_t SamplerM$PlugPlay(void )
{
  return SamplerM$Plugged();
}

# 41 "DataManagerP.nc"
inline static error_t DataManagerP$PlugPlay(void ){
#line 41
  unsigned char __nesc_result;
#line 41

#line 41
  __nesc_result = SamplerM$PlugPlay();
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
#line 235
inline static void DataManagerP$start_sampling(void )
#line 235
{
  uint8_t i = 0;

  if (DataManagerP$PlugPlay()) 
    {
      for (i = 0; i < 11; i++) {
          if (DataManagerP$periodicity[i] != 0) {
            DataManagerP$record[i] = DataManagerP$Sample$getSample(DataManagerP$ChNo[i], DataManagerP$Channel[i], DataManagerP$periodicity[i], DataManagerP$Flags[i]);
            }
        }
#line 244
      DataManagerP$Leds$led1On();
      DataManagerP$Sample$start();
    }
  else {
      DataManagerP$fatal_problem();
    }
}

static inline void DataManagerP$SamplerControl$startDone(error_t error)
#line 252
{
  if (error != SUCCESS) {
      DataManagerP$fatal_problem();
    }
  else 
#line 255
    {
      DataManagerP$start_sampling();
    }
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void SamplerM$SamplerControl$startDone(error_t error){
#line 92
  DataManagerP$SamplerControl$startDone(error);
#line 92
}
#line 92
# 339 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/SamplerM.nc"
static inline void SamplerM$IBADCcontrol$startDone(error_t error)
#line 339
{
  SamplerM$SamplerControl$startDone(SUCCESS);
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void HplMDA300IBADCP$SplitControl$startDone(error_t error){
#line 92
  SamplerM$IBADCcontrol$startDone(error);
#line 92
}
#line 92
# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplMDA300IBADCP$VoltageBuffer$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortC.Bit2*/HplAtm128GeneralIOPinP$18$IO$clr();
#line 30
}
#line 30
inline static void HplMDA300IBADCP$Exitation33$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortC.Bit3*/HplAtm128GeneralIOPinP$19$IO$clr();
#line 30
}
#line 30
inline static void HplMDA300IBADCP$Exitation50$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP$21$IO$clr();
#line 30
}
#line 30
#line 29
inline static void HplMDA300IBADCP$VoltageBooster$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortC.Bit1*/HplAtm128GeneralIOPinP$17$IO$set();
#line 29
}
#line 29

inline static void HplMDA300IBADCP$Amplifier$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortC.Bit6*/HplAtm128GeneralIOPinP$22$IO$clr();
#line 30
}
#line 30
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP$20$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )39U |= 1 << 4;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplMDA300IBADCP$Power$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP$20$IO$makeOutput();
#line 35
}
#line 35
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit6*/HplAtm128GeneralIOPinP$22$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )39U |= 1 << 6;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplMDA300IBADCP$Amplifier$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortC.Bit6*/HplAtm128GeneralIOPinP$22$IO$makeOutput();
#line 35
}
#line 35
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP$21$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )39U |= 1 << 5;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplMDA300IBADCP$Exitation50$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortC.Bit5*/HplAtm128GeneralIOPinP$21$IO$makeOutput();
#line 35
}
#line 35
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit3*/HplAtm128GeneralIOPinP$19$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )39U |= 1 << 3;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplMDA300IBADCP$Exitation33$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortC.Bit3*/HplAtm128GeneralIOPinP$19$IO$makeOutput();
#line 35
}
#line 35
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit2*/HplAtm128GeneralIOPinP$18$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )39U |= 1 << 2;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplMDA300IBADCP$VoltageBuffer$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortC.Bit2*/HplAtm128GeneralIOPinP$18$IO$makeOutput();
#line 35
}
#line 35
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit1*/HplAtm128GeneralIOPinP$17$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )39U |= 1 << 1;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplMDA300IBADCP$VoltageBooster$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortC.Bit1*/HplAtm128GeneralIOPinP$17$IO$makeOutput();
#line 35
}
#line 35
# 27 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/HplMDA300IBADCP.nc"
static inline void HplMDA300IBADCP$SwitchControl$startDone(error_t error)
#line 27
{
  HplMDA300IBADCP$VoltageBooster$makeOutput();
  HplMDA300IBADCP$VoltageBuffer$makeOutput();
  HplMDA300IBADCP$Exitation33$makeOutput();
  HplMDA300IBADCP$Exitation50$makeOutput();
  HplMDA300IBADCP$Amplifier$makeOutput();
  HplMDA300IBADCP$Power$makeOutput();
  HplMDA300IBADCP$Amplifier$clr();
  HplMDA300IBADCP$VoltageBooster$set();
  HplMDA300IBADCP$Exitation50$clr();
  HplMDA300IBADCP$Exitation33$clr();
  HplMDA300IBADCP$VoltageBuffer$clr();
  HplMDA300IBADCP$SplitControl$startDone(SUCCESS);
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void MDA300IBADCSwitchP$SwitchControl$startDone(error_t error){
#line 92
  HplMDA300IBADCP$SwitchControl$startDone(error);
#line 92
}
#line 92
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300IBADCSwitchP.nc"
static inline error_t MDA300IBADCSwitchP$SwitchControl$start(void )
#line 32
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 33
    MDA300IBADCSwitchP$state = MDA300IBADCSwitchP$IDLE;
#line 33
    __nesc_atomic_end(__nesc_atomic); }
  MDA300IBADCSwitchP$SwitchControl$startDone(SUCCESS);
  return SUCCESS;
}

# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t HplMDA300IBADCP$SwitchControl$start(void ){
#line 83
  unsigned char __nesc_result;
#line 83

#line 83
  __nesc_result = MDA300IBADCSwitchP$SwitchControl$start();
#line 83

#line 83
  return __nesc_result;
#line 83
}
#line 83
# 22 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/HplMDA300IBADCP.nc"
static inline error_t HplMDA300IBADCP$SplitControl$start(void )
#line 22
{
  HplMDA300IBADCP$SwitchControl$start();
  return SUCCESS;
}

# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t SamplerM$IBADCcontrol$start(void ){
#line 83
  unsigned char __nesc_result;
#line 83

#line 83
  __nesc_result = HplMDA300IBADCP$SplitControl$start();
#line 83

#line 83
  return __nesc_result;
#line 83
}
#line 83
# 335 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/SamplerM.nc"
static inline void SamplerM$DioControl$startDone(error_t error)
#line 335
{
  SamplerM$IBADCcontrol$start();
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void MDA300DigitalLogicP$SplitControl$startDone(error_t error){
#line 92
  SamplerM$DioControl$startDone(error);
#line 92
}
#line 92
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300DigitalLogicP.nc"
static inline void MDA300DigitalLogicP$init_io$runTask(void )
{
  if (MDA300DigitalLogicP$I2CPacket$read(0x03, TOS_DIGITAL_I2C_ADDR, 1, &MDA300DigitalLogicP$buff) == FAIL) {
      MDA300DigitalLogicP$init_io$postTask();
    }
  else {
#line 48
    MDA300DigitalLogicP$SplitControl$startDone(SUCCESS);
    }
}

# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void SamplerM$SamplerTimer$startOneShot(uint32_t dt){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(13U, dt);
#line 62
}
#line 62
# 497 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/SamplerM.nc"
static inline void SamplerM$Temp$readDone(error_t result, uint16_t data)
#line 497
{
  SamplerM$Sample$readDone(0, TEMPERATURE, data);
}

# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Read.nc"
inline static void /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Temperature$readDone(error_t result, /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Temperature$val_t val){
#line 63
  SamplerM$Temp$readDone(result, val);
#line 63
}
#line 63
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$TempResource$release(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$Resource$release(/*SamplerC.TempHumC*/SensirionSht15C$0$TEMP_KEY);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15LogicP.nc"
static inline error_t /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$SensirionSht15$measureTemperature(uint8_t client)
#line 84
{
  if (!/*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$on) {
#line 85
      return EOFF;
    }
#line 86
  if (/*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$busy) {
#line 86
      return EBUSY;
    }
  else 
#line 86
    {
#line 86
      /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$busy = TRUE;
    }
#line 87
  /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$cmd = /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$CMD_MEASURE_TEMPERATURE;
  /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$currentClient = client;
  return /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$performCommand();
}

# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15.nc"
inline static error_t /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Sht15Temp$measureTemperature(void ){
#line 32
  unsigned char __nesc_result;
#line 32

#line 32
  __nesc_result = /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$SensirionSht15$measureTemperature(/*SamplerC.TempHumC*/SensirionSht15C$0$TEMP_KEY);
#line 32

#line 32
  return __nesc_result;
#line 32
}
#line 32
# 36 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15ReaderP.nc"
static inline void /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$TempResource$granted(void )
#line 36
{
  error_t result;

#line 38
  if ((result = /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Sht15Temp$measureTemperature()) != SUCCESS) {
      /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$TempResource$release();
      /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Temperature$readDone(result, 0);
    }
}

# 501 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/SamplerM.nc"
static inline void SamplerM$Hum$readDone(error_t result, uint16_t data)
#line 501
{
  SamplerM$Sample$readDone(0, HUMIDITY, data);
}

# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Read.nc"
inline static void /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Humidity$readDone(error_t result, /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Humidity$val_t val){
#line 63
  SamplerM$Hum$readDone(result, val);
#line 63
}
#line 63
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$HumResource$release(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$Resource$release(/*SamplerC.TempHumC*/SensirionSht15C$0$HUM_KEY);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15LogicP.nc"
static inline error_t /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$SensirionSht15$measureHumidity(uint8_t client)
#line 92
{
  if (!/*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$on) {
#line 93
      return EOFF;
    }
#line 94
  if (/*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$busy) {
#line 94
      return EBUSY;
    }
  else 
#line 94
    {
#line 94
      /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$busy = TRUE;
    }
#line 95
  /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$cmd = /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$CMD_MEASURE_HUMIDITY;
  /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$currentClient = client;
  return /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$performCommand();
}

# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15.nc"
inline static error_t /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Sht15Hum$measureHumidity(void ){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$SensirionSht15$measureHumidity(/*SamplerC.TempHumC*/SensirionSht15C$0$HUM_KEY);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15ReaderP.nc"
static inline void /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$HumResource$granted(void )
#line 56
{
  error_t result;

#line 58
  if ((result = /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Sht15Hum$measureHumidity()) != SUCCESS) {
      /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$HumResource$release();
      /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Humidity$readDone(result, 0);
    }
}

# 164 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$Resource$default$granted(uint8_t id)
#line 164
{
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$Resource$granted(uint8_t arg_0x40ac1310){
#line 92
  switch (arg_0x40ac1310) {
#line 92
    case /*SamplerC.TempHumC*/SensirionSht15C$0$TEMP_KEY:
#line 92
      /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$TempResource$granted();
#line 92
      break;
#line 92
    case /*SamplerC.TempHumC*/SensirionSht15C$0$HUM_KEY:
#line 92
      /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$HumResource$granted();
#line 92
      break;
#line 92
    default:
#line 92
      /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$Resource$default$granted(arg_0x40ac1310);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 170 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$ResourceConfigure$default$configure(uint8_t id)
#line 170
{
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$ResourceConfigure$configure(uint8_t arg_0x40ac09b8){
#line 49
    /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$ResourceConfigure$default$configure(arg_0x40ac09b8);
#line 49
}
#line 49
# 154 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$grantedTask$runTask(void )
#line 154
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 155
    {
      /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$resId = /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$reqResId;
      /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$state = /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$RES_BUSY;
    }
#line 158
    __nesc_atomic_end(__nesc_atomic); }
  /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$ResourceConfigure$configure(/*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$resId);
  /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$Resource$granted(/*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$resId);
}

# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$disable(void )
#line 43
{
#line 43
  * (volatile uint8_t *)(0x1D + 0x20) &= ~(1 << 7);
}

# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplSensirionSht15C.Int*/Atm128GpioInterruptC$0$Atm128Interrupt$disable(void ){
#line 40
  /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$disable();
#line 40
}
#line 40
# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline error_t /*HplSensirionSht15C.Int*/Atm128GpioInterruptC$0$Interrupt$disable(void )
#line 33
{
  /*HplSensirionSht15C.Int*/Atm128GpioInterruptC$0$Atm128Interrupt$disable();
  return SUCCESS;
}

# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static error_t /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$InterruptDATA$disable(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*HplSensirionSht15C.Int*/Atm128GpioInterruptC$0$Interrupt$disable();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortE.Bit7*/HplAtm128GeneralIOPinP$39$IO$set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )46U |= 1 << 7;
}

# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$DATA$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortE.Bit7*/HplAtm128GeneralIOPinP$39$IO$set();
#line 29
}
#line 29
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortE.Bit7*/HplAtm128GeneralIOPinP$39$IO$makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )45U &= ~(1 << 7);
}

# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$DATA$makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortE.Bit7*/HplAtm128GeneralIOPinP$39$IO$makeInput();
#line 33
}
#line 33
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit0*/HplAtm128GeneralIOPinP$16$IO$clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )40U &= ~(1 << 0);
}

# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$CLOCK$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortC.Bit0*/HplAtm128GeneralIOPinP$16$IO$clr();
#line 30
}
#line 30
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit0*/HplAtm128GeneralIOPinP$16$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )39U |= 1 << 0;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$CLOCK$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortC.Bit0*/HplAtm128GeneralIOPinP$16$IO$makeOutput();
#line 35
}
#line 35
# 191 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15LogicP.nc"
static inline void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$initPins(void )
#line 191
{
  /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$CLOCK$makeOutput();
  /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$CLOCK$clr();
  /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$DATA$makeInput();
  /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$DATA$set();
  /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$InterruptDATA$disable();
}

# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit0*/HplAtm128GeneralIOPinP$16$IO$set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )40U |= 1 << 0;
}

# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$CLOCK$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortC.Bit0*/HplAtm128GeneralIOPinP$16$IO$set();
#line 29
}
#line 29
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortE.Bit7*/HplAtm128GeneralIOPinP$39$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )45U |= 1 << 7;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$DATA$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortE.Bit7*/HplAtm128GeneralIOPinP$39$IO$makeOutput();
#line 35
}
#line 35
# 199 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15LogicP.nc"
static inline void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$resetDevice(void )
#line 199
{
  uint8_t i;

#line 201
  /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$DATA$makeOutput();
  /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$DATA$set();
  /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$CLOCK$clr();
  for (i = 0; i < 9; i++) {
      /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$CLOCK$set();
      /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$CLOCK$clr();
    }
}

# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortE.Bit7*/HplAtm128GeneralIOPinP$39$IO$clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )46U &= ~(1 << 7);
}

# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$DATA$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortE.Bit7*/HplAtm128GeneralIOPinP$39$IO$clr();
#line 30
}
#line 30
# 210 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15LogicP.nc"
static inline void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$transmissionStart(void )
#line 210
{
  /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$DATA$makeOutput();
  /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$DATA$set();
  /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$CLOCK$clr();
  /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$CLOCK$set();
  /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$DATA$clr();
  /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$CLOCK$clr();
  /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$CLOCK$set();
  /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$DATA$set();
  /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$CLOCK$clr();
}

static inline void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$sendCommand(uint8_t _cmd)
#line 222
{
  /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$writeByte(_cmd);
}

# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortE.Bit7*/HplAtm128GeneralIOPinP$39$IO$get(void )
#line 45
{
#line 45
  return (* (volatile uint8_t * )44U & (1 << 7)) != 0;
}

# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static bool /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$DATA$get(void ){
#line 32
  unsigned char __nesc_result;
#line 32

#line 32
  __nesc_result = /*HplAtm128GeneralIOC.PortE.Bit7*/HplAtm128GeneralIOPinP$39$IO$get();
#line 32

#line 32
  return __nesc_result;
#line 32
}
#line 32
# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline error_t /*HplSensirionSht15C.Int*/Atm128GpioInterruptC$0$Interrupt$enableFallingEdge(void )
#line 29
{
  return /*HplSensirionSht15C.Int*/Atm128GpioInterruptC$0$enable(FALSE);
}

# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static error_t /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$InterruptDATA$enableFallingEdge(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplSensirionSht15C.Int*/Atm128GpioInterruptC$0$Interrupt$enableFallingEdge();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 252 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15LogicP.nc"
static inline void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$enableInterrupt(void )
#line 252
{
  /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$DATA$makeInput();
  /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$DATA$set();
  /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$InterruptDATA$enableFallingEdge();
}

# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$clear(void )
#line 41
{
#line 41
  * (volatile uint8_t *)(0x1C + 0x20) = 1 << 7;
}

# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplSensirionSht15C.Int*/Atm128GpioInterruptC$0$Atm128Interrupt$clear(void ){
#line 45
  /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$clear();
#line 45
}
#line 45
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$edge(bool low_to_high)
#line 47
{
  * (volatile uint8_t * )106U |= 1 << 7;

  if (low_to_high) {
    * (volatile uint8_t * )106U |= 1 << 6;
    }
  else {
#line 53
    * (volatile uint8_t * )106U &= ~(1 << 6);
    }
}

# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplSensirionSht15C.Int*/Atm128GpioInterruptC$0$Atm128Interrupt$edge(bool low_to_high){
#line 59
  /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$edge(low_to_high);
#line 59
}
#line 59
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$enable(void )
#line 42
{
#line 42
  * (volatile uint8_t *)(0x1D + 0x20) |= 1 << 7;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplSensirionSht15C.Int*/Atm128GpioInterruptC$0$Atm128Interrupt$enable(void ){
#line 35
  /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$enable();
#line 35
}
#line 35
# 343 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15LogicP.nc"
static inline void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$ack(void )
#line 343
{
  /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$DATA$makeOutput();
  /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$DATA$clr();
  /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$CLOCK$set();
  /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$CLOCK$clr();
  /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$DATA$makeInput();
  /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$DATA$set();
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$signalStatusDone$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(/*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$signalStatusDone);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline bool /*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$isEmpty(void )
#line 50
{
  return /*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$qHead == /*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$NO_ENTRY;
}

# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static bool /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$Queue$isEmpty(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$isEmpty();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$dequeue(void )
#line 58
{
  /* atomic removed: atomic calls only */
#line 59
  {
    if (/*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$qHead != /*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$NO_ENTRY) {
        uint8_t id = /*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$qHead;

#line 62
        /*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$qHead = /*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$resQ[/*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$qHead];
        if (/*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$qHead == /*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$NO_ENTRY) {
          /*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$qTail = /*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$NO_ENTRY;
          }
#line 65
        /*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$resQ[id] = /*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$NO_ENTRY;
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
      /*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$NO_ENTRY;

#line 68
      return __nesc_temp;
    }
  }
}

# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$Queue$dequeue(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = /*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$dequeue();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$grantedTask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(/*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$grantedTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 172 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$ResourceConfigure$default$unconfigure(uint8_t id)
#line 172
{
}

# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$ResourceConfigure$unconfigure(uint8_t arg_0x40ac09b8){
#line 55
    /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$ResourceConfigure$default$unconfigure(arg_0x40ac09b8);
#line 55
}
#line 55
# 358 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/SamplerM.nc"
static inline void SamplerM$TempHumControl$stopDone(error_t error)
#line 358
{
}

# 117 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void HplSensirionSht15P$SplitControl$stopDone(error_t error){
#line 117
  SamplerM$TempHumControl$stopDone(error);
#line 117
}
#line 117
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/HplSensirionSht15P.nc"
static inline void HplSensirionSht15P$stopTask$runTask(void )
#line 44
{
  HplSensirionSht15P$SplitControl$stopDone(SUCCESS);
}

# 70 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15ReaderP.nc"
static inline void /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Sht15Temp$measureHumidityDone(error_t result, uint16_t val)
#line 70
{
}

#line 64
static inline void /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Sht15Hum$measureHumidityDone(error_t result, uint16_t val)
#line 64
{
  /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$HumResource$release();
  /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Humidity$readDone(result, val);
}

# 379 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15LogicP.nc"
static inline void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$SensirionSht15$default$measureHumidityDone(uint8_t client, error_t result, uint16_t val)
#line 379
{
}

# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15.nc"
inline static void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$SensirionSht15$measureHumidityDone(uint8_t arg_0x40d68258, error_t result, uint16_t val){
#line 55
  switch (arg_0x40d68258) {
#line 55
    case /*SamplerC.TempHumC*/SensirionSht15C$0$TEMP_KEY:
#line 55
      /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Sht15Temp$measureHumidityDone(result, val);
#line 55
      break;
#line 55
    case /*SamplerC.TempHumC*/SensirionSht15C$0$HUM_KEY:
#line 55
      /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Sht15Hum$measureHumidityDone(result, val);
#line 55
      break;
#line 55
    default:
#line 55
      /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$SensirionSht15$default$measureHumidityDone(arg_0x40d68258, result, val);
#line 55
      break;
#line 55
    }
#line 55
}
#line 55
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15ReaderP.nc"
static inline void /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Sht15Temp$measureTemperatureDone(error_t result, uint16_t val)
#line 44
{
  /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$TempResource$release();
  /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Temperature$readDone(result, val);
}

#line 75
static inline void /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Sht15Hum$measureTemperatureDone(error_t result, uint16_t val)
#line 75
{
}

# 378 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15LogicP.nc"
static inline void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$SensirionSht15$default$measureTemperatureDone(uint8_t client, error_t result, uint16_t val)
#line 378
{
}

# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15.nc"
inline static void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$SensirionSht15$measureTemperatureDone(uint8_t arg_0x40d68258, error_t result, uint16_t val){
#line 40
  switch (arg_0x40d68258) {
#line 40
    case /*SamplerC.TempHumC*/SensirionSht15C$0$TEMP_KEY:
#line 40
      /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Sht15Temp$measureTemperatureDone(result, val);
#line 40
      break;
#line 40
    case /*SamplerC.TempHumC*/SensirionSht15C$0$HUM_KEY:
#line 40
      /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Sht15Hum$measureTemperatureDone(result, val);
#line 40
      break;
#line 40
    default:
#line 40
      /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$SensirionSht15$default$measureTemperatureDone(arg_0x40d68258, result, val);
#line 40
      break;
#line 40
    }
#line 40
}
#line 40
# 153 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(uint8_t num)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num].isrunning = FALSE;
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$Timer$stop(void ){
#line 67
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(15U);
#line 67
}
#line 67
# 291 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15LogicP.nc"
static inline void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$readSensor$runTask(void )
#line 291
{
  uint16_t data = 0;
  uint8_t crc = 0;

  if (/*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$busy == FALSE) {


      return;
    }

  /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$Timer$stop();

  data = /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$readByte() << 8;
  data |= /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$readByte();

  crc = /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$readByte();

  /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$endTransmission();

  switch (/*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$cmd) {
      case /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$CMD_MEASURE_TEMPERATURE: 
        /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$busy = FALSE;
      /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$SensirionSht15$measureTemperatureDone(/*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$currentClient, SUCCESS, data);
      break;

      case /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$CMD_MEASURE_HUMIDITY: 
        /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$busy = FALSE;
      /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$SensirionSht15$measureHumidityDone(/*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$currentClient, SUCCESS, data);
      break;

      default: 
        break;
    }
}

# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15ReaderP.nc"
static inline void /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Sht15Temp$writeStatusRegDone(error_t result)
#line 72
{
}



static inline void /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Sht15Hum$writeStatusRegDone(error_t result)
#line 77
{
}

# 381 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15LogicP.nc"
static inline void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$SensirionSht15$default$writeStatusRegDone(uint8_t client, error_t result)
#line 381
{
}

# 87 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15.nc"
inline static void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$SensirionSht15$writeStatusRegDone(uint8_t arg_0x40d68258, error_t result){
#line 87
  switch (arg_0x40d68258) {
#line 87
    case /*SamplerC.TempHumC*/SensirionSht15C$0$TEMP_KEY:
#line 87
      /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Sht15Temp$writeStatusRegDone(result);
#line 87
      break;
#line 87
    case /*SamplerC.TempHumC*/SensirionSht15C$0$HUM_KEY:
#line 87
      /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Sht15Hum$writeStatusRegDone(result);
#line 87
      break;
#line 87
    default:
#line 87
      /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$SensirionSht15$default$writeStatusRegDone(arg_0x40d68258, result);
#line 87
      break;
#line 87
    }
#line 87
}
#line 87
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15ReaderP.nc"
static inline void /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Sht15Temp$readStatusRegDone(error_t result, uint8_t val)
#line 71
{
}



static inline void /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Sht15Hum$readStatusRegDone(error_t result, uint8_t val)
#line 76
{
}

# 380 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15LogicP.nc"
static inline void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$SensirionSht15$default$readStatusRegDone(uint8_t client, error_t result, uint8_t val)
#line 380
{
}

# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15.nc"
inline static void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$SensirionSht15$readStatusRegDone(uint8_t arg_0x40d68258, error_t result, uint8_t val){
#line 71
  switch (arg_0x40d68258) {
#line 71
    case /*SamplerC.TempHumC*/SensirionSht15C$0$TEMP_KEY:
#line 71
      /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Sht15Temp$readStatusRegDone(result, val);
#line 71
      break;
#line 71
    case /*SamplerC.TempHumC*/SensirionSht15C$0$HUM_KEY:
#line 71
      /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Sht15Hum$readStatusRegDone(result, val);
#line 71
      break;
#line 71
    default:
#line 71
      /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$SensirionSht15$default$readStatusRegDone(arg_0x40d68258, result, val);
#line 71
      break;
#line 71
    }
#line 71
}
#line 71
# 359 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15LogicP.nc"
static inline void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$signalStatusDone$runTask(void )
#line 359
{
  bool _writeFail = /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$writeFail;

#line 361
  switch (/*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$cmd) {
      case /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$CMD_READ_STATUS: 
        /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$busy = FALSE;
      /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$SensirionSht15$readStatusRegDone(/*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$currentClient, SUCCESS, /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$status);
      break;
      case /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$CMD_WRITE_STATUS: 
        /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$busy = FALSE;
      /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$writeFail = FALSE;
      /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$SensirionSht15$writeStatusRegDone(/*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$currentClient, _writeFail ? FAIL : SUCCESS);
      break;
      default: 

        break;
    }
}

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
inline static void DataManagerP$Leds$led0Toggle(void ){
#line 56
  LedsP$Leds$led0Toggle();
#line 56
}
#line 56
# 626 "DataManagerP.nc"
inline static void DataManagerP$report_problem(void )
#line 626
{
#line 626
  DataManagerP$Leds$led0Toggle();
}

# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$AMSend$send(am_id_t arg_0x40b719f8, am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$send(arg_0x40b719f8, addr, msg, len);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
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
# 82 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$send(uint8_t clientId, message_t *msg, 
uint8_t len)
#line 83
{
  if (clientId >= 1) {
      return FAIL;
    }
  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[clientId].msg != (void *)0) {
      return EBUSY;
    }
  ;

  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[clientId].msg = msg;
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$Packet$setPayloadLength(msg, len);

  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current >= 1) {
      error_t err;
      am_id_t amId = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$AMPacket$type(msg);
      am_addr_t dest = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$AMPacket$destination(msg);

      ;
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current = clientId;

      err = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$AMSend$send(amId, dest, msg, len);
      if (err != SUCCESS) {
          ;
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current = 1;
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[clientId].msg = (void *)0;
        }

      return err;
    }
  else {
      ;
    }
  return SUCCESS;
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t /*DozerC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$send(message_t * msg, uint8_t len){
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
# 161 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$setType(message_t *amsg, am_id_t type)
#line 161
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$getHeader(amsg);

#line 163
  __nesc_hton_uint8(header->type.data, type);
}

# 151 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static void /*DozerC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setType(message_t * amsg, am_id_t t){
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

# 142 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$setDestination(message_t *amsg, am_addr_t addr)
#line 142
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$getHeader(amsg);

#line 144
  __nesc_hton_uint16(header->dest.data, addr);
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static void /*DozerC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setDestination(message_t * amsg, am_addr_t addr){
#line 92
  /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$setDestination(amsg, addr);
#line 92
}
#line 92
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline error_t /*DozerC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 47
{
  /*DozerC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setDestination(msg, dest);
  /*DozerC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setType(msg, 51UL);
  return /*DozerC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$send(msg, len);
}

# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t DataManagerP$SerialSend$send(am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = /*DozerC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$send(addr, msg, len);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 349 "DataManagerP.nc"
static inline void DataManagerP$uartSendTask$runTask(void )
#line 349
{
  if (DataManagerP$SerialSend$send(0xffff, DataManagerP$msg_ptr, sizeof(SensedData )) != SUCCESS) {
      DataManagerP$report_problem();
    }
  else 
#line 352
    {
      DataManagerP$sending_packet = TRUE;
    }
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t /*DozerC.DataSenderC.AMQueueEntryP*/AMQueueEntryP$2$Send$send(message_t * msg, uint8_t len){
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
# 251 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_leuint8(void * target, uint8_t value)
#line 251
{
  uint8_t *base = target;

#line 253
  base[0] = value;
  return value;
}

# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline ieee154_header_t *IEEE154PacketP$getHeader(message_t *msg)
{
  return (ieee154_header_t *)(msg->data - sizeof(ieee154_header_t ));
}

#line 213
static __inline void IEEE154PacketP$IEEE154Packet$setType(message_t *msg, am_id_t type)
{
  __nesc_hton_leuint8(IEEE154PacketP$getHeader(msg)->type.data, type);
}

#line 280
static __inline void IEEE154PacketP$AMPacket$setType(message_t *msg, am_id_t type)
{
  IEEE154PacketP$IEEE154Packet$setType(msg, type);
}

# 151 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static void /*DozerC.DataSenderC.AMQueueEntryP*/AMQueueEntryP$2$AMPacket$setType(message_t * amsg, am_id_t t){
#line 151
  IEEE154PacketP$AMPacket$setType(amsg, t);
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

# 179 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline void IEEE154PacketP$IEEE154Packet$setDestAddr(message_t *msg, uint16_t addr)
{
  __nesc_hton_leuint16(IEEE154PacketP$getHeader(msg)->dest.data, addr);
}

#line 259
static __inline void IEEE154PacketP$AMPacket$setDestination(message_t *msg, am_addr_t addr)
{
  IEEE154PacketP$IEEE154Packet$setDestAddr(msg, addr);
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static void /*DozerC.DataSenderC.AMQueueEntryP*/AMQueueEntryP$2$AMPacket$setDestination(message_t * amsg, am_addr_t addr){
#line 92
  IEEE154PacketP$AMPacket$setDestination(amsg, addr);
#line 92
}
#line 92
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline error_t /*DozerC.DataSenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 47
{
  /*DozerC.DataSenderC.AMQueueEntryP*/AMQueueEntryP$2$AMPacket$setDestination(msg, dest);
  /*DozerC.DataSenderC.AMQueueEntryP*/AMQueueEntryP$2$AMPacket$setType(msg, 51UL);
  return /*DozerC.DataSenderC.AMQueueEntryP*/AMQueueEntryP$2$Send$send(msg, len);
}

# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t DataManagerP$DataSend$send(am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = /*DozerC.DataSenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$send(addr, msg, len);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 341 "DataManagerP.nc"
static inline void DataManagerP$sendTask$runTask(void )
#line 341
{
  if (DataManagerP$DataSend$send(DataManagerP$dest, DataManagerP$msg_ptr, sizeof(SensedData )) != SUCCESS) {
      DataManagerP$report_problem();
    }
  else 
#line 344
    {
      DataManagerP$sending_packet = TRUE;
    }
}

# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline void IEEE154PacketP$IEEE154Packet$setLength(message_t *msg, uint8_t length)
{
  __nesc_hton_leuint8(IEEE154PacketP$getHeader(msg)->length.data, length);
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static void RF230PacketP$IEEE154Packet$setLength(message_t *msg, uint8_t length){
#line 49
  IEEE154PacketP$IEEE154Packet$setLength(msg, length);
#line 49
}
#line 49
# 75 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static __inline void RF230PacketP$Packet$setPayloadLength(message_t *msg, uint8_t len)
{
  RF230PacketP$IEEE154Packet$setLength(msg, len + RF230PacketP$PACKET_LENGTH_INCREASE);
}

# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(message_t * msg, uint8_t len){
#line 83
  RF230PacketP$Packet$setPayloadLength(msg, len);
#line 83
}
#line 83
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static __inline rf230packet_metadata_t *RF230PacketP$getMeta(message_t *msg)
{
  return (rf230packet_metadata_t *)msg->metadata;
}

# 93 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline void IEEE154PacketP$IEEE154Packet$createDataFrame(message_t *msg)
{
  __nesc_hton_leuint16(IEEE154PacketP$getHeader(msg)->fcf.data, IEEE154PacketP$IEEE154_DATA_FRAME_VALUE);
}

# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static void RF230PacketP$IEEE154Packet$createDataFrame(message_t *msg){
#line 73
  IEEE154PacketP$IEEE154Packet$createDataFrame(msg);
#line 73
}
#line 73
# 68 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static inline void RF230PacketP$Packet$clear(message_t *msg)
{
  RF230PacketP$IEEE154Packet$createDataFrame(msg);

  RF230PacketP$getMeta(msg)->flags = RF230PACKET_CLEAR_METADATA;
}

# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
inline static void RF230ActiveMessageP$Packet$clear(message_t * msg){
#line 54
  RF230PacketP$Packet$clear(msg);
#line 54
}
#line 54
# 276 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_leuint16(const void * source)
#line 276
{
  const uint8_t *base = source;

#line 278
  return ((uint16_t )base[1] << 8) | base[0];
}

# 88 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline bool IEEE154PacketP$IEEE154Packet$isDataFrame(message_t *msg)
{
  return (__nesc_ntoh_leuint16(IEEE154PacketP$getHeader(msg)->fcf.data) & IEEE154PacketP$IEEE154_DATA_FRAME_MASK) == IEEE154PacketP$IEEE154_DATA_FRAME_VALUE;
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static bool RF230ActiveMessageP$IEEE154Packet$isDataFrame(message_t *msg){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = IEEE154PacketP$IEEE154Packet$isDataFrame(msg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 166 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline error_t RF230ActiveMessageP$ActiveMessageConfig$checkPacket(message_t *msg)
{

  if (!RF230ActiveMessageP$IEEE154Packet$isDataFrame(msg)) {
    RF230ActiveMessageP$Packet$clear(msg);
    }
  return SUCCESS;
}

# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageConfig.nc"
inline static error_t ActiveMessageLayerC$Config$checkPacket(message_t *msg){
#line 31
  unsigned char __nesc_result;
#line 31

#line 31
  __nesc_result = RF230ActiveMessageP$ActiveMessageConfig$checkPacket(msg);
#line 31

#line 31
  return __nesc_result;
#line 31
}
#line 31
# 189 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline void IEEE154PacketP$IEEE154Packet$setSrcAddr(message_t *msg, uint16_t addr)
{
  __nesc_hton_leuint16(IEEE154PacketP$getHeader(msg)->src.data, addr);
}

#line 264
static __inline void IEEE154PacketP$AMPacket$setSource(message_t *msg, am_addr_t addr)
{
  IEEE154PacketP$IEEE154Packet$setSrcAddr(msg, addr);
}

# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static void ActiveMessageLayerC$AMPacket$setSource(message_t * amsg, am_addr_t addr){
#line 110
  IEEE154PacketP$AMPacket$setSource(amsg, addr);
#line 110
}
#line 110
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static inline am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void )
#line 61
{
  return ActiveMessageAddressC$amAddress();
}

# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
inline static am_addr_t IEEE154PacketP$ActiveMessageAddress$amAddress(void ){
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
# 238 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline am_addr_t IEEE154PacketP$AMPacket$address(void )
{
  return IEEE154PacketP$ActiveMessageAddress$amAddress();
}

# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_addr_t ActiveMessageLayerC$AMPacket$address(void ){
#line 57
  unsigned short __nesc_result;
#line 57

#line 57
  __nesc_result = IEEE154PacketP$AMPacket$address();
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
# 169 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline void IEEE154PacketP$IEEE154Packet$setDestPan(message_t *msg, uint16_t pan)
{
  __nesc_hton_leuint16(IEEE154PacketP$getHeader(msg)->destpan.data, pan);
}

#line 290
static __inline void IEEE154PacketP$AMPacket$setGroup(message_t *msg, am_group_t grp)
{
  IEEE154PacketP$IEEE154Packet$setDestPan(msg, grp);
}

# 176 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static void ActiveMessageLayerC$AMPacket$setGroup(message_t * amsg, am_group_t grp){
#line 176
  IEEE154PacketP$AMPacket$setGroup(amsg, grp);
#line 176
}
#line 176
# 82 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static inline am_group_t ActiveMessageAddressC$ActiveMessageAddress$amGroup(void )
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
inline static am_group_t IEEE154PacketP$ActiveMessageAddress$amGroup(void ){
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
# 243 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline am_group_t IEEE154PacketP$AMPacket$localGroup(void )
{

  return IEEE154PacketP$ActiveMessageAddress$amGroup();
}

# 184 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_group_t ActiveMessageLayerC$AMPacket$localGroup(void ){
#line 184
  unsigned char __nesc_result;
#line 184

#line 184
  __nesc_result = IEEE154PacketP$AMPacket$localGroup();
#line 184

#line 184
  return __nesc_result;
#line 184
}
#line 184
#line 151
inline static void ActiveMessageLayerC$AMPacket$setType(message_t * amsg, am_id_t t){
#line 151
  IEEE154PacketP$AMPacket$setType(amsg, t);
#line 151
}
#line 151
#line 92
inline static void ActiveMessageLayerC$AMPacket$setDestination(message_t * amsg, am_addr_t addr){
#line 92
  IEEE154PacketP$AMPacket$setDestination(amsg, addr);
#line 92
}
#line 92
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t MessageBufferLayerP$sendTask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(MessageBufferLayerP$sendTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
inline static void MessageBufferLayerP$Packet$setPayloadLength(message_t * msg, uint8_t len){
#line 83
  RF230PacketP$Packet$setPayloadLength(msg, len);
#line 83
}
#line 83
# 85 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static __inline uint8_t RF230PacketP$Packet$maxPayloadLength(void )
{
  return 28;
}

# 95 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
inline static uint8_t MessageBufferLayerP$Packet$maxPayloadLength(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = RF230PacketP$Packet$maxPayloadLength();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 178 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static inline error_t MessageBufferLayerP$Send$send(message_t *msg, uint8_t len)
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
inline static error_t UniqueLayerP$SubSend$send(message_t * msg, uint8_t len){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = MessageBufferLayerP$Send$send(msg, len);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 159 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline void IEEE154PacketP$IEEE154Packet$setDSN(message_t *msg, uint8_t dsn)
{
  __nesc_hton_leuint8(IEEE154PacketP$getHeader(msg)->dsn.data, dsn);
}

# 129 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static void RF230ActiveMessageP$IEEE154Packet$setDSN(message_t *msg, uint8_t dsn){
#line 129
  IEEE154PacketP$IEEE154Packet$setDSN(msg, dsn);
#line 129
}
#line 129
# 149 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline void RF230ActiveMessageP$UniqueConfig$setSequenceNumber(message_t *msg, uint8_t dsn)
{
  RF230ActiveMessageP$IEEE154Packet$setDSN(msg, dsn);
}

# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/UniqueConfig.nc"
inline static void UniqueLayerP$UniqueConfig$setSequenceNumber(message_t *msg, uint8_t number){
#line 41
  RF230ActiveMessageP$UniqueConfig$setSequenceNumber(msg, number);
#line 41
}
#line 41
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/UniqueLayerP.nc"
static inline error_t UniqueLayerP$Send$send(message_t *msg, uint8_t len)
{
  UniqueLayerP$UniqueConfig$setSequenceNumber(msg, ++UniqueLayerP$sequenceNumber);
  return UniqueLayerP$SubSend$send(msg, len);
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t IEEE154NetworkLayerP$SubSend$send(message_t * msg, uint8_t len){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = UniqueLayerP$Send$send(msg, len);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 201 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline void IEEE154PacketP$IEEE154Packet$set6LowPan(message_t *msg, uint8_t network)
{
  __nesc_hton_leuint8(IEEE154PacketP$getHeader(msg)->network.data, network);
}

# 172 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static void IEEE154NetworkLayerP$IEEE154Packet$set6LowPan(message_t *msg, uint8_t network){
#line 172
  IEEE154PacketP$IEEE154Packet$set6LowPan(msg, network);
#line 172
}
#line 172
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154NetworkLayerP.nc"
static inline error_t IEEE154NetworkLayerP$Send$send(message_t *msg, uint8_t len)
{
  IEEE154NetworkLayerP$IEEE154Packet$set6LowPan(msg, 0x3f);
  return IEEE154NetworkLayerP$SubSend$send(msg, len);
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t ActiveMessageLayerC$SubSend$send(message_t * msg, uint8_t len){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = IEEE154NetworkLayerP$Send$send(msg, len);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t DataManagerP$uartSendTask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(DataManagerP$uartSendTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
inline static error_t DataManagerP$sendTask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(DataManagerP$sendTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Pool.nc"
inline static error_t DataManagerP$DataMessagePool$put(DataManagerP$DataMessagePool$t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*DataManagerC.DataMessagePoolP.PoolP*/PoolP$0$Pool$put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/system/QueueC.nc"
static inline bool /*DataManagerC.DataQueueP*/QueueC$0$Queue$empty(void )
#line 53
{
  return /*DataManagerC.DataQueueP*/QueueC$0$size == 0;
}









static inline /*DataManagerC.DataQueueP*/QueueC$0$queue_t /*DataManagerC.DataQueueP*/QueueC$0$Queue$head(void )
#line 65
{
  return /*DataManagerC.DataQueueP*/QueueC$0$queue[/*DataManagerC.DataQueueP*/QueueC$0$head];
}

#line 85
static inline /*DataManagerC.DataQueueP*/QueueC$0$queue_t /*DataManagerC.DataQueueP*/QueueC$0$Queue$dequeue(void )
#line 85
{
  /*DataManagerC.DataQueueP*/QueueC$0$queue_t t = /*DataManagerC.DataQueueP*/QueueC$0$Queue$head();

#line 87
  ;
  if (!/*DataManagerC.DataQueueP*/QueueC$0$Queue$empty()) {
      /*DataManagerC.DataQueueP*/QueueC$0$head++;
      if (/*DataManagerC.DataQueueP*/QueueC$0$head == 25UL) {
#line 90
        /*DataManagerC.DataQueueP*/QueueC$0$head = 0;
        }
#line 91
      /*DataManagerC.DataQueueP*/QueueC$0$size--;
      /*DataManagerC.DataQueueP*/QueueC$0$printQueue();
    }
  return t;
}

# 81 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Queue.nc"
inline static DataManagerP$DataQueue$t  DataManagerP$DataQueue$dequeue(void ){
#line 81
  nx_struct message_t *__nesc_result;
#line 81

#line 81
  __nesc_result = /*DataManagerC.DataQueueP*/QueueC$0$Queue$dequeue();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
#line 50
inline static bool DataManagerP$DataQueue$empty(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*DataManagerC.DataQueueP*/QueueC$0$Queue$empty();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 358 "DataManagerP.nc"
static inline void DataManagerP$sendAvailableData$runTask(void )
#line 358
{

  if (DataManagerP$DataQueue$empty()) {
      DataManagerP$addLocalDataToQueue();
    }

  if (DataManagerP$DataQueue$empty() == FALSE) {

      message_t *queuemsg = DataManagerP$DataQueue$dequeue();

#line 367
      if (queuemsg == (void *)0) {
          DataManagerP$fatal_problem();
        }

      memcpy(DataManagerP$msg_ptr, queuemsg, sizeof(message_t ));
      if (DataManagerP$DataMessagePool$put(queuemsg) != SUCCESS) {
          DataManagerP$fatal_problem();
        }

      if (TOS_NODE_ID != 0) {
          DataManagerP$dest = DataManagerP$parent_id;
          DataManagerP$sendTask$postTask();
        }
      else 
#line 379
        {
          DataManagerP$uartSendTask$postTask();
        }
      DataManagerP$ackPending = TRUE;
    }
}

# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void /*DozerC.BeaconSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(message_t * msg, error_t error){
#line 99
  TreeP$BeaconSend$sendDone(msg, error);
#line 99
}
#line 99
# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline void /*DozerC.BeaconSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(message_t *m, error_t err)
#line 57
{
  /*DozerC.BeaconSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(m, err);
}

# 429 "DataManagerP.nc"
static inline void DataManagerP$DataSend$sendDone(message_t *msg, error_t error)
#line 429
{
  DataManagerP$sending_packet = FALSE;
}

# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void /*DozerC.DataSenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$sendDone(message_t * msg, error_t error){
#line 99
  DataManagerP$DataSend$sendDone(msg, error);
#line 99
}
#line 99
# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline void /*DozerC.DataSenderC.AMQueueEntryP*/AMQueueEntryP$2$Send$sendDone(message_t *m, error_t err)
#line 57
{
  /*DozerC.DataSenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$sendDone(m, err);
}

# 207 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(uint8_t id, message_t *msg, error_t err)
#line 207
{
}

# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(uint8_t arg_0x40b71010, message_t * msg, error_t error){
#line 89
  switch (arg_0x40b71010) {
#line 89
    case 0U:
#line 89
      /*DozerC.BeaconSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(msg, error);
#line 89
      break;
#line 89
    case 1U:
#line 89
      /*DozerC.DataSenderC.AMQueueEntryP*/AMQueueEntryP$2$Send$sendDone(msg, error);
#line 89
      break;
#line 89
    default:
#line 89
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(arg_0x40b71010, msg, error);
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
inline static void TreeP$Leds$led1Toggle(void ){
#line 72
  LedsP$Leds$led1Toggle();
#line 72
}
#line 72
# 61 "TreeP.nc"
static inline void TreeP$report_sent(void )
#line 61
{
#line 61
  TreeP$Leds$led1Toggle();
}

# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ParameterInit.nc"
inline static error_t TreeP$SeedInit$init(TreeP$SeedInit$parameter param){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = RandomMlcgC$SeedInit$init(param);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/system/RandomMlcgC.nc"
static inline uint16_t RandomMlcgC$Random$rand16(void )
#line 78
{
  return (uint16_t )RandomMlcgC$Random$rand32();
}

# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Random.nc"
inline static uint16_t TreeP$Random$rand16(void ){
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
# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void TreeP$BeaconTimer$startOneShot(uint32_t dt){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(1U, dt);
#line 62
}
#line 62
inline static void TreeP$ConnRepWaitTimer$startOneShot(uint32_t dt){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(4U, dt);
#line 62
}
#line 62
# 173 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShotAt(uint8_t num, uint32_t t0, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(num, t0, dt, TRUE);
}

# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void SchedulerP$TDMAScheduleTimer$startOneShotAt(uint32_t t0, uint32_t dt){
#line 118
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShotAt(11U, t0, dt);
#line 118
}
#line 118
# 311 "SchedulerP.nc"
static inline void SchedulerP$TDMASchedule$setBeaconTimeStamp(uint32_t timestamp)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 313
    SchedulerP$gChildTSlot = 0;
#line 313
    __nesc_atomic_end(__nesc_atomic); }
  SchedulerP$TDMAScheduleTimer$startOneShotAt(timestamp, CHILD_CONNECTION_PERIOD - GUARD_TIME);
}

# 17 "TDMASchedule.nc"
inline static void TreeP$TDMASchedule$setBeaconTimeStamp(uint32_t timestamp){
#line 17
  SchedulerP$TDMASchedule$setBeaconTimeStamp(timestamp);
#line 17
}
#line 17
# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void TreeP$ConnReqListenTimer$startOneShot(uint32_t dt){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(3U, dt);
#line 62
}
#line 62
# 68 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
inline static void MessageBufferLayerP$Tasklet$resume(void ){
#line 68
  TaskletC$Tasklet$resume();
#line 68
}
#line 68
#line 48
inline static void RF230LayerP$Tasklet$schedule(void ){
#line 48
  TaskletC$Tasklet$schedule();
#line 48
}
#line 48
# 346 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
static inline error_t RF230LayerP$RadioState$turnOff(void )
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
inline static error_t TrafficMonitorLayerP$SubState$turnOff(void ){
#line 33
  unsigned char __nesc_result;
#line 33

#line 33
  __nesc_result = RF230LayerP$RadioState$turnOff();
#line 33

#line 33
  return __nesc_result;
#line 33
}
#line 33
# 205 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
static inline error_t TrafficMonitorLayerP$RadioState$turnOff(void )
{
  TrafficMonitorLayerP$radioCmd = TrafficMonitorLayerP$RADIO_CMD_TURNOFF;
  return TrafficMonitorLayerP$SubState$turnOff();
}

# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioState.nc"
inline static error_t MessageBufferLayerP$RadioState$turnOff(void ){
#line 33
  unsigned char __nesc_result;
#line 33

#line 33
  __nesc_result = TrafficMonitorLayerP$RadioState$turnOff();
#line 33

#line 33
  return __nesc_result;
#line 33
}
#line 33
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TaskletC.nc"
static __inline void TaskletC$Tasklet$suspend(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 85
    ++TaskletC$state;
#line 85
    __nesc_atomic_end(__nesc_atomic); }
}

# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
inline static void MessageBufferLayerP$Tasklet$suspend(void ){
#line 61
  TaskletC$Tasklet$suspend();
#line 61
}
#line 61
# 82 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static inline error_t MessageBufferLayerP$SplitControl$stop(void )
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
inline static error_t TreeP$RadioControl$stop(void ){
#line 109
  unsigned char __nesc_result;
#line 109

#line 109
  __nesc_result = MessageBufferLayerP$SplitControl$stop();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 260 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline void RF230ActiveMessageP$RadioAlarm$fired(void )
#line 260
{
}

# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
inline static void RandomCollisionLayerP$RadioSend$sendDone(error_t error){
#line 45
  TrafficMonitorLayerP$SubSend$sendDone(error);
#line 45
}
#line 45
# 239 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline uint16_t RF230ActiveMessageP$RandomCollisionConfig$getCongestionBackoff(message_t *msg)
{
  return (uint16_t )(2240 * (7372800UL / 8 / 32 * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 1000000.0));
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RandomCollisionConfig.nc"
inline static uint16_t RandomCollisionLayerP$Config$getCongestionBackoff(message_t *msg){
#line 35
  unsigned short __nesc_result;
#line 35

#line 35
  __nesc_result = RF230ActiveMessageP$RandomCollisionConfig$getCongestionBackoff(msg);
#line 35

#line 35
  return __nesc_result;
#line 35
}
#line 35
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SoftwareAckConfig.nc"
inline static void SoftwareAckLayerP$SoftwareAckConfig$setAckReceived(message_t *msg, bool acked){
#line 43
  RF230ActiveMessageP$SoftwareAckConfig$setAckReceived(msg, acked);
#line 43
}
#line 43
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
inline static error_t SoftwareAckLayerP$SubSend$send(message_t *msg){
#line 37
  unsigned char __nesc_result;
#line 37

#line 37
  __nesc_result = RF230LayerP$RadioSend$send(msg);
#line 37

#line 37
  return __nesc_result;
#line 37
}
#line 37
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SoftwareAckLayerP.nc"
static inline error_t SoftwareAckLayerP$RadioSend$send(message_t *msg)
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
inline static error_t RandomCollisionLayerP$SubSend$send(message_t *msg){
#line 37
  unsigned char __nesc_result;
#line 37

#line 37
  __nesc_result = SoftwareAckLayerP$RadioSend$send(msg);
#line 37

#line 37
  return __nesc_result;
#line 37
}
#line 37
# 195 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static inline void MessageBufferLayerP$RadioSend$ready(void )
{
  if (MessageBufferLayerP$state == MessageBufferLayerP$STATE_TX_PENDING) {
    MessageBufferLayerP$sendTask$postTask();
    }
}

# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
inline static void TrafficMonitorLayerP$RadioSend$ready(void ){
#line 52
  MessageBufferLayerP$RadioSend$ready();
#line 52
}
#line 52
# 81 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
static inline void TrafficMonitorLayerP$SubSend$ready(void )
{
  TrafficMonitorLayerP$RadioSend$ready();
}

# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
inline static void RandomCollisionLayerP$RadioSend$ready(void ){
#line 52
  TrafficMonitorLayerP$SubSend$ready();
#line 52
}
#line 52
# 70 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline uint16_t HplAtm1281Timer1P$Timer$get(void )
#line 70
{
#line 70
  return * (volatile uint16_t *)0x84;
}

# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$get(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = HplAtm1281Timer1P$Timer$get();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$Alarm$getNow(void )
#line 53
{
  return /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$get();
}

# 98 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static RadioAlarmP$Alarm$size_type RadioAlarmP$Alarm$getNow(void ){
#line 98
  unsigned short __nesc_result;
#line 98

#line 98
  __nesc_result = /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$Alarm$getNow();
#line 98

#line 98
  return __nesc_result;
#line 98
}
#line 98
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
static __inline uint16_t RadioAlarmP$RadioAlarm$getNow(uint8_t id)
{
  return RadioAlarmP$Alarm$getNow();
}

# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
inline static uint16_t RandomCollisionLayerP$RadioAlarm$getNow(void ){
#line 53
  unsigned short __nesc_result;
#line 53

#line 53
  __nesc_result = RadioAlarmP$RadioAlarm$getNow(1U);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RandomCollisionLayerP.nc"
static inline void RandomCollisionLayerP$RadioAlarm$fired(void )
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
static inline void RandomCollisionLayerP$SubSend$sendDone(error_t error)
{
  for (; 0; ) ;

  RandomCollisionLayerP$state = RandomCollisionLayerP$STATE_READY;
  RandomCollisionLayerP$RadioSend$sendDone(error);
}

# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
inline static void SoftwareAckLayerP$RadioSend$sendDone(error_t error){
#line 45
  RandomCollisionLayerP$SubSend$sendDone(error);
#line 45
}
#line 45
# 124 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
static inline void TrafficMonitorLayerP$TrafficMonitorConfig$channelError(void )
{
  if (TrafficMonitorLayerP$errorAverage < 255) {
    ++TrafficMonitorLayerP$errorAverage;
    }
}

# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorConfig.nc"
inline static void RF230ActiveMessageP$TrafficMonitorConfig$channelError(void ){
#line 50
  TrafficMonitorLayerP$TrafficMonitorConfig$channelError();
#line 50
}
#line 50
# 137 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline void RF230ActiveMessageP$SoftwareAckConfig$reportChannelError(void )
{
  RF230ActiveMessageP$TrafficMonitorConfig$channelError();
}

# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SoftwareAckConfig.nc"
inline static void SoftwareAckLayerP$SoftwareAckConfig$reportChannelError(void ){
#line 74
  RF230ActiveMessageP$SoftwareAckConfig$reportChannelError();
#line 74
}
#line 74
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SoftwareAckLayerP.nc"
static inline void SoftwareAckLayerP$RadioAlarm$fired(void )
{
  for (; 0; ) ;

  SoftwareAckLayerP$SoftwareAckConfig$reportChannelError();

  SoftwareAckLayerP$state = SoftwareAckLayerP$STATE_READY;
  SoftwareAckLayerP$RadioSend$sendDone(SUCCESS);
}

# 537 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
static inline void RF230LayerP$RadioCCA$default$done(error_t error)
#line 537
{
}

# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioCCA.nc"
inline static void RF230LayerP$RadioCCA$done(error_t error){
#line 41
  RF230LayerP$RadioCCA$default$done(error);
#line 41
}
#line 41
# 102 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static __inline uint8_t HplRF230P$HplRF230$spiSplitRead(void )
{
  while (!(* (volatile uint8_t *)(0x2D + 0x20) & 0x80)) 
    ;
  return * (volatile uint8_t *)(0X2E + 0x20);
}

# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230.nc"
inline static uint8_t RF230LayerP$HplRF230$spiSplitRead(void ){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = HplRF230P$HplRF230$spiSplitRead();
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 109 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static __inline uint8_t HplRF230P$HplRF230$spiSplitReadWrite(uint8_t data)
{
  uint8_t b;

  while (!(* (volatile uint8_t *)(0x2D + 0x20) & 0x80)) 
    ;
  b = * (volatile uint8_t *)(0X2E + 0x20);
  * (volatile uint8_t *)(0X2E + 0x20) = data;

  return b;
}

# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230.nc"
inline static uint8_t RF230LayerP$HplRF230$spiSplitReadWrite(uint8_t data){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = HplRF230P$HplRF230$spiSplitReadWrite(data);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 94 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static __inline void HplRF230P$HplRF230$spiSplitWrite(uint8_t data)
{



  * (volatile uint8_t *)(0X2E + 0x20) = data;
}

# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230.nc"
inline static void RF230LayerP$HplRF230$spiSplitWrite(uint8_t data){
#line 41
  HplRF230P$HplRF230$spiSplitWrite(data);
#line 41
}
#line 41
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )37U &= ~(1 << 0);
}

# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void RF230LayerP$SELN$clr(void ){
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
static inline void RF230LayerP$RadioAlarm$fired(void )
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
static inline void RadioAlarmP$RadioAlarm$default$fired(uint8_t id)
{
}

# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
inline static void RadioAlarmP$RadioAlarm$fired(uint8_t arg_0x40847a70){
#line 48
  switch (arg_0x40847a70) {
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
      RadioAlarmP$RadioAlarm$default$fired(arg_0x40847a70);
#line 48
      break;
#line 48
    }
#line 48
}
#line 48
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
static inline void RadioAlarmP$Tasklet$run(void )
{
  if (RadioAlarmP$state == RadioAlarmP$STATE_FIRED) 
    {
      RadioAlarmP$state = RadioAlarmP$STATE_READY;
      RadioAlarmP$RadioAlarm$fired(RadioAlarmP$alarm);
    }
}

# 201 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static inline void MessageBufferLayerP$Tasklet$run(void )
{
}

# 171 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
static inline void TrafficMonitorLayerP$Tasklet$run(void )
{
}

# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t RF230LayerP$SpiResource$release(void ){
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
# 82 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
static __inline bool RadioAlarmP$RadioAlarm$isFree(uint8_t id)
{
  return RadioAlarmP$state == RadioAlarmP$STATE_READY;
}

# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
inline static bool RandomCollisionLayerP$RadioAlarm$isFree(void ){
#line 33
  unsigned char __nesc_result;
#line 33

#line 33
  __nesc_result = RadioAlarmP$RadioAlarm$isFree(1U);
#line 33

#line 33
  return __nesc_result;
#line 33
}
#line 33
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RandomCollisionLayerP.nc"
static inline void RandomCollisionLayerP$SubSend$ready(void )
{
  if (RandomCollisionLayerP$state == RandomCollisionLayerP$STATE_READY && RandomCollisionLayerP$RadioAlarm$isFree()) {
    RandomCollisionLayerP$RadioSend$ready();
    }
}

# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
inline static void SoftwareAckLayerP$RadioSend$ready(void ){
#line 52
  RandomCollisionLayerP$SubSend$ready();
#line 52
}
#line 52
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SoftwareAckLayerP.nc"
static inline void SoftwareAckLayerP$SubSend$ready(void )
{
  if (SoftwareAckLayerP$state == SoftwareAckLayerP$STATE_READY) {
    SoftwareAckLayerP$RadioSend$ready();
    }
}

# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
inline static void RF230LayerP$RadioSend$ready(void ){
#line 52
  SoftwareAckLayerP$SubSend$ready();
#line 52
}
#line 52
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t MessageBufferLayerP$stateDoneTask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(MessageBufferLayerP$stateDoneTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 117 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static inline void MessageBufferLayerP$RadioState$done(void )
{
  MessageBufferLayerP$stateDoneTask$postTask();
}

# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioState.nc"
inline static void TrafficMonitorLayerP$RadioState$done(void ){
#line 58
  MessageBufferLayerP$RadioState$done();
#line 58
}
#line 58
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t TrafficMonitorLayerP$startStopTimer$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(TrafficMonitorLayerP$startStopTimer);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 237 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
static inline void TrafficMonitorLayerP$SubState$done(void )
{
  TrafficMonitorLayerP$startStopTimer$postTask();
  TrafficMonitorLayerP$RadioState$done();
}

# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioState.nc"
inline static void RF230LayerP$RadioState$done(void ){
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
static __inline void RF230LayerP$changeChannel(void )
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
static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )37U |= 1 << 7;
}

# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void RF230LayerP$SLP_TR$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$set();
#line 29
}
#line 29
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static inline void HplRF230P$IRQ$disable(void )
{
  HplRF230P$Capture$stop();
}

# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioCapture.nc"
inline static void RF230LayerP$IRQ$disable(void ){
#line 55
  HplRF230P$IRQ$disable();
#line 55
}
#line 55
# 145 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P$Capture$start(void )
#line 145
{
#line 145
  * (volatile uint8_t *)0x6F |= 1 << 5;
}

# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplRF230P$Capture$start(void ){
#line 58
  HplAtm1281Timer1P$Capture$start();
#line 58
}
#line 58
# 139 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P$Capture$reset(void )
#line 139
{
#line 139
  * (volatile uint8_t *)(0x16 + 0x20) = 1 << 5;
}

# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplRF230P$Capture$reset(void ){
#line 55
  HplAtm1281Timer1P$Capture$reset();
#line 55
}
#line 55
# 135 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P$Capture$setEdge(bool up)
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
inline static void HplRF230P$Capture$setEdge(bool up){
#line 79
  HplAtm1281Timer1P$Capture$setEdge(up);
#line 79
}
#line 79
# 68 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static inline error_t HplRF230P$IRQ$captureRisingEdge(void )
{
  HplRF230P$Capture$setEdge(TRUE);
  HplRF230P$Capture$reset();
  HplRF230P$Capture$start();

  return SUCCESS;
}

# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioCapture.nc"
inline static error_t RF230LayerP$IRQ$captureRisingEdge(void ){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = HplRF230P$IRQ$captureRisingEdge();
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$Alarm$start(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$timer_size dt)
{
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$Alarm$startAt(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$get(), dt);
}

# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void RadioAlarmP$Alarm$start(RadioAlarmP$Alarm$size_type dt){
#line 55
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$Alarm$start(dt);
#line 55
}
#line 55
# 87 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
static inline void RadioAlarmP$RadioAlarm$wait(uint8_t id, uint16_t timeout)
{
  for (; 0; ) ;

  RadioAlarmP$alarm = id;
  RadioAlarmP$state = RadioAlarmP$STATE_WAIT;
  RadioAlarmP$Alarm$start(timeout);
}

# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
inline static void RF230LayerP$RadioAlarm$wait(uint16_t timeout){
#line 38
  RadioAlarmP$RadioAlarm$wait(3U, timeout);
#line 38
}
#line 38
#line 33
inline static bool RF230LayerP$RadioAlarm$isFree(void ){
#line 33
  unsigned char __nesc_result;
#line 33

#line 33
  __nesc_result = RadioAlarmP$RadioAlarm$isFree(3U);
#line 33

#line 33
  return __nesc_result;
#line 33
}
#line 33
# 305 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
static __inline void RF230LayerP$changeState(void )
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
inline static error_t MessageBufferLayerP$deliverTask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(MessageBufferLayerP$deliverTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 298 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static inline message_t *MessageBufferLayerP$RadioReceive$receive(message_t *msg)
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
inline static message_t *UniqueLayerP$RadioReceive$receive(message_t *msg){
#line 42
  nx_struct message_t *__nesc_result;
#line 42

#line 42
  __nesc_result = MessageBufferLayerP$RadioReceive$receive(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 152 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodP.nc"
static __inline void NeighborhoodP$NeighborhoodFlag$set(uint8_t bit, uint8_t index)
{
  NeighborhoodP$flags[index] |= 1 << bit;
}

# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodFlag.nc"
inline static void UniqueLayerP$NeighborhoodFlag$set(uint8_t index){
#line 40
  NeighborhoodP$NeighborhoodFlag$set(0U, index);
#line 40
}
#line 40
# 159 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline void RF230ActiveMessageP$UniqueConfig$reportChannelError(void )
{
  RF230ActiveMessageP$TrafficMonitorConfig$channelError();
}

# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/UniqueConfig.nc"
inline static void UniqueLayerP$UniqueConfig$reportChannelError(void ){
#line 47
  RF230ActiveMessageP$UniqueConfig$reportChannelError();
#line 47
}
#line 47
# 147 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodP.nc"
static __inline bool NeighborhoodP$NeighborhoodFlag$get(uint8_t bit, uint8_t index)
{
  return NeighborhoodP$flags[index] & (1 << bit);
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodFlag.nc"
inline static bool UniqueLayerP$NeighborhoodFlag$get(uint8_t index){
#line 35
  unsigned char __nesc_result;
#line 35

#line 35
  __nesc_result = NeighborhoodP$NeighborhoodFlag$get(0U, index);
#line 35

#line 35
  return __nesc_result;
#line 35
}
#line 35
# 246 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_leuint8(const void * source)
#line 246
{
  const uint8_t *base = source;

#line 248
  return base[0];
}

# 154 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline uint8_t IEEE154PacketP$IEEE154Packet$getDSN(message_t *msg)
{
  return __nesc_ntoh_leuint8(IEEE154PacketP$getHeader(msg)->dsn.data);
}

# 124 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static uint8_t RF230ActiveMessageP$IEEE154Packet$getDSN(message_t *msg){
#line 124
  unsigned char __nesc_result;
#line 124

#line 124
  __nesc_result = IEEE154PacketP$IEEE154Packet$getDSN(msg);
#line 124

#line 124
  return __nesc_result;
#line 124
}
#line 124
# 144 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline uint8_t RF230ActiveMessageP$UniqueConfig$getSequenceNumber(message_t *msg)
{
  return RF230ActiveMessageP$IEEE154Packet$getDSN(msg);
}

# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/UniqueConfig.nc"
inline static uint8_t UniqueLayerP$UniqueConfig$getSequenceNumber(message_t *msg){
#line 31
  unsigned char __nesc_result;
#line 31

#line 31
  __nesc_result = RF230ActiveMessageP$UniqueConfig$getSequenceNumber(msg);
#line 31

#line 31
  return __nesc_result;
#line 31
}
#line 31
# 184 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline uint16_t IEEE154PacketP$IEEE154Packet$getSrcAddr(message_t *msg)
{
  return __nesc_ntoh_leuint16(IEEE154PacketP$getHeader(msg)->src.data);
}

# 155 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static uint16_t RF230ActiveMessageP$IEEE154Packet$getSrcAddr(message_t *msg){
#line 155
  unsigned short __nesc_result;
#line 155

#line 155
  __nesc_result = IEEE154PacketP$IEEE154Packet$getSrcAddr(msg);
#line 155

#line 155
  return __nesc_result;
#line 155
}
#line 155
# 154 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline am_addr_t RF230ActiveMessageP$UniqueConfig$getSender(message_t *msg)
{
  return RF230ActiveMessageP$IEEE154Packet$getSrcAddr(msg);
}

# 36 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/UniqueConfig.nc"
inline static am_addr_t UniqueLayerP$UniqueConfig$getSender(message_t *msg){
#line 36
  unsigned short __nesc_result;
#line 36

#line 36
  __nesc_result = RF230ActiveMessageP$UniqueConfig$getSender(msg);
#line 36

#line 36
  return __nesc_result;
#line 36
}
#line 36
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Neighborhood.nc"
inline static uint8_t UniqueLayerP$Neighborhood$insertNode(am_addr_t id){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = NeighborhoodP$Neighborhood$insertNode(id);
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/UniqueLayerP.nc"
static inline message_t *UniqueLayerP$SubReceive$receive(message_t *msg)
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
inline static message_t *TrafficMonitorLayerP$RadioReceive$receive(message_t *msg){
#line 42
  nx_struct message_t *__nesc_result;
#line 42

#line 42
  __nesc_result = UniqueLayerP$SubReceive$receive(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodFlag.nc"
inline static void TrafficMonitorLayerP$NeighborhoodFlag$set(uint8_t index){
#line 40
  NeighborhoodP$NeighborhoodFlag$set(1U, index);
#line 40
}
#line 40
#line 35
inline static bool TrafficMonitorLayerP$NeighborhoodFlag$get(uint8_t index){
#line 35
  unsigned char __nesc_result;
#line 35

#line 35
  __nesc_result = NeighborhoodP$NeighborhoodFlag$get(1U, index);
#line 35

#line 35
  return __nesc_result;
#line 35
}
#line 35
# 208 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline am_addr_t RF230ActiveMessageP$TrafficMonitorConfig$getSender(message_t *msg)
{
  return RF230ActiveMessageP$IEEE154Packet$getSrcAddr(msg);
}

# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorConfig.nc"
inline static am_addr_t TrafficMonitorLayerP$TrafficMonitorConfig$getSender(message_t *msg){
#line 43
  unsigned short __nesc_result;
#line 43

#line 43
  __nesc_result = RF230ActiveMessageP$TrafficMonitorConfig$getSender(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Neighborhood.nc"
inline static uint8_t TrafficMonitorLayerP$Neighborhood$insertNode(am_addr_t id){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = NeighborhoodP$Neighborhood$insertNode(id);
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorConfig.nc"
inline static uint16_t TrafficMonitorLayerP$TrafficMonitorConfig$getChannelTime(message_t *msg){
#line 37
  unsigned short __nesc_result;
#line 37

#line 37
  __nesc_result = RF230ActiveMessageP$TrafficMonitorConfig$getChannelTime(msg);
#line 37

#line 37
  return __nesc_result;
#line 37
}
#line 37
# 105 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
static inline message_t *TrafficMonitorLayerP$SubReceive$receive(message_t *msg)
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
inline static message_t *RandomCollisionLayerP$RadioReceive$receive(message_t *msg){
#line 42
  nx_struct message_t *__nesc_result;
#line 42

#line 42
  __nesc_result = TrafficMonitorLayerP$SubReceive$receive(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 196 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static bool RF230ActiveMessageP$IEEE154Packet$requiresAckReply(message_t *msg){
#line 196
  unsigned char __nesc_result;
#line 196

#line 196
  __nesc_result = IEEE154PacketP$IEEE154Packet$requiresAckReply(msg);
#line 196

#line 196
  return __nesc_result;
#line 196
}
#line 196
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
inline static uint16_t RF230ActiveMessageP$RadioAlarm$getNow(void ){
#line 53
  unsigned short __nesc_result;
#line 53

#line 53
  __nesc_result = RadioAlarmP$RadioAlarm$getNow(0U);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 244 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline uint16_t RF230ActiveMessageP$RandomCollisionConfig$getTransmitBarrier(message_t *msg)
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
inline static uint16_t RandomCollisionLayerP$Config$getTransmitBarrier(message_t *msg){
#line 46
  unsigned short __nesc_result;
#line 46

#line 46
  __nesc_result = RF230ActiveMessageP$RandomCollisionConfig$getTransmitBarrier(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 157 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RandomCollisionLayerP.nc"
static inline message_t *RandomCollisionLayerP$SubReceive$receive(message_t *msg)
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
inline static message_t *SoftwareAckLayerP$RadioReceive$receive(message_t *msg){
#line 42
  nx_struct message_t *__nesc_result;
#line 42

#line 42
  __nesc_result = RandomCollisionLayerP$SubReceive$receive(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 111 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline void IEEE154PacketP$IEEE154Packet$createAckReply(message_t *data, message_t *ack)
{
  ieee154_header_t *header = IEEE154PacketP$getHeader(ack);

  __nesc_hton_leuint8(header->length.data, IEEE154PacketP$IEEE154_ACK_FRAME_LENGTH);
  __nesc_hton_leuint16(header->fcf.data, IEEE154PacketP$IEEE154_ACK_FRAME_VALUE);
  __nesc_hton_leuint8(header->dsn.data, __nesc_ntoh_leuint8(IEEE154PacketP$getHeader(data)->dsn.data));
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static void RF230ActiveMessageP$IEEE154Packet$createAckReply(message_t *data, message_t *ack){
#line 92
  IEEE154PacketP$IEEE154Packet$createAckReply(data, ack);
#line 92
}
#line 92
# 119 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline void RF230ActiveMessageP$SoftwareAckConfig$createAckPacket(message_t *data, message_t *ack)
{
  RF230ActiveMessageP$IEEE154Packet$createAckReply(data, ack);
}

# 68 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SoftwareAckConfig.nc"
inline static void SoftwareAckLayerP$SoftwareAckConfig$createAckPacket(message_t *data, message_t *ack){
#line 68
  RF230ActiveMessageP$SoftwareAckConfig$createAckPacket(data, ack);
#line 68
}
#line 68
# 114 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline bool RF230ActiveMessageP$SoftwareAckConfig$requiresAckReply(message_t *msg)
{
  return RF230ActiveMessageP$IEEE154Packet$requiresAckReply(msg);
}

# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SoftwareAckConfig.nc"
inline static bool SoftwareAckLayerP$SoftwareAckConfig$requiresAckReply(message_t *msg){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = RF230ActiveMessageP$SoftwareAckConfig$requiresAckReply(msg);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 152 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P$CompareA$stop(void )
#line 152
{
#line 152
  * (volatile uint8_t *)0x6F &= ~(1 << 1);
}

# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$stop(void ){
#line 59
  HplAtm1281Timer1P$CompareA$stop();
#line 59
}
#line 59
# 65 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$Alarm$stop(void )
#line 65
{
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$stop();
}

# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void RadioAlarmP$Alarm$stop(void ){
#line 62
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$Alarm$stop();
#line 62
}
#line 62
# 96 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
static inline void RadioAlarmP$RadioAlarm$cancel(uint8_t id)
{
  for (; 0; ) ;
  for (; 0; ) ;

  RadioAlarmP$Alarm$stop();
  RadioAlarmP$state = RadioAlarmP$STATE_READY;
}

# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
inline static void SoftwareAckLayerP$RadioAlarm$cancel(void ){
#line 43
  RadioAlarmP$RadioAlarm$cancel(2U);
#line 43
}
#line 43
# 98 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline bool IEEE154PacketP$IEEE154Packet$isAckFrame(message_t *msg)
{
  return (__nesc_ntoh_leuint16(IEEE154PacketP$getHeader(msg)->fcf.data) & IEEE154PacketP$IEEE154_ACK_FRAME_MASK) == IEEE154PacketP$IEEE154_ACK_FRAME_VALUE;
}

# 79 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static bool RF230ActiveMessageP$IEEE154Packet$isAckFrame(message_t *msg){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = IEEE154PacketP$IEEE154Packet$isAckFrame(msg);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 104 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline bool RF230ActiveMessageP$SoftwareAckConfig$isAckPacket(message_t *msg)
{
  return RF230ActiveMessageP$IEEE154Packet$isAckFrame(msg);
}

# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SoftwareAckConfig.nc"
inline static bool SoftwareAckLayerP$SoftwareAckConfig$isAckPacket(message_t *msg){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = RF230ActiveMessageP$SoftwareAckConfig$isAckPacket(msg);
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 128 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SoftwareAckLayerP.nc"
static inline message_t *SoftwareAckLayerP$SubReceive$receive(message_t *msg)
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
inline static message_t *RF230LayerP$RadioReceive$receive(message_t *msg){
#line 42
  nx_struct message_t *__nesc_result;
#line 42

#line 42
  __nesc_result = SoftwareAckLayerP$SubReceive$receive(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 135 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static inline void RF230PacketP$PacketLinkQuality$set(message_t *msg, uint8_t value)
{
  RF230PacketP$getMeta(msg)->lqi = value;
}

# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/PacketField.nc"
inline static void RF230LayerP$PacketLinkQuality$set(message_t *msg, RF230LayerP$PacketLinkQuality$value_type value){
#line 46
  RF230PacketP$PacketLinkQuality$set(msg, value);
#line 46
}
#line 46
# 251 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/util/crc16.h" 3
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
static __inline uint16_t HplRF230P$HplRF230$crcByte(uint16_t crc, uint8_t data)
{
  return _crc_ccitt_update(crc, data);
}

# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230.nc"
inline static uint16_t RF230LayerP$HplRF230$crcByte(uint16_t crc, uint8_t data){
#line 33
  unsigned short __nesc_result;
#line 33

#line 33
  __nesc_result = HplRF230P$HplRF230$crcByte(crc, data);
#line 33

#line 33
  return __nesc_result;
#line 33
}
#line 33
# 257 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static inline bool MessageBufferLayerP$RadioReceive$header(message_t *msg)
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
inline static bool UniqueLayerP$RadioReceive$header(message_t *msg){
#line 35
  unsigned char __nesc_result;
#line 35

#line 35
  __nesc_result = MessageBufferLayerP$RadioReceive$header(msg);
#line 35

#line 35
  return __nesc_result;
#line 35
}
#line 35
# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/UniqueLayerP.nc"
static inline bool UniqueLayerP$SubReceive$header(message_t *msg)
{

  return UniqueLayerP$RadioReceive$header(msg);
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
inline static bool TrafficMonitorLayerP$RadioReceive$header(message_t *msg){
#line 35
  unsigned char __nesc_result;
#line 35

#line 35
  __nesc_result = UniqueLayerP$SubReceive$header(msg);
#line 35

#line 35
  return __nesc_result;
#line 35
}
#line 35
# 100 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
static inline bool TrafficMonitorLayerP$SubReceive$header(message_t *msg)
{
  return TrafficMonitorLayerP$RadioReceive$header(msg);
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
inline static bool RandomCollisionLayerP$RadioReceive$header(message_t *msg){
#line 35
  unsigned char __nesc_result;
#line 35

#line 35
  __nesc_result = TrafficMonitorLayerP$SubReceive$header(msg);
#line 35

#line 35
  return __nesc_result;
#line 35
}
#line 35
# 152 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RandomCollisionLayerP.nc"
static inline bool RandomCollisionLayerP$SubReceive$header(message_t *msg)
{
  return RandomCollisionLayerP$RadioReceive$header(msg);
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
inline static bool SoftwareAckLayerP$RadioReceive$header(message_t *msg){
#line 35
  unsigned char __nesc_result;
#line 35

#line 35
  __nesc_result = RandomCollisionLayerP$SubReceive$header(msg);
#line 35

#line 35
  return __nesc_result;
#line 35
}
#line 35
# 120 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline bool IEEE154PacketP$IEEE154Packet$verifyAckReply(message_t *data, message_t *ack)
{
  ieee154_header_t *header = IEEE154PacketP$getHeader(ack);

  return __nesc_ntoh_leuint8(header->dsn.data) == __nesc_ntoh_leuint8(IEEE154PacketP$getHeader(data)->dsn.data)
   && (__nesc_ntoh_leuint16(header->fcf.data) & IEEE154PacketP$IEEE154_ACK_FRAME_MASK) == IEEE154PacketP$IEEE154_ACK_FRAME_VALUE;
}

# 98 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static bool RF230ActiveMessageP$IEEE154Packet$verifyAckReply(message_t *data, message_t *ack){
#line 98
  unsigned char __nesc_result;
#line 98

#line 98
  __nesc_result = IEEE154PacketP$IEEE154Packet$verifyAckReply(data, ack);
#line 98

#line 98
  return __nesc_result;
#line 98
}
#line 98
# 109 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline bool RF230ActiveMessageP$SoftwareAckConfig$verifyAckPacket(message_t *data, message_t *ack)
{
  return RF230ActiveMessageP$IEEE154Packet$verifyAckReply(data, ack);
}

# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SoftwareAckConfig.nc"
inline static bool SoftwareAckLayerP$SoftwareAckConfig$verifyAckPacket(message_t *data, message_t *ack){
#line 57
  unsigned char __nesc_result;
#line 57

#line 57
  __nesc_result = RF230ActiveMessageP$SoftwareAckConfig$verifyAckPacket(data, ack);
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
# 120 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SoftwareAckLayerP.nc"
static inline bool SoftwareAckLayerP$SubReceive$header(message_t *msg)
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
inline static bool RF230LayerP$RadioReceive$header(message_t *msg){
#line 35
  unsigned char __nesc_result;
#line 35

#line 35
  __nesc_result = SoftwareAckLayerP$SubReceive$header(msg);
#line 35

#line 35
  return __nesc_result;
#line 35
}
#line 35
# 75 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline uint8_t RF230ActiveMessageP$RF230Config$getHeaderLength(void )
{

  return 7;
}

# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230Config.nc"
inline static uint8_t RF230LayerP$RF230Config$getHeaderLength(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = RF230ActiveMessageP$RF230Config$getHeaderLength();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline ieee154_header_t *IEEE154PacketP$IEEE154Packet$getHeader(message_t *msg)
{
  return IEEE154PacketP$getHeader(msg);
}

# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static ieee154_header_t *RF230ActiveMessageP$IEEE154Packet$getHeader(message_t *msg){
#line 39
  nx_struct ieee154_header_t *__nesc_result;
#line 39

#line 39
  __nesc_result = IEEE154PacketP$IEEE154Packet$getHeader(msg);
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 65 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline uint8_t *RF230ActiveMessageP$RF230Config$getPayload(message_t *msg)
{
  return (uint8_t *)RF230ActiveMessageP$IEEE154Packet$getHeader(msg) + 1;
}

# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230Config.nc"
inline static uint8_t *RF230LayerP$RF230Config$getPayload(message_t *msg){
#line 46
  unsigned char *__nesc_result;
#line 46

#line 46
  __nesc_result = RF230ActiveMessageP$RF230Config$getPayload(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static void RF230ActiveMessageP$IEEE154Packet$setLength(message_t *msg, uint8_t length){
#line 49
  IEEE154PacketP$IEEE154Packet$setLength(msg, length);
#line 49
}
#line 49
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline void RF230ActiveMessageP$RF230Config$setLength(message_t *msg, uint8_t len)
{
  RF230ActiveMessageP$IEEE154Packet$setLength(msg, len);
}

# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230Config.nc"
inline static void RF230LayerP$RF230Config$setLength(message_t *msg, uint8_t len){
#line 39
  RF230ActiveMessageP$RF230Config$setLength(msg, len);
#line 39
}
#line 39
# 81 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline uint8_t RF230ActiveMessageP$RF230Config$getMaxLength(void )
{

  return sizeof(rf230packet_header_t ) - 1 + 28 + sizeof(ieee154_footer_t );
}

# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230Config.nc"
inline static uint8_t RF230LayerP$RF230Config$getMaxLength(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = RF230ActiveMessageP$RF230Config$getMaxLength();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 121 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static __inline uint8_t HplRF230P$HplRF230$spiWrite(uint8_t data)
{



  * (volatile uint8_t *)(0X2E + 0x20) = data;
  while (!(* (volatile uint8_t *)(0x2D + 0x20) & 0x80)) 
    ;

  return * (volatile uint8_t *)(0X2E + 0x20);
}

# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230.nc"
inline static uint8_t RF230LayerP$HplRF230$spiWrite(uint8_t data){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = HplRF230P$HplRF230$spiWrite(data);
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 541 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
static __inline void RF230LayerP$downloadMessage(void )
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
static inline uint16_t RF230ActiveMessageP$SoftwareAckConfig$getAckTimeout(void )
{
  return (uint16_t )(800 * (7372800UL / 8 / 32 * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 1000000.0));
}

# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SoftwareAckConfig.nc"
inline static uint16_t SoftwareAckLayerP$SoftwareAckConfig$getAckTimeout(void ){
#line 32
  unsigned short __nesc_result;
#line 32

#line 32
  __nesc_result = RF230ActiveMessageP$SoftwareAckConfig$getAckTimeout();
#line 32

#line 32
  return __nesc_result;
#line 32
}
#line 32
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
inline static void SoftwareAckLayerP$RadioAlarm$wait(uint16_t timeout){
#line 38
  RadioAlarmP$RadioAlarm$wait(2U, timeout);
#line 38
}
#line 38
#line 33
inline static bool SoftwareAckLayerP$RadioAlarm$isFree(void ){
#line 33
  unsigned char __nesc_result;
#line 33

#line 33
  __nesc_result = RadioAlarmP$RadioAlarm$isFree(2U);
#line 33

#line 33
  return __nesc_result;
#line 33
}
#line 33
# 174 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline uint16_t IEEE154PacketP$IEEE154Packet$getDestAddr(message_t *msg)
{
  return __nesc_ntoh_leuint16(IEEE154PacketP$getHeader(msg)->dest.data);
}

#line 128
static __inline bool IEEE154PacketP$IEEE154Packet$getAckRequired(message_t *msg)
{
  return __nesc_ntoh_leuint16(IEEE154PacketP$getHeader(msg)->fcf.data) & (1 << IEEE154_FCF_ACK_REQ);
}

#line 218
static inline bool IEEE154PacketP$IEEE154Packet$requiresAckWait(message_t *msg)
{
  return IEEE154PacketP$IEEE154Packet$getAckRequired(msg)
   && IEEE154PacketP$IEEE154Packet$isDataFrame(msg)
   && IEEE154PacketP$IEEE154Packet$getDestAddr(msg) != 0xFFFF;
}

# 190 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static bool RF230ActiveMessageP$IEEE154Packet$requiresAckWait(message_t *msg){
#line 190
  unsigned char __nesc_result;
#line 190

#line 190
  __nesc_result = IEEE154PacketP$IEEE154Packet$requiresAckWait(msg);
#line 190

#line 190
  return __nesc_result;
#line 190
}
#line 190
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline bool RF230ActiveMessageP$SoftwareAckConfig$requiresAckWait(message_t *msg)
{
  return RF230ActiveMessageP$IEEE154Packet$requiresAckWait(msg);
}

# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SoftwareAckConfig.nc"
inline static bool SoftwareAckLayerP$SoftwareAckConfig$requiresAckWait(message_t *msg){
#line 38
  unsigned char __nesc_result;
#line 38

#line 38
  __nesc_result = RF230ActiveMessageP$SoftwareAckConfig$requiresAckWait(msg);
#line 38

#line 38
  return __nesc_result;
#line 38
}
#line 38
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SoftwareAckLayerP.nc"
static inline void SoftwareAckLayerP$SubSend$sendDone(error_t error)
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
inline static void RF230LayerP$RadioSend$sendDone(error_t error){
#line 45
  SoftwareAckLayerP$SubSend$sendDone(error);
#line 45
}
#line 45
# 152 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static inline void RF230PacketP$PacketTimeStampRadio$clear(message_t *msg)
{
  RF230PacketP$getMeta(msg)->flags &= ~RF230PACKET_TIMESTAMP;
}

# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
inline static void RF230LayerP$PacketTimeStamp$clear(message_t * msg){
#line 59
  RF230PacketP$PacketTimeStampRadio$clear(msg);
#line 59
}
#line 59








inline static void RF230LayerP$PacketTimeStamp$set(message_t * msg, RF230LayerP$PacketTimeStamp$size_type value){
#line 67
  RF230PacketP$PacketTimeStampRadio$set(msg, value);
#line 67
}
#line 67
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$size_type /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$get(void ){
#line 53
  unsigned long __nesc_result;
#line 53

#line 53
  __nesc_result = /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$Counter$get();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline uint32_t /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC$0$LocalTime$get(void )
{
  return /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$get();
}

# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/LocalTime.nc"
inline static uint32_t RF230LayerP$LocalTime$get(void ){
#line 50
  unsigned long __nesc_result;
#line 50

#line 50
  __nesc_result = /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC$0$LocalTime$get();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 227 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static inline void RF230PacketP$PacketRSSI$clear(message_t *msg)
{
  RF230PacketP$getMeta(msg)->flags &= ~RF230PACKET_RSSI;
}

# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/PacketField.nc"
inline static void RF230LayerP$PacketRSSI$clear(message_t *msg){
#line 40
  RF230PacketP$PacketRSSI$clear(msg);
#line 40
}
#line 40
# 232 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static inline void RF230PacketP$PacketRSSI$set(message_t *msg, uint8_t value)
{
  RF230PacketP$getMeta(msg)->flags &= ~RF230PACKET_TXPOWER;
  RF230PacketP$getMeta(msg)->flags |= RF230PACKET_RSSI;
  RF230PacketP$getMeta(msg)->power = value;
}

# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/PacketField.nc"
inline static void RF230LayerP$PacketRSSI$set(message_t *msg, RF230LayerP$PacketRSSI$value_type value){
#line 46
  RF230PacketP$PacketRSSI$set(msg, value);
#line 46
}
#line 46
# 635 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
static inline void RF230LayerP$serviceRadio(void )
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











static inline void RF230LayerP$Tasklet$run(void )
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
inline static void TaskletC$Tasklet$run(void ){
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
static inline uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$isOwner(uint8_t id)
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
inline static bool Atm128SpiP$ResourceArbiter$isOwner(uint8_t arg_0x40a63e70){
#line 118
  unsigned char __nesc_result;
#line 118

#line 118
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$isOwner(arg_0x40a63e70);
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
inline static bool RF230LayerP$SpiResource$isOwner(void ){
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
# 170 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$configure(uint8_t id)
#line 170
{
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$configure(uint8_t arg_0x40ac09b8){
#line 49
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$configure(arg_0x40ac09b8);
#line 49
}
#line 49
# 168 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$immediateRequested(uint8_t id)
#line 168
{
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$immediateRequested(uint8_t arg_0x40ac1d38){
#line 51
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$immediateRequested(arg_0x40ac1d38);
#line 51
}
#line 51
# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$immediateRequest(uint8_t id)
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
inline static error_t Atm128SpiP$ResourceArbiter$immediateRequest(uint8_t arg_0x40a63e70){
#line 87
  unsigned char __nesc_result;
#line 87

#line 87
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$immediateRequest(arg_0x40a63e70);
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
inline static error_t RF230LayerP$SpiResource$immediateRequest(void ){
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
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuPowerState.nc"
inline static void HplAtm128SpiP$Mcu$update(void ){
#line 44
  McuSleepC$McuPowerState$update();
#line 44
}
#line 44
# 156 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP$SPI$setMasterBit(bool isMaster)
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
static __inline void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP$9$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )36U |= 1 << 1;
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
  * (volatile uint8_t * )36U &= ~(1 << 3);
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
  * (volatile uint8_t * )36U |= 1 << 2;
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
      * (volatile uint8_t *)(0x2D + 0x20) |= 1 << 0;
    }
  else {
      * (volatile uint8_t *)(0x2D + 0x20) &= ~(1 << 0);
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
      * (volatile uint8_t *)(0x2C + 0x20) |= 1 << 3;
    }
  else {
      * (volatile uint8_t *)(0x2C + 0x20) &= ~(1 << 3);
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
      * (volatile uint8_t *)(0x2C + 0x20) |= 1 << 2;
    }
  else {
      * (volatile uint8_t *)(0x2C + 0x20) &= ~(1 << 2);
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
  * (volatile uint8_t *)(0x2C + 0x20) = (* (volatile uint8_t *)(0x2C + 0x20) & ~(1 | 0)) | v;
}

# 114 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP$Spi$setClock(uint8_t speed){
#line 114
  HplAtm128SpiP$SPI$setClock(speed);
#line 114
}
#line 114
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
# 166 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$requested(uint8_t id)
#line 166
{
}

# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$requested(uint8_t arg_0x40ac1d38){
#line 43
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$requested(arg_0x40ac1d38);
#line 43
}
#line 43
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$request(uint8_t id)
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
inline static error_t Atm128SpiP$ResourceArbiter$request(uint8_t arg_0x40a63e70){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$request(arg_0x40a63e70);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$timer_size /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$get(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = HplAtm1281Timer1P$Timer$get();
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
inline static /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$CounterFrom$size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$CounterFrom$get(void ){
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
# 125 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline uint8_t HplAtm1281Timer1P$TimerCtrl$getInterruptFlag(void )
#line 125
{
  return * (volatile uint8_t *)(0x16 + 0x20);
}

#line 156
static inline bool HplAtm1281Timer1P$Timer$test(void )
#line 156
{
  return ((Atm128_TIFR_t )HplAtm1281Timer1P$TimerCtrl$getInterruptFlag()).bits.tov;
}

# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static bool /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$test(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = HplAtm1281Timer1P$Timer$test();
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
inline static bool /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$CounterFrom$isOverflowPending(void ){
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
# 194 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P$CompareA$set(uint16_t t)
#line 194
{
#line 194
  * (volatile uint16_t *)0x88 = t;
}

# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$set(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$size_type t){
#line 45
  HplAtm1281Timer1P$CompareA$set(t);
#line 45
}
#line 45
# 140 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P$CompareA$reset(void )
#line 140
{
#line 140
  * (volatile uint8_t *)(0x16 + 0x20) = 1 << 1;
}

# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$reset(void ){
#line 53
  HplAtm1281Timer1P$CompareA$reset();
#line 53
}
#line 53
# 146 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P$CompareA$start(void )
#line 146
{
#line 146
  * (volatile uint8_t *)0x6F |= 1 << 1;
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$start(void ){
#line 56
  HplAtm1281Timer1P$CompareA$start();
#line 56
}
#line 56
# 103 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static bool RF230ActiveMessageP$IEEE154Packet$getAckRequired(message_t *msg){
#line 103
  unsigned char __nesc_result;
#line 103

#line 103
  __nesc_result = IEEE154PacketP$IEEE154Packet$getAckRequired(msg);
#line 103

#line 103
  return __nesc_result;
#line 103
}
#line 103
# 170 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static inline void MessageBufferLayerP$RadioSend$sendDone(error_t error)
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
inline static void TrafficMonitorLayerP$RadioSend$sendDone(error_t error){
#line 45
  MessageBufferLayerP$RadioSend$sendDone(error);
#line 45
}
#line 45
# 70 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static __inline rf230packet_metadata_t *RF230ActiveMessageP$getMeta(message_t *msg)
{
  return (rf230packet_metadata_t *)msg->metadata;
}

# 193 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static inline bool RF230PacketP$PacketTransmitPower$isSet(message_t *msg)
{
  return RF230PacketP$getMeta(msg)->flags & RF230PACKET_TXPOWER;
}

# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/PacketField.nc"
inline static bool RF230LayerP$PacketTransmitPower$isSet(message_t *msg){
#line 29
  unsigned char __nesc_result;
#line 29

#line 29
  __nesc_result = RF230PacketP$PacketTransmitPower$isSet(msg);
#line 29

#line 29
  return __nesc_result;
#line 29
}
#line 29
# 198 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static inline uint8_t RF230PacketP$PacketTransmitPower$get(message_t *msg)
{
  return RF230PacketP$getMeta(msg)->power;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/PacketField.nc"
inline static RF230LayerP$PacketTransmitPower$value_type RF230LayerP$PacketTransmitPower$get(message_t *msg){
#line 35
  unsigned char __nesc_result;
#line 35

#line 35
  __nesc_result = RF230PacketP$PacketTransmitPower$get(msg);
#line 35

#line 35
  return __nesc_result;
#line 35
}
#line 35
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline bool RF230ActiveMessageP$RF230Config$requiresRssiCca(message_t *msg)
{
  return RF230ActiveMessageP$IEEE154Packet$isDataFrame(msg);
}

# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230Config.nc"
inline static bool RF230LayerP$RF230Config$requiresRssiCca(message_t *msg){
#line 72
  unsigned char __nesc_result;
#line 72

#line 72
  __nesc_result = RF230ActiveMessageP$RF230Config$requiresRssiCca(msg);
#line 72

#line 72
  return __nesc_result;
#line 72
}
#line 72
# 241 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static inline bool RF230PacketP$PacketTimeSyncOffset$isSet(message_t *msg)
{
  return RF230PacketP$getMeta(msg)->flags & RF230PACKET_TIMESYNC;
}

# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/PacketField.nc"
inline static bool RF230LayerP$PacketTimeSyncOffset$isSet(message_t *msg){
#line 29
  unsigned char __nesc_result;
#line 29

#line 29
  __nesc_result = RF230PacketP$PacketTimeSyncOffset$isSet(msg);
#line 29

#line 29
  return __nesc_result;
#line 29
}
#line 29
# 68 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline uint8_t IEEE154PacketP$IEEE154Packet$getLength(message_t *msg)
{
  return __nesc_ntoh_leuint8(IEEE154PacketP$getHeader(msg)->length.data);
}

# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static uint8_t RF230PacketP$IEEE154Packet$getLength(message_t *msg){
#line 44
  unsigned char __nesc_result;
#line 44

#line 44
  __nesc_result = IEEE154PacketP$IEEE154Packet$getLength(msg);
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 246 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static inline uint8_t RF230PacketP$PacketTimeSyncOffset$get(message_t *msg)
{
  return RF230PacketP$IEEE154Packet$getLength(msg) - RF230PacketP$PACKET_LENGTH_INCREASE - sizeof(timesync_absolute_t );
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/PacketField.nc"
inline static RF230LayerP$PacketTimeSyncOffset$value_type RF230LayerP$PacketTimeSyncOffset$get(message_t *msg){
#line 35
  unsigned char __nesc_result;
#line 35

#line 35
  __nesc_result = RF230PacketP$PacketTimeSyncOffset$get(msg);
#line 35

#line 35
  return __nesc_result;
#line 35
}
#line 35
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
inline static uint16_t RF230LayerP$RadioAlarm$getNow(void ){
#line 53
  unsigned short __nesc_result;
#line 53

#line 53
  __nesc_result = RadioAlarmP$RadioAlarm$getNow(3U);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static uint8_t RF230ActiveMessageP$IEEE154Packet$getLength(message_t *msg){
#line 44
  unsigned char __nesc_result;
#line 44

#line 44
  __nesc_result = IEEE154PacketP$IEEE154Packet$getLength(msg);
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline uint8_t RF230ActiveMessageP$RF230Config$getLength(message_t *msg)
{
  return RF230ActiveMessageP$IEEE154Packet$getLength(msg);
}

# 34 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230Config.nc"
inline static uint8_t RF230LayerP$RF230Config$getLength(message_t *msg){
#line 34
  unsigned char __nesc_result;
#line 34

#line 34
  __nesc_result = RF230ActiveMessageP$RF230Config$getLength(msg);
#line 34

#line 34
  return __nesc_result;
#line 34
}
#line 34
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

#line 326
static __inline  int32_t __nesc_hton_int32(void * target, int32_t value)
#line 326
{
#line 326
  __nesc_hton_uint32(target, value);
#line 326
  return value;
}

#line 294
static __inline  uint32_t __nesc_ntoh_uint32(const void * source)
#line 294
{
  const uint8_t *base = source;

#line 296
  return ((((uint32_t )base[0] << 24) | (
  (uint32_t )base[1] << 16)) | (
  (uint32_t )base[2] << 8)) | base[3];
}

#line 326
static __inline  int32_t __nesc_ntoh_int32(const void * source)
#line 326
{
#line 326
  return __nesc_ntoh_uint32(source);
}

# 115 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/UniqueLayerP.nc"
static inline void UniqueLayerP$Neighborhood$evicted(uint8_t index)
#line 115
{
}

# 195 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
static inline void TrafficMonitorLayerP$Neighborhood$evicted(uint8_t index)
#line 195
{
}

# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Neighborhood.nc"
inline static void NeighborhoodP$Neighborhood$evicted(uint8_t index){
#line 69
  TrafficMonitorLayerP$Neighborhood$evicted(index);
#line 69
  UniqueLayerP$Neighborhood$evicted(index);
#line 69
}
#line 69
# 172 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$unconfigure(uint8_t id)
#line 172
{
}

# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$unconfigure(uint8_t arg_0x40ac09b8){
#line 55
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$unconfigure(arg_0x40ac09b8);
#line 55
}
#line 55
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
inline static error_t Atm128SpiP$ResourceArbiter$release(uint8_t arg_0x40a63e70){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$release(arg_0x40a63e70);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
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

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t RandomCollisionLayerP$calcNextRandom$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(RandomCollisionLayerP$calcNextRandom);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 229 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline uint16_t RF230ActiveMessageP$RandomCollisionConfig$getMinimumBackoff(void )
{
  return (uint16_t )(320 * (7372800UL / 8 / 32 * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 1000000.0));
}

# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RandomCollisionConfig.nc"
inline static uint16_t RandomCollisionLayerP$Config$getMinimumBackoff(void ){
#line 40
  unsigned short __nesc_result;
#line 40

#line 40
  __nesc_result = RF230ActiveMessageP$RandomCollisionConfig$getMinimumBackoff();
#line 40

#line 40
  return __nesc_result;
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
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(am_id_t arg_0x40b719f8, am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = ActiveMessageLayerC$AMSend$send(arg_0x40b719f8, addr, msg, len);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static __inline uint8_t RF230PacketP$Packet$payloadLength(message_t *msg)
{
  return RF230PacketP$IEEE154Packet$getLength(msg) - RF230PacketP$PACKET_LENGTH_INCREASE;
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
inline static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(message_t * msg){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = RF230PacketP$Packet$payloadLength(msg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 249 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline am_addr_t IEEE154PacketP$AMPacket$destination(message_t *msg)
{
  return IEEE154PacketP$IEEE154Packet$getDestAddr(msg);
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(message_t * amsg){
#line 67
  unsigned short __nesc_result;
#line 67

#line 67
  __nesc_result = IEEE154PacketP$AMPacket$destination(amsg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 208 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline am_id_t IEEE154PacketP$IEEE154Packet$getType(message_t *msg)
{
  return __nesc_ntoh_leuint8(IEEE154PacketP$getHeader(msg)->type.data);
}

#line 275
static __inline am_id_t IEEE154PacketP$AMPacket$type(message_t *msg)
{
  return IEEE154PacketP$IEEE154Packet$getType(msg);
}

# 136 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(message_t * amsg){
#line 136
  unsigned char __nesc_result;
#line 136

#line 136
  __nesc_result = IEEE154PacketP$AMPacket$type(amsg);
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

# 87 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline uint8_t RF230ActiveMessageP$RF230Config$getDefaultChannel(void )
{
  return 11;
}

# 66 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230Config.nc"
inline static uint8_t RF230LayerP$RF230Config$getDefaultChannel(void ){
#line 66
  unsigned char __nesc_result;
#line 66

#line 66
  __nesc_result = RF230ActiveMessageP$RF230Config$getDefaultChannel();
#line 66

#line 66
  return __nesc_result;
#line 66
}
#line 66
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/micaz/BusyWaitMicroC.nc"
static __inline void BusyWaitMicroC$BusyWait$wait(uint16_t dt)
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
inline static void RF230LayerP$BusyWait$wait(RF230LayerP$BusyWait$size_type dt){
#line 55
  BusyWaitMicroC$BusyWait$wait(dt);
#line 55
}
#line 55
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )34U &= ~(1 << 6);
}

# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void RF230LayerP$RSTN$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$clr();
#line 30
}
#line 30
# 210 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
static inline void RF230LayerP$initRadio(void )
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



static inline void RF230LayerP$SpiResource$granted(void )
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
static inline void Atm128SpiP$Resource$default$granted(uint8_t id)
#line 340
{
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void Atm128SpiP$Resource$granted(uint8_t arg_0x40a40010){
#line 92
  switch (arg_0x40a40010) {
#line 92
    case 0U:
#line 92
      RF230LayerP$SpiResource$granted();
#line 92
      break;
#line 92
    default:
#line 92
      Atm128SpiP$Resource$default$granted(arg_0x40a40010);
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
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$granted(uint8_t arg_0x40ac1310){
#line 92
  Atm128SpiP$ResourceArbiter$granted(arg_0x40ac1310);
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
inline static void Atm128SpiP$SpiPacket$sendDone(uint8_t * txBuf, uint8_t * rxBuf, uint16_t len, error_t error){
#line 71
  Atm128SpiP$SpiPacket$default$sendDone(txBuf, rxBuf, len, error);
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

# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Random.nc"
inline static uint16_t RandomCollisionLayerP$Random$rand16(void ){
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
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RandomCollisionLayerP.nc"
static inline void RandomCollisionLayerP$calcNextRandom$runTask(void )
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
inline static void TrafficMonitorLayerP$Timer$stop(void ){
#line 67
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(0U);
#line 67
}
#line 67
# 190 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline uint16_t RF230ActiveMessageP$TrafficMonitorConfig$getUpdatePeriod(void )
{
  return RF230ActiveMessageP$TRAFFIC_UPDATE_PERIOD;
}

# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorConfig.nc"
inline static uint16_t TrafficMonitorLayerP$TrafficMonitorConfig$getUpdatePeriod(void ){
#line 32
  unsigned short __nesc_result;
#line 32

#line 32
  __nesc_result = RF230ActiveMessageP$TrafficMonitorConfig$getUpdatePeriod();
#line 32

#line 32
  return __nesc_result;
#line 32
}
#line 32
# 143 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(), dt, FALSE);
}

# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void TrafficMonitorLayerP$Timer$startPeriodic(uint32_t dt){
#line 53
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(0U, dt);
#line 53
}
#line 53
# 229 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
static inline void TrafficMonitorLayerP$startStopTimer$runTask(void )
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
inline static uint8_t MessageBufferLayerP$Packet$payloadLength(message_t * msg){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = RF230PacketP$Packet$payloadLength(msg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 90 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static inline void *RF230PacketP$Packet$getPayload(message_t *msg, uint8_t len)
{
  if (len > 28) {
    return (void *)0;
    }
  return msg->data;
}

# 115 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
inline static void * MessageBufferLayerP$Packet$getPayload(message_t * msg, uint8_t len){
#line 115
  void *__nesc_result;
#line 115

#line 115
  __nesc_result = RF230PacketP$Packet$getPayload(msg, len);
#line 115

#line 115
  return __nesc_result;
#line 115
}
#line 115
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154NetworkLayerP.nc"
static inline message_t *IEEE154NetworkLayerP$NonTinyosReceive$default$receive(uint8_t network, message_t *msg, void *payload, uint8_t len)
{
  return msg;
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * IEEE154NetworkLayerP$NonTinyosReceive$receive(uint8_t arg_0x4087c480, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
    __nesc_result = IEEE154NetworkLayerP$NonTinyosReceive$default$receive(arg_0x4087c480, msg, payload, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 103 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
static inline message_t *ActiveMessageLayerC$Snoop$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
{
  return msg;
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * ActiveMessageLayerC$Snoop$receive(am_id_t arg_0x408636a8, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
    __nesc_result = ActiveMessageLayerC$Snoop$default$receive(arg_0x408636a8, msg, payload, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t TreeP$sendReplyAck$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(TreeP$sendReplyAck);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void TreeP$BeaconTimer$startOneShotAt(uint32_t t0, uint32_t dt){
#line 118
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShotAt(1U, t0, dt);
#line 118
}
#line 118
# 9 "TDMASchedule.nc"
inline static error_t TreeP$TDMASchedule$startTimers(void ){
#line 9
  unsigned char __nesc_result;
#line 9

#line 9
  __nesc_result = SchedulerP$TDMASchedule$startTimers();
#line 9

#line 9
  return __nesc_result;
#line 9
}
#line 9
# 317 "SchedulerP.nc"
static inline void SchedulerP$TDMASchedule$setParentTDMASlot(uint8_t tslot)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 319
    SchedulerP$gParentTSlot = tslot;
#line 319
    __nesc_atomic_end(__nesc_atomic); }
}

# 19 "TDMASchedule.nc"
inline static void TreeP$TDMASchedule$setParentTDMASlot(uint8_t tslot){
#line 19
  SchedulerP$TDMASchedule$setParentTDMASlot(tslot);
#line 19
}
#line 19
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void TreeP$ConnRepWaitTimer$stop(void ){
#line 67
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(4U);
#line 67
}
#line 67
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t TreeP$sendReply$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(TreeP$sendReply);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
inline static error_t TreeP$sendRequest$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(TreeP$sendRequest);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 33 "SchedulerP.nc"
static inline error_t SchedulerP$TDMASchedule$setPPB(uint8_t *Index, dozer_parent_t *ppb)
{
  uint8_t i;
#line 35
  uint8_t j;

  if (SchedulerP$gParentNode.flag != INVALID_VALUE) {
      for (i = 0, j = 1; i < NBR_TABLE_SIZE; i++, j++) 
        if (ppb[i].parent_id == SchedulerP$gParentNode.parent_id) {
            SchedulerP$ParentNodes[0] = &ppb[i];
          }
        else 
#line 41
          {
            SchedulerP$ParentNodes[j] = &ppb[i];
          }
    }
  else 
#line 44
    {
      SchedulerP$ParentNodes[0] = &ppb[Index[0]];
      SchedulerP$ParentNodes[1] = &ppb[Index[1]];
      SchedulerP$ParentNodes[2] = &ppb[Index[2]];
      SchedulerP$ParentNodes[3] = &ppb[Index[3]];
    }
  return SUCCESS;
}

# 5 "TDMASchedule.nc"
inline static error_t TreeP$TDMASchedule$setPPB(uint8_t *Index, dozer_parent_t *ppb){
#line 5
  unsigned char __nesc_result;
#line 5

#line 5
  __nesc_result = SchedulerP$TDMASchedule$setPPB(Index, ppb);
#line 5

#line 5
  return __nesc_result;
#line 5
}
#line 5
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$1$Counter$size_type /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$1$Counter$get(void ){
#line 53
  unsigned long __nesc_result;
#line 53

#line 53
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Counter$get();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$1$LocalTime$get(void )
{
  return /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$1$Counter$get();
}

# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/LocalTime.nc"
inline static uint32_t TreeP$LocalTime$get(void ){
#line 50
  unsigned long __nesc_result;
#line 50

#line 50
  __nesc_result = /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$1$LocalTime$get();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 289 "TreeP.nc"
static inline void TreeP$replaceEntry(uint8_t src, dozer_beacon_t beacon)
{
  uint8_t i;
#line 291
  uint8_t Index = NBR_TABLE_SIZE - 1;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 293
    {
      for (i = NBR_TABLE_SIZE; i != 0; i--) {

          if (
#line 295
          TreeP$nbrTable[i].parent_id != TreeP$gParent_id && TreeP$nbrTable[Index].beacon.hopcount >= TreeP$nbrTable[i - 1].beacon.hopcount
           && TreeP$nbrTable[Index].retries >= TreeP$nbrTable[i - 1].retries) {
              Index = i - 1;
            }
        }
    }
#line 300
    __nesc_atomic_end(__nesc_atomic); }
  TreeP$nbrTable[Index].flag = TRUE;
  TreeP$nbrTable[Index].parent_id = src;
  TreeP$nbrTable[Index].timestamp = TreeP$LocalTime$get();
  memcpy(& TreeP$nbrTable[Index].beacon, &beacon, sizeof beacon);
}

static inline void TreeP$updateNgbrs(uint8_t src, dozer_beacon_t beacon)
{
  uint8_t i;
#line 309
  uint8_t j;
#line 309
  uint8_t tableUpdated = FALSE;



  for (i = NBR_TABLE_SIZE; i != 0; i--) {

      if (TreeP$nbrTable[i - 1].parent_id == src) {
          if (TreeP$nbrTable[i - 1].flag == TRUE) {
              tableUpdated = TRUE;
              TreeP$nbrTable[i - 1].timestamp = TreeP$LocalTime$get();
              memcpy(& TreeP$nbrTable[i - 1].beacon, &beacon, sizeof beacon);
              break;
            }
          else {

              TreeP$nbrTable[i].retries = 0;
              TreeP$nbrTable[i].flag = TRUE;
              tableUpdated = TRUE;
              TreeP$nbrTable[i].timestamp = TreeP$LocalTime$get();
              memcpy(& TreeP$nbrTable[i].beacon, &beacon, sizeof beacon);
              break;
            }
        }
    }

  if (!tableUpdated) {

      quick_sort(TreeP$nbrTable, INVALID_VALUE, sizeof(dozer_parent_t ));

      if (TreeP$nbrTable[NBR_TABLE_SIZE].flag == INVALID_VALUE) {
          TreeP$nbrTable[NBR_TABLE_SIZE].timestamp = TreeP$LocalTime$get();
          TreeP$nbrTable[NBR_TABLE_SIZE].retries = 0;
          tableUpdated = TRUE;
          memcpy(& TreeP$nbrTable[NBR_TABLE_SIZE].beacon, &beacon, sizeof beacon);
        }
    }


  if (!tableUpdated) {
      TreeP$replaceEntry(src, beacon);
    }


  quick_sort(TreeP$nbrTable, HC, sizeof(dozer_parent_t ));


  for (j = i = 0; i < NBR_TABLE_SIZE; i++) {
      if (TreeP$nbrTable[i].flag != INVALID_VALUE && j < MAX_POTENTIAL_PARENTS) {
          TreeP$index[j++] = i;
        }
    }

  TreeP$TDMASchedule$setPPB(TreeP$index, TreeP$nbrTable);
}

# 15 "TDMASchedule.nc"
inline static error_t TreeP$TDMASchedule$setParentTimeStamp(uint16_t node_id, uint16_t seed, uint32_t timestamp){
#line 15
  unsigned char __nesc_result;
#line 15

#line 15
  __nesc_result = SchedulerP$TDMASchedule$setParentTimeStamp(node_id, seed, timestamp);
#line 15

#line 15
  return __nesc_result;
#line 15
}
#line 15
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void TreeP$BeaconWaitTimer$stop(void ){
#line 67
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(2U);
#line 67
}
#line 67
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void TreeP$Leds$led2Toggle(void ){
#line 89
  LedsP$Leds$led2Toggle();
#line 89
}
#line 89
# 62 "TreeP.nc"
static inline void TreeP$report_received(void )
#line 62
{
#line 62
  TreeP$Leds$led2Toggle();
}

# 254 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline am_addr_t IEEE154PacketP$AMPacket$source(message_t *msg)
{
  return IEEE154PacketP$IEEE154Packet$getSrcAddr(msg);
}

# 77 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_addr_t TreeP$AMPacket$source(message_t * amsg){
#line 77
  unsigned short __nesc_result;
#line 77

#line 77
  __nesc_result = IEEE154PacketP$AMPacket$source(amsg);
#line 77

#line 77
  return __nesc_result;
#line 77
}
#line 77
# 364 "TreeP.nc"
static inline message_t *TreeP$BeaconReceive$receive(message_t *msg, void *payload, uint8_t len)
{
  dozer_msg_t *dmsg = (dozer_msg_t *)payload;
  dozer_conn_rep_t *connRep;

  dozer_beacon_t *bmsg;
#line 369
  dozer_beacon_t beacon;
  uint16_t src = TreeP$AMPacket$source(msg);






  TreeP$report_received();


  switch (dmsg->type) {
      case DOZER_BEACON: 
        bmsg = (dozer_beacon_t *)& dmsg->dozer_data.beacon;

      if (TreeP$TreeConnected && !TreeP$NbrUpdatePending) {
          TreeP$BeaconWaitTimer$stop();
          TreeP$TDMASchedule$setParentTimeStamp(src, bmsg->seed, TreeP$LocalTime$get());
        }
      else 
#line 387
        {
          if (bmsg->children == MAX_CHILDREN && src != TreeP$gParent_id) {
#line 388
              break;
            }
#line 389
          memcpy(&beacon, bmsg, sizeof beacon);
          TreeP$updateNgbrs(src, beacon);
        }

      if (!TreeP$TreeConnected && src == TreeP$gParent_id) {
          TreeP$sendRequest$postTask();
        }
      break;

      case DOZER_CONNREQ: 
        if (TreeP$local.children == MAX_CHILDREN) {
#line 399
            break;
          }
#line 400
      TreeP$child_id = src;
      TreeP$sendReply$postTask();
      break;

      case DOZER_CONNACK: 
        TreeP$ConnRequestPending = FALSE;
      TreeP$local.children++;
      TreeP$stop_radio();
      break;

      case DOZER_CONNREP: 
        TreeP$ConnRepWaitTimer$stop();
      connRep = (dozer_conn_rep_t *)& dmsg->dozer_data.rep;
      TreeP$TDMASchedule$setParentTDMASlot(connRep->tdma_slot);
      TreeP$TreeConnected = TRUE;
      TreeP$TDMASchedule$startTimers();
      TreeP$BeaconTimer$startOneShotAt(TreeP$nbrTable[TreeP$gPIndex].timestamp, CHILD_CONNECTION_PERIOD + connRep->tdma_slot * TDMA_SLOT_LEN);
      TreeP$sendReplyAck$postTask();
      break;
    }
  return msg;
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t DataManagerP$sendAvailableData$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(DataManagerP$sendAvailableData);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Queue.nc"
inline static uint8_t DataManagerP$DataQueue$size(void ){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = /*DataManagerC.DataQueueP*/QueueC$0$Queue$size();
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 229 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static __inline void *MessageBufferLayerP$Send$getPayload(message_t *msg, uint8_t len)
{
  return MessageBufferLayerP$Packet$getPayload(msg, len);
}

# 114 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static void * UniqueLayerP$SubSend$getPayload(message_t * msg, uint8_t len){
#line 114
  void *__nesc_result;
#line 114

#line 114
  __nesc_result = MessageBufferLayerP$Send$getPayload(msg, len);
#line 114

#line 114
  return __nesc_result;
#line 114
}
#line 114
# 79 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/UniqueLayerP.nc"
static inline void *UniqueLayerP$Send$getPayload(message_t *msg, uint8_t len)
{
  return UniqueLayerP$SubSend$getPayload(msg, len);
}

# 114 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static void * IEEE154NetworkLayerP$SubSend$getPayload(message_t * msg, uint8_t len){
#line 114
  void *__nesc_result;
#line 114

#line 114
  __nesc_result = UniqueLayerP$Send$getPayload(msg, len);
#line 114

#line 114
  return __nesc_result;
#line 114
}
#line 114
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154NetworkLayerP.nc"
static inline void *IEEE154NetworkLayerP$Send$getPayload(message_t *msg, uint8_t len)
{
  return IEEE154NetworkLayerP$SubSend$getPayload(msg, len);
}

# 114 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static void * ActiveMessageLayerC$SubSend$getPayload(message_t * msg, uint8_t len){
#line 114
  void *__nesc_result;
#line 114

#line 114
  __nesc_result = IEEE154NetworkLayerP$Send$getPayload(msg, len);
#line 114

#line 114
  return __nesc_result;
#line 114
}
#line 114
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
static __inline void *ActiveMessageLayerC$AMSend$getPayload(am_id_t id, message_t *msg, uint8_t len)
{
  return ActiveMessageLayerC$SubSend$getPayload(msg, len);
}

# 124 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void * /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$getPayload(am_id_t arg_0x40b719f8, message_t * msg, uint8_t len){
#line 124
  void *__nesc_result;
#line 124

#line 124
  __nesc_result = ActiveMessageLayerC$AMSend$getPayload(arg_0x40b719f8, msg, len);
#line 124

#line 124
  return __nesc_result;
#line 124
}
#line 124
# 203 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void */*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$getPayload(uint8_t id, message_t *m, uint8_t len)
#line 203
{
  return /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$getPayload(0, m, len);
}

# 114 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static void * /*DozerC.DataSenderC.AMQueueEntryP*/AMQueueEntryP$2$Send$getPayload(message_t * msg, uint8_t len){
#line 114
  void *__nesc_result;
#line 114

#line 114
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$getPayload(1U, msg, len);
#line 114

#line 114
  return __nesc_result;
#line 114
}
#line 114
# 65 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline void */*DozerC.DataSenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$getPayload(message_t *m, uint8_t len)
#line 65
{
  return /*DozerC.DataSenderC.AMQueueEntryP*/AMQueueEntryP$2$Send$getPayload(m, len);
}

# 124 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void * DataManagerP$DataSend$getPayload(message_t * msg, uint8_t len){
#line 124
  void *__nesc_result;
#line 124

#line 124
  __nesc_result = /*DozerC.DataSenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$getPayload(msg, len);
#line 124

#line 124
  return __nesc_result;
#line 124
}
#line 124
# 77 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_addr_t DataManagerP$AMPacket$source(message_t * amsg){
#line 77
  unsigned short __nesc_result;
#line 77

#line 77
  __nesc_result = IEEE154PacketP$AMPacket$source(amsg);
#line 77

#line 77
  return __nesc_result;
#line 77
}
#line 77
# 387 "DataManagerP.nc"
static inline message_t *
DataManagerP$DataReceive$receive(message_t *msg, void *payload, uint8_t len)
#line 388
{
  SensedData *out;
  SensedData *in;
  uint16_t src;

  src = DataManagerP$AMPacket$source(msg);
  memcpy(in, (SensedData *)payload, sizeof(SensedData ));

  switch (in->type) {
      case DATA_MSG: 
        if (src != DataManagerP$child_id) {
#line 398
            return msg;
          }
      if (DataManagerP$addToQueue(in) == SUCCESS) {
          out = (SensedData *)DataManagerP$DataSend$getPayload(DataManagerP$msg_ptr, sizeof(SensedData ));
          memcpy(out, &in, sizeof(SensedData ));
          out->type = DATA_ACK;
          out->more = DATA_QUEUE_SIZE - DataManagerP$DataQueue$size();
          DataManagerP$dest = DataManagerP$child_id;
          DataManagerP$sendTask$postTask();
        }
      break;

      case DATA_ACK: 
        if (src != DataManagerP$parent_id) {
#line 411
            return msg;
          }
#line 412
      DataManagerP$missedAcks = 0;
      DataManagerP$ackPending = FALSE;
      if (! in->more | !DataManagerP$RadioOn) {
#line 414
          return msg;
        }
#line 415
      DataManagerP$sendAvailableData$postTask();
      break;

      default: 
        break;
    }
  return msg;
}

# 98 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
static inline message_t *ActiveMessageLayerC$Receive$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
{
  return msg;
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * ActiveMessageLayerC$Receive$receive(am_id_t arg_0x40863010, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  switch (arg_0x40863010) {
#line 67
    case 50UL:
#line 67
      __nesc_result = TreeP$BeaconReceive$receive(msg, payload, len);
#line 67
      break;
#line 67
    case 51UL:
#line 67
      __nesc_result = DataManagerP$DataReceive$receive(msg, payload, len);
#line 67
      break;
#line 67
    default:
#line 67
      __nesc_result = ActiveMessageLayerC$Receive$default$receive(arg_0x40863010, msg, payload, len);
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
# 269 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline bool IEEE154PacketP$AMPacket$isForMe(message_t *msg)
{
  am_addr_t addr = IEEE154PacketP$AMPacket$destination(msg);

#line 272
  return addr == IEEE154PacketP$AMPacket$address() || addr == AM_BROADCAST_ADDR;
}

# 125 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static bool ActiveMessageLayerC$AMPacket$isForMe(message_t * amsg){
#line 125
  unsigned char __nesc_result;
#line 125

#line 125
  __nesc_result = IEEE154PacketP$AMPacket$isForMe(amsg);
#line 125

#line 125
  return __nesc_result;
#line 125
}
#line 125
#line 136
inline static am_id_t ActiveMessageLayerC$AMPacket$type(message_t * amsg){
#line 136
  unsigned char __nesc_result;
#line 136

#line 136
  __nesc_result = IEEE154PacketP$AMPacket$type(amsg);
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 87 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
static inline message_t *ActiveMessageLayerC$SubReceive$receive(message_t *msg, void *payload, uint8_t len)
{
  am_id_t type = ActiveMessageLayerC$AMPacket$type(msg);

  msg = ActiveMessageLayerC$AMPacket$isForMe(msg) ? 
  ActiveMessageLayerC$Receive$receive(type, msg, payload, len) : 
  ActiveMessageLayerC$Snoop$receive(type, msg, payload, len);

  return msg;
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * IEEE154NetworkLayerP$Receive$receive(message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  __nesc_result = ActiveMessageLayerC$SubReceive$receive(msg, payload, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 196 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline uint8_t IEEE154PacketP$IEEE154Packet$get6LowPan(message_t *msg)
{
  return __nesc_ntoh_leuint8(IEEE154PacketP$getHeader(msg)->network.data);
}

# 167 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static uint8_t IEEE154NetworkLayerP$IEEE154Packet$get6LowPan(message_t *msg){
#line 167
  unsigned char __nesc_result;
#line 167

#line 167
  __nesc_result = IEEE154PacketP$IEEE154Packet$get6LowPan(msg);
#line 167

#line 167
  return __nesc_result;
#line 167
}
#line 167
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154NetworkLayerP.nc"
static inline message_t *IEEE154NetworkLayerP$SubReceive$receive(message_t *msg, void *payload, uint8_t len)
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
inline static message_t * MessageBufferLayerP$Receive$receive(message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  __nesc_result = IEEE154NetworkLayerP$SubReceive$receive(msg, payload, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 267 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static inline void MessageBufferLayerP$deliverTask$runTask(void )
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

# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ParameterInit.nc"
inline static error_t SchedulerP$SeedInit$init(SchedulerP$SeedInit$parameter param){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = RandomMlcgC$SeedInit$init(param);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 41 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Random.nc"
inline static uint16_t SchedulerP$Random$rand16(void ){
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
# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void SchedulerP$PPBListenTimer0$startOneShotAt(uint32_t t0, uint32_t dt){
#line 118
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShotAt(7U, t0, dt);
#line 118
}
#line 118
inline static void SchedulerP$PPBListenTimer1$startOneShotAt(uint32_t t0, uint32_t dt){
#line 118
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShotAt(8U, t0, dt);
#line 118
}
#line 118
inline static void SchedulerP$PPBListenTimer2$startOneShotAt(uint32_t t0, uint32_t dt){
#line 118
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShotAt(9U, t0, dt);
#line 118
}
#line 118
inline static void SchedulerP$PPBListenTimer3$startOneShotAt(uint32_t t0, uint32_t dt){
#line 118
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShotAt(10U, t0, dt);
#line 118
}
#line 118
inline static void SchedulerP$TDMASlotTimer$startOneShotAt(uint32_t t0, uint32_t dt){
#line 118
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShotAt(12U, t0, dt);
#line 118
}
#line 118
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
inline static void ActiveMessageLayerC$AMSend$sendDone(am_id_t arg_0x408515c0, message_t * msg, error_t error){
#line 99
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(arg_0x408515c0, msg, error);
#line 99
}
#line 99
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
static __inline void ActiveMessageLayerC$SubSend$sendDone(message_t *msg, error_t error)
{
  ActiveMessageLayerC$AMSend$sendDone(ActiveMessageLayerC$AMPacket$type(msg), msg, error);
}

# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static void IEEE154NetworkLayerP$Send$sendDone(message_t * msg, error_t error){
#line 89
  ActiveMessageLayerC$SubSend$sendDone(msg, error);
#line 89
}
#line 89
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154NetworkLayerP.nc"
static inline void IEEE154NetworkLayerP$SubSend$sendDone(message_t *msg, error_t error)
{
  IEEE154NetworkLayerP$Send$sendDone(msg, error);
}

# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static void UniqueLayerP$Send$sendDone(message_t * msg, error_t error){
#line 89
  IEEE154NetworkLayerP$SubSend$sendDone(msg, error);
#line 89
}
#line 89
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/UniqueLayerP.nc"
static inline void UniqueLayerP$SubSend$sendDone(message_t *msg, error_t error)
{
  UniqueLayerP$Send$sendDone(msg, error);
}

# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static void MessageBufferLayerP$Send$sendDone(message_t * msg, error_t error){
#line 89
  UniqueLayerP$SubSend$sendDone(msg, error);
#line 89
}
#line 89
# 234 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline uint16_t RF230ActiveMessageP$RandomCollisionConfig$getInitialBackoff(message_t *msg)
{
  return (uint16_t )(9920 * (7372800UL / 8 / 32 * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 1000000.0));
}

# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RandomCollisionConfig.nc"
inline static uint16_t RandomCollisionLayerP$Config$getInitialBackoff(message_t *msg){
#line 29
  unsigned short __nesc_result;
#line 29

#line 29
  __nesc_result = RF230ActiveMessageP$RandomCollisionConfig$getInitialBackoff(msg);
#line 29

#line 29
  return __nesc_result;
#line 29
}
#line 29
# 87 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RandomCollisionLayerP.nc"
static inline error_t RandomCollisionLayerP$RadioSend$send(message_t *msg)
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
inline static error_t TrafficMonitorLayerP$SubSend$send(message_t *msg){
#line 37
  unsigned char __nesc_result;
#line 37

#line 37
  __nesc_result = RandomCollisionLayerP$RadioSend$send(msg);
#line 37

#line 37
  return __nesc_result;
#line 37
}
#line 37
# 86 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
static inline error_t TrafficMonitorLayerP$RadioSend$send(message_t *msg)
{
  TrafficMonitorLayerP$txMsg = msg;
  return TrafficMonitorLayerP$SubSend$send(msg);
}

# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
inline static error_t MessageBufferLayerP$RadioSend$send(message_t *msg){
#line 37
  unsigned char __nesc_result;
#line 37

#line 37
  __nesc_result = TrafficMonitorLayerP$RadioSend$send(msg);
#line 37

#line 37
  return __nesc_result;
#line 37
}
#line 37
# 139 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static inline void MessageBufferLayerP$sendTask$runTask(void )
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

# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void TreeP$Leds$led0On(void ){
#line 45
  LedsP$Leds$led0On();
#line 45
}
#line 45
# 126 "TreeP.nc"
static inline void TreeP$RadioControl$stopDone(error_t error)
#line 126
{
  TreeP$radioOn = FALSE;
  TreeP$Leds$led0On();
}

# 117 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void MessageBufferLayerP$SplitControl$stopDone(error_t error){
#line 117
  TreeP$RadioControl$stopDone(error);
#line 117
}
#line 117
# 68 "/opt/CVSTinyOS/tinyos-2.x/tos/system/LedsP.nc"
static inline void LedsP$Leds$led0Off(void )
#line 68
{
  LedsP$Led0$set();
  ;
#line 70
  ;
}

# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void TreeP$Leds$led0Off(void ){
#line 50
  LedsP$Leds$led0Off();
#line 50
}
#line 50
# 121 "TreeP.nc"
static inline void TreeP$RadioControl$startDone(error_t error)
#line 121
{
  TreeP$radioOn = TRUE;
  TreeP$Leds$led0Off();
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void MessageBufferLayerP$SplitControl$startDone(error_t error){
#line 92
  TreeP$RadioControl$startDone(error);
#line 92
}
#line 92
# 101 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static inline void MessageBufferLayerP$stateDoneTask$runTask(void )
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
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type dt){
#line 92
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Alarm$startAt(t0, dt);
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
# 231 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Alarm$stop(void )
#line 231
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 232
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$set = FALSE;
#line 232
    __nesc_atomic_end(__nesc_atomic); }
}

# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop(void ){
#line 62
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Alarm$stop();
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

# 68 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
inline static void TrafficMonitorLayerP$Tasklet$resume(void ){
#line 68
  TaskletC$Tasklet$resume();
#line 68
}
#line 68
# 291 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline void RF230ActiveMessageP$SlottedCollisionConfig$default$timerTick(void )
#line 291
{
}

# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/SlottedCollisionConfig.nc"
inline static void RF230ActiveMessageP$SlottedCollisionConfig$timerTick(void ){
#line 60
  RF230ActiveMessageP$SlottedCollisionConfig$default$timerTick();
#line 60
}
#line 60
# 213 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline void RF230ActiveMessageP$TrafficMonitorConfig$timerTick(void )
{
  RF230ActiveMessageP$SlottedCollisionConfig$timerTick();
}

# 79 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorConfig.nc"
inline static void TrafficMonitorLayerP$TrafficMonitorConfig$timerTick(void ){
#line 79
  RF230ActiveMessageP$TrafficMonitorConfig$timerTick();
#line 79
}
#line 79
# 162 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodP.nc"
static inline void NeighborhoodP$NeighborhoodFlag$clearAll(uint8_t bit)
{
  uint8_t i;

  bit = ~(1 << bit);

  for (i = 0; i < 5; ++i) 
    NeighborhoodP$flags[i] &= bit;
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodFlag.nc"
inline static void TrafficMonitorLayerP$NeighborhoodFlag$clearAll(void ){
#line 51
  NeighborhoodP$NeighborhoodFlag$clearAll(1U);
#line 51
}
#line 51
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
inline static void TrafficMonitorLayerP$Tasklet$suspend(void ){
#line 61
  TaskletC$Tasklet$suspend();
#line 61
}
#line 61
# 132 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
static inline void TrafficMonitorLayerP$Timer$fired(void )
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

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t TreeP$send_beacon$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(TreeP$send_beacon);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 165 "TreeP.nc"
static inline void TreeP$BeaconTimer$fired(void )
#line 165
{
  if (!TreeP$radioOn) {
    TreeP$start_radio();
    }
  if (TreeP$TreeConnected) {
      TreeP$send_beacon$postTask();
    }
}

#line 207
static inline void TreeP$BeaconWaitTimer$fired(void )
#line 207
{

  TreeP$stop_radio();
  TreeP$TDMASchedule$setParentTimeStamp(TreeP$listen_id, INVALID_VALUE, TreeP$LocalTime$get());
}

# 13 "TDMASchedule.nc"
inline static error_t TreeP$TDMASchedule$clearTableEntry(uint16_t node_id, uint8_t parent){
#line 13
  unsigned char __nesc_result;
#line 13

#line 13
  __nesc_result = SchedulerP$TDMASchedule$clearTableEntry(node_id, parent);
#line 13

#line 13
  return __nesc_result;
#line 13
}
#line 13
# 213 "TreeP.nc"
static inline void TreeP$ConnReqListenTimer$fired(void )
#line 213
{
  if (!TreeP$ConnRequestPending) {
      TreeP$stop_radio();
    }
  else 
#line 216
    {
      TreeP$TDMASchedule$clearTableEntry(TreeP$child_id, FALSE);
      TreeP$local.children--;
    }
}

#line 183
static inline void TreeP$ConnRepWaitTimer$fired(void )
#line 183
{
  if (!TreeP$TreeConnected) {
      TreeP$chooseParent();
    }
}

# 11 "TDMASchedule.nc"
inline static error_t TreeP$TDMASchedule$stopTimers(void ){
#line 11
  unsigned char __nesc_result;
#line 11

#line 11
  __nesc_result = SchedulerP$TDMASchedule$stopTimers();
#line 11

#line 11
  return __nesc_result;
#line 11
}
#line 11
# 189 "TreeP.nc"
static inline void TreeP$NeighbourUpdateTimer$fired(void )
#line 189
{
  TreeP$TDMASchedule$stopTimers();
  TreeP$start_radio();
  TreeP$NbrUpdatePending = TRUE;
  TreeP$NeighbourUpdateStopTimer$startOneShot(NBR_LISTEN_PERIOD);
}

# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void TreeP$NeighbourUpdateTimer$startOneShot(uint32_t dt){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(5U, dt);
#line 62
}
#line 62
# 196 "TreeP.nc"
static inline void TreeP$NeighbourUpdateStopTimer$fired(void )
#line 196
{
  if (!TreeP$TreeConnected) {
      TreeP$chooseParent();
    }
  else 
#line 199
    {
      TreeP$stop_radio();
      TreeP$NbrUpdatePending = FALSE;
      TreeP$TDMASchedule$startTimers();
      TreeP$NeighbourUpdateTimer$startOneShot(NBR_UPDATION_PERIOD);
    }
}

# 23 "TDMASchedule.nc"
inline static void SchedulerP$TDMASchedule$radioWakeup(uint8_t type, uint16_t node_id){
#line 23
  TreeP$TDMASchedule$radioWakeup(type, node_id);
#line 23
  DataManagerP$TDMASchedule$radioWakeup(type, node_id);
#line 23
}
#line 23
# 264 "SchedulerP.nc"
static inline void SchedulerP$PPBListenTimer0$fired(void )
#line 264
{
  SchedulerP$TDMASchedule$radioWakeup(BEACON_LISTEN, SchedulerP$ParentNodes[0]->parent_id);
}

static inline void SchedulerP$PPBListenTimer1$fired(void )
#line 268
{
  SchedulerP$TDMASchedule$radioWakeup(BEACON_LISTEN, SchedulerP$ParentNodes[1]->parent_id);
}

static inline void SchedulerP$PPBListenTimer2$fired(void )
#line 272
{
  SchedulerP$TDMASchedule$radioWakeup(BEACON_LISTEN, SchedulerP$ParentNodes[2]->parent_id);
}

static inline void SchedulerP$PPBListenTimer3$fired(void )
#line 276
{
  SchedulerP$TDMASchedule$radioWakeup(BEACON_LISTEN, SchedulerP$ParentNodes[3]->parent_id);
}

# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void SchedulerP$TDMAScheduleTimer$startOneShot(uint32_t dt){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(11U, dt);
#line 62
}
#line 62
# 280 "SchedulerP.nc"
static inline void SchedulerP$TDMAScheduleTimer$fired(void )
#line 280
{


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 283
    {
      if (SchedulerP$DataListen) {
          SchedulerP$DataListen = FALSE;
          SchedulerP$TDMASchedule$radioWakeup(TSLOT_LISTEN_STOP, SchedulerP$ChildNodes[SchedulerP$gChildTSlot - 1].child_id);
        }

      if (SchedulerP$ChildNodes[SchedulerP$gChildTSlot].child_id != INVALID_VALUE) {
          SchedulerP$DataListen = TRUE;
          SchedulerP$TDMASchedule$radioWakeup(TSLOT_LISTEN, SchedulerP$ChildNodes[SchedulerP$gChildTSlot].child_id);
        }
    }
#line 293
    __nesc_atomic_end(__nesc_atomic); }

  SchedulerP$gChildTSlot++;
  if (SchedulerP$gChildTSlot != MAX_CHILDREN) {
    SchedulerP$TDMAScheduleTimer$startOneShot(TDMA_SLOT_LEN);
    }
}

# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void SchedulerP$TDMASlotTimer$startOneShot(uint32_t dt){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(12U, dt);
#line 62
}
#line 62
# 300 "SchedulerP.nc"
static inline void SchedulerP$TDMASlotTimer$fired(void )
#line 300
{
  if (!SchedulerP$DataSend) {
      SchedulerP$TDMASchedule$radioWakeup(TSLOT_DATA_SEND, SchedulerP$gParentNode.parent_id);
      SchedulerP$TDMASlotTimer$startOneShot(TDMA_SLOT_LEN);
      SchedulerP$DataSend = TRUE;
    }
  else 
#line 305
    {
      SchedulerP$TDMASchedule$radioWakeup(TSLOT_DATA_SEND_STOP, SchedulerP$gParentNode.parent_id);
      SchedulerP$DataSend = FALSE;
    }
}

# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300CounterLogicP.nc"
static inline error_t MDA300CounterLogicP$Counter$read(void )
{
  uint16_t counter;

#line 102
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 102
    {
      counter = MDA300CounterLogicP$count;
      if (RESET_ZERO_AFTER_READ & MDA300CounterLogicP$mode) {
#line 104
        MDA300CounterLogicP$count = 0;
        }
    }
#line 106
    __nesc_atomic_end(__nesc_atomic); }
#line 106
  MDA300CounterLogicP$Counter$readDone(counter);
  return SUCCESS;
}

# 10 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/Dio.nc"
inline static error_t SamplerM$Counter$read(void ){
#line 10
  unsigned char __nesc_result;
#line 10

#line 10
  __nesc_result = MDA300CounterLogicP$Counter$read();
#line 10

#line 10
  return __nesc_result;
#line 10
}
#line 10
inline static error_t SamplerM$Dio5$read(void ){
#line 10
  unsigned char __nesc_result;
#line 10

#line 10
  __nesc_result = MDA300DigitalLogicP$Dio$read(5);
#line 10

#line 10
  return __nesc_result;
#line 10
}
#line 10
inline static error_t SamplerM$Dio4$read(void ){
#line 10
  unsigned char __nesc_result;
#line 10

#line 10
  __nesc_result = MDA300DigitalLogicP$Dio$read(4);
#line 10

#line 10
  return __nesc_result;
#line 10
}
#line 10
inline static error_t SamplerM$Dio3$read(void ){
#line 10
  unsigned char __nesc_result;
#line 10

#line 10
  __nesc_result = MDA300DigitalLogicP$Dio$read(3);
#line 10

#line 10
  return __nesc_result;
#line 10
}
#line 10
inline static error_t SamplerM$Dio2$read(void ){
#line 10
  unsigned char __nesc_result;
#line 10

#line 10
  __nesc_result = MDA300DigitalLogicP$Dio$read(2);
#line 10

#line 10
  return __nesc_result;
#line 10
}
#line 10
inline static error_t SamplerM$Dio1$read(void ){
#line 10
  unsigned char __nesc_result;
#line 10

#line 10
  __nesc_result = MDA300DigitalLogicP$Dio$read(1);
#line 10

#line 10
  return __nesc_result;
#line 10
}
#line 10
inline static error_t SamplerM$Dio0$read(void ){
#line 10
  unsigned char __nesc_result;
#line 10

#line 10
  __nesc_result = MDA300DigitalLogicP$Dio$read(0);
#line 10

#line 10
  return __nesc_result;
#line 10
}
#line 10
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$HumResource$request(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$Resource$request(/*SamplerC.TempHumC*/SensirionSht15C$0$HUM_KEY);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15ReaderP.nc"
static inline error_t /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Humidity$read(void )
#line 51
{
  /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$HumResource$request();
  return SUCCESS;
}

# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Read.nc"
inline static error_t SamplerM$Hum$read(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Humidity$read();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$TempResource$request(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$Resource$request(/*SamplerC.TempHumC*/SensirionSht15C$0$TEMP_KEY);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15ReaderP.nc"
static inline error_t /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Temperature$read(void )
#line 31
{
  /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$TempResource$request();
  return SUCCESS;
}

# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Read.nc"
inline static error_t SamplerM$Temp$read(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Temperature$read();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 15 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/ADConvert.nc"
inline static error_t SamplerM$ADC13$read(void ){
#line 15
  unsigned char __nesc_result;
#line 15

#line 15
  __nesc_result = MDA300IBADCLogicP$ADConvert$read(13);
#line 15

#line 15
  return __nesc_result;
#line 15
}
#line 15
inline static error_t SamplerM$ADC12$read(void ){
#line 15
  unsigned char __nesc_result;
#line 15

#line 15
  __nesc_result = MDA300IBADCLogicP$ADConvert$read(12);
#line 15

#line 15
  return __nesc_result;
#line 15
}
#line 15
inline static error_t SamplerM$ADC11$read(void ){
#line 15
  unsigned char __nesc_result;
#line 15

#line 15
  __nesc_result = MDA300IBADCLogicP$ADConvert$read(11);
#line 15

#line 15
  return __nesc_result;
#line 15
}
#line 15
inline static error_t SamplerM$ADC10$read(void ){
#line 15
  unsigned char __nesc_result;
#line 15

#line 15
  __nesc_result = MDA300IBADCLogicP$ADConvert$read(10);
#line 15

#line 15
  return __nesc_result;
#line 15
}
#line 15
inline static error_t SamplerM$ADC9$read(void ){
#line 15
  unsigned char __nesc_result;
#line 15

#line 15
  __nesc_result = MDA300IBADCLogicP$ADConvert$read(9);
#line 15

#line 15
  return __nesc_result;
#line 15
}
#line 15
inline static error_t SamplerM$ADC8$read(void ){
#line 15
  unsigned char __nesc_result;
#line 15

#line 15
  __nesc_result = MDA300IBADCLogicP$ADConvert$read(8);
#line 15

#line 15
  return __nesc_result;
#line 15
}
#line 15
inline static error_t SamplerM$ADC7$read(void ){
#line 15
  unsigned char __nesc_result;
#line 15

#line 15
  __nesc_result = MDA300IBADCLogicP$ADConvert$read(7);
#line 15

#line 15
  return __nesc_result;
#line 15
}
#line 15
inline static error_t SamplerM$ADC6$read(void ){
#line 15
  unsigned char __nesc_result;
#line 15

#line 15
  __nesc_result = MDA300IBADCLogicP$ADConvert$read(6);
#line 15

#line 15
  return __nesc_result;
#line 15
}
#line 15
inline static error_t SamplerM$ADC5$read(void ){
#line 15
  unsigned char __nesc_result;
#line 15

#line 15
  __nesc_result = MDA300IBADCLogicP$ADConvert$read(5);
#line 15

#line 15
  return __nesc_result;
#line 15
}
#line 15
inline static error_t SamplerM$ADC4$read(void ){
#line 15
  unsigned char __nesc_result;
#line 15

#line 15
  __nesc_result = MDA300IBADCLogicP$ADConvert$read(4);
#line 15

#line 15
  return __nesc_result;
#line 15
}
#line 15
inline static error_t SamplerM$ADC3$read(void ){
#line 15
  unsigned char __nesc_result;
#line 15

#line 15
  __nesc_result = MDA300IBADCLogicP$ADConvert$read(3);
#line 15

#line 15
  return __nesc_result;
#line 15
}
#line 15
inline static error_t SamplerM$ADC2$read(void ){
#line 15
  unsigned char __nesc_result;
#line 15

#line 15
  __nesc_result = MDA300IBADCLogicP$ADConvert$read(2);
#line 15

#line 15
  return __nesc_result;
#line 15
}
#line 15
inline static error_t SamplerM$ADC1$read(void ){
#line 15
  unsigned char __nesc_result;
#line 15

#line 15
  __nesc_result = MDA300IBADCLogicP$ADConvert$read(1);
#line 15

#line 15
  return __nesc_result;
#line 15
}
#line 15
inline static error_t SamplerM$ADC0$read(void ){
#line 15
  unsigned char __nesc_result;
#line 15

#line 15
  __nesc_result = MDA300IBADCLogicP$ADConvert$read(0);
#line 15

#line 15
  return __nesc_result;
#line 15
}
#line 15
# 207 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/SamplerM.nc"
static inline void SamplerM$sampleRecord(uint8_t i)
{
  if (SamplerM$SampleRecord[i].channelType == ANALOG) {
      switch (SamplerM$SampleRecord[i].channel) {
          case 0: 
            SamplerM$ADC0$read();
          break;
          case 1: 
            SamplerM$ADC1$read();
          break;
          case 2: 
            SamplerM$ADC2$read();
          break;
          case 3: 
            SamplerM$ADC3$read();
          break;
          case 4: 
            SamplerM$ADC4$read();
          break;
          case 5: 
            SamplerM$ADC5$read();
          break;
          case 6: 
            SamplerM$ADC6$read();
          break;
          case 7: 
            SamplerM$ADC7$read();
          break;
          case 8: 
            SamplerM$ADC8$read();
          break;
          case 9: 
            SamplerM$ADC9$read();
          break;
          case 10: 
            SamplerM$ADC10$read();
          break;
          case 11: 
            SamplerM$ADC11$read();
          break;
          case 12: 
            SamplerM$ADC12$read();
          break;
          case 13: 
            SamplerM$ADC13$read();
          break;
          default: ;
        }
      return;
    }






  if (SamplerM$SampleRecord[i].channelType == TEMPERATURE || SamplerM$SampleRecord[i].channelType == HUMIDITY) {
      if (SamplerM$SampleRecord[i].channelType == TEMPERATURE) {
#line 264
          SamplerM$Temp$read();
        }
#line 265
      if (SamplerM$SampleRecord[i].channelType == HUMIDITY) {
#line 265
          SamplerM$Hum$read();
        }
#line 266
      return;
    }

  if (SamplerM$SampleRecord[i].channelType == DIGITAL) {
      switch (SamplerM$SampleRecord[i].channel) {
          case 0: 
            SamplerM$Dio0$read();
          break;
          case 1: 
            SamplerM$Dio1$read();
          break;
          case 2: 
            SamplerM$Dio2$read();
          break;
          case 3: 
            SamplerM$Dio3$read();
          break;
          case 4: 
            SamplerM$Dio4$read();
          break;
          case 5: 
            SamplerM$Dio5$read();
          break;
          default: ;
        }
      return;
    }

  if (SamplerM$SampleRecord[i].channelType == COUNTER) {
      SamplerM$Counter$read();
      return;
    }
  return;
}

#line 367
static inline void SamplerM$SamplerTimer$fired(void )
{
  uint8_t i;

  for (i = 0; i < 25; i++) 
    {
      if (SamplerM$SampleRecord[i].sampling_interval != SAMPLE_RECORD_FREE) 
        {
          if (SamplerM$SampleRecord[i].ticks_left == 0) 
            {
              SamplerM$SampleRecord[i].ticks_left = SamplerM$SampleRecord[i].sampling_interval;
              SamplerM$sampleRecord(i);
            }
        }
    }


  SamplerM$next_schedule();
}

# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t MDA300DigitalLogicP$I2CResource$request(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$Resource$request(/*HplMDA300DigitalC.I2C*/Atm128I2CMasterC$0$CLIENT_ID);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortE.Bit4*/HplAtm128GeneralIOPinP$36$IO$makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )45U &= ~(1 << 4);
}

# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void MDA300DigitalLogicP$IntPin$makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortE.Bit4*/HplAtm128GeneralIOPinP$36$IO$makeInput();
#line 33
}
#line 33
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300DigitalLogicP.nc"
static inline error_t MDA300DigitalLogicP$SplitControl$start(void )
#line 56
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    {
      MDA300DigitalLogicP$mode[0] = RISING_EDGE;
      MDA300DigitalLogicP$mode[1] = RISING_EDGE;
      MDA300DigitalLogicP$mode[2] = RISING_EDGE;
      MDA300DigitalLogicP$mode[3] = RISING_EDGE;
      MDA300DigitalLogicP$mode[4] = RISING_EDGE;
      MDA300DigitalLogicP$mode[5] = RISING_EDGE;
      MDA300DigitalLogicP$mode[6] = DIG_OUTPUT;
      MDA300DigitalLogicP$mode[7] = DIG_OUTPUT;
      MDA300DigitalLogicP$io_value = 0xff;
      MDA300DigitalLogicP$state = MDA300DigitalLogicP$INIT;
    }
#line 68
    __nesc_atomic_end(__nesc_atomic); }
  MDA300DigitalLogicP$IntPin$makeInput();
  MDA300DigitalLogicP$I2CResource$request();
  return SUCCESS;
}

# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t SamplerM$DioControl$start(void ){
#line 83
  unsigned char __nesc_result;
#line 83

#line 83
  __nesc_result = MDA300DigitalLogicP$SplitControl$start();
#line 83

#line 83
  return __nesc_result;
#line 83
}
#line 83
# 331 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/SamplerM.nc"
static inline void SamplerM$CounterControl$startDone(error_t error)
#line 331
{
  SamplerM$DioControl$start();
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void MDA300CounterLogicP$CounterControl$startDone(error_t error){
#line 92
  SamplerM$CounterControl$startDone(error);
#line 92
}
#line 92
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$enable(void )
#line 42
{
#line 42
  * (volatile uint8_t *)(0x1D + 0x20) |= 1 << 5;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void MDA300CounterLogicP$Interrupt$enable(void ){
#line 35
  /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$enable();
#line 35
}
#line 35
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP$20$IO$clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )40U &= ~(1 << 4);
}

# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void MDA300CounterLogicP$Power$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP$20$IO$clr();
#line 30
}
#line 30
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortE.Bit5*/HplAtm128GeneralIOPinP$37$IO$set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )46U |= 1 << 5;
}

# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void MDA300CounterLogicP$IntPin$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortE.Bit5*/HplAtm128GeneralIOPinP$37$IO$set();
#line 29
}
#line 29
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortE.Bit5*/HplAtm128GeneralIOPinP$37$IO$makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )45U &= ~(1 << 5);
}

# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void MDA300CounterLogicP$IntPin$makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortE.Bit5*/HplAtm128GeneralIOPinP$37$IO$makeInput();
#line 33
}
#line 33
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortE.Bit5*/HplAtm128GeneralIOPinP$37$IO$get(void )
#line 45
{
#line 45
  return (* (volatile uint8_t * )44U & (1 << 5)) != 0;
}

# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static bool MDA300CounterLogicP$IntPin$get(void ){
#line 32
  unsigned char __nesc_result;
#line 32

#line 32
  __nesc_result = /*HplAtm128GeneralIOC.PortE.Bit5*/HplAtm128GeneralIOPinP$37$IO$get();
#line 32

#line 32
  return __nesc_result;
#line 32
}
#line 32
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/BusyWait.nc"
inline static void MDA300CounterLogicP$BusyWait$wait(MDA300CounterLogicP$BusyWait$size_type dt){
#line 55
  BusyWaitMicroC$BusyWait$wait(dt);
#line 55
}
#line 55
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP$20$IO$set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )40U |= 1 << 4;
}

# 29 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void MDA300CounterLogicP$Power$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP$20$IO$set();
#line 29
}
#line 29






inline static void MDA300CounterLogicP$Power$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortC.Bit4*/HplAtm128GeneralIOPinP$20$IO$makeOutput();
#line 35
}
#line 35
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$disable(void )
#line 43
{
#line 43
  * (volatile uint8_t *)(0x1D + 0x20) &= ~(1 << 5);
}

# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void MDA300CounterLogicP$Interrupt$disable(void ){
#line 40
  /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$disable();
#line 40
}
#line 40
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300CounterLogicP.nc"
static inline error_t MDA300CounterLogicP$CounterControl$start(void )
#line 31
{
  bool c;

#line 33
  MDA300CounterLogicP$Interrupt$disable();
  MDA300CounterLogicP$Power$makeOutput();
  MDA300CounterLogicP$Power$clr();
  MDA300CounterLogicP$BusyWait$wait(1);
  c = MDA300CounterLogicP$IntPin$get();
  MDA300CounterLogicP$Power$set();
  MDA300CounterLogicP$BusyWait$wait(1);
  if (c == MDA300CounterLogicP$IntPin$get()) {
#line 40
    MDA300CounterLogicP$boardConnected = FALSE;
    }
  else {
#line 41
    MDA300CounterLogicP$boardConnected = TRUE;
    }
  MDA300CounterLogicP$Power$clr();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 44
    {
      MDA300CounterLogicP$mode = RISING_EDGE;
      MDA300CounterLogicP$count = 0;
      MDA300CounterLogicP$state = 0;
    }
#line 48
    __nesc_atomic_end(__nesc_atomic); }
  MDA300CounterLogicP$IntPin$makeInput();
  MDA300CounterLogicP$IntPin$set();

  MDA300CounterLogicP$Power$clr();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 53
    {
      MDA300CounterLogicP$count = 0;
      MDA300CounterLogicP$state = 0;
    }
#line 56
    __nesc_atomic_end(__nesc_atomic); }
  MDA300CounterLogicP$Interrupt$enable();
  MDA300CounterLogicP$CounterControl$startDone(SUCCESS);
  return SUCCESS;
}

# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t SamplerM$CounterControl$start(void ){
#line 83
  unsigned char __nesc_result;
#line 83

#line 83
  __nesc_result = MDA300CounterLogicP$CounterControl$start();
#line 83

#line 83
  return __nesc_result;
#line 83
}
#line 83
# 343 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/SamplerM.nc"
static inline void SamplerM$TempHumControl$startDone(error_t error)
#line 343
{


  SamplerM$CounterControl$start();
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void HplSensirionSht15P$SplitControl$startDone(error_t error){
#line 92
  SamplerM$TempHumControl$startDone(error);
#line 92
}
#line 92
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/HplSensirionSht15P.nc"
static inline void HplSensirionSht15P$Timer$fired(void )
#line 31
{
  HplSensirionSht15P$SplitControl$startDone(SUCCESS);
}

# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15ReaderP.nc"
static inline void /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Sht15Temp$resetDone(error_t result)
#line 69
{
}



static inline void /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Sht15Hum$resetDone(error_t result)
#line 74
{
}

# 377 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15LogicP.nc"
static inline void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$SensirionSht15$default$resetDone(uint8_t client, error_t result)
#line 377
{
}

# 25 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15.nc"
inline static void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$SensirionSht15$resetDone(uint8_t arg_0x40d68258, error_t result){
#line 25
  switch (arg_0x40d68258) {
#line 25
    case /*SamplerC.TempHumC*/SensirionSht15C$0$TEMP_KEY:
#line 25
      /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Sht15Temp$resetDone(result);
#line 25
      break;
#line 25
    case /*SamplerC.TempHumC*/SensirionSht15C$0$HUM_KEY:
#line 25
      /*SamplerC.TempHumC.SensirionSht15ReaderP*/SensirionSht15ReaderP$0$Sht15Hum$resetDone(result);
#line 25
      break;
#line 25
    default:
#line 25
      /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$SensirionSht15$default$resetDone(arg_0x40d68258, result);
#line 25
      break;
#line 25
    }
#line 25
}
#line 25
# 258 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15LogicP.nc"
static inline void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$Timer$fired(void )
#line 258
{

  switch (/*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$cmd) {

      case /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$CMD_SOFT_RESET: 

        /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$busy = FALSE;
      /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$SensirionSht15$resetDone(/*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$currentClient, SUCCESS);
      break;

      case /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$CMD_MEASURE_TEMPERATURE: 

        /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$busy = FALSE;
      /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$SensirionSht15$measureTemperatureDone(/*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$currentClient, FAIL, 0);
      break;

      case /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$CMD_MEASURE_HUMIDITY: 

        /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$busy = FALSE;
      /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$SensirionSht15$measureHumidityDone(/*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$currentClient, FAIL, 0);
      break;

      default: 

        break;
    }
}

# 350 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300IBADCLogicP.nc"
static inline void MDA300IBADCLogicP$PowerStabalizingTimer$fired(void )
#line 350
{
  MDA300IBADCLogicP$convert();
}

# 193 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num)
{
}

# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(uint8_t arg_0x4080fa90){
#line 72
  switch (arg_0x4080fa90) {
#line 72
    case 0U:
#line 72
      TrafficMonitorLayerP$Timer$fired();
#line 72
      break;
#line 72
    case 1U:
#line 72
      TreeP$BeaconTimer$fired();
#line 72
      break;
#line 72
    case 2U:
#line 72
      TreeP$BeaconWaitTimer$fired();
#line 72
      break;
#line 72
    case 3U:
#line 72
      TreeP$ConnReqListenTimer$fired();
#line 72
      break;
#line 72
    case 4U:
#line 72
      TreeP$ConnRepWaitTimer$fired();
#line 72
      break;
#line 72
    case 5U:
#line 72
      TreeP$NeighbourUpdateTimer$fired();
#line 72
      break;
#line 72
    case 6U:
#line 72
      TreeP$NeighbourUpdateStopTimer$fired();
#line 72
      break;
#line 72
    case 7U:
#line 72
      SchedulerP$PPBListenTimer0$fired();
#line 72
      break;
#line 72
    case 8U:
#line 72
      SchedulerP$PPBListenTimer1$fired();
#line 72
      break;
#line 72
    case 9U:
#line 72
      SchedulerP$PPBListenTimer2$fired();
#line 72
      break;
#line 72
    case 10U:
#line 72
      SchedulerP$PPBListenTimer3$fired();
#line 72
      break;
#line 72
    case 11U:
#line 72
      SchedulerP$TDMAScheduleTimer$fired();
#line 72
      break;
#line 72
    case 12U:
#line 72
      SchedulerP$TDMASlotTimer$fired();
#line 72
      break;
#line 72
    case 13U:
#line 72
      SamplerM$SamplerTimer$fired();
#line 72
      break;
#line 72
    case 14U:
#line 72
      HplSensirionSht15P$Timer$fired();
#line 72
      break;
#line 72
    case 15U:
#line 72
      /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$Timer$fired();
#line 72
      break;
#line 72
    case 17U:
#line 72
      MDA300IBADCLogicP$PowerStabalizingTimer$fired();
#line 72
      break;
#line 72
    default:
#line 72
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(arg_0x4080fa90);
#line 72
      break;
#line 72
    }
#line 72
}
#line 72
# 166 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$ResourceRequested$default$requested(uint8_t id)
#line 166
{
}

# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static void /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$ResourceRequested$requested(uint8_t arg_0x40ac1d38){
#line 43
    /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$ResourceRequested$default$requested(arg_0x40ac1d38);
#line 43
}
#line 43
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline bool /*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$isEnqueued(resource_client_id_t id)
#line 54
{
  return /*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$resQ[id] != /*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$NO_ENTRY || /*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$qTail == id;
}

#line 72
static inline error_t /*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$enqueue(resource_client_id_t id)
#line 72
{
  /* atomic removed: atomic calls only */
#line 73
  {
    if (!/*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$isEnqueued(id)) {
        if (/*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$qHead == /*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$NO_ENTRY) {
          /*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$qHead = id;
          }
        else {
#line 78
          /*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$resQ[/*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$qTail] = id;
          }
#line 79
        /*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$qTail = id;
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
inline static error_t /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$Queue$enqueue(resource_client_id_t id){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = /*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$enqueue(id);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 505 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/SamplerM.nc"
static inline void SamplerM$Dio0$readDone(uint16_t data)
#line 505
{
  SamplerM$Sample$readDone(0, DIGITAL, data);
}

static inline void SamplerM$Dio1$readDone(uint16_t data)
#line 509
{
  SamplerM$Sample$readDone(1, DIGITAL, data);
}

static inline void SamplerM$Dio2$readDone(uint16_t data)
#line 513
{
  SamplerM$Sample$readDone(2, DIGITAL, data);
}

static inline void SamplerM$Dio3$readDone(uint16_t data)
#line 517
{
  SamplerM$Sample$readDone(3, DIGITAL, data);
}

static inline void SamplerM$Dio4$readDone(uint16_t data)
#line 521
{
  SamplerM$Sample$readDone(4, DIGITAL, data);
}

static inline void SamplerM$Dio5$readDone(uint16_t data)
#line 525
{
  SamplerM$Sample$readDone(5, DIGITAL, data);
}

# 372 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
static inline error_t RF230LayerP$RadioState$turnOn(void )
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
inline static error_t TrafficMonitorLayerP$SubState$turnOn(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = RF230LayerP$RadioState$turnOn();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 217 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
static inline error_t TrafficMonitorLayerP$RadioState$turnOn(void )
{
  TrafficMonitorLayerP$radioCmd = TrafficMonitorLayerP$RADIO_CMD_TURNON;
  return TrafficMonitorLayerP$SubState$turnOn();
}

# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioState.nc"
inline static error_t MessageBufferLayerP$RadioState$turnOn(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = TrafficMonitorLayerP$RadioState$turnOn();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static inline error_t MessageBufferLayerP$SplitControl$start(void )
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
inline static error_t TreeP$RadioControl$start(void ){
#line 83
  unsigned char __nesc_result;
#line 83

#line 83
  __nesc_result = MessageBufferLayerP$SplitControl$start();
#line 83

#line 83
  return __nesc_result;
#line 83
}
#line 83
# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void TreeP$BeaconWaitTimer$startOneShot(uint32_t dt){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(2U, dt);
#line 62
}
#line 62
# 13 "TDMASchedule.nc"
inline static error_t DataManagerP$TDMASchedule$clearTableEntry(uint16_t node_id, uint8_t parent){
#line 13
  unsigned char __nesc_result;
#line 13

#line 13
  __nesc_result = SchedulerP$TDMASchedule$clearTableEntry(node_id, parent);
#line 13

#line 13
  return __nesc_result;
#line 13
}
#line 13
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void SchedulerP$PPBListenTimer0$stop(void ){
#line 67
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(7U);
#line 67
}
#line 67
inline static void SchedulerP$PPBListenTimer1$stop(void ){
#line 67
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(8U);
#line 67
}
#line 67
inline static void SchedulerP$PPBListenTimer2$stop(void ){
#line 67
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(9U);
#line 67
}
#line 67
inline static void SchedulerP$PPBListenTimer3$stop(void ){
#line 67
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(10U);
#line 67
}
#line 67
inline static void SchedulerP$TDMASlotTimer$stop(void ){
#line 67
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(12U);
#line 67
}
#line 67
# 35 "DataManagerP.nc"
inline static error_t DataManagerP$chooseParent(void ){
#line 35
  unsigned char __nesc_result;
#line 35

#line 35
  __nesc_result = TreeP$chooseParent();
#line 35

#line 35
  return __nesc_result;
#line 35
}
#line 35
# 53 "SchedulerP.nc"
static inline error_t SchedulerP$TDMASchedule$getPPB(uint8_t *gIndex)
{
  uint8_t i;
#line 55
  uint8_t Index = 0;


  if (
#line 57
  SchedulerP$gParentNode.flag != INVALID_VALUE && 
  SchedulerP$gParentNode.beacon.hopcount != 0 && 
  SchedulerP$gParentNode.retries == MAX_RETRIES) {
      SchedulerP$gParentNode.flag = INVALID_VALUE;
    }

  for (i = 0; i < MAX_POTENTIAL_PARENTS; i++) {
      if (SchedulerP$ParentNodes[i]->flag == INVALID_VALUE) {
          Index = i + 1;
          continue;
        }

      if (SchedulerP$ParentNodes[i]->beacon.hopcount == 0) {
          Index = i;
          break;
        }

      if (SchedulerP$ParentNodes[Index]->beacon.hopcount == SchedulerP$ParentNodes[i]->beacon.hopcount) 
        {
          if (SchedulerP$ParentNodes[Index]->retries == SchedulerP$ParentNodes[i]->retries) 
            {
              if (SchedulerP$ParentNodes[Index]->beacon.children <= SchedulerP$ParentNodes[i]->beacon.children) {
                  Index = Index;
                }
              else 
#line 80
                {
                  Index = i;
                }
            }
          else {
#line 84
            if (SchedulerP$ParentNodes[Index]->retries < SchedulerP$ParentNodes[i]->retries) {
                Index = Index;
              }
            else {
                Index = i;
              }
            }
        }
      else 
#line 90
        {
          break;
        }
    }


  SchedulerP$ParentNodes[Index]->retries++;
  *gIndex = Index;
  memcpy(&SchedulerP$gParentNode, &SchedulerP$ParentNodes[Index], sizeof SchedulerP$gParentNode);
  return SUCCESS;
}

# 7 "TDMASchedule.nc"
inline static error_t TreeP$TDMASchedule$getPPB(uint8_t *gIndex){
#line 7
  unsigned char __nesc_result;
#line 7

#line 7
  __nesc_result = SchedulerP$TDMASchedule$getPPB(gIndex);
#line 7

#line 7
  return __nesc_result;
#line 7
}
#line 7
# 174 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline void HplAtm1281Timer2AsyncP$Compare$set(uint8_t t)
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
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Compare$set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Compare$size_type t){
#line 45
  HplAtm1281Timer2AsyncP$Compare$set(t);
#line 45
}
#line 45
# 79 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline uint8_t HplAtm1281Timer2AsyncP$Timer$get(void )
#line 79
{
#line 79
  return * (volatile uint8_t *)0xB2;
}

# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Timer$timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Timer$get(void ){
#line 52
  unsigned char __nesc_result;
#line 52

#line 52
  __nesc_result = HplAtm1281Timer2AsyncP$Timer$get();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 258 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline int HplAtm1281Timer2AsyncP$TimerAsync$compareABusy(void )
#line 258
{
  return (* (volatile uint8_t *)0xB6 & (1 << 3)) != 0;
}

# 75 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerAsync.nc"
inline static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$TimerAsync$compareABusy(void ){
#line 75
  int __nesc_result;
#line 75

#line 75
  __nesc_result = HplAtm1281Timer2AsyncP$TimerAsync$compareABusy();
#line 75

#line 75
  return __nesc_result;
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
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Alarm$fired(void ){
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
# 253 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Alarm$getAlarm(void )
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
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(void ){
#line 105
  unsigned long __nesc_result;
#line 105

#line 105
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Alarm$getAlarm();
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

# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t TreeP$BeaconSend$send(am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = /*DozerC.BeaconSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(addr, msg, len);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 114 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static void * /*DozerC.BeaconSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$getPayload(message_t * msg, uint8_t len){
#line 114
  void *__nesc_result;
#line 114

#line 114
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$getPayload(0U, msg, len);
#line 114

#line 114
  return __nesc_result;
#line 114
}
#line 114
# 65 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline void */*DozerC.BeaconSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$getPayload(message_t *m, uint8_t len)
#line 65
{
  return /*DozerC.BeaconSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$getPayload(m, len);
}

# 124 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void * TreeP$BeaconSend$getPayload(message_t * msg, uint8_t len){
#line 124
  void *__nesc_result;
#line 124

#line 124
  __nesc_result = /*DozerC.BeaconSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$getPayload(msg, len);
#line 124

#line 124
  return __nesc_result;
#line 124
}
#line 124
# 264 "TreeP.nc"
static inline void TreeP$sendReplyAck$runTask(void )
#line 264
{
  dozer_msg_t *dmsg;

  if (TreeP$radioOn && !TreeP$sendBusy) {
      dmsg = (dozer_msg_t *)TreeP$BeaconSend$getPayload(&TreeP$sendBuf, sizeof(dozer_msg_t ));
      dmsg->type = DOZER_CONNACK;
      if (TreeP$BeaconSend$send(TreeP$gParent_id, &TreeP$sendBuf, sizeof(dozer_msg_t )) == SUCCESS) {
        TreeP$sendBusy = TRUE;
        }
    }
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static void /*DozerC.BeaconSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(message_t * amsg, am_addr_t addr){
#line 92
  IEEE154PacketP$AMPacket$setDestination(amsg, addr);
#line 92
}
#line 92
#line 151
inline static void /*DozerC.BeaconSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(message_t * amsg, am_id_t t){
#line 151
  IEEE154PacketP$AMPacket$setType(amsg, t);
#line 151
}
#line 151
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t /*DozerC.BeaconSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$send(message_t * msg, uint8_t len){
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
# 322 "SchedulerP.nc"
static inline uint8_t SchedulerP$TDMASchedule$allocChildTimeSlot(uint16_t node_id)
{
  uint8_t i;

  for (i = 0; i < MAX_CHILDREN; i++) {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 327
        {
          if (SchedulerP$ChildNodes[i].child_id == INVALID_VALUE || SchedulerP$ChildNodes[i].child_id == node_id) {
              SchedulerP$ChildNodes[i].child_id = node_id;
              {
                unsigned char __nesc_temp = 
#line 330
                i;

                {
#line 330
                  __nesc_atomic_end(__nesc_atomic); 
#line 330
                  return __nesc_temp;
                }
              }
            }
        }
#line 334
        __nesc_atomic_end(__nesc_atomic); }
    }
#line 335
  return FAIL;
}

# 21 "TDMASchedule.nc"
inline static uint8_t TreeP$TDMASchedule$allocChildTimeSlot(uint16_t node_id){
#line 21
  unsigned char __nesc_result;
#line 21

#line 21
  __nesc_result = SchedulerP$TDMASchedule$allocChildTimeSlot(node_id);
#line 21

#line 21
  return __nesc_result;
#line 21
}
#line 21
# 250 "TreeP.nc"
static inline void TreeP$sendReply$runTask(void )
#line 250
{
  dozer_msg_t *dmsg;
  dozer_conn_rep_t connRep;

  connRep.tdma_slot = TreeP$TDMASchedule$allocChildTimeSlot(TreeP$child_id);
  if (TreeP$radioOn && !TreeP$sendBusy) {
      dmsg = (dozer_msg_t *)TreeP$BeaconSend$getPayload(&TreeP$sendBuf, sizeof(dozer_msg_t ));
      dmsg->type = DOZER_CONNREP;
      memcpy(& dmsg->dozer_data.rep, &connRep, sizeof connRep);
      if (TreeP$BeaconSend$send(TreeP$child_id, &TreeP$sendBuf, sizeof(dozer_msg_t )) == SUCCESS) {
        TreeP$sendBusy = TRUE;
        }
    }
  else 
#line 261
    {
#line 261
      TreeP$sendReply$postTask();
    }
}

#line 238
static inline void TreeP$sendRequest$runTask(void )
#line 238
{
  dozer_msg_t *dmsg;


  if (TreeP$radioOn && !TreeP$sendBusy) {
      dmsg = (dozer_msg_t *)TreeP$BeaconSend$getPayload(&TreeP$sendBuf, sizeof(dozer_msg_t ));
      dmsg->type = DOZER_CONNREQ;
      if (TreeP$BeaconSend$send(TreeP$gParent_id, &TreeP$sendBuf, sizeof(dozer_msg_t )) == SUCCESS) {
        TreeP$sendBusy = TRUE;
        }
    }
}

#line 60
static inline void TreeP$report_problem(void )
#line 60
{
#line 60
  return;
}

#line 222
static inline void TreeP$send_beacon$runTask(void )
#line 222
{
  dozer_msg_t *dmsg;

#line 224
  if (TreeP$radioOn && !TreeP$sendBusy) {


      dmsg = (dozer_msg_t *)TreeP$BeaconSend$getPayload(&TreeP$sendBuf, sizeof(dozer_msg_t ));
      dmsg->type = DOZER_BEACON;
      memcpy(& dmsg->dozer_data.beacon, &TreeP$local, sizeof TreeP$local);
      if (TreeP$BeaconSend$send(AM_BROADCAST_ADDR, &TreeP$sendBuf, sizeof(dozer_msg_t )) == SUCCESS) {
        TreeP$sendBusy = TRUE;
        }
    }
  else 
#line 232
    {
#line 232
      TreeP$send_beacon$postTask();
    }
  if (!TreeP$sendBusy) {
    TreeP$report_problem();
    }
}

# 247 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static inline error_t MessageBufferLayerP$SoftwareInit$init(void )
{
  uint8_t i;

  for (i = 0; i < MessageBufferLayerP$RECEIVE_QUEUE_SIZE; ++i) 
    MessageBufferLayerP$receiveQueue[i] = MessageBufferLayerP$receiveQueueData + i;

  return SUCCESS;
}

# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/UniqueLayerP.nc"
static inline error_t UniqueLayerP$Init$init(void )
{
  UniqueLayerP$sequenceNumber = TOS_NODE_ID << 4;
  return SUCCESS;
}

# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodP.nc"
static inline error_t NeighborhoodP$Init$init(void )
{
  uint8_t i;

  for (i = 0; i < 5; ++i) 
    NeighborhoodP$nodes[i] = AM_BROADCAST_ADDR;

  return SUCCESS;
}

# 161 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline void HplAtm1281Timer2AsyncP$Compare$start(void )
#line 161
{
#line 161
  * (volatile uint8_t *)0x70 |= 1 << 1;
}

# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Compare$start(void ){
#line 56
  HplAtm1281Timer2AsyncP$Compare$start();
#line 56
}
#line 56
# 117 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline void HplAtm1281Timer2AsyncP$TimerCtrl$setControlB(uint8_t x)
#line 117
{
  while (* (volatile uint8_t *)0xB6 & (1 << 0)) 
    ;
  * (volatile uint8_t *)0xB1 = ((Atm128_TCCR2B_t )x).flat;
}

# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerCtrl8.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$TimerCtrl$setControlB(uint8_t control){
#line 62
  HplAtm1281Timer2AsyncP$TimerCtrl$setControlB(control);
#line 62
}
#line 62
# 111 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline void HplAtm1281Timer2AsyncP$TimerCtrl$setControlA(uint8_t x)
#line 111
{
  while (* (volatile uint8_t *)0xB6 & (1 << 1)) 
    ;
  * (volatile uint8_t *)0xB0 = ((Atm128_TCCR2A_t )x).flat;
}

# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerCtrl8.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$TimerCtrl$setControlA(uint8_t control){
#line 61
  HplAtm1281Timer2AsyncP$TimerCtrl$setControlA(control);
#line 61
}
#line 61
# 246 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline void HplAtm1281Timer2AsyncP$TimerAsync$setTimer2Asynchronous(void )
#line 246
{
  * (volatile uint8_t *)0xB6 |= 1 << 5;
}

# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerAsync.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$TimerAsync$setTimer2Asynchronous(void ){
#line 57
  HplAtm1281Timer2AsyncP$TimerAsync$setTimer2Asynchronous();
#line 57
}
#line 57
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Init$init(void )
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
static inline error_t RandomMlcgC$Init$init(void )
#line 44
{
  /* atomic removed: atomic calls only */
#line 45
  RandomMlcgC$seed = (uint32_t )(TOS_NODE_ID + 1);

  return SUCCESS;
}

# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t RF230LayerP$SpiResource$request(void ){
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
# 204 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
static inline error_t RF230LayerP$SoftwareInit$init(void )
{

  return RF230LayerP$SpiResource$request();
}

# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$Init$init(void )
#line 45
{
  memset(/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ, /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY, sizeof /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ);
  return SUCCESS;
}

#line 45
static inline error_t /*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$Init$init(void )
#line 45
{
  memset(/*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$resQ, /*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$NO_ENTRY, sizeof /*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$resQ);
  return SUCCESS;
}

#line 45
static inline error_t /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$Init$init(void )
#line 45
{
  memset(/*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$resQ, /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$NO_ENTRY, sizeof /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$resQ);
  return SUCCESS;
}

# 65 "/opt/CVSTinyOS/tinyos-2.x/tos/system/PoolP.nc"
static inline error_t /*DataManagerC.DataMessagePoolP.PoolP*/PoolP$0$Init$init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 25UL; i++) {
      /*DataManagerC.DataMessagePoolP.PoolP*/PoolP$0$queue[i] = &/*DataManagerC.DataMessagePoolP.PoolP*/PoolP$0$pool[i];
    }
  /*DataManagerC.DataMessagePoolP.PoolP*/PoolP$0$free = 25UL;
  /*DataManagerC.DataMessagePoolP.PoolP*/PoolP$0$index = 0;
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

# 143 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/MeasureClockC.nc"
static inline uint16_t MeasureClockC$Atm128Calibrate$baudrateRegister(uint32_t baudrate)
#line 143
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
# 204 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP$Uart1Init$init(void )
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
static inline error_t HplAtm128UartP$Uart0Init$init(void )
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
inline static error_t RealMainP$SoftwareInit$init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = HplAtm128UartP$Uart0Init$init();
#line 51
  __nesc_result = ecombine(__nesc_result, HplAtm128UartP$Uart1Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*Atm128Uart0C.UartP*/Atm128UartP$0$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, SerialP$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*DataManagerC.DataMessagePoolP.PoolP*/PoolP$0$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC$2$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*HplSensirionSht15C.Arbiter.Queue*/FcfsResourceQueueC$1$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, RF230LayerP$SoftwareInit$init());
#line 51
  __nesc_result = ecombine(__nesc_result, RandomMlcgC$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, NeighborhoodP$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, UniqueLayerP$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, MessageBufferLayerP$SoftwareInit$init());
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void HplSensirionSht15P$Timer$startOneShot(uint32_t dt){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(14U, dt);
#line 62
}
#line 62
# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplSensirionSht15P$SCK$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortC.Bit0*/HplAtm128GeneralIOPinP$16$IO$clr();
#line 30
}
#line 30
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit0*/HplAtm128GeneralIOPinP$16$IO$makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )39U &= ~(1 << 0);
}

# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplSensirionSht15P$SCK$makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortC.Bit0*/HplAtm128GeneralIOPinP$16$IO$makeInput();
#line 33
}
#line 33
#line 29
inline static void HplSensirionSht15P$DATA$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortE.Bit7*/HplAtm128GeneralIOPinP$39$IO$set();
#line 29
}
#line 29






inline static void HplSensirionSht15P$DATA$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortE.Bit7*/HplAtm128GeneralIOPinP$39$IO$makeOutput();
#line 35
}
#line 35
# 22 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/HplSensirionSht15P.nc"
static inline error_t HplSensirionSht15P$SplitControl$start(void )
#line 22
{
  HplSensirionSht15P$DATA$makeOutput();
  HplSensirionSht15P$DATA$set();
  HplSensirionSht15P$SCK$makeInput();
  HplSensirionSht15P$SCK$clr();
  HplSensirionSht15P$Timer$startOneShot(11);
  return SUCCESS;
}

# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t SamplerM$TempHumControl$start(void ){
#line 83
  unsigned char __nesc_result;
#line 83

#line 83
  __nesc_result = HplSensirionSht15P$SplitControl$start();
#line 83

#line 83
  return __nesc_result;
#line 83
}
#line 83
# 315 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/SamplerM.nc"
static inline error_t SamplerM$SamplerControl$start(void )
#line 315
{
  SamplerM$TempHumControl$start();


  return SUCCESS;
}

# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t DataManagerP$SamplerControl$start(void ){
#line 83
  unsigned char __nesc_result;
#line 83

#line 83
  __nesc_result = SamplerM$SamplerControl$start();
#line 83

#line 83
  return __nesc_result;
#line 83
}
#line 83
# 165 "DataManagerP.nc"
inline static void DataManagerP$initialize(void )
{
  uint16_t i;
#line 167
  uint16_t j;


  DataManagerP$periodicity[DataManagerP$TEMP_TYPE] = TEMP_SAMPLING_TIME;
  DataManagerP$periodicity[DataManagerP$HUMID_TYPE] = HUMID_SAMPLING_TIME;
  DataManagerP$periodicity[DataManagerP$BATTERY_TYPE] = BATTERY_SAMPLING_TIME;
  DataManagerP$periodicity[DataManagerP$RAIN_TYPE] = RAIN_SAMPLING_TIME;
  DataManagerP$periodicity[DataManagerP$SMOIST_TYPE] = SMOIST_SAMPLING_TIME;
  DataManagerP$periodicity[DataManagerP$STEMP_TYPE] = STEMP_SAMPLING_TIME;
  DataManagerP$periodicity[DataManagerP$WSPEED_TYPE] = WSPEED_SAMPLING_TIME;
  DataManagerP$periodicity[DataManagerP$WDIR_TYPE] = WDIR_SAMPLING_TIME;
  DataManagerP$periodicity[DataManagerP$LWET_TYPE] = LWET_SAMPLING_TIME;
  DataManagerP$periodicity[DataManagerP$SOLAR_TYPE] = SOLAR_SAMPLING_TIME;
  DataManagerP$periodicity[DataManagerP$LWET_TYPE1] = LWET_SAMPLING_TIME;

  if (DataManagerP$periodicity[DataManagerP$LWET_TYPE] != 0) {
      DataManagerP$lcountMax[0] = 36000U / DataManagerP$periodicity[DataManagerP$LWET_TYPE];
    }

  if (DataManagerP$periodicity[DataManagerP$LWET_TYPE1] != 0) {
      DataManagerP$lcountMax[1] = 36000U / DataManagerP$periodicity[DataManagerP$LWET_TYPE1];
    }

  DataManagerP$sensor_bitmap = 0;
  for (i = 0, j = 0x01; i < 11; i++, j *= 2) {
      if (DataManagerP$periodicity[i] != 0) {
          DataManagerP$sensor_bitmap |= j;
        }
    }

  for (i = 0; i < 11; i++) {
      DataManagerP$packet[i].crop_id = '1';
      DataManagerP$packet[i].plot_id = 2;
    }
}

#line 128
inline static void DataManagerP$init_sensorflags(void )
{


  DataManagerP$Channel[DataManagerP$TEMP_TYPE] = TEMPERATURE;
#line 132
  DataManagerP$ChNo[DataManagerP$TEMP_TYPE] = 0;
  DataManagerP$Channel[DataManagerP$HUMID_TYPE] = HUMIDITY;
#line 133
  DataManagerP$ChNo[DataManagerP$HUMID_TYPE] = 0;
  DataManagerP$Channel[DataManagerP$BATTERY_TYPE] = BATTERY;
#line 134
  DataManagerP$ChNo[DataManagerP$BATTERY_TYPE] = 0;
  DataManagerP$Channel[DataManagerP$RAIN_TYPE] = DIGITAL;
#line 135
  DataManagerP$ChNo[DataManagerP$RAIN_TYPE] = 0;
  DataManagerP$Channel[DataManagerP$SMOIST_TYPE] = ANALOG;
#line 136
  DataManagerP$ChNo[DataManagerP$SMOIST_TYPE] = 3;
  DataManagerP$Channel[DataManagerP$STEMP_TYPE] = ANALOG;
#line 137
  DataManagerP$ChNo[DataManagerP$STEMP_TYPE] = 2;
  DataManagerP$Channel[DataManagerP$WSPEED_TYPE] = COUNTER;
#line 138
  DataManagerP$ChNo[DataManagerP$WSPEED_TYPE] = 0;
  DataManagerP$Channel[DataManagerP$WDIR_TYPE] = ANALOG;
#line 139
  DataManagerP$ChNo[DataManagerP$WDIR_TYPE] = 1;
  DataManagerP$Channel[DataManagerP$LWET_TYPE] = ANALOG;
#line 140
  DataManagerP$ChNo[DataManagerP$LWET_TYPE] = 6;
  DataManagerP$Channel[DataManagerP$SOLAR_TYPE] = ANALOG;
#line 141
  DataManagerP$ChNo[DataManagerP$SOLAR_TYPE] = 0;
  DataManagerP$Channel[DataManagerP$LWET_TYPE1] = ANALOG;
#line 142
  DataManagerP$ChNo[DataManagerP$LWET_TYPE1] = 5;



  DataManagerP$Flags[DataManagerP$TEMP_TYPE] = SAMPLER_DEFAULT;
  DataManagerP$Flags[DataManagerP$HUMID_TYPE] = SAMPLER_DEFAULT;
  DataManagerP$Flags[DataManagerP$BATTERY_TYPE] = SAMPLER_DEFAULT;
  DataManagerP$Flags[DataManagerP$RAIN_TYPE] = RESET_ZERO_AFTER_READ | RISING_EDGE;
  DataManagerP$Flags[DataManagerP$SMOIST_TYPE] = EXITATION_25 | AVERAGE_EIGHT;
  DataManagerP$Flags[DataManagerP$STEMP_TYPE] = EXITATION_25;
  DataManagerP$Flags[DataManagerP$WSPEED_TYPE] = RESET_ZERO_AFTER_READ;
  DataManagerP$Flags[DataManagerP$WDIR_TYPE] = (EXITATION_50 | AVERAGE_EIGHT) | EXITATION_ALWAYS_ON;
  DataManagerP$Flags[DataManagerP$LWET_TYPE] = EXITATION_25 | AVERAGE_EIGHT;
  DataManagerP$Flags[DataManagerP$SOLAR_TYPE] = AVERAGE_SIXTEEN;
  DataManagerP$Flags[DataManagerP$LWET_TYPE1] = EXITATION_33 | AVERAGE_EIGHT;
}

# 301 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/SamplerM.nc"
static inline error_t SamplerM$SamplerInit$init(void )
#line 301
{
  int i;

#line 303
  for (i = 0; i < 25; i++) {
      SamplerM$SampleRecord[i].sampling_interval = SAMPLE_RECORD_FREE;
      SamplerM$SampleRecord[i].ticks_left = 0xffff;
    }





  return SUCCESS;
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t DataManagerP$SamplerInit$init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = SamplerM$SamplerInit$init();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 208 "DataManagerP.nc"
static inline error_t DataManagerP$Init$init(void )
#line 208
{

  DataManagerP$SamplerInit$init();
  DataManagerP$init_sensorflags();
  DataManagerP$initialize();

  if (TOS_NODE_ID != 0) {
      DataManagerP$SamplerControl$start();
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 218
    {
      DataManagerP$msg_ptr = &DataManagerP$msg_send_buffer;
      DataManagerP$packet_ready = 0;
      DataManagerP$sending_packet = FALSE;
    }
#line 222
    __nesc_atomic_end(__nesc_atomic); }









  return SUCCESS;
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t TreeP$DataManagerInit$init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = DataManagerP$Init$init();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 64 "TreeP.nc"
static inline void TreeP$Boot$booted(void )
#line 64
{

  TreeP$beacon_interval = DEFAULT_BEACON_INTERVAL;
  TreeP$local.seed = TOS_NODE_ID;
  TreeP$local.hopcount = INVALID_VALUE;
  TreeP$local.children = 0;

  TreeP$DataManagerInit$init();

  TreeP$TDMASchedule$clearTableEntry(INVALID_VALUE, INVALID_VALUE);



  TreeP$radioOn = FALSE;
  TreeP$sendBusy = FALSE;
  TreeP$start_radio();


  if (TOS_NODE_ID == ROOT_MOTE_ID) {
      TreeP$local.hopcount = 0;
      TreeP$TreeConnected = TRUE;
      TreeP$send_beacon$postTask();
    }
  else 
#line 86
    {
      TreeP$NeighbourUpdateStopTimer$startOneShot(NBR_LISTEN_PERIOD);
    }
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Boot.nc"
inline static void RealMainP$Boot$booted(void ){
#line 49
  TreeP$Boot$booted();
#line 49
}
#line 49
# 199 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline mcu_power_t HplAtm1281Timer2AsyncP$McuPowerOverride$lowestState(void )
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
inline static mcu_power_t McuSleepC$McuPowerOverride$lowestState(void ){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = HplAtm1281Timer2AsyncP$McuPowerOverride$lowestState();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 88 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/McuSleepC.nc"
static inline mcu_power_t McuSleepC$getPowerState(void )
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
static inline void McuSleepC$McuSleep$sleep(void )
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
     __asm ("lpm""\n\t""mov %0, r0""\n\t" : "=r"(__result) : "z"(__addr16) : "r0");__result;
  }
  );
#line 134
   __asm volatile ("sei");
   __asm volatile ("sleep");
   __asm volatile ("cli");

  * (volatile uint8_t *)(0x33 + 0x20) &= ~(1 << 0);
}

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
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
inline static void RadioAlarmP$Tasklet$schedule(void ){
#line 48
  TaskletC$Tasklet$schedule();
#line 48
}
#line 48
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
static inline void RadioAlarmP$Alarm$fired(void )
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
inline static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$Alarm$fired(void ){
#line 67
  RadioAlarmP$Alarm$fired();
#line 67
}
#line 67
# 105 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/atm128hardware.h"
static __inline  void __nesc_enable_interrupt()
#line 105
{
   __asm volatile ("sei");}

# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$fired(void )
#line 110
{
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$stop();
  ;
  __nesc_enable_interrupt();
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$Alarm$fired();
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm1281Timer1P$CompareA$fired(void ){
#line 49
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$fired();
#line 49
}
#line 49
# 209 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P$CompareB$default$fired(void )
#line 209
{
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm1281Timer1P$CompareB$fired(void ){
#line 49
  HplAtm1281Timer1P$CompareB$default$fired();
#line 49
}
#line 49
# 213 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P$CompareC$default$fired(void )
#line 213
{
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm1281Timer1P$CompareC$fired(void ){
#line 49
  HplAtm1281Timer1P$CompareC$default$fired();
#line 49
}
#line 49
# 622 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
static inline void RF230LayerP$IRQ$captured(uint16_t time)
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
inline static void HplRF230P$IRQ$captured(uint16_t time){
#line 50
  RF230LayerP$IRQ$captured(time);
#line 50
}
#line 50
# 199 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline uint16_t HplAtm1281Timer1P$Capture$get(void )
#line 199
{
#line 199
  return * (volatile uint16_t *)0x86;
}

# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static HplRF230P$Capture$size_type HplRF230P$Capture$get(void ){
#line 38
  unsigned short __nesc_result;
#line 38

#line 38
  __nesc_result = HplAtm1281Timer1P$Capture$get();
#line 38

#line 38
  return __nesc_result;
#line 38
}
#line 38
# 58 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static inline void HplRF230P$Capture$captured(uint16_t time)
{
  time = HplRF230P$Capture$get();
  HplRF230P$IRQ$captured(time);
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplAtm1281Timer1P$Capture$captured(HplAtm1281Timer1P$Capture$size_type t){
#line 51
  HplRF230P$Capture$captured(t);
#line 51
}
#line 51
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void )
{
}

# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$Counter$overflow(void ){
#line 71
  /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow();
#line 71
}
#line 71
# 122 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static inline void /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$CounterFrom$overflow(void )
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
inline static void /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$overflow(void ){
#line 71
  /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$CounterFrom$overflow();
#line 71
}
#line 71
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline void /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$overflow(void )
{
  /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$overflow();
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$overflow(void )
#line 51
{
}

# 117 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$overflow(void )
#line 117
{
}

# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm1281Timer1P$Timer$overflow(void ){
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
static __inline void HplAtm1281Timer2AsyncP$stabiliseTimer2(void )
#line 184
{
  * (volatile uint8_t *)0xB0 = * (volatile uint8_t *)0xB0;
  while (* (volatile uint8_t *)0xB6 & (1 << 1)) 
    ;
}

# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$1$Counter$overflow(void )
{
}

# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Counter$overflow(void ){
#line 71
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$1$Counter$overflow();
#line 71
}
#line 71
# 171 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline uint8_t HplAtm1281Timer2AsyncP$Compare$get(void )
#line 171
{
#line 171
  return * (volatile uint8_t *)0xB3;
}

# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Compare$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Compare$get(void ){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  __nesc_result = HplAtm1281Timer2AsyncP$Compare$get();
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 176 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Compare$fired(void )
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
inline static void HplAtm1281Timer2AsyncP$Compare$fired(void ){
#line 49
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Compare$fired();
#line 49
}
#line 49
# 257 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Timer$overflow(void )
#line 257
{
}

# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm1281Timer2AsyncP$Timer$overflow(void ){
#line 61
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Timer$overflow();
#line 61
}
#line 61
# 98 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline uint8_t HplAtm128SpiP$SPI$read(void )
#line 98
{
#line 98
  return * (volatile uint8_t *)(0X2E + 0x20);
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
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP$SPI$write(uint8_t d)
#line 99
{
#line 99
  * (volatile uint8_t *)(0X2E + 0x20) = d;
}

# 86 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP$Spi$write(uint8_t data){
#line 86
  HplAtm128SpiP$SPI$write(data);
#line 86
}
#line 86










inline static void Atm128SpiP$Spi$enableInterrupt(bool enabled){
#line 96
  HplAtm128SpiP$SPI$enableInterrupt(enabled);
#line 96
}
#line 96
# 162 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline error_t Atm128SpiP$sendNextPart(void )
#line 162
{
  uint16_t end;
  uint16_t tmpPos;
  uint16_t myLen;
  uint8_t * tx;
  uint8_t * rx;

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
# 42 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$enable(void )
#line 42
{
#line 42
  * (volatile uint8_t *)(0x1D + 0x20) |= 1 << 4;
}

# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void MDA300DigitalLogicP$Interrupt$enable(void ){
#line 35
  /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$enable();
#line 35
}
#line 35
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$disable(void )
#line 43
{
#line 43
  * (volatile uint8_t *)(0x1D + 0x20) &= ~(1 << 4);
}

# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void MDA300DigitalLogicP$Interrupt$disable(void ){
#line 40
  /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$disable();
#line 40
}
#line 40
# 298 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300DigitalLogicP.nc"
static inline void MDA300DigitalLogicP$Interrupt$fired(void )
{
  MDA300DigitalLogicP$Interrupt$disable();
  if (!MDA300DigitalLogicP$read_io$postTask()) {
#line 301
      MDA300DigitalLogicP$Interrupt$enable();
    }
#line 302
  return;
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$fired(void ){
#line 64
  MDA300DigitalLogicP$Interrupt$fired();
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
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t MDA300CounterLogicP$count_ready$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(MDA300CounterLogicP$count_ready);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 124 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300CounterLogicP.nc"
static inline void MDA300CounterLogicP$Interrupt$fired(void )
{
  /* atomic removed: atomic calls only */
#line 126
  {

    if (MDA300CounterLogicP$state == 0) {
        MDA300CounterLogicP$Power$clr();
        MDA300CounterLogicP$state = 1;
        if (MDA300CounterLogicP$mode & FALLING_EDGE) {
            MDA300CounterLogicP$count++;
            if (EVENT & MDA300CounterLogicP$mode) {
#line 133
              MDA300CounterLogicP$count_ready$postTask();
              }
          }
      }
    else 
#line 136
      {
        MDA300CounterLogicP$Power$set();
        MDA300CounterLogicP$state = 0;
        if (MDA300CounterLogicP$mode & RISING_EDGE) {
            MDA300CounterLogicP$count++;
            if (EVENT & MDA300CounterLogicP$mode) {
#line 141
              MDA300CounterLogicP$count_ready$postTask();
              }
          }
      }
  }
  return;
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$fired(void ){
#line 64
  MDA300CounterLogicP$Interrupt$fired();
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
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$default$fired(void )
#line 63
{
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$fired(void ){
#line 64
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$default$fired();
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
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$readSensor$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(/*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$readSensor);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 286 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15LogicP.nc"
static inline void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$InterruptDATA$fired(void )
#line 286
{
  /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$InterruptDATA$disable();
  /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$readSensor$postTask();
}

# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSensirionSht15C.Int*/Atm128GpioInterruptC$0$Interrupt$fired(void ){
#line 57
  /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$InterruptDATA$fired();
#line 57
}
#line 57
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline void /*HplSensirionSht15C.Int*/Atm128GpioInterruptC$0$Atm128Interrupt$fired(void )
#line 38
{
  /*HplSensirionSht15C.Int*/Atm128GpioInterruptC$0$Interrupt$fired();
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$fired(void ){
#line 64
  /*HplSensirionSht15C.Int*/Atm128GpioInterruptC$0$Atm128Interrupt$fired();
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
# 107 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
static inline void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$I2CPacket$default$writeDone(uint8_t id, error_t error, uint16_t addr, uint8_t len, uint8_t *data)
#line 107
{
}

# 101 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/I2CPacket.nc"
inline static void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$I2CPacket$writeDone(uint8_t arg_0x40edba58, error_t error, uint16_t addr, uint8_t length, uint8_t * data){
#line 101
  switch (arg_0x40edba58) {
#line 101
    case /*HplMDA300DigitalC.I2C*/Atm128I2CMasterC$0$CLIENT_ID:
#line 101
      MDA300DigitalLogicP$I2CPacket$writeDone(error, addr, length, data);
#line 101
      break;
#line 101
    case /*MDA300IBADCSwitchC.I2C*/Atm128I2CMasterC$1$CLIENT_ID:
#line 101
      MDA300IBADCSwitchP$I2CPacket$writeDone(error, addr, length, data);
#line 101
      break;
#line 101
    case /*HplMDA300IBADCC.I2C*/Atm128I2CMasterC$2$CLIENT_ID:
#line 101
      MDA300IBADCLogicP$I2CPacket$writeDone(error, addr, length, data);
#line 101
      break;
#line 101
    default:
#line 101
      /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$I2CPacket$default$writeDone(arg_0x40edba58, error, addr, length, data);
#line 101
      break;
#line 101
    }
#line 101
}
#line 101
# 102 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
static inline void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$SubPacket$writeDone(error_t error, uint16_t addr, uint8_t len, uint8_t *data)
#line 102
{
  /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$I2CPacket$writeDone(/*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$currentClient, error, addr, len, data);
}

# 101 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/I2CPacket.nc"
inline static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2CPacket$writeDone(error_t error, uint16_t addr, uint8_t length, uint8_t * data){
#line 101
  /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$SubPacket$writeDone(error, addr, length, data);
#line 101
}
#line 101
# 105 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300IBADCSwitchP.nc"
static inline void MDA300IBADCSwitchP$I2CPacket$readDone(error_t error, uint16_t addr, uint8_t length, uint8_t *data)
{
#line 171
  return;
}

# 108 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
static inline void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$I2CPacket$default$readDone(uint8_t id, error_t error, uint16_t addr, uint8_t len, uint8_t *data)
#line 108
{
}

# 91 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/I2CPacket.nc"
inline static void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$I2CPacket$readDone(uint8_t arg_0x40edba58, error_t error, uint16_t addr, uint8_t length, uint8_t * data){
#line 91
  switch (arg_0x40edba58) {
#line 91
    case /*HplMDA300DigitalC.I2C*/Atm128I2CMasterC$0$CLIENT_ID:
#line 91
      MDA300DigitalLogicP$I2CPacket$readDone(error, addr, length, data);
#line 91
      break;
#line 91
    case /*MDA300IBADCSwitchC.I2C*/Atm128I2CMasterC$1$CLIENT_ID:
#line 91
      MDA300IBADCSwitchP$I2CPacket$readDone(error, addr, length, data);
#line 91
      break;
#line 91
    case /*HplMDA300IBADCC.I2C*/Atm128I2CMasterC$2$CLIENT_ID:
#line 91
      MDA300IBADCLogicP$I2CPacket$readDone(error, addr, length, data);
#line 91
      break;
#line 91
    default:
#line 91
      /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$I2CPacket$default$readDone(arg_0x40edba58, error, addr, length, data);
#line 91
      break;
#line 91
    }
#line 91
}
#line 91
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
static inline void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$SubPacket$readDone(error_t error, uint16_t addr, uint8_t len, uint8_t *data)
#line 99
{
  /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$I2CPacket$readDone(/*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$currentClient, error, addr, len, data);
}

# 91 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/I2CPacket.nc"
inline static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2CPacket$readDone(error_t error, uint16_t addr, uint8_t length, uint8_t * data){
#line 91
  /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$SubPacket$readDone(error, addr, length, data);
#line 91
}
#line 91
# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterPacketP.nc"
static inline void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$i2c_abort(error_t err)
#line 73
{
  /* atomic removed: atomic calls only */
#line 74
  {

    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$readCurrent();
    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$enableInterrupt(FALSE);
    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$enable(FALSE);
    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$sendCommand();
    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$readCurrent();
    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$enable(TRUE);
    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$sendCommand();
    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C_IDLE;
    if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$reading) {
        /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2CPacket$readDone(err, /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$packetAddr, /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$packetLen, /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$packetPtr);
      }
    else {
        /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2CPacket$writeDone(err, /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$packetAddr, /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$packetLen, /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$packetPtr);
      }
  }
}

# 75 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBusP.nc"
static inline uint8_t HplAtm128I2CBusP$I2C$status(void )
#line 75
{
  return * (volatile uint8_t *)0xB9 & 0xf8;
}

# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
inline static uint8_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$status(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = HplAtm128I2CBusP$I2C$status();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 50 "/opt/CVSTinyOS/tinyos-2.x/tos/system/NoLedsC.nc"
static inline void NoLedsC$Leds$led2On(void )
#line 50
{
}

# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$WriteDebugLeds$led2On(void ){
#line 78
  NoLedsC$Leds$led2On();
#line 78
}
#line 78
# 46 "/opt/CVSTinyOS/tinyos-2.x/tos/system/NoLedsC.nc"
static inline void NoLedsC$Leds$led1On(void )
#line 46
{
}

# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$WriteDebugLeds$led1On(void ){
#line 61
  NoLedsC$Leds$led1On();
#line 61
}
#line 61
# 117 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBusP.nc"
static inline uint8_t HplAtm128I2CBusP$I2C$read(void )
#line 117
{
  return * (volatile uint8_t *)0xBB;
}

# 82 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
inline static uint8_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$read(void ){
#line 82
  unsigned char __nesc_result;
#line 82

#line 82
  __nesc_result = HplAtm128I2CBusP$I2C$read();
#line 82

#line 82
  return __nesc_result;
#line 82
}
#line 82
# 254 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterPacketP.nc"
static inline void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$commandComplete(void )
#line 254
{
  /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$readCurrent();
  /* atomic removed: atomic calls only */
#line 256
  {
    if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$state == /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C_DATA) {
        if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$reading == TRUE) {
            if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$index < /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$packetLen) {
                /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$packetPtr[/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$index] = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$read();
                if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$index == /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$packetLen - 1 && 
                !(/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$packetFlags & I2C_ACK_END)) {
                    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$enableAck(FALSE);
                  }
              }
            else {
                /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$enableInterrupt(FALSE);
                if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$packetFlags & I2C_STOP) {
                    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$packetFlags &= ~I2C_STOP;
                    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$setStop(TRUE);
                    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$status();
                  }
                else {
                    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$setInterruptPending(FALSE);
                  }
                /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$sendCommand();
                /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C_IDLE;
                /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2CPacket$readDone(SUCCESS, /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$packetAddr, /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$packetLen, /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$packetPtr);
                return;
              }
            /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$index++;
            /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$sendCommand();
            return;
          }
        else {
            if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$index < /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$packetLen) {
                /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$write(/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$packetPtr[/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$index]);
                /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$index++;
                /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$sendCommand();
              }
            else {
                /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$enableInterrupt(FALSE);
                if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$packetFlags & I2C_STOP) {
                    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$packetFlags &= ~I2C_STOP;
                    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$setStop(TRUE);
                    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$WriteDebugLeds$led1On();
                  }
                else {
                    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$setInterruptPending(FALSE);
                  }
                /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$sendCommand();
                /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C_IDLE;
                /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$WriteDebugLeds$led2On();
                /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2CPacket$writeDone(SUCCESS, /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$packetAddr, /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$packetLen, /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$packetPtr);
                return;
              }
          }
      }
    else {
#line 309
      if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$state == /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C_STARTING) {
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$packetFlags &= ~I2C_START;
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$setStart(FALSE);
          if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$status() != ATM128_I2C_START && 
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$status() != ATM128_I2C_RSTART) {
              if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$reading) {
                }


              /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$i2c_abort(FAIL);
              return;
            }
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C_ADDR;
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$enableAck(TRUE);
        }
      }
#line 324
    if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$state == /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C_ADDR) {
        if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$reading == TRUE) {
            /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$write(((/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$packetAddr & 0x7f) << 1) | 0x01);
          }
        else {
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$write(((/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$packetAddr & 0x7f) << 1) | 0x00);
          }
#line 330
        /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C_DATA;
        /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$sendCommand();
      }
  }
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
inline static void HplAtm128I2CBusP$I2C$commandComplete(void ){
#line 49
  /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$commandComplete();
#line 49
}
#line 49
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void MDA300IBADCLogicP$Leds$led1Toggle(void ){
#line 72
  LedsP$Leds$led1Toggle();
#line 72
}
#line 72
# 435 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/SamplerM.nc"
static inline void SamplerM$ADC0$readDone(uint16_t data)
#line 435
{
  if (data != 0xffff) {
#line 436
    SamplerM$Sample$readDone(0, ANALOG, data);
    }
}

#line 439
static inline void SamplerM$ADC1$readDone(uint16_t data)
#line 439
{
  if (data != 0xffff) {
#line 440
    SamplerM$Sample$readDone(1, ANALOG, data);
    }
}

#line 443
static inline void SamplerM$ADC2$readDone(uint16_t data)
#line 443
{
  if (data != 0xffff) {
#line 444
    SamplerM$Sample$readDone(2, ANALOG, data);
    }
}

#line 447
static inline void SamplerM$ADC3$readDone(uint16_t data)
#line 447
{
  if (data != 0xffff) {
#line 448
    SamplerM$Sample$readDone(3, ANALOG, data);
    }
}

#line 451
static inline void SamplerM$ADC4$readDone(uint16_t data)
#line 451
{
  if (data != 0xffff) {
#line 452
    SamplerM$Sample$readDone(4, ANALOG, data);
    }
}

#line 455
static inline void SamplerM$ADC5$readDone(uint16_t data)
#line 455
{
  if (data != 0xffff) {
#line 456
    SamplerM$Sample$readDone(5, ANALOG, data);
    }
}

#line 459
static inline void SamplerM$ADC6$readDone(uint16_t data)
#line 459
{
  if (data != 0xffff) {
#line 460
    SamplerM$Sample$readDone(6, ANALOG, data);
    }
}

#line 463
static inline void SamplerM$ADC7$readDone(uint16_t data)
#line 463
{
  if (data != 0xffff) {
#line 464
    SamplerM$Sample$readDone(7, ANALOG, data);
    }
}

#line 467
static inline void SamplerM$ADC8$readDone(uint16_t data)
#line 467
{
  if (data != 0xffff) {
#line 468
    SamplerM$Sample$readDone(8, ANALOG, data);
    }
}

#line 471
static inline void SamplerM$ADC9$readDone(uint16_t data)
#line 471
{
  if (data != 0xffff) {
#line 472
    SamplerM$Sample$readDone(9, ANALOG, data);
    }
}

#line 475
static inline void SamplerM$ADC10$readDone(uint16_t data)
#line 475
{
  if (data != 0xffff) {
#line 476
    SamplerM$Sample$readDone(10, ANALOG, data);
    }
}

#line 479
static inline void SamplerM$ADC11$readDone(uint16_t data)
#line 479
{
  if (data != 0xffff) {
#line 480
    SamplerM$Sample$readDone(11, ANALOG, data);
    }
}

#line 483
static inline void SamplerM$ADC12$readDone(uint16_t data)
#line 483
{
  if (data != 0xffff) {
#line 484
    SamplerM$Sample$readDone(12, ANALOG, data);
    }
}

#line 487
static inline void SamplerM$ADC13$readDone(uint16_t data)
#line 487
{
  if (data != 0xffff) {
#line 488
    SamplerM$Sample$readDone(13, ANALOG, data);
    }
}

# 65 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/I2CPacket.nc"
inline static error_t MDA300IBADCLogicP$I2CPacket$read(i2c_flags_t flags, uint16_t addr, uint8_t length, uint8_t * data){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$I2CPacket$read(/*HplMDA300IBADCC.I2C*/Atm128I2CMasterC$2$CLIENT_ID, flags, addr, length, data);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 434 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300IBADCLogicP.nc"
static inline void MDA300IBADCLogicP$Switch$setDone(bool r)
{
  return;
}

# 15 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/Switch.nc"
inline static void MDA300IBADCSwitchP$Switch$setDone(bool result){
#line 15
  MDA300IBADCLogicP$Switch$setDone(result);
#line 15
}
#line 15
# 327 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300IBADCLogicP.nc"
static inline void MDA300IBADCLogicP$Switch$setAllDone(bool r)
{
  if (!r) {
      /* atomic removed: atomic calls only */
#line 330
      MDA300IBADCLogicP$state = MDA300IBADCLogicP$IDLE;
      MDA300IBADCLogicP$Amplifier$clr();
      MDA300IBADCLogicP$adc_get_data$postTask();
      MDA300IBADCLogicP$resetExcitation();
      return;
    }



  if (MDA300IBADCLogicP$param[MDA300IBADCLogicP$chan] & DELAY_BEFORE_MEASUREMENT) {
      MDA300IBADCLogicP$PowerStabalizingTimer$startOneShot(50);
      return;
    }
  else {
      MDA300IBADCLogicP$convert();
    }

  return;
}

# 16 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/Switch.nc"
inline static void MDA300IBADCSwitchP$Switch$setAllDone(bool result){
#line 16
  MDA300IBADCLogicP$Switch$setAllDone(result);
#line 16
}
#line 16
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t MDA300IBADCSwitchP$I2CResource$release(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$Resource$release(/*MDA300IBADCSwitchC.I2C*/Atm128I2CMasterC$1$CLIENT_ID);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
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
# 300 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/HplAtm128UartP.nc"
static inline void HplAtm128UartP$HplUart1$default$rxDone(uint8_t data)
#line 300
{
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP$HplUart1$rxDone(uint8_t data){
#line 49
  HplAtm128UartP$HplUart1$default$rxDone(data);
#line 49
}
#line 49
# 299 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/HplAtm128UartP.nc"
static inline void HplAtm128UartP$HplUart1$default$txDone(void )
#line 299
{
}

# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP$HplUart1$txDone(void ){
#line 47
  HplAtm128UartP$HplUart1$default$txDone();
#line 47
}
#line 47
# 205 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline void HplAtm1281Timer3P$CompareA$default$fired(void )
#line 205
{
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm1281Timer3P$CompareA$fired(void ){
#line 49
  HplAtm1281Timer3P$CompareA$default$fired();
#line 49
}
#line 49
# 209 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline void HplAtm1281Timer3P$CompareB$default$fired(void )
#line 209
{
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm1281Timer3P$CompareB$fired(void ){
#line 49
  HplAtm1281Timer3P$CompareB$default$fired();
#line 49
}
#line 49
# 213 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline void HplAtm1281Timer3P$CompareC$default$fired(void )
#line 213
{
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm1281Timer3P$CompareC$fired(void ){
#line 49
  HplAtm1281Timer3P$CompareC$default$fired();
#line 49
}
#line 49
# 217 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline void HplAtm1281Timer3P$Capture$default$captured(uint16_t time)
#line 217
{
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplAtm1281Timer3P$Capture$captured(HplAtm1281Timer3P$Capture$size_type t){
#line 51
  HplAtm1281Timer3P$Capture$default$captured(t);
#line 51
}
#line 51
# 70 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
static inline uint16_t HplAtm1281Timer3P$Timer$get(void )
#line 70
{
#line 70
  return * (volatile uint16_t *)0x94;
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
inline static void HplAtm1281Timer3P$Timer$overflow(void ){
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
static void SchedulerBasicP$TaskBasic$runTask(uint8_t arg_0x40363c40){
#line 64
  switch (arg_0x40363c40) {
#line 64
    case TreeP$send_beacon:
#line 64
      TreeP$send_beacon$runTask();
#line 64
      break;
#line 64
    case TreeP$sendRequest:
#line 64
      TreeP$sendRequest$runTask();
#line 64
      break;
#line 64
    case TreeP$sendReply:
#line 64
      TreeP$sendReply$runTask();
#line 64
      break;
#line 64
    case TreeP$sendReplyAck:
#line 64
      TreeP$sendReplyAck$runTask();
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
    case DataManagerP$sendAvailableData:
#line 64
      DataManagerP$sendAvailableData$runTask();
#line 64
      break;
#line 64
    case DataManagerP$sendTask:
#line 64
      DataManagerP$sendTask$runTask();
#line 64
      break;
#line 64
    case DataManagerP$uartSendTask:
#line 64
      DataManagerP$uartSendTask$runTask();
#line 64
      break;
#line 64
    case /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$readSensor:
#line 64
      /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$readSensor$runTask();
#line 64
      break;
#line 64
    case /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$signalStatusDone:
#line 64
      /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$signalStatusDone$runTask();
#line 64
      break;
#line 64
    case HplSensirionSht15P$stopTask:
#line 64
      HplSensirionSht15P$stopTask$runTask();
#line 64
      break;
#line 64
    case /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$grantedTask:
#line 64
      /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$grantedTask$runTask();
#line 64
      break;
#line 64
    case MDA300DigitalLogicP$init_io:
#line 64
      MDA300DigitalLogicP$init_io$runTask();
#line 64
      break;
#line 64
    case MDA300DigitalLogicP$set_io_high:
#line 64
      MDA300DigitalLogicP$set_io_high$runTask();
#line 64
      break;
#line 64
    case MDA300DigitalLogicP$set_io_low:
#line 64
      MDA300DigitalLogicP$set_io_low$runTask();
#line 64
      break;
#line 64
    case MDA300DigitalLogicP$set_io_toggle:
#line 64
      MDA300DigitalLogicP$set_io_toggle$runTask();
#line 64
      break;
#line 64
    case MDA300DigitalLogicP$read_io:
#line 64
      MDA300DigitalLogicP$read_io$runTask();
#line 64
      break;
#line 64
    case /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$grantedTask:
#line 64
      /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$grantedTask$runTask();
#line 64
      break;
#line 64
    case MDA300IBADCLogicP$adc_get_data:
#line 64
      MDA300IBADCLogicP$adc_get_data$runTask();
#line 64
      break;
#line 64
    case MDA300CounterLogicP$count_ready:
#line 64
      MDA300CounterLogicP$count_ready$runTask();
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
      SchedulerBasicP$TaskBasic$default$runTask(arg_0x40363c40);
#line 64
      break;
#line 64
    }
#line 64
}
#line 64
# 166 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$tryToSend(void )
#line 166
{
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$nextPacket();
  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$1$current < 1) {
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

# 132 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
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

# 187 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/HplAtm128UartP.nc"
static void HplAtm128UartP$HplUart0$tx(uint8_t data)
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

# 446 "DataManagerP.nc"
static 
#line 445
error_t 
DataManagerP$Sample$readDone(uint8_t channel, uint8_t channelType, uint16_t data)
{
  switch (channelType) {
      case ANALOG: 
        switch (channel) {
            case 0: 
              DataManagerP$tmpdatapack = (SensedData *)&DataManagerP$packet[9];
            DataManagerP$tmpdatapack->sensor_id = DataManagerP$SOLAR_TYPE;
            DataManagerP$tmpdatapack->value = data;
            { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 455
              {
                DataManagerP$packet_ready = DataManagerP$packet_ready | (1 << 9);
              }
#line 457
              __nesc_atomic_end(__nesc_atomic); }
            break;

            case 7: 
              DataManagerP$tmpdatapack = (SensedData *)&DataManagerP$packet[9];
            DataManagerP$tmpdatapack->sensor_id = DataManagerP$SOLAR_TYPE;
            DataManagerP$tmpdatapack->value = data;
            { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 464
              {
                DataManagerP$packet_ready = DataManagerP$packet_ready | (1 << 9);
              }
#line 466
              __nesc_atomic_end(__nesc_atomic); }
            break;

            case 5: 
              DataManagerP$lcount[1]++;
            if (data > 1536) {
              DataManagerP$lwet[1] = DataManagerP$lwet[1] + 1;
              }
            if (DataManagerP$lcount != DataManagerP$lcountMax) {
              return SUCCESS;
              }

            DataManagerP$tmpdatapack = (SensedData *)&DataManagerP$packet[10];
            DataManagerP$tmpdatapack->sensor_id = DataManagerP$LWET_TYPE1;
            DataManagerP$tmpdatapack->value = DataManagerP$lwet[1];
            { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 481
              {
                DataManagerP$packet_ready = DataManagerP$packet_ready | (1 << 10);
                DataManagerP$lcount[1] = 0;
                DataManagerP$lwet[1] = 0;
              }
#line 485
              __nesc_atomic_end(__nesc_atomic); }
            break;

            case 6: 
              DataManagerP$lcount[0]++;
            if (data > 21) {
              DataManagerP$lwet[0] = DataManagerP$lwet[0] + 1;
              }
            if (DataManagerP$lcount != DataManagerP$lcountMax) {
              return SUCCESS;
              }

            DataManagerP$tmpdatapack = (SensedData *)&DataManagerP$packet[8];
            DataManagerP$tmpdatapack->sensor_id = DataManagerP$LWET_TYPE;
            DataManagerP$tmpdatapack->value = DataManagerP$lwet[0];
            { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 500
              {
                DataManagerP$packet_ready = DataManagerP$packet_ready | (1 << 8);
                DataManagerP$lcount[0] = 0;
                DataManagerP$lwet[0] = 0;
              }
#line 504
              __nesc_atomic_end(__nesc_atomic); }
            break;

            case 1: 
              DataManagerP$tmpdatapack = (SensedData *)&DataManagerP$packet[7];
            DataManagerP$tmpdatapack->sensor_id = DataManagerP$WDIR_TYPE;
            DataManagerP$tmpdatapack->value = data;
            { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 511
              {
                DataManagerP$packet_ready = DataManagerP$packet_ready | (1 << 7);
              }
#line 513
              __nesc_atomic_end(__nesc_atomic); }
            break;

            case 2: 
              DataManagerP$tmpdatapack = (SensedData *)&DataManagerP$packet[5];
            DataManagerP$tmpdatapack->sensor_id = DataManagerP$STEMP_TYPE;
            DataManagerP$tmpdatapack->value = data;
            { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 520
              {
                DataManagerP$packet_ready = DataManagerP$packet_ready | (1 << 5);
              }
#line 522
              __nesc_atomic_end(__nesc_atomic); }
            break;

            case 3: 
              DataManagerP$tmpdatapack = (SensedData *)&DataManagerP$packet[4];
            DataManagerP$tmpdatapack->sensor_id = DataManagerP$SMOIST_TYPE;
            DataManagerP$tmpdatapack->value = data;
            { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 529
              {
                DataManagerP$packet_ready = DataManagerP$packet_ready | (1 << 4);
              }
#line 531
              __nesc_atomic_end(__nesc_atomic); }
            break;

            default: 
              break;
          }
      break;


      case DIGITAL: 
        switch (channel) {
            case 0: 
              DataManagerP$tmpdatapack = (SensedData *)&DataManagerP$packet[3];
            DataManagerP$tmpdatapack->sensor_id = DataManagerP$RAIN_TYPE;
            DataManagerP$tmpdatapack->value = data;
            { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 546
              {
                DataManagerP$packet_ready = DataManagerP$packet_ready | (1 << 3);
              }
#line 548
              __nesc_atomic_end(__nesc_atomic); }
            break;

            default: 
              break;
          }
      break;


      case BATTERY: 
        if (DataManagerP$oneshotflag) {
          return SUCCESS;
          }
      DataManagerP$tmpdatapack = (SensedData *)&DataManagerP$packet[2];
      DataManagerP$tmpdatapack->sensor_id = DataManagerP$BATTERY_TYPE;
      DataManagerP$tmpdatapack->value = data;
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 564
        {
          DataManagerP$packet_ready = DataManagerP$packet_ready | (1 << 2);
        }
#line 566
        __nesc_atomic_end(__nesc_atomic); }
      break;

      case HUMIDITY: 
        if (DataManagerP$oneshotflag) {
          return SUCCESS;
          }
      DataManagerP$tmpdatapack = (SensedData *)&DataManagerP$packet[1];
      DataManagerP$tmpdatapack->sensor_id = DataManagerP$HUMID_TYPE;
      DataManagerP$tmpdatapack->value = data;
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 576
        {
          DataManagerP$packet_ready = DataManagerP$packet_ready | (1 << 1);
        }
#line 578
        __nesc_atomic_end(__nesc_atomic); }
      break;

      case TEMPERATURE: 
        if (DataManagerP$oneshotflag) {
          return SUCCESS;
          }
#line 584
      DataManagerP$tmpdatapack = (SensedData *)&DataManagerP$packet[0];
      DataManagerP$tmpdatapack->sensor_id = DataManagerP$TEMP_TYPE;
      DataManagerP$tmpdatapack->value = data;
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 587
        {
          DataManagerP$packet_ready = DataManagerP$packet_ready | (1 << 0);
        }
#line 589
        __nesc_atomic_end(__nesc_atomic); }
      break;

      case COUNTER: 
        DataManagerP$tmpdatapack = (SensedData *)&DataManagerP$packet[6];
      DataManagerP$tmpdatapack->sensor_id = DataManagerP$WSPEED_TYPE;
      DataManagerP$tmpdatapack->value = data;
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 596
        {
          DataManagerP$packet_ready = DataManagerP$packet_ready | (1 << 6);
        }
#line 598
        __nesc_atomic_end(__nesc_atomic); }
      break;

      default: 
        break;
    }




  if (DataManagerP$sending_packet) {
      DataManagerP$report_received();
      return SUCCESS;
    }

  DataManagerP$addLocalDataToQueue();

  return SUCCESS;
}

# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$toggle(void )
#line 48
{
#line 48
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 48
    * (volatile uint8_t * )34U ^= 1 << 0;
#line 48
    __nesc_atomic_end(__nesc_atomic); }
}

# 326 "DataManagerP.nc"
static void DataManagerP$addLocalDataToQueue(void )
{
  uint8_t i;
#line 328
  uint8_t clear_bit;

  for (i = 0; i < 11; i++) {
      if (DataManagerP$packet_ready & (1 << i)) {
          if (DataManagerP$addToQueue(&DataManagerP$packet[i]) == SUCCESS) {
              clear_bit = ~(1 << i);
              DataManagerP$packet_ready = DataManagerP$packet_ready & clear_bit;
            }
          else 
#line 335
            {
#line 335
              return;
            }
        }
    }
}

#line 300
static error_t DataManagerP$addToQueue(SensedData *in)
#line 300
{
  SensedData *out;

  message_t *newmsg = DataManagerP$DataMessagePool$get();

#line 304
  if (newmsg == (void *)0) {

      DataManagerP$report_problem();
      return FAIL;
    }


  out = (SensedData *)DataManagerP$DataSend$getPayload(newmsg, sizeof(SensedData ));
  memcpy(out, in, sizeof(SensedData ));

  if (DataManagerP$DataQueue$enqueue(newmsg) != SUCCESS) {



      DataManagerP$DataMessagePool$put(newmsg);
      DataManagerP$fatal_problem();
      return FAIL;
    }

  return SUCCESS;
}

# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$toggle(void )
#line 48
{
#line 48
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 48
    * (volatile uint8_t * )34U ^= 1 << 2;
#line 48
    __nesc_atomic_end(__nesc_atomic); }
}

# 103 "/opt/CVSTinyOS/tinyos-2.x/tos/system/PoolP.nc"
static error_t /*DataManagerC.DataMessagePoolP.PoolP*/PoolP$0$Pool$put(/*DataManagerC.DataMessagePoolP.PoolP*/PoolP$0$pool_t *newVal)
#line 103
{
  if (/*DataManagerC.DataMessagePoolP.PoolP*/PoolP$0$free >= 25UL) {
      return FAIL;
    }
  else {
      uint8_t emptyIndex = /*DataManagerC.DataMessagePoolP.PoolP*/PoolP$0$index + /*DataManagerC.DataMessagePoolP.PoolP*/PoolP$0$free;

#line 109
      if (emptyIndex >= 25UL) {
          emptyIndex -= 25UL;
        }
      /*DataManagerC.DataMessagePoolP.PoolP*/PoolP$0$queue[emptyIndex] = newVal;
      /*DataManagerC.DataMessagePoolP.PoolP*/PoolP$0$free++;
      ;
      return SUCCESS;
    }
}

# 77 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
static error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$Resource$request(uint8_t id)
#line 77
{
  /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$ResourceRequested$requested(/*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 79
    {
      if (/*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$state == /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$RES_CONTROLLED) {
          /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$state = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$RES_GRANTING;
          /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$reqResId = id;
        }
      else {
          unsigned char __nesc_temp = 
#line 84
          /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$Queue$enqueue(id);

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
  /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$requested();
  return SUCCESS;
}

# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBusP.nc"
static void HplAtm128I2CBusP$I2C$readCurrent(void )
#line 83
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 84
    HplAtm128I2CBusP$current = * (volatile uint8_t *)0xBC;
#line 84
    __nesc_atomic_end(__nesc_atomic); }
}

# 336 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterPacketP.nc"
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$Atm128I2C$stop(void )
#line 336
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 337
    {
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$readCurrent();
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$enableInterrupt(FALSE);
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$setStop(TRUE);
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$setInterruptPending(TRUE);
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP$0$I2C$sendCommand();
    }
#line 343
    __nesc_atomic_end(__nesc_atomic); }
}

# 108 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
static error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$Resource$release(uint8_t id)
#line 108
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 109
    {
      if (/*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$state == /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$RES_BUSY && /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$resId == id) {
          if (/*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$Queue$isEmpty() == FALSE) {
              /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$reqResId = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$Queue$dequeue();
              /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$state = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$RES_GRANTING;
              /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$grantedTask$postTask();
              /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$unconfigure(id);
            }
          else {
              /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$resId = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$default_owner_id;
              /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$state = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$RES_CONTROLLED;
              /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$unconfigure(id);
              /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$granted();
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

# 76 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300IBADCLogicP.nc"
static void MDA300IBADCLogicP$resetExcitation(void )
{
  uint8_t i;
  uint8_t flag25 = 0;
#line 79
  uint8_t flag33 = 0;
#line 79
  uint8_t flag50 = 0;

  for (i = 0; i < 13 + 1; i++) 
    {
      if (MDA300IBADCLogicP$param[i] & EXITATION_ALWAYS_ON) 
        {
          if (MDA300IBADCLogicP$param[i] & EXITATION_25) {
#line 85
            flag25 = 1;
            }
#line 86
          if (MDA300IBADCLogicP$param[i] & EXITATION_33) {
#line 86
            flag33 = 1;
            }
#line 87
          if (MDA300IBADCLogicP$param[i] & EXITATION_50) {
#line 87
            flag50 = 1;
            }
        }
    }
  if (flag25 == 0) {
#line 91
    MDA300IBADCLogicP$VoltageBuffer$clr();
    }
#line 92
  if (flag33 == 0) {
#line 92
    MDA300IBADCLogicP$Exitation33$clr();
    }
#line 93
  if (flag50 == 0) {
#line 93
    MDA300IBADCLogicP$Exitation50$clr();
    }
  if (!flag25 && !flag33 && !flag50) 
    {
      MDA300IBADCLogicP$VoltageBooster$set();
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

# 188 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Counter$get(void )
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

# 245 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300IBADCLogicP.nc"
static error_t MDA300IBADCLogicP$convert(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 247
    {
      if (MDA300IBADCLogicP$state == MDA300IBADCLogicP$START_CONVERSION_PROCESS || MDA300IBADCLogicP$state == MDA300IBADCLogicP$CONTINUE_SAMPLE) 
        {
          MDA300IBADCLogicP$state = MDA300IBADCLogicP$PICK_CHANNEL;

          switch (MDA300IBADCLogicP$chan) {
              default: 
                case 0: 
                  MDA300IBADCLogicP$condition = 8;
              break;
              case 1: 
                MDA300IBADCLogicP$condition = 12;
              break;
              case 2: 
                MDA300IBADCLogicP$condition = 9;
              break;
              case 3: 
                MDA300IBADCLogicP$condition = 13;
              break;
              case 4: 
                MDA300IBADCLogicP$condition = 10;
              break;
              case 5: 
                MDA300IBADCLogicP$condition = 14;
              break;
              case 6: 
                MDA300IBADCLogicP$condition = 11;
              break;
              case 7: 
                case 8: 
                  case 9: 
                    case 10: 

                      MDA300IBADCLogicP$condition = 15;
              break;
              case 11: 
                MDA300IBADCLogicP$condition = 0;
              break;
              case 12: 
                MDA300IBADCLogicP$condition = 1;
              break;
              case 13: 
                MDA300IBADCLogicP$condition = 2;
              break;
            }
        }

      MDA300IBADCLogicP$condition = (MDA300IBADCLogicP$condition << 4) & 0xf0;
      MDA300IBADCLogicP$condition = MDA300IBADCLogicP$condition | 0x0f;
    }
#line 296
    __nesc_atomic_end(__nesc_atomic); }

  if (MDA300IBADCLogicP$I2CPacket$write(0x03, TOS_IBADC_I2C_ADDR, 1, (uint8_t *)&MDA300IBADCLogicP$condition) != SUCCESS) 
    {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 300
        MDA300IBADCLogicP$state = MDA300IBADCLogicP$IDLE;
#line 300
        __nesc_atomic_end(__nesc_atomic); }
      MDA300IBADCLogicP$adc_get_data$postTask();
      MDA300IBADCLogicP$resetExcitation();
      return FAIL;
    }

  return SUCCESS;
  MDA300IBADCLogicP$Amplifier$clr();
}

# 81 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
static error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$I2CPacket$write(uint8_t id, i2c_flags_t flags, uint16_t addr, uint8_t len, uint8_t *data)
#line 81
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 82
    {
      if (/*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$currentClient != id) {
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
  return /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$SubPacket$write(flags, addr, len, data);
}

static error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$I2CPacket$read(uint8_t id, i2c_flags_t flags, uint16_t addr, uint8_t len, uint8_t *data)
#line 90
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 91
    {
      if (/*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$currentClient != id) {
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
  return /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP$0$SubPacket$read(flags, addr, len, data);
}

# 79 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300DigitalLogicP.nc"
static error_t MDA300DigitalLogicP$Dio$setParam(uint8_t channel, uint8_t modeToSet)
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 82
    MDA300DigitalLogicP$mode[channel] = modeToSet;
#line 82
    __nesc_atomic_end(__nesc_atomic); }
  if ((modeToSet & RISING_EDGE) == 0 && (modeToSet & FALLING_EDGE) == 0) {
#line 83
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 83
        MDA300DigitalLogicP$mode[channel] |= RISING_EDGE;
#line 83
        __nesc_atomic_end(__nesc_atomic); }
    }
#line 84
  return FAIL;
}

# 103 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/SamplerM.nc"
static void SamplerM$next_schedule(void )
#line 103
{
  int8_t i;
  int32_t min = 150;

  for (i = 0; i < 25; i++) 
    {
      if (SamplerM$SampleRecord[i].sampling_interval != SAMPLE_RECORD_FREE) 
        {
          if (SamplerM$SampleRecord[i].ticks_left < min) {
#line 111
              min = SamplerM$SampleRecord[i].ticks_left;
            }
        }
    }
#line 114
  for (i = 0; i < 25; i++) 
    {
      if (SamplerM$SampleRecord[i].sampling_interval != SAMPLE_RECORD_FREE) 
        {
          SamplerM$SampleRecord[i].ticks_left = SamplerM$SampleRecord[i].ticks_left - min;
        }
    }
  min = min * 100;
  SamplerM$SamplerTimer$startOneShot(min);
}

# 120 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15LogicP.nc"
static error_t /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$performCommand(void )
#line 120
{

  /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$initPins();
  /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$resetDevice();
  /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$transmissionStart();
  /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$cmd &= 0x1F;
  /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$sendCommand(/*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$cmd);

  if (/*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$waitForResponse() != SUCCESS) {
      /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$busy = FALSE;
      return FAIL;
    }

  switch (/*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$cmd) {

      case /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$CMD_SOFT_RESET: 
        /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$Timer$startOneShot(/*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$TIMEOUT_RESET);
      break;

      case /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$CMD_MEASURE_TEMPERATURE: 
        /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$enableInterrupt();

      if (/*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$status & SHT15_STATUS_LOW_RES_BIT) {
          /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$Timer$startOneShot(/*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$TIMEOUT_12BIT);
        }
      else 
#line 144
        {
          /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$Timer$startOneShot(/*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$TIMEOUT_14BIT);
        }

      break;

      case /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$CMD_MEASURE_HUMIDITY: 
        /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$enableInterrupt();

      if (/*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$status & SHT15_STATUS_LOW_RES_BIT) {
          /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$Timer$startOneShot(/*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$TIMEOUT_8BIT);
        }
      else 
#line 155
        {
          /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$Timer$startOneShot(/*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$TIMEOUT_12BIT);
        }

      break;

      case /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$CMD_READ_STATUS: 
        {
          uint8_t tempStatus;
          uint8_t crc;

          tempStatus = /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$readByte();
          crc = /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$readByte();
          /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$endTransmission();

          /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$status = tempStatus;

          /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$signalStatusDone$postTask();
        }

      case /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$CMD_WRITE_STATUS: 
        /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$writeByte(/*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$newStatus);

      if (/*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$waitForResponse() != SUCCESS) {
          /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$writeFail = TRUE;
        }
      else 
#line 180
        {
          /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$status = /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$newStatus;
        }

      /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$signalStatusDone$postTask();
    }


  return SUCCESS;
}

#line 226
static void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$writeByte(uint8_t byte)
#line 226
{
  uint8_t i;

#line 228
  for (i = 0; i < 8; i++) {
      if (byte & 0x80) {
        /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$DATA$set();
        }
      else {
#line 232
        /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$DATA$clr();
        }
#line 233
      byte = byte << 1;
      /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$CLOCK$set();
      /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$CLOCK$clr();
    }
}

static error_t /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$waitForResponse(void )
#line 239
{
  /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$DATA$makeInput();
  /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$DATA$set();
  /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$CLOCK$set();
  if (/*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$DATA$get()) {


      return FAIL;
    }
  /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$CLOCK$clr();
  return SUCCESS;
}

# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$Timer$startOneShot(uint32_t dt){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(15U, dt);
#line 62
}
#line 62
# 15 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static error_t /*HplSensirionSht15C.Int*/Atm128GpioInterruptC$0$enable(bool rising)
#line 15
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 16
    {
      /*HplSensirionSht15C.Int*/Atm128GpioInterruptC$0$Atm128Interrupt$disable();
      /*HplSensirionSht15C.Int*/Atm128GpioInterruptC$0$Atm128Interrupt$clear();
      /*HplSensirionSht15C.Int*/Atm128GpioInterruptC$0$Atm128Interrupt$edge(rising);
      /*HplSensirionSht15C.Int*/Atm128GpioInterruptC$0$Atm128Interrupt$enable();
    }
#line 21
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 326 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/sht15/SensirionSht15LogicP.nc"
static uint8_t /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$readByte(void )
#line 326
{
  uint8_t byte = 0;
  uint8_t i;

  for (i = 0; i < 8; i++) {
      /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$CLOCK$set();
      if (/*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$DATA$get()) {
        byte |= 1;
        }
#line 334
      if (i != 7) {
        byte = byte << 1;
        }
#line 336
      /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$CLOCK$clr();
    }

  /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$ack();
  return byte;
}










static void /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$endTransmission(void )
#line 352
{
  /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$DATA$makeOutput();
  /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$DATA$set();
  /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$CLOCK$set();
  /*HalSensirionSht15C.SensirionSht15LogicP*/SensirionSht15LogicP$0$CLOCK$clr();
}

# 97 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static error_t /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$Resource$release(uint8_t id)
#line 97
{
  bool released = FALSE;

#line 99
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 99
    {
      if (/*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$state == /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$RES_BUSY && /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$resId == id) {
          if (/*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$Queue$isEmpty() == FALSE) {
              /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$reqResId = /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$Queue$dequeue();
              /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$state = /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$RES_GRANTING;
              /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$grantedTask$postTask();
            }
          else {
              /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$resId = /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$NO_RES;
              /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$state = /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$RES_IDLE;
            }
          released = TRUE;
        }
    }
#line 112
    __nesc_atomic_end(__nesc_atomic); }
  if (released == TRUE) {
      /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$ResourceConfigure$unconfigure(id);
      return SUCCESS;
    }
  return FAIL;
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

# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
static error_t ActiveMessageLayerC$AMSend$send(am_id_t id, am_addr_t addr, message_t *msg, uint8_t len)
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

# 423 "TreeP.nc"
static void TreeP$BeaconSend$sendDone(message_t *msg, error_t error)
#line 423
{
  dozer_msg_t *dmsg = TreeP$BeaconSend$getPayload(&TreeP$sendBuf, sizeof(dozer_msg_t ));

#line 425
  TreeP$report_sent();

  if (error == SUCCESS) {
      switch (dmsg->type) {
          case DOZER_BEACON: 
            TreeP$startTimer();
          TreeP$TDMASchedule$setBeaconTimeStamp(TreeP$LocalTime$get());
          if (TreeP$local.children <= MAX_CHILDREN) {
              TreeP$ConnReqListenTimer$startOneShot(CHILD_CONNECTION_PERIOD);
            }
          else 
#line 434
            {
              TreeP$stop_radio();
            }
          break;

          case DOZER_CONNREQ: 
            TreeP$startTimer();
          break;

          case DOZER_CONNREP: 
            TreeP$ConnRequestPending = TRUE;
          break;

          case DOZER_CONNACK: 
            TreeP$stop_radio();
          break;

          default: 
            break;
        }
    }
  else {
#line 455
      TreeP$report_problem();
    }
  TreeP$sendBusy = FALSE;
}

# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$toggle(void )
#line 48
{
#line 48
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 48
    * (volatile uint8_t * )34U ^= 1 << 1;
#line 48
    __nesc_atomic_end(__nesc_atomic); }
}

# 92 "TreeP.nc"
static void TreeP$startTimer(void )
#line 92
{

  if (TreeP$TreeConnected) {
      TreeP$SeedInit$init(TreeP$local.seed);
      TreeP$local.seed = TreeP$Random$rand16() & 0x1ff;
      TreeP$BeaconTimer$startOneShot(TreeP$beacon_interval + TreeP$local.seed);
    }
  else {
      TreeP$ConnRepWaitTimer$startOneShot(ACTIVATION_WAIT_PERIOD);
    }
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/system/RandomMlcgC.nc"
static error_t RandomMlcgC$SeedInit$init(uint16_t s)
#line 51
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 52
    RandomMlcgC$seed = (uint32_t )(s + 1);
#line 52
    __nesc_atomic_end(__nesc_atomic); }

  return SUCCESS;
}


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

# 113 "TreeP.nc"
static void TreeP$stop_radio(void )
#line 113
{
  if ((!TreeP$radioOn || TreeP$sendBusy) || !TreeP$TreeConnected) {
#line 114
      return;
    }
#line 115
  if (TreeP$RadioControl$stop() != SUCCESS) {
      TreeP$report_problem();
    }
}

# 101 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TaskletC.nc"
static void TaskletC$Tasklet$schedule(void )
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
static void TaskletC$doit(void )
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
static bool RF230LayerP$isSpiAcquired(void )
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
static void Atm128SpiP$startSpi(void )
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
static void HplAtm128SpiP$SPI$enableSpi(bool enabled)
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
static void HplAtm128SpiP$SPI$enableInterrupt(bool enabled)
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
static error_t Atm128SpiP$Resource$request(uint8_t id)
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

# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$to_size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$Counter$get(void )
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
static void RF230PacketP$PacketTimeStampRadio$set(message_t *msg, uint32_t value)
{
  RF230PacketP$getMeta(msg)->flags |= RF230PACKET_TIMESTAMP;
  RF230PacketP$getMeta(msg)->timestamp = value;
}

# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$Alarm$startAt(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$timer_size t0, /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC$0$timer_size dt)
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
static void TrafficMonitorLayerP$SubSend$sendDone(error_t error)
{
  if (error == SUCCESS) {
    TrafficMonitorLayerP$txAverage += TrafficMonitorLayerP$TrafficMonitorConfig$getChannelTime(TrafficMonitorLayerP$txMsg);
    }
  TrafficMonitorLayerP$RadioSend$sendDone(error);
}

# 195 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static uint16_t RF230ActiveMessageP$TrafficMonitorConfig$getChannelTime(message_t *msg)
{







  uint8_t len = RF230ActiveMessageP$IEEE154Packet$getLength(msg);

#line 205
  return RF230ActiveMessageP$IEEE154Packet$getAckRequired(msg) ? len + 6 + 16 + 11 + 10 : len + 6 + 10;
}

#line 124
static void RF230ActiveMessageP$SoftwareAckConfig$setAckReceived(message_t *msg, bool acked)
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
static bool IEEE154PacketP$IEEE154Packet$requiresAckReply(message_t *msg)
{
  return IEEE154PacketP$IEEE154Packet$getAckRequired(msg)
   && IEEE154PacketP$IEEE154Packet$isDataFrame(msg)
   && IEEE154PacketP$IEEE154Packet$getDestAddr(msg) == IEEE154PacketP$ActiveMessageAddress$amAddress();
}

# 389 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
static error_t RF230LayerP$RadioSend$send(message_t *msg)
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
    __nesc_hton_int32((* (timesync_relative_t *)timesync).data, * (timesync_absolute_t *)timesync - time32);
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
    * (timesync_absolute_t *)timesync = __nesc_ntoh_int32((* (timesync_relative_t *)timesync).data) + time32;
    }
  RF230LayerP$PacketTimeStamp$set(msg, time32);


  RF230LayerP$state = RF230LayerP$STATE_BUSY_TX_2_RX_ON;
  RF230LayerP$cmd = RF230LayerP$CMD_TRANSMIT;

  return SUCCESS;
}

# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static void RandomCollisionLayerP$RadioAlarm$wait(uint16_t timeout){
#line 38
  RadioAlarmP$RadioAlarm$wait(1U, timeout);
#line 38
}
#line 38
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodP.nc"
static uint8_t NeighborhoodP$Neighborhood$insertNode(am_addr_t node)
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
static error_t Atm128SpiP$Resource$release(uint8_t id)
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

# 88 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/TaskletC.nc"
static void TaskletC$Tasklet$resume(void )
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

# 155 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(uint8_t last, message_t * msg, error_t err)
#line 155
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[last].msg = (void *)0;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend();
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(last, msg, err);
}

# 240 "SchedulerP.nc"
static error_t SchedulerP$TDMASchedule$setParentTimeStamp(uint16_t node_id, uint16_t seed, uint32_t timestamp)
{
  uint8_t i;


  for (i = 0; i < MAX_POTENTIAL_PARENTS; i++) {
      if (SchedulerP$ParentNodes[i]->parent_id == node_id || SchedulerP$ParentNodes[i]->parent_id == INVALID_VALUE) {
          SchedulerP$ParentNodes[i]->parent_id = node_id;
          if (seed != INVALID_VALUE) {
              SchedulerP$ParentNodes[i]->beacon.seed = seed;
            }
          else 
#line 250
            {
#line 250
              ;
            }
#line 251
          SchedulerP$ParentNodes[i]->timestamp = timestamp;
          break;
        }
    }

  if (i != MAX_POTENTIAL_PARENTS) {

      SchedulerP$startBeaconListenTimer(i);
      return SUCCESS;
    }
  return FAIL;
}

#line 167
static void SchedulerP$startBeaconListenTimer(uint8_t parent_index)
#line 167
{
  uint8_t rounds = 1;
#line 168
  uint8_t tmp;
  uint32_t next_beacon_period;
  uint32_t next_time_slot;
  uint16_t seed_val;
#line 171
  uint16_t seed_sum = 0;





  if (SchedulerP$ParentNodes[parent_index]->parent_id == SchedulerP$gParentNode.parent_id) {
      rounds = PARENTS_UPDATE_INTERVAL / DEFAULT_BEACON_INTERVAL;
    }

  tmp = rounds;
  seed_val = SchedulerP$ParentNodes[parent_index]->beacon.seed;
  while (tmp--) {
      SchedulerP$SeedInit$init(seed_val);
      seed_val = SchedulerP$Random$rand16() & 0x1ff;
      seed_sum += seed_val;
    }

  SchedulerP$ParentNodes[parent_index]->beacon.seed = seed_val;
  next_beacon_period = (DEFAULT_BEACON_INTERVAL - CLOCK_DRIFT_COMPENSATION) * rounds + seed_sum;

  switch (parent_index) {
      case 0: 
        SchedulerP$PPBListenTimer0$startOneShotAt(SchedulerP$ParentNodes[0]->timestamp, next_beacon_period);
      break;

      case 1: 
        SchedulerP$PPBListenTimer1$startOneShotAt(SchedulerP$ParentNodes[1]->timestamp, next_beacon_period);
      break;

      case 2: 
        SchedulerP$PPBListenTimer2$startOneShotAt(SchedulerP$ParentNodes[2]->timestamp, next_beacon_period);
      break;

      case 3: 
        SchedulerP$PPBListenTimer3$startOneShotAt(SchedulerP$ParentNodes[3]->timestamp, next_beacon_period);
      break;

      default: 
        break;
    }

  if (SchedulerP$ParentNodes[parent_index]->parent_id == SchedulerP$gParentNode.parent_id) {
      memcpy(&SchedulerP$gParentNode, &SchedulerP$ParentNodes[parent_index], sizeof SchedulerP$gParentNode);
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 215
        next_time_slot = CHILD_CONNECTION_PERIOD + SchedulerP$gParentTSlot * TDMA_SLOT_LEN;
#line 215
        __nesc_atomic_end(__nesc_atomic); }
      SchedulerP$TDMASlotTimer$startOneShotAt(SchedulerP$ParentNodes[parent_index]->timestamp, next_time_slot);
    }
}

# 82 "qsort.h"
static 
#line 81
void 
quick_sort(void *a, size_t n, size_t es)
{
  char *pa;
#line 84
  char *pb;
#line 84
  char *pc;
#line 84
  char *pd;
#line 84
  char *pl;
#line 84
  char *pm;
#line 84
  char *pn;
  int d;
#line 85
  int r;
#line 85
  int swap_cnt;
#line 85
  int val;

  if (n == INVALID_VALUE) {

      ;
    }
  else {
#line 90
    if (n == HC) {

        ;
      }
    else 
#line 93
      {
        ;
      }
    }
#line 96
  n = 6;

  loop: 
    swap_cnt = 0;
  if (n < 7) {
      for (pm = (char *)a + es; pm < (char *)a + n * es; pm += es) {
          for (pl = pm; pl > (char *)a && cmp(pl - es, pl) > 0; pl -= es) 
            swapfunc(pl, pl - es, es);
        }
      return;
    }
  pm = (char *)a + n / 2 * es;
  if (n > 7) {
      pl = a;
      pn = (char *)a + (n - 1) * es;
      if (n > 40) {
          d = n / 8 * es;
          pl = med3(pl, pl + d, pl + 2 * d);
          pm = med3(pm - d, pm, pm + d);
          pn = med3(pn - 2 * d, pn - d, pn);
        }
      pm = med3(pl, pm, pn);
    }
  swapfunc(a, pm, es);
  pa = pb = (char *)a + es;

  pc = pd = (char *)a + (n - 1) * es;
  for (; ; ) {
      while (pb <= pc && (r = cmp(pb, a)) <= 0) {
          if (r == 0) {
              swap_cnt = 1;
              swapfunc(pa, pb, es);
              pa += es;
            }
          pb += es;
        }
      while (pb <= pc && (r = cmp(pc, a)) >= 0) {
          if (r == 0) {
              swap_cnt = 1;
              swapfunc(pc, pd, es);
              pd -= es;
            }
          pc -= es;
        }
      if (pb > pc) {
        break;
        }
#line 142
      swapfunc(pb, pc, es);
      swap_cnt = 1;
      pb += es;
      pc -= es;
    }
  if (swap_cnt == 0) {
      for (pm = (char *)a + es; pm < (char *)a + n * es; pm += es) 
        for (pl = pm; pl > (char *)a && cmp(pl - es, pl) > 0; 
        pl -= es) 
          swapfunc(pl, pl - es, es);
      return;
    }

  pn = (char *)a + n * es;
  r = pa - (char *)a < pb - pa ? pa - (char *)a : pb - pa;
  if (r > 0) {
#line 157
    swapfunc(a, pb - r, r);
    }
#line 158
  r = pd - pc < pn - pd - es ? pd - pc : pn - pd - es;
  if (r > 0) {
#line 159
    swapfunc(pb, pn - r, r);
    }
#line 160
  if ((r = pb - pa) > es) {
    quick_sort(a, r / es, es);
    }
#line 162
  if ((r = pd - pc) > es) {

      a = pn - r;
      n = r / es;
      goto loop;
    }
}



static int cmp(const void *x, const void *y)
#line 172
{

  uint8_t xFreqUsage;
#line 174
  uint8_t yFreqUsage;

  dozer_parent_t *nx = (dozer_parent_t *)x;
  dozer_parent_t *ny = (dozer_parent_t *)y;


  xFreqUsage = nx->flag;
  yFreqUsage = ny->flag;



  xFreqUsage = nx->beacon.hopcount;
  yFreqUsage = ny->beacon.hopcount;


  if (xFreqUsage > yFreqUsage) {
#line 189
    return -1;
    }
#line 190
  if (xFreqUsage == yFreqUsage) {
#line 190
    return 0;
    }
#line 191
  if (xFreqUsage < yFreqUsage) {
#line 191
    return 1;
    }
  return 0;
}

#line 64
#line 63
static void 
swapfunc(char *a, char *b, int n)
{
  {
#line 66
    int i = n / sizeof(char );
#line 66
    register char *pi = (char *)a;
#line 66
    register char *pj = (char *)b;

#line 66
    do {
#line 66
        register char t = *pi;

#line 66
        * pi++ = *pj;
#line 66
        * pj++ = t;
      }
    while (
#line 66
    --i > 0);
  }
}




static char *
med3(char *a, char *b, char *c)
{
  return cmp(a, b) < 0 ? 
  cmp(b, c) < 0 ? b : cmp(a, c) < 0 ? c : a : 
  cmp(b, c) > 0 ? b : cmp(a, c) < 0 ? a : c;
}

# 220 "SchedulerP.nc"
static error_t SchedulerP$TDMASchedule$startTimers(void )
{
  uint8_t i;

  for (i = 0; i < MAX_POTENTIAL_PARENTS; i++) {
      SchedulerP$startBeaconListenTimer(i);
    }
  return SUCCESS;
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

# 311 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300IBADCLogicP.nc"
static error_t MDA300IBADCLogicP$ADConvert$read(uint8_t id)
{
  if (id > 13) {
#line 313
    return FAIL;
    }
#line 314
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 314
    {
      MDA300IBADCLogicP$adc_bitmap |= 1 << id;
    }
#line 316
    __nesc_atomic_end(__nesc_atomic); }
  MDA300IBADCLogicP$adc_get_data$postTask();
  return SUCCESS;
}

# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static error_t /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$Resource$request(uint8_t id)
#line 71
{
  /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$ResourceRequested$requested(/*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 73
    {
      if (/*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$state == /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$RES_IDLE) {
          /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$state = /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$RES_GRANTING;
          /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$reqResId = id;
          /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$grantedTask$postTask();
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
        /*HplSensirionSht15C.Arbiter.Arbiter*/SimpleArbiterP$1$Queue$enqueue(id);

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

# 199 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300DigitalLogicP.nc"
static error_t MDA300DigitalLogicP$Dio$read(uint8_t channel)
{
  uint16_t counter;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 203
    counter = MDA300DigitalLogicP$count[channel];
#line 203
    __nesc_atomic_end(__nesc_atomic); }
  if (RESET_ZERO_AFTER_READ & MDA300DigitalLogicP$mode[channel]) {
#line 204
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 204
        MDA300DigitalLogicP$count[channel] = 0;
#line 204
        __nesc_atomic_end(__nesc_atomic); }
    }
#line 205
  MDA300DigitalLogicP$Dio$readDone(channel, counter);
  return SUCCESS;
}

static void MDA300DigitalLogicP$Dio$default$readDone(uint8_t channel, uint16_t data)
{
  return;
}

# 15 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/Dio.nc"
static void MDA300DigitalLogicP$Dio$readDone(uint8_t arg_0x40e3d550, uint16_t data){
#line 15
  switch (arg_0x40e3d550) {
#line 15
    case 0:
#line 15
      SamplerM$Dio0$readDone(data);
#line 15
      break;
#line 15
    case 1:
#line 15
      SamplerM$Dio1$readDone(data);
#line 15
      break;
#line 15
    case 2:
#line 15
      SamplerM$Dio2$readDone(data);
#line 15
      break;
#line 15
    case 3:
#line 15
      SamplerM$Dio3$readDone(data);
#line 15
      break;
#line 15
    case 4:
#line 15
      SamplerM$Dio4$readDone(data);
#line 15
      break;
#line 15
    case 5:
#line 15
      SamplerM$Dio5$readDone(data);
#line 15
      break;
#line 15
    default:
#line 15
      MDA300DigitalLogicP$Dio$default$readDone(arg_0x40e3d550, data);
#line 15
      break;
#line 15
    }
#line 15
}
#line 15
# 131 "TreeP.nc"
static void TreeP$TDMASchedule$radioWakeup(uint8_t type, uint16_t node_id)
#line 131
{
  uint8_t rounds = 1;

  switch (type) 
    {
      case BEACON_LISTEN: 
        TreeP$start_radio();
      TreeP$listen_id = node_id;
      if (node_id != TreeP$gParent_id) {
          rounds = PARENTS_UPDATE_INTERVAL / DEFAULT_BEACON_INTERVAL;
        }
      TreeP$BeaconWaitTimer$startOneShot(2 * rounds * CLOCK_DRIFT_COMPENSATION + 1);
      break;

      case TSLOT_LISTEN: 
        TreeP$start_radio();
      break;

      case TSLOT_LISTEN_STOP: 
        break;

      case TSLOT_DATA_SEND: 
        TreeP$start_radio();
      break;

      case TSLOT_DATA_SEND_STOP: 
        TreeP$stop_radio();
      break;

      default: 
        break;
    }
}

#line 105
static void TreeP$start_radio(void )
#line 105
{
  if (TreeP$radioOn) {
#line 106
      return;
    }
#line 107
  if (TreeP$RadioControl$start() != SUCCESS) {
      TreeP$report_problem();
    }
}

# 262 "DataManagerP.nc"
static void DataManagerP$TDMASchedule$radioWakeup(uint8_t type, uint16_t node_id)
#line 262
{
  switch (type) 
    {
      case TSLOT_DATA_SEND: 
        DataManagerP$RadioOn = TRUE;
      DataManagerP$parent_id = node_id;
      DataManagerP$sendAvailableData$postTask();
      break;

      case TSLOT_DATA_SEND_STOP: 
        DataManagerP$RadioOn = FALSE;
      if (DataManagerP$ackPending) {
          DataManagerP$addToQueue((SensedData *)DataManagerP$DataSend$getPayload(DataManagerP$msg_ptr, sizeof(SensedData )));
          DataManagerP$missedAcks++;
          if (DataManagerP$missedAcks >= MAX_CONSECUTIVE_MISSED_ACKS) {
              DataManagerP$TDMASchedule$clearTableEntry(DataManagerP$parent_id, 1);
              DataManagerP$chooseParent();
              DataManagerP$missedAcks = 0;
            }
        }
      break;

      case TSLOT_LISTEN: 
        DataManagerP$child_id = node_id;
      break;

      case TSLOT_LISTEN_STOP: 
        break;

      default: 
        break;
    }
}

# 102 "SchedulerP.nc"
static error_t SchedulerP$TDMASchedule$clearTableEntry(uint16_t node_id, uint8_t parent)
{
  uint8_t i;

  switch (parent) {

      case 1: 
        if (node_id == INVALID_VALUE) {
            SchedulerP$TDMASchedule$stopTimers();
            for (i = 0; i < MAX_POTENTIAL_PARENTS; i++) {
#line 111
                SchedulerP$ParentNodes[i]->flag = INVALID_VALUE;
              }
#line 112
            return SUCCESS;
          }

      for (i = 0; i < MAX_POTENTIAL_PARENTS; i++) {
          if (SchedulerP$ParentNodes[i]->parent_id == node_id) {
              SchedulerP$ParentNodes[i]->flag = INVALID_VALUE;
              switch (i) {
                  case 0: 
                    SchedulerP$PPBListenTimer0$stop();
                  break;

                  case 1: 
                    SchedulerP$PPBListenTimer1$stop();
                  break;

                  case 2: 
                    SchedulerP$PPBListenTimer2$stop();
                  break;

                  case 3: 
                    SchedulerP$PPBListenTimer3$stop();
                  break;
                }
              return SUCCESS;
            }
        }


      case 0: 
        if (node_id == INVALID_VALUE) {
            for (i = 0; i < MAX_CHILDREN; i++) {
#line 142
                { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 142
                  SchedulerP$ChildNodes[i].child_id = INVALID_VALUE;
#line 142
                  __nesc_atomic_end(__nesc_atomic); }
              }
#line 143
            return SUCCESS;
          }

      for (i = 0; i < MAX_CHILDREN; i++) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 147
            {
              if (SchedulerP$ChildNodes[i].child_id == node_id) {
                  SchedulerP$ChildNodes[i].child_id = INVALID_VALUE;
                  {
                    unsigned char __nesc_temp = 
#line 150
                    SUCCESS;

                    {
#line 150
                      __nesc_atomic_end(__nesc_atomic); 
#line 150
                      return __nesc_temp;
                    }
                  }
                }
            }
#line 154
            __nesc_atomic_end(__nesc_atomic); }
        }
      case INVALID_VALUE: 
        for (i = 0; i < MAX_POTENTIAL_PARENTS; i++) {
#line 157
            SchedulerP$ParentNodes[i]->flag = INVALID_VALUE;
          }
#line 158
      for (i = 0; i < MAX_CHILDREN; i++) {
#line 158
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 158
            SchedulerP$ChildNodes[i].child_id = INVALID_VALUE;
#line 158
            __nesc_atomic_end(__nesc_atomic); }
        }
#line 159
      return SUCCESS;

      default: 
        return FAIL;
    }
}

#line 230
static error_t SchedulerP$TDMASchedule$stopTimers(void )
{
  SchedulerP$PPBListenTimer0$stop();
  SchedulerP$PPBListenTimer1$stop();
  SchedulerP$PPBListenTimer2$stop();
  SchedulerP$PPBListenTimer3$stop();
  SchedulerP$TDMASlotTimer$stop();
  return SUCCESS;
}

# 276 "TreeP.nc"
static error_t TreeP$chooseParent(void )
#line 276
{
  TreeP$TreeConnected = FALSE;
  TreeP$TDMASchedule$getPPB(&TreeP$gPIndex);
  if (TreeP$nbrTable[TreeP$gPIndex].flag != INVALID_VALUE) {
      TreeP$gParent_id = TreeP$nbrTable[TreeP$gPIndex].parent_id;
    }
  else 
#line 281
    {
      TreeP$TDMASchedule$clearTableEntry(INVALID_VALUE, INVALID_VALUE);
      TreeP$start_radio();
      TreeP$NeighbourUpdateStopTimer$startOneShot(NBR_LISTEN_PERIOD);
    }
  return SUCCESS;
}

# 62 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static void TreeP$NeighbourUpdateStopTimer$startOneShot(uint32_t dt){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(6U, dt);
#line 62
}
#line 62
# 239 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$Alarm$startAt(uint32_t nt0, uint32_t ndt)
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

#line 117
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$setInterrupt(void )
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

# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static error_t /*DozerC.BeaconSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 47
{
  /*DozerC.BeaconSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(msg, dest);
  /*DozerC.BeaconSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(msg, 50UL);
  return /*DozerC.BeaconSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$send(msg, len);
}

# 206 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
__attribute((interrupt))   void __vector_17(void )
#line 206
{
  HplAtm1281Timer1P$CompareA$fired();
}

__attribute((interrupt))   void __vector_18(void )
#line 210
{
  HplAtm1281Timer1P$CompareB$fired();
}

__attribute((interrupt))   void __vector_19(void )
#line 214
{
  HplAtm1281Timer1P$CompareC$fired();
}

__attribute((interrupt))   void __vector_16(void )
#line 218
{
  HplAtm1281Timer1P$Capture$captured(HplAtm1281Timer1P$Timer$get());
}

__attribute((interrupt))   void __vector_20(void )
#line 222
{
  HplAtm1281Timer1P$Timer$overflow();
}

# 222 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
__attribute((signal))   void __vector_13(void )
#line 222
{
  HplAtm1281Timer2AsyncP$stabiliseTimer2();


  HplAtm1281Timer2AsyncP$Compare$fired();
}


__attribute((signal))   void __vector_15(void )
#line 230
{
  HplAtm1281Timer2AsyncP$stabiliseTimer2();

  HplAtm1281Timer2AsyncP$Timer$overflow();
}

# 102 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
__attribute((signal))   void __vector_24(void )
#line 102
{
  HplAtm128SpiP$SPI$dataReady(HplAtm128SpiP$SPI$read());
}

# 127 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static uint8_t Atm128SpiP$SpiByte$write(uint8_t tx)
#line 127
{
  Atm128SpiP$Spi$enableSpi(TRUE);
  Atm128SpiP$McuPowerState$update();
  Atm128SpiP$Spi$write(tx);
  while (!(* (volatile uint8_t *)(0x2D + 0x20) & 0x80)) ;
  return Atm128SpiP$Spi$read();
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

# 182 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/i2c/HplAtm128I2CBusP.nc"
__attribute((signal))   void __vector_39(void )
#line 182
{
  HplAtm128I2CBusP$I2C$commandComplete();
}

# 354 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300IBADCLogicP.nc"
static void MDA300IBADCLogicP$I2CPacket$readDone(error_t error, uint16_t addr, uint8_t length, uint8_t *data)
{
  MDA300IBADCLogicP$Leds$led1Toggle();
  if (length != 3) 
    {
      /* atomic removed: atomic calls only */
#line 359
      MDA300IBADCLogicP$state = MDA300IBADCLogicP$IDLE;
      MDA300IBADCLogicP$Amplifier$clr();
      /* atomic removed: atomic calls only */
#line 361
      {
#line 361
        MDA300IBADCLogicP$adc_bitmap &= ~(1 << MDA300IBADCLogicP$chan);
      }
#line 362
      MDA300IBADCLogicP$adc_get_data$postTask();
      MDA300IBADCLogicP$ADConvert$readDone(MDA300IBADCLogicP$chan, 0xffff);
      MDA300IBADCLogicP$resetExcitation();
      return;
    }

  if (MDA300IBADCLogicP$state == MDA300IBADCLogicP$GET_SAMPLE) 
    {
      MDA300IBADCLogicP$value += (data[2] & 0xff) + ((data[1] << 8) & 0x0f00);
      MDA300IBADCLogicP$conversionNumber--;


      if (MDA300IBADCLogicP$conversionNumber == 0) {
          /* atomic removed: atomic calls only */
#line 375
          MDA300IBADCLogicP$state = MDA300IBADCLogicP$IDLE;
          if (MDA300IBADCLogicP$param[MDA300IBADCLogicP$chan] & AVERAGE_SIXTEEN) {
            MDA300IBADCLogicP$value = ((MDA300IBADCLogicP$value + 8) >> 4) & 0x0fff;
            }
          else {
#line 378
            if (MDA300IBADCLogicP$param[MDA300IBADCLogicP$chan] & AVERAGE_EIGHT) {
              MDA300IBADCLogicP$value = ((MDA300IBADCLogicP$value + 4) >> 3) & 0x0fff;
              }
            else {
#line 380
              if (MDA300IBADCLogicP$param[MDA300IBADCLogicP$chan] & AVERAGE_FOUR) {
                MDA300IBADCLogicP$value = ((MDA300IBADCLogicP$value + 2) >> 2) & 0x0fff;
                }
              else 
#line 382
                {
#line 382
                  ;
                }
              }
            }
#line 384
          MDA300IBADCLogicP$Amplifier$clr();
          /* atomic removed: atomic calls only */
#line 385
          {
#line 385
            MDA300IBADCLogicP$adc_bitmap &= ~(1 << MDA300IBADCLogicP$chan);
          }
#line 386
          MDA300IBADCLogicP$adc_get_data$postTask();
          MDA300IBADCLogicP$ADConvert$readDone(MDA300IBADCLogicP$chan, MDA300IBADCLogicP$value);
          MDA300IBADCLogicP$resetExcitation();
        }
      else {
          /* atomic removed: atomic calls only */
#line 391
          MDA300IBADCLogicP$state = MDA300IBADCLogicP$CONTINUE_SAMPLE;
          MDA300IBADCLogicP$convert();
        }
    }
  return;
}

#line 424
static void MDA300IBADCLogicP$ADConvert$default$readDone(uint8_t port, uint16_t data)
{
  return;
}

# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/ADConvert.nc"
static void MDA300IBADCLogicP$ADConvert$readDone(uint8_t arg_0x40f88248, uint16_t data){
#line 24
  switch (arg_0x40f88248) {
#line 24
    case 0:
#line 24
      SamplerM$ADC0$readDone(data);
#line 24
      break;
#line 24
    case 1:
#line 24
      SamplerM$ADC1$readDone(data);
#line 24
      break;
#line 24
    case 2:
#line 24
      SamplerM$ADC2$readDone(data);
#line 24
      break;
#line 24
    case 3:
#line 24
      SamplerM$ADC3$readDone(data);
#line 24
      break;
#line 24
    case 4:
#line 24
      SamplerM$ADC4$readDone(data);
#line 24
      break;
#line 24
    case 5:
#line 24
      SamplerM$ADC5$readDone(data);
#line 24
      break;
#line 24
    case 6:
#line 24
      SamplerM$ADC6$readDone(data);
#line 24
      break;
#line 24
    case 7:
#line 24
      SamplerM$ADC7$readDone(data);
#line 24
      break;
#line 24
    case 8:
#line 24
      SamplerM$ADC8$readDone(data);
#line 24
      break;
#line 24
    case 9:
#line 24
      SamplerM$ADC9$readDone(data);
#line 24
      break;
#line 24
    case 10:
#line 24
      SamplerM$ADC10$readDone(data);
#line 24
      break;
#line 24
    case 11:
#line 24
      SamplerM$ADC11$readDone(data);
#line 24
      break;
#line 24
    case 12:
#line 24
      SamplerM$ADC12$readDone(data);
#line 24
      break;
#line 24
    case 13:
#line 24
      SamplerM$ADC13$readDone(data);
#line 24
      break;
#line 24
    default:
#line 24
      MDA300IBADCLogicP$ADConvert$default$readDone(arg_0x40f88248, data);
#line 24
      break;
#line 24
    }
#line 24
}
#line 24
# 244 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300DigitalLogicP.nc"
static void MDA300DigitalLogicP$I2CPacket$readDone(error_t error, uint16_t addr, uint8_t length, uint8_t *data)
{
  uint8_t ChangedState;
  int i;

  MDA300DigitalLogicP$i2c_data = *data;
  if (length != 1) 
    {
      /* atomic removed: atomic calls only */
#line 252
      MDA300DigitalLogicP$state = MDA300DigitalLogicP$IDLE;
      MDA300DigitalLogicP$Interrupt$enable();
      return;
    }

  if (MDA300DigitalLogicP$state == MDA300DigitalLogicP$INIT) 
    {
      /* atomic removed: atomic calls only */
#line 259
      {
        MDA300DigitalLogicP$io_value = MDA300DigitalLogicP$i2c_data;
        MDA300DigitalLogicP$state = MDA300DigitalLogicP$IDLE;
      }
      MDA300DigitalLogicP$Interrupt$enable();
    }

  if (MDA300DigitalLogicP$state == MDA300DigitalLogicP$GET_DATA) {
      ChangedState = (MDA300DigitalLogicP$io_value & ~MDA300DigitalLogicP$i2c_data) | (~MDA300DigitalLogicP$io_value & MDA300DigitalLogicP$i2c_data);
      for (i = 0; i < 8; i++) {
          if (!(MDA300DigitalLogicP$mode[i] & DIG_OUTPUT)) {
              if (ChangedState & (1 << i)) {
                  if (MDA300DigitalLogicP$mode[i] & RISING_EDGE) 
                    {
                      if ((MDA300DigitalLogicP$io_value & (1 << i)) == 0 && (MDA300DigitalLogicP$i2c_data & (1 << i)) != 0) {
                          if (EVENT & MDA300DigitalLogicP$mode[i]) {
#line 274
                              MDA300DigitalLogicP$Dio$readDone(i, MDA300DigitalLogicP$count[i]);
                            }
                          /* atomic removed: atomic calls only */
#line 276
                          MDA300DigitalLogicP$count[i]++;
                        }
                    }

                  if (MDA300DigitalLogicP$mode[i] & FALLING_EDGE) 
                    {
                      if ((MDA300DigitalLogicP$io_value & (1 << i)) != 0 && (MDA300DigitalLogicP$i2c_data & (1 << i)) == 0) {
                          if (EVENT & MDA300DigitalLogicP$mode[i]) {
#line 283
                              MDA300DigitalLogicP$Dio$readDone(i, MDA300DigitalLogicP$count[i]);
                            }
                          /* atomic removed: atomic calls only */
#line 285
                          MDA300DigitalLogicP$count[i]++;
                        }
                    }
                }
            }
        }
      /* atomic removed: atomic calls only */
#line 291
      MDA300DigitalLogicP$io_value = MDA300DigitalLogicP$i2c_data;
      MDA300DigitalLogicP$Interrupt$enable();
      /* atomic removed: atomic calls only */
#line 293
      MDA300DigitalLogicP$state = MDA300DigitalLogicP$IDLE;
    }
  return;
}

# 398 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300IBADCLogicP.nc"
static void MDA300IBADCLogicP$I2CPacket$writeDone(error_t error, uint16_t addr, uint8_t length, uint8_t *data)
{
  if (error) 
    {
      /* atomic removed: atomic calls only */
#line 402
      MDA300IBADCLogicP$state = MDA300IBADCLogicP$IDLE;
      MDA300IBADCLogicP$Amplifier$clr();
      /* atomic removed: atomic calls only */
#line 404
      {
#line 404
        MDA300IBADCLogicP$adc_bitmap &= ~(1 << MDA300IBADCLogicP$chan);
      }
#line 405
      MDA300IBADCLogicP$adc_get_data$postTask();
      MDA300IBADCLogicP$ADConvert$readDone(MDA300IBADCLogicP$chan, 0xffff);
      MDA300IBADCLogicP$resetExcitation();
    }

  if (MDA300IBADCLogicP$state == MDA300IBADCLogicP$PICK_CHANNEL) 
    {
      /* atomic removed: atomic calls only */
#line 412
      MDA300IBADCLogicP$state = MDA300IBADCLogicP$GET_SAMPLE;
      if (MDA300IBADCLogicP$I2CPacket$read(0x03, TOS_IBADC_I2C_ADDR, 3, MDA300IBADCLogicP$buff) == FAIL) 
        {
          /* atomic removed: atomic calls only */
          MDA300IBADCLogicP$state = MDA300IBADCLogicP$IDLE;
          MDA300IBADCLogicP$adc_get_data$postTask();
          MDA300IBADCLogicP$resetExcitation();
        }
    }
}

# 90 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300IBADCSwitchP.nc"
static void MDA300IBADCSwitchP$I2CPacket$writeDone(error_t error, uint16_t addr, uint8_t length, uint8_t *data)
{
  if (MDA300IBADCSwitchP$state == MDA300IBADCSwitchP$SET_SWITCH) 
    {
      /* atomic removed: atomic calls only */
#line 94
      MDA300IBADCSwitchP$state = MDA300IBADCSwitchP$IDLE;
      MDA300IBADCSwitchP$Switch$setDone(error);
    }
  else {
#line 97
    if (MDA300IBADCSwitchP$state == MDA300IBADCSwitchP$SET_SWITCH_ALL) {
        /* atomic removed: atomic calls only */
#line 98
        MDA300IBADCSwitchP$state = MDA300IBADCSwitchP$IDLE;
        MDA300IBADCSwitchP$Switch$setAllDone(error);
      }
    }
#line 101
  MDA300IBADCSwitchP$I2CResource$release();
  return;
}

# 229 "/opt/CVSTinyOS/tinyos-2.x/tos/sensorboards/mda300/MDA300DigitalLogicP.nc"
static void MDA300DigitalLogicP$I2CPacket$writeDone(error_t error, uint16_t addr, uint8_t length, uint8_t *data)
{
  if (!error) {
      /* atomic removed: atomic calls only */
#line 232
      {
        if ((MDA300DigitalLogicP$state == MDA300DigitalLogicP$SET_OUTPUT_HIGH || MDA300DigitalLogicP$state == MDA300DigitalLogicP$SET_OUTPUT_LOW) || MDA300DigitalLogicP$state == MDA300DigitalLogicP$SET_OUTPUT_TOGGLE) {

            MDA300DigitalLogicP$state = MDA300DigitalLogicP$IDLE;
          }
      }
    }


  return;
}

# 194 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/HplAtm128UartP.nc"
__attribute((signal))   void __vector_25(void )
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

# 200 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/HplAtm128UartP.nc"
__attribute((interrupt))   void __vector_27(void )
#line 200
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

# 288 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/HplAtm128UartP.nc"
__attribute((signal))   void __vector_36(void )
#line 288
{
  if ((* (volatile uint8_t *)0xC8 & (1 << 7)) != 0) {
    HplAtm128UartP$HplUart1$rxDone(* (volatile uint8_t *)0XCE);
    }
}

#line 293
__attribute((interrupt))   void __vector_38(void )
#line 293
{
  HplAtm128UartP$HplUart1$txDone();
}

# 206 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer3P.nc"
__attribute((interrupt))   void __vector_32(void )
#line 206
{
  HplAtm1281Timer3P$CompareA$fired();
}

__attribute((interrupt))   void __vector_33(void )
#line 210
{
  HplAtm1281Timer3P$CompareB$fired();
}

__attribute((interrupt))   void __vector_34(void )
#line 214
{
  HplAtm1281Timer3P$CompareC$fired();
}

__attribute((interrupt))   void __vector_31(void )
#line 218
{
  HplAtm1281Timer3P$Capture$captured(HplAtm1281Timer3P$Timer$get());
}

__attribute((interrupt))   void __vector_35(void )
#line 222
{
  HplAtm1281Timer3P$Timer$overflow();
}

