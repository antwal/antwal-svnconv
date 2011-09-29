/* This function does all the adc conversion; implementss adc noise reduction sleep*/
void adc_calc(unsigned char);
#define adc_int_enb()   ADCSRA |= (1<<ADIE)             //  ADC conversion complete interrupt enable
#define adc_int_dis()   ADCSRA &= ~(1<<ADIE)    


