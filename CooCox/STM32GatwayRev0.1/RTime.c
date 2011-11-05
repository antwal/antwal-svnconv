/*-----------------------------------------------------------------------------------------------------------*/
/*							This program takes care of the time												 */
/*-----------------------------------------------------------------------------------------------------------*/

#include "stm32f10x_bkp.h"
#include <stdio.h>
#include "misc.h"
#include "stm32_rtc.h"

void RTC_Timer(void)
{
	COX_Status status = COX_SUCCESS;
	uint32_t i;
	COX_RTC_PI *rtc = &pi_rtc;

    /* NVIC configuration */
    NVIC_Configuration();

    if (BKP_ReadBackupRegister(BKP_DR1) != 0xA5A5)
    {
        /* Backup data register value is not correct or not yet programmed (when
           the first time the program is executed) */

        printf("\r\n\n RTC not yet configured....");

        /* RTC Configuration */
        rtc->Init();

        printf("\r\n RTC configured....");

        /* Adjust time by values entred by the user on the hyperterminal */
        rtc->Start();

        status = rtc->Write(&tm);
        rtc->Stop();

       	rtc->Read(&tm);

        rtc->Event(RTC_EVENT_IT_SEC, Periodic, 0);

        BKP_WriteBackupRegister(BKP_DR1, 0xA5A5);
    }
    else
    {
        /* Check if the Power On Reset flag is set */
        if (RCC_GetFlagStatus(RCC_FLAG_PORRST) != RESET)
        {
            printf("\r\n\n Power On Reset occurred....");
        }
        /* Check if the Pin Reset flag is set */
        else if (RCC_GetFlagStatus(RCC_FLAG_PINRST) != RESET)
        {
            printf("\r\n\n External Reset occurred....");
        }

        printf("\r\n No need to configure RTC....");

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


/**
  * @brief  Writes user data to the specified Data Backup Register.
  * @param  BKP_DR: specifies the Data Backup Register.
  *   This parameter can be BKP_DRx where x:[1, 42]
  * @param  Data: data to write
  * @retval None
  */
void BKP_WriteBackupRegister(uint16_t BKP_DR, uint16_t Data)
{
  __IO uint32_t tmp = 0;

  /* Check the parameters */
  assert_param(IS_BKP_DR(BKP_DR));

  tmp = (uint32_t)BKP_BASE;
  tmp += BKP_DR;

  *(__IO uint32_t *) tmp = Data;
}

/**
  * @brief  Reads data from the specified Data Backup Register.
  * @param  BKP_DR: specifies the Data Backup Register.
  *   This parameter can be BKP_DRx where x:[1, 42]
  * @retval The content of the specified Data Backup Register
  */
uint16_t BKP_ReadBackupRegister(uint16_t BKP_DR)
{
  __IO uint32_t tmp = 0;

  /* Check the parameters */
  assert_param(IS_BKP_DR(BKP_DR));

  tmp = (uint32_t)BKP_BASE;
  tmp += BKP_DR;

  return (*(__IO uint16_t *) tmp);
}
