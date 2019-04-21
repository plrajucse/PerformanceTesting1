//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("launch");
	truclient_step("1", "Navigate to 'http://127.0.0.1:1080/webtours/'", "snapshot=Action_1.inf");
	truclient_step("2", "Wait until This product uses parts... exists", "snapshot=Action_2.inf");
	lr_end_transaction("launch",0);
	lr_start_transaction("login");
	truclient_step("4", "Type TC.getParam('p_User') in Username textbox", "snapshot=Action_4.inf");
	truclient_step("6", "Type ******************** in Password passwordbox", "snapshot=Action_6.inf");
	truclient_step("7", "Click on Login button", "snapshot=Action_7.inf");
	lr_end_transaction("login",0);
	lr_start_transaction("searchflight");
	truclient_step("8", "Click on Search Flights Button image", "snapshot=Action_8.inf");
	lr_end_transaction("searchflight",0);
	truclient_step("9", "Click on findFlights button", "snapshot=Action_9.inf");
	truclient_step("10", "Select source from Arrival City listbox", "snapshot=Action_10.inf");
	truclient_step("11", "Evaluate JavaScript code window.alret('source')", "snapshot=Action_11.inf");
	truclient_step("12", "Click on findFlights button", "snapshot=Action_12.inf");
	truclient_step("14", "Scroll on Find Flight Flight departing...", "snapshot=Action_14.inf");
	truclient_step("16", "Click on 211;237;02/13/2019 radio", "snapshot=Action_16.inf");
	truclient_step("17", "Click on reserveFlights button", "snapshot=Action_17.inf");
	truclient_step("19", "Type suryapet in Street Address textbox", "snapshot=Action_19.inf");
	truclient_step("21", "Type ts in City/State/Zip textbox", "snapshot=Action_21.inf");
	truclient_step("23", "Type 9948897938 in Credit Card textbox", "snapshot=Action_23.inf");
	truclient_step("25", "Click on buyFlights button", "snapshot=Action_25.inf");
	truclient_step("26", "Click on SignOff Button image", "snapshot=Action_26.inf");

	return 0;
}
