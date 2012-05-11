/***************************************************************************//**
 * @file      : stm_rtc.c
 * @brief     : stm32f1xx RTC Interface
 * @version   : V1.0
 * @date      : 21. February. 2011
 * @author    : CooCox
*******************************************************************************/

#include <stdio.h>
#include "stm32f10x.h"
#include "stm32_rtc.h"
#include "stm32f10x_rcc.h"
#include <stdint.h>
#include "debug.h"

/**RTC Set Alarm Event*/
RTC_Event_Handler Rtc_Alarm_Event = COX_NULL;
RTC_Event_Handler Rtc_Sec_event = COX_NULL;
RTC_Event_Handler Rtc_Overflow_event = COX_NULL;

// EPOCH = Jan 1 1900 00:00:00
#define	EPOCH_YR	1900
//(24L * 60L * 60L)
#define	SECS_DAY			86400UL							// Seconds Per day
#define SECS_YR				31536000UL						// Seconds per Yr
#define	LEAPYEAR(year)	(!((year) % 4) && (((year) % 100) || !((year) % 400)))
#define	YEARSIZE(year)	(LEAPYEAR(year) ? 366 : 365)
#define TimeZone		22									//GMT+2 = +8; GMT+5:30= 22

/* To generate Alarms */
#define HOURLY				0
#define DAILY				1
#define MONTHLY				2
#define AFTER_EACH_15MIN	3
#define ONE_SHOT			4

extern TIME *tm;
void STM_RTC_Start (void);
void STM_RTC_Stop (void);

COX_Status STM_RTC_Write (TIME *tm);

uint8_t monthlen(uint8_t isleapyear,uint8_t month){
	if(month==1){
		return(28+isleapyear);
	}
	if (month>6){
		month--;
	}
	if (month%2==1){
		return(30);
	}
	return(31);
}

// gmtime -- convert calendar time (sec since 1970) into broken down time
// returns something like Fri 2007-10-19 in day and 01:02:21 in clock
// The return values is the minutes as integer. This way you can update
// the entire display when the minutes have changed and otherwise just
// write current time (clock). That way an LCD display needs complete
// re-write only every minute.
/*
 * This funtion can be used before writing the new time obtained from NTP
 * to the RTC.
 * Also it can be used when RTC time is read to convert that back in the
 * YYYY:MM:DD:hh:mm:ss format and store it in TIME struct
 * @param time: this is the seconds which is either obtained from NTP or
 * 				read from RTC
 * @param ntp : This tells if the time is from NTP or from local RTC
 * @return 	  : is always success
 */
uint8_t gmtime( uint32_t time, TIME *tm, uint8_t ntp)
{
	uint32_t dayclock;
    uint16_t dayno;
    uint16_t zone = 15 * 60;
    uint16_t cur_yr;

    cur_yr = tm->YYYY;
    // If time is from NTP else continue with current year
    if(ntp){
    	tm->YYYY = EPOCH_YR;
    	time += zone * TimeZone;
    }

	dayclock = time % SECS_DAY;
	dayno = time / SECS_DAY;
	tm->DD = dayno+1;
	tm->ss = dayclock % 60UL;
	tm->mm = (dayclock % 3600UL) / 60;
	tm->hh = dayclock / 3600UL;

	// IT does not touch the year if days are less than 366
	while (dayno >= YEARSIZE(tm->YYYY)) {
		dayno -= YEARSIZE(tm->YYYY);
		tm->YYYY++;
	}

	tm->MM = 0;
	while (dayno >= monthlen(LEAPYEAR(tm->YYYY),tm->MM)) {
		dayno -= monthlen(LEAPYEAR(tm->YYYY),tm->MM);
		tm->MM++;
	}
	tm->MM++;
	tm->DD = dayno+1;

	if(ntp && tm->YYYY >= 2012)
	{
		STM_RTC_Start();
		STM_RTC_Write (tm);				// Writing time to RTC
		STM_RTC_Stop();
		//debug(LOG,"%s\n\r","TimeUpdated\n\r");
	}
	else
		tm->YYYY = cur_yr;

	return(COX_SUCCESS);
}

/**
  * @brief  Waits until last write operation on RTC registers has finished.
  * @note   This function must be called before any write to RTC registers.
  * @param  None
  * @retval None
  */
void RTC_WaitForLastTask(void)
{
  /* Loop until RTOFF flag is set */
  while ((RTC->CRL & RTC_FLAG_RTOFF) == (uint16_t)RESET)
  {
  }
}

