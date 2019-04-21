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

	/* go Shopping */

	web_url("Go shopping", 
		"URL=http://18.222.58.52/example4/sessionhandler.php?type=new&sessionKey=183204", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example4/index.php", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	/* go buying */

	lr_think_time(8);

	web_submit_data("cart.php", 
		"Action=http://18.222.58.52/example4/cart.php?sessionKey=183204&pageID=a2d23fa1-75fa-402c-a475-e45e6e179b5b", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example4/shop.php?sessionKey=183204&pageID=df5732cb-761f-4588-bfb6-a5dac683480c", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=ctl_field27ID6efe26d9-f144-4f2d-a1dc-d361acf135fc", "Value=1", ENDITEM, 
		"Name=ctl_field27ID_", "Value=6efe26d9-f144-4f2d-a1dc-d361acf135fc", ENDITEM, 
		LAST);

	/* check out */

	lr_think_time(25);

	web_url("Checkout", 
		"URL=http://18.222.58.52/example4/checkout.php?sessionKey=183204&pageID=01abfb31-f373-44bd-ba86-f63ad072fdce&checkout=1548942484", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example4/cart.php?sessionKey=183204&pageID=a2d23fa1-75fa-402c-a475-e45e6e179b5b", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	/* Start a new Shopping tour */

	lr_think_time(25);

	web_url("Start a new Shopping tour", 
		"URL=http://18.222.58.52/example4/index.php", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example4/checkout.php?sessionKey=183204&pageID=01abfb31-f373-44bd-ba86-f63ad072fdce&checkout=1548942484", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}