#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 152 "/usr/lib/gcc/avr/4.3.3/include/stddef.h" 3
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
# 121 "/usr/lib/gcc/avr/4.3.3/../../../avr/include/stdint.h" 3
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
# 77 "/usr/lib/gcc/avr/4.3.3/../../../avr/include/inttypes.h" 3
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
# 120 "/usr/lib/gcc/avr/4.3.3/../../../avr/include/string.h" 3
extern void *memset(void *arg_0x40290ee8, int arg_0x4028f068, size_t arg_0x4028f200);
# 71 "/usr/lib/gcc/avr/4.3.3/../../../avr/include/stdlib.h" 3
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


typedef int (*__compar_fn_t)(const void *arg_0x402a28c8, const void *arg_0x402a2a60);
# 23 "/opt/tinyos-2.x/tos/system/tos.h"
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
# 40 "/opt/tinyos-2.x/tos/types/TinyError.h"
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
# 219 "/usr/lib/gcc/avr/4.3.3/../../../avr/include/avr/fuse.h" 3
#line 214
typedef struct __nesc_unnamed4246 {

  unsigned char low;
  unsigned char high;
  unsigned char extended;
} __fuse_t;
# 210 "/usr/lib/gcc/avr/4.3.3/../../../avr/include/avr/pgmspace.h" 3
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
# 105 "/opt/tinyos-2.x/tos/chips/atm1281/atm128hardware.h"
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


enum __nesc_unnamed4247 {
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
typedef struct __nesc_unnamed4248 {

  uint8_t porf : 1;
  uint8_t extrf : 1;
  uint8_t borf : 1;
  uint8_t wdrf : 1;
  uint8_t jtrf : 1;
  uint8_t resv1 : 3;
} Atm128_MCUSR_t;










#line 173
typedef struct __nesc_unnamed4249 {

  uint8_t srw00 : 1;
  uint8_t srw01 : 1;
  uint8_t srw10 : 1;
  uint8_t srw11 : 1;
  uint8_t srl : 3;
  uint8_t sre : 1;
} Atm128_XMCRA_t;







#line 184
typedef struct __nesc_unnamed4250 {

  uint8_t xmm : 3;
  uint8_t resv1 : 4;
  uint8_t xmbk : 1;
} Atm128_XMCRB_t;
# 62 "/opt/tinyos-2.x/tos/chips/atm1281/adc/Atm128Adc.h"
enum __nesc_unnamed4251 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVCC = 1, 
  ATM128_ADC_VREF_RSVD, 
  ATM128_ADC_VREF_2_56 = 3
};


enum __nesc_unnamed4252 {
  ATM128_ADC_RIGHT_ADJUST = 0, 
  ATM128_ADC_LEFT_ADJUST = 1
};



