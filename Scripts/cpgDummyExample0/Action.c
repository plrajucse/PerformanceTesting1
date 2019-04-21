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

	/* page 1 */

	lr_think_time(10);

	web_url("Link to restart procedure from page 1", 
		"URL=http://18.222.58.52/example0/page1.php", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example0/page3.php", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	/* page 2 */

	lr_think_time(9);

	web_url("Link to page 2", 
		"URL=http://18.222.58.52/example0/page2.php", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example0/page1.php", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	/* page 3 */

	lr_think_time(13);

	web_url("Link to page 3", 
		"URL=http://18.222.58.52/example0/page3.php", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example0/page2.php", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	/* link to restart procedure from page1 */

	lr_think_time(29);

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