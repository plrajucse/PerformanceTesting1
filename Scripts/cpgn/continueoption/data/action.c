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

	/* go shopping */

	web_url("Go shopping", 
		"URL=http://18.222.58.52/example4/sessionhandler.php?type=new&sessionKey=673402", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example4/index.php", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(6);

	web_submit_data("cart.php", 
		"Action=http://18.222.58.52/example4/cart.php?sessionKey=673402&pageID=2b7b4dec-3f06-421e-9f7f-d746bde7513f", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example4/shop.php?sessionKey=673402&pageID=78a930e8-f610-4880-9dc4-d4435c4c368d", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=ctl_field27ID9d2f8b56-cc79-4895-9e88-e93650d8c63d", "Value=1", ENDITEM, 
		"Name=ctl_field27ID_", "Value=9d2f8b56-cc79-4895-9e88-e93650d8c63d", ENDITEM, 
		LAST);

	lr_think_time(4);

	web_url("Continue shopping", 
		"URL=http://18.222.58.52/example4/shop.php?sessionKey=673402&pageID=c5e6e48a-ea6f-4e9c-a430-dbc88c4ac2e6", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example4/cart.php?sessionKey=673402&pageID=2b7b4dec-3f06-421e-9f7f-d746bde7513f", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("cart.php_2", 
		"Action=http://18.222.58.52/example4/cart.php?sessionKey=673402&pageID=b745ccc2-8348-4506-91b0-9338a0a7605b", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example4/shop.php?sessionKey=673402&pageID=c5e6e48a-ea6f-4e9c-a430-dbc88c4ac2e6", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=ctl_field27IDb03cc151-ba1c-4d95-80ad-86392474f6d2", "Value=1", ENDITEM, 
		"Name=ctl_field27ID_", "Value=b03cc151-ba1c-4d95-80ad-86392474f6d2", ENDITEM, 
		LAST);

	web_url("Continue shopping_2", 
		"URL=http://18.222.58.52/example4/shop.php?sessionKey=673402&pageID=94ded52d-77be-48c0-bd9f-e0093149a278", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example4/cart.php?sessionKey=673402&pageID=b745ccc2-8348-4506-91b0-9338a0a7605b", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(7);

	web_submit_data("cart.php_3", 
		"Action=http://18.222.58.52/example4/cart.php?sessionKey=673402&pageID=38afb189-be84-4fb0-9b2f-45815b07a480", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example4/shop.php?sessionKey=673402&pageID=94ded52d-77be-48c0-bd9f-e0093149a278", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=ctl_field27IDa87a055c-c977-4c0b-98a8-1bd1bab75a53", "Value=1", ENDITEM, 
		"Name=ctl_field27ID_", "Value=a87a055c-c977-4c0b-98a8-1bd1bab75a53", ENDITEM, 
		LAST);

	lr_think_time(7);

	web_url("Checkout", 
		"URL=http://18.222.58.52/example4/checkout.php?sessionKey=673402&pageID=65f04e72-f802-4d59-9e05-e977ed2b0435&checkout=1548826738", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example4/cart.php?sessionKey=673402&pageID=38afb189-be84-4fb0-9b2f-45815b07a480", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}