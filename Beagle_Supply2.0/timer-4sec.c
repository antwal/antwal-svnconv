#include<avr/io.h>
#include<avr/interrupt.h>
#include<avr/sleep.h>
#include <util/delay.h>
#include "timer.h"
#include "rprintf.h"		// include printf function library
#include <avr/wdt.h>

volatile unsigned int time = 0;

ISR(TIMER1_COMPA_vect)
{
	// Timer Interrupt Recieved
	time --;		// Decrementing the time value
}

/* To generate time delay of time*1sec */
void delay_sec(unsigned int time)
{
	int i, j;
	for(j=0; j<time; j++)
	{
		for(i=0; i< 40; i++)	// 1 sec
		_delay_ms(25);
		wdt_reset();
		rprintf("Time left: %d to check\r",(time - j));
	}
}

void sleeps(void)
{
	sleep_enable();
	MCUCR &= ~(1 << SM0);
	sleep_cpu();
	sleep_disable();
}

void timer_init(void)
{

	TCCR1B |= (1 << WGM12);	// Setting the clear timer on compare match
	TCNT1 = 0;				// Reseting the timer to zero
	TCCR1B |= (1 << CS12) | (1 << CS10);	// Setting the prescalar as 1024	
	//OCR1A = 10;
	OCR1A = 31250;				// 4 Sec	
	sei();					// Enabling the interrupt
	TIMSK |= (1 << OCIE1A);			// Enabling the Timer overflow interrupt


	/* Each clock tick at 8Mhz cpu frequency will be .125us; with prescalar value of 1024 clock tick is 128us */
	
}

void time_sleep(unsigned int sec)
{
	
	TCNT1 = 0;				// Reseting the timer to zero
	TCCR1B |= (1 << CS12) | (1 << CS10);	// Setting the prescalar as 1024	
	//OCR1A = 10;
	OCR1A = 31250;				// 4 Sec	
	sei();					// Enabling the interrupt

	time = sec >>2;				// Time divided by 4; This determines number of overflows of timer 
	TIMSK |= (1 << OCIE1A);			// Enabling the Timer overflow interrupt
	
}


