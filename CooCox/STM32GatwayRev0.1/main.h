////////////////////////////////////////////////////////////////////////////////////////////
/*
 * File system related variables
 */
#include "ff.h"
FATFS fatfs;				/* File system object */
FRESULT rc;					/* Result code */
FIL store,					/* File object for store.xml */
	send,					/* File object for send.xml */
	alldata	;				/* File object for alldata.xml */

#define mount(fs)		f_mount(0,&fs)
#define umount(fs)		f_mount(0,NULL)

////////////////////////////////////////////////////////////////////////////////////////////
/*
 * Variables for HTTP. used in http_file.c
 */

typedef enum {
	httpOK = 0,					// If response code is fine
	httpErr,				// If Error returned from modem or Response code indicates error
	httpTimeOut,			// Timeout while waiting for the response
	httpLenUnkwn			// If length field is not present
}httpStatus;

#define GET_COOKIE \
"POST /uagri/?q=user/login HTTP/1.1\r\n\
Host: ubicomp.in\r\n\
Accept: */*\r\n\
Range: bytes=0-1\r\n\
Content-Type: application/x-www-form-urlencoded\r\n\
Content-Length: 55\r\n\
\r\n\
name=uagri&pass=uagri123&form_id=user_login&op=Log%20in"

/*"POST /uagri/?q=node/75 HTTP/1.1\r\n*/
#define POST_H \
"POST /upload_file.php HTTP/1.1\r\n\
Host: 14.96.145.172\r\n\
Accept: text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8\r\n\
Accept-Language: en-us,en;q=0.5\r\n\
Accept-Charset: ISO-8859-1,utf-8;q=0.7,*;q=0.7\r\n\
Keep-Alive: 115\r\n\
Content-Type: multipart/form-data; boundary=--80346\r\n\
Content-Length:"


#define COOKIE "Cookie: "
#define CLRF "\r\n"
#define DCLRF "\r\n\r\n"

#define BEFORE_DATA \
"----80346\r\n\
Content-Disposition: form-data; name=\"file\"; filename=\"mydata\"\r\n\
Content-Type: application/octet-stream\r\n\r\n"


#define AFTER_DATA \
"\r\n----80346\r\n\
Content-Disposition: form-data; name=\"submit\"\r\n\r\n\
Submit\r\n\
----80346--"

// Buffer used to read data from the SD card while sending to the internet
#define MAX_BUFF_SIZE 1000


////////////////////////////////////////////////////////////////////////////////////////////
#include "stm32_rtc.h"
/*
 *  Global status structure which keeps the system status
 */
struct {
	uint8_t WSNTask;
	uint8_t UPLOADTask;
	uint32_t storeSize;
	uint32_t sendSize;
	uint32_t alldataSize;
	uint16_t batt1Volt;
	uint16_t batt2Volt;
	uint16_t solarVolt;
	TIME* lastMoteTime;
	uint8_t lastMote;

};

////////////////////////////////////////////////////////////////////////////////////////////
#include "coocox.h"
/*---------------------------- Symbol Define -------------------------------*/
#define STACK_SIZE_UPLOAD 	200             /*!< Define a Default task size */
#define STACK_SIZE_WSN 		200
#define STACK_SIZE_WATCHDOG 100             /*!< Define a Default task size */
#define STACK_SIZE_DEBUG	200


/*---------------------------- Variable Define -------------------------------*/
OS_STK     watchdog_stk[STACK_SIZE_WATCHDOG];	  /*!< Define "taskA" task stack */
OS_STK     upload_stk[STACK_SIZE_UPLOAD];	  					/*!< Define "taskB" task stack */
OS_STK     wsn_stk[STACK_SIZE_WSN];	  /*!< Define "led" task stack   */
OS_STK	   debug_stk[STACK_SIZE_DEBUG];

////////////////////////////////////////////////////////////////////////////////////////////
//Queue for Processing the data recieved
#define MAIL_QUEUE_SIZE 16
// Task ids
OS_TID WSN, UPLOAD, WATCH,DEBUG;
//Usart event flag
OS_FlagID flag;

//The mutex is used to get mutual access to the data file  storing the WSN data
OS_MutexID file_mutex;

//Used to get the mutual access to GSM Gprs Modem
OS_MutexID modem_mutex;

//Used to get the mutual access to the Uart2 used for printf
OS_MutexID printf_mutex;

OS_EventID raw_queue_id;				// Queue for raw packet forwading between task 1 and 2

////////////////////////////////////////////////////////////////////////////////////////////

volatile uint32_t TIME_TICK;									// 10 millseconds counter

////////////////////////////////////////////////////////////////////////////////////////////


