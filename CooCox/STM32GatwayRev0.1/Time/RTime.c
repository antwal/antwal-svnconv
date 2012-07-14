/*-----------------------------------------------------------------------------------------------------------*/
/*							This program takes care of the time												 */
/*-----------------------------------------------------------------------------------------------------------*/

#include "stm32f10x_bkp.h"
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "misc.h"
#include "stm32_rtc.h"
#include "stm32f10x.h"
#include "stm32f10x_rcc.h"
#include "debug.h"

extern uint8_t Dog;

void Periodic(void);
uint16_t BKP_ReadBackupRegister(uint16_t BKP_DR);
// Default time
TIME def= {
		2012,			// Year 2012
		1,				// January
		1,				// 1st day
		00,				// Midnight
		00,				// 0 minutes
		00				// 0 seconds
};

TIME *tm = &def;


void RTC_Timer(void)
{
	COX_Status status = COX_SUCCESS;
	uint32_t i;
	COX_RTC_PI *rtc = &pi_rtc;

    /* NVIC configuration */
    NVIC_Configuration_rtc();

    debug(CONSOLE,"%s\n\r","In RTC");
    if (BKP_ReadBackupRegister(BKP_DR1) != 0xA5A5)
    {
        /* Backup data register value is not correct or not yet programmed (when
           the first time the program is executed) */

        debug(LOG,"%s\n\r","RTC not yet configured");

        /* RTC Configuration */
        rtc->Init();

        debug(LOG,"%s\n\r","RTC configured");

        /* Adjust time by values entred by the user on the hyperterminal */
        rtc->Start();

        status = rtc->Write(tm);
        rtc->Stop();

       	rtc->Read(tm);

        rtc->Event(RTC_EVENT_IT_SEC, Periodic, 0);

        BKP_WriteBackupRegister(BKP_DR1, 0xA5A5);
    }
    else
    {
        /* Check if the Power On Reset flag is set */
        if (RCC_GetFlagStatus(RCC_FLAG_PORRST) != RESET)
        {
            debug(LOG,"%s\n\r","Power On Reset occurred");
        }
        /* Check if the Pin Reset flag is set */
        if (RCC_GetFlagStatus(RCC_FLAG_PINRST) != RESET)
        {
            debug(LOG,"%s\n\r","External Reset occurred");
        }
        if (RCC_GetFlagStatus(RCC_FLAG_IWDGRST) != RESET)
        { /* WWDGRST flag set */
            debug(LOG,"%s\n\r","IWDGRST Reset occurred");
            Dog = 1;
        }
        if (RCC_GetFlagStatus(RCC_FLAG_WWDGRST) != RESET)
        { /* WWDGRST flag set */
        	debug(LOG,"%s\n\r","WWDGRST Reset occurred");

        }
        if (RCC_GetFlagStatus(RCC_FLAG_SFTRST) != RESET)
        { /* SFTRST flag set */
        	debug(LOG,"%s\n\r","SFTRST Reset occurred");
        }
        if (RCC_GetFlagStatus(RCC_FLAG_LPWRRST) != RESET)
        { /* LPWRST flag set */
        	debug(LOG,"%s\n\r","LPWRRST Reset occurred");
        }


        /* Wait for RTC registers synchronization */
        RTC_WaitForSynchro();
        /* Enable the RTC Second */
        rtc->Event(RTC_EVENT_IT_SEC, Periodic, 0);
        /* Wait until last write operation on RTC registers has finished */
        RTC_WaitForLastTask();
    }

    /* Clear reset flags */
    RCC_ClearFlag();

   }



void NVIC_Configuration_rtc(void)
{
	NVIC_InitTypeDef NVIC_InitStructure1;

	/* Configure one bit for preemption priority */
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_0);

	/* Enable the RTC Interrupt */
	NVIC_InitStructure1.NVIC_IRQChannel = RTC_IRQn;
	NVIC_InitStructure1.NVIC_IRQChannelPreemptionPriority = 2;
	NVIC_InitStructure1.NVIC_IRQChannelSubPriority = 0;
	NVIC_InitStructure1.NVIC_IRQChannelCmd = ENABLE;
	NVIC_Init(&NVIC_InitStructure1);
}


void Periodic(void)
{
	//static uint8_t count = 0;
	Cur_Time(tm);
	/*count ++;
	if(count > 9){
		//printf("Time is: %d:%d:%d - %d,%d,%d\r",tm->hh,tm->mm, tm->ss, tm->DD,tm ->MM, tm->YYYY);
		count = 0;
	}*/
}
