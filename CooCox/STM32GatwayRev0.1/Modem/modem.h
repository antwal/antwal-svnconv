#include "TypeDefs.h"
#include "buffer.h"
#include "cox_serial.h"
#include <stm32_pio.h>

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
		mdmReadFail,					// If reading fails
		mdmErr							// If Error is returned in response
	}mdmStatus;

COX_SERIAL_PI *myUSART1;
//#define APaddr "\"gprssouth.cellone.in\""
#define APaddr "\"aircelwap\"\r\n"

#define serial_tx_ready()       1               							// Transmitter empty
#define serial_send(a)          myUSART1->Write(&a, 1)      				// Transmit char a
#define serial_rx_ready()       bufferDataAvail(&modem_buffer) 				// Receiver full
#define serial_get(buff)        buff = bufferGetFromFront(&modem_buffer)   	// Receive char from modem
#define serial_error()          0                               			// USART error
#define serial_fix()            1               							// Clear error


typedef struct{
		//char 			*ip_addr;		// Point to the ip address(192:168:51:28)
		//char 			*provider;		// Points to the signal provider name
		//uint8_t 		signal;			// Holds the signal strngth
		//char 			*msgCentreNo;	// Message center number
	} mdmInfo;

	typedef struct {
		uint16_t     dtr_pin;          // Pin of the dtr
		COX_PIO_PI   *pio;             // The PIO Interface to use
		char *ip_addr;
		// This tells if the modem is locked by any task
		// It will be used for putting modem in sleep or waking it up
		uint8_t lock;
	}mdmIface ;

// Modem Interface
mdmIface modm;


	typedef struct sockaddr_in {
		char 	*port;					// Contains the port string
		char 	*addr;					// Contains the address wether it is ip or URL
	}server;

	#define DATA		1
	#define COMMAND		2

	/* Function Declarations*/
	void mdmSleep(mdmIface *mdm);
	void mdmWakeUp(mdmIface *mdm);
	mdmStatus mdmCreateLock(mdmIface * mdm);
	mdmStatus mdmLock(mdmIface *mdm);
	mdmStatus mdmUnLock(mdmIface *mdm);
	mdmStatus mdmInit(mdmIface *mdm);
	mdmStatus mdmNWControl(mdmIface *mdm,uint8_t attach);
	mdmStatus mdmIPup(mdmIface *mdm);
	mdmStatus mdmClose(mdmIface *mdm);
	mdmStatus mdmShut(mdmIface *mdm);
	mdmStatus mdmTCPConnect(mdmIface *mdm, server *obj);
	mdmStatus mdmUDPConnect(mdmIface *mdm, server *obj);
	mdmStatus mdmRead(mdmIface *mdm, char *buffer, uint32_t len);
	mdmStatus mdmWrite(mdmIface *mdm, char *buffer, uint32_t len,uint8_t send);
	mdmStatus mdmTransRead(mdmIface *mdm, char *buffer, uint32_t *len);
	mdmStatus mdmTransSend(mdmIface *mdm, char *buffer, uint32_t len);
	mdmStatus mdmSentData(mdmIface *mdm);
	mdmStatus mdmSwitch(mdmIface *mdm, uint8_t mode);

	mdmIface smsSend(mdmIface *mdm, const char* phNo, char * Msg);
