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

	sapgui_logon("SHAFT18", 
		"*****", 
		"800", 
		"EN", 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1012", 
		END_OPTIONAL);

	lr_think_time(5);

	sapgui_set_ok_code("XK03", 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1013", 
		END_OPTIONAL);

	sapgui_send_vkey(ENTER, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1014", 
		END_OPTIONAL);

	lr_think_time(20);

	sapgui_set_checkbox("Address", 
		"True", 
		chkRF02K1, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1017", 
		END_OPTIONAL);

	sapgui_set_checkbox("Control", 
		"True", 
		chkRF02K2, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1018", 
		END_OPTIONAL);

	sapgui_set_checkbox("Payment transactions", 
		"True", 
		chkRF02K3, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1019", 
		END_OPTIONAL);

	sapgui_set_checkbox("Contact Persons", 
		"True", 
		chkWRF02K1, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1020", 
		END_OPTIONAL);

	sapgui_set_checkbox("Accounting info", 
		"True", 
		chkRF02K4, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1021", 
		END_OPTIONAL);

	sapgui_set_checkbox("Payment transactions", 
		"True", 
		chkRF02K5, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1022", 
		END_OPTIONAL);

	sapgui_set_checkbox("Correspondence", 
		"True", 
		chkRF02K6, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1023", 
		END_OPTIONAL);

	sapgui_set_checkbox("Withholding tax", 
		"True", 
		chkRF02K7, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1024", 
		END_OPTIONAL);

	sapgui_set_checkbox("Purchasing data", 
		"True", 
		chkRF02K8, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1025", 
		END_OPTIONAL);

	sapgui_set_checkbox("Partner functions", 
		"True", 
		chkWRF02K2, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1026", 
		END_OPTIONAL);

	sapgui_send_vkey(F4, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1027", 
		END_OPTIONAL);

	lr_think_time(5);

	sapgui_select_active_window("wnd[1]");

	sapgui_press_button("Continue   (Enter)", 
		btn1, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1030", 
		END_OPTIONAL);

	sapgui_window_scroll_to_row("0", 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1034", 
		END_OPTIONAL);

	sapgui_set_focus(lbl1, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1033", 
		END_OPTIONAL);

	sapgui_send_vkey(F2, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1037", 
		END_OPTIONAL);

	sapgui_select_active_window("wnd[0]");

	sapgui_set_focus(ctxtRF02K1, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1040", 
		END_OPTIONAL);

	sapgui_send_vkey(F4, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1042", 
		END_OPTIONAL);

	sapgui_select_active_window("wnd[1]");

	sapgui_press_button("Continue   (Enter)", 
		btn1, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1045", 
		END_OPTIONAL);

	sapgui_window_scroll_to_row("0", 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1049", 
		END_OPTIONAL);

	sapgui_set_focus(lbl2, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1048", 
		END_OPTIONAL);

	sapgui_send_vkey(F2, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1052", 
		END_OPTIONAL);

	sapgui_select_active_window("wnd[0]");

	sapgui_set_focus(ctxtRF02K2, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1055", 
		END_OPTIONAL);

	sapgui_send_vkey(F4, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1057", 
		END_OPTIONAL);

	sapgui_select_active_window("wnd[1]");

	sapgui_press_button("Continue   (Enter)", 
		btn1, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1060", 
		END_OPTIONAL);

	sapgui_window_scroll_to_row("0", 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1064", 
		END_OPTIONAL);

	sapgui_set_focus(lbl2, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1063", 
		END_OPTIONAL);

	sapgui_send_vkey(F2, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1067", 
		END_OPTIONAL);

	lr_think_time(44);

	sapgui_select_active_window("wnd[0]");

	sapgui_set_focus(ctxtRF02K3, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1070", 
		END_OPTIONAL);

	sapgui_select_menu("Log off", 
		menu1, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1072", 
		END_OPTIONAL);

	sapgui_select_active_window("wnd[1]");

	sapgui_press_button("Yes", 
		btnSPOP1, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1075", 
		END_OPTIONAL);

	return 0;
}