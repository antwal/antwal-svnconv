#include <stdio.h>
#include "modem.h"
#include "stddef.h"
#include "debug.h"


mdmIface smsSend(mdmIface *mdm, const char* phNo, char * Msg)
{
	uint8_t i = 0;
	mdmWakeUp(mdm);
	mdmSwitch(mdm, COMMAND);

	// SMS system to test mode
	sendwait(mdm, "|AT+CMGF=1\r","OK", 300);
	// GSM 7 bit mode character set
	sendwait(mdm, "|AT+CSCS=\"GSM\"\r","OK",300);
	// Send sms
	sendwait(mdm,"|AT+CMGS=\"+",NULL,0);		// Send Command
	sendwait(mdm,phNo,NULL,0);					// Send Ph No.
	sendwait(mdm, "\"\r",">",3000);				// Send \r with closing quotes

	while(Msg[i] != '\0')
	{
		serial_send(Msg[i]);
		dbg_printf("%c ",Msg[i]);
		i++;
	}

	i = 0x1a;
	serial_send(i);
	serialMatch(mdm, "OK", 500);

}
