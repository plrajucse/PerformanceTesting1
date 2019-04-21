Action()
{

/*Correlation comment - Do not change!  Original value='125300.801863102zttfVfQpQQfiDDDDDizHApQfQQHf' Name ='userSession' Type ='ResponseBased'*/
	web_reg_save_param_ex(
		"ParamName=userSession",
		"LB=name=\"userSession\" value=\"",
		"RB=\"/>\n<table border",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/nav.pl*",
		LAST);
		
web_reg_find("text=Welcome","savecount=beforelogin",LAST);
//web_reg_find("Text=Welcome",
//        "SaveCount=Welcome_Count",
//        LAST );

	web_url("index.htm", 
		"URL=http://127.0.0.1:1080/webtours/index.htm", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);
if (atoi(lr_eval_string("{beforelogin}")) > 0){
        lr_output_message("Log on successful.");
        }
     else{
          lr_error_message("Log on failed");
          return(0);
     }
		
//  if (atoi(lr_eval_string("{Welcome_Count}")) > 0){
//        lr_output_message("Log on successful.");
//        }
//     else{
//          lr_error_message("Log on failed");
//          return(0);
//     }

	/* click login button */

	lr_think_time(35);
	
	web_reg_find("text=Using the menu","savecount=afterlogin",LAST);
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
		"Name=login.x", "Value=36", ENDITEM,
		"Name=login.y", "Value=15", ENDITEM,
		LAST);
	if (atoi(lr_eval_string("{afterlogin}")) > 0){
        lr_output_message("Log on successful.");
        }
     else{
          lr_error_message("Log on failed");
          return(0);
     }

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	/* click flights from menu */

	web_add_header("UA-CPU", 
		"AMD64");

	lr_think_time(31);

	web_url("welcome.pl", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=search", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	/* continue button from  flight page  */

	lr_think_time(123);
	
	web_reg_find("text=Departure","savecount=Find_Flight1",LAST);
	web_submit_data("reservations.pl", 
		"Action=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=depart", "Value=Denver", ENDITEM, 
		"Name=departDate", "Value=01/08/2019", ENDITEM, 
		"Name=arrive", "Value=London", ENDITEM, 
		"Name=returnDate", "Value=01/09/2019", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatPref", "Value=Window", ENDITEM, 
		"Name=seatType", "Value=Business", ENDITEM, 
		"Name=.cgifields", "Value=roundtrip", ENDITEM, 
		"Name=.cgifields", "Value=seatType", ENDITEM, 
		"Name=.cgifields", "Value=seatPref", ENDITEM, 
		"Name=findFlights.x", "Value=58", ENDITEM, 
		"Name=findFlights.y", "Value=11", ENDITEM, 
		LAST);
	
	if (atoi(lr_eval_string("{Find_Flight1}")) > 0){
        lr_output_message("Log on successful.");
        }
     else{
          lr_error_message("Log on failed");
          return(0);
     }


	/* continue button from find flight page2  */

	lr_think_time(259);
	
	web_reg_find("text=003","savecount=Find_Flight2",LAST);

	web_submit_data("reservations.pl_2", 
		"Action=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=023;401;01/08/2019", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=seatType", "Value=Business", ENDITEM, 
		"Name=seatPref", "Value=Window", ENDITEM, 
		"Name=reserveFlights.x", "Value=51", ENDITEM, 
		"Name=reserveFlights.y", "Value=15", ENDITEM, 
		LAST);
	if (atoi(lr_eval_string("{Find_Flight2}")) > 0){
        lr_output_message("Log on successful.");
        }
     else{
          lr_error_message("Log on failed");
          return(0);
     }

	/* payment details */

	lr_think_time(47);
web_reg_find("text=Credit Card","savecount=paymentdetails",LAST);
	web_submit_data("reservations.pl_3", 
		"Action=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t7.inf", 
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
		"Name=outboundFlight", "Value=023;401;01/08/2019", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=returnFlight", "Value=", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=.cgifields", "Value=saveCC", ENDITEM, 
		"Name=buyFlights.x", "Value=70", ENDITEM, 
		"Name=buyFlights.y", "Value=15", ENDITEM, 
		LAST);
		
		if (atoi(lr_eval_string("{paymentdetails}")) > 0){
        lr_output_message("Log on successful.");
        }
     else{
          lr_error_message("Log on failed");
          return(0);
     }

	/* sign off */

	lr_think_time(14);
web_reg_find("text=Web Tours site","savecount=signoff",LAST);
	
	web_url("SignOff Button", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);
	if (atoi(lr_eval_string("{signoff}")) > 0){
        lr_output_message("Log on successful.");
        }
     else{
          lr_error_message("Log on failed");
          return(0);
     }

	return 0;
}