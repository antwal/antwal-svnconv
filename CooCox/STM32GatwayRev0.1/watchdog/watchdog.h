#include "stdint.h"

/*
 * File : watchdog.h
 */

/* task states */
typedef enum dogFlag
{
	UNKNOWN	= 0,			// State is made unknown by WatchDog
	WAIT,					// Waiting for WSN data or Upload time to come
	SAVE_DATA,				// Save WSN data in store.xml
	SAVE_DONE,				// Saving of WSN data done
	NTP_TIME,				// NTP time update going on
	UPLOADING,				// Uploading data to server
	MODEM_FREE,				// Modem is free now, uploading process is done
	APPEND,					// Append data to the alldata.xml

}dogFlag;

/* Error states of the task */

typedef struct dogDebug{
    uint8_t taskID;        //ID of the task
    uint32_t periodicity;   //periodicity of task in milli seconds , 0 if aperiodic
    uint32_t exectime;      //worst case execution time of the task to complete one loop
    dogFlag state;         //dogState of the task
    uint32_t counter;       //entity updated by watchdog task
}dogDebug;

/*
 * WatchDog configuration needed for task
 */

#ifndef DEBUG_TASK_NO
#define DEBUG_TASK_NO  2
#endif

#ifndef DOG_FEED
#define DOG_FEED 0xAAAA5555
#endif

#ifndef DOG_KILL
#define DOG_KILL 0x5555AAAA
#endif

dogDebug myDogDebug[DEBUG_TASK_NO];
dogFlag myFlag[DEBUG_TASK_NO];



/* global variable that tells that dog has to be fed . */

uint32_t feedDog ;


/*
 * Public Functions decleration
 */

void WDG_initDebug(dogDebug *dptr , uint32_t taskID, uint32_t periodicity, uint32_t exectime);
void WDG_setDebugState(dogDebug *dptr , dogFlag state);
dogFlag WDG_getDebugState(dogDebug *dptr);
void WDG_dogCheck( void );
void WWGD_dogStart(void);
void IWGD_dogStart(void);
