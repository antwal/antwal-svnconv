//----- Include Files ---------------------------------------------------------
#include <string.h>			// include standard C string functions
#include <stdlib.h>			// include stdlib for string conversion functions
#include <stdint.h>

#include "cmdline.h"
#include "vt100.h"
#include "command.h"
#include "config.h"
// In stm32f10xh ERROR= 0 and SUCCESS=!ERROR be aware
#define SUCCESS 0
#define ERROR 	1

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



unsigned char helpFunction(void)
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
	return SUCCESS;

}

unsigned char exitFunction(void){

	extern volatile uint8_t Run;
	Run = 0;
	//TO DO:
	//Turn off the debug LED
	printf("Exiting Cmdline\n\r");
	return SUCCESS;
}
unsigned char clearFunction(void){
	vt100ClearScreen();
	return SUCCESS;
}

//function for setting the baud rate of the uarts
unsigned char setbaudFunction(void){
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
		return ERROR;
	}
	return SUCCESS;
}

//function for setting up the APN of the modem
unsigned char setapnFunction(void){
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
		return ERROR;
	}
	if(len <= fieldlen){
		memset(ptr,'\0',fieldlen);
		while(start != end && *start != ' ' ){
			*ptr++ = *start++ ;
		}
	}
	else{
		printf("Max %d character allowed in argument\n\r",fieldlen);
		return ERROR;
	}
	return SUCCESS;
}
//set name the remote server
unsigned char setsiteFunction(void){
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
		return ERROR;
	}
	if(len < sizeof(sysconfdup.uploadsite)){
		memset(&sysconfdup.uploadsite[0],'\0',sizeof(sysconfdup.uploadsite));
				while(start != end && *start != ' ' ){
			sysconfdup.uploadsite[i++]= *start++ ;
		}
	}
	else{
		printf("Max %d character allowed in argument\n\r",sizeof(sysconfdup.uploadsite));
		return ERROR;
	}
	return SUCCESS;
}

//set username
unsigned char setuserFunction(void){
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
		return ERROR;
	}
	if(len <= fieldlen){
		memset(ptr,'\0',fieldlen);
		while(start != end && *start != ' ' ){
			*ptr++ = *start++ ;
		}
	}
	else{
		printf("Max %d character allowed in argument\n\r",fieldlen);
		return ERROR;
	}
	return SUCCESS;
}
//set password
unsigned char setpassFunction(void){
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
		return ERROR;
	}
	if(len <= fieldlen){
		memset(ptr,'\0',fieldlen);
		while(start != end && *start != ' ' ){
			*ptr++ = *start++ ;
		}
	}
	else{
		printf("Max %d character allowedin arg\n\r",fieldlen);
		return ERROR;
	}
	return SUCCESS;

}
//set cookie resource path
unsigned char setcookieFunction(void){
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
		return ERROR;
	}
	if(len <= fieldlen){
		memset(ptr,'\0',fieldlen);
		while(start != end && *start != ' ' ){
			*ptr++ = *start++ ;
		}
	}
	else{
		printf("Max %d character allowed\n\r",fieldlen);
		return ERROR;
	}
	return SUCCESS;
}
//set the resource path for uploading the file
unsigned char setuploadFunction(void){
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
		return ERROR;
	}
	if(len <= fieldlen){
		memset(ptr,'\0',fieldlen);
		while(start != end && *start != ' ' ){
			*ptr++ = *start++ ;
		}
	}
	else{
		printf("Max %d character allowed\n\r",fieldlen);
		return ERROR;
	}
	return SUCCESS;
}
//set watchdog status and error repoting status as on/off
unsigned char setstatusFunction(void){
	char *start;
	char *end;
	uint8_t len = 0;

	start = cmdlineGetArgStr(1);
	end   = cmdlineGetArgStr(2);

	len = end - start;
	if(len == 0 ){
		printf("No arguments \n\r");
		printf("Format: setstatus < dog/err > < 0 / 1 >\n\r");
		return ERROR;
	}
	if(strncmp(cmdlineGetArgStr(1),"dog", 3) == 0){
		if(cmdlineGetArgInt(2) == 0 || cmdlineGetArgInt(2) == 1){
			sysconfdup.watchdog_status = (uint8_t) cmdlineGetArgInt(2);
		}
		else{
			printf("Val can be 0 or 1\n\r");
			return ERROR;
		}
	}
	else if(strncmp(cmdlineGetArgStr(1),"err", 3) == 0){
		if(cmdlineGetArgInt(2) == 0 || cmdlineGetArgInt(2) == 1){
			sysconfdup.err_report_status= (uint8_t) cmdlineGetArgInt(2);
		}
		else{
			printf("Val can be 0 or 1\n\r");
			return ERROR;
		}
	}
	return SUCCESS;
}
//register a phone number
unsigned char regphoneFunction(void){
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
		return ERROR;

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
						return ERROR;
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
						return ERROR;
					}
					break;

			default: break;
		}
	}
	else{
		printf("ERROR\n\r");
		printf("Format: regphone <location(0/1)> < 10 digit phoneno>\n\r");
		return ERROR;
	}
	return SUCCESS;
}

//register phone number for error repoting
unsigned char errphoneFunction(void){
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
		return ERROR;
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
						return ERROR;
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
						return ERROR;
					}
					break;

			default: break;
		}
	}
	else{
		printf("ERROR\n\r");
		printf("Format: errphone <location(0/1)> < 10 digit phoneno>\n\r");
		return ERROR;
	}
	return SUCCESS;
}
//prints the system configurations
unsigned char sysconfFunction(void){
	printf("TO DO print system configurations\n\r");
	return SUCCESS;
}
//prints the current configurations of the system
unsigned char curconfFunction(void){
	printf("TO DO print system current configurations\n\r");
	return SUCCESS;

}
//save the current configuration to system configurations
unsigned char saveconfFunction(void){
	/* Only program the flash if sysconfdup differs from sysconf */
	if( memcmp((uint8_t *)&sysconf,(uint8_t *)&sysconfdup,sizeof(struct config)) != 0 ){
		printf("Saving current configuration as system configuration\n\r");
		return flashpage( (uint8_t *)&sysconf, (uint8_t *)&sysconfdup, sizeof(struct config));
		printf("Done!!\n\r");
	}
	else {
		printf("No change in configurations found \n\r");
	}
	return SUCCESS;;//denotes success
}

//set the default configurations of system configurations
unsigned char setdefFunction(void){
	uint32_t len = (uint8_t *)&_edefconf - (uint8_t *)&_sdefconf;

	/* Only program the flash if system configuration  differs from default configurations */
	if( memcmp((uint8_t *)&_sconf , (uint8_t *)&_sdefconf ,len ) ){
		printf("Saving default  configuration as system configuration\n\r");
		return  flashpage( &_sconf, &_sdefconf, len);
		printf("Done!!\n\r");
	}
	else {
		printf("No change in configurations found \n\r");
	}
	return SUCCESS;//denotes success
}
