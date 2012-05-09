#include <stdio.h>
#include <stdint.h>
#include <stdarg.h>
#include "ff.h"
#include "diskio.h"
#include "coocox.h"
#include "powermgmnt.h"
#include "time.h"

#define LOG     1
#define CONSOLE 2
#define DBG 	1
uint32_t bw;
/*
 * To know the running task id tb will be used
 * tb.taskID
 */
extern P_OSTCB  TCBRunning;
extern FIL logger;
extern FRESULT rc;


#define dbg_printf(fmt,...)\
		do{\
			if(DBG == 1)\
			printf(fmt,__VA_ARGS__);\
		}\
		while(0)


#define  debug(var, fmt, ...)\
        do {\
        	Cur_Time(tm);\
        	sprintf(slog,"%d:%d:%d-%d:%d:%d %d%%:%d%%:%d%% %d::",tm->YYYY,tm->MM,tm->DD,tm->hh,tm->mm, tm->ss, charge.sol, charge.bat1,charge.bat2, TCBRunning->taskID);\
                switch(var){\
                        case LOG:\
                        f_open(&logger, "./root/log.txt", FA_WRITE|FA_READ);\
                        f_sync(&logger);\
						f_lseek(&logger, f_size(&logger));\
						rc = f_write(&logger, slog, strlen(slog),&bw);\
						f_sync(&logger);\
						if(DBG == 1)\
						printf("%s",slog);\
						if(DBG == 2)\
						printf("%s::",__func__);\
			            sprintf(slog, fmt, __VA_ARGS__);\
			            rc = f_write(&logger, slog, strlen(slog),&bw);\
						rc = f_close(&logger);\
						if(DBG == 1)\
                        printf("%s",slog);\
                        break;\
                        case CONSOLE:\
                        if(DBG == 1){\
                        printf("%s", slog);\
						if(DBG == 2)\
						printf("%s::",__func__);\
                        printf(fmt,__VA_ARGS__);\
                        }\
                        break;\
                        default:\
                        break;\
                        }\
           } while(0)


char slog[100];

