#include "modem.h"
#include "ff.h"
#include <stdint.h>	// for including uint_8 etc
#include <stdio.h>  //for including NULL
#include <string.h>
#include "main.h"
#include "watchdog.h" // for debugging using watchdog
#include "http.h"
#include "debug.h"
#include "config.h"
#include "buffer.h"

#define CLR_BUFFER(buff) memset(buff,'\0',MAX_BUFF_SIZE)

extern struct config sysconfdup ;

/*
 * External function and variables definition
 */

extern void die(FRESULT);
extern dogDebug myDogDebug[];


/*
 * Declaration of static global variables
 */

static char buffer[MAX_BUFF_SIZE]={'\0'};
static char get[100]={'\0'};

uint16_t size;				/* size of file */
static mdmStatus res;
extern	cBuffer modem_buffer;								// Receive Buffer for modem

/*
 * This function will upload the file to the remote server
 */
uint8_t uploadFile(mdmIface *mdm, const char *file, server *tcp){
		res = mdmOK;
		//start the fsm for modem
		res = mdmFSM(mdm);
		// If IP is received
		if(res == mdmOK){
			//create a TCP connection to the server
			res = mdmTCPConnect(mdm, tcp);
			//login and get the cookie


			if(res == mdmOK){
			if( (login(mdm)) == mdmOK ){
			//send the file size and the cookie stored in buffer
			if( (sendHeader(mdm, getFileSize(file), &get[0] )) == mdmOK ){
				//send the data
				if( (sendData(mdm ,file)) == mdmOK){
					// Read the response if sending is successful
					res = mdmHttpRes(mdm, &size, httpRes);
					if(res == httpOK || res == httpLenUnkwn )
					{
						// Match the string in the body of the response
						res = mdmHttpBody(mdm, "Data recv OK", &size, 1500);
						if(res == mdmOK)
						{
							debug(LOG,"%s\n\r","File uploaded");
							mdmClose(mdm);
							return res;
						}
						else
						{
							debug(LOG,"%s\n\r","File not uploaded");
						}
					}
					else{
						debug(LOG,"%s\n\r","Http Response not recvd");
					}
				}
				else
					debug(LOG,"%s\n\r","Sending File Failed");
			}else
				debug(LOG,"%s\n\r","Header post failed");
		}else
		debug(LOG,"%s\n\r","Login Failed");
			}
		}
		//close the TCP connection to the server
		bufferFlush(&modem_buffer);
		mdmSwitch(mdm, COMMAND);
		mdmClose(mdm);
		return mdmSendFail;

}

/*
 * Private functions
 */


/*
 * This function will log to the site and store the cookie in the buffer
 */
mdmStatus login(mdmIface *mdm)
{
	// Retrieves the cookie for the site
	//if(!mdmSend(mdm))
	uint8_t count = 0;
	uint16_t len =0;
	do{
		dbg_printf("%s\n\r","Log in");
		res = mdmTransSend(mdm, &GET_COOKIE_1[0], strlen(&GET_COOKIE_1[0]));
		res = mdmTransSend(mdm,&sysconfdup.cookie_respath[0], strlen(&sysconfdup.cookie_respath[0]));
		res = mdmTransSend(mdm, GET_COOKIE_2, strlen(GET_COOKIE_2));
		res = mdmTransSend(mdm,&sysconfdup.uploadsite[0], strlen(&sysconfdup.uploadsite[0]));
		res = mdmTransSend(mdm, GET_COOKIE_3, strlen(GET_COOKIE_3));
		res = mdmTransSend(mdm,&sysconfdup.username[0], strlen(&sysconfdup.username[0]));
		res = mdmTransSend(mdm, GET_COOKIE_4, strlen(GET_COOKIE_4));
		res = mdmTransSend(mdm,&sysconfdup.password[0], strlen(&sysconfdup.password[0]));
		res = mdmTransSend(mdm, GET_COOKIE_5, strlen(GET_COOKIE_5));

		if(res == mdmOK)
		{
			res = mdmHttpRes(mdm, NULL, httpLogin);
		}
		count++;
	}
	while(count < 3 && res != httpOK);

	return res;

}

/*
 * This function will create the header for sending a file using post method
 * and also send the  header to the server
 */

