#include <avr/io.h>
#include "usart.h"


void adc_init(void)
{
//	ADMUX |= (1<<ADLAR);  		//ADLAR enabled ..only 8 bits prescision
	ADCSRA = 0X06;			//prescaling factor 32
	ADCSRA |= (1<<ADEN);  		//analog to digital conversion enabled
//	ADCSRA |= (1<<ADFR);		//free running mode
	SFIOR = 0X00;
//	ADCSRA |= (1<<ADSC);		//this step should be at last...to start conversion
}

void adc_disable(void)
{
//	ADCSRA &= ~(1 << ADEN);
}

void ext_int_init(void)
{
	MCUCR |= (1<< ISC11);		// Enabling interrupt on any level change
//	GICR |= (1<< INT1);		// Enabling the external intterupt 1
}

void input_enable(void)
{
	PORTB = 0x00;
	PORTC = 0x00;
	PORTD = 0x00;
	DDRD |= (1 << PD5) | (1 << PD6) | (1 << PD7);
	DDRB |= (1 << PB6) | (1 << PB7);	
}

void usart_disable(void)
{
        UCSRB &= ~(1 << RXEN) & ~(1 << TXEN) ;
}

void disable_all(void)
{
	usart_disable();
//	adc_disable();
}
