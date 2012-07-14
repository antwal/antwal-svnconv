#include "exti.h"
#include "cox_exti.h"
#include "cox_pio.h"
#include <stm32_pio.h>

void exti_handler(uint16_t pin);

void buttonEnable(void)
{
	COX_PIO_Dev BUTTON = COX_PIN(0,0);
	pi_exti.Init(BUTTON);
	pi_exti.Event(BUTTON, COX_EXTI_EDGE_RISING);
	pi_exti.Handler(exti_handler);
}
