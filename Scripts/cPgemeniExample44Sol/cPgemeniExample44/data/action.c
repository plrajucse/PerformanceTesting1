Action()
{

	web_url("index.php", 
		"URL=http://18.222.58.52/example44/index.php", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	/* go shopping */

	web_url("Go shopping", 
		"URL=http://18.222.58.52/example44/sessionhandler.php?type=new&sessionKek=359960", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example44/index.php", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	/* click on buy */

	web_submit_data("cart.php", 
		"Action=http://18.222.58.52/example44/cart.php?sessionKey=359960&pageID=7fcbf77d-9195-4847-aab1-03b4e7040b75&purchID=a1553720-2cad-4559-a6d2-2129c474304a", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example44/shop.php?sessionKey=359960&pageID=1127b3e6-2a4b-437e-b74e-52b6f4fe8ea6&purchID=a1553720-2cad-4559-a6d2-2129c474304a", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=ct1_field27IDb84eccae-ff16-4878-957d-40ac697eb2fe", "Value=1", ENDITEM, 
		"Name=ctl_field27ID_", "Value=b84eccae-ff16-4878-957d-40ac697eb2fe", ENDITEM, 
		LAST);

	/* Continue Shopping */

	lr_think_time(33);

	web_url("Continue shopping", 
		"URL=http://18.222.58.52/example44/shop.php?sessionKey=359960&pageID=27a56893-4822-452e-a421-7efd66d0c114&purchID=a1553720-2cad-4559-a6d2-2129c474304a", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example44/cart.php?sessionKey=359960&pageID=7fcbf77d-9195-4847-aab1-03b4e7040b75&purchID=a1553720-2cad-4559-a6d2-2129c474304a", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	/* item2 buy */

	lr_think_time(58);

	web_submit_data("cart.php_2", 
		"Action=http://18.222.58.52/example44/cart.php?sessionKey=359960&pageID=83e9a9aa-6477-45cd-97e7-4eeb89aff0bc&purchID=a1553720-2cad-4559-a6d2-2129c474304a", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example44/shop.php?sessionKey=359960&pageID=27a56893-4822-452e-a421-7efd66d0c114&purchID=a1553720-2cad-4559-a6d2-2129c474304a", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=ct1_field27IDbdcc896d-ecfc-47c0-9949-e15399c9a5e9", "Value=1", ENDITEM, 
		"Name=ctl_field27ID_", "Value=bdcc896d-ecfc-47c0-9949-e15399c9a5e9", ENDITEM, 
		LAST);

	/* 2 Continue Shopping */

	lr_think_time(25);

	web_url("Continue shopping_2", 
		"URL=http://18.222.58.52/example44/shop.php?sessionKey=359960&pageID=656eee29-fd72-418c-9c88-e85f853a8532&purchID=a1553720-2cad-4559-a6d2-2129c474304a", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example44/cart.php?sessionKey=359960&pageID=83e9a9aa-6477-45cd-97e7-4eeb89aff0bc&purchID=a1553720-2cad-4559-a6d2-2129c474304a", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	/* item 3 */

	lr_think_time(36);

	web_submit_data("cart.php_3", 
		"Action=http://18.222.58.52/example44/cart.php?sessionKey=359960&pageID=e5b21f58-74be-45b0-a7f5-b28a1bb7cdff&purchID=a1553720-2cad-4559-a6d2-2129c474304a", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example44/shop.php?sessionKey=359960&pageID=656eee29-fd72-418c-9c88-e85f853a8532&purchID=a1553720-2cad-4559-a6d2-2129c474304a", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=ct1_field27ID77149a11-a410-402d-ae4b-e3df8d463611", "Value=1", ENDITEM, 
		"Name=ctl_field27ID_", "Value=77149a11-a410-402d-ae4b-e3df8d463611", ENDITEM, 
		LAST);

	/* check out */

	lr_think_time(24);

	web_url("Checkout", 
		"URL=http://18.222.58.52/example44/checkout.php?sessionKey=359960&pageID=86d793e2-10dc-4162-8352-899eacabe7a0&checkout=1549011601", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example44/cart.php?sessionKey=359960&pageID=e5b21f58-74be-45b0-a7f5-b28a1bb7cdff&purchID=a1553720-2cad-4559-a6d2-2129c474304a", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	/* start a new Shopping tour */

	lr_think_time(20);

	web_url("Start a new Shopping tour", 
		"URL=http://18.222.58.52/example44/index.php", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example44/checkout.php?sessionKey=359960&pageID=86d793e2-10dc-4162-8352-899eacabe7a0&checkout=1549011601", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}