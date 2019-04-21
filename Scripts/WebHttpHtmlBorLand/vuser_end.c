vuser_end()
{
	/* Log Out for click On Logout */

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("Origin", 
		"http://demo.borland.com");

	web_submit_data("index.jsf_2", 
		"Action=http://demo.borland.com/InsuranceWebExtJS/index.jsf", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://demo.borland.com/InsuranceWebExtJS/index.jsf", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=logout-form", "Value=logout-form", ENDITEM, 
		"Name=logout-form:logout.x", "Value=33", ENDITEM, 
		"Name=logout-form:logout.y", "Value=5", ENDITEM, 
		"Name=javax.faces.ViewState", "Value=j_id7:j_id8", ENDITEM, 
		LAST);
	return 0;
}
