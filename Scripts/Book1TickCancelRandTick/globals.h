#ifndef _GLOBALS_H 
#define _GLOBALS_H

//--------------------------------------------------------------------
// Include Files
#include "lrun.h"
#include "web_api.h"
#include "lrw_custom_body.h"

//--------------------------------------------------------------------
// Global Variables

#endif // _GLOBALS_H

//rough Work:
	
//	y=atoi(lr_eval_string("{cCgiFields_count}"));
//	        for(j=1;j<=y;j++){
//		sprintf(lmn,".cgifields=");
//		temp1=lr_paramarr_idx("cCgiFields",j);
//		strcat(lmn,".cgifields=");
//		strcat(lmn,temp1);
//		strcat(lmn,"&");
//		strcat(pqr,lmn);  
////lr_output_message("finalCgiFieldsStr %s",abc);		
//	   }
//	lr_save_string(pqr,"finalCgiFieldsStr");
	
//	web_custom_request("itinerary.pl_4", 
//		"URL=http://127.0.0.1:1080/cgi-bin/itinerary.pl", 
//		"Method=POST", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer=http://127.0.0.1:1080/cgi-bin/itinerary.pl", 
//		"Snapshot=t58.inf", 
//		"Mode=HTTP", 
//		"Body=1=on&{finalFlightIDStr}{finalCgiFieldsStr}removeFlights.x=75&removeFlights.y=4", 
//		LAST);
	
//		web_custom_request("itinerary.pl_4", 
//		"URL=http://127.0.0.1:1080/cgi-bin/itinerary.pl", 
//		"Method=POST", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer=http://127.0.0.1:1080/cgi-bin/itinerary.pl", 
//		"Snapshot=t58.inf", 
//		"Mode=HTTP", 
//		"Body=1=on&2=on&{finalFlightIDStr}{finalCgiFieldsStr}removeFlights.x=75&removeFlights.y=4", 
//		LAST);
	
//			web_custom_request("itinerary.pl_4", 
//		"URL=http://127.0.0.1:1080/cgi-bin/itinerary.pl", 
//		"Method=POST", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer=http://127.0.0.1:1080/cgi-bin/itinerary.pl", 
//		"Snapshot=t58.inf", 
//		"Mode=HTTP", 
//		"Body={finalFlightIDStr}{finalCgiFieldsStr}removeAllFlights.x=75&removeAllFlights.y=4", 
//		LAST);
