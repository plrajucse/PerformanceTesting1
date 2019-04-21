//#include "BORLAND 0.1\\BOR_ModuleApproach.h"
#include "BOR_ModuleApproach.h"
Action()
{
	lr_vuser_status_message( "Now We are on iteration ###%s", lr_eval_string( "{pIerationNo}" ) );
	
	/***** AgentLookUp *****/
	agentLookUp();

	/***** Account *****/
	lr_think_time(6);
	web_reg_find("Text=Contact Information","SaveCount=ContactInformationCount",LAST);
	lr_start_transaction("BOR_SC004_T004_Account");

	web_submit_data("Account", 
		"Action=http://{pUrl}/InsuranceWebExtJS/agent_lookup.jsf", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://{pUrl}/InsuranceWebExtJS/agent_lookup.jsf", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=Linkform", "Value=Linkform", ENDITEM, 
		"Name=javax.faces.ViewState", "Value=j_id4:j_id5", ENDITEM, 
		"Name=Linkform:j_id6", "Value=Linkform:j_id6", ENDITEM, 
		LAST);
	// Check response
    if (strcmp(lr_eval_string("{ContactInformationCount}"),"0") == 0){
	lr_end_transaction("BOR_SC004_T004_Account",LR_FAIL);
        }
     else{
	lr_end_transaction("BOR_SC004_T004_Account",LR_PASS);
     }
	
	web_save_timestamp_param("tStamp", LAST );
    	lr_output_message(lr_eval_string("Timestamp: {tStamp}"));
	web_url("quoteData.jsf", 
		"URL=http://{pUrl}/InsuranceWebExtJS/data/quoteData.jsf?_dc={tStamp}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{pUrl}/InsuranceWebExtJS/agent_lookup.jsf", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	
	/**** *Home *****/
	home();

	return 0;
}
