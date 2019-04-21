Action()
{
	
	char *temp;
	char *abc[100];
	
	char *token;
	char *xyz[100];
	
	int x;
	char *userid;
	

/*Correlation comment - Do not change!  Original value='125377.605022276zttQVVApffiDDDDDDizQtpzzDDf' Name ='userSession' Type ='Manual'*/
 //name="userSession" value="125377.605022276zttQVVApffiDDDDDDizQtpzzDDf"/>
//<table border	
web_reg_save_param_ex(
		"ParamName=userSession",
		"LB=name=\"userSession\" value=\"",
		"RB=\"/>",
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
		"Name=userSession", "Value={userSession}", ENDITEM,
		"Name=username", "Value=jojo", ENDITEM,
		"Name=password", "Value=bean", ENDITEM,
		"Name=JSFormSubmit", "Value=off", ENDITEM,
		"Name=login.x", "Value=63", ENDITEM,
		"Name=login.y", "Value=7", ENDITEM,
		LAST);
	
	strcpy(abc,lr_eval_string("{userSession}"));
	//char *strtok( char *string, const char *delimiters);
	temp=(char *)strtok(abc,".");
	lr_save_string(temp,"finalValue");
	
	lr_think_time(4);

/*Correlation comment - Do not change!  Original value='London' Name ='depart' Type ='Manual'*/
//">London</option>
	web_reg_save_param_ex(
		"ParamName=depart",
		"LB=\">",
		"RB=</option>",
		"Ordinal=All",
		LAST);

	web_url("Search Flights Button", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=search", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

/*Correlation comment - Do not change!  Original value='242;149;01/19/2019' Name ='outboundFlight' Type ='Manual'*/
//outboundFlight" value="242;149;01/19/2019">Blue Sky Air 242
//name="outboundFlight" value="242;149;01/19/2019">
//outboundFlight" value="242;149;01/19/2019">
// <input type="radio" name="outboundFlight" value="242;149;01/19/2019">

web_reg_save_param_ex(
		"ParamName=outboundFlight",
		"LB=name=\"outboundFlight\" value=\"",
		"RB=\"",
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
		"Name=depart", "Value={depart}", ENDITEM,
		"Name=departDate", "Value=01/19/2019", ENDITEM,
		"Name=arrive", "Value={vuserid}", ENDITEM,
		"Name=returnDate", "Value=01/20/2019", ENDITEM,
		"Name=numPassengers", "Value=1", ENDITEM,
		"Name=seatPref", "Value={piteration}", ENDITEM,
		"Name=seatType", "Value={pRandom}", ENDITEM,
		"Name=.cgifields", "Value={pUnjque}", ENDITEM,
		"Name=.cgifields", "Value=seatType", ENDITEM,
		"Name=.cgifields", "Value=seatPref", ENDITEM,
		"Name=findFlights.x", "Value=37", ENDITEM,
		"Name=findFlights.y", "Value=11", ENDITEM,
		LAST);
		
	x = atoi(lr_eval_string("{vuserid}"));
    userid=lr_paramarr_idx("depart",x);
    lr_save_string(userid,"puserid");
    
    x = atoi(lr_eval_string("{piteration}"));
    userid=lr_paramarr_idx("depart",x);
    lr_save_string(userid,"puserid");
		
        x = atoi(lr_eval_string("{pRandom}"));
    userid=lr_paramarr_idx("depart",x);
    lr_save_string(userid,"puserid");
    
    x = atoi(lr_eval_string("{pUnjque}"));
    userid=lr_paramarr_idx("depart",x);
    lr_save_string(userid,"puserid");
    
		

	lr_think_time(7);

	web_submit_data("reservations.pl_2",
		"Action=http://127.0.0.1:1080/cgi-bin/reservations.pl",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl",
		"Snapshot=t5.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=outboundFlight", "Value={outboundFlight}", ENDITEM,
		"Name=numPassengers", "Value=1", ENDITEM,
		"Name=advanceDiscount", "Value=0", ENDITEM,
		"Name=seatType", "Value=Business", ENDITEM,
		"Name=seatPref", "Value=Window", ENDITEM,
		"Name=reserveFlights.x", "Value=51", ENDITEM,
		"Name=reserveFlights.y", "Value=15", ENDITEM,
		LAST);
	
	
	
	strcpy(xyz,lr_eval_string("{outboundFlight}"));
	//char *strtok( char *string, const char *delimiters);
	token=(char *)strtok(xyz,";");
	lr_save_string(token,"finalValue1");
	while(token != NULL)
	{
		token=(char *)strtok(NULL,";");
		//lr_save_string(token,"finalValue1");
		lr_output_message("%s",token);
	}
	
	
	
	        

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

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
		"Name=address1", "Value=suryapet", ENDITEM,
		"Name=address2", "Value=ts", ENDITEM,
		"Name=pass1", "Value=Jojo Bean", ENDITEM,
		"Name=creditCard", "Value=9948897938", ENDITEM,
		"Name=expDate", "Value=", ENDITEM,
		"Name=oldCCOption", "Value=", ENDITEM,
		"Name=numPassengers", "Value=1", ENDITEM,
		"Name=seatType", "Value=Business", ENDITEM,
		"Name=seatPref", "Value=Window", ENDITEM,
		"Name=outboundFlight", "Value={outboundFlight}", ENDITEM,
		"Name=advanceDiscount", "Value=0", ENDITEM,
		"Name=returnFlight", "Value=", ENDITEM,
		"Name=JSFormSubmit", "Value=off", ENDITEM,
		"Name=.cgifields", "Value=saveCC", ENDITEM,
		"Name=buyFlights.x", "Value=49", ENDITEM,
		"Name=buyFlights.y", "Value=11", ENDITEM,
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