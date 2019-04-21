/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 971
   ------------------------------------------------------------------------------- */

vuser_init()
{
	int i;
	//"userSession" value="125496.963791009ztffcfApAHfDiHDVpfAAtf"/>
	web_reg_save_param("cUserSession","LB=userSession\" value=\"","RB=\"/>",LAST);

	web_url("webtours", 
		"URL=http://127.0.0.1:1080/webtours/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(10);

	web_submit_data("login.pl", 
		"Action=http://127.0.0.1:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=body", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value={cUserSession}", ENDITEM, 
		"Name=username", "Value=jojo", ENDITEM, 
		"Name=password", "Value=bean", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=login.x", "Value=59", ENDITEM, 
		"Name=login.y", "Value=6", ENDITEM, 
		LAST);
	for(i=1;i<=4;i++){
		BookTicket();
	}

	return 0;
}
