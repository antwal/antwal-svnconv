#include "power.h"

//instances of power structure for the tasks
taskPwr myTaskPwr[POWER_TASK_NO];


//run the algorithm for updating the system state
void pwrUpdateSwitchs( pstate pwr_state){
	uint8_t i ;
	taskPwr *ptr;

	//Once the sys_pwr_state is updated switch all the exec function of the task
	for(i=0;i<POWER_TASK_NO; i++){
		ptr = &myTaskPwr[i];
		if(ptr->status && ptr->switching ){
			ptr->pwrExecFunction = ptr->pwrFunctionMap[pwr_state];
		}

	}

}

//Initilize the power mapping of functions to default
void pwrInit(taskPwr *ptr, uint8_t task_id){
	uint8_t i ;
	//activate the structure
	ptr->status = 1;
	//default switching is on
	ptr->switching = 1;
	ptr->task_id = task_id;
	for (i=0;i<MAX_MAP_FUNCTIONS; i++){
		ptr->pwrFunctionMap[i]=0;
	}
	ptr->pwrExecFunction=0;
	ptr->pwrDefaultFunction=0;
}

//add mapping of the functions
void pwrAddMap(taskPwr *ptr, pstate state,SysPwrFuncPtrType fptr ){
	if(ptr->status){
		ptr->pwrFunctionMap[state]= fptr;
	}
}

void pwrAddDefault(taskPwr *ptr,SysPwrFuncPtrType fptr){
	if(ptr->status){
			ptr->pwrDefaultFunction= fptr;
			//initially the default function pointer is also the execution function
			ptr->pwrExecFunction= fptr;

	}

}

//turn automatic switching on/off (1- On / 0 - off) by default switching is off
void pwrSwitch(taskPwr *ptr, uint8_t action){
	if(ptr->status ){
		ptr->switching  = action ;
		//always revert back to default functionality when ever we switch the state
		ptr->pwrExecFunction = ptr->pwrDefaultFunction;
	}

}

//function that will be called by the task
void pwrExecFunction(taskPwr *ptr, void *arg){

	if(ptr->status && ptr->switching){
		if(ptr->pwrExecFunction){
			ptr->pwrExecFunction(arg);
		}
		return;
	}
	else{
		if(ptr->status && ptr->pwrDefaultFunction){
					ptr->pwrDefaultFunction(arg);
		}
	}
}
