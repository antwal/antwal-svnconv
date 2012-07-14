/**
 * "Copyright (c) 2007 CENTRE FOR ELECTRONICS AND DESIGN TECHNOLOGY,IISc.
 *  All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software and
 * its documentation for any purpose, without fee, and without written
 * agreement is hereby granted, provided that the above copyright
 * notice, the following two paragraphs and the author appear in all
 * copies of this software.
 *
 * IN NO EVENT SHALL CENTRE FOR ELECTRONICS AND DESIGN TECHNOLOGY,IISc BE LIABLE TO
 * ANY PARTY FOR DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES
 * ARISING OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN
 * IF CENTRE FOR ELECTRONICS AND DESIGN TECHNOLOGY,IISc HAS BEEN ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * CENTRE FOR ELECTRONICS AND DESIGN TECHNOLOGY,IISc SPECIFICALLY DISCLAIMS
 * ANY WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.  THE SOFTWARE
 * PROVIDED HEREUNDER IS ON AN "AS IS" BASIS, AND CENTRE FOR ELECTRONICS
 * AND DESIGN TECHNOLOGY,IISc HAS NO OBLIGATION TO PROVIDE MAINTENANCE,
 * SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS."
 *
 */
 
/**
 *
 * @author Venkatesh S
 * @author Prabhakar T V
 */


#include <sim_energy_estimate.h>
#include <At45dbCurrent.h>
 
module At45dbSimEnergyEstimatorP {
  provides interface At45dbSimEnergyEstimator;
}

implementation {

  async command void read_start(uint8_t bytes) 
  {
	dgb("ENERGY_HANDLER", "AT45READSTART,%d,%lld\n", bytes, sim_time());
  }


  async command void write_start(uint8_t bytes) 
  {
	dgb("ENERGY_HANDLER", "AT45WRITESTART,%d,%lld\n", bytes, sim_time());
  }


  async command void crc_start(uint8_t bytes) 
  {
	dgb("ENERGY_HANDLER", "AT45CRCSTART,%d,%lld\n", bytes, sim_time());
  }


  async command void flush_start() 
  {
	dgb("ENERGY_HANDLER", "AT45FLUSHSTART,%lld\n", sim_time());
  }


  async command void erase_start() 
  {
	dgb("ENERGY_HANDLER", "AT45ERASESTART,%lld\n", sim_time());
  }


  async command void read_done() 
  {
	dgb("ENERGY_HANDLER", "AT45READDONE,%lld\n", sim_time());
  }


  async command void write_done() 
  {
	dgb("ENERGY_HANDLER", "AT45WRITEDONE,%lld\n", sim_time());
  }


  async command void crc_done() 
  {
	dgb("ENERGY_HANDLER", "AT45CRCDONE,%lld\n", sim_time());
  }


  async command void flush_done() 
  {
	dgb("ENERGY_HANDLER", "AT45FLUSHDONE,%lld\n", sim_time());
  }


  async command void erase_done() 
  {
	dgb("ENERGY_HANDLER", "AT45FLUSHDONE,%lld\n", sim_time());
  }


}
