Action()
{

	web_url("catalog", 
		"URL=http://jpetstore.cfapps.io/catalog", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Sign In", 
		"URL=http://jpetstore.cfapps.io/login", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://jpetstore.cfapps.io/catalog", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("login", 
		"Action=http://jpetstore.cfapps.io/login", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://jpetstore.cfapps.io/login", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=_csrf", "Value=43ecfafa-5116-4c27-be4f-7156e4fc73c3", ENDITEM, 
		"Name=username", "Value=j2ee", ENDITEM, 
		"Name=password", "Value=j2ee", ENDITEM, 
		LAST);

	web_url("sm_fish.gif", 
		"URL=http://jpetstore.cfapps.io/catalog/categories/FISH", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://jpetstore.cfapps.io/catalog", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_url("FI-FW-02", 
		"URL=http://jpetstore.cfapps.io/catalog/products/FI-FW-02", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://jpetstore.cfapps.io/catalog/categories/FISH", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Add to Cart", 
		"URL=http://jpetstore.cfapps.io/cart?add&itemId=EST-20", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://jpetstore.cfapps.io/catalog/products/FI-FW-02", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Proceed to Checkout", 
		"URL=http://jpetstore.cfapps.io/my/orders/create?form", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://jpetstore.cfapps.io/cart", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(33);

	web_submit_data("create", 
		"Action=http://jpetstore.cfapps.io/my/orders/create", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://jpetstore.cfapps.io/my/orders/create?form", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=_csrf", "Value=071a5bf3-a5d6-4466-8314-2fb1c261590e", ENDITEM, 
		"Name=cardType", "Value=Visa", ENDITEM, 
		"Name=creditCard", "Value=9948897938", ENDITEM, 
		"Name=expiryDate", "Value=12/2020", ENDITEM, 
		"Name=billToFirstName", "Value=ABC", ENDITEM, 
		"Name=billToLastName", "Value=XYX", ENDITEM, 
		"Name=billAddress1", "Value=901 San Antonio Road", ENDITEM, 
		"Name=billAddress2", "Value=MS UCUP02-206", ENDITEM, 
		"Name=billCity", "Value=Palo Alto", ENDITEM, 
		"Name=billState", "Value=CA", ENDITEM, 
		"Name=billZip", "Value=94303", ENDITEM, 
		"Name=billCountry", "Value=USA", ENDITEM, 
		"Name=_shippingAddressRequired", "Value=on", ENDITEM, 
		"Name=continue", "Value=Continue", ENDITEM, 
		LAST);

	web_submit_data("create_2", 
		"Action=http://jpetstore.cfapps.io/my/orders/create", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://jpetstore.cfapps.io/my/orders/create", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=_csrf", "Value=071a5bf3-a5d6-4466-8314-2fb1c261590e", ENDITEM, 
		LAST);

	web_url("Sign Out", 
		"URL=http://jpetstore.cfapps.io/logout", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://jpetstore.cfapps.io/my/orders/1723", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}