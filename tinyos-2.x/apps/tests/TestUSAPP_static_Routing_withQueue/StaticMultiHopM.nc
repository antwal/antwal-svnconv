
/*
 * Name           : StaticMultiHopM.nc
 * Authors        : u-Agri Team 
 * Organization   : C-DAC, Hyderabad
 * Project        : NUCRC, u-Agri
 * Date           : 2008/07/31, 2009/07/31
 *
 *
 * Description:  Static Routing Module
 *** A simple module that handles multihop packet movement.  It accepts 
 *** messages from both applications and the network and does the necessary
 *** interception and forwarding.
 *
 *
 *** Static Routing Module' is the one with statically defined nexthop/parent addresses
 *** for each mote, with basestation always having TOS_UART_ADDR as parent.
 *** To redefine the nexthop addresses of motes the function 'init_parentTable' is to be modified.
 *** In parent table "Array index being the mote_id, the value assigned will be the nexthop/parent address"
 *
 */


includes StaticMultiHop;

#define NETWORK_SIZE      30 				// Size of the Mote Network. To be increased if required

#ifndef MHOP_QUEUE_SIZE
 #define MHOP_QUEUE_SIZE  16				// Forwarding Queue Size
#endif

module StaticMultiHopM {
  provides {
    interface Init;
    interface StdControl;
    interface StaticSend;
    interface StaticControl   as RouteControl;
  }
  uses {
    interface Init            as QueuedInit;   
    interface StdControl      as QueuedStdControl;	
    interface QueueSendMsg    as AMSend;
    interface QueueReceiveMsg as Receive;
    interface Leds            as Led1;
    interface SplitControl;
    interface AMPacket;
    interface Packet;
  }
}

