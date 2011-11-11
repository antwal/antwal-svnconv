#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "http.h"

	int create_tcp_socket();
	char *get_ip(char *host);
	char *build_get_query(char *host, char *page, char *content_type, char *post_data);
	void usage();
	 
	
	 
	char *cookie;



char *build_get_query(char *host, char *page, char *content_type, char *post_data)
	{
	  char *query; int qlen;
	  char *getpage = page;

	  if(getpage[0] == '/'){
		getpage = getpage + 1;
		fprintf(stderr,"Removing leading \"/\", converting %s to %s\n", page, getpage);
	  }

	  // -4/7 is to consider the %s %d in tpl and the ending \0
	  if(content_type != NULL){
		if(cookie != NULL) { 
			char *tpl= "POST /%s HTTP/1.0\r\nHost: %s\r\nAccept: audio/*\r\nCache-Control: no-cache\r\nContent-Type: %s\r\nContent-Length: %d\r\nCookie: %s\r\n\r\n%s";
			qlen = strlen(host)+strlen(getpage)+strlen(tpl)+strlen(content_type)+2+strlen(post_data)+strlen(cookie)-7;	
			query = (char *)malloc(qlen);
			sprintf(query, tpl, getpage, host, content_type, strlen(post_data), cookie, post_data);
		} else {
			char *tpl= "POST /%s HTTP/1.0\r\nHost: %s\r\nAccept: */*\r\nExpect: 100-continue\r\nContent-Type: %s\r\nContent-Length: %d\r\n\r\n%s";
			qlen = strlen(host)+strlen(getpage)+strlen(tpl)+strlen(content_type)+2+strlen(post_data)-6;	
			query = (char *)malloc(qlen);
			sprintf(query, tpl, getpage, host, content_type, strlen(post_data), post_data);
		}
	  }	else {
		char *tpl= "GET /%s HTTP/1.0\r\nHost: %s\r\nAccept: */*\r\nUser-Agent: %s\r\nCookie: %s\r\n\r\n"; 
		qlen = strlen(host)+strlen(getpage)+strlen(tpl)+strlen(cookie)+strlen(USERAGENT)-5;	
		query = (char *)malloc(qlen);
		sprintf(query, tpl, getpage, host, USERAGENT, cookie);
	  }	

	  return query;
	
	
}


