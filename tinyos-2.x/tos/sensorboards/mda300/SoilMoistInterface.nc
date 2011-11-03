/**
*	This interface is for Soil Moisture Sensor
*	Whom to Blame for this code:
*       @author Abhishek Kumar Singh <sabhishek@cdac.in>
*       @version 0.1
*       @date 12:10:2011
*
**/


interface SoilMoistInterface {
	/*
	*	Selects which sensor to be sensed.
	*	Selecting does not mean Sensing has been initaited
	* 	@return SUCCESS if sensors are selected properly 
	*/
//	command error_t selectSensor();

	/**
	*	Starts reading the Sensor.
	*	@return SUCCESS if uart is requested successfully. 
	*/
	command error_t readSensor(uint8_t sensor);

	/**
	*	When data has been read genrates event
	*	@arg1 sensor Tells which sensor is under probe	
	*	@arg2 data Address to the data buffer: Vol, EC, Temp
	*/
	async event void readDone(uint8_t Sensor, uint16_t *val, error_t err);
	 
}

