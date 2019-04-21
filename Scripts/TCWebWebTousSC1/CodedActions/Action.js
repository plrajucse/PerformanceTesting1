(function() {
	"use strict";

	function actionAction() {
		// Navigate to "http://127.0.0.1:1080/webtours/"
		TCS.browser.navigate({
			"Location": TCS.argType.JSArg("\"http://127.0.0.1:1080/webtours/\"")
		});
		// Click on Username textbox
		TCS.object.tcManaged.usernameObject.click({
			"X Coordinate": 48,
			"Y Coordinate": 4
		});
		// Type jojo in Username textbox
		TCS.object.tcManaged.usernameObject.type({
			"Value": "jojo"
		});
		// Click on Password passwordbox
		TCS.object.tcManaged.passwordObject.click({
			"X Coordinate": 41,
			"Y Coordinate": 12
		});
		// Type **** in Password passwordbox
		TCS.object.tcManaged.passwordObject.type({
			"Value": TCS.argType.Base64Arg("YmVhbg==")
		});
		// Double click on Login button
		TCS.object.tcManaged.loginObject.doubleClick({
			"X Coordinate": 53,
			"Y Coordinate": 10
		});
		// Click on SignOff Button image
		TCS.object.tcManaged.signOffButtonObject.click({
			"X Coordinate": 58,
			"Y Coordinate": 8
		});
	}
	actionAction();

})();