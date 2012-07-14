#include "STM32_USART.h"

	uint32_t tmp;
	ul32 a = 0;
	ul32 ut_count;
	COX_SERIAL_PI *uart = &pi_serial1;
	COX_Status err;
	uint16_t rxbuf[20];
	uint8_t wxbuf[20] = "CHENG";
	
void USART_Example(void)
{

	uart->Init(115200);

	err = uart->Cfg(COX_SERIAL_CFG_BITS, 8, &tmp); if(err != COX_SUCCESS) while(1);

	err = uart->Cfg(COX_SERIAL_CFG_STOP_BITS, COX_SERIAL_STOPBIT_1, &tmp); if(err != COX_SUCCESS) while(1);
	
	err = uart->Cfg(COX_SERIAL_CFG_PARITY, COX_SERIAL_PARITY_NONE, &tmp); if(err != COX_SUCCESS) while(1);

	err = uart->Cfg(COX_SERIAL_CFG_RATE, 115200, &tmp); if(err != COX_SUCCESS) while(1);

	uart->Write(wxbuf, 10);
	
	//while(1)
	{
		a = uart->Read(rxbuf, 1);
		for(a = 0; a < 0xFFFFF; a++);
	}
}
