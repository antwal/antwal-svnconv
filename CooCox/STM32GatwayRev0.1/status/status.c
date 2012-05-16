#include "powermgmnt.h"
#include "ffconf.h"
#include "debug.h"
#include "ff.h"
#include "timevar.h"
#include "WSNPacket.h"

#define STATSTARTTAG		"<GATEWAY>"
#define STATENDTAG			"</GATEWAY>"
extern uint8_t chk[2];


#define stats			"\n\t<GATEWAY>\n\t"\
									"\t<BATT>%04x</BATT>\n\t"\
									"\t<SOLAR>%02x</SOLAR>\n\t"\
									"\t<STATUS>%02x</STATUS>\n\t"\
									"\t<TIME>%04x%02x%02x%02x%02x%02x</TIME>\n\t"\
						"</GATEWAY>\n"

char statdata[170];
uint8_t statusUpload = 13;

struct sysstatus{
uint16_t bat;
uint8_t sol;
uint8_t stat;
}sysstatus;


uint8_t sys_status(void)
{
	uint8_t rc;
	UINT bw;
	sysstatus.bat = charge.bat1 << 8;
	sysstatus.bat &= 0xff00;
	sysstatus.bat |= charge.bat2;
	sysstatus.sol = charge.sol;
	sysstatus.stat = 0;
	sysstatus.stat = (!chk[0])<< 6;
	sysstatus.stat |= (!chk[1]) << 4;
	sysstatus.stat |= (power.charge_status && (0x10)) << 2;
	sysstatus.stat |= (power.charge_status & (0x01)) << 0;
	sprintf(&statdata[0], stats, sysstatus.bat, sysstatus.sol,sysstatus.stat,tm->YYYY,tm->MM,tm->DD,tm->hh,tm->mm,tm->ss);

	debug(VERBOSE,"%s\n\r",&statdata[0]);
	/* Lock the Mutex*/
	CoEnterMutexSection(file_mutex);

	rc = f_open(&store, "./root/status.xml", FA_WRITE|FA_READ);
	if(!rc)
	f_sync(&store);
	if (rc) die(rc);
	if(rc != 0)
	{
		if(rc == 4)				// If file is not found
		{
			debug(CONSOLE,"%s\n\r","STATUS:status.xml not Found");
			rc = f_open(&store, "./root/status.xml", FA_WRITE|FA_READ|FA_CREATE_ALWAYS);
			f_sync(&store);
			if (rc) die(rc);
		}
	}
	else{
	// IF something is there in destn file
	if(!(f_size(&store) == 0))
	{
	// Overwriting the Endtag
		rc = f_lseek(&store, f_size(&store)- strlen(ENDTAG)-1);
	}
	//If nothing is present in the file
	else{
		rc = f_write(&store, STARTTAG, strlen(STARTTAG), &bw);
		f_sync(&store);
		//if (rc) die(rc);
	}
	//debug(CONSOLE,"%s\n\r","STATUS:Starttag done");
	rc = f_write(&store, statdata, strlen(statdata),&bw);
	f_sync(&store);
	//if (rc) die(rc);
	//debug(CONSOLE,"%s\n\r","STATUS:data done");
	rc = f_write(&store, ENDTAG, strlen(ENDTAG),&bw);
	f_sync(&store);
	//if (rc) die(rc);
	 //debug(CONSOLE,"%s\n\r","STATUS:endtag done");
	rc = f_close(&store);
	//if (rc) die(rc);
	}

	/* Release the lock */
	CoLeaveMutexSection(file_mutex);
	return rc;
}



