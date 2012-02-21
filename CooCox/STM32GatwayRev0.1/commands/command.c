//----- Include Files ---------------------------------------------------------
#include <string.h>			// include standard C string functions
#include <stdlib.h>			// include stdlib for string conversion functions
#include <stdint.h>

#include "cmdline.h"
#include "vt100.h"
#include "command.h"
#include "config.h"

/*----------Symbols defined in linker script----------------------------------*/
extern uint32_t _sconf;    /*!< Start address for the initialization
                                      values of the .co_conf section.         */
extern uint32_t _econf;     /*!< End address for the .co_conf section         */

extern uint32_t _sdefconf;    /*!< Start address for the initialization
                                      values of the .co_defconf section.      */
extern uint32_t _edefconf;     /*!< End address for the .co_defconf section   */

/* configuration structure resifding in rom */

__attribute__ ((section(".co_conf")))
struct config sysconf ={
	.baud_uart1 = BAUD1,
	.baud_uart2 = BAUD2,
	.baud_uart3 = BAUD3,
	.APN = APN_STRING,
	.APN_username =APN_USERNAME,
	.APN_password=APN_PASSWORD,
	.site = SITE,
	.username= USERNAME,
	.password=PASSWORD,
	.cookie_respath=COOKIE_RESPATH,
	.upload_respath=UPLOAD_RESPATH,
	.watchdog_status = WATCHDOG_STATUS,
	.err_report_status = ERR_RPT_STATUS,
    .reg_phoneno[0]=RES_PHONE0,
	.reg_phoneno[1]=RES_PHONE1,
	.err_phoneno[0]=ERR_PHONE0,
	.err_phoneno[1]=ERR_PHONE1
};

/* default configuration structure that always resides in rom*/
/* configuration structure resifding in rom */

__attribute__ ((section(".co_defconf")))
struct config defconf ={
	.baud_uart1 = BAUD1,
	.baud_uart2 = BAUD2,
	.baud_uart3 = BAUD3,
	.APN = APN_STRING,
	.APN_username =APN_USERNAME,
	.APN_password=APN_PASSWORD,
	.site = SITE,
	.username= USERNAME,
	.password=PASSWORD,
	.cookie_respath=COOKIE_RESPATH,
	.upload_respath=UPLOAD_RESPATH,
	.watchdog_status = WATCHDOG_STATUS,
	.err_report_status = ERR_RPT_STATUS,
    .reg_phoneno[0]=RES_PHONE0,
	.reg_phoneno[1]=RES_PHONE1,
	.err_phoneno[0]=ERR_PHONE0,
	.err_phoneno[1]=ERR_PHONE1
};

/* configuration structure in ram */
struct config sysconfdup;




void addAllcommand(void){
	cmdlineAddCommand("help",		helpFunction);
	cmdlineAddCommand("exit",		exitFunction);
	cmdlineAddCommand("clear",		clearFunction);
	cmdlineAddCommand("setbaud",    setbaudFunction);
	cmdlineAddCommand("setapn",		setapnFunction);
	cmdlineAddCommand("setsite",	setsiteFunction);
	cmdlineAddCommand("setuser",	setuserFunction);
	cmdlineAddCommand("setpass",	setpassFunction);
	cmdlineAddCommand("setcookie",	setcookieFunction);
	cmdlineAddCommand("setupload",	setuploadFunction);
	cmdlineAddCommand("setstatus",	setstatusFunction);
	cmdlineAddCommand("regphone",	regphoneFunction);
	cmdlineAddCommand("errphone",	errphoneFunction);

	cmdlineAddCommand("sysconf",	sysconfFunction);
	cmdlineAddCommand("curconf",	curconfFunction);
	cmdlineAddCommand("saveconf",   saveconfFunction);
	cmdlineAddCommand("setdef",     setdefFunction);
}

void exitFunction(void){
	// to exit, we set Run to FALSE
	//Run = FALSE;
	printf("Exiting Cmdline\r\n");
}

