Action()
{

	web_custom_request("index.htm", 
		"URL=http://127.0.0.1:1080/webtours/index.htm", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_custom_request("header.html", 
		"URL=http://127.0.0.1:1080/webtours/header.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/webtours/index.htm", 
		"Snapshot=t2.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("welcome.pl", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/webtours/index.htm", 
		"Snapshot=t3.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_custom_request("hp_logo.png", 
		"URL=http://127.0.0.1:1080/webtours/images/hp_logo.png", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://127.0.0.1:1080/webtours/header.html", 
		"Snapshot=t4.inf", 
		LAST);

	web_custom_request("webtours.png", 
		"URL=http://127.0.0.1:1080/webtours/images/webtours.png", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://127.0.0.1:1080/webtours/header.html", 
		"Snapshot=t5.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_custom_request("home.html", 
		"URL=http://127.0.0.1:1080/WebTours/home.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=true", 
		"Snapshot=t6.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("nav.pl", 
		"URL=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=true", 
		"Snapshot=t7.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_custom_request("mer_login.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/mer_login.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t8.inf", 
		LAST);

	lr_think_time(23);

	web_custom_request("login.pl", 
		"URL=http://127.0.0.1:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t9.inf", 
		"Mode=HTTP", 
		"Body=userSession=125392.199594978zttQizVpczzzzzzHDizQQpVzHz&username=jojo&password=bean&JSFormSubmit=off&login.x=64&login.y=11", 
		LAST);

	web_concurrent_start(NULL);

	web_custom_request("nav.pl_2", 
		"URL=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/login.pl", 
		"Snapshot=t10.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("login.pl_2", 
		"URL=http://127.0.0.1:1080/cgi-bin/login.pl?intro=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/login.pl", 
		"Snapshot=t15.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_custom_request("flights.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/flights.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t11.inf", 
		LAST);

	web_custom_request("itinerary.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/itinerary.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t12.inf", 
		LAST);

	web_custom_request("in_home.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/in_home.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t13.inf", 
		LAST);

	web_custom_request("signoff.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/signoff.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t14.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_custom_request("Search Flights Button", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=search", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t16.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_custom_request("nav.pl_3", 
		"URL=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=search", 
		"Snapshot=t17.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("reservations.pl", 
		"URL=http://127.0.0.1:1080/cgi-bin/reservations.pl?page=welcome", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=search", 
		"Snapshot=t20.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_custom_request("home.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/home.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t18.inf", 
		LAST);

	web_custom_request("in_flights.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/in_flights.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t19.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_custom_request("button_next.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/button_next.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t21.inf", 
		LAST);

	lr_think_time(5);

	web_custom_request("reservations.pl_2", 
		"URL=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t22.inf", 
		"Mode=HTTP", 
		"Body=advanceDiscount=0&depart=London&departDate=01%2F21%2F2019&arrive=Paris&returnDate=01%2F22%2F2019&numPassengers=6&seatPref=None&seatType=Coach&.cgifields=roundtrip&.cgifields=seatType&.cgifields=seatPref&findFlights.x=35&findFlights.y=10", 
		LAST);

	web_custom_request("reservations.pl_3", 
		"URL=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t23.inf", 
		"Mode=HTTP", 
		"Body=outboundFlight=242%3B102%3B01%2F21%2F2019&numPassengers=6&advanceDiscount=0&seatType=Coach&seatPref=None&reserveFlights.x=37&reserveFlights.y=13", 
		LAST);

	lr_think_time(33);

	web_custom_request("reservations.pl_4", 
		"URL=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t24.inf", 
		"Mode=HTTP", 
		"Body=firstName=Jojo&lastName=Bean&address1=ang&address2=ts&pass1=Jojo+Bean&pass2=a&pass3=b&pass4=c&pass5=d&pass6=e&creditCard=9948897938&expDate=&oldCCOption=&numPassengers=6&seatType=Coach&seatPref=None&outboundFlight=242%3B102%3B01%2F21%2F2019&advanceDiscount=0&returnFlight=&JSFormSubmit=off&.cgifields=saveCC&buyFlights.x=56&buyFlights.y=9", 
		LAST);

	web_custom_request("bookanother.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/bookanother.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t25.inf", 
		LAST);

	web_custom_request("SignOff Button", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=1", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t26.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_custom_request("home.html_2", 
		"URL=http://127.0.0.1:1080/WebTours/home.html", 
		"Method=GET", 
		"Resource=0", 
		"Referer=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=1", 
		"Snapshot=t27.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("nav.pl_4", 
		"URL=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=1", 
		"Snapshot=t28.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	return 0;
}