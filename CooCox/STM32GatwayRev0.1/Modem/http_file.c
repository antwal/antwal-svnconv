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

		//if( (login(mdm)) == mdmOK ){
			//send the file size and the cookie stored in buffer
			if( (sendHeader(mdm, getFileSize(file), &get[0] )) == mdmOK ){
				//send the data
				if( (sendData(mdm ,file)) == mdmOK){
				    while(res != mdmReadFail){
					     res = mdmRead(mdm, get, 20);
                    }
					return SUCCESS;
				}else
					printf("\nSending File Failed");
			}else
				printf("\nHeader post failed");
		//}else
		//	printf("\nLogin Failed");

		//close the TCP connection to the server
		res = mdmClose(mdm);
		return ERROR;

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
       // printf(POST_H);
        //send the content length
        res = mdmTransSend( mdm, buffer, strlen(buffer));
        //printf("%s",buffer);
       // res = mdmWrite(mdm, CLRF ,strlen(CLRF), 0);//uncomment if cookie is present

        //send the string cookie
       // res = mdmWrite(mdm, COOKIE , strlen(COOKIE),0);
        //actual cookie
        //res = mdmWrite(mdm, cookie , strlen(cookie),0);
        //printf("\n My Cookie: %s",cookie);
        res = mdmTransSend(mdm, DCLRF ,strlen(DCLRF));//send the header from the modem
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
        //if((res = mdmSend(mdm)) == mdmOK){
                res = mdmTransSend(mdm, BEFORE_DATA , strlen(BEFORE_DATA),1);
                if(res != mdmOK) return res;
       // }

      	//open file
    	rc = f_open(&send, file, FA_OPEN_EXISTING |FA_READ);
    	if(rc ) die(rc);


       //read the file  and send it through modem
        while (size > 0 ){
        	rc = f_read(&send, buffer, sizeof(buffer), &rbytes);    /* Read a chunk of src file */
        	if (rc) die(rc);
            printf("File Data = %d\n\r",size);

            //if((res = mdmSend(mdm)) == mdmOK){

                    res = mdmTransSend(mdm, buffer ,(uint32_t)rbytes , 1);
                    // mdmSentData(mdm);

                    if (res != mdmOK){
                    	printf("send Fail\n\r");
                    	//close file
                    	f_close(&send);

                       	return res;
                    }
                    size = size - rbytes;
            //}
        }
        f_close(&send);

        //sending AFTER_DATA(needed for sending the file in multipart)
        //if((res = mdmSend(mdm)) == mdmOK){
                res = mdmTransSend(mdm, AFTER_DATA , strlen(AFTER_DATA),1);
                if (res != mdmOK) return res;
        //}

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

