#include "ntp.h"
#include <stdint.h>
#include <stdio.h>
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

// EPOCH = Jan 1 1970 00:00:00
#define EPOCH_YR        1900
//(24L * 60L * 60L)
#define SECS_DAY        86400UL  
#define LEAPYEAR(year)  (!((year) % 4) && (((year) % 100) || !((year) % 400)))
#define YEARSIZE(year)  (LEAPYEAR(year) ? 366 : 365)
#define TimeZone		22									// GMT+2 = +8

uint8_t gmtim(const uint32_t time);


static const char day_abbrev[]= "SunMonTueWedThuFriSat";

// isleapyear = 0-1
// month=0-11
// return: how many days a month has
//
// We could do this if ram was no issue:
//uint8_t monthlen(uint8_t isleapyear,uint8_t month){
//const uint8_t mlen[2][12] = {
//              { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },
//              { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }
//      };
//      return(mlen[isleapyear][month]);
//}
//
uint8_t monthlen(uint8_t isleapyear,uint8_t month){
        if(month==1){
                return(28+isleapyear);
        }
        if (month>6){
                month--;
        }
        if (month%2==1){
                return(30);
        }
        return(31);
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

        gmtim(time);

}

uint8_t gmtim(uint32_t time)
{
        char dstr[4];
        uint8_t i;
        uint32_t dayclock;
        uint16_t dayno;
        uint16_t tm_year = EPOCH_YR;
        uint8_t tm_sec,tm_min,tm_hour,tm_wday,tm_mon;
		uint32_t zone = 15*60;			// seconds in 15 minute
		time += zone* TimeZone;
		
		printf("In gmtime\n");
		
        dayclock = time % SECS_DAY;
        dayno = time / SECS_DAY;

        tm_sec = dayclock % 60UL;
        tm_min = (dayclock % 3600UL) / 60;
        tm_hour = dayclock / 3600UL;
        tm_wday = (dayno + 4) % 7;      /* day 0 was a thursday */
        while (dayno >= YEARSIZE(tm_year)) {
                dayno -= YEARSIZE(tm_year);
                tm_year++;
        }
        tm_mon = 0;
        while (dayno >= monthlen(LEAPYEAR(tm_year),tm_mon)) {
                dayno -= monthlen(LEAPYEAR(tm_year),tm_mon);
                tm_mon++;
        }
        i=0;
        while (i<3){
                dstr[i]= (day_abbrev[tm_wday*3 + i]);
                i++;
        }
        dstr[3]='\0';

        printf("%s %u-%02u-%02u  ",dstr,tm_year,tm_mon+1,dayno + 1);
        printf("%02u:%02u:%02u\n",tm_hour,tm_min,tm_sec);
        return(tm_min);
}
