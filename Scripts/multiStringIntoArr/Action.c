Action()
{
    char *token;
	char xyz[100];
	int i=0,j;
	char *abc[100];
	
	char* fToken;
	char* xyzArr[1000];
	char* temp;
	
	// userSession" value="125405.966221142ztfAfzQpDiHfDiHADptVzDcf"/>
	web_reg_save_param("cUserSession","LB=userSession\" value=\"","RB=\"/>",LAST);

	web_url("index.htm", 
		"URL=http://127.0.0.1:1080/webtours/index.htm", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(6);

	web_submit_data("login.pl", 
		"Action=http://127.0.0.1:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=body", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value={{cUserSession}}", ENDITEM, 
		"Name=username", "Value=jojo", ENDITEM, 
		"Name=password", "Value=bean", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=login.x", "Value=56", ENDITEM, 
		"Name=login.y", "Value=11", ENDITEM, 
		LAST);

	
	token = (char*)strtok(lr_eval_string("{cUserSession}"),".");
	lr_output_message(token);
	// While valid tokens are returned
	while(token != NULL){
		abc[i]= token;
		lr_output_message("abc[%d]=%s\n",i,abc[i]);
	// Get the next token(second token)
	token = (char *)strtok(NULL,".");
    i++;
	}
	
	
	
//	Departure City :</td> <td><select name="depart" >
//<option selected="selected" value="Denver">Denver</option>
//<option value="Frankfurt">Frankfurt</option>
//<option value="London">London</option>
//<option value="Los Angeles">Los Angeles</option>
//<option value="Paris">Paris</option>
//<option value="Portland">Portland</option>
//<option value="San Francisco">San Francisco</option>
//<option value="Seattle">Seattle</option>
//<option value="Sydney">Sydney</option>
//<option value="Zurich">Zurich</option>
//</select></td> <td align="left">Departure Date
		
web_set_max_html_param_len("99999");
		web_reg_save_param("cSource","LB=Departure City :</td> <td><select name=\"depart\" >","RB=</select></td> <td align=\"left\">Departure Date",LAST);

	//\n<option selected="selected" value="Denver">Denver</option>\n<option value="Frankfurt">Frankfurt</option>\n<option value="London">London</option>\n<option value="Los Angeles">Los Angeles</option>\n<option value="Paris">Paris</option>\n<option value="Portland">Portland</option>\n<option value="San Francisco">San Francisco</option>\n<option value="Seattle">Seattle</option>\n<option value="Sydney">Sydney</option>\n<option value="Zurich">Zurich</option>\n".
	web_url("Search Flights Button", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=search", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(12);
	
	

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
		"Name=depart", "Value=Frankfurt", ENDITEM, 
		"Name=departDate", "Value=01/23/2019", ENDITEM, 
		"Name=arrive", "Value=London", ENDITEM, 
		"Name=returnDate", "Value=01/24/2019", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatPref", "Value=Window", ENDITEM, 
		"Name=seatType", "Value=Business", ENDITEM, 
		"Name=.cgifields", "Value=roundtrip", ENDITEM, 
		"Name=.cgifields", "Value=seatType", ENDITEM, 
		"Name=.cgifields", "Value=seatPref", ENDITEM, 
		"Name=findFlights.x", "Value=62", ENDITEM, 
		"Name=findFlights.y", "Value=13", ENDITEM, 
		LAST);

	
	fToken=(char *)strtok(lr_eval_string("{cSource}"),"\"");
	//valid token
		while(fToken != NULL){
		if(j%2 !=0){
			xyzArr[i]=fToken;
			i++;
		}
		fToken=(char*)strtok(NULL,"\"");
		j++;
		
	}
	temp=xyzArr[rand()%i];
	
	lr_save_string(temp,"randomValue");
	

	web_submit_data("reservations.pl_2", 
		"Action=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=122;364;01/23/2019", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=seatType", "Value=Business", ENDITEM, 
		"Name=seatPref", "Value=Window", ENDITEM, 
		"Name=reserveFlights.x", "Value=71", ENDITEM, 
		"Name=reserveFlights.y", "Value=10", ENDITEM, 
		LAST);

	lr_think_time(97);

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
		"Name=address2", "Value=suryapet", ENDITEM, 
		"Name=pass1", "Value=Jojo Bean", ENDITEM, 
		"Name=creditCard", "Value=9948897938", ENDITEM, 
		"Name=expDate", "Value=", ENDITEM, 
		"Name=oldCCOption", "Value=", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatType", "Value=Business", ENDITEM, 
		"Name=seatPref", "Value=Window", ENDITEM, 
		"Name=outboundFlight", "Value=122;364;01/23/2019", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=returnFlight", "Value=", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=.cgifields", "Value=saveCC", ENDITEM, 
		"Name=buyFlights.x", "Value=65", ENDITEM, 
		"Name=buyFlights.y", "Value=7", ENDITEM, 
		LAST);

	lr_think_time(39);

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