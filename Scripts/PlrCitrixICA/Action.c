Action()
{
	char window_plraju[100];
	char bitmapBuf[50];
	char text_bufferPlr[100];
	char text_BufferRaju[100];
	int x;
	

	ctrx_set_connect_opt(ICAFILE, "Launch.ica");
	lr_think_time(2);
	

	ctrx_wait_for_event("LOGON", CTRX_LAST);

	lr_think_time(2);
	//window is created
	ctrx_sync_on_window("User login", ACTIVATE, 194, 175, 412, 248, "snapshot1", CTRX_LAST);
	lr_think_time(2);
	
	ctrx_type("admin", "", CTRX_LAST);
	lr_think_time(2);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);
	lr_think_time(2);

	ctrx_type("Sh@ft123", "", CTRX_LAST);
	lr_think_time(2);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);
	lr_think_time(2);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);
	lr_think_time(2);
	
	
	lr_start_transaction("KWHotel Free");

	ctrx_key("ENTER_KEY", 0, "", CTRX_LAST);
	
	lr_think_time(2);
	   
  plraju:

	ctrx_sync_on_window("KWHotel Free (0.47.108) - [Calendar]", ACTIVATE, 0, 0, 801, 601, "snapshot8", CTRX_LAST);
	
	//pause until text "Meals" appears 
 x	= ctrx_sync_on_text_ocr(437, 62, 43, 22, "Meals", "NULL=snapshot_3", CTRX_LAST);
 lr_output_message("get text successs ...  %d",x);
	

	ctrx_get_text_ocr(NULL, 348, 67, 55, 18, "snapshot_2", text_BufferRaju, CTRX_LAST);
	lr_output_message("get text......... %s",text_BufferRaju);

	ctrx_get_text_ocr(NULL, 440, 66, 36, 19, "snapshot_1", text_bufferPlr, CTRX_LAST);
	lr_output_message("get text......... %s",text_bufferPlr);
	
	ctrx_get_window_name(window_plraju, CTRX_LAST);

if (strcmp(window_plraju, "KWHotel Free (0.47.108) - [Calendar]"))
{
	lr_output_message("Not Appear");
	lr_end_transaction("KWHotel Free", LR_FAIL);
    goto plraju;
   	
} else{
    
    lr_output_message("Appear"); 
    lr_end_transaction("KWHotel Free", LR_PASS);
    
}

//Bit Map code:
	//ctrx_sync_on_bitmap(259, 67, 49, 14, "4ce5ce4a7d592e12c1c051ee4543343f", CTRX_LAST);
	//ctrx_sync_on_bitmap(437, 64, 44, 20, "e0873ec64ec2c7745e29524ca8bf4aae", CONTINUE_ON_ERROR, CTRX_LAST);
	ctrx_sync_on_bitmap(437, 64, 44, 20, "e0873ec64ec2c7745e29524ca8bf4aae", CTRX_LAST);
	ctrx_get_bitmap_value(35, 120, 30, 50, bitmapBuf, CTRX_LAST );
	
	lr_think_time(2);

	ctrx_key("t", MODIF_ALT, "", CTRX_LAST);
	lr_think_time(2);

	ctrx_key("DOWN_ARROW_KEY", 0, "", CTRX_LAST);
	lr_think_time(2);

	ctrx_key("ENTER_KEY", 0, "", CTRX_LAST);
	

	lr_think_time(2);

	ctrx_key("f", MODIF_ALT, "", CTRX_LAST);

	ctrx_key("DOWN_ARROW_KEY", 0, "", CTRX_LAST);

	ctrx_key("DOWN_ARROW_KEY", 0, "", CTRX_LAST);

	ctrx_key("DOWN_ARROW_KEY", 0, "", CTRX_LAST);

	ctrx_key("DOWN_ARROW_KEY", 0, "", CTRX_LAST);

	ctrx_key("DOWN_ARROW_KEY", 0, "", CTRX_LAST);

	ctrx_key("DOWN_ARROW_KEY", 0, "", CTRX_LAST);

	ctrx_key("ENTER_KEY", 0, "", CTRX_LAST);
	lr_think_time(2);
	
	//window is created
	ctrx_sync_on_window("Warning", ACTIVATE, 190, 200, 421, 201, "snapshot20", CTRX_LAST);
	lr_think_time(2);

	ctrx_key("TAB_KEY", 0, "", CTRX_LAST);
	lr_think_time(2);

	ctrx_key("ENTER_KEY", 0, "", CTRX_LAST);
	lr_think_time(2);

	//window is created
	ctrx_sync_on_window("Update Application", ACTIVATE, 101, 88, 598, 423, "snapshot23", CTRX_LAST);
	lr_think_time(2);

	ctrx_key("ENTER_KEY", 0, "", CTRX_LAST);
	lr_think_time(2);

	ctrx_logoff(CTRX_NORMAL_LOGOFF, CTRX_LAST);

	return 0;
}