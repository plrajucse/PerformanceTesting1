itinerary()
{

	lr_think_time(77);

	web_custom_request("welcome.pl_2", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=itinerary", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t34.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("nav.pl_4", 
		"URL=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=itinerary", 
		"Snapshot=t35.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("itinerary.pl", 
		"URL=http://127.0.0.1:1080/cgi-bin/itinerary.pl", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=itinerary", 
		"Snapshot=t36.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("cancelreservation.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/cancelreservation.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t37.inf", 
		LAST);

	web_custom_request("in_itinerary.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/in_itinerary.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t38.inf", 
		LAST);

	web_custom_request("cancelallreservations.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/cancelallreservations.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t39.inf", 
		LAST);

	return 0;
}
