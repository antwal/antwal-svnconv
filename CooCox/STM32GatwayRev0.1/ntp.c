/*--------------------------------------------------------------------------------------------------*/
/*						This Function is ntp client that will get current time						*/
/*--------------------------------------------------------------------------------------------------*/


#include "ntp.h"
#include "modem.h"
#include "stm32_rtc.h"

extern TIME *tm;
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
		printf("In ntpdcall\n");
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
	char ntp[48],res;
	char port[4];
	char addr[20];
	server udp;

	strcpy(port, "123");
	strcpy(addr, "1.in.pool.ntp.org" );
	//port = "123";
	//addr = "1.in.pool.ntp.org";

	udp.port = port;
	udp.addr = addr;

	res = mdmFSM(mdm);

	if(res == mdmOK){
	printf("Modem initialised successfully\n");

	res = mdmUDPConnect(mdm, &udp);

	printf("Connected\n");
	sendNTPRequest((ntpMsg*)ntp); 		// Initialise the ntp structure

	do{
		//mdmSend(mdm);
		res = mdmTransSend(mdm,(char *) ntp, 48,1);
		}
		while(res !=mdmOK);


	res = mdmTransRead(mdm,(char *) ntp, 48);
	res = mdmSwitch(mdm, COMMAND);
	if(res != mdmReadFail)
		NtpDCall(ntp);

	Cur_Time(tm);

	printf("Time is: %d:%d:%d - %d,%d,%d\r",tm->hh,tm->mm, tm->ss, tm->DD,tm ->MM, tm->YYYY);
	res = mdmClose(mdm);
	}
}