/**
  * @brief  Waits until the RTC registers (RTC_CNT, RTC_ALR and RTC_PRL)
  *   are synchronized with RTC APB clock.
  * @note   This function must be called before any read operation after an APB reset
  *   or an APB clock stop.
  * @param  None
  * @retval None
  */
void RTC_WaitForSynchro(void)
{
  /* Clear RSF flag */
  RTC->CRL &= (uint16_t)~RTC_FLAG_RSF;
  /* Loop until RSF flag is set */
  while ((RTC->CRL & RTC_FLAG_RSF) == (uint16_t)RESET)
  {
  }
}

/**
  * @brief  Checks whether the specified RTC flag is set or not.
  * @param  RTC_FLAG: specifies the flag to check.
  *   This parameter can be one the following values:
  *     @arg RTC_FLAG_RTOFF: RTC Operation OFF flag
  *     @arg RTC_FLAG_RSF: Registers Synchronized flag
  *     @arg RTC_FLAG_OW: Overflow flag
  *     @arg RTC_FLAG_ALR: Alarm flag
  *     @arg RTC_FLAG_SEC: Second flag
  * @retval The new state of RTC_FLAG (SET or RESET).
  */
FlagStatus RTC_GetFlagStatus(uint16_t RTC_FLAG)
{
  FlagStatus bitstatus = RESET;

  /* Check the parameters */
  assert_param(IS_RTC_GET_FLAG(RTC_FLAG));

  if ((RTC->CRL & RTC_FLAG) != (uint16_t)RESET)
  {
    bitstatus = SET;
  }
  else
  {
    bitstatus = RESET;
  }
  return bitstatus;
}

/**
  * @brief  Clears the RTC's pending flags.
  * @param  RTC_FLAG: specifies the flag to clear.
  *   This parameter can be any combination of the following values:
  *     @arg RTC_FLAG_RSF: Registers Synchronized flag. This flag is cleared only after
  *                        an APB reset or an APB Clock stop.
  *     @arg RTC_FLAG_OW: Overflow flag
  *     @arg RTC_FLAG_ALR: Alarm flag
  *     @arg RTC_FLAG_SEC: Second flag
  * @retval None
  */
void RTC_ClearFlag(uint16_t RTC_FLAG)
{
  /* Check the parameters */
  assert_param(IS_RTC_CLEAR_FLAG(RTC_FLAG));

  /* Clear the corresponding RTC flag */
  RTC->CRL &= (uint16_t)~RTC_FLAG;
}

/***************************************************************************//**
 * @brief     RTC Handler
 * @param[in] None
 * @return    None
*******************************************************************************/
void RTC_IRQHandler(void)
{
	ul32 yr_end;
	/*  Second Interrupt */
	if( RTC->CRL & RTC_IT_SEC )
	{
		/* Clear the RTC Second interrupt */
		/* Clear the coressponding RTC pending bit */
		RTC->CRL &= (us16)~RTC_IT_SEC;
		/* Wait until last write operation on RTC registers has finished */
		/* Loop until RTOFF flag is set */
		while ((RTC->CRL & RTC_FLAG_RTOFF) == (us16)RESET)
		{
		}
		/* Reset RTC Counter when Time is 31:Dec:23:59:59 */
		if(LEAPYEAR(tm->YYYY))
			yr_end = SECS_YR + SECS_DAY;
		else
			yr_end = SECS_YR;

		if(((ul32)(((ul32)RTC->CNTH << 16 ) | (us16)(RTC->CNTL))) == yr_end)
		{
			// Happy New Year
			tm->YYYY++;

			/* Set the CNF flag to enter in the Configuration Mode */
			RTC->CRL |= CRL_CNF_Set;

			/* Set RTC COUNTER MSB word */
			RTC->CNTH = (0x0 & RTC_MSB_Mask) >> 16;
			/* Set RTC COUNTER LSB word */
			RTC->CNTL = (0x0 & RTC_LSB_Mask);
			/* Reset the CNF flag to exit from the Configuration Mode */
			RTC->CRL &= CRL_CNF_Reset;
			/* Wait until last write operation on RTC registers has finished */
			/* Loop until RTOFF flag is set */
			while ((RTC->CRL & RTC_FLAG_RTOFF) == (us16)RESET)
			{
			}
		}
		if(Rtc_Sec_event != COX_NULL)
			Rtc_Sec_event();
	}
	if(RTC->CRL & RTC_IT_ALR)
	{
		if(Rtc_Alarm_Event != COX_NULL)
			Rtc_Alarm_Event();
			/* Clear the RTC Alarm interrupt */
			/* Clear the coressponding RTC pending bit */
			RTC->CRL &= (us16)~RTC_IT_ALR;
	}
	if(RTC->CRL & RTC_IT_OW)
	{
		if(Rtc_Overflow_event != COX_NULL)
			Rtc_Overflow_event();
			/* Clear the RTC OverFlow interrupt */
			/* Clear the coressponding RTC pending bit */
			RTC->CRL &= (us16)~RTC_IT_OW;
	}

}


