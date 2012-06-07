/**
 * @file command.h
 *
 */


void addAllcommand(void);

/*
 * User defined commands that can be executed via serial interface
 * the return type is unsigned char that tells that the command was
 * either SUCCESS:0 of FAILURE
 */
unsigned char  exitFunction(void);
unsigned char helpFunction(void);
unsigned char clearFunction(void);
unsigned char setbaudFunction(void);
unsigned char setapnFunction(void);
unsigned char setsiteFunction(void);
unsigned char setuserFunction(void);
unsigned char setpassFunction(void);
unsigned char setcookieFunction(void);
unsigned char setuploadFunction(void);
unsigned char setstatusFunction(void);
unsigned char regphoneFunction(void);
unsigned char errphoneFunction(void);
unsigned char sysconfFunction(void);
unsigned char curconfFunction(void);
unsigned char saveconfFunction(void);
unsigned char setdefFunction(void);
unsigned char setdateFunction(void);
unsigned char setupprdFunction(void);
unsigned char setbidFunction(void);
unsigned char sysStatusFunction(void);
