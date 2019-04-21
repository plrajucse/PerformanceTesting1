Action()
{

	sapgui_open_connection_ex("   /SAP_CODEPAGE=1100  /FULLMENU  10.10.10.20 85 /3 /UPDOWNLOAD_CP=2", 
		"PLRAJUCST [10.10.10.20]", 
		"con[1]");

	sapgui_select_active_connection("con[1]");

	sapgui_select_active_session("ses[0]");

	sapgui_select_active_window("wnd[0]");

	sapgui_window_resize("138", 
		"25", 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui104", 
		END_OPTIONAL);

	/*Before running script, enter password in place of asterisks in logon function*/

	lr_think_time(9);

	sapgui_logon("SHAFT17", 
		"*****", 
		"800", 
		"EN", 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1012", 
		END_OPTIONAL);

	lr_think_time(11);

	sapgui_set_ok_code("me28", 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1013", 
		END_OPTIONAL);

	sapgui_send_vkey(ENTER, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1014", 
		END_OPTIONAL);

	sapgui_send_vkey(F4, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1017", 
		END_OPTIONAL);

	sapgui_select_active_window("wnd[1]");

	sapgui_window_scroll_to_row("0", 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1021", 
		END_OPTIONAL);

	sapgui_set_focus(lbl1, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1020", 
		END_OPTIONAL);

	sapgui_send_vkey(F2, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1024", 
		END_OPTIONAL);

	lr_think_time(4);

	sapgui_select_active_window("wnd[0]");

	sapgui_set_focus(ctxtS_FRGGR1, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1027", 
		END_OPTIONAL);

	sapgui_send_vkey(F4, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1029", 
		END_OPTIONAL);

	sapgui_select_active_window("wnd[1]");

	sapgui_window_scroll_to_row("0", 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1033", 
		END_OPTIONAL);

	sapgui_set_focus(lbl2, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1032", 
		END_OPTIONAL);

	sapgui_send_vkey(F2, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1036", 
		END_OPTIONAL);

	sapgui_select_active_window("wnd[0]");

	sapgui_set_focus(ctxtS_FRGGR2, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1039", 
		END_OPTIONAL);

	sapgui_send_vkey(F2, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1041", 
		END_OPTIONAL);

	sapgui_status_bar_get_text("paramStatusBarText", 
		BEGIN_OPTIONAL, 
			"Recorded status bar text: Runtime error MESSAGE_TYPE_X has occurred", 
			"AdditionalInfo=sapgui1044", 
		END_OPTIONAL);

	return 0;
}