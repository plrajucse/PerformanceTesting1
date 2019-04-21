Action()
{
	web_reg_save_param("C_Response","LB=","RB=","search=body",LAST);
	
	web_url("Rest full",
    "URL=http://services.groupkt.com/country/get/all",
    "TargetFrame=", 
    "Resource=0",
    "RecContentType=text/html",
    "Snapshot=t1.inf",
    "Mode=HTML",
    LAST );
	
	lr_eval_json("Buffer={C_Response}",
	             "JsonObject=json_obj_1", LAST);
	
	lr_json_get_values("JsonObject=json_obj_1",
                "ValueParam=s_new_storename",
                "QueryString=$.RestResponse.messages",
                 LAST);

	lr_json_find("JsonObject=json_obj_1",
	                "Value=[\"Total [249] records found.\"]",
	                "QueryString=$.RestResponse.messages",
                 LAST);

	return 0;
}
