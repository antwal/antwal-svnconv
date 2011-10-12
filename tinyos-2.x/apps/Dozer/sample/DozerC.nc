/*
 * Copyright (c) 2010 C-DAC
 * All rights reserved.
 *
 */

 // @author Sowjanya P
 
configuration DozerC { }
implementation
{
  components MainC, TreeManagerC,
//    SchedulerC,
//    DataManagerC,
//    CmdManagerC,
      ActiveMessageC;	  	

  TreeManagerC.Boot -> MainC;
  TreeManagerC.RadioControl -> ActiveMessageC;

  TreeManagerC.TDMASchedule -> SchedulerC;

}
