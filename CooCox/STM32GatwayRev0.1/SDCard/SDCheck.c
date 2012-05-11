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


extern FRESULT rc;
extern MSD_Dev *sd;

uint8_t SDCheck(void);
void exti_handler(uint16_t pin);

void EXTIenable(void)
{
	COX_PIO_Dev SD = COX_PIN(2,10);
	pi_exti.Init(SD);
	pi_exti.Event(SD, COX_EXTI_EDGE_RISING);
	pi_exti.Handler(exti_handler);

}

uint8_t SDCheck(void)
{
	uint8_t ret= 1;
	MSD_Init(sd);					// mmc_driver.c
	ret = f_open(&logger, "./root/log.txt", FA_READ);
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
	if(ret == FR_DISK_ERR)
	{
		debug(CONSOLE,"%s\n\r","Going to format SD");
	    f_mkfs(0, 0, 0);
	    f_mount(0, 0);
	}else
	if(ret != FR_OK)
	{
		debug(CONSOLE,"%s%d\n\r","Problem in initializing SD=",ret);
	}
	f_sync(&logger);
	f_close(&logger);
	return ret;
}



