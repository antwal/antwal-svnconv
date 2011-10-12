/*
 * Name           : uAgriC.nc
 * Authors        : u-Agri Team 
 * Organization   : C-DAC, Hyderabad
 * Project        : NUCRC, u-Agri
 * Date           : 2010/12/03, 2011/09/22
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

/* --------------------------
 * Choose Components Required
 * --------------------------
 */
#define DISSMN  // Allows Remote Configuration ( Changing the Periodicities) 
#ifdef DISSMN            
#define ONESHOT // Uncomment to Allow OneShot Remote Configuration
#endif


/* ------------------------------
 * Headers ( Component Specific )
 * ------------------------------
 */
includes uAgri;
includes sensorboard;

/* --------------- 
 * UAgriApp Configuration ( Top Level Component )
 * Defines wiring between other components
 */

configuration uAgriC { }
implementation {
  components MainC, uAgriP, LedsC;
#if defined(PLATFORM_MICAZ) || defined(PLATFORM_TELOSB) || defined(PLATFORM_SHIMMER) || defined(PLATFORM_INTELMOTE2)
  components CC2420ActiveMessageC as LplRadio;
#elif defined(PLATFORM_IRIS)
  components RF230ActiveMessageC as LplRadio;
#else
#error "LPL testing not supported on this platform"
#endif

 
  uAgriP.Boot -> MainC;
  uAgriP.Leds -> LedsC;
  uAgriP.LowPowerListening -> LplRadio;

  components SamplerC;
  uAgriP.SamplerInit -> SamplerC.SamplerInit;
  uAgriP.SamplerControl -> SamplerC.SamplerControl;
  uAgriP.Sample -> SamplerC.Sample;

  //support for plug and play.
  uAgriP.PlugPlay -> SamplerC.PlugPlay;                        // To Check for proper MDA300 Installation      

  //
  // Communication components.  These are documented in TEP 113:
  // Serial Communication, and TEP 119: Collection.
  //
  components CollectionC as Collector,		// Collection layer
    ActiveMessageC,                     	// AM layer
    new CollectionSenderC(AM_UAGRI_MSG), 	// Sends multihop RF
    SerialActiveMessageC,                   	// Serial messaging
    new SerialAMSenderC(AM_UAGRI_MSG);   	// Sends to the serial port

  uAgriP.RadioControl -> ActiveMessageC;
  uAgriP.SerialControl -> SerialActiveMessageC;
  uAgriP.RoutingControl -> Collector;

  uAgriP.DataSend -> CollectionSenderC.Send;
  uAgriP.SerialSend -> SerialAMSenderC.AMSend;
  uAgriP.Receive -> Collector.Receive[AM_UAGRI_MSG];
  uAgriP.RootControl -> Collector;

  components new PoolC(message_t, 10) as UARTMessagePoolP,
    new QueueC(message_t*, 10) as UARTQueueP;

  uAgriP.UARTMessagePool -> UARTMessagePoolP;
  uAgriP.UARTQueue -> UARTQueueP;

  components DisseminationC;
  uAgriP.DisseminationControl -> DisseminationC;

  components new DisseminatorC(DissmnCtrlMsg, 0x1234) as CtrlDataObjectC;
  uAgriP.CtrlDataValue -> CtrlDataObjectC;
  uAgriP.UpdateCtrlData -> CtrlDataObjectC;

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
