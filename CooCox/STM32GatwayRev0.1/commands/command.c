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

/* configuration structure residing in rom */

__attribute__ ((section(".co_conf")))
struct config sysconf ={
	.baud_uart1 = BAUD1,
	.baud_uart2 = BAUD2,
	.baud_uart3 = BAUD3,
	.APN = APN_STRING,
	.APN_username =APN_USERNAME,
	.APN_password=APN_PASSWORD,
	.uploadsite = SITE,
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
/* configuration structure residing in rom */

__attribute__ ((section(".co_defconf")))
struct config defconf ={
	.baud_uart1 = BAUD1,
	.baud_uart2 = BAUD2,
	.baud_uart3 = BAUD3,
	.APN = APN_STRING,
	.APN_username =APN_USERNAME,
	.APN_password=APN_PASSWORD,
	.uploadsite = SITE,
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
struct config sysconfdup ;




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

	extern volatile uint8_t Run;
	//Run = 0;
	printf("Exiting Cmdline\n\r");
}

void helpFunction(void)
{
	printf("Available commands are:\n\r");
	printf("help    	- displays available commands\n\r");
	printf("exit 		- exits from this command line\n\r");
	printf("clear		- clear the terminal\n\r");
	printf("setbaud		- set the baud rate of of uarts setbaud <uartno> <baud>\n\r");
	printf("setapn  	- sets the apn of the modem\n\r");
	printf("setsite 	- name of the remote server\n\r");
	printf("setuser 	- user name for logging\n\r");
	printf("setpass 	- password\n\r");
	printf("setcookie 	- resource path for logging in\n\r");
	printf("setupload 	- resource path for uploading a file\n\r");
	printf("setstatus 	- enable/disable watchdog or err reporting sms\n\r");
	printf("regphone 	- registered  phone numbers\n\r");
	printf("errphone 	- registered phone for error reporting\n\r");
	printf("sysconf  	- display the system configurations\n\r");
	printf("curconf		- display the current systen configurations\n\r");
	printf("saveconf	- save the current configurations  into system configurations\n\r");
	printf("setdef 		- reverts back system configurations to the default conf\n\r");

}

void clearFunction(void){
	vt100ClearScreen();
}

//function for setting the baud rate of the uarts
void setbaudFunction(void){
	if(cmdlineGetArgInt(1) > 0 && cmdlineGetArgInt(1) < 4){
		switch(cmdlineGetArgInt(1)){
			case 1 : sysconfdup.baud_uart1 = cmdlineGetArgInt(2);
					 printf("UART1 Baud %d\n\r",sysconfdup.baud_uart1);
					 break;
			case 2 : sysconfdup.baud_uart2 = cmdlineGetArgInt(2);
					 printf("UART2 Baud %d\n\r",sysconfdup.baud_uart2);
					 break;
			case 3 : sysconfdup.baud_uart3 = cmdlineGetArgInt(2);
					 printf("UART3 Baud %d\n\r",sysconfdup.baud_uart3);
					 break;
			default: break;
		}
	}
	else{
		printf("ERROR\n\r");
		printf("Format: setbaud <uart no> <baud>\n\r");
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
		printf("Format: setapn <apnsring>\n\r");
		return;
	}
	if(len <= fieldlen){
		memset(ptr,'\0',fieldlen);
		while(start != end && *start != ' ' ){
			*ptr++ = *start++ ;
		}
	}
	else{
		printf("Max %d character allowed in argument\n\r",fieldlen);
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
		printf("Format: setsite <sitename>\n\r");
		return;
	}
	if(len < sizeof(sysconfdup.uploadsite)){
		memset(&sysconfdup.uploadsite[0],'\0',sizeof(sysconfdup.uploadsite));
				while(start != end && *start != ' ' ){
			sysconfdup.uploadsite[i++]= *start++ ;
		}
	}
	else{
		printf("Max %d character allowed in argument\n\r",sizeof(sysconfdup.uploadsite));
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
		printf("Format: setuser <username>\n\r");
		return;
	}
	if(len <= fieldlen){
		memset(ptr,'\0',fieldlen);
		while(start != end && *start != ' ' ){
			*ptr++ = *start++ ;
		}
	}
	else{
		printf("Max %d character allowed in argument\n\r",fieldlen);
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
		printf("Format: setpass <password>\n\r");
		return;
	}
	if(len <= fieldlen){
		memset(ptr,'\0',fieldlen);
		while(start != end && *start != ' ' ){
			*ptr++ = *start++ ;
		}
	}
	else{
		printf("Max %d character allowedin arg\n\r",fieldlen);
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
		printf("Format: setcookie <cookie_resource_path>\n\r");
		return;
	}
	if(len <= fieldlen){
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
		printf("Format: setupload <upload_resource_path>\n\r");
		return;
	}
	if(len <= fieldlen){
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
		printf("Format: setstatus < dog/err > < 0 / 1 >\n\r");
		return;
	}
	if(strncmp(cmdlineGetArgStr(1),"dog", 3) == 0){
		if(cmdlineGetArgInt(2) == 0 || cmdlineGetArgInt(2) == 1){
			sysconfdup.watchdog_status = (uint8_t) cmdlineGetArgInt(2);
		}
		else{
			printf("Val can be 0 or 1\n\r");
		}
	}
	else if(strncmp(cmdlineGetArgStr(1),"err", 3) == 0){
		if(cmdlineGetArgInt(2) == 0 || cmdlineGetArgInt(2) == 1){
			sysconfdup.err_report_status= (uint8_t) cmdlineGetArgInt(2);
		}
		else{
			printf("Val can be 0 or 1\n\r");
		}
	}

}
//register a phone number
void regphoneFunction(void){
	char *start;
	char *end;
	uint8_t len = 0;
	uint8_t *ptr ;


	start = cmdlineGetArgStr(1);
	end   = cmdlineGetArgStr(2);
	len = end - start;
	if(len == 0 ){
		printf("No arguments \n\r");
		printf("Format: regphone <location(0/1)> < 10 digit phoneno>\n\r");

	}
	else if(cmdlineGetArgInt(1) == 0 || cmdlineGetArgInt(1) == 1){
		switch(cmdlineGetArgInt(1)){
			case 0 :if(strlen(cmdlineGetArgStr(2))  == 10 ){
						ptr = &sysconfdup.reg_phoneno[0];
						memset(ptr,'\0',10);
						start = cmdlineGetArgStr(2);
						for (len = 0 ;len < 10 ;len++ ){
							*ptr++ = *start++ ;
						}
						printf("Registered phone[0] %s\n\r",cmdlineGetArgStr(2));
					}
					else{
						printf("Error: Please enter 10 digit phone no\n\r");
					}
					break;
			case 1 : if(strlen(cmdlineGetArgStr(2)) == 10 ){
						ptr = &sysconfdup.reg_phoneno[1];
						memset(ptr,'\0',10);
						start = cmdlineGetArgStr(2);
						for (len = 0 ;len < 10 ;len++ ){
							*ptr++ = *start++ ;
						}
						printf("Registered phone[1] %s\n\r",cmdlineGetArgStr(2));
					}
					else{
						printf("Error: Please enter 10 digit phone no\n\r");
					}
					break;

			default: break;
		}
	}
	else{
		printf("ERROR\n\r");
		printf("Format: regphone <location(0/1)> < 10 digit phoneno>\n\r");
	}
}

//register phone number for error repoting
void errphoneFunction(void){
	char *start;
	char *end;
	uint8_t len = 0;
	uint8_t *ptr ;


	start = cmdlineGetArgStr(1);
	end   = cmdlineGetArgStr(2);
	len = end - start;
	if(len == 0 ){
		printf("No arguments \n\r");
		printf("Format: errphone <location(0/1)> < 10 digit phoneno>\n\r");

	}
	else if(cmdlineGetArgInt(1) == 0 || cmdlineGetArgInt(1) == 1){
		switch(cmdlineGetArgInt(1)){
			case 0 :if(strlen(cmdlineGetArgStr(2))  == 10 ){
						ptr = &sysconfdup.err_phoneno[0];
						memset(ptr,'\0',10);
						start = cmdlineGetArgStr(2);
						for (len = 0 ;len < 10 ;len++ ){
							*ptr++ = *start++ ;
						}
						printf("Registered err phone[0] %s\n\r",cmdlineGetArgStr(2));
					}
					else{
						printf("Error: Please enter 10 digit phone no\n\r");
					}
					break;
			case 1 : if(strlen(cmdlineGetArgStr(2)) == 10 ){
						ptr = &sysconfdup.err_phoneno[1];
						memset(ptr,'\0',10);
						start = cmdlineGetArgStr(2);
						for (len = 0 ;len < 10 ;len++ ){
							*ptr++ = *start++ ;
						}
						printf("Registered err phone[1] %s\n\r",cmdlineGetArgStr(2));
					}
					else{
						printf("Error: Please enter 10 digit phone no\n\r");
					}
					break;

			default: break;
		}
	}
	else{
		printf("ERROR\n\r");
		printf("Format: errphone <location(0/1)> < 10 digit phoneno>\n\r");
	}
}
//prints the system configurations
void sysconfFunction(void){
	printf("system configurations\n\r");
}
//prints the current configurations of the system
void curconfFunction(void){
	printf("system current configurations\n\r");

}
//save the current configuration to system configurations
void saveconfFunction(void){
	/* Only program the flash if sysconfdup differs from sysconf */
	if( memcmp((uint8_t *)&sysconf,(uint8_t *)&sysconfdup,sizeof(struct config)) != 0 ){
		printf("Saving current configuration as system configuration\n\r");
		flashpage( (uint8_t *)&sysconf, (uint8_t *)&sysconfdup, sizeof(struct config));
		printf("Done!!\n\r");
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
		printf("Saving default  configuration as system configuration\n\r");
		flashpage( &_sconf, &_sdefconf, len);
		printf("Done!!\n\r");
	}
	else {
		printf("No change in configurations found \n\r");
	}
}
