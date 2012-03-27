#include "debug.h"


void debugInit(void)
{
	rc = f_open(&logger, "./root/log.txt", FA_WRITE|FA_READ);
	//if (rc) die(rc);
	if( rc == FR_NO_FILE)
	{
		printf("Creating log.txt\n\r");
		rc = f_open(&logger, "./root/log.txt", FA_WRITE|FA_READ| FA_CREATE_ALWAYS);
		if (rc) die(rc);
		f_sync(&logger);
	}
	f_sync(&logger);
	f_close(&logger);

}
