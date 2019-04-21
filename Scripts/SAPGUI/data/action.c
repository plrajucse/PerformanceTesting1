Action()
{

	sapgui_open_connection_ex("   /SAP_CODEPAGE=1100  /FULLMENU  10.10.10.20 85 /3 /UPDOWNLOAD_CP=2", 
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

	sapgui_logon("SHAFT17", 
		"*****", 
		"800", 
		"EN", 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1012", 
		END_OPTIONAL);

	lr_think_time(14);

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

	lr_think_time(8);

	sapgui_window_scroll_to_row("0", 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1024", 
		END_OPTIONAL);

	sapgui_set_focus(lbl1, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1023", 
		END_OPTIONAL);

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

	lr_think_time(73);

	sapgui_select_active_window("wnd[0]");

	sapgui_set_text("Gross Weight", 
		"600", 
		txtMARA1, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1042", 
		END_OPTIONAL);

	sapgui_set_text("Net Weight", 
		"200", 
		txtMARA2, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1043", 
		END_OPTIONAL);

	sapgui_set_focus(txtMARA2, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1044", 
		END_OPTIONAL);

	sapgui_press_button("Save   (Ctrl+S)", 
		btn2, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1046", 
		END_OPTIONAL);

	sapgui_status_bar_get_text("paramStatusBarText", 
		BEGIN_OPTIONAL, 
			"Recorded status bar text: Material 1108 changed", 
			"AdditionalInfo=sapgui1049", 
		END_OPTIONAL);

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

	return 0;
}