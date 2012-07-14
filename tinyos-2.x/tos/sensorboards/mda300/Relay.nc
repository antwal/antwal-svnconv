/**
 * Relay is a interface provided by the MDA300RelayC Component. Allowing 
 * opening and closing of the relays. By default one relay is closed 
 * and the other is open.
 *
 * @author P Sowjanya <sowjanyap@cdac.in>
 * @version $Revision: 1.0
 */

interface Relay {
  command error_t open();
  command error_t close();
  command error_t toggle();	
}
