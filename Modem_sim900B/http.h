#define HOST "ubicomp.in"
#define PAGE "/"
#define PORT 80
#define USERAGENT "HTMLGET 1.0"
// Content Types
#define FORMDATA "application/x-www-form-urlencoded" 
#define XMLDATA "text/xml;charset=\"utf-8\""
#define PLAINDATA "text/plain"
// Authentication Details
#define LOGINPAGE "/ubicomp.in/?q=user/login"
#define USERNAME "uagri"
#define PASSWORD "uagri123"
#define DATA "<?xml version=\"1.0\"?>\n"\
			"<soap:Envelope xmlns:soap=\"http://www.w3.org/2001/12/soap-envelope\" soap:encodingStyle=\"http://www.w3.org/2001/12/soap-encoding\">\n"\
			"<soap:Body xmlns:m=\"http://www.example.org/stock\">\n"\
			"    <m:GetStockPrice>\n"\
			"      <m:StockName>IBM</m:StockName>\n"\
			"    </m:GetStockPrice>\n"\
			"  </soap:Body>\n"\
			"</soap:Envelope>"