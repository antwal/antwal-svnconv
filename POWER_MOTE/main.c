#include "avr/io.h"
#include <compat/deprecated.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include <avr/sleep.h>
#include "timer.h"
#include "init.h"
#include "main.h"
#include "adc.h"
//#define LCD 1
//#include "global.h"             // include our global settings
#include "uart.h"               // include uart function library
#include "rprintf.h"            // include printf function library
#include "usart.h"


unsigned char charge = 0;
unsigned char FULL_CHARGE = 1;

// MCU freq = 1Mhz

/*	charge = 0 indicates trickle charging 
 *	charge = 1 indicates constant voltage mode
 *	charge = 2 indicates constant current mode
 *	PB7 = Red LED; Charging
 *	PB6 = Green LED; Charged 	
 *	PB0 = To Switch On Current ckt
 * 	 = To Trickle Charge On
 *	PB1 = To Switch On Charging circuit
 *	ADC0 = To measure the current 
 * 	ADC1 = To measure the voltage
*/


/* Changes the mode of the charging circuit */
void update(void)
{
	PORTB &= ~(1 << PB1);		// Switching ON the charging circuit
	PORTB &= ~(1 << PB6);		// Switching On the Battery Charge Indicator; green LED
	
	switch(charge)
	{
/* For case 0 which is full charge condition, switching the circuit ON 30minuted then switching it off for the next 30 minutes so that it will not get overcharged; this behavior will be similar to trickle charge */
			case 0:
	//		PORTD |= (1 << PD6);	// indicates battery is charged; Switching On the trickle charge
			PORTB &= ~(1 << PB7);	// Switching OFF the Charging LED; Red LED
			if(FULL_CHARGE == 0)
			{	
				switch_off();
				FULL_CHARGE = 1;
			}
			else
			{
				PORTB |= (1 << PB6);	// Switching On the Battery Charge Indicator; green LED
				FULL_CHARGE = 0;
				
			}
			rprintf("\nBATTRY_CHARGED\n");
			break;

/* No constant current mode for version4.0 mote power charger 
   Due to some problem in constant charging mode
*/
		case 1:
		case 2:
//			PORTD &=  (0 << PD6);	// trickle OFF
			PORTB &=  ~(1 << PB0); 	// Switching to constant voltage mode
			PORTB |=  (1 << PB7);	// Switching ON the Charging LED:Red LED
			rprintf("\nCONST_VOLT\n");
			break;
/*			
		case 2:
			PORTB |=  (1 << PB0);	// Switching to constant current mode
			PORTB &= ~(1 << PB7);	// Switching OFF the Charging LED to show this state
			rprintf("\nCONST_CUR\n");
			break;
*/
		default:
			break; 
	}	
}

void solar_check(void)
{
	if(solar < SOL_THRS)
        {
                idle_mode();
                charge = 3;
        }

}

void switch_off(void)
{
	PORTB |= (1 << PB7) | (1 <<PB6);	// Switching On both the LED to show Charger OFF
	if(vol > 150)				// IF battery is already down its better not to switch off the charger 
		PORTB |= (1 << PB1);		// Switching OFF the Charger Circuit
	
	rprintf("\nSWITCH_OFF\n");
}


void idle_mode(void)
{
	PORTB &= ~((1 << PB7) | (1 <<PB6));	// Switching On both the LED to show Charger OFF
//	PORTB |= (1 << PB1);			// Switching OFF the Charger Circuit
	rprintf("\nSWITCH_OFF\n");
}

int main(void)
{
	/* System Inittalisation 	*/	
	adc_init();			// enabling adc section
	input_enable();			// enabling the ioports
	timer_init();

	uartInit();
        uartSetBaudRate(2400);

        // make all rprintf statements use uart for output
        rprintfInit(chr_send);			// Using char send of usart.c


	/* For debugging purpose 	*/
	rprintf("\nWelcome to battery charger ");	
	rprintf("Volage calculation= ADCval*0.0294\n Cuurent Calculation=ADCval*0.00625\n");
	/* Checking the Battery condition*/
	adc_calc(1);
        rprintf("charge_value: %d\t",charge);
        rprintf("voltage: %d\t",vol );
        rprintf("current: %d\n",cur );

	adc_calc(0);			// update the voltage and current values
	charge_decision();		// checking the open voltage of battery
	update();	
	solar_check();

	while(1)
	{
       		rprintf("charge_value: %d\t",charge);
	        rprintf("voltage: %d\t",vol );
       		rprintf("current: %d\n",cur );

	 	// Sleeping for half an hour
		disable_all();	
		time_sleep((1800*F_CPU)/8000000);	// Delay for 30 minutes // F_CPUMhz speed of Uc
		adc_init();
		uartInit();
        	uartSetBaudRate(2400);
		
		check_condition();	
		update();
		solar_check();
	}

return 0;
}
