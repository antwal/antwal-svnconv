#include "stm32f10x_gpio.h"
#include "stm32f10x_rcc.h"

GPIO_InitTypeDef GPIO_InitStructure;
int i;
#define LED_PORT GPIOB

void binky(void){
//...
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_InitStructure.GPIO_Mode  = GPIO_Mode_Out_PP;
  GPIO_InitStructure.GPIO_Pin   = GPIO_Pin_All ;
  GPIO_Init(GPIOB, &GPIO_InitStructure);

  while(1){
    GPIO_WriteBit(LED_PORT,GPIO_Pin_8,Bit_SET);
    for (i=0;i<1000000;i++);
    GPIO_WriteBit(LED_PORT,GPIO_Pin_8,Bit_RESET);
    for (i=0;i<1000000;i++);

    GPIO_WriteBit(LED_PORT,GPIO_Pin_9,Bit_SET);
    for (i=0;i<1000000;i++);
    GPIO_WriteBit(LED_PORT,GPIO_Pin_9,Bit_RESET);
    for (i=0;i<1000000;i++);

    GPIO_WriteBit(LED_PORT,GPIO_Pin_10,Bit_SET);
    for (i=0;i<1000000;i++);
    GPIO_WriteBit(LED_PORT,GPIO_Pin_10,Bit_RESET);
    for (i=0;i<1000000;i++);
  }
}