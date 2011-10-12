/*
 * Name           : DataManager.nc
 * Authors        : u-Agri Team 
 * Organization   : C-DAC, Hyderabad
 * Project        : NUCRC, u-Agri
 * Date           : 2010/12/03
 *
 *
 * Description    :
 * -----------
 * u-Agri Application main Component.
 * Top Level Configuration allowing to choose an Application Id,
 * Components required. Contains wirings between the selected components 
 *
 *
 */



/* ----------------------------------------------
 * Specify Crop Id & Plot Id, BaseStation Address 
 * ----------------------------------------------
 */ 
#define CROP 'C'	
#define CROP_ID '1'
#define PLOT_ID 2 
#define BASE_STATION_ADDR 0 // Value can range from 0-100. Since sensing node_ids start from 101(Standard)



/* --------------------------
 * Choose Components Required
 * --------------------------
 */
//#define DISSMN  // Allows Remote Configuration ( Changing the Periodicities) 
#ifdef DISSMN            
#define ONESHOT // Uncomment to Allow OneShot Remote Configuration
#endif


/* ------------------------------
 * Headers ( Component Specific )
 * ------------------------------
 */
includes sensorboard;
includes sensorboardApp;
includes sensors;
#ifdef DISSMN
includes Bcast;
#endif


/* --------------- 
 * UAgri Application Configuration ( Top Level Component )
 * Defines wiring between other components
 */

configuration DataManagerC{
  uses interface AMPacket;
  uses interface AMSend as DataSend;
  uses interface AMSend as SerialSend;
  uses interface Receive as DataReceive;
  uses interface TDMASchedule;
  uses command error_t chooseParent();
  
  provides interface Init;
}

implementation {
  components DataManagerP, LedsC;

  Init = DataManagerP;
  TDMASchedule = DataManagerP; 
  DataManagerP.chooseParent = chooseParent;	

  AMPacket = DataManagerP;
  DataSend = DataManagerP.DataSend;
  SerialSend = DataManagerP.SerialSend;
  DataReceive = DataManagerP;

  DataManagerP.Leds -> LedsC;

  components SamplerC;
  DataManagerP.SamplerInit -> SamplerC.SamplerInit;
  DataManagerP.SamplerControl -> SamplerC.SamplerControl;
  DataManagerP.Sample -> SamplerC.Sample;

  //support for plug and play.
  DataManagerP.PlugPlay -> SamplerC.PlugPlay;                        // To Check for proper MDA300 Installation      

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
