Action()
{

	web_url("page3.php", 
		"URL=http://18.222.58.52/example0/page3.php", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	/* page 1 click on link */

	lr_think_time(16);

	web_url("Link to restart procedure from page 1", 
		"URL=http://18.222.58.52/example0/page1.php", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example0/page3.php", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	/* page2 click on link */

	lr_think_time(8);

	web_url("Link to page 2", 
		"URL=http://18.222.58.52/example0/page2.php", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example0/page1.php", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	/* page 3 click on link */

	lr_think_time(38);

	web_url("Link to page 3", 
		"URL=http://18.222.58.52/example0/page3.php", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example0/page2.php", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(21);

	web_url("Link to restart procedure from page 1_2", 
		"URL=http://18.222.58.52/example0/page1.php", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example0/page3.php", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}