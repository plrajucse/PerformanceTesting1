# 1 "c:\\users\\dell\\documents\\vugen\\scripts\\sapweb1\\\\combined_SAPWeb1.c"
# 1 "globals.h" 1

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 1







# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_attrib(
		const char * mpszParamName,
		...);
										 
										 
										 
										 
										 
										 
										 		
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 789 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


# 802 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"



























# 840 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 908 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

  int
web_stream_set_custom_mpd(
	const char*			mpszStreamID,
	const char*			aMpdBuf
	);

 
 
 






# 9 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 2

















 







 















  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);


 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 2 "globals.h" 2

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
 
 
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 3 "globals.h" 2

# 1 "c:\\users\\dell\\documents\\vugen\\scripts\\sapweb1\\\\combined_SAPWeb1.c" 2

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_unmask (const char *EncodedString);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 513 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 516 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 540 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 574 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 597 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 621 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 700 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 761 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 776 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 800 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 812 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 820 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 826 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 929 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 936 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 958 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1034 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1063 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


# 1075 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_connect_ex(char * vtc_first_param, ...);
VTCERR   lrvtc_connect_ex_no_ellipsis(const char *vtc_first_param, char ** arguments, int argCount);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);

int lr_get_char_count(const char * string);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 2 "c:\\users\\dell\\documents\\vugen\\scripts\\sapweb1\\\\combined_SAPWeb1.c" 2


# 1 "vuser_init.c" 1

# 1 "lrw_custom_body.h" 1
 




# 2 "vuser_init.c" 2



vuser_init()
{
	return 0;
}
# 4 "c:\\users\\dell\\documents\\vugen\\scripts\\sapweb1\\\\combined_SAPWeb1.c" 2

# 1 "Action.c" 1


