#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/sleep.h>
#include <util/delay.h>
#include "timer.h"
#include "init.h"
#include "main.h"
#include "adc.h"
#include "uart.h"
#include "rprintf.h"


unsigned int vol =0, cur = 680, solar= 0;
volatile unsigned long int k = 0;

 ISR(ADC_vect)
{
	int i = 0;
	i = ADCL ;						// Storing the lower Byte to the i variable
	i |= ((ADCH & 0x03)<<8) ;		// Storing the upper Byte to the i variable
	//num_send(i);				
	//str_send("  ");	
	k +=i;					
	
}

void adc_noise_cancel_mode(void)
{
	sleep_enable();				// Enabling the sleep mode
	MCUCR |= (1 << SM0);			// ADC Noise reduction mode enabled
	sleep_cpu();				// Going to sleep
	sleep_disable();			// Disabling sleep mode
	_delay_ms(1);				// For getting accurate result
	
}


void adc_calc(unsigned char stage)
{
	unsigned int  j =0;
	unsigned char i = 0;	
	sei();			// Enabling the Global Interrupt
	switch(stage)
	{
		case 0:
			// do the same thing as done on the case 2
		case 2:
			switch_off();	// switch_off charging circuit before measuring the battery voltage 
		//	delay(60);	// delay to get the correct open battery voltage
			time_sleep((60*F_CPU)/8000000);	// Timer based sleep
			break;

		default:
			//do nothing
			break;
	}
	
	adc_int_enb();

/*ADC value of Voltage */
	/* Getting the value from the ADC  Using Noise reduction method */
	for(i = 0; i < 2; i++)				// For rejecting the first average to avoid wrong result
	{ 	
	k = 0;						//
	for(j=0; j<8; j++)
	{
		ADMUX = 0xC1;
		adc_noise_cancel_mode();
	}
	}
	vol = k>>3;					// Taking the average of the 8 results
	k = 0;
	_delay_ms(1);

/*ADC value of Solar*/
	for(i = 0; i < 2; i++)				// For rejecting the first average to avoid wrong result
	{ 	
	k = 0;						//
	for(j=0; j<8; j++)
	{
		ADMUX = 0xC2;
		adc_noise_cancel_mode();
	}
	}
	solar = k>>3;					// Taking the average of the 8 results
	k = 0;
	_delay_ms(1);

/*ADC value of Current*/	
	for(i = 0; i < 2; i++)				// For rejecting the first average to avoid the wrong result
	{	
	k = 0;					
	for(j=0; j<8; j++)
	{
		ADMUX = 0xC0;
		adc_noise_cancel_mode();
		
	}
	}

	ADCSRA &= ~(1<< ADIE);
	adc_int_dis();
	cli();						// Disabling the Global Interrupt

	cur = k>>3;
	k = 0;
	if(stage == 2 || stage == 0)
	PORTB &= ~(1 << PB1);				// Switching ON the charging circuit
}


