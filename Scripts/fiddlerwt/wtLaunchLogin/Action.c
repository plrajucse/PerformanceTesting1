Action()
{
	//userSession" value="0AA"/>
	
	web_reg_save_param("c_userSession","LB=userSession\" value=\"","RB=\"/>",LAST);
	web_url("webtours",
    "URL=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home",
    "TargetFrame=", 
    "Resource=0",
    "RecContentType=text/html",
    "Snapshot=t1.inf",
    "Mode=HTML",
    LAST );
	
	web_custom_request("login.pl", "Method=POST", 

    "URL=http://127.0.0.1:1080/cgi-bin/login.pl", 

    "Body=userSession={c_userSession}&username=jojo&password=bean&login.x=50&login.y=14&JSFormSubmit=off", 

    "TargetFrame=", 

    LAST );

	
	
	return 0;
}
