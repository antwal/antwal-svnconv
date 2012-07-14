#include "powermgmnt.h"


#define MAX_PRW_LEVEL 6
#define MAX_MAP_FUNCTIONS MAX_PRW_LEVEL
#define POWER_TASK_NO 2 //Number of task that uses Power management framework

typedef powerState pstate;



typedef  void * (*SysPwrFuncPtrType)(void *);

typedef struct taskPwr{
	uint8_t status;		//tells if this is active or not(registered or not )
	uint8_t task_id;	//id of the task using the struct
	uint8_t switching;	//if switching is true allow automatic switching to be done
	SysPwrFuncPtrType pwrFunctionMap[MAX_MAP_FUNCTIONS];
	SysPwrFuncPtrType pwrExecFunction;
	SysPwrFuncPtrType pwrDefaultFunction;
}taskPwr;

//external variables/structure
extern taskPwr myTaskPwr[POWER_TASK_NO];


//run the algorithm for updating the system state not to be used or called by task
void pwrUpdateSwitchs( pstate pwr_state);

//Initilize the power mapping of functions to default
void pwrInit(taskPwr *ptr, uint8_t task_id);

//add mapping of the functions
void pwrAddMap(taskPwr *ptr, pstate state,SysPwrFuncPtrType fptr );

//add the default function
void pwrAddDefault(taskPwr *ptr,SysPwrFuncPtrType fptr);

//turn automatic switching on/off (1- On / 0 - off) by default switching is off
void pwrSwitch(taskPwr *ptr, uint8_t action);

//function that will be called by the task
void pwrExecFunction(taskPwr *ptr, void *arg);



