//*****************************************************************************
// File Name    : a2dtest.c
// 
// Title                : example usage of some avr library functions
// Revision             : 1.0
// Notes                :       
// Target MCU   : Atmel AVR series
// Editor Tabs  : 4
// 
// Revision History:
// When                 Who                     Description of change
// -----------  -----------     -----------------------
// 20-Oct-2002  pstang          Created the program
//*****************************************************************************

// Modified On: 15/07/2011 by Abhishek kumar Singh <sabhishek@cdac.in>
  
//----- Include Files ---------------------------------------------------------
#include <avr/io.h>		// include I/O definitions (port names, pin names, etc)
#include <avr/interrupt.h>	// include interrupt support
#include <stdint.h>  
#include "global.h"		// include our global settings
#include "uart.h"		// include uart function library
#include "rprintf.h"		// include printf function library
#include "timer.h"		// include timer function library (timing, PWM, etc)
#include "a2d.h"		// include A/D converter function library
#include "vt100.h"		// include VT100 terminal support
#include <util/delay.h>
#include <avr/wdt.h>
  
#define PACKET_SIZE 4

#define CHARGE 		1
#define NOCHARGE	0
#define SOL_CHK		0

#define disable_solar() 		PORTD &= ~(1 << PD7)
#define enable_solar()			PORTD |= (1 << PD7)
#define enable_charge1()		PORTD |= (1 << PD6)
#define enable_charge2()		PORTD |= (1 << PD5)
#define disable_charge1()		PORTD &= ~(1 << PD6)
#define disable_charge2()		PORTD &= ~(1 << PD5)


void delay_sec(unsigned int time);
uint8_t adcSense(void);
void chargeSense(void);
void chargeLogic(void);


float batt1, batt2, solar, Volt5, volt;
uint16_t a122, timeout = 1;
uint8_t charge1 = NOCHARGE, charge2 = NOCHARGE;
uint8_t state = NOCHARGE; 
u16 sample_count = 0;

  struct data_packet
{
  
//      u08 voltage_hi;
  u16 voltage_lo;
  u08 sample_hi;
  u08 sample_lo;
  u08 channel;
} data[];


void wdt_chk(void)
{
	if((MCUCSR & (1 << WDRF)))
	{
		MCUCSR &= ~(1 << WDRF);					// Resetting the flag
		rprintf("Watchdog reset took place\n");
	}
	else
	{
		rprintf("Reset due to other reason\n");
	}

}


uint8_t adcSense()
{
	
	u08 i = 0;
	  a122 = a2dConvert10bit (ADC_CH_122V);
      rprintf ("A122: %d ", a122);
      sample_count++;

      for (i = 0; i < 4; i++)
	
	{
	  volt = a2dConvert10bit (i);
	  
/*			data[tempreg].channel = i;
			data[tempreg].voltage_hi = (volt >> 8) ;
			data[tempreg].voltage_lo= (volt);
			data[tempreg].sample_hi = (sample_count >> 8);
			data[tempreg].sample_lo = (sample_count);
			tempreg++;*/ 
	    switch (i)
	    {
	    case 2:
		batt1 = 0.0025*volt*11.6;
	//      rprintf ("Batt1: %f\t", volt);
		rprintf("Batt1: ");
		rprintfFloat(8,batt1);
		rprintf("\t");
	      break;
	    case 3:
		batt2 = 0.0025*volt*11.6;
	     // rprintf ("Batt2: %f\t", volt);
		rprintf("Batt2: ");
		rprintfFloat(8,batt2);
		rprintf("\t");
	      break;
	    case 0:
		solar = 0.0025*volt*11.6;
//	      rprintf ("Solar: %f\t", volt);
		rprintf("Solar: ");
		rprintfFloat(8,solar);
		rprintf("\t");
	      break;
	    case 1:
		Volt5 = 0.0025*volt*11.6;
//	      rprintf ("Supply: %f\t", volt);
		rprintf("Supply: ");
		rprintfFloat(8,Volt5);
		rprintf("\t");
	      break;
	    default:
	      break;
	    }
	}
	rprintf ("Sample: %d\n", sample_count);
	return 0;
}


void chargeSense()
{
		
	if(!(PIND & (1 << PD4)))
	{
		charge1 = CHARGE;
		rprintf("Charge1: yes\n");
	}
	else
	{
		charge1 = NOCHARGE;
		rprintf("Charge1: no\n");
	}
	
	if(!(PIND & (1 << PD3)))
	{
		charge2 = CHARGE;
		rprintf("Charge2: yes\n");
	}
	else
	{
		charge2 = NOCHARGE;
		rprintf("Charge2: no\n");
	}
	
}


