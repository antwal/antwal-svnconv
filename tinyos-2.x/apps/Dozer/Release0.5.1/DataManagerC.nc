/*
 * Name           : DataManager.nc
 * Authors        : u-Agri Team 
 * Organization   : C-DAC, Hyderabad
 * Project        : NUCRC, u-Agri
 * Date           : 2010/12/03
 *
 *
 */


configuration DataManagerC{
  uses {
    interface Packet;
    interface AMPacket;
    interface AMSend as DataSend;
    interface AMSend as SerialSend;
    interface Receive as DataReceive;
    interface TDMASchedule;
    command error_t chooseParent();
  }

  provides interface DataQueueManage;
}

implementation {
  components DataManagerP, LedsC;

  DataQueueManage =  DataManagerP;

  TDMASchedule = DataManagerP; 
  DataManagerP.chooseParent = chooseParent;	

  Packet = DataManagerP;
  AMPacket = DataManagerP;
  DataSend = DataManagerP.DataSend;
  SerialSend = DataManagerP.SerialSend;
  DataReceive = DataManagerP;

  DataManagerP.Leds -> LedsC;

  components new PoolC(message_t, DATA_QUEUE_SIZE) as DataMessagePoolP,
    new QueueC(message_t*, DATA_QUEUE_SIZE) as DataQueueP;

  DataManagerP.DataMessagePool -> DataMessagePoolP;
  DataManagerP.DataQueue -> DataQueueP;

/*  
  Debug Interfaces
  ----------------	
  components new PoolC(message_t, 20) as DebugMessagePool,
    new QueueC(message_t*, 20) as DebugSendQueue,
    new SerialAMSenderC(AM_CTP_DEBUG) as DebugSerialSender,
    UARTDebugSenderP as DebugSender;

  DebugSender.Boot -> MainC;
  DebugSender.UARTSend -> DebugSerialSender;
  DebugSender.MessagePool -> DebugMessagePool;
  DebugSender.SendQueue -> DebugSendQueue;
  Collector.CollectionDebug -> DebugSender;
*/
}
