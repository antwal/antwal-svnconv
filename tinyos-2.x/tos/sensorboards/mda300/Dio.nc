/**
 * MDA300DigitalC is a top-level access component for the 
 * ADC channels available on the mda300ca sensorboard
 *
 * @author P Sowjanya <sowjanyap@cdac.in>
 * @version $Revision: 1.0
 */

interface Dio {
  command error_t read();
  command error_t high();
  command error_t low();
  command error_t Toggle();	
  command error_t setParam(uint8_t modeToSet);
  event void readDone(uint16_t data);
//  event void readDataOverflow();
}
