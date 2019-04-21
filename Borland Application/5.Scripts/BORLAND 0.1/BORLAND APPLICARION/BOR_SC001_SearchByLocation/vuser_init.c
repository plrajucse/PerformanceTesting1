/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 971
   ------------------------------------------------------------------------------- */
   
/**********************************************************************************************************
Script for Borland Application
***********************************************************************************************************

Project Name: Borland
Project ID:
Client Name: Gopi Reddy .Y
Author:  P.L.Raju
	      Performance Testing Centre of Excellence
	      Shaft Software Solutions Pvt. Limited
	      plrajudec18@shaft.com
	      
Version :  Components modified and scripted
          1.Done few corelations with respect to p_l_id.
          2.Transaction function added inorder to findout respose time for a particular request.
          3.Done Text Verification, to check whether particular text is available or not.
          4.Done parametrization inorder to capture Url,Username and Password.

Author:  P.L.Raju
	      Performance Testing Centre of Excellence
	      Shaft Software Solutions Pvt. Limited
	      plrajudec18@shaft.com

Risk and Mitigation : 1. Change in exception in borlan_Stage_14_16
		   Solution : Re - record exception and correlate "LNEXP_RX_DETAIL"
		      
Transaction Foramat : lr_start_transaction("BOR_SC001_T001_Transname");

Use: Borland 0.02 code base

Components Affected
************************************************************************************************************/   

vuser_init()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");
	
	lr_start_transaction("BOR_SC001_T001_Launch");
	
	web_url("InsuranceWebExtJS", 
		"URL=http://demo.borland.com/InsuranceWebExtJS/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("BOR_SC001_T001_Launch", LR_AUTO);

	lr_think_time(27);

	lr_start_transaction("BOR_SC001_T002_LogIn");
	
	web_submit_data("index.jsf;jsessionid=6B39DAF94B1AE10F137DBC98EDC73048", 
		"Action=http://demo.borland.com/InsuranceWebExtJS/index.jsf;jsessionid=6B39DAF94B1AE10F137DBC98EDC73048", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://demo.borland.com/InsuranceWebExtJS/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=login-form", "Value=login-form", ENDITEM, 
		"Name=login-form:email", "Value=john.smith@gmail.com", ENDITEM, 
		"Name=login-form:password", "Value=john", ENDITEM, 
		"Name=login-form:login.x", "Value=50", ENDITEM, 
		"Name=login-form:login.y", "Value=9", ENDITEM, 
		"Name=javax.faces.ViewState", "Value=j_id1:j_id2", ENDITEM, 
		LAST);
	
	lr_end_transaction("BOR_SC001_T002_LogIn",LR_AUTO);

	return 0;
}
