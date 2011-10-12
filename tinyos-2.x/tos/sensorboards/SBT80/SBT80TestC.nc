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
module SBT80TestC {
	uses {
				interface Boot;
				interface Leds;
				interface Timer<TMilli> as Timer0;
	
				interface Read<uint16_t> as ReadVL;
				interface Read<uint16_t> as ReadMIC;
				interface Read<uint16_t> as ReadIR;
				interface Read<uint16_t> as ReadTEMP;
				interface Read<uint16_t> as ReadACCMGx;
				interface Read<uint16_t> as ReadACCMGy;

				interface HplMsp430GeneralIO as SBcontrol;
				interface HplMsp430GeneralIO as SBswitch;
	
				interface SplitControl as PrintfControl;  
				interface PrintfFlush;
				}
}
implementation {
	uint16_t couter = 0;
	uint16_t vl = 0; //visual light
	uint16_t mic = 0; //microphone
	uint16_t ir = 0; //infrared
	uint16_t temp = 0; //temperature
	uint16_t accmgx = 0; //Acc or MG x
	uint16_t accmgy = 0; //Acc or MG y
	
	bool ACC_enabled = 1;
	
	task void switchTask() {
		if (ACC_enabled)
			{ call SBswitch.clr(); }   //set low for acc
		else
			{ call SBswitch.set(); } //set high for mag
			call SBswitch.makeOutput();
			call SBswitch.selectIOFunc();		
		}

	event void Boot.booted() 
		{
		call Timer0.startPeriodic( 1000 );
		call PrintfControl.start();
		call SBcontrol.clr(); //set low
		call SBcontrol.makeOutput();
		call SBcontrol.selectIOFunc();		
		post switchTask();
		}
		
	event void PrintfControl.startDone(error_t error)
	{ 
	printf("booted...\n");
	call PrintfFlush.flush();
	}

	event void PrintfControl.stopDone(error_t error)
		{ }

	event void PrintfFlush.flushDone(error_t error)
		{ }
	
	event void Timer0.fired() {
		if ((call ReadVL.read() == SUCCESS) 			&& 
				(call ReadMIC.read() == SUCCESS)	&&
				(call ReadIR.read() == SUCCESS)		&&
				(call ReadTEMP.read() == SUCCESS)	&&
				(call ReadACCMGx.read() == SUCCESS)	&&
				(call ReadACCMGy.read()	== SUCCESS))
			{ 
				printf("VL: %d, MIC: %d, IR: %d, T: %d, x: %d,"\
  						 " y: %d\n", vl, mic, ir, temp, accmgx, accmgy);
				call Leds.led1Toggle(); 
				call PrintfFlush.flush();
			}
		}	

	event void ReadVL.readDone(error_t result, uint16_t data)
		{
		if (result == SUCCESS)
			vl = data;
		}

	event void ReadMIC.readDone(error_t result, uint16_t data)
		{
		if (result == SUCCESS)
			mic = data;
		}
	
	event void ReadIR.readDone(error_t result, uint16_t data)
		{
		if (result == SUCCESS)
			ir = data;
		}

	event void ReadTEMP.readDone(error_t result, uint16_t data)
		{
		if (result == SUCCESS)
			temp = data;
		}

	event void ReadACCMGx.readDone(error_t result, uint16_t data)
		{
		if (result == SUCCESS)
			accmgx = data;
		}

	event void ReadACCMGy.readDone(error_t result, uint16_t data)
		{
		if (result == SUCCESS)
			accmgy = data;
		}
}