enum __nesc_unnamed4253 {
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
typedef struct __nesc_unnamed4254 {

  uint8_t mux : 5;
  uint8_t adlar : 1;
  uint8_t refs : 2;
} Atm128Admux_t;




enum __nesc_unnamed4255 {
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


enum __nesc_unnamed4256 {
  ATM128_ADC_ENABLE_OFF = 0, 
  ATM128_ADC_ENABLE_ON
};


enum __nesc_unnamed4257 {
  ATM128_ADC_START_CONVERSION_OFF = 0, 
  ATM128_ADC_START_CONVERSION_ON
};


enum __nesc_unnamed4258 {
  ATM128_ADC_FREE_RUNNING_OFF = 0, 
  ATM128_ADC_FREE_RUNNING_ON
};


enum __nesc_unnamed4259 {
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4260 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 169
typedef struct __nesc_unnamed4261 {

  uint8_t adps : 3;
  uint8_t adie : 1;
  uint8_t adif : 1;
  uint8_t adate : 1;
  uint8_t adsc : 1;
  uint8_t aden : 1;
} Atm128Adcsra_t;









#line 180
typedef struct __nesc_unnamed4262 {

  uint8_t adts : 3;
  uint8_t mux5 : 1;
  uint8_t resv1 : 2;
  uint8_t acme : 1;
  uint8_t resv2 : 1;
} Atm128Adcsrb_t;


typedef uint8_t Atm128_ADCH_t;
typedef uint8_t Atm128_ADCL_t;
# 29 "/opt/tinyos-2.x/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4263 {
#line 29
  int notUsed;
} 
#line 29
TMilli;
typedef struct __nesc_unnamed4264 {
#line 30
  int notUsed;
} 
#line 30
T32khz;
typedef struct __nesc_unnamed4265 {
#line 31
  int notUsed;
} 
#line 31
TMicro;
# 61 "/opt/tinyos-2.x/tos/chips/atm1281/timer/Atm128Timer.h"
enum __nesc_unnamed4266 {
  ATM128_CLK8_OFF = 0x0, 
  ATM128_CLK8_NORMAL = 0x1, 
  ATM128_CLK8_DIVIDE_8 = 0x2, 
  ATM128_CLK8_DIVIDE_32 = 0x3, 
  ATM128_CLK8_DIVIDE_64 = 0x4, 
  ATM128_CLK8_DIVIDE_128 = 0x5, 
  ATM128_CLK8_DIVIDE_256 = 0x6, 
  ATM128_CLK8_DIVIDE_1024 = 0x7
};


enum __nesc_unnamed4267 {
  ATM128_CLK16_OFF = 0x0, 
  ATM128_CLK16_NORMAL = 0x1, 
  ATM128_CLK16_DIVIDE_8 = 0x2, 
  ATM128_CLK16_DIVIDE_64 = 0x3, 
  ATM128_CLK16_DIVIDE_256 = 0x4, 
  ATM128_CLK16_DIVIDE_1024 = 0x5, 
  ATM128_CLK16_EXTERNAL_FALL = 0x6, 
  ATM128_CLK16_EXTERNAL_RISE = 0x7
};


enum __nesc_unnamed4268 {
  AVR_CLOCK_OFF = 0, 
  AVR_CLOCK_ON = 1, 
  AVR_CLOCK_DIVIDE_8 = 2
};

enum __nesc_unnamed4269 {
  ATM128_TIMER_COMPARE_NORMAL = 0, 
  ATM128_TIMER_COMPARE_TOGGLE, 
  ATM128_TIMER_COMPARE_CLEAR, 
  ATM128_TIMER_COMPARE_SET
};



enum __nesc_unnamed4270 {
  ATM128_WAVE8_NORMAL = 0, 
  ATM128_WAVE8_PWM, 
  ATM128_WAVE8_CTC, 
  ATM128_WAVE8_PWM_FAST
};


enum __nesc_unnamed4271 {
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


enum __nesc_unnamed4272 {
  ATM128_COMPARE_OFF = 0, 
  ATM128_COMPARE_TOGGLE, 
  ATM128_COMPARE_CLEAR, 
  ATM128_COMPARE_SET
};
#line 148
#line 136
typedef union __nesc_unnamed4273 {

  uint8_t flat;
  struct __nesc_unnamed4274 {
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
typedef union __nesc_unnamed4275 {

  uint8_t flat;
  struct __nesc_unnamed4276 {
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
typedef union __nesc_unnamed4277 {

  uint8_t flat;
  struct __nesc_unnamed4278 {
    uint8_t toie0 : 1;
    uint8_t ocie0a : 1;
    uint8_t ocie0e : 1;
    uint8_t resv1 : 5;
  } bits;
} Atm128_TIMSK0_t;
#line 187
#line 178
typedef union __nesc_unnamed4279 {

  uint8_t flat;
  struct __nesc_unnamed4280 {
    uint8_t tov0 : 1;
    uint8_t ocf0a : 1;
    uint8_t ocf0b : 1;
    uint8_t resv1 : 5;
  } bits;
} Atm128_TIFR0_t;
#line 203
#line 190
typedef union __nesc_unnamed4281 {

  uint8_t flat;
  struct __nesc_unnamed4282 {
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
typedef union __nesc_unnamed4283 {

  uint8_t flat;
  struct __nesc_unnamed4284 {
    uint8_t wgm20 : 1;
    uint8_t wgm21 : 1;
    uint8_t resv1 : 2;
    uint8_t comb : 2;
    uint8_t coma : 2;
  } bits;
} Atm128_TCCR2A_t;
#line 229
#line 219
typedef union __nesc_unnamed4285 {

  uint8_t flat;
  struct __nesc_unnamed4286 {
    uint8_t cs : 3;
    uint8_t wgm22 : 1;
    uint8_t resv1 : 2;
    uint8_t foc2b : 1;
    uint8_t foc2a : 1;
  } bits;
} Atm128_TCCR2B_t;
#line 241
#line 232
typedef union __nesc_unnamed4287 {

  uint8_t flat;
  struct __nesc_unnamed4288 {
    uint8_t toie : 1;
    uint8_t ociea : 1;
    uint8_t ocieb : 1;
    uint8_t resv1 : 5;
  } bits;
} Atm128_TIMSK2_t;
#line 253
#line 244
typedef union __nesc_unnamed4289 {

  uint8_t flat;
  struct __nesc_unnamed4290 {
    uint8_t tov : 1;
    uint8_t ocfa : 1;
    uint8_t ocfb : 1;
    uint8_t resv1 : 5;
  } bits;
} Atm128_TIFR2_t;
#line 266
#line 257
typedef union __nesc_unnamed4291 {

  uint8_t flat;
  struct __nesc_unnamed4292 {
    uint8_t wgm01 : 2;
    uint8_t comc : 2;
    uint8_t comb : 2;
    uint8_t coma : 2;
  } bits;
} Atm128_TCCRA_t;
#line 279
#line 269
typedef union __nesc_unnamed4293 {

  uint8_t flat;
  struct __nesc_unnamed4294 {
    uint8_t cs : 3;
    uint8_t wgm23 : 2;
    uint8_t resv1 : 1;
    uint8_t ices : 1;
    uint8_t icnc : 1;
  } bits;
} Atm128_TCCRB_t;
#line 291
#line 282
typedef union __nesc_unnamed4295 {

  uint8_t flat;
  struct __nesc_unnamed4296 {
    uint8_t resv1 : 5;
    uint8_t focc : 1;
    uint8_t focb : 1;
    uint8_t foca : 1;
  } bits;
} Atm128_TCCRC_t;
#line 306
#line 294
typedef union __nesc_unnamed4297 {

  uint8_t flat;
  struct __nesc_unnamed4298 {
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
typedef union __nesc_unnamed4299 {

  uint8_t flat;
  struct __nesc_unnamed4300 {
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
typedef union __nesc_unnamed4301 {

  uint8_t flat;
  struct __nesc_unnamed4302 {
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
# 74 "/opt/tinyos-2.x/tos/platforms/iris/MicaTimer.h"
typedef struct __nesc_unnamed4303 {
} 
#line 74
T64khz;
typedef struct __nesc_unnamed4304 {
} 
#line 75
T128khz;
typedef struct __nesc_unnamed4305 {
} 
#line 76
T2mhz;
typedef struct __nesc_unnamed4306 {
} 
#line 77
T4mhz;
#line 147
typedef TMicro TOne;
typedef TMicro TThree;
typedef uint32_t counter_one_overflow_t;
typedef uint16_t counter_three_overflow_t;
enum __nesc_unnamed4307 {
  MICA_PRESCALER_ONE = ATM128_CLK16_DIVIDE_8, 
  MICA_DIVIDE_ONE_FOR_32KHZ_LOG2 = 5, 
  MICA_PRESCALER_THREE = ATM128_CLK16_DIVIDE_8, 
  MICA_DIVIDE_THREE_FOR_MICRO_LOG2 = 0, 
  EXT_STANDBY_T0_THRESHOLD = 12
};





enum __nesc_unnamed4308 {
  PLATFORM_MHZ = 8
};
# 55 "/opt/tinyos-2.x/tos/platforms/micaz/hardware.h"
enum __nesc_unnamed4309 {
  CHANNEL_THERMISTOR = ATM128_ADC_SNGL_ADC1
};

enum __nesc_unnamed4310 {
  PLATFORM_BAUDRATE = 57600L
};
# 35 "RadioCountToLeds.h"
#line 33
typedef nx_struct radio_count_msg {
  nx_uint16_t counter;
} __attribute__((packed)) radio_count_msg_t;

enum __nesc_unnamed4311 {
  AM_RADIO_COUNT_MSG = 6
};
# 32 "/opt/tinyos-2.x/tos/types/Leds.h"
enum __nesc_unnamed4312 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 42 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154Packet.h"
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
# 29 "/opt/tinyos-2.x/tos/chips/rf230/RF230Packet.h"
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
# 6 "/opt/tinyos-2.x/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4313 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4314 {
  TOS_AM_GROUP = 0x00, 
  TOS_AM_ADDRESS = 1
};
# 72 "/opt/tinyos-2.x/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4315 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4316 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4317 {
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
# 71 "/opt/tinyos-2.x/tos/platforms/iris/platform_message.h"
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
# 19 "/opt/tinyos-2.x/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[28];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 27 "/opt/tinyos-2.x/tos/chips/rf230/RF230.h"
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
# 29 "/opt/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230.h"
enum __nesc_unnamed4318 {





  RF230_TRX_CTRL_0_VALUE = 0, 





  RF230_CCA_MODE_VALUE = RF230_CCA_MODE_3, 





  RF230_CCA_THRES_VALUE = 0xC7
};




typedef TOne TRF230;
# 28 "/opt/tinyos-2.x/tos/chips/rf230/TimeSyncMessage.h"
typedef nx_int32_t timesync_relative_t;


typedef uint32_t timesync_absolute_t;
# 251 "/usr/lib/gcc/avr/4.3.3/../../../avr/include/util/crc16.h" 3
#line 250
static __inline uint16_t 
_crc_ccitt_update(uint16_t __crc, uint8_t __data);
# 32 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.h"
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
# 33 "/opt/tinyos-2.x/tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
typedef TMilli RadioCountToLedsC__MilliTimer__precision_tag;
enum AMQueueP____nesc_unnamed4324 {
  AMQueueP__NUM_CLIENTS = 1U
};
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
typedef uint16_t /*InitOneP.InitOne*/Atm128TimerInitC__0__timer_size;
typedef /*InitOneP.InitOne*/Atm128TimerInitC__0__timer_size /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__timer_size;
typedef TOne /*CounterOne16C.NCounter*/Atm128CounterC__0__frequency_tag;
typedef uint16_t /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size;
typedef /*CounterOne16C.NCounter*/Atm128CounterC__0__frequency_tag /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__precision_tag;
typedef /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__size_type;
typedef /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__timer_size;
typedef TMicro /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__to_precision_tag;
typedef uint32_t /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__to_size_type;
typedef TMicro /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__from_precision_tag;
typedef uint16_t /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__from_size_type;
typedef uint32_t /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__upper_count_type;
typedef /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__from_precision_tag /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__precision_tag;
typedef /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__from_size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__size_type;
typedef /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__to_precision_tag /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__Counter__precision_tag;
typedef /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__to_size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__Counter__size_type;
typedef TMicro /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag;
typedef /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__precision_tag;
typedef /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__precision_tag;
typedef uint32_t /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__size_type;
enum HilTimerMilliC____nesc_unnamed4325 {
  HilTimerMilliC__TIMER_COUNT = 2U
};
typedef TMilli /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC__0__precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__size_type;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__timer_size;
typedef uint8_t HplAtm1281Timer2AsyncP__Compare__size_type;
typedef uint8_t HplAtm1281Timer2AsyncP__Timer__timer_size;
typedef TMilli /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__precision_tag;
typedef uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__size_type;
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
typedef TOne /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__frequency_tag;
typedef uint16_t /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size;
typedef /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__frequency_tag /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__precision_tag;
typedef /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__size_type;
typedef /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__size_type;
typedef /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__timer_size;
enum /*HplRF230C.AlarmC*/AlarmOne16C__0____nesc_unnamed4326 {
  AlarmOne16C__0__COMPARE_ID = 0U
};
typedef TMicro BusyWaitMicroC__BusyWait__precision_tag;
typedef uint16_t BusyWaitMicroC__BusyWait__size_type;
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t PlatformP__Init__init(void );
#line 51
static error_t MotePlatformP__PlatformInit__init(void );
# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__clr(void );


static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void );
#line 30
static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set(void );
static void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeOutput(void );
#line 35
static void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput(void );
#line 33
static void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput(void );

static void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__set(void );
static void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__clr(void );


static void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeInput(void );
#line 30
static void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__clr(void );


static void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeInput(void );
#line 30
static void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__clr(void );
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t MeasureClockC__Init__init(void );
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(
# 45 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x4035cb38);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
# 45 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x4035cb38);
# 46 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
static void SchedulerBasicP__Scheduler__init(void );
#line 61
static void SchedulerBasicP__Scheduler__taskLoop(void );
#line 54
static bool SchedulerBasicP__Scheduler__runNextTask(void );
# 59 "/opt/tinyos-2.x/tos/interfaces/McuSleep.nc"
static void McuSleepC__McuSleep__sleep(void );
# 44 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static void McuSleepC__McuPowerState__update(void );
# 92 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void RadioCountToLedsC__AMControl__startDone(error_t error);
#line 117
static void RadioCountToLedsC__AMControl__stopDone(error_t error);
# 49 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static void RadioCountToLedsC__Boot__booted(void );
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static void RadioCountToLedsC__AMSend__sendDone(
#line 92
message_t * msg, 






error_t error);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



RadioCountToLedsC__Receive__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void RadioCountToLedsC__MilliTimer__fired(void );
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t LedsP__Init__init(void );
# 50 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
static void LedsP__Leds__led0Off(void );










static void LedsP__Leds__led1On(void );




static void LedsP__Leds__led1Off(void );
#line 83
static void LedsP__Leds__led2Off(void );
#line 45
static void LedsP__Leds__led0On(void );
#line 78
static void LedsP__Leds__led2On(void );
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*RadioCountToLedsAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void /*RadioCountToLedsAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(
#line 85
message_t * msg, 



error_t error);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(
# 40 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40501910, 
# 92 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(
# 38 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40504f10, 
# 56 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 89
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(
# 38 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40504f10, 
# 85 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void );
#line 64
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void );
# 32 "/opt/tinyos-2.x/tos/chips/rf230/TrafficMonitorConfig.nc"
static uint16_t RF230ActiveMessageP__TrafficMonitorConfig__getUpdatePeriod(void );




static uint16_t RF230ActiveMessageP__TrafficMonitorConfig__getChannelTime(message_t *msg);
#line 79
static void RF230ActiveMessageP__TrafficMonitorConfig__timerTick(void );
#line 43
static am_addr_t RF230ActiveMessageP__TrafficMonitorConfig__getSender(message_t *msg);
# 60 "/opt/tinyos-2.x/tos/chips/rf230/SlottedCollisionConfig.nc"
static void RF230ActiveMessageP__SlottedCollisionConfig__default__timerTick(void );
# 31 "/opt/tinyos-2.x/tos/chips/rf230/ActiveMessageConfig.nc"
static error_t RF230ActiveMessageP__ActiveMessageConfig__checkPacket(message_t *msg);
# 74 "/opt/tinyos-2.x/tos/chips/rf230/SoftwareAckConfig.nc"
static void RF230ActiveMessageP__SoftwareAckConfig__reportChannelError(void );
#line 68
static void RF230ActiveMessageP__SoftwareAckConfig__createAckPacket(message_t *data, message_t *ack);
#line 38
static bool RF230ActiveMessageP__SoftwareAckConfig__requiresAckWait(message_t *msg);
#line 50
static bool RF230ActiveMessageP__SoftwareAckConfig__isAckPacket(message_t *msg);






static bool RF230ActiveMessageP__SoftwareAckConfig__verifyAckPacket(message_t *data, message_t *ack);
#line 32
static uint16_t RF230ActiveMessageP__SoftwareAckConfig__getAckTimeout(void );










static void RF230ActiveMessageP__SoftwareAckConfig__setAckReceived(message_t *msg, bool acked);
#line 63
static bool RF230ActiveMessageP__SoftwareAckConfig__requiresAckReply(message_t *msg);
# 48 "/opt/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static void RF230ActiveMessageP__RadioAlarm__fired(void );
# 41 "/opt/tinyos-2.x/tos/chips/rf230/UniqueConfig.nc"
static void RF230ActiveMessageP__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t number);





static void RF230ActiveMessageP__UniqueConfig__reportChannelError(void );
#line 31
static uint8_t RF230ActiveMessageP__UniqueConfig__getSequenceNumber(message_t *msg);




static am_addr_t RF230ActiveMessageP__UniqueConfig__getSender(message_t *msg);
# 35 "/opt/tinyos-2.x/tos/chips/rf230/RandomCollisionConfig.nc"
static uint16_t RF230ActiveMessageP__RandomCollisionConfig__getCongestionBackoff(message_t *msg);
#line 29
static uint16_t RF230ActiveMessageP__RandomCollisionConfig__getInitialBackoff(message_t *msg);










static uint16_t RF230ActiveMessageP__RandomCollisionConfig__getMinimumBackoff(void );





static uint16_t RF230ActiveMessageP__RandomCollisionConfig__getTransmitBarrier(message_t *msg);
# 55 "/opt/tinyos-2.x/tos/chips/rf230/RF230Config.nc"
static uint8_t RF230ActiveMessageP__RF230Config__getHeaderLength(void );










static uint8_t RF230ActiveMessageP__RF230Config__getDefaultChannel(void );
#line 46
static uint8_t *RF230ActiveMessageP__RF230Config__getPayload(message_t *msg);
#line 39
static void RF230ActiveMessageP__RF230Config__setLength(message_t *msg, uint8_t len);
#line 34
static uint8_t RF230ActiveMessageP__RF230Config__getLength(message_t *msg);
#line 60
static uint8_t RF230ActiveMessageP__RF230Config__getMaxLength(void );
#line 72
static bool RF230ActiveMessageP__RF230Config__requiresRssiCca(message_t *msg);
# 40 "/opt/tinyos-2.x/tos/chips/rf230/PacketField.nc"
static void RF230PacketP__PacketRSSI__clear(message_t *msg);





static void RF230PacketP__PacketRSSI__set(message_t *msg, RF230PacketP__PacketRSSI__value_type value);
# 54 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static void RF230PacketP__Packet__clear(
#line 51
message_t * msg);
#line 67
static uint8_t RF230PacketP__Packet__payloadLength(
#line 63
message_t * msg);
#line 115
static 
#line 112
void * 


RF230PacketP__Packet__getPayload(
#line 110
message_t * msg, 




uint8_t len);
#line 95
static uint8_t RF230PacketP__Packet__maxPayloadLength(void );
#line 83
static void RF230PacketP__Packet__setPayloadLength(
#line 79
message_t * msg, 



uint8_t len);
# 35 "/opt/tinyos-2.x/tos/chips/rf230/PacketField.nc"
static RF230PacketP__PacketTransmitPower__value_type RF230PacketP__PacketTransmitPower__get(message_t *msg);
#line 29
static bool RF230PacketP__PacketTransmitPower__isSet(message_t *msg);





static RF230PacketP__PacketTimeSyncOffset__value_type RF230PacketP__PacketTimeSyncOffset__get(message_t *msg);
#line 29
static bool RF230PacketP__PacketTimeSyncOffset__isSet(message_t *msg);
# 59 "/opt/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
static void RF230PacketP__PacketTimeStampRadio__clear(
#line 55
message_t * msg);
#line 67
static void RF230PacketP__PacketTimeStampRadio__set(
#line 62
message_t * msg, 




RF230PacketP__PacketTimeStampRadio__size_type value);
# 46 "/opt/tinyos-2.x/tos/chips/rf230/PacketField.nc"
static void RF230PacketP__PacketLinkQuality__set(message_t *msg, RF230PacketP__PacketLinkQuality__value_type value);
# 124 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
static uint8_t IEEE154PacketP__IEEE154Packet__getDSN(message_t *msg);
#line 79
static bool IEEE154PacketP__IEEE154Packet__isAckFrame(message_t *msg);
#line 172
static void IEEE154PacketP__IEEE154Packet__set6LowPan(message_t *msg, uint8_t network);
#line 160
static void IEEE154PacketP__IEEE154Packet__setSrcAddr(message_t *msg, uint16_t addr);
#line 73
static void IEEE154PacketP__IEEE154Packet__createDataFrame(message_t *msg);
#line 129
static void IEEE154PacketP__IEEE154Packet__setDSN(message_t *msg, uint8_t dsn);
#line 92
static void IEEE154PacketP__IEEE154Packet__createAckReply(message_t *data, message_t *ack);
#line 39
static ieee154_header_t *IEEE154PacketP__IEEE154Packet__getHeader(message_t *msg);
#line 155
static uint16_t IEEE154PacketP__IEEE154Packet__getSrcAddr(message_t *msg);
#line 67
static bool IEEE154PacketP__IEEE154Packet__isDataFrame(message_t *msg);
#line 184
static void IEEE154PacketP__IEEE154Packet__setType(message_t *msg, am_id_t type);
#line 103
static bool IEEE154PacketP__IEEE154Packet__getAckRequired(message_t *msg);
#line 98
static bool IEEE154PacketP__IEEE154Packet__verifyAckReply(message_t *data, message_t *ack);
#line 49
static void IEEE154PacketP__IEEE154Packet__setLength(message_t *msg, uint8_t length);
#line 167
static uint8_t IEEE154PacketP__IEEE154Packet__get6LowPan(message_t *msg);
#line 190
static bool IEEE154PacketP__IEEE154Packet__requiresAckWait(message_t *msg);
#line 150
static void IEEE154PacketP__IEEE154Packet__setDestAddr(message_t *msg, uint16_t addr);
#line 44
static uint8_t IEEE154PacketP__IEEE154Packet__getLength(message_t *msg);
#line 140
static void IEEE154PacketP__IEEE154Packet__setDestPan(message_t *msg, uint16_t pan);
#line 179
static am_id_t IEEE154PacketP__IEEE154Packet__getType(message_t *msg);
#line 196
static bool IEEE154PacketP__IEEE154Packet__requiresAckReply(message_t *msg);
#line 145
static uint16_t IEEE154PacketP__IEEE154Packet__getDestAddr(message_t *msg);
# 57 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t IEEE154PacketP__AMPacket__address(void );









static am_addr_t IEEE154PacketP__AMPacket__destination(
#line 63
message_t * amsg);
#line 110
static void IEEE154PacketP__AMPacket__setSource(
#line 106
message_t * amsg, 



am_addr_t addr);
#line 92
static void IEEE154PacketP__AMPacket__setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 136
static am_id_t IEEE154PacketP__AMPacket__type(
#line 132
message_t * amsg);
#line 151
static void IEEE154PacketP__AMPacket__setType(
#line 147
message_t * amsg, 



am_id_t t);
#line 125
static bool IEEE154PacketP__AMPacket__isForMe(
#line 122
message_t * amsg);
#line 176
static void IEEE154PacketP__AMPacket__setGroup(
#line 173
message_t * amsg, 


am_group_t grp);







static am_group_t IEEE154PacketP__AMPacket__localGroup(void );
# 44 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC__amAddress(void );
# 50 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void );




static am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void );
# 71 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerCtrl16.nc"
static uint8_t HplAtm1281Timer1P__TimerCtrl__getInterruptFlag(void );
#line 63
static void HplAtm1281Timer1P__TimerCtrl__setControlB(uint8_t control);
#line 60
static uint8_t HplAtm1281Timer1P__TimerCtrl__getControlB(void );
# 53 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer1P__CompareA__reset(void );
#line 45
static void HplAtm1281Timer1P__CompareA__set(HplAtm1281Timer1P__CompareA__size_type t);










static void HplAtm1281Timer1P__CompareA__start(void );


static void HplAtm1281Timer1P__CompareA__stop(void );
# 79 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm1281Timer1P__Capture__setEdge(bool up);
#line 38
static HplAtm1281Timer1P__Capture__size_type HplAtm1281Timer1P__Capture__get(void );
#line 55
static void HplAtm1281Timer1P__Capture__reset(void );


static void HplAtm1281Timer1P__Capture__start(void );


static void HplAtm1281Timer1P__Capture__stop(void );
# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer1P__CompareB__default__fired(void );
#line 49
static void HplAtm1281Timer1P__CompareC__default__fired(void );
# 78 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static bool HplAtm1281Timer1P__Timer__test(void );
#line 52
static HplAtm1281Timer1P__Timer__timer_size HplAtm1281Timer1P__Timer__get(void );
#line 95
static void HplAtm1281Timer1P__Timer__setScale(uint8_t scale);
#line 58
static void HplAtm1281Timer1P__Timer__set(HplAtm1281Timer1P__Timer__timer_size t);










static void HplAtm1281Timer1P__Timer__start(void );
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*InitOneP.InitOne*/Atm128TimerInitC__0__Init__init(void );
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__overflow(void );
# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__size_type /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__get(void );






static bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending(void );
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__overflow(void );
# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__overflow(void );
#line 53
static /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__Counter__size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__Counter__get(void );
# 50 "/opt/tinyos-2.x/tos/lib/timer/LocalTime.nc"
static uint32_t /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__get(void );
# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 98 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__getNow(void );
#line 92
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__startAt(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__size_type t0, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__size_type dt);
#line 105
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__getAlarm(void );
#line 62
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__stop(void );
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Init__init(void );
# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__get(void );
# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__fired(void );
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__overflow(void );
# 69 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerCtrl8.nc"
static uint8_t HplAtm1281Timer2AsyncP__TimerCtrl__getInterruptFlag(void );
#line 62
static void HplAtm1281Timer2AsyncP__TimerCtrl__setControlB(uint8_t control);
#line 61
static void HplAtm1281Timer2AsyncP__TimerCtrl__setControlA(uint8_t control);
# 54 "/opt/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t HplAtm1281Timer2AsyncP__McuPowerOverride__lowestState(void );
# 57 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerAsync.nc"
static void HplAtm1281Timer2AsyncP__TimerAsync__setTimer2Asynchronous(void );
#line 75
static int HplAtm1281Timer2AsyncP__TimerAsync__compareABusy(void );
# 39 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static HplAtm1281Timer2AsyncP__Compare__size_type HplAtm1281Timer2AsyncP__Compare__get(void );





static void HplAtm1281Timer2AsyncP__Compare__set(HplAtm1281Timer2AsyncP__Compare__size_type t);










static void HplAtm1281Timer2AsyncP__Compare__start(void );
# 52 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static HplAtm1281Timer2AsyncP__Timer__timer_size HplAtm1281Timer2AsyncP__Timer__get(void );
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );
# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
# 125 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
#line 118
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);
#line 67
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );
#line 72
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(
# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x407ef708);
# 53 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(
# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x407ef708, 
# 53 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t dt);
#line 67
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(
# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x407ef708);
# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void );
# 48 "/opt/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static void RadioAlarmP__RadioAlarm__default__fired(
# 31 "/opt/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
uint8_t arg_0x40824780);
# 38 "/opt/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static void RadioAlarmP__RadioAlarm__wait(
# 31 "/opt/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
uint8_t arg_0x40824780, 
# 38 "/opt/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
uint16_t timeout);




static void RadioAlarmP__RadioAlarm__cancel(
# 31 "/opt/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
uint8_t arg_0x40824780);
# 33 "/opt/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static bool RadioAlarmP__RadioAlarm__isFree(
# 31 "/opt/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
uint8_t arg_0x40824780);
# 53 "/opt/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static uint16_t RadioAlarmP__RadioAlarm__getNow(
# 31 "/opt/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
uint8_t arg_0x40824780);
# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void RadioAlarmP__Alarm__fired(void );
# 37 "/opt/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
static void RadioAlarmP__Tasklet__run(void );










static void TaskletC__Tasklet__schedule(void );
#line 61
static void TaskletC__Tasklet__suspend(void );






static void TaskletC__Tasklet__resume(void );
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void ActiveMessageLayerC__SubSend__sendDone(
#line 85
message_t * msg, 



error_t error);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



ActiveMessageLayerC__SubReceive__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t ActiveMessageLayerC__AMSend__send(
# 28 "/opt/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
am_id_t arg_0x40841230, 
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



ActiveMessageLayerC__Snoop__default__receive(
# 30 "/opt/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
am_id_t arg_0x4083f2a8, 
# 60 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 67
static 
#line 63
message_t * 



ActiveMessageLayerC__Receive__default__receive(
# 29 "/opt/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
am_id_t arg_0x40841bf0, 
# 60 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void IEEE154NetworkLayerP__SubSend__sendDone(
#line 85
message_t * msg, 



error_t error);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



IEEE154NetworkLayerP__SubReceive__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static error_t IEEE154NetworkLayerP__Send__send(
#line 56
message_t * msg, 







uint8_t len);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



IEEE154NetworkLayerP__NonTinyosReceive__default__receive(
# 30 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154NetworkLayerP.nc"
uint8_t arg_0x4085e480, 
# 60 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 83 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t MessageBufferLayerP__SplitControl__start(void );
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t MessageBufferLayerP__SoftwareInit__init(void );
# 58 "/opt/tinyos-2.x/tos/chips/rf230/RadioState.nc"
static void MessageBufferLayerP__RadioState__done(void );
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static error_t MessageBufferLayerP__Send__send(
#line 56
message_t * msg, 







uint8_t len);
# 42 "/opt/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
static message_t *MessageBufferLayerP__RadioReceive__receive(message_t *msg);
#line 35
static bool MessageBufferLayerP__RadioReceive__header(message_t *msg);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void MessageBufferLayerP__stateDoneTask__runTask(void );
#line 64
static void MessageBufferLayerP__sendTask__runTask(void );
#line 64
static void MessageBufferLayerP__deliverTask__runTask(void );
# 52 "/opt/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static void MessageBufferLayerP__RadioSend__ready(void );
#line 45
static void MessageBufferLayerP__RadioSend__sendDone(error_t error);
# 37 "/opt/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
static void MessageBufferLayerP__Tasklet__run(void );
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void UniqueLayerP__SubSend__sendDone(
#line 85
message_t * msg, 



error_t error);
# 42 "/opt/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
static message_t *UniqueLayerP__SubReceive__receive(message_t *msg);
#line 35
static bool UniqueLayerP__SubReceive__header(message_t *msg);
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static error_t UniqueLayerP__Send__send(
#line 56
message_t * msg, 







uint8_t len);
# 69 "/opt/tinyos-2.x/tos/chips/rf230/Neighborhood.nc"
static void UniqueLayerP__Neighborhood__evicted(uint8_t index);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t UniqueLayerP__Init__init(void );
# 51 "/opt/tinyos-2.x/tos/chips/rf230/NeighborhoodFlag.nc"
static void NeighborhoodP__NeighborhoodFlag__clearAll(
# 32 "/opt/tinyos-2.x/tos/chips/rf230/NeighborhoodP.nc"
uint8_t arg_0x408de1c0);
# 35 "/opt/tinyos-2.x/tos/chips/rf230/NeighborhoodFlag.nc"
static bool NeighborhoodP__NeighborhoodFlag__get(
# 32 "/opt/tinyos-2.x/tos/chips/rf230/NeighborhoodP.nc"
uint8_t arg_0x408de1c0, 
# 35 "/opt/tinyos-2.x/tos/chips/rf230/NeighborhoodFlag.nc"
uint8_t index);




static void NeighborhoodP__NeighborhoodFlag__set(
# 32 "/opt/tinyos-2.x/tos/chips/rf230/NeighborhoodP.nc"
uint8_t arg_0x408de1c0, 
# 40 "/opt/tinyos-2.x/tos/chips/rf230/NeighborhoodFlag.nc"
uint8_t index);
# 60 "/opt/tinyos-2.x/tos/chips/rf230/Neighborhood.nc"
static uint8_t NeighborhoodP__Neighborhood__insertNode(am_addr_t id);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t NeighborhoodP__Init__init(void );
# 52 "/opt/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static void TrafficMonitorLayerP__SubSend__ready(void );
#line 45
static void TrafficMonitorLayerP__SubSend__sendDone(error_t error);
# 50 "/opt/tinyos-2.x/tos/chips/rf230/TrafficMonitorConfig.nc"
static void TrafficMonitorLayerP__TrafficMonitorConfig__channelError(void );
# 42 "/opt/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
static message_t *TrafficMonitorLayerP__SubReceive__receive(message_t *msg);
#line 35
static bool TrafficMonitorLayerP__SubReceive__header(message_t *msg);
# 45 "/opt/tinyos-2.x/tos/chips/rf230/RadioState.nc"
static error_t TrafficMonitorLayerP__RadioState__turnOn(void );
#line 58
static void TrafficMonitorLayerP__SubState__done(void );
# 69 "/opt/tinyos-2.x/tos/chips/rf230/Neighborhood.nc"
static void TrafficMonitorLayerP__Neighborhood__evicted(uint8_t index);
# 37 "/opt/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
static void TrafficMonitorLayerP__Tasklet__run(void );
# 37 "/opt/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static error_t TrafficMonitorLayerP__RadioSend__send(message_t *msg);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void TrafficMonitorLayerP__startStopTimer__runTask(void );
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void TrafficMonitorLayerP__Timer__fired(void );
# 52 "/opt/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static void RandomCollisionLayerP__SubSend__ready(void );
#line 45
static void RandomCollisionLayerP__SubSend__sendDone(error_t error);
# 42 "/opt/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
static message_t *RandomCollisionLayerP__SubReceive__receive(message_t *msg);
#line 35
static bool RandomCollisionLayerP__SubReceive__header(message_t *msg);
# 48 "/opt/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static void RandomCollisionLayerP__RadioAlarm__fired(void );
# 37 "/opt/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static error_t RandomCollisionLayerP__RadioSend__send(message_t *msg);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void RandomCollisionLayerP__calcNextRandom__runTask(void );
# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
static uint16_t RandomMlcgC__Random__rand16(void );
#line 35
static uint32_t RandomMlcgC__Random__rand32(void );
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t RandomMlcgC__Init__init(void );
# 52 "/opt/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static void SoftwareAckLayerP__SubSend__ready(void );
#line 45
static void SoftwareAckLayerP__SubSend__sendDone(error_t error);
# 42 "/opt/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
static message_t *SoftwareAckLayerP__SubReceive__receive(message_t *msg);
#line 35
static bool SoftwareAckLayerP__SubReceive__header(message_t *msg);
# 48 "/opt/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static void SoftwareAckLayerP__RadioAlarm__fired(void );
# 37 "/opt/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static error_t SoftwareAckLayerP__RadioSend__send(message_t *msg);
# 41 "/opt/tinyos-2.x/tos/chips/rf230/RadioCCA.nc"
static void RF230LayerP__RadioCCA__default__done(error_t error);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t RF230LayerP__SoftwareInit__init(void );
# 45 "/opt/tinyos-2.x/tos/chips/rf230/RadioState.nc"
static error_t RF230LayerP__RadioState__turnOn(void );
# 48 "/opt/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static void RF230LayerP__RadioAlarm__fired(void );
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t RF230LayerP__PlatformInit__init(void );
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void RF230LayerP__SpiResource__granted(void );
# 37 "/opt/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static error_t RF230LayerP__RadioSend__send(message_t *msg);
# 50 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static void RF230LayerP__IRQ__captured(uint16_t time);
# 37 "/opt/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
static void RF230LayerP__Tasklet__run(void );
# 47 "/opt/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230.nc"
static uint8_t HplRF230P__HplRF230__spiSplitRead(void );





static uint8_t HplRF230P__HplRF230__spiSplitReadWrite(uint8_t data);





static uint8_t HplRF230P__HplRF230__spiWrite(uint8_t data);
#line 41
static void HplRF230P__HplRF230__spiSplitWrite(uint8_t data);
#line 33
static uint16_t HplRF230P__HplRF230__crcByte(uint16_t crc, uint8_t data);
# 51 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplRF230P__Capture__captured(HplRF230P__Capture__size_type t);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t HplRF230P__PlatformInit__init(void );
# 55 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static void HplRF230P__IRQ__disable(void );
#line 42
static error_t HplRF230P__IRQ__captureRisingEdge(void );
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void Atm128SpiP__zeroTask__runTask(void );
# 71 "/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static void Atm128SpiP__SpiPacket__default__sendDone(
#line 64
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void Atm128SpiP__ResourceArbiter__granted(
# 84 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40a3a7d0);
# 34 "/opt/tinyos-2.x/tos/interfaces/SpiByte.nc"
static uint8_t Atm128SpiP__SpiByte__write(uint8_t tx);
# 92 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static void Atm128SpiP__Spi__dataReady(uint8_t data);
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Atm128SpiP__Resource__release(
# 80 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40a1a7f0);
# 87 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Atm128SpiP__Resource__immediateRequest(
# 80 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40a1a7f0);
# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Atm128SpiP__Resource__request(
# 80 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40a1a7f0);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void Atm128SpiP__Resource__default__granted(
# 80 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40a1a7f0);
# 118 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static bool Atm128SpiP__Resource__isOwner(
# 80 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40a1a7f0);
# 72 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static void HplAtm128SpiP__SPI__sleep(void );
#line 66
static void HplAtm128SpiP__SPI__initMaster(void );
#line 105
static void HplAtm128SpiP__SPI__setMasterBit(bool isMaster);
#line 96
static void HplAtm128SpiP__SPI__enableInterrupt(bool enabled);
#line 80
static uint8_t HplAtm128SpiP__SPI__read(void );
#line 125
static void HplAtm128SpiP__SPI__setMasterDoubleSpeed(bool on);
#line 114
static void HplAtm128SpiP__SPI__setClock(uint8_t speed);
#line 108
static void HplAtm128SpiP__SPI__setClockPolarity(bool highWhenIdle);
#line 86
static void HplAtm128SpiP__SPI__write(uint8_t data);
#line 99
static void HplAtm128SpiP__SPI__enableSpi(bool busOn);
#line 111
static void HplAtm128SpiP__SPI__setClockPhase(bool sampleOnTrailing);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__Init__init(void );
# 69 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
#line 43
static bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );








static bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
# 43 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(
# 52 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40a975b0);
# 51 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(
# 52 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40a975b0);
# 55 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(
# 56 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40a96200);
# 49 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(
# 56 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40a96200);
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(
# 51 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40aa7b58);
# 87 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(
# 51 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40aa7b58);
# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(
# 51 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40aa7b58);
# 118 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__isOwner(
# 51 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40aa7b58);
# 80 "/opt/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ArbiterInfo__inUse(void );
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void );
# 98 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__size_type /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__getNow(void );
#line 92
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__startAt(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__size_type t0, /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__size_type dt);
#line 55
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__start(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__size_type dt);






static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__stop(void );
# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__fired(void );
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__overflow(void );
# 55 "/opt/tinyos-2.x/tos/lib/timer/BusyWait.nc"
static void BusyWaitMicroC__BusyWait__wait(BusyWaitMicroC__BusyWait__size_type dt);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t PlatformP__MoteInit__init(void );
#line 51
static error_t PlatformP__MeasureClock__init(void );
# 42 "/opt/tinyos-2.x/tos/platforms/mica/PlatformP.nc"
static inline void PlatformP__power_init(void );






static inline error_t PlatformP__Init__init(void );
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t MotePlatformP__SubInit__init(void );
# 33 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void MotePlatformP__SerialIdPin__makeInput(void );
#line 30
static void MotePlatformP__SerialIdPin__clr(void );
# 26 "/opt/tinyos-2.x/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP__PlatformInit__init(void );
# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void );
#line 47
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput(void );
#line 52
static __inline void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeOutput(void );
#line 52
static __inline void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput(void );
#line 50
static __inline void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__makeOutput(void );
#line 47
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeInput(void );
#line 47
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeInput(void );
# 56 "/opt/tinyos-2.x/tos/platforms/iris/MeasureClockC.nc"
enum MeasureClockC____nesc_unnamed4327 {


  MeasureClockC__MAGIC = 488 / (16 / PLATFORM_MHZ)
};

uint16_t MeasureClockC__cycles;

static inline error_t MeasureClockC__Init__init(void );
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t RealMainP__SoftwareInit__init(void );
# 49 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static void RealMainP__Boot__booted(void );
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t RealMainP__PlatformInit__init(void );
# 46 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
static void RealMainP__Scheduler__init(void );
#line 61
static void RealMainP__Scheduler__taskLoop(void );
#line 54
static bool RealMainP__Scheduler__runNextTask(void );
# 52 "/opt/tinyos-2.x/tos/system/RealMainP.nc"
int main(void )   ;
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(
# 45 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x4035cb38);
# 59 "/opt/tinyos-2.x/tos/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void );
# 50 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4328 {

  SchedulerBasicP__NUM_TASKS = 11U, 
  SchedulerBasicP__NO_TASK = 255
};

volatile uint8_t SchedulerBasicP__m_head;
volatile uint8_t SchedulerBasicP__m_tail;
volatile uint8_t SchedulerBasicP__m_next[SchedulerBasicP__NUM_TASKS];








static __inline uint8_t SchedulerBasicP__popTask(void );
#line 86
static inline bool SchedulerBasicP__isWaiting(uint8_t id);




static inline bool SchedulerBasicP__pushTask(uint8_t id);
#line 113
static inline void SchedulerBasicP__Scheduler__init(void );









static bool SchedulerBasicP__Scheduler__runNextTask(void );
#line 138
static inline void SchedulerBasicP__Scheduler__taskLoop(void );
#line 159
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id);




static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id);
# 54 "/opt/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void );
# 80 "/opt/tinyos-2.x/tos/chips/atm1281/McuSleepC.nc"
const_uint8_t McuSleepC__atm128PowerBits[ATM128_POWER_DOWN + 1] = { 
0, 
1 << 1, ((
1 << 3) | (1 << 2)) | (1 << 1), (
1 << 2) | (1 << 1), (
1 << 3) | (1 << 2), 
1 << 2 };

static inline mcu_power_t McuSleepC__getPowerState(void );
#line 128
static inline void McuSleepC__McuSleep__sleep(void );
#line 141
static inline void McuSleepC__McuPowerState__update(void );
# 83 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t RadioCountToLedsC__AMControl__start(void );
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t RadioCountToLedsC__AMSend__send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
# 115 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static 
#line 112
void * 


RadioCountToLedsC__Packet__getPayload(
#line 110
message_t * msg, 




uint8_t len);
# 53 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void RadioCountToLedsC__MilliTimer__startPeriodic(uint32_t dt);
# 50 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
static void RadioCountToLedsC__Leds__led0Off(void );










static void RadioCountToLedsC__Leds__led1On(void );




static void RadioCountToLedsC__Leds__led1Off(void );
#line 83
static void RadioCountToLedsC__Leds__led2Off(void );
#line 45
static void RadioCountToLedsC__Leds__led0On(void );
#line 78
static void RadioCountToLedsC__Leds__led2On(void );
# 59 "RadioCountToLedsC.nc"
message_t RadioCountToLedsC__packet;

bool RadioCountToLedsC__locked;
uint16_t RadioCountToLedsC__counter = 0;

static inline void RadioCountToLedsC__Boot__booted(void );



static inline void RadioCountToLedsC__AMControl__startDone(error_t err);








static inline void RadioCountToLedsC__AMControl__stopDone(error_t err);



static inline void RadioCountToLedsC__MilliTimer__fired(void );
#line 101
static inline message_t *RadioCountToLedsC__Receive__receive(message_t *bufPtr, 
void *payload, uint8_t len);
#line 129
static inline void RadioCountToLedsC__AMSend__sendDone(message_t *bufPtr, error_t error);
# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void LedsP__Led0__makeOutput(void );
#line 29
static void LedsP__Led0__set(void );
static void LedsP__Led0__clr(void );




static void LedsP__Led1__makeOutput(void );
#line 29
static void LedsP__Led1__set(void );
static void LedsP__Led1__clr(void );




static void LedsP__Led2__makeOutput(void );
#line 29
static void LedsP__Led2__set(void );
static void LedsP__Led2__clr(void );
# 45 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void );
#line 63
static inline void LedsP__Leds__led0On(void );




static inline void LedsP__Leds__led0Off(void );









static inline void LedsP__Leds__led1On(void );




static inline void LedsP__Leds__led1Off(void );









static inline void LedsP__Leds__led2On(void );




static inline void LedsP__Leds__led2Off(void );
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*RadioCountToLedsAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(
#line 92
message_t * msg, 






error_t error);
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*RadioCountToLedsAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(
#line 56
message_t * msg, 







uint8_t len);
# 92 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static void /*RadioCountToLedsAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 151
static void /*RadioCountToLedsAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(
#line 147
message_t * amsg, 



am_id_t t);
# 45 "/opt/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline error_t /*RadioCountToLedsAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*RadioCountToLedsAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(message_t *m, error_t err);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(
# 40 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40501910, 
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(
# 38 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40504f10, 
# 85 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(
#line 63
message_t * msg);
#line 83
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(
#line 79
message_t * msg, 



uint8_t len);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask(void );
# 67 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(
#line 63
message_t * amsg);
#line 136
static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(
#line 132
message_t * amsg);
# 118 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4329 {
#line 118
  AMQueueImplP__0__CancelTask = 0U
};
#line 118
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_sillytask_CancelTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask];
#line 161
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4330 {
#line 161
  AMQueueImplP__0__errorTask = 1U
};
#line 161
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_sillytask_errorTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask];
#line 49
#line 47
typedef struct /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4331 {
  message_t * msg;
} /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue_entry_t;

uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = 1;
/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue_entry_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[1];
uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[1 / 8 + 1];

static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void );

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket(void );
#line 82
static inline error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len);
#line 118
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void );
#line 155
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(uint8_t last, message_t * msg, error_t err);





static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void );




static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void );
#line 181
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(am_id_t id, message_t *msg, error_t err);
#line 207
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(uint8_t id, message_t *msg, error_t err);
# 50 "/opt/tinyos-2.x/tos/chips/rf230/TrafficMonitorConfig.nc"
static void RF230ActiveMessageP__TrafficMonitorConfig__channelError(void );
# 60 "/opt/tinyos-2.x/tos/chips/rf230/SlottedCollisionConfig.nc"
static void RF230ActiveMessageP__SlottedCollisionConfig__timerTick(void );
# 124 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
static uint8_t RF230ActiveMessageP__IEEE154Packet__getDSN(message_t *msg);
#line 79
static bool RF230ActiveMessageP__IEEE154Packet__isAckFrame(message_t *msg);
#line 129
static void RF230ActiveMessageP__IEEE154Packet__setDSN(message_t *msg, uint8_t dsn);
#line 92
static void RF230ActiveMessageP__IEEE154Packet__createAckReply(message_t *data, message_t *ack);
#line 39
static ieee154_header_t *RF230ActiveMessageP__IEEE154Packet__getHeader(message_t *msg);
#line 155
static uint16_t RF230ActiveMessageP__IEEE154Packet__getSrcAddr(message_t *msg);
#line 67
static bool RF230ActiveMessageP__IEEE154Packet__isDataFrame(message_t *msg);
#line 103
static bool RF230ActiveMessageP__IEEE154Packet__getAckRequired(message_t *msg);
#line 98
static bool RF230ActiveMessageP__IEEE154Packet__verifyAckReply(message_t *data, message_t *ack);
#line 49
static void RF230ActiveMessageP__IEEE154Packet__setLength(message_t *msg, uint8_t length);
#line 190
static bool RF230ActiveMessageP__IEEE154Packet__requiresAckWait(message_t *msg);
#line 44
static uint8_t RF230ActiveMessageP__IEEE154Packet__getLength(message_t *msg);
#line 196
static bool RF230ActiveMessageP__IEEE154Packet__requiresAckReply(message_t *msg);
# 54 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static void RF230ActiveMessageP__Packet__clear(
#line 51
message_t * msg);
# 53 "/opt/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static uint16_t RF230ActiveMessageP__RadioAlarm__getNow(void );
# 55 "/opt/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline uint8_t RF230ActiveMessageP__RF230Config__getLength(message_t *msg);




static inline void RF230ActiveMessageP__RF230Config__setLength(message_t *msg, uint8_t len);




static inline uint8_t *RF230ActiveMessageP__RF230Config__getPayload(message_t *msg);




static __inline rf230packet_metadata_t *RF230ActiveMessageP__getMeta(message_t *msg);




static inline uint8_t RF230ActiveMessageP__RF230Config__getHeaderLength(void );





static inline uint8_t RF230ActiveMessageP__RF230Config__getMaxLength(void );





static inline uint8_t RF230ActiveMessageP__RF230Config__getDefaultChannel(void );




static inline bool RF230ActiveMessageP__RF230Config__requiresRssiCca(message_t *msg);






static inline bool RF230ActiveMessageP__SoftwareAckConfig__requiresAckWait(message_t *msg);




static inline bool RF230ActiveMessageP__SoftwareAckConfig__isAckPacket(message_t *msg);




static inline bool RF230ActiveMessageP__SoftwareAckConfig__verifyAckPacket(message_t *data, message_t *ack);




static inline bool RF230ActiveMessageP__SoftwareAckConfig__requiresAckReply(message_t *msg);




static inline void RF230ActiveMessageP__SoftwareAckConfig__createAckPacket(message_t *data, message_t *ack);




static void RF230ActiveMessageP__SoftwareAckConfig__setAckReceived(message_t *msg, bool acked);







static inline uint16_t RF230ActiveMessageP__SoftwareAckConfig__getAckTimeout(void );




static inline void RF230ActiveMessageP__SoftwareAckConfig__reportChannelError(void );






static inline uint8_t RF230ActiveMessageP__UniqueConfig__getSequenceNumber(message_t *msg);




static inline void RF230ActiveMessageP__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t dsn);




static inline am_addr_t RF230ActiveMessageP__UniqueConfig__getSender(message_t *msg);




static inline void RF230ActiveMessageP__UniqueConfig__reportChannelError(void );






static inline error_t RF230ActiveMessageP__ActiveMessageConfig__checkPacket(message_t *msg);
#line 184
enum RF230ActiveMessageP____nesc_unnamed4332 {

  RF230ActiveMessageP__TRAFFIC_UPDATE_PERIOD = 100, 
  RF230ActiveMessageP__TRAFFIC_MAX_BYTES = (uint16_t )(RF230ActiveMessageP__TRAFFIC_UPDATE_PERIOD * 1000UL / 32)
};

static inline uint16_t RF230ActiveMessageP__TrafficMonitorConfig__getUpdatePeriod(void );




static uint16_t RF230ActiveMessageP__TrafficMonitorConfig__getChannelTime(message_t *msg);
#line 208
static inline am_addr_t RF230ActiveMessageP__TrafficMonitorConfig__getSender(message_t *msg);




static inline void RF230ActiveMessageP__TrafficMonitorConfig__timerTick(void );
#line 229
static inline uint16_t RF230ActiveMessageP__RandomCollisionConfig__getMinimumBackoff(void );




static inline uint16_t RF230ActiveMessageP__RandomCollisionConfig__getInitialBackoff(message_t *msg);




static inline uint16_t RF230ActiveMessageP__RandomCollisionConfig__getCongestionBackoff(message_t *msg);




static inline uint16_t RF230ActiveMessageP__RandomCollisionConfig__getTransmitBarrier(message_t *msg);
#line 260
static inline void RF230ActiveMessageP__RadioAlarm__fired(void );
#line 291
static inline void RF230ActiveMessageP__SlottedCollisionConfig__default__timerTick(void );
# 73 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
static void RF230PacketP__IEEE154Packet__createDataFrame(message_t *msg);
#line 49
static void RF230PacketP__IEEE154Packet__setLength(message_t *msg, uint8_t length);
#line 44
static uint8_t RF230PacketP__IEEE154Packet__getLength(message_t *msg);
# 54 "/opt/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
enum RF230PacketP____nesc_unnamed4333 {

  RF230PacketP__PACKET_LENGTH_INCREASE = 
  sizeof(rf230packet_header_t ) - 1
   + sizeof(ieee154_footer_t )
};

static __inline rf230packet_metadata_t *RF230PacketP__getMeta(message_t *msg);






static inline void RF230PacketP__Packet__clear(message_t *msg);






static __inline void RF230PacketP__Packet__setPayloadLength(message_t *msg, uint8_t len);




static __inline uint8_t RF230PacketP__Packet__payloadLength(message_t *msg);




static __inline uint8_t RF230PacketP__Packet__maxPayloadLength(void );




static inline void *RF230PacketP__Packet__getPayload(message_t *msg, uint8_t len);
#line 135
static inline void RF230PacketP__PacketLinkQuality__set(message_t *msg, uint8_t value);
#line 152
static inline void RF230PacketP__PacketTimeStampRadio__clear(message_t *msg);




static void RF230PacketP__PacketTimeStampRadio__set(message_t *msg, uint32_t value);
#line 193
static inline bool RF230PacketP__PacketTransmitPower__isSet(message_t *msg);




static inline uint8_t RF230PacketP__PacketTransmitPower__get(message_t *msg);
#line 227
static inline void RF230PacketP__PacketRSSI__clear(message_t *msg);




static inline void RF230PacketP__PacketRSSI__set(message_t *msg, uint8_t value);








static inline bool RF230PacketP__PacketTimeSyncOffset__isSet(message_t *msg);




static inline uint8_t RF230PacketP__PacketTimeSyncOffset__get(message_t *msg);
# 50 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t IEEE154PacketP__ActiveMessageAddress__amAddress(void );




static am_group_t IEEE154PacketP__ActiveMessageAddress__amGroup(void );
# 41 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
enum IEEE154PacketP____nesc_unnamed4334 {

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




static __inline ieee154_header_t *IEEE154PacketP__IEEE154Packet__getHeader(message_t *msg);




static __inline uint8_t IEEE154PacketP__IEEE154Packet__getLength(message_t *msg);




static __inline void IEEE154PacketP__IEEE154Packet__setLength(message_t *msg, uint8_t length);
#line 88
static __inline bool IEEE154PacketP__IEEE154Packet__isDataFrame(message_t *msg);




static __inline void IEEE154PacketP__IEEE154Packet__createDataFrame(message_t *msg);




static __inline bool IEEE154PacketP__IEEE154Packet__isAckFrame(message_t *msg);
#line 111
static __inline void IEEE154PacketP__IEEE154Packet__createAckReply(message_t *data, message_t *ack);








static __inline bool IEEE154PacketP__IEEE154Packet__verifyAckReply(message_t *data, message_t *ack);







static __inline bool IEEE154PacketP__IEEE154Packet__getAckRequired(message_t *msg);
#line 154
static __inline uint8_t IEEE154PacketP__IEEE154Packet__getDSN(message_t *msg);




static __inline void IEEE154PacketP__IEEE154Packet__setDSN(message_t *msg, uint8_t dsn);









static __inline void IEEE154PacketP__IEEE154Packet__setDestPan(message_t *msg, uint16_t pan);




static __inline uint16_t IEEE154PacketP__IEEE154Packet__getDestAddr(message_t *msg);




static __inline void IEEE154PacketP__IEEE154Packet__setDestAddr(message_t *msg, uint16_t addr);




static __inline uint16_t IEEE154PacketP__IEEE154Packet__getSrcAddr(message_t *msg);




static __inline void IEEE154PacketP__IEEE154Packet__setSrcAddr(message_t *msg, uint16_t addr);






static __inline uint8_t IEEE154PacketP__IEEE154Packet__get6LowPan(message_t *msg);




static __inline void IEEE154PacketP__IEEE154Packet__set6LowPan(message_t *msg, uint8_t network);






static __inline am_id_t IEEE154PacketP__IEEE154Packet__getType(message_t *msg);




static __inline void IEEE154PacketP__IEEE154Packet__setType(message_t *msg, am_id_t type);




static inline bool IEEE154PacketP__IEEE154Packet__requiresAckWait(message_t *msg);






static bool IEEE154PacketP__IEEE154Packet__requiresAckReply(message_t *msg);
#line 238
static __inline am_addr_t IEEE154PacketP__AMPacket__address(void );




static __inline am_group_t IEEE154PacketP__AMPacket__localGroup(void );





static __inline am_addr_t IEEE154PacketP__AMPacket__destination(message_t *msg);









static __inline void IEEE154PacketP__AMPacket__setDestination(message_t *msg, am_addr_t addr);




static __inline void IEEE154PacketP__AMPacket__setSource(message_t *msg, am_addr_t addr);




static __inline bool IEEE154PacketP__AMPacket__isForMe(message_t *msg);





static __inline am_id_t IEEE154PacketP__AMPacket__type(message_t *msg);




static __inline void IEEE154PacketP__AMPacket__setType(message_t *msg, am_id_t type);









static __inline void IEEE154PacketP__AMPacket__setGroup(message_t *msg, am_group_t grp);
# 51 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
am_addr_t ActiveMessageAddressC__addr = TOS_AM_ADDRESS;


am_group_t ActiveMessageAddressC__group = TOS_AM_GROUP;






static inline am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void );
#line 82
static inline am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void );
#line 95
static am_addr_t ActiveMessageAddressC__amAddress(void );
# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer1P__CompareA__fired(void );
# 51 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm1281Timer1P__Capture__captured(HplAtm1281Timer1P__Capture__size_type t);
# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer1P__CompareB__fired(void );
#line 49
static void HplAtm1281Timer1P__CompareC__fired(void );
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm1281Timer1P__Timer__overflow(void );
# 70 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline uint16_t HplAtm1281Timer1P__Timer__get(void );


static inline void HplAtm1281Timer1P__Timer__set(uint16_t t);








static inline void HplAtm1281Timer1P__Timer__setScale(uint8_t s);










static inline uint8_t HplAtm1281Timer1P__TimerCtrl__getControlB(void );
#line 106
static inline void HplAtm1281Timer1P__TimerCtrl__setControlB(uint8_t x);
#line 125
static inline uint8_t HplAtm1281Timer1P__TimerCtrl__getInterruptFlag(void );









static inline void HplAtm1281Timer1P__Capture__setEdge(bool up);



static inline void HplAtm1281Timer1P__Capture__reset(void );
static inline void HplAtm1281Timer1P__CompareA__reset(void );



static inline void HplAtm1281Timer1P__Timer__start(void );
static inline void HplAtm1281Timer1P__Capture__start(void );
static inline void HplAtm1281Timer1P__CompareA__start(void );




static inline void HplAtm1281Timer1P__Capture__stop(void );
static inline void HplAtm1281Timer1P__CompareA__stop(void );



static inline bool HplAtm1281Timer1P__Timer__test(void );
#line 194
static inline void HplAtm1281Timer1P__CompareA__set(uint16_t t);




static inline uint16_t HplAtm1281Timer1P__Capture__get(void );






void __vector_17(void ) __attribute((interrupt))   ;


static inline void HplAtm1281Timer1P__CompareB__default__fired(void );
void __vector_18(void ) __attribute((interrupt))   ;


static inline void HplAtm1281Timer1P__CompareC__default__fired(void );
void __vector_19(void ) __attribute((interrupt))   ;



void __vector_16(void ) __attribute((interrupt))   ;



void __vector_20(void ) __attribute((interrupt))   ;
# 95 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__setScale(uint8_t scale);
#line 58
static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__set(/*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__timer_size t);










static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__start(void );
# 42 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitOneP.InitOne*/Atm128TimerInitC__0__Init__init(void );








static inline void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__overflow(void );
# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__overflow(void );
# 78 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__test(void );
#line 52
static /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__get(void );
# 41 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__get(void );




static inline bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending(void );









static inline void /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__overflow(void );
# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__get(void );






static bool /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__isOverflowPending(void );










static void /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__Counter__overflow(void );
# 56 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
/*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__upper_count_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__m_upper;

enum /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0____nesc_unnamed4335 {

  TransformCounterC__0__LOW_SHIFT_RIGHT = 0, 
  TransformCounterC__0__HIGH_SHIFT_LEFT = 8 * sizeof(/*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__from_size_type ) - /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__LOW_SHIFT_RIGHT, 
  TransformCounterC__0__NUM_UPPER_BITS = 8 * sizeof(/*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__to_size_type ) - 8 * sizeof(/*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__from_size_type ) + 0, 



  TransformCounterC__0__OVERFLOW_MASK = /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__NUM_UPPER_BITS ? ((/*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__upper_count_type )2 << (/*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__to_size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__Counter__get(void );
#line 122
static inline void /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__overflow(void );
# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__size_type /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__get(void );
# 42 "/opt/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline uint32_t /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__get(void );




static inline void /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 69 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerCtrl8.nc"
static uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__getInterruptFlag(void );
#line 62
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__setControlB(uint8_t control);
#line 61
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__setControlA(uint8_t control);
# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__fired(void );
# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__overflow(void );
# 57 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerAsync.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerAsync__setTimer2Asynchronous(void );
#line 75
static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerAsync__compareABusy(void );
# 39 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__get(void );





static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__size_type t);










static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__start(void );
# 52 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__get(void );
# 62 "/opt/tinyos-2.x/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__set;
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__t0;
#line 63
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__dt;
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base;



enum /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0____nesc_unnamed4336 {
  Atm1281AlarmAsyncP__0__MINDT = 2, 
  Atm1281AlarmAsyncP__0__MAXT = 230
};



static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setInterrupt(void );


static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Init__init(void );
#line 101
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setOcr2A(uint8_t n);
#line 117
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setInterrupt(void );
#line 176
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__fired(void );
#line 188
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__get(void );
#line 231
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__stop(void );







static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__startAt(uint32_t nt0, uint32_t ndt);









static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__getNow(void );



static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__getAlarm(void );



static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__overflow(void );
# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer2AsyncP__Compare__fired(void );
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm1281Timer2AsyncP__Timer__overflow(void );
# 79 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline uint8_t HplAtm1281Timer2AsyncP__Timer__get(void );
#line 111
static inline void HplAtm1281Timer2AsyncP__TimerCtrl__setControlA(uint8_t x);





static inline void HplAtm1281Timer2AsyncP__TimerCtrl__setControlB(uint8_t x);
#line 134
static inline uint8_t HplAtm1281Timer2AsyncP__TimerCtrl__getInterruptFlag(void );
#line 161
static inline void HplAtm1281Timer2AsyncP__Compare__start(void );









static inline uint8_t HplAtm1281Timer2AsyncP__Compare__get(void );


static inline void HplAtm1281Timer2AsyncP__Compare__set(uint8_t t);









static __inline void HplAtm1281Timer2AsyncP__stabiliseTimer2(void );
#line 199
static inline mcu_power_t HplAtm1281Timer2AsyncP__McuPowerOverride__lowestState(void );
#line 222
void __vector_13(void ) __attribute((signal))   ;







void __vector_15(void ) __attribute((signal))   ;
#line 246
static inline void HplAtm1281Timer2AsyncP__TimerAsync__setTimer2Asynchronous(void );
#line 258
static inline int HplAtm1281Timer2AsyncP__TimerAsync__compareABusy(void );
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void );
# 98 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void );
#line 92
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt);
#line 105
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void );
#line 62
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void );
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void );
# 63 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_unnamed4337 {
#line 63
  AlarmToTimerC__0__fired = 2U
};
#line 63
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_sillytask_fired[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired];
#line 44
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt;
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot;

static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot);
#line 60
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );


static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );






static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
#line 82
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void );
# 125 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void );
#line 118
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt);
#line 67
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(
# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x407ef708);
#line 60
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4338 {
#line 60
  VirtualizeTimerC__0__updateFromTimer = 3U
};
#line 60
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer];
#line 42
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4339 {

  VirtualizeTimerC__0__NUM_TIMERS = 2, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








#line 48
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4340 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS];




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now);
#line 89
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
#line 128
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);









static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt);









static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num);
#line 193
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
# 47 "/opt/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void );
# 48 "/opt/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static void RadioAlarmP__RadioAlarm__fired(
# 31 "/opt/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
uint8_t arg_0x40824780);
# 98 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static RadioAlarmP__Alarm__size_type RadioAlarmP__Alarm__getNow(void );
#line 55
static void RadioAlarmP__Alarm__start(RadioAlarmP__Alarm__size_type dt);






static void RadioAlarmP__Alarm__stop(void );
# 48 "/opt/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
static void RadioAlarmP__Tasklet__schedule(void );
# 43 "/opt/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
uint8_t RadioAlarmP__state;
enum RadioAlarmP____nesc_unnamed4341 {

  RadioAlarmP__STATE_READY = 0, 
  RadioAlarmP__STATE_WAIT = 1, 
  RadioAlarmP__STATE_FIRED = 2
};

uint8_t RadioAlarmP__alarm;

static inline void RadioAlarmP__Alarm__fired(void );










static __inline uint16_t RadioAlarmP__RadioAlarm__getNow(uint8_t id);




static inline void RadioAlarmP__Tasklet__run(void );








static inline void RadioAlarmP__RadioAlarm__default__fired(uint8_t id);



static __inline bool RadioAlarmP__RadioAlarm__isFree(uint8_t id);




static inline void RadioAlarmP__RadioAlarm__wait(uint8_t id, uint16_t timeout);








static inline void RadioAlarmP__RadioAlarm__cancel(uint8_t id);
# 37 "/opt/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
static void TaskletC__Tasklet__run(void );
# 61 "/opt/tinyos-2.x/tos/chips/rf230/TaskletC.nc"
uint8_t TaskletC__state;

static void TaskletC__doit(void );
#line 83
static __inline void TaskletC__Tasklet__suspend(void );




static void TaskletC__Tasklet__resume(void );
#line 101
static void TaskletC__Tasklet__schedule(void );
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static error_t ActiveMessageLayerC__SubSend__send(
#line 56
message_t * msg, 







uint8_t len);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static void ActiveMessageLayerC__AMSend__sendDone(
# 28 "/opt/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
am_id_t arg_0x40841230, 
# 92 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



ActiveMessageLayerC__Snoop__receive(
# 30 "/opt/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
am_id_t arg_0x4083f2a8, 
# 60 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/opt/tinyos-2.x/tos/chips/rf230/ActiveMessageConfig.nc"
static error_t ActiveMessageLayerC__Config__checkPacket(message_t *msg);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



ActiveMessageLayerC__Receive__receive(
# 29 "/opt/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
am_id_t arg_0x40841bf0, 
# 60 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 57 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t ActiveMessageLayerC__AMPacket__address(void );
#line 110
static void ActiveMessageLayerC__AMPacket__setSource(
#line 106
message_t * amsg, 



am_addr_t addr);
#line 92
static void ActiveMessageLayerC__AMPacket__setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 136
static am_id_t ActiveMessageLayerC__AMPacket__type(
#line 132
message_t * amsg);
#line 151
static void ActiveMessageLayerC__AMPacket__setType(
#line 147
message_t * amsg, 



am_id_t t);
#line 125
static bool ActiveMessageLayerC__AMPacket__isForMe(
#line 122
message_t * amsg);
#line 176
static void ActiveMessageLayerC__AMPacket__setGroup(
#line 173
message_t * amsg, 


am_group_t grp);







static am_group_t ActiveMessageLayerC__AMPacket__localGroup(void );
# 45 "/opt/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
static error_t ActiveMessageLayerC__AMSend__send(am_id_t id, am_addr_t addr, message_t *msg, uint8_t len);
#line 61
static __inline void ActiveMessageLayerC__SubSend__sendDone(message_t *msg, error_t error);
#line 87
static inline message_t *ActiveMessageLayerC__SubReceive__receive(message_t *msg, void *payload, uint8_t len);










static inline message_t *ActiveMessageLayerC__Receive__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);




static inline message_t *ActiveMessageLayerC__Snoop__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static error_t IEEE154NetworkLayerP__SubSend__send(
#line 56
message_t * msg, 







uint8_t len);
#line 89
static void IEEE154NetworkLayerP__Send__sendDone(
#line 85
message_t * msg, 



error_t error);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



IEEE154NetworkLayerP__NonTinyosReceive__receive(
# 30 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154NetworkLayerP.nc"
uint8_t arg_0x4085e480, 
# 60 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 172 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
static void IEEE154NetworkLayerP__IEEE154Packet__set6LowPan(message_t *msg, uint8_t network);
#line 167
static uint8_t IEEE154NetworkLayerP__IEEE154Packet__get6LowPan(message_t *msg);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



IEEE154NetworkLayerP__Receive__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 48 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154NetworkLayerP.nc"
static inline error_t IEEE154NetworkLayerP__Send__send(message_t *msg, uint8_t len);
#line 69
static inline void IEEE154NetworkLayerP__SubSend__sendDone(message_t *msg, error_t error);




static inline message_t *IEEE154NetworkLayerP__SubReceive__receive(message_t *msg, void *payload, uint8_t len);








static inline message_t *IEEE154NetworkLayerP__NonTinyosReceive__default__receive(uint8_t network, message_t *msg, void *payload, uint8_t len);
# 92 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void MessageBufferLayerP__SplitControl__startDone(error_t error);
#line 117
static void MessageBufferLayerP__SplitControl__stopDone(error_t error);
# 45 "/opt/tinyos-2.x/tos/chips/rf230/RadioState.nc"
static error_t MessageBufferLayerP__RadioState__turnOn(void );
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void MessageBufferLayerP__Send__sendDone(
#line 85
message_t * msg, 



error_t error);
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t MessageBufferLayerP__Packet__payloadLength(
#line 63
message_t * msg);
#line 115
static 
#line 112
void * 


MessageBufferLayerP__Packet__getPayload(
#line 110
message_t * msg, 




uint8_t len);
#line 95
static uint8_t MessageBufferLayerP__Packet__maxPayloadLength(void );
#line 83
static void MessageBufferLayerP__Packet__setPayloadLength(
#line 79
message_t * msg, 



uint8_t len);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t MessageBufferLayerP__stateDoneTask__postTask(void );
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



MessageBufferLayerP__Receive__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t MessageBufferLayerP__sendTask__postTask(void );
#line 56
static error_t MessageBufferLayerP__deliverTask__postTask(void );
# 37 "/opt/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static error_t MessageBufferLayerP__RadioSend__send(message_t *msg);
# 61 "/opt/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
static void MessageBufferLayerP__Tasklet__suspend(void );






static void MessageBufferLayerP__Tasklet__resume(void );
# 101 "/opt/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
enum MessageBufferLayerP____nesc_unnamed4342 {
#line 101
  MessageBufferLayerP__stateDoneTask = 4U
};
#line 101
typedef int MessageBufferLayerP____nesc_sillytask_stateDoneTask[MessageBufferLayerP__stateDoneTask];
#line 139
enum MessageBufferLayerP____nesc_unnamed4343 {
#line 139
  MessageBufferLayerP__sendTask = 5U
};
#line 139
typedef int MessageBufferLayerP____nesc_sillytask_sendTask[MessageBufferLayerP__sendTask];
#line 267
enum MessageBufferLayerP____nesc_unnamed4344 {
#line 267
  MessageBufferLayerP__deliverTask = 6U
};
#line 267
typedef int MessageBufferLayerP____nesc_sillytask_deliverTask[MessageBufferLayerP__deliverTask];
#line 52
uint8_t MessageBufferLayerP__state;
enum MessageBufferLayerP____nesc_unnamed4345 {

  MessageBufferLayerP__STATE_READY = 0, 
  MessageBufferLayerP__STATE_TX_PENDING = 1, 
  MessageBufferLayerP__STATE_TX_SEND = 2, 
  MessageBufferLayerP__STATE_TX_DONE = 3, 
  MessageBufferLayerP__STATE_TURN_ON = 4, 
  MessageBufferLayerP__STATE_TURN_OFF = 5
};

static error_t MessageBufferLayerP__SplitControl__start(void );
#line 101
static inline void MessageBufferLayerP__stateDoneTask__runTask(void );
#line 117
static inline void MessageBufferLayerP__RadioState__done(void );
#line 132
message_t *MessageBufferLayerP__txMsg;
error_t MessageBufferLayerP__txError;
uint8_t MessageBufferLayerP__retries;


enum MessageBufferLayerP____nesc_unnamed4346 {
#line 137
  MessageBufferLayerP__MAX_RETRIES = 5
};
static inline void MessageBufferLayerP__sendTask__runTask(void );
#line 170
static inline void MessageBufferLayerP__RadioSend__sendDone(error_t error);







static inline error_t MessageBufferLayerP__Send__send(message_t *msg, uint8_t len);
#line 195
static inline void MessageBufferLayerP__RadioSend__ready(void );





static inline void MessageBufferLayerP__Tasklet__run(void );
#line 236
enum MessageBufferLayerP____nesc_unnamed4347 {

  MessageBufferLayerP__RECEIVE_QUEUE_SIZE = 3
};

message_t MessageBufferLayerP__receiveQueueData[MessageBufferLayerP__RECEIVE_QUEUE_SIZE];
message_t *MessageBufferLayerP__receiveQueue[MessageBufferLayerP__RECEIVE_QUEUE_SIZE];

uint8_t MessageBufferLayerP__receiveQueueHead;
uint8_t MessageBufferLayerP__receiveQueueSize;

static inline error_t MessageBufferLayerP__SoftwareInit__init(void );









static inline bool MessageBufferLayerP__RadioReceive__header(message_t *msg);









static inline void MessageBufferLayerP__deliverTask__runTask(void );
#line 298
static inline message_t *MessageBufferLayerP__RadioReceive__receive(message_t *msg);
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static error_t UniqueLayerP__SubSend__send(
#line 56
message_t * msg, 







uint8_t len);
# 35 "/opt/tinyos-2.x/tos/chips/rf230/NeighborhoodFlag.nc"
static bool UniqueLayerP__NeighborhoodFlag__get(uint8_t index);




static void UniqueLayerP__NeighborhoodFlag__set(uint8_t index);
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void UniqueLayerP__Send__sendDone(
#line 85
message_t * msg, 



error_t error);
# 60 "/opt/tinyos-2.x/tos/chips/rf230/Neighborhood.nc"
static uint8_t UniqueLayerP__Neighborhood__insertNode(am_addr_t id);
# 42 "/opt/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
static message_t *UniqueLayerP__RadioReceive__receive(message_t *msg);
#line 35
static bool UniqueLayerP__RadioReceive__header(message_t *msg);
# 41 "/opt/tinyos-2.x/tos/chips/rf230/UniqueConfig.nc"
static void UniqueLayerP__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t number);





static void UniqueLayerP__UniqueConfig__reportChannelError(void );
#line 31
static uint8_t UniqueLayerP__UniqueConfig__getSequenceNumber(message_t *msg);




static am_addr_t UniqueLayerP__UniqueConfig__getSender(message_t *msg);
# 50 "/opt/tinyos-2.x/tos/chips/rf230/UniqueLayerP.nc"
uint8_t UniqueLayerP__sequenceNumber;

static inline error_t UniqueLayerP__Init__init(void );





static inline error_t UniqueLayerP__Send__send(message_t *msg, uint8_t len);










static inline void UniqueLayerP__SubSend__sendDone(message_t *msg, error_t error);
#line 84
static inline bool UniqueLayerP__SubReceive__header(message_t *msg);





uint8_t UniqueLayerP__receivedNumbers[5];

static inline message_t *UniqueLayerP__SubReceive__receive(message_t *msg);
#line 115
static inline void UniqueLayerP__Neighborhood__evicted(uint8_t index);
# 69 "/opt/tinyos-2.x/tos/chips/rf230/Neighborhood.nc"
static void NeighborhoodP__Neighborhood__evicted(uint8_t index);
# 38 "/opt/tinyos-2.x/tos/chips/rf230/NeighborhoodP.nc"
am_addr_t NeighborhoodP__nodes[5];
uint8_t NeighborhoodP__ages[5];
uint8_t NeighborhoodP__flags[5];
uint8_t NeighborhoodP__time;
uint8_t NeighborhoodP__last;

static inline error_t NeighborhoodP__Init__init(void );
#line 83
static uint8_t NeighborhoodP__Neighborhood__insertNode(am_addr_t node);
#line 147
static __inline bool NeighborhoodP__NeighborhoodFlag__get(uint8_t bit, uint8_t index);




static __inline void NeighborhoodP__NeighborhoodFlag__set(uint8_t bit, uint8_t index);









static inline void NeighborhoodP__NeighborhoodFlag__clearAll(uint8_t bit);
# 37 "/opt/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static error_t TrafficMonitorLayerP__SubSend__send(message_t *msg);
# 32 "/opt/tinyos-2.x/tos/chips/rf230/TrafficMonitorConfig.nc"
static uint16_t TrafficMonitorLayerP__TrafficMonitorConfig__getUpdatePeriod(void );




static uint16_t TrafficMonitorLayerP__TrafficMonitorConfig__getChannelTime(message_t *msg);
#line 79
static void TrafficMonitorLayerP__TrafficMonitorConfig__timerTick(void );
#line 43
static am_addr_t TrafficMonitorLayerP__TrafficMonitorConfig__getSender(message_t *msg);
# 58 "/opt/tinyos-2.x/tos/chips/rf230/RadioState.nc"
static void TrafficMonitorLayerP__RadioState__done(void );
#line 45
static error_t TrafficMonitorLayerP__SubState__turnOn(void );
# 60 "/opt/tinyos-2.x/tos/chips/rf230/Neighborhood.nc"
static uint8_t TrafficMonitorLayerP__Neighborhood__insertNode(am_addr_t id);
# 42 "/opt/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
static message_t *TrafficMonitorLayerP__RadioReceive__receive(message_t *msg);
#line 35
static bool TrafficMonitorLayerP__RadioReceive__header(message_t *msg);
# 51 "/opt/tinyos-2.x/tos/chips/rf230/NeighborhoodFlag.nc"
static void TrafficMonitorLayerP__NeighborhoodFlag__clearAll(void );
#line 35
static bool TrafficMonitorLayerP__NeighborhoodFlag__get(uint8_t index);




static void TrafficMonitorLayerP__NeighborhoodFlag__set(uint8_t index);
# 61 "/opt/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
static void TrafficMonitorLayerP__Tasklet__suspend(void );






static void TrafficMonitorLayerP__Tasklet__resume(void );
# 52 "/opt/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static void TrafficMonitorLayerP__RadioSend__ready(void );
#line 45
static void TrafficMonitorLayerP__RadioSend__sendDone(error_t error);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t TrafficMonitorLayerP__startStopTimer__postTask(void );
# 53 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void TrafficMonitorLayerP__Timer__startPeriodic(uint32_t dt);
#line 67
static void TrafficMonitorLayerP__Timer__stop(void );
# 229 "/opt/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
enum TrafficMonitorLayerP____nesc_unnamed4348 {
#line 229
  TrafficMonitorLayerP__startStopTimer = 7U
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

enum TrafficMonitorLayerP____nesc_unnamed4349 {


  TrafficMonitorLayerP__TRAFFIC_MONITOR_UINT8_MAX = 1 << (7 - 3), 


  TrafficMonitorLayerP__TRAFFIC_MONITOR_MASK = (1 << 3) - 1, 


  TrafficMonitorLayerP__TRAFFIC_MONITOR_ROUND_UP = (1 << 3) - 1
};

static inline void TrafficMonitorLayerP__SubSend__ready(void );




static inline error_t TrafficMonitorLayerP__RadioSend__send(message_t *msg);





static void TrafficMonitorLayerP__SubSend__sendDone(error_t error);







static inline bool TrafficMonitorLayerP__SubReceive__header(message_t *msg);




static inline message_t *TrafficMonitorLayerP__SubReceive__receive(message_t *msg);
#line 124
static inline void TrafficMonitorLayerP__TrafficMonitorConfig__channelError(void );







static inline void TrafficMonitorLayerP__Timer__fired(void );
#line 171
static inline void TrafficMonitorLayerP__Tasklet__run(void );
#line 195
static inline void TrafficMonitorLayerP__Neighborhood__evicted(uint8_t index);

enum TrafficMonitorLayerP____nesc_unnamed4350 {

  TrafficMonitorLayerP__RADIO_CMD_NONE = 0, 
  TrafficMonitorLayerP__RADIO_CMD_TURNON = 1, 
  TrafficMonitorLayerP__RADIO_CMD_TURNOFF = 2
};
uint8_t TrafficMonitorLayerP__radioCmd;
#line 217
static inline error_t TrafficMonitorLayerP__RadioState__turnOn(void );
#line 229
static inline void TrafficMonitorLayerP__startStopTimer__runTask(void );







static inline void TrafficMonitorLayerP__SubState__done(void );
# 37 "/opt/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static error_t RandomCollisionLayerP__SubSend__send(message_t *msg);
# 38 "/opt/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static void RandomCollisionLayerP__RadioAlarm__wait(uint16_t timeout);
#line 33
static bool RandomCollisionLayerP__RadioAlarm__isFree(void );
#line 53
static uint16_t RandomCollisionLayerP__RadioAlarm__getNow(void );
# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
static uint16_t RandomCollisionLayerP__Random__rand16(void );
# 35 "/opt/tinyos-2.x/tos/chips/rf230/RandomCollisionConfig.nc"
static uint16_t RandomCollisionLayerP__Config__getCongestionBackoff(message_t *msg);
#line 29
static uint16_t RandomCollisionLayerP__Config__getInitialBackoff(message_t *msg);










static uint16_t RandomCollisionLayerP__Config__getMinimumBackoff(void );





static uint16_t RandomCollisionLayerP__Config__getTransmitBarrier(message_t *msg);
# 42 "/opt/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
static message_t *RandomCollisionLayerP__RadioReceive__receive(message_t *msg);
#line 35
static bool RandomCollisionLayerP__RadioReceive__header(message_t *msg);
# 52 "/opt/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static void RandomCollisionLayerP__RadioSend__ready(void );
#line 45
static void RandomCollisionLayerP__RadioSend__sendDone(error_t error);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t RandomCollisionLayerP__calcNextRandom__postTask(void );
# 67 "/opt/tinyos-2.x/tos/chips/rf230/RandomCollisionLayerP.nc"
enum RandomCollisionLayerP____nesc_unnamed4351 {
#line 67
  RandomCollisionLayerP__calcNextRandom = 8U
};
#line 67
typedef int RandomCollisionLayerP____nesc_sillytask_calcNextRandom[RandomCollisionLayerP__calcNextRandom];
#line 46
uint8_t RandomCollisionLayerP__state;
enum RandomCollisionLayerP____nesc_unnamed4352 {

  RandomCollisionLayerP__STATE_READY = 0, 
  RandomCollisionLayerP__STATE_TX_PENDING_FIRST = 1, 
  RandomCollisionLayerP__STATE_TX_PENDING_SECOND = 2, 
  RandomCollisionLayerP__STATE_TX_SENDING = 3, 

  RandomCollisionLayerP__STATE_BARRIER = 0x80
};

message_t *RandomCollisionLayerP__txMsg;
uint16_t RandomCollisionLayerP__txBarrier;

static inline void RandomCollisionLayerP__SubSend__ready(void );





uint16_t RandomCollisionLayerP__nextRandom;
static inline void RandomCollisionLayerP__calcNextRandom__runTask(void );





static uint16_t RandomCollisionLayerP__getBackoff(uint16_t maxBackoff);
#line 88
static inline error_t RandomCollisionLayerP__RadioSend__send(message_t *msg);
#line 101
static inline void RandomCollisionLayerP__RadioAlarm__fired(void );
#line 147
static inline void RandomCollisionLayerP__SubSend__sendDone(error_t error);







static inline bool RandomCollisionLayerP__SubReceive__header(message_t *msg);




static inline message_t *RandomCollisionLayerP__SubReceive__receive(message_t *msg);
# 41 "/opt/tinyos-2.x/tos/system/RandomMlcgC.nc"
uint32_t RandomMlcgC__seed;


static inline error_t RandomMlcgC__Init__init(void );
#line 58
static uint32_t RandomMlcgC__Random__rand32(void );
#line 78
static inline uint16_t RandomMlcgC__Random__rand16(void );
# 37 "/opt/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static error_t SoftwareAckLayerP__SubSend__send(message_t *msg);
# 38 "/opt/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static void SoftwareAckLayerP__RadioAlarm__wait(uint16_t timeout);




static void SoftwareAckLayerP__RadioAlarm__cancel(void );
#line 33
static bool SoftwareAckLayerP__RadioAlarm__isFree(void );
# 42 "/opt/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
static message_t *SoftwareAckLayerP__RadioReceive__receive(message_t *msg);
#line 35
static bool SoftwareAckLayerP__RadioReceive__header(message_t *msg);
# 74 "/opt/tinyos-2.x/tos/chips/rf230/SoftwareAckConfig.nc"
static void SoftwareAckLayerP__SoftwareAckConfig__reportChannelError(void );
#line 68
static void SoftwareAckLayerP__SoftwareAckConfig__createAckPacket(message_t *data, message_t *ack);
#line 38
static bool SoftwareAckLayerP__SoftwareAckConfig__requiresAckWait(message_t *msg);
#line 50
static bool SoftwareAckLayerP__SoftwareAckConfig__isAckPacket(message_t *msg);






static bool SoftwareAckLayerP__SoftwareAckConfig__verifyAckPacket(message_t *data, message_t *ack);
#line 32
static uint16_t SoftwareAckLayerP__SoftwareAckConfig__getAckTimeout(void );










static void SoftwareAckLayerP__SoftwareAckConfig__setAckReceived(message_t *msg, bool acked);
#line 63
static bool SoftwareAckLayerP__SoftwareAckConfig__requiresAckReply(message_t *msg);
# 52 "/opt/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static void SoftwareAckLayerP__RadioSend__ready(void );
#line 45
static void SoftwareAckLayerP__RadioSend__sendDone(error_t error);
# 46 "/opt/tinyos-2.x/tos/chips/rf230/SoftwareAckLayerP.nc"
uint8_t SoftwareAckLayerP__state;
enum SoftwareAckLayerP____nesc_unnamed4353 {

  SoftwareAckLayerP__STATE_READY = 0, 
  SoftwareAckLayerP__STATE_DATA_SEND = 1, 
  SoftwareAckLayerP__STATE_ACK_WAIT = 2, 
  SoftwareAckLayerP__STATE_ACK_SEND = 3
};

message_t *SoftwareAckLayerP__txMsg;
message_t SoftwareAckLayerP__ackMsg;

static inline void SoftwareAckLayerP__SubSend__ready(void );





static inline error_t SoftwareAckLayerP__RadioSend__send(message_t *msg);
#line 83
static inline void SoftwareAckLayerP__SubSend__sendDone(error_t error);
#line 110
static inline void SoftwareAckLayerP__RadioAlarm__fired(void );









static inline bool SoftwareAckLayerP__SubReceive__header(message_t *msg);







static inline message_t *SoftwareAckLayerP__SubReceive__receive(message_t *msg);
# 41 "/opt/tinyos-2.x/tos/chips/rf230/RadioCCA.nc"
static void RF230LayerP__RadioCCA__done(error_t error);
# 55 "/opt/tinyos-2.x/tos/lib/timer/BusyWait.nc"
static void RF230LayerP__BusyWait__wait(RF230LayerP__BusyWait__size_type dt);
# 40 "/opt/tinyos-2.x/tos/chips/rf230/PacketField.nc"
static void RF230LayerP__PacketRSSI__clear(message_t *msg);





static void RF230LayerP__PacketRSSI__set(message_t *msg, RF230LayerP__PacketRSSI__value_type value);
# 59 "/opt/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
static void RF230LayerP__PacketTimeStamp__clear(
#line 55
message_t * msg);
#line 67
static void RF230LayerP__PacketTimeStamp__set(
#line 62
message_t * msg, 




RF230LayerP__PacketTimeStamp__size_type value);
# 47 "/opt/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230.nc"
static uint8_t RF230LayerP__HplRF230__spiSplitRead(void );





static uint8_t RF230LayerP__HplRF230__spiSplitReadWrite(uint8_t data);





static uint8_t RF230LayerP__HplRF230__spiWrite(uint8_t data);
#line 41
static void RF230LayerP__HplRF230__spiSplitWrite(uint8_t data);
#line 33
static uint16_t RF230LayerP__HplRF230__crcByte(uint16_t crc, uint8_t data);
# 58 "/opt/tinyos-2.x/tos/chips/rf230/RadioState.nc"
static void RF230LayerP__RadioState__done(void );
# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void RF230LayerP__RSTN__makeOutput(void );
#line 29
static void RF230LayerP__RSTN__set(void );
static void RF230LayerP__RSTN__clr(void );
# 35 "/opt/tinyos-2.x/tos/chips/rf230/PacketField.nc"
static RF230LayerP__PacketTransmitPower__value_type RF230LayerP__PacketTransmitPower__get(message_t *msg);
#line 29
static bool RF230LayerP__PacketTransmitPower__isSet(message_t *msg);
# 50 "/opt/tinyos-2.x/tos/lib/timer/LocalTime.nc"
static uint32_t RF230LayerP__LocalTime__get(void );
# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void RF230LayerP__SLP_TR__makeOutput(void );
#line 29
static void RF230LayerP__SLP_TR__set(void );
static void RF230LayerP__SLP_TR__clr(void );
# 42 "/opt/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
static message_t *RF230LayerP__RadioReceive__receive(message_t *msg);
#line 35
static bool RF230LayerP__RadioReceive__header(message_t *msg);
# 38 "/opt/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static void RF230LayerP__RadioAlarm__wait(uint16_t timeout);
#line 33
static bool RF230LayerP__RadioAlarm__isFree(void );
#line 53
static uint16_t RF230LayerP__RadioAlarm__getNow(void );
# 35 "/opt/tinyos-2.x/tos/chips/rf230/PacketField.nc"
static RF230LayerP__PacketTimeSyncOffset__value_type RF230LayerP__PacketTimeSyncOffset__get(message_t *msg);
#line 29
static bool RF230LayerP__PacketTimeSyncOffset__isSet(message_t *msg);
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t RF230LayerP__SpiResource__release(void );
#line 87
static error_t RF230LayerP__SpiResource__immediateRequest(void );
#line 78
static error_t RF230LayerP__SpiResource__request(void );
#line 118
static bool RF230LayerP__SpiResource__isOwner(void );
# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void RF230LayerP__SELN__makeOutput(void );
#line 29
static void RF230LayerP__SELN__set(void );
static void RF230LayerP__SELN__clr(void );
# 52 "/opt/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
static void RF230LayerP__RadioSend__ready(void );
#line 45
static void RF230LayerP__RadioSend__sendDone(error_t error);
# 55 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static void RF230LayerP__IRQ__disable(void );
#line 42
static error_t RF230LayerP__IRQ__captureRisingEdge(void );
# 46 "/opt/tinyos-2.x/tos/chips/rf230/PacketField.nc"
static void RF230LayerP__PacketLinkQuality__set(message_t *msg, RF230LayerP__PacketLinkQuality__value_type value);
# 48 "/opt/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
static void RF230LayerP__Tasklet__schedule(void );
# 55 "/opt/tinyos-2.x/tos/chips/rf230/RF230Config.nc"
static uint8_t RF230LayerP__RF230Config__getHeaderLength(void );










static uint8_t RF230LayerP__RF230Config__getDefaultChannel(void );
#line 46
static uint8_t *RF230LayerP__RF230Config__getPayload(message_t *msg);
#line 39
static void RF230LayerP__RF230Config__setLength(message_t *msg, uint8_t len);
#line 34
static uint8_t RF230LayerP__RF230Config__getLength(message_t *msg);
#line 60
static uint8_t RF230LayerP__RF230Config__getMaxLength(void );
#line 72
static bool RF230LayerP__RF230Config__requiresRssiCca(message_t *msg);
# 80 "/opt/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
uint8_t RF230LayerP__state;
enum RF230LayerP____nesc_unnamed4354 {

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
enum RF230LayerP____nesc_unnamed4355 {

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
enum RF230LayerP____nesc_unnamed4356 {

  RF230LayerP__SLEEP_WAKEUP_TIME = (uint16_t )(880 * (7372800UL / 8 / 32 * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2)) / 1000000UL), 
  RF230LayerP__CCA_REQUEST_TIME = (uint16_t )(140 * (7372800UL / 8 / 32 * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2)) / 1000000UL), 

  RF230LayerP__TX_SFD_DELAY = (uint16_t )(176 * (7372800UL / 8 / 32 * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2)) / 1000000UL), 
  RF230LayerP__RX_SFD_DELAY = (uint16_t )(8 * (7372800UL / 8 / 32 * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2)) / 1000000UL)
};

static inline void RF230LayerP__RadioAlarm__fired(void );
#line 186
static inline error_t RF230LayerP__PlatformInit__init(void );
#line 204
static inline error_t RF230LayerP__SoftwareInit__init(void );





static inline void RF230LayerP__initRadio(void );
#line 243
static inline void RF230LayerP__SpiResource__granted(void );
#line 257
static bool RF230LayerP__isSpiAcquired(void );
#line 292
static __inline void RF230LayerP__changeChannel(void );
#line 311
static __inline void RF230LayerP__changeState(void );
#line 378
static inline error_t RF230LayerP__RadioState__turnOn(void );
#line 395
static error_t RF230LayerP__RadioSend__send(message_t *msg);
#line 543
static inline void RF230LayerP__RadioCCA__default__done(error_t error);



static __inline void RF230LayerP__downloadMessage(void );
#line 628
static inline void RF230LayerP__IRQ__captured(uint16_t time);
#line 641
static inline void RF230LayerP__serviceRadio(void );
#line 793
static inline void RF230LayerP__Tasklet__run(void );
# 33 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void HplRF230P__PortCLKM__makeInput(void );
#line 30
static void HplRF230P__PortCLKM__clr(void );
# 79 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplRF230P__Capture__setEdge(bool up);
#line 38
static HplRF230P__Capture__size_type HplRF230P__Capture__get(void );
#line 55
static void HplRF230P__Capture__reset(void );


static void HplRF230P__Capture__start(void );


static void HplRF230P__Capture__stop(void );
# 33 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void HplRF230P__PortIRQ__makeInput(void );
#line 30
static void HplRF230P__PortIRQ__clr(void );
# 50 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static void HplRF230P__IRQ__captured(uint16_t time);
# 47 "/opt/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static inline error_t HplRF230P__PlatformInit__init(void );










static inline void HplRF230P__Capture__captured(uint16_t time);









static inline error_t HplRF230P__IRQ__captureRisingEdge(void );
#line 83
static inline void HplRF230P__IRQ__disable(void );





static __inline uint16_t HplRF230P__HplRF230__crcByte(uint16_t crc, uint8_t data);




static __inline void HplRF230P__HplRF230__spiSplitWrite(uint8_t data);







static __inline uint8_t HplRF230P__HplRF230__spiSplitRead(void );






static __inline uint8_t HplRF230P__HplRF230__spiSplitReadWrite(uint8_t data);
#line 121
static __inline uint8_t HplRF230P__HplRF230__spiWrite(uint8_t data);
# 71 "/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static void Atm128SpiP__SpiPacket__sendDone(
#line 64
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Atm128SpiP__ResourceArbiter__release(
# 84 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40a3a7d0);
# 87 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Atm128SpiP__ResourceArbiter__immediateRequest(
# 84 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40a3a7d0);
# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Atm128SpiP__ResourceArbiter__request(
# 84 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40a3a7d0);
# 118 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static bool Atm128SpiP__ResourceArbiter__isOwner(
# 84 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40a3a7d0);
# 72 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static void Atm128SpiP__Spi__sleep(void );
#line 66
static void Atm128SpiP__Spi__initMaster(void );
#line 96
static void Atm128SpiP__Spi__enableInterrupt(bool enabled);
#line 80
static uint8_t Atm128SpiP__Spi__read(void );
#line 125
static void Atm128SpiP__Spi__setMasterDoubleSpeed(bool on);
#line 114
static void Atm128SpiP__Spi__setClock(uint8_t speed);
#line 108
static void Atm128SpiP__Spi__setClockPolarity(bool highWhenIdle);
#line 86
static void Atm128SpiP__Spi__write(uint8_t data);
#line 99
static void Atm128SpiP__Spi__enableSpi(bool busOn);
#line 111
static void Atm128SpiP__Spi__setClockPhase(bool sampleOnTrailing);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void Atm128SpiP__Resource__granted(
# 80 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x40a1a7f0);
# 44 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static void Atm128SpiP__McuPowerState__update(void );
# 80 "/opt/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
static bool Atm128SpiP__ArbiterInfo__inUse(void );
# 207 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
enum Atm128SpiP____nesc_unnamed4357 {
#line 207
  Atm128SpiP__zeroTask = 9U
};
#line 207
typedef int Atm128SpiP____nesc_sillytask_zeroTask[Atm128SpiP__zeroTask];
#line 90
uint16_t Atm128SpiP__len;
uint8_t * Atm128SpiP__txBuffer;
uint8_t * Atm128SpiP__rxBuffer;
uint16_t Atm128SpiP__pos;

enum Atm128SpiP____nesc_unnamed4358 {
  Atm128SpiP__SPI_IDLE, 
  Atm128SpiP__SPI_BUSY, 
  Atm128SpiP__SPI_ATOMIC_SIZE = 10
};





static void Atm128SpiP__startSpi(void );
#line 119
static inline void Atm128SpiP__stopSpi(void );







static uint8_t Atm128SpiP__SpiByte__write(uint8_t tx);
#line 162
static inline error_t Atm128SpiP__sendNextPart(void );
#line 207
static inline void Atm128SpiP__zeroTask__runTask(void );
#line 262
static inline 
#line 261
void Atm128SpiP__SpiPacket__default__sendDone(
uint8_t *_txbuffer, uint8_t *_rxbuffer, 
uint16_t _length, error_t _success);

static inline void Atm128SpiP__Spi__dataReady(uint8_t data);
#line 305
static inline error_t Atm128SpiP__Resource__immediateRequest(uint8_t id);







static error_t Atm128SpiP__Resource__request(uint8_t id);








static error_t Atm128SpiP__Resource__release(uint8_t id);









static inline uint8_t Atm128SpiP__Resource__isOwner(uint8_t id);



static inline void Atm128SpiP__ResourceArbiter__granted(uint8_t id);



static inline void Atm128SpiP__Resource__default__granted(uint8_t id);
# 33 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void HplAtm128SpiP__MISO__makeInput(void );

static void HplAtm128SpiP__SCK__makeOutput(void );
# 44 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static void HplAtm128SpiP__Mcu__update(void );
# 92 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static void HplAtm128SpiP__SPI__dataReady(uint8_t data);
# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void HplAtm128SpiP__MOSI__makeOutput(void );
# 79 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__initMaster(void );
#line 94
static inline void HplAtm128SpiP__SPI__sleep(void );



static inline uint8_t HplAtm128SpiP__SPI__read(void );
static inline void HplAtm128SpiP__SPI__write(uint8_t d);


void __vector_24(void ) __attribute((signal))   ;
#line 115
static void HplAtm128SpiP__SPI__enableInterrupt(bool enabled);
#line 130
static void HplAtm128SpiP__SPI__enableSpi(bool enabled);
#line 156
static inline void HplAtm128SpiP__SPI__setMasterBit(bool isMaster);
#line 169
static inline void HplAtm128SpiP__SPI__setClockPolarity(bool highWhenIdle);
#line 183
static inline void HplAtm128SpiP__SPI__setClockPhase(bool sampleOnTrailing);
#line 200
static inline void HplAtm128SpiP__SPI__setClock(uint8_t v);
#line 213
static inline void HplAtm128SpiP__SPI__setMasterDoubleSpeed(bool on);
# 39 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
enum /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0____nesc_unnamed4359 {
#line 39
  FcfsResourceQueueC__0__NO_ENTRY = 0xFF
};
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__resQ[1U];
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__qHead = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__qTail = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__Init__init(void );




static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );



static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
#line 72
static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
# 43 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(
# 52 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40a975b0);
# 51 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__immediateRequested(
# 52 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40a975b0);
# 55 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(
# 56 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40a96200);
# 49 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(
# 56 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40a96200);
# 69 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__enqueue(resource_client_id_t id);
#line 43
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__isEmpty(void );
#line 60
static resource_client_id_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__dequeue(void );
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__granted(
# 51 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40aa7b58);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__postTask(void );
# 69 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_unnamed4360 {
#line 69
  SimpleArbiterP__0__grantedTask = 10U
};
#line 69
typedef int /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_sillytask_grantedTask[/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask];
#line 62
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_unnamed4361 {
#line 62
  SimpleArbiterP__0__RES_IDLE = 0, SimpleArbiterP__0__RES_GRANTING = 1, SimpleArbiterP__0__RES_BUSY = 2
};
#line 63
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_unnamed4362 {
#line 63
  SimpleArbiterP__0__NO_RES = 0xFF
};
uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_IDLE;
uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__NO_RES;
uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__reqResId;



static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(uint8_t id);
#line 84
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(uint8_t id);
#line 97
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(uint8_t id);
#line 123
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ArbiterInfo__inUse(void );
#line 147
static inline uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__isOwner(uint8_t id);






static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void );
#line 166
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(uint8_t id);

static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(uint8_t id);

static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(uint8_t id);

static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id);
# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__fired(void );
# 53 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__reset(void );
#line 45
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__set(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__size_type t);










static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__start(void );


static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__stop(void );
# 52 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__get(void );
# 53 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__getNow(void );
#line 65
static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__stop(void );



static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__start(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size dt);




static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__startAt(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size t0, /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size dt);
#line 110
static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__fired(void );






static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__overflow(void );
# 35 "/opt/tinyos-2.x/tos/platforms/micaz/BusyWaitMicroC.nc"
static __inline void BusyWaitMicroC__BusyWait__wait(uint16_t dt);
# 109 "/opt/tinyos-2.x/tos/chips/atm1281/atm128hardware.h"
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

# 113 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP__Scheduler__init(void )
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP__m_next, SchedulerBasicP__NO_TASK, sizeof SchedulerBasicP__m_next);
    SchedulerBasicP__m_head = SchedulerBasicP__NO_TASK;
    SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
  }
}

# 46 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__init(void ){
#line 46
  SchedulerBasicP__Scheduler__init();
#line 46
}
#line 46
# 58 "/opt/tinyos-2.x/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 42 "/opt/tinyos-2.x/tos/platforms/mica/PlatformP.nc"
static inline void PlatformP__power_init(void )
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    * (volatile uint8_t *)(0X35 + 0x20) = 1 << 0;
  }
}

# 106 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__TimerCtrl__setControlB(uint8_t x)
#line 106
{
  * (volatile uint8_t *)0x81 = x;
}

#line 93
static inline uint8_t HplAtm1281Timer1P__TimerCtrl__getControlB(void )
#line 93
{
  return * (volatile uint8_t *)0x81;
}

#line 82
static inline void HplAtm1281Timer1P__Timer__setScale(uint8_t s)
#line 82
{
  Atm128_TCCRB_t x = (Atm128_TCCRB_t )HplAtm1281Timer1P__TimerCtrl__getControlB();

#line 84
  x.bits.cs = s;
  HplAtm1281Timer1P__TimerCtrl__setControlB(x.flat);
}

# 95 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__setScale(uint8_t scale){
#line 95
  HplAtm1281Timer1P__Timer__setScale(scale);
#line 95
}
#line 95
# 144 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__Timer__start(void )
#line 144
{
#line 144
  * (volatile uint8_t *)0x6F |= 1 << 0;
}

# 69 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__start(void ){
#line 69
  HplAtm1281Timer1P__Timer__start();
#line 69
}
#line 69
# 73 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__Timer__set(uint16_t t)
#line 73
{
#line 73
  * (volatile uint16_t *)0x84 = t;
}

# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__set(/*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__timer_size t){
#line 58
  HplAtm1281Timer1P__Timer__set(t);
#line 58
}
#line 58
# 42 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitOneP.InitOne*/Atm128TimerInitC__0__Init__init(void )
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__set(0);
    /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__start();
    /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__setScale(2);
  }
  return SUCCESS;
}

# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t MotePlatformP__SubInit__init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = /*InitOneP.InitOne*/Atm128TimerInitC__0__Init__init();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 47 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )34U &= ~(1 << 4);
}

# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP__SerialIdPin__clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr();
#line 30
}
#line 30
# 50 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )33U &= ~(1 << 4);
}

# 33 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP__SerialIdPin__makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput();
#line 33
}
#line 33
# 26 "/opt/tinyos-2.x/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP__PlatformInit__init(void )
#line 26
{

  * (volatile uint8_t *)(0x08 + 0x20) = 0;
  * (volatile uint8_t *)(0x07 + 0x20) = 0xff;


  MotePlatformP__SerialIdPin__makeInput();
  MotePlatformP__SerialIdPin__clr();

  return MotePlatformP__SubInit__init();
}

# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )34U |= 1 << 0;
}

# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set();
#line 29
}
#line 29
# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )34U |= 1 << 1;
}

# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set();
#line 29
}
#line 29
# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )34U |= 1 << 2;
}

# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set();
#line 29
}
#line 29
# 52 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )33U |= 1 << 0;
}

# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput();
#line 35
}
#line 35
# 52 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )33U |= 1 << 1;
}

# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput();
#line 35
}
#line 35
# 52 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )33U |= 1 << 2;
}

# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput();
#line 35
}
#line 35
# 45 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void )
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

# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t PlatformP__MoteInit__init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = LedsP__Init__init();
#line 51
  __nesc_result = ecombine(__nesc_result, MotePlatformP__PlatformInit__init());
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 64 "/opt/tinyos-2.x/tos/platforms/iris/MeasureClockC.nc"
static inline error_t MeasureClockC__Init__init(void )
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

# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t PlatformP__MeasureClock__init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = MeasureClockC__Init__init();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 49 "/opt/tinyos-2.x/tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP__Init__init(void )
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

# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )34U |= 1 << 6;
}

# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void RF230LayerP__RSTN__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__set();
#line 29
}
#line 29
# 52 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )33U |= 1 << 6;
}

# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void RF230LayerP__RSTN__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeOutput();
#line 35
}
#line 35
# 47 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )37U &= ~(1 << 7);
}

# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void RF230LayerP__SLP_TR__clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__clr();
#line 30
}
#line 30
# 52 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )36U |= 1 << 7;
}

# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void RF230LayerP__SLP_TR__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__makeOutput();
#line 35
}
#line 35
# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )37U |= 1 << 0;
}

# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void RF230LayerP__SELN__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set();
#line 29
}
#line 29
# 52 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )36U |= 1 << 0;
}

# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void RF230LayerP__SELN__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput();
#line 35
}
#line 35
# 186 "/opt/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
static inline error_t RF230LayerP__PlatformInit__init(void )
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

# 151 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__Capture__stop(void )
#line 151
{
#line 151
  * (volatile uint8_t *)0x6F &= ~(1 << 5);
}

# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplRF230P__Capture__stop(void ){
#line 61
  HplAtm1281Timer1P__Capture__stop();
#line 61
}
#line 61
# 47 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )43U &= ~(1 << 4);
}

# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplRF230P__PortIRQ__clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__clr();
#line 30
}
#line 30
# 50 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )42U &= ~(1 << 4);
}

# 33 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplRF230P__PortIRQ__makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeInput();
#line 33
}
#line 33
# 47 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )43U &= ~(1 << 6);
}

# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplRF230P__PortCLKM__clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__clr();
#line 30
}
#line 30
# 50 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )42U &= ~(1 << 6);
}

# 33 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplRF230P__PortCLKM__makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeInput();
#line 33
}
#line 33
# 47 "/opt/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static inline error_t HplRF230P__PlatformInit__init(void )
{
  HplRF230P__PortCLKM__makeInput();
  HplRF230P__PortCLKM__clr();
  HplRF230P__PortIRQ__makeInput();
  HplRF230P__PortIRQ__clr();
  HplRF230P__Capture__stop();

  return SUCCESS;
}

# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t RealMainP__PlatformInit__init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = HplRF230P__PlatformInit__init();
#line 51
  __nesc_result = ecombine(__nesc_result, RF230LayerP__PlatformInit__init());
#line 51
  __nesc_result = ecombine(__nesc_result, PlatformP__Init__init());
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 54 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static bool RealMainP__Scheduler__runNextTask(void ){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = SchedulerBasicP__Scheduler__runNextTask();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 48 "/opt/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
inline static void RF230LayerP__Tasklet__schedule(void ){
#line 48
  TaskletC__Tasklet__schedule();
#line 48
}
#line 48
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t RF230LayerP__SpiResource__release(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = Atm128SpiP__Resource__release(0U);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )37U |= 1 << 7;
}

# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void RF230LayerP__SLP_TR__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__set();
#line 29
}
#line 29
# 102 "/opt/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static __inline uint8_t HplRF230P__HplRF230__spiSplitRead(void )
{
  while (!(* (volatile uint8_t *)(0x2D + 0x20) & 0x80)) 
    ;
  return * (volatile uint8_t *)(0X2E + 0x20);
}

# 47 "/opt/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230.nc"
inline static uint8_t RF230LayerP__HplRF230__spiSplitRead(void ){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = HplRF230P__HplRF230__spiSplitRead();
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 109 "/opt/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static __inline uint8_t HplRF230P__HplRF230__spiSplitReadWrite(uint8_t data)
{
  uint8_t b;

  while (!(* (volatile uint8_t *)(0x2D + 0x20) & 0x80)) 
    ;
  b = * (volatile uint8_t *)(0X2E + 0x20);
  * (volatile uint8_t *)(0X2E + 0x20) = data;

  return b;
}

# 53 "/opt/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230.nc"
inline static uint8_t RF230LayerP__HplRF230__spiSplitReadWrite(uint8_t data){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = HplRF230P__HplRF230__spiSplitReadWrite(data);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 94 "/opt/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static __inline void HplRF230P__HplRF230__spiSplitWrite(uint8_t data)
{



  * (volatile uint8_t *)(0X2E + 0x20) = data;
}

# 41 "/opt/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230.nc"
inline static void RF230LayerP__HplRF230__spiSplitWrite(uint8_t data){
#line 41
  HplRF230P__HplRF230__spiSplitWrite(data);
#line 41
}
#line 41
# 47 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )37U &= ~(1 << 0);
}

# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void RF230LayerP__SELN__clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr();
#line 30
}
#line 30
# 123 "/opt/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
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

# 87 "/opt/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline uint8_t RF230ActiveMessageP__RF230Config__getDefaultChannel(void )
{
  return 11;
}

# 66 "/opt/tinyos-2.x/tos/chips/rf230/RF230Config.nc"
inline static uint8_t RF230LayerP__RF230Config__getDefaultChannel(void ){
#line 66
  unsigned char __nesc_result;
#line 66

#line 66
  __nesc_result = RF230ActiveMessageP__RF230Config__getDefaultChannel();
#line 66

#line 66
  return __nesc_result;
#line 66
}
#line 66
# 35 "/opt/tinyos-2.x/tos/platforms/micaz/BusyWaitMicroC.nc"
static __inline void BusyWaitMicroC__BusyWait__wait(uint16_t dt)
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

# 55 "/opt/tinyos-2.x/tos/lib/timer/BusyWait.nc"
inline static void RF230LayerP__BusyWait__wait(RF230LayerP__BusyWait__size_type dt){
#line 55
  BusyWaitMicroC__BusyWait__wait(dt);
#line 55
}
#line 55
# 47 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )34U &= ~(1 << 6);
}

# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void RF230LayerP__RSTN__clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__clr();
#line 30
}
#line 30
# 210 "/opt/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
static inline void RF230LayerP__initRadio(void )
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


  RF230LayerP__writeRegister(RF230_XAH_CTRL, 0x00);
  RF230LayerP__writeRegister(RF230_CSMA_SEED_0, 0x00);
  RF230LayerP__writeRegister(RF230_CSMA_SEED_1, 0x00);

  RF230LayerP__SLP_TR__set();
  RF230LayerP__state = RF230LayerP__STATE_SLEEP;
}



static inline void RF230LayerP__SpiResource__granted(void )
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

# 340 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP__Resource__default__granted(uint8_t id)
#line 340
{
}

# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void Atm128SpiP__Resource__granted(uint8_t arg_0x40a1a7f0){
#line 92
  switch (arg_0x40a1a7f0) {
#line 92
    case 0U:
#line 92
      RF230LayerP__SpiResource__granted();
#line 92
      break;
#line 92
    default:
#line 92
      Atm128SpiP__Resource__default__granted(arg_0x40a1a7f0);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 336 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP__ResourceArbiter__granted(uint8_t id)
#line 336
{
  Atm128SpiP__Resource__granted(id);
}

# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__granted(uint8_t arg_0x40aa7b58){
#line 92
  Atm128SpiP__ResourceArbiter__granted(arg_0x40aa7b58);
#line 92
}
#line 92
# 170 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 170
{
}

# 49 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x40a96200){
#line 49
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(arg_0x40a96200);
#line 49
}
#line 49
# 154 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void )
#line 154
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 155
    {
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__reqResId;
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_BUSY;
    }
#line 158
    __nesc_atomic_end(__nesc_atomic); }
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId);
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__granted(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId);
}










static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id)
#line 172
{
}

# 55 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x40a96200){
#line 55
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x40a96200);
#line 55
}
#line 55
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 58 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void )
#line 58
{
  /* atomic removed: atomic calls only */
#line 59
  {
    if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__qHead != /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
        uint8_t id = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__qHead;

#line 62
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__qHead = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__resQ[/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__qHead];
        if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__qTail = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
          }
#line 65
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__resQ[id] = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
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
      /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

#line 68
      return __nesc_temp;
    }
  }
}

# 60 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__dequeue(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 50 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void )
#line 50
{
  return /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
}

# 43 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__isEmpty(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 97 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(uint8_t id)
#line 97
{
  bool released = FALSE;

#line 99
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 99
    {
      if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_BUSY && /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId == id) {
          if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__isEmpty() == FALSE) {
              /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__reqResId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__dequeue();
              /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_GRANTING;
              /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__postTask();
            }
          else {
              /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__NO_RES;
              /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_IDLE;
            }
          released = TRUE;
        }
    }
#line 112
    __nesc_atomic_end(__nesc_atomic); }
  if (released == TRUE) {
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(id);
      return SUCCESS;
    }
  return FAIL;
}

# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t Atm128SpiP__ResourceArbiter__release(uint8_t arg_0x40a3a7d0){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(arg_0x40a3a7d0);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 86 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
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

# 80 "/opt/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
inline static bool Atm128SpiP__ArbiterInfo__inUse(void ){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ArbiterInfo__inUse();
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 141 "/opt/tinyos-2.x/tos/chips/atm1281/McuSleepC.nc"
static inline void McuSleepC__McuPowerState__update(void )
#line 141
{
}

# 44 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
inline static void Atm128SpiP__McuPowerState__update(void ){
#line 44
  McuSleepC__McuPowerState__update();
#line 44
}
#line 44
# 94 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__sleep(void )
#line 94
{
}

# 72 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__sleep(void ){
#line 72
  HplAtm128SpiP__SPI__sleep();
#line 72
}
#line 72
#line 99
inline static void Atm128SpiP__Spi__enableSpi(bool busOn){
#line 99
  HplAtm128SpiP__SPI__enableSpi(busOn);
#line 99
}
#line 99
# 119 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP__stopSpi(void )
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

# 44 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
inline static void HplAtm128SpiP__Mcu__update(void ){
#line 44
  McuSleepC__McuPowerState__update();
#line 44
}
#line 44
# 260 "/opt/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline void RF230ActiveMessageP__RadioAlarm__fired(void )
#line 260
{
}

# 45 "/opt/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
inline static void RandomCollisionLayerP__RadioSend__sendDone(error_t error){
#line 45
  TrafficMonitorLayerP__SubSend__sendDone(error);
#line 45
}
#line 45
# 239 "/opt/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline uint16_t RF230ActiveMessageP__RandomCollisionConfig__getCongestionBackoff(message_t *msg)
{
  return (uint16_t )(2240 * (7372800UL / 8 / 32 * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 1000000.0));
}

# 35 "/opt/tinyos-2.x/tos/chips/rf230/RandomCollisionConfig.nc"
inline static uint16_t RandomCollisionLayerP__Config__getCongestionBackoff(message_t *msg){
#line 35
  unsigned short __nesc_result;
#line 35

#line 35
  __nesc_result = RF230ActiveMessageP__RandomCollisionConfig__getCongestionBackoff(msg);
#line 35

#line 35
  return __nesc_result;
#line 35
}
#line 35
# 43 "/opt/tinyos-2.x/tos/chips/rf230/SoftwareAckConfig.nc"
inline static void SoftwareAckLayerP__SoftwareAckConfig__setAckReceived(message_t *msg, bool acked){
#line 43
  RF230ActiveMessageP__SoftwareAckConfig__setAckReceived(msg, acked);
#line 43
}
#line 43
# 37 "/opt/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
inline static error_t SoftwareAckLayerP__SubSend__send(message_t *msg){
#line 37
  unsigned char __nesc_result;
#line 37

#line 37
  __nesc_result = RF230LayerP__RadioSend__send(msg);
#line 37

#line 37
  return __nesc_result;
#line 37
}
#line 37
# 64 "/opt/tinyos-2.x/tos/chips/rf230/SoftwareAckLayerP.nc"
static inline error_t SoftwareAckLayerP__RadioSend__send(message_t *msg)
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

# 37 "/opt/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
inline static error_t RandomCollisionLayerP__SubSend__send(message_t *msg){
#line 37
  unsigned char __nesc_result;
#line 37

#line 37
  __nesc_result = SoftwareAckLayerP__RadioSend__send(msg);
#line 37

#line 37
  return __nesc_result;
#line 37
}
#line 37
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t MessageBufferLayerP__sendTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(MessageBufferLayerP__sendTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 195 "/opt/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static inline void MessageBufferLayerP__RadioSend__ready(void )
{
  if (MessageBufferLayerP__state == MessageBufferLayerP__STATE_TX_PENDING) {
    MessageBufferLayerP__sendTask__postTask();
    }
}

# 52 "/opt/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
inline static void TrafficMonitorLayerP__RadioSend__ready(void ){
#line 52
  MessageBufferLayerP__RadioSend__ready();
#line 52
}
#line 52
# 81 "/opt/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
static inline void TrafficMonitorLayerP__SubSend__ready(void )
{
  TrafficMonitorLayerP__RadioSend__ready();
}

# 52 "/opt/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
inline static void RandomCollisionLayerP__RadioSend__ready(void ){
#line 52
  TrafficMonitorLayerP__SubSend__ready();
#line 52
}
#line 52
# 70 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline uint16_t HplAtm1281Timer1P__Timer__get(void )
#line 70
{
#line 70
  return * (volatile uint16_t *)0x84;
}

# 52 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__get(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = HplAtm1281Timer1P__Timer__get();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 53 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__getNow(void )
#line 53
{
  return /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__get();
}

# 98 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static RadioAlarmP__Alarm__size_type RadioAlarmP__Alarm__getNow(void ){
#line 98
  unsigned short __nesc_result;
#line 98

#line 98
  __nesc_result = /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__getNow();
#line 98

#line 98
  return __nesc_result;
#line 98
}
#line 98
# 64 "/opt/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
static __inline uint16_t RadioAlarmP__RadioAlarm__getNow(uint8_t id)
{
  return RadioAlarmP__Alarm__getNow();
}

