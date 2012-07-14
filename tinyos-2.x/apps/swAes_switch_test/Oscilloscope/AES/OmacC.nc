
/* Author	: TRILOK INAKOTA
   Organisation : C-DAC HYD
*/


generic configuration OmacC(am_id_t id) { 
     
   provides interface OmacI;

}

implementation
{

  components MainC, new OmacP(id), new AFWA_AESC(id);
   
  OmacI = OmacP;

  OmacP.AFWA_AESI -> AFWA_AESC;   
 
}
