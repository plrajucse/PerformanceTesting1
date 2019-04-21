Action()
{

	lr_start_transaction("Borland_SC001_T002_AgentLookUp");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(139);

	web_url("agent_lookup.jsf", 
		"URL=http://demo.borland.com/InsuranceWebExtJS/agent_lookup.jsf", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://demo.borland.com/InsuranceWebExtJS/index.jsf;jsessionid=2830B9C79D9665494C84CDDFF6B918CD", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Borland_SC001_T002_AgentLookUp",LR_AUTO);

	lr_start_transaction("Borland_SC001_T003_ShowAllAgents");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_auto_header("Origin", 
		"http://demo.borland.com");

	lr_think_time(99);

	web_submit_data("agent_lookup.jsf_2", 
		"Action=http://demo.borland.com/InsuranceWebExtJS/agent_lookup.jsf", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://demo.borland.com/InsuranceWebExtJS/agent_lookup.jsf", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=show-all", "Value=show-all", ENDITEM, 
		"Name=show-all:search-all.x", "Value=31", ENDITEM, 
		"Name=show-all:search-all.y", "Value=9", ENDITEM, 
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
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=nocache=1&method=%5Bobject%20Object%5D", 
		LAST);

	lr_end_transaction("Borland_SC001_T003_ShowAllAgents",LR_AUTO);

	lr_start_transaction("Borland_SC001_T004_Home");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(86);

	web_url("index.jsf", 
		"URL=http://demo.borland.com/InsuranceWebExtJS/index.jsf", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://demo.borland.com/InsuranceWebExtJS/agent_lookup.jsf", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Borland_SC001_T004_Home",LR_AUTO);

	return 0;
}
