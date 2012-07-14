/**
 * MDA300RelayC is a top-level access component for the 
 * Relay Control channels available on the mda300ca sensorboard
 *
 * @author P Sowjanya <sowjanyap@cdac.in>
 * @version $Revision: 1.0
 */

configuration MDA300RelayC
{
  provides {
  interface SplitControl as RelayControl;
  interface Relay as relay_normally_closed;
  interface Relay as relay_normally_open;
  }
}
implementation
{
  components MDA300RelayP,MDA300DigitalC;

  RelayControl = MDA300RelayP.RelayControl;
  relay_normally_closed = MDA300RelayP.relay_normally_closed;
  relay_normally_open = MDA300RelayP.relay_normally_open;

  MDA300RelayP.DioControl -> MDA300DigitalC.SplitControl;  
  MDA300RelayP.Dio6 -> MDA300DigitalC.Dio[6];
  MDA300RelayP.Dio7 -> MDA300DigitalC.Dio[7];

}
