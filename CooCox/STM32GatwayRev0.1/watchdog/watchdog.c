#include "watchdog.h"
#include "stdint.h"
#include "stm32f10x.h"
#include "stm32_rtc.h"
#include "modem.h"
#include "stm32f10x_bkp.h"

// used in intiamte state
char buff[28];
extern uint8_t Dog;
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

void WDG_initDebug(dogDebug *dptr , uint32_t taskID, uint32_t periodicity, uint32_t exectime){

    dptr->taskID =taskID;
    dptr->periodicity = periodicity;
    dptr->exectime = exectime;
    dptr->state = WAIT;
    dptr->counter = ((periodicity + exectime) / 100) + 1;

}

/*
 * This function is used for changing the state of the task in debug structure
 * param : can be either {UNKNOWN , ALIVE , ASLEEP}
 * this function should be called in critical section
 */

void setTaskState(dogDebug *dptr , dogFlag state){
    uint16_t bkpup;
    dptr->state = state;
	/* Enable PWR and BKP clocks */
	RCC->APB1ENR |= (RCC_APB1Periph_PWR | RCC_APB1Periph_BKP);

	/* Allow access to BKP Domain */
	*(vu32 *) CR_DBP_BB = (ul32)ENABLE;

	bkpup = BKP_ReadBackupRegister(BKP_DR2);

	// Task 2 UPLOAD;backup register no. 2 LSB 8 bits
	if(dptr->taskID == 2)
	{
		bkpup &= 0xFF00;
		bkpup |= (uint8_t)state;
		BKP_WriteBackupRegister(BKP_DR2, bkpup);
	}
	// Task 3 WSN;backup register no. 2 MSB 8 bits
	else if(dptr->taskID == 3)
	{
		bkpup &= 0x00FF;
		bkpup |= (state << 8);
		BKP_WriteBackupRegister(BKP_DR2, bkpup);
	}
	/* Disallow access to BKP Domain */
	*(vu32 *) CR_DBP_BB = (ul32)DISABLE;

}

/*
 * This function is used for reading the current  state of the task in debug structure
 * param : can be either {UNKNOWN , ALIVE , ASLEEP}
 * this function should be called in critical section
 */
dogFlag WDG_getDebugState(dogDebug *dptr){
    return dptr->state;
}



/*
 * This function is called every time the watchdog monitoring task executes
 * periodicity of this task is 100 m second currently
 */


void WDG_dogCheck( void ){
    uint8_t count = 0 ;
    dogDebug *dptr;
    dogFlag flag = WAIT;
    uint16_t bkpup;

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

            /* set the last bit of the backup register
             * of each 8 bit depending on
             * which task has caused the restart
             */

        	/* Enable PWR and BKP clocks */
        	RCC->APB1ENR |= (RCC_APB1Periph_PWR | RCC_APB1Periph_BKP);

        	/* Allow access to BKP Domain */
        	*(vu32 *) CR_DBP_BB = (ul32)ENABLE;

        	bkpup = BKP_ReadBackupRegister(BKP_DR2);

        	// Task 2 UPLOAD;backup register no. 2 LSB 8 bits
        	if(dptr->taskID == 2)
        	{
        		bkpup |= (uint8_t)(0x80);						// Set the 7 bit
        		BKP_WriteBackupRegister(BKP_DR2, bkpup);
        	}
        	// Task 3 WSN;backup register no. 2 MSB 8 bits
        	else if(dptr->taskID == 3)
        	{
        		bkpup |= 0x8000;
        		BKP_WriteBackupRegister(BKP_DR2, bkpup);
        	}
        	/* Disallow access to BKP Domain */
        	*(vu32 *) CR_DBP_BB = (ul32)DISABLE;

        	//clear the flag
        	feedDog = DOG_KILL;
    }
    else {
    	/*feed the dog **/
    	IWDG_ReloadCounter();
    }


}


/**
 * Function that sends sms if the reset was due to watchdog
 */
uint8_t intimateState(mdmIface *mdm)
{
	uint16_t flag = 0;
	//char phno1[] = ;
	//char phno2[] = ;
	if(Dog == 1)
	{
		/* Enable PWR and BKP clocks */
		RCC->APB1ENR |= (RCC_APB1Periph_PWR | RCC_APB1Periph_BKP);

		/* Allow access to BKP Domain */
		*(vu32 *) CR_DBP_BB = (ul32)ENABLE;

		flag = BKP_ReadBackupRegister(BKP_DR2);
		sprintf(&buff[0], "Restart:WSN=%d;UP=%d:(",(flag >> 8),(flag & 0x00ff));
		smsSend(mdm, "919848969645",&buff[0]);
		smsSend(mdm, "918978517460" ,&buff[0]);
		Dog=0;
	}
	// Reset the value
	BKP_WriteBackupRegister(BKP_DR2, 0x00);
	return 0;

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


void IWDG_dogStart(void){
	IWDG_Exp();
}




