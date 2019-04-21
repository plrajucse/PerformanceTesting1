//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("Transaction 1 Launch");
	truclient_step("1", "Navigate to 'http://127.0.0.1:1080/webtours/'", "snapshot=Action_1.inf");
	truclient_step("2", "Verify Welcome to the Web Tours site 's Visible Text contains Welcome to the Web Tours site", "snapshot=Action_2.inf");
	truclient_step("3", "Wait until iMatix Corporation link exists", "snapshot=Action_3.inf");
	lr_end_transaction("Transaction 1 Launch",0);
	truclient_step("5", "Wait 3 seconds", "snapshot=Action_5.inf");
	lr_start_transaction("Transaction 3 Login");
	truclient_step("6", "Type TC.getParam('pUserName') in Username textbox", "snapshot=Action_6.inf");
	truclient_step("8", "Type ****************... in Password passwordbox", "snapshot=Action_8.inf");
	truclient_step("9", "Click on Login button", "snapshot=Action_9.inf");
	truclient_step("10", "Verify Welcome to the Web Tours site 's Visible Text contains Using the menu", "snapshot=Action_10.inf");
	truclient_step("11", "Wait until Welcome to the Web Tours site exists", "snapshot=Action_11.inf");
	lr_end_transaction("Transaction 3 Login",0);

	return 0;
}
