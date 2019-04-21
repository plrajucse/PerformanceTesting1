Action()
{
	int find_cnt;

	web_service_call( "StepName=NumberToWords_101",
		"SOAPMethod=NumberConversion|NumberConversionSoap|NumberToWords",
		"ResponseParam=response",
		"Service=NumberConversion",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1550399523.inf",
		BEGIN_ARGUMENTS,
		"ubiNum=100",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);
	
	lr_xml_get_values("XML={response}",
          "ValueParam=OutputParam",
          "Query=//m:NumberToWordsResult",
          LAST );

    lr_output_message(lr_eval_string("Query result = {OutputParam}"));
    
    
    //lr_save_string(xml_input, "XML_Input_Param");
    
    /* Verify that employee John Smith exists */
    find_cnt = lr_xml_find("XML={response}",
        "Value=one hundred ", 
        "Query=//m:NumberToWordsResult", 
        LAST );
    
    /* Now insert John Smith's telephone extension number */
    if (find_cnt >0){
    	lr_output_message("response success");
    	
    }
    else{
    	lr_output_message("response fail");
    }

	

     
	
	return 0;
}
