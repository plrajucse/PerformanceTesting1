Action()
{

	/* Click on Flights */

	web_custom_request("welcome.pl_2", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=search", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t45.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("nav.pl_3", 
		"URL=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=search", 
		"Snapshot=t46.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("reservations.pl", 
		"URL=http://127.0.0.1:1080/cgi-bin/reservations.pl?page=welcome", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=search", 
		"Snapshot=t47.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("in_flights.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/in_flights.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t48.inf", 
		LAST);

	web_custom_request("home.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/home.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t49.inf", 
		LAST);

	web_custom_request("button_next.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/button_next.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t50.inf", 
		LAST);

	/* Finf Flight Continue */

	lr_think_time(33);

	web_custom_request("reservations.pl_2", 
		"URL=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t51.inf", 
		"Mode=HTTP", 
		"Body=advanceDiscount=0&depart=London&departDate=02%2F09%2F2019&arrive=Paris&returnDate=02%2F10%2F2019&numPassengers=1&seatPref=Window&seatType=Business&.cgifields=roundtrip&.cgifields=seatType&.cgifields=seatPref&findFlights.x=66&findFlights.y=3", 
		LAST);

	/* Finf Flight Costs Continue */

	lr_think_time(78);

	web_custom_request("reservations.pl_3", 
		"URL=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t52.inf", 
		"Mode=HTTP", 
		"Body=outboundFlight=241%3B140%3B02%2F09%2F2019&numPassengers=1&advanceDiscount=0&seatType=Business&seatPref=Window&reserveFlights.x=65&reserveFlights.y=6", 
		LAST);

	/* Payment Details Continue */

	lr_think_time(37);

	web_custom_request("reservations.pl_4", 
		"URL=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t53.inf", 
		"Mode=HTTP", 
		"Body=firstName=Jojo&lastName=Bean&address1=aaa&address2=bbbbb&pass1=Jojo+Bean&creditCard=9948897938&expDate=&oldCCOption=&numPassengers=1&seatType=Business&seatPref=Window&outboundFlight=241%3B140%3B02%2F09%2F2019&advanceDiscount=0&returnFlight=&JSFormSubmit=off&.cgifields=saveCC&buyFlights.x=64&buyFlights.y=6", 
		LAST);

	web_custom_request("bookanother.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/bookanother.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t54.inf", 
		LAST);

	/* Book Another */

	lr_think_time(23);

	web_custom_request("reservations.pl_5", 
		"URL=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t55.inf", 
		"Mode=HTTP", 
		"Body=Book+Another.x=42&Book+Another.y=1", 
		LAST);

	/* Find Flight Continue */

	lr_think_time(30);

	web_custom_request("reservations.pl_6", 
		"URL=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t56.inf", 
		"Mode=HTTP", 
		"Body=advanceDiscount=0&depart=London&departDate=02%2F09%2F2019&arrive=Portland&returnDate=02%2F10%2F2019&numPassengers=1&seatPref=None&seatType=Coach&.cgifields=roundtrip&.cgifields=seatType&.cgifields=seatPref&findFlights.x=52&findFlights.y=4", 
		LAST);

	/* Finf Flight Costs Continue */

	lr_think_time(23);

	web_custom_request("reservations.pl_7", 
		"URL=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t57.inf", 
		"Mode=HTTP", 
		"Body=outboundFlight=250%3B555%3B02%2F09%2F2019&numPassengers=1&advanceDiscount=0&seatType=Coach&seatPref=None&reserveFlights.x=50&reserveFlights.y=8", 
		LAST);

	/* Payment Details */

	lr_think_time(31);

	web_custom_request("reservations.pl_8", 
		"URL=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t58.inf", 
		"Mode=HTTP", 
		"Body=firstName=Jojo&lastName=Bean&address1=ccccc&address2=dddddd&pass1=Jojo+Bean&creditCard=9948897938&expDate=&oldCCOption=&numPassengers=1&seatType=Coach&seatPref=None&outboundFlight=250%3B555%3B02%2F09%2F2019&advanceDiscount=0&returnFlight=&JSFormSubmit=off&.cgifields=saveCC&buyFlights.x=37&buyFlights.y=6", 
		LAST);

	/* Book Another */

	lr_think_time(13);

	web_custom_request("reservations.pl_9", 
		"URL=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t59.inf", 
		"Mode=HTTP", 
		"Body=Book+Another.x=59&Book+Another.y=9", 
		LAST);

	/* Find Flight Continue */

	lr_think_time(35);

	web_custom_request("reservations.pl_10", 
		"URL=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t60.inf", 
		"Mode=HTTP", 
		"Body=advanceDiscount=0&depart=Los+Angeles&departDate=02%2F09%2F2019&arrive=Denver&returnDate=02%2F10%2F2019&numPassengers=1&seatPref=Aisle&seatType=First&.cgifields=roundtrip&.cgifields=seatType&.cgifields=seatPref&findFlights.x=66&findFlights.y=8", 
		LAST);

	/* Find Flight Costs Continue */

	lr_think_time(26);

	web_custom_request("reservations.pl_11", 
		"URL=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t61.inf", 
		"Mode=HTTP", 
		"Body=outboundFlight=301%3B420%3B02%2F09%2F2019&numPassengers=1&advanceDiscount=0&seatType=First&seatPref=Aisle&reserveFlights.x=50&reserveFlights.y=6", 
		LAST);

	lr_think_time(22);

	web_custom_request("reservations.pl_12", 
		"URL=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t62.inf", 
		"Mode=HTTP", 
		"Body=firstName=Jojo&lastName=Bean&address1=eeee&address2=rrrrrr&pass1=Jojo+Bean&creditCard=9948897938&expDate=&oldCCOption=&numPassengers=1&seatType=First&seatPref=Aisle&outboundFlight=301%3B420%3B02%2F09%2F2019&advanceDiscount=0&returnFlight=&JSFormSubmit=off&.cgifields=saveCC&buyFlights.x=43&buyFlights.y=3", 
		LAST);

	lr_think_time(5);

	web_custom_request("reservations.pl_13", 
		"URL=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t63.inf", 
		"Mode=HTTP", 
		"Body=Book+Another.x=29&Book+Another.y=7", 
		LAST);

	return 0;
}
