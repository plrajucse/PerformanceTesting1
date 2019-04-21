Action()
{
	// name="userSession" value="125253.170352369zttcHAQpQfDizfzpcfQH"/>
	web_reg_save_param("c_UserSession","lb=userSession\" value=\"","rb=\"/>",LAST);
	web_url("www.webtours.com",
    "URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=true",
    "TargetFrame=", 
    
    "Resource=0",
    "RecContentType=text/html",
    "Snapshot=t1.inf",
    "Mode=HTML",
    LAST );
	
	web_custom_request("login.pl", "Method=POST", 

    "URL=http://localhost:1080/cgi-bin/login.pl", 

    "Body=userSession={c_UserSession}&username=jojo&password=bean&login.x=33&login.y=13&JSFormSubmit=off", 

    "TargetFrame=", 

    LAST ); 

	return 0;
}
