#include "main.h"
#include "adc.h"
#include "uart.h"
#include "rprintf.h"

//#define LCD 1

unsigned char thrs= 0, temp = 0;


/* Taking decision for charging the battery */
void charge_decision(void)
{
	
	if(vol < FULL_VOLT)		// Battery voltage is less than full charge 	
	{
		/* Indicate to Switch ON the charging circuit 				*/
		charge = 1;		// Indicates constant voltage is required 	
		rprintf("FULL_VOLT\n");	
		if(vol < VOLT_70)	// Battery voltage is even less than 70% of full
		{
		/* Indicate to Switch ON the constant current circuit also 		*/
			charge = 2; 	// Indicates constant current is required	 
			rprintf("VOLT_70\n");	
		}
	}
	else
	{
		/* if battery voltage is 100% charged Provide trickle charge only 	*/
		charge = 0;		// Provide trickle charge
		rprintf("Charged\n");	
	}
}


void check_condition(void)
{
	adc_calc(charge);	// gets the latest voltage and current value

	switch(charge)
	{
		case 0: 
			charge_decision();
			break;

		// constant voltage charge stage; check current limit
		case 1:
			if(cur < CUR_LIMIT)	// means battery is charged
			{
				charge = 0;	// Changing mode to  trickle mode 
				//start trickle
			}
			break;

		case 2:
			if(!(vol < CHARG_POT))	
			{
				charge = 1;	// Changing mode to constant voltage mode
				// switch off the constant currnt circuit
			}
			break;
	}
}

