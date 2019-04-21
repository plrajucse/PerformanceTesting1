#ifndef _BORLAND_H 
#define _BORLAND_H
/***** Launch *****/
launch(){
	web_set_sockets_option("SSL_VERSION", "TLS1.2");
	
	// JSESSIONID=6B39DAF94B1AE10F137DBC98EDC73048;
	web_reg_save_param("cJsessionId","LB=JSESSIONID=","RB=;",LAST);
	
	web_reg_find("Text=Our innovative","SaveCount=InnovativeCount",LAST);
	
	lr_start_transaction("BOR_SC001_T001_Launch");
	web_url("InsuranceWebExtJS", 
		"URL=http://{pUrl}/InsuranceWebExtJS/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);
	// Check response
    if (strcmp(lr_eval_string("{InnovativeCount}"),"0") == 0){
	 lr_end_transaction("BOR_SC001_T001_Launch", LR_FAIL);
        }
     else{
	lr_end_transaction("BOR_SC001_T001_Launch", LR_PASS);
      }
return 0;
}

/***** LogIn *****/
logIn(){
	lr_think_time(6);
	
	web_reg_find("Text=Logged","SaveCount=LoggedCount",LAST);
	
	lr_start_transaction("BOR_SC001_T002_LogIn");
	web_submit_data("LogIn", 
		"Action=http://{pUrl}/InsuranceWebExtJS/index.jsf;jsessionid={cJsessionId}", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://{pUrl}/InsuranceWebExtJS/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=login-form", "Value=login-form", ENDITEM, 
		"Name=login-form:email", "Value={pEmail}", ENDITEM, 
		"Name=login-form:password", "Value={pPwd}", ENDITEM, 
		"Name=login-form:login.x", "Value=50", ENDITEM, 
		"Name=login-form:login.y", "Value=9", ENDITEM, 
		"Name=javax.faces.ViewState", "Value=j_id1:j_id2", ENDITEM, 
		LAST);
	// Check response
    if (strcmp(lr_eval_string("{LoggedCount}"),"0") == 0){
	lr_end_transaction("BOR_SC001_T002_LogIn",LR_FAIL);
        }
     else{
	lr_end_transaction("BOR_SC001_T002_LogIn",LR_PASS);
     }
return 0;
}

/***** AgentLookUp *****/
agentLookUp(){
	lr_think_time(6);
       web_reg_find("Text=Get in touch","SaveCount=GetCount",LAST);
	lr_start_transaction("BOR_SC001_T003_AgentLookUp");
	web_url("AgentLookUp", 
		"URL=http://{pUrl}/InsuranceWebExtJS/agent_lookup.jsf", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{pUrl}/InsuranceWebExtJS/index.jsf;jsessionid={cJsessionId}", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);
	// Check response
    if (strcmp(lr_eval_string("{GetCount}"),"0") == 0){
	lr_end_transaction("BOR_SC001_T003_AgentLookUp",LR_FAIL);
        }
     else{
	lr_end_transaction("BOR_SC001_T003_AgentLookUp",LR_PASS);
     }
   return 0;
}
/***** Home *****/
home(){
	lr_think_time(6);
	web_reg_find("Text=Logged","SaveCount=LoggedCount",LAST);
	lr_start_transaction("BOR_SC001_T005_Home");
	web_url("Home", 
		"URL=http://{pUrl}/InsuranceWebExtJS/index.jsf", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{pUrl}/InsuranceWebExtJS/agent_lookup.jsf", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);
      // Check response
    if (strcmp(lr_eval_string("{LoggedCount}"),"0") == 0){
	lr_end_transaction("BOR_SC001_T005_Home",LR_FAIL);
        }
     else{
	lr_end_transaction("BOR_SC001_T005_Home",LR_PASS);
     }
return 0;
}

/***** LogOut *****/
LogOut(){
lr_think_time(6);
	web_reg_find("Text=Password","SaveCount=PasswordCount",LAST);
	lr_start_transaction("BOR_SC001_T006_LogOut");
	web_submit_data("LogOut", 
		"Action=http://{pUrl}/InsuranceWebExtJS/index.jsf", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://{pUrl}/InsuranceWebExtJS/index.jsf", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=logout-form", "Value=logout-form", ENDITEM, 
		"Name=logout-form:logout.x", "Value=41", ENDITEM, 
		"Name=logout-form:logout.y", "Value=8", ENDITEM, 
		"Name=javax.faces.ViewState", "Value=j_id7:j_id8", ENDITEM, 
		LAST);
       // Check response
    if (strcmp(lr_eval_string("{PasswordCount}"),"0") == 0){
	lr_end_transaction("BOR_SC001_T006_LogOut",LR_FAIL);
        }
     else{
	lr_end_transaction("BOR_SC001_T006_LogOut",LR_PASS);
     }
return 0;
}
#endif // _BORLAND_H