
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
  
  components StaticMultiHopM, LedsC, ActiveMessageC, QueuedSend;

  Init         = StaticMultiHopM;
  StdControl   = StaticMultiHopM;
  StaticSend   = StaticMultiHopM;
  RouteControl = StaticMultiHopM;
  Packet       = QueuedSend;




  StaticMultiHopM.SplitControl 	     -> ActiveMessageC;

  StaticMultiHopM.QueuedStdControl   -> QueuedSend.StdControl;
  StaticMultiHopM.QueuedInit	     -> QueuedSend.Init;

  StaticMultiHopM.AMSend       	     -> QueuedSend.QueueSendMsg;
  StaticMultiHopM.Receive            -> QueuedSend.QueueReceiveMsg;
  StaticMultiHopM.AMPacket           -> QueuedSend.AMPacket;
  StaticMultiHopM.Packet             -> QueuedSend.Packet;

}
