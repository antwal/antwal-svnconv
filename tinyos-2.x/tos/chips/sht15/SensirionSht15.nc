
/**
 * SensirionSht15 is the rich interface to the Sensirion SHT15
 * temperature/humidity sensor. 
 *
 * @author P Sowjanya <sowjanyap@cdac.in>
 * @author Gilman Tolle <gtolle@archrock.com>
 * @version $Revision: 1.4 $
 */

interface SensirionSht15 {

  /**
   * Resets the sensor.
   *
   * @return SUCCESS if the sensor will be reset
   */
  command error_t reset();

  /**
   * Signals that the sensor has been reset.
   *
   * @param result SUCCESS if the reset succeeded
   */
  event void resetDone( error_t result );

  /**
   * Starts a temperature measurement.
   *
   * @return SUCCESS if the measurement will be made
   */
  command error_t measureTemperature();

  /**
   * Presents the result of a temperature measurement.
   *
   * @param result SUCCESS if the measurement was successful
   * @param val the temperature reading
   */
  event void measureTemperatureDone( error_t result, uint16_t val );

  /**
   * Starts a humidity measurement.
   *
   * @return SUCCESS if the measurement will be made
   */  
  command error_t measureHumidity();

  /**
   * Presents the result of a humidity measurement.
   *
   * @param result SUCCESS if the measurement was successful
   * @param val the humidity reading
   */
  event void measureHumidityDone( error_t result, uint16_t val );

  /**
   * Reads the current contents of the SHT15 status and control
   * register. See the datasheet for interpretation of this register.
   *
   * @return SUCCESS if the read will be performed
   */
  //command error_t readStatusReg();

  /**
   * Presents the value of the status register.
   *
   * @param result SUCCESS if the read succeeded
   * @param val the value of the register
   */
  //event void readStatusRegDone( error_t result, uint8_t val );

  /**
   * Writes a new value to the SHT15 status and control register.
   *
   * @param val the new value to be written
   *
   * @return SUCCESS if the write will be performed
   */
  //command error_t writeStatusReg( uint8_t val );

  /**
   * Signals the completion of the status register write.
   *
   * @param result SUCCESS if the write was successful
   */
  //event void writeStatusRegDone( error_t result );
}
