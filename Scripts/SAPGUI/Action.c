Action()
{

	sapgui_open_connection_ex("   /SAP_CODEPAGE=1100  /FULLMENU  {pServerName} 85 /3 /UPDOWNLOAD_CP=2", 
		"PLRAJUCST [10.10.10.20]", 
		"con[0]");

	sapgui_select_active_connection("con[0]");

	sapgui_select_active_session("ses[0]");

	sapgui_select_active_window("wnd[0]");

	sapgui_window_resize("138", 
		"25", 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui104", 
		END_OPTIONAL);

	/*Before running script, enter password in place of asterisks in logon function*/

	lr_think_time(32);
	
	//logon
	sapgui_logon("{pUser}", 
		"shaft@", 
		"800", 
		"EN", 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1012", 
		END_OPTIONAL);

	lr_think_time(14);
	
	//SAP T- Codes :
	sapgui_set_ok_code("mm02", 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1013", 
		END_OPTIONAL);

	sapgui_send_vkey(ENTER, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1014", 
		END_OPTIONAL);

	lr_think_time(4);

	sapgui_send_vkey(F4, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1017", 
		END_OPTIONAL);

	sapgui_select_active_window("wnd[1]");

	sapgui_press_button("Continue   (Enter)", 
		btn1, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1020", 
		END_OPTIONAL);
	
	//oject 01:
	if (sapgui_is_object_available("tbar[0]/btn[0]", LAST)){
		lr_output_message("oject 01:pass");
	}else{
		lr_output_message("oject 01:fail");
	}
	
	

	lr_think_time(8);

	sapgui_window_scroll_to_row("0", 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1024", 
		END_OPTIONAL);

	sapgui_set_focus(lbl1, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1023", 
		END_OPTIONAL);
	
	//oject 02:
	if (sapgui_is_object_available("usr/lbl[1,11]", LAST)){
		lr_output_message("oject 02:pass");
	}else{
		lr_output_message("oject 02:fail");
	}
	

	sapgui_send_vkey(F2, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1027", 
		END_OPTIONAL);

	lr_think_time(5);

	sapgui_select_active_window("wnd[0]");

	sapgui_set_focus(ctxtRMMG11, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1030", 
		END_OPTIONAL);
	
	//oject 03:
	
	if (sapgui_is_object_available("usr/ctxtRMMG1-AENNR", LAST)){
		lr_output_message("oject 03:pass");
	}else{
		lr_output_message("oject 03:fail");
	}

	sapgui_send_vkey(ENTER, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1032", 
		END_OPTIONAL);

	lr_think_time(7);

	sapgui_select_active_window("wnd[1]");
	

	sapgui_table_set_row_selected(tblSAPLMGMMTC_VIEW1, 
		"0", 
		"True", 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1035", 
		END_OPTIONAL);
	
		//oject 04:
	
	if (sapgui_is_object_available("usr/tblSAPLMGMMTC_VIEW", LAST)){
		lr_output_message("oject 04:pass");
	}else{
		lr_output_message("oject 04:fail");
	}

	sapgui_table_set_row_selected(tblSAPLMGMMTC_VIEW1, 
		"1", 
		"True", 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1036", 
		END_OPTIONAL);

	sapgui_table_set_focus("(1, 'View')", 
		tblSAPLMGMMTC_VIEW1, 
		"1", 
		"0", 
		BEGIN_OPTIONAL, 
			"OriginalID=usr/tblSAPLMGMMTC_VIEW/txtMSICHTAUSW-DYTXT[0,1]", 
			"AdditionalInfo=sapgui1037", 
		END_OPTIONAL);

	sapgui_press_button("Continue   (Enter)", 
		btn1, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1039", 
		END_OPTIONAL);
		
		//object 01:
	
	if (sapgui_is_object_available("tbar[0]/btn[0]", LAST)){
		lr_output_message("object 01:pass");
	}else{
		lr_output_message("object 01:fail");
	}

	lr_think_time(73);

	sapgui_select_active_window("wnd[0]");
	
	// Enter the text "600"

	sapgui_set_text("Gross Weight", 
		"{pGross}", 
		txtMARA1, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1042", 
		END_OPTIONAL);
	
	//object 05:
	
	if (sapgui_is_object_available("usr/tabsTABSPR1/tabpSP01/ssubTABFRA1:SAPLMGMM:2004/subSUB4:SAPLMGD1:2007/"
		"txtMARA-NTGEW", LAST)){
		lr_output_message("object 05:pass");
	}else{
		lr_output_message("object 05:fail");
	}
	
	// Retrieve the text boxes 
	sapgui_get_text("Gross Weight", 
        "usr/tabsTABSPR1/tabpSP01/ssubTABFRA1:SAPLMGMM:2004/subSUB4:SAPLMGD1:2007/txtMARA-BRGEW", // Control ID
        "grossParam", 
        LAST );
    lr_output_message("%s", lr_eval_string("{grossParam}"));


	sapgui_set_text("Net Weight", 
		"{pNetW}", 
		txtMARA2, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1043", 
		END_OPTIONAL);
    
    //object 06:
	
	if (sapgui_is_object_available("usr/tabsTABSPR1/tabpSP01/ssubTABFRA1:SAPLMGMM:2004/subSUB4:SAPLMGD1:2007/"
		"txtMARA-NTGEW", LAST)){
		lr_output_message("object 06::pass");
	}else{
		lr_output_message("object 06:fail");
	}
    
    // Retrieve the text boxes 
	sapgui_get_text("Net Weight", 
        "usr/tabsTABSPR1/tabpSP01/ssubTABFRA1:SAPLMGMM:2004/subSUB4:SAPLMGD1:2007/"
		"txtMARA-NTGEW", // Control ID
        "netParam", 
        LAST );
    lr_output_message("%s", lr_eval_string("{netParam}"));
    	

	sapgui_set_focus(txtMARA2, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1044", 
		END_OPTIONAL);

	sapgui_press_button("Save   (Ctrl+S)", 
		btn2, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1046", 
		END_OPTIONAL);
    
    //oject 07:
	if (sapgui_is_object_available("tbar[0]/btn[11]", LAST)){
		lr_output_message("oject 07:pass");
	}else{
		lr_output_message("oject 07:fail");
	}
    
    
    //The text of the status bar is "Standard PO held under the number 4500010751".
    //sapgui_status_bar_get_text("paramText", LAST );

	sapgui_status_bar_get_text("paramStatusBarText", 
		BEGIN_OPTIONAL, 
			"Recorded status bar text: Material 1108 changed", 
			"AdditionalInfo=sapgui1049", 
		END_OPTIONAL);
    
   // The value of parameter 1 in the status bar is "Standard PO".
sapgui_status_bar_get_param("1", "param1", LAST );
//The value of parameter 2 in the status bar is "4500010751".
//sapgui_status_bar_get_param("2", "param2", LAST );

//The value of "StatusBarType" after the call is "Success".
sapgui_status_bar_get_type("StatusBarType", LAST );
// Output is "Status of last action is 'Success'."
lr_output_message("Status of last action is '%s'.",lr_eval_string("{StatusBarType}"));

	lr_think_time(45);

	sapgui_window_close(
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1050", 
		END_OPTIONAL);

	sapgui_select_active_window("wnd[1]");

	sapgui_press_button("Yes", 
		btnSPOP1, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1053", 
		END_OPTIONAL);
	
	//oject 08:
	if (sapgui_is_object_available("usr/btnSPOP-OPTION1", LAST)){
		lr_output_message("oject 08:pass");
	}else{
		lr_output_message("oject 08:fail");
	}
	
	return 0;
}