# 53 "/opt/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
inline static uint16_t RandomCollisionLayerP__RadioAlarm__getNow(void ){
#line 53
  unsigned short __nesc_result;
#line 53

#line 53
  __nesc_result = RadioAlarmP__RadioAlarm__getNow(1U);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 101 "/opt/tinyos-2.x/tos/chips/rf230/RandomCollisionLayerP.nc"
static inline void RandomCollisionLayerP__RadioAlarm__fired(void )
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
#line 117
    if (RandomCollisionLayerP__state & RandomCollisionLayerP__STATE_BARRIER && delay > 0) {
      error = EBUSY;
      }
    else {
#line 120
      error = RandomCollisionLayerP__SubSend__send(RandomCollisionLayerP__txMsg);
      }
    }
#line 122
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

#line 147
static inline void RandomCollisionLayerP__SubSend__sendDone(error_t error)
{
  for (; 0; ) ;

  RandomCollisionLayerP__state = RandomCollisionLayerP__STATE_READY;
  RandomCollisionLayerP__RadioSend__sendDone(error);
}

# 45 "/opt/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
inline static void SoftwareAckLayerP__RadioSend__sendDone(error_t error){
#line 45
  RandomCollisionLayerP__SubSend__sendDone(error);
#line 45
}
#line 45
# 124 "/opt/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
static inline void TrafficMonitorLayerP__TrafficMonitorConfig__channelError(void )
{
  if (TrafficMonitorLayerP__errorAverage < 255) {
    ++TrafficMonitorLayerP__errorAverage;
    }
}

# 50 "/opt/tinyos-2.x/tos/chips/rf230/TrafficMonitorConfig.nc"
inline static void RF230ActiveMessageP__TrafficMonitorConfig__channelError(void ){
#line 50
  TrafficMonitorLayerP__TrafficMonitorConfig__channelError();
#line 50
}
#line 50
# 137 "/opt/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline void RF230ActiveMessageP__SoftwareAckConfig__reportChannelError(void )
{
  RF230ActiveMessageP__TrafficMonitorConfig__channelError();
}

# 74 "/opt/tinyos-2.x/tos/chips/rf230/SoftwareAckConfig.nc"
inline static void SoftwareAckLayerP__SoftwareAckConfig__reportChannelError(void ){
#line 74
  RF230ActiveMessageP__SoftwareAckConfig__reportChannelError();
#line 74
}
#line 74
# 110 "/opt/tinyos-2.x/tos/chips/rf230/SoftwareAckLayerP.nc"
static inline void SoftwareAckLayerP__RadioAlarm__fired(void )
{
  for (; 0; ) ;

  SoftwareAckLayerP__SoftwareAckConfig__reportChannelError();

  SoftwareAckLayerP__state = SoftwareAckLayerP__STATE_READY;
  SoftwareAckLayerP__RadioSend__sendDone(SUCCESS);
}

# 543 "/opt/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
static inline void RF230LayerP__RadioCCA__default__done(error_t error)
#line 543
{
}

# 41 "/opt/tinyos-2.x/tos/chips/rf230/RadioCCA.nc"
inline static void RF230LayerP__RadioCCA__done(error_t error){
#line 41
  RF230LayerP__RadioCCA__default__done(error);
#line 41
}
#line 41
# 135 "/opt/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
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
static inline void RF230LayerP__RadioAlarm__fired(void )
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

# 78 "/opt/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
static inline void RadioAlarmP__RadioAlarm__default__fired(uint8_t id)
{
}

# 48 "/opt/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
inline static void RadioAlarmP__RadioAlarm__fired(uint8_t arg_0x40824780){
#line 48
  switch (arg_0x40824780) {
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
      RadioAlarmP__RadioAlarm__default__fired(arg_0x40824780);
#line 48
      break;
#line 48
    }
#line 48
}
#line 48
# 69 "/opt/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
static inline void RadioAlarmP__Tasklet__run(void )
{
  if (RadioAlarmP__state == RadioAlarmP__STATE_FIRED) 
    {
      RadioAlarmP__state = RadioAlarmP__STATE_READY;
      RadioAlarmP__RadioAlarm__fired(RadioAlarmP__alarm);
    }
}

# 201 "/opt/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static inline void MessageBufferLayerP__Tasklet__run(void )
{
}

# 171 "/opt/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
static inline void TrafficMonitorLayerP__Tasklet__run(void )
{
}

# 82 "/opt/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
static __inline bool RadioAlarmP__RadioAlarm__isFree(uint8_t id)
{
  return RadioAlarmP__state == RadioAlarmP__STATE_READY;
}

# 33 "/opt/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
inline static bool RandomCollisionLayerP__RadioAlarm__isFree(void ){
#line 33
  unsigned char __nesc_result;
#line 33

#line 33
  __nesc_result = RadioAlarmP__RadioAlarm__isFree(1U);
#line 33

#line 33
  return __nesc_result;
#line 33
}
#line 33
# 60 "/opt/tinyos-2.x/tos/chips/rf230/RandomCollisionLayerP.nc"
static inline void RandomCollisionLayerP__SubSend__ready(void )
{
  if (RandomCollisionLayerP__state == RandomCollisionLayerP__STATE_READY && RandomCollisionLayerP__RadioAlarm__isFree()) {
    RandomCollisionLayerP__RadioSend__ready();
    }
}

# 52 "/opt/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
inline static void SoftwareAckLayerP__RadioSend__ready(void ){
#line 52
  RandomCollisionLayerP__SubSend__ready();
#line 52
}
#line 52
# 58 "/opt/tinyos-2.x/tos/chips/rf230/SoftwareAckLayerP.nc"
static inline void SoftwareAckLayerP__SubSend__ready(void )
{
  if (SoftwareAckLayerP__state == SoftwareAckLayerP__STATE_READY) {
    SoftwareAckLayerP__RadioSend__ready();
    }
}

# 52 "/opt/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
inline static void RF230LayerP__RadioSend__ready(void ){
#line 52
  SoftwareAckLayerP__SubSend__ready();
#line 52
}
#line 52
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t MessageBufferLayerP__stateDoneTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(MessageBufferLayerP__stateDoneTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 117 "/opt/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static inline void MessageBufferLayerP__RadioState__done(void )
{
  MessageBufferLayerP__stateDoneTask__postTask();
}

# 58 "/opt/tinyos-2.x/tos/chips/rf230/RadioState.nc"
inline static void TrafficMonitorLayerP__RadioState__done(void ){
#line 58
  MessageBufferLayerP__RadioState__done();
#line 58
}
#line 58
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t TrafficMonitorLayerP__startStopTimer__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(TrafficMonitorLayerP__startStopTimer);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 237 "/opt/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
static inline void TrafficMonitorLayerP__SubState__done(void )
{
  TrafficMonitorLayerP__startStopTimer__postTask();
  TrafficMonitorLayerP__RadioState__done();
}

# 58 "/opt/tinyos-2.x/tos/chips/rf230/RadioState.nc"
inline static void RF230LayerP__RadioState__done(void ){
#line 58
  TrafficMonitorLayerP__SubState__done();
#line 58
}
#line 58
# 292 "/opt/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
static __inline void RF230LayerP__changeChannel(void )
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
#line 305
        RF230LayerP__cmd = RF230LayerP__CMD_SIGNAL_DONE;
        }
    }
}

# 83 "/opt/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static inline void HplRF230P__IRQ__disable(void )
{
  HplRF230P__Capture__stop();
}

# 55 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
inline static void RF230LayerP__IRQ__disable(void ){
#line 55
  HplRF230P__IRQ__disable();
#line 55
}
#line 55
# 145 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__Capture__start(void )
#line 145
{
#line 145
  * (volatile uint8_t *)0x6F |= 1 << 5;
}

# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplRF230P__Capture__start(void ){
#line 58
  HplAtm1281Timer1P__Capture__start();
#line 58
}
#line 58
# 139 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__Capture__reset(void )
#line 139
{
#line 139
  * (volatile uint8_t *)(0x16 + 0x20) = 1 << 5;
}

# 55 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplRF230P__Capture__reset(void ){
#line 55
  HplAtm1281Timer1P__Capture__reset();
#line 55
}
#line 55
# 135 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__Capture__setEdge(bool up)
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

# 79 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplRF230P__Capture__setEdge(bool up){
#line 79
  HplAtm1281Timer1P__Capture__setEdge(up);
#line 79
}
#line 79
# 68 "/opt/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static inline error_t HplRF230P__IRQ__captureRisingEdge(void )
{
  HplRF230P__Capture__setEdge(TRUE);
  HplRF230P__Capture__reset();
  HplRF230P__Capture__start();

  return SUCCESS;
}

# 42 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
inline static error_t RF230LayerP__IRQ__captureRisingEdge(void ){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = HplRF230P__IRQ__captureRisingEdge();
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 69 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__start(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size dt)
{
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__startAt(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__get(), dt);
}

# 55 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void RadioAlarmP__Alarm__start(RadioAlarmP__Alarm__size_type dt){
#line 55
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__start(dt);
#line 55
}
#line 55
# 87 "/opt/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
static inline void RadioAlarmP__RadioAlarm__wait(uint8_t id, uint16_t timeout)
{
  for (; 0; ) ;

  RadioAlarmP__alarm = id;
  RadioAlarmP__state = RadioAlarmP__STATE_WAIT;
  RadioAlarmP__Alarm__start(timeout);
}

