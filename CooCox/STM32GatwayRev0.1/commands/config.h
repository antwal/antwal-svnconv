/* configurations for the Gateway */
#define BAUD1	 		9600
#define BAUD2	 		9600
#define BAUD3	 		115200

#define APN_STRING		"gprs.cell.south"
#define APN_USERNAME 	""
#define APN_PASSWORD 	""

#define SITE			"ubicomp.in"
#define USERNAME		"uagri"
#define PASSWORD		"uagri123"
#define COOKIE_RESPATH	"/uagri/?q=user/login"
#define UPLOAD_RESPATH  "/upload.ini"
#define WATCHDOG_STATUS	1
#define ERR_RPT_STATUS  1
#define RES_PHONE0		"9848969645"
#define RES_PHONE1		""
#define ERR_PHONE0		"9848969645"
#define ERR_PHONE1		""

typedef struct phone{
	unsigned char phoneno[10]; // 10 digit phone number as string
}phone;

struct config{
	//baud rate for the uarts of gateway
	unsigned  int baud_uart1;
	unsigned  int baud_uart2;
	unsigned  int baud_uart3;
	//modem configurations
	unsigned char APN[20];
	unsigned char APN_username[10];
	unsigned char APN_password[10];
	//configurations for  remote server
	unsigned char site[20];
	unsigned char username[10];
	unsigned char password[10];
	unsigned char cookie_respath[20];//resource path
	unsigned char upload_respath[20];//resource path
	//status for the watch dog(enable or disabled [1/0])
	unsigned char watchdog_status;
	//status for sending the error report via sms(enable or disable [1/0])
	unsigned char err_report_status;
	//registered phone numbers
	phone	reg_phoneno[2];
	phone 	err_phoneno[2];
};
