/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 971
   ------------------------------------------------------------------------------- */

vuser_init()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("InsuranceWebExtJS", 
		"URL=http://demo.borland.com/InsuranceWebExtJS/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"https://www.google.com");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"Body= ", 
		LAST);

	lr_think_time(5);

	web_custom_request("rappor", 
		"URL=https://clients4.google.com/rappor", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncType=application/vnd.chrome.rappor", 
		"BodyBinary=\\x08\\x10\\x12\\x1B\t\\xB6\"\\xE3\\xAE\\xB9\\xCAE\\xE2\\x12\\x10\\x8C\\xD6P\\x9E5j<\\xC1\\x86\\x16B\\x91\\x94\\xAA:\\x11\\x12\\x1B\t\\xB2U\\xE18[\\xEE\\x9E\\xBA\\x12\\x10z[\\x91\\xAE\\x110\\x10L\\xB0s#(\\x00&!\\x99", 
		LAST);

	web_add_header("X-Chrome-UMA-Log-SHA1", 
		"680CF7F2AD4D7DC444B66F12D4E81ADEFAFF2E56");

	web_add_header("X-Chrome-UMA-ReportingInfo", 
		"CAE=");

	lr_think_time(42);

/* Added by Async CodeGen.
ID=Poll_0
ScanType = Recording

The following URLs are considered part of this conversation:
	https://clientservices.googleapis.com/uma/v2

TODO - The following callbacks have been added to AsyncCallbacks.c.
Add your code to the callback implementations as necessary.
	Poll_0_RequestCB
	Poll_0_ResponseCB
 */
	web_reg_async_attributes("ID=Poll_0", 
		"Pattern=Poll", 
		"URL=https://clientservices.googleapis.com/uma/v2", 
		"PollIntervalMs=3000", 
		"RequestCB=Poll_0_RequestCB", 
		"ResponseCB=Poll_0_ResponseCB", 
		LAST);

	web_custom_request("v2", 
		"URL=https://clientservices.googleapis.com/uma/v2", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/vnd.chrome.uma", 
		"BodyBinary=\t\\xB0\\xDE\\x84\\xB9\\x0C\\xF5\\xB5\\x9E\\x10\\xDE\\x01\\x1A\\xC7\\x11\\x08\\xD0\\xA5\\x89\\xE3\\x05\\x12\\x1072.0.3626.109-64\\x18\\xF0\\x8B\\x89\\xE1\\x05\"\\x05en-US*\\x18\n\nWindows NT\\x12\n10.0.105862\\xB3\\x01\n\\x06x86_64\\x10\\xB6>\\x18\\x80\\x80\\xF8\\x85\\xE8\\xFF\\x1F\"\\x00(\\x010\\xD6\n8\\x80\\x06Be\\x08\\x86\\x81\\x02\\x10F\\x1A\\x0C8.15.10.2900\"\n11-26-20122\\x0BGoogle Inc.:6ANGLE (Intel(R) HD Graphics Direct3D9Ex vs_3_0 ps_3_0)"
		"M'\\xB9\\xC9BU\\xEB\\x1A\\xC9Be\\x00\\x00\\x80?j\\x14\n\\x0CGenuineIntel\\x10\\xD5\\x8C\\x08\\x18\\x04\\x82\\x01\\x02\\x08\\x01\\x8A\\x01\\x02\\x08\\x01:5\n\\x0FShockwave Flash\\x12\\x12pepflashplayer.dll\\x1A\n32.0.0.142 \\x00(\\x01:;\n\\x11Chrome PDF Viewer\\x12 mhjfbmdgcfjbbpaeojofohoefgiehjai\\x1A\\x00 \\x00(\\x00:+\n\rNative Client\\x12\\x14internal-nacl-plugin\\x1A\\x00 \\x00(\\x01:.\n\\x11Chrome PDF Plugin\\x12\\x13internal-pdf-viewer\\x1A\\x00 \\x00(\\x01B\\x00J\n\r"
		"\\xD3\\xB0\\x1A\\xD0\\x15\\x80\\x8D}\\xCAJ\n\r&\\xCF\\xEBs\\x15\\xA2\\xE6\\xED\\x12J\n\r@\\x1B'\\xB0\\x15\\xF4\\xF4G=J\n\r\\xD4\\x11\r\\x1A\\x15\\xDF\\xEB\\x9F/J\n\rR\\xB5j+\\x15\\xCB\\x83\\x86sJ\n\r\\x9D>\\xDFf\\x15\\xA4pp`J\n\r\\x05xk+\\x15\\x17\\xB0\\x10LJ\n\rLR\\xE2\\xB7\\x15\\x7FF\\x81\\x11J\n\r\\x1Eq\\x1CA\\x154#7\\xD1J\n\r\\x9D\\xBA\\x18l\\x15\\x80\\x8D}\\xCAJ\n\r\\xE2 ?E\\x15\\x80\\x8D}\\xCAJ\n\r\\x95\\xAA\\x950\\x15\\xDF\\x17J?J\n\r1\\xEC\\x7F\\xC2\\x15\\xB2\\xC5\\x11VJ\n\r\\x06\\xC9\\x1B"
		"|\\x15tyZ\\xF5J\n\r\\\\6\\xEF\\x9D\\x15Z\\xE5{7J\n\r\\x07\\xE9B#\\x15\\x80\\x8D}\\xCAJ\n\r\\xB7\\xDFB\\xD4\\x15\\x80\\x8D}\\xCAJ\n\r\\xB8\\xA1\\x82\\xA5\\x15\\x17\\xCEu\\xADJ\n\r\\\\\\xB3M\\x8F\\x15\\x80\\x8D}\\xCAJ\n\rvw\\xE2\\x00\\x15\\x80\\x8D}\\xCAJ\n\r\\x9D\\xC3\\xCD\\xAA\\x15\\x80\\x8D}\\xCAJ\n\r\\x8A2\\xE11\\x15\\x80\\x8D}\\xCAJ\n\r\\x01Ql\\xE5\\x15E\\xF3`}J\n\rgV\\x116\\x15Z\\xE5{7J\n\r\\x84\\xC0Ov\\x15\\x80\\x8D}\\xCAJ\n\r\\x8D\\xA5J3\\x15\\xDF\\x17J?J\n\r\\xEE\\xE4W\\xE2\\x15\\xEA\\x1D="
		"\\xF2J\n\r\\xC5\\xF7\\xBC\\xED\\x15,1\\xC1\\x1CJ\n\rM\\xFC\\x85T\\x15Z\\xE5{7J\n\rX\\xA5\\xED\\x1B\\x15\\x80\\x8D}\\xCAJ\n\r\\xCA\\x1Ds\\x93\\x15X$\\x87`J\n\r\\x8D\\x1A\\xA0\\x87\\x15\\x80\\x8D}\\xCAJ\n\r\\xCD\\x1F\\x11\\x0E\\x15\\x80\\x8D}\\xCAJ\n\rWBL\\x9B\\x15H\\xFA\\x1C7J\n\r;-\\xF6C\\x15\\x1C4\\x87\\xC2J\n\r\\xF1u\\\\\\x9E\\x15\\x1B\\x00\\x89\\xA5J\n\rq\\xB5@\\xED\\x15\\xF3\\xB0\\x9E\\xAEJ\n\r\t@fh\\x15\\xEA\\x1D=\\xF2J\n\r\\x14\\x8B\\xB0\\x02\\x15\\x80\\x8D}\\xCAJ\n\r"
		"\\xA5p\\xCD\\xD1\\x15\\x80\\x8D}\\xCAJ\n\r\\xE8\\xDB\\xE5\\xB7\\x15\\x80\\x8D}\\xCAJ\n\r\\xA6\\x03\\xA3N\\x15\\x0E%\\xBB\\xECJ\n\r\\xA5m\\xA4z\\x15P\\xB1F\\xC9J\n\r\\x1F\\xA8c\\xB3\\x15\\x83u\\x93\\xBAJ\n\r\\xA1m$g\\x15Z\\xE5{7J\n\rHd\\xF1[\\x15\\x80\\x8D}\\xCAJ\n\r\\xE3%\\xA0X\\x15,{\\xE96J\n\r\\xF9 \\xD2\\xD4\\x15\\x07}\\x10\\x1EJ\n\rR\\xA9\\xC9\\xCE\\x15\\x80\\x8D}\\xCAJ\n\r)`\\x7F.\\x15\\xABe\\xFCPJ\n\r\\x96\\x04\\xAFQ\\x15\\x80\\x8D}\\xCAJ\n\rM\\xB5\\xB9Q\\x15Z\\xE5{7J\n\r\\xA6^"
		"4\\x07\\x15Z\\xE5{7J\n\r\\xCE7\\xC3K\\x15Z\\xE5{7J\n\r\\x85\\xDAT\\x13\\x15\\xDCd\\xA8\\xF1J\n\r`\\x87MI\\x15C]2RJ\n\r*\\xE8z\\xF4\\x15\\xE5.\\xF2\\x86J\n\rU\\x08\\xC6:\\x15\\x9C*nHJ\n\r\\x0C\\x19\\x96\\xF2\\x15c(\\x82\\xA5J\n\r\\xE2\\xAABD\\x15v\\x19;nJ\n\rw\\xD3\\xD1\\x0E\\x15\\x14\\x0F\\xCC\\xE1J\n\r\\xA0\\xF0\\xF0u\\x15u\\x05\\xD6JJ\n\r\\x81\\x84\\xB1\\xE2\\x15<\\xB1\\xF6\\xD7J\n\r\\x89\\x18\\xE7\\xE7\\x15u\\x05\\xD6JJ\n\r\\x0B\\xD4\\x91\r\\x15\\xDB\\xA6\\xB4HJ\n\r\\x155@\\xFF\\x15\\x80\\x8D}"
		"\\xCAJ\n\rq5\\x96\\x85\\x15\\x80\\x8D}\\xCAJ\n\r\\xC1\\x17\\x82:\\x15Z\\xE5{7J\n\r$\\x86\\xE6\\x94\\x15\\xC4\\x8F?\\x80J\n\r-\\x89\\xE8\\xB4\\x15/\\xB8\\xFD\\x10J\n\r\\xEB\\x11\\xA3\\x10\\x15^A\\xCD\\xE1J\n\ri\\xE4\\x04b\\x15o\\xB8r\\xE8J\n\r\\x7F\\x89\\xC6\\x81\\x15o\\xB8r\\xE8J\n\r1\\x90U\\x0C\\x15\\xF4\\xF4G=J\n\r\\x9E\\xB0X\\xE2\\x15\\xDF\\x17J?P\\x04ZD\\x08\\x01\\x10\\xC1\\xE2\\xCD\\xE3\\x05\\x18\\xDB\\xA9\\xCD\\xE3\\x05\"\\x17\n\t1.3.33.23\\x10\\xDB\\xA9\\xCD\\xE3\\x05\\x18\\x00 \\x00"
		"(\\x00*\\x1B\n\r72.0.3626.109\\x10\\xDB\\xA9\\xCD\\xE3\\x05\\x18\\x00 \\x1E(\\x00b\\x04GGLSj\\x0C\\x08\\x00\\x10\\x02\\x18\\x00 "
		"\\x058\\x06@\\x06\\x80\\x01\\xA0\\xE0\\x89\\xE1\\x05\\x90\\x01\\x1E\\x90\\x01\\x8C\\x01\\x90\\x01\\xCA\\x01\\x90\\x01\\x87\\x02\\x90\\x01\\xB0\\x02\\x90\\x01\\x8C\\x03\\x90\\x01\\xA2\\x03\\x90\\x01\\xB3\\x03\\x90\\x01\\xEA\\x03\\x90\\x01\\xF7\\x03\\x90\\x01\\xBF\\x04\\x90\\x01\\xD2\\x04\\x90\\x01\\xE6\\x06\\x90\\x01\\xE2\\x07\\x90\\x01\\xEA\\x07\\x98\\x01\\x01\\xBA\\x01\\x0C\\x15\\xFE\\xE5\\x1C\\x1A%\\xFCzD\\xDC(\\x00\\xC2\\x01\\x0C\\x08\\x0B\\x12\\x039.1\\x1D\\xE7\\xDF\\xC7\"\\xC2\\x01\n"
		"\\x08\\x08\\x12\\x017\\x1Dlm\\xB1>\\xC2\\x01\\x15\\x08\\x0C\\x12\\x0C38.191.200.3\\x1D5\\x8F\\x98\\xC6\\xC2\\x01\r\\x08\n\\x12\\x044995\\x1D\\x86b1s\\xC2\\x01\\x15\\x08\\x06\\x12\\x0C0.57.44.2492\\x1D=\\xC9ko\\xC2\\x01\\x0B\\x08\\x02\\x12\\x0226\\x1D\\x16\t\\xFA\\xB7\\xC2\\x01\\x10\\x08\\x03\\x12\\x070.0.0.0\\x1D\\x00\\x00\\x00\\x00\\xC2\\x01\\x13\\x08\\x04\\x12\n32.0.0.142\\x1D\\x9F\\xBA\\xFA\\x15\\xC2\\x01\\x10\\x08\\x07\\x12\\x070.0.0.0\\x1D\\x00\\x00\\x00\\x00\\xC2\\x01\\x14\\x08\r"
		"\\x12\\x0B4.10.1303.0\\x1D\\x00\\x00\\x00\\x00\\xC2\\x01\r\\x08\t\\x12\\x041042\\x1D\\xE9b\\xE2$\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x05\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x01\\x18\\x02 \\x00"
		"(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x01P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x01\\x18\\x01 \\x00(\\x000\\x008\\x01@\\x01H\\x01P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x06\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x06\\x18\\x02 "
		"\\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00"
		"(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x06\\x10\n\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x01\\x18\\x02 \\x00"
		"(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\n\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x02x\\x00\\x80\\x01\\x002\r\tVM\\xC4\\xD3\\xE0\\x1D],\\x1A\\x02\\x10\\x012\\x0F\t\\xEB\\x82h-\\xB8\\x12\\x0E\\xFC\\x10\\x01\\x1A\\x02\\x10\\x02", 
		LAST);

	web_add_header("X-Chrome-UMA-Log-SHA1", 
		"278F6F979F0C66C0969D6EBCFA55A3CBE91D83A0");

	web_add_auto_header("X-Chrome-UMA-ReportingInfo", 
		"CAEQyAEYACAB");

