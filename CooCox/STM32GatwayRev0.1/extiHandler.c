#include "exti.h"
#include "cox_exti.h"
#include "cox_pio.h"
#include <stm32_pio.h>
#include "debug.h"
#include "string.h"

extern MSD_Dev *sd;
extern uint8_t Run;
extern COX_PIO_Dev LED1;
extern uint8_t chk[2];

uint8_t event = COX_EXTI_EDGE_RISING;

void exti_handler(uint16_t pin)
{
	COX_PIO_Dev SD = COX_PIN(2,10);
	COX_PIO_Dev BUTTON;
	BUTTON = COX_PIN(1,9);

	if( pin == (uint16_t)SD)
	{
		if(event == COX_EXTI_EDGE_RISING )			// when sd card is removed
		{
			event = COX_EXTI_EDGE_FALLING;
			pi_exti.Event(SD, event);
			debug(CONSOLE,"%s\n\r","SD removed");
			chk[0] = SDCheck();
		}
		else if (event == COX_EXTI_EDGE_FALLING)		// when sd card is inserted
		{
			event = COX_EXTI_EDGE_RISING;
			pi_exti.Event(SD, event);
			chk[0] = SDCheck();
			debug(CONSOLE,"%s%d\n\r","SD inserted=",chk[0]);
		}
	}

	if(pin == (uint16_t)BUTTON)
	{
		if (event == COX_EXTI_EDGE_FALLING)
		{
			if(Run == 0){
				pi_pio.Out(LED1,0);
				Run = 1;
			}
			else{
				pi_pio.Out(LED1,1);
				Run = 0;
			}
		}
	}
}
