Action()
{
	char*token;
	char *arr1[1000];
	char *arr2[1000];
	char *merge[1000];
	int i=0,j=0;
	int x,k;
	int size,size1, size2;
	
	//rerverse string
	char *str;
  	char *src;
  	char *end;
  	char t;
  	int y,z;
  	


	

	//userSession" value="125407.356986634ztfAztApQcfDiHADpitfff"/>
	web_reg_save_param("cUserSession","LB=userSession\" value=\"","RB=\"/>",LAST);
		
	web_url("index.htm", 
		"URL=http://127.0.0.1:1080/webtours/index.htm", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(9);

	web_submit_data("login.pl", 
		"Action=http://127.0.0.1:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=body", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value={cUserSession}", ENDITEM, 
		"Name=username", "Value=jojo", ENDITEM, 
		"Name=password", "Value=bean", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=login.x", "Value=67", ENDITEM, 
		"Name=login.y", "Value=16", ENDITEM, 
		LAST);

	token=(char*)strtok(lr_eval_string("{cUserSession}"),".");
	//valid token
	while(token != NULL){
		arr1[i]=token;
		lr_output_message("First Array [%d] th Value:%s\n",i,arr1[i]);
		//next token
		token =(char*)strtok(NULL,".");
		i++;
		size1=i;
		lr_output_message("First Array Size %d\n",i);
	}
	

	//">London</option>
	web_reg_save_param("cSource","LB=\">","RB=</option>","ord=all",LAST);
	
	web_url("Search Flights Button", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=search", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(12);
	//outboundFlight" value="243;129;01/23/2019">
	web_reg_save_param("cFlight","LB=outboundFlight\" value=\"","RB=\"",LAST);
		

	web_submit_data("reservations.pl", 
		"Action=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=depart", "Value={cSource}", ENDITEM, 
		"Name=departDate", "Value=01/23/2019", ENDITEM, 
		"Name=arrive", "Value=Paris", ENDITEM, 
		"Name=returnDate", "Value=01/24/2019", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatPref", "Value=Window", ENDITEM, 
		"Name=seatType", "Value=Business", ENDITEM, 
		"Name=.cgifields", "Value=roundtrip", ENDITEM, 
		"Name=.cgifields", "Value=seatType", ENDITEM, 
		"Name=.cgifields", "Value=seatPref", ENDITEM, 
		"Name=findFlights.x", "Value=40", ENDITEM, 
		"Name=findFlights.y", "Value=10", ENDITEM, 
		LAST);
//	y=atoi(lr_eval_string("{cSource_count}"));
//	z=y-19;
	str=lr_paramarr_idx("cSource",1);
	if (src == '\0')  
     src = str;
     end = src + strlen(src) - 1;
    while (end > src)
    {
         t = *end;
        *end-- = *src;
        *src++ = t;
    }
    lr_output_message("String after Reversing  %s \n", str);
	

	web_submit_data("reservations.pl_2", 
		"Action=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=outboundFlight", "Value={cFlight}", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=seatType", "Value=Business", ENDITEM, 
		"Name=seatPref", "Value=Window", ENDITEM, 
		"Name=reserveFlights.x", "Value=42", ENDITEM, 
		"Name=reserveFlights.y", "Value=15", ENDITEM, 
		LAST);

	//240;157;01/23/2019
	token=(char*)strtok(lr_eval_string("{cFlight}"),";");
	//valid token
	while(token != NULL){
		arr2[j]=token;
		lr_output_message("Second Array [%d] th Value:%s\n",j,arr2[j]);
		//next token
		token =(char*)strtok(NULL,";");
		j++;
		size2=j;
		lr_output_message("Second Array Size %d\n",j);
	}
	
	//merge code
		for(x=0; x<size1; x++)
	{
		merge[x]=arr1[x];
	}
	size=size1+size2;
	for(x=0, k=size1; k<size && x<size2; x++, k++)
	{
		merge[k]=arr2[x];
	}
	lr_output_message("Now the new array after merging is :\n");
	//printf("Now the new array after merging is :\n");
	for(x=0; x<size; x++)
	{
		lr_output_message("Merge [%x] th Value:%s\n",x,merge[x]);
		//printf("%d  ",merge[x]);
	}
	
	

	web_submit_data("reservations.pl_3", 
		"Action=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=firstName", "Value=Jojo", ENDITEM, 
		"Name=lastName", "Value=Bean", ENDITEM, 
		"Name=address1", "Value=ang", ENDITEM, 
		"Name=address2", "Value=ts", ENDITEM, 
		"Name=pass1", "Value=Jojo Bean", ENDITEM, 
		"Name=creditCard", "Value=9948897938", ENDITEM, 
		"Name=expDate", "Value=", ENDITEM, 
		"Name=oldCCOption", "Value=", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatType", "Value=Business", ENDITEM, 
		"Name=seatPref", "Value=Window", ENDITEM, 
		"Name=outboundFlight", "Value=243;129;01/23/2019", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=returnFlight", "Value=", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=.cgifields", "Value=saveCC", ENDITEM, 
		"Name=buyFlights.x", "Value=68", ENDITEM, 
		"Name=buyFlights.y", "Value=7", ENDITEM, 
		LAST);

	web_url("SignOff Button", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}