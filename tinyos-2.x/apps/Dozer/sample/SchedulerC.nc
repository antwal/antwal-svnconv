/*
 * Copyright (c) 2010 C-DAC
 * All rights reserved.
 *
 */

 // @author Sowjanya P
 
configuration SchedulerC {
  provides {
    interface TDMASchedule;	
  }

  uses {
    interface;
  }

}
implementation
{
  components SchedulerP;
  
  TDMASchedule = SchedulerP;

  
}