/***************************************************************************//**
 * @brief     Initializes the RTC peripheral
 * @param[in] None
 * @return    None
*******************************************************************************/
COX_Status STM_RTC_Init (void)
{
	ul32 tmp = 0;
	ul32 statusreg = 0;
	FlagStatus bitstatus = RESET;

	/* Enable PWR and BKP clocks */
	RCC->APB1ENR |= (RCC_APB1Periph_PWR | RCC_APB1Periph_BKP);

	/* Allow access to BKP Domain */
	*(vu32 *) CR_DBP_BB = (ul32)ENABLE;

	/* Reset Backup Domain */
	*(vu32 *) BDCR_BDRST_BB = (ul32)ENABLE;
	*(vu32 *) BDCR_BDRST_BB = (ul32)DISABLE;

	/* Enable LSE */
	/* Reset LSEON and LSEBYP bits before configuring the LSE */
	/* Reset LSEON bit */
	*(vu8 *) BDCR_BASE = RCC_LSE_OFF;
	/* Reset LSEBYP bit */
	*(vu8 *) BDCR_BASE = RCC_LSE_OFF;
    /* Set LSEON bit */
    *(vu8 *) BDCR_BASE = RCC_LSE_ON;
	RCC->BDCR |= RCC_LSE_ON;

    /* Wait till LSE is ready */
    do{
    	/* Get the RCC register index */
    	tmp = RCC_FLAG_LSERDY >> 5;
    	if (tmp == 1)               /* The flag to check is in CR register */
    	{
    	    statusreg = RCC->CR;
    	}
    	else if (tmp == 2)          /* The flag to check is in BDCR register */
    	{
    	    statusreg = RCC->BDCR;
    	}
    	else                       /* The flag to check is in CSR register */
    	{
    	    statusreg = RCC->CSR;
    	}
    	/* Get the flag position */
    	tmp = RCC_FLAG_LSERDY & FLAG_Mask;
    	if ((statusreg & ((ul32)1 << tmp)) != (ul32)RESET)
    	{
    	    bitstatus = SET;
    	}
    	else
    	{
    	    bitstatus = RESET;
    	}
    }while(bitstatus == RESET );

    /* Select LSE as RTC Clock Source */
    /* Select the RTC clock source */
    RCC->BDCR |= RCC_RTCCLKSource_LSE;

    /* Enable RTC Clock */
    *(vu32 *) BDCR_RTCEN_BB = (ul32)ENABLE;

    /* Wait for RTC registers synchronization */
    /* Clear RSF flag */
    RTC->CRL &= (us16)~RTC_FLAG_RSF;
    /* Loop until RSF flag is set */
    while ((RTC->CRL & RTC_FLAG_RSF) == (us16)RESET)
    {
    }

    /* Wait until last write operation on RTC registers has finished */
    /* Loop until RTOFF flag is set */
    while ((RTC->CRL & RTC_FLAG_RTOFF) == (us16)RESET)
    {
    }

    /* Wait until last write operation on RTC registers has finished */
    /* Loop until RTOFF flag is set */
    while ((RTC->CRL & RTC_FLAG_RTOFF) == (us16)RESET)
    {
    }

    /* RTC period = RTCCLK/RTC_PR = (32.768 KHz)/(32767+1) */
    /* Set the CNF flag to enter in the Configuration Mode */
    RTC->CRL |= CRL_CNF_Set;
    /* Set RTC PRESCALER MSB word */
    RTC->PRLH = (32768 & PRLH_MSB_Mask) >> 0x10;
    /* Set RTC PRESCALER LSB word */
    RTC->PRLL = (32768 & RTC_LSB_Mask);
    /* Reset the CNF flag to exit from the Configuration Mode */
    RTC->CRL &= CRL_CNF_Reset;
    if((RTC->CRL & 0x8) == 0)
    	RTC->CRL |= 0x10;
	/* Loop until RTOFF flag is set */
    while ((RTC->CRL & RTC_FLAG_RTOFF) == (us16)RESET)
    {
    }
	return COX_SUCCESS;
}


