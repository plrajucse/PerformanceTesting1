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
		"URL=http://18.222.58.52/example4/sessionhandler.php?type=new&sessionKey=440299", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example4/index.php", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	/* go to buying */

	lr_think_time(22);

	web_submit_data("cart.php", 
		"Action=http://18.222.58.52/example4/cart.php?sessionKey=440299&pageID=507804ec-398c-4566-a22f-9efde50dc430", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example4/shop.php?sessionKey=440299&pageID=089e449f-90d0-412c-aab4-e5135d6cfd28", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=ctl_field27ID7c854511-a8af-4494-b07a-cad5caf6db9e", "Value=1", ENDITEM, 
		"Name=ctl_field27ID_", "Value=7c854511-a8af-4494-b07a-cad5caf6db9e", ENDITEM, 
		LAST);

	/* checkout */

	lr_think_time(24);

	web_url("Checkout", 
		"URL=http://18.222.58.52/example4/checkout.php?sessionKey=440299&pageID=5fbc95c9-7aa2-4389-9eff-73c80170f2c0&checkout=1548827280", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example4/cart.php?sessionKey=440299&pageID=507804ec-398c-4566-a22f-9efde50dc430", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}