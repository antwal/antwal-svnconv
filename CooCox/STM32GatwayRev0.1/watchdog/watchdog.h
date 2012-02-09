#include "stdint.h"
/*
 * File : watchdog.h
 */

#define DOG_PERIODICITY 1000 //1000 milliseconds i.e 1second

/* Task States */
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


/* Two states that tells that task is registered or unregistered
 * If task is registered, watchdog will check the task execution
 * behavior
 */
typedef enum taskStatus{
	UNREGISTERED = 0,
	REGISTERED = 1
};


/*  structure associated with each task  used by the watchdog core to
 *  analyse the behaviour of the task
 */
typedef struct dogDebug{
	uint8_t status;			//task is registered or unregisterd
    uint8_t taskID;     	//ID of the task
    uint32_t periodicity;   //periodicity of task in milli seconds , 0 if aperiodic
    uint32_t exectime;      //worst case execution time of the task to complete one loop
    dogFlag state;         	//dogState of the task
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

/*
 * Public Functions decleration
 */

//initilize and register the dog debug structure for a given task
void WDG_initDebug(dogDebug *dptr , uint32_t taskID, uint32_t periodicity, uint32_t exectime);
//unregister the dogDebug structure
void WDG_unregister(dogDebug *dptr);
//set the state of the task
void WDG_setDebugState(dogDebug *dptr , dogFlag state);
//get the state of the task
dogFlag WDG_getDebugState(dogDebug *dptr);
//core function that performs the sanity check and feed the dog
void WDG_dogCheck( void );
//start the window watch dog timer
void WWGD_dogStart(void);
//start the independent watch dog timer
void IWGD_dogStart(void);