void helpFunction(void)
{
	printf("Available commands are:\r\n");
	printf("help    - displays available commands\r\n");
	printf("exit 	- exits from this command line\r\n");
	printf("clear	- clear the terminal");
	printf("setbaud	- set the baud rate of of uarts setbaud <uartno> <baud>");
	printf("setapn  - sets the apn of the modem");
	printf("setsite - name of the remote server");
	printf("setuser - user name for logging");
	printf("setpass - password");
	printf("setcookie - resource path for logging in ");
	printf("setupload - resource path for uploading a file");
	printf("setstatus - enable/disable watchdog or err reporting sms");
	printf("regphone - registered  phone numbers");
	printf("errphone - registered phone for error reporting");

}

void clearFunction(void){
	vt100ClearScreen();
}

//function for setting the baud rate of the uarts
void setbaudFunction(void){
	if(cmdlineGetArgInt(1) > 0 && cmdlineGetArgInt(1) < 4){
		switch(cmdlineGetArgInt(1)){
			case 1 : sysconfdup.baud_uart1 = cmdlineGetArgInt(2);
					 printf("UART1 Baud %d\r\n",sysconfdup.baud_uart1);
					 break;
			case 2 : sysconfdup.baud_uart2 = cmdlineGetArgInt(2);
					 printf("UART2 Baud %d\r\n",sysconfdup.baud_uart2);
					 break;
			case 3 : sysconfdup.baud_uart3 = cmdlineGetArgInt(2);
					 printf("UART3 Baud %d\r\n",sysconfdup.baud_uart3);
					 break;
			default: break;
		}
	}
	else{
		printf("ERROR\n\r");
		printf("Format: setbaud <uart no> <baud>");
	}
}

//function for setting up the APN of the modem
void setapnFunction(void){
	char *start;
	char *end;
	uint8_t len = 0;
	uint8_t *ptr = &sysconfdup.APN[0];
	uint8_t fieldlen=sizeof(sysconfdup.APN);


	start = cmdlineGetArgStr(1);
	end   = cmdlineGetArgStr(2);

	len = end - start;
	if(len == 0 ){
		printf("No arguments \n\r");
		return;
	}
	if(len < fieldlen){
		memset(ptr,'\0',fieldlen);
		while(start != end && *start != ' ' ){
			*ptr++ = *start++ ;
		}
	}
	else{
		printf("Max %d character allowed\n\r",fieldlen);
	}
}
//set name the remote server
void setsiteFunction(void){
	char *start;
	char *end;
	uint8_t len = 0;
	uint8_t i = 0 ;

	start = cmdlineGetArgStr(1);
	end   = cmdlineGetArgStr(2);

	len = end - start;
	if(len == 0 ){
		printf("No arguments \n\r");
		return;
	}
	if(len < sizeof(sysconfdup.site)){
		memset(&sysconfdup.site[0],'\0',sizeof(sysconfdup.site));
				while(start != end && *start != ' ' ){
			sysconfdup.site[i++]= *start++ ;
		}
	}
	else{
		printf("Max %d character allowed\n\r",sizeof(sysconfdup.site));
	}
}