# 38 "/opt/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
inline static void RF230LayerP__RadioAlarm__wait(uint16_t timeout){
#line 38
  RadioAlarmP__RadioAlarm__wait(3U, timeout);
#line 38
}
#line 38
#line 33
inline static bool RF230LayerP__RadioAlarm__isFree(void ){
#line 33
  unsigned char __nesc_result;
#line 33

#line 33
  __nesc_result = RadioAlarmP__RadioAlarm__isFree(3U);
#line 33

#line 33
  return __nesc_result;
#line 33
}
#line 33
# 311 "/opt/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
static __inline void RF230LayerP__changeState(void )
{

  if ((
#line 313
  RF230LayerP__cmd == RF230LayerP__CMD_STANDBY || RF230LayerP__cmd == RF230LayerP__CMD_TURNON)
   && RF230LayerP__state == RF230LayerP__STATE_SLEEP && RF230LayerP__RadioAlarm__isFree()) 
    {
      RF230LayerP__SLP_TR__clr();

      RF230LayerP__RadioAlarm__wait(RF230LayerP__SLEEP_WAKEUP_TIME);
      RF230LayerP__state = RF230LayerP__STATE_SLEEP_2_TRX_OFF;
    }
  else {
#line 321
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
#line 331
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
#line 342
  if (RF230LayerP__cmd == RF230LayerP__CMD_TURNOFF && RF230LayerP__state == RF230LayerP__STATE_TRX_OFF) 
    {
      RF230LayerP__SLP_TR__set();
      RF230LayerP__state = RF230LayerP__STATE_SLEEP;
      RF230LayerP__cmd = RF230LayerP__CMD_SIGNAL_DONE;
    }
  else {
#line 348
    if (RF230LayerP__cmd == RF230LayerP__CMD_STANDBY && RF230LayerP__state == RF230LayerP__STATE_TRX_OFF) {
      RF230LayerP__cmd = RF230LayerP__CMD_SIGNAL_DONE;
      }
    }
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t MessageBufferLayerP__deliverTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(MessageBufferLayerP__deliverTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 298 "/opt/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static inline message_t *MessageBufferLayerP__RadioReceive__receive(message_t *msg)
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

# 42 "/opt/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
inline static message_t *UniqueLayerP__RadioReceive__receive(message_t *msg){
#line 42
  nx_struct message_t *__nesc_result;
#line 42

#line 42
  __nesc_result = MessageBufferLayerP__RadioReceive__receive(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 152 "/opt/tinyos-2.x/tos/chips/rf230/NeighborhoodP.nc"
static __inline void NeighborhoodP__NeighborhoodFlag__set(uint8_t bit, uint8_t index)
{
  NeighborhoodP__flags[index] |= 1 << bit;
}

# 40 "/opt/tinyos-2.x/tos/chips/rf230/NeighborhoodFlag.nc"
inline static void UniqueLayerP__NeighborhoodFlag__set(uint8_t index){
#line 40
  NeighborhoodP__NeighborhoodFlag__set(0U, index);
#line 40
}
#line 40
# 159 "/opt/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline void RF230ActiveMessageP__UniqueConfig__reportChannelError(void )
{
  RF230ActiveMessageP__TrafficMonitorConfig__channelError();
}

# 47 "/opt/tinyos-2.x/tos/chips/rf230/UniqueConfig.nc"
inline static void UniqueLayerP__UniqueConfig__reportChannelError(void ){
#line 47
  RF230ActiveMessageP__UniqueConfig__reportChannelError();
#line 47
}
#line 47
# 147 "/opt/tinyos-2.x/tos/chips/rf230/NeighborhoodP.nc"
static __inline bool NeighborhoodP__NeighborhoodFlag__get(uint8_t bit, uint8_t index)
{
  return NeighborhoodP__flags[index] & (1 << bit);
}

# 35 "/opt/tinyos-2.x/tos/chips/rf230/NeighborhoodFlag.nc"
inline static bool UniqueLayerP__NeighborhoodFlag__get(uint8_t index){
#line 35
  unsigned char __nesc_result;
#line 35

#line 35
  __nesc_result = NeighborhoodP__NeighborhoodFlag__get(0U, index);
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

# 58 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline ieee154_header_t *IEEE154PacketP__getHeader(message_t *msg)
{
  return (ieee154_header_t *)(msg->data - sizeof(ieee154_header_t ));
}

#line 154
static __inline uint8_t IEEE154PacketP__IEEE154Packet__getDSN(message_t *msg)
{
  return __nesc_ntoh_leuint8(IEEE154PacketP__getHeader(msg)->dsn.data);
}

# 124 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static uint8_t RF230ActiveMessageP__IEEE154Packet__getDSN(message_t *msg){
#line 124
  unsigned char __nesc_result;
#line 124

#line 124
  __nesc_result = IEEE154PacketP__IEEE154Packet__getDSN(msg);
#line 124

#line 124
  return __nesc_result;
#line 124
}
#line 124
# 144 "/opt/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline uint8_t RF230ActiveMessageP__UniqueConfig__getSequenceNumber(message_t *msg)
{
  return RF230ActiveMessageP__IEEE154Packet__getDSN(msg);
}

# 31 "/opt/tinyos-2.x/tos/chips/rf230/UniqueConfig.nc"
inline static uint8_t UniqueLayerP__UniqueConfig__getSequenceNumber(message_t *msg){
#line 31
  unsigned char __nesc_result;
#line 31

#line 31
  __nesc_result = RF230ActiveMessageP__UniqueConfig__getSequenceNumber(msg);
#line 31

#line 31
  return __nesc_result;
#line 31
}
#line 31
# 276 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_leuint16(const void * source)
#line 276
{
  const uint8_t *base = source;

#line 278
  return ((uint16_t )base[1] << 8) | base[0];
}

# 184 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline uint16_t IEEE154PacketP__IEEE154Packet__getSrcAddr(message_t *msg)
{
  return __nesc_ntoh_leuint16(IEEE154PacketP__getHeader(msg)->src.data);
}

# 155 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static uint16_t RF230ActiveMessageP__IEEE154Packet__getSrcAddr(message_t *msg){
#line 155
  unsigned short __nesc_result;
#line 155

#line 155
  __nesc_result = IEEE154PacketP__IEEE154Packet__getSrcAddr(msg);
#line 155

#line 155
  return __nesc_result;
#line 155
}
#line 155
# 154 "/opt/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline am_addr_t RF230ActiveMessageP__UniqueConfig__getSender(message_t *msg)
{
  return RF230ActiveMessageP__IEEE154Packet__getSrcAddr(msg);
}

# 36 "/opt/tinyos-2.x/tos/chips/rf230/UniqueConfig.nc"
inline static am_addr_t UniqueLayerP__UniqueConfig__getSender(message_t *msg){
#line 36
  unsigned short __nesc_result;
#line 36

#line 36
  __nesc_result = RF230ActiveMessageP__UniqueConfig__getSender(msg);
#line 36

#line 36
  return __nesc_result;
#line 36
}
#line 36
# 60 "/opt/tinyos-2.x/tos/chips/rf230/Neighborhood.nc"
inline static uint8_t UniqueLayerP__Neighborhood__insertNode(am_addr_t id){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = NeighborhoodP__Neighborhood__insertNode(id);
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 92 "/opt/tinyos-2.x/tos/chips/rf230/UniqueLayerP.nc"
static inline message_t *UniqueLayerP__SubReceive__receive(message_t *msg)
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

# 42 "/opt/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
inline static message_t *TrafficMonitorLayerP__RadioReceive__receive(message_t *msg){
#line 42
  nx_struct message_t *__nesc_result;
#line 42

#line 42
  __nesc_result = UniqueLayerP__SubReceive__receive(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 40 "/opt/tinyos-2.x/tos/chips/rf230/NeighborhoodFlag.nc"
inline static void TrafficMonitorLayerP__NeighborhoodFlag__set(uint8_t index){
#line 40
  NeighborhoodP__NeighborhoodFlag__set(1U, index);
#line 40
}
#line 40
#line 35
inline static bool TrafficMonitorLayerP__NeighborhoodFlag__get(uint8_t index){
#line 35
  unsigned char __nesc_result;
#line 35

#line 35
  __nesc_result = NeighborhoodP__NeighborhoodFlag__get(1U, index);
#line 35

#line 35
  return __nesc_result;
#line 35
}
#line 35
# 208 "/opt/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline am_addr_t RF230ActiveMessageP__TrafficMonitorConfig__getSender(message_t *msg)
{
  return RF230ActiveMessageP__IEEE154Packet__getSrcAddr(msg);
}

# 43 "/opt/tinyos-2.x/tos/chips/rf230/TrafficMonitorConfig.nc"
inline static am_addr_t TrafficMonitorLayerP__TrafficMonitorConfig__getSender(message_t *msg){
#line 43
  unsigned short __nesc_result;
#line 43

#line 43
  __nesc_result = RF230ActiveMessageP__TrafficMonitorConfig__getSender(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 60 "/opt/tinyos-2.x/tos/chips/rf230/Neighborhood.nc"
inline static uint8_t TrafficMonitorLayerP__Neighborhood__insertNode(am_addr_t id){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = NeighborhoodP__Neighborhood__insertNode(id);
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 37 "/opt/tinyos-2.x/tos/chips/rf230/TrafficMonitorConfig.nc"
inline static uint16_t TrafficMonitorLayerP__TrafficMonitorConfig__getChannelTime(message_t *msg){
#line 37
  unsigned short __nesc_result;
#line 37

#line 37
  __nesc_result = RF230ActiveMessageP__TrafficMonitorConfig__getChannelTime(msg);
#line 37

#line 37
  return __nesc_result;
#line 37
}
#line 37
# 105 "/opt/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
static inline message_t *TrafficMonitorLayerP__SubReceive__receive(message_t *msg)
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

# 42 "/opt/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
inline static message_t *RandomCollisionLayerP__RadioReceive__receive(message_t *msg){
#line 42
  nx_struct message_t *__nesc_result;
#line 42

#line 42
  __nesc_result = TrafficMonitorLayerP__SubReceive__receive(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 196 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static bool RF230ActiveMessageP__IEEE154Packet__requiresAckReply(message_t *msg){
#line 196
  unsigned char __nesc_result;
#line 196

#line 196
  __nesc_result = IEEE154PacketP__IEEE154Packet__requiresAckReply(msg);
#line 196

#line 196
  return __nesc_result;
#line 196
}
#line 196
# 53 "/opt/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
inline static uint16_t RF230ActiveMessageP__RadioAlarm__getNow(void ){
#line 53
  unsigned short __nesc_result;
#line 53

#line 53
  __nesc_result = RadioAlarmP__RadioAlarm__getNow(0U);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 244 "/opt/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline uint16_t RF230ActiveMessageP__RandomCollisionConfig__getTransmitBarrier(message_t *msg)
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

# 46 "/opt/tinyos-2.x/tos/chips/rf230/RandomCollisionConfig.nc"
inline static uint16_t RandomCollisionLayerP__Config__getTransmitBarrier(message_t *msg){
#line 46
  unsigned short __nesc_result;
#line 46

#line 46
  __nesc_result = RF230ActiveMessageP__RandomCollisionConfig__getTransmitBarrier(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 160 "/opt/tinyos-2.x/tos/chips/rf230/RandomCollisionLayerP.nc"
static inline message_t *RandomCollisionLayerP__SubReceive__receive(message_t *msg)
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

# 42 "/opt/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
inline static message_t *SoftwareAckLayerP__RadioReceive__receive(message_t *msg){
#line 42
  nx_struct message_t *__nesc_result;
#line 42

#line 42
  __nesc_result = RandomCollisionLayerP__SubReceive__receive(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 251 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_leuint8(void * target, uint8_t value)
#line 251
{
  uint8_t *base = target;

#line 253
  base[0] = value;
  return value;
}

#line 281
static __inline  uint16_t __nesc_hton_leuint16(void * target, uint16_t value)
#line 281
{
  uint8_t *base = target;

#line 283
  base[0] = value;
  base[1] = value >> 8;
  return value;
}

# 111 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline void IEEE154PacketP__IEEE154Packet__createAckReply(message_t *data, message_t *ack)
{
  ieee154_header_t *header = IEEE154PacketP__getHeader(ack);

  __nesc_hton_leuint8(header->length.data, IEEE154PacketP__IEEE154_ACK_FRAME_LENGTH);
  __nesc_hton_leuint16(header->fcf.data, IEEE154PacketP__IEEE154_ACK_FRAME_VALUE);
  __nesc_hton_leuint8(header->dsn.data, __nesc_ntoh_leuint8(IEEE154PacketP__getHeader(data)->dsn.data));
}

# 92 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static void RF230ActiveMessageP__IEEE154Packet__createAckReply(message_t *data, message_t *ack){
#line 92
  IEEE154PacketP__IEEE154Packet__createAckReply(data, ack);
#line 92
}
#line 92
# 119 "/opt/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline void RF230ActiveMessageP__SoftwareAckConfig__createAckPacket(message_t *data, message_t *ack)
{
  RF230ActiveMessageP__IEEE154Packet__createAckReply(data, ack);
}

# 68 "/opt/tinyos-2.x/tos/chips/rf230/SoftwareAckConfig.nc"
inline static void SoftwareAckLayerP__SoftwareAckConfig__createAckPacket(message_t *data, message_t *ack){
#line 68
  RF230ActiveMessageP__SoftwareAckConfig__createAckPacket(data, ack);
#line 68
}
#line 68
# 114 "/opt/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline bool RF230ActiveMessageP__SoftwareAckConfig__requiresAckReply(message_t *msg)
{
  return RF230ActiveMessageP__IEEE154Packet__requiresAckReply(msg);
}

# 63 "/opt/tinyos-2.x/tos/chips/rf230/SoftwareAckConfig.nc"
inline static bool SoftwareAckLayerP__SoftwareAckConfig__requiresAckReply(message_t *msg){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = RF230ActiveMessageP__SoftwareAckConfig__requiresAckReply(msg);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 152 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__CompareA__stop(void )
#line 152
{
#line 152
  * (volatile uint8_t *)0x6F &= ~(1 << 1);
}

# 59 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__stop(void ){
#line 59
  HplAtm1281Timer1P__CompareA__stop();
#line 59
}
#line 59
# 65 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__stop(void )
#line 65
{
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__stop();
}

# 62 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void RadioAlarmP__Alarm__stop(void ){
#line 62
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__stop();
#line 62
}
#line 62
# 96 "/opt/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
static inline void RadioAlarmP__RadioAlarm__cancel(uint8_t id)
{
  for (; 0; ) ;
  for (; 0; ) ;

  RadioAlarmP__Alarm__stop();
  RadioAlarmP__state = RadioAlarmP__STATE_READY;
}

# 43 "/opt/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
inline static void SoftwareAckLayerP__RadioAlarm__cancel(void ){
#line 43
  RadioAlarmP__RadioAlarm__cancel(2U);
#line 43
}
#line 43
# 98 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline bool IEEE154PacketP__IEEE154Packet__isAckFrame(message_t *msg)
{
  return (__nesc_ntoh_leuint16(IEEE154PacketP__getHeader(msg)->fcf.data) & IEEE154PacketP__IEEE154_ACK_FRAME_MASK) == IEEE154PacketP__IEEE154_ACK_FRAME_VALUE;
}

# 79 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static bool RF230ActiveMessageP__IEEE154Packet__isAckFrame(message_t *msg){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = IEEE154PacketP__IEEE154Packet__isAckFrame(msg);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 104 "/opt/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline bool RF230ActiveMessageP__SoftwareAckConfig__isAckPacket(message_t *msg)
{
  return RF230ActiveMessageP__IEEE154Packet__isAckFrame(msg);
}

# 50 "/opt/tinyos-2.x/tos/chips/rf230/SoftwareAckConfig.nc"
inline static bool SoftwareAckLayerP__SoftwareAckConfig__isAckPacket(message_t *msg){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = RF230ActiveMessageP__SoftwareAckConfig__isAckPacket(msg);
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 128 "/opt/tinyos-2.x/tos/chips/rf230/SoftwareAckLayerP.nc"
static inline message_t *SoftwareAckLayerP__SubReceive__receive(message_t *msg)
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

# 42 "/opt/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
inline static message_t *RF230LayerP__RadioReceive__receive(message_t *msg){
#line 42
  nx_struct message_t *__nesc_result;
#line 42

#line 42
  __nesc_result = SoftwareAckLayerP__SubReceive__receive(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 61 "/opt/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static __inline rf230packet_metadata_t *RF230PacketP__getMeta(message_t *msg)
{
  return (rf230packet_metadata_t *)msg->metadata;
}

#line 135
static inline void RF230PacketP__PacketLinkQuality__set(message_t *msg, uint8_t value)
{
  RF230PacketP__getMeta(msg)->lqi = value;
}

# 46 "/opt/tinyos-2.x/tos/chips/rf230/PacketField.nc"
inline static void RF230LayerP__PacketLinkQuality__set(message_t *msg, RF230LayerP__PacketLinkQuality__value_type value){
#line 46
  RF230PacketP__PacketLinkQuality__set(msg, value);
#line 46
}
#line 46
# 251 "/usr/lib/gcc/avr/4.3.3/../../../avr/include/util/crc16.h" 3
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

# 89 "/opt/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static __inline uint16_t HplRF230P__HplRF230__crcByte(uint16_t crc, uint8_t data)
{
  return _crc_ccitt_update(crc, data);
}

# 33 "/opt/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230.nc"
inline static uint16_t RF230LayerP__HplRF230__crcByte(uint16_t crc, uint8_t data){
#line 33
  unsigned short __nesc_result;
#line 33

#line 33
  __nesc_result = HplRF230P__HplRF230__crcByte(crc, data);
#line 33

#line 33
  return __nesc_result;
#line 33
}
#line 33
# 257 "/opt/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static inline bool MessageBufferLayerP__RadioReceive__header(message_t *msg)
{
  bool notFull;


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 262
    notFull = MessageBufferLayerP__receiveQueueSize < MessageBufferLayerP__RECEIVE_QUEUE_SIZE;
#line 262
    __nesc_atomic_end(__nesc_atomic); }

  return notFull;
}

# 35 "/opt/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
inline static bool UniqueLayerP__RadioReceive__header(message_t *msg){
#line 35
  unsigned char __nesc_result;
#line 35

#line 35
  __nesc_result = MessageBufferLayerP__RadioReceive__header(msg);
#line 35

#line 35
  return __nesc_result;
#line 35
}
#line 35
# 84 "/opt/tinyos-2.x/tos/chips/rf230/UniqueLayerP.nc"
static inline bool UniqueLayerP__SubReceive__header(message_t *msg)
{

  return UniqueLayerP__RadioReceive__header(msg);
}

# 35 "/opt/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
inline static bool TrafficMonitorLayerP__RadioReceive__header(message_t *msg){
#line 35
  unsigned char __nesc_result;
#line 35

#line 35
  __nesc_result = UniqueLayerP__SubReceive__header(msg);
#line 35

#line 35
  return __nesc_result;
#line 35
}
#line 35
# 100 "/opt/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
static inline bool TrafficMonitorLayerP__SubReceive__header(message_t *msg)
{
  return TrafficMonitorLayerP__RadioReceive__header(msg);
}

# 35 "/opt/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
inline static bool RandomCollisionLayerP__RadioReceive__header(message_t *msg){
#line 35
  unsigned char __nesc_result;
#line 35

#line 35
  __nesc_result = TrafficMonitorLayerP__SubReceive__header(msg);
#line 35

#line 35
  return __nesc_result;
#line 35
}
#line 35
# 155 "/opt/tinyos-2.x/tos/chips/rf230/RandomCollisionLayerP.nc"
static inline bool RandomCollisionLayerP__SubReceive__header(message_t *msg)
{
  return RandomCollisionLayerP__RadioReceive__header(msg);
}

# 35 "/opt/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
inline static bool SoftwareAckLayerP__RadioReceive__header(message_t *msg){
#line 35
  unsigned char __nesc_result;
#line 35

#line 35
  __nesc_result = RandomCollisionLayerP__SubReceive__header(msg);
#line 35

#line 35
  return __nesc_result;
#line 35
}
#line 35
# 120 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline bool IEEE154PacketP__IEEE154Packet__verifyAckReply(message_t *data, message_t *ack)
{
  ieee154_header_t *header = IEEE154PacketP__getHeader(ack);

  return __nesc_ntoh_leuint8(header->dsn.data) == __nesc_ntoh_leuint8(IEEE154PacketP__getHeader(data)->dsn.data)
   && (__nesc_ntoh_leuint16(header->fcf.data) & IEEE154PacketP__IEEE154_ACK_FRAME_MASK) == IEEE154PacketP__IEEE154_ACK_FRAME_VALUE;
}

# 98 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static bool RF230ActiveMessageP__IEEE154Packet__verifyAckReply(message_t *data, message_t *ack){
#line 98
  unsigned char __nesc_result;
#line 98

#line 98
  __nesc_result = IEEE154PacketP__IEEE154Packet__verifyAckReply(data, ack);
#line 98

#line 98
  return __nesc_result;
#line 98
}
#line 98
# 109 "/opt/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline bool RF230ActiveMessageP__SoftwareAckConfig__verifyAckPacket(message_t *data, message_t *ack)
{
  return RF230ActiveMessageP__IEEE154Packet__verifyAckReply(data, ack);
}

# 57 "/opt/tinyos-2.x/tos/chips/rf230/SoftwareAckConfig.nc"
inline static bool SoftwareAckLayerP__SoftwareAckConfig__verifyAckPacket(message_t *data, message_t *ack){
#line 57
  unsigned char __nesc_result;
#line 57

#line 57
  __nesc_result = RF230ActiveMessageP__SoftwareAckConfig__verifyAckPacket(data, ack);
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
# 120 "/opt/tinyos-2.x/tos/chips/rf230/SoftwareAckLayerP.nc"
static inline bool SoftwareAckLayerP__SubReceive__header(message_t *msg)
{
  if (SoftwareAckLayerP__SoftwareAckConfig__isAckPacket(msg)) {
    return SoftwareAckLayerP__state == SoftwareAckLayerP__STATE_ACK_WAIT && SoftwareAckLayerP__SoftwareAckConfig__verifyAckPacket(SoftwareAckLayerP__txMsg, msg);
    }
  else {
#line 125
    return SoftwareAckLayerP__RadioReceive__header(msg);
    }
}

# 35 "/opt/tinyos-2.x/tos/chips/rf230/RadioReceive.nc"
inline static bool RF230LayerP__RadioReceive__header(message_t *msg){
#line 35
  unsigned char __nesc_result;
#line 35

#line 35
  __nesc_result = SoftwareAckLayerP__SubReceive__header(msg);
#line 35

#line 35
  return __nesc_result;
#line 35
}
#line 35
# 75 "/opt/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline uint8_t RF230ActiveMessageP__RF230Config__getHeaderLength(void )
{

  return 7;
}

# 55 "/opt/tinyos-2.x/tos/chips/rf230/RF230Config.nc"
inline static uint8_t RF230LayerP__RF230Config__getHeaderLength(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = RF230ActiveMessageP__RF230Config__getHeaderLength();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 63 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline ieee154_header_t *IEEE154PacketP__IEEE154Packet__getHeader(message_t *msg)
{
  return IEEE154PacketP__getHeader(msg);
}

# 39 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static ieee154_header_t *RF230ActiveMessageP__IEEE154Packet__getHeader(message_t *msg){
#line 39
  nx_struct ieee154_header_t *__nesc_result;
#line 39

#line 39
  __nesc_result = IEEE154PacketP__IEEE154Packet__getHeader(msg);
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 65 "/opt/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline uint8_t *RF230ActiveMessageP__RF230Config__getPayload(message_t *msg)
{
  return (uint8_t *)RF230ActiveMessageP__IEEE154Packet__getHeader(msg) + 1;
}

# 46 "/opt/tinyos-2.x/tos/chips/rf230/RF230Config.nc"
inline static uint8_t *RF230LayerP__RF230Config__getPayload(message_t *msg){
#line 46
  unsigned char *__nesc_result;
#line 46

#line 46
  __nesc_result = RF230ActiveMessageP__RF230Config__getPayload(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 73 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline void IEEE154PacketP__IEEE154Packet__setLength(message_t *msg, uint8_t length)
{
  __nesc_hton_leuint8(IEEE154PacketP__getHeader(msg)->length.data, length);
}

# 49 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static void RF230ActiveMessageP__IEEE154Packet__setLength(message_t *msg, uint8_t length){
#line 49
  IEEE154PacketP__IEEE154Packet__setLength(msg, length);
#line 49
}
#line 49
# 60 "/opt/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline void RF230ActiveMessageP__RF230Config__setLength(message_t *msg, uint8_t len)
{
  RF230ActiveMessageP__IEEE154Packet__setLength(msg, len);
}

# 39 "/opt/tinyos-2.x/tos/chips/rf230/RF230Config.nc"
inline static void RF230LayerP__RF230Config__setLength(message_t *msg, uint8_t len){
#line 39
  RF230ActiveMessageP__RF230Config__setLength(msg, len);
#line 39
}
#line 39
# 81 "/opt/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline uint8_t RF230ActiveMessageP__RF230Config__getMaxLength(void )
{

  return sizeof(rf230packet_header_t ) - 1 + 28 + sizeof(ieee154_footer_t );
}

# 60 "/opt/tinyos-2.x/tos/chips/rf230/RF230Config.nc"
inline static uint8_t RF230LayerP__RF230Config__getMaxLength(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = RF230ActiveMessageP__RF230Config__getMaxLength();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 121 "/opt/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static __inline uint8_t HplRF230P__HplRF230__spiWrite(uint8_t data)
{



  * (volatile uint8_t *)(0X2E + 0x20) = data;
  while (!(* (volatile uint8_t *)(0x2D + 0x20) & 0x80)) 
    ;

  return * (volatile uint8_t *)(0X2E + 0x20);
}

# 59 "/opt/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230.nc"
inline static uint8_t RF230LayerP__HplRF230__spiWrite(uint8_t data){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = HplRF230P__HplRF230__spiWrite(data);
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 547 "/opt/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
static __inline void RF230LayerP__downloadMessage(void )
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
#line 599
    crc = 1;
    }
  RF230LayerP__SELN__set();
  RF230LayerP__state = RF230LayerP__STATE_RX_ON;
#line 619
  RF230LayerP__cmd = RF230LayerP__CMD_NONE;


  if (crc == 0) {
    RF230LayerP__rxMsg = RF230LayerP__RadioReceive__receive(RF230LayerP__rxMsg);
    }
}

# 132 "/opt/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline uint16_t RF230ActiveMessageP__SoftwareAckConfig__getAckTimeout(void )
{
  return (uint16_t )(800 * (7372800UL / 8 / 32 * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 1000000.0));
}

# 32 "/opt/tinyos-2.x/tos/chips/rf230/SoftwareAckConfig.nc"
inline static uint16_t SoftwareAckLayerP__SoftwareAckConfig__getAckTimeout(void ){
#line 32
  unsigned short __nesc_result;
#line 32

#line 32
  __nesc_result = RF230ActiveMessageP__SoftwareAckConfig__getAckTimeout();
#line 32

#line 32
  return __nesc_result;
#line 32
}
#line 32
# 38 "/opt/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
inline static void SoftwareAckLayerP__RadioAlarm__wait(uint16_t timeout){
#line 38
  RadioAlarmP__RadioAlarm__wait(2U, timeout);
#line 38
}
#line 38
#line 33
inline static bool SoftwareAckLayerP__RadioAlarm__isFree(void ){
#line 33
  unsigned char __nesc_result;
#line 33

#line 33
  __nesc_result = RadioAlarmP__RadioAlarm__isFree(2U);
#line 33

#line 33
  return __nesc_result;
#line 33
}
#line 33
# 174 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline uint16_t IEEE154PacketP__IEEE154Packet__getDestAddr(message_t *msg)
{
  return __nesc_ntoh_leuint16(IEEE154PacketP__getHeader(msg)->dest.data);
}

#line 88
static __inline bool IEEE154PacketP__IEEE154Packet__isDataFrame(message_t *msg)
{
  return (__nesc_ntoh_leuint16(IEEE154PacketP__getHeader(msg)->fcf.data) & IEEE154PacketP__IEEE154_DATA_FRAME_MASK) == IEEE154PacketP__IEEE154_DATA_FRAME_VALUE;
}

#line 128
static __inline bool IEEE154PacketP__IEEE154Packet__getAckRequired(message_t *msg)
{
  return __nesc_ntoh_leuint16(IEEE154PacketP__getHeader(msg)->fcf.data) & (1 << IEEE154_FCF_ACK_REQ);
}

#line 218
static inline bool IEEE154PacketP__IEEE154Packet__requiresAckWait(message_t *msg)
{
  return IEEE154PacketP__IEEE154Packet__getAckRequired(msg)
   && IEEE154PacketP__IEEE154Packet__isDataFrame(msg)
   && IEEE154PacketP__IEEE154Packet__getDestAddr(msg) != 0xFFFF;
}

# 190 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static bool RF230ActiveMessageP__IEEE154Packet__requiresAckWait(message_t *msg){
#line 190
  unsigned char __nesc_result;
#line 190

#line 190
  __nesc_result = IEEE154PacketP__IEEE154Packet__requiresAckWait(msg);
#line 190

#line 190
  return __nesc_result;
#line 190
}
#line 190
# 99 "/opt/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline bool RF230ActiveMessageP__SoftwareAckConfig__requiresAckWait(message_t *msg)
{
  return RF230ActiveMessageP__IEEE154Packet__requiresAckWait(msg);
}

# 38 "/opt/tinyos-2.x/tos/chips/rf230/SoftwareAckConfig.nc"
inline static bool SoftwareAckLayerP__SoftwareAckConfig__requiresAckWait(message_t *msg){
#line 38
  unsigned char __nesc_result;
#line 38

#line 38
  __nesc_result = RF230ActiveMessageP__SoftwareAckConfig__requiresAckWait(msg);
#line 38

#line 38
  return __nesc_result;
#line 38
}
#line 38
# 83 "/opt/tinyos-2.x/tos/chips/rf230/SoftwareAckLayerP.nc"
static inline void SoftwareAckLayerP__SubSend__sendDone(error_t error)
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

# 45 "/opt/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
inline static void RF230LayerP__RadioSend__sendDone(error_t error){
#line 45
  SoftwareAckLayerP__SubSend__sendDone(error);
#line 45
}
#line 45
# 152 "/opt/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static inline void RF230PacketP__PacketTimeStampRadio__clear(message_t *msg)
{
  RF230PacketP__getMeta(msg)->flags &= ~RF230PACKET_TIMESTAMP;
}

# 59 "/opt/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
inline static void RF230LayerP__PacketTimeStamp__clear(message_t * msg){
#line 59
  RF230PacketP__PacketTimeStampRadio__clear(msg);
#line 59
}
#line 59








inline static void RF230LayerP__PacketTimeStamp__set(message_t * msg, RF230LayerP__PacketTimeStamp__size_type value){
#line 67
  RF230PacketP__PacketTimeStampRadio__set(msg, value);
#line 67
}
#line 67
# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__size_type /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__get(void ){
#line 53
  unsigned long __nesc_result;
#line 53

#line 53
  __nesc_result = /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__Counter__get();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 42 "/opt/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline uint32_t /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__get(void )
{
  return /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__get();
}

# 50 "/opt/tinyos-2.x/tos/lib/timer/LocalTime.nc"
inline static uint32_t RF230LayerP__LocalTime__get(void ){
#line 50
  unsigned long __nesc_result;
#line 50

#line 50
  __nesc_result = /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__get();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 227 "/opt/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static inline void RF230PacketP__PacketRSSI__clear(message_t *msg)
{
  RF230PacketP__getMeta(msg)->flags &= ~RF230PACKET_RSSI;
}

# 40 "/opt/tinyos-2.x/tos/chips/rf230/PacketField.nc"
inline static void RF230LayerP__PacketRSSI__clear(message_t *msg){
#line 40
  RF230PacketP__PacketRSSI__clear(msg);
#line 40
}
#line 40
# 232 "/opt/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static inline void RF230PacketP__PacketRSSI__set(message_t *msg, uint8_t value)
{
  RF230PacketP__getMeta(msg)->flags &= ~RF230PACKET_TXPOWER;
  RF230PacketP__getMeta(msg)->flags |= RF230PACKET_RSSI;
  RF230PacketP__getMeta(msg)->power = value;
}

# 46 "/opt/tinyos-2.x/tos/chips/rf230/PacketField.nc"
inline static void RF230LayerP__PacketRSSI__set(message_t *msg, RF230LayerP__PacketRSSI__value_type value){
#line 46
  RF230PacketP__PacketRSSI__set(msg, value);
#line 46
}
#line 46
# 641 "/opt/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
static inline void RF230LayerP__serviceRadio(void )
{
  if (RF230LayerP__isSpiAcquired()) 
    {
      uint16_t time;
      uint32_t time32;
      uint8_t irq;
      uint8_t temp;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 650
        time = RF230LayerP__capturedTime;
#line 650
        __nesc_atomic_end(__nesc_atomic); }
      RF230LayerP__radioIrq = FALSE;
      irq = RF230LayerP__readRegister(RF230_IRQ_STATUS);
#line 672
      if (irq & RF230_IRQ_PLL_LOCK) 
        {
          if (RF230LayerP__cmd == RF230LayerP__CMD_TURNON || RF230LayerP__cmd == RF230LayerP__CMD_CHANNEL) 
            {
              for (; 0; ) ;

              RF230LayerP__state = RF230LayerP__STATE_RX_ON;
              RF230LayerP__cmd = RF230LayerP__CMD_SIGNAL_DONE;
            }
          else {
#line 681
            if (RF230LayerP__cmd == RF230LayerP__CMD_TRANSMIT) 
              {
                for (; 0; ) ;
              }
            else {
              for (; 0; ) ;
              }
            }
        }
#line 689
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
#line 751
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











static inline void RF230LayerP__Tasklet__run(void )
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
#line 802
        if (RF230LayerP__CMD_TURNOFF <= RF230LayerP__cmd && RF230LayerP__cmd <= RF230LayerP__CMD_TURNON) {
          RF230LayerP__changeState();
          }
        else {
#line 804
          if (RF230LayerP__cmd == RF230LayerP__CMD_CHANNEL) {
            RF230LayerP__changeChannel();
            }
          }
        }
#line 807
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

# 37 "/opt/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
inline static void TaskletC__Tasklet__run(void ){
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
# 147 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__isOwner(uint8_t id)
#line 147
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 148
    {
      if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId == id && /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_BUSY) {
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

# 118 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static bool Atm128SpiP__ResourceArbiter__isOwner(uint8_t arg_0x40a3a7d0){
#line 118
  unsigned char __nesc_result;
#line 118

#line 118
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__isOwner(arg_0x40a3a7d0);
#line 118

#line 118
  return __nesc_result;
#line 118
}
#line 118
# 332 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline uint8_t Atm128SpiP__Resource__isOwner(uint8_t id)
#line 332
{
  return Atm128SpiP__ResourceArbiter__isOwner(id);
}

# 118 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static bool RF230LayerP__SpiResource__isOwner(void ){
#line 118
  unsigned char __nesc_result;
#line 118

#line 118
  __nesc_result = Atm128SpiP__Resource__isOwner(0U);
#line 118

#line 118
  return __nesc_result;
#line 118
}
#line 118
# 168 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(uint8_t id)
#line 168
{
}

# 51 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__immediateRequested(uint8_t arg_0x40a975b0){
#line 51
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(arg_0x40a975b0);
#line 51
}
#line 51
# 84 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(uint8_t id)
#line 84
{
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__immediateRequested(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 86
    {
      if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_IDLE) {
          /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_BUSY;
          /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId = id;
          /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId);
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

# 87 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t Atm128SpiP__ResourceArbiter__immediateRequest(uint8_t arg_0x40a3a7d0){
#line 87
  unsigned char __nesc_result;
#line 87

#line 87
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(arg_0x40a3a7d0);
#line 87

#line 87
  return __nesc_result;
#line 87
}
#line 87
# 305 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline error_t Atm128SpiP__Resource__immediateRequest(uint8_t id)
#line 305
{
  error_t result = Atm128SpiP__ResourceArbiter__immediateRequest(id);

#line 307
  if (result == SUCCESS) {
      Atm128SpiP__startSpi();
    }
  return result;
}

# 87 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t RF230LayerP__SpiResource__immediateRequest(void ){
#line 87
  unsigned char __nesc_result;
#line 87

#line 87
  __nesc_result = Atm128SpiP__Resource__immediateRequest(0U);
#line 87

#line 87
  return __nesc_result;
#line 87
}
#line 87
# 156 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setMasterBit(bool isMaster)
#line 156
{
  if (isMaster) {
      * (volatile uint8_t *)(0x2C + 0x20) |= 1 << 4;
    }
  else {
      * (volatile uint8_t *)(0x2C + 0x20) &= ~(1 << 4);
    }
}

# 52 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )36U |= 1 << 1;
}

# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP__SCK__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeOutput();
#line 35
}
#line 35
# 50 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )36U &= ~(1 << 3);
}

# 33 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP__MISO__makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput();
#line 33
}
#line 33
# 52 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )36U |= 1 << 2;
}

# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP__MOSI__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput();
#line 35
}
#line 35
# 79 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__initMaster(void )
#line 79
{
  HplAtm128SpiP__MOSI__makeOutput();
  HplAtm128SpiP__MISO__makeInput();
  HplAtm128SpiP__SCK__makeOutput();
  HplAtm128SpiP__SPI__setMasterBit(TRUE);
}

# 66 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__initMaster(void ){
#line 66
  HplAtm128SpiP__SPI__initMaster();
#line 66
}
#line 66
# 213 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setMasterDoubleSpeed(bool on)
#line 213
{
  if (on) {
      * (volatile uint8_t *)(0x2D + 0x20) |= 1 << 0;
    }
  else {
      * (volatile uint8_t *)(0x2D + 0x20) &= ~(1 << 0);
    }
}

# 125 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__setMasterDoubleSpeed(bool on){
#line 125
  HplAtm128SpiP__SPI__setMasterDoubleSpeed(on);
#line 125
}
#line 125
# 169 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setClockPolarity(bool highWhenIdle)
#line 169
{
  if (highWhenIdle) {
      * (volatile uint8_t *)(0x2C + 0x20) |= 1 << 3;
    }
  else {
      * (volatile uint8_t *)(0x2C + 0x20) &= ~(1 << 3);
    }
}

# 108 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__setClockPolarity(bool highWhenIdle){
#line 108
  HplAtm128SpiP__SPI__setClockPolarity(highWhenIdle);
#line 108
}
#line 108
# 183 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setClockPhase(bool sampleOnTrailing)
#line 183
{
  if (sampleOnTrailing) {
      * (volatile uint8_t *)(0x2C + 0x20) |= 1 << 2;
    }
  else {
      * (volatile uint8_t *)(0x2C + 0x20) &= ~(1 << 2);
    }
}

# 111 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__setClockPhase(bool sampleOnTrailing){
#line 111
  HplAtm128SpiP__SPI__setClockPhase(sampleOnTrailing);
#line 111
}
#line 111
# 200 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setClock(uint8_t v)
#line 200
{
  v &= 1 | 0;
  * (volatile uint8_t *)(0x2C + 0x20) = (* (volatile uint8_t *)(0x2C + 0x20) & ~(1 | 0)) | v;
}

# 114 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__setClock(uint8_t speed){
#line 114
  HplAtm128SpiP__SPI__setClock(speed);
#line 114
}
#line 114
# 54 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id)
#line 54
{
  return /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__resQ[id] != /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY || /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__qTail == id;
}

#line 72
static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id)
#line 72
{
  /* atomic removed: atomic calls only */
#line 73
  {
    if (!/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(id)) {
        if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__qHead = id;
          }
        else {
#line 78
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__resQ[/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__qTail] = id;
          }
#line 79
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__qTail = id;
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
inline static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__enqueue(resource_client_id_t id){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(id);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 166 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(uint8_t id)
#line 166
{
}

# 43 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(uint8_t arg_0x40a975b0){
#line 43
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(arg_0x40a975b0);
#line 43
}
#line 43
# 71 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(uint8_t id)
#line 71
{
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 73
    {
      if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_IDLE) {
          /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_GRANTING;
          /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__reqResId = id;
          /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__postTask();
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
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__enqueue(id);

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

# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t Atm128SpiP__ResourceArbiter__request(uint8_t arg_0x40a3a7d0){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(arg_0x40a3a7d0);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 52 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__get(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = HplAtm1281Timer1P__Timer__get();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 41 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__get(void )
{
  return /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__get();
}

# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__get(void ){
#line 53
  unsigned short __nesc_result;
#line 53

#line 53
  __nesc_result = /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__get();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 125 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline uint8_t HplAtm1281Timer1P__TimerCtrl__getInterruptFlag(void )
#line 125
{
  return * (volatile uint8_t *)(0x16 + 0x20);
}

#line 156
static inline bool HplAtm1281Timer1P__Timer__test(void )
#line 156
{
  return ((Atm128_TIFR_t )HplAtm1281Timer1P__TimerCtrl__getInterruptFlag()).bits.tov;
}

# 78 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__test(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = HplAtm1281Timer1P__Timer__test();
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 46 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending(void )
{
  return /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__test();
}

# 60 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static bool /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__isOverflowPending(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 194 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__CompareA__set(uint16_t t)
#line 194
{
#line 194
  * (volatile uint16_t *)0x88 = t;
}

# 45 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__set(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__size_type t){
#line 45
  HplAtm1281Timer1P__CompareA__set(t);
#line 45
}
#line 45
# 140 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__CompareA__reset(void )
#line 140
{
#line 140
  * (volatile uint8_t *)(0x16 + 0x20) = 1 << 1;
}

# 53 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__reset(void ){
#line 53
  HplAtm1281Timer1P__CompareA__reset();
#line 53
}
#line 53
# 146 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__CompareA__start(void )
#line 146
{
#line 146
  * (volatile uint8_t *)0x6F |= 1 << 1;
}

# 56 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__start(void ){
#line 56
  HplAtm1281Timer1P__CompareA__start();
#line 56
}
#line 56
# 103 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static bool RF230ActiveMessageP__IEEE154Packet__getAckRequired(message_t *msg){
#line 103
  unsigned char __nesc_result;
#line 103

#line 103
  __nesc_result = IEEE154PacketP__IEEE154Packet__getAckRequired(msg);
#line 103

#line 103
  return __nesc_result;
#line 103
}
#line 103
# 170 "/opt/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static inline void MessageBufferLayerP__RadioSend__sendDone(error_t error)
{
  for (; 0; ) ;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 174
    MessageBufferLayerP__txError = error;
#line 174
    __nesc_atomic_end(__nesc_atomic); }
  MessageBufferLayerP__sendTask__postTask();
}

# 45 "/opt/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
inline static void TrafficMonitorLayerP__RadioSend__sendDone(error_t error){
#line 45
  MessageBufferLayerP__RadioSend__sendDone(error);
#line 45
}
#line 45
# 70 "/opt/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static __inline rf230packet_metadata_t *RF230ActiveMessageP__getMeta(message_t *msg)
{
  return (rf230packet_metadata_t *)msg->metadata;
}

# 193 "/opt/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static inline bool RF230PacketP__PacketTransmitPower__isSet(message_t *msg)
{
  return RF230PacketP__getMeta(msg)->flags & RF230PACKET_TXPOWER;
}

# 29 "/opt/tinyos-2.x/tos/chips/rf230/PacketField.nc"
inline static bool RF230LayerP__PacketTransmitPower__isSet(message_t *msg){
#line 29
  unsigned char __nesc_result;
#line 29

#line 29
  __nesc_result = RF230PacketP__PacketTransmitPower__isSet(msg);
#line 29

#line 29
  return __nesc_result;
#line 29
}
#line 29
# 198 "/opt/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static inline uint8_t RF230PacketP__PacketTransmitPower__get(message_t *msg)
{
  return RF230PacketP__getMeta(msg)->power;
}

# 35 "/opt/tinyos-2.x/tos/chips/rf230/PacketField.nc"
inline static RF230LayerP__PacketTransmitPower__value_type RF230LayerP__PacketTransmitPower__get(message_t *msg){
#line 35
  unsigned char __nesc_result;
#line 35

#line 35
  __nesc_result = RF230PacketP__PacketTransmitPower__get(msg);
#line 35

#line 35
  return __nesc_result;
#line 35
}
#line 35
# 67 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static bool RF230ActiveMessageP__IEEE154Packet__isDataFrame(message_t *msg){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = IEEE154PacketP__IEEE154Packet__isDataFrame(msg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 92 "/opt/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline bool RF230ActiveMessageP__RF230Config__requiresRssiCca(message_t *msg)
{
  return RF230ActiveMessageP__IEEE154Packet__isDataFrame(msg);
}

# 72 "/opt/tinyos-2.x/tos/chips/rf230/RF230Config.nc"
inline static bool RF230LayerP__RF230Config__requiresRssiCca(message_t *msg){
#line 72
  unsigned char __nesc_result;
#line 72

#line 72
  __nesc_result = RF230ActiveMessageP__RF230Config__requiresRssiCca(msg);
#line 72

#line 72
  return __nesc_result;
#line 72
}
#line 72
# 241 "/opt/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static inline bool RF230PacketP__PacketTimeSyncOffset__isSet(message_t *msg)
{
  return RF230PacketP__getMeta(msg)->flags & RF230PACKET_TIMESYNC;
}

# 29 "/opt/tinyos-2.x/tos/chips/rf230/PacketField.nc"
inline static bool RF230LayerP__PacketTimeSyncOffset__isSet(message_t *msg){
#line 29
  unsigned char __nesc_result;
#line 29

#line 29
  __nesc_result = RF230PacketP__PacketTimeSyncOffset__isSet(msg);
#line 29

#line 29
  return __nesc_result;
#line 29
}
#line 29
# 68 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline uint8_t IEEE154PacketP__IEEE154Packet__getLength(message_t *msg)
{
  return __nesc_ntoh_leuint8(IEEE154PacketP__getHeader(msg)->length.data);
}

# 44 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static uint8_t RF230PacketP__IEEE154Packet__getLength(message_t *msg){
#line 44
  unsigned char __nesc_result;
#line 44

#line 44
  __nesc_result = IEEE154PacketP__IEEE154Packet__getLength(msg);
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 246 "/opt/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static inline uint8_t RF230PacketP__PacketTimeSyncOffset__get(message_t *msg)
{
  return RF230PacketP__IEEE154Packet__getLength(msg) - RF230PacketP__PACKET_LENGTH_INCREASE - sizeof(timesync_absolute_t );
}

# 35 "/opt/tinyos-2.x/tos/chips/rf230/PacketField.nc"
inline static RF230LayerP__PacketTimeSyncOffset__value_type RF230LayerP__PacketTimeSyncOffset__get(message_t *msg){
#line 35
  unsigned char __nesc_result;
#line 35

#line 35
  __nesc_result = RF230PacketP__PacketTimeSyncOffset__get(msg);
#line 35

#line 35
  return __nesc_result;
#line 35
}
#line 35
# 53 "/opt/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
inline static uint16_t RF230LayerP__RadioAlarm__getNow(void ){
#line 53
  unsigned short __nesc_result;
#line 53

#line 53
  __nesc_result = RadioAlarmP__RadioAlarm__getNow(3U);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 44 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static uint8_t RF230ActiveMessageP__IEEE154Packet__getLength(message_t *msg){
#line 44
  unsigned char __nesc_result;
#line 44

#line 44
  __nesc_result = IEEE154PacketP__IEEE154Packet__getLength(msg);
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 55 "/opt/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline uint8_t RF230ActiveMessageP__RF230Config__getLength(message_t *msg)
{
  return RF230ActiveMessageP__IEEE154Packet__getLength(msg);
}

# 34 "/opt/tinyos-2.x/tos/chips/rf230/RF230Config.nc"
inline static uint8_t RF230LayerP__RF230Config__getLength(message_t *msg){
#line 34
  unsigned char __nesc_result;
#line 34

#line 34
  __nesc_result = RF230ActiveMessageP__RF230Config__getLength(msg);
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

# 115 "/opt/tinyos-2.x/tos/chips/rf230/UniqueLayerP.nc"
static inline void UniqueLayerP__Neighborhood__evicted(uint8_t index)
#line 115
{
}

# 195 "/opt/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
static inline void TrafficMonitorLayerP__Neighborhood__evicted(uint8_t index)
#line 195
{
}

# 69 "/opt/tinyos-2.x/tos/chips/rf230/Neighborhood.nc"
inline static void NeighborhoodP__Neighborhood__evicted(uint8_t index){
#line 69
  TrafficMonitorLayerP__Neighborhood__evicted(index);
#line 69
  UniqueLayerP__Neighborhood__evicted(index);
#line 69
}
#line 69
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t RandomCollisionLayerP__calcNextRandom__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(RandomCollisionLayerP__calcNextRandom);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 229 "/opt/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline uint16_t RF230ActiveMessageP__RandomCollisionConfig__getMinimumBackoff(void )
{
  return (uint16_t )(320 * (7372800UL / 8 / 32 * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 1000000.0));
}

# 40 "/opt/tinyos-2.x/tos/chips/rf230/RandomCollisionConfig.nc"
inline static uint16_t RandomCollisionLayerP__Config__getMinimumBackoff(void ){
#line 40
  unsigned short __nesc_result;
#line 40

#line 40
  __nesc_result = RF230ActiveMessageP__RandomCollisionConfig__getMinimumBackoff();
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 262 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline 
#line 261
void Atm128SpiP__SpiPacket__default__sendDone(
uint8_t *_txbuffer, uint8_t *_rxbuffer, 
uint16_t _length, error_t _success)
#line 263
{
}

# 71 "/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
inline static void Atm128SpiP__SpiPacket__sendDone(uint8_t * txBuf, uint8_t * rxBuf, uint16_t len, error_t error){
#line 71
  Atm128SpiP__SpiPacket__default__sendDone(txBuf, rxBuf, len, error);
#line 71
}
#line 71
# 207 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP__zeroTask__runTask(void )
#line 207
{
  uint16_t myLen;
  uint8_t * rx;
  uint8_t * tx;

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

# 78 "/opt/tinyos-2.x/tos/system/RandomMlcgC.nc"
static inline uint16_t RandomMlcgC__Random__rand16(void )
#line 78
{
  return (uint16_t )RandomMlcgC__Random__rand32();
}

# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
inline static uint16_t RandomCollisionLayerP__Random__rand16(void ){
#line 41
  unsigned short __nesc_result;
#line 41

#line 41
  __nesc_result = RandomMlcgC__Random__rand16();
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 67 "/opt/tinyos-2.x/tos/chips/rf230/RandomCollisionLayerP.nc"
static inline void RandomCollisionLayerP__calcNextRandom__runTask(void )
{
  uint16_t a = RandomCollisionLayerP__Random__rand16();

#line 70
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 70
    RandomCollisionLayerP__nextRandom = a;
#line 70
    __nesc_atomic_end(__nesc_atomic); }
}

# 153 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning = FALSE;
}

# 67 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void TrafficMonitorLayerP__Timer__stop(void ){
#line 67
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(0U);
#line 67
}
#line 67
# 190 "/opt/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline uint16_t RF230ActiveMessageP__TrafficMonitorConfig__getUpdatePeriod(void )
{
  return RF230ActiveMessageP__TRAFFIC_UPDATE_PERIOD;
}

# 32 "/opt/tinyos-2.x/tos/chips/rf230/TrafficMonitorConfig.nc"
inline static uint16_t TrafficMonitorLayerP__TrafficMonitorConfig__getUpdatePeriod(void ){
#line 32
  unsigned short __nesc_result;
#line 32

#line 32
  __nesc_result = RF230ActiveMessageP__TrafficMonitorConfig__getUpdatePeriod();
#line 32

#line 32
  return __nesc_result;
#line 32
}
#line 32
# 249 "/opt/tinyos-2.x/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__getNow(void )
#line 249
{
  return /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__get();
}

# 98 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void ){
#line 98
  unsigned long __nesc_result;
#line 98

#line 98
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__getNow();
#line 98

#line 98
  return __nesc_result;
#line 98
}
#line 98
# 85 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void )
{
#line 86
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow();
}

# 125 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void ){
#line 125
  unsigned long __nesc_result;
#line 125

#line 125
  __nesc_result = /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow();
#line 125

#line 125
  return __nesc_result;
#line 125
}
#line 125
# 143 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, FALSE);
}

# 53 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void TrafficMonitorLayerP__Timer__startPeriodic(uint32_t dt){
#line 53
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(0U, dt);
#line 53
}
#line 53
# 229 "/opt/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
static inline void TrafficMonitorLayerP__startStopTimer__runTask(void )
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

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 134 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline uint8_t HplAtm1281Timer2AsyncP__TimerCtrl__getInterruptFlag(void )
#line 134
{
  return * (volatile uint8_t *)(0x17 + 0x20);
}

# 69 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerCtrl8.nc"
inline static uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__getInterruptFlag(void ){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = HplAtm1281Timer2AsyncP__TimerCtrl__getInterruptFlag();
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 80 "/opt/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static __inline uint8_t RF230PacketP__Packet__payloadLength(message_t *msg)
{
  return RF230PacketP__IEEE154Packet__getLength(msg) - RF230PacketP__PACKET_LENGTH_INCREASE;
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static uint8_t MessageBufferLayerP__Packet__payloadLength(message_t * msg){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = RF230PacketP__Packet__payloadLength(msg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 85 "/opt/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static __inline uint8_t RF230PacketP__Packet__maxPayloadLength(void )
{
  return 28;
}

# 95 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static uint8_t MessageBufferLayerP__Packet__maxPayloadLength(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = RF230PacketP__Packet__maxPayloadLength();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 90 "/opt/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static inline void *RF230PacketP__Packet__getPayload(message_t *msg, uint8_t len)
{
  if (len > 28) {
    return (void *)0;
    }
  return msg->data;
}

# 115 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static void * MessageBufferLayerP__Packet__getPayload(message_t * msg, uint8_t len){
#line 115
  void *__nesc_result;
#line 115

#line 115
  __nesc_result = RF230PacketP__Packet__getPayload(msg, len);
#line 115

#line 115
  return __nesc_result;
#line 115
}
#line 115
# 83 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154NetworkLayerP.nc"
static inline message_t *IEEE154NetworkLayerP__NonTinyosReceive__default__receive(uint8_t network, message_t *msg, void *payload, uint8_t len)
{
  return msg;
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * IEEE154NetworkLayerP__NonTinyosReceive__receive(uint8_t arg_0x4085e480, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
    __nesc_result = IEEE154NetworkLayerP__NonTinyosReceive__default__receive(arg_0x4085e480, msg, payload, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 103 "/opt/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
static inline message_t *ActiveMessageLayerC__Snoop__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
{
  return msg;
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * ActiveMessageLayerC__Snoop__receive(am_id_t arg_0x4083f2a8, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
    __nesc_result = ActiveMessageLayerC__Snoop__default__receive(arg_0x4083f2a8, msg, payload, len);
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

# 98 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline void LedsP__Leds__led2Off(void )
#line 98
{
  LedsP__Led2__set();
  ;
#line 100
  ;
}

# 83 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void RadioCountToLedsC__Leds__led2Off(void ){
#line 83
  LedsP__Leds__led2Off();
#line 83
}
#line 83
# 47 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )34U &= ~(1 << 0);
}

# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__clr();
#line 30
}
#line 30
# 93 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline void LedsP__Leds__led2On(void )
#line 93
{
  LedsP__Led2__clr();
  ;
#line 95
  ;
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void RadioCountToLedsC__Leds__led2On(void ){
#line 78
  LedsP__Leds__led2On();
#line 78
}
#line 78
# 83 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline void LedsP__Leds__led1Off(void )
#line 83
{
  LedsP__Led1__set();
  ;
#line 85
  ;
}

# 66 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void RadioCountToLedsC__Leds__led1Off(void ){
#line 66
  LedsP__Leds__led1Off();
#line 66
}
#line 66
# 47 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )34U &= ~(1 << 1);
}

# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__clr();
#line 30
}
#line 30
# 78 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline void LedsP__Leds__led1On(void )
#line 78
{
  LedsP__Led1__clr();
  ;
#line 80
  ;
}

# 61 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void RadioCountToLedsC__Leds__led1On(void ){
#line 61
  LedsP__Leds__led1On();
#line 61
}
#line 61
# 68 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline void LedsP__Leds__led0Off(void )
#line 68
{
  LedsP__Led0__set();
  ;
#line 70
  ;
}

# 50 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void RadioCountToLedsC__Leds__led0Off(void ){
#line 50
  LedsP__Leds__led0Off();
#line 50
}
#line 50
# 47 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )34U &= ~(1 << 2);
}

# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__clr();
#line 30
}
#line 30
# 63 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline void LedsP__Leds__led0On(void )
#line 63
{
  LedsP__Led0__clr();
  ;
#line 65
  ;
}

# 45 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void RadioCountToLedsC__Leds__led0On(void ){
#line 45
  LedsP__Leds__led0On();
#line 45
}
#line 45
# 101 "RadioCountToLedsC.nc"
static inline message_t *RadioCountToLedsC__Receive__receive(message_t *bufPtr, 
void *payload, uint8_t len)
#line 102
{
  ;
  if (len != sizeof(radio_count_msg_t )) {
#line 104
      return bufPtr;
    }
  else 
#line 105
    {
      radio_count_msg_t *rcm = (radio_count_msg_t *)payload;

#line 107
      if (__nesc_ntoh_uint16(rcm->counter.data) & 0x1) {
          RadioCountToLedsC__Leds__led0On();
        }
      else {
          RadioCountToLedsC__Leds__led0Off();
        }
      if (__nesc_ntoh_uint16(rcm->counter.data) & 0x2) {
          RadioCountToLedsC__Leds__led1On();
        }
      else {
          RadioCountToLedsC__Leds__led1Off();
        }
      if (__nesc_ntoh_uint16(rcm->counter.data) & 0x4) {
          RadioCountToLedsC__Leds__led2On();
        }
      else {
          RadioCountToLedsC__Leds__led2Off();
        }
      return bufPtr;
    }
}

# 98 "/opt/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
static inline message_t *ActiveMessageLayerC__Receive__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
{
  return msg;
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * ActiveMessageLayerC__Receive__receive(am_id_t arg_0x40841bf0, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  switch (arg_0x40841bf0) {
#line 67
    case 6:
#line 67
      __nesc_result = RadioCountToLedsC__Receive__receive(msg, payload, len);
#line 67
      break;
#line 67
    default:
#line 67
      __nesc_result = ActiveMessageLayerC__Receive__default__receive(arg_0x40841bf0, msg, payload, len);
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
# 61 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static inline am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void )
#line 61
{
  return ActiveMessageAddressC__amAddress();
}

# 50 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
inline static am_addr_t IEEE154PacketP__ActiveMessageAddress__amAddress(void ){
#line 50
  unsigned short __nesc_result;
#line 50

#line 50
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amAddress();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 238 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline am_addr_t IEEE154PacketP__AMPacket__address(void )
{
  return IEEE154PacketP__ActiveMessageAddress__amAddress();
}







static __inline am_addr_t IEEE154PacketP__AMPacket__destination(message_t *msg)
{
  return IEEE154PacketP__IEEE154Packet__getDestAddr(msg);
}

#line 269
static __inline bool IEEE154PacketP__AMPacket__isForMe(message_t *msg)
{
  am_addr_t addr = IEEE154PacketP__AMPacket__destination(msg);

#line 272
  return addr == IEEE154PacketP__AMPacket__address() || addr == AM_BROADCAST_ADDR;
}

# 125 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static bool ActiveMessageLayerC__AMPacket__isForMe(message_t * amsg){
#line 125
  unsigned char __nesc_result;
#line 125

#line 125
  __nesc_result = IEEE154PacketP__AMPacket__isForMe(amsg);
#line 125

#line 125
  return __nesc_result;
#line 125
}
#line 125
# 208 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline am_id_t IEEE154PacketP__IEEE154Packet__getType(message_t *msg)
{
  return __nesc_ntoh_leuint8(IEEE154PacketP__getHeader(msg)->type.data);
}

#line 275
static __inline am_id_t IEEE154PacketP__AMPacket__type(message_t *msg)
{
  return IEEE154PacketP__IEEE154Packet__getType(msg);
}

# 136 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_id_t ActiveMessageLayerC__AMPacket__type(message_t * amsg){
#line 136
  unsigned char __nesc_result;
#line 136

#line 136
  __nesc_result = IEEE154PacketP__AMPacket__type(amsg);
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 87 "/opt/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
static inline message_t *ActiveMessageLayerC__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
{
  am_id_t type = ActiveMessageLayerC__AMPacket__type(msg);

  msg = ActiveMessageLayerC__AMPacket__isForMe(msg) ? 
  ActiveMessageLayerC__Receive__receive(type, msg, payload, len) : 
  ActiveMessageLayerC__Snoop__receive(type, msg, payload, len);

  return msg;
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * IEEE154NetworkLayerP__Receive__receive(message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  __nesc_result = ActiveMessageLayerC__SubReceive__receive(msg, payload, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 196 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline uint8_t IEEE154PacketP__IEEE154Packet__get6LowPan(message_t *msg)
{
  return __nesc_ntoh_leuint8(IEEE154PacketP__getHeader(msg)->network.data);
}

# 167 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static uint8_t IEEE154NetworkLayerP__IEEE154Packet__get6LowPan(message_t *msg){
#line 167
  unsigned char __nesc_result;
#line 167

#line 167
  __nesc_result = IEEE154PacketP__IEEE154Packet__get6LowPan(msg);
#line 167

#line 167
  return __nesc_result;
#line 167
}
#line 167
# 74 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154NetworkLayerP.nc"
static inline message_t *IEEE154NetworkLayerP__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
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

# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * MessageBufferLayerP__Receive__receive(message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  __nesc_result = IEEE154NetworkLayerP__SubReceive__receive(msg, payload, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 267 "/opt/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static inline void MessageBufferLayerP__deliverTask__runTask(void )
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

# 129 "RadioCountToLedsC.nc"
static inline void RadioCountToLedsC__AMSend__sendDone(message_t *bufPtr, error_t error)
#line 129
{
  if (&RadioCountToLedsC__packet == bufPtr) {
      RadioCountToLedsC__locked = FALSE;
    }
}

# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void /*RadioCountToLedsAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(message_t * msg, error_t error){
#line 99
  RadioCountToLedsC__AMSend__sendDone(msg, error);
#line 99
}
#line 99
# 57 "/opt/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline void /*RadioCountToLedsAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(message_t *m, error_t err)
#line 57
{
  /*RadioCountToLedsAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(m, err);
}

# 207 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(uint8_t id, message_t *msg, error_t err)
#line 207
{
}

# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(uint8_t arg_0x40504f10, message_t * msg, error_t error){
#line 89
  switch (arg_0x40504f10) {
#line 89
    case 0U:
#line 89
      /*RadioCountToLedsAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(msg, error);
#line 89
      break;
#line 89
    default:
#line 89
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(arg_0x40504f10, msg, error);
#line 89
      break;
#line 89
    }
#line 89
}
#line 89
# 155 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(uint8_t last, message_t * msg, error_t err)
#line 155
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[last].msg = (void *)0;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend();
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(last, msg, err);
}

#line 181
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(am_id_t id, message_t *msg, error_t err)
#line 181
{





  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current >= 1) {
      return;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg == msg) {
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current, msg, err);
    }
  else {
      ;
    }
}

# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void ActiveMessageLayerC__AMSend__sendDone(am_id_t arg_0x40841230, message_t * msg, error_t error){
#line 99
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(arg_0x40841230, msg, error);
#line 99
}
#line 99
# 61 "/opt/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
static __inline void ActiveMessageLayerC__SubSend__sendDone(message_t *msg, error_t error)
{
  ActiveMessageLayerC__AMSend__sendDone(ActiveMessageLayerC__AMPacket__type(msg), msg, error);
}

# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static void IEEE154NetworkLayerP__Send__sendDone(message_t * msg, error_t error){
#line 89
  ActiveMessageLayerC__SubSend__sendDone(msg, error);
#line 89
}
#line 89
# 69 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154NetworkLayerP.nc"
static inline void IEEE154NetworkLayerP__SubSend__sendDone(message_t *msg, error_t error)
{
  IEEE154NetworkLayerP__Send__sendDone(msg, error);
}

# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static void UniqueLayerP__Send__sendDone(message_t * msg, error_t error){
#line 89
  IEEE154NetworkLayerP__SubSend__sendDone(msg, error);
#line 89
}
#line 89
# 69 "/opt/tinyos-2.x/tos/chips/rf230/UniqueLayerP.nc"
static inline void UniqueLayerP__SubSend__sendDone(message_t *msg, error_t error)
{
  UniqueLayerP__Send__sendDone(msg, error);
}

# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static void MessageBufferLayerP__Send__sendDone(message_t * msg, error_t error){
#line 89
  UniqueLayerP__SubSend__sendDone(msg, error);
#line 89
}
#line 89
# 68 "/opt/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
inline static void MessageBufferLayerP__Tasklet__resume(void ){
#line 68
  TaskletC__Tasklet__resume();
#line 68
}
#line 68
# 234 "/opt/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline uint16_t RF230ActiveMessageP__RandomCollisionConfig__getInitialBackoff(message_t *msg)
{
  return (uint16_t )(9920 * (7372800UL / 8 / 32 * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 1000000.0));
}

# 29 "/opt/tinyos-2.x/tos/chips/rf230/RandomCollisionConfig.nc"
inline static uint16_t RandomCollisionLayerP__Config__getInitialBackoff(message_t *msg){
#line 29
  unsigned short __nesc_result;
#line 29

#line 29
  __nesc_result = RF230ActiveMessageP__RandomCollisionConfig__getInitialBackoff(msg);
#line 29

#line 29
  return __nesc_result;
#line 29
}
#line 29
# 88 "/opt/tinyos-2.x/tos/chips/rf230/RandomCollisionLayerP.nc"
static inline error_t RandomCollisionLayerP__RadioSend__send(message_t *msg)
{
  if (RandomCollisionLayerP__state != RandomCollisionLayerP__STATE_READY || !RandomCollisionLayerP__RadioAlarm__isFree()) {
    return EBUSY;
    }
  RandomCollisionLayerP__txMsg = msg;
  RandomCollisionLayerP__state = RandomCollisionLayerP__STATE_TX_PENDING_FIRST;
  RandomCollisionLayerP__RadioAlarm__wait(RandomCollisionLayerP__getBackoff(RandomCollisionLayerP__Config__getInitialBackoff(msg)));


  return SUCCESS;
}

# 37 "/opt/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
inline static error_t TrafficMonitorLayerP__SubSend__send(message_t *msg){
#line 37
  unsigned char __nesc_result;
#line 37

#line 37
  __nesc_result = RandomCollisionLayerP__RadioSend__send(msg);
#line 37

#line 37
  return __nesc_result;
#line 37
}
#line 37
# 86 "/opt/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
static inline error_t TrafficMonitorLayerP__RadioSend__send(message_t *msg)
{
  TrafficMonitorLayerP__txMsg = msg;
  return TrafficMonitorLayerP__SubSend__send(msg);
}

# 37 "/opt/tinyos-2.x/tos/chips/rf230/RadioSend.nc"
inline static error_t MessageBufferLayerP__RadioSend__send(message_t *msg){
#line 37
  unsigned char __nesc_result;
#line 37

#line 37
  __nesc_result = TrafficMonitorLayerP__RadioSend__send(msg);
#line 37

#line 37
  return __nesc_result;
#line 37
}
#line 37
# 83 "/opt/tinyos-2.x/tos/chips/rf230/TaskletC.nc"
static __inline void TaskletC__Tasklet__suspend(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 85
    ++TaskletC__state;
#line 85
    __nesc_atomic_end(__nesc_atomic); }
}

# 61 "/opt/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
inline static void MessageBufferLayerP__Tasklet__suspend(void ){
#line 61
  TaskletC__Tasklet__suspend();
#line 61
}
#line 61
# 139 "/opt/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static inline void MessageBufferLayerP__sendTask__runTask(void )
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

# 57 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket(void )
#line 57
{
  uint8_t i;

#line 59
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current + 1) % 1;
  for (i = 0; i < 1; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg == (void *)0 || 
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current / 8] & (1 << /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current % 8)) 
        {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current + 1) % 1;
        }
      else {
          break;
        }
    }
  if (i >= 1) {
#line 70
    /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = 1;
    }
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(message_t * msg){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = RF230PacketP__Packet__payloadLength(msg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 93 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline void IEEE154PacketP__IEEE154Packet__createDataFrame(message_t *msg)
{
  __nesc_hton_leuint16(IEEE154PacketP__getHeader(msg)->fcf.data, IEEE154PacketP__IEEE154_DATA_FRAME_VALUE);
}

# 73 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static void RF230PacketP__IEEE154Packet__createDataFrame(message_t *msg){
#line 73
  IEEE154PacketP__IEEE154Packet__createDataFrame(msg);
#line 73
}
#line 73
# 68 "/opt/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static inline void RF230PacketP__Packet__clear(message_t *msg)
{
  RF230PacketP__IEEE154Packet__createDataFrame(msg);

  RF230PacketP__getMeta(msg)->flags = RF230PACKET_CLEAR_METADATA;
}

# 54 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static void RF230ActiveMessageP__Packet__clear(message_t * msg){
#line 54
  RF230PacketP__Packet__clear(msg);
#line 54
}
#line 54
# 166 "/opt/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline error_t RF230ActiveMessageP__ActiveMessageConfig__checkPacket(message_t *msg)
{

  if (!RF230ActiveMessageP__IEEE154Packet__isDataFrame(msg)) {
    RF230ActiveMessageP__Packet__clear(msg);
    }
  return SUCCESS;
}

# 31 "/opt/tinyos-2.x/tos/chips/rf230/ActiveMessageConfig.nc"
inline static error_t ActiveMessageLayerC__Config__checkPacket(message_t *msg){
#line 31
  unsigned char __nesc_result;
#line 31

#line 31
  __nesc_result = RF230ActiveMessageP__ActiveMessageConfig__checkPacket(msg);
#line 31

#line 31
  return __nesc_result;
#line 31
}
#line 31
# 189 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline void IEEE154PacketP__IEEE154Packet__setSrcAddr(message_t *msg, uint16_t addr)
{
  __nesc_hton_leuint16(IEEE154PacketP__getHeader(msg)->src.data, addr);
}

#line 264
static __inline void IEEE154PacketP__AMPacket__setSource(message_t *msg, am_addr_t addr)
{
  IEEE154PacketP__IEEE154Packet__setSrcAddr(msg, addr);
}

# 110 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static void ActiveMessageLayerC__AMPacket__setSource(message_t * amsg, am_addr_t addr){
#line 110
  IEEE154PacketP__AMPacket__setSource(amsg, addr);
#line 110
}
#line 110
#line 57
inline static am_addr_t ActiveMessageLayerC__AMPacket__address(void ){
#line 57
  unsigned short __nesc_result;
#line 57

#line 57
  __nesc_result = IEEE154PacketP__AMPacket__address();
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
# 169 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline void IEEE154PacketP__IEEE154Packet__setDestPan(message_t *msg, uint16_t pan)
{
  __nesc_hton_leuint16(IEEE154PacketP__getHeader(msg)->destpan.data, pan);
}

#line 290
static __inline void IEEE154PacketP__AMPacket__setGroup(message_t *msg, am_group_t grp)
{
  IEEE154PacketP__IEEE154Packet__setDestPan(msg, grp);
}

# 176 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static void ActiveMessageLayerC__AMPacket__setGroup(message_t * amsg, am_group_t grp){
#line 176
  IEEE154PacketP__AMPacket__setGroup(amsg, grp);
#line 176
}
#line 176
# 82 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static inline am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void )
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

# 55 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
inline static am_group_t IEEE154PacketP__ActiveMessageAddress__amGroup(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amGroup();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 243 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline am_group_t IEEE154PacketP__AMPacket__localGroup(void )
{

  return IEEE154PacketP__ActiveMessageAddress__amGroup();
}

# 184 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_group_t ActiveMessageLayerC__AMPacket__localGroup(void ){
#line 184
  unsigned char __nesc_result;
#line 184

#line 184
  __nesc_result = IEEE154PacketP__AMPacket__localGroup();
#line 184

#line 184
  return __nesc_result;
#line 184
}
#line 184
# 213 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline void IEEE154PacketP__IEEE154Packet__setType(message_t *msg, am_id_t type)
{
  __nesc_hton_leuint8(IEEE154PacketP__getHeader(msg)->type.data, type);
}

#line 280
static __inline void IEEE154PacketP__AMPacket__setType(message_t *msg, am_id_t type)
{
  IEEE154PacketP__IEEE154Packet__setType(msg, type);
}

# 151 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static void ActiveMessageLayerC__AMPacket__setType(message_t * amsg, am_id_t t){
#line 151
  IEEE154PacketP__AMPacket__setType(amsg, t);
#line 151
}
#line 151
# 179 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline void IEEE154PacketP__IEEE154Packet__setDestAddr(message_t *msg, uint16_t addr)
{
  __nesc_hton_leuint16(IEEE154PacketP__getHeader(msg)->dest.data, addr);
}

#line 259
static __inline void IEEE154PacketP__AMPacket__setDestination(message_t *msg, am_addr_t addr)
{
  IEEE154PacketP__IEEE154Packet__setDestAddr(msg, addr);
}

# 92 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static void ActiveMessageLayerC__AMPacket__setDestination(message_t * amsg, am_addr_t addr){
#line 92
  IEEE154PacketP__AMPacket__setDestination(amsg, addr);
#line 92
}
#line 92
# 49 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static void RF230PacketP__IEEE154Packet__setLength(message_t *msg, uint8_t length){
#line 49
  IEEE154PacketP__IEEE154Packet__setLength(msg, length);
#line 49
}
#line 49
# 75 "/opt/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static __inline void RF230PacketP__Packet__setPayloadLength(message_t *msg, uint8_t len)
{
  RF230PacketP__IEEE154Packet__setLength(msg, len + RF230PacketP__PACKET_LENGTH_INCREASE);
}

# 83 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static void MessageBufferLayerP__Packet__setPayloadLength(message_t * msg, uint8_t len){
#line 83
  RF230PacketP__Packet__setPayloadLength(msg, len);
#line 83
}
#line 83
# 178 "/opt/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static inline error_t MessageBufferLayerP__Send__send(message_t *msg, uint8_t len)
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

# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t UniqueLayerP__SubSend__send(message_t * msg, uint8_t len){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = MessageBufferLayerP__Send__send(msg, len);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 159 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline void IEEE154PacketP__IEEE154Packet__setDSN(message_t *msg, uint8_t dsn)
{
  __nesc_hton_leuint8(IEEE154PacketP__getHeader(msg)->dsn.data, dsn);
}

# 129 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static void RF230ActiveMessageP__IEEE154Packet__setDSN(message_t *msg, uint8_t dsn){
#line 129
  IEEE154PacketP__IEEE154Packet__setDSN(msg, dsn);
#line 129
}
#line 129
# 149 "/opt/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline void RF230ActiveMessageP__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t dsn)
{
  RF230ActiveMessageP__IEEE154Packet__setDSN(msg, dsn);
}

# 41 "/opt/tinyos-2.x/tos/chips/rf230/UniqueConfig.nc"
inline static void UniqueLayerP__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t number){
#line 41
  RF230ActiveMessageP__UniqueConfig__setSequenceNumber(msg, number);
#line 41
}
#line 41
# 58 "/opt/tinyos-2.x/tos/chips/rf230/UniqueLayerP.nc"
static inline error_t UniqueLayerP__Send__send(message_t *msg, uint8_t len)
{
  UniqueLayerP__UniqueConfig__setSequenceNumber(msg, ++UniqueLayerP__sequenceNumber);
  return UniqueLayerP__SubSend__send(msg, len);
}

# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t IEEE154NetworkLayerP__SubSend__send(message_t * msg, uint8_t len){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = UniqueLayerP__Send__send(msg, len);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 201 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static __inline void IEEE154PacketP__IEEE154Packet__set6LowPan(message_t *msg, uint8_t network)
{
  __nesc_hton_leuint8(IEEE154PacketP__getHeader(msg)->network.data, network);
}

# 172 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154Packet.nc"
inline static void IEEE154NetworkLayerP__IEEE154Packet__set6LowPan(message_t *msg, uint8_t network){
#line 172
  IEEE154PacketP__IEEE154Packet__set6LowPan(msg, network);
#line 172
}
#line 172
# 48 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154NetworkLayerP.nc"
static inline error_t IEEE154NetworkLayerP__Send__send(message_t *msg, uint8_t len)
{
  IEEE154NetworkLayerP__IEEE154Packet__set6LowPan(msg, 0x3f);
  return IEEE154NetworkLayerP__SubSend__send(msg, len);
}

# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t ActiveMessageLayerC__SubSend__send(message_t * msg, uint8_t len){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = IEEE154NetworkLayerP__Send__send(msg, len);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 77 "RadioCountToLedsC.nc"
static inline void RadioCountToLedsC__AMControl__stopDone(error_t err)
#line 77
{
}

# 117 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void MessageBufferLayerP__SplitControl__stopDone(error_t error){
#line 117
  RadioCountToLedsC__AMControl__stopDone(error);
#line 117
}
#line 117
#line 83
inline static error_t RadioCountToLedsC__AMControl__start(void ){
#line 83
  unsigned char __nesc_result;
#line 83

#line 83
  __nesc_result = MessageBufferLayerP__SplitControl__start();
#line 83

#line 83
  return __nesc_result;
#line 83
}
#line 83
# 53 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void RadioCountToLedsC__MilliTimer__startPeriodic(uint32_t dt){
#line 53
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(1U, dt);
#line 53
}
#line 53
# 68 "RadioCountToLedsC.nc"
static inline void RadioCountToLedsC__AMControl__startDone(error_t err)
#line 68
{
  if (err == SUCCESS) {
      RadioCountToLedsC__MilliTimer__startPeriodic(1024);
    }
  else {
      RadioCountToLedsC__AMControl__start();
    }
}

# 92 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void MessageBufferLayerP__SplitControl__startDone(error_t error){
#line 92
  RadioCountToLedsC__AMControl__startDone(error);
#line 92
}
#line 92
# 101 "/opt/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static inline void MessageBufferLayerP__stateDoneTask__runTask(void )
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

# 378 "/opt/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
static inline error_t RF230LayerP__RadioState__turnOn(void )
{
  if (RF230LayerP__cmd != RF230LayerP__CMD_NONE || (RF230LayerP__state == RF230LayerP__STATE_SLEEP && !RF230LayerP__RadioAlarm__isFree())) {
    return EBUSY;
    }
  else {
#line 382
    if (RF230LayerP__state == RF230LayerP__STATE_RX_ON) {
      return EALREADY;
      }
    }
#line 385
  RF230LayerP__cmd = RF230LayerP__CMD_TURNON;
  RF230LayerP__Tasklet__schedule();

  return SUCCESS;
}

# 45 "/opt/tinyos-2.x/tos/chips/rf230/RadioState.nc"
inline static error_t TrafficMonitorLayerP__SubState__turnOn(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = RF230LayerP__RadioState__turnOn();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 217 "/opt/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
static inline error_t TrafficMonitorLayerP__RadioState__turnOn(void )
{
  TrafficMonitorLayerP__radioCmd = TrafficMonitorLayerP__RADIO_CMD_TURNON;
  return TrafficMonitorLayerP__SubState__turnOn();
}

# 45 "/opt/tinyos-2.x/tos/chips/rf230/RadioState.nc"
inline static error_t MessageBufferLayerP__RadioState__turnOn(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = TrafficMonitorLayerP__RadioState__turnOn();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 92 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt){
#line 92
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__startAt(t0, dt);
#line 92
}
#line 92
# 47 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt = dt;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot = oneshot;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(t0, dt);
}

#line 82
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 83
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(t0, dt, TRUE);
}

# 118 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt){
#line 118
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(t0, dt);
#line 118
}
#line 118
# 231 "/opt/tinyos-2.x/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__stop(void )
#line 231
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 232
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__set = FALSE;
#line 232
    __nesc_atomic_end(__nesc_atomic); }
}

# 62 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void ){
#line 62
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__stop();
#line 62
}
#line 62
# 60 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void )
{
#line 61
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop();
}

# 67 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void ){
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop();
#line 67
}
#line 67
# 89 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void )
{




  uint32_t now = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint8_t num;

  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop();

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

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
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(now);
        }
      else {
#line 124
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(now, min_remaining);
        }
    }
}

# 68 "/opt/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
inline static void TrafficMonitorLayerP__Tasklet__resume(void ){
#line 68
  TaskletC__Tasklet__resume();
#line 68
}
#line 68
# 291 "/opt/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline void RF230ActiveMessageP__SlottedCollisionConfig__default__timerTick(void )
#line 291
{
}

# 60 "/opt/tinyos-2.x/tos/chips/rf230/SlottedCollisionConfig.nc"
inline static void RF230ActiveMessageP__SlottedCollisionConfig__timerTick(void ){
#line 60
  RF230ActiveMessageP__SlottedCollisionConfig__default__timerTick();
#line 60
}
#line 60
# 213 "/opt/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static inline void RF230ActiveMessageP__TrafficMonitorConfig__timerTick(void )
{
  RF230ActiveMessageP__SlottedCollisionConfig__timerTick();
}

# 79 "/opt/tinyos-2.x/tos/chips/rf230/TrafficMonitorConfig.nc"
inline static void TrafficMonitorLayerP__TrafficMonitorConfig__timerTick(void ){
#line 79
  RF230ActiveMessageP__TrafficMonitorConfig__timerTick();
#line 79
}
#line 79
# 162 "/opt/tinyos-2.x/tos/chips/rf230/NeighborhoodP.nc"
static inline void NeighborhoodP__NeighborhoodFlag__clearAll(uint8_t bit)
{
  uint8_t i;

  bit = ~(1 << bit);

  for (i = 0; i < 5; ++i) 
    NeighborhoodP__flags[i] &= bit;
}

# 51 "/opt/tinyos-2.x/tos/chips/rf230/NeighborhoodFlag.nc"
inline static void TrafficMonitorLayerP__NeighborhoodFlag__clearAll(void ){
#line 51
  NeighborhoodP__NeighborhoodFlag__clearAll(1U);
#line 51
}
#line 51
# 61 "/opt/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
inline static void TrafficMonitorLayerP__Tasklet__suspend(void ){
#line 61
  TaskletC__Tasklet__suspend();
#line 61
}
#line 61
# 132 "/opt/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
static inline void TrafficMonitorLayerP__Timer__fired(void )
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

# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(am_id_t arg_0x40501910, am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = ActiveMessageLayerC__AMSend__send(arg_0x40501910, addr, msg, len);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 67 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(message_t * amsg){
#line 67
  unsigned short __nesc_result;
#line 67

#line 67
  __nesc_result = IEEE154PacketP__AMPacket__destination(amsg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
#line 136
inline static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(message_t * amsg){
#line 136
  unsigned char __nesc_result;
#line 136

#line 136
  __nesc_result = IEEE154PacketP__AMPacket__type(amsg);
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 83 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(message_t * msg, uint8_t len){
#line 83
  RF230PacketP__Packet__setPayloadLength(msg, len);
#line 83
}
#line 83
# 82 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len)
#line 83
{
  if (clientId >= 1) {
      return FAIL;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[clientId].msg != (void *)0) {
      return EBUSY;
    }
  ;

  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[clientId].msg = msg;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(msg, len);

  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current >= 1) {
      error_t err;
      am_id_t amId = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(msg);
      am_addr_t dest = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(msg);

      ;
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = clientId;

      err = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(amId, dest, msg, len);
      if (err != SUCCESS) {
          ;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = 1;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[clientId].msg = (void *)0;
        }

      return err;
    }
  else {
      ;
    }
  return SUCCESS;
}

# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t /*RadioCountToLedsAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(message_t * msg, uint8_t len){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(0U, msg, len);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 151 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static void /*RadioCountToLedsAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(message_t * amsg, am_id_t t){
#line 151
  IEEE154PacketP__AMPacket__setType(amsg, t);
#line 151
}
#line 151
#line 92
inline static void /*RadioCountToLedsAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(message_t * amsg, am_addr_t addr){
#line 92
  IEEE154PacketP__AMPacket__setDestination(amsg, addr);
#line 92
}
#line 92
# 45 "/opt/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline error_t /*RadioCountToLedsAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 47
{
  /*RadioCountToLedsAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(msg, dest);
  /*RadioCountToLedsAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(msg, 6);
  return /*RadioCountToLedsAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(msg, len);
}

# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t RadioCountToLedsC__AMSend__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = /*RadioCountToLedsAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(addr, msg, len);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 115 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static void * RadioCountToLedsC__Packet__getPayload(message_t * msg, uint8_t len){
#line 115
  void *__nesc_result;
#line 115

#line 115
  __nesc_result = RF230PacketP__Packet__getPayload(msg, len);
#line 115

#line 115
  return __nesc_result;
#line 115
}
#line 115
# 81 "RadioCountToLedsC.nc"
static inline void RadioCountToLedsC__MilliTimer__fired(void )
#line 81
{
  RadioCountToLedsC__counter++;
  ;
  if (RadioCountToLedsC__locked) {
      return;
    }
  else {
      radio_count_msg_t *rcm = (radio_count_msg_t *)RadioCountToLedsC__Packet__getPayload(&RadioCountToLedsC__packet, sizeof(radio_count_msg_t ));

#line 89
      if (rcm == (void *)0) {
          return;
        }

      __nesc_hton_uint16(rcm->counter.data, RadioCountToLedsC__counter);
      if (RadioCountToLedsC__AMSend__send(AM_BROADCAST_ADDR, &RadioCountToLedsC__packet, sizeof(radio_count_msg_t )) == SUCCESS) {
          ;
          RadioCountToLedsC__locked = TRUE;
        }
    }
}

# 193 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x407ef708){
#line 72
  switch (arg_0x407ef708) {
#line 72
    case 0U:
#line 72
      TrafficMonitorLayerP__Timer__fired();
#line 72
      break;
#line 72
    case 1U:
#line 72
      RadioCountToLedsC__MilliTimer__fired();
#line 72
      break;
#line 72
    default:
#line 72
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x407ef708);
#line 72
      break;
#line 72
    }
#line 72
}
#line 72
# 174 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline void HplAtm1281Timer2AsyncP__Compare__set(uint8_t t)
#line 174
{
  /* atomic removed: atomic calls only */
  {
    while (* (volatile uint8_t *)0xB6 & (1 << 3)) 
      ;
    * (volatile uint8_t *)0xB3 = t;
  }
}

# 45 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__size_type t){
#line 45
  HplAtm1281Timer2AsyncP__Compare__set(t);
#line 45
}
#line 45
# 79 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline uint8_t HplAtm1281Timer2AsyncP__Timer__get(void )
#line 79
{
#line 79
  return * (volatile uint8_t *)0xB2;
}

# 52 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__get(void ){
#line 52
  unsigned char __nesc_result;
#line 52

#line 52
  __nesc_result = HplAtm1281Timer2AsyncP__Timer__get();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 258 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline int HplAtm1281Timer2AsyncP__TimerAsync__compareABusy(void )
#line 258
{
  return (* (volatile uint8_t *)0xB6 & (1 << 3)) != 0;
}

# 75 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerAsync.nc"
inline static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerAsync__compareABusy(void ){
#line 75
  int __nesc_result;
#line 75

#line 75
  __nesc_result = HplAtm1281Timer2AsyncP__TimerAsync__compareABusy();
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 101 "/opt/tinyos-2.x/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setOcr2A(uint8_t n)
#line 101
{
  while (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerAsync__compareABusy()) 
    ;
  if (n == /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__get()) {
    n++;
    }


  if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base + n + 1 < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base) {
    n = -/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base - 1;
    }
#line 111
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__set(n);
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 70 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void )
{
#line 71
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask();
}

# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__fired(void ){
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired();
#line 67
}
#line 67
# 128 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void )
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow());
}

# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void ){
#line 72
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired();
#line 72
}
#line 72
# 253 "/opt/tinyos-2.x/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__getAlarm(void )
#line 253
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 254
    {
      unsigned long __nesc_temp = 
#line 254
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__t0 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__dt;

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

# 105 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void ){
#line 105
  unsigned long __nesc_result;
#line 105

#line 105
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__getAlarm();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 63 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void )
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt, FALSE);
    }
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired();
}

