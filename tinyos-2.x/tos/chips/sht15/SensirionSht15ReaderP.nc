
/**
 * SensirionSht15ReaderP transforms the HAL-level SensirionSht15
 * interface into a pair of SID Read interfaces, one for the
 * temperature sensor and one for the humidity sensor. It acquires the
 * underlying resource before executing each read, enabling
 * arbitrated access.
 *
 * @author P Sowjanya <sowjanyap@cdac.in>
 * @author Gilman Tolle <gtolle@archrock.com>
 * @version $Revision: 1.0 $
 */

#include <SensirionSht15.h>

generic module SensirionSht15ReaderP() {
  provides interface DeviceMetadata as TemperatureMetadata;
  provides interface Read<uint16_t> as Temperature;
  provides interface DeviceMetadata as HumidityMetadata;
  provides interface Read<uint16_t> as Humidity;
  
  uses interface Resource as TempResource;
  uses interface Resource as HumResource;
  uses interface SensirionSht15 as Sht15Temp;
  uses interface SensirionSht15 as Sht15Hum;
}
implementation {

  command uint8_t TemperatureMetadata.getSignificantBits() { return SHT15_TEMPERATURE_BITS; }

  command error_t Temperature.read() {
    call TempResource.request();
    return SUCCESS;
  }

  event void TempResource.granted() {
    error_t result;
    if ((result = call Sht15Temp.measureTemperature()) != SUCCESS) {
      call TempResource.release();
      signal Temperature.readDone( result, 0 );
    }
  }

  event void Sht15Temp.measureTemperatureDone( error_t result, uint16_t val ) {
    call TempResource.release();
    signal Temperature.readDone( result, val );
  }

  command uint8_t HumidityMetadata.getSignificantBits() { return SHT15_HUMIDITY_BITS; }

  command error_t Humidity.read() {
    call HumResource.request();
    return SUCCESS;
  }

  event void HumResource.granted() {
    error_t result;
    if ((result = call Sht15Hum.measureHumidity()) != SUCCESS) {
      call HumResource.release();
      signal Humidity.readDone( result, 0 );
    }
  }

  event void Sht15Hum.measureHumidityDone( error_t result, uint16_t val ) {
    call HumResource.release();
    signal Humidity.readDone( result, val );
  }

  event void Sht15Temp.resetDone( error_t result ) { }
  event void Sht15Temp.measureHumidityDone( error_t result, uint16_t val ) { }

  event void Sht15Hum.resetDone( error_t result ) { }
  event void Sht15Hum.measureTemperatureDone( error_t result, uint16_t val ) { }

  default event void Temperature.readDone( error_t result, uint16_t val ) { }
  default event void Humidity.readDone( error_t result, uint16_t val ) { }
}
