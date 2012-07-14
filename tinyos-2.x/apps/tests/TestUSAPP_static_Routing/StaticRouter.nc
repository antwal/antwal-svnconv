
/*
 * Name           : StaticRouter.nc
 * Authors        : u-Agri Team 
 * Organization   : C-DAC, Hyderabad
 * Project        : NUCRC, u-Agri
 * Date           : 2008/07/31, 2009/07/31
 *
 *
 * Description    :  
 *** Static Routing Configuration file
 *** Includes internal component wiring & 
 *** interfaces provides/used by/to external components 
 *
 * 
 */

includes StaticMultiHop;

configuration StaticRouter {
  
  provides {
    interface Init;
    interface StdControl;
    interface StaticSend;
    interface StaticControl as RouteControl;
    interface Packet;
  }

}

implementation {
  
  components StaticMultiHopM, LedsC, ActiveMessageC,
	     new AMSenderC(51), new AMReceiverC(51); 

  Init         = StaticMultiHopM;
  StdControl   = StaticMultiHopM;
  StaticSend   = StaticMultiHopM;
  RouteControl = StaticMultiHopM;
  Packet       = AMSenderC;


  StaticMultiHopM.AMSend  ->  AMSenderC;
  StaticMultiHopM.Receive ->  AMReceiverC;

  StaticMultiHopM.Led1       -> LedsC.Leds;
  StaticMultiHopM.Packet     -> AMSenderC.Packet;
  StaticMultiHopM.AMPacket   -> AMSenderC.AMPacket;

  StaticMultiHopM.SplitControl -> ActiveMessageC;
}
