//#include "C:\\Users\\Dell\Desktop\\PLRAJU.h"
#include "PLRAJU.h"
Action()
{

/*Correlation comment - Do not change!  Original value='125426.669663832ztfVzDtpDcAiDDDDDiHAQpiAfQcf' Name ='userSession' Type ='Manual'*/
	
		
	/* Launuch */
		//launch fun call
        launch();
        
	/* Login */
      //login fun call
	    web_reg_find("Text=review/edit","savecount=txtchk1",LAST);
	lr_start_transaction(lr_eval_string("Login_{puser}"));
	web_submit_data("login.pl",
		"Action=http://localhost:1080/cgi-bin/login.pl",
		"Method=POST",
		"TargetFrame=body",
		"RecContentType=text/html",
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home",
		"Snapshot=t2.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=userSession", "Value={userSession}", ENDITEM,
		"Name=username", "Value={puser}", ENDITEM,
		"Name=password", "Value={ppwd}", ENDITEM,
		"Name=JSFormSubmit", "Value=off", ENDITEM,
		"Name=login.x", "Value=63", ENDITEM,
		"Name=login.y", "Value=7", ENDITEM,
		LAST);
     //check
	if(strcmp(lr_eval_string("{txtchk1}"),"0")==0){
		lr_output_message("txtchk1 failed");
		lr_end_transaction(lr_eval_string("Login_{puser}"),LR_FAIL);

			//recursive fun
		login();
		
	}else{
		lr_output_message("txtchk1 Passed");
		lr_end_transaction(lr_eval_string("Login_{puser}"),LR_PASS);
	}
    
	
	/* Click on Flight */

	lr_think_time(29);

	web_url("Search Flights Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=search", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(17);

	web_submit_data("reservations.pl", 
		"Action=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=depart", "Value=London", ENDITEM, 
		"Name=departDate", "Value=01/26/2019", ENDITEM, 
		"Name=arrive", "Value=Paris", ENDITEM, 
		"Name=returnDate", "Value=01/27/2019", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatPref", "Value=Window", ENDITEM, 
		"Name=seatType", "Value=Business", ENDITEM, 
		"Name=.cgifields", "Value=roundtrip", ENDITEM, 
		"Name=.cgifields", "Value=seatType", ENDITEM, 
		"Name=.cgifields", "Value=seatPref", ENDITEM, 
		"Name=findFlights.x", "Value=57", ENDITEM, 
		"Name=findFlights.y", "Value=7", ENDITEM, 
		LAST);

	/* Choose flight */

	lr_think_time(58);

	web_submit_data("reservations.pl_2", 
		"Action=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=243;129;01/26/2019", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=seatType", "Value=Business", ENDITEM, 
		"Name=seatPref", "Value=Window", ENDITEM, 
		"Name=reserveFlights.x", "Value=46", ENDITEM, 
		"Name=reserveFlights.y", "Value=4", ENDITEM, 
		LAST);

	/* Paymnent Details */

	lr_think_time(66);

	web_submit_data("reservations.pl_3", 
		"Action=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=firstName", "Value=Jojo", ENDITEM, 
		"Name=lastName", "Value=Bean", ENDITEM, 
		"Name=address1", "Value=Suryapet", ENDITEM, 
		"Name=address2", "Value=TS", ENDITEM, 
		"Name=pass1", "Value=Jojo Bean", ENDITEM, 
		"Name=creditCard", "Value=9948897938", ENDITEM, 
		"Name=expDate", "Value=", ENDITEM, 
		"Name=oldCCOption", "Value=", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatType", "Value=Business", ENDITEM, 
		"Name=seatPref", "Value=Window", ENDITEM, 
		"Name=outboundFlight", "Value=243;129;01/26/2019", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=returnFlight", "Value=", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=.cgifields", "Value=saveCC", ENDITEM, 
		"Name=buyFlights.x", "Value=42", ENDITEM, 
		"Name=buyFlights.y", "Value=13", ENDITEM, 
		LAST);

	/* Signoff */
	//logoff fun call
	logoff();

	return 0;
}