# 118 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void )
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
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[i]) {
          for (mask = 1, j = 0; j < 8; j++) {
              if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[i] & mask) {
                  last = i * 8 + j;
                  msg = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[last].msg;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[last].msg = (void *)0;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[i] &= ~mask;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(last, msg, ECANCEL);
                }
              mask <<= 1;
            }
        }
    }
}

#line 161
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void )
#line 161
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current, /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg, FAIL);
}

# 247 "/opt/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static inline error_t MessageBufferLayerP__SoftwareInit__init(void )
{
  uint8_t i;

  for (i = 0; i < MessageBufferLayerP__RECEIVE_QUEUE_SIZE; ++i) 
    MessageBufferLayerP__receiveQueue[i] = MessageBufferLayerP__receiveQueueData + i;

  return SUCCESS;
}

# 52 "/opt/tinyos-2.x/tos/chips/rf230/UniqueLayerP.nc"
static inline error_t UniqueLayerP__Init__init(void )
{
  UniqueLayerP__sequenceNumber = TOS_NODE_ID << 4;
  return SUCCESS;
}

# 44 "/opt/tinyos-2.x/tos/chips/rf230/NeighborhoodP.nc"
static inline error_t NeighborhoodP__Init__init(void )
{
  uint8_t i;

  for (i = 0; i < 5; ++i) 
    NeighborhoodP__nodes[i] = AM_BROADCAST_ADDR;

  return SUCCESS;
}

