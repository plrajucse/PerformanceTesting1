Action()
{
		//add the hearders
	web_add_header("Accept-Encoding", "gzip,deflate");
	web_add_header("Content-Type", "text/xml;charset=UTF-8");
	
	// capture the values
	web_reg_save_param("cResponse","lb=<m:NumberToWordsResult>","rb=</m:NumberToWordsResult>","search=body",LAST);
	
	//add request
	web_custom_request("Frist Method", "Method=POST",

    "URL=https://www.dataaccess.com/webservicesserver/NumberConversion.wso", 

    "Body=<soapenv:Envelope xmlns:soapenv=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:web=\"http://www.dataaccess.com/webservicesserver/\">"
   "<soapenv:Header/>"
   "<soapenv:Body>"
      "<web:NumberToWords>"
         "<web:ubiNum>100</web:ubiNum>"
      "</web:NumberToWords>"
   "</soapenv:Body>"
   "</soapenv:Envelope>", 
     LAST );
	return 0;
}
