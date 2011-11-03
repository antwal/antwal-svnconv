#include "STM32_USART.h"
#include <stdio.h>


void SPI_Example(void);


COX_SERIAL_PI *UART1 = &pi_serial2;

int main(void)
{
	UART1->Init(115200);
	printf("Start\n\r");
	SPI_Example();

	printf("Done\n\r");
    //automatically added by CoIDE


	while(1)
    {
    }
}