Action()
{

	
	 
	web_reg_save_param("Corr_jsalt","LB=<input type=\"hidden\" name=\"j_salt\" value=\"","RB=\" />","LAST");
	
	lr_start_transaction("launch");

	web_url("portal", 
		"URL=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/portal", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=../favicon.ico", "Referer=", "ENDITEM", 
		"LAST");

	lr_end_transaction("launch",2);

	lr_start_transaction("Logon");

 
	web_reg_save_param_ex(
		"ParamName=Corr_Jsession",
		"LB=,staticHeaderlessURL:'?",
		"RB=USER.R3_DATASOURCE.J0020991",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");

	web_submit_data("portal_2", 
		"Action=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/portal", 
		"Method=POST", 
		"TargetFrame=logonAppPage", 
		"RecContentType=text/html", 
		"Referer=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/portal", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=login_submit", "Value=on", "ENDITEM", 
		"Name=login_do_redirect", "Value=1", "ENDITEM", 
		"Name=j_salt", "Value={Corr_jsalt}", "ENDITEM", 
		"Name=j_username", "Value=J0020991", "ENDITEM", 
		"Name=j_password", "Value=HR4YOU", "ENDITEM", 
		"Name=uidPasswordLogon", "Value=Log On", "ENDITEM", 
		"EXTRARES", 
		"LAST");

	web_save_timestamp_param("Corr_WID1","LAST");
	 

	web_url("pcd!3aportal_content!2fcom.tot.fol.HR4U!2fcom.tot.fol.Portal_display!2fcom.total.hr4u!2fframeworkPages!2fcom.total.hr4U!2fcom.total.Related_Links", 
		"URL=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/servlet/prt/portal/prtroot/pcd!3aportal_content!2fcom.tot.fol.HR4U!2fcom.tot.fol.Portal_display!2fcom.total.hr4u!2fframeworkPages!2fcom.total.hr4U!2fcom.total.Related_Links?windowId=WID{Corr_WID1}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/portal", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"LAST");

	web_url("emptyhover.html", 
		"URL=https://frhdstdrrgv02.main.glb.corp.local:50301/com.sap.portal.design.urdesigndata/themes/portal/hr_gc_new/common/emptyhover.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/servlet/prt/portal/prtroot/pcd!3aportal_content!2fcom.tot.fol.HR4U!2fcom.tot.fol.Portal_display!2fcom.total.hr4u!2fframeworkPages!2fcom.total.hr4U!2fcom.total.Related_Links?windowId=WID{Corr_WID1}", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("emptyhover.html_2", 
		"URL=https://frhdstdrrgv02.main.glb.corp.local:50301/com.sap.portal.design.urdesigndata/themes/portal/hr_gc_new/common/emptyhover.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/servlet/prt/portal/prtroot/pcd!3aportal_content!2fcom.tot.fol.HR4U!2fcom.tot.fol.Portal_display!2fcom.total.hr4u!2fframeworkPages!2fcom.total.hr4U!2fcom.total.Related_Links?windowId=WID{Corr_WID1}", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("EmptyDocument.html", 
		"URL=https://frhdstdrrgv02.main.glb.corp.local:50301/com.sap.portal.pagebuilder/html/EmptyDocument.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/portal", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"LAST");
	
	
	 
	web_reg_save_param("Corr_GuiID","LB=<input type=\"hidden\" name=\"sap-epcm-guid\" value=\"","RB=\" />","LAST");

	 
	web_reg_save_param("Corr_SID","LB=<input type=\"hidden\" name=\"sap-ext-sid\" value=\"","RB=\" />","LAST");

	web_submit_data("pcd!3aportal_content!2fevery_user!2fgeneral!2fdefaultAjaxframeworkContent!2fcom.sap.portal.contentarea", 
		"Action=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/servlet/prt/portal/prteventname/Navigate/prtroot/pcd!3aportal_content!2fevery_user!2fgeneral!2fdefaultAjaxframeworkContent!2fcom.sap.portal.contentarea?windowId=WID{Corr_WID1}&supportInitialNavNodesFilter=true", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/portal", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=NavigationTarget", "Value=navurl://9a6edbf171b81f60d0dc80bdcc27b87f", "ENDITEM", 
		"LAST");

	

	web_url("pcd!3aportal_content!2fcom.tot.fol.HR4U!2fcom.tot.fol.Portal_display!2fcom.total.hr4u!2fframeworkPages!2fcom.total.hr4U!2fcom.total.Related_Links_2", 
		"URL=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/servlet/prt/portal/prtpos/pcd!253aportal!255fcontent!252fcom!252etot!252efol!252eHR4U!252fcom!252etot!252efol!252ePortal!255fdisplay!252fcom!252etotal!252ehr4u!252fframeworkPages!252fcom!252etotal!252ehr4U!252fcom!252etotal!252eRelated!255fLinks.com!252etotal!252eLNPComponent!7brefresh!7d-/prttarget/com!252etotal!252eLNPComponent/prtroot/pcd!3aportal_content!2fcom.tot.fol.HR4U!2fcom.tot.fol.Portal_display!2fcom.total.hr4u!2fframeworkPages"
		"!2fcom.total.hr4U!2fcom.total.Related_Links", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/servlet/prt/portal/prtroot/pcd!3aportal_content!2fcom.tot.fol.HR4U!2fcom.tot.fol.Portal_display!2fcom.total.hr4u!2fframeworkPages!2fcom.total.hr4U!2fcom.total.Related_Links?windowId=WID{Corr_WID1}", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"LAST");
	
	web_save_timestamp_param("tstamp2","LAST");
	 

	
	 
	web_reg_save_param_ex(
		"ParamName=Corr_SapExtSid1",
		"LB=;sap-ext-sid&#x3d;",
		"RB=\"",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");
	
	 
	
	web_reg_save_param_ex(
		"ParamName=Corr_SapepIviewHandle",
		"LB=<input type=\"hidden\" name=\"sap-ep-iviewhandle\" value=\"",
		"RB=\">",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");
	
 

	web_reg_save_param_ex(
		"ParamName=Corr_SapepIviewID",
		"LB=<input type=\"hidden\" name=\"sap-ep-iviewid\" value=\"",
		"RB=\">",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");

web_convert_param("Corr_SapepIviewID_URL",
  "SourceString={Corr_SapepIviewID}",
  "SourceEncoding=HTML",
  "TargetEncoding=URL",
  "LAST");

 
web_reg_save_param_ex(
		"ParamName=Corr_SapepPCDUnit",
		"LB=<input type=\"hidden\" name=\"sap-ep-pcdunit\" value=\"",
		"RB=\">",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");
		
		web_convert_param("Corr_SapepPCDUnit_URL",
  "SourceString={Corr_SapepPCDUnit}",
  "SourceEncoding=HTML",
  "TargetEncoding=URL",
  "LAST");


	
	
	web_submit_data("PageBuilder;jsessionid={Corr_Jsession}",
		"Action=https://frhdstdrrgv02.main.glb.corp.local:50301/webdynpro/resources/sap.com/pb/PageBuilder;jsessionid={Corr_Jsession}",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/servlet/prt/portal/prteventname/Navigate/prtroot/pcd!3aportal_content!2fevery_user!2fgeneral!2fdefaultAjaxframeworkContent!2fcom.sap.portal.contentarea?windowId=WID{Corr_WID1}&supportInitialNavNodesFilter=true",
		"Snapshot=t9.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=sap-ext-sid", "Value={Corr_SID}", "ENDITEM",
		"Name=sap-wd-cltwndid", "Value=WID{Corr_WID1}", "ENDITEM",
		"Name=sap-wd-tstamp", "Value={tstamp2}", "ENDITEM",
		"Name=PagePath", "Value=pcd:portal_content/com.tot.fol.HR4U/com.total.FT/com.total.roles/com.total.employee/com.total.ft_emp_ro/com.total.hp_emp_pg", "ENDITEM",
		"Name=sap-wd-app-namespace", "Value=zzzz", "ENDITEM",
		"Name=sap-ep-version", "Value=7.30.201211270029", "ENDITEM",
		"Name=sap-locale", "Value=en", "ENDITEM",
		"Name=sap-accessibility", "Value=", "ENDITEM",
		"Name=sap-rtl", "Value=", "ENDITEM",
		"Name=sap-explanation", "Value=null", "ENDITEM",
		"Name=sap-cssurl", "Value=https://frhdstdrrgv02.main.glb.corp.local:50301/com.sap.portal.design.urdesigndata/themes/portal/hr_gc_new/ls/ls_ie6.css?v=7.33.3.15.1", "ENDITEM",
		"Name=sap-cssversion", "Value=7.33.3.15.0", "ENDITEM",
		"Name=sap-epcm-guid", "Value={Corr_GuiID}", "ENDITEM",
		"Name=com.sap.portal.reserved.wd.pb.restart", "Value=false", "ENDITEM",
		"Name=DynamicParameter", "Value=", "ENDITEM",
		"Name=supportInitialNavNodesFilter", "Value=true", "ENDITEM",
		"Name=NavigationTarget", "Value=navurl://9a6edbf171b81f60d0dc80bdcc27b87f", "ENDITEM",
		"LAST");

	
	web_url("emptyhover.html_3", 
		"URL=https://frhdstdrrgv02.main.glb.corp.local:50301/com.sap.portal.design.urdesigndata/themes/portal/hr_gc_new/common/emptyhover.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/servlet/prt/portal/prtpos/pcd!253aportal!255fcontent!252fcom!252etot!252efol!252eHR4U!252fcom!252etot!252efol!252ePortal!255fdisplay!252fcom!252etotal!252ehr4u!252fframeworkPages!252fcom!252etotal!252ehr4U!252fcom!252etotal!252eRelated!255fLinks.com!252etotal!252eLNPComponent!7brefresh!7d-/prttarget/com!252etotal!252eLNPComponent/prtroot/pcd!3aportal_content!2fcom.tot.fol.HR4U!2fcom.tot.fol.Portal_display!2fcom.total.hr4u!2fframeworkPages"
		"!2fcom.total.hr4U!2fcom.total.Related_Links", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"LAST");
	
	
	web_url("emptyhover.html_4", 
		"URL=https://frhdstdrrgv02.main.glb.corp.local:50301/com.sap.portal.design.urdesigndata/themes/portal/hr_gc_new/common/emptyhover.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/servlet/prt/portal/prtpos/pcd!253aportal!255fcontent!252fcom!252etot!252efol!252eHR4U!252fcom!252etot!252efol!252ePortal!255fdisplay!252fcom!252etotal!252ehr4u!252fframeworkPages!252fcom!252etotal!252ehr4U!252fcom!252etotal!252eRelated!255fLinks.com!252etotal!252eLNPComponent!7brefresh!7d-/prttarget/com!252etotal!252eLNPComponent/prtroot/pcd!3aportal_content!2fcom.tot.fol.HR4U!2fcom.tot.fol.Portal_display!2fcom.total.hr4u!2fframeworkPages"
		"!2fcom.total.hr4U!2fcom.total.Related_Links", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"LAST");
	 
	
	 
	


	
	web_url("browserhistory.html", 
		"URL=https://frhdstdrrgv02.main.glb.corp.local:50301/com.sap.ui.lightspeed/js/html/browserhistory.html?bBackPrevention", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://frhdstdrrgv02.main.glb.corp.local:50301/webdynpro/resources/sap.com/pb/PageBuilder;jsessionid={Corr_Jsession}", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"LAST");
	
	
	web_save_timestamp_param("tstamp3","LAST");
	 
	
	
		
 
 
 
 







	
  
	
	web_url("ZP_POR_WD_SERVICES_APP;sap-ext-sid=BOvCBTcuAvMGoBjpqrUdJQ--00kOUgPH4ILmzOQ8w9nA5A--", 
		"URL=https://frhdstdrrev00.main.glb.corp.local:50001/sap/bc/webdynpro/SAP/ZP_POR_WD_SERVICES_APP;sap-ext-sid={Corr_SapExtSid1}?sap-ep-iviewhandle={Corr_SapepIviewHandle}&sap-wd-configId=&sap-ep-iviewid={Corr_SapepIviewID}&sap-ep-pcdunit={Corr_SapepPCDUnit}&sap-client=200&sap-language=EN&sap-accessibility=&sap-rtl=&sap-ep-version=7.30.201211270029&sap-wd-tstamp={tstamp3}&sap-explanation=null&sap-cssurl="
		"https%3A%2F%2Ffrhdstdrrgv02.main.glb.corp.local%3A50301%2Fcom.sap.portal.design.urdesigndata%2Fthemes%2Fportal%2Fhr_gc_new%2Fur%2Fur_ie6.css%3Fv%3D7.33.3.15.1&sap-cssversion=7.33.3.15.0&PROFILE=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/servlet/prt/portal/prtroot/com.sap.portal.pagebuilder.IviewModeProxy?iview_id=pcd%3Aportal_content%2Fcom.tot.fol.HR4U%2Fcom.total.FT%2Fcom.total.roles%2Fcom.total.employee%2Fcom.total.ft_emp_ro%2Fcom.total.hp_emp_pg%2Fcom.total.myhr4U_otherhr_iv&iview_mode=default&supportInitialNavNodesFilter=true&NavigationTarget=navurl%3A%2F%2F9a6edbf171b81f60d0dc80bdcc27b87f&ClientWindowID=WID{Corr_WID1}", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		
		"LAST");

	web_custom_request("ZP_POR_WD_SERVICES_APP;sap-ext-sid=BOvCBTcuAvMGoBjpqrUdJQ--00kOUgPH4ILmzOQ8w9nA5A--_2", 
		"URL=https://frhdstdrrev00.main.glb.corp.local:50001/sap/bc/webdynpro/SAP/ZP_POR_WD_SERVICES_APP;sap-ext-sid={Corr_SapExtSid1}?sap-contextid=SID%3aANON%3afrhdstdrrev00_TE1_00%3aJwTliG9Um8MfHV2Ji3C6LUHVKeOy8EMgUIsWjq3a-NEW", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://frhdstdrrev00.main.glb.corp.local:50001/sap/bc/webdynpro/SAP/ZP_POR_WD_SERVICES_APP;sap-ext-sid={Corr_SapExtSid1}?sap-ep-iviewhandle={Corr_SapepIviewHandle}&sap-wd-configId=&sap-ep-iviewid={Corr_SapepIviewID}&sap-ep-pcdunit={Corr_SapepPCDUnit}&sap-client=200&sap-language=EN&sap-accessibility=&sap-rtl=&sap-ep-version=7.30.201211270029&sap-wd-tstamp={tstamp3}&sap-explanation=null&sap-cssurl="
		"https%3A%2F%2Ffrhdstdrrgv02.main.glb.corp.local%3A50301%2Fcom.sap.portal.design.urdesigndata%2Fthemes%2Fportal%2Fhr_gc_new%2Fur%2Fur_ie6.css%3Fv%3D7.33.3.15.1&sap-cssversion=7.33.3.15.0&PROFILE=1", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"Body=sap-charset=utf-8&sap-wd-secure-id=AE732BCDC182B6569F0D50D67B2815EB&SAPEVENTQUEUE=Custom_ClientInfos~E002Id~E004WD01~E005WindowOpenerExists~E004false~E005ClientURL~E004https~003A~002F~002Ffrhdstdrrev00.main.glb.corp.local~003A50001~002Fsap~002Fbc~002Fwebdynpro~002FSAP~002FZP_POR_WD_SERVICES_APP~003Bsap-ext-sid~003D{Corr_SapExtSid1}~003Fsap-ep-iviewhandle~003D007665455938~0026sap-wd-configId~003D~0026sap-ep-iviewid~003Dpcdshort~00253A~00252FUr~"
		"002B8bpx4TvoG6JO28Q7u0Z8b9ew~00253D~0026sap-ep-pcdunit~003Dpcdshort~00253A~00252FHJq5DG46cgdRF6j2kMXwnqpuoV4~00253D~0026sap-client~003D200~0026sap-language~003DEN~0026sap-accessibility~003D~0026sap-rtl~003D~0026sap-ep-version~003D7.30.201211270029~0026sap-wd-~003D{tstamp3}~0026sap-explanation~003Dnull~0026sap-cssurl~003Dhttps~00253A~00252F~00252Ffrhdstdrrgv02.main.glb.corp.local~00253A50301~00252Fcom.sap.portal.design.urdesigndata~00252Fthemes~00252Fportal~00252Fhr_gc_new~00252Fur~"
		"00252Fur_ie6.css~00253Fv~00253D7.33.3.15.1~0026sap-cssversion~003D7.33.3.15.0~0026PROFILE~003D1~E005ClientWidth~E004422~E005ClientHeight~E004220~E003~E002ClientAction~E004enqueue~E005ResponseData~E004delta~E003~E002~E003~E001LoadingPlaceHolder_Load~E002Id~E004_loadingPlaceholder_~E003~E002ResponseData~E004delta~E005ClientAction~E004submit~E003~E002~E003~E001Form_Request~E002Id~E004sap.client.SsrClient.form~E005Async~E004false~E005FocusInfo~E004~0040~007B~007D~E005Hash~E004~E005DomChanged~E004false"
		"~E005IsDirty~E004true~E003~E002ResponseData~E004delta~E003~E002~E003", 
		"EXTRARES", 
	
		"LAST");

	web_url("browserhistory.html_2", 
		"URL=https://frhdstdrrev00.main.glb.corp.local:50001/sap/public/bc/ur/nw7/js/html/browserhistory.html?bBackPrevention", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://frhdstdrrev00.main.glb.corp.local:50001/sap/bc/webdynpro/SAP/ZP_POR_WD_SERVICES_APP;sap-ext-sid={Corr_SapExtSid1}?sap-ep-iviewhandle={Corr_SapepIviewHandle}&sap-wd-configId=&sap-ep-iviewid={Corr_SapepIviewID}&sap-ep-pcdunit={Corr_SapepPCDUnit}&sap-client=200&sap-language=EN&sap-accessibility=&sap-rtl=&sap-ep-version=7.30.201211270029&sap-wd-tstamp={tstamp3}&sap-explanation=null&sap-cssurl="
		"https%3A%2F%2Ffrhdstdrrgv02.main.glb.corp.local%3A50301%2Fcom.sap.portal.design.urdesigndata%2Fthemes%2Fportal%2Fhr_gc_new%2Fur%2Fur_ie6.css%3Fv%3D7.33.3.15.1&sap-cssversion=7.33.3.15.0&PROFILE=1", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("Logon",2);

	lr_start_transaction("MYHRactivities and cm Personal Administration");

	lr_think_time(6);
	
	 
	web_reg_save_param("Corr_iviewhandleID","LB=<input type=\"hidden\" name=\"sap-ep-iviewhandle\" value=\"","RB=\" />","LAST");

	web_submit_data("pcd!3aportal_content!2fevery_user!2fgeneral!2fdefaultAjaxframeworkContent!2fcom.sap.portal.contentarea_2", 
		"Action=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/servlet/prt/portal/prteventname/Navigate/prtroot/pcd!3aportal_content!2fevery_user!2fgeneral!2fdefaultAjaxframeworkContent!2fcom.sap.portal.contentarea?windowId=WID{Corr_WID1}&NavMode=0&PrevNavTarget=navurl%3A%2F%2F9a6edbf171b81f60d0dc80bdcc27b87f", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/portal", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=NavigationTarget", "Value=ROLES://portal_content/com.tot.fol.HR4U/com.total.PA/com.total.roles/com.total.hr/com.total.pa_hr_ro/CareerManager/com.total.pa_hr_ws/PA/com.total.pa_hr_admin_pg", "ENDITEM", 
		"Name=Command", "Value=SUSPEND", "ENDITEM", 
		"Name=SerPropString", "Value=", "ENDITEM", 
		"Name=SerKeyString", "Value=GUSID%3A{Corr_SapExtSid1}", "ENDITEM", 
		"Name=SerAttrKeyString", "Value=GUSID%3A{Corr_SID}&{tstamp2}", "ENDITEM", 
		"Name=SerWinIdString", "Value=&", "ENDITEM", 
		"Name=DebugSet", "Value=", "ENDITEM", 
		"Name=Embedded", "Value=true", "ENDITEM", 
		"Name=SessionKeysAvailable", "Value=true", "ENDITEM", 
		"EXTRARES", 
		
		"LAST");

	web_url("emptyhover.html_5", 
		"URL=https://frhdstdrrgv02.main.glb.corp.local:50301/com.sap.portal.design.urdesigndata/themes/portal/hr_gc_new/common/emptyhover.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/servlet/prt/portal/prteventname/Navigate/prtroot/pcd!3aportal_content!2fevery_user!2fgeneral!2fdefaultAjaxframeworkContent!2fcom.sap.portal.contentarea?windowId=WID{Corr_WID1}&NavMode=0&PrevNavTarget=navurl%3A%2F%2F9a6edbf171b81f60d0dc80bdcc27b87f", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("emptyhover.html_6", 
		"URL=https://frhdstdrrgv02.main.glb.corp.local:50301/com.sap.portal.design.urdesigndata/themes/portal/hr_gc_new/common/emptyhover.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/servlet/prt/portal/prteventname/Navigate/prtroot/pcd!3aportal_content!2fevery_user!2fgeneral!2fdefaultAjaxframeworkContent!2fcom.sap.portal.contentarea?windowId=WID{Corr_WID1}&NavMode=0&PrevNavTarget=navurl%3A%2F%2F9a6edbf171b81f60d0dc80bdcc27b87f", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"LAST");
	
	web_save_timestamp_param("tstamp4","LAST");
	
	 
	web_reg_save_param("Corr_SecureID","LB={0:'sap-wd-secure-id',1:'',2:'","RB=',","LAST");

	web_submit_data("zp_pa_wd_mobility02_app;sap-ext-sid=BOvCBTcuAvMGoBjpqrUdJQ--gtCCoeHZMSbMLSYFJmQZ9A--", 
		"Action=https://frhdstdrrev00.main.glb.corp.local:50001/sap/bc/webdynpro/SAP/zp_pa_wd_mobility02_app;sap-ext-sid=BOvCBTcuAvMGoBjpqrUdJQ--gtCCoeHZMSbMLSYFJmQZ9A--", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/servlet/prt/portal/prteventname/Navigate/prtroot/pcd!3aportal_content!2fevery_user!2fgeneral!2fdefaultAjaxframeworkContent!2fcom.sap.portal.contentarea?windowId=WID{Corr_WID1}&NavMode=0&PrevNavTarget=navurl%3A%2F%2F9a6edbf171b81f60d0dc80bdcc27b87f", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=sap-ep-iviewhandle", "Value={Corr_iviewhandleID}", "ENDITEM",  
		"Name=sap-wd-configId", "Value=", "ENDITEM", 
		"Name=sap-ep-iviewid", "Value=pcdshort:/tNeMN6RTYTUvHlBWc UnJIADGuQ=", "ENDITEM", 
		"Name=sap-ep-pcdunit", "Value=pcdshort:/lXKuY2gzF4kuDgjijLiwPSdusSM=", "ENDITEM", 
		"Name=sap-client", "Value=200", "ENDITEM", 
		"Name=sap-language", "Value=EN", "ENDITEM", 
		"Name=sap-accessibility", "Value=", "ENDITEM", 
		"Name=sap-rtl", "Value=", "ENDITEM", 
		"Name=sap-ep-version", "Value=7.30.201211270029", "ENDITEM", 
		"Name=sap-wd-tstamp", "Value={tstamp4}", "ENDITEM",  
		"Name=sap-explanation", "Value=null", "ENDITEM", 
		"Name=sap-cssurl", "Value=https://frhdstdrrgv02.main.glb.corp.local:50301/com.sap.portal.design.urdesigndata/themes/portal/hr_gc_new/ur/ur_ie6.css?v=7.33.3.15.1", "ENDITEM", 
		"Name=sap-cssversion", "Value=7.33.3.15.0", "ENDITEM", 
		"Name=IM_ACTOR", "Value=CM", "ENDITEM", 
		"LAST");

	

	web_url("pcd!3aportal_content!2fcom.tot.fol.HR4U!2fcom.tot.fol.Portal_display!2fcom.total.hr4u!2fframeworkPages!2fcom.total.hr4U!2fcom.total.Related_Links_3", 
		"URL=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/servlet/prt/portal/prtpos/pcd!253aportal!255fcontent!252fcom!252etot!252efol!252eHR4U!252fcom!252etot!252efol!252ePortal!255fdisplay!252fcom!252etotal!252ehr4u!252fframeworkPages!252fcom!252etotal!252ehr4U!252fcom!252etotal!252eRelated!255fLinks.com!252etotal!252eLNPComponent!7brefresh!7d-/prttarget/com!252etotal!252eLNPComponent/prtroot/pcd!3aportal_content!2fcom.tot.fol.HR4U!2fcom.tot.fol.Portal_display!2fcom.total.hr4u!2fframeworkPages"
		"!2fcom.total.hr4U!2fcom.total.Related_Links", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/servlet/prt/portal/prtpos/pcd!253aportal!255fcontent!252fcom!252etot!252efol!252eHR4U!252fcom!252etot!252efol!252ePortal!255fdisplay!252fcom!252etotal!252ehr4u!252fframeworkPages!252fcom!252etotal!252ehr4U!252fcom!252etotal!252eRelated!255fLinks.com!252etotal!252eLNPComponent!7brefresh!7d-/prttarget/com!252etotal!252eLNPComponent/prtroot/pcd!3aportal_content!2fcom.tot.fol.HR4U!2fcom.tot.fol.Portal_display!2fcom.total.hr4u!2fframeworkPages"
		"!2fcom.total.hr4U!2fcom.total.Related_Links", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("browserhistory.html_3", 
		"URL=https://frhdstdrrev00.main.glb.corp.local:50001/sap/public/bc/ur/nw7/js/html/browserhistory.html?bBackPrevention", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://frhdstdrrev00.main.glb.corp.local:50001/sap/bc/webdynpro/SAP/zp_pa_wd_mobility02_app;sap-ext-sid=BOvCBTcuAvMGoBjpqrUdJQ--gtCCoeHZMSbMLSYFJmQZ9A--", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("emptyhover.html_7", 
		"URL=https://frhdstdrrgv02.main.glb.corp.local:50301/com.sap.portal.design.urdesigndata/themes/portal/hr_gc_new/common/emptyhover.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/servlet/prt/portal/prtpos/pcd!253aportal!255fcontent!252fcom!252etot!252efol!252eHR4U!252fcom!252etot!252efol!252ePortal!255fdisplay!252fcom!252etotal!252ehr4u!252fframeworkPages!252fcom!252etotal!252ehr4U!252fcom!252etotal!252eRelated!255fLinks.com!252etotal!252eLNPComponent!7brefresh!7d-/prttarget/com!252etotal!252eLNPComponent/prtroot/pcd!3aportal_content!2fcom.tot.fol.HR4U!2fcom.tot.fol.Portal_display!2fcom.total.hr4u!2fframeworkPages"
		"!2fcom.total.hr4U!2fcom.total.Related_Links", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("emptyhover.html_8", 
		"URL=https://frhdstdrrgv02.main.glb.corp.local:50301/com.sap.portal.design.urdesigndata/themes/portal/hr_gc_new/common/emptyhover.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/servlet/prt/portal/prtpos/pcd!253aportal!255fcontent!252fcom!252etot!252efol!252eHR4U!252fcom!252etot!252efol!252ePortal!255fdisplay!252fcom!252etotal!252ehr4u!252fframeworkPages!252fcom!252etotal!252ehr4U!252fcom!252etotal!252eRelated!255fLinks.com!252etotal!252eLNPComponent!7brefresh!7d-/prttarget/com!252etotal!252eLNPComponent/prtroot/pcd!3aportal_content!2fcom.tot.fol.HR4U!2fcom.tot.fol.Portal_display!2fcom.total.hr4u!2fframeworkPages"
		"!2fcom.total.hr4U!2fcom.total.Related_Links", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"LAST");

	

	web_custom_request("zp_pa_wd_mobility02_app;sap-ext-sid=BOvCBTcuAvMGoBjpqrUdJQ--gtCCoeHZMSbMLSYFJmQZ9A--_2", 
		"URL=https://frhdstdrrev00.main.glb.corp.local:50001/sap/bc/webdynpro/SAP/zp_pa_wd_mobility02_app;sap-ext-sid=BOvCBTcuAvMGoBjpqrUdJQ--gtCCoeHZMSbMLSYFJmQZ9A--?sap-contextid=SID%3aANON%3afrhdstdrrev00_TE1_00%3aJwTl57QWtwvOub8ntE-bgxYGteOy8EMrUIvNlKoE-NEW", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://frhdstdrrev00.main.glb.corp.local:50001/sap/bc/webdynpro/SAP/zp_pa_wd_mobility02_app;sap-ext-sid=BOvCBTcuAvMGoBjpqrUdJQ--gtCCoeHZMSbMLSYFJmQZ9A--", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		"Body=sap-charset=utf-8&sap-wd-secure-id={Corr_SecureID}&SAPEVENTQUEUE=Custom_ClientInfos~E002Id~E004WD01~E005WindowOpenerExists~E004false~E005ClientURL~E004https~003A~002F~002Ffrhdstdrrev00.main.glb.corp.local~003A50001~002Fsap~002Fbc~002Fwebdynpro~002FSAP~002Fzp_pa_wd_mobility02_app~003Bsap-ext-sid~003DBOvCBTcuAvMGoBjpqrUdJQ--gtCCoeHZMSbMLSYFJmQZ9A--~E005ClientWidth~E0041232~E005ClientHeight~E004683~E003~E002ClientAction~E004enqueue~E005ResponseData~E004delta~E003~E002~E003~"
		"E001LoadingPlaceHolder_Load~E002Id~E004_loadingPlaceholder_~E003~E002ResponseData~E004delta~E005ClientAction~E004submit~E003~E002~E003~E001Form_Request~E002Id~E004sap.client.SsrClient.form~E005Async~E004false~E005FocusInfo~E004~0040~007B~007D~E005Hash~E004~E005DomChanged~E004false~E005IsDirty~E004true~E003~E002ResponseData~E004delta~E003~E002~E003", 
		"EXTRARES", 
		"LAST");

	lr_end_transaction("MYHRactivities and cm Personal Administration",2);

	lr_start_transaction("Log Out");

	web_submit_data("com.sap.portal.navigation.masthead.LogOutComponent", 
		"Action=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/servlet/prt/portal/prtroot/com.sap.portal.navigation.masthead.LogOutComponent?logout_submit=true", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/portal", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=logout_submit", "Value=1", "ENDITEM", 
		"LAST");

	web_submit_data("com.sap.portal.dsm.Terminator", 
		"Action=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/servlet/prt/portal/prtroot/com.sap.portal.dsm.Terminator", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/portal", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=Command", "Value=ABORT", "ENDITEM", 
		"Name=SerPropString", "Value=", "ENDITEM", 
		"Name=SerKeyString", "Value=&GUSID%3ABOvCBTcuAvMGoBjpqrUdJQ--gtCCoeHZMSbMLSYFJmQZ9A--", "ENDITEM", 
		"Name=SerAttrKeyString", "Value=GUSID%3A{Corr_SID}&{tstamp2}", "ENDITEM", 
		"Name=SerWinIdString", "Value=", "ENDITEM", 
		"Name=Autoclose", "Value=1000", "ENDITEM", 
		"Name=DebugSet", "Value=", "ENDITEM", 
		"EXTRARES", 
		"LAST");

	web_custom_request("zp_pa_wd_mobility02_app;sap-ext-sid=BOvCBTcuAvMGoBjpqrUdJQ--gtCCoeHZMSbMLSYFJmQZ9A--_3", 
		"URL=https://frhdstdrrev00.main.glb.corp.local:50001/sap/bc/webdynpro/SAP/zp_pa_wd_mobility02_app;sap-ext-sid=BOvCBTcuAvMGoBjpqrUdJQ--gtCCoeHZMSbMLSYFJmQZ9A--?sap-contextid=SID%3aANON%3afrhdstdrrev00_TE1_00%3aJwTl57QWtwvOub8ntE-bgxYGteOy8EMrUIvNlKoE-NEW", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://frhdstdrrev00.main.glb.corp.local:50001/sap/bc/webdynpro/SAP/zp_pa_wd_mobility02_app;sap-ext-sid=BOvCBTcuAvMGoBjpqrUdJQ--gtCCoeHZMSbMLSYFJmQZ9A--", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"Body=sap-charset=utf-8&sap-wd-secure-id={Corr_SecureID}&SAPEVENTQUEUE=ImageMap_ImageMapClick~E002Id~E004WD60~E005AreaId~E004WD61~E003~E002ResponseData~E004delta~E005ClientAction~E004submit~E003~E002~E003~E001Form_Request~E002Id~E004sap.client.SsrClient.form~E005Async~E004false~E005FocusInfo~E004~0040~007B~0022sFocussedId~0022~003A~0020~0022WD61~0022~007D~E005Hash~E004~E005DomChanged~E004false~E005IsDirty~E004false~E003~E002ResponseData~E004delta~E003~E002~E003", 
		"LAST");

	web_url("zp_pa_wd_mobility02_app;sap-ext-sid=BOvCBTcuAvMGoBjpqrUdJQ--gtCCoeHZMSbMLSYFJmQZ9A--_4", 
		"URL=https://frhdstdrrev00.main.glb.corp.local:50001/sap/bc/webdynpro/SAP/zp_pa_wd_mobility02_app;sap-ext-sid=BOvCBTcuAvMGoBjpqrUdJQ--gtCCoeHZMSbMLSYFJmQZ9A--?sap-ep-iviewhandle={Corr_iviewhandleID}&&sap-wd-tstamp={tstamp4}&sap-sessioncmd=USR_ABORT&~SAPSessionCmd=USR_ABORT&SAPWP_ACTIVE=1&dsmguid=1372419889878", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://frhdstdrrgv02.main.glb.corp.local:50301/irj/servlet/prt/portal/prtroot/com.sap.portal.dsm.Terminator", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("Log Out",2);

	return 0;
}
# 5 "c:\\users\\dell\\documents\\vugen\\scripts\\sapweb1\\\\combined_SAPWeb1.c" 2

# 1 "vuser_end.c" 1




vuser_end()
{
	  return 0;
}
# 6 "c:\\users\\dell\\documents\\vugen\\scripts\\sapweb1\\\\combined_SAPWeb1.c" 2

