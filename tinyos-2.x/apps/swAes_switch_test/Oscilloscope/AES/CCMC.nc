
/* Author	: TRILOK INAKOTA
   Organisation : C-DAC HYD
*/


generic configuration CCMC(am_id_t id) { 
     
   provides interface CcmI;

}

implementation
{

  components new CCMP(id), MainC,new AFWA_AESC(id);
   
  CcmI = CCMP;

  CCMP.AFWA_AESI -> AFWA_AESC;   
 
}
