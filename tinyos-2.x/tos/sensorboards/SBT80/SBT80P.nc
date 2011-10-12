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

#include "Msp430Adc12.h"

/*
 Each ADC channel is configured individually. We sample each channel (ADC port)
 individually. Please note that there is an option for multi-channel sampling which
 we not use. The relative interface is in tos/chips/msp430/adc12/ and is called
 Msp430Adc12MultiChannel.
 Some Channels will work with 1.5V RefVolt - but others such as the Temperature diode
 will only accept 2.5V.

 Michael Zoumboulakis, Birkbeck College, University of London
 November 2007
*/

module SBT80P {
	provides interface DeviceMetadata;
	provides interface AdcConfigure<const msp430adc12_channel_config_t*> as A0;
	provides interface AdcConfigure<const msp430adc12_channel_config_t*> as A1;
	provides interface AdcConfigure<const msp430adc12_channel_config_t*> as A2;
	provides interface AdcConfigure<const msp430adc12_channel_config_t*> as A3;
	provides interface AdcConfigure<const msp430adc12_channel_config_t*> as A6;
	provides interface AdcConfigure<const msp430adc12_channel_config_t*> as A7;	
}

implementation {
	const msp430adc12_channel_config_t config_A0 = {
		inch:	INPUT_CHANNEL_A0, // 0->VL*, 1-> MIC*, 2->IR*, 3->TEMP, 6->ACC_x, 7-> ACC_y
		sref: REFERENCE_VREFplus_AVss,
		ref2_5v: REFVOLT_LEVEL_NONE,
		adc12ssel: SHT_SOURCE_ACLK,
		adc12div:	SHT_CLOCK_DIV_1,
		sht: SAMPLE_HOLD_4_CYCLES,
		sampcon_ssel: SAMPCON_SOURCE_SMCLK,
		sampcon_id: SAMPCON_CLOCK_DIV_1
		};
  
	const msp430adc12_channel_config_t config_A1 = {
		inch:	INPUT_CHANNEL_A1, // 0->VL*, 1-> MIC*, 2->IR*, 3->TEMP, 6->ACC_x, 7-> ACC_y
		sref: REFERENCE_VREFplus_AVss,
		ref2_5v: REFVOLT_LEVEL_2_5,
		adc12ssel: SHT_SOURCE_ACLK,
		adc12div:	SHT_CLOCK_DIV_1,
		sht: SAMPLE_HOLD_4_CYCLES,
		sampcon_ssel: SAMPCON_SOURCE_SMCLK,
		sampcon_id: SAMPCON_CLOCK_DIV_1
		};

const msp430adc12_channel_config_t config_A2 = {
		inch:	INPUT_CHANNEL_A2, // 0->VL*, 1-> MIC*, 2->IR*, 3->TEMP, 6->ACC_x, 7-> ACC_y
		sref: REFERENCE_VREFplus_AVss,
		ref2_5v: REFVOLT_LEVEL_2_5,
		adc12ssel: SHT_SOURCE_ACLK,
		adc12div:	SHT_CLOCK_DIV_1,
		sht: SAMPLE_HOLD_4_CYCLES,
		sampcon_ssel: SAMPCON_SOURCE_SMCLK,
		sampcon_id: SAMPCON_CLOCK_DIV_1
		};

const msp430adc12_channel_config_t config_A3 = {
		inch:	INPUT_CHANNEL_A3, // 0->VL*, 1-> MIC*, 2->IR*, 3->TEMP, 6->ACC_x, 7-> ACC_y
		sref: REFERENCE_AVcc_AVss,
		ref2_5v: REFVOLT_LEVEL_NONE,
		adc12ssel: SHT_SOURCE_ACLK,
		adc12div:	SHT_CLOCK_DIV_1,
		sht: SAMPLE_HOLD_4_CYCLES,
		sampcon_ssel: SAMPCON_SOURCE_SMCLK,
		sampcon_id: SAMPCON_CLOCK_DIV_1
		};

const msp430adc12_channel_config_t config_A6 = {
		inch:	INPUT_CHANNEL_A6, // 0->VL*, 1-> MIC*, 2->IR*, 3->TEMP, 6->ACC_x, 7-> ACC_y
		sref: REFERENCE_VREFplus_AVss,
		ref2_5v: REFVOLT_LEVEL_2_5,
		adc12ssel: SHT_SOURCE_ACLK,
		adc12div:	SHT_CLOCK_DIV_1,
		sht: SAMPLE_HOLD_4_CYCLES,
		sampcon_ssel: SAMPCON_SOURCE_SMCLK,
		sampcon_id: SAMPCON_CLOCK_DIV_1
		};

const msp430adc12_channel_config_t config_A7 = {
		inch:	INPUT_CHANNEL_A7, // 0->VL*, 1-> MIC*, 2->IR*, 3->TEMP, 6->ACC_x, 7-> ACC_y
		sref: REFERENCE_VREFplus_AVss,
		ref2_5v: REFVOLT_LEVEL_2_5,
		adc12ssel: SHT_SOURCE_ACLK,
		adc12div:	SHT_CLOCK_DIV_1,
		sht: SAMPLE_HOLD_4_CYCLES,
		sampcon_ssel: SAMPCON_SOURCE_SMCLK,
		sampcon_id: SAMPCON_CLOCK_DIV_1
		};

  async command const msp430adc12_channel_config_t* A0.getConfiguration() {
    return &config_A0;
  }

  async command const msp430adc12_channel_config_t* A1.getConfiguration() {
    return &config_A1;
  }

	async command const msp430adc12_channel_config_t* A2.getConfiguration() {
    return &config_A2;
  }

	async command const msp430adc12_channel_config_t* A3.getConfiguration() {
    return &config_A3;
  }

	async command const msp430adc12_channel_config_t* A6.getConfiguration() {
    return &config_A6;
  }

	async command const msp430adc12_channel_config_t* A7.getConfiguration() {
    return &config_A7;
  }

	command uint8_t DeviceMetadata.getSignificantBits() { return 12; }
}