/***************************************************************************//**
 * @brief     Start RTC Timer
 * @param[in] None
 * @return    None
*******************************************************************************/
void STM_RTC_Start (void)
{
	/* Loop until RTOFF flag is set */
	while ((RTC->CRL & RTC_FLAG_RTOFF) == (u16)RESET)
	{
	}

	/* necessary to do below two steps
	 * this allows access to the backup as well as RTC registers
	 */

	/* Enable PWR and BKP clocks */
	RCC->APB1ENR |= (RCC_APB1Periph_PWR | RCC_APB1Periph_BKP);

	/* Allow access to BKP Domain */
	*(vu32 *) CR_DBP_BB = (ul32)ENABLE;

	/* Set the CNF flag to enter in the Configuration Mode */
	RTC->CRL |= CRL_CNF_Set;

	/* Wait until last write operation on RTC registers has finished */
	/* Loop until RTOFF flag is set */
	while ((RTC->CRL & RTC_FLAG_RTOFF) == (u16)RESET)
	{
	}
}


/***************************************************************************//**
 * @brief     Stop RTC Timer
 * @param[in] None
 * @return    None
*******************************************************************************/
void STM_RTC_Stop (void)
{
	/* Loop until RTOFF flag is set */
	while ((RTC->CRL & RTC_FLAG_RTOFF) == (u16)RESET)
	{
	}

	/* Reset the CNF flag to exit from the Configuration Mode */
	RTC->CRL &= CRL_CNF_Reset;
	if((RTC->CRL & 0x8) == 0)
	    	RTC->CRL |= 0x10;
	/* Wait until last write operation on RTC registers has finished */
	/* Loop until RTOFF flag is set */
	while ((RTC->CRL & RTC_FLAG_RTOFF) == (u16)RESET)
	{
	}
}


/***************************************************************************//**
 * @brief     Read RTC Timer
 *
 * @return    None
*******************************************************************************/
void STM_RTC_Read (TIME *tm)
{
	us16 value_1 = 0;
	ul32 value_2 = 0;

	value_1 = RTC->CNTL;
	value_2 = (((ul32)RTC->CNTH<<16 ) | value_1);

	gmtime(value_2, tm, 0);

}


/*
 *	GET THE CURRENT TIME
 */

void Cur_Time(TIME *tim)
{
	STM_RTC_Read(tim);
	tim->YYYY = tm->YYYY;
}
/***************************************************************************//**
 * @brief     Set RTC Time
 * @param[in] tm : Pointer to a Time structure that contains time value
 * @return    - COX_SUCCESS : Success
 *            - COX_ERROR : Failed to set
*******************************************************************************/
COX_Status STM_RTC_Write (TIME *tm)
{
	ul32 value_t;
	us16 Day = 0;

	/* Check tm struct member is correct or not*/
	if( tm->ss>59 || tm->ss<0)
		return COX_ERROR;
	if( tm->mm>59 || tm->mm<0)
		return COX_ERROR;
	if( tm->hh>23 || tm->hh<0)
		return COX_ERROR;
	if( tm->DD>31 || tm->DD<0)
		return COX_ERROR;
	if( tm->MM>12 || tm->MM<0)
		return COX_ERROR;
	if( tm->YYYY >2099 || tm-> YYYY < 2011 )				// Years between 2011 and 2099
		return COX_ERROR;

	tm->MM --;
	while(tm->MM){
		tm->MM --;											// Dont consider the present month; will add current  month day later
		Day += monthlen(LEAPYEAR(tm->YYYY),tm->MM);
	}

	Day += tm->DD;
	/*Set Time to RTC Counter Register*/
	value_t = ((Day-1) * 24 * 3600 + tm->hh * 3600 + tm->mm * 60 + tm->ss);

	/* Set RTC COUNTER MSB word */
	RTC->CNTH = (value_t & RTC_MSB_Mask)>>16;

	/* Set RTC COUNTER LSB word */
	RTC->CNTL = (value_t & RTC_LSB_Mask);

	*(vu16 *) (BKP_BASE + ((us16)0x0004)) = 0xA5A5;


	return COX_SUCCESS;
}


