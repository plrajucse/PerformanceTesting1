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

	lr_think_time(7);

	sapgui_logon("SHAFT18", 
		"*****", 
		"800", 
		"EN", 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1012", 
		END_OPTIONAL);

	sapgui_set_ok_code("AW01N", 
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

	sapgui_select_active_window("wnd[0]");

	sapgui_set_focus(ctxtANLA1, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1027", 
		END_OPTIONAL);

	sapgui_send_vkey(F4, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1029", 
		END_OPTIONAL);

	sapgui_select_active_window("wnd[1]");

	sapgui_press_button("Continue   (Enter)", 
		btn1, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1032", 
		END_OPTIONAL);

	sapgui_window_scroll_to_row("0", 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1036", 
		END_OPTIONAL);

	sapgui_set_focus(lbl2, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1035", 
		END_OPTIONAL);

	sapgui_send_vkey(F2, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1039", 
		END_OPTIONAL);

	sapgui_select_active_window("wnd[0]");

	sapgui_set_focus(ctxtANLA2, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1042", 
		END_OPTIONAL);

	sapgui_send_vkey(F4, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1044", 
		END_OPTIONAL);

	sapgui_select_active_window("wnd[1]");

	sapgui_press_button("Continue   (Enter)", 
		btn1, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1047", 
		END_OPTIONAL);

	sapgui_window_scroll_to_row("0", 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1051", 
		END_OPTIONAL);

	sapgui_set_focus(lbl3, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1050", 
		END_OPTIONAL);

	sapgui_send_vkey(F2, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1054", 
		END_OPTIONAL);

	lr_think_time(9);

	sapgui_select_active_window("wnd[0]");

	sapgui_select_tab("Posted values", 
		tabpIDC_BWERTE1, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1057", 
		END_OPTIONAL);

	lr_think_time(20);

	sapgui_select_tab("Comparisons", 
		tabpIDC_VERGLEICH1, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1060", 
		END_OPTIONAL);

	lr_think_time(11);

	sapgui_grid_scroll_to_row("'Book depreciation:2011 -2039', ", 
		shell1, 
		"20", 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1063", 
		END_OPTIONAL);

	sapgui_select_tab("Parameters", 
		tabpIDC_PARAMETER1, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1064", 
		END_OPTIONAL);

	lr_think_time(15);

	sapgui_press_button(" Display dep. key", 
		btn2, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1067", 
		END_OPTIONAL);

	lr_think_time(9);

	sapgui_grid_select_cell_row("'Depreciation Key', 3", 
		shell2, 
		"3", 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1070", 
		END_OPTIONAL);

	sapgui_grid_select_rows("'Depreciation Key', 3", 
		shell2, 
		"3", 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1071", 
		END_OPTIONAL);

	sapgui_grid_double_click_current_cell("'Depreciation Key' (3, Group description)", 
		shell2, 
		BEGIN_OPTIONAL, 
			"CurrentRow=3", 
			"CurrentCell=COLUMNTEXT", 
			"AdditionalInfo=sapgui1072", 
		END_OPTIONAL);

	lr_think_time(9);

	sapgui_select_menu("Log off", 
		menu1, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1075", 
		END_OPTIONAL);

	sapgui_select_active_window("wnd[1]");

	sapgui_press_button("Yes", 
		btnSPOP1, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1078", 
		END_OPTIONAL);

	return 0;
}