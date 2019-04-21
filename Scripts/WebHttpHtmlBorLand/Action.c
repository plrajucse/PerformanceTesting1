Action()
{

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(40);

	web_url("agent_lookup.jsf", 
		"URL=http://demo.borland.com/InsuranceWebExtJS/agent_lookup.jsf", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://demo.borland.com/InsuranceWebExtJS/index.jsf;jsessionid=640CA0D09C999AC7D77322298DD31929", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	/* click on search for show all agents */

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_auto_header("Origin", 
		"http://demo.borland.com");

	lr_think_time(110);

	web_submit_data("agent_lookup.jsf_2", 
		"Action=http://demo.borland.com/InsuranceWebExtJS/agent_lookup.jsf", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://demo.borland.com/InsuranceWebExtJS/agent_lookup.jsf", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=show-all", "Value=show-all", ENDITEM, 
		"Name=show-all:search-all.x", "Value=54", ENDITEM, 
		"Name=show-all:search-all.y", "Value=8", ENDITEM, 
		"Name=javax.faces.ViewState", "Value=j_id4:j_id5", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("agentData.jsf", 
		"URL=http://demo.borland.com/InsuranceWebExtJS/data/agentData.jsf", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://demo.borland.com/InsuranceWebExtJS/agent_lookup.jsf", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=nocache=1&method=%5Bobject%20Object%5D", 
		LAST);

	/* Go to Home For Click on Home */

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(53);

	web_url("index.jsf", 
		"URL=http://demo.borland.com/InsuranceWebExtJS/index.jsf", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://demo.borland.com/InsuranceWebExtJS/agent_lookup.jsf", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);


	return 0;
}