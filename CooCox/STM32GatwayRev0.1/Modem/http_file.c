#include "modem.h"

#define GET_COOKIE \
"POST /uagri/?q=user/login HTTP/1.1\r\n\
Host: ubicomp.in\r\n\
Accept: */*\r\n\
Range: bytes=0-1\r\n\
Content-Type: application/x-www-form-urlencoded\r\n\
Content-Length: 55\r\n\
\r\n\
name=uagri&pass=uagri123&form_id=user_login&op=Log%20in"

char get[100];
uint8_t res;

mdmStatus Login(mdmIface *mdm)
{

	// Retrieves the cookie for the site
	if(!mdmSend(mdm))
		res = mdmWrite(mdm, GET_COOKIE, strlen(GET_COOKIE), 1);

	if(res == mdmOK)
	{
		res = serialMatch(mdm, "HTTP/1.1", 100);
	    res = serialCopy(get, ' ','\r');
	    printf("response= %s\n",get);

	    res = serialMatch(&modm, "Set-Cookie:", 100);
	    res = serialCopy(get,' ',';');
	    printf("Cookie=%s\n",get);

	    res = serialMatch(&modm, "Set-Cookie:",100);
	    if(res != mdmTimeOut)
	    res = serialCopy(get,' ',';');

	    printf("NewCookie=%s\n",get);

	}

}
mdmStatus sendHeader(mdmIface *mdm, uint32_t data_size, char *cookie ){
        mdmStatus res = mdmOK;

        CLR_BUFFER(buffer);
        sprintf(buffer, "%d" ,(data_size + strlen(BEFORE_DATA) + strlen(AFTER_DATA)));
        printf("\nPOST DATA Size is = %s",buffer);


        printf("\nSENDING THE Headers------>");
        //Sending  Header
        res = mdmWrite(mdm, POST_H, strlen(POST_H), 0);
        printf(POST_H);
        //send the content length
        res = mdmWrite(mdm, buffer, strlen(buffer), 0);
        printf("%s",buffer);
        res = mdmWrite(mdm, CLRF ,strlen(CLRF), 0);//uncomment if cookie is present

        //send the cookie
        res = mdmWrite(mdm, COOKIE , strlen(COOKIE),0);
        //actual cookie
        res = mdmWrite(mdm, cookie , strlen(cookie),0);
        //printf("\n My Cookie: %s",cookie);
        res = mdmWrite(mdm, DCLRF ,strlen(DCLRF), 1);//send the header from the modem
        printf(DCLRF);
        printf("\nEND Headers------>");

        return res;
}

mdmStatus sendData(mdmIface *mdm ,const char *filename){
        int datalen  = 0;
        FILE *fp;
        int rbytes;
        mdmStatus res = mdmOK ;

        printf("\nSENDING DATA------>");

        //sending BEFORE_DATA(needed for sending the file in multipart)
        if((res = mdmSend(mdm)) == mdmOK){
                res = mdmWrite(&mdm, BEFORE_DATA , strlen(BEFORE_DATA),1);
        }

        datalen = getFileSize(filename);

        fp=fopen(filename,"rb");
        if(fp==NULL) {
           printf("file not found!\n");
        }

        //read the file  and send it through modem
        while (datalen > 0 ){
                rbytes = fread(buffer, sizeof(unsigned char),sizeof(buffer)-1, fp);
                printf("File Data : %s",buffer);

                if((res = mdmSend(mdm)) == mdmOK){
                        do{
                                res = mdmWrite(&mdm, buffer , rbytes,1);
                        }while(res != mdmOK);

                        datalen = datalen-rbytes;
                }
        }
        fclose(fp);
        //sending AFTER_DATA(needed for sending the file in multipart)
        if((res = mdmSend(mdm)) == mdmOK){
                res = mdmWrite(&mdm, AFTER_DATA , strlen(AFTER_DATA),1);
        }

        printf("\nEND SENDING DATA------>");
        return res;
}

