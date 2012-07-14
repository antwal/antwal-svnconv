#include "stm32_rtc.h"
#include "stm32_pio.h"
#include "misc.h"

extern vu32 TimeDisplay;

#define RTC_IRQChannel    0x03  /* RTC global Interrupt */

uint16_t  LED[2] =
{
	COX_PIN(2,8),
	COX_PIN(2,9),

};

COX_RTC_PI *rtc = &pi_rtc;

Time tm = {
  44,
  33,
  22,
};

uint8_t tog;
void Periodic(void);
void Alarm(void);
void NVIC_Configuration(void);
/***************************************************************************//**
 * @brief     RTC example Configuration
*******************************************************************************/
void STM_RTC_Test(void)
{
	COX_Status status = COX_SUCCESS;
	uint32_t i;
	/* NVIC configuration */
	NVIC_Configuration();
	for(i = 0;i < 2;i++)
		pi_pio.Init(LED[i]);


	for(i = 0;i < 2;i++)
		pi_pio.Dir(LED[i],1);

	rtc->Init();

	rtc->Start();

	status = rtc->Write(&tm);

	tm.min = 33;
	tm.sec = 50;
	status = rtc->Alarm(&tm,Alarm);

	rtc->Stop();

	rtc->Read(&tm);

	rtc->Event(RTC_EVENT_IT_SEC, Periodic, 0);

	/* Infinite loop */
	while(1)
	{
		//for(i=0;i<0xFFFFF;i++);

		/* If 1s has paased */
		//if(TimeDisplay == 1)
	    {
			//pi_pio.Out(LED[0],1);

	    }
	}
}

void Periodic(void)
{
	tog ^=1;
	pi_pio.Out(LED[0],tog);

	//for(i=0;i<0xFFFFF;i++);
	//pi_pio.Out(LED[0],0);

}

void Alarm(void)
{
	uint32_t i;
	//while(1)
	{
		pi_pio.Out(LED[1],1);

		for(i=0;i<0xFFFFF;i++);
		pi_pio.Out(LED[1],0);

		for(i=0;i<0xFFFFF;i++);

		rtc->Start();

		rtc->Write(&tm);

		tm.min += 1;
		tm.sec = 00;
		rtc->Alarm(&tm,Alarm);

		rtc->Stop();

	}
}

void NVIC_Configuration(void)
{
	NVIC_InitTypeDef NVIC_InitStructure1;

	/* Configure one bit for preemption priority */
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_1);

	/* Enable the RTC Interrupt */
	NVIC_InitStructure1.NVIC_IRQChannel = RTC_IRQChannel;
	NVIC_InitStructure1.NVIC_IRQChannelPreemptionPriority = 1;
	NVIC_InitStructure1.NVIC_IRQChannelSubPriority = 0;
	NVIC_InitStructure1.NVIC_IRQChannelCmd = ENABLE;
	NVIC_Init(&NVIC_InitStructure1);
}
