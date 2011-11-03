/*
 * 	This uses the ADC pins of the atm1281 controller 
 * 	as General IO pins, Which selsects the Soil
 *	Sensors  Whomto Blame for this code:
 *       @author Abhishek Kumar Singh <sabhishek@cdac.in>
 *       @version 0.1
 *       @date 12:10:2011
*/

configuration SoilBusC {
	provides {
		interface GeneralIO as SoilS1;
		interface GeneralIO as SoilS2;
		interface GeneralIO as SoilS3;
		interface GeneralIO as SoilS4;
		interface GeneralIO as SoilSelect;
	}
}

implementation {
	components HplAtm128GeneralIOC as Pins;

	SoilS1 = Pins.PortF1;
	SoilS2 = Pins.PortF2;
	SoilS3 = Pins.PortF3;
	SoilS4 = Pins.PortF4;

	components MicaBusC as Select;
	SoilSelect = Select.PW0;
}
