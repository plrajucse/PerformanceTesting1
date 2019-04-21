vuser_end()
{

	lr_start_transaction("Borland_SC001_T005_LogOut");

	web_add_header("Origin", 
		"http://demo.borland.com");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_submit_data("index.jsf_2", 
		"Action=http://demo.borland.com/InsuranceWebExtJS/index.jsf", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://demo.borland.com/InsuranceWebExtJS/index.jsf", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=logout-form", "Value=logout-form", ENDITEM, 
		"Name=logout-form:logout.x", "Value=41", ENDITEM, 
		"Name=logout-form:logout.y", "Value=8", ENDITEM, 
		"Name=javax.faces.ViewState", "Value=j_id7:j_id8", ENDITEM, 
		LAST);

	lr_end_transaction("Borland_SC001_T005_LogOut",LR_AUTO);

	return 0;
}