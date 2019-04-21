//#include "BORLAND 0.1\\BOR_ModuleApproach.h"
#include "BOR_ModuleApproach.h"
Action()
{
	lr_vuser_status_message( "Now We are on iteration ###%s", lr_eval_string( "{IterationNo}" ) );
	
    	/***** AgentLookUp *****/
	agentLookUp();
	
	/***** SearchByLocation *****/
	lr_think_time(6);
	web_reg_find("Text=available Agents","SaveCount=availableAgentsCount",LAST);
	lr_start_transaction("BOR_SC001_T004_SearchByLocation");
	web_submit_data("SearchByLocation", 
		"Action=http://{pUrl}/InsuranceWebExtJS/agent_lookup.jsf", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://{pUrl}/InsuranceWebExtJS/agent_lookup.jsf", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=zip-search", "Value=zip-search", ENDITEM, 
		"Name=zip-search:zipcode", "Value={pZipCode}", ENDITEM, 
		"Name=zip-search:search-zipcode.x", "Value=52", ENDITEM, 
		"Name=zip-search:search-zipcode.y", "Value=6", ENDITEM, 
		"Name=javax.faces.ViewState", "Value=j_id4:j_id5", ENDITEM, 
		LAST);
	// Check response
    if (strcmp(lr_eval_string("{availableAgentsCount}"),"0") == 0){
	lr_end_transaction("BOR_SC001_T004_SearchByLocation",LR_FAIL);
        }
     else{
	lr_end_transaction("BOR_SC001_T004_SearchByLocation",LR_PASS);
     }

	web_custom_request("agentData.jsf", 
		"URL=http://{pUrl}/InsuranceWebExtJS/data/agentData.jsf", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{pUrl}/InsuranceWebExtJS/agent_lookup.jsf", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=nocache=1&method=%5Bobject%20Object%5D", 
		LAST);
	
	/**** *Home *****/
	home();
	
	return 0;
}
