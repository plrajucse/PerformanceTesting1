//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Navigate to 'http://127.0.0.1:1080/webtours/'", "snapshot=Action_1.inf");
	truclient_step("2", "Verify Web Tours Welcome to... 's Visible Text contains Web Tours Welcome to the...atix Corporation", "snapshot=Action_2.inf");
	truclient_step("3", "Wait until iMatix Corporation link exists", "snapshot=Action_3.inf");
	truclient_step("6", "Type TC.getParam('pUser') in Username textbox", "snapshot=Action_6.inf");
	truclient_step("8", "Type ******************* in Password passwordbox", "snapshot=Action_8.inf");
	truclient_step("9", "Click on Login button", "snapshot=Action_9.inf");
	truclient_step("10", "Verify Welcome, jojo, to the... 's Visible Text contains Welcome, jojo, to the We...hen you're done!", "snapshot=Action_10.inf");
	truclient_step("11", "Wait until Welcome, jojo, to the... exists", "snapshot=Action_11.inf");
	truclient_step("12", "Click on Search Flights Button image", "snapshot=Action_12.inf");
	truclient_step("13", "Get Visible Text from Departure City listbox", "snapshot=Action_13.inf");
	truclient_step("14", "Click on Departure City listbox", "snapshot=Action_14.inf");
	truclient_step("15", "Evaluate JavaScript code TC.setParam('prmFirstNam...prmFirstName'));", "snapshot=Action_15.inf");
	truclient_step("17", "Get Visible Text from Arrival City listbox", "snapshot=Action_17.inf");
	truclient_step("18", "Evaluate JavaScript code window.alert(strArrivalCity);", "snapshot=Action_18.inf");
	truclient_step("21", "Click on Window radio", "snapshot=Action_21.inf");
	truclient_step("22", "Click on Business radio", "snapshot=Action_22.inf");
	truclient_step("23", "Click on findFlights button", "snapshot=Action_23.inf");
	truclient_step("24", "Click on 141;166;02/14/2019 radio", "snapshot=Action_24.inf");
	truclient_step("25", "Click on reserveFlights button", "snapshot=Action_25.inf");
	truclient_step("30", "Type suryapet in Street Address textbox", "snapshot=Action_30.inf");
	truclient_step("32", "Type ts in City/State/Zip textbox", "snapshot=Action_32.inf");
	truclient_step("34", "Type 9948897938 in Credit Card textbox", "snapshot=Action_34.inf");
	truclient_step("42", "Click on buyFlights button", "snapshot=Action_42.inf");
	truclient_step("43", "Click on SignOff Button image", "snapshot=Action_43.inf");

	return 0;
}
