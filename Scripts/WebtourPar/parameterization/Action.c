Action()
{

	web_url("index.htm", 
		"URL=http://{pUrl}:1080/webtours/index.htm", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(34);

	web_submit_data("login.pl", 
		"Action=http://127.0.0.1:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=body", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=125294.059862292ztttiVDpcAtVzzzHDizzipiHQccf", ENDITEM, 
		"Name=username", "Value={pUser}", ENDITEM, 
		"Name=password", "Value={pPwd}", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=login.x", "Value=47", ENDITEM, 
		"Name=login.y", "Value=13", ENDITEM, 
		LAST);

	lr_think_time(4);

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
		"Name=depart", "Value=Denver", ENDITEM, 
		"Name=departDate", "Value={pDepatTime}", ENDITEM, 
		"Name=arrive", "Value=London", ENDITEM, 
		"Name=returnDate", "Value={pReturnDate}", ENDITEM, 
		"Name=numPassengers", "Value={pNumPass}", ENDITEM, 
		"Name=seatPref", "Value=Window", ENDITEM, 
		"Name=seatType", "Value=Business", ENDITEM, 
		"Name=.cgifields", "Value=roundtrip", ENDITEM, 
		"Name=.cgifields", "Value=seatType", ENDITEM, 
		"Name=.cgifields", "Value=seatPref", ENDITEM, 
		"Name=findFlights.x", "Value=63", ENDITEM, 
		"Name=findFlights.y", "Value=11", ENDITEM, 
		LAST);

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
		"Name=outboundFlight", "Value=023;401;01/07/2019", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=seatType", "Value=Business", ENDITEM, 
		"Name=seatPref", "Value=Window", ENDITEM, 
		"Name=reserveFlights.x", "Value=54", ENDITEM, 
		"Name=reserveFlights.y", "Value=10", ENDITEM, 
		LAST);

	lr_think_time(10);

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
		"Name=creditCard", "Value={pCC}", ENDITEM, 
		"Name=expDate", "Value=", ENDITEM, 
		"Name=oldCCOption", "Value=", ENDITEM, 
		"Name=numPassengers", "Value={pNumPass}", ENDITEM, 
		"Name=seatType", "Value=Business", ENDITEM, 
		"Name=seatPref", "Value=Window", ENDITEM, 
		"Name=outboundFlight", "Value=023;401;01/07/2019", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=returnFlight", "Value=", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=.cgifields", "Value=saveCC", ENDITEM, 
		"Name=buyFlights.x", "Value=40", ENDITEM, 
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