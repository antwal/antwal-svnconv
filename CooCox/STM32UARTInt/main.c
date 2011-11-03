#include "cox_serial.h"
#include "STM32_USART.h"
#include "stm32f10x.h"
#include "buffer.h"
#include <stdio.h>

cBuffer recvBuffer;
unsigned char buffer[50];


void USART1_IRQHandler(void)
{
	char ch;
	//RXNE interrupt occured
	//printf("uart%x\n\r",USART1->SR);
	if((USART1->SR & 0x20) != (u16)RESET )
	{
		ch = (USART1->DR & (us16)0x01FF);
		bufferAddToEnd(&recvBuffer, ch);
	}

}

void pchar(unsigned char c)
{
	USART2->DR =  (c & (us16)0x01FF);
	while (!(USART2->SR & 0x0080));
}

int main(void)
{
	char ch;
	COX_SERIAL_PI *myUSART1 = &pi_serial1;
	COX_SERIAL_PI *myUSART2 = &pi_serial2;

	bufferInit(&recvBuffer, buffer, 50);
	myUSART1->Init(9600);
	myUSART2->Init(115200);

	myUSART1->Cfg( COX_SERIAL_INT_CONF, RXNE_ENABLE,0);

    while(1)
    {
    	if(!bufferIsNotFull(&recvBuffer)){
    		printf("Buffer error \n\r");
    		while(0);
    	}
    	if(bufferDataAvail(&recvBuffer))
    	{
    		ch = bufferGetFromFront(&recvBuffer);
    		printf(" %c",ch);
    	}
    }
}
