/*--------------------------------------------------------------------------------------------------*/
/*						This Function is ntp client that will get current time						*/
/*--------------------------------------------------------------------------------------------------*/


typedef struct ntpMsg {
	uint8_t status;
	uint8_t type;
	us16 precision;
    uint32_t est_error;
    uint32_t est_driftrate;
    uint32_t ref_clk_ident;
    uint32_t ref_timestamp_i;
    uint32_t ref_timestamp_f;
    uint32_t orig_timestamp_i;
    uint32_t orig_timestamp_f;
    uint32_t rx_timestamp_i;
    uint32_t rx_timestamp_f;
    uint8_t tx_timestamp_i[4];
    uint32_t tx_timestamp_f;
} ntpMsg ;


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

