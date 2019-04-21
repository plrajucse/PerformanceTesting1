//#include "BORLAND 0.1\\BOR_ModuleApproach.h"
#include "BOR_ModuleApproach.h"
Action()
{
	lr_vuser_status_message( "Now We are on iteration ###%s", lr_eval_string( "{pIterationNo}" ) );
	
	/***** AgentLookUp *****/
	agentLookUp();
	
	/***** SearchByAgentName *****/
	lr_think_time(6);
	web_reg_find("Text=Search Results","SaveCount=Search ResultsCount",LAST);
	lr_start_transaction("BOR_SC002_T004_SearchByAgentName");
	web_submit_data("SearchByAgentName", 
		"Action=http://{pUrl}/InsuranceWebExtJS/agent_lookup.jsf", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://{pUrl}/InsuranceWebExtJS/agent_lookup.jsf", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=name-search", "Value=name-search", ENDITEM, 
		"Name=name-search:lastName", "Value={pAgentName}", ENDITEM, 
		"Name=name-search:search-name.x", "Value=45", ENDITEM, 
		"Name=name-search:search-name.y", "Value=7", ENDITEM, 
		"Name=javax.faces.ViewState", "Value=j_id4:j_id5", ENDITEM, 
		LAST);
	// Check response
    if (strcmp(lr_eval_string("{Search ResultsCount}"),"0") == 0){
	lr_end_transaction("BOR_SC002_T004_SearchByAgentName",LR_FAIL);
        }
     else{
		lr_end_transaction("BOR_SC002_T004_SearchByAgentName",LR_PASS);
     }

	/**** *Home *****/
	home();

	return 0;
}
