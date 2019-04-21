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
		"URL=http://18.222.58.52/example4/sessionhandler.php?type=new&sessionKey=161503", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example4/index.php", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	/* go buying */

	web_submit_data("cart.php", 
		"Action=http://18.222.58.52/example4/cart.php?sessionKey=161503&pageID=e5691867-a89b-4ae9-88ca-492775d03038", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example4/shop.php?sessionKey=161503&pageID=f343f416-56f0-4c13-8a39-5afd0fd9fb7a", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=ctl_field27ID2a7c392f-a4cd-4b8c-b525-0da5efd530ba", "Value=1", ENDITEM, 
		"Name=ctl_field27ID_", "Value=2a7c392f-a4cd-4b8c-b525-0da5efd530ba", ENDITEM, 
		LAST);

	/* checkout */

	lr_think_time(19);

	web_url("Checkout", 
		"URL=http://18.222.58.52/example4/checkout.php?sessionKey=161503&pageID=107a0634-6846-4b0e-a6a5-f61b0c3b30a5&checkout=1548827484", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example4/cart.php?sessionKey=161503&pageID=e5691867-a89b-4ae9-88ca-492775d03038", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}