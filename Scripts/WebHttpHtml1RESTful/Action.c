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
	
//	web_rest("GET: http://jsonplaceholder.typicode.com/users",
//		"URL=http://jsonplaceholder.typicode.com/users",
//		"Method=GET",
//		"Snapshot=t649210.inf",
//		LAST);
	
	//lr_save_string(C_Response, "JSON_Input_Param");
	
	// Create a Json object from a string.
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
	
		// See File: store.json
		// // Create a Json object from a file.
//	lr_eval_json("Buffer/File=store.json", 
//	                 "JsonObject=s_json_obj", LAST);
//	i = lr_json_get_values("JsonObject=s_json_obj",
//                "ValueParam=s_new_storename",
//                "QueryString=$.store.name",
//                 LAST);
//	
//	
//	// Multi match with SelectAll=Yes
//	lr_save_string("\"1111\"", "s_isbn_1"); 
//	lr_save_string("\"2222\"", "s_isbn_2"); 
//	lr_save_string("2", "s_isbn_count");
//
//	lr_save_string("$.store.books[*].isbn", "s_path_isbn");
//	
//	i = lr_json_set_values("JsonObject=s_json_obj",
//	                "ValueParam=s_isbn",
//	                "QueryString={s_path_isbn}",
//	                "SelectAll=Yes",
//	                 LAST);	
//
//		
//	i = lr_json_get_values("JsonObject=s_json_obj",
//                "ValueParam=s_new_isbn",
//                "QueryString={s_path_isbn}",
//	            "SelectAll=Yes",
//                 LAST);
//
//	
//	lr_json_get_values("JsonObject=json_obj_1",
//                "ValueParam=s_new_storename",
//                "QueryString=$.RestResponse.messages",
//                 LAST);
	

	return 0;
}
