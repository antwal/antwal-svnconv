#include "modem.h"

char phBuffer[28]={'0'};

mdmIface smsSend(mdmIface *mdm, const char* phNo, const char * Msg)
{
	uint8_t i = 0;
	mdmSwitch(mdm, COMMAND);

	// SMS system to test mode
	sendwait(mdm, "|AT+CMGF=1\r","OK", 300);
	// GSM 7 bit mode character set
	sendwait(mdm, "|AT+CSCS=\"GSM\"\r","OK",300);
	// Send sms
	sprintf(&phBuffer[0],"|AT+CMGS=\"+%s\"\r",phNo);
	sendwait(mdm, &phBuffer[0],"|>",300);

	while(Msg[i] != '\0')
	{
		serial_send(Msg[i]);
		printf(" %c",Msg[i]);
		i++;
	}

	i = 0x1a;
	serial_send(i);
	serialMatch(mdm, "OK", 500);

}
