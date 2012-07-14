#include "lpc_pwm.h"

void pwm_test(void)
{                  
#define LED0  COX_PIN(2, 2)
#define LED1  COX_PIN(2, 3)
#define LED2  COX_PIN(2, 4)
#define LED3  COX_PIN(2, 5)
	
  COX_PWM_PI *pwm = &pi_pwm;
	
  /* Initialize the PWM peripheral*/
  pwm->Init();
    
  /* Configure PWM Period : 1ms */
  pwm->Period(LED0, 0.001);  
  
  /* P2.2, the intensity of the LED0 light : 10% */        
  pwm->Duty(LED0, 0.1); 
  /* P2.3, the intensity of the LED1 light : 20% */        
  pwm->Duty(LED1, 0.2); 
  /* P2.4, the intensity of the LED2 light : 40% */        
  pwm->Duty(LED2, 0.4); 
  /* P2.5, the intensity of the LED3 light : 80% */        
  pwm->Duty(LED3, 0.8); 

  /* Start PWM Output */  
  pwm->Start(LED0);
  pwm->Start(LED1);
  pwm->Start(LED2);
  pwm->Start(LED3);
}