mdmStatus sendHeader(mdmIface *mdm, uint32_t file_size, char *cookie ){
        mdmStatus res = mdmOK;

        /*
         * calculate the total size of data to be posted and store the value
         * as string in buffer
         */

        CLR_BUFFER(buffer);
        //if((res = mdmSend(mdm)) == mdmOK){

        // Uncomment below lines if POST File is used
/*
        sprintf(buffer, "%d" ,(file_size + strlen(BEFORE_DATA) + strlen(AFTER_DATA)));
        debug(CONSOLE,"POSTDATA Size=%d\n\r",file_size+strlen(BEFORE_DATA)+strlen(AFTER_DATA) );
*/
        sprintf(buffer, "%d" ,(file_size));
        debug(CONSOLE,"POSTDATA Size=%d\n\r",file_size);

        debug(CONSOLE,"%s\n\r","Sending Headers");
        //Sending  Header
        res = mdmTransSend(mdm,POST_H_1, strlen(POST_H_1));
        res = mdmTransSend(mdm,&sysconfdup.upload_respath[0], strlen(&sysconfdup.upload_respath[0]));
        res = mdmTransSend(mdm,POST_H_2, strlen(POST_H_2));
        res = mdmTransSend(mdm,&sysconfdup.uploadsite[0], strlen(&sysconfdup.uploadsite[0]));
        res = mdmTransSend(mdm,POST_H_3, strlen(POST_H_3));
        if(res != mdmOK) return res;
       // printf(POST_H);
        //send the content length
        res = mdmTransSend( mdm, buffer, strlen(buffer));
        if(res != mdmOK) return res;
        //printf("%s",buffer);
        res = mdmTransSend(mdm, CLRF ,strlen(CLRF));//uncomment if cookie is present

        //send the string cookie
        res = mdmTransSend(mdm, COOKIE , strlen(COOKIE));
        //actual cookie
        res = mdmTransSend(mdm, cookie , strlen(cookie));
       // dbg_printf("\n My Cookie: %s",cookie);
        res = mdmTransSend(mdm, DCLRF ,strlen(DCLRF));//send the header from the modem
        if(res != mdmOK) return res;
        //printf(DCLRF);
        debug(CONSOLE,"%s\n\r","End Headers");
        //}
        return res;
}

mdmStatus sendData(mdmIface *mdm ,const char *file){
        mdmStatus res = mdmOK ;
        UINT rbytes;			/* Read bytes */

        debug(LOG,"%s\n\r","SENDING DATA");

        // Uncomment below lines if POST File is used
/*        //sending BEFORE_DATA(needed for sending the file in multipart)
        res = mdmTransSend(mdm, BEFORE_DATA , strlen(BEFORE_DATA));
        if(res != mdmOK) return res;
*/
      	//open file
    	rc = f_open(&send, file, FA_READ);
    	if (rc) die(rc);
    	if(rc != FR_OK)
    	{
    		// Since file is having some problem
    		return rc;
    	}

       //read the file  and send it through modem
        while (size > 0 ){
        	rc = f_read(&send, buffer, sizeof(buffer), &rbytes);    /* Read a chunk of src file */
        	if (rc) die(rc);
        	if(rc != FR_OK)
        	{
        		// If there is any prblem with file while reading return
        		f_close(&send);
        		return rc;
        	}
            //debug(CONSOLE,"File Data = %d\n\r",size);

           //uncomment the below mentioned line if  using watchdog
           WDG_setTaskState(&myDogDebug[0], UPLOADING);
           res = mdmTransSend(mdm, buffer ,(uint32_t)rbytes );
           if (res != mdmOK){
        	   debug(LOG,"%s\n\r","send Fail");
        	   f_close(&send);
        	   return res;
               }
               size = size - rbytes;
        }
        f_close(&send);

        // Uncomment below lines if POST File is used
/*        //sending AFTER_DATA(needed for sending the file in multipart)
        res = mdmTransSend(mdm, AFTER_DATA , strlen(AFTER_DATA));
        if (res != mdmOK) return res;
*/

        debug(LOG,"%s\n\r","SENDING DATA DONE");
        return res;
}

/*
 * Function gets the size of the file
 */

uint32_t getFileSize(const char *file){

	//open an existing file
	rc =f_open(&send, file, FA_READ);
	if(rc ) die(rc);

	//Get the file size
	size = f_size(&send);

	//close the file
	rc = f_close(&send);
	if (rc) die(rc);


	debug(CONSOLE,"FileSize=%d\n\r",size);
	return size;
}


/*
	 * This function reads the http response
	 * Based on the return http code it returns success or failure
	 * Also, it stores the content length into length field if content length
	 * is there in response
	 * Parameters:
	 * @mdm: modem interface
	 * @ContLen: Body length; If NULL length is not required else some variable address should be passed
	 * @cond   : Tells if the response is from login(Cookies need to be stored) or general POST response
	 * @return: mdmOK if response code is desired one
	 * 			mdmTimeOut if response code is not found
	 * 			mdmErr if Error is returned by Modem
	 *
	 */
