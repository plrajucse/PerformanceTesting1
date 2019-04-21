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


	lr_think_time(85);

	lr_start_transaction("BOR_SC001_T002_LogIn");

	web_submit_data("index.jsf;jsessionid=240CD16CF2601A80FF8B69EA3D9C293C", 
		"Action=http://demo.borland.com/InsuranceWebExtJS/index.jsf;jsessionid=240CD16CF2601A80FF8B69EA3D9C293C", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://demo.borland.com/InsuranceWebExtJS/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=login-form", "Value=login-form", ENDITEM, 
		"Name=login-form:email", "Value=john.smith@gmail.com", ENDITEM, 
		"Name=login-form:password", "Value=john", ENDITEM, 
		"Name=login-form:login.x", "Value=54", ENDITEM, 
		"Name=login-form:login.y", "Value=11", ENDITEM, 
		"Name=javax.faces.ViewState", "Value=j_id1:j_id2", ENDITEM, 
		LAST);

	lr_end_transaction("BOR_SC001_T002_LogIn",LR_AUTO);

	lr_think_time(95);
	
	return 0;
}
