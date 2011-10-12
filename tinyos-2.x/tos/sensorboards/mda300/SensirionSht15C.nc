
/**
 * SensirionSht15C is a top-level access component for the Sensirion
 * SHT15 model humidity and temperature sensor, available on the
 * mda300ca sensorboard. Because this component represents one physical
 * device, simultaneous calls to read temperature and humidity will be
 * arbitrated and executed in sequential order. 
 *
 * @author P Sowjanya <sowjanyap@cdac.in>
 * @author Phil Buonadonna <pbuonadonna@archrock.com>
 * @author Gilman Tolles <gtolle@archrock.com>
 * @version $Revision: 1.0
 */

generic configuration SensirionSht15C() {
  provides interface SplitControl;
  provides interface Read<uint16_t> as Temperature;
  provides interface Read<uint16_t> as Humidity;
}
implementation {
  components new SensirionSht15ReaderP();

  Temperature = SensirionSht15ReaderP.Temperature;
  Humidity = SensirionSht15ReaderP.Humidity;

  components HalSensirionSht15C;

  enum { TEMP_KEY = unique("Sht15.Resource") };
  enum { HUM_KEY = unique("Sht15.Resource") };

  SplitControl = HalSensirionSht15C;
  SensirionSht15ReaderP.TempResource -> HalSensirionSht15C.Resource[ TEMP_KEY ];
  SensirionSht15ReaderP.Sht15Temp -> HalSensirionSht15C.SensirionSht15[ TEMP_KEY ];
  SensirionSht15ReaderP.HumResource -> HalSensirionSht15C.Resource[ HUM_KEY ];
  SensirionSht15ReaderP.Sht15Hum -> HalSensirionSht15C.SensirionSht15[ HUM_KEY ];

}
