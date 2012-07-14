#define STATSTARTTAG		"<GATEWAY>"
#define STATENDTAG			"</GATEWAY>"
extern volatile uint8_t chk[2];


#define stats			"\n\t<GATEWAY>\n\t"\
									"\t<BATT>%04x</BATT>\n\t"\
									"\t<SOLAR>%02x</SOLAR>\n\t"\
									"\t<STATUS>%02x</STATUS>\n\t"\
									"\t<UTIME>%04x</UTIME>\n\t"\
									"\t<MTIME>%04x</MTIME>\n\t"\
									"\t<UFAIL>%02x</UFAIL>\n\t"\
									"\t<RST>%04x</RST>\n\t"\
									"\t<TIME>%04x%02x%02x%02x%02x%02x</TIME>\n\t"\
						"</GATEWAY>\n"

extern uint8_t statusUpload;

struct sysstatus{
	uint16_t bat;
	uint8_t sol;
/*
 *  This includes four info:
 *  6-7 bit: sd card info 1=OK 0:prob
 *  4-5 bit: Modem info 1=OK 0: prob
 *  2-3 bit: charging status of bat1
 *  0-1 bit: charging status of bat2
 */
	uint8_t stat;
	uint16_t timeSinceMote;					// This tells since how long mote data does not come
	int16_t uploadTime;						// This tells how much time was required for upload data
	uint32_t uploadFail;					// This counter counts number of time upload fail
	uint16_t restart;						// counts number of restarts; upper 8 bit: External reset;lower 8bit: watchdog reset
};

extern struct sysstatus sysstatus;
