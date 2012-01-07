#include "modem.h"
#include "ff.h"
#include "stm32f10x.h"
#include <stdint.h>	// for including uint_8 etc
#include <stdio.h>  //for including NULL
#include "main.h"

#define CLR_BUFFER(buff) memset(buff,'\0',MAX_BUFF_SIZE)

/*
 * External function definition
 */

extern void die(FRESULT);

/*
 * Declaration of static global variables
 */

static char buffer[MAX_BUFF_SIZE]={'\0'};
static char get[100]={'\0'};

uint32_t size;				/* size of file */
static mdmStatus res;

/*
 * Decleration of the Public functions
 */
uint8_t uploadFile(mdmIface *mdm, const char *file, server *tcp);
httpStatus mdmHttpRes(mdmIface *mdm, uint32_t* ContLen);
/*
 * Decleration of the Private functions
 */
mdmStatus login(mdmIface *mdm);
mdmStatus sendHeader(mdmIface *mdm, uint32_t file_size, char *cookie );
mdmStatus sendData(mdmIface *mdm ,const char *file);
uint32_t getFileSize(const char *file);


/*
 * This function will upload the file to the remote server
 */
uint8_t uploadFile(mdmIface *mdm, const char *file, server *tcp){
		res = mdmOK;
		//start the fsm for modem
		res = mdmFSM(mdm);
		//create a TCP connection to the server
		res = mdmTCPConnect(mdm, tcp);
		//login and get the cookie

		if(res == mdmOK){
		//if( (login(mdm)) == mdmOK ){
			//send the file size and the cookie stored in buffer
			if( (sendHeader(mdm, getFileSize(file), &get[0] )) == mdmOK ){
				//send the data
				if( (sendData(mdm ,file)) == mdmOK){
					// Read the response if sending is successful
					res = mdmHttpRes(mdm, &size);
					if(res == httpOK || res == httpLenUnkwn )
					{
						// Match the string in the body of the response
						res = mdmReadMatch(mdm,"Upload");
						if(res == mdmOK)
						{
							printf("File uploaded\n\r");
							mdmClose(mdm);
							return res;
						}
						else
						{
							printf("File not uploaded\n\r");
						}
					}
					else{
						printf("Http Response not recvd\n\r");
					}
				}
				else
					printf("\nSending File Failed");
			}else
				printf("\nHeader post failed");
		//}else
		//	printf("\nLogin Failed");
		}
		//close the TCP connection to the server
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
		res = mdmTransSend(mdm, GET_COOKIE, strlen(GET_COOKIE), 1);

	if(res == mdmOK)
	{
		res = serialMatch(mdm, "HTTP/1.1", 100);
	    res = serialCopy(&get[0], ' ','\r');
	    printf("response= %s\n",&get[0]);

	    res = serialMatch(mdm, "Set-Cookie:", 100);
	    res = serialCopy(&get[0],' ',';');
	    printf("Cookie=%s\n",&get[0]);

	    res = serialMatch(mdm, "Set-Cookie:",100);
	    if(res != mdmTimeOut)
	    res = serialCopy(&get[0],' ',';');

	    printf("NewCookie=%s\n",&get[0]);
	 }
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
        sprintf(buffer, "%d" ,(file_size + strlen(BEFORE_DATA) + strlen(AFTER_DATA)));
        printf("\nPOST DATA Size is = %d, %d",file_size,file_size+strlen(BEFORE_DATA)+strlen(AFTER_DATA) );


        printf("\nSENDING THE Headers------>");
        //Sending  Header
        res = mdmTransSend(mdm,POST_H, strlen(POST_H));
        if(res != mdmOK) return res;
       // printf(POST_H);
        //send the content length
        res = mdmTransSend( mdm, buffer, strlen(buffer));
        if(res != mdmOK) return res;
        //printf("%s",buffer);
       // res = mdmWrite(mdm, CLRF ,strlen(CLRF), 0);//uncomment if cookie is present

        //send the string cookie
       // res = mdmWrite(mdm, COOKIE , strlen(COOKIE),0);
        //actual cookie
        //res = mdmWrite(mdm, cookie , strlen(cookie),0);
        //printf("\n My Cookie: %s",cookie);
        res = mdmTransSend(mdm, DCLRF ,strlen(DCLRF));//send the header from the modem
        if(res != mdmOK) return res;
       // printf(DCLRF);
        printf("\nEND Headers------>");
        //}
        return res;
}

