
configuration DozerC {
}

implementation {

  components MainC, TreeP, ActiveMessageC, RandomC, LedsC;

  TreeP.Boot -> MainC;
  TreeP.RadioControl -> ActiveMessageC;
  TreeP.AMPacket -> ActiveMessageC;
  // Tree Manager Components
  components new TimerMilliC() as BeaconTimerC;
  components new TimerMilliC() as BeaconWaitTimerC;
  components new TimerMilliC() as ConnReqListenTimerC;
  TreeP.BeaconTimer -> BeaconTimerC.Timer;
  TreeP.BeaconWaitTimer -> BeaconWaitTimerC.Timer;
  TreeP.ConnReqListenTimer -> ConnReqListenTimerC.Timer;

  components new AMSenderC(AM_DOZER_BEACON) as BeaconSenderC;
  components new AMReceiverC(AM_DOZER_BEACON) as BeaconReceiverC;
  TreeP.BeaconSend -> BeaconSenderC.AMSend;	
  TreeP.BeaconReceive -> BeaconReceiverC.Receive;	

  components new AMSenderC(AM_DATA_MSG) as DataSenderC;
  components new AMReceiverC(AM_DATA_MSG) as DataReceiverC;
  TreeP.DataSend -> DataSenderC.AMSend;	
  TreeP.DataReceive -> DataReceiverC.Receive;	

  components HilTimerMilliC;
  TreeP.LocalTime ->  HilTimerMilliC;

  TreeP.Random -> RandomC;
  TreeP.SeedInit -> RandomC.SeedInit;
  TreeP.Leds -> LedsC;

  // Scheduler Components
  components SchedulerP;
  TreeP.TDMASchedule -> SchedulerP;
  
  components new TimerMilliC() as PPBListenTimer0C;
  components new TimerMilliC() as PPBListenTimer1C;
  components new TimerMilliC() as PPBListenTimer2C;
  components new TimerMilliC() as PPBListenTimer3C;
  components new TimerMilliC() as TDMAScheduleTimerC;
  components new TimerMilliC() as TDMASlotTimerC;
  SchedulerP.PPBListenTimer0 -> PPBListenTimer0C.Timer;
  SchedulerP.PPBListenTimer1 -> PPBListenTimer1C.Timer;
  SchedulerP.PPBListenTimer2 -> PPBListenTimer2C.Timer;
  SchedulerP.PPBListenTimer3 -> PPBListenTimer3C.Timer;
  SchedulerP.TDMAScheduleTimer -> TDMAScheduleTimerC.Timer;
  SchedulerP.TDMASlotTimer -> TDMASlotTimerC.Timer;

  SchedulerP.LocalTime ->  HilTimerMilliC;

  SchedulerP.Random -> RandomC;
  SchedulerP.SeedInit -> RandomC;
  SchedulerP.Leds -> LedsC;	

/*components DataManagerP; 	
  DataManagerP.TDMASchedule -> SchedulerP;

  components new TimerMilliC() as DataListenTimerC;
  DataManagerP.DataListenTimer -> DataListenTimerC.Timer;

  components new AMSenderC(AM_DATA_MSG) as DataSenderC;
  components new AMReceiverC(AM_DATA_MSG) as DataReceiverC;
  TreeP.DataSend -> DataSenderC.AMSend;	
  TreeP.DataReceive -> DataReceiverC.Receive;	
*/
}
