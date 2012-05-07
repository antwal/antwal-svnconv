/*--------------------------------------------------------------------------------------------------*/
/*						This Function is ntp client that will get current time						*/
/*--------------------------------------------------------------------------------------------------*/


#include "ntp.h"
#include "modem.h"
#include "stm32_rtc.h"
#include "stdio.h"
#include "string.h"
#include "debug.h"

extern TIME *tm;
char ntp[48];
/* This packet need to be send to through UDP to ntp server
 * The Output will be embedded into the tx_timestamp_i this
 * data should be sent to gmtime() to get the time.
 * */
void sendNTPRequest(ntpMsg *m) {
		m->status=0xE3;							//clk not sync: NTP version 4: Client
        m->type = 0x00;							// Clk stratum: unspecified
        m->precision = 0xFA04;					// Polling Interval 4 secs
        m->est_error = 0x00000100;				//Peer Clock Precision: 0.015625 sec
        m->est_driftrate = 0;					// Root Delay:    1.0000 sec
        m->ref_clk_ident = 0;					//Root Dispersion:    0.0000 sec
        m->ref_timestamp_i = 0;
        m->ref_timestamp_f = 0;
        m->orig_timestamp_i = 0;
        m->orig_timestamp_f = 0;
        m->rx_timestamp_i = 0;
        m->rx_timestamp_f = 0;
        m->tx_timestamp_i[0]=0;
        m->tx_timestamp_i[1]=0;
        m->tx_timestamp_i[2]=0;
        m->tx_timestamp_i[3]=0;
        m->tx_timestamp_f = 0;

}

void NtpDCall(ntpMsg *msg)
{
        uint32_t time;
        time = msg->tx_timestamp_i[0];
        time = time << 8;
        time += msg->tx_timestamp_i[1];
        time = time << 8;
        time += msg->tx_timestamp_i[2];
        time = time << 8;
        time += msg->tx_timestamp_i[3];

        gmtime(time,tm,1);
}

mdmStatus ntp_time(mdmIface *mdm)
{
	char port[4],res;
	char addr[20];
	static uint8_t ntpUpdate = 0;
	server udp;
	uint32_t ntpbytes = 48;

	strcpy(port, "123");
	strcpy(addr, "1.in.pool.ntp.org" );
	//port = "123";
	//addr = "1.in.pool.ntp.org";

	udp.port = port;
	udp.addr = addr;

	if((tm->DD == 1 && tm->MM == 1 && tm->YYYY == 2012) || ntpUpdate == 10 )
	{
		debug(CONSOLE,"%s\r\n","Going to Update Time");
		ntpUpdate =0;
		res = mdmFSM(mdm);

		if(res == mdmOK){
			res = mdmUDPConnect(mdm, &udp);

			// Send data only when connection is established
			if(res == mdmOK)
			{
				sendNTPRequest((ntpMsg*)ntp); 		// Initialise the ntp structure

				// Try Once only
				res = mdmTransSend(mdm,(char *) ntp, ntpbytes);
				if(res == mdmOK)
					res = mdmTransRead(mdm,(char *) ntp, &ntpbytes);

				if(res != mdmReadFail)
					NtpDCall((ntpMsg *)ntp);
				else
					return res;

				Cur_Time(tm);
			}
			else
				return res;
		}
	debug(LOG,"%s\n\r","Time Updated");
	res = mdmSwitch(mdm, COMMAND);
	res = mdmClose(mdm);
	}
}
