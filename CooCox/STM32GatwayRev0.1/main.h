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
Host: 14.99.56.93\r\n\
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