void chargeLogic()
{

	
	if(solar <= 13)
	{
		disable_solar();
		disable_charge1();
		disable_charge2();
		rprintf("Solar is not present\r\n");
		state = NOCHARGE;
	}
	else
	{
		enable_solar();
		delay_sec(2);
		adcSense();
		chargeSense();
		
		if(solar >= 15)
		{
			if(batt1 < 8.2 && (charge1 == NOCHARGE))
			{
				enable_charge1();
				delay_sec(5);
				adcSense();
				if(solar <= 13)
				{
					state = NOCHARGE;
					disable_charge1();
					disable_solar();
				}
				else
				{
					chargeSense();
					if(charge1 == NOCHARGE)
					rprintf("Battery1 denied Charging\r\n");
					state = CHARGE;
				}
				
			}
			else if(charge1 == CHARGE)
			{
				state = CHARGE;
				rprintf("Battery1 is charging\r\n");
			}
			else
			{
				state = CHARGE;
				rprintf("Battery1 is charged\r\n");
			}
			
			
			if(batt2 < 8.2 && (charge2 == NOCHARGE))
			{
				enable_charge2();
				delay_sec(5);
				adcSense();
				if(solar <= 13)
				{
					state = NOCHARGE;
					disable_charge2();
					disable_solar();
				}
				else
				{
					chargeSense();
					if(charge2 == NOCHARGE)
					rprintf("Battery2 denied Charging\r\n");
					state = CHARGE;
				}
			}
			else if(charge2 == CHARGE)
			{
				state = CHARGE;
				rprintf("Battery2 is charging\r\n");
			}
			else
			{
				state = CHARGE;
				rprintf("Battery2 is charged\r\n");
			}
		}
		else
		{
			state = NOCHARGE;
			rprintf("Solar power is weak\r\n");
		}
	}
	
}

/*----- Begin Code ------------------------------------------------------------*/ 
int
main (void) 
{
  
    // initialize our libraries
    // initialize the UART (serial port)
	
    uartInit ();
	uartSetBaudRate (9600);
	
    // make all rprintf statements use uart for output
    rprintfInit (uartSendByte);
	rprintf ("Welcome to the Beagle Supply a2d test!\r\n");
    // initialize the timer system
  //  timerInit ();
  
    // turn on and initialize A/D converter
    a2dInit ();
  
/*	vt100Init();
	// print a little intro message so we know things are working
//	vt100ClearScreen();
//	vt100SetCursorPos(1,1);
*/ 	
   
	wdt_chk();
	wdt_enable(WDTO_2S);
	wdt_reset();
    // configure a2d port (PORTA) as input
    // so we can receive analog signals
    DDRC = 0x00;
  
    // make sure pull-up resistors are turned off
    PORTC = 0x00;
	
	DDRD |=(1 << PD5)| (1 << PD6) | (1 << PD7);

	DDRD &= ~((1 << PD3) );
    DDRD &= ~((1 << PD4) );
    PORTD |= (1 << PD3) | (1 << PD4);
	
	
    // set the a2d prescaler (clock division ratio)
    // - a lower prescale setting will make the a2d converter go faster
    // - a higher setting will make it go slower but the measurements
    //   will be more accurate
    // - other allowed prescale values can be found in a2d.h
    a2dSetPrescaler (ADC_PRESCALE_DIV128);
  
    // set the a2d reference
    // - the reference is the voltage against which a2d measurements are made
    // - other allowed reference values can be found in a2d.h
    a2dSetReference (ADC_REFERENCE_256V);
  
//      a2dSetReference(ADC_REFERENCE_AVCC);
    
    // use a2dConvert8bit(channel#) to get an 8bit a2d reading
    // use a2dConvert10bit(channel#) to get a 10bit a2d reading
    
	/****************************************************************************************
	* To know the refrence voltage we can use internal bandgap voltage. Vbg is 1.22V
	* So for any channel the conversion formula for 10 bit will be Vin = Aout*(1.22/A122) 
	*/ 
	
	
	disable_charge1();
	disable_charge2();
	enable_solar();
    while (1)
    
    {
		wdt_reset();
		rprintf("\r\nGoing to check state\r\n");
		adcSense();
		chargeSense();
		chargeLogic();
		if(state == NOCHARGE)
		{
			timeout = timeout * 2;
		}
		else if(state == CHARGE)
		{
			timeout = 15;
		}
		
		if(timeout > 900)		// greater than 15min
			timeout = 900;
			
		delay_sec(timeout);
		wdt_reset();
 
    }
  return 0;
}