/* Removed by Async CodeGen.
ID = Poll_0
 */
	/*
 web_custom_request("v2_2",
		"URL=https://clientservices.googleapis.com/uma/v2",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=",
		"Snapshot=t5.inf",
		"Mode=HTML",
		"EncType=application/vnd.chrome.uma",
		"ContentEncoding=gzip",
		body_variable_1,
		LAST); 
	*/

	web_add_header("X-Chrome-UMA-Log-SHA1", 
		"C8075B42C77C4C6F194728F5471731E307C1EE52");

/* Removed by Async CodeGen.
ID = Poll_0
 */
	/*
 web_custom_request("v2_3",
		"URL=https://clientservices.googleapis.com/uma/v2",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=",
		"Snapshot=t6.inf",
		"Mode=HTML",
		"EncType=application/vnd.chrome.uma",
		"ContentEncoding=gzip",
		"BodyBinary=\t\\xB0\\xDE\\x84\\xB9\\x0C\\xF5\\xB5\\x9E\\x10\\xDF\\x01\\x1A\\xCA\\x11\\x08\\xD0\\xA5\\x89\\xE3\\x05\\x12\\x1072.0.3626.109-64\\x18\\xF0\\x8B\\x89\\xE1\\x05\"\\x05en-US*\\x18\n"
		"\n"
		"Windows NT\\x12\n"
		"10.0.105862\\xB3\\x01\n"
		"\\x06x86_64\\x10\\xB6>\\x18\\x80\\x80\\xF8\\x85\\xE8\\xFF\\x1F\"\\x00(\\x010\\xD6\n"
		"8\\x80\\x06Be\\x08\\x86\\x81\\x02\\x10F\\x1A\\x0C8.15.10.2900\"\n"
		"11-26-20122\\x0BGoogle Inc.:6ANGLE (Intel(R) HD Graphics Direct3D9Ex vs_3_0 ps_3_0)M'\\xB9\\xC9BU\\xEB\\x1A\\xC9Be\\x00\\x00\\x80?j\\x14\n"
		"\\x0CGenuineIntel\\x10\\xD5\\x8C\\x08\\x18\\x04\\x82\\x01\\x02\\x08\\x01\\x8A\\x01\\x02\\x08\\x01:5\n"
		"\\x0FShockwave Flash\\x12\\x12pepflashplayer.dll\\x1A\n"
		"32.0.0.142 \\x00(\\x01:;\n"
		"\\x11Chrome PDF Viewer\\x12 mhjfbmdgcfjbbpaeojofohoefgiehjai\\x1A\\x00 \\x00(\\x00:+\n"
		"\rNative Client\\x12\\x14internal-nacl-plugin\\x1A\\x00 \\x00(\\x01:.\n"
		"\\x11Chrome PDF Plugin\\x12\\x13internal-pdf-viewer\\x1A\\x00 \\x00(\\x01B\\x03\\xE8\\x01\\x01J\n"
		"\r\\xD3\\xB0\\x1A\\xD0\\x15\\x80\\x8D}\\xCAJ\n"
		"\r&\\xCF\\xEBs\\x15\\xA2\\xE6\\xED\\x12J\n"
		"\r@\\x1B'\\xB0\\x15\\xF4\\xF4G=J\n"
		"\r\\xD4\\x11\r\\x1A\\x15\\xDF\\xEB\\x9F/J\n"
		"\rR\\xB5j+\\x15\\xCB\\x83\\x86sJ\n"
		"\r\\x9D>\\xDFf\\x15\\xA4pp`J\n"
		"\r\\x05xk+\\x15\\x17\\xB0\\x10LJ\n"
		"\rLR\\xE2\\xB7\\x15\\x7FF\\x81\\x11J\n"
		"\r\\x1Eq\\x1CA\\x154#7\\xD1J\n"
		"\r\\x9D\\xBA\\x18l\\x15\\x80\\x8D}\\xCAJ\n"
		"\r\\xE2 ?E\\x15\\x80\\x8D}\\xCAJ\n"
		"\r\\x95\\xAA\\x950\\x15\\xDF\\x17J?J\n"
		"\r1\\xEC\\x7F\\xC2\\x15\\xB2\\xC5\\x11VJ\n"
		"\r\\x06\\xC9\\x1B|\\x15tyZ\\xF5J\n"
		"\r\\\\6\\xEF\\x9D\\x15Z\\xE5{7J\n"
		"\r\\x07\\xE9B#\\x15\\x80\\x8D}\\xCAJ\n"
		"\r\\xB7\\xDFB\\xD4\\x15\\x80\\x8D}\\xCAJ\n"
		"\r\\xB8\\xA1\\x82\\xA5\\x15\\x17\\xCEu\\xADJ\n"
		"\r\\\\\\xB3M\\x8F\\x15\\x80\\x8D}\\xCAJ\n"
		"\rvw\\xE2\\x00\\x15\\x80\\x8D}\\xCAJ\n"
		"\r\\x9D\\xC3\\xCD\\xAA\\x15\\x80\\x8D}\\xCAJ\n"
		"\r\\x8A2\\xE11\\x15\\x80\\x8D}\\xCAJ\n"
		"\r\\x01Ql\\xE5\\x15E\\xF3`}J\n"
		"\rgV\\x116\\x15Z\\xE5{7J\n"
		"\r\\x84\\xC0Ov\\x15\\x80\\x8D}\\xCAJ\n"
		"\r\\x8D\\xA5J3\\x15\\xDF\\x17J?J\n"
		"\r\\xEE\\xE4W\\xE2\\x15\\xEA\\x1D=\\xF2J\n"
		"\r\\xC5\\xF7\\xBC\\xED\\x15,1\\xC1\\x1CJ\n"
		"\rM\\xFC\\x85T\\x15Z\\xE5{7J\n"
		"\rX\\xA5\\xED\\x1B\\x15\\x80\\x8D}\\xCAJ\n"
		"\r\\xCA\\x1Ds\\x93\\x15X$\\x87`J\n"
		"\r\\x8D\\x1A\\xA0\\x87\\x15\\x80\\x8D}\\xCAJ\n"
		"\r\\xCD\\x1F\\x11\\x0E\\x15\\x80\\x8D}\\xCAJ\n"
		"\rWBL\\x9B\\x15H\\xFA\\x1C7J\n"
		"\r;-\\xF6C\\x15\\x1C4\\x87\\xC2J\n"
		"\r\\xF1u\\\\\\x9E\\x15\\x1B\\x00\\x89\\xA5J\n"
		"\rq\\xB5@\\xED\\x15\\xF3\\xB0\\x9E\\xAEJ\n"
		"\r\t@fh\\x15\\xEA\\x1D=\\xF2J\n"
		"\r\\x14\\x8B\\xB0\\x02\\x15\\x80\\x8D}\\xCAJ\n"
		"\r\\xA5p\\xCD\\xD1\\x15\\x80\\x8D}\\xCAJ\n"
		"\r\\xE8\\xDB\\xE5\\xB7\\x15\\x80\\x8D}\\xCAJ\n"
		"\r\\xA6\\x03\\xA3N\\x15\\x0E%\\xBB\\xECJ\n"
		"\r\\xA5m\\xA4z\\x15P\\xB1F\\xC9J\n"
		"\r\\x1F\\xA8c\\xB3\\x15\\x83u\\x93\\xBAJ\n"
		"\r\\xA1m$g\\x15Z\\xE5{7J\n"
		"\rHd\\xF1[\\x15\\x80\\x8D}\\xCAJ\n"
		"\r\\xE3%\\xA0X\\x15,{\\xE96J\n"
		"\r\\xF9 \\xD2\\xD4\\x15\\x07}\\x10\\x1EJ\n"
		"\rR\\xA9\\xC9\\xCE\\x15\\x80\\x8D}\\xCAJ\n"
		"\r)`\\x7F.\\x15\\xABe\\xFCPJ\n"
		"\r\\x96\\x04\\xAFQ\\x15\\x80\\x8D}\\xCAJ\n"
		"\rM\\xB5\\xB9Q\\x15Z\\xE5{7J\n"
		"\r\\xA6^4\\x07\\x15Z\\xE5{7J\n"
		"\r\\xCE7\\xC3K\\x15Z\\xE5{7J\n"
		"\r\\x85\\xDAT\\x13\\x15\\xDCd\\xA8\\xF1J\n"
		"\r`\\x87MI\\x15C]2RJ\n"
		"\r*\\xE8z\\xF4\\x15\\xE5.\\xF2\\x86J\n"
		"\rU\\x08\\xC6:\\x15\\x9C*nHJ\n"
		"\r\\x0C\\x19\\x96\\xF2\\x15c(\\x82\\xA5J\n"
		"\r\\xE2\\xAABD\\x15v\\x19;nJ\n"
		"\rw\\xD3\\xD1\\x0E\\x15\\x14\\x0F\\xCC\\xE1J\n"
		"\r\\xA0\\xF0\\xF0u\\x15u\\x05\\xD6JJ\n"
		"\r\\x81\\x84\\xB1\\xE2\\x15<\\xB1\\xF6\\xD7J\n"
		"\r\\x89\\x18\\xE7\\xE7\\x15u\\x05\\xD6JJ\n"
		"\r\\x0B\\xD4\\x91\r\\x15\\xDB\\xA6\\xB4HJ\n"
		"\r\\x155@\\xFF\\x15\\x80\\x8D}\\xCAJ\n"
		"\rq5\\x96\\x85\\x15\\x80\\x8D}\\xCAJ\n"
		"\r\\xC1\\x17\\x82:\\x15Z\\xE5{7J\n"
		"\r$\\x86\\xE6\\x94\\x15\\xC4\\x8F?\\x80J\n"
		"\r-\\x89\\xE8\\xB4\\x15/\\xB8\\xFD\\x10J\n"
		"\r\\xEB\\x11\\xA3\\x10\\x15^A\\xCD\\xE1J\n"
		"\ri\\xE4\\x04b\\x15o\\xB8r\\xE8J\n"
		"\r\\x7F\\x89\\xC6\\x81\\x15o\\xB8r\\xE8J\n"
		"\r1\\x90U\\x0C\\x15\\xF4\\xF4G=J\n"
		"\r\\x9E\\xB0X\\xE2\\x15\\xDF\\x17J?P\\x04ZD\\x08\\x01\\x10\\xC1\\xE2\\xCD\\xE3\\x05\\x18\\xDB\\xA9\\xCD\\xE3\\x05\"\\x17\n"
		"\t1.3.33.23\\x10\\xDB\\xA9\\xCD\\xE3\\x05\\x18\\x00 \\x00(\\x00*\\x1B\n"
		"\r72.0.3626.109\\x10\\xDB\\xA9\\xCD\\xE3\\x05\\x18\\x00 \\x1E(\\x00b\\x04GGLSj\\x0C\\x08\\x00\\x10\\x02\\x18\\x00 \\x058\\x06@\\x06\\x80\\x01\\xA0\\xE0\\x89\\xE1\\x05\\x90\\x01\\x1E\\x90\\x01\\x8C\\x01\\x90\\x01\\xCA\\x01\\x90\\x01\\x87\\x02\\x90\\x01\\xB0\\x02\\x90\\x01\\x8C\\x03\\x90\\x01\\xA2\\x03\\x90\\x01\\xB3\\x03\\x90\\x01\\xEA\\x03\\x90\\x01\\xF7\\x03\\x90\\x01\\xBF\\x04\\x90\\x01\\xD2\\x04\\x90\\x01\\xE6\\x06\\x90\\x01\\xE2\\x07\\x90\\x01\\xEA\\x07\\x98\\x01\\x01\\xBA\\x01\\x0C\\x15\\xFE\\xE5\\x1C\\x1A%\\xFCzD\\xDC(\\x00\\xC2\\x01\\x0C\\x08\\x0B\\x12\\x039.1\\x1D\\xE7\\xDF\\xC7\"\\xC2\\x01\n"
		"\\x08\\x08\\x12\\x017\\x1Dlm\\xB1>\\xC2\\x01\\x15\\x08\\x0C\\x12\\x0C38.191.200.3\\x1D5\\x8F\\x98\\xC6\\xC2\\x01\r\\x08\n"
		"\\x12\\x044995\\x1D\\x86b1s\\xC2\\x01\\x15\\x08\\x06\\x12\\x0C0.57.44.2492\\x1D=\\xC9ko\\xC2\\x01\\x0B\\x08\\x02\\x12\\x0226\\x1D\\x16\t\\xFA\\xB7\\xC2\\x01\\x10\\x08\\x03\\x12\\x070.0.0.0\\x1D\\x00\\x00\\x00\\x00\\xC2\\x01\\x13\\x08\\x04\\x12\n"
		"32.0.0.142\\x1D\\x9F\\xBA\\xFA\\x15\\xC2\\x01\\x10\\x08\\x07\\x12\\x070.0.0.0\\x1D\\x00\\x00\\x00\\x00\\xC2\\x01\\x14\\x08\r\\x12\\x0B4.10.1303.0\\x1D\\x00\\x00\\x00\\x00\\xC2\\x01\r\\x08\t\\x12\\x041042\\x1D\\xE9b\\xE2$\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x05\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x01P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x01\\x18\\x01 \\x00(\\x000\\x008\\x01@\\x01H\\x01P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x06\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x06\\x18\\x02 "
		"\\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x06\\x10\n"
		"\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\n"
		"\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x02x\\x00\\x80\\x01\\x002\\x0F\t\\x90\\xD2\\x02\\xAB\\x90\\xA0[I\\x1A\\x04\\x10\\x01 \\x052\\x0F\tsh,\\xF9Rw\\x98e\\x10<\\x1A\\x02\\x10=2\r\t\\x1FI\\xFF\\x88H9\\x94s\\x1A\\x02\\x10\\x012\\x17\t\\xF5\\x1E\\x9F\\x91\\x85?\\xB4\\xE1\\x10\t\\x1A\\x02\\x10\\x01\\x1A\\x02\\x10\\x03\\x1A\\x02\\x10\\x082\\x0F\t\\xF3\\xC4i\\xE0\\xB7y\\x9D7\\x1A\\x04\\x08\\x00\\x10\n"
		"2\\x0F\t\\xD6^\\xD0ys{\\xA4|\\x1A\\x04\\x08\\x00\\x10\n"
		"2\\x0F\t\\xB3\\x07t\\x8C\\xA8;\\xAD\\x96\\x1A\\x04\\x08\\x00\\x10\n"
		"2%\t\\x9C\\xA2\\x9A\n"
		"\\xA4r\\x1B\\x90\\x10.\\x1A\\x04\\x08\\x00 \\x06\\x1A\\x02\\x08\\x01\\x1A\\x04\\x10\\x03 \\x06\\x1A\\x02\\x10\\x06\\x1A\\x04\\x10\\x08 \\x042$\t<@? 6^h:\\x10\\x81\\x04\\x1A\\x06\\x08\\x00\\x10\n"
		" \\x04\\x1A\\x06\\x08\\xAB\\x01\\x10\\xD2\\x01\\x1A\\x06\\x08\\xBD\\x02\\x10\\x85\\x032$\t\\xE6\\xA8Z\\xA4,\\x0E\\xEF\\xF2\\x10\\x81\\x04\\x1A\\x06\\x08\\x00\\x10\n"
		" \\x03\\x1A\\x06\\x08\\xAB\\x01\\x10\\xD2\\x01\\x1A\\x06\\x08\\xBD\\x02\\x10\\x85\\x032$\t#N\\xCB\\xC9\\xCD\\x96R\"\\x10\\x81\\x04\\x1A\\x06\\x08\\x00\\x10\n"
		" \\x02\\x1A\\x06\\x08\\xAB\\x01\\x10\\xD2\\x01\\x1A\\x06\\x08\\xBD\\x02\\x10\\x85\\x032\\x1E\t\\x12\\x0F(\\xD8SM\\xEF\\xEC\\x10\\xACl\\x1A\\x03\\x08\\xE2\\x15\\x1A\\x03\\x08\\x99\\x1E\\x1A\\x06\\x08\\xF2)\\x10\\x8F:2\\x17\tv\\xD6\\x98\\xE1S\\xD6\\x15\\xAA\\x10\t\\x1A\\x02\\x10\\x01\\x1A\\x02\\x10\\x03\\x1A\\x02\\x10\\x082\\x14\tzf\\x0B\\xBC.M\\x7F\\x90\\x10\\xB7\\x01\\x1A\\x06\\x08\\xAB\\x01\\x10\\xD2\\x012\\x14\t\\xDFO\\xB1\\x1E\\x01\\xB8\\x14\\x16\\x10\\xB7\\x01\\x1A\\x06\\x08\\xAB\\x01\\x10\\xD2\\x012\\x14\t\\x01\\xDD;E\\xBF\\x1D\\xB7\\xAF\\x10\\xB7\\x01\\x1A\\x06\\x08\\xAB\\x01\\x10\\xD2\\x012\r\tYr8\\x94d_<\\xE1\\x1A\\x02\\x10\\x012;\t\\xEE-\\x88|p&fF\\x10\\xAA\\x12\\x1A\\x06\\x08\\x06\\x10\\x08 \\x07\\x1A\\x06\\x087\\x10L \\x02\\x1A\\x06\\x08\\x92\\x01\\x10\\xCB\\x01\\x1A\\x03\\x08\\x9A\\x02\\x1A\\x08\\x08\\x87\\x03\\x10\\x9E\\x04 \\x02\\x1A\\x06\\x08\\xF0\\x05\\x10\\x93\\x082\\x17\t\\xC4\\x08\\x80R\\x0Bt\\xAC\\xDF\\x10\t\\x1A\\x02\\x10\\x01\\x1A\\x02\\x10\\x03\\x1A\\x02\\x10\\x082\\x0F\t\\x1D;/j\\xCC"
		"#L\\xBD\\x1A\\x04\\x08\\x00\\x10\n"
		"2\\x0F\t\\xA9\\x1F\\xC9\\x98\\xC6<\\xD9l\\x1A\\x04\\x08\\x00\\x10\n"
		"2\\x0F\t\\x88\\xF1=ck\\x05W\\xF5\\x1A\\x04\\x08\\x00\\x10\n"
		"2\\x0F\te~]Cq\\x96\\xA4#\\x10\\x01\\x1A\\x02\\x10\\x022\\x14\t\\x05\r\\xE7!'1\\xC1\\xCF\\x10\\xE5\\x01\\x1A\\x06\\x08\\xE2\\x01\\x10\\x8C\\x022#\tiy|Q\\x91\\xE9\\xB0z\\x10\\x13\\x1A\\x04\\x08\\x00 \\x03\\x1A\\x02\\x08\\x01\\x1A\\x04\\x10\\x03 \\x03\\x1A\\x02\\x10\\x06\\x1A\\x02\\x10\\x082\\x14\t\\xAC\\xE0\\xD6\\x1A^O8\\xE2\\x10\\xCA\\x02\\x1A\\x06\\x08\\xBD\\x02\\x10\\x85\\x032\\x1A\t\r^\\xFB{C\\x94\\x92!\\x10\\xCA\\x02\\x1A\\x04\\x08\\x00\\x10\n"
		"\\x1A\\x06\\x08\\xBD\\x02\\x10\\x85\\x032\\x1C\t5\\xAB\\x0C\\xB9\\xD8.\\x16{\\x10\\xCA\\x02\\x1A\\x06\\x08\\x00\\x10\n"
		" \\x02\\x1A\\x06\\x08\\xBD\\x02\\x10\\x85\\x032`\t4\\x91\\xCAp@\\xD4\\x13\\xC2\\x10\\xEA\\xD5d\\x1A\\x04\\x08(\\x107\\x1A\\x04\\x08L\\x10i\\x1A\\x05\\x08\\x93\\x08 \\x03\\x1A\\x05\\x08\\xA7\\x0B \\x06\\x1A\\x05\\x08\\xD8\\x0F \\x05\\x1A\\x05\\x08\\xE2\\x15 \\x03\\x1A\\x06\\x08\\x99\\x1E\\x10\\xF2)\\x1A\\x03\\x08\\x8F:\\x1A\\x06\\x08\\xD1P\\x10\\xEFo\\x1A\\x08\\x08\\x9A\\x9B\\x01\\x10\\xAA\\xD7\\x01\\x1A\n"
		"\\x08\\xE5\\xD2\\x10\\x10\\xA3\\x8C\\x17 \\x052\\x1F\t]\\xC9\\xBC\\x9D\\xB6\\x97\\xB4`\\x10\\xA9\\x03\\x1A\\x04\\x089\\x10D\\x1A\\x03\\x08\\xA0\\x01\\x1A\\x06\\x08\\xBE\\x01\\x10\\xE2\\x012}\t\\xA3\\xCB\\x93\\xB49\\x89!\\xE9\\x10\\xB2\\xD1?\\x1A\\x04\\x08\\x04 \\x14\\x1A\\x04\\x08\\x06 \\x02\\x1A\\x04\\x08\\x08\\x10\\x0B\\x1A\\x02\\x08(\\x1A\\x04\\x087\\x10L\\x1A\\x05\\x08i\\x10\\x92\\x01\\x1A\\x06\\x08\\xCB\\x01\\x10\\x9A\\x02\\x1A\\x03\\x08\\x93\\x08\\x1A\\x05\\x08\\xA7\\x0B \\x03\\x1A\\x05\\x08\\xD8\\x0F \\x04\\x1A\\x05\\x08\\xE2\\x15 \\x03\\x1A\\x06\\x08\\x99\\x1E\\x10\\xF2)\\x1A\\x03\\x08\\x8F:\\x1A\\x06\\x08\\xD1P\\x10\\xEFo\\x1A\\x08\\x08\\x9A\\x9B\\x01\\x10\\xAA\\xD7\\x01\\x1A\n"
		"\\x08\\xE5\\xD2\\x10\\x10\\xA3\\x8C\\x17 \\x032\r\t\\xF7\\x13V\\xE1\\x8A\\xE1\\x8C\\xBE\\x1A\\x02\\x10\\x012\\x10\t\\xE8\\xEDE\\xCA\\x16\\x97\\x95#\\x1A\\x05\\x10\\x01 \\x94\\x102\\x10\t\\x08\\xDD\\x87\\x07\\x8Ei*\\x1D\\x1A\\x05\\x10\\x01 \\x94\\x102\\x10\t\\xB8}m\\x08\\xC3#\\xE1C\\x1A\\x05\\x10\\x01 \\xAF\\x052\\x17\t\\xEA\\xAE\\xF8\\xEE\\xE1t*\\xE2\\x10\\x92\\xC6\\x02\\x1A\\x08\\x08\\xC7\\x90\\x02\\x10\\xB1\\xD9\\x022\\x0F\tG\\xAE\\x9F4K\\xEA\\xAB\\x8D\\x10\\x01\\x1A\\x02\\x10\\x022\\x17\t\\x8E\\x9D\\xC3\\xED\\x98\\xB9\\xA4i\\x10\\xB7\\xC6\\x02\\x1A\\x08\\x08\\xD0\\xA7\\x02\\x10\\xC3\\x90\\x032\\x11\t4\\x86f\\xDA\\xD8\\x99~\\xBC\\x10\\x06\\x1A\\x04\\x10\\x02 \\x062\\x1A\tsi\\xE0\\xFB\\xE0\\xD1\\xF8\\xE6\\x10\\xCD\\xC5\\x9B\\x02\\x1A\n"
		"\\x08\\xE6\\x82\\x90\\x02\\x10\\xA8\\xD5\\xAE\\x022\\x0F\t3\\xB4\\x7F;\\xFB^G\\xBA\\x10\\x03\\x1A\\x02\\x10\\x042\\x11\tG\\xF3\\xB9c\\x13\\xF81\\xC0\\x10\\x0C\\x1A\\x04\\x10\\x03 \\x062\\x11\tERHNvj?\\xB0\\x10D\\x1A\\x04\\x08@\\x10W2\\x0F\tX\\x87r&\\x97\\x19\\xD2O\\x1A\\x04\\x10\\x01 \\x072\\x11\t\\xC4!\\x8E\\xDE\\x19\\x11Wi\\x10J\\x1A\\x04\\x08@\\x10W2\r\t\\xD1\\xA0\\xC7b\\x0FZNH\\x1A\\x02\\x10\\x012\r\t\\x08\\x86\\xD3\\x85\\x83\\x15\\xBC\\x81\\x1A\\x02\\x10\\x012\\x11\t\\x12\\xBA@D\\xA8\\xAD\\xC6\\x98\\x10\r\\x1A\\x04\\x08\\x0C\\x10\\x0E2\\x0F\t\\xCEHQ\\x01\\xCA\\xA0\\xE0\\xD3\\x1A\\x04\\x10\\x01 \\x072\\x0F\t\\xBF\\xFA\\x7F\\xD3\\x9B\\xA0\\xEF\\xF9\\x1A\\x04\\x10\\x01 \\x022\\x11\tr\\xE3@\\x88\\x12a\\xC1\\xF0\\x10\\x06\\x1A\\x04\\x10\\x04 \\x022\\x1A\tQ\\xD0\\x06.\\xB5\\x85\\x13\\x9B\\x10\\xE7\\xE1\\x99\\x02\\x1A\n"
		"\\x08\\xC6\\xCB\\x85\\x02\\x10\\x8A\\x92\\x8B\\x032\\x14\t\\xAC\\x9Be\\xBAgs\\x19l\\x10\\xDE\\x02\\x1A\\x06\\x08\\xBE\\x02\\x10\\xFA\\x022\\x0F\t\\x15T\\x8F\\xE9\\xE1\\xC4\\xECc\\x10\\x04\\x1A\\x02\\x10\\x05",
		LAST); 
	*/

	web_add_header("X-Chrome-UMA-Log-SHA1", 
		"73F7CA0AF42A66F350E3932B552EB8CE5ED609C5");

