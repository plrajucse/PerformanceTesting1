bookFlights()
{

	web_custom_request("welcome.pl_2", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=search", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t16.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("nav.pl_3", 
		"URL=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=search", 
		"Snapshot=t17.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("in_flights.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/in_flights.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t18.inf", 
		LAST);

	web_custom_request("home.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/home.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t19.inf", 
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

	web_custom_request("button_next.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/button_next.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t21.inf", 
		LAST);

	lr_think_time(21);

	web_custom_request("reservations.pl_2", 
		"URL=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t22.inf", 
		"Mode=HTTP", 
		"Body=advanceDiscount=0&depart=Frankfurt&departDate=02%2F08%2F2019&arrive=Paris&returnDate=02%2F09%2F2019&numPassengers=1&seatPref=Window&seatType=Business&.cgifields=roundtrip&.cgifields=seatType&.cgifields=seatPref&findFlights.x=35&findFlights.y=7", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_custom_request("reservations.pl_3", 
		"URL=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t23.inf", 
		"Mode=HTTP", 
		"Body=outboundFlight=143%3B152%3B02%2F08%2F2019&numPassengers=1&advanceDiscount=0&seatType=Business&seatPref=Window&reserveFlights.x=43&reserveFlights.y=9", 
		LAST);

	web_add_auto_header("UA-CPU", 
		"AMD64");

	web_custom_request("suggestions.en-US", 
		"URL=https://ieonline.microsoft.com/iedomainsuggestions/ie11/suggestions.en-US", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t24.inf", 
		LAST);

	web_custom_request("fwlink", 
		"URL=https://go.microsoft.com/fwlink/?LinkID=401135", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t25.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("UA-CPU");

	lr_think_time(51);

	web_custom_request("reservations.pl_4", 
		"URL=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t26.inf", 
		"Mode=HTTP", 
		"Body=firstName=Jojo1&lastName=Bean&address1=suryapet&address2=ts&pass1=Jojo1+Bean&creditCard=9948897938&expDate=&oldCCOption=&numPassengers=1&seatType=Business&seatPref=Window&outboundFlight=143%3B152%3B02%2F08%2F2019&advanceDiscount=0&returnFlight=&JSFormSubmit=off&.cgifields=saveCC&buyFlights.x=40&buyFlights.y=6", 
		LAST);

	web_custom_request("bookanother.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/bookanother.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t27.inf", 
		LAST);

	return 0;
}
