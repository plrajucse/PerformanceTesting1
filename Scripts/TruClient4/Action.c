//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("launch");
	truclient_step("1", "Navigate to 'http://127.0.0.1:1080/webtours/'", "snapshot=Action_1.inf");
	truclient_step("2", "Wait until [object HTMLQuoteElement] decorator exists", "snapshot=Action_2.inf");
	lr_end_transaction("launch",0);
	lr_start_transaction("login");
	truclient_step("11", "Type TC.getParam('P_USER123') in Username textbox", "snapshot=Action_11.inf");
	truclient_step("13", "Type ****************... in Password passwordbox", "snapshot=Action_13.inf");
	truclient_step("14", "Click on Login button", "snapshot=Action_14.inf");
	lr_end_transaction("login",0);
	truclient_step("15", "Wait until [object HTMLQuoteElement] decorator exists", "snapshot=Action_15.inf");
	truclient_step("16", "Click on Search Flights Button image", "snapshot=Action_16.inf");

	return 0;
}
