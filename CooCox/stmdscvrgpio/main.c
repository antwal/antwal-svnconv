void GPIO_example(void);
#include<stm32_pio.h>

int main(void)
{
	uint32_t j=138,i;
    //automatically added by CoIDE
	//GPIO_example();

	COX_PIO_Dev LED0 = COX_PIN(2,8);
	COX_PIO_Dev LED1 = COX_PIN(2,9);
	COX_PIO_Dev SD = COX_PIN(2,10);

	pi_pio.Init(LED0);
	pi_pio.Init(LED1);
	pi_pio.Init(SD);

	pi_pio.Dir(LED0,1);
	pi_pio.Dir(LED1,1);
	pi_pio.Dir(SD,0);
	pi_pio.Cfg(SD,1,0,0);


	while(1)
    {
		pi_pio.Out(LED0,0);
		pi_pio.Out(LED1,1);

		for(i = 0; i < 0xFFFFF; i++)
		{
			j++;
		}
		pi_pio.Out(LED0,1);
		pi_pio.Out(LED1,0);
		for(i = 0; i < 0xFFFFF; i++)
		{
			j++;
		}

    }
}

