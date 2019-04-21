Action()
{

	/*Launch*/
	// Set up check for successful index by looking for "Please Login"
    web_reg_find("Text=Please Login","SaveCount=Please Login_Count",LAST );
	web_url("index.php", 
		"URL=http://18.222.58.52/example1/index.php", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	    	// Check result
    if (atoi(lr_eval_string("{Please Login_Count}")) > 0){
        lr_output_message("index on successful.");
        }
     else{
          lr_error_message("index on failed");
          return(0);
     }
	/* Login */
		// Set up check for successful proceedLogin by looking for "valid user session"
    web_reg_find("Text=valid user session","SaveCount=valid user session_Count",LAST );

	web_submit_data("proceedLogin.php", 
		"Action=http://18.222.58.52/example1/proceedLogin.php", 
		"Method=GET", 
		"EncType=", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example1/login.php", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=I_uName", "Value={pUser}", ENDITEM, 
		"Name=I_uPass", "Value={pPass}", ENDITEM, 
		LAST);
	    	// Check result
    if (atoi(lr_eval_string("{valid user session_Count}")) > 0){
        lr_output_message("proceedLogin on successful.");
        }
     else{
          lr_error_message("proceedLogin on failed");
          return(0);
     }

	/* Logout */
		// Set up check for successful Logout by looking for "shoping cart"
    web_reg_find("Text=access system","SaveCount=access system_Count",LAST );

	web_url("Logout", 
		"URL=http://18.222.58.52/example1/logout.php", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example1/main.php", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);
	    	// Check result
    if (atoi(lr_eval_string("{access system_Count}")) > 0){
        lr_output_message("Logout on successful.");
        }
     else{
          lr_error_message("Logout on failed");
          return(0);
     }

	return 0;
}