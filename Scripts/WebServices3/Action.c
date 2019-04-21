Action()
{
	int find_cnt;
	soap_request("StepName=SOAP Request",										
		"URL=https://www.dataaccess.com/webservicesserver/NumberConversion.wso",										
		"SOAPEnvelope="
		"<soapenv:Envelope xmlns:soapenv=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:web=\"http://www.dataaccess.com/webservicesserver/\">"
			"<soapenv:Header></soapenv:Header>"
			"<soapenv:Body>"
				"<web:NumberToWords>"
					"<web:ubiNum>100</web:ubiNum>"
				"</web:NumberToWords>"
			"</soapenv:Body>"
		"</soapenv:Envelope>",										
		"SOAPAction=",										
		"ResponseParam=response",										
		"Snapshot=t1550415003.inf",									    
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
