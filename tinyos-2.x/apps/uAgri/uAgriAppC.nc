/*
 * Name           : uAgriApp.nc
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
 * UAgriApp Configuration ( Top Level Component )
 * Defines wiring between other components
 */

configuration uAgriAppC { }
implementation {
  components MainC, uAgriC, LedsC;
#if defined(PLATFORM_MICAZ) || defined(PLATFORM_TELOSB) || defined(PLATFORM_SHIMMER) || defined(PLATFORM_INTELMOTE2)
  components CC2420ActiveMessageC as LplRadio;
#elif defined(PLATFORM_IRIS)
  components RF230ActiveMessageC as LplRadio;
#else
#error "LPL testing not supported on this platform"
#endif

 
  uAgriC.Boot -> MainC;
  uAgriC.Leds -> LedsC;
  uAgriC.LowPowerListening -> LplRadio;

  components SamplerC;
  uAgriC.SamplerInit -> SamplerC.SamplerInit;
  uAgriC.SamplerControl -> SamplerC.SamplerControl;
  uAgriC.Sample -> SamplerC.Sample;

  //support for plug and play.
  uAgriC.PlugPlay -> SamplerC.PlugPlay;                        // To Check for proper MDA300 Installation      

  //
  // Communication components.  These are documented in TEP 113:
  // Serial Communication, and TEP 119: Collection.
  //
  components CollectionC as Collector,		// Collection layer
    ActiveMessageC,                     	// AM layer
    new CollectionSenderC(AM_UAGRI_MSG), 	// Sends multihop RF
    SerialActiveMessageC,                   	// Serial messaging
    new SerialAMSenderC(AM_UAGRI_MSG);   	// Sends to the serial port

  uAgriC.RadioControl -> ActiveMessageC;
  uAgriC.SerialControl -> SerialActiveMessageC;
  uAgriC.RoutingControl -> Collector;

  uAgriC.DataSend -> CollectionSenderC.Send;
  uAgriC.SerialSend -> SerialAMSenderC.AMSend;
  uAgriC.Receive -> Collector.Receive[AM_UAGRI_MSG];
  uAgriC.RootControl -> Collector;

  components new PoolC(message_t, 10) as UARTMessagePoolP,
    new QueueC(message_t*, 10) as UARTQueueP;

  uAgriC.UARTMessagePool -> UARTMessagePoolP;
  uAgriC.UARTQueue -> UARTQueueP;

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
