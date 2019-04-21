Action()
{

	lr_think_time(50);

	lr_start_transaction("BOR_SC001_T003_AgentLookUp");

	web_url("agent_lookup.jsf", 
		"URL=http://demo.borland.com/InsuranceWebExtJS/agent_lookup.jsf", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://demo.borland.com/InsuranceWebExtJS/index.jsf;jsessionid=62E6E969C6D914D187A21F89589E3912", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("BOR_SC001_T003_AgentLookUp",LR_AUTO);

	lr_think_time(147);

	lr_start_transaction("BOR_SC003_T004_ShowAllAgents");

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
		"Name=show-all:search-all.x", "Value=45", ENDITEM, 
		"Name=show-all:search-all.y", "Value=7", ENDITEM, 
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

	lr_end_transaction("BOR_SC003_T004_ShowAllAgents",LR_AUTO);

	lr_think_time(43);

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
