# 1 "c:\\users\\dell\\documents\\vugen\\scripts\\wtwebcustomrequest\\\\combined_WtWebCustomRequest.c"
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







 
 



















# 1 "c:\\users\\dell\\documents\\vugen\\scripts\\wtwebcustomrequest\\\\combined_WtWebCustomRequest.c" 2

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

 
 
 

                               


 
 
 





















# 2 "c:\\users\\dell\\documents\\vugen\\scripts\\wtwebcustomrequest\\\\combined_WtWebCustomRequest.c" 2

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
 
 
 
 
 





# 7 "globals.h" 2

# 1 "lrw_custom_body.h" 1
 




# 8 "globals.h" 2



 
 



# 3 "c:\\users\\dell\\documents\\vugen\\scripts\\wtwebcustomrequest\\\\combined_WtWebCustomRequest.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "c:\\users\\dell\\documents\\vugen\\scripts\\wtwebcustomrequest\\\\combined_WtWebCustomRequest.c" 2

# 1 "Action.c" 1
Action()
{

	web_custom_request("webtours", 
		"URL=http://127.0.0.1:1080/webtours/", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTTP", 
		"LAST");

	web_custom_request("header.html", 
		"URL=http://127.0.0.1:1080/webtours/header.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/webtours/", 
		"Snapshot=t3.inf", 
		"Mode=HTTP", 
		"LAST");

	web_custom_request("welcome.pl", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/webtours/", 
		"Snapshot=t4.inf", 
		"Mode=HTTP", 
		"LAST");

	web_custom_request("hp_logo.png", 
		"URL=http://127.0.0.1:1080/webtours/images/hp_logo.png", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://127.0.0.1:1080/webtours/header.html", 
		"Snapshot=t5.inf", 
		"LAST");

	web_custom_request("webtours.png", 
		"URL=http://127.0.0.1:1080/webtours/images/webtours.png", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://127.0.0.1:1080/webtours/header.html", 
		"Snapshot=t6.inf", 
		"LAST");

	web_custom_request("home.html", 
		"URL=http://127.0.0.1:1080/WebTours/home.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=true", 
		"Snapshot=t7.inf", 
		"Mode=HTTP", 
		"LAST");

	web_custom_request("nav.pl", 
		"URL=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=true", 
		"Snapshot=t8.inf", 
		"Mode=HTTP", 
		"LAST");

	web_custom_request("mer_login.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/mer_login.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t9.inf", 
		"LAST");

	lr_think_time(21);

	web_custom_request("login.pl", 
		"URL=http://127.0.0.1:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t10.inf", 
		"Mode=HTTP", 
		"Body=userSession=125485.165168084ztftztDpViDDDDDDDiHcHpifQV&username=jojo&password=bean&JSFormSubmit=off&login.x=60&login.y=15", 
		"LAST");

	web_custom_request("nav.pl_2", 
		"URL=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/login.pl", 
		"Snapshot=t11.inf", 
		"Mode=HTTP", 
		"LAST");

	web_custom_request("flights.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/flights.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t12.inf", 
		"LAST");

	web_custom_request("itinerary.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/itinerary.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t13.inf", 
		"LAST");

	web_custom_request("in_home.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/in_home.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t14.inf", 
		"LAST");

	web_custom_request("signoff.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/signoff.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t15.inf", 
		"LAST");

	web_custom_request("login.pl_2", 
		"URL=http://127.0.0.1:1080/cgi-bin/login.pl?intro=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/login.pl", 
		"Snapshot=t16.inf", 
		"Mode=HTTP", 
		"LAST");

	web_custom_request("Itinerary Button", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=itinerary", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t17.inf", 
		"Mode=HTTP", 
		"LAST");

	web_custom_request("nav.pl_3", 
		"URL=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=itinerary", 
		"Snapshot=t18.inf", 
		"Mode=HTTP", 
		"LAST");

	web_custom_request("itinerary.pl", 
		"URL=http://127.0.0.1:1080/cgi-bin/itinerary.pl", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=itinerary", 
		"Snapshot=t19.inf", 
		"Mode=HTTP", 
		"LAST");

	web_custom_request("home.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/home.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t20.inf", 
		"LAST");

	web_custom_request("in_itinerary.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/in_itinerary.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t21.inf", 
		"LAST");

	web_custom_request("cancelallreservations.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/cancelallreservations.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t22.inf", 
		"LAST");

	web_custom_request("cancelreservation.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/cancelreservation.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t23.inf", 
		"LAST");

	lr_think_time(96);

	web_custom_request("itinerary.pl_2", 
		"URL=http://127.0.0.1:1080/cgi-bin/itinerary.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t24.inf", 
		"Mode=HTTP", 
		"Body=1=on&flightID=1280000-7-JB&flightID=0-15-JB&flightID=251460081-2322-JB&flightID=128007869-3113-JB&flightID=1569363776-38613-JB&flightID=169149378-4631-JB&flightID=169150010-5405-JB&flightID=1691652633-61623-JB&flightID=169158-6-JB&flightID=210297122-7716-JB&flightID=251446017-8498-JB&flightID=210309019-9270-JB&flightID=169158-10-JB&flightID=210297090-10802-JB&flightID=128015635-11549-JB&flightID=280260057-12351-JB&flightID=280260057-13120-JB&flightID=280260057-13889-JB&flightID="
		"280260057-14658-JB&flightID=280260057-15428-JB&flightID=280260057-16197-JB&flightID=169149721-16960-JB&flightID=169149721-17729-JB&flightID=169149721-18498-JB&flightID=169149721-19267-JB&flightID=210297090-20033-JB&flightID=210297090-20802-JB&flightID=164963716-21590-JB&flightID=164963751-22330-JB&flightID=164963751-23100-JB&flightID=164963751-23869-JB&flightID=164963751-24638-JB&flightID=164970456-25409-JB&flightID=168186788-26175-JB&flightID=164970456-26947-JB&flightID=168186788-27714-JB&"
		"flightID=168186788-28483-JB&flightID=164963716-29256-JB&flightID=164963716-30026-JB&flightID=164963716-30795-JB&flightID=164963716-31564-JB&flightID=164963716-32333-JB&flightID=164963716-33102-JB&flightID=164963716-33872-JB&flightID=164963716-34641-JB&flightID=164963716-35410-JB&flightID=164963716-36179-JB&flightID=164963716-36949-JB&flightID=164963716-37718-JB&flightID=164963716-38487-JB&flightID=164963716-39256-JB&flightID=164963716-40026-JB&flightID=164963716-40795-JB&flightID="
		"164963716-41564-JB&flightID=164963716-42333-JB&flightID=164963716-43102-JB&flightID=164963716-43872-JB&flightID=164963716-44641-JB&flightID=164963716-45410-JB&flightID=164963716-46179-JB&flightID=164963716-46949-JB&flightID=164963716-47718-JB&flightID=164963716-48487-JB&flightID=164963716-49256-JB&flightID=164963716-50026-JB&flightID=164963716-50795-JB&flightID=164963716-51564-JB&flightID=164963716-52333-JB&flightID=164963716-53102-JB&flightID=164963716-53872-JB&flightID=164963716-54641-JB&"
		"flightID=164963716-55410-JB&flightID=164963716-56179-JB&flightID=164963716-56949-JB&flightID=164963716-57718-JB&flightID=164963716-58487-JB&flightID=164963716-59256-JB&flightID=164963716-60026-JB&flightID=164963716-60795-JB&flightID=164963716-61564-JB&flightID=164963716-62333-JB&flightID=164963716-63102-JB&flightID=168186788-63868-JB&flightID=168186788-64637-JB&flightID=168186788-65406-JB&flightID=168186788-66175-JB&flightID=168186788-66945-JB&flightID=168186788-67714-JB&flightID="
		"168186788-68483-JB&flightID=168186788-69252-JB&flightID=164970461-70035-JB&flightID=164964083-70788-JB&flightID=164964083-71557-JB&flightID=164964083-72327-JB&flightID=164964083-73096-JB&flightID=169149721-73883-JB&flightID=164983020-74657-JB&flightID=164964898-75404-JB&flightID=164963751-76177-JB&flightID=164963716-76949-JB&flightID=164963716-77718-JB&flightID=153448942-78495-JB&flightID=153448942-79264-JB&flightID=153448942-80034-JB&flightID=19352-80809-JB&flightID=1935-81558-JB&flightID="
		"360671233-82331-JB&flightID=294004532-83104-JB&flightID=294004532-83874-JB&flightID=294004494-84641-JB&flightID=294015561-85396-JB&flightID=246893420-86181-JB&flightID=246893420-86951-JB&flightID=123453036-87769-JB&flightID=123453036-88538-JB&flightID=123453036-89307-JB&flightID=294004532-90028-JB&flightID=294004494-90795-JB&flightID=294004494-91564-JB&flightID=294004494-92334-JB&flightID=294004494-93103-JB&flightID=294004494-93872-JB&flightID=294004494-94641-JB&flightID=294004494-95411-JB&"
		"flightID=294004494-96180-JB&flightID=294004494-96949-JB&flightID=294004494-97718-JB&flightID=294004494-98487-JB&flightID=294004494-99257-JB&flightID=294004494-100026-JB&flightID=294004494-100795-JB&flightID=294004494-101564-JB&flightID=294004494-102334-JB&flightID=2940000-1030-JB&flightID=294004532-103874-JB&flightID=294004532-104643-JB&flightID=294004532-105412-JB&flightID=294000793-106187-JB&flightID=294000793-106956-JB&flightID=294000832-107728-JB&flightID=294000866-108492-JB&flightID="
		"294000866-109261-JB&flightID=294000866-110030-JB&flightID=294000866-110800-JB&flightID=294000866-111569-JB&flightID=294000866-112338-JB&flightID=294000866-113107-JB&flightID=294000866-113877-JB&flightID=294000866-114646-JB&flightID=294000866-115415-JB&flightID=294000866-116184-JB&flightID=294000866-116953-JB&flightID=294000866-117723-JB&flightID=294000866-118492-JB&flightID=294000866-119261-JB&flightID=294000866-120030-JB&flightID=294000866-120800-JB&flightID=0-1215-JB&flightID=294000866-122338-JB"
		"&flightID=294000866-123107-JB&flightID=294000866-123877-JB&flightID=294000866-124646-JB&flightID=294000866-125415-JB&flightID=294000866-126184-JB&flightID=294000866-126953-JB&flightID=294000866-127723-JB&flightID=294000866-128492-JB&flightID=294000866-129261-JB&flightID=294000866-130030-JB&flightID=294000866-130800-JB&flightID=294000866-131569-JB&flightID=294000866-132338-JB&flightID=294000866-133107-JB&flightID=294000866-133877-JB&flightID=294000866-134646-JB&flightID=294000866-135415-JB&flightID"
		"=294000866-136184-JB&flightID=294000866-136953-JB&flightID=294000866-137723-JB&flightID=294000866-138492-JB&flightID=294000866-139261-JB&flightID=294000866-140030-JB&flightID=294000866-140800-JB&flightID=294000866-141569-JB&flightID=294000866-142338-JB&flightID=294000866-143107-JB&flightID=294000866-143877-JB&flightID=294000866-144646-JB&flightID=294000866-145415-JB&flightID=294000866-146184-JB&flightID=294000866-146953-JB&flightID=294000866-147723-JB&flightID=294000866-148492-JB&flightID="
		"294000866-149261-JB&flightID=294000866-150030-JB&flightID=294000866-150800-JB&flightID=294000866-151569-JB&flightID=294000866-152338-JB&flightID=294000866-153107-JB&flightID=294000866-153877-JB&flightID=294000866-154646-JB&flightID=294000866-155415-JB&flightID=294000866-156184-JB&flightID=294000866-156953-JB&flightID=294000866-157723-JB&flightID=294000866-158492-JB&flightID=294000866-159261-JB&flightID=294000866-160030-JB&flightID=294000866-160800-JB&flightID=294000866-161569-JB&flightID="
		"294000866-162338-JB&flightID=294000866-163107-JB&flightID=294000866-163877-JB&flightID=294000866-164646-JB&flightID=294000866-165415-JB&flightID=294000866-166184-JB&flightID=294000866-166953-JB&flightID=294000866-167723-JB&flightID=294000866-168492-JB&flightID=294000866-169261-JB&flightID=294009004-170009-JB&flightID=294008968-170780-JB&flightID=294008968-171549-JB&flightID=294008968-172319-JB&flightID=29401500-173116-JB&flightID=29401500-173885-JB&flightID=29401500-174654-JB&flightID="
		"29401500-175423-JB&flightID=29401500-176192-JB&flightID=29401500-176962-JB&flightID=29401500-177731-JB&flightID=29401500-178500-JB&flightID=29400-1792-JB&flightID=29400-1800-JB&flightID=29400-1807-JB&flightID=29400-1815-JB&flightID=29400-1823-JB&flightID=29400-1830-JB&flightID=29400-1838-JB&flightID=29400-1846-JB&flightID=29400-1853-JB&flightID=294008968-186165-JB&flightID=294015597-186933-JB&flightID=294008968-187703-JB&flightID=294008968-188473-JB&flightID=294008968-189242-JB&flightID="
		"294008968-190011-JB&flightID=294008968-190780-JB&flightID=294007896-191555-JB&flightID=294008966-192354-JB&flightID=294008966-193124-JB&flightID=294008966-193893-JB&flightID=294008966-194662-JB&flightID=294008966-195431-JB&flightID=294008966-196200-JB&flightID=294008966-196970-JB&flightID=294008966-197739-JB&flightID=294008966-198508-JB&flightID=294008966-199277-JB&flightID=294008966-200047-JB&flightID=294007792-200798-JB&flightID=294007792-201568-JB&flightID=294007792-202337-JB&flightID="
		"294007792-203106-JB&flightID=294007792-203875-JB&flightID=294004532-204643-JB&flightID=294009004-205394-JB&flightID=294009004-206163-JB&flightID=294009004-206933-JB&flightID=294009004-207702-JB&flightID=294009004-208471-JB&flightID=294009004-209240-JB&flightID=294009004-210009-JB&flightID=294009004-210779-JB&flightID=294009004-211548-JB&flightID=294009004-212317-JB&flightID=294009004-213086-JB&flightID=294009004-213856-JB&flightID=294009004-214625-JB&flightID=294009004-215394-JB&flightID="
		"294009004-216163-JB&flightID=294009004-216933-JB&flightID=294009004-217702-JB&flightID=294009004-218471-JB&flightID=294009004-219240-JB&flightID=294009004-220009-JB&flightID=294009004-220779-JB&flightID=294009004-221548-JB&flightID=294009004-222317-JB&flightID=294009004-223086-JB&flightID=294009004-223856-JB&flightID=294009004-224625-JB&flightID=294009004-225394-JB&flightID=294009004-226163-JB&flightID=294009004-226933-JB&flightID=294009004-227702-JB&flightID=294009004-228471-JB&flightID="
		"294009004-229240-JB&flightID=294009004-230009-JB&flightID=294009004-230779-JB&flightID=294009004-231548-JB&flightID=294009004-232317-JB&flightID=294009004-233086-JB&flightID=294009004-233856-JB&flightID=294009004-234625-JB&flightID=294009004-235394-JB&flightID=294009004-236163-JB&flightID=294009004-236933-JB&flightID=294009004-237702-JB&flightID=294009004-238471-JB&flightID=294009004-239240-JB&flightID=294009004-240009-JB&flightID=294009004-240779-JB&flightID=294009004-241548-JB&flightID="
		"294009004-242317-JB&flightID=294009004-243086-JB&flightID=294009004-243856-JB&flightID=294008966-244662-JB&flightID=294015561-245396-JB&flightID=294009004-246163-JB&flightID=294009004-246933-JB&flightID=294009004-247702-JB&flightID=294009004-248471-JB&flightID=294009004-249240-JB&flightID=294009004-250009-JB&flightID=294009004-250779-JB&flightID=294009004-251548-JB&flightID=294009004-252317-JB&flightID=294009004-253086-JB&.cgifields=127&.cgifields=32&.cgifields=276&.cgifields=90&.cgifields=206&"
		".cgifields=118&.cgifields=71&.cgifields=102&.cgifields=16&.cgifields=55&.cgifields=84&.cgifields=233&.cgifields=259&.cgifields=194&.cgifields=57&.cgifields=220&.cgifields=316&.cgifields=163&.cgifields=89&.cgifields=175&.cgifields=31&.cgifields=35&.cgifields=11&.cgifields=208&.cgifields=93&.cgifields=292&.cgifields=325&.cgifields=29&.cgifields=291&.cgifields=199&.cgifields=114&.cgifields=226&.cgifields=58&.cgifields=211&.cgifields=153&.cgifields=15&.cgifields=101&.cgifields=73&.cgifields=76&"
		".cgifields=311&.cgifields=62&.cgifields=67&.cgifields=241&.cgifields=198&.cgifields=139&.cgifields=129&.cgifields=327&.cgifields=320&.cgifields=280&.cgifields=273&.cgifields=236&.cgifields=249&.cgifields=218&.cgifields=202&.cgifields=168&.cgifields=184&.cgifields=135&.cgifields=14&.cgifields=145&.cgifields=49&.cgifields=178&.cgifields=24&.cgifields=285&.cgifields=140&.cgifields=124&.cgifields=104&.cgifields=131&.cgifields=181&.cgifields=234&.cgifields=314&.cgifields=307&.cgifields=154&.cgifields="
		"23&.cgifields=96&.cgifields=159&.cgifields=326&.cgifields=160&.cgifields=47&.cgifields=8&.cgifields=98&.cgifields=37&.cgifields=43&.cgifields=270&.cgifields=195&.cgifields=5&.cgifields=21&.cgifields=288&.cgifields=193&.cgifields=119&.cgifields=324&.cgifields=180&.cgifields=244&.cgifields=162&.cgifields=246&.cgifields=240&.cgifields=74&.cgifields=61&.cgifields=230&.cgifields=299&.cgifields=115&.cgifields=103&.cgifields=201&.cgifields=113&.cgifields=152&.cgifields=189&.cgifields=295&.cgifields=266&"
		".cgifields=91&.cgifields=107&.cgifields=87&.cgifields=174&.cgifields=77&.cgifields=214&.cgifields=221&.cgifields=39&.cgifields=64&.cgifields=97&.cgifields=12&.cgifields=41&.cgifields=52&.cgifields=312&.cgifields=302&.cgifields=229&.cgifields=45&.cgifields=260&.cgifields=237&.cgifields=309&.cgifields=188&.cgifields=68&.cgifields=315&.cgifields=1&.cgifields=136&.cgifields=116&.cgifields=144&.cgifields=100&.cgifields=300&.cgifields=222&.cgifields=25&.cgifields=286&.cgifields=120&.cgifields=83&"
		".cgifields=305&.cgifields=308&.cgifields=254&.cgifields=177&.cgifields=217&.cgifields=328&.cgifields=239&.cgifields=122&.cgifields=143&.cgifields=281&.cgifields=269&.cgifields=205&.cgifields=158&.cgifields=42&.cgifields=22&.cgifields=46&.cgifields=235&.cgifields=301&.cgifields=6&.cgifields=36&.cgifields=213&.cgifields=183&.cgifields=94&.cgifields=51&.cgifields=317&.cgifields=296&.cgifields=265&.cgifields=169&.cgifields=132&.cgifields=171&.cgifields=200&.cgifields=18&.cgifields=125&.cgifields=329&"
		".cgifields=44&.cgifields=27&.cgifields=272&.cgifields=161&.cgifields=190&.cgifields=298&.cgifields=95&.cgifields=313&.cgifields=20&.cgifields=109&.cgifields=231&.cgifields=243&.cgifields=151&.cgifields=148&.cgifields=287&.cgifields=78&.cgifields=294&.cgifields=106&.cgifields=275&.cgifields=157&.cgifields=65&.cgifields=197&.cgifields=203&.cgifields=261&.cgifields=138&.cgifields=81&.cgifields=137&.cgifields=60&.cgifields=321&.cgifields=284&.cgifields=86&.cgifields=247&.cgifields=204&.cgifields=289&"
		".cgifields=165&.cgifields=17&.cgifields=2&.cgifields=186&.cgifields=82&.cgifields=110&.cgifields=147&.cgifields=228&.cgifields=323&.cgifields=268&.cgifields=69&.cgifields=112&.cgifields=319&.cgifields=172&.cgifields=191&.cgifields=224&.cgifields=187&.cgifields=223&.cgifields=282&.cgifields=262&.cgifields=79&.cgifields=121&.cgifields=212&.cgifields=126&.cgifields=238&.cgifields=251&.cgifields=253&.cgifields=279&.cgifields=176&.cgifields=209&.cgifields=216&.cgifields=256&.cgifields=117&.cgifields="
		"170&.cgifields=33&.cgifields=63&.cgifields=7&.cgifields=80&.cgifields=26&.cgifields=227&.cgifields=99&.cgifields=72&.cgifields=179&.cgifields=264&.cgifields=255&.cgifields=297&.cgifields=182&.cgifields=108&.cgifields=277&.cgifields=92&.cgifields=232&.cgifields=10&.cgifields=225&.cgifields=142&.cgifields=207&.cgifields=263&.cgifields=167&.cgifields=48&.cgifields=133&.cgifields=290&.cgifields=123&.cgifields=149&.cgifields=304&.cgifields=50&.cgifields=210&.cgifields=258&.cgifields=173&.cgifields=56&"
		".cgifields=66&.cgifields=19&.cgifields=293&.cgifields=54&.cgifields=274&.cgifields=306&.cgifields=70&.cgifields=322&.cgifields=166&.cgifields=88&.cgifields=30&.cgifields=141&.cgifields=128&.cgifields=252&.cgifields=28&.cgifields=310&.cgifields=283&.cgifields=75&.cgifields=40&.cgifields=134&.cgifields=156&.cgifields=303&.cgifields=192&.cgifields=250&.cgifields=59&.cgifields=215&.cgifields=278&.cgifields=150&.cgifields=271&.cgifields=130&.cgifields=155&.cgifields=53&.cgifields=245&.cgifields=267&"
		".cgifields=219&.cgifields=318&.cgifields=13&.cgifields=257&.cgifields=105&.cgifields=85&.cgifields=3&.cgifields=185&.cgifields=248&.cgifields=111&.cgifields=9&.cgifields=146&.cgifields=38&.cgifields=4&.cgifields=34&.cgifields=164&.cgifields=196&.cgifields=242&removeFlights.x=47&removeFlights.y=6", 
		"LAST");

	lr_think_time(8);

	web_custom_request("SignOff Button", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=1", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t25.inf", 
		"Mode=HTTP", 
		"LAST");

	web_custom_request("nav.pl_4", 
		"URL=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=1", 
		"Snapshot=t26.inf", 
		"Mode=HTTP", 
		"LAST");

	web_custom_request("home.html_2", 
		"URL=http://127.0.0.1:1080/WebTours/home.html", 
		"Method=GET", 
		"Resource=0", 
		"Referer=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=1", 
		"Snapshot=t27.inf", 
		"Mode=HTTP", 
		"LAST");

	return 0;
}
# 5 "c:\\users\\dell\\documents\\vugen\\scripts\\wtwebcustomrequest\\\\combined_WtWebCustomRequest.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "c:\\users\\dell\\documents\\vugen\\scripts\\wtwebcustomrequest\\\\combined_WtWebCustomRequest.c" 2

