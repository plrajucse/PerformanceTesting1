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

	lr_think_time(9);

	sapgui_logon("SHAFT17", 
		"*****", 
		"800", 
		"EN", 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1012", 
		END_OPTIONAL);

	lr_think_time(6);

	sapgui_set_ok_code("vf03", 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1013", 
		END_OPTIONAL);

	sapgui_send_vkey(ENTER, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1014", 
		END_OPTIONAL);

	lr_think_time(10);

	sapgui_send_vkey(F4, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1017", 
		END_OPTIONAL);

	lr_think_time(13);

	sapgui_select_active_window("wnd[1]");

	sapgui_send_vkey(F4, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1020", 
		END_OPTIONAL);

	sapgui_select_active_window("wnd[2]");

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

	sapgui_select_active_window("wnd[1]");

	sapgui_set_focus(ctxtG_SELFLD_TAB1, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1030", 
		END_OPTIONAL);

	sapgui_send_vkey(F4, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1032", 
		END_OPTIONAL);

	lr_think_time(4);

	sapgui_select_active_window("wnd[2]");

	sapgui_press_button("Continue   (Enter)", 
		btn1, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1035", 
		END_OPTIONAL);

	sapgui_window_scroll_to_row("0", 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1039", 
		END_OPTIONAL);

	sapgui_set_focus(lbl2, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1038", 
		END_OPTIONAL);

	sapgui_send_vkey(F2, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1042", 
		END_OPTIONAL);

	sapgui_select_active_window("wnd[1]");

	sapgui_set_focus(ctxtG_SELFLD_TAB2, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1045", 
		END_OPTIONAL);

	sapgui_send_vkey(F4, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1047", 
		END_OPTIONAL);

	sapgui_select_active_window("wnd[2]");

	sapgui_window_scroll_to_row("0", 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1051", 
		END_OPTIONAL);

	sapgui_set_focus(lbl1, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1050", 
		END_OPTIONAL);

	sapgui_send_vkey(F2, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1054", 
		END_OPTIONAL);

	sapgui_select_active_window("wnd[1]");

	sapgui_set_focus(ctxtG_SELFLD_TAB3, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1057", 
		END_OPTIONAL);

	sapgui_send_vkey(F4, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1059", 
		END_OPTIONAL);

	sapgui_select_active_window("wnd[0]");

	sapgui_status_bar_get_text("paramStatusBarText", 
		BEGIN_OPTIONAL, 
			"Recorded status bar text: Runtime error MESSAGE_TYPE_X has occurred", 
			"AdditionalInfo=sapgui1062", 
		END_OPTIONAL);

	lr_think_time(31);

	sapgui_set_ok_code("vf03", 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1063", 
		END_OPTIONAL);

	sapgui_send_vkey(ENTER, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1064", 
		END_OPTIONAL);

	sapgui_send_vkey(F4, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1067", 
		END_OPTIONAL);

	sapgui_select_active_window("wnd[1]");

	sapgui_send_vkey(F4, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1070", 
		END_OPTIONAL);

	sapgui_select_active_window("wnd[2]");

	sapgui_window_scroll_to_row("0", 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1074", 
		END_OPTIONAL);

	sapgui_set_focus(lbl1, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1073", 
		END_OPTIONAL);

	sapgui_send_vkey(F2, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1077", 
		END_OPTIONAL);

	sapgui_select_active_window("wnd[1]");

	sapgui_set_focus(ctxtG_SELFLD_TAB1, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1080", 
		END_OPTIONAL);

	sapgui_send_vkey(F4, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1082", 
		END_OPTIONAL);

	sapgui_select_active_window("wnd[2]");

	sapgui_press_button("Continue   (Enter)", 
		btn1, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1085", 
		END_OPTIONAL);

	sapgui_window_scroll_to_row("0", 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1089", 
		END_OPTIONAL);

	sapgui_set_focus(lbl2, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1088", 
		END_OPTIONAL);

	sapgui_send_vkey(F2, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1092", 
		END_OPTIONAL);

	sapgui_select_active_window("wnd[1]");

	sapgui_set_focus(ctxtG_SELFLD_TAB2, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1095", 
		END_OPTIONAL);

	sapgui_send_vkey(F4, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1097", 
		END_OPTIONAL);

	sapgui_select_active_window("wnd[2]");

	sapgui_window_scroll_to_row("0", 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui10101", 
		END_OPTIONAL);

	sapgui_set_focus(lbl3, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui10100", 
		END_OPTIONAL);

	sapgui_send_vkey(F2, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui10104", 
		END_OPTIONAL);

	sapgui_select_active_window("wnd[1]");

	sapgui_set_focus(ctxtG_SELFLD_TAB3, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui10107", 
		END_OPTIONAL);

	sapgui_send_vkey(F4, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui10109", 
		END_OPTIONAL);

	sapgui_select_active_window("wnd[0]");

	sapgui_status_bar_get_text("paramStatusBarText", 
		BEGIN_OPTIONAL, 
			"Recorded status bar text: Runtime error MESSAGE_TYPE_X has occurred", 
			"AdditionalInfo=sapgui10112", 
		END_OPTIONAL);

	return 0;
}