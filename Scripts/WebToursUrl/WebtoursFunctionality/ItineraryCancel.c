ItineraryCancel()
{

	lr_think_time(128);

	web_custom_request("welcome.pl_3", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=itinerary", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t28.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("nav.pl_4", 
		"URL=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=itinerary", 
		"Snapshot=t29.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("itinerary.pl", 
		"URL=http://127.0.0.1:1080/cgi-bin/itinerary.pl", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=itinerary", 
		"Snapshot=t30.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("in_itinerary.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/in_itinerary.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t31.inf", 
		LAST);

	web_custom_request("cancelallreservations.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/cancelallreservations.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t32.inf", 
		LAST);

	web_custom_request("cancelreservation.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/cancelreservation.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t33.inf", 
		LAST);

	/* Cancel Checked Tickets */

	lr_think_time(243);

	web_custom_request("itinerary.pl_2", 
		"URL=http://127.0.0.1:1080/cgi-bin/itinerary.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t34.inf", 
		"Mode=HTTP", 
		"Body=1=on&flightID=294009004-779-JB&2=on&flightID=294009004-1548-JB&3=on&flightID=294009004-2317-JB&4=on&flightID=294009004-3086-JB&5=on&flightID=294009004-3856-JB&6=on&flightID=294009004-4625-JB&7=on&flightID=168305649-5425-JB&8=on&flightID=168305649-6194-JB&9=on&flightID=168305649-6963-JB&10=on&flightID=168305649-7732-JB&11=on&flightID=168305649-8501-JB&12=on&flightID=168305649-9271-JB&13=on&flightID=168305649-10040-JB&14=on&flightID=168305649-10809-JB&15=on&flightID=168305649-11578-JB&16=on&"
		"flightID=168305649-12348-JB&17=on&flightID=168305649-13117-JB&18=on&flightID=168305649-13886-JB&19=on&flightID=168305649-14655-JB&20=on&flightID=168305649-15425-JB&21=on&flightID=168305649-16194-JB&22=on&flightID=168305649-16963-JB&23=on&flightID=168305649-17732-JB&24=on&flightID=168305649-18501-JB&25=on&flightID=168305649-19271-JB&26=on&flightID=168305649-20040-JB&27=on&flightID=168305649-20809-JB&28=on&flightID=168305649-21578-JB&29=on&flightID=168305649-22348-JB&30=on&flightID="
		"168305649-23117-JB&31=on&flightID=168305649-23886-JB&32=on&flightID=168305649-24655-JB&33=on&flightID=168305649-25425-JB&34=on&flightID=168305649-26194-JB&35=on&flightID=168305649-26963-JB&36=on&flightID=168305649-27732-JB&37=on&flightID=168305649-28501-JB&38=on&flightID=168305649-29271-JB&39=on&flightID=168305649-30040-JB&40=on&flightID=168305649-30809-JB&41=on&flightID=168305649-31578-JB&42=on&flightID=168305649-32348-JB&43=on&flightID=168305649-33117-JB&flightID=168305649-33886-JB&flightID="
		"168305649-34655-JB&flightID=168305649-35425-JB&flightID=168305649-36194-JB&flightID=168305649-36963-JB&flightID=294005301-37704-JB&.cgifields=33&.cgifields=32&.cgifields=21&.cgifields=7&.cgifields=26&.cgifields=17&.cgifields=2&.cgifields=1&.cgifields=18&.cgifields=30&.cgifields=16&.cgifields=44&.cgifields=27&.cgifields=25&.cgifields=28&.cgifields=40&.cgifields=20&.cgifields=14&.cgifields=49&.cgifields=24&.cgifields=10&.cgifields=31&.cgifields=35&.cgifields=11&.cgifields=48&.cgifields=42&.cgifields"
		"=22&.cgifields=46&.cgifields=13&.cgifields=23&.cgifields=29&.cgifields=6&.cgifields=39&.cgifields=36&.cgifields=3&.cgifields=9&.cgifields=41&.cgifields=12&.cgifields=47&.cgifields=15&.cgifields=38&.cgifields=8&.cgifields=4&.cgifields=34&.cgifields=45&.cgifields=37&.cgifields=43&.cgifields=19&.cgifields=5&removeFlights.x=40&removeFlights.y=12", 
		LAST);

	/* remove All Tickets */

	lr_think_time(55);

	web_custom_request("itinerary.pl_3", 
		"URL=http://127.0.0.1:1080/cgi-bin/itinerary.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t35.inf", 
		"Mode=HTTP", 
		"Body=flightID=168305649-809-JB&flightID=168305649-1578-JB&flightID=168305649-2348-JB&flightID=168305649-3117-JB&flightID=168305649-3886-JB&flightID=294005301-4627-JB&.cgifields=6&.cgifields=4&.cgifields=1&.cgifields=3&.cgifields=2&.cgifields=5&removeAllFlights.x=52&removeAllFlights.y=10", 
		LAST);

	return 0;
}