implementation {

  typedef message_t  TOS_Msg;	
  //typedef message_t *TOS_MsgPtr;
  //TOS_MsgPtr Pmsg;	
  typedef error_t result_t;

  enum {
    FWD_QUEUE_SIZE = MHOP_QUEUE_SIZE, 			// Forwarding Queue Size
    EMPTY = 0xff
  };


  /* Routing status of local node */
  /* Parent Table */
  uint16_t  ParentNode[NETWORK_SIZE];			 // Array of Parent Nodes. Mote_id being array index, 
 							 // values are the Parent Node Ids.
  
  /* Internal storage and scheduling state */
  TOS_Msg FwdBuffers[FWD_QUEUE_SIZE];			// Forwarding Buffers 
  message_t *FwdBufList[FWD_QUEUE_SIZE];		
  uint8_t FwdBufBusy[FWD_QUEUE_SIZE];			// Buffer under use Flags
  uint8_t iFwdBufHead, iFwdBufTail;				

 /* ------------------------------------------------------
  * Initialization of Buffer Pointers, Flags, Parent Table
  * ------------------------------------------------------
  */ 
  static void initialize() {
    int n;

    for (n=0; n < FWD_QUEUE_SIZE; n++) {
      FwdBufList[n] = &FwdBuffers[n];
      FwdBufBusy[n] = 0;
    } 

    iFwdBufHead = iFwdBufTail = 0;
  }

 
  static void init_parentTable() {
    ParentNode[BASE_STATION_ADDRESS] = TOS_UART_ADDR;
    ParentNode[1] = 119; //BASE_STATION_ADDRESS; // Note that the sensing node_ids start from 101. 
                                                 // Eg: ParentNode[NODE_ID - 116] = 104;
    ParentNode[2] = 119;
    //ParentNode[2] = BASE_STATION_ADDRESS;
    ParentNode[3] = BASE_STATION_ADDRESS;
    ParentNode[4] = BASE_STATION_ADDRESS;
    ParentNode[5] = BASE_STATION_ADDRESS;
    ParentNode[6] = BASE_STATION_ADDRESS;
    ParentNode[7] = BASE_STATION_ADDRESS;
  }

  command result_t Init.init() {
    initialize();
    init_parentTable();
    return call QueuedInit.init();
  }

  command result_t StdControl.start() {
    call QueuedStdControl.start();
    return call SplitControl.start();
  }

  event void SplitControl.startDone(error_t res)
  {
	 return;
  }

  command result_t StdControl.stop() {
    call QueuedStdControl.stop();
    return call SplitControl.stop();
  }

  event void SplitControl.stopDone(error_t res)
  {
	 return;
  }

 /* -------------------
  * Commands and Events
  * -------------------
  */

  command error_t StaticSend.send(message_t *pMsg, uint16_t PayloadLen) {

    TOS_MHopMsg *pMHMsg = (TOS_MHopMsg *)&pMsg->data[0];
    uint16_t Index = TOS_NODE_ID;

    uint16_t usMHLength = offsetof(TOS_MHopMsg,data) + PayloadLen;

    if (usMHLength > TOSH_DATA_LENGTH) {
      return FAIL;
    }

    //pMsg->type = id;
    //pMsg->length += 4; 

    pMHMsg->sourceaddr = pMHMsg->originaddr = TOS_NODE_ID;
    if(TOS_NODE_ID != BASE_STATION_ADDRESS) {  Index = TOS_NODE_ID-116; }
    //pMsg->dest = ParentNode[Index];	
  
    //call SimpleMac.sendPacket(pMsg);  
    call AMSend.send(ParentNode[Index], pMsg, usMHLength);  

    return SUCCESS;
    
  } 

  command void *StaticSend.getBuffer(message_t *pMsg, uint16_t* length) {
    
    TOS_MHopMsg *pMHMsg = (TOS_MHopMsg *)pMsg->data;
    
    *length = TOSH_DATA_LENGTH - offsetof(TOS_MHopMsg,data);

    return (&pMHMsg->data[0]);

  }

  int8_t get_buff(){
    int8_t n;
    for (n=0; n < FWD_QUEUE_SIZE; n++) {
	uint8_t done = 0;
        atomic{
		if(FwdBufBusy[n] == 0){
			FwdBufBusy[n] = 1;
			done = 1;
		}
        }
	if(done == 1) return n;
      
    } 
    return -1;
  }

  int8_t is_ours(message_t *ptr){
    int8_t n;
    for (n=0; n < FWD_QUEUE_SIZE; n++) {
       if(FwdBufList[n] == ptr){
		return n;
       }
    } 
    return -1;
  }
  
  static message_t *mForward(message_t *pMsg, uint8_t id) {
  
    //uint8_t transmitbuffer[128],  
    uint8_t len = 0;
    message_t *pNewBuf = pMsg;
    TOS_MHopMsg *pMHMsg = (TOS_MHopMsg *)&pMsg->data[0];
    uint16_t Index = TOS_NODE_ID;
    error_t Res ;

    int8_t buf = get_buff();

    if (buf == -1)
      return pNewBuf;
    
    if(TOS_NODE_ID)
       pMHMsg->sourceaddr = TOS_NODE_ID;
    
    if(TOS_NODE_ID != BASE_STATION_ADDRESS) {
       Index = TOS_NODE_ID-116;
    } else {
       Index = 0;
    }
   // pMsg->dest = ParentNode[Index];   
    len = call Packet.payloadLength(pMsg);
    Res = call AMSend.send(ParentNode[Index], pMsg, len);
  
    if (Res == SUCCESS) {
      pNewBuf = FwdBufList[buf];
      FwdBufList[buf] = pMsg;
    }else{
      FwdBufBusy[buf] = 0;
    }

    return pNewBuf;
    
  }

  event message_t* Receive.receive(message_t* pMsg, void* payload, uint8_t len) {

     if (call AMPacket.destination(pMsg) == TOS_NODE_ID) {			 // Addressed to local node
	pMsg = mForward(pMsg,AM_UAGRI_MSG);
    }

    return pMsg;
  }
  
  uint8_t fail_count;
  event void AMSend.sendDone(message_t *pMsg, error_t success) {

    int8_t buf;
    buf = is_ours(pMsg);
    if (buf != -1) {						 // Msg was from forwarding queue
      FwdBufBusy[buf] = 0;
    } else {
      signal StaticSend.sendDone(pMsg, success);
    }
    return ;
  }

  command uint16_t RouteControl.getParent() {
    uint16_t Index = TOS_NODE_ID;
    if(TOS_NODE_ID != BASE_STATION_ADDRESS) {  Index = TOS_NODE_ID-116; }
    return ParentNode[Index];
  }

  command uint8_t RouteControl.getQuality() {
    return 0;
  }

  command uint8_t RouteControl.getDepth() {
    return 0;
  }

  command uint8_t RouteControl.getOccupancy() {
    return 0;
  }

  command result_t RouteControl.setUpdateInterval(uint16_t Interval) {
    return SUCCESS;
  }

  command result_t RouteControl.manualUpdate() {
    return SUCCESS;
  }

  command uint16_t RouteControl.getSender(message_t *msg) {
    TOS_MHopMsg	 *pMHMsg = (TOS_MHopMsg *)msg->data;
    return pMHMsg->sourceaddr;
  }

  default event error_t StaticSend.sendDone(message_t *pMsg, error_t success) {
    return SUCCESS;
  }

}