//set username
void setuserFunction(void){
	char *start;
	char *end;
	uint8_t len = 0;
	uint8_t *ptr = &sysconfdup.username[0];
	uint8_t fieldlen=sizeof(sysconfdup.username);


	start = cmdlineGetArgStr(1);
	end   = cmdlineGetArgStr(2);

	len = end - start;
	if(len == 0 ){
		printf("No arguments \n\r");
		return;
	}
	if(len < fieldlen){
		memset(ptr,'\0',fieldlen);
		while(start != end && *start != ' ' ){
			*ptr++ = *start++ ;
		}
	}
	else{
		printf("Max %d character allowed\n\r",fieldlen);
	}
}
//set password
void setpassFunction(void){
	char *start;
	char *end;
	uint8_t len = 0;
	uint8_t *ptr = &sysconfdup.password[0];
	uint8_t fieldlen=sizeof(sysconfdup.password);


	start = cmdlineGetArgStr(1);
	end   = cmdlineGetArgStr(2);

	len = end - start;
	if(len == 0 ){
		printf("No arguments \n\r");
		return;
	}
	if(len < fieldlen){
		memset(ptr,'\0',fieldlen);
		while(start != end && *start != ' ' ){
			*ptr++ = *start++ ;
		}
	}
	else{
		printf("Max %d character allowed\n\r",fieldlen);
	}
}
//set cookie resource path
void setcookieFunction(void){
	char *start;
	char *end;
	uint8_t len = 0;
	uint8_t *ptr = &sysconfdup.cookie_respath[0];
	uint8_t fieldlen=sizeof(sysconfdup.cookie_respath);


	start = cmdlineGetArgStr(1);
	end   = cmdlineGetArgStr(2);

	len = end - start;
	if(len == 0 ){
		printf("No arguments \n\r");
		return;
	}
	if(len <  fieldlen){
		memset(ptr,'\0',fieldlen);
		while(start != end && *start != ' ' ){
			*ptr++ = *start++ ;
		}
	}
	else{
		printf("Max %d character allowed\n\r",fieldlen);
	}
}
//set the resource path for uploading the file
void setuploadFunction(void){
	char *start;
	char *end;
	uint8_t len = 0;
	uint8_t *ptr = &sysconfdup.upload_respath[0];
	uint8_t fieldlen=sizeof(sysconfdup.upload_respath);


	start = cmdlineGetArgStr(1);
	end   = cmdlineGetArgStr(2);

	len = end - start;
	if(len == 0 ){
		printf("No arguments \n\r");
		return;
	}
	if(len < fieldlen){
		memset(ptr,'\0',fieldlen);
		while(start != end && *start != ' ' ){
			*ptr++ = *start++ ;
		}
	}
	else{
		printf("Max %d character allowed\n\r",fieldlen);
	}
}
//set watchdog status and error repoting status as on/off
void setstatusFunction(void){
	char *start;
	char *end;
	uint8_t len = 0;

	start = cmdlineGetArgStr(1);
	end   = cmdlineGetArgStr(2);

	len = end - start;
	if(len == 0 ){
		printf("No arguments \n\r");
		return;
	}
	if(strncmp(cmdlineGetArgStr(1),"dog", len) == 0){
		if(cmdlineGetArgInt(2) == 0 || cmdlineGetArgInt(2) == 1){
			sysconfdup.watchdog_status = (uint8_t) cmdlineGetArgInt(2);
		}
		else{
			printf("Val can be 0 or 1");
		}
	}
	else if(strncmp(cmdlineGetArgStr(1),"err", len) == 0){
		if(cmdlineGetArgInt(2) == 0 || cmdlineGetArgInt(2) == 1){
			sysconfdup.err_report_status= (uint8_t) cmdlineGetArgInt(2);
		}
		else{
			printf("Val can be 0 or 1");
		}
	}

}
//register a phone number
void regphoneFunction(void){

}
//register phone number for error repoting
void errphoneFunction(void){

}
//prints the system configurations
void sysconfFunction(void){
	printf("system configurations\r\n");
}
//prints the current configurations of the system
void curconfFunction(void){
	printf("system current configurations");

}
//save the current configuration to system configurations
void saveconfFunction(void){
	/* Only program the flash if sysconfdup differs from sysconf */
	if( memcmp((uint8_t *)&sysconf,(uint8_t *)&sysconfdup,sizeof(struct config)) != 0 ){
		flashpage( (uint8_t *)&sysconf, (uint8_t *)&sysconfdup, sizeof(struct config));
	}
	else {
		printf("No change in configurations found \n\r");
	}
}

//set the default configurations of system configurations
void setdefFunction(void){
	uint32_t len = (uint8_t *)&_edefconf - (uint8_t *)&_sdefconf;

	/* Only program the flash if system configuration  differs from default configurations */
	if( memcmp((uint8_t *)&_sconf , (uint8_t *)&_sdefconf ,len ) ){
		flashpage( &_sconf, &_sdefconf, len);
	}
	else {
		printf("No change in configurations found \n\r");
	}
}
