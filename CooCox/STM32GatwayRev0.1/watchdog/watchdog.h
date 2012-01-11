#include "stdint.h"

/*
 * File : watchdog.h
 */

typedef enum dogFlag{
    UNKNOWN=0,
    ALIVE,
    ASLEEP,
    UPLOADING,
    APPENDING
}dogFlag;


typedef struct dogDebug{
    uint32_t taskID;        //ID of the task
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

void WWDG_initDebug(dogDebug *dptr , uint32_t taskID, uint32_t periodicity, uint32_t exectime);
void WWDG_setDebugState(dogDebug *dptr , dogFlag state);
dogFlag WWDG_getDebugState(dogDebug *dptr);
void WWDG_dogCheck( void );
void WWGD_dogStart(void);