# 161 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline void HplAtm1281Timer2AsyncP__Compare__start(void )
#line 161
{
#line 161
  * (volatile uint8_t *)0x70 |= 1 << 1;
}

# 56 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__start(void ){
#line 56
  HplAtm1281Timer2AsyncP__Compare__start();
#line 56
}
#line 56
# 117 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline void HplAtm1281Timer2AsyncP__TimerCtrl__setControlB(uint8_t x)
#line 117
{
  while (* (volatile uint8_t *)0xB6 & (1 << 0)) 
    ;
  * (volatile uint8_t *)0xB1 = ((Atm128_TCCR2B_t )x).flat;
}

# 62 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerCtrl8.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__setControlB(uint8_t control){
#line 62
  HplAtm1281Timer2AsyncP__TimerCtrl__setControlB(control);
#line 62
}
#line 62
# 111 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline void HplAtm1281Timer2AsyncP__TimerCtrl__setControlA(uint8_t x)
#line 111
{
  while (* (volatile uint8_t *)0xB6 & (1 << 1)) 
    ;
  * (volatile uint8_t *)0xB0 = ((Atm128_TCCR2A_t )x).flat;
}

# 61 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerCtrl8.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__setControlA(uint8_t control){
#line 61
  HplAtm1281Timer2AsyncP__TimerCtrl__setControlA(control);
#line 61
}
#line 61
# 246 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline void HplAtm1281Timer2AsyncP__TimerAsync__setTimer2Asynchronous(void )
#line 246
{
  * (volatile uint8_t *)0xB6 |= 1 << 5;
}

# 57 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm128TimerAsync.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerAsync__setTimer2Asynchronous(void ){
#line 57
  HplAtm1281Timer2AsyncP__TimerAsync__setTimer2Asynchronous();
#line 57
}
#line 57
# 78 "/opt/tinyos-2.x/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Init__init(void )
#line 78
{
  /* atomic removed: atomic calls only */
  {
    Atm128_TCCR2A_t x;
    Atm128_TCCR2B_t y;

    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerAsync__setTimer2Asynchronous();
    x.flat = 0;
    x.bits.wgm21 = 1;
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__setControlA(x.flat);
    y.flat = 0;
    y.bits.cs = 3;
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__setControlB(y.flat);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MAXT);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__start();
  }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setInterrupt();
  return SUCCESS;
}

# 44 "/opt/tinyos-2.x/tos/system/RandomMlcgC.nc"
static inline error_t RandomMlcgC__Init__init(void )
#line 44
{
  /* atomic removed: atomic calls only */
#line 45
  RandomMlcgC__seed = (uint32_t )(TOS_NODE_ID + 1);

  return SUCCESS;
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t RF230LayerP__SpiResource__request(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = Atm128SpiP__Resource__request(0U);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 204 "/opt/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
static inline error_t RF230LayerP__SoftwareInit__init(void )
{

  return RF230LayerP__SpiResource__request();
}

# 45 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__Init__init(void )
#line 45
{
  memset(/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__resQ, /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY, sizeof /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__resQ);
  return SUCCESS;
}

# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t RealMainP__SoftwareInit__init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__Init__init();
#line 51
  __nesc_result = ecombine(__nesc_result, RF230LayerP__SoftwareInit__init());
#line 51
  __nesc_result = ecombine(__nesc_result, RandomMlcgC__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, NeighborhoodP__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, UniqueLayerP__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, MessageBufferLayerP__SoftwareInit__init());
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 64 "RadioCountToLedsC.nc"
static inline void RadioCountToLedsC__Boot__booted(void )
#line 64
{
  RadioCountToLedsC__AMControl__start();
}

# 49 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
inline static void RealMainP__Boot__booted(void ){
#line 49
  RadioCountToLedsC__Boot__booted();
#line 49
}
#line 49
# 199 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline mcu_power_t HplAtm1281Timer2AsyncP__McuPowerOverride__lowestState(void )
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

# 54 "/opt/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
inline static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void ){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = HplAtm1281Timer2AsyncP__McuPowerOverride__lowestState();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 88 "/opt/tinyos-2.x/tos/chips/atm1281/McuSleepC.nc"
static inline mcu_power_t McuSleepC__getPowerState(void )
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

# 157 "/opt/tinyos-2.x/tos/chips/atm1281/atm128hardware.h"
static inline  mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
#line 157
{
  return m1 < m2 ? m1 : m2;
}

# 128 "/opt/tinyos-2.x/tos/chips/atm1281/McuSleepC.nc"
static inline void McuSleepC__McuSleep__sleep(void )
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

# 59 "/opt/tinyos-2.x/tos/interfaces/McuSleep.nc"
inline static void SchedulerBasicP__McuSleep__sleep(void ){
#line 59
  McuSleepC__McuSleep__sleep();
#line 59
}
#line 59
# 67 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static __inline uint8_t SchedulerBasicP__popTask(void )
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
static inline void SchedulerBasicP__Scheduler__taskLoop(void )
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

# 61 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__taskLoop(void ){
#line 61
  SchedulerBasicP__Scheduler__taskLoop();
#line 61
}
#line 61
# 48 "/opt/tinyos-2.x/tos/chips/rf230/Tasklet.nc"
inline static void RadioAlarmP__Tasklet__schedule(void ){
#line 48
  TaskletC__Tasklet__schedule();
#line 48
}
#line 48
# 53 "/opt/tinyos-2.x/tos/chips/rf230/RadioAlarmP.nc"
static inline void RadioAlarmP__Alarm__fired(void )
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

# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__fired(void ){
#line 67
  RadioAlarmP__Alarm__fired();
#line 67
}
#line 67
# 105 "/opt/tinyos-2.x/tos/chips/atm1281/atm128hardware.h"
static __inline  void __nesc_enable_interrupt()
#line 105
{
   __asm volatile ("sei");}

# 110 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__fired(void )
#line 110
{
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__stop();
  ;
  __nesc_enable_interrupt();
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__fired();
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm1281Timer1P__CompareA__fired(void ){
#line 49
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__fired();
#line 49
}
#line 49
# 209 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__CompareB__default__fired(void )
#line 209
{
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm1281Timer1P__CompareB__fired(void ){
#line 49
  HplAtm1281Timer1P__CompareB__default__fired();
#line 49
}
#line 49
# 213 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__CompareC__default__fired(void )
#line 213
{
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm1281Timer1P__CompareC__fired(void ){
#line 49
  HplAtm1281Timer1P__CompareC__default__fired();
#line 49
}
#line 49
# 628 "/opt/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
static inline void RF230LayerP__IRQ__captured(uint16_t time)
{
  for (; 0; ) ;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      RF230LayerP__capturedTime = time;
      RF230LayerP__radioIrq = TRUE;
    }
#line 636
    __nesc_atomic_end(__nesc_atomic); }

  RF230LayerP__Tasklet__schedule();
}

# 50 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
inline static void HplRF230P__IRQ__captured(uint16_t time){
#line 50
  RF230LayerP__IRQ__captured(time);
#line 50
}
#line 50
# 199 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline uint16_t HplAtm1281Timer1P__Capture__get(void )
#line 199
{
#line 199
  return * (volatile uint16_t *)0x86;
}

# 38 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static HplRF230P__Capture__size_type HplRF230P__Capture__get(void ){
#line 38
  unsigned short __nesc_result;
#line 38

#line 38
  __nesc_result = HplAtm1281Timer1P__Capture__get();
#line 38

#line 38
  return __nesc_result;
#line 38
}
#line 38
# 58 "/opt/tinyos-2.x/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static inline void HplRF230P__Capture__captured(uint16_t time)
{
  time = HplRF230P__Capture__get();
  HplRF230P__IRQ__captured(time);
}

# 51 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplAtm1281Timer1P__Capture__captured(HplAtm1281Timer1P__Capture__size_type t){
#line 51
  HplRF230P__Capture__captured(t);
#line 51
}
#line 51
# 47 "/opt/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void )
{
}

# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__Counter__overflow(void ){
#line 71
  /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow();
#line 71
}
#line 71
# 122 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static inline void /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__overflow(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__m_upper++;
      if ((/*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__m_upper & /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__OVERFLOW_MASK) == 0) {
        /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__Counter__overflow();
        }
    }
#line 130
    __nesc_atomic_end(__nesc_atomic); }
}

# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__overflow(void ){
#line 71
  /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__overflow();
#line 71
}
#line 71
# 56 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline void /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__overflow(void )
{
  /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__overflow();
}

# 51 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__overflow(void )
#line 51
{
}

# 117 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__overflow(void )
#line 117
{
}

# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm1281Timer1P__Timer__overflow(void ){
#line 61
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__overflow();
#line 61
  /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__overflow();
#line 61
  /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__overflow();
#line 61
}
#line 61
# 184 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static __inline void HplAtm1281Timer2AsyncP__stabiliseTimer2(void )
#line 184
{
  * (volatile uint8_t *)0xB0 = * (volatile uint8_t *)0xB0;
  while (* (volatile uint8_t *)0xB6 & (1 << 1)) 
    ;
}

# 47 "/opt/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void )
{
}

# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__overflow(void ){
#line 71
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow();
#line 71
}
#line 71
# 171 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline uint8_t HplAtm1281Timer2AsyncP__Compare__get(void )
#line 171
{
#line 171
  return * (volatile uint8_t *)0xB3;
}

# 39 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__get(void ){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  __nesc_result = HplAtm1281Timer2AsyncP__Compare__get();
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 176 "/opt/tinyos-2.x/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__fired(void )
#line 176
{
  int overflowed;


  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base += /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__get() + 1U;
  overflowed = !/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base;
  __nesc_enable_interrupt();
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setInterrupt();
  if (overflowed) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__overflow();
    }
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm1281Timer2AsyncP__Compare__fired(void ){
#line 49
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__fired();
#line 49
}
#line 49
# 257 "/opt/tinyos-2.x/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__overflow(void )
#line 257
{
}

# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm1281Timer2AsyncP__Timer__overflow(void ){
#line 61
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__overflow();
#line 61
}
#line 61
# 98 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline uint8_t HplAtm128SpiP__SPI__read(void )
#line 98
{
#line 98
  return * (volatile uint8_t *)(0X2E + 0x20);
}

# 80 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static uint8_t Atm128SpiP__Spi__read(void ){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = HplAtm128SpiP__SPI__read();
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 99 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__write(uint8_t d)
#line 99
{
#line 99
  * (volatile uint8_t *)(0X2E + 0x20) = d;
}

# 86 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__write(uint8_t data){
#line 86
  HplAtm128SpiP__SPI__write(data);
#line 86
}
#line 86










inline static void Atm128SpiP__Spi__enableInterrupt(bool enabled){
#line 96
  HplAtm128SpiP__SPI__enableInterrupt(enabled);
#line 96
}
#line 96
# 162 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline error_t Atm128SpiP__sendNextPart(void )
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
static inline void Atm128SpiP__Spi__dataReady(uint8_t data)
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
      uint8_t * rx;
      uint8_t * tx;

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

# 92 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void HplAtm128SpiP__SPI__dataReady(uint8_t data){
#line 92
  Atm128SpiP__Spi__dataReady(data);
#line 92
}
#line 92
# 52 "/opt/tinyos-2.x/tos/system/RealMainP.nc"
  int main(void )
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

# 123 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static bool SchedulerBasicP__Scheduler__runNextTask(void )
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
static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id)
{
}

# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x4035cb38){
#line 64
  switch (arg_0x4035cb38) {
#line 64
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask:
#line 64
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask();
#line 64
      break;
#line 64
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask:
#line 64
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask();
#line 64
      break;
#line 64
    case /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired:
#line 64
      /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask();
#line 64
      break;
#line 64
    case /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer:
#line 64
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask();
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
    case /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask:
#line 64
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__runTask();
#line 64
      break;
#line 64
    default:
#line 64
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x4035cb38);
#line 64
      break;
#line 64
    }
#line 64
}
#line 64
# 322 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static error_t Atm128SpiP__Resource__release(uint8_t id)
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

# 159 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id)
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

# 123 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ArbiterInfo__inUse(void )
#line 123
{
  /* atomic removed: atomic calls only */
#line 124
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_IDLE) 
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

# 130 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static void HplAtm128SpiP__SPI__enableSpi(bool enabled)
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

# 101 "/opt/tinyos-2.x/tos/chips/rf230/TaskletC.nc"
static void TaskletC__Tasklet__schedule(void )
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
static void TaskletC__doit(void )
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

# 257 "/opt/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
static bool RF230LayerP__isSpiAcquired(void )
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

# 105 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static void Atm128SpiP__startSpi(void )
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

# 115 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static void HplAtm128SpiP__SPI__enableInterrupt(bool enabled)
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

# 313 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static error_t Atm128SpiP__Resource__request(uint8_t id)
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

# 69 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__to_size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__Counter__get(void )
{
  /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__to_size_type rv = 0;

#line 72
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__upper_count_type high = /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__m_upper;
      /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__from_size_type low = /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__get();

#line 76
      if (/*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__isOverflowPending()) 
        {






          high++;
          low = /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__get();
        }
      {
        /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__to_size_type high_to = high;
        /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__to_size_type low_to = low >> /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__LOW_SHIFT_RIGHT;

#line 90
        rv = (high_to << /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__HIGH_SHIFT_LEFT) | low_to;
      }
    }
#line 92
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

# 157 "/opt/tinyos-2.x/tos/chips/rf230/RF230PacketP.nc"
static void RF230PacketP__PacketTimeStampRadio__set(message_t *msg, uint32_t value)
{
  RF230PacketP__getMeta(msg)->flags |= RF230PACKET_TIMESTAMP;
  RF230PacketP__getMeta(msg)->timestamp = value;
}

# 74 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__startAt(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size t0, /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size dt)
#line 74
{






  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size now;
#line 83
      /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size elapsed;
#line 83
      /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size expires;

      ;


      now = /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__get();
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



      /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__set(expires - 1);
      /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__reset();
      /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__start();
    }
#line 107
    __nesc_atomic_end(__nesc_atomic); }
}

# 92 "/opt/tinyos-2.x/tos/chips/rf230/TrafficMonitorLayerP.nc"
static void TrafficMonitorLayerP__SubSend__sendDone(error_t error)
{
  if (error == SUCCESS) {
    TrafficMonitorLayerP__txAverage += TrafficMonitorLayerP__TrafficMonitorConfig__getChannelTime(TrafficMonitorLayerP__txMsg);
    }
  TrafficMonitorLayerP__RadioSend__sendDone(error);
}

# 195 "/opt/tinyos-2.x/tos/chips/rf230/RF230ActiveMessageP.nc"
static uint16_t RF230ActiveMessageP__TrafficMonitorConfig__getChannelTime(message_t *msg)
{







  uint8_t len = RF230ActiveMessageP__IEEE154Packet__getLength(msg);

#line 205
  return RF230ActiveMessageP__IEEE154Packet__getAckRequired(msg) ? len + 6 + 16 + 11 + 10 : len + 6 + 10;
}

#line 124
static void RF230ActiveMessageP__SoftwareAckConfig__setAckReceived(message_t *msg, bool acked)
{
  if (acked) {
    RF230ActiveMessageP__getMeta(msg)->flags |= RF230PACKET_WAS_ACKED;
    }
  else {
#line 129
    RF230ActiveMessageP__getMeta(msg)->flags &= ~RF230PACKET_WAS_ACKED;
    }
}

# 225 "/opt/tinyos-2.x/tos/chips/rf230/IEEE154PacketP.nc"
static bool IEEE154PacketP__IEEE154Packet__requiresAckReply(message_t *msg)
{
  return IEEE154PacketP__IEEE154Packet__getAckRequired(msg)
   && IEEE154PacketP__IEEE154Packet__isDataFrame(msg)
   && IEEE154PacketP__IEEE154Packet__getDestAddr(msg) == IEEE154PacketP__ActiveMessageAddress__amAddress();
}

# 95 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC__amAddress(void )
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

# 395 "/opt/tinyos-2.x/tos/chips/rf230/RF230LayerP.nc"
static error_t RF230LayerP__RadioSend__send(message_t *msg)
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
#line 416
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
#line 439
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
    __nesc_hton_int32((* (timesync_relative_t *)timesync).data, * (timesync_absolute_t *)timesync - time32);
    }
  do {
      RF230LayerP__HplRF230__spiSplitReadWrite(* data++);
    }
  while (--length != 0);


  RF230LayerP__HplRF230__spiSplitRead();
  RF230LayerP__SELN__set();
#line 495
  RF230LayerP__writeRegister(RF230_TRX_STATE, RF230_RX_ON);
#line 510
  if (timesync != 0) {
    * (timesync_absolute_t *)timesync = __nesc_ntoh_int32((* (timesync_relative_t *)timesync).data) + time32;
    }
  RF230LayerP__PacketTimeStamp__set(msg, time32);


  RF230LayerP__state = RF230LayerP__STATE_BUSY_TX_2_RX_ON;
  RF230LayerP__cmd = RF230LayerP__CMD_TRANSMIT;

  return SUCCESS;
}

# 38 "/opt/tinyos-2.x/tos/chips/rf230/RadioAlarm.nc"
static void RandomCollisionLayerP__RadioAlarm__wait(uint16_t timeout){
#line 38
  RadioAlarmP__RadioAlarm__wait(1U, timeout);
#line 38
}
#line 38
# 83 "/opt/tinyos-2.x/tos/chips/rf230/NeighborhoodP.nc"
static uint8_t NeighborhoodP__Neighborhood__insertNode(am_addr_t node)
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

# 73 "/opt/tinyos-2.x/tos/chips/rf230/RandomCollisionLayerP.nc"
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


  return RandomCollisionLayerP__Config__getMinimumBackoff();
}

# 58 "/opt/tinyos-2.x/tos/system/RandomMlcgC.nc"
static uint32_t RandomMlcgC__Random__rand32(void )
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

# 133 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

#line 136
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 188 "/opt/tinyos-2.x/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__get(void )
#line 188
{
  uint32_t now;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {


      uint8_t now8 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__get();

      if (((Atm128_TIFR2_t )/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__getInterruptFlag()).bits.ocfa) {


        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__get() + 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__get();
        }
      else {

        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base + now8;
        }
    }
#line 206
    __nesc_atomic_end(__nesc_atomic); }
#line 206
  return now;
}

# 88 "/opt/tinyos-2.x/tos/chips/rf230/TaskletC.nc"
static void TaskletC__Tasklet__resume(void )
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

# 166 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void )
#line 166
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket();
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current < 1) {
      error_t nextErr;
      message_t *nextMsg = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg;
      am_id_t nextId = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(nextMsg);
      am_addr_t nextDest = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(nextMsg);
      uint8_t len = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(nextMsg);

#line 174
      nextErr = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(nextId, nextDest, nextMsg, len);
      if (nextErr != SUCCESS) {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask();
        }
    }
}

# 45 "/opt/tinyos-2.x/tos/chips/rf230/ActiveMessageLayerC.nc"
static error_t ActiveMessageLayerC__AMSend__send(am_id_t id, am_addr_t addr, message_t *msg, uint8_t len)
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

# 63 "/opt/tinyos-2.x/tos/chips/rf230/MessageBufferLayerP.nc"
static error_t MessageBufferLayerP__SplitControl__start(void )
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

# 62 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now)
{
  uint8_t num;

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

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
              /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(num);
              break;
            }
        }
    }
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 239 "/opt/tinyos-2.x/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__startAt(uint32_t nt0, uint32_t ndt)
#line 239
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__set = TRUE;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__t0 = nt0;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__dt = ndt;
    }
#line 245
    __nesc_atomic_end(__nesc_atomic); }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setInterrupt();
}

#line 117
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setInterrupt(void )
#line 117
{
  bool fired = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {



      uint8_t interrupt_in = 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__get() - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__get();
      uint8_t newOcr2A;
      uint8_t tifr2 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__getInterruptFlag();

#line 128
      ;
      if ((interrupt_in != 0 && interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MINDT) || tifr2 & (1 << 1)) {
          if (interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MINDT) {
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

      if (!/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__set) {
          newOcr2A = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MAXT;
          ;
        }
      else 
        {
          uint32_t now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__get();

#line 147
          ;

          if ((uint32_t )(now - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__t0) >= /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__dt) 
            {
              /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__set = FALSE;
              fired = TRUE;
              newOcr2A = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MAXT;
            }
          else 
            {


              uint32_t alarm_in = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__t0 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__dt - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base;

              if (alarm_in > /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MAXT) {
                newOcr2A = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MAXT;
                }
              else {
#line 163
                if ((uint8_t )alarm_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MINDT) {
                  newOcr2A = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MINDT;
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
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setOcr2A(newOcr2A);
    }
#line 171
    __nesc_atomic_end(__nesc_atomic); }
  if (fired) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__fired();
    }
}

# 206 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
__attribute((interrupt))   void __vector_17(void )
#line 206
{
  HplAtm1281Timer1P__CompareA__fired();
}

__attribute((interrupt))   void __vector_18(void )
#line 210
{
  HplAtm1281Timer1P__CompareB__fired();
}

__attribute((interrupt))   void __vector_19(void )
#line 214
{
  HplAtm1281Timer1P__CompareC__fired();
}

__attribute((interrupt))   void __vector_16(void )
#line 218
{
  HplAtm1281Timer1P__Capture__captured(HplAtm1281Timer1P__Timer__get());
}

__attribute((interrupt))   void __vector_20(void )
#line 222
{
  HplAtm1281Timer1P__Timer__overflow();
}

# 222 "/opt/tinyos-2.x/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
__attribute((signal))   void __vector_13(void )
#line 222
{
  HplAtm1281Timer2AsyncP__stabiliseTimer2();


  HplAtm1281Timer2AsyncP__Compare__fired();
}


__attribute((signal))   void __vector_15(void )
#line 230
{
  HplAtm1281Timer2AsyncP__stabiliseTimer2();

  HplAtm1281Timer2AsyncP__Timer__overflow();
}

# 102 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
__attribute((signal))   void __vector_24(void )
#line 102
{
  HplAtm128SpiP__SPI__dataReady(HplAtm128SpiP__SPI__read());
}

# 127 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static uint8_t Atm128SpiP__SpiByte__write(uint8_t tx)
#line 127
{
  Atm128SpiP__Spi__enableSpi(TRUE);
  Atm128SpiP__McuPowerState__update();
  Atm128SpiP__Spi__write(tx);
  while (!(* (volatile uint8_t *)(0x2D + 0x20) & 0x80)) ;
  return Atm128SpiP__Spi__read();
}

