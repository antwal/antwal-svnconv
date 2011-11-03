/**
*
*/

#include "printf.h"

configuration SoilMoistExAppC {
}

implementation{
	components MainC, SoilMoistC, SoilMoistExC, LedsC;
	
	SoilMoistExC.Boot -> MainC;
	SoilMoistExC.SoilInit -> SoilMoistC.SoilInit;
	SoilMoistExC.SoilSplitControl -> SoilMoistC.SoilSplitControl;
	SoilMoistExC.Leds -> LedsC;
	SoilMoistExC.SoilS1 -> SoilMoistC.SoilMoistInterface;
}
