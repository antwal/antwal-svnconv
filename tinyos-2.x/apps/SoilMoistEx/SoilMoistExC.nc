/**
*
*/

#include "printf.h"

module SoilMoistExC {
	uses{
		interface Boot;
		interface Init as SoilInit;
		interface SplitControl as SoilSplitControl;
		interface SoilMoistInterface as SoilS1;
		interface Leds;
	}

}

implementation{
	
	event void Boot.booted(){
		printf("Booted\n");
		printfflush();
		call Leds.led0Toggle();
		call SoilInit.init();
		call SoilSplitControl.start();
	}
	
	event void SoilSplitControl.startDone(error_t err) {
		printf("Splitcontrol Done\n");
		printfflush();
		call SoilS1.readSensor(1);
	}
	
	async event void SoilS1.readDone(uint8_t sensor, uint16_t *buf, error_t){
		printf("readone\n");
		printfflush();
	}

	event void SoilSplitControl.stopDone(error_t err) {
		printf("Stopdone\n");
		printfflush();
	}

}
