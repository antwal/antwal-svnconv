/*
 * Copyright (c) 2010 C-DAC
 * All rights reserved.
 *
 */

 // @author Sowjanya P
 
configuration TreeManagerC {
  uses {
    interface Boot;
    interface SplitControl as RadioControl;
    interface TDMASchedule;
  }
}
implementation
{
  components TreeManagerM, RandomC, LedsC
	new TimerMilliC(); 

  TreeManagerM = Boot;
  TreeManagerM = RadioControl;

  components new AMSenderC(AM_DOZER_BEACON) as BeaconSenderC,
	new AMReceiverC(AM_DOZER_BEACON) as BeaconReceiverC;
  TreeManagerM.BeaconSend -> BeaconSenderC.AMSend;
  TreeManagerM.BeaconReceive -> BeaconReceiverC.Receive;

  components new AMSenderC(AM_DOZER_CONNREQ) as ConnectReqSenderC,
	new AMReceiverC(AM_DOZER_CONNREQ) as ConnectReqReceiverC;
  TreeManagerM.ConnectReqSend -> ConnectReqSenderC.AMSend;
  TreeManagerM.ConnectReqReceive -> ConnectReqReceiverC.Receive;

  components new AMSenderC(AM_DOZER_CONNREP) as ConnectRepSenderC,
	new AMReceiverC(AM_DOZER_CONNREP) as ConnectRepReceiverC;
  TreeManagerM.ConnectRepSend -> ConnectRepSenderC.AMSend;
  TreeManagerM.ConnectRepReceive -> ConnectRepReceiverC.Receive;

  TreeManagerM.BeaconTimer -> TimerMilliC.Timer;
  TreeManagerM.Random -> RandomC;
  TreeManagerM.SeedInit -> RandomC;
  TreeManagerM.Leds -> LedsC;

  TreeManagerM = TDMASchedule;
  
}
