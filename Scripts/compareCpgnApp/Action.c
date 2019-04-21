Action()
{

	web_url("index.php", 
		"URL=http://18.222.58.52/example4/index.php", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_url("Go shopping", 
		"URL=http://18.222.58.52/example4/sessionhandler.php?type=new&sessionKey=692428", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example4/index.php", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("UA-CPU", 
		"AMD64");

	web_url("fwlink", 
		"URL=https://go.microsoft.com/fwlink/?LinkID=401135", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	/* 1 q */

	lr_think_time(15);

	web_submit_data("cart.php", 
		"Action=http://18.222.58.52/example4/cart.php?sessionKey=692428&pageID=17cb42f0-f522-4af5-b64e-9378308c100b", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example4/shop.php?sessionKey=692428&pageID=95f481c9-ee5f-4420-8da3-f34994012b04", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=ctl_field27ID80540f20-e6b6-4ba0-9f64-1d2b970c43af", "Value=1", ENDITEM, 
		"Name=ctl_field27ID_", "Value=80540f20-e6b6-4ba0-9f64-1d2b970c43af", ENDITEM, 
		LAST);

	lr_think_time(6);

	web_url("Continue shopping", 
		"URL=http://18.222.58.52/example4/shop.php?sessionKey=692428&pageID=d1c9332d-5190-4fd6-9459-8eb5aab2368f", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example4/cart.php?sessionKey=692428&pageID=17cb42f0-f522-4af5-b64e-9378308c100b", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	/* 3 */

	lr_think_time(43);

	web_submit_data("cart.php_2", 
		"Action=http://18.222.58.52/example4/cart.php?sessionKey=692428&pageID=fda17d58-0406-4330-ba3c-ab9276cec789", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example4/shop.php?sessionKey=692428&pageID=d1c9332d-5190-4fd6-9459-8eb5aab2368f", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=ctl_field27ID690419da-f65f-401c-a0e9-1755d3fa81df", "Value=1", ENDITEM, 
		"Name=ctl_field27ID_", "Value=690419da-f65f-401c-a0e9-1755d3fa81df", ENDITEM, 
		LAST);

	lr_think_time(14);

	web_url("Continue shopping_2", 
		"URL=http://18.222.58.52/example4/shop.php?sessionKey=692428&pageID=dde17850-bc49-4f2a-aed2-5667b51b6af4", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example4/cart.php?sessionKey=692428&pageID=fda17d58-0406-4330-ba3c-ab9276cec789", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(10);

	web_submit_data("cart.php_3", 
		"Action=http://18.222.58.52/example4/cart.php?sessionKey=692428&pageID=98f52b68-3302-41b5-9c99-c67d54e3abc5", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example4/shop.php?sessionKey=692428&pageID=dde17850-bc49-4f2a-aed2-5667b51b6af4", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=ctl_field27ID6a2429f7-2850-4c2b-8227-bb2216593db7", "Value=1", ENDITEM, 
		"Name=ctl_field27ID_", "Value=6a2429f7-2850-4c2b-8227-bb2216593db7", ENDITEM, 
		LAST);

	lr_think_time(7);

	web_url("Checkout", 
		"URL=http://18.222.58.52/example4/checkout.php?sessionKey=692428&pageID=c12c5d10-150e-4146-9943-f265d02e4e01&checkout=1548827078", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example4/cart.php?sessionKey=692428&pageID=98f52b68-3302-41b5-9c99-c67d54e3abc5", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}