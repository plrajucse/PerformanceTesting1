Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");
	
	/* home page */
	
	//<input type="hidden" name="logintoken" value="5DS0GZWNK">
		web_reg_save_param("corlogintoken","lb=logintoken\" value=\"","rb=\">",LAST);

	web_url("banking.megasol.se", 
		"URL=http://banking.megasol.se/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Accept-Language");

	lr_think_time(10);

	/* login page */

	web_add_header("Accept-Language", 
		"en-US,en;q=0.9");

	lr_think_time(16);
	
	
//<td align="right" class="text" valign="top">2019-01-03<br>Charles Windsor</td>
	
	//web_reg_save_param("sender","lb=<br>","rb=</td>",LAST);
	web_submit_data("login.mws", 
		"Action=http://banking.megasol.se/login.mws", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://banking.megasol.se/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=action", "Value=login", ENDITEM, 
		"Name=logintoken", "Value={corlogintoken}", ENDITEM, 
		"Name=df_username", "Value=DEMO", ENDITEM, 
		"Name=IdleTime", "Value=900", ENDITEM, 
		"Name=df_password", "Value=demo", ENDITEM, 
		"Name=Language", "Value=EN", ENDITEM, 
		LAST);

	lr_think_time(21);

/* Added by Async CodeGen.
ID=Poll_0
ScanType = Recording

The following URLs are considered part of this conversation:
	https://clientservices.googleapis.com/uma/v2

TODO - The following callbacks have been added to AsyncCallbacks.c.
Add your code to the callback implementations as necessary.
	Poll_0_RequestCB
	Poll_0_ResponseCB
 */
	web_reg_async_attributes("ID=Poll_0", 
		"Pattern=Poll", 
		"URL=https://clientservices.googleapis.com/uma/v2", 
		"PollIntervalMs=3000", 
		"RequestCB=Poll_0_RequestCB", 
		"ResponseCB=Poll_0_ResponseCB", 
		LAST);

	

/* Removed by Async CodeGen.
ID = Poll_0
 */
	

/* Removed by Async CodeGen.
ID = Poll_0
 */
	

/* Removed by Async CodeGen.
ID = Poll_0
 */
	

/* Added by Async CodeGen.
ID = Poll_0
 */
	web_stop_async("ID=Poll_0", 
		LAST);

	/* desposit notification */

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	lr_think_time(5);
	
	//<option value="4B8A4838-4FE7-4D64-8354-7EECE7EB5FB5:AUD">
		web_reg_save_param("depositacc","lb=<option value=\"","rb=\">",LAST);
		
		//name="df_sendertype" value="P" onClick="changeSenderType(this.value);" >
			web_reg_save_param("sendertype","lb=df_sendertype\" value=\"","rb=\" onClick",LAST);
			
			//<option value="C">Cheque</option>
				web_reg_save_param("typeofdesposit","lb=<option value=\"C\">","rb=</option>",LAST);
				
				//name="df_personidtype" value="B" onClick="changeIDType(this.value);" >
					web_reg_save_param("identificationtype","lb=df_personidtype\" value=\"","rb=\" onClick",LAST);

//<option value="AU:AUD">Australia
//<option value=
	web_reg_save_param("countryofsendingbank","lb=<option value=\"AU:AUD\">","rb=<option value=",LAST);
					
	web_url("AccountDeposit.mws", 
		"URL=http://banking.megasol.se/AccountDeposit.mws", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://banking.megasol.se/login.mws", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(24);

	web_submit_data("AccountDeposit.mws_2", 
		"Action=http://banking.megasol.se/AccountDeposit.mws?action=save", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://banking.megasol.se/AccountDeposit.mws", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=df_senddate", "Value=2019-01-03", ENDITEM, 
		"Name=df_type", "Value={typeofdesposit}", ENDITEM, 
		"Name=df_tocliackey", "Value={depositacc}", ENDITEM, 
		"Name=df_amount", "Value=60000", ENDITEM, 
		"Name=df_curcode", "Value=AUD", ENDITEM, 
		"Name=file", "Value=", "File=Yes", ENDITEM, 
		"Name=df_sendertype", "Value={sendertype}", ENDITEM, 
		"Name=df_sender", "Value=Charles Windsor", ENDITEM, 
		"Name=df_personidtype", "Value={identificationtype}", ENDITEM, 
		"Name=df_senderid_address1", "Value=", ENDITEM, 
		"Name=df_senderid_address2", "Value=", ENDITEM, 
		"Name=df_senderid_address3", "Value=", ENDITEM, 
		"Name=df_senderid_address_country", "Value=", ENDITEM, 
		"Name=df_senderid_coregnum", "Value=", ENDITEM, 
		"Name=df_senderid_coregcountry", "Value=", ENDITEM, 
		"Name=df_senderid_dob", "Value=1990-07-15", ENDITEM, 
		"Name=df_senderid_birthplace", "Value=annarigudem", ENDITEM, 
		"Name=df_bank", "Value=sbi", ENDITEM, 
		"Name=df_bank_country", "Value={countryofsendingbank}", ENDITEM, 
		"Name=bank_curcode", "Value=AUD", ENDITEM, 
		"Name=df_reference", "Value=rent", ENDITEM, 
		"Name=df_notes", "Value=cash", ENDITEM, 
		LAST);

	/* log out */

	lr_think_time(18);

	web_url("Log out", 
		"URL=http://banking.megasol.se/Logout.mws", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://banking.megasol.se/AccountDeposit.mws?action=save", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}