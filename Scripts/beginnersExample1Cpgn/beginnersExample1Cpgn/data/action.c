Action()
{

	web_url("index.php", 
		"URL=http://18.222.58.52/example1/index.php", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	/* Login */

	web_submit_data("proceedLogin.php", 
		"Action=http://18.222.58.52/example1/proceedLogin.php", 
		"Method=GET", 
		"EncType=", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example1/login.php", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=I_uName", "Value=LuPUser_001", ENDITEM, 
		"Name=I_uPass", "Value=SuperSafe", ENDITEM, 
		LAST);

	/* Logout */

	web_url("Logout", 
		"URL=http://18.222.58.52/example1/logout.php", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example1/main.php", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}