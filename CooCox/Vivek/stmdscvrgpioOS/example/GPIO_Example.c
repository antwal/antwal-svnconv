#include<stm32_pio.h>

void GPIO_example(void)
{
	uint32_t i,j;
	j = 138;

	COX_PIO_Dev LED0 = COX_PIN(1,8);
	COX_PIO_Dev LED1 = COX_PIN(1,9);
	COX_PIO_Dev LED2 = COX_PIN(1,10);
	COX_PIO_Dev LED3 = COX_PIN(1,11);
	COX_PIO_Dev LED4 = COX_PIN(1,12);
	COX_PIO_Dev LED5 = COX_PIN(1,13);
	COX_PIO_Dev LED6 = COX_PIN(1,14);
	COX_PIO_Dev LED7 = COX_PIN(1,15);

	pi_pio.Init(LED0);
	pi_pio.Init(LED1);
	pi_pio.Init(LED2);
	pi_pio.Init(LED3);
	pi_pio.Init(LED4);
	pi_pio.Init(LED5);
	pi_pio.Init(LED6);
	pi_pio.Init(LED7);

	pi_pio.Dir(LED0,1);
	pi_pio.Dir(LED1,1);
	pi_pio.Dir(LED2,1);
	pi_pio.Dir(LED3,1);
	pi_pio.Dir(LED4,1);
	pi_pio.Dir(LED5,1);
	pi_pio.Dir(LED6,1);
	pi_pio.Dir(LED7,1);

    while(1)
    {
    	pi_pio.Out(LED0,0);
    	pi_pio.Out(LED1,1);
    	pi_pio.Out(LED2,0);
    	pi_pio.Out(LED3,1);
    	pi_pio.Out(LED4,0);
    	pi_pio.Out(LED5,1);
    	pi_pio.Out(LED6,0);
    	pi_pio.Out(LED7,1);
    	for(i = 0; i < 0xFFFFF; i++)
    	{
    		j++;
    	}
    	pi_pio.Out(LED0,1);
    	pi_pio.Out(LED1,0);
    	pi_pio.Out(LED2,1);
    	pi_pio.Out(LED3,0);
    	pi_pio.Out(LED4,1);
    	pi_pio.Out(LED5,0);
    	pi_pio.Out(LED6,1);
    	pi_pio.Out(LED7,0);
    	for(i = 0; i < 0xFFFFF; i++);
    }
}

	