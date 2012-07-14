# include"avr/io.h"
# include"compat/deprecated.h"
# include<string.h>
# include"util/delay.h"




void usart_init(void)
{
UBRRL=25;  //SETTING BAUD RATE TO BE 2400bps at 1Mhz
UCSRB |=(1<<RXEN)|(1<<TXEN);  // RECEIVER ENABLE AND TRANSMITTER ENABLE
//UCSRB&=(0<<UCSZ2); //CHARACTER SIZE 8 BIT
UCSRC |=(1<< URSEL)|(1<<UCSZ1)|(1<<UCSZ0);	// Select should be in one line

// SETTING ASYNCHRONOUS MODE,NO PARITY,1 STOP BIT, CHARACTER SIZE 5BITS
//UCSRC&=(0<<UMSEL)|(0<<UPM1)|(0<<UPM0)|(0<<USBS)|(0<<UCSZ1)|(0<<UCSZ0); 

}


/*----------------------------------------------------------------
------------FUNCTIONS TO READ UART-------------------------------
-----------------------------------------------------------------*/
 unsigned char ReceiveByte( void )
  {
   while ( !(UCSRA &  (1<<RXC)) );     /*  Wait for incomming data   */
   return UDR;/* Return the   data */
  }

/*----------------------------------------------------------------
------------FUNCTIONS TO WRITE UART-------------------------------
-----------------------------------------------------------------*/
  void chr_send( unsigned char data )
  {
   while ( !(UCSRA & (1<<UDRE)) );        /* Wait for   empty transmit buffer */
   UDR = data;  /* Start transmittion   */
  }


/* Function to send string */
void str_send(char *write)
{
char i=0, m =0;

m = strlen(write);

	for(i=0;i<=m;i++)
	{
		chr_send(write[i]);
	}
	
}

void num_send(unsigned int n)
{
unsigned char number[5];
unsigned char i=0;
unsigned char a=0, j;

	while(n/10)
	{
		a=n%10;
		n=n/10;
		number[i]=(a+48);
		i++;
	}
		number[i]=(n+48);
		i++;
				
	for(j=i;j>0;j--)
	{
		chr_send(number[j-1]);	
	}
//DISPLAY((char *)number,i,numeric);

}

