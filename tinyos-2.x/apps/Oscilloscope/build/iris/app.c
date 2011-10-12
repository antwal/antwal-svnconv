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
# 246 "/usr/lib/ncc/nesc_nx.h"
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
# 16 "Oscilloscope.h"
enum __nesc_unnamed4310 {


  NREADINGS = 10, 


  DEFAULT_INTERVAL = 256, 

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

enum __nesc_unnamed4311 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4312 {
  TOS_AM_GROUP = 0x00, 
  TOS_AM_ADDRESS = 1
};
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4313 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4314 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4315 {
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
enum __nesc_unnamed4316 {
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
enum __nesc_unnamed4317 {





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
enum __nesc_unnamed4318 {
  ATM128_SPI_CLK_DIVIDE_4 = 0, 
  ATM128_SPI_CLK_DIVIDE_16 = 1, 
  ATM128_SPI_CLK_DIVIDE_64 = 2, 
  ATM128_SPI_CLK_DIVIDE_128 = 3
};
#line 49
#line 40
typedef struct __nesc_unnamed4319 {
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
typedef union __nesc_unnamed4320 {
  uint8_t flat;
  Atm128SPIControl_s bits;
} Atm128SPIControl_t;

typedef Atm128SPIControl_t Atm128_SPCR_t;








#line 58
typedef struct __nesc_unnamed4321 {
  uint8_t spif : 1;
  uint8_t wcol : 1;
  uint8_t rsvd : 5;
  uint8_t spi2x : 1;
} 
Atm128SPIStatus_s;



#line 65
typedef union __nesc_unnamed4322 {
  uint8_t flat;
  Atm128SPIStatus_s bits;
} Atm128SPIStatus_t;

typedef Atm128SPIStatus_t Atm128_SPSR_t;

typedef uint8_t Atm128_SPDR_t;
# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
typedef uint16_t OscilloscopeC$Read$val_t;
typedef TMilli OscilloscopeC$Timer$precision_tag;
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
enum HilTimerMilliC$__nesc_unnamed4323 {
  HilTimerMilliC$TIMER_COUNT = 2U
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
enum /*HplRF230C.AlarmC*/AlarmOne16C$0$__nesc_unnamed4324 {
  AlarmOne16C$0$COMPARE_ID = 0U
};
typedef TMicro BusyWaitMicroC$BusyWait$precision_tag;
typedef uint16_t BusyWaitMicroC$BusyWait$size_type;
typedef uint16_t AdcP$Read$val_t;
typedef uint16_t AdcP$ReadNow$val_t;
typedef uint16_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$width_t;
typedef /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$width_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$val_t;
typedef /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$width_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$val_t;
enum /*OscilloscopeAppC.Sensor.DemoChannel.AdcReadClientC*/AdcReadClientC$0$__nesc_unnamed4325 {
  AdcReadClientC$0$ID = 0U, AdcReadClientC$0$HAL_ID = 0U
};
enum AMQueueP$__nesc_unnamed4326 {
  AMQueueP$NUM_CLIENTS = 1U
};
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Boot.nc"
static void OscilloscopeC$Boot$booted(void );
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static void OscilloscopeC$AMSend$sendDone(
#line 92
message_t * msg, 






error_t error);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void OscilloscopeC$RadioControl$startDone(error_t error);
#line 117
static void OscilloscopeC$RadioControl$stopDone(error_t error);
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Read.nc"
static void OscilloscopeC$Read$readDone(error_t result, OscilloscopeC$Read$val_t val);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



OscilloscopeC$Receive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static void OscilloscopeC$Timer$fired(void );
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

static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$toggle(void );



static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set(void );



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


static void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$makeInput(void );
#line 30
static void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$clr(void );


static void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$makeInput(void );
#line 30
static void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$clr(void );
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t MeasureClockC$Init$init(void );
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint8_t MeasureClockC$Atm128Calibrate$adcPrescaler(void );
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
# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
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
uint8_t arg_0x4078aa90);
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x4078aa90, 
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t dt);
#line 67
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(
# 37 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x4078aa90);
# 71 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$1$Counter$overflow(void );
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static void RadioAlarmP$RadioAlarm$default$fired(
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
uint8_t arg_0x407d1a70);
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static void RadioAlarmP$RadioAlarm$wait(
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
uint8_t arg_0x407d1a70, 
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
uint16_t timeout);




static void RadioAlarmP$RadioAlarm$cancel(
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
uint8_t arg_0x407d1a70);
# 33 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static bool RadioAlarmP$RadioAlarm$isFree(
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
uint8_t arg_0x407d1a70);
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static uint16_t RadioAlarmP$RadioAlarm$getNow(
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
uint8_t arg_0x407d1a70);
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
am_id_t arg_0x407d95c0, 
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
am_id_t arg_0x407d95c0, 
# 121 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 


uint8_t len);
#line 112
static uint8_t ActiveMessageLayerC$AMSend$maxPayloadLength(
# 28 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
am_id_t arg_0x407d95c0);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



ActiveMessageLayerC$Snoop$default$receive(
# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
am_id_t arg_0x407ea6a8, 
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
am_id_t arg_0x407ea010, 
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
#line 101
static uint8_t IEEE154NetworkLayerP$Send$maxPayloadLength(void );
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



IEEE154NetworkLayerP$NonTinyosReceive$default$receive(
# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154NetworkLayerP.nc"
uint8_t arg_0x407ff480, 
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t MessageBufferLayerP$SplitControl$start(void );
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
#line 101
static uint8_t MessageBufferLayerP$Send$maxPayloadLength(void );
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
#line 101
static uint8_t UniqueLayerP$Send$maxPayloadLength(void );
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Neighborhood.nc"
static void UniqueLayerP$Neighborhood$evicted(uint8_t index);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
static error_t UniqueLayerP$Init$init(void );
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodFlag.nc"
static void NeighborhoodP$NeighborhoodFlag$clearAll(
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodP.nc"
uint8_t arg_0x4088c770);
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodFlag.nc"
static bool NeighborhoodP$NeighborhoodFlag$get(
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodP.nc"
uint8_t arg_0x4088c770, 
# 35 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodFlag.nc"
uint8_t index);




static void NeighborhoodP$NeighborhoodFlag$set(
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/NeighborhoodP.nc"
uint8_t arg_0x4088c770, 
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
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioState.nc"
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
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioState.nc"
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
uint8_t arg_0x409e8e70);
# 34 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SpiByte.nc"
static uint8_t Atm128SpiP$SpiByte$write(uint8_t tx);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static void Atm128SpiP$Spi$dataReady(uint8_t data);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Atm128SpiP$Resource$release(
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x409c8010);
# 87 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Atm128SpiP$Resource$immediateRequest(
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x409c8010);
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Atm128SpiP$Resource$request(
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x409c8010);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static void Atm128SpiP$Resource$default$granted(
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x409c8010);
# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static bool Atm128SpiP$Resource$isOwner(
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x409c8010);
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
uint8_t arg_0x40a5ed38);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$immediateRequested(
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40a5ed38);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$unconfigure(
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40a5d9b8);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$configure(
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40a5d9b8);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$release(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40a5e310);
# 87 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$immediateRequest(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40a5e310);
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$request(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40a5e310);
# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$isOwner(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40a5e310);
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
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Leds.nc"
static void LedsP$Leds$led0Toggle(void );
#line 72
static void LedsP$Leds$led1Toggle(void );
#line 89
static void LedsP$Leds$led2Toggle(void );
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
uint8_t arg_0x40b69a90);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40b68e40);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40b68e40);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$release(void );
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$release(
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40b69068);
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$request(
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40b69068);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$default$granted(
# 54 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40b69068);
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
uint8_t arg_0x40ba7880);
# 66 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ReadNow.nc"
static void AdcP$ReadNow$default$readDone(
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x40ba3888, 
# 66 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ReadNow.nc"
error_t result, AdcP$ReadNow$val_t val);
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP$Atm128AdcConfig$default$getRefVoltage(
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x40ba2dc0);
# 25 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP$Atm128AdcConfig$default$getChannel(
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x40ba2dc0);
# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP$Atm128AdcConfig$default$getPrescaler(
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x40ba2dc0);
# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static void AdcP$Atm128AdcSingle$dataReady(uint16_t data, bool precise);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void AdcP$acquiredData$runTask(void );
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Read.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$read(
# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x40bb4a28);
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Read.nc"
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$default$readDone(
# 24 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x40bb4a28, 
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Read.nc"
error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$val_t val);
#line 63
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$readDone(
# 26 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x40bb3ac8, 
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Read.nc"
error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$val_t val);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$default$release(
# 27 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x40bb2990);
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$default$request(
# 27 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x40bb2990);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$granted(
# 27 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x40bb2990);
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t VoltageP$Atm128AdcConfig$getRefVoltage(void );
#line 25
static uint8_t VoltageP$Atm128AdcConfig$getChannel(void );
#line 39
static uint8_t VoltageP$Atm128AdcConfig$getPrescaler(void );
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

/*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$getPayload(
#line 121
message_t * msg, 


uint8_t len);
#line 112
static uint8_t /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$maxPayloadLength(void );
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static void /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(
#line 85
message_t * msg, 



error_t error);
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40bdcc40, 
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40bdc258, 
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$getPayload(
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40bdc258, 
# 111 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 


uint8_t len);
#line 101
static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$maxPayloadLength(
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40bdc258);
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40bdc258, 
# 85 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void );
#line 64
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask(void );
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t OscilloscopeC$AMSend$send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

OscilloscopeC$AMSend$getPayload(
#line 121
message_t * msg, 


uint8_t len);
#line 112
static uint8_t OscilloscopeC$AMSend$maxPayloadLength(void );
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t OscilloscopeC$RadioControl$start(void );
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Read.nc"
static error_t OscilloscopeC$Read$read(void );
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Leds.nc"
static void OscilloscopeC$Leds$led0Toggle(void );
#line 72
static void OscilloscopeC$Leds$led1Toggle(void );
#line 89
static void OscilloscopeC$Leds$led2Toggle(void );
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static void OscilloscopeC$Timer$startPeriodic(uint32_t dt);
# 33 "OscilloscopeC.nc"
message_t OscilloscopeC$sendBuf;
bool OscilloscopeC$sendBusy;


oscilloscope_t OscilloscopeC$local;

uint8_t OscilloscopeC$reading;






bool OscilloscopeC$suppressCountChange;


static inline void OscilloscopeC$report_problem(void );
static inline void OscilloscopeC$report_sent(void );
static inline void OscilloscopeC$report_received(void );

static inline void OscilloscopeC$Boot$booted(void );






static inline void OscilloscopeC$startTimer(void );




static inline void OscilloscopeC$RadioControl$startDone(error_t error);



static inline void OscilloscopeC$RadioControl$stopDone(error_t error);


static inline message_t *OscilloscopeC$Receive$receive(message_t *msg, void *payload, uint8_t len);
#line 99
static inline void OscilloscopeC$Timer$fired(void );
#line 124
static inline void OscilloscopeC$AMSend$sendDone(message_t *msg, error_t error);








static inline void OscilloscopeC$Read$readDone(error_t result, uint16_t data);
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

static inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$toggle(void );



static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set(void );

static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$toggle(void );



static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set(void );

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
#line 47
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$clr(void );


static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$makeInput(void );
#line 47
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$clr(void );


static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$makeInput(void );
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/MeasureClockC.nc"
enum MeasureClockC$__nesc_unnamed4327 {


  MeasureClockC$MAGIC = 488 / (16 / PLATFORM_MHZ)
};

uint16_t MeasureClockC$cycles;

static inline error_t MeasureClockC$Init$init(void );
#line 126
static inline uint8_t MeasureClockC$Atm128Calibrate$adcPrescaler(void );
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
enum SchedulerBasicP$__nesc_unnamed4328 {

  SchedulerBasicP$NUM_TASKS = 13U, 
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
enum RF230ActiveMessageP$__nesc_unnamed4329 {

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
enum RF230PacketP$__nesc_unnamed4330 {

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
enum IEEE154PacketP$__nesc_unnamed4331 {

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

enum /*LocalTimeMicroC.TransformCounterC*/TransformCounterC$0$__nesc_unnamed4332 {

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



enum /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP$0$__nesc_unnamed4333 {
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
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$__nesc_unnamed4334 {
#line 63
  AlarmToTimerC$0$fired = 0U
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
uint8_t arg_0x4078aa90);
#line 60
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4335 {
#line 60
  VirtualizeTimerC$0$updateFromTimer = 1U
};
#line 60
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer];
#line 42
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4336 {

  VirtualizeTimerC$0$NUM_TIMERS = 2, 
  VirtualizeTimerC$0$END_OF_LIST = 255
};








#line 48
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4337 {

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









static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(uint8_t num);
#line 193
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num);
# 47 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$1$Counter$overflow(void );
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static void RadioAlarmP$RadioAlarm$fired(
# 31 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
uint8_t arg_0x407d1a70);
# 98 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Alarm.nc"
static RadioAlarmP$Alarm$size_type RadioAlarmP$Alarm$getNow(void );
#line 55
static void RadioAlarmP$Alarm$start(RadioAlarmP$Alarm$size_type dt);






static void RadioAlarmP$Alarm$stop(void );
# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
static void RadioAlarmP$Tasklet$schedule(void );
# 43 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
uint8_t RadioAlarmP$state;
enum RadioAlarmP$__nesc_unnamed4338 {

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
#line 101
static uint8_t ActiveMessageLayerC$SubSend$maxPayloadLength(void );
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static void ActiveMessageLayerC$AMSend$sendDone(
# 28 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
am_id_t arg_0x407d95c0, 
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



ActiveMessageLayerC$Snoop$receive(
# 30 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
am_id_t arg_0x407ea6a8, 
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
am_id_t arg_0x407ea010, 
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
#line 75
static __inline uint8_t ActiveMessageLayerC$AMSend$maxPayloadLength(am_id_t id);




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
#line 101
static uint8_t IEEE154NetworkLayerP$SubSend$maxPayloadLength(void );
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
uint8_t arg_0x407ff480, 
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










static inline uint8_t IEEE154NetworkLayerP$Send$maxPayloadLength(void );




static inline void *IEEE154NetworkLayerP$Send$getPayload(message_t *msg, uint8_t len);




static inline void IEEE154NetworkLayerP$SubSend$sendDone(message_t *msg, error_t error);




static inline message_t *IEEE154NetworkLayerP$SubReceive$receive(message_t *msg, void *payload, uint8_t len);








static inline message_t *IEEE154NetworkLayerP$NonTinyosReceive$default$receive(uint8_t network, message_t *msg, void *payload, uint8_t len);
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void MessageBufferLayerP$SplitControl$startDone(error_t error);
#line 117
static void MessageBufferLayerP$SplitControl$stopDone(error_t error);
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RadioState.nc"
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
enum MessageBufferLayerP$__nesc_unnamed4339 {
#line 101
  MessageBufferLayerP$stateDoneTask = 2U
};
#line 101
typedef int MessageBufferLayerP$__nesc_sillytask_stateDoneTask[MessageBufferLayerP$stateDoneTask];
#line 139
enum MessageBufferLayerP$__nesc_unnamed4340 {
#line 139
  MessageBufferLayerP$sendTask = 3U
};
#line 139
typedef int MessageBufferLayerP$__nesc_sillytask_sendTask[MessageBufferLayerP$sendTask];
#line 267
enum MessageBufferLayerP$__nesc_unnamed4341 {
#line 267
  MessageBufferLayerP$deliverTask = 4U
};
#line 267
typedef int MessageBufferLayerP$__nesc_sillytask_deliverTask[MessageBufferLayerP$deliverTask];
#line 52
uint8_t MessageBufferLayerP$state;
enum MessageBufferLayerP$__nesc_unnamed4342 {

  MessageBufferLayerP$STATE_READY = 0, 
  MessageBufferLayerP$STATE_TX_PENDING = 1, 
  MessageBufferLayerP$STATE_TX_SEND = 2, 
  MessageBufferLayerP$STATE_TX_DONE = 3, 
  MessageBufferLayerP$STATE_TURN_ON = 4, 
  MessageBufferLayerP$STATE_TURN_OFF = 5
};

static inline error_t MessageBufferLayerP$SplitControl$start(void );
#line 101
static inline void MessageBufferLayerP$stateDoneTask$runTask(void );
#line 117
static inline void MessageBufferLayerP$RadioState$done(void );
#line 132
message_t *MessageBufferLayerP$txMsg;
error_t MessageBufferLayerP$txError;
uint8_t MessageBufferLayerP$retries;


enum MessageBufferLayerP$__nesc_unnamed4343 {
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
#line 224
static __inline uint8_t MessageBufferLayerP$Send$maxPayloadLength(void );




static __inline void *MessageBufferLayerP$Send$getPayload(message_t *msg, uint8_t len);






enum MessageBufferLayerP$__nesc_unnamed4344 {

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
#line 101
static uint8_t UniqueLayerP$SubSend$maxPayloadLength(void );
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




static inline uint8_t UniqueLayerP$Send$maxPayloadLength(void );




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
enum TrafficMonitorLayerP$__nesc_unnamed4345 {
#line 229
  TrafficMonitorLayerP$startStopTimer = 5U
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

enum TrafficMonitorLayerP$__nesc_unnamed4346 {


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

enum TrafficMonitorLayerP$__nesc_unnamed4347 {

  TrafficMonitorLayerP$RADIO_CMD_NONE = 0, 
  TrafficMonitorLayerP$RADIO_CMD_TURNON = 1, 
  TrafficMonitorLayerP$RADIO_CMD_TURNOFF = 2
};
uint8_t TrafficMonitorLayerP$radioCmd;
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
enum RandomCollisionLayerP$__nesc_unnamed4348 {
#line 67
  RandomCollisionLayerP$calcNextRandom = 6U
};
#line 67
typedef int RandomCollisionLayerP$__nesc_sillytask_calcNextRandom[RandomCollisionLayerP$calcNextRandom];
#line 46
uint8_t RandomCollisionLayerP$state;
enum RandomCollisionLayerP$__nesc_unnamed4349 {

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
#line 58
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
enum SoftwareAckLayerP$__nesc_unnamed4350 {

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
enum RF230LayerP$__nesc_unnamed4351 {

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
enum RF230LayerP$__nesc_unnamed4352 {

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
enum RF230LayerP$__nesc_unnamed4353 {

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
uint8_t arg_0x409e8e70);
# 87 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Atm128SpiP$ResourceArbiter$immediateRequest(
# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x409e8e70);
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Atm128SpiP$ResourceArbiter$request(
# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x409e8e70);
# 118 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static bool Atm128SpiP$ResourceArbiter$isOwner(
# 84 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x409e8e70);
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
uint8_t arg_0x409c8010);
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static void Atm128SpiP$McuPowerState$update(void );
# 80 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
static bool Atm128SpiP$ArbiterInfo$inUse(void );
# 207 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
enum Atm128SpiP$__nesc_unnamed4354 {
#line 207
  Atm128SpiP$zeroTask = 7U
};
#line 207
typedef int Atm128SpiP$__nesc_sillytask_zeroTask[Atm128SpiP$zeroTask];
#line 90
uint16_t Atm128SpiP$len;
uint8_t * Atm128SpiP$txBuffer;
uint8_t * Atm128SpiP$rxBuffer;
uint16_t Atm128SpiP$pos;

enum Atm128SpiP$__nesc_unnamed4355 {
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
enum /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$__nesc_unnamed4356 {
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
uint8_t arg_0x40a5ed38);
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$immediateRequested(
# 52 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40a5ed38);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$unconfigure(
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40a5d9b8);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$configure(
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40a5d9b8);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$enqueue(resource_client_id_t id);
#line 43
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$isEmpty(void );
#line 60
static resource_client_id_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$dequeue(void );
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$granted(
# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40a5e310);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$postTask(void );
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$__nesc_unnamed4357 {
#line 69
  SimpleArbiterP$0$grantedTask = 8U
};
#line 69
typedef int /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$__nesc_sillytask_grantedTask[/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask];
#line 62
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$__nesc_unnamed4358 {
#line 62
  SimpleArbiterP$0$RES_IDLE = 0, SimpleArbiterP$0$RES_GRANTING = 1, SimpleArbiterP$0$RES_BUSY = 2
};
#line 63
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$__nesc_unnamed4359 {
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

static void LedsP$Led1$toggle(void );



static void LedsP$Led1$makeOutput(void );
#line 29
static void LedsP$Led1$set(void );

static void LedsP$Led2$toggle(void );



static void LedsP$Led2$makeOutput(void );
#line 29
static void LedsP$Led2$set(void );
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/LedsP.nc"
static inline error_t LedsP$Init$init(void );
#line 73
static inline void LedsP$Leds$led0Toggle(void );
#line 88
static inline void LedsP$Leds$led1Toggle(void );
#line 103
static inline void LedsP$Leds$led2Toggle(void );
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
# 104 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/adc/Atm128AdcP.nc"
#line 100
struct Atm128AdcP$__nesc_unnamed4360 {
  bool multiple : 1;
  bool precise : 1;
  uint8_t channel : 5;
} Atm128AdcP$f;
#line 104
#line 100
struct Atm128AdcP$__nesc_unnamed4360 



Atm128AdcP$nextF;

static inline error_t Atm128AdcP$Init$init(void );
#line 126
static inline error_t Atm128AdcP$AsyncStdControl$start(void );




static inline error_t Atm128AdcP$AsyncStdControl$stop(void );









static __inline bool Atm128AdcP$isPrecise(Atm128Admux_t admux, uint8_t channel, uint8_t refVoltage);




static inline void Atm128AdcP$HplAtm128Adc$dataReady(uint16_t data);
#line 206
static inline void Atm128AdcP$getData(uint8_t channel, uint8_t refVoltage, bool leftJustify, uint8_t prescaler);
#line 230
static inline bool Atm128AdcP$Atm128AdcSingle$getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler);
#line 264
static inline bool Atm128AdcP$Atm128AdcMultiple$default$dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage);
# 147 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/HplAtm128Adc.nc"
static void HplAtm128AdcP$HplAtm128Adc$dataReady(uint16_t data);
# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static void HplAtm128AdcP$McuPowerState$update(void );
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/adc/HplAtm128AdcP.nc"
static inline Atm128Admux_t HplAtm128AdcP$HplAtm128Adc$getAdmux(void );


static inline Atm128Adcsra_t HplAtm128AdcP$HplAtm128Adc$getAdcsra(void );


static inline uint16_t HplAtm128AdcP$HplAtm128Adc$getValue(void );



static inline uint8_t HplAtm128AdcP$Admux2int(Atm128Admux_t x);
static inline uint8_t HplAtm128AdcP$Adcsra2int(Atm128Adcsra_t x);


static inline void HplAtm128AdcP$HplAtm128Adc$setAdmux(Atm128Admux_t x);


static inline void HplAtm128AdcP$HplAtm128Adc$setAdcsra(Atm128Adcsra_t x);
#line 94
static inline void HplAtm128AdcP$HplAtm128Adc$enableAdc(void );



static inline void HplAtm128AdcP$HplAtm128Adc$disableAdc(void );




static inline void HplAtm128AdcP$HplAtm128Adc$disableInterruption(void );
#line 127
void __vector_29(void ) __attribute((signal))   ;








static inline bool HplAtm128AdcP$HplAtm128Adc$cancel(void );
# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/system/RoundRobinResourceQueueC.nc"
enum /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$__nesc_unnamed4361 {
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
uint8_t arg_0x40b69a90);
# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$unconfigure(
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40b68e40);
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$configure(
# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x40b68e40);
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
uint8_t arg_0x40b69068);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$grantedTask$postTask(void );
# 75 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbiterP.nc"
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$__nesc_unnamed4362 {
#line 75
  ArbiterP$0$grantedTask = 9U
};
#line 75
typedef int /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$__nesc_sillytask_grantedTask[/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$grantedTask];
#line 67
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$__nesc_unnamed4363 {
#line 67
  ArbiterP$0$RES_CONTROLLED, ArbiterP$0$RES_GRANTING, ArbiterP$0$RES_IMM_GRANTING, ArbiterP$0$RES_BUSY
};
#line 68
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$__nesc_unnamed4364 {
#line 68
  ArbiterP$0$default_owner_id = 1U
};
#line 69
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$__nesc_unnamed4365 {
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
uint8_t arg_0x40ba7880, 
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Read.nc"
error_t result, AdcP$Read$val_t val);
# 66 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ReadNow.nc"
static void AdcP$ReadNow$readDone(
# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x40ba3888, 
# 66 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ReadNow.nc"
error_t result, AdcP$ReadNow$val_t val);
# 32 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP$Atm128AdcConfig$getRefVoltage(
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x40ba2dc0);
# 25 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP$Atm128AdcConfig$getChannel(
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x40ba2dc0);
# 39 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP$Atm128AdcConfig$getPrescaler(
# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x40ba2dc0);
# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static bool AdcP$Atm128AdcSingle$getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler);
# 56 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t AdcP$acquiredData$postTask(void );
# 103 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
enum AdcP$__nesc_unnamed4366 {
#line 103
  AdcP$acquiredData = 10U
};
#line 103
typedef int AdcP$__nesc_sillytask_acquiredData[AdcP$acquiredData];
#line 57
enum AdcP$__nesc_unnamed4367 {
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
uint8_t arg_0x40bb4a28, 
# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Read.nc"
error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$val_t val);
#line 55
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$read(
# 26 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x40bb3ac8);
# 110 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$release(
# 27 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x40bb2990);
# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$request(
# 27 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x40bb2990);



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
# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(
#line 92
message_t * msg, 






error_t error);
# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$send(
#line 56
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

/*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$getPayload(
#line 111
message_t * msg, 


uint8_t len);
#line 101
static uint8_t /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$maxPayloadLength(void );
# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMPacket.nc"
static void /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 151
static void /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(
#line 147
message_t * amsg, 



am_id_t t);
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline error_t /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(message_t *m, error_t err);



static inline uint8_t /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$maxPayloadLength(void );



static inline void */*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$getPayload(message_t *m, uint8_t len);
# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40bdcc40, 
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
am_id_t arg_0x40bdcc40, 
# 121 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 


uint8_t len);
#line 112
static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$maxPayloadLength(
# 40 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40bdcc40);
# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(
# 38 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40bdc258, 
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
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4368 {
#line 118
  AMQueueImplP$0$CancelTask = 11U
};
#line 118
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_sillytask_CancelTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask];
#line 161
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4369 {
#line 161
  AMQueueImplP$0$errorTask = 12U
};
#line 161
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_sillytask_errorTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask];
#line 49
#line 47
typedef struct /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4370 {
  message_t * msg;
} /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue_entry_t;

uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current = 1;
/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue_entry_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[1];
uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[1 / 8 + 1];

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void );

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$nextPacket(void );
#line 82
static inline error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(uint8_t clientId, message_t *msg, 
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



static inline void */*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$getPayload(uint8_t id, message_t *m, uint8_t len);



static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(uint8_t id, message_t *msg, error_t err);
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

# 75 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/adc/HplAtm128AdcP.nc"
static inline uint8_t HplAtm128AdcP$Adcsra2int(Atm128Adcsra_t x)
#line 75
{
#line 75
  union __nesc_unnamed4371 {
#line 75
    Atm128Adcsra_t f;
#line 75
    uint8_t t;
  } 
#line 75
  c = { .f = x };

#line 75
  return c.t;
}




static inline void HplAtm128AdcP$HplAtm128Adc$setAdcsra(Atm128Adcsra_t x)
#line 81
{
  * (volatile uint8_t *)0x7A = HplAtm128AdcP$Adcsra2int(x);
}

# 60 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP$HplAtm128Adc$setAdcsra(Atm128Adcsra_t adcsra){
#line 60
  HplAtm128AdcP$HplAtm128Adc$setAdcsra(adcsra);
#line 60
}
#line 60
# 106 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/adc/Atm128AdcP.nc"
static inline error_t Atm128AdcP$Init$init(void )
#line 106
{
  /* atomic removed: atomic calls only */
  {
    Atm128Adcsra_t adcsr;

    adcsr.aden = ATM128_ADC_ENABLE_OFF;
    adcsr.adsc = ATM128_ADC_START_CONVERSION_OFF;
    adcsr.adate = ATM128_ADC_FREE_RUNNING_OFF;
    adcsr.adif = ATM128_ADC_INT_FLAG_OFF;
    adcsr.adie = ATM128_ADC_INT_ENABLE_OFF;
    adcsr.adps = ATM128_ADC_PRESCALE_2;
    Atm128AdcP$HplAtm128Adc$setAdcsra(adcsr);
  }
  return SUCCESS;
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t MotePlatformP$SubInit$init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = Atm128AdcP$Init$init();
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
inline static void OscilloscopeC$Leds$led0Toggle(void ){
#line 56
  LedsP$Leds$led0Toggle();
#line 56
}
#line 56
# 49 "OscilloscopeC.nc"
static inline void OscilloscopeC$report_problem(void )
#line 49
{
#line 49
  OscilloscopeC$Leds$led0Toggle();
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
inline static void OscilloscopeC$Leds$led1Toggle(void ){
#line 72
  LedsP$Leds$led1Toggle();
#line 72
}
#line 72
# 50 "OscilloscopeC.nc"
static inline void OscilloscopeC$report_sent(void )
#line 50
{
#line 50
  OscilloscopeC$Leds$led1Toggle();
}

#line 124
static inline void OscilloscopeC$AMSend$sendDone(message_t *msg, error_t error)
#line 124
{
  if (error == SUCCESS) {
    OscilloscopeC$report_sent();
    }
  else {
#line 128
    OscilloscopeC$report_problem();
    }
  OscilloscopeC$sendBusy = FALSE;
}

# 99 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(message_t * msg, error_t error){
#line 99
  OscilloscopeC$AMSend$sendDone(msg, error);
#line 99
}
#line 99
# 57 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline void /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(message_t *m, error_t err)
#line 57
{
  /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(m, err);
}

# 207 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(uint8_t id, message_t *msg, error_t err)
#line 207
{
}

# 89 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(uint8_t arg_0x40bdc258, message_t * msg, error_t error){
#line 89
  switch (arg_0x40bdc258) {
#line 89
    case 0U:
#line 89
      /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(msg, error);
#line 89
      break;
#line 89
    default:
#line 89
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(arg_0x40bdc258, msg, error);
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
  for (i = 0; i < 1 / 8 + 1; i++) {
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
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(am_id_t arg_0x40bdcc40, am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = ActiveMessageLayerC$AMSend$send(arg_0x40bdcc40, addr, msg, len);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 246 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_leuint8(const void * source)
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
# 276 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_leuint16(const void * source)
#line 276
{
  const uint8_t *base = source;

#line 278
  return ((uint16_t )base[1] << 8) | base[0];
}

# 174 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline uint16_t IEEE154PacketP$IEEE154Packet$getDestAddr(message_t *msg)
{
  return __nesc_ntoh_leuint16(IEEE154PacketP$getHeader(msg)->dest.data);
}

#line 249
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
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current = (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current + 1) % 1;
  for (i = 0; i < 1; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current].msg == (void *)0 || 
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current / 8] & (1 << /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current % 8)) 
        {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current = (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current + 1) % 1;
        }
      else {
          break;
        }
    }
  if (i >= 1) {
#line 70
    /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current = 1;
    }
}

#line 166
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void )
#line 166
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$nextPacket();
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current < 1) {
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

# 61 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static __inline rf230packet_metadata_t *RF230PacketP$getMeta(message_t *msg)
{
  return (rf230packet_metadata_t *)msg->metadata;
}

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
# 251 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_leuint8(void * target, uint8_t value)
#line 251
{
  uint8_t *base = target;

#line 253
  base[0] = value;
  return value;
}

# 213 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
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
inline static void ActiveMessageLayerC$AMPacket$setType(message_t * amsg, am_id_t t){
#line 151
  IEEE154PacketP$AMPacket$setType(amsg, t);
#line 151
}
#line 151
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

# 133 "OscilloscopeC.nc"
static inline void OscilloscopeC$Read$readDone(error_t result, uint16_t data)
#line 133
{
  if (result != SUCCESS) 
    {
      data = 0xffff;
      OscilloscopeC$report_problem();
    }
  __nesc_hton_uint16(OscilloscopeC$local.readings[OscilloscopeC$reading++].data, data);
}

# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/system/ArbitratedReadC.nc"
static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$default$readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$width_t data)
#line 48
{
}

# 63 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Read.nc"
inline static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$readDone(uint8_t arg_0x40bb4a28, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$val_t val){
#line 63
  switch (arg_0x40bb4a28) {
#line 63
    case /*OscilloscopeAppC.Sensor.DemoChannel.AdcReadClientC*/AdcReadClientC$0$ID:
#line 63
      OscilloscopeC$Read$readDone(result, val);
#line 63
      break;
#line 63
    default:
#line 63
      /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$default$readDone(arg_0x40bb4a28, result, val);
#line 63
      break;
#line 63
    }
#line 63
}
#line 63
# 141 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/McuSleepC.nc"
static inline void McuSleepC$McuPowerState$update(void )
#line 141
{
}

# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuPowerState.nc"
inline static void HplAtm128AdcP$McuPowerState$update(void ){
#line 44
  McuSleepC$McuPowerState$update();
#line 44
}
#line 44
# 98 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/adc/HplAtm128AdcP.nc"
static inline void HplAtm128AdcP$HplAtm128Adc$disableAdc(void )
#line 98
{
  * (volatile uint8_t *)0x7A &= ~(1 << 7);
  HplAtm128AdcP$McuPowerState$update();
}

# 77 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP$HplAtm128Adc$disableAdc(void ){
#line 77
  HplAtm128AdcP$HplAtm128Adc$disableAdc();
#line 77
}
#line 77
# 131 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/adc/Atm128AdcP.nc"
static inline error_t Atm128AdcP$AsyncStdControl$stop(void )
#line 131
{
  /* atomic removed: atomic calls only */
#line 132
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
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$unconfigure(uint8_t arg_0x40b68e40){
#line 55
    /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(arg_0x40b68e40);
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
inline static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$release(uint8_t arg_0x40bb2990){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  switch (arg_0x40bb2990) {
#line 110
    case /*OscilloscopeAppC.Sensor.DemoChannel.AdcReadClientC*/AdcReadClientC$0$ID:
#line 110
      __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$release(/*OscilloscopeAppC.Sensor.DemoChannel.AdcReadClientC*/AdcReadClientC$0$HAL_ID);
#line 110
      break;
#line 110
    default:
#line 110
      __nesc_result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$default$release(arg_0x40bb2990);
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
inline static void AdcP$Read$readDone(uint8_t arg_0x40ba7880, error_t result, AdcP$Read$val_t val){
#line 63
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$readDone(arg_0x40ba7880, result, val);
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
inline static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$read(uint8_t arg_0x40bb3ac8){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = AdcP$Read$read(arg_0x40bb3ac8);
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
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$granted(uint8_t arg_0x40b69068){
#line 92
  switch (arg_0x40b69068) {
#line 92
    case /*OscilloscopeAppC.Sensor.DemoChannel.AdcReadClientC*/AdcReadClientC$0$HAL_ID:
#line 92
      /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$granted(/*OscilloscopeAppC.Sensor.DemoChannel.AdcReadClientC*/AdcReadClientC$0$ID);
#line 92
      break;
#line 92
    default:
#line 92
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$default$granted(arg_0x40b69068);
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
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$configure(uint8_t arg_0x40b68e40){
#line 49
    /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(arg_0x40b68e40);
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

# 126 "/opt/CVSTinyOS/tinyos-2.x/tos/platforms/iris/MeasureClockC.nc"
static inline uint8_t MeasureClockC$Atm128Calibrate$adcPrescaler(void )
#line 126
{

  if (MeasureClockC$cycles >= 390) {
    return ATM128_ADC_PRESCALE_128;
    }
#line 130
  if (MeasureClockC$cycles >= 195) {
    return ATM128_ADC_PRESCALE_64;
    }
#line 132
  if (MeasureClockC$cycles >= 97) {
    return ATM128_ADC_PRESCALE_32;
    }
#line 134
  if (MeasureClockC$cycles >= 48) {
    return ATM128_ADC_PRESCALE_16;
    }
#line 136
  if (MeasureClockC$cycles >= 24) {
    return ATM128_ADC_PRESCALE_8;
    }
#line 138
  if (MeasureClockC$cycles >= 12) {
    return ATM128_ADC_PRESCALE_4;
    }
#line 140
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
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/adc/HplAtm128AdcP.nc"
static inline uint8_t HplAtm128AdcP$Admux2int(Atm128Admux_t x)
#line 74
{
#line 74
  union __nesc_unnamed4372 {
#line 74
    Atm128Admux_t f;
#line 74
    uint8_t t;
  } 
#line 74
  c = { .f = x };

#line 74
  return c.t;
}


static inline void HplAtm128AdcP$HplAtm128Adc$setAdmux(Atm128Admux_t x)
#line 78
{
  * (volatile uint8_t *)0x7C = HplAtm128AdcP$Admux2int(x);
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP$HplAtm128Adc$setAdmux(Atm128Admux_t admux){
#line 49
  HplAtm128AdcP$HplAtm128Adc$setAdmux(admux);
#line 49
}
#line 49
# 141 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/adc/Atm128AdcP.nc"
static __inline bool Atm128AdcP$isPrecise(Atm128Admux_t admux, uint8_t channel, uint8_t refVoltage)
#line 141
{
  return refVoltage == admux.refs && ((
  channel <= ATM128_ADC_SNGL_ADC7 || channel >= ATM128_ADC_SNGL_1_23) || channel == admux.mux);
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/adc/HplAtm128AdcP.nc"
static inline Atm128Admux_t HplAtm128AdcP$HplAtm128Adc$getAdmux(void )
#line 64
{
  return * (Atm128Admux_t *)& * (volatile uint8_t *)0x7C;
}

# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static Atm128Admux_t Atm128AdcP$HplAtm128Adc$getAdmux(void ){
#line 44
  struct __nesc_unnamed4253 __nesc_result;
#line 44

#line 44
  __nesc_result = HplAtm128AdcP$HplAtm128Adc$getAdmux();
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 206 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/adc/Atm128AdcP.nc"
static inline void Atm128AdcP$getData(uint8_t channel, uint8_t refVoltage, bool leftJustify, uint8_t prescaler)
#line 206
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
  adcsr.adate = Atm128AdcP$f.multiple;
  adcsr.adif = ATM128_ADC_INT_FLAG_ON;
  adcsr.adie = ATM128_ADC_INT_ENABLE_ON;
  if (prescaler == ATM128_ADC_PRESCALE) {
    prescaler = Atm128AdcP$Atm128Calibrate$adcPrescaler();
    }
#line 226
  adcsr.adps = prescaler;
  Atm128AdcP$HplAtm128Adc$setAdcsra(adcsr);
}

static inline bool Atm128AdcP$Atm128AdcSingle$getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler)
#line 231
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      Atm128AdcP$f.multiple = FALSE;
      Atm128AdcP$getData(channel, refVoltage, leftJustify, prescaler);

      {
        unsigned char __nesc_temp = 
#line 237
        Atm128AdcP$f.precise;

        {
#line 237
          __nesc_atomic_end(__nesc_atomic); 
#line 237
          return __nesc_temp;
        }
      }
    }
#line 240
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
inline static uint8_t AdcP$Atm128AdcConfig$getChannel(uint8_t arg_0x40ba2dc0){
#line 25
  unsigned char __nesc_result;
#line 25

#line 25
  switch (arg_0x40ba2dc0) {
#line 25
    case /*OscilloscopeAppC.Sensor.DemoChannel.AdcReadClientC*/AdcReadClientC$0$ID:
#line 25
      __nesc_result = VoltageP$Atm128AdcConfig$getChannel();
#line 25
      break;
#line 25
    default:
#line 25
      __nesc_result = AdcP$Atm128AdcConfig$default$getChannel(arg_0x40ba2dc0);
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
inline static uint8_t AdcP$Atm128AdcConfig$getRefVoltage(uint8_t arg_0x40ba2dc0){
#line 32
  unsigned char __nesc_result;
#line 32

#line 32
  switch (arg_0x40ba2dc0) {
#line 32
    case /*OscilloscopeAppC.Sensor.DemoChannel.AdcReadClientC*/AdcReadClientC$0$ID:
#line 32
      __nesc_result = VoltageP$Atm128AdcConfig$getRefVoltage();
#line 32
      break;
#line 32
    default:
#line 32
      __nesc_result = AdcP$Atm128AdcConfig$default$getRefVoltage(arg_0x40ba2dc0);
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
inline static uint8_t AdcP$Atm128AdcConfig$getPrescaler(uint8_t arg_0x40ba2dc0){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  switch (arg_0x40ba2dc0) {
#line 39
    case /*OscilloscopeAppC.Sensor.DemoChannel.AdcReadClientC*/AdcReadClientC$0$ID:
#line 39
      __nesc_result = VoltageP$Atm128AdcConfig$getPrescaler();
#line 39
      break;
#line 39
    default:
#line 39
      __nesc_result = AdcP$Atm128AdcConfig$default$getPrescaler(arg_0x40ba2dc0);
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

# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
inline static void RF230LayerP$Tasklet$schedule(void ){
#line 48
  TaskletC$Tasklet$schedule();
#line 48
}
#line 48
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

# 87 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline uint8_t RF230ActiveMessageP$RF230Config$getDefaultChannel(void )
{
  return 19;
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
inline static void Atm128SpiP$Resource$granted(uint8_t arg_0x409c8010){
#line 92
  switch (arg_0x409c8010) {
#line 92
    case 0U:
#line 92
      RF230LayerP$SpiResource$granted();
#line 92
      break;
#line 92
    default:
#line 92
      Atm128SpiP$Resource$default$granted(arg_0x409c8010);
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
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$granted(uint8_t arg_0x40a5e310){
#line 92
  Atm128SpiP$ResourceArbiter$granted(arg_0x40a5e310);
#line 92
}
#line 92
# 170 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$configure(uint8_t id)
#line 170
{
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$configure(uint8_t arg_0x40a5d9b8){
#line 49
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$configure(arg_0x40a5d9b8);
#line 49
}
#line 49
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










static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$unconfigure(uint8_t id)
#line 172
{
}

# 55 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$unconfigure(uint8_t arg_0x40a5d9b8){
#line 55
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$unconfigure(arg_0x40a5d9b8);
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
inline static error_t Atm128SpiP$ResourceArbiter$release(uint8_t arg_0x409e8e70){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$release(arg_0x409e8e70);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
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

# 44 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/McuPowerState.nc"
inline static void HplAtm128SpiP$Mcu$update(void ){
#line 44
  McuSleepC$McuPowerState$update();
#line 44
}
#line 44
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
inline static void RadioAlarmP$RadioAlarm$fired(uint8_t arg_0x407d1a70){
#line 48
  switch (arg_0x407d1a70) {
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
      RadioAlarmP$RadioAlarm$default$fired(arg_0x407d1a70);
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
# 287 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
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
# 128 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
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
inline static bool Atm128SpiP$ResourceArbiter$isOwner(uint8_t arg_0x409e8e70){
#line 118
  unsigned char __nesc_result;
#line 118

#line 118
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$isOwner(arg_0x409e8e70);
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
# 168 "/opt/CVSTinyOS/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$immediateRequested(uint8_t id)
#line 168
{
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$immediateRequested(uint8_t arg_0x40a5ed38){
#line 51
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$immediateRequested(arg_0x40a5ed38);
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
inline static error_t Atm128SpiP$ResourceArbiter$immediateRequest(uint8_t arg_0x409e8e70){
#line 87
  unsigned char __nesc_result;
#line 87

#line 87
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$immediateRequest(arg_0x409e8e70);
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
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$requested(uint8_t arg_0x40a5ed38){
#line 43
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$requested(arg_0x40a5ed38);
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
inline static error_t Atm128SpiP$ResourceArbiter$request(uint8_t arg_0x409e8e70){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$request(arg_0x409e8e70);
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

# 78 "/opt/CVSTinyOS/tinyos-2.x/tos/system/RandomMlcgC.nc"
static inline uint16_t RandomMlcgC$Random$rand16(void )
#line 78
{
  return (uint16_t )RandomMlcgC$Random$rand32();
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

# 153 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(uint8_t num)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num].isrunning = FALSE;
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
inline static message_t * IEEE154NetworkLayerP$NonTinyosReceive$receive(uint8_t arg_0x407ff480, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
    __nesc_result = IEEE154NetworkLayerP$NonTinyosReceive$default$receive(arg_0x407ff480, msg, payload, len);
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
inline static message_t * ActiveMessageLayerC$Snoop$receive(am_id_t arg_0x407ea6a8, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
    __nesc_result = ActiveMessageLayerC$Snoop$default$receive(arg_0x407ea6a8, msg, payload, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 264 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_uint16(const void * source)
#line 264
{
  const uint8_t *base = source;

#line 266
  return ((uint16_t )base[0] << 8) | base[1];
}

# 60 "OscilloscopeC.nc"
static inline void OscilloscopeC$startTimer(void )
#line 60
{
  OscilloscopeC$Timer$startPeriodic(__nesc_ntoh_uint16(OscilloscopeC$local.interval.data));
  OscilloscopeC$reading = 0;
}

# 48 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$toggle(void )
#line 48
{
#line 48
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 48
    * (volatile uint8_t * )34U ^= 1 << 0;
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
inline static void OscilloscopeC$Leds$led2Toggle(void ){
#line 89
  LedsP$Leds$led2Toggle();
#line 89
}
#line 89
# 51 "OscilloscopeC.nc"
static inline void OscilloscopeC$report_received(void )
#line 51
{
#line 51
  OscilloscopeC$Leds$led2Toggle();
}

#line 72
static inline message_t *OscilloscopeC$Receive$receive(message_t *msg, void *payload, uint8_t len)
#line 72
{
  oscilloscope_t *omsg = payload;

  OscilloscopeC$report_received();




  if (__nesc_ntoh_uint16(omsg->version.data) > __nesc_ntoh_uint16(OscilloscopeC$local.version.data)) 
    {
      __nesc_hton_uint16(OscilloscopeC$local.version.data, __nesc_ntoh_uint16(omsg->version.data));
      __nesc_hton_uint16(OscilloscopeC$local.interval.data, __nesc_ntoh_uint16(omsg->interval.data));
      OscilloscopeC$startTimer();
    }
  if (__nesc_ntoh_uint16(omsg->count.data) > __nesc_ntoh_uint16(OscilloscopeC$local.count.data)) 
    {
      __nesc_hton_uint16(OscilloscopeC$local.count.data, __nesc_ntoh_uint16(omsg->count.data));
      OscilloscopeC$suppressCountChange = TRUE;
    }

  return msg;
}

# 98 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
static inline message_t *ActiveMessageLayerC$Receive$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
{
  return msg;
}

# 67 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * ActiveMessageLayerC$Receive$receive(am_id_t arg_0x407ea010, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  switch (arg_0x407ea010) {
#line 67
    case 147:
#line 67
      __nesc_result = OscilloscopeC$Receive$receive(msg, payload, len);
#line 67
      break;
#line 67
    default:
#line 67
      __nesc_result = ActiveMessageLayerC$Receive$default$receive(arg_0x407ea010, msg, payload, len);
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

# 181 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(am_id_t id, message_t *msg, error_t err)
#line 181
{





  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current >= 1) {
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
inline static void ActiveMessageLayerC$AMSend$sendDone(am_id_t arg_0x407d95c0, message_t * msg, error_t error){
#line 99
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(arg_0x407d95c0, msg, error);
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
# 68 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
inline static void MessageBufferLayerP$Tasklet$resume(void ){
#line 68
  TaskletC$Tasklet$resume();
#line 68
}
#line 68
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

# 69 "OscilloscopeC.nc"
static inline void OscilloscopeC$RadioControl$stopDone(error_t error)
#line 69
{
}

# 117 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void MessageBufferLayerP$SplitControl$stopDone(error_t error){
#line 117
  OscilloscopeC$RadioControl$stopDone(error);
#line 117
}
#line 117
# 65 "OscilloscopeC.nc"
static inline void OscilloscopeC$RadioControl$startDone(error_t error)
#line 65
{
  OscilloscopeC$startTimer();
}

# 92 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void MessageBufferLayerP$SplitControl$startDone(error_t error){
#line 92
  OscilloscopeC$RadioControl$startDone(error);
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
# 94 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/adc/HplAtm128AdcP.nc"
static inline void HplAtm128AdcP$HplAtm128Adc$enableAdc(void )
#line 94
{
  * (volatile uint8_t *)0x7A |= 1 << 7;
  HplAtm128AdcP$McuPowerState$update();
}

# 73 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP$HplAtm128Adc$enableAdc(void ){
#line 73
  HplAtm128AdcP$HplAtm128Adc$enableAdc();
#line 73
}
#line 73
# 126 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/adc/Atm128AdcP.nc"
static inline error_t Atm128AdcP$AsyncStdControl$start(void )
#line 126
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 127
    Atm128AdcP$HplAtm128Adc$enableAdc();
#line 127
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
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceRequested$requested(uint8_t arg_0x40b69a90){
#line 43
    /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(arg_0x40b69a90);
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
inline static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$request(uint8_t arg_0x40bb2990){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  switch (arg_0x40bb2990) {
#line 78
    case /*OscilloscopeAppC.Sensor.DemoChannel.AdcReadClientC*/AdcReadClientC$0$ID:
#line 78
      __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$request(/*OscilloscopeAppC.Sensor.DemoChannel.AdcReadClientC*/AdcReadClientC$0$HAL_ID);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$default$request(arg_0x40bb2990);
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
inline static error_t OscilloscopeC$Read$read(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$read(/*OscilloscopeAppC.Sensor.DemoChannel.AdcReadClientC*/AdcReadClientC$0$ID);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 83 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Packet.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(message_t * msg, uint8_t len){
#line 83
  RF230PacketP$Packet$setPayloadLength(msg, len);
#line 83
}
#line 83
# 82 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(uint8_t clientId, message_t *msg, 
uint8_t len)
#line 83
{
  if (clientId >= 1) {
      return FAIL;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[clientId].msg != (void *)0) {
      return EBUSY;
    }
  ;

  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[clientId].msg = msg;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(msg, len);

  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current >= 1) {
      error_t err;
      am_id_t amId = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(msg);
      am_addr_t dest = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(msg);

      ;
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current = clientId;

      err = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(amId, dest, msg, len);
      if (err != SUCCESS) {
          ;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current = 1;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[clientId].msg = (void *)0;
        }

      return err;
    }
  else {
      ;
    }
  return SUCCESS;
}

# 64 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$send(message_t * msg, uint8_t len){
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
inline static void /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(message_t * amsg, am_id_t t){
#line 151
  IEEE154PacketP$AMPacket$setType(amsg, t);
#line 151
}
#line 151
#line 92
inline static void /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(message_t * amsg, am_addr_t addr){
#line 92
  IEEE154PacketP$AMPacket$setDestination(amsg, addr);
#line 92
}
#line 92
# 45 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline error_t /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 47
{
  /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(msg, dest);
  /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(msg, 147);
  return /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$send(msg, len);
}

# 69 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t OscilloscopeC$AMSend$send(am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(addr, msg, len);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
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
inline static void * /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$getPayload(am_id_t arg_0x40bdcc40, message_t * msg, uint8_t len){
#line 124
  void *__nesc_result;
#line 124

#line 124
  __nesc_result = ActiveMessageLayerC$AMSend$getPayload(arg_0x40bdcc40, msg, len);
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
inline static void * /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$getPayload(message_t * msg, uint8_t len){
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
static inline void */*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$getPayload(message_t *m, uint8_t len)
#line 65
{
  return /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$getPayload(m, len);
}

# 124 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void * OscilloscopeC$AMSend$getPayload(message_t * msg, uint8_t len){
#line 124
  void *__nesc_result;
#line 124

#line 124
  __nesc_result = /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$getPayload(msg, len);
#line 124

#line 124
  return __nesc_result;
#line 124
}
#line 124
# 224 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static __inline uint8_t MessageBufferLayerP$Send$maxPayloadLength(void )
{
  return MessageBufferLayerP$Packet$maxPayloadLength();
}

# 101 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static uint8_t UniqueLayerP$SubSend$maxPayloadLength(void ){
#line 101
  unsigned char __nesc_result;
#line 101

#line 101
  __nesc_result = MessageBufferLayerP$Send$maxPayloadLength();
#line 101

#line 101
  return __nesc_result;
#line 101
}
#line 101
# 74 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/UniqueLayerP.nc"
static inline uint8_t UniqueLayerP$Send$maxPayloadLength(void )
{
  return UniqueLayerP$SubSend$maxPayloadLength();
}

# 101 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static uint8_t IEEE154NetworkLayerP$SubSend$maxPayloadLength(void ){
#line 101
  unsigned char __nesc_result;
#line 101

#line 101
  __nesc_result = UniqueLayerP$Send$maxPayloadLength();
#line 101

#line 101
  return __nesc_result;
#line 101
}
#line 101
# 59 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/IEEE154NetworkLayerP.nc"
static inline uint8_t IEEE154NetworkLayerP$Send$maxPayloadLength(void )
{
  return IEEE154NetworkLayerP$SubSend$maxPayloadLength();
}

# 101 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Send.nc"
inline static uint8_t ActiveMessageLayerC$SubSend$maxPayloadLength(void ){
#line 101
  unsigned char __nesc_result;
#line 101

#line 101
  __nesc_result = IEEE154NetworkLayerP$Send$maxPayloadLength();
#line 101

#line 101
  return __nesc_result;
#line 101
}
#line 101
# 75 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
static __inline uint8_t ActiveMessageLayerC$AMSend$maxPayloadLength(am_id_t id)
{
  return ActiveMessageLayerC$SubSend$maxPayloadLength();
}

# 112 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$maxPayloadLength(am_id_t arg_0x40bdcc40){
#line 112
  unsigned char __nesc_result;
#line 112

#line 112
  __nesc_result = ActiveMessageLayerC$AMSend$maxPayloadLength(arg_0x40bdcc40);
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
inline static uint8_t /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$maxPayloadLength(void ){
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
static inline uint8_t /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$maxPayloadLength(void )
#line 61
{
  return /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$maxPayloadLength();
}

# 112 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static uint8_t OscilloscopeC$AMSend$maxPayloadLength(void ){
#line 112
  unsigned char __nesc_result;
#line 112

#line 112
  __nesc_result = /*OscilloscopeAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$maxPayloadLength();
#line 112

#line 112
  return __nesc_result;
#line 112
}
#line 112
# 99 "OscilloscopeC.nc"
static inline void OscilloscopeC$Timer$fired(void )
#line 99
{
  unsigned short __nesc_temp43;
  unsigned char *__nesc_temp42;

#line 100
  if (OscilloscopeC$reading == NREADINGS) 
    {
      if (!OscilloscopeC$sendBusy && sizeof OscilloscopeC$local <= OscilloscopeC$AMSend$maxPayloadLength()) 
        {


          memcpy(OscilloscopeC$AMSend$getPayload(&OscilloscopeC$sendBuf, sizeof OscilloscopeC$local), &OscilloscopeC$local, sizeof OscilloscopeC$local);
          if (OscilloscopeC$AMSend$send(AM_BROADCAST_ADDR, &OscilloscopeC$sendBuf, sizeof OscilloscopeC$local) == SUCCESS) {
            OscilloscopeC$sendBusy = TRUE;
            }
        }
#line 110
      if (!OscilloscopeC$sendBusy) {
        OscilloscopeC$report_problem();
        }
      OscilloscopeC$reading = 0;


      if (!OscilloscopeC$suppressCountChange) {
        (__nesc_temp42 = OscilloscopeC$local.count.data, __nesc_hton_uint16(__nesc_temp42, (__nesc_temp43 = __nesc_ntoh_uint16(__nesc_temp42)) + 1), __nesc_temp43);
        }
#line 118
      OscilloscopeC$suppressCountChange = FALSE;
    }
  if (OscilloscopeC$Read$read() != SUCCESS) {
    OscilloscopeC$report_problem();
    }
}

# 193 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num)
{
}

# 72 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(uint8_t arg_0x4078aa90){
#line 72
  switch (arg_0x4078aa90) {
#line 72
    case 0U:
#line 72
      TrafficMonitorLayerP$Timer$fired();
#line 72
      break;
#line 72
    case 1U:
#line 72
      OscilloscopeC$Timer$fired();
#line 72
      break;
#line 72
    default:
#line 72
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(arg_0x4078aa90);
#line 72
      break;
#line 72
    }
#line 72
}
#line 72
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

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/system/RoundRobinResourceQueueC.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$Init$init(void )
#line 51
{
  memset(/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$resQ, 0, sizeof /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$resQ);
  return SUCCESS;
}

# 51 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t RealMainP$SoftwareInit$init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$Init$init();
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
inline static error_t OscilloscopeC$RadioControl$start(void ){
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
# 53 "OscilloscopeC.nc"
static inline void OscilloscopeC$Boot$booted(void )
#line 53
{
  __nesc_hton_uint16(OscilloscopeC$local.interval.data, DEFAULT_INTERVAL);
  __nesc_hton_uint16(OscilloscopeC$local.id.data, TOS_NODE_ID);
  if (OscilloscopeC$RadioControl$start() != SUCCESS) {
    OscilloscopeC$report_problem();
    }
}

# 49 "/opt/CVSTinyOS/tinyos-2.x/tos/interfaces/Boot.nc"
inline static void RealMainP$Boot$booted(void ){
#line 49
  OscilloscopeC$Boot$booted();
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
# 70 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/adc/HplAtm128AdcP.nc"
static inline uint16_t HplAtm128AdcP$HplAtm128Adc$getValue(void )
#line 70
{
  return * (volatile uint16_t *)0x78;
}

#line 67
static inline Atm128Adcsra_t HplAtm128AdcP$HplAtm128Adc$getAdcsra(void )
#line 67
{
  return * (Atm128Adcsra_t *)& * (volatile uint8_t *)0x7A;
}

#line 136
static inline bool HplAtm128AdcP$HplAtm128Adc$cancel(void )
#line 136
{
  /* atomic removed: atomic calls only */

  {
    Atm128Adcsra_t oldSr = HplAtm128AdcP$HplAtm128Adc$getAdcsra();
#line 140
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
#line 157
      oldSr.adif || oldSr.adsc;

#line 157
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
# 264 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/adc/Atm128AdcP.nc"
static inline bool Atm128AdcP$Atm128AdcMultiple$default$dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage)
#line 265
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
inline static void AdcP$ReadNow$readDone(uint8_t arg_0x40ba3888, error_t result, AdcP$ReadNow$val_t val){
#line 66
    AdcP$ReadNow$default$readDone(arg_0x40ba3888, result, val);
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
# 103 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/adc/HplAtm128AdcP.nc"
static inline void HplAtm128AdcP$HplAtm128Adc$disableInterruption(void )
#line 103
{
#line 103
  * (volatile uint8_t *)0x7A &= ~(1 << 3);
}

# 86 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP$HplAtm128Adc$disableInterruption(void ){
#line 86
  HplAtm128AdcP$HplAtm128Adc$disableInterruption();
#line 86
}
#line 86
# 146 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/adc/Atm128AdcP.nc"
static inline void Atm128AdcP$HplAtm128Adc$dataReady(uint16_t data)
#line 146
{
  bool precise;
#line 147
  bool multiple;
  uint8_t channel;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      channel = Atm128AdcP$f.channel;
      precise = Atm128AdcP$f.precise;
      multiple = Atm128AdcP$f.multiple;
    }
#line 155
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
#line 174
      uint8_t nextVoltage;
      Atm128Admux_t admux;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          admux = Atm128AdcP$HplAtm128Adc$getAdmux();
          nextVoltage = admux.refs;
          nextChannel = admux.mux;
        }
#line 182
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
#line 202
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
      SchedulerBasicP$TaskBasic$default$runTask(arg_0x40363c40);
#line 64
      break;
#line 64
    }
#line 64
}
#line 64
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

#line 48
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

# 155 "/opt/CVSTinyOS/tinyos-2.x/tos/system/AMQueueImplP.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(uint8_t last, message_t * msg, error_t err)
#line 155
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[last].msg = (void *)0;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend();
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(last, msg, err);
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

# 115 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
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

# 53 "/opt/CVSTinyOS/tinyos-2.x/tos/lib/timer/Timer.nc"
static void OscilloscopeC$Timer$startPeriodic(uint32_t dt){
#line 53
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(1U, dt);
#line 53
}
#line 53
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

# 127 "/opt/CVSTinyOS/tinyos-2.x/tos/chips/atm1281/adc/HplAtm128AdcP.nc"
__attribute((signal))   void __vector_29(void )
#line 127
{
  uint16_t data = HplAtm128AdcP$HplAtm128Adc$getValue();

  __nesc_enable_interrupt();
  HplAtm128AdcP$HplAtm128Adc$dataReady(data);
}