mdmStatus sendData(mdmIface *mdm ,const char *file){
        uint32_t datalen  = 0;
        mdmStatus res = mdmOK ;
        UINT rbytes;			/* Read bytes */

        printf("\nSENDING DATA------>");

        //sending BEFORE_DATA(needed for sending the file in multipart)
        res = mdmTransSend(mdm, BEFORE_DATA , strlen(BEFORE_DATA),1);
        if(res != mdmOK) return res;

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
        		// If there is any prblem with file while reading
        		// return
        		f_close(&send);
        		return rc;
        	}
            printf("File Data = %d\n\r",size);

           res = mdmTransSend(mdm, buffer ,(uint32_t)rbytes , 1);
           if (res != mdmOK){
        	   printf("send Fail\n\r");
        	   f_close(&send);
        	   return res;
               }
               size = size - rbytes;
        }
        f_close(&send);

        //sending AFTER_DATA(needed for sending the file in multipart)
        res = mdmTransSend(mdm, AFTER_DATA , strlen(AFTER_DATA),1);
        if (res != mdmOK) return res;


        printf("\nEND SENDING DATA------>");
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


	printf("NSize=%d\n\r",size);
	return size;
}


/*
	 * This function reads the http response
	 * Based on the return http code it returns success or failure
	 * Also, it stores the content length into length field if content length
	 * is there in response
	 * Parameters:
	 * @mdm: modem interface
	 * @ContLen: Body length
	 * @return: mdmOK if response code is desired one
	 * 			mdmTimeOut if response code is not found
	 * 			mdmErr if Error is returned by Modem
	 *
	 */
	httpStatus mdmHttpRes(mdmIface *mdm, uint32_t* ContLen)
	{
		uint16_t code, i= 0;
		CLR_BUFFER(buffer);
		res = serialMatch(mdm, "HTTP/1.1", 60000);
		if(res == mdmOK )
		{
			res = serialCopy(&buffer[0], ' ','\r');
			printf("response= %s\n",&buffer[0]);
			while(i < 3){
				if(i!= 0)
					code *=10;
				code += (buffer[i] - 48);
				i++;
			}
			i = 0;
			printf("Conv=%d\n\r",code);
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
			default:
				res = httpErr;
				break;
			}

			// If response code is OK; Lets find the Content length
			if(res == httpOK)
			{
				i = 0;
				res = serialMatch(mdm, "Content-Length:", 100);
				if(res != mdmTimeOut && res != mdmErr )
				{
					res = serialCopy(&buffer[0], ' ','\r');
					//printf("Length= %s\n\r",&buffer[0]);
					while(buffer[i]){
						if(i!= 0)
							*ContLen *=10;

						*ContLen += buffer[i] - 48;
						i++;
					}
					printf("Length= %d\n",*ContLen);
				}
				else
				{
					// Length field not found
					return httpLenUnkwn;
				}
			}
		}
		else{
			if(res == mdmTimeOut)res = httpTimeOut;
			if(res == mdmErr || mdm == mdmFail)res = httpErr;
		}

		return res;
	}

	/**
	 * Function which collects the Body of the HTTP response and stores it
	 * into the file
	 * Parameters:
	 * @mdm: modem interface
	 * @file: where to save
	 * @len: Length of the body to read
	 */
	httpStatus mdmHttpBody()
	{}
