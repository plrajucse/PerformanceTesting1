Action()
{

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("www.way2sms.com", 
		"URL=http://www.way2sms.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_header("Origin", 
		"https://www.google.com");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=durations_metrics&json=standard", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"Body= ", 
		LAST);

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
		"BodyBinary=\\x08\\x10\\x12\\x1B\t\\xB6\"\\xE3\\xAE\\xB9\\xCAE\\xE2\\x12\\x10\\x94\\x87%\\xDD-m=\\x14\\x00>\\xE1\\xC0\\x9B\\x83\\x17#\\x12\\x1B\t\\xB2U\\xE18[\\xEE\\x9E\\xBA\\x12\\x10!\\xA2v\\x8D)A\\x06\\xE7*D:\\x08\\xE0q/\\xB5", 
		LAST);

	web_add_header("X-Chrome-UMA-Log-SHA1", 
		"180D9C3842FD2A8EF87B3C40E96B9ABED29CFB4D");

	web_add_header("X-Chrome-UMA-ReportingInfo", 
		"CAE=");

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
		"BodyBinary=\t\\xB0\\xDE\\x84\\xB9\\x0C\\xF5\\xB5\\x9E\\x10\\x1D\\x1A\\xE9\\x0F\\x08\\xD0\\x88\\xBD\\xE0\\x05\\x12\\x0F71.0.3578.98-64\\x18\\xF0\\x8B\\x89\\xE1\\x05\"\\x05en-US*\\x18\n\nWindows NT\\x12\n10.0.105862\\x8E\\x01\n\\x06x86_64\\x10\\xB6>\\x18\\x80\\x80\\xB0\\x8E\\xA2\\xFF\\x1F\"\\x00(\\x010\\x80\\x088\\x80\\x06B@\\x08\\x86\\x81\\x02\\x10F\\x1A\\x0C10.0.10586.0\"\t6-21-20062\\x0BGoogle Inc.:\\x12Google SwiftShaderM\\xF67\\x97BU\\xEB\\x1A\\xC9Be\\x00\\x00\\x80?j\\x14\n"
		"\\x0CGenuineIntel\\x10\\xD5\\x8C\\x08\\x18\\x04\\x82\\x01\\x02\\x08\\x01\\x8A\\x01\\x02\\x08\\x01:5\n\\x0FShockwave Flash\\x12\\x12pepflashplayer.dll\\x1A\n32.0.0.101 \\x00(\\x01:;\n\\x11Chrome PDF Viewer\\x12 mhjfbmdgcfjbbpaeojofohoefgiehjai\\x1A\\x00 \\x00(\\x00:+\n\rNative Client\\x12\\x14internal-nacl-plugin\\x1A\\x00 \\x00(\\x01:.\n\\x11Chrome PDF Plugin\\x12\\x13internal-pdf-viewer\\x1A\\x00 \\x00(\\x01B\\x00J\n\r\\xC2\\xB6\\xD3\\xB7\\x15\\xDF\\x17J?J\n\r\\xD3\\xB0\\x1A\\xD0\\x15\\x80\\x8D}"
		"\\xCAJ\n\r&\\xCF\\xEBs\\x15\\xA2\\xE6\\xED\\x12J\n\r\\xD4\\x11\r\\x1A\\x15\\xDF\\xEB\\x9F/J\n\rR\\xB5j+\\x15\\x80\\x8D}\\xCAJ\n\r\\x9D>\\xDFf\\x15\\xA4pp`J\n\rLR\\xE2\\xB7\\x15\\x7FF\\x81\\x11J\n\r\\x1Eq\\x1CA\\x15\\x80\\x8D}\\xCAJ\n\r\\x7F\\x82 \\xCC\\x15\\x80\\x8D}\\xCAJ\n\r\\x95\\xAA\\x950\\x15\\xDF\\x17J?J\n\r1\\xEC\\x7F\\xC2\\x15\\xD9n[-J\n\r\\x06\\xC9\\x1B|\\x15tyZ\\xF5J\n\r\\\\6\\xEF\\x9D\\x15\\x80\\x8D}\\xCAJ\n\r\\xDB\\xD3\\xE5G\\x15\\xF4\\xF4G=J\n\rh\\x7F[\\x12\\x15\\xA5p\\x81\\x89J\n\r"
		"\\xB7\\xDFB\\xD4\\x15\\x80\\x8D}\\xCAJ\n\r\\xB8\\xA1\\x82\\xA5\\x15\\x17\\xCEu\\xADJ\n\r\\\\\\xB3M\\x8F\\x15\\x80\\x8D}\\xCAJ\n\r\\x8A2\\xE11\\x15\\x80\\x8D}\\xCAJ\n\r\\x01Ql\\xE5\\x15E\\xF3`}J\n\r\\x17\\x10\\x01\\xAA\\x15\\xDF\\x17J?J\n\r\\xC5\\xF7\\xBC\\xED\\x15,1\\xC1\\x1CJ\n\rM\\xFC\\x85T\\x15\\x80\\x8D}\\xCAJ\n\r\\xCA\\x1Ds\\x93\\x15r\\xAD+\\xB2J\n\r\\x8D\\x1A\\xA0\\x87\\x15\\x80\\x8D}\\xCAJ\n\rWBL\\x9B\\x15\\x80\\x8D}\\xCAJ\n\r;-\\xF6C\\x15\\x1C4\\x87\\xC2J\n\r\\xF4\\x80\\xE3J\\x15\\x80\\x8D"
		"}\\xCAJ\n\r\\xF1u\\\\\\x9E\\x15\\x1B\\x00\\x89\\xA5J\n\r\\x96\\xFD\\x86+\\x15\\xDF\\x17J?J\n\r\\xA5p\\xCD\\xD1\\x15\\x80\\x8D}\\xCAJ\n\r\\xA9b%\\xD9\\x15\\x87\\xAC/MJ\n\r&\\x986\\xFC\\x15\\xDF\\x17J?J\n\r\\xA5m\\xA4z\\x15P\\xB1F\\xC9J\n\r\\x1F\\xA8c\\xB3\\x15\\x83u\\x93\\xBAJ\n\r\\xA1m$g\\x15\\x80\\x8D}\\xCAJ\n\r\\x06\\xEBT\\xCC\\x15QY}CJ\n\r\\xE3%\\xA0X\\x15,{\\xE96J\n\r\\xF9 \\xD2\\xD4\\x15\\x89\\xBA\\x10\\x1CJ\n\r\\x9F\\x04\\x86U\\x15\\xDF\\x17J?J\n\r\\xCE7\\xC3K\\x15\\xDF\\x17J?J\n\r"
		"\\x85\\xDAT\\x13\\x15\\xDCd\\xA8\\xF1J\n\r`\\x87MI\\x15C]2RJ\n\r*\\xE8z\\xF4\\x15\\xE5.\\xF2\\x86J\n\rU\\x08\\xC6:\\x15\\x9C*nHJ\n\r\\x0C\\x19\\x96\\xF2\\x15c(\\x82\\xA5J\n\r\\xE2\\xAABD\\x15v\\x19;nJ\n\rw\\xD3\\xD1\\x0E\\x15\\x14\\x0F\\xCC\\xE1J\n\r\\xA0\\xF0\\xF0u\\x15u\\x05\\xD6JJ\n\r\\x81\\x84\\xB1\\xE2\\x15<\\xB1\\xF6\\xD7J\n\r\\x89\\x18\\xE7\\xE7\\x15u\\x05\\xD6JJ\n\ro\\xB0\\xCE\\xB1\\x154#7\\xD1J\n\rq5\\x96\\x85\\x15\\x80\\x8D}\\xCAJ\n\r$\\x86\\xE6\\x94\\x15\\xC4\\x8F?\\x80J\n\r"
		"\\xA1\\xF8s\\xCC\\x15\\x80\\x8D}\\xCAJ\n\r-\\x89\\xE8\\xB4\\x15\\x80\\x8D}\\xCAJ\n\r\\xEB\\x11\\xA3\\x10\\x15\\x80\\x8D}\\xCAJ\n\r\\xCA\\xFC4\\x88\\x15\\xF1]\\x97(J\n\ri\\xE4\\x04b\\x15o\\xB8r\\xE8J\n\r\\x7F\\x89\\xC6\\x81\\x15o\\xB8r\\xE8P\\x04ZC\\x08\\x01\\x10\\xC4\\xA5\\xB1\\xE1\\x05\\x18\\xCA\\xFB\\xB0\\xE1\\x05\"\\x17\n\t1.3.33.23\\x10\\xCA\\xFB\\xB0\\xE1\\x05\\x18\\x00 \\x00(\\x00*\\x1A\n\\x0C71.0.3578.98\\x10\\xCA\\xFB\\xB0\\xE1\\x05\\x18\\x00 \\x1E"
		"(\\x00b\\x04GGLSj\\x0C\\x08\\x00\\x10\\x02\\x18\\x00 \\x048\\x05@\\x06\\x80\\x01\\xA0\\xE0\\x89\\xE1\\x05\\x90\\x01\\x1E\\x90\\x01\\x8C\\x01\\x90\\x01\\xCA\\x01\\x90\\x01\\x87\\x02\\x90\\x01\\xB0\\x02\\x90\\x01\\x8C\\x03\\x90\\x01\\xA2\\x03\\x90\\x01\\xB3\\x03\\x90\\x01\\xEA\\x03\\x90\\x01\\xF7\\x03\\x90\\x01\\xBF\\x04\\x90\\x01\\xD2\\x04\\x90\\x01\\xE6\\x06\\x90\\x01\\xE2\\x07\\x90\\x01\\xEA\\x07\\x98\\x01\\x01\\xBA\\x01\\x0C\\x15\\xFE\\xE5\\x1C\\x1A%\\x17\\xD8v!"
		"(\\x00\\xC2\\x01\\x0C\\x08\\x0B\\x12\\x039.1\\x1D\\xE7\\xDF\\xC7\"\\xC2\\x01\n\\x08\\x08\\x12\\x017\\x1Dlm\\xB1>\\xC2\\x01\\x13\\x08\\x0C\\x12\n36.184.200\\x1D\\xD6m\\x7F\\xCC\\xC2\\x01\r\\x08\n\\x12\\x044891\\x1D\\xF4f!>\\xC2\\x01\\x15\\x08\\x06\\x12\\x0C0.57.44.2492\\x1D=\\xC9ko\\xC2\\x01\\x0B\\x08\\x02\\x12\\x0225\\x1D+Z[\\x81\\xC2\\x01\\x10\\x08\\x03\\x12\\x070.0.0.0\\x1D\\x00\\x00\\x00\\x00\\xC2\\x01\\x13\\x08\\x04\\x12\n"
		"32.0.0.101\\x1D\\x84\\xB9\\x1C\\xD4\\xC2\\x01\\x10\\x08\\x07\\x12\\x070.0.0.0\\x1D\\x00\\x00\\x00\\x00\\xC2\\x01\\x14\\x08\r\\x12\\x0B4.10.1224.7\\x1D\\x00\\x00\\x00\\x00\\xC2\\x01\\x0C\\x08\t\\x12\\x03985\\x1D\\xAEl\\x9B=\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x05\\x10\\x01\\x18\\x02 \\x00"
		"(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x01P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x01\\x18\\x01 \\x00(\\x000\\x008\\x01@\\x01H\\x01P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x06\\x10\\x05\\x18\\x02 "
		"\\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x06\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00"
		"(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x06\\x10\n\\x18\\x02 \\x00"
		"(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\n\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x02x\\x00\\x80\\x01\\x002\r\tVM\\xC4\\xD3\\xE0\\x1D],\\x1A\\x02\\x10\\x012\\x0F\t\\xEB\\x82h-\\xB8\\x12\\x0E\\xFC\\x10\\x01\\x1A\\x02\\x10\\x02", 
		LAST);

	web_add_header("X-Chrome-UMA-Log-SHA1", 
		"CEF2052C003A6B993AB2675CF031555CCAFC357E");

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
		"AE46EAB6227B37F0853670E7E70F810E0A4E5B11");

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
		"BodyBinary=\t\\xB0\\xDE\\x84\\xB9\\x0C\\xF5\\xB5\\x9E\\x10\\x1E\\x1A\\xEC\\x0F\\x08\\xD0\\x88\\xBD\\xE0\\x05\\x12\\x0F71.0.3578.98-64\\x18\\xF0\\x8B\\x89\\xE1\\x05\"\\x05en-US*\\x18\n"
		"\n"
		"Windows NT\\x12\n"
		"10.0.105862\\x8E\\x01\n"
		"\\x06x86_64\\x10\\xB6>\\x18\\x80\\x80\\xB0\\x8E\\xA2\\xFF\\x1F\"\\x00(\\x010\\x80\\x088\\x80\\x06B@\\x08\\x86\\x81\\x02\\x10F\\x1A\\x0C10.0.10586.0\"\t6-21-20062\\x0BGoogle Inc.:\\x12Google SwiftShaderM\\xF67\\x97BU\\xEB\\x1A\\xC9Be\\x00\\x00\\x80?j\\x14\n"
		"\\x0CGenuineIntel\\x10\\xD5\\x8C\\x08\\x18\\x04\\x82\\x01\\x02\\x08\\x01\\x8A\\x01\\x02\\x08\\x01:5\n"
		"\\x0FShockwave Flash\\x12\\x12pepflashplayer.dll\\x1A\n"
		"32.0.0.101 \\x00(\\x01:;\n"
		"\\x11Chrome PDF Viewer\\x12 mhjfbmdgcfjbbpaeojofohoefgiehjai\\x1A\\x00 \\x00(\\x00:+\n"
		"\rNative Client\\x12\\x14internal-nacl-plugin\\x1A\\x00 \\x00(\\x01:.\n"
		"\\x11Chrome PDF Plugin\\x12\\x13internal-pdf-viewer\\x1A\\x00 \\x00(\\x01B\\x03\\xE8\\x01\\x01J\n"
		"\r\\xC2\\xB6\\xD3\\xB7\\x15\\xDF\\x17J?J\n"
		"\r\\xD3\\xB0\\x1A\\xD0\\x15\\x80\\x8D}\\xCAJ\n"
		"\r&\\xCF\\xEBs\\x15\\xA2\\xE6\\xED\\x12J\n"
		"\r\\xD4\\x11\r\\x1A\\x15\\xDF\\xEB\\x9F/J\n"
		"\rR\\xB5j+\\x15\\x80\\x8D}\\xCAJ\n"
		"\r\\x9D>\\xDFf\\x15\\xA4pp`J\n"
		"\rLR\\xE2\\xB7\\x15\\x7FF\\x81\\x11J\n"
		"\r\\x1Eq\\x1CA\\x15\\x80\\x8D}\\xCAJ\n"
		"\r\\x7F\\x82 \\xCC\\x15\\x80\\x8D}\\xCAJ\n"
		"\r\\x95\\xAA\\x950\\x15\\xDF\\x17J?J\n"
		"\r1\\xEC\\x7F\\xC2\\x15\\xD9n[-J\n"
		"\r\\x06\\xC9\\x1B|\\x15tyZ\\xF5J\n"
		"\r\\\\6\\xEF\\x9D\\x15\\x80\\x8D}\\xCAJ\n"
		"\r\\xDB\\xD3\\xE5G\\x15\\xF4\\xF4G=J\n"
		"\rh\\x7F[\\x12\\x15\\xA5p\\x81\\x89J\n"
		"\r\\xB7\\xDFB\\xD4\\x15\\x80\\x8D}\\xCAJ\n"
		"\r\\xB8\\xA1\\x82\\xA5\\x15\\x17\\xCEu\\xADJ\n"
		"\r\\\\\\xB3M\\x8F\\x15\\x80\\x8D}\\xCAJ\n"
		"\r\\x8A2\\xE11\\x15\\x80\\x8D}\\xCAJ\n"
		"\r\\x01Ql\\xE5\\x15E\\xF3`}J\n"
		"\r\\x17\\x10\\x01\\xAA\\x15\\xDF\\x17J?J\n"
		"\r\\xC5\\xF7\\xBC\\xED\\x15,1\\xC1\\x1CJ\n"
		"\rM\\xFC\\x85T\\x15\\x80\\x8D}\\xCAJ\n"
		"\r\\xCA\\x1Ds\\x93\\x15r\\xAD+\\xB2J\n"
		"\r\\x8D\\x1A\\xA0\\x87\\x15\\x80\\x8D}\\xCAJ\n"
		"\rWBL\\x9B\\x15\\x80\\x8D}\\xCAJ\n"
		"\r;-\\xF6C\\x15\\x1C4\\x87\\xC2J\n"
		"\r\\xF4\\x80\\xE3J\\x15\\x80\\x8D}\\xCAJ\n"
		"\r\\xF1u\\\\\\x9E\\x15\\x1B\\x00\\x89\\xA5J\n"
		"\r\\x96\\xFD\\x86+\\x15\\xDF\\x17J?J\n"
		"\r\\xA5p\\xCD\\xD1\\x15\\x80\\x8D}\\xCAJ\n"
		"\r\\xA9b%\\xD9\\x15\\x87\\xAC/MJ\n"
		"\r&\\x986\\xFC\\x15\\xDF\\x17J?J\n"
		"\r\\xA5m\\xA4z\\x15P\\xB1F\\xC9J\n"
		"\r\\x1F\\xA8c\\xB3\\x15\\x83u\\x93\\xBAJ\n"
		"\r\\xA1m$g\\x15\\x80\\x8D}\\xCAJ\n"
		"\r\\x06\\xEBT\\xCC\\x15QY}CJ\n"
		"\r\\xE3%\\xA0X\\x15,{\\xE96J\n"
		"\r\\xF9 \\xD2\\xD4\\x15\\x89\\xBA\\x10\\x1CJ\n"
		"\r\\x9F\\x04\\x86U\\x15\\xDF\\x17J?J\n"
		"\r\\xCE7\\xC3K\\x15\\xDF\\x17J?J\n"
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
		"\ro\\xB0\\xCE\\xB1\\x154#7\\xD1J\n"
		"\rq5\\x96\\x85\\x15\\x80\\x8D}\\xCAJ\n"
		"\r$\\x86\\xE6\\x94\\x15\\xC4\\x8F?\\x80J\n"
		"\r\\xA1\\xF8s\\xCC\\x15\\x80\\x8D}\\xCAJ\n"
		"\r-\\x89\\xE8\\xB4\\x15\\x80\\x8D}\\xCAJ\n"
		"\r\\xEB\\x11\\xA3\\x10\\x15\\x80\\x8D}\\xCAJ\n"
		"\r\\xCA\\xFC4\\x88\\x15\\xF1]\\x97(J\n"
		"\ri\\xE4\\x04b\\x15o\\xB8r\\xE8J\n"
		"\r\\x7F\\x89\\xC6\\x81\\x15o\\xB8r\\xE8P\\x04ZC\\x08\\x01\\x10\\xC4\\xA5\\xB1\\xE1\\x05\\x18\\xCA\\xFB\\xB0\\xE1\\x05\"\\x17\n"
		"\t1.3.33.23\\x10\\xCA\\xFB\\xB0\\xE1\\x05\\x18\\x00 \\x00(\\x00*\\x1A\n"
		"\\x0C71.0.3578.98\\x10\\xCA\\xFB\\xB0\\xE1\\x05\\x18\\x00 \\x1E(\\x00b\\x04GGLSj\\x0C\\x08\\x00\\x10\\x02\\x18\\x00 \\x048\\x05@\\x06\\x80\\x01\\xA0\\xE0\\x89\\xE1\\x05\\x90\\x01\\x1E\\x90\\x01\\x8C\\x01\\x90\\x01\\xCA\\x01\\x90\\x01\\x87\\x02\\x90\\x01\\xB0\\x02\\x90\\x01\\x8C\\x03\\x90\\x01\\xA2\\x03\\x90\\x01\\xB3\\x03\\x90\\x01\\xEA\\x03\\x90\\x01\\xF7\\x03\\x90\\x01\\xBF\\x04\\x90\\x01\\xD2\\x04\\x90\\x01\\xE6\\x06\\x90\\x01\\xE2\\x07\\x90\\x01\\xEA\\x07\\x98\\x01\\x01\\xBA\\x01\\x0C\\x15\\xFE\\xE5\\x1C\\x1A%\\x17\\xD8v!(\\x00\\xC2\\x01\\x0C\\x08\\x0B\\x12\\x039.1\\x1D\\xE7\\xDF\\xC7\"\\xC2\\x01\n"
		"\\x08\\x08\\x12\\x017\\x1Dlm\\xB1>\\xC2\\x01\\x13\\x08\\x0C\\x12\n"
		"36.184.200\\x1D\\xD6m\\x7F\\xCC\\xC2\\x01\r\\x08\n"
		"\\x12\\x044891\\x1D\\xF4f!>\\xC2\\x01\\x15\\x08\\x06\\x12\\x0C0.57.44.2492\\x1D=\\xC9ko\\xC2\\x01\\x0B\\x08\\x02\\x12\\x0225\\x1D+Z[\\x81\\xC2\\x01\\x10\\x08\\x03\\x12\\x070.0.0.0\\x1D\\x00\\x00\\x00\\x00\\xC2\\x01\\x13\\x08\\x04\\x12\n"
		"32.0.0.101\\x1D\\x84\\xB9\\x1C\\xD4\\xC2\\x01\\x10\\x08\\x07\\x12\\x070.0.0.0\\x1D\\x00\\x00\\x00\\x00\\xC2\\x01\\x14\\x08\r\\x12\\x0B4.10.1224.7\\x1D\\x00\\x00\\x00\\x00\\xC2\\x01\\x0C\\x08\t\\x12\\x03985\\x1D\\xAEl\\x9B=\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x05\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x01P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x01\\x18\\x01 \\x00(\\x000\\x008\\x01@\\x01H\\x01P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x06\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x06\\x18"
		"\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x06\\x10\n"
		"\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\n"
		"\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x02x\\x00\\x80\\x01\\x002\\x0F\tsh,\\xF9Rw\\x98e\\x10:\\x1A\\x02\\x10;2\\x17\t\\xF5\\x1E\\x9F\\x91\\x85?\\xB4\\xE1\\x10\t\\x1A\\x02\\x10\\x01\\x1A\\x02\\x10\\x03\\x1A\\x02\\x10\\x082\\x0F\t\\xF3\\xC4i\\xE0\\xB7y\\x9D7\\x1A\\x04\\x08\\x00\\x10\n"
		"2\\x0F\t\\xD6^\\xD0ys{\\xA4|\\x1A\\x04\\x08\\x00\\x10\n"
		"2\\x0F\t\\xB3\\x07t\\x8C\\xA8;\\xAD\\x96\\x1A\\x04\\x08\\x00\\x10\n"
		"2\\x1D\t\\x9C\\xA2\\x9A\n"
		"\\xA4r\\x1B\\x90\\x10$\\x1A\\x04\\x10\\x01 \\x04\\x1A\\x04\\x10\\x03 \\x04\\x1A\\x04\\x10\\x08 \\x042\\x1B\t<@? 6^h:\\x10\\x86\\x01\\x1A\\x06\\x08\\x00\\x10\n"
		" \\x03\\x1A\\x05\\x08q\\x10\\x8B\\x012\\x1B\t\\xE6\\xA8Z\\xA4,\\x0E\\xEF\\xF2\\x10\\x86\\x01\\x1A\\x06\\x08\\x00\\x10\n"
		" \\x03\\x1A\\x05\\x08q\\x10\\x8B\\x012\\x17\tv\\xD6\\x98\\xE1S\\xD6\\x15\\xAA\\x10\t\\x1A\\x02\\x10\\x01\\x1A\\x02\\x10\\x03\\x1A\\x02\\x10\\x082\\x13\tzf\\x0B\\xBC.M\\x7F\\x90\\x10\\x86\\x01\\x1A\\x05\\x08q\\x10\\x8B\\x012\\x13\t\\xDFO\\xB1\\x1E\\x01\\xB8\\x14\\x16\\x10\\x86\\x01\\x1A\\x05\\x08q\\x10\\x8B\\x012\\x13\t\\x01\\xDD;E\\xBF\\x1D\\xB7\\xAF\\x10\\x86\\x01\\x1A\\x05\\x08q\\x10\\x8B\\x012\\x1B\t#N\\xCB\\xC9\\xCD\\x96R\"\\x10\\x86\\x01\\x1A\\x06\\x08\\x00\\x10\n"
		" \\x03\\x1A\\x05\\x08q\\x10\\x8B\\x012\\x17\t\\xC4\\x08\\x80R\\x0Bt\\xAC\\xDF\\x10\t\\x1A\\x02\\x10\\x01\\x1A\\x02\\x10\\x03\\x1A\\x02\\x10\\x082\\x0F\t\\x1D;/j\\xCC#L\\xBD\\x1A\\x04\\x08\\x00\\x10\n"
		"2\\x0F\t\\xA9\\x1F\\xC9\\x98\\xC6<\\xD9l\\x1A\\x04\\x08\\x00\\x10\n"
		"2\\x0F\t\\x88\\xF1=ck\\x05W\\xF5\\x1A\\x04\\x08\\x00\\x10\n"
		"2\\x11\t\\x05\r\\xE7!'1\\xC1\\xCF\\x10)\\x1A\\x04\\x08(\\x1002\r\tYr8\\x94d_<\\xE1\\x1A\\x02\\x10\\x012\\x1C\t]\\xC9\\xBC\\x9D\\xB6\\x97\\xB4`\\x10\\xDC\\x01\\x1A\\x02\\x08(\\x1A\\x04\\x080 \\x02\\x1A\\x04\\x089\\x10D2\\x17\tiy|Q\\x91\\xE9\\xB0z\\x10\t\\x1A\\x02\\x10\\x01\\x1A\\x02\\x10\\x03\\x1A\\x02\\x10\\x082\\x0F\t\\xAC\\xE0\\xD6\\x1A^O8\\xE2\\x1A\\x04\\x08\\x00\\x10\n"
		"2\\x0F\t\r^\\xFB{C\\x94\\x92!\\x1A\\x04\\x08\\x00\\x10\n"
		"2\\x0F\t5\\xAB\\x0C\\xB9\\xD8.\\x16{\\x1A\\x04\\x08\\x00\\x10\n"
		"2\\x0F\t\\xCA\\xC2\\x12\\x17*V\\xFFZ\\x10\\x03\\x1A\\x02\\x10\\x042\\x0F\t\\xCF\\xA7i\\xAB\\xC4\\x18\\xC8\\\\\\x10\\x03\\x1A\\x02\\x10\\x042\\x0F\t\\xCEHQ\\x01\\xCA\\xA0\\xE0\\xD3\\x1A\\x04\\x10\\x01 \\x022\\x0F\t\\xBF\\xFA\\x7F\\xD3\\x9B\\xA0\\xEF\\xF9\\x1A\\x04\\x10\\x01 \\x032\\x11\tr\\xE3@\\x88\\x12a\\xC1\\xF0\\x10\t\\x1A\\x04\\x10\\x04 \\x032\r\t\\xD1\\xA0\\xC7b\\x0FZNH\\x1A\\x02\\x10\\x012\\x0F\t\\x12\\xBA@D\\xA8\\xAD\\xC6\\x98\\x10\\x02\\x1A\\x02\\x10\\x032\\x0F\t\\x93p\\xC5\\xF2\\x1C\\x81\\xF6\\xE2\\x1A\\x04\\x10\\x01 \\x022\\x0F\t2\\x11\\xCD\\xB4\\xBBy\\xCE\\xB3\\x1A\\x04\\x10\\x01 \\x022\r\tK8\\x1B\\xF6Tl\\x18}\\x1A\\x02\\x10\\x012\\x0F\t\\xFEf\\xC0\\xFE\\xFA\\xC4}\\x12\\x1A\\x04\\x10\\x01 \\x022\r\t\\x83\\xF5!L\\xC0\\xCB\n"
		"\\xF9\\x1A\\x02\\x10\\x012\\x0F\t\\x15T\\x8F\\xE9\\xE1\\xC4\\xECc\\x10\\x04\\x1A\\x02\\x10\\x052\r\t\\xD4\\x83X\\xCD\\xA2\\xA4\\x89\\x85\\x1A\\x02\\x10\\x01",
		LAST); 
	*/

	web_add_header("X-Chrome-UMA-Log-SHA1", 
		"D5FAA8EFA518894C27C43E332A8DCE53FEB15B4F");

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

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(27);

	web_url("www.way2sms.com_2", 
		"URL=http://www.way2sms.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"http://www.way2sms.com");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(23);

	web_submit_data("re-login", 
		"Action=http://www.way2sms.com/re-login", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=http://www.way2sms.com/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=mobileNo", "Value=8866552861", ENDITEM, 
		"Name=password", "Value=A2798F", ENDITEM, 
		"Name=CatType", "Value=", ENDITEM, 
		"Name=redirectPage", "Value=", ENDITEM, 
		"Name=pid", "Value=", ENDITEM, 
		LAST);

	lr_think_time(15);

	web_submit_data("re-login_2", 
		"Action=http://www.way2sms.com/re-login", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=http://www.way2sms.com/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=mobileNo", "Value=9966552861", ENDITEM, 
		"Name=password", "Value=A2798F", ENDITEM, 
		"Name=CatType", "Value=", ENDITEM, 
		"Name=redirectPage", "Value=", ENDITEM, 
		"Name=pid", "Value=", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("send-sms", 
		"URL=http://www.way2sms.com/send-sms", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.way2sms.com/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("getContacts", 
		"URL=http://www.way2sms.com/getContacts?token=undefined&_=1546410058046", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.way2sms.com/send-sms", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_header("Origin", 
		"http://www.way2sms.com");

	web_custom_request("GroupContacts", 
		"URL=http://www.way2sms.com/GroupContacts", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.way2sms.com/send-sms", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_add_header("Purpose", 
		"prefetch");

	web_url("container.html", 
		"URL=http://tpc.googlesyndication.com/safeframe/1-0-31/html/container.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.way2sms.com/send-sms", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("container.html_2", 
		"URL=http://tpc.googlesyndication.com/safeframe/1-0-31/html/container.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=http://www.way2sms.com/send-sms", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_url("adview", 
		"URL=https://securepubads.g.doubleclick.net/pagead/adview?ai="
		"CBotQclgsXOWXA9OZrQHVh42YAYeH3dFU_POGn5wIv-EeEAEg4_30ImDlyuWDtA6gAfDwlfoDyAEJ4AIAqAMByAMIqgTjAU_QY7o1iYMLNeLYHxNUn2yH8BtC6p-StM8jBxBBboOv2m0b3batrpZ4ZqBHZcSizDBL2HEENmvut3OybeOT_Vao3oOLCqYEVMzdDkeZFHBdyfrD0IpZ8fUnazQr3n2AvAVl_MTQZRXs25CrjpK0JdhASyMnSaTdU4zA3D9mes7f-fbHgyB9gg8snoMlaV9wayAiu-ncTBFu7f78F_6auCwjkORDBt91sNJc8uW0OEdCZvL9rF3tbIQ1eCrLn3sii5Fcs4jIFJGi43R2Dd5FSVSbEri7whbcI9aGkKa3VpenWHDmwASyzIqw3gHgBAGSBQQIBBgBkgUECAUYBJIFBAgFGBiSBQUIBRioAaAGLoAH7dGKN6gHjs4bqAeoBqgH2csbqAfPzBuoB6a-G9gHAPIHB"
		"BDM9CzSCAcIgGEQARgBgAoB2BMK&sigh=sKPN0l3chJg&template_id=494&tpd=AGWhJms6WiEZhY8iK_dx0n4uorljcsUAWdkJnvArrmgZtbbjEQ", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://tpc.googlesyndication.com/safeframe/1-0-31/html/container.html", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("s", 
		"URL=https://googleads.g.doubleclick.net/pagead/drt/s?v=r20120211", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://tpc.googlesyndication.com/safeframe/1-0-31/html/container.html", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"http://www.way2sms.com");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("getMsgGreatings", 
		"URL=http://www.way2sms.com/getMsgGreatings", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.way2sms.com/send-sms", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=id=1546410059386&catgid=8&catName=New Year&pageNo=0&totCount=0", 
		LAST);

	lr_think_time(124);

	web_url("conversion", 
		"URL=https://googleads.g.doubleclick.net/pagead/conversion/?ai="
		"CgAMRclgsXOWXA9OZrQHVh42YAYeH3dFU_POGn5wIv-EeEAEg4_30ImDlyuWDtA6gAfDwlfoDyAEJ4AIAqAMByAMIqgTmAU_QY7o1iYMLNeLYHxNUn2yH8BtC6p-StM8jBxBBboOv2m0b3batrpZ4ZqBHZcSizDBL2HEENmvut3OybeOT_Vao3oOLCqYEVMzdDkeZFHBdyfrD0IpZ8fUnazQr3n2AvAVl_MTQZRXs25CrjpK0JdhASyMnSaTdU4zA3D9mes7f-fbHgyB9gg8snoMlaV9wayAiu-ncTBFu7f78F_6auCwjkORDBt91sNJc8uW0OEdCZvL9rF3tbIQ1eCrLn3sii5Fcs4jIFJGi43R2Dd5FSVSbEri7whbcI9aGkKa3VpenWHDmk4Ke4AQBoAYugAft0Yo3qAeOzhuoB6gGqAfZyxuoB8_MG6gHpr4b2AcA0ggHCIBhEAEYAbEJPPLttipH1EGACgHYEwo&sigh="
		"1vOjsr7l1Xs&label=window_focus&gqid&qqid=COWYycS6zt8CFdNMKwod1UMDEw&fg=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://tpc.googlesyndication.com/safeframe/1-0-31/html/container.html", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"http://www.way2sms.com");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(32);

	web_submit_data("smstoss", 
		"Action=http://www.way2sms.com/smstoss", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=http://www.way2sms.com/send-sms", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=Token", "Value=3417BBE157150F7705FCF7C7ED06C846", ENDITEM, 
		"Name=message", "Value=HI", ENDITEM, 
		"Name=toMobile", "Value=9948897938", ENDITEM, 
		"Name=ssaction", "Value=undefined", ENDITEM, 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("send-sms_2", 
		"URL=http://www.way2sms.com/send-sms", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.way2sms.com/send-sms", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("X-Goog-Update-AppId", 
		"mimojjlkmoijpicakmndhoigimigcmbb,oimompecagnajdejgnnjijobebaeigek,hnimpnehoodheedghdeeijklkeaacbdc,hfnkpimlhhgieaddgfemjhofmfblmnib,llkgjffcdpffmhiakmfcdcblohccpfmo,ojjgnpkioondelmggbekfhllhdaimnho,khaoiebndkojlmppeemjhbpbandiljpe,giekcmmlnklenlaomppkphknjmnnpneh,gcmjkmgdlgnkkcocmoeiminaijmmjnii,gkmgaooipdjhmangpemjhigmamcehddo,aemomkdncapdnfajjbbcbdebjljbpmpj,copjbmjbojbakpaedmpkhmiplmmehfck,npdjjkjlcidkjlamlmmdelcjbcpdjocm");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-71.0.3578.98");

	web_custom_request("update2", 
		"URL=https://update.googleapis.com/service/update2?cup2key=8:3198305222&cup2hreq=d5d2992a089287f3120adc330a529cfc5d43b4a110eccf778b7b4abacb97742c", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"EncType=application/xml", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><request protocol=\"3.1\" dedup=\"cr\" acceptformat=\"crx2,crx3\" sessionid=\"{f20a9baa-72dc-4fc8-8729-0be2c6216e34}\" requestid=\"{011b1b8e-4a06-49b1-9203-e7e7ecc22dfb}\" updater=\"chrome\" updaterversion=\"71.0.3578.98\" prodversion=\"71.0.3578.98\" lang=\"en-US\" updaterchannel=\"\" prodchannel=\"\" os=\"win\" arch=\"x64\" nacl_arch=\"x86-64\" domainjoined=\"0\"><hw physmemory=\"8\"/><os platform=\"Windows\" arch=\"x86_64\" version=\"10.0.10586.0\""
		"/><updater autoupdatecheckenabled=\"1\" ismachine=\"1\" lastchecked=\"0\" laststarted=\"0\" name=\"Omaha\" updatepolicy=\"-1\" version=\"1.3.33.23\"/><app appid=\"mimojjlkmoijpicakmndhoigimigcmbb\" version=\"32.0.0.101\" brand=\"GGLS\" cohort=\"1:d0j:\" cohortname=\"Chrome [M50... M99]\" enabled=\"1\"><updatecheck/><ping rd=\"4383\" ping_freshness=\"{eea02091-cd71-46bc-8f44-37c10025b2d1}\"/><packages><package fp=\"1.d41cb98407fbfbab5ddfaaa32738f33fe243d677e02a37771aac55d9d25e3ee8\"/></packages></"
		"app><app appid=\"oimompecagnajdejgnnjijobebaeigek\" version=\"4.10.1224.7\" brand=\"GGLS\" enabled=\"1\"><updatecheck/><ping rd=\"4383\" ping_freshness=\"{70ed091c-2bd3-4530-a348-44211a720d35}\"/></app><app appid=\"hnimpnehoodheedghdeeijklkeaacbdc\" version=\"0.57.44.2492\" brand=\"GGLS\" enabled=\"1\"><updatecheck/><ping rd=\"4383\" ping_freshness=\"{e90ee9ce-2f55-45f5-a8c0-f1fb7d3c0724}\"/><packages><package fp=\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"/></packages></"
		"app><app appid=\"hfnkpimlhhgieaddgfemjhofmfblmnib\" version=\"4891\" brand=\"GGLS\" cohort=\"1:jcl:\" cohortname=\"Auto\" enabled=\"1\"><updatecheck/><ping rd=\"4383\" ping_freshness=\"{b92f1048-f43b-447d-904d-96bbb4098902}\"/><packages><package fp=\"1.3e2166f4cf34eb93e6166a68c40d026a9c9f9ca52be4d4a5f7e9fdf058fffed0\"/></packages></app><app appid=\"llkgjffcdpffmhiakmfcdcblohccpfmo\" version=\"0.0.0.0\" brand=\"GGLS\" enabled=\"1\"><updatecheck/><ping rd=\"4383\" ping_freshness=\""
		"{042ac30a-105a-487a-bbc6-a060c8b4153b}\"/></app><app appid=\"ojjgnpkioondelmggbekfhllhdaimnho\" version=\"985\" brand=\"GGLS\" cohort=\"1:0:\" cohortname=\"Auto\" enabled=\"1\"><updatecheck/><ping rd=\"4383\" ping_freshness=\"{b0e51e9d-d682-43b4-9cd1-62de4798146b}\"/><packages><package fp=\"1.3d9b6cae85e4c68e59a7ea3b7504e55c1b0be0653a9827f06d347ce87ad4d142\"/></packages></app><app appid=\"khaoiebndkojlmppeemjhbpbandiljpe\" version=\"25\" brand=\"GGLS\" cohort=\"1:cux:\" cohortname=\"Auto\" enabled"
		"=\"1\"><updatecheck/><ping rd=\"4383\" ping_freshness=\"{651af0ce-0244-4088-8ca9-b93c449cf634}\"/><packages><package fp=\"1.815b5a2b23570dc334a9bddc75f39bfa017e8abc639a80850053b0a0701b2d8c\"/></packages></app><app appid=\"giekcmmlnklenlaomppkphknjmnnpneh\" version=\"7\" brand=\"GGLS\" cohort=\"1:j5l:\" cohortname=\"Auto\" enabled=\"1\"><updatecheck/><ping rd=\"4383\" ping_freshness=\"{8ea15d2a-75d7-45ac-8465-d79fc2c1071f}\"/><packages><package fp=\""
		"1.3eb16d6c28b502ac4cfee8f4a148df05f4d93229fa36a71db8b08d06329ff18a\"/></packages></app><app appid=\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\" version=\"9.1\" brand=\"GGLS\" cohort=\"1:bm1:\" cohortname=\"M54ToM99\" enabled=\"1\"><updatecheck/><ping rd=\"4383\" ping_freshness=\"{dd1e4e77-7985-4b99-ae0d-3548ea11d733}\"/><packages><package fp=\"1.22c7dfe769f240e50080a6aad4e3412dbb5603194c5237847147f223fd230be9\"/></packages></app><app appid=\"gkmgaooipdjhmangpemjhigmamcehddo\" version=\"36.184.200\" brand="
		"\"GGLS\" tag=\"stable_eset\" cohort=\"1:lsl:\" cohortname=\"ESET Stable\" enabled=\"1\"><updatecheck/><ping rd=\"4383\" ping_freshness=\"{10a88764-f77a-48b7-9832-4fe0ef915211}\"/><packages><package fp=\"1.cc7f6dd639126c8dc7f24a0ed3be27c7a3e9b6a2ca2ed6de0d450ceb311f1be7\"/></packages></app><app appid=\"aemomkdncapdnfajjbbcbdebjljbpmpj\" version=\"1.0.4.0\" brand=\"GGLS\" enabled=\"1\"><updatecheck/><ping rd=\"4383\" ping_freshness=\"{f4657576-be4c-4ecc-a7f1-b34700726846}\"/><packages><package fp=\""
		"1.e8b89decb6a9092d1a53e8c75f566d3b01c9ff0f58857b502e914a24fc56c82e\"/></packages></app><app appid=\"copjbmjbojbakpaedmpkhmiplmmehfck\" version=\"2018.9.6.0\" brand=\"GGLS\" cohort=\"1:p1x:\" cohortname=\"Auto\" enabled=\"1\"><updatecheck/><ping rd=\"4383\" ping_freshness=\"{221bf94b-b713-42ce-a481-314b8f9f2836}\"/><packages><package fp=\"1.207921137eee9c0831e0bd890330986c10dfd9382034491b82de3f86ae6915f7\"/></packages></app><app appid=\"npdjjkjlcidkjlamlmmdelcjbcpdjocm\" version=\"0.0.0.0\" brand="
		"\"GGLS\" enabled=\"1\"><updatecheck/><ping rd=\"4383\" ping_freshness=\"{f82dbd2c-3178-4401-a5ec-c23a87133793}\"/></app></request>", 
		LAST);

	web_url("adview_2", 
		"URL=https://securepubads.g.doubleclick.net/pagead/adview?ai="
		"CpRz9RVksXMyCK9P_rAHn6L6gAYav67JUz9K51JII-LSM5tMIEAEg4_30ImDlyuWDtA6gAbGSoc8DyAEBqQI27HN9j-1OPuACAKgDAcgDCqoE6QFP0GK0ixBhR1ZI_R5ivMCNQRsfK3wXAz5rQDXsxplbrvd0lpTGu6PQ84amO9JDGkzpmg7EsN7V9icT7xz_OpLZGkDxtlPLExLxPnY4YsOgMkARrntJAhlI1WpuFtDjchg8W47S3EkTueO5h9yPhUyx7QcPyELAhbqkfBri6tEkR0DvqH_EtrGCjUeMh2VOzjSYKAK-JbFkdmhRuaUjL94j09N_i1hHS7F6lJX2J7KjEuF2DhaZUNq-2ndKt5GtjH10xT-fPWfMWCLZqHXL7emVwytk7KV-8ob_LbLngkQ6hG0KAEOjhq6zA8AE3I7h8-0B4AQBkgUECAQYAZIFBAgFGASAB56ashyoB47OG6gH1ckbqAeoBqgHudIbqAe6BqgH2csbq"
		"AfPzBuoB6a-G9gHAfIHBBCduGbSCAcIgGEQARgBgAoB2BMC&sigh=IeJhb7mhqb8&tpd=AGWhJmuGtVKkZ_3pph0suXALhgObG58xcRT8gG69cjOh0alDeA", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.way2sms.com/send-sms", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("getContacts_2", 
		"URL=http://www.way2sms.com/getContacts?token=undefined&_=1546410275760", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.way2sms.com/send-sms", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Purpose", 
		"prefetch");

	web_url("container.html_3", 
		"URL=http://tpc.googlesyndication.com/safeframe/1-0-31/html/container.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=http://www.way2sms.com/send-sms", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"http://www.way2sms.com");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("GroupContacts_2", 
		"URL=http://www.way2sms.com/GroupContacts", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.way2sms.com/send-sms", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_url("l", 
		"URL=https://www.google.com/ads/measurement/l?ebcid=ALh7CaRGrFlDTDc53yDim2hmW8GVCz7fK9GK7R0nr_nL7-fvcskuRI5dUVRa2Od_63RYzp1nQcowG8Hebe80j-xAjj5TIpSbyg", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.way2sms.com/send-sms", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ui", 
		"URL=https://www.google.com/pagead/drt/ui", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(15);

	web_url("Logout", 
		"URL=http://www.way2sms.com/Logout", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.way2sms.com/send-sms", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}