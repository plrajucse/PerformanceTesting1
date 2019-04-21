Action()
{
	web_url("WEBTOURS",
    "URL=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home",
    "TargetFrame=",
    "Resource=0",
    "RecContentType=text/html",
    "Snapshot=t1.inf",
    "Mode=HTML",
    LAST );

	lr_think_time(10);

	
	web_custom_request("post_query.exe", "Method=POST", 

    "URL=http://127.0.0.1:1080/cgi-bin/login.pl", 

    "Body=userSession=125251.791332523zttczDQpAVzzzzzHDizffpiDtV&username=jojo&password=bean&login.x=68&login.y=14&JSFormSubmit=off", 

    LAST ); 


	lr_think_time(5);

	web_url("SignOff Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}