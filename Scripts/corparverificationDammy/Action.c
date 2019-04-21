Action()
{

	web_url("ed.shaft.com", 
		"URL=http://ed.shaft.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("login", 
		"URL=http://ed.shaft.com/c/portal/login?p_l_id=12008&windowState=exclusive", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://ed.shaft.com/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_submit_data("2", 
		"Action=http://ed.shaft.com/web/guest/2?p_p_id=58&p_p_lifecycle=1&p_p_state=exclusive&p_p_mode=view&_58_struts_action=%2Flogin%2Flogin", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ed.shaft.com/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=_58_formDate", "Value=1546943545645", ENDITEM, 
		"Name=_58_saveLastPath", "Value=false", ENDITEM, 
		"Name=_58_redirect", "Value=", ENDITEM, 
		"Name=_58_doActionAfterLogin", "Value=false", ENDITEM, 
		"Name=_58_login", "Value=administrator@shaft.com", ENDITEM, 
		"Name=_58_password", "Value=Sh@ft123", ENDITEM, 
		"Name=_58_rememberMe", "Value=false", ENDITEM, 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("receive", 
		"Action=http://ed.shaft.com/poller/receive", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=http://ed.shaft.com/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=pollerRequest", "Value=[{\"browserKey\":50421562392,\"companyId\":\"10154\",\"portletIdsMap\":{\"2_WAR_notificationsportlet\":true},\"startPolling\":true,\"userId\":\"CAG7z/qXJLy16B3HAeghAw==\",\"timestamp\":1546943565610}]", ENDITEM, 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_submit_data("receive_2", 
		"Action=http://ed.shaft.com/poller/receive", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=http://ed.shaft.com/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=pollerRequest", "Value=[{\"browserKey\":50421562392,\"companyId\":\"10154\",\"portletIdsMap\":{\"2_WAR_notificationsportlet\":true},\"userId\":\"CAG7z/qXJLy16B3HAeghAw==\",\"timestamp\":1546943568825}]", ENDITEM, 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("receive_3", 
		"Action=http://ed.shaft.com/poller/receive", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=http://ed.shaft.com/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=pollerRequest", "Value=[{\"browserKey\":50421562392,\"companyId\":\"10154\",\"portletIdsMap\":{\"2_WAR_notificationsportlet\":false},\"userId\":\"CAG7z/qXJLy16B3HAeghAw==\",\"timestamp\":1546943572065}]", ENDITEM, 
		LAST);

	web_submit_data("receive_4", 
		"Action=http://ed.shaft.com/poller/receive", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=http://ed.shaft.com/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=pollerRequest", "Value=[{\"browserKey\":50421562392,\"companyId\":\"10154\",\"portletIdsMap\":{\"2_WAR_notificationsportlet\":false},\"userId\":\"CAG7z/qXJLy16B3HAeghAw==\",\"timestamp\":1546943576008}]", ENDITEM, 
		LAST);

	web_submit_data("receive_5", 
		"Action=http://ed.shaft.com/poller/receive", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=http://ed.shaft.com/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=pollerRequest", "Value=[{\"browserKey\":50421562392,\"companyId\":\"10154\",\"portletIdsMap\":{\"2_WAR_notificationsportlet\":false},\"startPolling\":true,\"userId\":\"CAG7z/qXJLy16B3HAeghAw==\",\"timestamp\":1546943578189}]", ENDITEM, 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("control_panel", 
		"URL=http://ed.shaft.com/group/control_panel?refererPlid=12008&doAsGroupId=10181&controlPanelCategory=current_site.configuration", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://ed.shaft.com/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("receive_6", 
		"Action=http://ed.shaft.com/poller/receive", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=http://ed.shaft.com/group/control_panel?refererPlid=12008&doAsGroupId=10181&controlPanelCategory=current_site.configuration&p_p_id=165", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=pollerRequest", "Value=[{\"browserKey\":1200908711579,\"companyId\":\"10154\",\"portletIdsMap\":{\"2_WAR_notificationsportlet\":true},\"startPolling\":true,\"userId\":\"CAG7z/qXJLy16B3HAeghAw==\",\"timestamp\":1546943589843}]", ENDITEM, 
		LAST);

	web_submit_data("receive_7", 
		"Action=http://ed.shaft.com/poller/receive", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=http://ed.shaft.com/group/control_panel?refererPlid=12008&doAsGroupId=10181&controlPanelCategory=current_site.configuration&p_p_id=165", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=pollerRequest", "Value=[{\"browserKey\":1200908711579,\"companyId\":\"10154\",\"portletIdsMap\":{\"2_WAR_notificationsportlet\":true},\"userId\":\"CAG7z/qXJLy16B3HAeghAw==\",\"timestamp\":1546943593149}]", ENDITEM, 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("manage", 
		"URL=http://ed.shaft.com/group/control_panel/manage?p_p_auth=LNpeqsjv&p_p_id=178&p_p_lifecycle=0&p_p_state=maximized&p_p_mode=view&doAsGroupId=10181&refererPlid=12008&controlPanelCategory=current_site.configuration", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://ed.shaft.com/group/control_panel?refererPlid=12008&doAsGroupId=10181&controlPanelCategory=current_site.configuration&p_p_id=165", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("receive_8", 
		"Action=http://ed.shaft.com/poller/receive", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=http://ed.shaft.com/group/control_panel/manage?p_p_auth=LNpeqsjv&p_p_id=178&p_p_lifecycle=0&p_p_state=maximized&p_p_mode=view&doAsGroupId=10181&refererPlid=12008&controlPanelCategory=current_site.configuration", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=pollerRequest", "Value=[{\"browserKey\":135721880476,\"companyId\":\"10154\",\"portletIdsMap\":{\"2_WAR_notificationsportlet\":true},\"startPolling\":true,\"userId\":\"CAG7z/qXJLy16B3HAeghAw==\",\"timestamp\":1546943599007}]", ENDITEM, 
		LAST);

	web_url("manage_2", 
		"URL=http://ed.shaft.com/group/control_panel/manage?p_p_id=152&p_p_lifecycle=0&p_p_state=maximized&p_p_mode=view&doAsGroupId=10181&refererPlid=12008&controlPanelCategory=current_site.configuration", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://ed.shaft.com/group/control_panel/manage?p_p_auth=LNpeqsjv&p_p_id=178&p_p_lifecycle=0&p_p_state=maximized&p_p_mode=view&doAsGroupId=10181&refererPlid=12008&controlPanelCategory=current_site.configuration", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("receive_9", 
		"Action=http://ed.shaft.com/poller/receive", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=http://ed.shaft.com/group/control_panel/manage?p_p_auth=LNpeqsjv&p_p_id=178&p_p_lifecycle=0&p_p_state=maximized&p_p_mode=view&doAsGroupId=10181&refererPlid=12008&controlPanelCategory=current_site.configuration", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=pollerRequest", "Value=[{\"browserKey\":135721880476,\"companyId\":\"10154\",\"portletIdsMap\":{\"2_WAR_notificationsportlet\":true},\"userId\":\"CAG7z/qXJLy16B3HAeghAw==\",\"timestamp\":1546943602154}]", ENDITEM, 
		LAST);

	web_submit_data("receive_10", 
		"Action=http://ed.shaft.com/poller/receive", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=http://ed.shaft.com/group/control_panel/manage?p_p_id=152&p_p_lifecycle=0&p_p_state=maximized&p_p_mode=view&doAsGroupId=10181&refererPlid=12008&controlPanelCategory=current_site.configuration", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=pollerRequest", "Value=[{\"browserKey\":1514453559567,\"companyId\":\"10154\",\"portletIdsMap\":{\"2_WAR_notificationsportlet\":true},\"startPolling\":true,\"userId\":\"CAG7z/qXJLy16B3HAeghAw==\",\"timestamp\":1546943606876}]", ENDITEM, 
		LAST);

	web_submit_data("receive_11", 
		"Action=http://ed.shaft.com/poller/receive", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=http://ed.shaft.com/group/control_panel/manage?p_p_id=152&p_p_lifecycle=0&p_p_state=maximized&p_p_mode=view&doAsGroupId=10181&refererPlid=12008&controlPanelCategory=current_site.configuration", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=pollerRequest", "Value=[{\"browserKey\":1514453559567,\"companyId\":\"10154\",\"portletIdsMap\":{\"2_WAR_notificationsportlet\":false},\"userId\":\"CAG7z/qXJLy16B3HAeghAw==\",\"timestamp\":1546943610505}]", ENDITEM, 
		LAST);

	web_submit_data("receive_12", 
		"Action=http://ed.shaft.com/poller/receive", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=http://ed.shaft.com/group/control_panel/manage?p_p_id=152&p_p_lifecycle=0&p_p_state=maximized&p_p_mode=view&doAsGroupId=10181&refererPlid=12008&controlPanelCategory=current_site.configuration", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=pollerRequest", "Value=[{\"browserKey\":1514453559567,\"companyId\":\"10154\",\"portletIdsMap\":{\"2_WAR_notificationsportlet\":false},\"startPolling\":true,\"userId\":\"CAG7z/qXJLy16B3HAeghAw==\",\"timestamp\":1546943615523}]", ENDITEM, 
		LAST);

	web_submit_data("receive_13", 
		"Action=http://ed.shaft.com/poller/receive", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=http://ed.shaft.com/group/control_panel/manage?p_p_id=152&p_p_lifecycle=0&p_p_state=maximized&p_p_mode=view&doAsGroupId=10181&refererPlid=12008&controlPanelCategory=current_site.configuration", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=pollerRequest", "Value=[{\"browserKey\":1514453559567,\"companyId\":\"10154\",\"portletIdsMap\":{\"2_WAR_notificationsportlet\":false},\"startPolling\":true,\"userId\":\"CAG7z/qXJLy16B3HAeghAw==\",\"timestamp\":1546943620460}]", ENDITEM, 
		LAST);

	web_submit_data("receive_14", 
		"Action=http://ed.shaft.com/poller/receive", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=http://ed.shaft.com/group/control_panel/manage?p_p_id=152&p_p_lifecycle=0&p_p_state=maximized&p_p_mode=view&doAsGroupId=10181&refererPlid=12008&controlPanelCategory=current_site.configuration", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=pollerRequest", "Value=[{\"browserKey\":1514453559567,\"companyId\":\"10154\",\"portletIdsMap\":{\"2_WAR_notificationsportlet\":false},\"userId\":\"CAG7z/qXJLy16B3HAeghAw==\",\"timestamp\":1546943626024}]", ENDITEM, 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_submit_data("manage_3", 
		"Action=http://ed.shaft.com/group/control_panel/manage?p_auth=98UwHOXH&p_p_id=152&p_p_lifecycle=1&p_p_state=maximized&p_p_mode=view&doAsGroupId=10181&refererPlid=12008&controlPanelCategory=current_site.configuration&_152_struts_action=%2Fworkflow_definition_links%2Fedit_workflow_definition_link", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://ed.shaft.com/group/control_panel/manage?p_p_id=152&p_p_lifecycle=0&p_p_state=maximized&p_p_mode=view&doAsGroupId=10181&refererPlid=12008&controlPanelCategory=current_site.configuration", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=_152_formDate", "Value=1546943640187", ENDITEM, 
		"Name=_152_redirect", "Value=http://ed.shaft.com/group/control_panel/manage?p_p_id=152&p_p_lifecycle=0&p_p_state=maximized&p_p_mode=view&doAsGroupId=10181&refererPlid=12008&controlPanelCategory=current_site.configuration", ENDITEM, 
		"Name=_152_groupId", "Value=10181", ENDITEM, 
		"Name=_152_workflowDefinitionName@com.liferay.portal.model.LayoutRevision", "Value=", ENDITEM, 
		"Name=_152_workflowDefinitionName@com.liferay.portlet.blogs.model.BlogsEntry", "Value=", ENDITEM, 
		"Name=_152_workflowDefinitionName@com.liferay.portlet.journal.model.JournalArticle", "Value=", ENDITEM, 
		"Name=_152_workflowDefinitionName@com.liferay.portlet.messageboards.model.MBDiscussion", "Value=", ENDITEM, 
		"Name=_152_workflowDefinitionName@com.liferay.portlet.messageboards.model.MBMessage", "Value=Single Approver@1", ENDITEM, 
		"Name=_152_workflowDefinitionName@com.liferay.portlet.wiki.model.WikiPage", "Value=Single Approver@1", ENDITEM, 
		"Name=_152_workflowHandlersSearchContainerPrimaryKeys", "Value=com.liferay.portal.workflow.LayoutRevisionWorkflowHandler@4ddb08f0,com.liferay.portlet.blogs.workflow.BlogsEntryWorkflowHandler@2556d489,com.liferay.portlet.journal.workflow.JournalArticleWorkflowHandler@2ea5058,com.liferay.portlet.messageboards.workflow.MBDiscussionWorkflowHandler@16148986,com.liferay.portlet.messageboards.workflow.MBMessageWorkflowHandler@46651957,com.liferay.portlet.wiki.workflow.WikiPageWorkflowHandler@f7dd0b8", ENDITEM, 
		"Name=_152_workflowHandlersSearchContainer_1PrimaryKeys", "Value=com.liferay.portlet.documentlibrary.workflow.DLFileEntryWorkflowHandler@7719c29d,com.liferay.portlet.dynamicdatalists.workflow.DDLRecordWorkflowHandler@1d47de3f", ENDITEM, 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("receive_15", 
		"Action=http://ed.shaft.com/poller/receive", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=http://ed.shaft.com/group/control_panel/manage?p_auth=98UwHOXH&p_p_id=152&p_p_lifecycle=1&p_p_state=maximized&p_p_mode=view&doAsGroupId=10181&refererPlid=12008&controlPanelCategory=current_site.configuration&_152_struts_action=%2Fworkflow_definition_links%2Fedit_workflow_definition_link", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=pollerRequest", "Value=[{\"browserKey\":495407991458,\"companyId\":\"10154\",\"portletIdsMap\":{\"2_WAR_notificationsportlet\":true},\"startPolling\":true,\"userId\":\"CAG7z/qXJLy16B3HAeghAw==\",\"timestamp\":1546943632509}]", ENDITEM, 
		LAST);

	web_submit_data("receive_16", 
		"Action=http://ed.shaft.com/poller/receive", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=http://ed.shaft.com/group/control_panel/manage?p_auth=98UwHOXH&p_p_id=152&p_p_lifecycle=1&p_p_state=maximized&p_p_mode=view&doAsGroupId=10181&refererPlid=12008&controlPanelCategory=current_site.configuration&_152_struts_action=%2Fworkflow_definition_links%2Fedit_workflow_definition_link", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=pollerRequest", "Value=[{\"browserKey\":495407991458,\"companyId\":\"10154\",\"portletIdsMap\":{\"2_WAR_notificationsportlet\":true},\"userId\":\"CAG7z/qXJLy16B3HAeghAw==\",\"timestamp\":1546943636089}]", ENDITEM, 
		LAST);

	web_submit_data("receive_17", 
		"Action=http://ed.shaft.com/poller/receive", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=http://ed.shaft.com/group/control_panel/manage?p_auth=98UwHOXH&p_p_id=152&p_p_lifecycle=1&p_p_state=maximized&p_p_mode=view&doAsGroupId=10181&refererPlid=12008&controlPanelCategory=current_site.configuration&_152_struts_action=%2Fworkflow_definition_links%2Fedit_workflow_definition_link", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=pollerRequest", "Value=[{\"browserKey\":495407991458,\"companyId\":\"10154\",\"portletIdsMap\":{\"2_WAR_notificationsportlet\":true},\"userId\":\"CAG7z/qXJLy16B3HAeghAw==\",\"timestamp\":1546943639794}]", ENDITEM, 
		LAST);

	web_revert_auto_header("X-Requested-With");

	lr_think_time(5);

	web_url("logout", 
		"URL=http://ed.shaft.com/c/portal/logout", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://ed.shaft.com/group/control_panel/manage?p_auth=98UwHOXH&p_p_id=152&p_p_lifecycle=1&p_p_state=maximized&p_p_mode=view&doAsGroupId=10181&refererPlid=12008&controlPanelCategory=current_site.configuration&_152_struts_action=%2Fworkflow_definition_links%2Fedit_workflow_definition_link", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	web_url("c", 
		"URL=http://ed.shaft.com/c", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://ed.shaft.com/c/portal/logout", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}