Home()
{

	lr_think_time(20);

	web_custom_request("welcome.pl_4", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=menus", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t36.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("nav.pl_5", 
		"URL=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=menus", 
		"Snapshot=t37.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("login.pl_3", 
		"URL=http://127.0.0.1:1080/cgi-bin/login.pl?intro=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=menus", 
		"Snapshot=t38.inf", 
		"Mode=HTTP", 
		LAST);

	return 0;
}
