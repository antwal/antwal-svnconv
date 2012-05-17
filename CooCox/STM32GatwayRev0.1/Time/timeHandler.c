#include "stm32_rtc.h"
#include "timevar.h"

struct timeSince
{
	TIME instTime;
}timex[3];

uint8_t isTime(uint8_t hr, uint8_t min, uint8_t decsn)
{
	switch(decsn)
	{
	case EQUAL:
		if((tm->hh == hr) && tm->mm == min)
			return 0;
		break;
	case LESSER:
		if((tm->hh == hr))
		{
			if(tm->mm < min)
				return 0;
		}
		else if(tm->hh < hr)
			return 0;

		break;
	case GREATER:
		if(tm->hh > hr)
			return 0;
		else if(tm->hh == hr)
		{
			if(tm->mm > min)
				return 0;
		}

		break;
	default:
		break;

		return 1;

	}
}


uint16_t timeInterval(uint8_t id, uint8_t action)
{
	uint32_t timediff = 0;
	if(action == START)
	{
		timex[id].instTime = *tm;
	}
	else if(action == END)
	{
		if (!(timex[id].instTime.DD == tm->DD ))
		{

			timediff = (tm->hh) + (24 - timex[id].instTime.hh);
		}
		else
		{
			timediff = tm->hh - timex[id].instTime.hh;
		}

		if((tm->mm - (timex[id].instTime.mm)) < 0 )
		{
			timediff --;
			timediff *= 60;
			timediff += tm->mm + (60 - timex[id].instTime.mm);
		}
		else
		{
			timediff *= 60;
			timediff += tm->mm - timex[id].instTime.mm;
		}
		return timediff;
	}
	return 0;
}
