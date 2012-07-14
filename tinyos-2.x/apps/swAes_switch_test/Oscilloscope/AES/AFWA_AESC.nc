/**
  * File                 : Application Interfaces - Implementation  
  *
  * Project              : Adaptive Framework for Wireless Sensor Network Application
  *
  * Author               : Trilok Inakota 
  *
  * Organization         : C-DAC,Hyderabad
  *
  * Date                 :       
  *
  * Revision History     :  version 0.1
**/

/**
  * Description          :  
  *                         
  *
  *
**/

generic configuration AFWA_AESC(am_id_t id)
{
  provides {
    interface SplitControl;
    interface AFWA_AESI;

  }
 
}

implementation
{
  components MainC , new AFWA_AESP(id), LedsC, 
	     	     new AMSenderC(id), 
	             new OmacP(id),
		     new CCMP(id),
		     new CTRP(id);

  SplitControl = AFWA_AESP.SplitControl;
  AFWA_AESI = AFWA_AESP.AFWA_AESI;
 
  
  MainC.SoftwareInit    -> AFWA_AESP.Init;
  
  AFWA_AESP.Leds        -> LedsC;
  AFWA_AESP.AMSend      -> AMSenderC;
  AFWA_AESP.OmacI	-> OmacP;
  AFWA_AESP.CcmI	-> CCMP;
  AFWA_AESP.CtrI	-> CTRP;

  CCMP.AFWA_AESI  	-> AFWA_AESP;  
  CTRP.AFWA_AESI  	-> AFWA_AESP; 
  OmacP.AFWA_AESI       -> AFWA_AESP;   
  CTRP.Leds		-> LedsC;

 
}
