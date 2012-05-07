#include "STM32_USART.h"
#include <stdio.h>
#define FLOATING_POINT_EN 1

void SPI_Example(void);


COX_SERIAL_PI *UART3 = &pi_serial3;

int main(void)
{
	setvbuf( stdout, 0, _IONBF, 0 );
	UART3->Init(115200);
	printf("Start\n\r");
	SPI_Example();

	printf("Done\n\r");
    //automatically added by CoIDE


	while(1)
    {
    }
}

