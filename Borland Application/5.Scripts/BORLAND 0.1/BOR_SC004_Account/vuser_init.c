/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 971
   ------------------------------------------------------------------------------- */

vuser_init()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");
      lr_start_transaction("BOR_SC001_T001_Launch");
	web_url("InsuranceWebExtJS", 
		"URL=http://demo.borland.com/InsuranceWebExtJS/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("BOR_SC001_T001_Launch", LR_AUTO);
	

	lr_start_transaction("BOR_SC001_T002_LogIn");

	lr_think_time(26);

	web_submit_data("index.jsf;jsessionid=1F549FC00D90127249E85446F44006FC", 
		"Action=http://demo.borland.com/InsuranceWebExtJS/index.jsf;jsessionid=1F549FC00D90127249E85446F44006FC", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://demo.borland.com/InsuranceWebExtJS/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=login-form", "Value=login-form", ENDITEM, 
		"Name=login-form:email", "Value=john.smith@gmail.com", ENDITEM, 
		"Name=login-form:password", "Value=john", ENDITEM, 
		"Name=login-form:login.x", "Value=55", ENDITEM, 
		"Name=login-form:login.y", "Value=11", ENDITEM, 
		"Name=javax.faces.ViewState", "Value=j_id1:j_id2", ENDITEM, 
		LAST);

	lr_end_transaction("BOR_SC001_T002_LogIn",LR_AUTO);

	lr_think_time(38);


	return 0;
}
