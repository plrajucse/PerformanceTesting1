Action()
{
	//Alternate iteration number
	int x;
	x=atoi(lr_eval_string("{pIteration}"));
	if(x%2==0){
		lr_output_message("approved %d",x);
		lr_output_message("raju is good boy");
	}else{
		lr_output_message("Rejected %d",x);
		lr_output_message("raju is bad boy");
	}
	
	//Alternate users
		x=atoi(lr_eval_string("{pVuserId}"));
	if(x%2==0){
		lr_output_message("approved %d",x);
		lr_output_message("raju is good boy");
	}else{
		lr_output_message("Rejected %d",x);
		lr_output_message("raju is bad boy");
	}
	
	
	return 0;
}
