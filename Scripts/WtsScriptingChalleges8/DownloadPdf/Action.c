Action()
{
	long fp;
	unsigned long prmLen;
    char *newParam;


	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_custom_request("cran.r-project.org", 
		"URL=https://cran.r-project.org/", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_custom_request("R.css", 
		"URL=https://cran.r-project.org/R.css", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://cran.r-project.org/", 
		"Snapshot=t2.inf", 
		LAST);

	web_custom_request("logo.html", 
		"URL=https://cran.r-project.org/logo.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://cran.r-project.org/", 
		"Snapshot=t3.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("banner.shtml", 
		"URL=https://cran.r-project.org/banner.shtml", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://cran.r-project.org/", 
		"Snapshot=t5.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("navbar.html", 
		"URL=https://cran.r-project.org/navbar.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://cran.r-project.org/", 
		"Snapshot=t6.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("favicon.ico", 
		"URL=https://cran.r-project.org/favicon.ico", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/vnd.microsoft.icon", 
		"Referer=", 
		"Snapshot=t7.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_custom_request("Rlogo.svg", 
		"URL=https://cran.r-project.org/Rlogo.svg", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://cran.r-project.org/logo.html", 
		"Snapshot=t4.inf", 
		LAST);

	lr_think_time(36);

	lr_start_transaction("1_transaction");

	/* manuals */

	web_custom_request("Manuals", 
		"URL=https://cran.r-project.org/manuals.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://cran.r-project.org/navbar.html", 
		"Snapshot=t8.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("1_transaction",LR_AUTO);

	lr_think_time(67);

	

//	/* pdf */
	web_set_max_html_param_len("7999999");
	web_reg_save_param("pdfdown","LB=","RB=","search=body",LAST);

	web_custom_request("PDF", 
		"URL=https://cran.r-project.org/doc/manuals/r-release/R-intro.pdf", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/pdf", 
		"Referer=https://cran.r-project.org/manuals.html", 
		"Snapshot=t9.inf", 
		"Mode=HTTP", 
		LAST);
	web_save_timestamp_param("timestamp",LAST);
	
	fp=fopen(lr_eval_string("E:\\raju\\hani_{pvuserid}__{piteration}_{timestamp}.pdf"), "wb");
	lr_eval_string_ext("{pdfdown}",strlen("{pdfdown}"),&newParam,&prmLen, 0, 0,-1);
	fwrite(newParam,prmLen,1,fp);
	fclose(fp);
	
	return 0;
}