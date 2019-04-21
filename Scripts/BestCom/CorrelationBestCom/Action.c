Action()
{

	web_set_sockets_option("SSL_VERSION", "2&3");
	web_set_max_html_param_len("999999");

web_reg_save_param("uipidVar","LB=UipId\" value=\"","RB=\" />",LAST);
web_reg_save_param("cViewState1","LB=id=\"__VIEWSTATE\" value=\"","RB=\" />",LAST);
web_reg_save_param("cEventValid","LB=value=\"","RB=\" />",LAST);
	                   
	web_url("Myhome.aspx",
		"URL=https://www.bescom.co.in/SCP/Myhome.aspx", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("Myhome.aspx_2", 
		"Action=https://www.bescom.co.in/SCP/Myhome.aspx", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://www.bescom.co.in/SCP/Myhome.aspx", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=masterPageId", "Value=ctl00_ctl00_MasterPageContentPlaceHolder_MasterPageContentPlaceHolder", ENDITEM, 
		"Name=ErrorLabelId", "Value=ctl00_ctl00_MasterPageContentPlaceHolder_lblErrorMessage", ENDITEM, 
		"Name=__LASTFOCUS", "Value=", ENDITEM, 
		"Name=ctl00_ctl00_MasterPageContentPlaceHolder_ToolkitScriptManager2_HiddenField", "Value=;;AjaxControlToolkit, Version=3.5.40412.0, Culture=neutral, PublicKeyToken=28f01b0e84b6d53e:en-US:1547e793-5b7e-48fe-8490-03a375b13a33:475a4ef5:effe2a26:1d3ed089:5546a2b:497ef277:a43b07eb:751cdd15:dfad98a5:3cf12cf1", ENDITEM, 
		"Name=__EVENTTARGET", "Value=", ENDITEM, 
		"Name=__EVENTARGUMENT", "Value=", ENDITEM, 
		"Name=__VIEWSTATE", "Value={cViewState1}", ENDITEM, 
		"Name=__DirtyFlag", "Value=N", ENDITEM, 
		"Name=__UipId", "Value={uipidVar}", ENDITEM, 
		"Name=__EVENTVALIDATION", "Value={cEventValid}", ENDITEM, 
		"Name=ctl00$ctl00$siteSearch$txtsearch", "Value=Search", ENDITEM, 
		"Name=ctl00$ctl00$MasterPageContentPlaceHolder$ucLogin$txtUserName", "Value=ruckman", ENDITEM, 
		"Name=ctl00$ctl00$MasterPageContentPlaceHolder$ucLogin$txtPassword", "Value=ruckman123", ENDITEM, 
		"Name=ctl00$ctl00$MasterPageContentPlaceHolder$ucLogin$btnLogin", "Value=Sign In", ENDITEM, 
		LAST);

	lr_think_time(154);
	
	web_reg_save_param("cUipid2","LB=UipId\" value=\"","RB=\" />",LAST);
	web_reg_save_param("cEventValid2","LB=value=\"","RB=\" />",LAST);
	web_reg_save_param("cViewState2","LB=id=\"__VIEWSTATE\" value=\"","RB=\" />",LAST);

	web_url("BillingHistory.aspx", 
		"URL=https://www.bescom.co.in/SCP/MyAccount/BillingHistory.aspx", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.bescom.co.in/SCP/MyAccount/AccountSummary.aspx?Name=IAccountSummaryView", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(25);

	web_submit_data("ViewBill.aspx", 
		"Action=https://www.bescom.co.in/SCP/MyAccount/ViewBill.aspx?Billid=827877603540&AccountId=8278745000", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://www.bescom.co.in/SCP/MyAccount/BillingHistory.aspx", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=masterPageId", "Value=ctl00_ctl00_MasterPageContentPlaceHolder_MasterPageContentPlaceHolder", ENDITEM, 
		"Name=ErrorLabelId", "Value=ctl00_ctl00_MasterPageContentPlaceHolder_lblErrorMessage", ENDITEM, 
		"Name=__LASTFOCUS", "Value=", ENDITEM, 
		"Name=ctl00_ctl00_MasterPageContentPlaceHolder_ToolkitScriptManager2_HiddenField", "Value=;;AjaxControlToolkit, Version=3.5.40412.0, Culture=neutral, PublicKeyToken=28f01b0e84b6d53e:en-US:1547e793-5b7e-48fe-8490-03a375b13a33:475a4ef5:effe2a26:8e94f951:1d3ed089:5546a2b:497ef277:a43b07eb:751cdd15:dfad98a5:3cf12cf1", ENDITEM, 
		"Name=__EVENTTARGET", "Value=ctl00$ctl00$MasterPageContentPlaceHolder$MasterPageContentPlaceHolder$BillingHistoryView$TabContainer1$TabPanelBillingHistory$dgBillingHistory$ctl02$lbtnViewBill", ENDITEM, 
		"Name=__EVENTARGUMENT", "Value=", ENDITEM, 
		"Name=ctl00_ctl00_MasterPageContentPlaceHolder_MasterPageContentPlaceHolder_BillingHistoryView_TabContainer1_ClientState", "Value={\"ActiveTabIndex\":0,\"TabState\":[true,true]}", ENDITEM, 
		"Name=__VIEWSTATE", "Value={cViewState2}", ENDITEM, 
		"Name=__DirtyFlag", "Value=N", ENDITEM, 
		"Name=__UipId", "Value={cUipid2}", ENDITEM, 
		"Name=__PREVIOUSPAGE", "Value=p-cqwkwcQktjE5yTDTCU1wI5k7ubAUpU_K4PLl2DbLMD3hroXzWxklwyZgwIdZn5gKtrn6WXmFVpESMrsL1_VuLoDk21uHnQlQJfHEe7TzOiYGf8Uai-ZFSt2yjpSrVbwMI5PQ2", ENDITEM, 
		"Name=__EVENTVALIDATION", "Value={cEventValid2}"
		"GjDALh47qbDAKq64q+DQKjupbhBzASZqpyCeVPBmxK/frNC2uATJBp", ENDITEM, 
		"Name=ctl00$ctl00$siteSearch$txtsearch", "Value=Search", ENDITEM, 
		"Name=ctl00$ctl00$MasterPageContentPlaceHolder$MasterPageContentPlaceHolder$BillingHistoryView$ddlCustomerAccountNumber", "Value=8278745000", ENDITEM, 
		"Name=ctl00$ctl00$MasterPageContentPlaceHolder$MasterPageContentPlaceHolder$BillingHistoryView$TabContainer1$TabPanelBillingHistory$hiddenFieldaccountID", "Value=", ENDITEM, 
		"Name=ctl00$ctl00$MasterPageContentPlaceHolder$MasterPageContentPlaceHolder$BillingHistoryView$TabContainer1$TabPanelBillingHistory$ucChartToolBar$ddlChartType", "Value=Column", ENDITEM, 
		"Name=ctl00$ctl00$MasterPageContentPlaceHolder$MasterPageContentPlaceHolder$BillingHistoryView$TabContainer1$TabPanelBillingHistory$ucChartToolBar$ddlSeriesColor", "Value=DarkGreen", ENDITEM, 
		"Name=ctl00$ctl00$MasterPageContentPlaceHolder$MasterPageContentPlaceHolder$BillingHistoryView$TabContainer1$TabPanelBillingHistory$ucChartToolBar$ddlBackColor", "Value=LightSeaGreen", ENDITEM, 
		"Name=ctl00$ctl00$MasterPageContentPlaceHolder$MasterPageContentPlaceHolder$BillingHistoryView$TabContainer1$TabPanelBillingHistory$ucChartToolBar$ddlGradient", "Value=DiagonalRight", ENDITEM, 
		"Name=ctl00$ctl00$MasterPageContentPlaceHolder$MasterPageContentPlaceHolder$BillingHistoryView$TabContainer1$TabPanelPaymentHistory$hiddenField1", "Value=", ENDITEM, 
		LAST);

	web_url("SessionTimeOut.aspx", 
		"URL=https://www.bescom.co.in/SessionTimeOut.aspx", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.bescom.co.in/SCP/MyAccount/ViewBill.aspx?Billid=827877603540&AccountId=8278745000", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}