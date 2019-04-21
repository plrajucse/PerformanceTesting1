Action()
{
	lr_start_transaction("BOR_SC001_T003_AgentLookUp");

	web_url("agent_lookup.jsf", 
		"URL=http://demo.borland.com/InsuranceWebExtJS/agent_lookup.jsf", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://demo.borland.com/InsuranceWebExtJS/index.jsf;jsessionid=240CD16CF2601A80FF8B69EA3D9C293C", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("BOR_SC001_T003_AgentLookUp",LR_AUTO);

	lr_think_time(66);

	lr_start_transaction("BOR_SC002_T004_SearchByAgentName");

	web_submit_data("agent_lookup.jsf_2", 
		"Action=http://demo.borland.com/InsuranceWebExtJS/agent_lookup.jsf", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://demo.borland.com/InsuranceWebExtJS/agent_lookup.jsf", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=name-search", "Value=name-search", ENDITEM, 
		"Name=name-search:lastName", "Value=john", ENDITEM, 
		"Name=name-search:search-name.x", "Value=45", ENDITEM, 
		"Name=name-search:search-name.y", "Value=7", ENDITEM, 
		"Name=javax.faces.ViewState", "Value=j_id4:j_id5", ENDITEM, 
		LAST);

	lr_end_transaction("BOR_SC002_T004_SearchByAgentName",LR_AUTO);

	lr_think_time(69);

	lr_start_transaction("BOR_SC001_T005_Home");

	web_url("Home", 
		"URL=http://demo.borland.com/InsuranceWebExtJS/index.jsf", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://demo.borland.com/InsuranceWebExtJS/agent_lookup.jsf", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("BOR_SC001_T005_Home",LR_AUTO);

	return 0;
}
