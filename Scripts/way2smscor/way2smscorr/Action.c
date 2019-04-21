Action()
{

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");
	
/* home page */
	
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

	web_revert_auto_header("Accept-Language");

	lr_think_time(32);

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
		"BodyBinary=\t\\xB0\\xDE\\x84\\xB9\\x0C\\xF5\\xB5\\x9E\\x10&\\x1A\\xC9\\x10\\x08\\xD0\\x88\\xBD\\xE0\\x05\\x12\\x0F71.0.3578.98-64\\x18\\xF0\\x8B\\x89\\xE1\\x05\"\\x05en-US*\\x18\n\nWindows NT\\x12\n10.0.105862\\x8E\\x01\n\\x06x86_64\\x10\\xB6>\\x18\\x80\\x80\\xB0\\x8E\\xA2\\xFF\\x1F\"\\x00(\\x010\\x80\\x088\\x80\\x06B@\\x08\\x86\\x81\\x02\\x10F\\x1A\\x0C10.0.10586.0\"\t6-21-20062\\x0BGoogle Inc.:\\x12Google SwiftShaderM\\xF67\\x97BU\\xEB\\x1A\\xC9Be\\x00\\x00\\x80?j\\x14\n"
		"\\x0CGenuineIntel\\x10\\xD5\\x8C\\x08\\x18\\x04\\x82\\x01\\x02\\x08\\x01\\x8A\\x01\\x02\\x08\\x01:5\n\\x0FShockwave Flash\\x12\\x12pepflashplayer.dll\\x1A\n32.0.0.101 \\x00(\\x01:;\n\\x11Chrome PDF Viewer\\x12 mhjfbmdgcfjbbpaeojofohoefgiehjai\\x1A\\x00 \\x00(\\x00:+\n\rNative Client\\x12\\x14internal-nacl-plugin\\x1A\\x00 \\x00(\\x01:.\n\\x11Chrome PDF Plugin\\x12\\x13internal-pdf-viewer\\x1A\\x00 \\x00(\\x01B\\x00J\n\r\\xC2\\xB6\\xD3\\xB7\\x15\\xDF\\x17J?J\n\r\\xD3\\xB0\\x1A\\xD0\\x15\\x80\\x8D}"
		"\\xCAJ\n\r&\\xCF\\xEBs\\x15\\xA2\\xE6\\xED\\x12J\n\r\\xD4\\x11\r\\x1A\\x15\\xDF\\xEB\\x9F/J\n\rR\\xB5j+\\x15\\x80\\x8D}\\xCAJ\n\r\\x9D>\\xDFf\\x15\\xA4pp`J\n\r\\xFC\\x14\\xEB\\xEB\\x15\\xDF\\x17J?J\n\rLR\\xE2\\xB7\\x15\\x7FF\\x81\\x11J\n\r\\x1Eq\\x1CA\\x15\\xEA\\x1D=\\xF2J\n\r\\x7F\\x82 \\xCC\\x15\\x80\\x8D}\\xCAJ\n\r\\x95\\xAA\\x950\\x15\\xDF\\x17J?J\n\r1\\xEC\\x7F\\xC2\\x15\\xD9n[-J\n\r\\x06\\xC9\\x1B|\\x15tyZ\\xF5J\n\r\\\\6\\xEF\\x9D\\x15\\x80\\x8D}\\xCAJ\n\r\\xDB\\xD3\\xE5G\\x15\\xF4\\xF4G=J\n"
		"\rh\\x7F[\\x12\\x15\\xA5p\\x81\\x89J\n\r\\xB7\\xDFB\\xD4\\x15\\x80\\x8D}\\xCAJ\n\r\\xB8\\xA1\\x82\\xA5\\x15\\x17\\xCEu\\xADJ\n\r\\\\\\xB3M\\x8F\\x15\\x80\\x8D}\\xCAJ\n\r\\x8A2\\xE11\\x15\\x80\\x8D}\\xCAJ\n\r\\x01Ql\\xE5\\x15E\\xF3`}J\n\r\\x17\\x10\\x01\\xAA\\x15\\xDF\\x17J?J\n\r\\x8D\\xA5J3\\x15\\xDF\\x17J?J\n\r\\xC5\\xF7\\xBC\\xED\\x15,1\\xC1\\x1CJ\n\rM\\xFC\\x85T\\x15\\x80\\x8D}\\xCAJ\n\r\\xCA\\x1Ds\\x93\\x15\\xF4\\xF4G=J\n\r\\x8D\\x1A\\xA0\\x87\\x15\\x80\\x8D}\\xCAJ\n\rWBL\\x9B\\x15\\x80\\x8D}"
		"\\xCAJ\n\r;-\\xF6C\\x15\\x1C4\\x87\\xC2J\n\r\\xF4\\x80\\xE3J\\x15\\x80\\x8D}\\xCAJ\n\r\\xF1u\\\\\\x9E\\x15\\x1B\\x00\\x89\\xA5J\n\rq\\xB5@\\xED\\x15\\xF3\\xB0\\x9E\\xAEJ\n\rq\\xF6rh\\x15\\xE1\\xE1\\x91\tJ\n\r\\x8FI,\\x7F\\x15\\xAF\\x8F\\xB6\\x13J\n\r\\x96\\xFD\\x86+\\x15\\xDF\\x17J?J\n\r\\x14\\x8B\\xB0\\x02\\x15\\x80\\x8D}\\xCAJ\n\r\\xA5p\\xCD\\xD1\\x15\\x80\\x8D}\\xCAJ\n\r\\xA9b%\\xD9\\x15\\x87\\xAC/MJ\n\r&\\x986\\xFC\\x15\\xDF\\x17J?J\n\r\\xA5m\\xA4z\\x15P\\xB1F\\xC9J\n\r"
		"\\x1F\\xA8c\\xB3\\x15\\x83u\\x93\\xBAJ\n\r\\xA1m$g\\x15\\x80\\x8D}\\xCAJ\n\r\\x06\\xEBT\\xCC\\x15QY}CJ\n\r\\xE3%\\xA0X\\x15,{\\xE96J\n\r\\xF9 \\xD2\\xD4\\x15\\x89\\xBA\\x10\\x1CJ\n\r\\x9F\\x04\\x86U\\x15\\xDF\\x17J?J\n\rM\\xB5\\xB9Q\\x15\\x80\\x8D}\\xCAJ\n\r\\xA6^4\\x07\\x15\\x80\\x8D}\\xCAJ\n\r\\xCE7\\xC3K\\x15\\xDF\\x17J?J\n\r\\x85\\xDAT\\x13\\x15\\xDCd\\xA8\\xF1J\n\r`\\x87MI\\x15C]2RJ\n\r*\\xE8z\\xF4\\x15\\xE5.\\xF2\\x86J\n\rU\\x08\\xC6:\\x15\\x9C*nHJ\n\r\\x0C\\x19\\x96\\xF2\\x15c(\\x82\\xA5J\n"
		"\r\\xE2\\xAABD\\x15v\\x19;nJ\n\rw\\xD3\\xD1\\x0E\\x15\\x14\\x0F\\xCC\\xE1J\n\r\\xA0\\xF0\\xF0u\\x15u\\x05\\xD6JJ\n\r\\x81\\x84\\xB1\\xE2\\x15<\\xB1\\xF6\\xD7J\n\r\\x89\\x18\\xE7\\xE7\\x15u\\x05\\xD6JJ\n\ro\\xB0\\xCE\\xB1\\x154#7\\xD1J\n\rq5\\x96\\x85\\x15\\x80\\x8D}\\xCAJ\n\r$\\x86\\xE6\\x94\\x15\\xC4\\x8F?\\x80J\n\r\\xA1\\xF8s\\xCC\\x15\\x80\\x8D}\\xCAJ\n\r-\\x89\\xE8\\xB4\\x15\\x80\\x8D}\\xCAJ\n\r\\xEB\\x11\\xA3\\x10\\x15\\x80\\x8D}\\xCAJ\n\r\\xCA\\xFC4\\x88\\x15\\xF1]\\x97(J\n\r"
		"i\\xE4\\x04b\\x15o\\xB8r\\xE8J\n\r\\x7F\\x89\\xC6\\x81\\x15o\\xB8r\\xE8P\\x04ZC\\x08\\x01\\x10\\xF4\\xDA\\xB3\\xE1\\x05\\x18\\xCC\\xA1\\xB3\\xE1\\x05\"\\x17\n\t1.3.33.23\\x10\\xCC\\xA1\\xB3\\xE1\\x05\\x18\\x00 \\x00(\\x00*\\x1A\n\\x0C71.0.3578.98\\x10\\xCC\\xA1\\xB3\\xE1\\x05\\x18\\x00 \\x1E(\\x00b\\x04GGLSj\\x0C\\x08\\x00\\x10\\x02\\x18\\x00 "
		"\\x058\\x05@\\x06\\x80\\x01\\xA0\\xE0\\x89\\xE1\\x05\\x90\\x01\\x1E\\x90\\x01\\x8C\\x01\\x90\\x01\\xCA\\x01\\x90\\x01\\x87\\x02\\x90\\x01\\xB0\\x02\\x90\\x01\\x8C\\x03\\x90\\x01\\xA2\\x03\\x90\\x01\\xB3\\x03\\x90\\x01\\xEA\\x03\\x90\\x01\\xF7\\x03\\x90\\x01\\xBF\\x04\\x90\\x01\\xD2\\x04\\x90\\x01\\xE6\\x06\\x90\\x01\\xE2\\x07\\x90\\x01\\xEA\\x07\\x98\\x01\\x01\\xBA\\x01\\x0C\\x15\\xFE\\xE5\\x1C\\x1A%\\x17\\xD8v!(\\x00\\xC2\\x01\\x0C\\x08\\x0B\\x12\\x039.1\\x1D\\xE7\\xDF\\xC7\"\\xC2\\x01\n"
		"\\x08\\x08\\x12\\x017\\x1Dlm\\xB1>\\xC2\\x01\\x13\\x08\\x0C\\x12\n36.184.200\\x1D\\xD6m\\x7F\\xCC\\xC2\\x01\r\\x08\n\\x12\\x044891\\x1D\\xF4f!>\\xC2\\x01\\x15\\x08\\x06\\x12\\x0C0.57.44.2492\\x1D=\\xC9ko\\xC2\\x01\\x0B\\x08\\x02\\x12\\x0225\\x1D+Z[\\x81\\xC2\\x01\\x10\\x08\\x03\\x12\\x070.0.0.0\\x1D\\x00\\x00\\x00\\x00\\xC2\\x01\\x13\\x08\\x04\\x12\n32.0.0.101\\x1D\\x84\\xB9\\x1C\\xD4\\xC2\\x01\\x10\\x08\\x07\\x12\\x070.0.0.0\\x1D\\x00\\x00\\x00\\x00\\xC2\\x01\\x14\\x08\r"
		"\\x12\\x0B4.10.1224.7\\x1D\\x00\\x00\\x00\\x00\\xC2\\x01\\x0C\\x08\t\\x12\\x03986\\x1D\\x84uh\\xDA\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x05\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x01\\x18\\x02 \\x00"
		"(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x01P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x01\\x18\\x01 \\x00(\\x000\\x008\\x01@\\x01H\\x01P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x06\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x06\\x18\\x02 "
		"\\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00"
		"(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x06\\x10\n\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x01\\x18\\x02 \\x00"
		"(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\n\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x02x\\x00\\x80\\x01\\x002\r\tVM\\xC4\\xD3\\xE0\\x1D],\\x1A\\x02\\x10\\x012\\x0F\t\\xEB\\x82h-\\xB8\\x12\\x0E\\xFC\\x10\\x01\\x1A\\x02\\x10\\x02", 
		LAST);



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
		"Snapshot=t6.inf",
		"Mode=HTML",
		"EncType=application/vnd.chrome.uma",
		"ContentEncoding=gzip",
		body_variable_1,
		LAST); 
	*/

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
		"Snapshot=t7.inf",
		"Mode=HTML",
		"EncType=application/vnd.chrome.uma",
		"ContentEncoding=gzip",
		"BodyBinary=\t\\xB0\\xDE\\x84\\xB9\\x0C\\xF5\\xB5\\x9E\\x10'\\x1A\\xCC\\x10\\x08\\xD0\\x88\\xBD\\xE0\\x05\\x12\\x0F71.0.3578.98-64\\x18\\xF0\\x8B\\x89\\xE1\\x05\"\\x05en-US*\\x18\n"
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
		"\r\\xFC\\x14\\xEB\\xEB\\x15\\xDF\\x17J?J\n"
		"\rLR\\xE2\\xB7\\x15\\x7FF\\x81\\x11J\n"
		"\r\\x1Eq\\x1CA\\x15\\xEA\\x1D=\\xF2J\n"
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
		"\r\\x8D\\xA5J3\\x15\\xDF\\x17J?J\n"
		"\r\\xC5\\xF7\\xBC\\xED\\x15,1\\xC1\\x1CJ\n"
		"\rM\\xFC\\x85T\\x15\\x80\\x8D}\\xCAJ\n"
		"\r\\xCA\\x1Ds\\x93\\x15\\xF4\\xF4G=J\n"
		"\r\\x8D\\x1A\\xA0\\x87\\x15\\x80\\x8D}\\xCAJ\n"
		"\rWBL\\x9B\\x15\\x80\\x8D}\\xCAJ\n"
		"\r;-\\xF6C\\x15\\x1C4\\x87\\xC2J\n"
		"\r\\xF4\\x80\\xE3J\\x15\\x80\\x8D}\\xCAJ\n"
		"\r\\xF1u\\\\\\x9E\\x15\\x1B\\x00\\x89\\xA5J\n"
		"\rq\\xB5@\\xED\\x15\\xF3\\xB0\\x9E\\xAEJ\n"
		"\rq\\xF6rh\\x15\\xE1\\xE1\\x91\tJ\n"
		"\r\\x8FI,\\x7F\\x15\\xAF\\x8F\\xB6\\x13J\n"
		"\r\\x96\\xFD\\x86+\\x15\\xDF\\x17J?J\n"
		"\r\\x14\\x8B\\xB0\\x02\\x15\\x80\\x8D}\\xCAJ\n"
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
		"\rM\\xB5\\xB9Q\\x15\\x80\\x8D}\\xCAJ\n"
		"\r\\xA6^4\\x07\\x15\\x80\\x8D}\\xCAJ\n"
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
		"\r\\x7F\\x89\\xC6\\x81\\x15o\\xB8r\\xE8P\\x04ZC\\x08\\x01\\x10\\xF4\\xDA\\xB3\\xE1\\x05\\x18\\xCC\\xA1\\xB3\\xE1\\x05\"\\x17\n"
		"\t1.3.33.23\\x10\\xCC\\xA1\\xB3\\xE1\\x05\\x18\\x00 \\x00(\\x00*\\x1A\n"
		"\\x0C71.0.3578.98\\x10\\xCC\\xA1\\xB3\\xE1\\x05\\x18\\x00 \\x1E(\\x00b\\x04GGLSj\\x0C\\x08\\x00\\x10\\x02\\x18\\x00 \\x058\\x05@\\x06\\x80\\x01\\xA0\\xE0\\x89\\xE1\\x05\\x90\\x01\\x1E\\x90\\x01\\x8C\\x01\\x90\\x01\\xCA\\x01\\x90\\x01\\x87\\x02\\x90\\x01\\xB0\\x02\\x90\\x01\\x8C\\x03\\x90\\x01\\xA2\\x03\\x90\\x01\\xB3\\x03\\x90\\x01\\xEA\\x03\\x90\\x01\\xF7\\x03\\x90\\x01\\xBF\\x04\\x90\\x01\\xD2\\x04\\x90\\x01\\xE6\\x06\\x90\\x01\\xE2\\x07\\x90\\x01\\xEA\\x07\\x98\\x01\\x01\\xBA\\x01\\x0C\\x15\\xFE\\xE5\\x1C\\x1A%\\x17\\xD8v!(\\x00\\xC2\\x01\\x0C\\x08\\x0B\\x12\\x039.1\\x1D\\xE7\\xDF\\xC7\"\\xC2\\x01\n"
		"\\x08\\x08\\x12\\x017\\x1Dlm\\xB1>\\xC2\\x01\\x13\\x08\\x0C\\x12\n"
		"36.184.200\\x1D\\xD6m\\x7F\\xCC\\xC2\\x01\r\\x08\n"
		"\\x12\\x044891\\x1D\\xF4f!>\\xC2\\x01\\x15\\x08\\x06\\x12\\x0C0.57.44.2492\\x1D=\\xC9ko\\xC2\\x01\\x0B\\x08\\x02\\x12\\x0225\\x1D+Z[\\x81\\xC2\\x01\\x10\\x08\\x03\\x12\\x070.0.0.0\\x1D\\x00\\x00\\x00\\x00\\xC2\\x01\\x13\\x08\\x04\\x12\n"
		"32.0.0.101\\x1D\\x84\\xB9\\x1C\\xD4\\xC2\\x01\\x10\\x08\\x07\\x12\\x070.0.0.0\\x1D\\x00\\x00\\x00\\x00\\xC2\\x01\\x14\\x08\r\\x12\\x0B4.10.1224.7\\x1D\\x00\\x00\\x00\\x00\\xC2\\x01\\x0C\\x08\t\\x12\\x03986\\x1D\\x84uh\\xDA\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x05\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x01P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x01\\x18\\x01 \\x00(\\x000\\x008\\x01@\\x01H\\x01P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x06\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x06\\x18"
		"\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x06\\x10\n"
		"\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x01\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\n"
		"\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x01H\\x00P\\x00X\\x01`\\x00h\\x02x\\x00\\x80\\x01\\x002\\x0F\tsh,\\xF9Rw\\x98e\\x108\\x1A\\x02\\x1092\r\t\\x1FI\\xFF\\x88H9\\x94s\\x1A\\x02\\x10\\x012\\x17\t\\xF5\\x1E\\x9F\\x91\\x85?\\xB4\\xE1\\x10\t\\x1A\\x02\\x10\\x01\\x1A\\x02\\x10\\x03\\x1A\\x02\\x10\\x082\\x0F\t\\xF3\\xC4i\\xE0\\xB7y\\x9D7\\x1A\\x04\\x08\\x00\\x10\n"
		"2\\x0F\t\\xD6^\\xD0ys{\\xA4|\\x1A\\x04\\x08\\x00\\x10\n"
		"2\\x0F\t\\xB3\\x07t\\x8C\\xA8;\\xAD\\x96\\x1A\\x04\\x08\\x00\\x10\n"
		"2\\x17\tv\\xD6\\x98\\xE1S\\xD6\\x15\\xAA\\x10\t\\x1A\\x02\\x10\\x01\\x1A\\x02\\x10\\x03\\x1A\\x02\\x10\\x082\\x14\tzf\\x0B\\xBC.M\\x7F\\x90\\x10\\xC8\\x01\\x1A\\x06\\x08\\xAB\\x01\\x10\\xD2\\x012\\x14\t\\xDFO\\xB1\\x1E\\x01\\xB8\\x14\\x16\\x10\\xC8\\x01\\x1A\\x06\\x08\\xAB\\x01\\x10\\xD2\\x012\\x14\t\\x01\\xDD;E\\xBF\\x1D\\xB7\\xAF\\x10\\xC8\\x01\\x1A\\x06\\x08\\xAB\\x01\\x10\\xD2\\x012.\t\\x9C\\xA2\\x9A\n"
		"\\xA4r\\x1B\\x90\\x10\\xFE\\x01\\x1A\\x04\\x08\\x00 #\\x1A\\x04\\x08\\x01 \\x02\\x1A\\x04\\x10\\x03 &\\x1A\\x04\\x08\\x05 \\x1B\\x1A\\x02\\x08\\x06\\x1A\\x04\\x10\\x08 \\x052)\t<@? 6^h:\\x10\\x8D\\x06\\x1A\\x06\\x08\\x00\\x10\n"
		" \\x1F\\x1A\\x04\\x08=\\x10K\\x1A\\x03\\x08\\xAB\\x01\\x1A\\x08\\x08\\xD2\\x01\\x10\\x82\\x02 \\x022)\t\\xE6\\xA8Z\\xA4,\\x0E\\xEF\\xF2\\x10\\x8D\\x06\\x1A\\x06\\x08\\x00\\x10\n"
		" \\x1C\\x1A\\x04\\x08=\\x10K\\x1A\\x03\\x08\\xAB\\x01\\x1A\\x08\\x08\\xD2\\x01\\x10\\x82\\x02 \\x022'\t#N\\xCB\\xC9\\xCD\\x96R\"\\x10\\x8D\\x06\\x1A\\x04\\x08\\x00\\x10\n"
		"\\x1A\\x04\\x08=\\x10K\\x1A\\x03\\x08\\xAB\\x01\\x1A\\x08\\x08\\xD2\\x01\\x10\\x82\\x02 \\x022\\x17\t\\xC4\\x08\\x80R\\x0Bt\\xAC\\xDF\\x10\t\\x1A\\x02\\x10\\x01\\x1A\\x02\\x10\\x03\\x1A\\x02\\x10\\x082\\x11\t\\x1D;/j\\xCC#L\\xBD\\x10I\\x1A\\x04\\x08=\\x10K2\\x11\t\\xA9\\x1F\\xC9\\x98\\xC6<\\xD9l\\x10I\\x1A\\x04\\x08=\\x10K2\\x11\t\\x88\\xF1=ck\\x05W\\xF5\\x10I\\x1A\\x04\\x08=\\x10K2\\x11\t\\x05\r\\xE7!'1\\xC1\\xCF\\x10\\x13\\x1A\\x04\\x08\\x11\\x10\\x142\r\tYr8\\x94d_<\\xE1\\x1A\\x02\\x10\\x012\r\t\\x8BBn\\xFC\\x8ED\\xA8\\x9A\\x1A\\x02\\x10\\x012\\x0F\t\\xC3\\xEBT\\xFF\\xF7\\xD1\\xA4\\x16\\x10\\x08\\x1A\\x02\\x10\t2\r\t\\x9E\\x0BQ\tB\\xFD\\xD5\\xDA\\x1A\\x02\\x10\\x012\\x0F\tq\\x90{H\\xC55\\xCB\\x80\\x10\\x01\\x1A\\x02\\x10\\x022\\x15\te~]Cq\\x96\\xA4#\\x10\\x04\\x1A\\x04\\x10\\x01 \\x02\\x1A\\x02\\x10\\x052\"\t\\xEE-\\x88|p&fF\\x10\\x81\\x03\\x1A\\x06\\x08\\x06\\x10\\x08 \\x02\\x1A\\x04\\x087\\x10L\\x1A\\x06\\x08\\x9A\\x02\\x10\\x87\\x032\r\tE\\xB8\\x84\\xBD\\xE9PX%\\x1A\\x02\\x10\\x012\r\t\\x15#\\xF5QY"
		"\\x1BV\\xC0\\x1A\\x02\\x10\\x012\\x15\t\\x82\\xF4[|\\xC2\\x92\\xC7\\xA3\\x10\\x1E\\x1A\\x02\\x10\\x08\\x1A\\x04\\x08\\x14\\x10\\x182\r\t\\xF1\\xB1\\x9C\\xD7\\xA1=\\xE8m\\x1A\\x02\\x10\\x012&\tt|\\xBAg\\x0FR\\xDE\\xB5\\x10\\xC6\\x01\\x1A\\x04\\x10\\x01 \\x1B\\x1A\\x04\\x10\\x03 \\x1E\\x1A\\x04\\x08\\x05 \\x19\\x1A\\x02\\x08\\x06\\x1A\\x02\\x10\\x082\\x14\t\\x8F\\xCE\\xB0\\x90\\x1A\\x9F\\x13\\x91\\x10\\x80\\x02\\x1A\\x06\\x08\\xD2\\x01\\x10\\x82\\x022\\x1C\tI)&C\\x1F\\xF5t\\xFE\\x10\\x80\\x02\\x1A\\x06\\x08\\x00\\x10\n"
		" \\x19\\x1A\\x06\\x08\\xD2\\x01\\x10\\x82\\x022\\x1C\t\\x026Q|\\x9E=\\xB2\\xF4\\x10\\x80\\x02\\x1A\\x06\\x08\\x00\\x10\n"
		" \\x1A\\x1A\\x06\\x08\\xD2\\x01\\x10\\x82\\x022'\tiy|Q\\x91\\xE9\\xB0z\\x10\\x1D\\x1A\\x04\\x08\\x00 \\x05\\x1A\\x04\\x08\\x01 \\x02\\x1A\\x04\\x10\\x03 \\x05\\x1A\\x04\\x10\\x06 \\x02\\x1A\\x02\\x10\\x082\\x14\t\\xAC\\xE0\\xD6\\x1A^O8\\xE2\\x10\\xFC\\x01\\x1A\\x06\\x08\\xD2\\x01\\x10\\x82\\x022\\x1C\t\r^\\xFB{C\\x94\\x92!\\x10\\xFC\\x01\\x1A\\x06\\x08\\x00\\x10\n"
		" \\x02\\x1A\\x06\\x08\\xD2\\x01\\x10\\x82\\x022\\x1C\t5\\xAB\\x0C\\xB9\\xD8.\\x16{\\x10\\xFC\\x01\\x1A\\x06\\x08\\x00\\x10\n"
		" \\x04\\x1A\\x06\\x08\\xD2\\x01\\x10\\x82\\x022\\x17\tS\\x03\\x8C\\xB8\\x9B`50\\x10-\\x1A\\x04\\x08\\x06\\x10\\x08\\x1A\\x04\\x08'\\x1012\\x0F\t#\\xABY\\x1B\\xF4\\xC0\\xAD\\xE1\\x1A\\x04\\x10\\x01 \\x022\\x17\t\\x03vP\\xD5A\\x03B\\xD2\\x10d\\x1A\\x04\\x08\\x08\\x10\n"
		"\\x1A\\x04\\x08Q\\x10`2\r\t\\xC6!\\xE2\\x1C\\x02\\x1B\\x02M\\x1A\\x02\\x10\\x012\r\tU\\x8C?x$\\x88\\x02\\x18\\x1A\\x02\\x10\\x012\\x11\t\\x8DPiU\\xDE\\xD6\\xDD\\xA3\\x10e\\x1A\\x04\\x08`\\x10r2\\x10\t\\xE8\\xEDE\\xCA\\x16\\x97\\x95#\\x1A\\x05\\x10\\x01 \\xB0\\x032\\x10\t\\x08\\xDD\\x87\\x07\\x8Ei*\\x1D\\x1A\\x05\\x10\\x01 \\xB0\\x032\r\t^\\x11\\x1Cs\\xBD1\\xAD\\x14\\x1A\\x02\\x10\\x012\\x0F\t4\\x86f\\xDA\\xD8\\x99~\\xBC\\x10\\x01\\x1A\\x02\\x10\\x022\\x11\t\\xAF0EgMA\\xE2\\x07\\x10e\\x1A\\x04\\x08`\\x10r2\\x10\t\\xB8}m\\x08\\xC3#\\xE1C\\x1A\\x05\\x10\\x01 \\xC2\\x012\\x17\t\\xA3\\xCB\\x93\\xB49\\x89!\\xE9\\x10f\\x1A\\x04\\x08\\x06\\x10\\x08\\x1A\\x04\\x08L\\x10i2\r\t\\xF7\\x13V\\xE1\\x8A\\xE1\\x8C\\xBE\\x1A\\x02\\x10\\x012\"\t]\\xC9\\xBC\\x9D\\xB6\\x97\\xB4`\\x10\\xF9\\x06\\x1A\\x05\\x08r\\x10\\x87\\x01\\x1A\\x03\\x08\\xA0\\x01\\x1A\\x08\\x08\\xBE\\x01\\x10\\xE2\\x01 \\x032\\x14\t).\\x12\\x1Ds\\xB7\\xD1t\\x10\\xD45\\x1A\\x06\\x08\\xE6/\\x10\\xE1@2\r\tY\\x9F\\x8B\\xFBDR\\x91\\x9E\\x1A\\x02\\x10\\x012\r\t"
		"\\xD69\\xF4X\\xB4$8\\x92\\x1A\\x02\\x10\\x012\\x13\tX@\\xF5\\x9E\\xF0H\\xDDn\\x10\\x89\\x01\\x1A\\x05\\x08q\\x10\\x95\\x012\\x13\t\t\\xBB\\x01\\xE3\\x8F\\xC4R\\x97\\x10\\x89\\x01\\x1A\\x05\\x08q\\x10\\x95\\x012\\x0F\ty\\xD3\\xEF\\x94\\x92=\\xFDu\\x10\\x0F\\x1A\\x02\\x10\\x102\\x0F\t\\xC4I}\\x06^2[\\xC6\\x10\\x0F\\x1A\\x02\\x10\\x102\\x11\t\\x91\\xD6\\x04\\xE29\\x1B\\x1As\\x10d\\x1A\\x04\\x08W\\x10v2\\x0F\tG\\xF3\\xB9c\\x13\\xF81\\xC0\\x10\\x02\\x1A\\x02\\x10\\x032!\td\\x92_\\x08s\\xEA\\xB0V\\x10\\xBE\\xF1\\x10\\x1A\\x06\\x08\\x82\\x02\\x10\\xBD\\x02\\x1A\n"
		"\\x08\\xA0\\xFE\n"
		"\\x10\\xFF\\xFF\\xFF\\xFF\\x072\\x11\t\\x9A\\xB9\\x1C\\xE9q\\xDB\\xEEd\\x10*\\x1A\\x04\\x10\\x04 \\x0E23\t\\x8E\\xEC\\xBAB\n"
		"\\xF62z\\x10F\\x1A\\x04\\x10\\x02 \\x04\\x1A\\x04\\x08\\x03 \\x02\\x1A\\x04\\x08\\x04 \\x02\\x1A\\x02\\x08\\x05\\x1A\\x04\\x08\\x06 \\x02\\x1A\\x02\\x10\\x08\\x1A\\x02\\x10\\x0E\\x1A\\x02\\x10\\x102\\x0F\t\\x91`\\xC3\\xCD%\\x84\\x1D\\x0F\\x1A\\x04\\x10\\x01 \\x0E2\\x0F\tw\\xEF\\x14\\xAA,j\\x83\\xFF\\x1A\\x04\\x10\\x01 \\x0E2\\x0F\t\\x13I\\x06d\\x05\\x1E\\xB5\\xBD\\x1A\\x04\\x10\\x01 \\x0E2\\x0F\t\\xEC\\x04M\\xC3\\xA2)>\\x9F\\x1A\\x04\\x10\\x01 \\x0E2\\x0F\t\\xED\\xBF\n"
		"=\\xC2f\\xED\\xFF\\x1A\\x04\\x10\\x01 \\x0E2\\x0F\t\\xF9\\xDF\\xAB\\xA5\\xC9\\xE2\\xEF\\xD5\\x1A\\x04\\x10\\x01 \\x0E2\\x17\t\\xEA\\xAE\\xF8\\xEE\\xE1t*\\xE2\\x10\\xBE\\x88\\x12\\x1A\\x08\\x08\\xB3\\xF8\\x11\\x10\\xFF\\xDD\\x162\\x0F\tG\\xAE\\x9F4K\\xEA\\xAB\\x8D\\x10\\x01\\x1A\\x02\\x10\\x022\\x17\t\\x8E\\x9D\\xC3\\xED\\x98\\xB9\\xA4i\\x10\\xF4\\x8F\\x16\\x1A\\x08\\x08\\x9F\\xAD\\x13\\x10\\xA5\\x9C\\x1A2\\x1D\tERHNvj?\\xB0\\x10\\xC0\\x8B\\x16\\x1A\\x04\\x08W\\x10v\\x1A\\x08\\x08\\x9F\\xAD\\x13\\x10\\xA5\\x9C\\x1A2\\x18\tsi\\xE0\\xFB\\xE0\\xD1\\xF8\\xE6\\x10\\xE1\\xAD.\\x1A\t\\x08\\x00\\x10\\x80\\xDD\\xDB\\x01 \\x022\\x11\t3\\xB4\\x7F;\\xFB^G\\xBA\\x10\\x04\\x1A\\x04\\x10\\x03 \\x022\\x17\t\\x83\\xF5!L\\xC0\\xCB\n"
		"\\xF9\\x10\\x03\\x1A\\x02\\x08\\x00\\x1A\\x02\\x08\\x01\\x1A\\x02\\x10\\x032\\x11\tg+\\xD2$}\\x1A\\xA8\t\\x10 \\x1A\\x04\\x10\t \\x042\r\t\\xD1\\xA0\\xC7b\\x0FZNH\\x1A\\x02\\x10\\x012\\x0F\t\\xBF\\xFA\\x7F\\xD3\\x9B\\xA0\\xEF\\xF9\\x1A\\x04\\x10\\x01 \\x032\\x11\tr\\xE3@\\x88\\x12a\\xC1\\xF0\\x10\t\\x1A\\x04\\x10\\x04 \\x032\\x11\t\\x12\\xBA@D\\xA8\\xAD\\xC6\\x98\\x10f\\x1A\\x04\\x08`\\x10r2\r\t\\x93p\\xC5\\xF2\\x1C\\x81\\xF6\\xE2\\x1A\\x02\\x10\\x012\r\t2\\x11\\xCD\\xB4\\xBBy\\xCE\\xB3\\x1A\\x02\\x10\\x012\\x0F\t\\xCEHQ\\x01\\xCA\\xA0\\xE0\\xD3\\x1A\\x04\\x10\\x01 \\x062\r\tK8\\x1B\\xF6Tl\\x18}\\x1A\\x02\\x10\\x012\r\t\\xFEf\\xC0\\xFE\\xFA\\xC4}\\x12\\x1A\\x02\\x10\\x012\\x17\t\\xD9\\xBD\\x93\\xB6\\x1F\\xAB\\xC6A\\x10\\xF2\\xEA\\x11\\x1A\\x08\\x08\\xA1\\xCE\\x10\\x10\\xA8\\xCF\\x152\\x17\tQ\\xD0\\x06.\\xB5\\x85\\x13\\x9B\\x10\\xDA\\xF2\\x11\\x1A\\x08\\x08\\x82\\xCA\\x0E\\x10\\xD7\\x82\\x162\\x0F\t\\x15T\\x8F\\xE9\\xE1\\xC4\\xECc\\x10\\x04\\x1A\\x02\\x10\\x052\r\t\\xD4\\x83X\\xCD\\xA2\\xA4\\x89\\x85\\x1A"
		"\\x02\\x10\\x01",
		LAST); 
	*/

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
		"Snapshot=t8.inf",
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

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	lr_think_time(27);

	web_custom_request("experimentstatus", 
		"URL=https://clients4.google.com/chrome-sync/experimentstatus", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/vnd.google.octet-stream-compressible", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x0Bgcm_channel", 
		LAST);

	lr_think_time(44);

	web_url("crx", 
		"URL=https://clients2.google.com/service/update2/crx?os=win&arch=x64&os_arch=x86_64&nacl_arch=x86-64&prod=chromecrx&prodchannel=&prodversion=71.0.3578.98&lang=en-US&acceptformat=crx2,crx3&x=id%3Daohghmighlieiainnegkcijnfilokake%26v%3D0.10%26installedby%3Dinternal%26uc&x=id%3Dapdfllckaahabafndbhieahigkjlhalf%26v%3D6.2%26installedby%3Dinternal%26uc&x=id%3Dblpcfgokakmgnkcojhhkbfbldkacnbeo%26v%3D4.2.8%26installedby%3Dinternal%26uc&x="
		"id%3Dcoobgpohoikkiipiblmjeljniedjpjpf%26v%3D0.0.0.19%26installedby%3Dinternal%26uc&x=id%3Dghbmnnjooekpmoecnnnilnnbdlolhkhi%26v%3D1.7%26installedby%3Dexternal%26uc&x=id%3Dnmmhkkegccagdldgiimedpiccmgmieda%26v%3D1.0.0.4%26installedby%3Dother%26uc&x=id%3Dpjkljhegncpnkpknbcohdijeoejaedia%26v%3D8.1%26installedby%3Dinternal%26uc&x=id%3Dpkedcjkdefgpdelpbcmbmeomcjbeemfm%26v%3D7118.1015.0.0%26installedby%3Dother%26uc", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	/* loginpage */

	lr_think_time(72);

	web_submit_data("re-login", 
		"Action=http://www.way2sms.com/re-login", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=http://www.way2sms.com/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=mobileNo", "Value=9948897938", ENDITEM, 
		"Name=password", "Value=sreeshailam9848", ENDITEM, 
		"Name=CatType", "Value=", ENDITEM, 
		"Name=redirectPage", "Value=", ENDITEM, 
		"Name=pid", "Value=", ENDITEM, 
		LAST);

	//<input type="hidden" value="24171905309C85D17709B97FF63C0F3D" id="Token" name="Token" />
	web_reg_save_param("c_token","lb=<input type=\"hidden\" value=\"","rb=\" id=\"Token\"",LAST);
	
	web_url("send-sms", 
		"URL=http://www.way2sms.com/send-sms", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.way2sms.com/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getContacts", 
		"URL=http://www.way2sms.com/getContacts?token=undefined&_=1546490900848", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.way2sms.com/send-sms", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("GroupContacts", 
		"URL=http://www.way2sms.com/GroupContacts", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.way2sms.com/send-sms", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_url("container.html", 
		"URL=http://tpc.googlesyndication.com/safeframe/1-0-31/html/container.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.way2sms.com/send-sms", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

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
		"CaQrZPZQtXPXRCIeXrQG4kLuYD4mPo9JU4crxp8EIo5XP8ogCEAEg4_30ImDlyuWDtA6gAYjll4EDyAEJqQI94uuloJpOPuACAKgDAcgDCKoE5AFP0MqhpkslrsJW8aMxs5N3vTIRNYlq_I03j8zvUeellihZcIcjKkQAwbHQmz35CvVSB1jHYpieWH_nF180_rCpcw493rFYSyAfUBXrJ8pdz67nYTodEJQwlMCx0fcFMHmt-JT4UvJSDiXLnWbS_6bx0JRZN4xQPUbclwSNmsB1h8u5J5MwElx1tOp9xj-lAV7yfmy4Lk1yzyZ48Qk-dYsOIxuRZr0Jg9z3oriob-eiujVeJg-TTkGVjdKGPvwg9za6mZKFOm95q-WY6UVqxvzncqZpMuMy0oTLfRfVy0molVZ9dM3ABLzP76XwAeAEAZIFBAgEGAGSBQQIBRgEoAYugAfgmuh-qAeOzhuoB6gGqAfZyxuoB8_MG6gHpr4b2AcA8gcEE"
		"PHmFNIIBwiAYRABGAGACgHYEww&sigh=2KCYsP9Ost0&template_id=494&tpd=AGWhJmsUADv9HQgKYkto77upWvbYUaRqt198WqZXff9YC_puKA", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://tpc.googlesyndication.com/safeframe/1-0-31/html/container.html", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	web_url("s", 
		"URL=https://googleads.g.doubleclick.net/pagead/drt/s?v=r20120211", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://tpc.googlesyndication.com/safeframe/1-0-31/html/container.html", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	/* send sms page */

	web_revert_auto_header("Accept-Language");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	lr_think_time(23);

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
		"Body=id=1546490901313&catgid=36&catName=Good morning&pageNo=0&totCount=0", 
		LAST);

	lr_think_time(5);

	web_submit_data("smstoss", 
		"Action=http://www.way2sms.com/smstoss", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=http://www.way2sms.com/send-sms", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=Token", "Value={c_token}", ENDITEM, 
		"Name=message", "Value=hi raju", ENDITEM, 
		"Name=toMobile", "Value=9948897938", ENDITEM, 
		"Name=ssaction", "Value=undefined", ENDITEM, 
		LAST);

	web_url("send-sms_2", 
		"URL=http://www.way2sms.com/send-sms", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.way2sms.com/send-sms", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getContacts_2", 
		"URL=http://www.way2sms.com/getContacts?token=undefined&_=1546490993279", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.way2sms.com/send-sms", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("GroupContacts_2", 
		"URL=http://www.way2sms.com/GroupContacts", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.way2sms.com/send-sms", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_url("container.html_3", 
		"URL=http://tpc.googlesyndication.com/safeframe/1-0-31/html/container.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=http://www.way2sms.com/send-sms", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	web_url("adview_2", 
		"URL=https://securepubads.g.doubleclick.net/pagead/adview?ai="
		"C7bZnlJQtXK3KGdSxyAP5s5DADKyluZdU_KPk4oAHpJCGz4INEAEg4_30ImDlyuWDtA6gAeO5zskDyAEBqQI94uuloJpOPuACAKgDAcgDCqoE6gFP0NvfwfuGwkoSBConKvklqAE_dC-4Kx9fYwD1KD_iMx_kPxPk9n_oW-cc7Le4d-ahthfeKCoZ3Kn7mdCmi8TPYRQCKP6lT6eIFebmXCSqvNTldfNKxiWXWG2djBSkS_KQjYSWcthr7Tak1CvmRheAp9J-BUv2bgMVjxyPomvinOtqS1Nwbp5acZbT5rCVLEmY51SxTvx04-3R7c2pRgz1xuzMCvwqBHX56G5fTnhwggoTmUqFZMWsNezwVr3BwW-qf6YBGeaxOU0pHv32-3FXxpd1yZSUXw2wmKlvy4owmBrXAuNbwYzEzwrABOnS6J_RAeAEAZIFBAgEGAGSBQQIBRgEkgUECAUYGJIFBQgFGKgBgAeFxrE2qAeOzhuoB9XJG6gHq"
		"AaoB7nSG6gHugaoB9nLG6gHz8wbqAemvhvYBwHyBwUQi6-GAdIIBwiAYRABGAGACgHYEwyIFAE&sigh=IZcCp4cxhw8&tpd=AGWhJmsC9kx08PXPaccQn5q42Po1FmpptVOMeCOq6mo97QWc3g", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.way2sms.com/send-sms", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	web_url("l", 
		"URL=https://www.google.com/ads/measurement/l?ebcid=ALh7CaSHY7PKU2bQEf6ySdRu3gnzn90Q42hodr28Hgk1_5P53C4ON5QYjNQBoEtQpWi0VrOafVA7if6flAvjmYJz7Dk69w9R9w", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.way2sms.com/send-sms", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Accept-Language");

	lr_think_time(48);

	web_custom_request("update2", 
		"URL=https://update.googleapis.com/service/update2?cup2key=8:3506763161&cup2hreq=f2807bfeddd05bca264c502665727f5f56ad0e6d7412378e9d65a8ad446677d3", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"EncType=application/xml", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><request protocol=\"3.1\" dedup=\"cr\" acceptformat=\"crx2,crx3\" sessionid=\"{e71b2f01-87da-4fab-9490-ef2bce1f7e23}\" requestid=\"{91a31521-a9af-4d7a-9d66-9d5c730bf289}\" updater=\"chrome\" updaterversion=\"71.0.3578.98\" prodversion=\"71.0.3578.98\" lang=\"en-US\" updaterchannel=\"\" prodchannel=\"\" os=\"win\" arch=\"x64\" nacl_arch=\"x86-64\" domainjoined=\"0\"><hw physmemory=\"8\"/><os platform=\"Windows\" arch=\"x86_64\" version=\"10.0.10586.0\""
		"/><updater autoupdatecheckenabled=\"1\" ismachine=\"1\" lastchecked=\"0\" laststarted=\"0\" name=\"Omaha\" updatepolicy=\"-1\" version=\"1.3.33.23\"/><app appid=\"llkgjffcdpffmhiakmfcdcblohccpfmo\" version=\"0.0.0.0\" brand=\"GGLS\" enabled=\"1\"><updatecheck/><ping rd=\"4384\" ping_freshness=\"{6875bba0-09be-4115-a23b-ba11462bc2aa}\"/></app><app appid=\"ojjgnpkioondelmggbekfhllhdaimnho\" version=\"986\" brand=\"GGLS\" cohort=\"1:0:\" cohortname=\"Auto\" enabled=\"1\"><updatecheck/><ping rd=\""
		"4384\" ping_freshness=\"{e36fe9db-592b-43bc-b821-d5bccadc5f9c}\"/><packages><package fp=\"1.da6875840e51ae60e5634c0cd233e96065de89119031d1a92d20c391eac8b3c2\"/></packages></app><app appid=\"hfnkpimlhhgieaddgfemjhofmfblmnib\" version=\"4891\" brand=\"GGLS\" cohort=\"1:jcl:\" cohortname=\"Auto\" enabled=\"1\"><updatecheck/><ping rd=\"4384\" ping_freshness=\"{2a1daa34-3c28-4bb5-a8e4-0a58ed6f3c6b}\"/><packages><package fp=\"1.3e2166f4cf34eb93e6166a68c40d026a9c9f9ca52be4d4a5f7e9fdf058fffed0\"/></"
		"packages></app><app appid=\"khaoiebndkojlmppeemjhbpbandiljpe\" version=\"25\" brand=\"GGLS\" cohort=\"1:cux:\" cohortname=\"Auto\" enabled=\"1\"><updatecheck/><ping rd=\"4384\" ping_freshness=\"{f4cf20ba-2016-49a3-94a9-75760a917359}\"/><packages><package fp=\"1.815b5a2b23570dc334a9bddc75f39bfa017e8abc639a80850053b0a0701b2d8c\"/></packages></app><app appid=\"giekcmmlnklenlaomppkphknjmnnpneh\" version=\"7\" brand=\"GGLS\" cohort=\"1:j5l:\" cohortname=\"Auto\" enabled=\"1\"><updatecheck/><ping rd=\""
		"4384\" ping_freshness=\"{3eece0fc-a6ea-4e17-94de-835841433711}\"/><packages><package fp=\"1.3eb16d6c28b502ac4cfee8f4a148df05f4d93229fa36a71db8b08d06329ff18a\"/></packages></app><app appid=\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\" version=\"9.1\" brand=\"GGLS\" cohort=\"1:bm1:\" cohortname=\"M54ToM99\" enabled=\"1\"><updatecheck/><ping rd=\"4384\" ping_freshness=\"{08ac3c45-cd9e-4e6d-8371-6862ce0902aa}\"/><packages><package fp=\"1.22c7dfe769f240e50080a6aad4e3412dbb5603194c5237847147f223fd230be9\"/></"
		"packages></app><app appid=\"hnimpnehoodheedghdeeijklkeaacbdc\" version=\"0.57.44.2492\" brand=\"GGLS\" enabled=\"1\"><updatecheck/><ping rd=\"4384\" ping_freshness=\"{c1f87371-64bd-4481-bab8-b455ffe7bf23}\"/><packages><package fp=\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"/></packages></app><app appid=\"gkmgaooipdjhmangpemjhigmamcehddo\" version=\"36.184.200\" brand=\"GGLS\" tag=\"stable_eset\" cohort=\"1:lsl:\" cohortname=\"ESET Stable\" enabled=\"1\"><updatecheck/>"
		"<ping rd=\"4384\" ping_freshness=\"{d059fe47-794a-4f75-9111-734e65f90813}\"/><packages><package fp=\"1.cc7f6dd639126c8dc7f24a0ed3be27c7a3e9b6a2ca2ed6de0d450ceb311f1be7\"/></packages></app><app appid=\"aemomkdncapdnfajjbbcbdebjljbpmpj\" version=\"1.0.4.0\" brand=\"GGLS\" enabled=\"1\"><updatecheck/><ping rd=\"4384\" ping_freshness=\"{ec1c4d45-0fd2-4123-b49c-5febcad13749}\"/><packages><package fp=\"1.e8b89decb6a9092d1a53e8c75f566d3b01c9ff0f58857b502e914a24fc56c82e\"/></packages></app><app appid=\""
		"copjbmjbojbakpaedmpkhmiplmmehfck\" version=\"2018.9.6.0\" brand=\"GGLS\" cohort=\"1:p1x:\" cohortname=\"Auto\" enabled=\"1\"><updatecheck/><ping rd=\"4384\" ping_freshness=\"{47836e34-d652-4a54-a7f8-a00172ef9857}\"/><packages><package fp=\"1.207921137eee9c0831e0bd890330986c10dfd9382034491b82de3f86ae6915f7\"/></packages></app><app appid=\"oimompecagnajdejgnnjijobebaeigek\" version=\"4.10.1224.7\" brand=\"GGLS\" enabled=\"1\"><updatecheck/><ping rd=\"4384\" ping_freshness=\""
		"{04e1295c-55db-47e5-9ca0-1e4aeca5eff0}\"/></app><app appid=\"mimojjlkmoijpicakmndhoigimigcmbb\" version=\"32.0.0.101\" brand=\"GGLS\" cohort=\"1:d0j:\" cohortname=\"Chrome [M50... M99]\" enabled=\"1\"><updatecheck/><ping rd=\"4384\" ping_freshness=\"{39a59b09-3acd-4171-b23e-a61dc84c0667}\"/><packages><package fp=\"1.d41cb98407fbfbab5ddfaaa32738f33fe243d677e02a37771aac55d9d25e3ee8\"/></packages></app><app appid=\"npdjjkjlcidkjlamlmmdelcjbcpdjocm\" version=\"0.0.0.0\" brand=\"GGLS\" enabled=\"1\">"
		"<updatecheck/><ping rd=\"4384\" ping_freshness=\"{3f3727f7-b201-4649-9636-5e811d5d52a8}\"/></app></request>", 
		LAST);

	/* signout page */

	web_add_header("Accept-Language", 
		"en-US,en;q=0.9");

	lr_think_time(31);

	web_url("Logout", 
		"URL=http://www.way2sms.com/Logout", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.way2sms.com/send-sms", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}