/***************************************************************************//**
 * @brief     Set alarm time
 * @param[in] freq: This is identifer that decides whether alarm frequency will be
 * 				HOURLY, DAILY< MONTHLY, AFTER_EACH_15MIN or ONE_SHOT
 * @param[in] tm : it depends on freq;
 * 				if freq is ONE_SHOT : this points to a Time structure that contains alarm time value
 * 				else this points to the current time value
 * @param[in] handler : Alarm handler function
 * @return    - COX_SUCCESS : Success
 *            - COX_ERROR : Failed to set
*******************************************************************************/
COX_Status STM_RTC_Alarm (uint8_t freq, TIME *tm, RTC_Event_Handler handler)
{
	ul32 value_t;
	if(handler != COX_NULL) {

	    if(tm == COX_NULL)
	    	return COX_ERROR;

		/* Check tm struct member value is correct or not*/
		if( tm->ss>59 && tm->ss<0)
			return COX_ERROR;
		if( tm->mm>59 && tm->mm<0)
			return COX_ERROR;
		if( tm->hh>23 && tm->hh<0)
			return COX_ERROR;
		if( tm->DD>31 && tm->DD<0)
			return COX_ERROR;
		if( tm->MM>12 && tm->MM<0)
			return COX_ERROR;


		switch(freq){
		case HOURLY:
				Cur_Time(tm);
				//tm->hh + 1;
				tm->mm = 0;
				tm->ss = 0;
			break;

		case DAILY:
				Cur_Time(tm);

				//tm->hh + 1;
				tm->mm = 0;
				tm->ss = 0;
			break;
		case MONTHLY:

			break;
		case AFTER_EACH_15MIN:

			break;
		case ONE_SHOT:

			break;
		default:
			break;
		}

		value_t = (tm->hh*3600 + tm->mm*60 + tm->ss);
		/* Set the ALARM MSB word */
		RTC->ALRH = (value_t & RTC_MSB_Mask) >> 16;
		/* Set the ALARM LSB word */
		RTC->ALRL = (value_t & RTC_LSB_Mask);

		Rtc_Alarm_Event = handler;  /* Setup Alarm event handler */
	    RTC->CRH = 0x2; 			/* Enable Alarm Event */
	  }

	  else {
		Rtc_Alarm_Event = COX_NULL;
	    RTC->CRH &= 0x5;            /* Disable Alarm Event */
	  }

	return COX_SUCCESS;
}


/***************************************************************************//**
 * @brief     Set RTC Event
 * @param[in] event : Event type, should be one of the following :
 *                     - RTC_EVENT_IT_OW :   Overflow interrupt Event
 *                     - RTC_EVENT_IT_ALR :  Alarm interrupt Event
 *                     - RTC_EVENT_IT_SEC :  Second interrupt  Event
 * @param[in] handler : Event handler function
 * @param[in] art     : Argument, not used
 * @return    - COX_SUCCESS : Success
 *            - COX_ERROR : Failed to set
 * Note : Only one event is available at the same time.
*******************************************************************************/
COX_Status STM_RTC_Event (uint8_t event, RTC_Event_Handler handler, uint32_t arg)
{
	COX_Status return_status = COX_ERROR;

	switch(event) {
	case RTC_EVENT_IT_OW:
		RTC->CRH &= ~0x04;
		RTC->CRH |= 0x04;             /* Enable the RTC Overflow Interrupt*/
		return_status =  COX_SUCCESS;
		break;
	case RTC_EVENT_IT_ALR:           /* Enable the RTC Alarm Interrupt  */
		RTC->CRH &= ~0x02;
		RTC->CRH |= 0x02;
		return_status =  COX_SUCCESS;
		break;
	case RTC_EVENT_IT_SEC:           /* Enable the RTC Second Interrupt */
		RTC->CRH &= ~0x01;
		RTC->CRH |= 0x01;
		return_status =  COX_SUCCESS;
		break;
	default : break;
	  }
	if(((event == RTC_EVENT_IT_OW)|| (event == RTC_EVENT_IT_ALR)||(event == RTC_EVENT_IT_SEC)) && (handler != COX_NULL))
	{
		if(event == RTC_EVENT_IT_SEC)
			Rtc_Sec_event = handler;
		else if(event == RTC_EVENT_IT_ALR)
			Rtc_Alarm_Event = handler;
		else if(event == RTC_EVENT_IT_OW)
			Rtc_Overflow_event = handler;
	}
	return COX_SUCCESS;
}


/***************************************************************************//**
 * @brief Define RTC Interface
*******************************************************************************/
COX_RTC_PI pi_rtc = {
  STM_RTC_Init,
  STM_RTC_Start,
  STM_RTC_Stop,
  STM_RTC_Read,
  STM_RTC_Write,
  STM_RTC_Alarm,
  STM_RTC_Event,
};
