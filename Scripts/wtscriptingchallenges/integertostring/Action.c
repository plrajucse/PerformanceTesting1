Action()
{
	char *temp;
	//sol 1:
	int i=1;
	char ac[100];
	
    //sol 2
	int a=2;
	
	int abc=100;
	float rad=2.24;
	char name[100]="lingaraju";
	itoa(i,ac,10);
	lr_save_string(ac,"lrvariable");
	
	//printing i value
	lr_output_message("c variable(i) int is %d",i);
	lr_output_message("c variable(ac) char is %s",ac);
	lr_output_message("final lr variable is %s",lr_eval_string("{lrvariable}"));
	
	
	
	lr_save_int(a,"lrvar");
	lr_output_message("final lr variable is %s",lr_eval_string("{lrvar}"));
	
	//printing lr variable
	lr_save_string("lingaraju","lrmyname");
	lr_output_message("printing lr variable is %s",lr_eval_string("{lrmyname}"));
	
	lr_output_message("c variable(i) int is %d",abc);
	lr_output_message("c variable(i) float is %.2f",rad);
	lr_output_message("c variable(i) string is %s",name);
	
	

/*Correlation comment - Do not change!  Original value='125314.754799514zttfiHHpHDizHfpczzc' Name ='userSession' Type ='Manual'*/
	web_reg_save_param(
		"ParamName=cAccBal",
		"LB=name=\"userSession\" value=\"",
		"RB=\"/>\n<table border",
		"SaveLen=5",
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

	lr_think_time(11);

	web_submit_data("login.pl",
		"Action=http://127.0.0.1:1080/cgi-bin/login.pl",
		"Method=POST",
		"TargetFrame=body",
		"RecContentType=text/html",
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home",
		"Snapshot=t2.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=userSession", "Value={cAccBal}", ENDITEM,
		"Name=username", "Value=jojo", ENDITEM,
		"Name=password", "Value=bean", ENDITEM,
		"Name=JSFormSubmit", "Value=off", ENDITEM,
		"Name=login.x", "Value=61", ENDITEM,
		"Name=login.y", "Value=12", ENDITEM,
		LAST);

	lr_think_time(7);
	//">Denver</option>
	web_reg_save_param("cSource","lb=\">","rb=</option>","ord=all",LAST);
	//>London</option>
	web_reg_save_param("cDestin","lb=\">","rb=</option>","ord=all",LAST);

	web_url("Search Flights Button", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=search", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);


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
		"Name=depart", "Value={cSource}", ENDITEM, 
		"Name=departDate", "Value=01/10/2019", ENDITEM, 
		"Name=arrive", "Value={cDestin}", ENDITEM, 
		"Name=returnDate", "Value=01/11/2019", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatPref", "Value=Window", ENDITEM, 
		"Name=seatType", "Value=Business", ENDITEM, 
		"Name=.cgifields", "Value=roundtrip", ENDITEM, 
		"Name=.cgifields", "Value=seatType", ENDITEM, 
		"Name=.cgifields", "Value=seatPref", ENDITEM, 
		"Name=findFlights.x", "Value=52", ENDITEM, 
		"Name=findFlights.y", "Value=10", ENDITEM, 
		LAST);

	lr_think_time(13);
	
	temp=lr_paramarr_random("cSource");
	lr_save_string(temp,"lrSorceVar");
	
	lr_save_string(lr_paramarr_random("cDestin"),"lrDestinVar");
	
	if(strcmp(lr_eval_string("{lrSorceVar}"),lr_eval_string("{lrDestinVar}"))==0)
	{
		lr_output_message("Ticket is not Booking");
		
		lr_abort();
		
	}
	else{
		lr_output_message("Ticket is booked");
	}

	web_submit_data("reservations.pl_2", 
		"Action=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=023;401;01/10/2019", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=seatType", "Value=Business", ENDITEM, 
		"Name=seatPref", "Value=Window", ENDITEM, 
		"Name=reserveFlights.x", "Value=54", ENDITEM, 
		"Name=reserveFlights.y", "Value=8", ENDITEM, 
		LAST);



	lr_think_time(99);

	web_submit_data("reservations.pl_3", 
		"Action=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=firstName", "Value=Jojo", ENDITEM, 
		"Name=lastName", "Value=Bean", ENDITEM, 
		"Name=address1", "Value=ang", ENDITEM, 
		"Name=address2", "Value=ts", ENDITEM, 
		"Name=pass1", "Value=Jojo Bean", ENDITEM, 
		"Name=creditCard", "Value=9948897938", ENDITEM, 
		"Name=expDate", "Value=", ENDITEM, 
		"Name=oldCCOption", "Value=", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatType", "Value=Business", ENDITEM, 
		"Name=seatPref", "Value=Window", ENDITEM, 
		"Name=outboundFlight", "Value=023;401;01/10/2019", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=returnFlight", "Value=", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=.cgifields", "Value=saveCC", ENDITEM, 
		"Name=buyFlights.x", "Value=51", ENDITEM, 
		"Name=buyFlights.y", "Value=8", ENDITEM, 
		LAST);

	lr_think_time(7);

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