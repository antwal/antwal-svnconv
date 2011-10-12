/**
 * MDA300IBADCC is a top-level access component for the
 * ADC channels available on the mda300ca sensorboard
 *
 * @author P Sowjanya <sowjanyap@cdac.in>
 * @version $Revision: 1.0
 */

interface Switch {
  command error_t get();
  command error_t set(uint8_t position, uint8_t value);
  command error_t setAll(uint8_t value);

  event void getDone(uint8_t value);
  event void setDone(bool result);
  event void setAllDone(bool result);
}

