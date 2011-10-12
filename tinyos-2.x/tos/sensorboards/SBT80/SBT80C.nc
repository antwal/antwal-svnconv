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

/*
 We provide interfaces Read and ReadStream for each
 ADC channel.

 Michael Zoumboulakis, Birkbeck College, University of London
 November 2007
*/

generic configuration SBT80C() {
	provides {
		interface DeviceMetadata;

		interface Read<uint16_t> as AdcRead0;
	 	interface Read<uint16_t> as AdcRead1;
		interface Read<uint16_t> as Read2;
		interface Read<uint16_t> as Read3;
		interface Read<uint16_t> as Read6;
		interface Read<uint16_t> as Read7;

		interface ReadStream<uint16_t> as ReadStream0;
		interface ReadStream<uint16_t> as ReadStream1;
		interface ReadStream<uint16_t> as ReadStream2;
		interface ReadStream<uint16_t> as ReadStream3;
		interface ReadStream<uint16_t> as ReadStream6;
		interface ReadStream<uint16_t> as ReadStream7;	
		}
}
implementation {
  //----------------Read------------------
	components new AdcReadClientC() as AdcR0;
	components new AdcReadClientC() as AdcR1;
	components new AdcReadClientC() as AdcR2;
	components new AdcReadClientC() as AdcR3;
	components new AdcReadClientC() as AdcR6;
	components new AdcReadClientC() as AdcR7;	
  
	AdcRead0 = AdcR0;
	AdcRead1 = AdcR1;
	Read2 = AdcR2;
	Read3 = AdcR3;
	Read6 = AdcR6;
	Read7 = AdcR7;

	AdcR0.AdcConfigure -> SBT80P.A0;
	AdcR1.AdcConfigure -> SBT80P.A1;
	AdcR2.AdcConfigure -> SBT80P.A2;
	AdcR3.AdcConfigure -> SBT80P.A3;
	AdcR6.AdcConfigure -> SBT80P.A6;
	AdcR7.AdcConfigure -> SBT80P.A7;
	
	//------------------Read Stream------------------------
	components new AdcReadStreamClientC() as AdcReadStream0;
	components new AdcReadStreamClientC() as AdcReadStream1;
	components new AdcReadStreamClientC() as AdcReadStream2;
	components new AdcReadStreamClientC() as AdcReadStream3;
	components new AdcReadStreamClientC() as AdcReadStream6;
	components new AdcReadStreamClientC() as AdcReadStream7;	
  	ReadStream0 = AdcReadStream0;
	ReadStream1 = AdcReadStream1;
	ReadStream2 = AdcReadStream2;
	ReadStream3 = AdcReadStream3;
	ReadStream6 = AdcReadStream6;
	ReadStream7 = AdcReadStream7;  	
  
        AdcReadStream0.AdcConfigure -> SBT80P.A0;
	AdcReadStream1.AdcConfigure -> SBT80P.A1;
	AdcReadStream2.AdcConfigure -> SBT80P.A2;
	AdcReadStream3.AdcConfigure -> SBT80P.A3;
	AdcReadStream6.AdcConfigure -> SBT80P.A6;
	AdcReadStream7.AdcConfigure -> SBT80P.A7;

	components SBT80P;
  DeviceMetadata = SBT80P;
}
