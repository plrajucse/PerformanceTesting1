/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 971
   ------------------------------------------------------------------------------- */

vuser_init()
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

	web_custom_request("hp_logo.png", 
		"URL=http://127.0.0.1:1080/webtours/images/hp_logo.png", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://127.0.0.1:1080/webtours/header.html", 
		"Snapshot=t3.inf", 
		LAST);

	web_custom_request("webtours.png", 
		"URL=http://127.0.0.1:1080/webtours/images/webtours.png", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://127.0.0.1:1080/webtours/header.html", 
		"Snapshot=t4.inf", 
		LAST);

	web_custom_request("welcome.pl", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/webtours/", 
		"Snapshot=t5.inf", 
		"Mode=HTTP", 
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

	lr_think_time(14);

	web_custom_request("login.pl", 
		"URL=http://127.0.0.1:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t9.inf", 
		"Mode=HTTP", 
		"Body=userSession=125519.995787768ztfztDtpHiDDDDDDDiHDipzAiH&username=jojo&password=bean&JSFormSubmit=off&login.x=53&login.y=10", 
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

	web_custom_request("in_home.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/in_home.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t11.inf", 
		LAST);

	web_custom_request("flights.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/flights.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t12.inf", 
		LAST);

	web_custom_request("itinerary.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/itinerary.gif", 
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

	return 0;
}
