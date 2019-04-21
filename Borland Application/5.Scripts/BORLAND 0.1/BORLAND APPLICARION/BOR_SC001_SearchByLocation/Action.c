Action()
{

	lr_think_time(39);

	lr_start_transaction("BOR_SC001_T003_AgentLookUp");
	
	web_url("agent_lookup.jsf", 
		"URL=http://demo.borland.com/InsuranceWebExtJS/agent_lookup.jsf", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://demo.borland.com/InsuranceWebExtJS/index.jsf;jsessionid=6B39DAF94B1AE10F137DBC98EDC73048", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("BOR_SC001_T003_AgentLookUp",LR_AUTO);

	lr_think_time(61);

	lr_start_transaction("BOR_SC001_T004_SearchByLocation");
	
	web_submit_data("agent_lookup.jsf_2", 
		"Action=http://demo.borland.com/InsuranceWebExtJS/agent_lookup.jsf", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://demo.borland.com/InsuranceWebExtJS/agent_lookup.jsf", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=zip-search", "Value=zip-search", ENDITEM, 
		"Name=zip-search:zipcode", "Value=508212", ENDITEM, 
		"Name=zip-search:search-zipcode.x", "Value=52", ENDITEM, 
		"Name=zip-search:search-zipcode.y", "Value=6", ENDITEM, 
		"Name=javax.faces.ViewState", "Value=j_id4:j_id5", ENDITEM, 
		LAST);

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

	lr_end_transaction("BOR_SC001_T004_SearchByLocation",LR_AUTO);

	lr_think_time(8);

	lr_start_transaction("BOR_SC001_T005_Home");

	web_url("index.jsf", 
		"URL=http://demo.borland.com/InsuranceWebExtJS/index.jsf", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://demo.borland.com/InsuranceWebExtJS/agent_lookup.jsf", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("BOR_SC001_T005_Home",LR_AUTO);

	return 0;
}