httpStatus mdmHttpRes(mdmIface *mdm, uint16_t* bodLen, uint8_t cond )
	{
		uint16_t code = 0, i= 0;
		CLR_BUFFER(buffer);
		res = serialMatch(mdm, "HTTP/1.1", 1500);
		if(res == mdmOK )
		{
			res = serialCopy(&buffer[0], ' ','\r');
			//debug(CONSOLE,"response=%s\n\r",&buffer[0]);

			while(i < 3){
				if(i!= 0)
					code *=10;
				if(buffer[i] >47 && buffer[i] < 58)
				{
					code += (buffer[i] - 48);
				}

				i++;
			}
			i = 0;

			// http response not found
			if(res != mdmOK)
				return httpErr;
			debug(CONSOLE,"ResCode=%d\n\r",code);
			switch(code)
			{
			case 100:
			case 101:
			case 200:
			case 201:
			case 202:
			case 203:
			case 204:
			case 205:
			case 206:
			case 302:
				res = httpOK;
				break;
			case 403:

				//debug(LOG,"%s\r\n","Access Forbidden");
				res = httpErr;
				break;
			default:
				res = httpErr;
				break;
			}

			// Bring out the cookies
			if(res == httpOK && cond == httpLogin)
			{
				 res = serialMatch(mdm, "Set-Cookie:", 200);
			         res = serialCopy(&get[0],' ',';');
				 debug(CONSOLE,"Cookie=%s\n\r",&get[0]);

				 res = serialMatch(mdm, "Set-Cookie:",200);
		       	     if(res != mdmTimeOut){
       	        		 memset(get,0,sizeof(get));
			       	     res = serialCopy(&get[0],' ',';');
			       	     debug(CONSOLE,"NewCookie=%s\n",&get[0]);

				}
			}

			// If response code is OK; and cookies requested are found Lets find the Content length
//			if(res == httpOK)
			{
				i = 0;
				code = serialMatch(mdm, "Content-Length:", 100);
				if(code != mdmTimeOut && code != mdmErr )
				{
					serialCopy(&buffer[0], ' ','\r');
					printf("Length= %s\n\r",&buffer[0]);
					code = 0;
					while(buffer[i]){
						if(i!= 0)
							code *=10;

						code += buffer[i] - 48;
						i++;
					}
					if(bodLen != NULL)
						*bodLen = code;
					debug(CONSOLE,"ResLength=%d\n",code);

				}
				else
				{
					// Length field not found
					*bodLen = 0;
					code = httpLenUnkwn;
				}
			}

			// If some error response is received its better to read out all the body here only
			// Also if possible lets bring out the possible reason that caused the error
			if(res == httpErr && code != httpLenUnkwn)
			{
				if(cond == httpLogin){
				res = mdmHttpBody(mdm, "Page not found", bodLen, 200);			// Timeout is small coz error does not come with big content
					if(res == httpOK)
					debug(LOG, "%s\r\n","Page not found");
				}
				else if(cond == httpRes) {
					res = mdmHttpBody(mdm, "forbidden", bodLen, 200);			// Timeout is small coz error does not come with big content
				}
				return httpErr;
			}

		}
		else{
			if(res == mdmTimeOut)res = httpTimeOut;
			if(res == mdmErr || res == mdmFail)res = httpErr;
			if(code == httpLenUnkwn)res = httpLenUnkwn;
		}

		return res;
	}


	/*
		 * This function can be used to read the HTTP response sent by the server
		 * It looks for the particular response code to match along with error strings:ERROR and CLOSED strings
		 * If any of the two errorstrings is found it immediately comes out.
		 * However if response code is found it keeps reading the len byte until it finish reading or timeout occurs
		 * This is done so as to completely read the response from remote server and empty the buffer at modem side
		 * Parameters:
		 * @mdm: modem interface
		 * @resp : response string which is to be matched in the body of the response; If res = NULL, body will be saved to some file
		 * @len : length of the body
		 * @timeout: wait for the response timeout amount of time and then come out if nothing is coming
		 */
		httpStatus mdmHttpBody(mdmIface *mdm, const char* resp, uint16_t *len, uint16_t timeout)
		{
			uint8_t addr2 =0, addr4 = 0;
			char err[10]="ERROR\r\n";
			char cls[11]="CLOSED\r\n";
			uint8_t errVar = 0, clsVar = 0, out = 0 ;
			uint16_t i =0;

			// Discard all the http header response
			serialMatch(mdm, "\r\n\r\n",100);
			do{
				if(serial_rx_ready())
				{
					serial_get(addr4);
					if(addr4 != '\r' && addr4 != '\n')
					dbg_printf("%c ",addr4);

					// To match the response
					if (resp[addr2] == addr4)
					{
						addr2++;  											// does char match response string
						if (!resp[addr2]){										// All char are matched
				//			printf("%s","\n\r");
						  	out = 1;

						addr2 = 0;					// Finish the remaining buffer
						}
					}
					else addr2 = 0;

					// To match error Condition
					if(err[errVar] == addr4)
					{
						errVar++;  											// does char match response string
						if (!err[errVar]){										// All char are matched
							dbg_printf("%s","\n\r");
							return httpErr;
						}
					}
					else errVar = 0;													// otherwise reset match pointer
					// To match close condition

				if(cls[clsVar] == addr4)
					{
						clsVar++;  											// does char match response string
						if (!cls[clsVar]){										// All char are matched
							dbg_printf("%s","\n\r");
							return httpErr;
						}
					}
					else clsVar = 0;													// otherwise reset match pointer

				i++;

				TIME_SET(0);
				}

			}
			while((*len != i) && (TIME_TICK < timeout));

			// data read returned
			*len = i;
			debug(CONSOLE,"\n\rData read =%d\n\r",i);
			// response or String found
			if(out == 1)
			{
				debug(CONSOLE,"%s\n\r","Match Found");
				return httpOK;

		}
			// Response not matched
			return httpTimeOut;
		}

