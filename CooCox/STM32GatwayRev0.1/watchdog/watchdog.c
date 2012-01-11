#include "watchdog.h"
#include "stdint.h"

/*
 * For this library to work create a watch dog task that is called periodically
 * @100 milli seconds time out of the watchdog should be greater than 100m seconds
 *
 */


/*
 * All the functions mentioned here should be called in critical section
 *
 */

/*
 * This function is called by independent task for initilazation of dogDebug structure
 * param : pointer to the debug structure , periodicity of task in milliseconds ,
 *          ececution time of the task in milliseconds
 */

void WWDG_initDebug(dogDebug *dptr , uint32_t taskID, uint32_t periodicity, uint32_t exectime){

    dptr->taskID =taskID;
    dptr->periodicity = periodicity;
    dptr->exectime = exectime;
    dptr->state = ALIVE;
    dptr->counter = ((periodicity + exectime) / 100) + 1;

}

/*
 * This function is used for changing the state of the task in debug structure
 * param : can be either {UNKNOWN , ALIVE , ASLEEP}
 * this function should be called in critical section
 */

void WWDG_setDebugState(dogDebug *dptr , dogFlag state){
    dptr->state = state;
}

/*
 * This function is used for reading the current  state of the task in debug structure
 * param : can be either {UNKNOWN , ALIVE , ASLEEP}
 * this function should be called in critical section
 */
dogFlag WWDG_getDebugState(dogDebug *dptr){
    return dptr->state;
}



/*
 * This function is called every time the watchdog monitoring task executes
 * periodicity of this task is 100 m second currently
 */


void WWDG_dogCheck( void ){
    uint8_t count = 0 ;
    dogDebug *dptr;
    dogFlag flag = ALIVE;

    for(count=0 ;count < DEBUG_TASK_NO;count++){
        //point to the first structure
        dptr = (dogDebug *)&myDogDebug[count];

    	//reflect the state in the global flags
    	myFlag[count] = dptr->state;

        //decrement the counter
        if( dptr->counter > 0 ){
        	dptr->counter = dptr->counter - 1;
        }
        //if counter is zero perform sanity check
        if( dptr->counter == 0 ){

            //Extract  the flag
            flag &= dptr->state;
            //reload the counter
           	dptr->counter = ((dptr->periodicity + dptr->exectime) / 100 )+ 1 ;

            //clear the state to UNKNOWN
            dptr->state = UNKNOWN;
        }
    }
    if(flag == UNKNOWN){
    		//clear the flag
            feedDog = DOG_KILL;
    }


}

/*
 * This function configure the watchdog
 * configure the clock for window watchdog
 * configures the watchdog timeout
 * configures the window for watchdog
 * configures some led
 * configures watchdog interrupt
 */
void WWDG_dogStart(void){
	WWDG_Exp();

}
