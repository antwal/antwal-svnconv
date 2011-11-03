/**
*	Whom to Blame for this code:
*       @author Abhishek Kumar Singh <sabhishek@cdac.in>
*       @version 0.1
*       @date 12:10:2011
*/


configuration SoilMoistC {
	provides {
	interface Init as SoilInit;
	interface SplitControl as SoilSplitControl;
	interface SoilMoistInterface;
	}
}

implementation {
	components Atm128Uart0C as Uart0, SoilMoistLogicP as SoilM;
	
	SoilM.Uart0Ctrl -> Uart0.StdControl;
	SoilM.Uart0Stream -> Uart0.UartStream;
	SoilM.Uart0Byte	 -> Uart0.UartByte;

	components SoilBusC as Sensor, HplAtm128GeneralIOC as Pins;
	SoilM.SoilS1	 -> Sensor.SoilS1; 
	SoilM.SoilS2	 -> Sensor.SoilS2; 
	SoilM.SoilS3	 -> Sensor.SoilS3; 
	SoilM.SoilS4	 -> Sensor.SoilS4; 
	SoilM.SoilSelect -> Sensor.SoilSelect;
	SoilM.Rx0	 -> Pins.PortE1;			// This will be used for the sensors

	SoilInit = SoilM;
	SoilSplitControl = SoilM;
	SoilMoistInterface = SoilM;
}
