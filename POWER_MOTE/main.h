// Formula to calculate the voltage is ADCval*0.0291
// Formula to calculate the Curretn value = ADCval*0.00625

#define FULL_VOLT 	218			// 100% battery charged = 6.4Volt
#define VOLT_70		211			// 70% battery charged  = 615 Volt
#define CUR_LIMIT	2			// 100% charging limit current = 10mA
#define TRIK_VOL	241			// Trickle voltage = 7Volt
#define CONST_VOLT	240			// Constant voltage 
#define CHARG_POT	240			// POtential to which battery should be  charged in constant voltage mode
#define SOL_THRS	68			// Solar Potential is lesser than 2.00V
#define character 	1
#define numeric		2
#define usart 		1			// For enabling the debugging mode

extern unsigned int vol, cur,solar;
extern unsigned char thrs, temp, charge;
extern volatile unsigned long int k;
extern unsigned char FULL_CHARGE;

void idle_mode(void);
void switch_off(void);
void charge_decision(void);
void check_condition(void);