/* Removed by Async CodeGen.
ID = Poll_0
 */
	/*
 web_custom_request("v2_4",
		"URL=https://clientservices.googleapis.com/uma/v2",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=",
		"Snapshot=t7.inf",
		"Mode=HTML",
		"EncType=application/vnd.chrome.uma",
		"ContentEncoding=gzip",
		body_variable_2,
		LAST); 
	*/

/* Added by Async CodeGen.
ID = Poll_0
 */
	web_stop_async("ID=Poll_0", 
		LAST);

	web_revert_auto_header("X-Chrome-UMA-ReportingInfo");

	web_add_header("Origin", 
		"http://demo.borland.com");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_submit_data("index.jsf;jsessionid=640CA0D09C999AC7D77322298DD31929", 
		"Action=http://demo.borland.com/InsuranceWebExtJS/index.jsf;jsessionid=640CA0D09C999AC7D77322298DD31929", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://demo.borland.com/InsuranceWebExtJS/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=login-form", "Value=login-form", ENDITEM, 
		"Name=login-form:email", "Value=john.smith@gmail.com", ENDITEM, 
		"Name=login-form:password", "Value=john", ENDITEM, 
		"Name=login-form:login.x", "Value=52", ENDITEM, 
		"Name=login-form:login.y", "Value=8", ENDITEM, 
		"Name=javax.faces.ViewState", "Value=j_id1:j_id2", ENDITEM, 
		LAST);

	return 0;
}
