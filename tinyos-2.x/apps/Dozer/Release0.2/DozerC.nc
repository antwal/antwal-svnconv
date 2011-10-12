/*
 * Copyright (c) 2010 C-DAC
 * All rights reserved.
 *
 */

/*
 * @author Trilok I, Sowjanya P
 * triloki@cdac.in, sowjanyap@cdac.in
 *
 */

#include "Timer.h"
#include "Dozer.h"
#include "qsort.h"

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
  components new TimerMilliC() as ConnRepWaitTimerC;
  components new TimerMilliC() as NeighbourUpdateTimerC;
  components new TimerMilliC() as NeighbourUpdateStopTimerC;
  TreeP.BeaconTimer -> BeaconTimerC.Timer;
  TreeP.BeaconWaitTimer -> BeaconWaitTimerC.Timer;
  TreeP.ConnReqListenTimer -> ConnReqListenTimerC.Timer;
  TreeP.ConnRepWaitTimer -> ConnRepWaitTimerC.Timer;
  TreeP.NeighbourUpdateTimer -> NeighbourUpdateTimerC.Timer;
  TreeP.NeighbourUpdateStopTimer -> NeighbourUpdateStopTimerC.Timer;

  components new AMSenderC(AM_DOZER_MSG) as BeaconSenderC;
  components new AMReceiverC(AM_DOZER_MSG) as BeaconReceiverC;
  TreeP.BeaconSend -> BeaconSenderC.AMSend;	
  TreeP.BeaconReceive -> BeaconReceiverC.Receive;	

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

  SchedulerP.chooseParent -> TreeP;
  TreeP.SchedulerInit -> SchedulerP.Init;

  SchedulerP.Random -> RandomC;
  SchedulerP.SeedInit -> RandomC;
  SchedulerP.Leds -> LedsC;	
/*
  // Command Manager Components
  components CmdManagerP;
  components SerialActiveMessageC;
  CmdManagerP.SerialControl -> SerialActiveMessageC;
  CmdManagerP.SerialReceive -> SerialActiveMessageC.Receive;
  // Data Manager Components
  components DataManagerC; 	
  DataManagerC.TDMASchedule -> SchedulerP;
  DataManagerC.chooseParent -> TreeP;

  DataManagerC.AMPacket -> ActiveMessageC;

  components new SerialAMSenderC(AM_DATA_MSG);
  DataManagerC.SerialSend -> SerialAMSenderC.AMSend;

  components new AMSenderC(AM_DATA_MSG) as DataSenderC;
  components new AMReceiverC(AM_DATA_MSG) as DataReceiverC;
  DataManagerC.DataSend -> DataSenderC.AMSend;	
  DataManagerC.DataReceive -> DataReceiverC.Receive;	

  TreeP.DataManagerInit -> DataManagerC;
*/

}
