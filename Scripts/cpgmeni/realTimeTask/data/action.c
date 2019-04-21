Action()
{

	web_url("index.php", 
		"URL=http://18.222.58.52/example4/index.php", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Go shopping", 
		"URL=http://18.222.58.52/example4/sessionhandler.php?type=new&sessionKey=734346", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example4/index.php", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(9);

	web_submit_data("cart.php", 
		"Action=http://18.222.58.52/example4/cart.php?sessionKey=734346&pageID=94baac76-e834-4bb9-ae7a-f626a470633d", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example4/shop.php?sessionKey=734346&pageID=f63846b3-b228-4d1b-914d-73d0ac815f65", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=ctl_field27IDe2cf1186-c4c4-4717-ad01-b6a413864124", "Value=1", ENDITEM, 
		"Name=ctl_field27ID_", "Value=e2cf1186-c4c4-4717-ad01-b6a413864124", ENDITEM, 
		LAST);

	lr_think_time(18);

	web_url("Checkout", 
		"URL=http://18.222.58.52/example4/checkout.php?sessionKey=734346&pageID=4bbaea4d-de60-4c8a-84f9-db995426cd4b&checkout=1548826325", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example4/cart.php?sessionKey=734346&pageID=94baac76-e834-4bb9-ae7a-f626a470633d", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(4);

	web_url("Start a new Shopping tour", 
		"URL=http://18.222.58.52/example4/index.php", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example4/checkout.php?sessionKey=734346&pageID=4bbaea4d-de60-4c8a-84f9-db995426cd4b&checkout=1548826325", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Go shopping_2", 
		"URL=http://18.222.58.52/example4/sessionhandler.php?type=new&sessionKey=508539", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example4/index.php", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(25);

	web_submit_data("cart.php_2", 
		"Action=http://18.222.58.52/example4/cart.php?sessionKey=508539&pageID=62265623-7ceb-483c-82ad-5ffdb5133b4f", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example4/shop.php?sessionKey=508539&pageID=1f11334f-f21f-470e-b7dd-e270b4e85472", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=ctl_field27ID650e8fa8-de93-43d7-989d-c78f4b75a057", "Value=1", ENDITEM, 
		"Name=ctl_field27ID_", "Value=650e8fa8-de93-43d7-989d-c78f4b75a057", ENDITEM, 
		LAST);

	lr_think_time(5);

	web_url("Checkout_2", 
		"URL=http://18.222.58.52/example4/checkout.php?sessionKey=508539&pageID=4289da27-620a-468d-b353-5e41e16c04fe&checkout=1548826395", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example4/cart.php?sessionKey=508539&pageID=62265623-7ceb-483c-82ad-5ffdb5133b4f", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(20);

	web_url("Start a new Shopping tour_2", 
		"URL=http://18.222.58.52/example4/index.php", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example4/checkout.php?sessionKey=508539&pageID=4289da27-620a-468d-b353-5e41e16c04fe&checkout=1548826395", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Go shopping_3", 
		"URL=http://18.222.58.52/example4/sessionhandler.php?type=new&sessionKey=532694", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example4/index.php", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(7);

	web_submit_data("cart.php_3", 
		"Action=http://18.222.58.52/example4/cart.php?sessionKey=532694&pageID=9d52f309-a655-49d1-bc9b-d11f9c1301ef", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example4/shop.php?sessionKey=532694&pageID=336d1125-d089-4fa0-a1d0-8c4868bbaaaa", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=ctl_field27IDaaf1a845-af74-4947-b16e-6cfd63d9343b", "Value=1", ENDITEM, 
		"Name=ctl_field27ID_", "Value=aaf1a845-af74-4947-b16e-6cfd63d9343b", ENDITEM, 
		LAST);

	lr_think_time(12);

	web_url("Checkout_3", 
		"URL=http://18.222.58.52/example4/checkout.php?sessionKey=532694&pageID=713c1421-1ff5-49ba-adf8-41228d9fecb2&checkout=1548826459", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example4/cart.php?sessionKey=532694&pageID=9d52f309-a655-49d1-bc9b-d11f9c1301ef", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}