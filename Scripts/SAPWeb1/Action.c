#include "web_api.h"

Action()
{

	
	//<input type="hidden" name="j_salt" value="7jT20olJ4J3yIr4/DITXuc2W9pY" />
	web_reg_save_param("Corr_jsalt","LB=<input type=\"hidden\" name=\"j_salt\" value=\"","RB=\" />",LAST);
	
	lr_start_transaction("launch");

	web_url("portal", 
		"URL=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/portal", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../favicon.ico", "Referer=", ENDITEM, 
		LAST);

	lr_end_transaction("launch",LR_AUTO);

	lr_start_transaction("Logon");

/*Correlation comment - Do not change!  Original value='{Corr_Jsession}' Name ='Corr_Jsession' Type ='Manual'*/
	web_reg_save_param_ex(
		"ParamName=Corr_Jsession",
		"LB=,staticHeaderlessURL:'?",
		"RB=USER.R3_DATASOURCE.J0020991",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

	web_submit_data("portal_2", 
		"Action=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/portal", 
		"Method=POST", 
		"TargetFrame=logonAppPage", 
		"RecContentType=text/html", 
		"Referer=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/portal", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=login_submit", "Value=on", ENDITEM, 
		"Name=login_do_redirect", "Value=1", ENDITEM, 
		"Name=j_salt", "Value={Corr_jsalt}", ENDITEM, 
		"Name=j_username", "Value=J0020991", ENDITEM, 
		"Name=j_password", "Value=HR4YOU", ENDITEM, 
		"Name=uidPasswordLogon", "Value=Log On", ENDITEM, 
		EXTRARES, 
		LAST);

	web_save_timestamp_param("Corr_WID1",LAST);
	//1372419787724

	web_url("pcd!3aportal_content!2fcom.tot.fol.HR4U!2fcom.tot.fol.Portal_display!2fcom.total.hr4u!2fframeworkPages!2fcom.total.hr4U!2fcom.total.Related_Links", 
		"URL=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/servlet/prt/portal/prtroot/pcd!3aportal_content!2fcom.tot.fol.HR4U!2fcom.tot.fol.Portal_display!2fcom.total.hr4u!2fframeworkPages!2fcom.total.hr4U!2fcom.total.Related_Links?windowId=WID{Corr_WID1}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/portal", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		EXTRARES, 
		LAST);

	web_url("emptyhover.html", 
		"URL=https://frhdstdrrgv02.main.glb.corp.local:50301/com.sap.portal.design.urdesigndata/themes/portal/hr_gc_new/common/emptyhover.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/servlet/prt/portal/prtroot/pcd!3aportal_content!2fcom.tot.fol.HR4U!2fcom.tot.fol.Portal_display!2fcom.total.hr4u!2fframeworkPages!2fcom.total.hr4U!2fcom.total.Related_Links?windowId=WID{Corr_WID1}", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_url("emptyhover.html_2", 
		"URL=https://frhdstdrrgv02.main.glb.corp.local:50301/com.sap.portal.design.urdesigndata/themes/portal/hr_gc_new/common/emptyhover.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/servlet/prt/portal/prtroot/pcd!3aportal_content!2fcom.tot.fol.HR4U!2fcom.tot.fol.Portal_display!2fcom.total.hr4u!2fframeworkPages!2fcom.total.hr4U!2fcom.total.Related_Links?windowId=WID{Corr_WID1}", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_url("EmptyDocument.html", 
		"URL=https://frhdstdrrgv02.main.glb.corp.local:50301/com.sap.portal.pagebuilder/html/EmptyDocument.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/portal", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);
	
	
	//<input type="hidden" name="sap-epcm-guid" value="4EEF75FF9094E7CA9DFD9353E940349242276EBB1D0DD6743E8EA12E8718C233" />
	web_reg_save_param("Corr_GuiID","LB=<input type=\"hidden\" name=\"sap-epcm-guid\" value=\"","RB=\" />",LAST);

	//<input type="hidden" name="sap-ext-sid" value="BOvCBTcuAvMGoBjpqrUdJQ--0FQBhGZoja1L*G3KF1uzgA--" />
	web_reg_save_param("Corr_SID","LB=<input type=\"hidden\" name=\"sap-ext-sid\" value=\"","RB=\" />",LAST);

	web_submit_data("pcd!3aportal_content!2fevery_user!2fgeneral!2fdefaultAjaxframeworkContent!2fcom.sap.portal.contentarea", 
		"Action=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/servlet/prt/portal/prteventname/Navigate/prtroot/pcd!3aportal_content!2fevery_user!2fgeneral!2fdefaultAjaxframeworkContent!2fcom.sap.portal.contentarea?windowId=WID{Corr_WID1}&supportInitialNavNodesFilter=true", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/portal", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=NavigationTarget", "Value=navurl://9a6edbf171b81f60d0dc80bdcc27b87f", ENDITEM, 
		LAST);

	

	web_url("pcd!3aportal_content!2fcom.tot.fol.HR4U!2fcom.tot.fol.Portal_display!2fcom.total.hr4u!2fframeworkPages!2fcom.total.hr4U!2fcom.total.Related_Links_2", 
		"URL=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/servlet/prt/portal/prtpos/pcd!253aportal!255fcontent!252fcom!252etot!252efol!252eHR4U!252fcom!252etot!252efol!252ePortal!255fdisplay!252fcom!252etotal!252ehr4u!252fframeworkPages!252fcom!252etotal!252ehr4U!252fcom!252etotal!252eRelated!255fLinks.com!252etotal!252eLNPComponent!7brefresh!7d-/prttarget/com!252etotal!252eLNPComponent/prtroot/pcd!3aportal_content!2fcom.tot.fol.HR4U!2fcom.tot.fol.Portal_display!2fcom.total.hr4u!2fframeworkPages"
		"!2fcom.total.hr4U!2fcom.total.Related_Links", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/servlet/prt/portal/prtroot/pcd!3aportal_content!2fcom.tot.fol.HR4U!2fcom.tot.fol.Portal_display!2fcom.total.hr4u!2fframeworkPages!2fcom.total.hr4U!2fcom.total.Related_Links?windowId=WID{Corr_WID1}", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);
	
	web_save_timestamp_param("tstamp2",LAST);
	//1372419790240

	
	//BOvCBTcuAvMGoBjpqrUdJQ--00kOUgPH4ILmzOQ8w9nA5A--
	web_reg_save_param_ex(
		"ParamName=Corr_SapExtSid1",
		"LB=;sap-ext-sid&#x3d;",
		"RB=\"",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);
	
	//sap-ep-iviewhandle=00766545593
	
	web_reg_save_param_ex(
		"ParamName=Corr_SapepIviewHandle",
		"LB=<input type=\"hidden\" name=\"sap-ep-iviewhandle\" value=\"",
		"RB=\">",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);
	
//sap-ep-iviewid=pcdshort%3A%2FUr+8bpx4TvoG6JO28Q7u0Z8b9ew%3D

	web_reg_save_param_ex(
		"ParamName=Corr_SapepIviewID",
		"LB=<input type=\"hidden\" name=\"sap-ep-iviewid\" value=\"",
		"RB=\">",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

web_convert_param("Corr_SapepIviewID_URL",
  "SourceString={Corr_SapepIviewID}",
  "SourceEncoding=HTML",
  "TargetEncoding=URL",
  LAST);

//pcdshort%3A%2FHJq5DG46cgdRF6j2kMXwnqpuoV4%3D
web_reg_save_param_ex(
		"ParamName=Corr_SapepPCDUnit",
		"LB=<input type=\"hidden\" name=\"sap-ep-pcdunit\" value=\"",
		"RB=\">",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);
		
		web_convert_param("Corr_SapepPCDUnit_URL",
  "SourceString={Corr_SapepPCDUnit}",
  "SourceEncoding=HTML",
  "TargetEncoding=URL",
  LAST);


	
	
	web_submit_data("PageBuilder;jsessionid={Corr_Jsession}",
		"Action=https://frhdstdrrgv02.main.glb.corp.local:50301/webdynpro/resources/sap.com/pb/PageBuilder;jsessionid={Corr_Jsession}",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/servlet/prt/portal/prteventname/Navigate/prtroot/pcd!3aportal_content!2fevery_user!2fgeneral!2fdefaultAjaxframeworkContent!2fcom.sap.portal.contentarea?windowId=WID{Corr_WID1}&supportInitialNavNodesFilter=true",
		"Snapshot=t9.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=sap-ext-sid", "Value={Corr_SID}", ENDITEM,
		"Name=sap-wd-cltwndid", "Value=WID{Corr_WID1}", ENDITEM,
		"Name=sap-wd-tstamp", "Value={tstamp2}", ENDITEM,
		"Name=PagePath", "Value=pcd:portal_content/com.tot.fol.HR4U/com.total.FT/com.total.roles/com.total.employee/com.total.ft_emp_ro/com.total.hp_emp_pg", ENDITEM,
		"Name=sap-wd-app-namespace", "Value=zzzz", ENDITEM,
		"Name=sap-ep-version", "Value=7.30.201211270029", ENDITEM,
		"Name=sap-locale", "Value=en", ENDITEM,
		"Name=sap-accessibility", "Value=", ENDITEM,
		"Name=sap-rtl", "Value=", ENDITEM,
		"Name=sap-explanation", "Value=null", ENDITEM,
		"Name=sap-cssurl", "Value=https://frhdstdrrgv02.main.glb.corp.local:50301/com.sap.portal.design.urdesigndata/themes/portal/hr_gc_new/ls/ls_ie6.css?v=7.33.3.15.1", ENDITEM,
		"Name=sap-cssversion", "Value=7.33.3.15.0", ENDITEM,
		"Name=sap-epcm-guid", "Value={Corr_GuiID}", ENDITEM,
		"Name=com.sap.portal.reserved.wd.pb.restart", "Value=false", ENDITEM,
		"Name=DynamicParameter", "Value=", ENDITEM,
		"Name=supportInitialNavNodesFilter", "Value=true", ENDITEM,
		"Name=NavigationTarget", "Value=navurl://9a6edbf171b81f60d0dc80bdcc27b87f", ENDITEM,
		LAST);

	
	web_url("emptyhover.html_3", 
		"URL=https://frhdstdrrgv02.main.glb.corp.local:50301/com.sap.portal.design.urdesigndata/themes/portal/hr_gc_new/common/emptyhover.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/servlet/prt/portal/prtpos/pcd!253aportal!255fcontent!252fcom!252etot!252efol!252eHR4U!252fcom!252etot!252efol!252ePortal!255fdisplay!252fcom!252etotal!252ehr4u!252fframeworkPages!252fcom!252etotal!252ehr4U!252fcom!252etotal!252eRelated!255fLinks.com!252etotal!252eLNPComponent!7brefresh!7d-/prttarget/com!252etotal!252eLNPComponent/prtroot/pcd!3aportal_content!2fcom.tot.fol.HR4U!2fcom.tot.fol.Portal_display!2fcom.total.hr4u!2fframeworkPages"
		"!2fcom.total.hr4U!2fcom.total.Related_Links", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);
	
	
	web_url("emptyhover.html_4", 
		"URL=https://frhdstdrrgv02.main.glb.corp.local:50301/com.sap.portal.design.urdesigndata/themes/portal/hr_gc_new/common/emptyhover.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/servlet/prt/portal/prtpos/pcd!253aportal!255fcontent!252fcom!252etot!252efol!252eHR4U!252fcom!252etot!252efol!252ePortal!255fdisplay!252fcom!252etotal!252ehr4u!252fframeworkPages!252fcom!252etotal!252ehr4U!252fcom!252etotal!252eRelated!255fLinks.com!252etotal!252eLNPComponent!7brefresh!7d-/prttarget/com!252etotal!252eLNPComponent/prtroot/pcd!3aportal_content!2fcom.tot.fol.HR4U!2fcom.tot.fol.Portal_display!2fcom.total.hr4u!2fframeworkPages"
		"!2fcom.total.hr4U!2fcom.total.Related_Links", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);
	// corr
	
	/*Correlation comment - Do not change!  Original value='qeotxXxmoJYKdENbdLnQ6Q--F3oWOb13x9DIVJ9adu0SCw--' Name ='CorrelationParameter' Type ='Manual'*/
	


	
	web_url("browserhistory.html", 
		"URL=https://frhdstdrrgv02.main.glb.corp.local:50301/com.sap.ui.lightspeed/js/html/browserhistory.html?bBackPrevention", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://frhdstdrrgv02.main.glb.corp.local:50301/webdynpro/resources/sap.com/pb/PageBuilder;jsessionid={Corr_Jsession}", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);
	
	
	web_save_timestamp_param("tstamp3",LAST);
	//1372419791045
	
	
		
// ;sap-ext-sid&#x3d;BOvCBTcuAvMGoBjpqrUdJQ--00kOUgPH4ILmzOQ8w9nA5A--"
// ;sap-ext-sid=BOvCBTcuAvMGoBjpqrUdJQ--00kOUgPH4ILmzOQ8w9nA5A--
//P_POR_WD_SERVICES_APP;sap-ext-sid=BOvCBTcuAvMGoBjpqrUdJQ--00kOUgPH4ILmzOQ8w9nA5A--?sap-contextid=S
/*web_reg_save_param_ex(
		"ParamName=Corr_SapExtSid2",
		"LB=;sap-ext-sid=",
		"RB=?sap-contextid=",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);*/
	
  
	
	web_url("ZP_POR_WD_SERVICES_APP;sap-ext-sid=BOvCBTcuAvMGoBjpqrUdJQ--00kOUgPH4ILmzOQ8w9nA5A--", 
		"URL=https://frhdstdrrev00.main.glb.corp.local:50001/sap/bc/webdynpro/SAP/ZP_POR_WD_SERVICES_APP;sap-ext-sid={Corr_SapExtSid1}?sap-ep-iviewhandle={Corr_SapepIviewHandle}&sap-wd-configId=&sap-ep-iviewid={Corr_SapepIviewID}&sap-ep-pcdunit={Corr_SapepPCDUnit}&sap-client=200&sap-language=EN&sap-accessibility=&sap-rtl=&sap-ep-version=7.30.201211270029&sap-wd-tstamp={tstamp3}&sap-explanation=null&sap-cssurl="
		"https%3A%2F%2Ffrhdstdrrgv02.main.glb.corp.local%3A50301%2Fcom.sap.portal.design.urdesigndata%2Fthemes%2Fportal%2Fhr_gc_new%2Fur%2Fur_ie6.css%3Fv%3D7.33.3.15.1&sap-cssversion=7.33.3.15.0&PROFILE=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/servlet/prt/portal/prtroot/com.sap.portal.pagebuilder.IviewModeProxy?iview_id=pcd%3Aportal_content%2Fcom.tot.fol.HR4U%2Fcom.total.FT%2Fcom.total.roles%2Fcom.total.employee%2Fcom.total.ft_emp_ro%2Fcom.total.hp_emp_pg%2Fcom.total.myhr4U_otherhr_iv&iview_mode=default&supportInitialNavNodesFilter=true&NavigationTarget=navurl%3A%2F%2F9a6edbf171b81f60d0dc80bdcc27b87f&ClientWindowID=WID{Corr_WID1}", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		EXTRARES, 
		
		LAST);

	web_custom_request("ZP_POR_WD_SERVICES_APP;sap-ext-sid=BOvCBTcuAvMGoBjpqrUdJQ--00kOUgPH4ILmzOQ8w9nA5A--_2", 
		"URL=https://frhdstdrrev00.main.glb.corp.local:50001/sap/bc/webdynpro/SAP/ZP_POR_WD_SERVICES_APP;sap-ext-sid={Corr_SapExtSid1}?sap-contextid=SID%3aANON%3afrhdstdrrev00_TE1_00%3aJwTliG9Um8MfHV2Ji3C6LUHVKeOy8EMgUIsWjq3a-NEW", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://frhdstdrrev00.main.glb.corp.local:50001/sap/bc/webdynpro/SAP/ZP_POR_WD_SERVICES_APP;sap-ext-sid={Corr_SapExtSid1}?sap-ep-iviewhandle={Corr_SapepIviewHandle}&sap-wd-configId=&sap-ep-iviewid={Corr_SapepIviewID}&sap-ep-pcdunit={Corr_SapepPCDUnit}&sap-client=200&sap-language=EN&sap-accessibility=&sap-rtl=&sap-ep-version=7.30.201211270029&sap-wd-tstamp={tstamp3}&sap-explanation=null&sap-cssurl="
		"https%3A%2F%2Ffrhdstdrrgv02.main.glb.corp.local%3A50301%2Fcom.sap.portal.design.urdesigndata%2Fthemes%2Fportal%2Fhr_gc_new%2Fur%2Fur_ie6.css%3Fv%3D7.33.3.15.1&sap-cssversion=7.33.3.15.0&PROFILE=1", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"Body=sap-charset=utf-8&sap-wd-secure-id=AE732BCDC182B6569F0D50D67B2815EB&SAPEVENTQUEUE=Custom_ClientInfos~E002Id~E004WD01~E005WindowOpenerExists~E004false~E005ClientURL~E004https~003A~002F~002Ffrhdstdrrev00.main.glb.corp.local~003A50001~002Fsap~002Fbc~002Fwebdynpro~002FSAP~002FZP_POR_WD_SERVICES_APP~003Bsap-ext-sid~003D{Corr_SapExtSid1}~003Fsap-ep-iviewhandle~003D007665455938~0026sap-wd-configId~003D~0026sap-ep-iviewid~003Dpcdshort~00253A~00252FUr~"
		"002B8bpx4TvoG6JO28Q7u0Z8b9ew~00253D~0026sap-ep-pcdunit~003Dpcdshort~00253A~00252FHJq5DG46cgdRF6j2kMXwnqpuoV4~00253D~0026sap-client~003D200~0026sap-language~003DEN~0026sap-accessibility~003D~0026sap-rtl~003D~0026sap-ep-version~003D7.30.201211270029~0026sap-wd-~003D{tstamp3}~0026sap-explanation~003Dnull~0026sap-cssurl~003Dhttps~00253A~00252F~00252Ffrhdstdrrgv02.main.glb.corp.local~00253A50301~00252Fcom.sap.portal.design.urdesigndata~00252Fthemes~00252Fportal~00252Fhr_gc_new~00252Fur~"
		"00252Fur_ie6.css~00253Fv~00253D7.33.3.15.1~0026sap-cssversion~003D7.33.3.15.0~0026PROFILE~003D1~E005ClientWidth~E004422~E005ClientHeight~E004220~E003~E002ClientAction~E004enqueue~E005ResponseData~E004delta~E003~E002~E003~E001LoadingPlaceHolder_Load~E002Id~E004_loadingPlaceholder_~E003~E002ResponseData~E004delta~E005ClientAction~E004submit~E003~E002~E003~E001Form_Request~E002Id~E004sap.client.SsrClient.form~E005Async~E004false~E005FocusInfo~E004~0040~007B~007D~E005Hash~E004~E005DomChanged~E004false"
		"~E005IsDirty~E004true~E003~E002ResponseData~E004delta~E003~E002~E003", 
		EXTRARES, 
	
		LAST);

	web_url("browserhistory.html_2", 
		"URL=https://frhdstdrrev00.main.glb.corp.local:50001/sap/public/bc/ur/nw7/js/html/browserhistory.html?bBackPrevention", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://frhdstdrrev00.main.glb.corp.local:50001/sap/bc/webdynpro/SAP/ZP_POR_WD_SERVICES_APP;sap-ext-sid={Corr_SapExtSid1}?sap-ep-iviewhandle={Corr_SapepIviewHandle}&sap-wd-configId=&sap-ep-iviewid={Corr_SapepIviewID}&sap-ep-pcdunit={Corr_SapepPCDUnit}&sap-client=200&sap-language=EN&sap-accessibility=&sap-rtl=&sap-ep-version=7.30.201211270029&sap-wd-tstamp={tstamp3}&sap-explanation=null&sap-cssurl="
		"https%3A%2F%2Ffrhdstdrrgv02.main.glb.corp.local%3A50301%2Fcom.sap.portal.design.urdesigndata%2Fthemes%2Fportal%2Fhr_gc_new%2Fur%2Fur_ie6.css%3Fv%3D7.33.3.15.1&sap-cssversion=7.33.3.15.0&PROFILE=1", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Logon",LR_AUTO);

	lr_start_transaction("MYHRactivities and cm Personal Administration");

	lr_think_time(6);
	
	//<input type="hidden" name="sap-ep-iviewhandle" value="0071500907221" />
	web_reg_save_param("Corr_iviewhandleID","LB=<input type=\"hidden\" name=\"sap-ep-iviewhandle\" value=\"","RB=\" />",LAST);

	web_submit_data("pcd!3aportal_content!2fevery_user!2fgeneral!2fdefaultAjaxframeworkContent!2fcom.sap.portal.contentarea_2", 
		"Action=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/servlet/prt/portal/prteventname/Navigate/prtroot/pcd!3aportal_content!2fevery_user!2fgeneral!2fdefaultAjaxframeworkContent!2fcom.sap.portal.contentarea?windowId=WID{Corr_WID1}&NavMode=0&PrevNavTarget=navurl%3A%2F%2F9a6edbf171b81f60d0dc80bdcc27b87f", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/portal", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=NavigationTarget", "Value=ROLES://portal_content/com.tot.fol.HR4U/com.total.PA/com.total.roles/com.total.hr/com.total.pa_hr_ro/CareerManager/com.total.pa_hr_ws/PA/com.total.pa_hr_admin_pg", ENDITEM, 
		"Name=Command", "Value=SUSPEND", ENDITEM, 
		"Name=SerPropString", "Value=", ENDITEM, 
		"Name=SerKeyString", "Value=GUSID%3A{Corr_SapExtSid1}", ENDITEM, 
		"Name=SerAttrKeyString", "Value=GUSID%3A{Corr_SID}&{tstamp2}", ENDITEM, 
		"Name=SerWinIdString", "Value=&", ENDITEM, 
		"Name=DebugSet", "Value=", ENDITEM, 
		"Name=Embedded", "Value=true", ENDITEM, 
		"Name=SessionKeysAvailable", "Value=true", ENDITEM, 
		EXTRARES, 
		
		LAST);

	web_url("emptyhover.html_5", 
		"URL=https://frhdstdrrgv02.main.glb.corp.local:50301/com.sap.portal.design.urdesigndata/themes/portal/hr_gc_new/common/emptyhover.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/servlet/prt/portal/prteventname/Navigate/prtroot/pcd!3aportal_content!2fevery_user!2fgeneral!2fdefaultAjaxframeworkContent!2fcom.sap.portal.contentarea?windowId=WID{Corr_WID1}&NavMode=0&PrevNavTarget=navurl%3A%2F%2F9a6edbf171b81f60d0dc80bdcc27b87f", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	web_url("emptyhover.html_6", 
		"URL=https://frhdstdrrgv02.main.glb.corp.local:50301/com.sap.portal.design.urdesigndata/themes/portal/hr_gc_new/common/emptyhover.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/servlet/prt/portal/prteventname/Navigate/prtroot/pcd!3aportal_content!2fevery_user!2fgeneral!2fdefaultAjaxframeworkContent!2fcom.sap.portal.contentarea?windowId=WID{Corr_WID1}&NavMode=0&PrevNavTarget=navurl%3A%2F%2F9a6edbf171b81f60d0dc80bdcc27b87f", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);
	
	web_save_timestamp_param("tstamp4",LAST);
	
	//{0:'sap-wd-secure-id',1:'',2:'21663E637AB282DC53DBF1C82BB5426E',
	web_reg_save_param("Corr_SecureID","LB={0:'sap-wd-secure-id',1:'',2:'","RB=',",LAST);

	web_submit_data("zp_pa_wd_mobility02_app;sap-ext-sid=BOvCBTcuAvMGoBjpqrUdJQ--gtCCoeHZMSbMLSYFJmQZ9A--", 
		"Action=https://frhdstdrrev00.main.glb.corp.local:50001/sap/bc/webdynpro/SAP/zp_pa_wd_mobility02_app;sap-ext-sid=BOvCBTcuAvMGoBjpqrUdJQ--gtCCoeHZMSbMLSYFJmQZ9A--", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/servlet/prt/portal/prteventname/Navigate/prtroot/pcd!3aportal_content!2fevery_user!2fgeneral!2fdefaultAjaxframeworkContent!2fcom.sap.portal.contentarea?windowId=WID{Corr_WID1}&NavMode=0&PrevNavTarget=navurl%3A%2F%2F9a6edbf171b81f60d0dc80bdcc27b87f", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=sap-ep-iviewhandle", "Value={Corr_iviewhandleID}", ENDITEM, //0071500907221
		"Name=sap-wd-configId", "Value=", ENDITEM, 
		"Name=sap-ep-iviewid", "Value=pcdshort:/tNeMN6RTYTUvHlBWc UnJIADGuQ=", ENDITEM, 
		"Name=sap-ep-pcdunit", "Value=pcdshort:/lXKuY2gzF4kuDgjijLiwPSdusSM=", ENDITEM, 
		"Name=sap-client", "Value=200", ENDITEM, 
		"Name=sap-language", "Value=EN", ENDITEM, 
		"Name=sap-accessibility", "Value=", ENDITEM, 
		"Name=sap-rtl", "Value=", ENDITEM, 
		"Name=sap-ep-version", "Value=7.30.201211270029", ENDITEM, 
		"Name=sap-wd-tstamp", "Value={tstamp4}", ENDITEM, //1372419859045
		"Name=sap-explanation", "Value=null", ENDITEM, 
		"Name=sap-cssurl", "Value=https://frhdstdrrgv02.main.glb.corp.local:50301/com.sap.portal.design.urdesigndata/themes/portal/hr_gc_new/ur/ur_ie6.css?v=7.33.3.15.1", ENDITEM, 
		"Name=sap-cssversion", "Value=7.33.3.15.0", ENDITEM, 
		"Name=IM_ACTOR", "Value=CM", ENDITEM, 
		LAST);

	

	web_url("pcd!3aportal_content!2fcom.tot.fol.HR4U!2fcom.tot.fol.Portal_display!2fcom.total.hr4u!2fframeworkPages!2fcom.total.hr4U!2fcom.total.Related_Links_3", 
		"URL=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/servlet/prt/portal/prtpos/pcd!253aportal!255fcontent!252fcom!252etot!252efol!252eHR4U!252fcom!252etot!252efol!252ePortal!255fdisplay!252fcom!252etotal!252ehr4u!252fframeworkPages!252fcom!252etotal!252ehr4U!252fcom!252etotal!252eRelated!255fLinks.com!252etotal!252eLNPComponent!7brefresh!7d-/prttarget/com!252etotal!252eLNPComponent/prtroot/pcd!3aportal_content!2fcom.tot.fol.HR4U!2fcom.tot.fol.Portal_display!2fcom.total.hr4u!2fframeworkPages"
		"!2fcom.total.hr4U!2fcom.total.Related_Links", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/servlet/prt/portal/prtpos/pcd!253aportal!255fcontent!252fcom!252etot!252efol!252eHR4U!252fcom!252etot!252efol!252ePortal!255fdisplay!252fcom!252etotal!252ehr4u!252fframeworkPages!252fcom!252etotal!252ehr4U!252fcom!252etotal!252eRelated!255fLinks.com!252etotal!252eLNPComponent!7brefresh!7d-/prttarget/com!252etotal!252eLNPComponent/prtroot/pcd!3aportal_content!2fcom.tot.fol.HR4U!2fcom.tot.fol.Portal_display!2fcom.total.hr4u!2fframeworkPages"
		"!2fcom.total.hr4U!2fcom.total.Related_Links", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	web_url("browserhistory.html_3", 
		"URL=https://frhdstdrrev00.main.glb.corp.local:50001/sap/public/bc/ur/nw7/js/html/browserhistory.html?bBackPrevention", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://frhdstdrrev00.main.glb.corp.local:50001/sap/bc/webdynpro/SAP/zp_pa_wd_mobility02_app;sap-ext-sid=BOvCBTcuAvMGoBjpqrUdJQ--gtCCoeHZMSbMLSYFJmQZ9A--", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	web_url("emptyhover.html_7", 
		"URL=https://frhdstdrrgv02.main.glb.corp.local:50301/com.sap.portal.design.urdesigndata/themes/portal/hr_gc_new/common/emptyhover.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/servlet/prt/portal/prtpos/pcd!253aportal!255fcontent!252fcom!252etot!252efol!252eHR4U!252fcom!252etot!252efol!252ePortal!255fdisplay!252fcom!252etotal!252ehr4u!252fframeworkPages!252fcom!252etotal!252ehr4U!252fcom!252etotal!252eRelated!255fLinks.com!252etotal!252eLNPComponent!7brefresh!7d-/prttarget/com!252etotal!252eLNPComponent/prtroot/pcd!3aportal_content!2fcom.tot.fol.HR4U!2fcom.tot.fol.Portal_display!2fcom.total.hr4u!2fframeworkPages"
		"!2fcom.total.hr4U!2fcom.total.Related_Links", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	web_url("emptyhover.html_8", 
		"URL=https://frhdstdrrgv02.main.glb.corp.local:50301/com.sap.portal.design.urdesigndata/themes/portal/hr_gc_new/common/emptyhover.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/servlet/prt/portal/prtpos/pcd!253aportal!255fcontent!252fcom!252etot!252efol!252eHR4U!252fcom!252etot!252efol!252ePortal!255fdisplay!252fcom!252etotal!252ehr4u!252fframeworkPages!252fcom!252etotal!252ehr4U!252fcom!252etotal!252eRelated!255fLinks.com!252etotal!252eLNPComponent!7brefresh!7d-/prttarget/com!252etotal!252eLNPComponent/prtroot/pcd!3aportal_content!2fcom.tot.fol.HR4U!2fcom.tot.fol.Portal_display!2fcom.total.hr4u!2fframeworkPages"
		"!2fcom.total.hr4U!2fcom.total.Related_Links", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

	

	web_custom_request("zp_pa_wd_mobility02_app;sap-ext-sid=BOvCBTcuAvMGoBjpqrUdJQ--gtCCoeHZMSbMLSYFJmQZ9A--_2", 
		"URL=https://frhdstdrrev00.main.glb.corp.local:50001/sap/bc/webdynpro/SAP/zp_pa_wd_mobility02_app;sap-ext-sid=BOvCBTcuAvMGoBjpqrUdJQ--gtCCoeHZMSbMLSYFJmQZ9A--?sap-contextid=SID%3aANON%3afrhdstdrrev00_TE1_00%3aJwTl57QWtwvOub8ntE-bgxYGteOy8EMrUIvNlKoE-NEW", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://frhdstdrrev00.main.glb.corp.local:50001/sap/bc/webdynpro/SAP/zp_pa_wd_mobility02_app;sap-ext-sid=BOvCBTcuAvMGoBjpqrUdJQ--gtCCoeHZMSbMLSYFJmQZ9A--", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		"Body=sap-charset=utf-8&sap-wd-secure-id={Corr_SecureID}&SAPEVENTQUEUE=Custom_ClientInfos~E002Id~E004WD01~E005WindowOpenerExists~E004false~E005ClientURL~E004https~003A~002F~002Ffrhdstdrrev00.main.glb.corp.local~003A50001~002Fsap~002Fbc~002Fwebdynpro~002FSAP~002Fzp_pa_wd_mobility02_app~003Bsap-ext-sid~003DBOvCBTcuAvMGoBjpqrUdJQ--gtCCoeHZMSbMLSYFJmQZ9A--~E005ClientWidth~E0041232~E005ClientHeight~E004683~E003~E002ClientAction~E004enqueue~E005ResponseData~E004delta~E003~E002~E003~"
		"E001LoadingPlaceHolder_Load~E002Id~E004_loadingPlaceholder_~E003~E002ResponseData~E004delta~E005ClientAction~E004submit~E003~E002~E003~E001Form_Request~E002Id~E004sap.client.SsrClient.form~E005Async~E004false~E005FocusInfo~E004~0040~007B~007D~E005Hash~E004~E005DomChanged~E004false~E005IsDirty~E004true~E003~E002ResponseData~E004delta~E003~E002~E003", 
		EXTRARES, 
		LAST);

	lr_end_transaction("MYHRactivities and cm Personal Administration",LR_AUTO);

	lr_start_transaction("Log Out");

	web_submit_data("com.sap.portal.navigation.masthead.LogOutComponent", 
		"Action=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/servlet/prt/portal/prtroot/com.sap.portal.navigation.masthead.LogOutComponent?logout_submit=true", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/portal", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=logout_submit", "Value=1", ENDITEM, 
		LAST);

	web_submit_data("com.sap.portal.dsm.Terminator", 
		"Action=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/servlet/prt/portal/prtroot/com.sap.portal.dsm.Terminator", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/portal", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=Command", "Value=ABORT", ENDITEM, 
		"Name=SerPropString", "Value=", ENDITEM, 
		"Name=SerKeyString", "Value=&GUSID%3ABOvCBTcuAvMGoBjpqrUdJQ--gtCCoeHZMSbMLSYFJmQZ9A--", ENDITEM, 
		"Name=SerAttrKeyString", "Value=GUSID%3A{Corr_SID}&{tstamp2}", ENDITEM, 
		"Name=SerWinIdString", "Value=", ENDITEM, 
		"Name=Autoclose", "Value=1000", ENDITEM, 
		"Name=DebugSet", "Value=", ENDITEM, 
		EXTRARES, 
		LAST);

	web_custom_request("zp_pa_wd_mobility02_app;sap-ext-sid=BOvCBTcuAvMGoBjpqrUdJQ--gtCCoeHZMSbMLSYFJmQZ9A--_3", 
		"URL=https://frhdstdrrev00.main.glb.corp.local:50001/sap/bc/webdynpro/SAP/zp_pa_wd_mobility02_app;sap-ext-sid=BOvCBTcuAvMGoBjpqrUdJQ--gtCCoeHZMSbMLSYFJmQZ9A--?sap-contextid=SID%3aANON%3afrhdstdrrev00_TE1_00%3aJwTl57QWtwvOub8ntE-bgxYGteOy8EMrUIvNlKoE-NEW", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://frhdstdrrev00.main.glb.corp.local:50001/sap/bc/webdynpro/SAP/zp_pa_wd_mobility02_app;sap-ext-sid=BOvCBTcuAvMGoBjpqrUdJQ--gtCCoeHZMSbMLSYFJmQZ9A--", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"Body=sap-charset=utf-8&sap-wd-secure-id={Corr_SecureID}&SAPEVENTQUEUE=ImageMap_ImageMapClick~E002Id~E004WD60~E005AreaId~E004WD61~E003~E002ResponseData~E004delta~E005ClientAction~E004submit~E003~E002~E003~E001Form_Request~E002Id~E004sap.client.SsrClient.form~E005Async~E004false~E005FocusInfo~E004~0040~007B~0022sFocussedId~0022~003A~0020~0022WD61~0022~007D~E005Hash~E004~E005DomChanged~E004false~E005IsDirty~E004false~E003~E002ResponseData~E004delta~E003~E002~E003", 
		LAST);

	web_url("zp_pa_wd_mobility02_app;sap-ext-sid=BOvCBTcuAvMGoBjpqrUdJQ--gtCCoeHZMSbMLSYFJmQZ9A--_4", 
		"URL=https://frhdstdrrev00.main.glb.corp.local:50001/sap/bc/webdynpro/SAP/zp_pa_wd_mobility02_app;sap-ext-sid=BOvCBTcuAvMGoBjpqrUdJQ--gtCCoeHZMSbMLSYFJmQZ9A--?sap-ep-iviewhandle={Corr_iviewhandleID}&&sap-wd-tstamp={tstamp4}&sap-sessioncmd=USR_ABORT&~SAPSessionCmd=USR_ABORT&SAPWP_ACTIVE=1&dsmguid=1372419889878", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/servlet/prt/portal/prtroot/com.sap.portal.dsm.Terminator", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Log Out",LR_AUTO);

	return 0;
}
