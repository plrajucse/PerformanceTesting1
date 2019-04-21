Action()
{
	int iQtyItem1,iPriceItem1,totPriAllItems;
	char ac[100];
	/* Launch */
	//new&sessionKey=440299'>Go shopping
	web_reg_save_param("cSessionKey","LB=sessionKey=","RB=>",LAST);
	
	// Set up check for successful index by looking for "VuGen Project"
    web_reg_find("Text=VuGen Project","SaveCount=VuGen Project_Count",LAST );
    
	web_url("index.php", 
		"URL=http://18.222.58.52/example4/index.php", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);
	// Check result
    if (atoi(lr_eval_string("{VuGen Project_Count}")) > 0){
        lr_output_message("index on successful.");
        }
     else{
          lr_error_message("index on failed");
          return(0);
     }


	/* go shopping */
  //sessionKey=440299&pageID=507804ec-398c-4566-a22f-9efde50dc430" method="post">
  		web_reg_save_param("cPageID1","LB=pageID=","RB=\" method=\"post\">",LAST);
  		
  //web_reg_save_param("cPageIDs","LB=pageID=","RB=\" method=\"post\">","Ord=All",LAST);
  
//  &pageID=089e449f-90d0-412c-aab4-e5135d6cfd28
//Content
  	web_reg_save_param("cPageID2","LB=pageID=","RB=\r\n",LAST);
  	
  	
  //	name="ctl_field27ID7c854511-a8af-4494-b07a-cad5caf6db9e" value="0">
  		web_reg_save_param("cName","LB=\"ctl_field27ID","RB=\"",LAST);
  		
  		//<td>200000 $</td>
	web_reg_save_param("cPriceItem1","LB=<td>","RB=$</td>",LAST);
	
	// Set up check for successful Go shopping by looking for "opening page"
    web_reg_find("Text=opening page","SaveCount=opening page_Count",LAST );
  		
	web_url("Go shopping", 
		"URL=http://18.222.58.52/example4/sessionhandler.php?type=new&sessionKey={cSessionKey}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example4/index.php", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);
    	// Check result
    if (atoi(lr_eval_string("{opening page_Count}")) > 0){
        lr_output_message("Go shopping on successful.");
        }
     else{
          lr_error_message("Go shopping on failed");
          return(0);
     }


	/* go to buying */

	lr_think_time(22);
	
	//lr_set_debug_message(LR_MSG_CLASS_EXTENDED_LOG | LR_MSG_CLASS_FULL_TRACE, LR_SWITCH_ON );

    	//<br><br><b>Total Price: 20000 $</b><br><br><a
  	web_reg_save_param("cTotalPrice","lb=<b>Total Price:","rb=$</b>",LAST);
   
	//&pageID=5fbc95c9-7aa2-4389-9eff-73c80170f2c0">
	//web_reg_save_param("cPageID3","LB=pageID=","RB=\">Continue shopping",LAST);
	web_reg_save_param("cPageID3","LB=&pageID=","RB=\">Continue shopping",LAST);
	
	// Set up check for successful cart by looking for "shoping cart"
    web_reg_find("Text=shoping cart","SaveCount=shoping cart_Count",LAST );
    
	web_submit_data("cart.php", 
		"Action=http://18.222.58.52/example4/cart.php?sessionKey={cSessionKey}&pageID={cPageID1}", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example4/shop.php?sessionKey={cSessionKey}&pageID={cPageID2}", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=ctl_field27ID{cName}", "Value={pQtyItem1}", ENDITEM, 
		"Name=ctl_field27ID_", "Value={cName}", ENDITEM, 
		LAST);
	    	// Check result
    if (atoi(lr_eval_string("{shoping cart_Count}")) > 0){
        lr_output_message("cart on successful.");
        }
     else{
          lr_error_message("cart shopping on failed");
          return(0);
     }
	
	//lr_set_debug_message(LR_MSG_CLASS_EXTENDED_LOG | LR_MSG_CLASS_FULL_TRACE, LR_SWITCH_OFF );
	
	//Method 2 Based on Qty * Items.
	
	iQtyItem1=atoi(lr_eval_string("{pQtyItem1}"));
	iPriceItem1=atoi(lr_eval_string("{cPriceItem1}"));
	
	
	totPriAllItems=iQtyItem1*iPriceItem1;
	lr_output_message("Total Price is %d",totPriAllItems);
	
	itoa(totPriAllItems,ac,10);
	lr_save_string(ac,"FinalTotPrice");

	/* checkout */

	lr_think_time(24);

	lr_save_timestamp("cCheckOut","DIGITS=10",LAST);
   // Set up check for successful cart by looking for "you completed"
    web_reg_find("Text=you completed","SaveCount=you completed_Count",LAST );
	
	web_url("Checkout",
		"URL=http://18.222.58.52/example4/checkout.php?sessionKey={cSessionKey}&pageID={cPageID3}&checkout={cCheckOut}",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://18.222.58.52/example4/cart.php?sessionKey={cSessionKey}&pageID={cPageID1}",
		"Snapshot=t4.inf",
		"Mode=HTML",
		LAST);
	    	// Check result
    if (atoi(lr_eval_string("{you completed_Count}")) > 0){
        lr_output_message("Checkout on successful.");
        }
     else{
          lr_error_message("Checkout on failed");
          return(0);
     }
	
			/* Start a new Shopping tour */

	lr_think_time(25);
	
	web_url("Start a new Shopping tour", 
		"URL=http://18.222.58.52/example4/index.php", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.222.58.52/example4/checkout.php?sessionKey={cSessionKey}&pageID={cPageID3}&checkout={cCheckOut}", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}