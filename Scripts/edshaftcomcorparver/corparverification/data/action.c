Action()
{

	web_url("ed.shaft.com", 
		"URL=http://ed.shaft.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	addDynaTraceHeader("NA=;PC=login");
	web_custom_request("login", 
		"URL=http://ed.shaft.com/c/portal/login?p_l_id=12008&windowState=exclusive", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://ed.shaft.com/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	addDynaTraceHeader("NA=;PC=2");
	web_submit_data("2", 
		"Action=http://ed.shaft.com/web/guest/2?p_p_id=58&p_p_lifecycle=1&p_p_state=exclusive&p_p_mode=view&_58_struts_action=%2Flogin%2Flogin", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ed.shaft.com/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=_58_formDate", "Value=1546938956930", ENDITEM, 
		"Name=_58_saveLastPath", "Value=false", ENDITEM, 
		"Name=_58_redirect", "Value=", ENDITEM, 
		"Name=_58_doActionAfterLogin", "Value=false", ENDITEM, 
		"Name=_58_login", "Value=administrator@shaft.com", ENDITEM, 
		"Name=_58_password", "Value=Sh@ft123", ENDITEM, 
		"Name=_58_rememberMe", "Value=false", ENDITEM, 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	addDynaTraceHeader("NA=;PC=receive");
	web_submit_data("receive", 
		"Action=http://ed.shaft.com/poller/receive", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=http://ed.shaft.com/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=pollerRequest", "Value=[{\"browserKey\":1192128549978,\"companyId\":\"10154\",\"portletIdsMap\":{\"2_WAR_notificationsportlet\":true},\"startPolling\":true,\"userId\":\"CAG7z/qXJLy16B3HAeghAw==\",\"timestamp\":1546938958975}]", ENDITEM, 
		LAST);

	addDynaTraceHeader("NA=;PC=receive_2");
	web_submit_data("receive_2", 
		"Action=http://ed.shaft.com/poller/receive", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=http://ed.shaft.com/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=pollerRequest", "Value=[{\"browserKey\":1192128549978,\"companyId\":\"10154\",\"portletIdsMap\":{\"2_WAR_notificationsportlet\":false},\"userId\":\"CAG7z/qXJLy16B3HAeghAw==\",\"timestamp\":1546938962127}]", ENDITEM, 
		LAST);

	addDynaTraceHeader("NA=;PC=receive_3");
	web_submit_data("receive_3", 
		"Action=http://ed.shaft.com/poller/receive", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=http://ed.shaft.com/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=pollerRequest", "Value=[{\"browserKey\":1192128549978,\"companyId\":\"10154\",\"portletIdsMap\":{\"2_WAR_notificationsportlet\":false},\"startPolling\":true,\"userId\":\"CAG7z/qXJLy16B3HAeghAw==\",\"timestamp\":1546938963585}]", ENDITEM, 
		LAST);

	addDynaTraceHeader("NA=;PC=receive_4");
	web_submit_data("receive_4", 
		"Action=http://ed.shaft.com/poller/receive", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=http://ed.shaft.com/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=pollerRequest", "Value=[{\"browserKey\":1192128549978,\"companyId\":\"10154\",\"portletIdsMap\":{\"2_WAR_notificationsportlet\":false},\"startPolling\":true,\"userId\":\"CAG7z/qXJLy16B3HAeghAw==\",\"timestamp\":1546938965573}]", ENDITEM, 
		LAST);

	web_revert_auto_header("X-Requested-With");

	addDynaTraceHeader("NA=;PC=control_panel");
	web_url("control_panel", 
		"URL=http://ed.shaft.com/group/control_panel?refererPlid=12008&doAsGroupId=10181&controlPanelCategory=current_site.configuration", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://ed.shaft.com/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	addDynaTraceHeader("NA=;PC=WorkflowConfigurationWorkflowConfiguration");
	web_url("Workflow Configuration Workflow Configuration", 
		"URL=http://ed.shaft.com/group/control_panel/manage?p_p_id=152&p_p_lifecycle=0&p_p_state=maximized&p_p_mode=view&doAsGroupId=10181&refererPlid=12008&controlPanelCategory=current_site.configuration", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://ed.shaft.com/group/control_panel?refererPlid=12008&doAsGroupId=10181&controlPanelCategory=current_site.configuration&p_p_id=165", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	addDynaTraceHeader("NA=;PC=receive_5");
	web_submit_data("receive_5", 
		"Action=http://ed.shaft.com/poller/receive", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=http://ed.shaft.com/group/control_panel/manage?p_p_id=152&p_p_lifecycle=0&p_p_state=maximized&p_p_mode=view&doAsGroupId=10181&refererPlid=12008&controlPanelCategory=current_site.configuration", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=pollerRequest", "Value=[{\"browserKey\":1226502795842,\"companyId\":\"10154\",\"portletIdsMap\":{\"2_WAR_notificationsportlet\":true},\"startPolling\":true,\"userId\":\"CAG7z/qXJLy16B3HAeghAw==\",\"timestamp\":1546938979358}]", ENDITEM, 
		LAST);

	addDynaTraceHeader("NA=;PC=receive_6");
	web_submit_data("receive_6", 
		"Action=http://ed.shaft.com/poller/receive", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=http://ed.shaft.com/group/control_panel/manage?p_p_id=152&p_p_lifecycle=0&p_p_state=maximized&p_p_mode=view&doAsGroupId=10181&refererPlid=12008&controlPanelCategory=current_site.configuration", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=pollerRequest", "Value=[{\"browserKey\":1226502795842,\"companyId\":\"10154\",\"portletIdsMap\":{\"2_WAR_notificationsportlet\":true},\"startPolling\":true,\"userId\":\"CAG7z/qXJLy16B3HAeghAw==\",\"timestamp\":1546938981254}]", ENDITEM, 
		LAST);

	addDynaTraceHeader("NA=;PC=receive_7");
	web_submit_data("receive_7", 
		"Action=http://ed.shaft.com/poller/receive", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=http://ed.shaft.com/group/control_panel/manage?p_p_id=152&p_p_lifecycle=0&p_p_state=maximized&p_p_mode=view&doAsGroupId=10181&refererPlid=12008&controlPanelCategory=current_site.configuration", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=pollerRequest", "Value=[{\"browserKey\":1226502795842,\"companyId\":\"10154\",\"portletIdsMap\":{\"2_WAR_notificationsportlet\":true},\"startPolling\":true,\"userId\":\"CAG7z/qXJLy16B3HAeghAw==\",\"timestamp\":1546938987126}]", ENDITEM, 
		LAST);

	addDynaTraceHeader("NA=;PC=receive_8");
	web_submit_data("receive_8", 
		"Action=http://ed.shaft.com/poller/receive", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=http://ed.shaft.com/group/control_panel/manage?p_p_id=152&p_p_lifecycle=0&p_p_state=maximized&p_p_mode=view&doAsGroupId=10181&refererPlid=12008&controlPanelCategory=current_site.configuration", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=pollerRequest", "Value=[{\"browserKey\":1226502795842,\"companyId\":\"10154\",\"portletIdsMap\":{\"2_WAR_notificationsportlet\":true},\"startPolling\":true,\"userId\":\"CAG7z/qXJLy16B3HAeghAw==\",\"timestamp\":1546938992349}]", ENDITEM, 
		LAST);

	addDynaTraceHeader("NA=;PC=receive_9");
	web_submit_data("receive_9", 
		"Action=http://ed.shaft.com/poller/receive", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=http://ed.shaft.com/group/control_panel/manage?p_p_id=152&p_p_lifecycle=0&p_p_state=maximized&p_p_mode=view&doAsGroupId=10181&refererPlid=12008&controlPanelCategory=current_site.configuration", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=pollerRequest", "Value=[{\"browserKey\":1226502795842,\"companyId\":\"10154\",\"portletIdsMap\":{\"2_WAR_notificationsportlet\":true},\"userId\":\"CAG7z/qXJLy16B3HAeghAw==\",\"timestamp\":1546938998219}]", ENDITEM, 
		LAST);

	addDynaTraceHeader("NA=;PC=receive_10");
	web_submit_data("receive_10", 
		"Action=http://ed.shaft.com/poller/receive", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=http://ed.shaft.com/group/control_panel/manage?p_p_id=152&p_p_lifecycle=0&p_p_state=maximized&p_p_mode=view&doAsGroupId=10181&refererPlid=12008&controlPanelCategory=current_site.configuration", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=pollerRequest", "Value=[{\"browserKey\":1226502795842,\"companyId\":\"10154\",\"portletIdsMap\":{\"2_WAR_notificationsportlet\":true},\"startPolling\":true,\"userId\":\"CAG7z/qXJLy16B3HAeghAw==\",\"timestamp\":1546939001648}]", ENDITEM, 
		LAST);

	lr_think_time(11);

	addDynaTraceHeader("NA=;PC=receive_11");
	web_submit_data("receive_11", 
		"Action=http://ed.shaft.com/poller/receive", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=http://ed.shaft.com/group/control_panel/manage?p_p_id=152&p_p_lifecycle=0&p_p_state=maximized&p_p_mode=view&doAsGroupId=10181&refererPlid=12008&controlPanelCategory=current_site.configuration", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=pollerRequest", "Value=[{\"browserKey\":1226502795842,\"companyId\":\"10154\",\"portletIdsMap\":{\"2_WAR_notificationsportlet\":true},\"startPolling\":true,\"userId\":\"CAG7z/qXJLy16B3HAeghAw==\",\"timestamp\":1546939015081}]", ENDITEM, 
		LAST);

	web_revert_auto_header("X-Requested-With");

	addDynaTraceHeader("NA=;PC=manage");
	web_submit_data("manage", 
		"Action=http://ed.shaft.com/group/control_panel/manage?p_auth=hBEPoKVR&p_p_id=152&p_p_lifecycle=1&p_p_state=maximized&p_p_mode=view&doAsGroupId=10181&refererPlid=12008&controlPanelCategory=current_site.configuration&_152_struts_action=%2Fworkflow_definition_links%2Fedit_workflow_definition_link", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ed.shaft.com/group/control_panel/manage?p_p_id=152&p_p_lifecycle=0&p_p_state=maximized&p_p_mode=view&doAsGroupId=10181&refererPlid=12008&controlPanelCategory=current_site.configuration", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=_152_formDate", "Value=1546939012852", ENDITEM, 
		"Name=_152_redirect", "Value=http://ed.shaft.com/group/control_panel/manage?p_p_id=152&p_p_lifecycle=0&p_p_state=maximized&p_p_mode=view&doAsGroupId=10181&refererPlid=12008&controlPanelCategory=current_site.configuration", ENDITEM, 
		"Name=_152_groupId", "Value=10181", ENDITEM, 
		"Name=_152_workflowDefinitionName@com.liferay.portal.model.LayoutRevision", "Value=", ENDITEM, 
		"Name=_152_workflowDefinitionName@com.liferay.portlet.blogs.model.BlogsEntry", "Value=", ENDITEM, 
		"Name=_152_workflowDefinitionName@com.liferay.portlet.journal.model.JournalArticle", "Value=", ENDITEM, 
		"Name=_152_workflowDefinitionName@com.liferay.portlet.messageboards.model.MBDiscussion", "Value=", ENDITEM, 
		"Name=_152_workflowDefinitionName@com.liferay.portlet.messageboards.model.MBMessage", "Value=Single Approver@1", ENDITEM, 
		"Name=_152_workflowDefinitionName@com.liferay.portlet.wiki.model.WikiPage", "Value=Single Approver@1", ENDITEM, 
		"Name=_152_workflowHandlersSearchContainerPrimaryKeys", "Value=com.liferay.portal.workflow.LayoutRevisionWorkflowHandler@7ece26d1,com.liferay.portlet.blogs.workflow.BlogsEntryWorkflowHandler@8023b09,com.liferay.portlet.journal.workflow.JournalArticleWorkflowHandler@2b4bfce0,com.liferay.portlet.messageboards.workflow.MBDiscussionWorkflowHandler@1aa3c543,com.liferay.portlet.messageboards.workflow.MBMessageWorkflowHandler@28ca428f,com.liferay.portlet.wiki.workflow.WikiPageWorkflowHandler@657e301a", ENDITEM, 
		"Name=_152_workflowHandlersSearchContainer_1PrimaryKeys", "Value=com.liferay.portlet.documentlibrary.workflow.DLFileEntryWorkflowHandler@3407815c,com.liferay.portlet.dynamicdatalists.workflow.DDLRecordWorkflowHandler@454fcbb2", ENDITEM, 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	addDynaTraceHeader("NA=;PC=receive_12");
	web_submit_data("receive_12", 
		"Action=http://ed.shaft.com/poller/receive", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=http://ed.shaft.com/group/control_panel/manage?p_auth=hBEPoKVR&p_p_id=152&p_p_lifecycle=1&p_p_state=maximized&p_p_mode=view&doAsGroupId=10181&refererPlid=12008&controlPanelCategory=current_site.configuration&_152_struts_action=%2Fworkflow_definition_links%2Fedit_workflow_definition_link", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=pollerRequest", "Value=[{\"browserKey\":1322242158875,\"companyId\":\"10154\",\"portletIdsMap\":{\"2_WAR_notificationsportlet\":true},\"startPolling\":true,\"userId\":\"CAG7z/qXJLy16B3HAeghAw==\",\"timestamp\":1546939022556}]", ENDITEM, 
		LAST);

	addDynaTraceHeader("NA=;PC=receive_13");
	web_submit_data("receive_13", 
		"Action=http://ed.shaft.com/poller/receive", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=http://ed.shaft.com/group/control_panel/manage?p_auth=hBEPoKVR&p_p_id=152&p_p_lifecycle=1&p_p_state=maximized&p_p_mode=view&doAsGroupId=10181&refererPlid=12008&controlPanelCategory=current_site.configuration&_152_struts_action=%2Fworkflow_definition_links%2Fedit_workflow_definition_link", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=pollerRequest", "Value=[{\"browserKey\":1322242158875,\"companyId\":\"10154\",\"portletIdsMap\":{\"2_WAR_notificationsportlet\":true},\"startPolling\":true,\"userId\":\"CAG7z/qXJLy16B3HAeghAw==\",\"timestamp\":1546939026098}]", ENDITEM, 
		LAST);

	addDynaTraceHeader("NA=;PC=receive_14");
	web_submit_data("receive_14", 
		"Action=http://ed.shaft.com/poller/receive", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=http://ed.shaft.com/group/control_panel/manage?p_auth=hBEPoKVR&p_p_id=152&p_p_lifecycle=1&p_p_state=maximized&p_p_mode=view&doAsGroupId=10181&refererPlid=12008&controlPanelCategory=current_site.configuration&_152_struts_action=%2Fworkflow_definition_links%2Fedit_workflow_definition_link", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=pollerRequest", "Value=[{\"browserKey\":1322242158875,\"companyId\":\"10154\",\"portletIdsMap\":{\"2_WAR_notificationsportlet\":true},\"userId\":\"CAG7z/qXJLy16B3HAeghAw==\",\"timestamp\":1546939028150}]", ENDITEM, 
		LAST);

	web_revert_auto_header("X-Requested-With");

	addDynaTraceHeader("NA=;PC=logout");
	web_url("logout", 
		"URL=http://ed.shaft.com/c/portal/logout", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://ed.shaft.com/group/control_panel/manage?p_auth=hBEPoKVR&p_p_id=152&p_p_lifecycle=1&p_p_state=maximized&p_p_mode=view&doAsGroupId=10181&refererPlid=12008&controlPanelCategory=current_site.configuration&_152_struts_action=%2Fworkflow_definition_links%2Fedit_workflow_definition_link", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	addDynaTraceHeader("NA=;PC=c");
	web_url("c", 
		"URL=http://ed.shaft.com/c", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://ed.shaft.com/c/portal/logout", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}