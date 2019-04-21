CancelTicket()
{
	int x,y,i,j,randValue;
	char *temp,*temp1;
	char xyz[1000],abc[1000],lmn[1000],pqr[1000],st[100],bc[100];
	char ic[100];
	//"flightID" value="251460081-784-JB"  />
	web_reg_save_param("cFlightID","LB=flightID\" value=\"","RB=\"  />","Ord=All",LAST);
	//".cgifields" value="127"  />
	web_reg_save_param("cCgiFields","LB=.cgifields\" value=\"","RB=\"  />","Ord=All",LAST);

	web_url("welcome.pl_2", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=itinerary", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(134);
	


	
////	//1=on&
//	   for(i=1;i<=5;i++){
//		strcpy(st,
//		sprintf(st,"=on&");
//		strcat(bc,st);
//		lr_output_message("finalFlightIDStr %s",bc);
//	       }
//	lr_save_string(bc,"SomeTikcetCancels");
	
	//flightID=1280000-7-JB&

	x=atoi(lr_eval_string("{cFlightID_count}"));
	//Random Cancel
	randValue=1+rand()%x;
	lr_output_message("random Cancel Value is %d",randValue);
	itoa(randValue,ic,10);
	lr_save_string(ic,"randomCancel");
	
	       for(i=1;i<=x;i++){
		sprintf(xyz,"flightID=");
		temp=lr_paramarr_idx("cFlightID",i);
		strcat(xyz,temp);
		strcat(xyz,"&");
		strcat(abc,xyz);
		//lr_output_message("finalFlightIDStr %s",abc);
	       }
	lr_save_string(abc,"FlightIDs");
	
	//.cgifields=127&
	     
	y=atoi(lr_eval_string("{cCgiFields_count}"));
	        for(j=1;j<=y;j++){
		sprintf(xyz,".cgifields=");
		temp=lr_paramarr_idx("cCgiFields",j);
		strcat(xyz,".cgifields=");
		strcat(xyz,temp);
		strcat(xyz,"&");
		strcat(abc,xyz);  
	//lr_output_message("finalCgiFieldsStr %s",abc);		
	   }
	lr_save_string(abc,"FlightIDsCgiFields");
	

			//Task 3 : book 5 iterations ,Cancel random Ticket 
	
	web_custom_request("itinerary.pl_2", 
		"URL=http://127.0.0.1:1080/cgi-bin/itinerary.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t32.inf", 
		"Mode=HTTP", 
		"Body={SomeTikcetCancels}{FlightIDsCgiFields}removeFlights.x=75&removeFlights.y=4", 
		LAST);
	strcpy(abc,"");
	
//		//Task 3 : book 5 iterations ,Cancel random Ticket 
//	
//	web_custom_request("itinerary.pl_2", 
//		"URL=http://127.0.0.1:1080/cgi-bin/itinerary.pl", 
//		"Method=POST", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer=http://127.0.0.1:1080/cgi-bin/itinerary.pl", 
//		"Snapshot=t32.inf", 
//		"Mode=HTTP", 
//		"Body={randomCancel}=on&{FlightIDsCgiFields}removeFlights.x=75&removeFlights.y=4", 
//		LAST);
//	strcpy(abc,"");


	
	//Task 3 : book 5 iterations ,Cancel 1st 2 Ticket
	
//	web_custom_request("itinerary.pl_2", 
//		"URL=http://127.0.0.1:1080/cgi-bin/itinerary.pl", 
//		"Method=POST", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer=http://127.0.0.1:1080/cgi-bin/itinerary.pl", 
//		"Snapshot=t32.inf", 
//		"Mode=HTTP", 
//		"Body=1=on&2=on&{finalCgiFieldsStr}removeFlights.x=75&removeFlights.y=4", 
//		LAST);
//	strcpy(abc,"");
	
	
	//Task 2 : book a ticket ,Cancel Random Ticket
	
//	web_custom_request("itinerary.pl_2", 
//		"URL=http://127.0.0.1:1080/cgi-bin/itinerary.pl", 
//		"Method=POST", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer=http://127.0.0.1:1080/cgi-bin/itinerary.pl", 
//		"Snapshot=t32.inf", 
//		"Mode=HTTP", 
//		"Body={pRandomTicket}=on&{finalCgiFieldsStr}&removeFlights.x=75&removeFlights.y=4", 
//		LAST);
//	
//	strcpy(abc,"");
	
//	
//	//Task 2 : book a ticket ,Cancel All Tickets
//	
//	web_custom_request("itinerary.pl_2", 
//		"URL=http://127.0.0.1:1080/cgi-bin/itinerary.pl", 
//		"Method=POST", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer=http://127.0.0.1:1080/cgi-bin/itinerary.pl", 
//		"Snapshot=t32.inf", 
//		"Mode=HTTP", 
//		"Body=1=on{finalCgiFieldsStr}&removeAllFlights.x=75&removeAllFlights.y=4", 
//		LAST);
//	
//	strcpy(abc,"");

	return 0;
}
