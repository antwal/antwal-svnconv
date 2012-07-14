/**
 * MDA300IBADCC is a top-level access component for the 
 * ADC channels available on the mda300ca sensorboard
 *
 * @author P Sowjanya <sowjanyap@cdac.in>
 * @version $Revision: 1.0
 */

configuration MDA300IBADCSwitchC
{
  provides {
    interface SplitControl as SwitchControl;
    interface Switch;
  }
}
implementation
{
  components new Atm128I2CMasterC() as I2C;
 
  components MDA300IBADCSwitchP;
  Switch =  MDA300IBADCSwitchP;
  SwitchControl =  MDA300IBADCSwitchP;
  MDA300IBADCSwitchP.I2CPacket -> I2C;
  MDA300IBADCSwitchP.I2CResource -> I2C.Resource;
}
