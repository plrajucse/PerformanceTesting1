#ifndef _PLRAJU_H 
#define _PLRAJU_H

//Launch fun def.//called
launch(){
lr_start_transaction(lr_eval_string("Launch_{puser}"));
//Text Cerification
web_reg_find("Text=Welcome","savecount=txtchk",LAST);
//launch request
web_url("webtours", 
		"URL=http://localhost:1080/webtours", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);
	//check
	if(strcmp("0",lr_eval_string("{txtchk}"))==0){
		lr_output_message("txtchk failed");
		lr_end_transaction(lr_eval_string("Launch_{puser}"), LR_FAIL);

		
		
	}else{
		lr_output_message("txtchk Passed");
		lr_end_transaction(lr_eval_string("Launch_{puser}"), LR_PASS);	
	}

return 0;
}

//Login fun def.//called
login(){
        lr_next_row("puser.dat"); //take rows
	//lr_advance_transaction("puser.dat"); //take colomns
	web_reg_find("Text=Using the menu","savecount=txtchk1",LAST);
	lr_start_transaction(lr_eval_string("Login_{puser}"));
	web_submit_data("login.pl",
		"Action=http://localhost:1080/cgi-bin/login.pl",
		"Method=POST",
		"TargetFrame=body",
		"RecContentType=text/html",
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home",
		"Snapshot=t2.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=userSession", "Value={userSession}", ENDITEM,
		"Name=username", "Value={puser}", ENDITEM,
		"Name=password", "Value={ppwd}", ENDITEM,
		"Name=JSFormSubmit", "Value=off", ENDITEM,
		"Name=login.x", "Value=63", ENDITEM,
		"Name=login.y", "Value=7", ENDITEM,
		LAST);
     //check
	if(strcmp("0",lr_eval_string("{txtchk1}"))==0){
		lr_output_message("txtchk1 failed");
		lr_end_transaction(lr_eval_string("Login_{puser}"), LR_FAIL);

			//recursive fun
		login();
		
	}else{
		lr_output_message("txtchk1 Passed");
		lr_end_transaction(lr_eval_string("Login_{puser}"), LR_PASS);
	}

return 0;
}

//Logoff fun def.//called
logoff(){
   
	lr_start_transaction(lr_eval_string("Logoff_{puser}"));
   //Text Verification
	web_reg_find("Text=Welcome","savecount=txtchk3",LAST);

	web_url("SignOff Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);
	//check
	if(strcmp("0",lr_eval_string("{txtchk3}"))==0){
		lr_output_message("txtchk3 failed");
		lr_end_transaction(lr_eval_string("Logoff_{puser}"), LR_FAIL);
	}else{
		lr_output_message("txtchk3 Passed");
		lr_end_transaction(lr_eval_string("Logoff_{puser}"), LR_PASS);
	}

return 0;
}

#endif // _PLRAJU_H