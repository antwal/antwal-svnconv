
/**
 * MDA300IBADCC is a top-level access component for the 
 * ADC channels available on the mda300ca sensorboard
 *
 * @author P Sowjanya <sowjanyap@cdac.in>
 * @version $Revision: 1.0
 */

configuration HalMDA300IBADCC {
  provides {
    interface Init;
    interface SplitControl;
    interface ADConvert[uint8_t port];
    interface SetParam[uint8_t port];
    interface Power as EXITATION25;
    interface Power as EXITATION33;
    interface Power as EXITATION50;
  }
}
implementation {
  components MDA300IBADCLogicP, LedsC;
  
  components MDA300IBADCSwitchC;

  ADConvert = MDA300IBADCLogicP;
  SetParam = MDA300IBADCLogicP;
  EXITATION25 = MDA300IBADCLogicP.EXITATION25;
  EXITATION33 = MDA300IBADCLogicP.EXITATION33;
  EXITATION50 = MDA300IBADCLogicP.EXITATION50;
  
  MDA300IBADCLogicP.Switch -> MDA300IBADCSwitchC;
  MDA300IBADCLogicP.Leds -> LedsC;

  components HplMDA300IBADCC;

  Init = HplMDA300IBADCC;
  SplitControl = HplMDA300IBADCC;
  MDA300IBADCLogicP.Exitation50 -> HplMDA300IBADCC.Exitation50;
  MDA300IBADCLogicP.Exitation33 -> HplMDA300IBADCC.Exitation33;
  MDA300IBADCLogicP.VoltageBuffer -> HplMDA300IBADCC.VoltageBuffer;
  MDA300IBADCLogicP.VoltageBooster -> HplMDA300IBADCC.VoltageBooster;
  MDA300IBADCLogicP.Amplifier -> HplMDA300IBADCC.Amplifier;
  MDA300IBADCLogicP.I2CPacket -> HplMDA300IBADCC;
  MDA300IBADCLogicP.I2CResource -> HplMDA300IBADCC;
  MDA300IBADCLogicP.PowerStabalizingTimer -> HplMDA300IBADCC;

  HplMDA300IBADCC.SwitchControl -> MDA300IBADCSwitchC.SwitchControl;
}
