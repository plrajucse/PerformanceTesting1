SignOff()
{

	lr_think_time(54);

	web_custom_request("welcome.pl_5", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=1", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t39.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("home.html_2", 
		"URL=http://127.0.0.1:1080/WebTours/home.html", 
		"Method=GET", 
		"Resource=0", 
		"Referer=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=1", 
		"Snapshot=t40.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("nav.pl_6", 
		"URL=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=1", 
		"Snapshot=t41.inf", 
		"Mode=HTTP", 
		LAST);

	return 0;
}