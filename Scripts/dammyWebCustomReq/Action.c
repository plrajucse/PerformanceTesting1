Action()
{

	web_custom_request("webtours", 
		"URL=http://127.0.0.1:1080/webtours/", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("header.html", 
		"URL=http://127.0.0.1:1080/webtours/header.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/webtours/", 
		"Snapshot=t2.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("welcome.pl", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/webtours/", 
		"Snapshot=t3.inf", 
		"Mode=HTTP", 
		LAST);

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

	web_custom_request("mer_login.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/mer_login.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t8.inf", 
		LAST);

	lr_think_time(9);

	web_custom_request("login.pl", 
		"URL=http://127.0.0.1:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t9.inf", 
		"Mode=HTTP", 
		"Body=userSession=125497.793924666ztffcQcpHHfDiHDVpHfzzf&username=jojo&password=bean&JSFormSubmit=off&login.x=72&login.y=8", 
		LAST);

	web_custom_request("nav.pl_2", 
		"URL=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/login.pl", 
		"Snapshot=t10.inf", 
		"Mode=HTTP", 
		LAST);

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

	web_custom_request("login.pl_2", 
		"URL=http://127.0.0.1:1080/cgi-bin/login.pl?intro=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/login.pl", 
		"Snapshot=t15.inf", 
		"Mode=HTTP", 
		LAST);

	lr_think_time(4);

	web_custom_request("Itinerary Button", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=itinerary", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t16.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("nav.pl_3", 
		"URL=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=itinerary", 
		"Snapshot=t17.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("home.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/home.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t18.inf", 
		LAST);

	web_custom_request("in_itinerary.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/in_itinerary.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t19.inf", 
		LAST);

	web_custom_request("itinerary.pl", 
		"URL=http://127.0.0.1:1080/cgi-bin/itinerary.pl", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=itinerary", 
		"Snapshot=t20.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("cancelallreservations.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/cancelallreservations.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t21.inf", 
		LAST);

	web_custom_request("cancelreservation.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/cancelreservation.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t22.inf", 
		LAST);

	lr_think_time(9);

	web_custom_request("itinerary.pl_2", 
		"URL=http://127.0.0.1:1080/cgi-bin/itinerary.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t23.inf", 
		"Mode=HTTP", 
		"Body=1=on&flightID=294009004-779-JB&.cgifields=1&removeFlights.x=60&removeFlights.y=11", 
		LAST);

	lr_think_time(4);

	web_custom_request("SignOff Button", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=1", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t24.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("nav.pl_4", 
		"URL=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=1", 
		"Snapshot=t25.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("home.html_2", 
		"URL=http://127.0.0.1:1080/WebTours/home.html", 
		"Method=GET", 
		"Resource=0", 
		"Referer=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=1", 
		"Snapshot=t26.inf", 
		"Mode=HTTP", 
		LAST);

	lr_think_time(15);

	web_custom_request("login.pl_3", 
		"URL=http://127.0.0.1:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t27.inf", 
		"Mode=HTTP", 
		"Body=userSession=125497.7963548ztffcQcpQDiHDVpHfHt&username=jojo&password=bean&JSFormSubmit=off&login.x=66&login.y=15", 
		LAST);

	web_custom_request("nav.pl_5", 
		"URL=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/login.pl", 
		"Snapshot=t28.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("login.pl_4", 
		"URL=http://127.0.0.1:1080/cgi-bin/login.pl?intro=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/login.pl", 
		"Snapshot=t29.inf", 
		"Mode=HTTP", 
		LAST);

	lr_think_time(21);

	web_custom_request("Search Flights Button", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=search", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t30.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("nav.pl_6", 
		"URL=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=search", 
		"Snapshot=t31.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("in_flights.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/in_flights.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t32.inf", 
		LAST);

	web_custom_request("reservations.pl", 
		"URL=http://127.0.0.1:1080/cgi-bin/reservations.pl?page=welcome", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=search", 
		"Snapshot=t33.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("button_next.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/button_next.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t34.inf", 
		LAST);

	lr_think_time(12);

	web_custom_request("reservations.pl_2", 
		"URL=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t35.inf", 
		"Mode=HTTP", 
		"Body=advanceDiscount=0&depart=London&departDate=02%2F05%2F2019&arrive=Paris&returnDate=02%2F06%2F2019&numPassengers=1&seatPref=Window&seatType=Business&.cgifields=roundtrip&.cgifields=seatType&.cgifields=seatPref&findFlights.x=63&findFlights.y=8", 
		LAST);

	lr_think_time(6);

	web_custom_request("reservations.pl_3", 
		"URL=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t36.inf", 
		"Mode=HTTP", 
		"Body=outboundFlight=242%3B149%3B02%2F05%2F2019&numPassengers=1&advanceDiscount=0&seatType=Business&seatPref=Window&reserveFlights.x=36&reserveFlights.y=7", 
		LAST);

	web_custom_request("reservations.pl_4", 
		"URL=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t37.inf", 
		"Mode=HTTP", 
		"Body=firstName=Jojo&lastName=Bean&address1=&address2=&pass1=Jojo+Bean&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Business&seatPref=Window&outboundFlight=242%3B149%3B02%2F05%2F2019&advanceDiscount=0&returnFlight=&JSFormSubmit=off&.cgifields=saveCC&buyFlights.x=61&buyFlights.y=16", 
		LAST);

	web_custom_request("bookanother.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/bookanother.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t38.inf", 
		LAST);

	lr_think_time(8);

	web_custom_request("reservations.pl_5", 
		"URL=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t39.inf", 
		"Mode=HTTP", 
		"Body=Book+Another.x=71&Book+Another.y=2", 
		LAST);

	lr_think_time(52);

	web_custom_request("reservations.pl_6", 
		"URL=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t40.inf", 
		"Mode=HTTP", 
		"Body=advanceDiscount=0&depart=Denver&departDate=02%2F05%2F2019&arrive=London&returnDate=02%2F06%2F2019&numPassengers=1&seatPref=Window&seatType=Business&.cgifields=roundtrip&.cgifields=seatType&.cgifields=seatPref&findFlights.x=61&findFlights.y=7", 
		LAST);

	web_custom_request("reservations.pl_7", 
		"URL=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t41.inf", 
		"Mode=HTTP", 
		"Body=outboundFlight=020%3B491%3B02%2F05%2F2019&numPassengers=1&advanceDiscount=0&seatType=Business&seatPref=Window&reserveFlights.x=56&reserveFlights.y=9", 
		LAST);

	web_custom_request("reservations.pl_8", 
		"URL=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t42.inf", 
		"Mode=HTTP", 
		"Body=firstName=Jojo&lastName=Bean&address1=&address2=&pass1=Jojo+Bean&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Business&seatPref=Window&outboundFlight=020%3B491%3B02%2F05%2F2019&advanceDiscount=0&returnFlight=&JSFormSubmit=off&.cgifields=saveCC&buyFlights.x=55&buyFlights.y=4", 
		LAST);

	lr_think_time(12);

	web_custom_request("reservations.pl_9", 
		"URL=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t43.inf", 
		"Mode=HTTP", 
		"Body=Book+Another.x=39&Book+Another.y=6", 
		LAST);

	lr_think_time(8);

	web_custom_request("reservations.pl_10", 
		"URL=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t44.inf", 
		"Mode=HTTP", 
		"Body=advanceDiscount=0&depart=Denver&departDate=02%2F05%2F2019&arrive=Portland&returnDate=02%2F06%2F2019&numPassengers=1&seatPref=Window&seatType=Business&.cgifields=roundtrip&.cgifields=seatType&.cgifields=seatPref&findFlights.x=69&findFlights.y=10", 
		LAST);

	web_custom_request("reservations.pl_11", 
		"URL=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t45.inf", 
		"Mode=HTTP", 
		"Body=outboundFlight=051%3B355%3B02%2F05%2F2019&numPassengers=1&advanceDiscount=0&seatType=Business&seatPref=Window&reserveFlights.x=35&reserveFlights.y=11", 
		LAST);

	web_custom_request("reservations.pl_12", 
		"URL=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t46.inf", 
		"Mode=HTTP", 
		"Body=firstName=Jojo&lastName=Bean&address1=&address2=&pass1=Jojo+Bean&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Business&seatPref=Window&outboundFlight=051%3B355%3B02%2F05%2F2019&advanceDiscount=0&returnFlight=&JSFormSubmit=off&.cgifields=saveCC&buyFlights.x=25&buyFlights.y=4", 
		LAST);

	web_custom_request("reservations.pl_13", 
		"URL=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t47.inf", 
		"Mode=HTTP", 
		"Body=Book+Another.x=42&Book+Another.y=13", 
		LAST);

	lr_think_time(4);

	web_custom_request("reservations.pl_14", 
		"URL=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t48.inf", 
		"Mode=HTTP", 
		"Body=advanceDiscount=0&depart=Denver&departDate=02%2F05%2F2019&arrive=Denver&returnDate=02%2F06%2F2019&numPassengers=1&seatPref=Window&seatType=Business&.cgifields=roundtrip&.cgifields=seatType&.cgifields=seatPref&findFlights.x=65&findFlights.y=13", 
		LAST);

	web_custom_request("reservations.pl_15", 
		"URL=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t49.inf", 
		"Mode=HTTP", 
		"Body=outboundFlight=000%3B0%3B02%2F05%2F2019&numPassengers=1&advanceDiscount=0&seatType=Business&seatPref=Window&reserveFlights.x=48&reserveFlights.y=16", 
		LAST);

	web_custom_request("reservations.pl_16", 
		"URL=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t50.inf", 
		"Mode=HTTP", 
		"Body=firstName=Jojo&lastName=Bean&address1=&address2=&pass1=Jojo+Bean&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Business&seatPref=Window&outboundFlight=000%3B0%3B02%2F05%2F2019&advanceDiscount=0&returnFlight=&JSFormSubmit=off&.cgifields=saveCC&buyFlights.x=30&buyFlights.y=2", 
		LAST);

	web_custom_request("reservations.pl_17", 
		"URL=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t51.inf", 
		"Mode=HTTP", 
		"Body=Book+Another.x=20&Book+Another.y=16", 
		LAST);

	lr_think_time(6);

	web_custom_request("reservations.pl_18", 
		"URL=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t52.inf", 
		"Mode=HTTP", 
		"Body=advanceDiscount=0&depart=Denver&departDate=02%2F05%2F2019&arrive=London&returnDate=02%2F06%2F2019&numPassengers=1&seatPref=Window&seatType=Business&.cgifields=roundtrip&.cgifields=seatType&.cgifields=seatPref&findFlights.x=71&findFlights.y=13", 
		LAST);

	web_custom_request("reservations.pl_19", 
		"URL=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t53.inf", 
		"Mode=HTTP", 
		"Body=outboundFlight=020%3B491%3B02%2F05%2F2019&numPassengers=1&advanceDiscount=0&seatType=Business&seatPref=Window&reserveFlights.x=17&reserveFlights.y=9", 
		LAST);

	web_custom_request("reservations.pl_20", 
		"URL=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t54.inf", 
		"Mode=HTTP", 
		"Body=firstName=Jojo&lastName=Bean&address1=&address2=&pass1=Jojo+Bean&creditCard=&expDate=&oldCCOption=&numPassengers=1&seatType=Business&seatPref=Window&outboundFlight=020%3B491%3B02%2F05%2F2019&advanceDiscount=0&returnFlight=&JSFormSubmit=off&.cgifields=saveCC&buyFlights.x=37&buyFlights.y=9", 
		LAST);

	web_custom_request("Itinerary Button_2", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=itinerary", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t55.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("nav.pl_7", 
		"URL=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=itinerary", 
		"Snapshot=t56.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("itinerary.pl_3", 
		"URL=http://127.0.0.1:1080/cgi-bin/itinerary.pl", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=itinerary", 
		"Snapshot=t57.inf", 
		"Mode=HTTP", 
		LAST);

	lr_think_time(78);

	web_custom_request("itinerary.pl_4", 
		"URL=http://127.0.0.1:1080/cgi-bin/itinerary.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t58.inf", 
		"Mode=HTTP", 
		"Body=1=on&flightID=8968-780-JB&2=on&flightID=758-1576-JB&flightID=1902-2335-JB&flightID=0-30-JB&flightID=758-3883-JB&.cgifields=4&.cgifields=1&.cgifields=3&.cgifields=2&.cgifields=5&removeFlights.x=75&removeFlights.y=4", 
		LAST);

	lr_think_time(4);

	web_custom_request("SignOff Button_2", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=1", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t59.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("home.html_3", 
		"URL=http://127.0.0.1:1080/WebTours/home.html", 
		"Method=GET", 
		"Resource=0", 
		"Referer=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=1", 
		"Snapshot=t60.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("nav.pl_8", 
		"URL=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=1", 
		"Snapshot=t61.inf", 
		"Mode=HTTP", 
		LAST);

	return 0;
}