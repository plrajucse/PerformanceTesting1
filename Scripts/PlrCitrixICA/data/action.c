Action()
{

	ctrx_set_connect_opt(ICAFILE, "Launch.ica");

	ctrx_wait_for_event("LOGON", CTRX_LAST);

	lr_think_time(9);

	ctrx_sync_on_window("User login", ACTIVATE, 194, 175, 412, 248, "snapshot1", CTRX_LAST);

	ctrx_type("admin", "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_type("Sh@ft123", "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("ENTER_KEY", 0, "", CTRX_LAST);

	lr_think_time(5);

	ctrx_sync_on_window("KWHotel Free (0.47.108) - [Calendar]", ACTIVATE, 0, 0, 801, 601, "snapshot8", CTRX_LAST);

	ctrx_key("t", MODIF_ALT, "", CTRX_LAST);

	ctrx_key("DOWN_ARROW_KEY", 0, "", CTRX_LAST);

	ctrx_key("ENTER_KEY", 0, "", CTRX_LAST);

	lr_think_time(6);

	ctrx_key("f", MODIF_ALT, "", CTRX_LAST);

	ctrx_key("DOWN_ARROW_KEY", 0, "", CTRX_LAST);

	ctrx_key("DOWN_ARROW_KEY", 0, "", CTRX_LAST);

	ctrx_key("DOWN_ARROW_KEY", 0, "", CTRX_LAST);

	ctrx_key("DOWN_ARROW_KEY", 0, "", CTRX_LAST);

	ctrx_key("DOWN_ARROW_KEY", 0, "", CTRX_LAST);

	ctrx_key("DOWN_ARROW_KEY", 0, "", CTRX_LAST);

	ctrx_key("ENTER_KEY", 0, "", CTRX_LAST);

	ctrx_sync_on_window("Warning", ACTIVATE, 190, 200, 421, 201, "snapshot20", CTRX_LAST);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);

	ctrx_key("ENTER_KEY", 0, "", CTRX_LAST);

	ctrx_sync_on_window("Update Application", ACTIVATE, 101, 88, 598, 423, "snapshot23", CTRX_LAST);

	ctrx_key("ENTER_KEY", 0, "", CTRX_LAST);

	ctrx_logoff(CTRX_NORMAL_LOGOFF, CTRX_LAST);

	return 0;
}