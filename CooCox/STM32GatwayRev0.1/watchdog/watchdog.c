#include <stdio.h>
#include "watchdog.h"
#include "stdint.h"
#include "string.h"
#include "stm32f10x.h"
#include "stm32_rtc.h"
#include "modem.h"
#include "stm32f10x_bkp.h"
#include "stm32f10x_rcc.h"
#include "debug.h"
#include "status.h"
#include "config.h"

/*
 * private functions definitions
 */

// return number of registered task for sanity check
uint8_t getRegisteredTask(void);

//save the status of the task causing a restart
void saveStateBackup(dogDebug *dptr);




// used in intiamte state
char buff[28];

// variable for signalling sms after reset
extern uint8_t Dog;

//debug structure for tasks
dogDebug myDogDebug[DEBUG_TASK_NO];


/**global variable that tells start analysis of registered task
 * if dogstatus is 0 : simply feed the dog without doing the sanity checks
 * if dogstatus is 1 : perform the sanity checks and then only feed the dog
 */
uint32_t dogStatus = 0;

/*
 * Private functions
 */

/*
 * returns number of registered task for watchdog sanity check
 * @param  None
 * @return number of registered tasks for watchdog sanity check
 */

uint8_t getRegisteredTask(void){
	uint8_t i = 0;
	uint8_t count = 0 ;
	dogDebug *dptr;

	for(i=0 ;i < DEBUG_TASK_NO ;i++ ){
		dptr = (dogDebug *)&myDogDebug[i];
		if(dptr->status == REGISTERED){
			count++;
		}
	}
	return count;

}

/*
 * Initilize the backup register to their initial value
 * @param  dogDebug *dptr
 * @return None
 */
void saveStateBackup(dogDebug *dptr){
	uint16_t bkpup;
	/* set the last bit of the backup register
	 * of each 8 bit depending on
	 * which task has caused the restart
	 */
	/* Enable PWR and BKP clocks */
	RCC->APB1ENR |= (RCC_APB1Periph_PWR | RCC_APB1Periph_BKP);
	/* Allow access to BKP Domain */
	*(vu32 *) CR_DBP_BB = (ul32)ENABLE;
	bkpup = BKP_ReadBackupRegister(BKP_DR2);

	//Task 2 UPLOAD;backup register no. 2 LSB 8 bits
	if(dptr->taskID == 2)
	{
		bkpup |= (uint8_t)(0x80);						// Set the 7 bit
		BKP_WriteBackupRegister(BKP_DR2, bkpup);
	}
	//Task 3 WSN;backup register no. 2 MSB 8 bits
	else if(dptr->taskID == 3)
	{
		bkpup |= 0x8000;
		BKP_WriteBackupRegister(BKP_DR2, bkpup);
	}
    /* Disallow access to BKP Domain */
    *(vu32 *) CR_DBP_BB = (ul32)DISABLE;

}

/*
 * For this library to work create a watch dog task that is called periodically
 * @100 milli seconds time out of the watchdog should be greater than 100m seconds
 *
 */


/*
 * This function is called by independent task for initilazation of dogDebug structure
 * @param  dogDebug *dptr
 * @param  taskID
 * @param  periodicity in milliseconds
 * @param  execution time in milliseconds
 * @return None
 */

void WDG_initDebug(dogDebug *dptr , uint32_t taskID , uint32_t periodicity, uint32_t exectime){
	dptr->status = REGISTERED;
    dptr->taskID =taskID;
    dptr->periodicity = periodicity;
    dptr->exectime = exectime;
    dptr->state = WAIT;
    dptr->counter = ((periodicity + exectime) / DOG_PERIODICITY) + 1;
    //allow the sanity checks to be done by watch dog
    dogStatus = 1;

}

/*
 * This function is called by independent task for unregistering dogDebug structure
 * @param  dogDebug *dptr
 * @return None
 */

void WDG_unregister(dogDebug *dptr){
	//unregister the current task
	dptr->status = UNREGISTERED;

	if(getRegisteredTask()== 0){
		//disallow all the sanity checks done by the dog if no task is register
		dogStatus = 0;
	}


}
/*
 * This function is used for changing the state of the task in debug structure
 * @param  dogDebug *dptr
 * @param  UNKNOWN , ALIVE OR ASLEEP
 * @return None
 */

void WDG_setTaskState(dogDebug *dptr , dogFlag state){
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
 * @param  dogDebug *dptr
 * @return  UNKNOWN , ALIVE OR ASLEEP
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
    static dogFlag flag = WAIT;


    for(count=0 ;count < DEBUG_TASK_NO;count++){
        //point to the first structure
        dptr = (dogDebug *)&myDogDebug[count];
        //only perform sanity check if task is registered
        if(dptr->status == REGISTERED){
        	//decrement the counter
        	if( dptr->counter > 0 ){
        		dptr->counter = dptr->counter - 1;
        	}

        	//if counter is zero perform sanity check
        	if( dptr->counter == 0 ){

        		if(dptr->state == UNKNOWN){
        			saveStateBackup(dptr);
        		}
        		//Extract  the flag
        		flag = flag && dptr->state;

        		//reload the counter
        		dptr->counter = ((dptr->periodicity + dptr->exectime) / DOG_PERIODICITY )+ 1 ;

        		debug(CONSOLE,"counter=%d, task=%d, state=%d\n\r",dptr->counter, dptr->taskID, dptr->state);        		//clear the state to UNKNOWN
        		dptr->state = UNKNOWN;
        	}
        }
    }
    if(flag != UNKNOWN){
    	//feed the dog
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
	/* Enable PWR and BKP clocks */
	RCC->APB1ENR |= (RCC_APB1Periph_PWR | RCC_APB1Periph_BKP);

	/* Allow access to BKP Domain */
	*(vu32 *) CR_DBP_BB = (ul32)ENABLE;

	// Taking out number of times reset took place
	sysstatus.restart = BKP_ReadBackupRegister(BKP_DR3);
	debug(CONSOLE,"STATUS: RESET=%d\n\r",sysstatus.restart);
	if(Dog == 1)
	{
		sysstatus.restart += 1;
		flag = BKP_ReadBackupRegister(BKP_DR2);
		sprintf(&buff[0], "Restart:WSN=%d;UP=%d:(",(flag >> 8),(flag & 0x00ff));
		smsSend(mdm, &sysconfdup.reg_phoneno[0],&buff[0]);
		smsSend(mdm, &sysconfdup.reg_phoneno[1],&buff[0]);
		Dog=0;
	}
	else
	{
		sysstatus.restart += 256;
		debug(LOG,"%s\n\r","External Reset");
	}
	// Storing number of resets
	BKP_WriteBackupRegister(BKP_DR3, sysstatus.restart);
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

/**
 * Configure and start the Independent watch dog timer
 */

void IWDG_dogStart(void){
	IWDG_Exp();
}




