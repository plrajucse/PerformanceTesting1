//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("launch");
	truclient_step("1", "Navigate to 'http://127.0.0.1:1080/webtours/'", "snapshot=Action_1.inf");
	truclient_step("2", "Verify Web Tours Welcome to... 's Visible Text contains Web Tours Welcome to the...atix Corporation", "snapshot=Action_2.inf");
	lr_end_transaction("launch",0);
	lr_start_transaction("login");
	truclient_step("4", "Type TC.getParam('p_us') in Username textbox", "snapshot=Action_4.inf");
	truclient_step("6", "Type ******************* in Password passwordbox", "snapshot=Action_6.inf");
	truclient_step("7", "Click on Login button", "snapshot=Action_7.inf");
	lr_end_transaction("login",0);
	truclient_step("8", "Verify [object HTMLQuoteElement] 's Visible Text contains jojo", "snapshot=Action_8.inf");
	lr_start_transaction("click on flight");
	truclient_step("9", "Click on Search Flights Button image", "snapshot=Action_9.inf");
	lr_end_transaction("click on flight",0);
	lr_start_transaction("choose sor and dest");
	truclient_step("10", "Select Frankfurt from Departure City listbox", "snapshot=Action_10.inf");
	truclient_step("11", "Select London from Arrival City listbox", "snapshot=Action_11.inf");
	truclient_step("12", "Wait until AisleAisle label exists", "snapshot=Action_12.inf");
	truclient_step("13", "Click on findFlights button", "snapshot=Action_13.inf");
	lr_end_transaction("choose sor and dest",0);
	truclient_step("14", "Mouse down on 123;217;02/13/2019 radio", "snapshot=Action_14.inf");
	truclient_step("15", "Click on 123;217;02/13/2019 radio", "snapshot=Action_15.inf");
	truclient_step("17", "Mouse down on reserveFlights button", "snapshot=Action_17.inf");
	truclient_step("18", "Click on reserveFlights button", "snapshot=Action_18.inf");
	truclient_step("19", "Wait until reserveFlights button exists", "snapshot=Action_19.inf");

	return 0;
}
