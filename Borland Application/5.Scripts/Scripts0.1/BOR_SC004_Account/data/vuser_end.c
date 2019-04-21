vuser_end()
{

	lr_start_transaction("BOR_SC001_T006_LogOut");

	web_submit_data("index.jsf_2", 
		"Action=http://demo.borland.com/InsuranceWebExtJS/index.jsf", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://demo.borland.com/InsuranceWebExtJS/index.jsf", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=logout-form", "Value=logout-form", ENDITEM, 
		"Name=logout-form:logout.x", "Value=37", ENDITEM, 
		"Name=logout-form:logout.y", "Value=9", ENDITEM, 
		"Name=javax.faces.ViewState", "Value=j_id7:j_id8", ENDITEM, 
		LAST);

	lr_end_transaction("BOR_SC001_T006_LogOut",LR_AUTO);

	return 0;
}