Action()
{
	int x,i;
	char abc[100];
	char xyz[100];

/*Correlation comment - Do not change!  Original value='125392.145889024zttQifipfAtVzzzHDizQQpVfVAcf' Name ='userSession' Type ='Manual'*/
	web_reg_save_param_ex(
		"ParamName=userSession",
		"LB=name=\"userSession\" value=\"",
		"RB=\"/>\n<table border",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/nav.pl*",
		LAST);

	web_url("index.htm", 
		"URL=http://127.0.0.1:1080/webtours/index.htm", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(9);

	web_submit_data("login.pl",
		"Action=http://127.0.0.1:1080/cgi-bin/login.pl",
		"Method=POST",
		"TargetFrame=body",
		"RecContentType=text/html",
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home",
		"Snapshot=t2.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=userSession", "Value={userSession}", ENDITEM,
		"Name=username", "Value=jojo", ENDITEM,
		"Name=password", "Value=bean", ENDITEM,
		"Name=JSFormSubmit", "Value=off", ENDITEM,
		"Name=login.x", "Value=62", ENDITEM,
		"Name=login.y", "Value=12", ENDITEM,
		LAST);

	lr_think_time(6);

	web_url("Search Flights Button", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=search", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(22);

	web_submit_data("reservations.pl", 
		"Action=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=depart", "Value=London", ENDITEM, 
		"Name=departDate", "Value=01/21/2019", ENDITEM, 
		"Name=arrive", "Value=Frankfurt", ENDITEM, 
		"Name=returnDate", "Value=01/22/2019", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=.cgifields", "Value=roundtrip", ENDITEM, 
		"Name=.cgifields", "Value=seatType", ENDITEM, 
		"Name=.cgifields", "Value=seatPref", ENDITEM, 
		"Name=findFlights.x", "Value=48", ENDITEM, 
		"Name=findFlights.y", "Value=2", ENDITEM, 
		LAST);

	lr_think_time(4);

	web_submit_data("reservations.pl_2", 
		"Action=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=213;217;01/21/2019", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=reserveFlights.x", "Value=33", ENDITEM, 
		"Name=reserveFlights.y", "Value=9", ENDITEM, 
		LAST);

	lr_think_time(109);
	
//firstName=Jojo&lastName=Bean&address1=ang&address2=ts&pass1=Jojo+Bean&pass2=a&pass3=b&pass4=c&pass5=d&pass6=e&creditCard=9948897938&expDate=&oldCCOption=&numPassengers=6&seatType=Coach&seatPref=None&outboundFlight=242%3B102%3B01%2F21%2F2019&advanceDiscount=0&returnFlight=&JSFormSubmit=off&.cgifields=saveCC&buyFlights.x=56&buyFlights.y=9"

//	web_submit_data("reservations.pl_3", 
//		"Action=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
//		"Method=POST", 
//		"TargetFrame=", 
//		"RecContentType=text/html", 
//		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
//		"Snapshot=t6.inf", 
//		"Mode=HTML", 
//		ITEMDATA, 
//		"Name=firstName", "Value=Jojo", ENDITEM, 
//		"Name=lastName", "Value=Bean", ENDITEM, 
//		"Name=address1", "Value=surya", ENDITEM, 
//		"Name=address2", "Value=ts", ENDITEM, 
//		"Name=pass1", "Value={pPass}", ENDITEM, 
//		"Name=creditCard", "Value=9948897938", ENDITEM, 
//		"Name=expDate", "Value=", ENDITEM, 
//		"Name=oldCCOption", "Value=", ENDITEM, 
//		"Name=numPassengers", "Value={pRandPass}", ENDITEM, 
//		"Name=seatType", "Value=Coach", ENDITEM, 
//		"Name=seatPref", "Value=None", ENDITEM, 
//		"Name=outboundFlight", "Value=213;217;01/21/2019", ENDITEM, 
//		"Name=advanceDiscount", "Value=0", ENDITEM, 
//		"Name=returnFlight", "Value=", ENDITEM, 
//		"Name=JSFormSubmit", "Value=off", ENDITEM, 
//		"Name=.cgifields", "Value=saveCC", ENDITEM, 
//		"Name=buyFlights.x", "Value=75", ENDITEM, 
//		"Name=buyFlights.y", "Value=10", ENDITEM, 
//		LAST);
		

       x=atoi(lr_eval_string("{pRandPass}"));
       lr_output_message("Random value is %d",x);
	       for(i=1;i<=x;i++){
       lr_output_message("I value is %d",i);
	       	sprintf(abc,"pass%d=",i);
	       	strcat(abc,lr_eval_string("{pPass}"));
	       	strcat(abc,"&");
	   lr_output_message("abc value is %s",abc); 	 
	       	 strcat(xyz,abc);
	     lr_output_message("xyz value is %s",xyz);
	       }
       lr_save_string(xyz,"final");
	
	      //pass1=Jojo+Bean&pass2=a&pass3=b&pass4=c&pass5=d&pass6=e

	   web_custom_request("reservations.pl_4", 
		"URL=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t24.inf", 
		"Mode=HTTP", 
		"Body=firstName=Jojo&lastName=Bean&address1=ang&address2=ts&{final}creditCard=9948897938&expDate=&oldCCOption=&numPassengers=6&seatType=Coach&seatPref=None&outboundFlight=242%3B102%3B01%2F21%2F2019&advanceDiscount=0&returnFlight=&JSFormSubmit=off&.cgifields=saveCC&buyFlights.x=56&buyFlights.y=9", 
		LAST);
		
		

	lr_think_time(4);

	web_url("SignOff Button", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}