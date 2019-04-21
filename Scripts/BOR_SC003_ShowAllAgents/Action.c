//#include "BORLAND 0.1\\BOR_ModuleApproach.h"
#include "BOR_ModuleApproach.h"
Action()
{
	
	lr_vuser_status_message( "Now We are on iteration ###%s", lr_eval_string( "{pIterationNo}" ) );

	/***** AgentLookUp *****/
	agentLookUp();

	/***** ShowAllAgents *****/
	lr_think_time(6);
	web_reg_find("Text=Insurance Agent","SaveCount=InsuranceAgentCount",LAST);
	lr_start_transaction("BOR_SC003_T004_ShowAllAgents");

	web_submit_data("ShowAllAgents", 
		"Action=http://{pUrl}/InsuranceWebExtJS/agent_lookup.jsf", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://{pUrl}/InsuranceWebExtJS/agent_lookup.jsf", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=show-all", "Value=show-all", ENDITEM, 
		"Name=show-all:search-all.x", "Value=45", ENDITEM, 
		"Name=show-all:search-all.y", "Value=7", ENDITEM, 
		"Name=javax.faces.ViewState", "Value=j_id4:j_id5", ENDITEM, 
		LAST);
	// Check response
    if (strcmp(lr_eval_string("{InsuranceAgentCount}"),"0") == 0){
	lr_end_transaction("BOR_SC003_T004_ShowAllAgents",LR_FAIL);
        }
     else{
	lr_end_transaction("BOR_SC003_T004_ShowAllAgents",LR_PASS);
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
