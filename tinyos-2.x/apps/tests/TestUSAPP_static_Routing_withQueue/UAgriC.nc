
includes data;                                      /* Includes Data Packet structures & Macro definitions 	*/
configuration UAgriC {

}

implementation
{
	components MainC,			   /* TinyOS Main Component					 */
		   LedsC,		           /* Leds Component						 */
		   UAgriM,			   /* U-Agri Application(Sensing & Data Packaging) Component	 */
		   new SensirionSht11C(),          /* Sensirion (Temperature & RHumidity) Sensor Driver Component*/
		   StaticRouter as MultiHopM,      /* Static Routing						 */ 
		   new TimerMilliC() as MyTimerC;	

	/* Init and Boot Interfaces
         */
	MainC.SoftwareInit -> UAgriM.Init;
        MainC.SoftwareInit -> MultiHopM.Init; 
	UAgriM.Boot -> MainC.Boot;

	UAgriM.Leds -> LedsC;

	UAgriM.SamplingTimer -> MyTimerC;
	
	components new SBT80C()   as TEMP;	   /* HTF3223 Temperature Sensor 				*/ 
	components new SBT80C()   as LEAF;	   /* Leaf Wetness Sensor        				*/
	components new VoltageC() as EXT;	   /* Leaf Wetness Sensor        				*/ 

	/*
          components new SBT80C(); 
	  components new AdcDmaC() as EXT;	// Excitation provided to the sensors (VDD)
        */
 
	UAgriM.Temperature -> TEMP.AdcRead0;
	UAgriM.LeafWetness -> LEAF.AdcRead1;
	UAgriM.Excitation ->  EXT.Read;

	UAgriM.RHSensorTemp  -> SensirionSht11C.Temperature;
	UAgriM.RHSensorHum   -> SensirionSht11C.Humidity;

        /* StaticRouting Configuration
         */
 	UAgriM.SubPacket    -> MultiHopM.Packet;	
	UAgriM.RadioControl -> MultiHopM;
        UAgriM.Radio 	    -> MultiHopM.StaticSend;      

}

