#include "TypeDefs.h"

typedef enum {
		mdmOK	=0,						// Everything is OK
		mdmFail,						// Operation failed
		mdmInitFail,					// Init failed
		mdmAttFail,						// CGATT Failed
		mdmApnFail,						// ApN setting failed
		mdmIPFail,						// IP unable to get
		mdmConnectFail,					// Socket conncetion failed
		mdmTimeOut,						// Response timedout
		mdmSendFail,					// If sending fails
		mdmReadFail
	}mdmStatus;

typedef struct{
		char 			*ip_addr;		// Point to the ip address(192:168:51:28)
		//char 			*provider;		// Points to the signal provider name
		//uint8_t 		signal;			// Holds the signal strngth
		//char 			*msgCentreNo;	// Message center number
	} mdmInfo;

	typedef struct {
		//uint16_t dtr_pin;				// Pin used for dtr signaling
		//COX_SERIAL_PI *uart;			// Uart used to communcate with Modem
		mdmInfo *minfo;					// Modem informations
	}mdmIface ;

	typedef struct sockaddr_in {
		char 	*port;					// Contains the port string
		char 	*addr;					// Contains the address wether it is ip or URL
	}server;

	#define DATA		1
	#define COMMAND		2

	/* Function Declarations*/
	mdmStatus mdmInit(mdmIface *mdm);
	mdmStatus mdmNWControl(mdmIface *mdm,uint8_t attach);
	mdmStatus mdmIPup(mdmIface *mdm);
	mdmStatus mdmClose(mdmIface *mdm);
	mdmStatus mdmShut(mdmIface *mdm);
	mdmStatus mdmTCPConnect(mdmIface *mdm, server *obj);
	mdmStatus mdmUDPConnect(mdmIface *mdm, server *obj);
	mdmStatus mdmRead(mdmIface *mdm, char *buffer, uint32_t len);
	mdmStatus mdmWrite(mdmIface *mdm, char *buffer, uint32_t len,uint8_t send);
	mdmStatus mdmSentData(mdmIface *mdm);
