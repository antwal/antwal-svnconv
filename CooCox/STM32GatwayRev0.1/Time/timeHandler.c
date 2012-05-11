#include "stm32_rtc.h"
#include "timevar.h"


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
