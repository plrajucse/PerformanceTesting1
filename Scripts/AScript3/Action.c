//#include "C:\\Users\\Dell\Desktop\\PLRAJU.h"
#include "PLRAJU.h"
Action()
{

/*Correlation comment - Do not change!  Original value='125426.79181855ztfVztApzAtVzzzHDiHAQpitDzcf' Name ='userSession' Type ='Manual'*/
	web_reg_save_param_ex(
		"ParamName=userSession",
		"LB=name=\"userSession\" value=\"",
		"RB=\"/>\n<table border",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/nav.pl*",
		LAST);

	/* Launuch */
		//launch fun call
        launch();

	/* Login */

	/* Login */
      //login fun call
	login();

	/* click on flights */

	lr_think_time(47);

	web_url("Search Flights Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=search", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	/* click on home */

	lr_think_time(32);

	web_url("Home Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=menus", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	/* click on itineary */

	lr_think_time(47);

	web_url("Itinerary Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	

	/* Signoff */
	//logoff fun call
	logoff();

	return 0;
}