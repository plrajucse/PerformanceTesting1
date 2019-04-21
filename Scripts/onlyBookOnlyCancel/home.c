home()
{

	lr_think_time(49);

	web_custom_request("welcome.pl_3", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=menus", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t40.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("nav.pl_5", 
		"URL=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=menus", 
		"Snapshot=t41.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("login.pl_3", 
		"URL=http://127.0.0.1:1080/cgi-bin/login.pl?intro=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=menus", 
		"Snapshot=t42.inf", 
		"Mode=HTTP", 
		LAST);

	return 0;
}
