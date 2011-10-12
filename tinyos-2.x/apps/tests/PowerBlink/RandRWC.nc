/* $Id: RandRWC.nc,v 1.8 2008/06/25 01:29:44 konradlorincz Exp $
 * Copyright (c) 2005 Intel Corporation
 * All rights reserved.
 *
 * This file is distributed under the terms in the attached INTEL-LICENSE     
 * file. If you do not find these files, copies can be found by writing to
 * Intel Research Berkeley, 2150 Shattuck Avenue, Suite 1300, Berkeley, CA, 
 * 94704.  Attention:  Intel License Inquiry.
 */
/**
 * Config storage test application. Does a pattern of random reads and
 * writes, based on mote id. See README.txt for more details.
 *
 * @author David Gay
 */
module RandRWC @safe() {
  uses {
    interface Boot;
    interface Leds;
    interface ConfigStorage;
    interface Mount as ConfigMount;
  }
}
implementation {
  enum {
    SIZE = 2048,
    NWRITES = 100,
  };

  uint8_t count;

  bool scheck(error_t r) __attribute__((noinline)) {
    return r == SUCCESS;
  }

  bool bcheck(bool b) {
    return b;
  }

  event void ConfigStorage.readDone(storage_addr_t x, void* buf, storage_len_t rlen, error_t result) __attribute__((noinline)) {
    if (scheck(result)) { 
      count++;
      if(count == 11) {count = 1;}  
      scheck(call ConfigStorage.write(10,(uint8_t*)&count, 1));
      if(count%2 != 0)
        call Leds.led2On();
    } else {
      call Leds.led2On();
      count=1;
      scheck(call ConfigStorage.write(10,(uint8_t*)&count, 1));
    } 
  }

  event void ConfigStorage.writeDone(storage_addr_t x, void *buf, storage_len_t y, error_t result) {
    if (scheck(result))
      scheck(call ConfigStorage.commit());
  }

  event void ConfigStorage.commitDone(error_t result) {
         call Leds.led1On();
  }

  event void Boot.booted() {
      call Leds.led0On();
      scheck(call ConfigMount.mount());
  }

  event void ConfigMount.mountDone(error_t e) {
    if(!scheck(call ConfigStorage.read(10, (uint8_t*)&count, 1))) {
      call Leds.led2On();
      scheck(call ConfigStorage.write(10,(uint8_t*)&count, 1));
    }
  }

}
