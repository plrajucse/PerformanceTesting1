Action()
{
	#define MAX_NAME_LEN 4
	
	int result;
	char tmp[20];
    char string1[] = "The quick brown dog jumps over the lazy fox";
    char string2[] = "The quick brown dog jumps over the lazy fox";
    
    char string3[] = "The quick brown dog jumps over the lazy fox";
    char string4[] = "The QUICK brown dog jumps over the lazy fox";
    
    double time_elapsed, duration, waste;
    merc_timer_handle_t timer;
    
    char *temp;
    char *ip;
    char *machineName;
    char *MasMacName;
    char *vuserinfo;
    
    int id, scid;
    char *vuser_group;
    char abc[100];
    
    lr_output_message("Hi i am output message");
    lr_log_message("Hi i am log message"); //old function
    lr_message("Hi i am message");
   // lr_error_message("Error %s","Unable to login to secure computing from P.L.Raju");
    
    ip=lr_get_vuser_ip();
    lr_output_message("The IP address %s",ip);
    
    machineName=lr_get_host_name();
    lr_output_message("The Machine Name %s",machineName);
    
    MasMacName=lr_get_master_host_name();
    lr_output_message("The Master Machine Name %s",MasMacName);
    

lr_whoami(&id, &vuser_group, &scid);
lr_message( "Group: %s, vuser id: %d, scenario id %d", vuser_group, id, scid);

lr_vuser_status_message("we are on iteration # %s",lr_eval_string("{iteration}"));




			
// Create the parameter, InName
    lr_save_string("RajuVenkeyBhargav ", "InName");
			
// Save the first four characters of "InName" to "ShortName"
    lr_save_var( lr_eval_string("{InName}"), 
        MAX_NAME_LEN, 0, "ShortName");
			
    lr_output_message("ShortName value is %s", lr_eval_string("{ShortName}"));



    
    //it assigns string/int to LR Variable.
     lr_save_string("P.L.Raju","LRVarStr");
     lr_save_int(10,"LRVarInt");
    //read the value from LR Variable
    lr_eval_string("{LRVarStr}");
    lr_eval_string("{LRVarInt}");
    
     lr_output_message(lr_eval_string("{LRVarInt}"));
    
    lr_output_message("%s",lr_eval_string("{LRVarInt}"));
    lr_output_message("%s",lr_eval_string("{LRVarStr}"));
    
    lr_save_datetime("Tomorrow is %B %d %Y", DATE_NOW + ONE_DAY, "next"); 
    lr_output_message(lr_eval_string("{next}"));
    
     lr_save_datetime("Yesterday is %Y-%m-%d", DATE_NOW - ONE_DAY, "next"); 
    lr_output_message(lr_eval_string("{next}"));
    	
    	 lr_save_datetime("Current is %d %m %Y", DATE_NOW, "next"); 
    lr_output_message(lr_eval_string("{next}"));
    
                 

// Case-sensitive comparison 

    result = strcmp( string1, string2); //=0 
    lr_output_message ("strcmp:return value  %d ", result);
    if(result > 0)
        strcpy(tmp, "greater than");
    else if(result < 0)
        strcpy(tmp, "less than");
    else
        strcpy(tmp, "equal to");
    lr_output_message ("strcmp: String 1 is %s string 2", tmp);
// Case-insensitive comparison
    result = stricmp(string3, string4 ); //=0  
    lr_output_message ("stricmp:return value  %d ", result);
    if( result > 0 )
        strcpy( tmp, "greater than" );
    else if( result < 0 )
        strcpy( tmp, "less than" ); 
    else
        strcpy( tmp, "equal to" );
    lr_output_message( "stricmp: String 3 is %s string 4", tmp );

	
	
	
	//userSession" value="125331.135115431zttzHcApczcfDiziApDcVfHf"/>
	web_reg_save_param("cUserSession","LB=userSession\" value=\"","RB=\"/>",LAST);
	
	web_reg_find("Text=P.L.Raju","SaveCount=abc",LAST);
	
	/* Notify that a transaction is starting */
	lr_start_transaction("Launch");
	
	web_url("index.htm", 
		"URL=http://127.0.0.1:1080/webtours/index.htm", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);
	lr_save_var(lr_eval_string("{cUserSession}"),6,0,"raju");
	
	
	//How to Calculate the Wasted Time ?
	//timer = lr_start_timer();
	lr_stop_transaction("Launch");
	/* Do some checks the duration of which is not to be included in the transaction. */
    web_image_check("ImgCheck1",
        "src=/WebTours/images/mer_login.gif",
        LAST );
	lr_resume_transaction("Launch");
	 // How long did the tests take in seconds.
    //time_elapsed = lr_end_timer(timer);
	// Convert to millisecond.s
    //waste = time_elapsed * 1000;
    //lr_output_message("Wasted Time is %f",waste);
/* Remove the time the checks took from the transaction. */
   // lr_wasted_time(waste); 
    

	/* End transaction with operation result - pass or fail */
	// Check result
    if (strcmp("0",lr_eval_string("{abc}")) == 0) {
		//equal(return type) is 0
		//not equal(retun type) is 1
		// lr_error_message("Log on failed");
         lr_output_message("Log on failed.");
        //  lr_abort();
        
         //lr_exit(LR_EXIT_VUSER, LR_ABORT); //it is equal to lr_abort();
         // lr_exit(LR_EXIT_VUSER,LR_FAIL);
        // lr_exit(LR_EXIT_VUSER,LR_PASS);
       // lr_exit(LR_EXIT_VUSER, LR_AUTO);
       
        
        // lr_exit(LR_EXIT_ACTION_AND_CONTINUE,LR_PASS);
         //  lr_exit(LR_EXIT_ITERATION_AND_CONTINUE,LR_PASS);
         //  lr_exit(LR_EXIT_VUSER_AFTER_ITERATION,LR_PASS);
         //  lr_exit(LR_EXIT_VUSER_AFTER_ACTION,LR_PASS);
          //lr_exit(LR_EXIT_MAIN_ITERATION_AND_CONTINUE,LR_PASS);
          
          
          //lr_end_transaction("Launch", LR_FAIL);
          //lr_end_transaction("Launch", LR_STOP);
          
         
   

          lr_end_transaction("Launch",LR_AUTO);
                    
          
        
        }
     else{
		
		lr_output_message("Log on successful.");
		lr_end_transaction("Launch", LR_PASS);
		//lr_exit(LR_EXIT_VUSER, LR_AUTO);
		
	
         // return(0);
     }

	


	lr_think_time(13);

	web_reg_find("Text=Welcome","SaveCount=Welcome_Count",LAST);
	
	web_submit_data("login.pl", 
		"Action=http://127.0.0.1:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=body", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value={cUserSession}", ENDITEM, 
		"Name=username", "Value=jojo", ENDITEM, 
		"Name=password", "Value=bean", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=login.x", "Value=61", ENDITEM, 
		"Name=login.y", "Value=6", ENDITEM, 
		LAST);
	// Check result
    if (atoi(lr_eval_string("{Welcome_Count}")) > 0){
        lr_output_message("Log on successful.");
        }
     else{
         // lr_error_message("Log on failed");
         lr_output_message("Log on failed.");
          //lr_abort();
         // return(0);
     }

	lr_think_time(7);

	web_reg_save_param("cSource","LB=\">","RB=</option>","Ord=All",LAST);
	web_url("Search Flights Button", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=search", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);
	
	//outboundFlight" value="023;401;01/12/2019">
	
	web_reg_save_param("cFliNoDateCost","LB=outboundFlight\" value=\"","RB=\">",LAST);

	web_submit_data("reservations.pl", 
		"Action=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t4.inf", 
		
		"Mode=HTML", 
		ITEMDATA, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=depart", "Value={cSource}", ENDITEM, 
		"Name=departDate", "Value=01/12/2019", ENDITEM, 
		"Name=arrive", "Value=London", ENDITEM, 
		"Name=returnDate", "Value=01/13/2019", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatPref", "Value=Window", ENDITEM, 
		"Name=seatType", "Value=Business", ENDITEM, 
		"Name=.cgifields", "Value=roundtrip", ENDITEM, 
		"Name=.cgifields", "Value=seatType", ENDITEM, 
		"Name=.cgifields", "Value=seatPref", ENDITEM, 
		"Name=findFlights.x", "Value=50", ENDITEM, 
		"Name=findFlights.y", "Value=8", ENDITEM, 
		LAST);
	
	temp=lr_paramarr_random("cSource");
	lr_save_string(temp,"saveSour");
	//or
	lr_save_string(lr_paramarr_random("cSource"),"saveSour");
	
		temp=lr_paramarr_idx("cSource",5);
	lr_save_string(temp,"saveSour");
	
	lr_save_string(lr_paramarr_idx("cSource",1),"saveSour");
	

	web_submit_data("reservations.pl_2", 
		"Action=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=023;401;01/12/2019", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=seatType", "Value=Business", ENDITEM, 
		"Name=seatPref", "Value=Window", ENDITEM, 
		"Name=reserveFlights.x", "Value=26", ENDITEM, 
		"Name=reserveFlights.y", "Value=0", ENDITEM, 
		LAST);
	
	strcpy(abc,lr_eval_string("{cFliNoDateCost}"));
	//lr_save_searched_string(abc,strlen(abc), 1, "/", 2, 2, "pawan");
	lr_save_searched_string(abc,strlen(abc), 0, ";", 0, 3, "pawan");
	lr_save_searched_string(abc, strlen(abc), 1, "/", 0, 4, "pawan1");

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	lr_think_time(41);

	lr_set_debug_message(LR_MSG_CLASS_EXTENDED_LOG | LR_MSG_CLASS_FULL_TRACE, LR_SWITCH_ON );

	web_submit_data("reservations.pl_3", 
		"Action=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=firstName", "Value=Jojo", ENDITEM, 
		"Name=lastName", "Value=Bean", ENDITEM, 
		"Name=address1", "Value=suryapet", ENDITEM, 
		"Name=address2", "Value=ts", ENDITEM, 
		"Name=pass1", "Value=Jojo Bean", ENDITEM, 
		"Name=creditCard", "Value=9948897938", ENDITEM, 
		"Name=expDate", "Value=", ENDITEM, 
		"Name=oldCCOption", "Value=", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatType", "Value=Business", ENDITEM, 
		"Name=seatPref", "Value=Window", ENDITEM, 
		"Name=outboundFlight", "Value=023;401;01/12/2019", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=returnFlight", "Value=", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=.cgifields", "Value=saveCC", ENDITEM, 
		"Name=buyFlights.x", "Value=57", ENDITEM, 
		"Name=buyFlights.y", "Value=8", ENDITEM, 
		LAST);
	/* Now reset message class to former level */
lr_set_debug_message(LR_MSG_CLASS_EXTENDED_LOG | LR_MSG_CLASS_FULL_TRACE, LR_SWITCH_OFF );


	lr_think_time(15);

	web_url("SignOff Button", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}