Action()
{
	/* Launch */
	//new&sessionKek=359960'>Go shopping</a>
    web_reg_save_param("cSessionKey","LB=new&sessionKek=","RB='>Go shopping</a>",LAST);
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
//	&purchID=a1553720-2cad-4559-a6d2-2129c474304a
//Content-Length
	web_reg_save_param("cPurchID","LB=&purchID=","RB=\r\nContent",LAST);
	
	     //&pageID=7fcbf77d-9195-4847-aab1-03b4e7040b75&purchID
	web_reg_save_param("cPagides12","LB=&pageID=","RB=&purchID","Ord=All",LAST);
	    
	//name="ct1_field27IDb84eccae-ff16-4878-957d-40ac697eb2fe" value="0">
	web_reg_save_param("cNameField1","LB=ct1_field27ID","RB=\" value=",LAST);
	
	
	web_url("Go shopping", 
		"URL=http://18.222.58.52/example44/sessionhandler.php?type=new&sessionKek={cSessionKey}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example44/index.php", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	/* item1 buy */
	
	//<b>Total Price: 20050.48 $</b>
	//web_reg_save_param("cItem1Price","LB=Total Price:","RB=$",LAST);

	//web_reg_save_param("cPagides31","LB=&pageID=","RB=&purchID","Ord=All",LAST);
	web_submit_data("cart.php", 
		"Action=http://18.222.58.52/example44/cart.php?sessionKey={cSessionKey}&pageID={cPagides12_1}&purchID={cPurchID}", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example44/shop.php?sessionKey={cSessionKey}&pageID={cPagides12_2}&purchID={cPurchID}", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=ct1_field27ID{cNameField1}", "Value={pItem1Qty}", ENDITEM, 
		"Name=ctl_field27ID_", "Value={cNameField1}", ENDITEM, 
		LAST);

	/* Continue Shopping */
		
	web_reg_save_param("cPagides43","LB=&pageID=","RB=&purchID","Ord=All",LAST);
	
	//name="ct1_field27IDbdcc896d-ecfc-47c0-9949-e15399c9a5e9" value=
	web_reg_save_param("cNameField2","LB=ct1_field27ID","RB=\" value=",LAST);

	lr_think_time(33);

	web_url("Continue shopping", 
		"URL=http://18.222.58.52/example44/shop.php?sessionKey={cSessionKey}&pageID={cPagides12_3}&purchID={cPurchID}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example44/cart.php?sessionKey={cSessionKey}&pageID={cPagides12_1}&purchID={cPurchID}", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	/* item2 buy */

	lr_think_time(58);

    web_reg_save_param("cPagides54","LB=&pageID=","RB=&purchID","Ord=All",LAST);
    
	web_submit_data("cart.php_2", 
		"Action=http://18.222.58.52/example44/cart.php?sessionKey={cSessionKey}&pageID={cPagides43_1}&purchID={cPurchID}", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example44/shop.php?sessionKey={cSessionKey}&pageID={cPagides12_3}&purchID={cPurchID}", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=ct1_field27ID{cNameField2}", "Value={pItem2Qty}", ENDITEM, 
		"Name=ctl_field27ID_", "Value={cNameField2}", ENDITEM, 
		LAST);

	/* 2 Continue Shopping */

	lr_think_time(25);
	web_reg_save_param("cPagides65","LB=&pageID=","RB=&purchID","Ord=All",LAST);
	
	//ct1_field27ID77149a11-a410-402d-ae4b-e3df8d463611" value=
	web_reg_save_param("cNameField3","LB=ct1_field27ID","RB=\" value=",LAST);
	
		//<b>Total Price: 20050.48 $</b>
	//web_reg_save_param("cItem2Price","LB=Total Price:","RB=$",LAST);

	web_url("Continue shopping_2", 
		"URL=http://18.222.58.52/example44/shop.php?sessionKey={cSessionKey}&pageID={cPagides54_1}&purchID={cPurchID}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example44/cart.php?sessionKey={cSessionKey}&pageID={cPagides43_1}&purchID={cPurchID}", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	/* item 3 */

	lr_think_time(36);
	
	web_reg_save_param("cPagides76","LB=&pageID=","RB=&purchID","Ord=All",LAST);
	//&checkout=1549011601">Checkout
	web_reg_save_param("cCheckout","LB=&checkout=","RB=\">Checkout",LAST);
	//<b>Total Price: 20050.48 $</b>
	web_reg_save_param("cALLItemPrice","LB=Total Price:","RB=$","Ord=ALL",LAST);
	
	web_submit_data("cart.php_3", 
		"Action=http://18.222.58.52/example44/cart.php?sessionKey={cSessionKey}&pageID={cPagides65_1}&purchID={cPurchID}", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example44/shop.php?sessionKey={cSessionKey}&pageID={cPagides54_1}&purchID={cPurchID}", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=ct1_field27ID{cNameField3}", "Value={pItem3Qty}", ENDITEM, 
		"Name=ctl_field27ID_", "Value={cNameField3}", ENDITEM, 
		LAST);

	/* check out */

	lr_think_time(24);
	
	

	web_url("Checkout", 
		"URL=http://18.222.58.52/example44/checkout.php?sessionKey={cSessionKey}&pageID={cPagides76_1}&checkout={cCheckout}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example44/cart.php?sessionKey={cSessionKey}&pageID={cPagides65_1}&purchID={cPurchID}", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	/* start a new Shopping tour */

	lr_think_time(20);
	
	//lr_save_timestamp("cCheckout","DIGITS=10",LAST);
	
	web_url("Start a new Shopping tour", 
		"URL=http://18.222.58.52/example44/index.php", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example44/checkout.php?sessionKey={cSessionKey}&pageID={cPagides76_1}&checkout={cCheckout}", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}