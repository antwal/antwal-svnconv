#include "STM32_USART.h"
#include <stdio.h>

COX_SERIAL_PI *UART3 = &pi_serial3;

int main(void)
{

	//uint32_t tmp;
	UART3->Init(115200);
	printf("Hello, here we are\n\r");
	printf("Integer %d",100000);


	while(1)
    {

    }
}
