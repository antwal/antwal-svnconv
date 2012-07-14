#include<avr/io.h>
#include<avr/interrupt.h>
#include<avr/sleep.h>
#include <util/delay.h>
#include "timer.h"
#include "main.h"

#include "uart.h"
#include "rprintf.h"
volatile unsigned char time = 0;

ISR(TIMER1_COMPA_vect)
{
	// Timer Interrupt Recieved
	time --;		// Decrementing the time value
}

/* To generate time delay of time*1sec */
void delay(unsigned int time)
{
	int i, j;
	for(j=0; j<time; j++)
		for(i=0; i< 40; i++)	// 1 sec
		_delay_ms(25);
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
	

	/* Each clock tick at 8Mhz cpu frequency will be .125us; with prescalar value of 1024 clock tick is 128us */
	
}

void time_sleep(unsigned int sec)
{
	
	TCNT1 = 0;				// Reseting the timer to zero
	TCCR1B |= (1 << CS12) | (1 << CS10);	// Setting the prescalar as 1024	
	//OCR1A = 10;
	OCR1A = 31250;				// 4 Sec; For 8 MHz cpu_frequency	
						// 32 Sec; For 1 MHz cpu_frequency

	sei();					// Enabling the interrupt

	time = sec >>2;				// Time divided by 4; This determines number of overflows of timer 
	rprintf("In Timer: sec=%d\n",time);
	TIMSK |= (1 << OCIE1A);			// Enabling the Timer overflow interrupt
	while(time > 0)
	{
		sleeps();			// Sleeping 
	
	}
	
	TIMSK &= ~(1<< OCIE1A);			// Disabling the Timer overflow interrupt
}


