/* 
 * The contents of this file are subject to the terms
 * of the Common Development and Distribution License
 * (the License). You may not use this file except in
 * compliance with the License.
 *
 * You can obtain a copy of the License at
 * http://www.opensource.org/licenses/cddl1.php
 * or in legal/LICENSE.txt
 *
 * See the License for the specific language governing
 * permission and limitations under the License.
 *
 * When distributing Covered Code, include this CDDL
 * Header Notice in each file and include the License 
 * File at legal/LICENSE.txt
 * 
 * Copyright (c) 2007-8 Michael Zoumboulakis, George Roussos
 * All Rights Reserved
 * *****************************************************
 * Birkbeck College, University of London
 * School of Computer Science and Information Systems
 * Malet Street, London WC1E 7HX, United Kingdom
 * http://dcs.bbk.ac.uk
 * ******************************************************
 */

#include <Timer.h>
#include "printf.h"

configuration SBT80TestAppC {
}
implementation {
	components MainC;
	components LedsC;
	components HplMsp430GeneralIOC;
	components SBT80TestC as App;
	components new TimerMilliC() as Timer0;
	
	//Each one corresponds to an ADC ch
	components new SBT80C() as Sensor0;
	components new SBT80C() as Sensor1;
	components new SBT80C() as Sensor2;
	components new SBT80C() as Sensor3;
	components new SBT80C() as Sensor6;
	components new SBT80C() as Sensor7;	

	components PrintfC;

	App.Boot 	 -> MainC;
	App.Leds 	 -> LedsC;
	App.Timer0 	 -> Timer0;
	
	//Each inst of Read interface corrspnds to an ADC ch
	App.ReadVL	 -> Sensor0.Read0;
	App.ReadMIC	 -> Sensor1.Read1;
	App.ReadIR	 -> Sensor2.Read2;
	App.ReadTEMP	 -> Sensor3.Read3;
	App.ReadACCMGx -> Sensor6.Read6;
	App.ReadACCMGy -> Sensor7.Read7;	

	App.PrintfControl -> PrintfC;
	App.PrintfFlush -> PrintfC;

	//Switch between Accelerometer and Magnetometer
	App.SBcontrol	-> HplMsp430GeneralIOC.Port23;
	App.SBswitch  -> HplMsp430GeneralIOC.Port26;
}
