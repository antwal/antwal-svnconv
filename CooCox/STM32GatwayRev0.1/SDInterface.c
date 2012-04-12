/*-----------------------------------------------------------------------*/
/*					Function which checks SD card				 */
/*-----------------------------------------------------------------------*/

#include "ff.h"
#include <CoOS.h>
#include <stdio.h>
#include <string.h>
#include "diskio.h"
#include "debug.h"
#include "exti.h"
#include "cox_exti.h"

extern uint8_t chk[2];
extern FRESULT rc;
extern MSD_Dev *sd;

uint8_t SDCheck(void);

uint8_t event = COX_EXTI_EDGE_RISING;
void exti_handler(uint16_t pin)
{
	COX_PIO_Dev SD = COX_PIN(2,10);

	if(event == COX_EXTI_EDGE_RISING )			// when sd card is removed
	{
		event = COX_EXTI_EDGE_FALLING;
		pi_exti.Event(SD, event);
		debug(CONSOLE,"%s\n\r","SD removed");
		chk[0] = SDCheck();
	}
	else if (event == COX_EXTI_EDGE_FALLING)		// when sd card is inserted
	{
		event = COX_EXTI_EDGE_RISING;
		pi_exti.Event(SD, event);
		chk[0] = SDCheck();
		debug(CONSOLE,"%s%d\n\r","SD inserted=",chk[0]);
	}
}

void EXTIenable(void)
{
	COX_PIO_Dev SD = COX_PIN(2,10);
	pi_exti.Init(SD);
	pi_exti.Event(SD, event);
	pi_exti.Handler(exti_handler);

}


uint8_t SDCheck(void)
{
	uint8_t ret= 1;
	MSD_Init(sd);					// mmc_driver.c
	ret = f_open(&logger, "./root/log.txt", FA_WRITE|FA_READ);
	if (ret) die(ret);
	if(ret == FR_NO_PATH)
	{
		debug(CONSOLE,"%s\n\r","Setting up SD");
		f_mkdir("root");
		ret = f_open(&logger, "./root/log.txt", FA_WRITE|FA_READ|FA_CREATE_ALWAYS);
	}
	else
	if( ret == FR_NO_FILE)
	{
		debug(CONSOLE,"%s\n\r","Creating log.txt");
		ret = f_open(&logger, "./root/log.txt", FA_WRITE|FA_READ| FA_CREATE_ALWAYS);
		if (ret) die(ret);
		f_sync(&logger);
	}
	else
	if(ret != FR_OK)
	{
		debug(LOG,"%s\n\r","Problem in initializing SD");
	}

	f_sync(&logger);
	f_close(&logger);
	return ret;
}



