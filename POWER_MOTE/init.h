
/* Enabling Output unit without interrupt enable on ADC conversion complete */
/* Interrupt is enalbed whem it is used to avoid collision with timer unit */
void adc_init(void);	// Initialisationof ADC unit
void adc_disable(void);	//disabling of ADC unit

void input_enable(void);		// Initialising the input output unit

void disable_all(void);		//Disabling adc and usart
