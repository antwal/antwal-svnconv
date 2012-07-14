
/* Author	: TRILOK INAKOTA
   Organisation : C-DAC HYD
*/


generic configuration CTRC(am_id_t id) { 
     
   provides interface CtrI;

}

implementation
{

  components new AFWA_AESC(id) ,new CTRP(id), MainC;
   
  CtrI = CTRP;

  CTRP.AFWA_AESI -> AFWA_AESC;   
 
}
