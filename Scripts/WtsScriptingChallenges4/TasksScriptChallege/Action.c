Action()
{
	char *temp;
	int pIteration;
	

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
		"Name=userSession", "Value=125385.787039287zttQfDVptcAiDDDDDizQHpViifcf", ENDITEM, 
		"Name=username", "Value={pUser}", ENDITEM, 
		"Name=password", "Value=bean", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=login.x", "Value=69", ENDITEM, 
		"Name=login.y", "Value=9", ENDITEM, 
		LAST);
	
	web_reg_save_param("cSource","LB=\">","RB=</option>","Ord=All",LAST);

	web_url("Search Flights Button", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=search", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(10);

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
		"Name=departDate", "Value=01/20/2019", ENDITEM, 
		"Name=arrive", "Value=Paris", ENDITEM, 
		"Name=returnDate", "Value=01/21/2019", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatPref", "Value={piteration}", ENDITEM, 
		"Name=seatType", "Value=Business", ENDITEM, 
		"Name=.cgifields", "Value=roundtrip", ENDITEM, 
		"Name=.cgifields", "Value=seatType", ENDITEM, 
		"Name=.cgifields", "Value=seatPref", ENDITEM, 
		"Name=findFlights.x", "Value=43", ENDITEM, 
		"Name=findFlights.y", "Value=15", ENDITEM, 
		LAST);

	
	
	//Task 1: Execute with 10 Users
	if(atoi(lr_eval_string("{pUser}"))<=10){
		lr_output_message("Frist 10 Users has to pick Denver");
		temp=lr_paramarr_idx("cSource",1);
		lr_save_string(temp,"first10Users");
	} else {
		lr_output_message("Second 10 Users has to pick Frankfurt ");
		temp=lr_paramarr_idx("cSource",2);
		lr_save_string(temp,"second10Users");
	}
	
		//Task 2: Execute with 10 iterations
	
		if(atoi(lr_eval_string("{piteration}"))<=10){
		lr_output_message("Frist 10 iteration has to pick Denver");
		temp=lr_paramarr_idx("cSource",1);
		lr_save_string(temp,"first10iteration");
	    } else {
		lr_output_message("Second 10 iteration has to pick Frankfurt ");
		temp=lr_paramarr_idx("cSource",2);
		lr_save_string(temp,"second10iteration");
	    } 
		
		
		
		////Task 2: Execute Test with 30 iterations
		
		pIteration=atoi(lr_eval_string("{piteration}"));
	
		if(pIteration<=10){
		lr_output_message("Frist 10 iteration has to pick Denver");
		temp=lr_paramarr_idx("cSource",1);
		lr_save_string(temp,"first10iteration");
	    } else if(pIteration>=11 && pIteration<=20){
		lr_output_message("Second 10 iteration has to pick Frankfurt");
		temp=lr_paramarr_idx("cSource",2);
		lr_save_string(temp,"second10iteration");
		} else if(pIteration>=21 && pIteration<=30){
		lr_output_message("Third 10 iteration has to pick London");
		temp=lr_paramarr_idx("cSource",3);
		lr_save_string(temp,"third10iteration");
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
		"Name=outboundFlight", "Value=242;149;01/20/2019", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=seatType", "Value=Business", ENDITEM, 
		"Name=seatPref", "Value=Window", ENDITEM, 
		"Name=reserveFlights.x", "Value=56", ENDITEM, 
		"Name=reserveFlights.y", "Value=9", ENDITEM, 
		LAST);

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
		"Name=address1", "Value=Sur", ENDITEM, 
		"Name=address2", "Value=ts", ENDITEM, 
		"Name=pass1", "Value=Jojo Bean", ENDITEM, 
		"Name=creditCard", "Value=9948897938", ENDITEM, 
		"Name=expDate", "Value=", ENDITEM, 
		"Name=oldCCOption", "Value=", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatType", "Value=Business", ENDITEM, 
		"Name=seatPref", "Value=Window", ENDITEM, 
		"Name=outboundFlight", "Value=242;149;01/20/2019", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=returnFlight", "Value=", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=.cgifields", "Value=saveCC", ENDITEM, 
		"Name=buyFlights.x", "Value=54", ENDITEM, 
		"Name=buyFlights.y", "Value=3", ENDITEM, 
		LAST);

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