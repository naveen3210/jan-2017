# 1 "c:\\users\\naveen reddy vangala\\documents\\vugen\\scripts\\sample 2\\\\combined_sample 2.c"
# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"






















































		


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

   
# 273 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
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
# 512 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 515 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 539 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"

 
 
 
 
 





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
# 573 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 596 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 620 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 699 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
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
# 760 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 775 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 799 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 811 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 819 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 825 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"

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

 
# 926 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 933 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 955 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1031 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1060 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"


# 1072 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







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


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "c:\\users\\naveen reddy vangala\\documents\\vugen\\scripts\\sample 2\\\\combined_sample 2.c" 2

# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/SharedParameter.h"






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

 
 
 

                               


 
 
 





















# 2 "c:\\users\\naveen reddy vangala\\documents\\vugen\\scripts\\sample 2\\\\combined_sample 2.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/web_api.h" 1







# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

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
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 769 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h"


# 782 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h"



























# 820 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h"

 
 
 


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
























# 888 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h"


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

 
 
 






# 9 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/web_api.h" 2

















 







 














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

# 1 "WebSocketCB.c" 1
void OnOpenCB0 (const char* connectionID,
				  const char * AccumulatedHeadersStr,
				  int AccumulatedHeadersLen)
{
	
 
 
 
 
 
 
 
 

}

void OnMessageCB0 (const char* connectionID,
				  int isbinary,
				  const char * data,
				  int length)
{
	
 
 
 
 
 
 
}

void OnErrorCB0 (const char* connectionID,
				  const char * message,
				  int length)
{
	
 
}

void OnCloseCB0 (const char* connectionID,
				  int isClosedByClient,
				  int code,
				  const char* reason,
				  int length)
{
	
 
}

# 9 "globals.h" 2

# 1 "WebSocketBuffer.h" 1



 

char WebSocketReceive0[] = "{\"C\":\"d-EB181140-F,0|G,1|H,0\",\"S\":1,\"M\":[]}";
long WebSocketReceiveLen0   = sizeof(WebSocketReceive0) - 1;	 

 

char WebSocketSend0[] = "id-0 index-0 total-1 {\"name\":\"microsoft.visualstudio.web.browserlink.sourcema"
                        "ppingextensionfactory.getCssMappingData\",\"args\":[\"http://localhost:60680/css"
                        "/animate.css\",[\".animated\",\".animated.infinite\",\".animated.hinge\",\".anim"
                        "ated.bounceIn, .animated.bounceOut\",\".animated.flipOutX, .animated.flipOutY\","
                        "\".bounce\",\".flash\",\".pulse\",\".rubberBand\",\".shake\",\".swing\",\".tada\""
                        ",\".wobble\",\".jello\",\".bounceIn\",\".bounceInDown\",\".bounceInLeft\",\".bou"
                        "nceInRight\",\".bounceInUp\",\".bounceOut\",\".bounceOutDown\",\".bounceOutLeft\""
                        ",\".bounceOutRight\",\".bounceOutUp\",\".fadeIn\",\".fadeInDown\",\".fadeInDownB"
                        "ig\",\".fadeInLeft\",\".fadeInLeftBig\",\".fadeInRight\",\".fadeInRightBig\",\"."
                        "fadeInUp\",\".fadeInUpBig\",\".fadeOut\",\".fadeOutDown\",\".fadeOutDownBig\",\""
                        ".fadeOutLeft\",\".fadeOutLeftBig\",\".fadeOutRight\",\".fadeOutRightBig\",\".fad"
                        "eOutUp\",\".fadeOutUpBig\",\".animated.flip\",\".flipInX\",\".flipInY\",\".flipO"
                        "utX\",\".flipOutY\",\".lightSpeedIn\",\".lightSpeedOut\",\".rotateIn\",\".rotate"
                        "InDownLeft\",\".rotateInDownRight\",\".rotateInUpLeft\",\".rotateInUpRight\",\"."
                        "rotateOut\",\".rotateOutDownLeft\",\".rotateOutDownRight\",\".rotateOutUpLeft\","
                        "\".rotateOutUpRight\",\".hinge\",\".rollIn\",\".rollOut\",\".zoomIn\",\".zoomInD"
                        "own\",\".zoomInLeft\",\".zoomInRight\",\".zoomInUp\",\".zoomOut\",\".zoomOutDown"
                        "\",\".zoomOutLeft\",\".zoomOutRight\",\".zoomOutUp\",\".slideInDown\",\".slideIn"
                        "Left\",\".slideInRight\",\".slideInUp\",\".slideOutDown\",\".slideOutLeft\",\".s"
                        "lideOutRight\",\".slideOutUp\"]],\"callbackId\":3}";
long WebSocketSendLen0   = sizeof(WebSocketSend0) - 1;	 

 

char WebSocketSend1[] = "id-5 index-0 total-7 {\"name\":\"microsoft.visualstudio.web.browserlink.sourcema"
                        "ppingextensionfactory.getCssMappingData\",\"args\":[\"http://localhost:60680/css"
                        "/icomoon.css\",[\"[class^=\\\"icon-\\\"], [class*=\\\" icon-\\\"]\",\".icon-glas"
                        "s::before\",\".icon-music::before\",\".icon-search2::before\",\".icon-envelope-o"
                        "::before\",\".icon-heart::before\",\".icon-star::before\",\".icon-star-o::before"
                        "\",\".icon-user::before\",\".icon-film::before\",\".icon-th-large::before\",\".i"
                        "con-th::before\",\".icon-th-list::before\",\".icon-check::before\",\".icon-close"
                        "::before\",\".icon-remove::before\",\".icon-times::before\",\".icon-search-plus:"
                        ":before\",\".icon-search-minus::before\",\".icon-power-off::before\",\".icon-sig"
                        "nal::before\",\".icon-cog::before\",\".icon-gear::before\",\".icon-trash-o::befo"
                        "re\",\".icon-home::before\",\".icon-file-o::before\",\".icon-clock-o::before\",\""
                        ".icon-road::before\",\".icon-download::before\",\".icon-arrow-circle-o-down::bef"
                        "ore\",\".icon-arrow-circle-o-up::before\",\".icon-inbox::before\",\".icon-play-c"
                        "ircle-o::before\",\".icon-repeat2::before\",\".icon-rotate-right::before\",\".ic"
                        "on-refresh::before\",\".icon-list-alt::before\",\".icon-lock::before\",\".icon-f"
                        "lag::before\",\".icon-headphones::before\",\".icon-volume-off::before\",\".icon-"
                        "volume-down::before\",\".icon-volume-up::before\",\".icon-qrcode::before\",\".ic"
                        "on-barcode::before\",\".icon-tag::before\",\".icon-tags::before\",\".icon-book::"
                        "before\",\".icon-bookmark::before\",\".icon-print::before\",\".icon-camera::befo"
                        "re\",\".icon-font::before\",\".icon-bold::before\",\".icon-italic::before\",\".i"
                        "con-text-height::before\",\".icon-text-width::before\",\".icon-align-left::befor"
                        "e\",\".icon-align-center2::before\",\".icon-align-right::before\",\".icon-align-"
                        "justify2::before\",\".icon-list::before\",\".icon-dedent::before\",\".icon-outde"
                        "nt::before\",\".icon-indent::before\",\".icon-video-camera::before\",\".icon-ima"
                        "ge::before\",\".icon-photo::before\",\".icon-picture-o::before\",\".icon-pencil:"
                        ":before\",\".icon-map-marker::before\",\".icon-adjust::before\",\".icon-tint::be"
                        "fore\",\".icon-edit::before\",\".icon-pencil-square-o::before\",\".icon-share-sq"
                        "uare-o::before\",\".icon-check-square-o::before\",\".icon-arrows::before\",\".ic"
                        "on-step-backward::before\",\".icon-fast-backward::before\",\".icon-backward::bef"
                        "ore\",\".icon-play2::before\",\".icon-pause2::before\",\".icon-stop2::before\",\""
                        ".icon-forward::before\",\".icon-fast-forward2::before\",\".icon-step-forward::be"
                        "fore\",\".icon-eject::before\",\".icon-chevron-left::before\",\".icon-chevron-ri"
                        "ght::before\",\".icon-plus-circle::before\",\".icon-minus-circle::before\",\".ic"
                        "on-times-circle::before\",\".icon-check-circle::before\",\".icon-question-circle"
                        "::before\",\".icon-info-circle::before\",\".icon-crosshairs::before\",\".icon-ti"
                        "mes-circle-o::before\",\".icon-check-circle-o::before\",\".icon-ban2::before\",\""
                        ".icon-arrow-left::before\",\".icon-arrow-right::before\",\".icon-arrow-up::befor"
                        "e\",\".icon-arrow-down::before\",\".icon-mail-forward::before\",\".icon-share::b"
                        "efore\",\".icon-expand2::before\",\".icon-compress::before\",\".icon-plus::befor"
                        "e\",\".icon-minus::before\",\".icon-asterisk::before\",\".icon-exclamation-circl"
                        "e::before\",\".icon-gift::before\",\".icon-leaf::before\",\".icon-fire::before\""
                        ",\".icon-eye::before\",\".icon-eye-slash::before\",\".icon-";
long WebSocketSendLen1   = sizeof(WebSocketSend1) - 1;	 

 

char WebSocketSend2[] = "id-5 index-1 total-7 exclamation-triangle::before\",\".icon-warning::before\",\""
                        ".icon-plane::before\",\".icon-calendar::before\",\".icon-random::before\",\".ico"
                        "n-comment::before\",\".icon-magnet::before\",\".icon-chevron-up::before\",\".ico"
                        "n-chevron-down::before\",\".icon-retweet::before\",\".icon-shopping-cart::before"
                        "\",\".icon-folder::before\",\".icon-folder-open::before\",\".icon-arrows-v::befo"
                        "re\",\".icon-arrows-h::before\",\".icon-bar-chart::before\",\".icon-bar-chart-o:"
                        ":before\",\".icon-twitter-square::before\",\".icon-facebook-square::before\",\"."
                        "icon-camera-retro::before\",\".icon-key::before\",\".icon-cogs::before\",\".icon"
                        "-gears::before\",\".icon-comments::before\",\".icon-thumbs-o-up::before\",\".ico"
                        "n-thumbs-o-down::before\",\".icon-star-half::before\",\".icon-heart-o::before\","
                        "\".icon-sign-out::before\",\".icon-linkedin-square::before\",\".icon-thumb-tack:"
                        ":before\",\".icon-external-link::before\",\".icon-sign-in::before\",\".icon-trop"
                        "hy::before\",\".icon-github-square::before\",\".icon-upload::before\",\".icon-le"
                        "mon-o::before\",\".icon-phone::before\",\".icon-square-o::before\",\".icon-bookm"
                        "ark-o::before\",\".icon-phone-square::before\",\".icon-twitter::before\",\".icon"
                        "-facebook::before\",\".icon-facebook-f::before\",\".icon-github::before\",\".ico"
                        "n-unlock2::before\",\".icon-credit-card::before\",\".icon-feed::before\",\".icon"
                        "-rss::before\",\".icon-hdd-o::before\",\".icon-bullhorn::before\",\".icon-bell-o"
                        "::before\",\".icon-certificate::before\",\".icon-hand-o-right::before\",\".icon-"
                        "hand-o-left::before\",\".icon-hand-o-up::before\",\".icon-hand-o-down::before\","
                        "\".icon-arrow-circle-left::before\",\".icon-arrow-circle-right::before\",\".icon"
                        "-arrow-circle-up::before\",\".icon-arrow-circle-down::before\",\".icon-globe::be"
                        "fore\",\".icon-wrench::before\",\".icon-tasks::before\",\".icon-filter::before\""
                        ",\".icon-briefcase::before\",\".icon-arrows-alt::before\",\".icon-group::before\""
                        ",\".icon-users::before\",\".icon-chain::before\",\".icon-link::before\",\".icon-"
                        "cloud::before\",\".icon-flask::before\",\".icon-cut::before\",\".icon-scissors::"
                        "before\",\".icon-copy::before\",\".icon-files-o::before\",\".icon-paperclip::bef"
                        "ore\",\".icon-floppy-o::before\",\".icon-save::before\",\".icon-square::before\""
                        ",\".icon-bars::before\",\".icon-navicon::before\",\".icon-reorder::before\",\".i"
                        "con-list-ul::before\",\".icon-list-ol::before\",\".icon-strikethrough::before\","
                        "\".icon-underline::before\",\".icon-table::before\",\".icon-magic::before\",\".i"
                        "con-truck::before\",\".icon-pinterest::before\",\".icon-pinterest-square::before"
                        "\",\".icon-google-plus-square::before\",\".icon-google-plus::before\",\".icon-mo"
                        "ney::before\",\".icon-caret-down::before\",\".icon-caret-up::before\",\".icon-ca"
                        "ret-left::before\",\".icon-caret-right::before\",\".icon-columns2::before\",\".i"
                        "con-sort::before\",\".icon-unsorted::before\",\".icon-sort-desc::before\",\".ico"
                        "n-sort-down::before\",\".icon-sort-asc::before\",\".icon-sort-up::before\",\".ic"
                        "on-envelope::before\",\".icon-linkedin::before\",\".icon-rotate-left::before\",\""
                        ".icon-undo::before\",\".icon-gavel::before\",\".icon-legal::before\",\".icon-das"
                        "hboard::before\",\".icon-tachometer::before\",\".icon-comment-o::before\",\".ico"
                        "n-comments-o::before\",\".icon-bolt::before\",\".icon-flash::before\",\".icon-si"
                        "temap::before\",\".icon-umbrella2::before\",\".icon-c";
long WebSocketSendLen2   = sizeof(WebSocketSend2) - 1;	 

 

char WebSocketReceive1[] = "{\"C\":\"d-EB181140-F,0|G,2|H,0\",\"M\":[\"{\\\"name\\\":\\\"WebAccessibilityChe"
                        "cker.CheckerFactory.check\\\",\\\"args\\\":[\\\"{\\\\r\\\\n  \\\\\\\"runOnly\\\\"
                        "\\\": {\\\\r\\\\n    \\\\\\\"type\\\\\\\": \\\\\\\"rule\\\\\\\",\\\\r\\\\n    \\"
                        "\\\\\"values\\\\\\\": [\\\\r\\\\n      \\\\\\\"accesskeys\\\\\\\",\\\\r\\\\n    "
                        "  \\\\\\\"area-alt\\\\\\\",\\\\r\\\\n      \\\\\\\"aria-allowed-attr\\\\\\\",\\\\"
                        "r\\\\n      \\\\\\\"aria-required-attr\\\\\\\",\\\\r\\\\n      \\\\\\\"aria-requ"
                        "ired-children\\\\\\\",\\\\r\\\\n      \\\\\\\"aria-required-parent\\\\\\\",\\\\r"
                        "\\\\n      \\\\\\\"aria-roles\\\\\\\",\\\\r\\\\n      \\\\\\\"aria-valid-attr-va"
                        "lue\\\\\\\",\\\\r\\\\n      \\\\\\\"aria-valid-attr\\\\\\\",\\\\r\\\\n      \\\\"
                        "\\\"audio-caption\\\\\\\",\\\\r\\\\n      \\\\\\\"blink\\\\\\\",\\\\r\\\\n      "
                        "\\\\\\\"button-name\\\\\\\",\\\\r\\\\n      \\\\\\\"bypass\\\\\\\",\\\\r\\\\n   "
                        "   \\\\\\\"checkboxgroup\\\\\\\",\\\\r\\\\n      \\\\\\\"color-contrast\\\\\\\","
                        "\\\\r\\\\n      \\\\\\\"definition-list\\\\\\\",\\\\r\\\\n      \\\\\\\"dlitem\\"
                        "\\\\\",\\\\r\\\\n      \\\\\\\"document-title\\\\\\\",\\\\r\\\\n      \\\\\\\"du"
                        "plicate-id\\\\\\\",\\\\r\\\\n      \\\\\\\"empty-heading\\\\\\\",\\\\r\\\\n     "
                        " \\\\\\\"frame-title\\\\\\\",\\\\r\\\\n      \\\\\\\"heading-order\\\\\\\",\\\\r"
                        "\\\\n      \\\\\\\"html-has-lang\\\\\\\",\\\\r\\\\n      \\\\\\\"html-lang-valid"
                        "\\\\\\\",\\\\r\\\\n      \\\\\\\"image-alt\\\\\\\",\\\\r\\\\n      \\\\\\\"image"
                        "-redundant-alt\\\\\\\",\\\\r\\\\n      \\\\\\\"input-image-alt\\\\\\\",\\\\r\\\\"
                        "n      \\\\\\\"label-title-only\\\\\\\",\\\\r\\\\n      \\\\\\\"label\\\\\\\",\\"
                        "\\r\\\\n      \\\\\\\"layout-table\\\\\\\",\\\\r\\\\n      \\\\\\\"link-in-text-"
                        "block\\\\\\\",\\\\r\\\\n      \\\\\\\"link-name\\\\\\\",\\\\r\\\\n      \\\\\\\""
                        "list\\\\\\\",\\\\r\\\\n      \\\\\\\"listitem\\\\\\\",\\\\r\\\\n      \\\\\\\"ma"
                        "rquee\\\\\\\",\\\\r\\\\n      \\\\\\\"meta-refresh\\\\\\\",\\\\r\\\\n      \\\\\\"
                        "\"meta-viewport-large\\\\\\\",\\\\r\\\\n      \\\\\\\"meta-viewport\\\\\\\",\\\\"
                        "r\\\\n      \\\\\\\"object-alt\\\\\\\",\\\\r\\\\n      \\\\\\\"radiogroup\\\\\\\""
                        ",\\\\r\\\\n      \\\\\\\"region\\\\\\\",\\\\r\\\\n      \\\\\\\"scope-attr-valid"
                        "\\\\\\\",\\\\r\\\\n      \\\\\\\"server-side-image-map\\\\\\\",\\\\r\\\\n      \\"
                        "\\\\\"tabindex\\\\\\\",\\\\r\\\\n      \\\\\\\"table-duplicate-name\\\\\\\",\\\\"
                        "r\\\\n      \\\\\\\"table-fake-caption\\\\\\\",\\\\r\\\\n      \\\\\\\"td-has-he"
                        "ader\\\\\\\",\\\\r\\\\n      \\\\\\\"td-headers-attr\\\\\\\",\\\\r\\\\n      \\\\"
                        "\\\"th-has-data-cells\\\\\\\",\\\\r\\\\n      \\\\\\\"valid-lang\\\\\\\",\\\\r\\"
                        "\\n      \\\\\\\"video-caption\\\\\\\",\\\\r\\\\n      \\\\\\\"video-description"
                        "\\\\\\\"\\\\r\\\\n    ]\\\\r\\\\n  }\\\\r\\\\n}\\\",\\\"SampleMasterPage\\\"],\\"
                        "\"callbackId\\\":-1}\"]}";
long WebSocketReceiveLen1   = sizeof(WebSocketReceive1) - 1;	 

 

char WebSocketSend3[] = "id-5 index-2 total-7 lipboard::before\",\".icon-paste::before\",\".icon-lightbul"
                        "b-o::before\",\".icon-exchange::before\",\".icon-cloud-download2::before\",\".ic"
                        "on-cloud-upload2::before\",\".icon-user-md::before\",\".icon-stethoscope::before"
                        "\",\".icon-suitcase::before\",\".icon-bell::before\",\".icon-coffee::before\",\""
                        ".icon-cutlery::before\",\".icon-file-text-o::before\",\".icon-building-o::before"
                        "\",\".icon-hospital-o::before\",\".icon-ambulance::before\",\".icon-medkit::befo"
                        "re\",\".icon-fighter-jet::before\",\".icon-beer::before\",\".icon-h-square::befo"
                        "re\",\".icon-plus-square::before\",\".icon-angle-double-left::before\",\".icon-a"
                        "ngle-double-right::before\",\".icon-angle-double-up::before\",\".icon-angle-doub"
                        "le-down::before\",\".icon-angle-left::before\",\".icon-angle-right::before\",\"."
                        "icon-angle-up::before\",\".icon-angle-down::before\",\".icon-desktop::before\",\""
                        ".icon-laptop::before\",\".icon-tablet::before\",\".icon-mobile::before\",\".icon"
                        "-mobile-phone::before\",\".icon-circle-o::before\",\".icon-quote-left::before\","
                        "\".icon-quote-right::before\",\".icon-spinner::before\",\".icon-circle::before\""
                        ",\".icon-mail-reply::before\",\".icon-reply::before\",\".icon-github-alt::before"
                        "\",\".icon-folder-o::before\",\".icon-folder-open-o::before\",\".icon-smile-o::b"
                        "efore\",\".icon-frown-o::before\",\".icon-meh-o::before\",\".icon-gamepad::befor"
                        "e\",\".icon-keyboard-o::before\",\".icon-flag-o::before\",\".icon-flag-checkered"
                        "::before\",\".icon-terminal::before\",\".icon-code::before\",\".icon-mail-reply-"
                        "all::before\",\".icon-reply-all::before\",\".icon-star-half-empty::before\",\".i"
                        "con-star-half-full::before\",\".icon-star-half-o::before\",\".icon-location-arro"
                        "w::before\",\".icon-crop::before\",\".icon-code-fork::before\",\".icon-chain-bro"
                        "ken::before\",\".icon-unlink::before\",\".icon-question::before\",\".icon-info::"
                        "before\",\".icon-exclamation::before\",\".icon-superscript::before\",\".icon-sub"
                        "script::before\",\".icon-eraser::before\",\".icon-puzzle-piece::before\",\".icon"
                        "-microphone2::before\",\".icon-microphone-slash::before\",\".icon-shield::before"
                        "\",\".icon-calendar-o::before\",\".icon-fire-extinguisher::before\",\".icon-rock"
                        "et::before\",\".icon-maxcdn::before\",\".icon-chevron-circle-left::before\",\".i"
                        "con-chevron-circle-right::before\",\".icon-chevron-circle-up::before\",\".icon-c"
                        "hevron-circle-down::before\",\".icon-html5::before\",\".icon-css3::before\",\".i"
                        "con-anchor2::before\",\".icon-unlock-alt::before\",\".icon-bullseye::before\",\""
                        ".icon-ellipsis-h::before\",\".icon-ellipsis-v::before\",\".icon-rss-square::befo"
                        "re\",\".icon-play-circle::before\",\".icon-ticket::before\",\".icon-minus-square"
                        "::before\",\".icon-minus-square-o::before\",\".icon-level-up::before\",\".icon-l"
                        "evel-down::before\",\".icon-check-square::before\",\".icon-pencil-square::before"
                        "\",\".icon-external-link-square::before\",\".icon-share-square::before\",\".icon"
                        "-compass::before\",\".icon-caret-square-o-down::before\",\".icon-toggle-down::be"
                        "fore\",\".icon-caret-square-o-up::before\",\".icon-toggle-up::before\",\".icon-c"
                        "aret-square-o-right::before\",\".icon-toggle-right::before\",\".icon-eur::before"
                        "\",\".icon-euro::before\",\".icon-gbp::before\",\".icon-dollar::before\",\".icon"
                        "-usd::before\",\".icon-inr::before\",\".icon-rupee::before\",\".icon-cny::before"
                        "\",\".icon-jpy::before\",\".icon-rmb::befo";
long WebSocketSendLen3   = sizeof(WebSocketSend3) - 1;	 

 

char WebSocketSend4[] = "id-5 index-3 total-7 re\",\".icon-yen::before\",\".icon-rouble::before\",\".icon"
                        "-rub::before\",\".icon-ruble::before\",\".icon-krw::before\",\".icon-won::before"
                        "\",\".icon-bitcoin::before\",\".icon-btc::before\",\".icon-file2::before\",\".ic"
                        "on-file-text::before\",\".icon-sort-alpha-asc::before\",\".icon-sort-alpha-desc:"
                        ":before\",\".icon-sort-amount-asc::before\",\".icon-sort-amount-desc::before\",\""
                        ".icon-sort-numeric-asc::before\",\".icon-sort-numeric-desc::before\",\".icon-thu"
                        "mbs-up::before\",\".icon-thumbs-down::before\",\".icon-youtube-square::before\","
                        "\".icon-youtube::before\",\".icon-xing::before\",\".icon-xing-square::before\",\""
                        ".icon-youtube-play::before\",\".icon-dropbox::before\",\".icon-stack-overflow::b"
                        "efore\",\".icon-instagram::before\",\".icon-flickr::before\",\".icon-adn::before"
                        "\",\".icon-bitbucket::before\",\".icon-bitbucket-square::before\",\".icon-tumblr"
                        "::before\",\".icon-tumblr-square::before\",\".icon-long-arrow-down::before\",\"."
                        "icon-long-arrow-up::before\",\".icon-long-arrow-left::before\",\".icon-long-arro"
                        "w-right::before\",\".icon-apple::before\",\".icon-windows::before\",\".icon-andr"
                        "oid::before\",\".icon-linux::before\",\".icon-dribbble::before\",\".icon-skype::"
                        "before\",\".icon-foursquare::before\",\".icon-trello::before\",\".icon-female::b"
                        "efore\",\".icon-male::before\",\".icon-gittip::before\",\".icon-gratipay::before"
                        "\",\".icon-sun-o::before\",\".icon-moon-o::before\",\".icon-archive::before\",\""
                        ".icon-bug::before\",\".icon-vk::before\",\".icon-weibo::before\",\".icon-renren:"
                        ":before\",\".icon-pagelines::before\",\".icon-stack-exchange::before\",\".icon-a"
                        "rrow-circle-o-right::before\",\".icon-arrow-circle-o-left::before\",\".icon-care"
                        "t-square-o-left::before\",\".icon-toggle-left::before\",\".icon-dot-circle-o::be"
                        "fore\",\".icon-wheelchair::before\",\".icon-vimeo-square::before\",\".icon-try::"
                        "before\",\".icon-turkish-lira::before\",\".icon-plus-square-o::before\",\".icon-"
                        "space-shuttle::before\",\".icon-slack::before\",\".icon-envelope-square::before\""
                        ",\".icon-wordpress::before\",\".icon-openid::before\",\".icon-bank::before\",\"."
                        "icon-institution::before\",\".icon-university::before\",\".icon-graduation-cap::"
                        "before\",\".icon-mortar-board::before\",\".icon-yahoo::before\",\".icon-google::"
                        "before\",\".icon-reddit::before\",\".icon-reddit-square::before\",\".icon-stumbl"
                        "eupon-circle::before\",\".icon-stumbleupon::before\",\".icon-delicious::before\""
                        ",\".icon-digg::before\",\".icon-pied-piper::before\",\".icon-pied-piper-alt::bef"
                        "ore\",\".icon-drupal::before\",\".icon-joomla::before\",\".icon-language::before"
                        "\",\".icon-fax::before\",\".icon-building::before\",\".icon-child::before\",\".i"
                        "con-paw::before\",\".icon-spoon::before\",\".icon-cube::before\",\".icon-cubes::"
                        "before\",\".icon-behance::before\",\".icon-behance-square::before\",\".icon-stea"
                        "m::before\",\".icon-steam-square::before\",\".icon-recycle::before\",\".icon-aut"
                        "omobile::before\",\".icon-car::before\",\".icon-cab::before\",\".icon-taxi::befo"
                        "re\",\".icon-tree::before\",\".icon-spotify::before\",\".icon-deviantart::before"
                        "\",\".icon-soundcloud::before\",\".icon-database::before\",\".icon-file-pdf-o::b"
                        "efore\",\".icon-file-word-o::before\",\".icon-file-excel-o::before\",\".icon-fil"
                        "e-powerpoint-o::before\",\".icon-file-image-o::before\",\".icon-file-photo-o::be"
                        "fore\",\".icon-file-picture-o::before\",\".icon-";
long WebSocketSendLen4   = sizeof(WebSocketSend4) - 1;	 

 

char WebSocketSend5[] = "id-5 index-4 total-7 file-archive-o::before\",\".icon-file-zip-o::before\",\".ic"
                        "on-file-audio-o::before\",\".icon-file-sound-o::before\",\".icon-file-movie-o::b"
                        "efore\",\".icon-file-video-o::before\",\".icon-file-code-o::before\",\".icon-vin"
                        "e::before\",\".icon-codepen::before\",\".icon-jsfiddle::before\",\".icon-life-bo"
                        "uy::before\",\".icon-life-buoy::before\",\".icon-life-ring::before\",\".icon-lif"
                        "e-saver::before\",\".icon-support::before\",\".icon-circle-o-notch::before\",\"."
                        "icon-ra::before\",\".icon-rebel::before\",\".icon-empire::before\",\".icon-ge::b"
                        "efore\",\".icon-git-square::before\",\".icon-git::before\",\".icon-hacker-news::"
                        "before\",\".icon-y-combinator-square::before\",\".icon-yc-square::before\",\".ic"
                        "on-tencent-weibo::before\",\".icon-qq::before\",\".icon-wechat::before\",\".icon"
                        "-weixin::before\",\".icon-paper-plane::before\",\".icon-send::before\",\".icon-p"
                        "aper-plane-o::before\",\".icon-send-o::before\",\".icon-history::before\",\".ico"
                        "n-circle-thin::before\",\".icon-header::before\",\".icon-paragraph2::before\",\""
                        ".icon-sliders::before\",\".icon-share-alt::before\",\".icon-share-alt-square::be"
                        "fore\",\".icon-bomb::before\",\".icon-futbol-o::before\",\".icon-soccer-ball-o::"
                        "before\",\".icon-tty::before\",\".icon-binoculars::before\",\".icon-plug::before"
                        "\",\".icon-slideshare::before\",\".icon-twitch::before\",\".icon-yelp::before\","
                        "\".icon-newspaper-o::before\",\".icon-wifi::before\",\".icon-calculator::before\""
                        ",\".icon-paypal::before\",\".icon-google-wallet::before\",\".icon-cc-visa::befor"
                        "e\",\".icon-cc-mastercard::before\",\".icon-cc-discover::before\",\".icon-cc-ame"
                        "x::before\",\".icon-cc-paypal::before\",\".icon-cc-stripe::before\",\".icon-bell"
                        "-slash::before\",\".icon-bell-slash-o::before\",\".icon-trash::before\",\".icon-"
                        "copyright::before\",\".icon-at::before\",\".icon-eyedropper::before\",\".icon-pa"
                        "int-brush::before\",\".icon-birthday-cake::before\",\".icon-area-chart::before\""
                        ",\".icon-pie-chart::before\",\".icon-line-chart::before\",\".icon-lastfm::before"
                        "\",\".icon-lastfm-square::before\",\".icon-toggle-off::before\",\".icon-toggle-o"
                        "n::before\",\".icon-bicycle::before\",\".icon-bus::before\",\".icon-ioxhost::bef"
                        "ore\",\".icon-angellist::before\",\".icon-cc::before\",\".icon-ils::before\",\"."
                        "icon-shekel::before\",\".icon-sheqel::before\",\".icon-meanpath::before\",\".ico"
                        "n-buysellads::before\",\".icon-connectdevelop::before\",\".icon-dashcube::before"
                        "\",\".icon-forumbee::before\",\".icon-leanpub::before\",\".icon-sellsy::before\""
                        ",\".icon-shirtsinbulk::before\",\".icon-simplybuilt::before\",\".icon-skyatlas::"
                        "before\",\".icon-cart-plus::before\",\".icon-cart-arrow-down::before\",\".icon-d"
                        "iamond::before\",\".icon-ship::before\",\".icon-user-secret::before\",\".icon-mo"
                        "torcycle::before\",\".icon-street-view::before\",\".icon-heartbeat::before\",\"."
                        "icon-venus::before\",\".icon-mars::before\",\".icon-mercury::before\",\".icon-in"
                        "tersex::before\",\".icon-transgender::before\",\".icon-transgender-alt::before\""
                        ",\".icon-venus-double::before\",\".icon-mars-double::before\",\".icon-venus-mars"
                        "::before\",\".icon-mars-stroke::before\",\".icon-mars-stroke-v::before\",\".icon"
                        "-mars-stroke-h::before\",\".icon-neuter::before\",\".icon-genderless::before\",\""
                        ".icon-facebook-official::before\",\".icon-pinterest-p::before\",\".icon-whatsapp"
                        "::before\",\".icon-server2::before\",\".icon-user";
long WebSocketSendLen5   = sizeof(WebSocketSend5) - 1;	 

 

char WebSocketSend6[] = "id-5 index-5 total-7 -plus::before\",\".icon-user-times::before\",\".icon-bed::b"
                        "efore\",\".icon-hotel::before\",\".icon-viacoin::before\",\".icon-train::before\""
                        ",\".icon-subway::before\",\".icon-medium::before\",\".icon-y-combinator::before\""
                        ",\".icon-yc::before\",\".icon-optin-monster::before\",\".icon-opencart::before\""
                        ",\".icon-expeditedssl::before\",\".icon-battery-4::before\",\".icon-battery-full"
                        "::before\",\".icon-battery-3::before\",\".icon-battery-three-quarters::before\","
                        "\".icon-battery-2::before\",\".icon-battery-half::before\",\".icon-battery-1::be"
                        "fore\",\".icon-battery-quarter::before\",\".icon-battery-0::before\",\".icon-bat"
                        "tery-empty::before\",\".icon-mouse-pointer::before\",\".icon-i-cursor::before\","
                        "\".icon-object-group::before\",\".icon-object-ungroup::before\",\".icon-sticky-n"
                        "ote::before\",\".icon-sticky-note-o::before\",\".icon-cc-jcb::before\",\".icon-c"
                        "c-diners-club::before\",\".icon-clone::before\",\".icon-balance-scale::before\","
                        "\".icon-hourglass-o::before\",\".icon-hourglass-1::before\",\".icon-hourglass-st"
                        "art::before\",\".icon-hourglass-2::before\",\".icon-hourglass-half::before\",\"."
                        "icon-hourglass-3::before\",\".icon-hourglass-end::before\",\".icon-hourglass::be"
                        "fore\",\".icon-hand-grab-o::before\",\".icon-hand-rock-o::before\",\".icon-hand-"
                        "paper-o::before\",\".icon-hand-stop-o::before\",\".icon-hand-scissors-o::before\""
                        ",\".icon-hand-lizard-o::before\",\".icon-hand-spock-o::before\",\".icon-hand-poi"
                        "nter-o::before\",\".icon-hand-peace-o::before\",\".icon-trademark::before\",\".i"
                        "con-registered::before\",\".icon-creative-commons::before\",\".icon-gg::before\""
                        ",\".icon-gg-circle::before\",\".icon-tripadvisor::before\",\".icon-odnoklassniki"
                        "::before\",\".icon-odnoklassniki-square::before\",\".icon-get-pocket::before\",\""
                        ".icon-wikipedia-w::before\",\".icon-safari::before\",\".icon-chrome::before\",\""
                        ".icon-firefox::before\",\".icon-opera::before\",\".icon-internet-explorer::befor"
                        "e\",\".icon-television::before\",\".icon-tv::before\",\".icon-contao::before\",\""
                        ".icon-500px::before\",\".icon-amazon::before\",\".icon-calendar-plus-o::before\""
                        ",\".icon-calendar-minus-o::before\",\".icon-calendar-times-o::before\",\".icon-c"
                        "alendar-check-o::before\",\".icon-industry::before\",\".icon-map-pin::before\",\""
                        ".icon-map-signs::before\",\".icon-map-o::before\",\".icon-map::before\",\".icon-"
                        "commenting::before\",\".icon-commenting-o::before\",\".icon-houzz::before\",\".i"
                        "con-vimeo::before\",\".icon-black-tie::before\",\".icon-fonticons::before\",\".i"
                        "con-eye2::before\",\".icon-paper-clip::before\",\".icon-mail2::before\",\".icon-"
                        "toggle::before\",\".icon-layout::before\",\".icon-link2::before\",\".icon-bell2:"
                        ":before\",\".icon-lock2::before\",\".icon-unlock::before\",\".icon-ribbon::befor"
                        "e\",\".icon-image2::before\",\".icon-signal2::before\",\".icon-target::before\","
                        "\".icon-clipboard2::before\",\".icon-clock2::before\",\".icon-watch::before\",\""
                        ".icon-air-play::before\",\".icon-camera2::before\",\".icon-video2::before\",\".i"
                        "con-disc::before\",\".icon-printer::before\",\".icon-monitor::before\",\".icon-s"
                        "erver::before\",\".icon-cog2::before\",\".icon-heart2::before\",\".icon-paragrap"
                        "h::before\",\".icon-align-justify::before\",\".icon-align-left2::before\",\".ico"
                        "n-align-center::before\",\".icon-align-right2::before\",\".icon-book2::before\","
                        "\".icon-layers2::before\",\".icon-stack::";
long WebSocketSendLen6   = sizeof(WebSocketSend6) - 1;	 

 

char WebSocketSend7[] = "id-5 index-6 total-7 before\",\".icon-stack-2::before\",\".icon-paper::before\","
                        "\".icon-paper-stack::before\",\".icon-search::before\",\".icon-zoom-in::before\""
                        ",\".icon-zoom-out::before\",\".icon-reply2::before\",\".icon-circle-plus::before"
                        "\",\".icon-circle-minus::before\",\".icon-circle-check::before\",\".icon-circle-"
                        "cross::before\",\".icon-square-plus::before\",\".icon-square-minus::before\",\"."
                        "icon-square-check::before\",\".icon-square-cross::before\",\".icon-microphone::b"
                        "efore\",\".icon-record::before\",\".icon-skip-back::before\",\".icon-rewind::bef"
                        "ore\",\".icon-play::before\",\".icon-pause::before\",\".icon-stop::before\",\".i"
                        "con-fast-forward::before\",\".icon-skip-forward::before\",\".icon-shuffle2::befo"
                        "re\",\".icon-repeat::before\",\".icon-folder2::before\",\".icon-umbrella::before"
                        "\",\".icon-moon2::before\",\".icon-thermometer2::before\",\".icon-drop2::before\""
                        ",\".icon-sun::before\",\".icon-cloud2::before\",\".icon-cloud-upload::before\",\""
                        ".icon-cloud-download::before\",\".icon-upload2::before\",\".icon-download2::befo"
                        "re\",\".icon-location2::before\",\".icon-location-2::before\",\".icon-map2::befo"
                        "re\",\".icon-battery2::before\",\".icon-head::before\",\".icon-briefcase2::befor"
                        "e\",\".icon-speech-bubble::before\",\".icon-anchor::before\",\".icon-globe2::bef"
                        "ore\",\".icon-box2::before\",\".icon-reload::before\",\".icon-share2::before\",\""
                        ".icon-marquee::before\",\".icon-marquee-plus::before\",\".icon-marquee-minus::be"
                        "fore\",\".icon-tag2::before\",\".icon-power::before\",\".icon-command::before\","
                        "\".icon-alt::before\",\".icon-esc::before\",\".icon-bar-graph2::before\",\".icon"
                        "-bar-graph-2::before\",\".icon-pie-graph::before\",\".icon-star2::before\",\".ic"
                        "on-arrow-left2::before\",\".icon-arrow-right2::before\",\".icon-arrow-up2::befor"
                        "e\",\".icon-arrow-down2::before\",\".icon-volume::before\",\".icon-mute::before\""
                        ",\".icon-content-right::before\",\".icon-content-left::before\",\".icon-grid2::b"
                        "efore\",\".icon-grid-2::before\",\".icon-columns::before\",\".icon-loader::befor"
                        "e\",\".icon-bag::before\",\".icon-ban::before\",\".icon-flag2::before\",\".icon-"
                        "trash2::before\",\".icon-expand::before\",\".icon-contract::before\",\".icon-max"
                        "imize::before\",\".icon-minimize::before\",\".icon-plus2::before\",\".icon-minus"
                        "2::before\",\".icon-check2::before\",\".icon-cross2::before\",\".icon-move::befo"
                        "re\",\".icon-delete::before\",\".icon-menu2::before\",\".icon-archive2::before\""
                        ",\".icon-inbox2::before\",\".icon-outbox::before\",\".icon-file::before\",\".ico"
                        "n-file-add::before\",\".icon-file-subtract::before\",\".icon-help2::before\",\"."
                        "icon-open::before\",\".icon-ellipsis::before\"]],\"callbackId\":4}";
long WebSocketSendLen7   = sizeof(WebSocketSend7) - 1;	 

 

char WebSocketSend8[] = "id-7 index-0 total-3 {\"name\":\"microsoft.visualstudio.web.browserlink.sourcema"
                        "ppingextensionfactory.getCssMappingData\",\"args\":[\"http://localhost:60680/css"
                        "/simple-line-icons.css\",[\".icon-user, .icon-people, .icon-user-female, .icon-u"
                        "ser-follow, .icon-user-following, .icon-user-unfollow, .icon-login, .icon-logout"
                        ", .icon-emotsmile, .icon-phone, .icon-call-end, .icon-call-in, .icon-call-out, ."
                        "icon-map, .icon-location-pin, .icon-direction, .icon-directions, .icon-compass, "
                        ".icon-layers, .icon-menu, .icon-list, .icon-options-vertical, .icon-options, .ic"
                        "on-arrow-down, .icon-arrow-left, .icon-arrow-right, .icon-arrow-up, .icon-arrow-"
                        "up-circle, .icon-arrow-left-circle, .icon-arrow-right-circle, .icon-arrow-down-c"
                        "ircle, .icon-check, .icon-clock, .icon-plus, .icon-close, .icon-trophy, .icon-sc"
                        "reen-smartphone, .icon-screen-desktop, .icon-plane, .icon-notebook, .icon-mustac"
                        "he, .icon-mouse, .icon-magnet, .icon-energy, .icon-disc, .icon-cursor, .icon-cur"
                        "sor-move, .icon-crop, .icon-chemistry, .icon-speedometer, .icon-shield, .icon-sc"
                        "reen-tablet, .icon-magic-wand, .icon-hourglass, .icon-graduation, .icon-ghost, ."
                        "icon-game-controller, .icon-fire, .icon-eyeglass, .icon-envelope-open, .icon-env"
                        "elope-letter, .icon-bell, .icon-badge, .icon-anchor, .icon-wallet, .icon-vector,"
                        " .icon-speech, .icon-puzzle, .icon-printer, .icon-present, .icon-playlist, .icon"
                        "-pin, .icon-picture, .icon-handbag, .icon-globe-alt, .icon-globe, .icon-folder-a"
                        "lt, .icon-folder, .icon-film, .icon-feed, .icon-drop, .icon-drawar, .icon-docs, "
                        ".icon-doc, .icon-diamond, .icon-cup, .icon-calculator, .icon-bubbles, .icon-brie"
                        "fcase, .icon-book-open, .icon-basket-loaded, .icon-basket, .icon-bag, .icon-acti"
                        "on-undo, .icon-action-redo, .icon-wrench, .icon-umbrella, .icon-trash, .icon-tag"
                        ", .icon-support, .icon-frame, .icon-size-fullscreen, .icon-size-actual, .icon-sh"
                        "uffle, .icon-share-alt, .icon-share, .icon-rocket, .icon-question, .icon-pie-cha"
                        "rt, .icon-pencil, .icon-note, .icon-loop, .icon-home, .icon-grid, .icon-graph, ."
                        "icon-microphone, .icon-music-tone-alt, .icon-music-tone, .icon-earphones-alt, .i"
                        "con-earphones, .icon-equalizer, .icon-like, .icon-dislike, .icon-control-start, "
                        ".icon-control-rewind, .icon-control-play, .icon-control-pause, .icon-control-for"
                        "ward, .icon-control-end, .icon-volume-1, .icon-volume-2, .icon-volume-off, .icon"
                        "-calendar, .icon-bulb, .icon-chart, .icon-ban, .icon-bubble, .icon-camrecorder, "
                        ".icon-camera, .icon-cloud-download, .icon-cloud-upload, .icon-envelope, .icon-ey"
                        "e, .icon-flag, .icon-heart, .icon-info, .icon-key, .icon-link, .icon-lock, .icon"
                        "-lock-open, .icon-magnifier, .icon-magnifier-add, .icon-magnifier-remove, .icon-"
                        "paper-clip, .icon-paper-plane, .icon-power, .icon-refresh, .icon-reload, .icon-s"
                        "ettings, .icon-star, .icon-symble-female, .icon-symbol-male, .icon-target, .icon"
                        "-credit-card, .icon-paypal, .icon-social-tumblr, .icon-social-twitter, .icon-soc"
                        "ial-facebook, .icon-social-instagram, .icon-social-linkedin, .icon-social-pinter"
                        "est, .icon-social-github, .icon-social-gplus, .icon-social-reddit, .icon-social-"
                        "skype, .icon-social-dribbble, .icon-social-behance, .icon-soci";
long WebSocketSendLen8   = sizeof(WebSocketSend8) - 1;	 

 

char WebSocketSend9[] = "id-7 index-1 total-3 al-foursqare, .icon-social-soundcloud, .icon-social-spotify"
                        ", .icon-social-stumbleupon, .icon-social-youtube, .icon-social-dropbox\",\".icon"
                        "-user::before\",\".icon-people::before\",\".icon-user-female::before\",\".icon-u"
                        "ser-follow::before\",\".icon-user-following::before\",\".icon-user-unfollow::bef"
                        "ore\",\".icon-login::before\",\".icon-logout::before\",\".icon-emotsmile::before"
                        "\",\".icon-phone::before\",\".icon-call-end::before\",\".icon-call-in::before\","
                        "\".icon-call-out::before\",\".icon-map::before\",\".icon-location-pin::before\","
                        "\".icon-direction::before\",\".icon-directions::before\",\".icon-compass::before"
                        "\",\".icon-layers::before\",\".icon-menu::before\",\".icon-list::before\",\".ico"
                        "n-options-vertical::before\",\".icon-options::before\",\".icon-arrow-down::befor"
                        "e\",\".icon-arrow-left::before\",\".icon-arrow-right::before\",\".icon-arrow-up:"
                        ":before\",\".icon-arrow-up-circle::before\",\".icon-arrow-left-circle::before\","
                        "\".icon-arrow-right-circle::before\",\".icon-arrow-down-circle::before\",\".icon"
                        "-check::before\",\".icon-clock::before\",\".icon-plus::before\",\".icon-close::b"
                        "efore\",\".icon-trophy::before\",\".icon-screen-smartphone::before\",\".icon-scr"
                        "een-desktop::before\",\".icon-plane::before\",\".icon-notebook::before\",\".icon"
                        "-mustache::before\",\".icon-mouse::before\",\".icon-magnet::before\",\".icon-ene"
                        "rgy::before\",\".icon-disc::before\",\".icon-cursor::before\",\".icon-cursor-mov"
                        "e::before\",\".icon-crop::before\",\".icon-chemistry::before\",\".icon-speedomet"
                        "er::before\",\".icon-shield::before\",\".icon-screen-tablet::before\",\".icon-ma"
                        "gic-wand::before\",\".icon-hourglass::before\",\".icon-graduation::before\",\".i"
                        "con-ghost::before\",\".icon-game-controller::before\",\".icon-fire::before\",\"."
                        "icon-eyeglass::before\",\".icon-envelope-open::before\",\".icon-envelope-letter:"
                        ":before\",\".icon-bell::before\",\".icon-badge::before\",\".icon-anchor::before\""
                        ",\".icon-wallet::before\",\".icon-vector::before\",\".icon-speech::before\",\".i"
                        "con-puzzle::before\",\".icon-printer::before\",\".icon-present::before\",\".icon"
                        "-playlist::before\",\".icon-pin::before\",\".icon-picture::before\",\".icon-hand"
                        "bag::before\",\".icon-globe-alt::before\",\".icon-globe::before\",\".icon-folder"
                        "-alt::before\",\".icon-folder::before\",\".icon-film::before\",\".icon-feed::bef"
                        "ore\",\".icon-drop::before\",\".icon-drawar::before\",\".icon-docs::before\",\"."
                        "icon-doc::before\",\".icon-diamond::before\",\".icon-cup::before\",\".icon-calcu"
                        "lator::before\",\".icon-bubbles::before\",\".icon-briefcase::before\",\".icon-bo"
                        "ok-open::before\",\".icon-basket-loaded::before\",\".icon-basket::before\",\".ic"
                        "on-bag::before\",\".icon-action-undo::before\",\".icon-action-redo::before\",\"."
                        "icon-wrench::before\",\".icon-umbrella::before\",\".icon-trash::before\",\".icon"
                        "-tag::before\",\".icon-support::before\",\".icon-frame::before\",\".icon-size-fu"
                        "llscreen::before\",\".icon-size-actual::before\",\".icon-shuffle::before\",\".ic"
                        "on-share-alt::before\",\".icon-share::before\",\".icon-rocket::before\",\".icon-"
                        "question::before\",\".icon-pie-chart::before\",\".icon-pencil::before\",\".icon-"
                        "note::before\",\".icon-loop::before\",\".icon-home::before\",\".icon-grid::befor"
                        "e\",\".icon-graph::before\",\".icon-microphone::before\",\".icon-music-tone-alt:"
                        ":before\",\".icon-music-tone::before\",\".icon-ear";
long WebSocketSendLen9   = sizeof(WebSocketSend9) - 1;	 

 

char WebSocketSend10[] = "id-7 index-2 total-3 phones-alt::before\",\".icon-earphones::before\",\".icon-eq"
                        "ualizer::before\",\".icon-like::before\",\".icon-dislike::before\",\".icon-contr"
                        "ol-start::before\",\".icon-control-rewind::before\",\".icon-control-play::before"
                        "\",\".icon-control-pause::before\",\".icon-control-forward::before\",\".icon-con"
                        "trol-end::before\",\".icon-volume-1::before\",\".icon-volume-2::before\",\".icon"
                        "-volume-off::before\",\".icon-calendar::before\",\".icon-bulb::before\",\".icon-"
                        "chart::before\",\".icon-ban::before\",\".icon-bubble::before\",\".icon-camrecord"
                        "er::before\",\".icon-camera::before\",\".icon-cloud-download::before\",\".icon-c"
                        "loud-upload::before\",\".icon-envelope::before\",\".icon-eye::before\",\".icon-f"
                        "lag::before\",\".icon-heart::before\",\".icon-info::before\",\".icon-key::before"
                        "\",\".icon-link::before\",\".icon-lock::before\",\".icon-lock-open::before\",\"."
                        "icon-magnifier::before\",\".icon-magnifier-add::before\",\".icon-magnifier-remov"
                        "e::before\",\".icon-paper-clip::before\",\".icon-paper-plane::before\",\".icon-p"
                        "ower::before\",\".icon-refresh::before\",\".icon-reload::before\",\".icon-settin"
                        "gs::before\",\".icon-star::before\",\".icon-symble-female::before\",\".icon-symb"
                        "ol-male::before\",\".icon-target::before\",\".icon-credit-card::before\",\".icon"
                        "-paypal::before\",\".icon-social-tumblr::before\",\".icon-social-twitter::before"
                        "\",\".icon-social-facebook::before\",\".icon-social-instagram::before\",\".icon-"
                        "social-linkedin::before\",\".icon-social-pinterest::before\",\".icon-social-gith"
                        "ub::before\",\".icon-social-gplus::before\",\".icon-social-reddit::before\",\".i"
                        "con-social-skype::before\",\".icon-social-dribbble::before\",\".icon-social-beha"
                        "nce::before\",\".icon-social-foursqare::before\",\".icon-social-soundcloud::befo"
                        "re\",\".icon-social-spotify::before\",\".icon-social-stumbleupon::before\",\".ic"
                        "on-social-youtube::before\",\".icon-social-dropbox::before\"]],\"callbackId\":6}";
long WebSocketSendLen10   = sizeof(WebSocketSend10) - 1;	 

 

char WebSocketSend11[] = "id-9 index-0 total-26 {\"name\":\"microsoft.visualstudio.web.browserlink.sourcem"
                        "appingextensionfactory.getCssMappingData\",\"args\":[\"http://localhost:60680/cs"
                        "s/bootstrap.css\",[\"html\",\"body\",\"article, aside, details, figcaption, figu"
                        "re, footer, header, hgroup, main, menu, nav, section, summary\",\"audio, canvas,"
                        " progress, video\",\"audio:not([controls])\",\"[hidden], template\",\"a\",\"a:ac"
                        "tive, a:hover\",\"abbr[title]\",\"b, strong\",\"dfn\",\"h1\",\"mark\",\"small\","
                        "\"sub, sup\",\"sup\",\"sub\",\"img\",\"svg:not(:root)\",\"figure\",\"hr\",\"pre\""
                        ",\"code, kbd, pre, samp\",\"button, input, optgroup, select, textarea\",\"button"
                        "\",\"button, select\",\"button, html input[type=\\\"button\\\"], input[type=\\\""
                        "reset\\\"], input[type=\\\"submit\\\"]\",\"button[disabled], html input[disabled"
                        "]\",\"input\",\"input[type=\\\"checkbox\\\"], input[type=\\\"radio\\\"]\",\"inpu"
                        "t[type=\\\"number\\\"]::-webkit-inner-spin-button, input[type=\\\"number\\\"]::-"
                        "webkit-outer-spin-button\",\"input[type=\\\"search\\\"]\",\"input[type=\\\"searc"
                        "h\\\"]::-webkit-search-cancel-button, input[type=\\\"search\\\"]::-webkit-search"
                        "-decoration\",\"fieldset\",\"legend\",\"textarea\",\"optgroup\",\"table\",\"td, "
                        "th\",\"print\",\"*, ::before, ::after\",\"a, a:visited\",\"a[href]::after\",\"ab"
                        "br[title]::after\",\"a[href^=\\\"#\\\"]::after, a[href^=\\\"javascript:\\\"]::af"
                        "ter\",\"pre, blockquote\",\"thead\",\"tr, img\",\"img\",\"p, h2, h3\",\"h2, h3\""
                        ",\".navbar\",\".btn > .caret, .dropup > .btn > .caret\",\".label\",\".table\",\""
                        ".table td, .table th\",\".table-bordered th, .table-bordered td\",\".glyphicon\""
                        ",\".glyphicon-asterisk::before\",\".glyphicon-plus::before\",\".glyphicon-euro::"
                        "before, .glyphicon-eur::before\",\".glyphicon-minus::before\",\".glyphicon-cloud"
                        "::before\",\".glyphicon-envelope::before\",\".glyphicon-pencil::before\",\".glyp"
                        "hicon-glass::before\",\".glyphicon-music::before\",\".glyphicon-search::before\""
                        ",\".glyphicon-heart::before\",\".glyphicon-star::before\",\".glyphicon-star-empt"
                        "y::before\",\".glyphicon-user::before\",\".glyphicon-film::before\",\".glyphicon"
                        "-th-large::before\",\".glyphicon-th::before\",\".glyphicon-th-list::before\",\"."
                        "glyphicon-ok::before\",\".glyphicon-remove::before\",\".glyphicon-zoom-in::befor"
                        "e\",\".glyphicon-zoom-out::before\",\".glyphicon-off::before\",\".glyphicon-sign"
                        "al::before\",\".glyphicon-cog::before\",\".glyphicon-trash::before\",\".glyphico"
                        "n-home::before\",\".glyphicon-file::before\",\".glyphicon-time::before\",\".glyp"
                        "hicon-road::before\",\".glyphicon-download-alt::before\",\".glyphicon-download::"
                        "before\",\".glyphicon-upload::before\",\".glyphicon-inbox::before\",\".glyphicon"
                        "-play-circle::before\",\".glyphicon-repeat::before\",\".glyphicon-refresh::befor"
                        "e\",\".glyphicon-list-alt::before\",\".glyphicon-lock::before\",\".glyphicon-fla"
                        "g::before\",\".glyphicon-headphones::before\",\".glyphicon-volume-off::before\","
                        "\".glyphicon-volume-down::before\",\".glyphicon-volume-up::before\",\".glyphicon"
                        "-qrcode::before\",\".glyphicon-barcode::before\",\".glyphicon-tag::before\",\".g"
                        "lyphicon-tags::before\",\".glyphicon-book::before\",\".glyphicon-bookmark::befor"
                        "e\",\".glyphicon-print::before\",\".glyphicon-camera::before\",\".glyphicon-font"
                        "::before\",\".glyphicon-bold::before\",\".glyphicon-italic::before\",\".glyphico"
                        "n-text-height::before\",\".glyphicon-text-width::before\",\".glyphicon-align-lef"
                        "t::before\",\".glyphic";
long WebSocketSendLen11   = sizeof(WebSocketSend11) - 1;	 

 

char WebSocketSend12[] = "id-9 index-1 total-26 on-align-center::before\",\".glyphicon-align-right::before"
                        "\",\".glyphicon-align-justify::before\",\".glyphicon-list::before\",\".glyphicon"
                        "-indent-left::before\",\".glyphicon-indent-right::before\",\".glyphicon-facetime"
                        "-video::before\",\".glyphicon-picture::before\",\".glyphicon-map-marker::before\""
                        ",\".glyphicon-adjust::before\",\".glyphicon-tint::before\",\".glyphicon-edit::be"
                        "fore\",\".glyphicon-share::before\",\".glyphicon-check::before\",\".glyphicon-mo"
                        "ve::before\",\".glyphicon-step-backward::before\",\".glyphicon-fast-backward::be"
                        "fore\",\".glyphicon-backward::before\",\".glyphicon-play::before\",\".glyphicon-"
                        "pause::before\",\".glyphicon-stop::before\",\".glyphicon-forward::before\",\".gl"
                        "yphicon-fast-forward::before\",\".glyphicon-step-forward::before\",\".glyphicon-"
                        "eject::before\",\".glyphicon-chevron-left::before\",\".glyphicon-chevron-right::"
                        "before\",\".glyphicon-plus-sign::before\",\".glyphicon-minus-sign::before\",\".g"
                        "lyphicon-remove-sign::before\",\".glyphicon-ok-sign::before\",\".glyphicon-quest"
                        "ion-sign::before\",\".glyphicon-info-sign::before\",\".glyphicon-screenshot::bef"
                        "ore\",\".glyphicon-remove-circle::before\",\".glyphicon-ok-circle::before\",\".g"
                        "lyphicon-ban-circle::before\",\".glyphicon-arrow-left::before\",\".glyphicon-arr"
                        "ow-right::before\",\".glyphicon-arrow-up::before\",\".glyphicon-arrow-down::befo"
                        "re\",\".glyphicon-share-alt::before\",\".glyphicon-resize-full::before\",\".glyp"
                        "hicon-resize-small::before\",\".glyphicon-exclamation-sign::before\",\".glyphico"
                        "n-gift::before\",\".glyphicon-leaf::before\",\".glyphicon-fire::before\",\".glyp"
                        "hicon-eye-open::before\",\".glyphicon-eye-close::before\",\".glyphicon-warning-s"
                        "ign::before\",\".glyphicon-plane::before\",\".glyphicon-calendar::before\",\".gl"
                        "yphicon-random::before\",\".glyphicon-comment::before\",\".glyphicon-magnet::bef"
                        "ore\",\".glyphicon-chevron-up::before\",\".glyphicon-chevron-down::before\",\".g"
                        "lyphicon-retweet::before\",\".glyphicon-shopping-cart::before\",\".glyphicon-fol"
                        "der-close::before\",\".glyphicon-folder-open::before\",\".glyphicon-resize-verti"
                        "cal::before\",\".glyphicon-resize-horizontal::before\",\".glyphicon-hdd::before\""
                        ",\".glyphicon-bullhorn::before\",\".glyphicon-bell::before\",\".glyphicon-certif"
                        "icate::before\",\".glyphicon-thumbs-up::before\",\".glyphicon-thumbs-down::befor"
                        "e\",\".glyphicon-hand-right::before\",\".glyphicon-hand-left::before\",\".glyphi"
                        "con-hand-up::before\",\".glyphicon-hand-down::before\",\".glyphicon-circle-arrow"
                        "-right::before\",\".glyphicon-circle-arrow-left::before\",\".glyphicon-circle-ar"
                        "row-up::before\",\".glyphicon-circle-arrow-down::before\",\".glyphicon-globe::be"
                        "fore\",\".glyphicon-wrench::before\",\".glyphicon-tasks::before\",\".glyphicon-f"
                        "ilter::before\",\".glyphicon-briefcase::before\",\".glyphicon-fullscreen::before"
                        "\",\".glyphicon-dashboard::before\",\".glyphicon-paperclip::before\",\".glyphico"
                        "n-heart-empty::before\",\".glyphicon-link::before\",\".glyphicon-phone::before\""
                        ",\".glyphicon-pushpin::before\",\".glyphicon-usd::before\",\".glyphicon-gbp::bef"
                        "ore\",\".glyphicon-sort::before\",\".glyphicon-sort-by-alphabet::before\",\".gly"
                        "phicon-sort-by-alphabet-alt::before\",\".glyphicon-sort-by-order::before\",\".gl"
                        "yphicon-sort-by-order-alt::before\",\".glyphicon-sort-by-attributes::before\",\""
                        ".glyphic";
long WebSocketSendLen12   = sizeof(WebSocketSend12) - 1;	 

 

char WebSocketSend13[] = "id-9 index-2 total-26 on-sort-by-attributes-alt::before\",\".glyphicon-unchecked"
                        "::before\",\".glyphicon-expand::before\",\".glyphicon-collapse-down::before\",\""
                        ".glyphicon-collapse-up::before\",\".glyphicon-log-in::before\",\".glyphicon-flas"
                        "h::before\",\".glyphicon-log-out::before\",\".glyphicon-new-window::before\",\"."
                        "glyphicon-record::before\",\".glyphicon-save::before\",\".glyphicon-open::before"
                        "\",\".glyphicon-saved::before\",\".glyphicon-import::before\",\".glyphicon-expor"
                        "t::before\",\".glyphicon-send::before\",\".glyphicon-floppy-disk::before\",\".gl"
                        "yphicon-floppy-saved::before\",\".glyphicon-floppy-remove::before\",\".glyphicon"
                        "-floppy-save::before\",\".glyphicon-floppy-open::before\",\".glyphicon-credit-ca"
                        "rd::before\",\".glyphicon-transfer::before\",\".glyphicon-cutlery::before\",\".g"
                        "lyphicon-header::before\",\".glyphicon-compressed::before\",\".glyphicon-earphon"
                        "e::before\",\".glyphicon-phone-alt::before\",\".glyphicon-tower::before\",\".gly"
                        "phicon-stats::before\",\".glyphicon-sd-video::before\",\".glyphicon-hd-video::be"
                        "fore\",\".glyphicon-subtitles::before\",\".glyphicon-sound-stereo::before\",\".g"
                        "lyphicon-sound-dolby::before\",\".glyphicon-sound-5-1::before\",\".glyphicon-sou"
                        "nd-6-1::before\",\".glyphicon-sound-7-1::before\",\".glyphicon-copyright-mark::b"
                        "efore\",\".glyphicon-registration-mark::before\",\".glyphicon-cloud-download::be"
                        "fore\",\".glyphicon-cloud-upload::before\",\".glyphicon-tree-conifer::before\",\""
                        ".glyphicon-tree-deciduous::before\",\".glyphicon-cd::before\",\".glyphicon-save-"
                        "file::before\",\".glyphicon-open-file::before\",\".glyphicon-level-up::before\","
                        "\".glyphicon-copy::before\",\".glyphicon-paste::before\",\".glyphicon-alert::bef"
                        "ore\",\".glyphicon-equalizer::before\",\".glyphicon-king::before\",\".glyphicon-"
                        "queen::before\",\".glyphicon-pawn::before\",\".glyphicon-bishop::before\",\".gly"
                        "phicon-knight::before\",\".glyphicon-baby-formula::before\",\".glyphicon-tent::b"
                        "efore\",\".glyphicon-blackboard::before\",\".glyphicon-bed::before\",\".glyphico"
                        "n-apple::before\",\".glyphicon-erase::before\",\".glyphicon-hourglass::before\","
                        "\".glyphicon-lamp::before\",\".glyphicon-duplicate::before\",\".glyphicon-piggy-"
                        "bank::before\",\".glyphicon-scissors::before\",\".glyphicon-bitcoin::before\",\""
                        ".glyphicon-btc::before\",\".glyphicon-xbt::before\",\".glyphicon-yen::before\",\""
                        ".glyphicon-jpy::before\",\".glyphicon-ruble::before\",\".glyphicon-rub::before\""
                        ",\".glyphicon-scale::before\",\".glyphicon-ice-lolly::before\",\".glyphicon-ice-"
                        "lolly-tasted::before\",\".glyphicon-education::before\",\".glyphicon-option-hori"
                        "zontal::before\",\".glyphicon-option-vertical::before\",\".glyphicon-menu-hambur"
                        "ger::before\",\".glyphicon-modal-window::before\",\".glyphicon-oil::before\",\"."
                        "glyphicon-grain::before\",\".glyphicon-sunglasses::before\",\".glyphicon-text-si"
                        "ze::before\",\".glyphicon-text-color::before\",\".glyphicon-text-background::bef"
                        "ore\",\".glyphicon-object-align-top::before\",\".glyphicon-object-align-bottom::"
                        "before\",\".glyphicon-object-align-horizontal::before\",\".glyphicon-object-alig"
                        "n-left::before\",\".glyphicon-object-align-vertical::before\",\".glyphicon-objec"
                        "t-align-right::before\",\".glyphicon-triangle-right::before\",\".glyphicon-trian"
                        "gle-left::before\",\".glyphicon-triangle-bottom::before\",\".glyphicon-triangle-"
                        "top::bef";
long WebSocketSendLen13   = sizeof(WebSocketSend13) - 1;	 

 

char WebSocketSend14[] = "id-9 index-3 total-26 ore\",\".glyphicon-console::before\",\".glyphicon-superscr"
                        "ipt::before\",\".glyphicon-subscript::before\",\".glyphicon-menu-left::before\","
                        "\".glyphicon-menu-right::before\",\".glyphicon-menu-down::before\",\".glyphicon-"
                        "menu-up::before\",\"*\",\"::before, ::after\",\"html\",\"body\",\"input, button,"
                        " select, textarea\",\"a\",\"a:hover, a:focus\",\"a:focus\",\"figure\",\"img\",\""
                        ".img-responsive\",\".img-rounded\",\".img-thumbnail\",\".img-circle\",\"hr\",\"."
                        "sr-only\",\".sr-only-focusable:active, .sr-only-focusable:focus\",\"[role=\\\"bu"
                        "tton\\\"]\",\"h1, h2, h3, h4, h5, h6, .h1, .h2, .h3, .h4, .h5, .h6\",\"h1 small,"
                        " h1 .small, h2 small, h2 .small, h3 small, h3 .small, h4 small, h4 .small, h5 sm"
                        "all, h5 .small, h6 small, h6 .small, .h1 small, .h1 .small, .h2 small, .h2 .smal"
                        "l, .h3 small, .h3 .small, .h4 small, .h4 .small, .h5 small, .h5 .small, .h6 smal"
                        "l, .h6 .small\",\"h1, .h1, h2, .h2, h3, .h3\",\"h1 small, h1 .small, .h1 small, "
                        ".h1 .small, h2 small, h2 .small, .h2 small, .h2 .small, h3 small, h3 .small, .h3"
                        " small, .h3 .small\",\"h4, .h4, h5, .h5, h6, .h6\",\"h4 small, h4 .small, .h4 sm"
                        "all, .h4 .small, h5 small, h5 .small, .h5 small, .h5 .small, h6 small, h6 .small"
                        ", .h6 small, .h6 .small\",\"h1, .h1\",\"h2, .h2\",\"h3, .h3\",\"h4, .h4\",\"h5, "
                        ".h5\",\"h6, .h6\",\"p\",\".lead\",\"(min-width: 768px)\",\".lead\",\"small, .sma"
                        "ll\",\"mark, .mark\",\".text-left\",\".text-right\",\".text-center\",\".text-jus"
                        "tify\",\".text-nowrap\",\".text-lowercase\",\".text-uppercase, .initialism\",\"."
                        "text-capitalize\",\".text-muted\",\".text-primary\",\"a.text-primary:hover, a.te"
                        "xt-primary:focus\",\".text-success\",\"a.text-success:hover, a.text-success:focu"
                        "s\",\".text-info\",\"a.text-info:hover, a.text-info:focus\",\".text-warning\",\""
                        "a.text-warning:hover, a.text-warning:focus\",\".text-danger\",\"a.text-danger:ho"
                        "ver, a.text-danger:focus\",\".bg-primary\",\".bg-primary\",\"a.bg-primary:hover,"
                        " a.bg-primary:focus\",\".bg-success\",\"a.bg-success:hover, a.bg-success:focus\""
                        ",\".bg-info\",\"a.bg-info:hover, a.bg-info:focus\",\".bg-warning\",\"a.bg-warnin"
                        "g:hover, a.bg-warning:focus\",\".bg-danger\",\"a.bg-danger:hover, a.bg-danger:fo"
                        "cus\",\".page-header\",\"ul, ol\",\"ul ul, ul ol, ol ul, ol ol\",\".list-unstyle"
                        "d\",\".list-inline\",\".list-inline > li\",\"dl\",\"dt, dd\",\"dt\",\"dd\",\".dl"
                        "-horizontal dd::before, .dl-horizontal dd::after\",\".dl-horizontal dd::after\","
                        "\"(min-width: 768px)\",\".dl-horizontal dt\",\".dl-horizontal dd\",\"abbr[title]"
                        ", abbr[data-original-title]\",\".initialism\",\"blockquote\",\"blockquote p:last"
                        "-child, blockquote ul:last-child, blockquote ol:last-child\",\"blockquote footer"
                        ", blockquote small, blockquote .small\",\"blockquote footer::before, blockquote "
                        "small::before, blockquote .small::before\",\".blockquote-reverse, blockquote.pul"
                        "l-right\",\".blockquote-reverse footer::before, .blockquote-reverse small::befor"
                        "e, .blockquote-reverse .small::before, blockquote.pull-right footer::before, blo"
                        "ckquote.pull-right small::before, blockquote.pull-right .small::before\",\".bloc"
                        "kquote-reverse footer::after, .blockquote-reverse small::after, .blockquote-reve"
                        "rse .small::after, blockquote.pull-right footer::after, blockquote.pull-right sm"
                        "all::after, blockquote.pull-right .small::after\",\"address\",\"code, kbd, pre, "
                        "samp\",\"code\",\"kb";
long WebSocketSendLen14   = sizeof(WebSocketSend14) - 1;	 

 

char WebSocketSend15[] = "id-9 index-4 total-26 d\",\"kbd kbd\",\"pre\",\"pre code\",\".pre-scrollable\",\""
                        ".container\",\".container::before, .container::after\",\".container::after\",\"("
                        "min-width: 768px)\",\".container\",\"(min-width: 992px)\",\".container\",\"(min-"
                        "width: 1200px)\",\".container\",\".container-fluid\",\".container-fluid::before,"
                        " .container-fluid::after\",\".container-fluid::after\",\".row\",\".row::before, "
                        ".row::after\",\".row::after\",\".col-xs-1, .col-sm-1, .col-md-1, .col-lg-1, .col"
                        "-xs-2, .col-sm-2, .col-md-2, .col-lg-2, .col-xs-3, .col-sm-3, .col-md-3, .col-lg"
                        "-3, .col-xs-4, .col-sm-4, .col-md-4, .col-lg-4, .col-xs-5, .col-sm-5, .col-md-5,"
                        " .col-lg-5, .col-xs-6, .col-sm-6, .col-md-6, .col-lg-6, .col-xs-7, .col-sm-7, .c"
                        "ol-md-7, .col-lg-7, .col-xs-8, .col-sm-8, .col-md-8, .col-lg-8, .col-xs-9, .col-"
                        "sm-9, .col-md-9, .col-lg-9, .col-xs-10, .col-sm-10, .col-md-10, .col-lg-10, .col"
                        "-xs-11, .col-sm-11, .col-md-11, .col-lg-11, .col-xs-12, .col-sm-12, .col-md-12, "
                        ".col-lg-12\",\".col-xs-1, .col-xs-2, .col-xs-3, .col-xs-4, .col-xs-5, .col-xs-6,"
                        " .col-xs-7, .col-xs-8, .col-xs-9, .col-xs-10, .col-xs-11, .col-xs-12\",\".col-xs"
                        "-1\",\".col-xs-2\",\".col-xs-3\",\".col-xs-4\",\".col-xs-5\",\".col-xs-6\",\".co"
                        "l-xs-7\",\".col-xs-8\",\".col-xs-9\",\".col-xs-10\",\".col-xs-11\",\".col-xs-12\""
                        ",\".col-xs-pull-0\",\".col-xs-pull-1\",\".col-xs-pull-2\",\".col-xs-pull-3\",\"."
                        "col-xs-pull-4\",\".col-xs-pull-5\",\".col-xs-pull-6\",\".col-xs-pull-7\",\".col-"
                        "xs-pull-8\",\".col-xs-pull-9\",\".col-xs-pull-10\",\".col-xs-pull-11\",\".col-xs"
                        "-pull-12\",\".col-xs-push-0\",\".col-xs-push-1\",\".col-xs-push-2\",\".col-xs-pu"
                        "sh-3\",\".col-xs-push-4\",\".col-xs-push-5\",\".col-xs-push-6\",\".col-xs-push-7"
                        "\",\".col-xs-push-8\",\".col-xs-push-9\",\".col-xs-push-10\",\".col-xs-push-11\""
                        ",\".col-xs-push-12\",\".col-xs-offset-0\",\".col-xs-offset-1\",\".col-xs-offset-"
                        "2\",\".col-xs-offset-3\",\".col-xs-offset-4\",\".col-xs-offset-5\",\".col-xs-off"
                        "set-6\",\".col-xs-offset-7\",\".col-xs-offset-8\",\".col-xs-offset-9\",\".col-xs"
                        "-offset-10\",\".col-xs-offset-11\",\".col-xs-offset-12\",\"(min-width: 768px)\","
                        "\".col-sm-1, .col-sm-2, .col-sm-3, .col-sm-4, .col-sm-5, .col-sm-6, .col-sm-7, ."
                        "col-sm-8, .col-sm-9, .col-sm-10, .col-sm-11, .col-sm-12\",\".col-sm-1\",\".col-s"
                        "m-2\",\".col-sm-3\",\".col-sm-4\",\".col-sm-5\",\".col-sm-6\",\".col-sm-7\",\".c"
                        "ol-sm-8\",\".col-sm-9\",\".col-sm-10\",\".col-sm-11\",\".col-sm-12\",\".col-sm-p"
                        "ull-0\",\".col-sm-pull-1\",\".col-sm-pull-2\",\".col-sm-pull-3\",\".col-sm-pull-"
                        "4\",\".col-sm-pull-5\",\".col-sm-pull-6\",\".col-sm-pull-7\",\".col-sm-pull-8\","
                        "\".col-sm-pull-9\",\".col-sm-pull-10\",\".col-sm-pull-11\",\".col-sm-pull-12\",\""
                        ".col-sm-push-0\",\".col-sm-push-1\",\".col-sm-push-2\",\".col-sm-push-3\",\".col"
                        "-sm-push-4\",\".col-sm-push-5\",\".col-sm-push-6\",\".col-sm-push-7\",\".col-sm-"
                        "push-8\",\".col-sm-push-9\",\".col-sm-push-10\",\".col-sm-push-11\",\".col-sm-pu"
                        "sh-12\",\".col-sm-offset-0\",\".col-sm-offset-1\",\".col-sm-offset-2\",\".col-sm"
                        "-offset-3\",\".col-sm-offset-4\",\".col-sm-offset-5\",\".col-sm-offset-6\",\".co"
                        "l-sm-offset-7\",\".col-sm-offset-8\",\".col-sm-offset-9\",\".col-sm-offset-10\","
                        "\".col-sm-offset-11\",\".col-sm-offset-12\",\"(min-width: 992px)\",\".col-md-1, "
                        ".col-md-2, .col-md-3, .col-md-4, .col-md-5, .col-md-6, .col-md-7, .col-md-8, .co"
                        "l-md-9, .col-md-10, .col-md-11, .col-md-12\",\".col-md-1\",\".col-md-";
long WebSocketSendLen15   = sizeof(WebSocketSend15) - 1;	 

 

char WebSocketSend16[] = "id-9 index-5 total-26 2\",\".col-md-3\",\".col-md-4\",\".col-md-5\",\".col-md-6\""
                        ",\".col-md-7\",\".col-md-8\",\".col-md-9\",\".col-md-10\",\".col-md-11\",\".col-"
                        "md-12\",\".col-md-pull-0\",\".col-md-pull-1\",\".col-md-pull-2\",\".col-md-pull-"
                        "3\",\".col-md-pull-4\",\".col-md-pull-5\",\".col-md-pull-6\",\".col-md-pull-7\","
                        "\".col-md-pull-8\",\".col-md-pull-9\",\".col-md-pull-10\",\".col-md-pull-11\",\""
                        ".col-md-pull-12\",\".col-md-push-0\",\".col-md-push-1\",\".col-md-push-2\",\".co"
                        "l-md-push-3\",\".col-md-push-4\",\".col-md-push-5\",\".col-md-push-6\",\".col-md"
                        "-push-7\",\".col-md-push-8\",\".col-md-push-9\",\".col-md-push-10\",\".col-md-pu"
                        "sh-11\",\".col-md-push-12\",\".col-md-offset-0\",\".col-md-offset-1\",\".col-md-"
                        "offset-2\",\".col-md-offset-3\",\".col-md-offset-4\",\".col-md-offset-5\",\".col"
                        "-md-offset-6\",\".col-md-offset-7\",\".col-md-offset-8\",\".col-md-offset-9\",\""
                        ".col-md-offset-10\",\".col-md-offset-11\",\".col-md-offset-12\",\"(min-width: 12"
                        "00px)\",\".col-lg-1, .col-lg-2, .col-lg-3, .col-lg-4, .col-lg-5, .col-lg-6, .col"
                        "-lg-7, .col-lg-8, .col-lg-9, .col-lg-10, .col-lg-11, .col-lg-12\",\".col-lg-1\","
                        "\".col-lg-2\",\".col-lg-3\",\".col-lg-4\",\".col-lg-5\",\".col-lg-6\",\".col-lg-"
                        "7\",\".col-lg-8\",\".col-lg-9\",\".col-lg-10\",\".col-lg-11\",\".col-lg-12\",\"."
                        "col-lg-pull-0\",\".col-lg-pull-1\",\".col-lg-pull-2\",\".col-lg-pull-3\",\".col-"
                        "lg-pull-4\",\".col-lg-pull-5\",\".col-lg-pull-6\",\".col-lg-pull-7\",\".col-lg-p"
                        "ull-8\",\".col-lg-pull-9\",\".col-lg-pull-10\",\".col-lg-pull-11\",\".col-lg-pul"
                        "l-12\",\".col-lg-push-0\",\".col-lg-push-1\",\".col-lg-push-2\",\".col-lg-push-3"
                        "\",\".col-lg-push-4\",\".col-lg-push-5\",\".col-lg-push-6\",\".col-lg-push-7\",\""
                        ".col-lg-push-8\",\".col-lg-push-9\",\".col-lg-push-10\",\".col-lg-push-11\",\".c"
                        "ol-lg-push-12\",\".col-lg-offset-0\",\".col-lg-offset-1\",\".col-lg-offset-2\",\""
                        ".col-lg-offset-3\",\".col-lg-offset-4\",\".col-lg-offset-5\",\".col-lg-offset-6\""
                        ",\".col-lg-offset-7\",\".col-lg-offset-8\",\".col-lg-offset-9\",\".col-lg-offset"
                        "-10\",\".col-lg-offset-11\",\".col-lg-offset-12\",\"table\",\"caption\",\"th\",\""
                        ".table\",\".table > thead > tr > th, .table > thead > tr > td, .table > tbody > "
                        "tr > th, .table > tbody > tr > td, .table > tfoot > tr > th, .table > tfoot > tr"
                        " > td\",\".table > thead > tr > th\",\".table > caption + thead > tr:first-child"
                        " > th, .table > caption + thead > tr:first-child > td, .table > colgroup + thead"
                        " > tr:first-child > th, .table > colgroup + thead > tr:first-child > td, .table "
                        "> thead:first-child > tr:first-child > th, .table > thead:first-child > tr:first"
                        "-child > td\",\".table > tbody + tbody\",\".table .table\",\".table-condensed > "
                        "thead > tr > th, .table-condensed > thead > tr > td, .table-condensed > tbody > "
                        "tr > th, .table-condensed > tbody > tr > td, .table-condensed > tfoot > tr > th,"
                        " .table-condensed > tfoot > tr > td\",\".table-bordered\",\".table-bordered > th"
                        "ead > tr > th, .table-bordered > thead > tr > td, .table-bordered > tbody > tr >"
                        " th, .table-bordered > tbody > tr > td, .table-bordered > tfoot > tr > th, .tabl"
                        "e-bordered > tfoot > tr > td\",\".table-bordered > thead > tr > th, .table-borde"
                        "red > thead > tr > td\",\".table-striped > tbody > tr:nth-of-type(2n+1)\",\".tab"
                        "le-hover > tbody > tr:hover\",\"table col[class*=\\\"col-\\\"]\",\"table td[clas"
                        "s*=\\\"col-\\\"], table th[class*=\\\"col-\\\"]\",\".table > ";
long WebSocketSendLen16   = sizeof(WebSocketSend16) - 1;	 

 

char WebSocketSend17[] = "id-9 index-6 total-26 thead > tr > td.active, .table > thead > tr > th.active, ."
                        "table > thead > tr.active > td, .table > thead > tr.active > th, .table > tbody "
                        "> tr > td.active, .table > tbody > tr > th.active, .table > tbody > tr.active > "
                        "td, .table > tbody > tr.active > th, .table > tfoot > tr > td.active, .table > t"
                        "foot > tr > th.active, .table > tfoot > tr.active > td, .table > tfoot > tr.acti"
                        "ve > th\",\".table-hover > tbody > tr > td.active:hover, .table-hover > tbody > "
                        "tr > th.active:hover, .table-hover > tbody > tr.active:hover > td, .table-hover "
                        "> tbody > tr:hover > .active, .table-hover > tbody > tr.active:hover > th\",\".t"
                        "able > thead > tr > td.success, .table > thead > tr > th.success, .table > thead"
                        " > tr.success > td, .table > thead > tr.success > th, .table > tbody > tr > td.s"
                        "uccess, .table > tbody > tr > th.success, .table > tbody > tr.success > td, .tab"
                        "le > tbody > tr.success > th, .table > tfoot > tr > td.success, .table > tfoot >"
                        " tr > th.success, .table > tfoot > tr.success > td, .table > tfoot > tr.success "
                        "> th\",\".table-hover > tbody > tr > td.success:hover, .table-hover > tbody > tr"
                        " > th.success:hover, .table-hover > tbody > tr.success:hover > td, .table-hover "
                        "> tbody > tr:hover > .success, .table-hover > tbody > tr.success:hover > th\",\""
                        ".table > thead > tr > td.info, .table > thead > tr > th.info, .table > thead > t"
                        "r.info > td, .table > thead > tr.info > th, .table > tbody > tr > td.info, .tabl"
                        "e > tbody > tr > th.info, .table > tbody > tr.info > td, .table > tbody > tr.inf"
                        "o > th, .table > tfoot > tr > td.info, .table > tfoot > tr > th.info, .table > t"
                        "foot > tr.info > td, .table > tfoot > tr.info > th\",\".table-hover > tbody > tr"
                        " > td.info:hover, .table-hover > tbody > tr > th.info:hover, .table-hover > tbod"
                        "y > tr.info:hover > td, .table-hover > tbody > tr:hover > .info, .table-hover > "
                        "tbody > tr.info:hover > th\",\".table > thead > tr > td.warning, .table > thead "
                        "> tr > th.warning, .table > thead > tr.warning > td, .table > thead > tr.warning"
                        " > th, .table > tbody > tr > td.warning, .table > tbody > tr > th.warning, .tabl"
                        "e > tbody > tr.warning > td, .table > tbody > tr.warning > th, .table > tfoot > "
                        "tr > td.warning, .table > tfoot > tr > th.warning, .table > tfoot > tr.warning >"
                        " td, .table > tfoot > tr.warning > th\",\".table-hover > tbody > tr > td.warning"
                        ":hover, .table-hover > tbody > tr > th.warning:hover, .table-hover > tbody > tr."
                        "warning:hover > td, .table-hover > tbody > tr:hover > .warning, .table-hover > t"
                        "body > tr.warning:hover > th\",\".table > thead > tr > td.danger, .table > thead"
                        " > tr > th.danger, .table > thead > tr.danger > td, .table > thead > tr.danger >"
                        " th, .table > tbody > tr > td.danger, .table > tbody > tr > th.danger, .table > "
                        "tbody > tr.danger > td, .table > tbody > tr.danger > th, .table > tfoot > tr > t"
                        "d.danger, .table > tfoot > tr > th.danger, .table > tfoot > tr.danger > td, .tab"
                        "le > tfoot > tr.danger > th\",\".table-hover > tbody > tr > td.danger:hover, .ta"
                        "ble-hover > tbody > tr > th.danger:hover, .table-hover > tbody > tr.danger:hover"
                        " > td, .table-hover > tbody > tr:hover > .danger, .table-hover > tbody >";
long WebSocketSendLen17   = sizeof(WebSocketSend17) - 1;	 

 

char WebSocketSend18[] = "id-9 index-7 total-26  tr.danger:hover > th\",\".table-responsive\",\"screen and"
                        " (max-width: 767px)\",\".table-responsive\",\".table-responsive > .table\",\".ta"
                        "ble-responsive > .table > thead > tr > th, .table-responsive > .table > thead > "
                        "tr > td, .table-responsive > .table > tbody > tr > th, .table-responsive > .tabl"
                        "e > tbody > tr > td, .table-responsive > .table > tfoot > tr > th, .table-respon"
                        "sive > .table > tfoot > tr > td\",\".table-responsive > .table-bordered\",\".tab"
                        "le-responsive > .table-bordered > thead > tr > th:first-child, .table-responsive"
                        " > .table-bordered > thead > tr > td:first-child, .table-responsive > .table-bor"
                        "dered > tbody > tr > th:first-child, .table-responsive > .table-bordered > tbody"
                        " > tr > td:first-child, .table-responsive > .table-bordered > tfoot > tr > th:fi"
                        "rst-child, .table-responsive > .table-bordered > tfoot > tr > td:first-child\",\""
                        ".table-responsive > .table-bordered > thead > tr > th:last-child, .table-respons"
                        "ive > .table-bordered > thead > tr > td:last-child, .table-responsive > .table-b"
                        "ordered > tbody > tr > th:last-child, .table-responsive > .table-bordered > tbod"
                        "y > tr > td:last-child, .table-responsive > .table-bordered > tfoot > tr > th:la"
                        "st-child, .table-responsive > .table-bordered > tfoot > tr > td:last-child\",\"."
                        "table-responsive > .table-bordered > tbody > tr:last-child > th, .table-responsi"
                        "ve > .table-bordered > tbody > tr:last-child > td, .table-responsive > .table-bo"
                        "rdered > tfoot > tr:last-child > th, .table-responsive > .table-bordered > tfoot"
                        " > tr:last-child > td\",\"fieldset\",\"legend\",\"label\",\"input[type=\\\"searc"
                        "h\\\"]\",\"input[type=\\\"radio\\\"], input[type=\\\"checkbox\\\"]\",\"input[typ"
                        "e=\\\"file\\\"]\",\"input[type=\\\"range\\\"]\",\"select[multiple], select[size]"
                        "\",\"input[type=\\\"file\\\"]:focus, input[type=\\\"radio\\\"]:focus, input[type"
                        "=\\\"checkbox\\\"]:focus\",\"output\",\".form-control\",\".form-control:focus\","
                        "\".form-control::-webkit-input-placeholder\",\".form-control[disabled], .form-co"
                        "ntrol[readonly], fieldset[disabled] .form-control\",\".form-control[disabled], f"
                        "ieldset[disabled] .form-control\",\"textarea.form-control\",\"input[type=\\\"sea"
                        "rch\\\"]\",\"screen and (-webkit-min-device-pixel-ratio: 0)\",\"input[type=\\\"d"
                        "ate\\\"].form-control, input[type=\\\"time\\\"].form-control, input[type=\\\"dat"
                        "etime-local\\\"].form-control, input[type=\\\"month\\\"].form-control\",\"input["
                        "type=\\\"date\\\"].input-sm, .input-group-sm > input[type=\\\"date\\\"].form-con"
                        "trol, .input-group-sm > input[type=\\\"date\\\"].input-group-addon, .input-group"
                        "-sm > .input-group-btn > input[type=\\\"date\\\"].btn, .input-group-sm input[typ"
                        "e=\\\"date\\\"], input[type=\\\"time\\\"].input-sm, .input-group-sm > input[type"
                        "=\\\"time\\\"].form-control, .input-group-sm > input[type=\\\"time\\\"].input-gr"
                        "oup-addon, .input-group-sm > .input-group-btn > input[type=\\\"time\\\"].btn, .i"
                        "nput-group-sm input[type=\\\"time\\\"], input[type=\\\"datetime-local\\\"].input"
                        "-sm, .input-group-sm > input[type=\\\"datetime-local\\\"].form-control, .input-g"
                        "roup-sm > input[type=\\\"datetime-local\\\"].input-group-addon, .input-group-sm "
                        "> .input-group-btn > input[type=\\\"datetime-local\\\"].btn, .input-group-sm inp"
                        "ut[type=\\\"datetime-local\\\"], input[type=\\\"month\\\"].input-sm";
long WebSocketSendLen18   = sizeof(WebSocketSend18) - 1;	 

 

char WebSocketSend19[] = "id-9 index-8 total-26 , .input-group-sm > input[type=\\\"month\\\"].form-control"
                        ", .input-group-sm > input[type=\\\"month\\\"].input-group-addon, .input-group-sm"
                        " > .input-group-btn > input[type=\\\"month\\\"].btn, .input-group-sm input[type="
                        "\\\"month\\\"]\",\"input[type=\\\"date\\\"].input-lg, .input-group-lg > input[ty"
                        "pe=\\\"date\\\"].form-control, .input-group-lg > input[type=\\\"date\\\"].input-"
                        "group-addon, .input-group-lg > .input-group-btn > input[type=\\\"date\\\"].btn, "
                        ".input-group-lg input[type=\\\"date\\\"], input[type=\\\"time\\\"].input-lg, .in"
                        "put-group-lg > input[type=\\\"time\\\"].form-control, .input-group-lg > input[ty"
                        "pe=\\\"time\\\"].input-group-addon, .input-group-lg > .input-group-btn > input[t"
                        "ype=\\\"time\\\"].btn, .input-group-lg input[type=\\\"time\\\"], input[type=\\\""
                        "datetime-local\\\"].input-lg, .input-group-lg > input[type=\\\"datetime-local\\\""
                        "].form-control, .input-group-lg > input[type=\\\"datetime-local\\\"].input-group"
                        "-addon, .input-group-lg > .input-group-btn > input[type=\\\"datetime-local\\\"]."
                        "btn, .input-group-lg input[type=\\\"datetime-local\\\"], input[type=\\\"month\\\""
                        "].input-lg, .input-group-lg > input[type=\\\"month\\\"].form-control, .input-gro"
                        "up-lg > input[type=\\\"month\\\"].input-group-addon, .input-group-lg > .input-gr"
                        "oup-btn > input[type=\\\"month\\\"].btn, .input-group-lg input[type=\\\"month\\\""
                        "]\",\".form-group\",\".radio, .checkbox\",\".radio label, .checkbox label\",\".r"
                        "adio input[type=\\\"radio\\\"], .radio-inline input[type=\\\"radio\\\"], .checkb"
                        "ox input[type=\\\"checkbox\\\"], .checkbox-inline input[type=\\\"checkbox\\\"]\""
                        ",\".radio + .radio, .checkbox + .checkbox\",\".radio-inline, .checkbox-inline\","
                        "\".radio-inline + .radio-inline, .checkbox-inline + .checkbox-inline\",\"input[t"
                        "ype=\\\"radio\\\"][disabled], input[type=\\\"radio\\\"].disabled, fieldset[disab"
                        "led] input[type=\\\"radio\\\"], input[type=\\\"checkbox\\\"][disabled], input[ty"
                        "pe=\\\"checkbox\\\"].disabled, fieldset[disabled] input[type=\\\"checkbox\\\"]\""
                        ",\".radio-inline.disabled, fieldset[disabled] .radio-inline, .checkbox-inline.di"
                        "sabled, fieldset[disabled] .checkbox-inline\",\".radio.disabled label, fieldset["
                        "disabled] .radio label, .checkbox.disabled label, fieldset[disabled] .checkbox l"
                        "abel\",\".form-control-static\",\".form-control-static.input-lg, .input-group-lg"
                        " > .form-control-static.form-control, .input-group-lg > .form-control-static.inp"
                        "ut-group-addon, .input-group-lg > .input-group-btn > .form-control-static.btn, ."
                        "form-control-static.input-sm, .input-group-sm > .form-control-static.form-contro"
                        "l, .input-group-sm > .form-control-static.input-group-addon, .input-group-sm > ."
                        "input-group-btn > .form-control-static.btn\",\".input-sm, .input-group-sm > .for"
                        "m-control, .input-group-sm > .input-group-addon, .input-group-sm > .input-group-"
                        "btn > .btn\",\"select.input-sm, .input-group-sm > select.form-control, .input-gr"
                        "oup-sm > select.input-group-addon, .input-group-sm > .input-group-btn > select.b"
                        "tn\",\"textarea.input-sm, .input-group-sm > textarea.form-control, .input-group-"
                        "sm > textarea.input-group-addon, .input-group-sm > .input-group-btn > textarea.b"
                        "tn, select[multiple].input-sm, .input-group-sm > select[multiple].form-control, "
                        ".input-group-sm > select[multiple].input-group-addon, .inpu";
long WebSocketSendLen19   = sizeof(WebSocketSend19) - 1;	 

 

char WebSocketSend20[] = "id-9 index-9 total-26 t-group-sm > .input-group-btn > select[multiple].btn\",\"."
                        "form-group-sm .form-control\",\".form-group-sm select.form-control\",\".form-gro"
                        "up-sm textarea.form-control, .form-group-sm select[multiple].form-control\",\".f"
                        "orm-group-sm .form-control-static\",\".input-lg, .input-group-lg > .form-control"
                        ", .input-group-lg > .input-group-addon, .input-group-lg > .input-group-btn > .bt"
                        "n\",\"select.input-lg, .input-group-lg > select.form-control, .input-group-lg > "
                        "select.input-group-addon, .input-group-lg > .input-group-btn > select.btn\",\"te"
                        "xtarea.input-lg, .input-group-lg > textarea.form-control, .input-group-lg > text"
                        "area.input-group-addon, .input-group-lg > .input-group-btn > textarea.btn, selec"
                        "t[multiple].input-lg, .input-group-lg > select[multiple].form-control, .input-gr"
                        "oup-lg > select[multiple].input-group-addon, .input-group-lg > .input-group-btn "
                        "> select[multiple].btn\",\".form-group-lg .form-control\",\".form-group-lg selec"
                        "t.form-control\",\".form-group-lg textarea.form-control, .form-group-lg select[m"
                        "ultiple].form-control\",\".form-group-lg .form-control-static\",\".has-feedback\""
                        ",\".has-feedback .form-control\",\".form-control-feedback\",\".input-lg + .form-"
                        "control-feedback, .input-group-lg > .form-control + .form-control-feedback, .inp"
                        "ut-group-lg > .input-group-addon + .form-control-feedback, .input-group-lg > .in"
                        "put-group-btn > .btn + .form-control-feedback, .input-group-lg + .form-control-f"
                        "eedback, .form-group-lg .form-control + .form-control-feedback\",\".input-sm + ."
                        "form-control-feedback, .input-group-sm > .form-control + .form-control-feedback,"
                        " .input-group-sm > .input-group-addon + .form-control-feedback, .input-group-sm "
                        "> .input-group-btn > .btn + .form-control-feedback, .input-group-sm + .form-cont"
                        "rol-feedback, .form-group-sm .form-control + .form-control-feedback\",\".has-suc"
                        "cess .help-block, .has-success .control-label, .has-success .radio, .has-success"
                        " .checkbox, .has-success .radio-inline, .has-success .checkbox-inline, .has-succ"
                        "ess.radio label, .has-success.checkbox label, .has-success.radio-inline label, ."
                        "has-success.checkbox-inline label\",\".has-success .form-control\",\".has-succes"
                        "s .form-control:focus\",\".has-success .input-group-addon\",\".has-success .form"
                        "-control-feedback\",\".has-warning .help-block, .has-warning .control-label, .ha"
                        "s-warning .radio, .has-warning .checkbox, .has-warning .radio-inline, .has-warni"
                        "ng .checkbox-inline, .has-warning.radio label, .has-warning.checkbox label, .has"
                        "-warning.radio-inline label, .has-warning.checkbox-inline label\",\".has-warning"
                        " .form-control\",\".has-warning .form-control:focus\",\".has-warning .input-grou"
                        "p-addon\",\".has-warning .form-control-feedback\",\".has-error .help-block, .has"
                        "-error .control-label, .has-error .radio, .has-error .checkbox, .has-error .radi"
                        "o-inline, .has-error .checkbox-inline, .has-error.radio label, .has-error.checkb"
                        "ox label, .has-error.radio-inline label, .has-error.checkbox-inline label\",\".h"
                        "as-error .form-control\",\".has-error .form-control:focus\",\".has-error .input-"
                        "group-addon\",\".has-error .form-control-feedback\",\".has-feedback label ~ .for"
                        "m-control-feedback\",\".has-feedback la";
long WebSocketSendLen20   = sizeof(WebSocketSend20) - 1;	 

 

char WebSocketSend21[] = "id-9 index-10 total-26 bel.sr-only ~ .form-control-feedback\",\".help-block\",\""
                        "(min-width: 768px)\",\".form-inline .form-group\",\".form-inline .form-control\""
                        ",\".form-inline .form-control-static\",\".form-inline .input-group\",\".form-inl"
                        "ine .input-group .input-group-addon, .form-inline .input-group .input-group-btn,"
                        " .form-inline .input-group .form-control\",\".form-inline .input-group > .form-c"
                        "ontrol\",\".form-inline .control-label\",\".form-inline .radio, .form-inline .ch"
                        "eckbox\",\".form-inline .radio label, .form-inline .checkbox label\",\".form-inl"
                        "ine .radio input[type=\\\"radio\\\"], .form-inline .checkbox input[type=\\\"chec"
                        "kbox\\\"]\",\".form-inline .has-feedback .form-control-feedback\",\".form-horizo"
                        "ntal .radio, .form-horizontal .checkbox, .form-horizontal .radio-inline, .form-h"
                        "orizontal .checkbox-inline\",\".form-horizontal .radio, .form-horizontal .checkb"
                        "ox\",\".form-horizontal .form-group\",\".form-horizontal .form-group::before, .f"
                        "orm-horizontal .form-group::after\",\".form-horizontal .form-group::after\",\"(m"
                        "in-width: 768px)\",\".form-horizontal .control-label\",\".form-horizontal .has-f"
                        "eedback .form-control-feedback\",\"(min-width: 768px)\",\".form-horizontal .form"
                        "-group-lg .control-label\",\"(min-width: 768px)\",\".form-horizontal .form-group"
                        "-sm .control-label\",\".btn\",\".btn:focus, .btn.focus, .btn:active:focus, .btn:"
                        "active.focus, .btn.active:focus, .btn.active.focus\",\".btn:hover, .btn:focus, ."
                        "btn.focus\",\".btn:active, .btn.active\",\".btn.disabled, .btn[disabled], fields"
                        "et[disabled] .btn\",\"a.btn.disabled, fieldset[disabled] a.btn\",\".btn-default\""
                        ",\".btn-default:focus, .btn-default.focus\",\".btn-default:hover\",\".btn-defaul"
                        "t:active, .btn-default.active, .open > .btn-default.dropdown-toggle\",\".btn-def"
                        "ault:active:hover, .btn-default:active:focus, .btn-default:active.focus, .btn-de"
                        "fault.active:hover, .btn-default.active:focus, .btn-default.active.focus, .open "
                        "> .btn-default.dropdown-toggle:hover, .open > .btn-default.dropdown-toggle:focus"
                        ", .open > .btn-default.dropdown-toggle.focus\",\".btn-default:active, .btn-defau"
                        "lt.active, .open > .btn-default.dropdown-toggle\",\".btn-default.disabled, .btn-"
                        "default.disabled:hover, .btn-default.disabled:focus, .btn-default.disabled.focus"
                        ", .btn-default.disabled:active, .btn-default.disabled.active, .btn-default[disab"
                        "led], .btn-default[disabled]:hover, .btn-default[disabled]:focus, .btn-default[d"
                        "isabled].focus, .btn-default[disabled]:active, .btn-default[disabled].active, fi"
                        "eldset[disabled] .btn-default, fieldset[disabled] .btn-default:hover, fieldset[d"
                        "isabled] .btn-default:focus, fieldset[disabled] .btn-default.focus, fieldset[dis"
                        "abled] .btn-default:active, fieldset[disabled] .btn-default.active\",\".btn-defa"
                        "ult .badge\",\".btn-primary\",\".btn-primary:focus, .btn-primary.focus\",\".btn-"
                        "primary:hover\",\".btn-primary:active, .btn-primary.active, .open > .btn-primary"
                        ".dropdown-toggle\",\".btn-primary:active:hover, .btn-primary:active:focus, .btn-"
                        "primary:active.focus, .btn-primary.active:hover, .btn-primary.active:focus, .btn"
                        "-primary.active.focus, .open > .btn-primary.dropdown-toggle:hover, .open > .btn-"
                        "primary.dropdown-toggle:focus, .open > .btn-primary.dropdown-toggle.fo";
long WebSocketSendLen21   = sizeof(WebSocketSend21) - 1;	 

 

char WebSocketSend22[] = "id-9 index-11 total-26 cus\",\".btn-primary:active, .btn-primary.active, .open >"
                        " .btn-primary.dropdown-toggle\",\".btn-primary.disabled, .btn-primary.disabled:h"
                        "over, .btn-primary.disabled:focus, .btn-primary.disabled.focus, .btn-primary.dis"
                        "abled:active, .btn-primary.disabled.active, .btn-primary[disabled], .btn-primary"
                        "[disabled]:hover, .btn-primary[disabled]:focus, .btn-primary[disabled].focus, .b"
                        "tn-primary[disabled]:active, .btn-primary[disabled].active, fieldset[disabled] ."
                        "btn-primary, fieldset[disabled] .btn-primary:hover, fieldset[disabled] .btn-prim"
                        "ary:focus, fieldset[disabled] .btn-primary.focus, fieldset[disabled] .btn-primar"
                        "y:active, fieldset[disabled] .btn-primary.active\",\".btn-primary .badge\",\".bt"
                        "n-success\",\".btn-success:focus, .btn-success.focus\",\".btn-success:hover\",\""
                        ".btn-success:active, .btn-success.active, .open > .btn-success.dropdown-toggle\""
                        ",\".btn-success:active:hover, .btn-success:active:focus, .btn-success:active.foc"
                        "us, .btn-success.active:hover, .btn-success.active:focus, .btn-success.active.fo"
                        "cus, .open > .btn-success.dropdown-toggle:hover, .open > .btn-success.dropdown-t"
                        "oggle:focus, .open > .btn-success.dropdown-toggle.focus\",\".btn-success:active,"
                        " .btn-success.active, .open > .btn-success.dropdown-toggle\",\".btn-success.disa"
                        "bled, .btn-success.disabled:hover, .btn-success.disabled:focus, .btn-success.dis"
                        "abled.focus, .btn-success.disabled:active, .btn-success.disabled.active, .btn-su"
                        "ccess[disabled], .btn-success[disabled]:hover, .btn-success[disabled]:focus, .bt"
                        "n-success[disabled].focus, .btn-success[disabled]:active, .btn-success[disabled]"
                        ".active, fieldset[disabled] .btn-success, fieldset[disabled] .btn-success:hover,"
                        " fieldset[disabled] .btn-success:focus, fieldset[disabled] .btn-success.focus, f"
                        "ieldset[disabled] .btn-success:active, fieldset[disabled] .btn-success.active\","
                        "\".btn-success .badge\",\".btn-info\",\".btn-info:focus, .btn-info.focus\",\".bt"
                        "n-info:hover\",\".btn-info:active, .btn-info.active, .open > .btn-info.dropdown-"
                        "toggle\",\".btn-info:active:hover, .btn-info:active:focus, .btn-info:active.focu"
                        "s, .btn-info.active:hover, .btn-info.active:focus, .btn-info.active.focus, .open"
                        " > .btn-info.dropdown-toggle:hover, .open > .btn-info.dropdown-toggle:focus, .op"
                        "en > .btn-info.dropdown-toggle.focus\",\".btn-info:active, .btn-info.active, .op"
                        "en > .btn-info.dropdown-toggle\",\".btn-info.disabled, .btn-info.disabled:hover,"
                        " .btn-info.disabled:focus, .btn-info.disabled.focus, .btn-info.disabled:active, "
                        ".btn-info.disabled.active, .btn-info[disabled], .btn-info[disabled]:hover, .btn-"
                        "info[disabled]:focus, .btn-info[disabled].focus, .btn-info[disabled]:active, .bt"
                        "n-info[disabled].active, fieldset[disabled] .btn-info, fieldset[disabled] .btn-i"
                        "nfo:hover, fieldset[disabled] .btn-info:focus, fieldset[disabled] .btn-info.focu"
                        "s, fieldset[disabled] .btn-info:active, fieldset[disabled] .btn-info.active\",\""
                        ".btn-info .badge\",\".btn-warning\",\".btn-warning:focus, .btn-warning.focus\",\""
                        ".btn-warning:hover\",\".btn-warning:active, .btn-warning.active, .open > .btn-wa"
                        "rning.dropdown-toggle\",\".btn-warning:active:hover, .btn-warning:active:focus, "
                        ".btn-warning:active.fo";
long WebSocketSendLen22   = sizeof(WebSocketSend22) - 1;	 

 

char WebSocketSend23[] = "id-9 index-12 total-26 cus, .btn-warning.active:hover, .btn-warning.active:focus"
                        ", .btn-warning.active.focus, .open > .btn-warning.dropdown-toggle:hover, .open >"
                        " .btn-warning.dropdown-toggle:focus, .open > .btn-warning.dropdown-toggle.focus\""
                        ",\".btn-warning:active, .btn-warning.active, .open > .btn-warning.dropdown-toggl"
                        "e\",\".btn-warning.disabled, .btn-warning.disabled:hover, .btn-warning.disabled:"
                        "focus, .btn-warning.disabled.focus, .btn-warning.disabled:active, .btn-warning.d"
                        "isabled.active, .btn-warning[disabled], .btn-warning[disabled]:hover, .btn-warni"
                        "ng[disabled]:focus, .btn-warning[disabled].focus, .btn-warning[disabled]:active,"
                        " .btn-warning[disabled].active, fieldset[disabled] .btn-warning, fieldset[disabl"
                        "ed] .btn-warning:hover, fieldset[disabled] .btn-warning:focus, fieldset[disabled"
                        "] .btn-warning.focus, fieldset[disabled] .btn-warning:active, fieldset[disabled]"
                        " .btn-warning.active\",\".btn-warning .badge\",\".btn-danger\",\".btn-danger:foc"
                        "us, .btn-danger.focus\",\".btn-danger:hover\",\".btn-danger:active, .btn-danger."
                        "active, .open > .btn-danger.dropdown-toggle\",\".btn-danger:active:hover, .btn-d"
                        "anger:active:focus, .btn-danger:active.focus, .btn-danger.active:hover, .btn-dan"
                        "ger.active:focus, .btn-danger.active.focus, .open > .btn-danger.dropdown-toggle:"
                        "hover, .open > .btn-danger.dropdown-toggle:focus, .open > .btn-danger.dropdown-t"
                        "oggle.focus\",\".btn-danger:active, .btn-danger.active, .open > .btn-danger.drop"
                        "down-toggle\",\".btn-danger.disabled, .btn-danger.disabled:hover, .btn-danger.di"
                        "sabled:focus, .btn-danger.disabled.focus, .btn-danger.disabled:active, .btn-dang"
                        "er.disabled.active, .btn-danger[disabled], .btn-danger[disabled]:hover, .btn-dan"
                        "ger[disabled]:focus, .btn-danger[disabled].focus, .btn-danger[disabled]:active, "
                        ".btn-danger[disabled].active, fieldset[disabled] .btn-danger, fieldset[disabled]"
                        " .btn-danger:hover, fieldset[disabled] .btn-danger:focus, fieldset[disabled] .bt"
                        "n-danger.focus, fieldset[disabled] .btn-danger:active, fieldset[disabled] .btn-d"
                        "anger.active\",\".btn-danger .badge\",\".btn-link\",\".btn-link, .btn-link:activ"
                        "e, .btn-link.active, .btn-link[disabled], fieldset[disabled] .btn-link\",\".btn-"
                        "link, .btn-link:hover, .btn-link:focus, .btn-link:active\",\".btn-link:hover, .b"
                        "tn-link:focus\",\".btn-link[disabled]:hover, .btn-link[disabled]:focus, fieldset"
                        "[disabled] .btn-link:hover, fieldset[disabled] .btn-link:focus\",\".btn-lg, .btn"
                        "-group-lg > .btn\",\".btn-sm, .btn-group-sm > .btn\",\".btn-xs, .btn-group-xs > "
                        ".btn\",\".btn-block\",\".btn-block + .btn-block\",\"input[type=\\\"submit\\\"].b"
                        "tn-block, input[type=\\\"reset\\\"].btn-block, input[type=\\\"button\\\"].btn-bl"
                        "ock\",\".fade\",\".fade.in\",\".collapse\",\".collapse.in\",\"tr.collapse.in\",\""
                        "tbody.collapse.in\",\".collapsing\",\".caret\",\".dropup, .dropdown\",\".dropdow"
                        "n-toggle:focus\",\".dropdown-menu\",\".dropdown-menu.pull-right\",\".dropdown-me"
                        "nu .divider\",\".dropdown-menu > li > a\",\".dropdown-menu > li > a:hover, .drop"
                        "down-menu > li > a:focus\",\".dropdown-menu > .active > a, .dropdown-menu > .act"
                        "ive > a:hover, .dropdown-menu > .active > a:focus\",\".dropdown-menu > .disabled"
                        " > a, .dropdown-menu > .disabled > a:hover, .dropdown-menu > .d";
long WebSocketSendLen23   = sizeof(WebSocketSend23) - 1;	 

 

char WebSocketSend24[] = "id-9 index-13 total-26 isabled > a:focus\",\".dropdown-menu > .disabled > a:hove"
                        "r, .dropdown-menu > .disabled > a:focus\",\".open > .dropdown-menu\",\".open > a"
                        "\",\".dropdown-menu-right\",\".dropdown-menu-left\",\".dropdown-header\",\".drop"
                        "down-backdrop\",\".pull-right > .dropdown-menu\",\".dropup .caret, .navbar-fixed"
                        "-bottom .dropdown .caret\",\".dropup .dropdown-menu, .navbar-fixed-bottom .dropd"
                        "own .dropdown-menu\",\"(min-width: 768px)\",\".navbar-right .dropdown-menu\",\"."
                        "navbar-right .dropdown-menu-left\",\".btn-group, .btn-group-vertical\",\".btn-gr"
                        "oup > .btn, .btn-group-vertical > .btn\",\".btn-group > .btn:hover, .btn-group >"
                        " .btn:focus, .btn-group > .btn:active, .btn-group > .btn.active, .btn-group-vert"
                        "ical > .btn:hover, .btn-group-vertical > .btn:focus, .btn-group-vertical > .btn:"
                        "active, .btn-group-vertical > .btn.active\",\".btn-group .btn + .btn, .btn-group"
                        " .btn + .btn-group, .btn-group .btn-group + .btn, .btn-group .btn-group + .btn-g"
                        "roup\",\".btn-toolbar\",\".btn-toolbar::before, .btn-toolbar::after\",\".btn-too"
                        "lbar::after\",\".btn-toolbar .btn, .btn-toolbar .btn-group, .btn-toolbar .input-"
                        "group\",\".btn-toolbar > .btn, .btn-toolbar > .btn-group, .btn-toolbar > .input-"
                        "group\",\".btn-group > .btn:not(:first-child):not(:last-child):not(.dropdown-tog"
                        "gle)\",\".btn-group > .btn:first-child\",\".btn-group > .btn:first-child:not(:la"
                        "st-child):not(.dropdown-toggle)\",\".btn-group > .btn:last-child:not(:first-chil"
                        "d), .btn-group > .dropdown-toggle:not(:first-child)\",\".btn-group > .btn-group\""
                        ",\".btn-group > .btn-group:not(:first-child):not(:last-child) > .btn\",\".btn-gr"
                        "oup > .btn-group:first-child:not(:last-child) > .btn:last-child, .btn-group > .b"
                        "tn-group:first-child:not(:last-child) > .dropdown-toggle\",\".btn-group > .btn-g"
                        "roup:last-child:not(:first-child) > .btn:first-child\",\".btn-group .dropdown-to"
                        "ggle:active, .btn-group.open .dropdown-toggle\",\".btn-group > .btn + .dropdown-"
                        "toggle\",\".btn-group > .btn-lg + .dropdown-toggle, .btn-group-lg.btn-group > .b"
                        "tn + .dropdown-toggle\",\".btn-group.open .dropdown-toggle\",\".btn-group.open ."
                        "dropdown-toggle.btn-link\",\".btn .caret\",\".btn-lg .caret, .btn-group-lg > .bt"
                        "n .caret\",\".dropup .btn-lg .caret, .dropup .btn-group-lg > .btn .caret\",\".bt"
                        "n-group-vertical > .btn, .btn-group-vertical > .btn-group, .btn-group-vertical >"
                        " .btn-group > .btn\",\".btn-group-vertical > .btn-group::before, .btn-group-vert"
                        "ical > .btn-group::after\",\".btn-group-vertical > .btn-group::after\",\".btn-gr"
                        "oup-vertical > .btn-group > .btn\",\".btn-group-vertical > .btn + .btn, .btn-gro"
                        "up-vertical > .btn + .btn-group, .btn-group-vertical > .btn-group + .btn, .btn-g"
                        "roup-vertical > .btn-group + .btn-group\",\".btn-group-vertical > .btn:not(:firs"
                        "t-child):not(:last-child)\",\".btn-group-vertical > .btn:first-child:not(:last-c"
                        "hild)\",\".btn-group-vertical > .btn:last-child:not(:first-child)\",\".btn-group"
                        "-vertical > .btn-group:not(:first-child):not(:last-child) > .btn\",\".btn-group-"
                        "vertical > .btn-group:first-child:not(:last-child) > .btn:last-child, .btn-group"
                        "-vertical > .btn-group:first-child:not(:last-child) > .dropdown-toggle\",\".btn-"
                        "group-vertical > .btn-group:last-child:not(:first-child) > .btn:first-ch";
long WebSocketSendLen24   = sizeof(WebSocketSend24) - 1;	 

 

char WebSocketSend25[] = "id-9 index-14 total-26 ild\",\".btn-group-justified\",\".btn-group-justified > ."
                        "btn, .btn-group-justified > .btn-group\",\".btn-group-justified > .btn-group .bt"
                        "n\",\".btn-group-justified > .btn-group .dropdown-menu\",\"[data-toggle=\\\"butt"
                        "ons\\\"] > .btn input[type=\\\"radio\\\"], [data-toggle=\\\"buttons\\\"] > .btn "
                        "input[type=\\\"checkbox\\\"], [data-toggle=\\\"buttons\\\"] > .btn-group > .btn "
                        "input[type=\\\"radio\\\"], [data-toggle=\\\"buttons\\\"] > .btn-group > .btn inp"
                        "ut[type=\\\"checkbox\\\"]\",\".input-group\",\".input-group[class*=\\\"col-\\\"]"
                        "\",\".input-group .form-control\",\".input-group-addon, .input-group-btn, .input"
                        "-group .form-control\",\".input-group-addon:not(:first-child):not(:last-child), "
                        ".input-group-btn:not(:first-child):not(:last-child), .input-group .form-control:"
                        "not(:first-child):not(:last-child)\",\".input-group-addon, .input-group-btn\",\""
                        ".input-group-addon\",\".input-group-addon.input-sm, .input-group-sm > .input-gro"
                        "up-addon, .input-group-sm > .input-group-btn > .input-group-addon.btn\",\".input"
                        "-group-addon.input-lg, .input-group-lg > .input-group-addon, .input-group-lg > ."
                        "input-group-btn > .input-group-addon.btn\",\".input-group-addon input[type=\\\"r"
                        "adio\\\"], .input-group-addon input[type=\\\"checkbox\\\"]\",\".input-group .for"
                        "m-control:first-child, .input-group-addon:first-child, .input-group-btn:first-ch"
                        "ild > .btn, .input-group-btn:first-child > .btn-group > .btn, .input-group-btn:f"
                        "irst-child > .dropdown-toggle, .input-group-btn:last-child > .btn:not(:last-chil"
                        "d):not(.dropdown-toggle), .input-group-btn:last-child > .btn-group:not(:last-chi"
                        "ld) > .btn\",\".input-group-addon:first-child\",\".input-group .form-control:las"
                        "t-child, .input-group-addon:last-child, .input-group-btn:last-child > .btn, .inp"
                        "ut-group-btn:last-child > .btn-group > .btn, .input-group-btn:last-child > .drop"
                        "down-toggle, .input-group-btn:first-child > .btn:not(:first-child), .input-group"
                        "-btn:first-child > .btn-group:not(:first-child) > .btn\",\".input-group-addon:la"
                        "st-child\",\".input-group-btn\",\".input-group-btn > .btn\",\".input-group-btn >"
                        " .btn + .btn\",\".input-group-btn > .btn:hover, .input-group-btn > .btn:focus, ."
                        "input-group-btn > .btn:active\",\".input-group-btn:first-child > .btn, .input-gr"
                        "oup-btn:first-child > .btn-group\",\".input-group-btn:last-child > .btn, .input-"
                        "group-btn:last-child > .btn-group\",\".nav\",\".nav::before, .nav::after\",\".na"
                        "v::after\",\".nav > li\",\".nav > li > a\",\".nav > li > a:hover, .nav > li > a:"
                        "focus\",\".nav > li.disabled > a\",\".nav > li.disabled > a:hover, .nav > li.dis"
                        "abled > a:focus\",\".nav .open > a, .nav .open > a:hover, .nav .open > a:focus\""
                        ",\".nav .nav-divider\",\".nav > li > a > img\",\".nav-tabs\",\".nav-tabs > li\","
                        "\".nav-tabs > li > a\",\".nav-tabs > li > a:hover\",\".nav-tabs > li.active > a,"
                        " .nav-tabs > li.active > a:hover, .nav-tabs > li.active > a:focus\",\".nav-pills"
                        " > li\",\".nav-pills > li > a\",\".nav-pills > li + li\",\".nav-pills > li.activ"
                        "e > a, .nav-pills > li.active > a:hover, .nav-pills > li.active > a:focus\",\".n"
                        "av-stacked > li\",\".nav-stacked > li + li\",\".nav-justified, .nav-tabs.nav-jus"
                        "tified\",\".nav-justified > li, .nav-tabs.nav-justified > li\",\".nav-justified "
                        "> li > a, .nav-tabs.nav-justified > li ";
long WebSocketSendLen25   = sizeof(WebSocketSend25) - 1;	 

 

char WebSocketSend26[] = "id-9 index-15 total-26 > a\",\".nav-justified > .dropdown .dropdown-menu\",\"(mi"
                        "n-width: 768px)\",\".nav-justified > li, .nav-tabs.nav-justified > li\",\".nav-j"
                        "ustified > li > a, .nav-tabs.nav-justified > li > a\",\".nav-tabs-justified, .na"
                        "v-tabs.nav-justified\",\".nav-tabs-justified > li > a, .nav-tabs.nav-justified >"
                        " li > a\",\".nav-tabs-justified > .active > a, .nav-tabs.nav-justified > .active"
                        " > a, .nav-tabs-justified > .active > a:hover, .nav-tabs.nav-justified > .active"
                        " > a:hover, .nav-tabs-justified > .active > a:focus, .nav-tabs.nav-justified > ."
                        "active > a:focus\",\"(min-width: 768px)\",\".nav-tabs-justified > li > a, .nav-t"
                        "abs.nav-justified > li > a\",\".nav-tabs-justified > .active > a, .nav-tabs.nav-"
                        "justified > .active > a, .nav-tabs-justified > .active > a:hover, .nav-tabs.nav-"
                        "justified > .active > a:hover, .nav-tabs-justified > .active > a:focus, .nav-tab"
                        "s.nav-justified > .active > a:focus\",\".tab-content > .tab-pane\",\".tab-conten"
                        "t > .active\",\".nav-tabs .dropdown-menu\",\".navbar\",\".navbar::before, .navba"
                        "r::after\",\".navbar::after\",\"(min-width: 768px)\",\".navbar\",\".navbar-heade"
                        "r::before, .navbar-header::after\",\".navbar-header::after\",\"(min-width: 768px"
                        ")\",\".navbar-header\",\".navbar-collapse\",\".navbar-collapse::before, .navbar-"
                        "collapse::after\",\".navbar-collapse::after\",\".navbar-collapse.in\",\"(min-wid"
                        "th: 768px)\",\".navbar-collapse\",\".navbar-collapse.collapse\",\".navbar-collap"
                        "se.in\",\".navbar-fixed-top .navbar-collapse, .navbar-static-top .navbar-collaps"
                        "e, .navbar-fixed-bottom .navbar-collapse\",\".navbar-fixed-top .navbar-collapse,"
                        " .navbar-fixed-bottom .navbar-collapse\",\"(max-device-width: 480px) and (orient"
                        "ation: landscape)\",\".navbar-fixed-top .navbar-collapse, .navbar-fixed-bottom ."
                        "navbar-collapse\",\".container > .navbar-header, .container > .navbar-collapse, "
                        ".container-fluid > .navbar-header, .container-fluid > .navbar-collapse\",\"(min-"
                        "width: 768px)\",\".container > .navbar-header, .container > .navbar-collapse, .c"
                        "ontainer-fluid > .navbar-header, .container-fluid > .navbar-collapse\",\".navbar"
                        "-static-top\",\"(min-width: 768px)\",\".navbar-static-top\",\".navbar-fixed-top,"
                        " .navbar-fixed-bottom\",\"(min-width: 768px)\",\".navbar-fixed-top, .navbar-fixe"
                        "d-bottom\",\".navbar-fixed-top\",\".navbar-fixed-bottom\",\".navbar-brand\",\".n"
                        "avbar-brand:hover, .navbar-brand:focus\",\".navbar-brand > img\",\"(min-width: 7"
                        "68px)\",\".navbar > .container .navbar-brand, .navbar > .container-fluid .navbar"
                        "-brand\",\".navbar-toggle\",\".navbar-toggle:focus\",\".navbar-toggle .icon-bar\""
                        ",\".navbar-toggle .icon-bar + .icon-bar\",\"(min-width: 768px)\",\".navbar-toggl"
                        "e\",\".navbar-nav\",\".navbar-nav > li > a\",\"(max-width: 767px)\",\".navbar-na"
                        "v .open .dropdown-menu\",\".navbar-nav .open .dropdown-menu > li > a, .navbar-na"
                        "v .open .dropdown-menu .dropdown-header\",\".navbar-nav .open .dropdown-menu > l"
                        "i > a\",\".navbar-nav .open .dropdown-menu > li > a:hover, .navbar-nav .open .dr"
                        "opdown-menu > li > a:focus\",\"(min-width: 768px)\",\".navbar-nav\",\".navbar-na"
                        "v > li\",\".navbar-nav > li > a\",\".navbar-form\",\"(min-width: 768px)\",\".nav"
                        "bar-form .form-group\",\".navbar-form .form-control\",\".navbar-form .form-contr"
                        "ol-static\",\".navbar-form .input-group\"";
long WebSocketSendLen26   = sizeof(WebSocketSend26) - 1;	 

 

char WebSocketSend27[] = "id-9 index-16 total-26 ,\".navbar-form .input-group .input-group-addon, .navbar-"
                        "form .input-group .input-group-btn, .navbar-form .input-group .form-control\",\""
                        ".navbar-form .input-group > .form-control\",\".navbar-form .control-label\",\".n"
                        "avbar-form .radio, .navbar-form .checkbox\",\".navbar-form .radio label, .navbar"
                        "-form .checkbox label\",\".navbar-form .radio input[type=\\\"radio\\\"], .navbar"
                        "-form .checkbox input[type=\\\"checkbox\\\"]\",\".navbar-form .has-feedback .for"
                        "m-control-feedback\",\"(max-width: 767px)\",\".navbar-form .form-group\",\".navb"
                        "ar-form .form-group:last-child\",\"(min-width: 768px)\",\".navbar-form\",\".navb"
                        "ar-nav > li > .dropdown-menu\",\".navbar-fixed-bottom .navbar-nav > li > .dropdo"
                        "wn-menu\",\".navbar-btn\",\".navbar-btn.btn-sm, .btn-group-sm > .navbar-btn.btn\""
                        ",\".navbar-btn.btn-xs, .btn-group-xs > .navbar-btn.btn\",\".navbar-text\",\"(min"
                        "-width: 768px)\",\".navbar-text\",\"(min-width: 768px)\",\".navbar-left\",\".nav"
                        "bar-right\",\".navbar-right ~ .navbar-right\",\".navbar-default\",\".navbar-defa"
                        "ult .navbar-brand\",\".navbar-default .navbar-brand:hover, .navbar-default .navb"
                        "ar-brand:focus\",\".navbar-default .navbar-text\",\".navbar-default .navbar-nav "
                        "> li > a\",\".navbar-default .navbar-nav > li > a:hover, .navbar-default .navbar"
                        "-nav > li > a:focus\",\".navbar-default .navbar-nav > .active > a, .navbar-defau"
                        "lt .navbar-nav > .active > a:hover, .navbar-default .navbar-nav > .active > a:fo"
                        "cus\",\".navbar-default .navbar-nav > .disabled > a, .navbar-default .navbar-nav"
                        " > .disabled > a:hover, .navbar-default .navbar-nav > .disabled > a:focus\",\".n"
                        "avbar-default .navbar-toggle\",\".navbar-default .navbar-toggle:hover, .navbar-d"
                        "efault .navbar-toggle:focus\",\".navbar-default .navbar-toggle .icon-bar\",\".na"
                        "vbar-default .navbar-collapse, .navbar-default .navbar-form\",\".navbar-default "
                        ".navbar-nav > .open > a, .navbar-default .navbar-nav > .open > a:hover, .navbar-"
                        "default .navbar-nav > .open > a:focus\",\"(max-width: 767px)\",\".navbar-default"
                        " .navbar-nav .open .dropdown-menu > li > a\",\".navbar-default .navbar-nav .open"
                        " .dropdown-menu > li > a:hover, .navbar-default .navbar-nav .open .dropdown-menu"
                        " > li > a:focus\",\".navbar-default .navbar-nav .open .dropdown-menu > .active >"
                        " a, .navbar-default .navbar-nav .open .dropdown-menu > .active > a:hover, .navba"
                        "r-default .navbar-nav .open .dropdown-menu > .active > a:focus\",\".navbar-defau"
                        "lt .navbar-nav .open .dropdown-menu > .disabled > a, .navbar-default .navbar-nav"
                        " .open .dropdown-menu > .disabled > a:hover, .navbar-default .navbar-nav .open ."
                        "dropdown-menu > .disabled > a:focus\",\".navbar-default .navbar-link\",\".navbar"
                        "-default .navbar-link:hover\",\".navbar-default .btn-link\",\".navbar-default .b"
                        "tn-link:hover, .navbar-default .btn-link:focus\",\".navbar-default .btn-link[dis"
                        "abled]:hover, .navbar-default .btn-link[disabled]:focus, fieldset[disabled] .nav"
                        "bar-default .btn-link:hover, fieldset[disabled] .navbar-default .btn-link:focus\""
                        ",\".navbar-inverse\",\".navbar-inverse .navbar-brand\",\".navbar-inverse .navbar"
                        "-brand:hover, .navbar-inverse .navbar-brand:focus\",\".navbar-inverse .navbar-te"
                        "xt\",\".navbar-inverse .navbar-nav > li > a\",\".navbar-inverse .navbar-nav > li"
                        " > a:h";
long WebSocketSendLen27   = sizeof(WebSocketSend27) - 1;	 

 

char WebSocketSend28[] = "id-9 index-17 total-26 over, .navbar-inverse .navbar-nav > li > a:focus\",\".nav"
                        "bar-inverse .navbar-nav > .active > a, .navbar-inverse .navbar-nav > .active > a"
                        ":hover, .navbar-inverse .navbar-nav > .active > a:focus\",\".navbar-inverse .nav"
                        "bar-nav > .disabled > a, .navbar-inverse .navbar-nav > .disabled > a:hover, .nav"
                        "bar-inverse .navbar-nav > .disabled > a:focus\",\".navbar-inverse .navbar-toggle"
                        "\",\".navbar-inverse .navbar-toggle:hover, .navbar-inverse .navbar-toggle:focus\""
                        ",\".navbar-inverse .navbar-toggle .icon-bar\",\".navbar-inverse .navbar-collapse"
                        ", .navbar-inverse .navbar-form\",\".navbar-inverse .navbar-nav > .open > a, .nav"
                        "bar-inverse .navbar-nav > .open > a:hover, .navbar-inverse .navbar-nav > .open >"
                        " a:focus\",\"(max-width: 767px)\",\".navbar-inverse .navbar-nav .open .dropdown-"
                        "menu > .dropdown-header\",\".navbar-inverse .navbar-nav .open .dropdown-menu .di"
                        "vider\",\".navbar-inverse .navbar-nav .open .dropdown-menu > li > a\",\".navbar-"
                        "inverse .navbar-nav .open .dropdown-menu > li > a:hover, .navbar-inverse .navbar"
                        "-nav .open .dropdown-menu > li > a:focus\",\".navbar-inverse .navbar-nav .open ."
                        "dropdown-menu > .active > a, .navbar-inverse .navbar-nav .open .dropdown-menu > "
                        ".active > a:hover, .navbar-inverse .navbar-nav .open .dropdown-menu > .active > "
                        "a:focus\",\".navbar-inverse .navbar-nav .open .dropdown-menu > .disabled > a, .n"
                        "avbar-inverse .navbar-nav .open .dropdown-menu > .disabled > a:hover, .navbar-in"
                        "verse .navbar-nav .open .dropdown-menu > .disabled > a:focus\",\".navbar-inverse"
                        " .navbar-link\",\".navbar-inverse .navbar-link:hover\",\".navbar-inverse .btn-li"
                        "nk\",\".navbar-inverse .btn-link:hover, .navbar-inverse .btn-link:focus\",\".nav"
                        "bar-inverse .btn-link[disabled]:hover, .navbar-inverse .btn-link[disabled]:focus"
                        ", fieldset[disabled] .navbar-inverse .btn-link:hover, fieldset[disabled] .navbar"
                        "-inverse .btn-link:focus\",\".breadcrumb\",\".breadcrumb > li\",\".breadcrumb > "
                        "li + li::before\",\".breadcrumb > .active\",\".pagination\",\".pagination > li\""
                        ",\".pagination > li > a, .pagination > li > span\",\".pagination > li:first-chil"
                        "d > a, .pagination > li:first-child > span\",\".pagination > li:last-child > a, "
                        ".pagination > li:last-child > span\",\".pagination > li > a:hover, .pagination >"
                        " li > a:focus, .pagination > li > span:hover, .pagination > li > span:focus\",\""
                        ".pagination > .active > a, .pagination > .active > a:hover, .pagination > .activ"
                        "e > a:focus, .pagination > .active > span, .pagination > .active > span:hover, ."
                        "pagination > .active > span:focus\",\".pagination > .disabled > span, .paginatio"
                        "n > .disabled > span:hover, .pagination > .disabled > span:focus, .pagination > "
                        ".disabled > a, .pagination > .disabled > a:hover, .pagination > .disabled > a:fo"
                        "cus\",\".pagination-lg > li > a, .pagination-lg > li > span\",\".pagination-lg >"
                        " li:first-child > a, .pagination-lg > li:first-child > span\",\".pagination-lg >"
                        " li:last-child > a, .pagination-lg > li:last-child > span\",\".pagination-sm > l"
                        "i > a, .pagination-sm > li > span\",\".pagination-sm > li:first-child > a, .pagi"
                        "nation-sm > li:first-child > span\",\".pagination-sm > li:last-child > a, .pagin"
                        "ation-sm > li:last-child > span\",\".pager\",\".page";
long WebSocketSendLen28   = sizeof(WebSocketSend28) - 1;	 

 

char WebSocketSend29[] = "id-9 index-18 total-26 r::before, .pager::after\",\".pager::after\",\".pager li\""
                        ",\".pager li > a, .pager li > span\",\".pager li > a:hover, .pager li > a:focus\""
                        ",\".pager .next > a, .pager .next > span\",\".pager .previous > a, .pager .previ"
                        "ous > span\",\".pager .disabled > a, .pager .disabled > a:hover, .pager .disable"
                        "d > a:focus, .pager .disabled > span\",\".label\",\".label:empty\",\".btn .label"
                        "\",\"a.label:hover, a.label:focus\",\".label-default\",\".label-default[href]:ho"
                        "ver, .label-default[href]:focus\",\".label-primary\",\".label-primary[href]:hove"
                        "r, .label-primary[href]:focus\",\".label-success\",\".label-success[href]:hover,"
                        " .label-success[href]:focus\",\".label-info\",\".label-info[href]:hover, .label-"
                        "info[href]:focus\",\".label-warning\",\".label-warning[href]:hover, .label-warni"
                        "ng[href]:focus\",\".label-danger\",\".label-danger[href]:hover, .label-danger[hr"
                        "ef]:focus\",\".badge\",\".badge:empty\",\".btn .badge\",\".btn-xs .badge, .btn-g"
                        "roup-xs > .btn .badge, .btn-group-xs > .btn .badge\",\".list-group-item.active >"
                        " .badge, .nav-pills > .active > a > .badge\",\".list-group-item > .badge\",\".li"
                        "st-group-item > .badge + .badge\",\".nav-pills > li > a > .badge\",\"a.badge:hov"
                        "er, a.badge:focus\",\".jumbotron\",\".jumbotron h1, .jumbotron .h1\",\".jumbotro"
                        "n p\",\".jumbotron > hr\",\".container .jumbotron, .container-fluid .jumbotron\""
                        ",\".jumbotron .container\",\"screen and (min-width: 768px)\",\".jumbotron\",\".c"
                        "ontainer .jumbotron, .container-fluid .jumbotron\",\".jumbotron h1, .jumbotron ."
                        "h1\",\".thumbnail\",\".thumbnail > img, .thumbnail a > img\",\".thumbnail .capti"
                        "on\",\"a.thumbnail:hover, a.thumbnail:focus, a.thumbnail.active\",\".alert\",\"."
                        "alert h4\",\".alert .alert-link\",\".alert > p, .alert > ul\",\".alert > p + p\""
                        ",\".alert-dismissable, .alert-dismissible\",\".alert-dismissable .close, .alert-"
                        "dismissible .close\",\".alert-success\",\".alert-success hr\",\".alert-success ."
                        "alert-link\",\".alert-info\",\".alert-info hr\",\".alert-info .alert-link\",\".a"
                        "lert-warning\",\".alert-warning hr\",\".alert-warning .alert-link\",\".alert-dan"
                        "ger\",\".alert-danger hr\",\".alert-danger .alert-link\",\".progress\",\".progre"
                        "ss-bar\",\".progress-striped .progress-bar, .progress-bar-striped\",\".progress."
                        "active .progress-bar, .progress-bar.active\",\".progress-bar-success\",\".progre"
                        "ss-striped .progress-bar-success\",\".progress-bar-info\",\".progress-striped .p"
                        "rogress-bar-info\",\".progress-bar-warning\",\".progress-striped .progress-bar-w"
                        "arning\",\".progress-bar-danger\",\".progress-striped .progress-bar-danger\",\"."
                        "media\",\".media:first-child\",\".media, .media-body\",\".media-body\",\".media-"
                        "object\",\".media-object.img-thumbnail\",\".media-right, .media > .pull-right\","
                        "\".media-left, .media > .pull-left\",\".media-left, .media-right, .media-body\","
                        "\".media-middle\",\".media-bottom\",\".media-heading\",\".media-list\",\".list-g"
                        "roup\",\".list-group-item\",\".list-group-item:first-child\",\".list-group-item:"
                        "last-child\",\"a.list-group-item, button.list-group-item\",\"a.list-group-item ."
                        "list-group-item-heading, button.list-group-item .list-group-item-heading\",\"a.l"
                        "ist-group-item:hover, a.list-group-item:focus, button.list-group-item:hover, but"
                        "ton.list-group-item:focus\",\"button.list-group-item\",\".list-group-item.disabl"
                        "ed, .list-g";
long WebSocketSendLen29   = sizeof(WebSocketSend29) - 1;	 

 

char WebSocketSend30[] = "id-9 index-19 total-26 roup-item.disabled:hover, .list-group-item.disabled:focus"
                        "\",\".list-group-item.disabled .list-group-item-heading, .list-group-item.disabl"
                        "ed:hover .list-group-item-heading, .list-group-item.disabled:focus .list-group-i"
                        "tem-heading\",\".list-group-item.disabled .list-group-item-text, .list-group-ite"
                        "m.disabled:hover .list-group-item-text, .list-group-item.disabled:focus .list-gr"
                        "oup-item-text\",\".list-group-item.active, .list-group-item.active:hover, .list-"
                        "group-item.active:focus\",\".list-group-item.active .list-group-item-heading, .l"
                        "ist-group-item.active .list-group-item-heading > small, .list-group-item.active "
                        ".list-group-item-heading > .small, .list-group-item.active:hover .list-group-ite"
                        "m-heading, .list-group-item.active:hover .list-group-item-heading > small, .list"
                        "-group-item.active:hover .list-group-item-heading > .small, .list-group-item.act"
                        "ive:focus .list-group-item-heading, .list-group-item.active:focus .list-group-it"
                        "em-heading > small, .list-group-item.active:focus .list-group-item-heading > .sm"
                        "all\",\".list-group-item.active .list-group-item-text, .list-group-item.active:h"
                        "over .list-group-item-text, .list-group-item.active:focus .list-group-item-text\""
                        ",\".list-group-item-success\",\"a.list-group-item-success, button.list-group-ite"
                        "m-success\",\"a.list-group-item-success .list-group-item-heading, button.list-gr"
                        "oup-item-success .list-group-item-heading\",\"a.list-group-item-success:hover, a"
                        ".list-group-item-success:focus, button.list-group-item-success:hover, button.lis"
                        "t-group-item-success:focus\",\"a.list-group-item-success.active, a.list-group-it"
                        "em-success.active:hover, a.list-group-item-success.active:focus, button.list-gro"
                        "up-item-success.active, button.list-group-item-success.active:hover, button.list"
                        "-group-item-success.active:focus\",\".list-group-item-info\",\"a.list-group-item"
                        "-info, button.list-group-item-info\",\"a.list-group-item-info .list-group-item-h"
                        "eading, button.list-group-item-info .list-group-item-heading\",\"a.list-group-it"
                        "em-info:hover, a.list-group-item-info:focus, button.list-group-item-info:hover, "
                        "button.list-group-item-info:focus\",\"a.list-group-item-info.active, a.list-grou"
                        "p-item-info.active:hover, a.list-group-item-info.active:focus, button.list-group"
                        "-item-info.active, button.list-group-item-info.active:hover, button.list-group-i"
                        "tem-info.active:focus\",\".list-group-item-warning\",\"a.list-group-item-warning"
                        ", button.list-group-item-warning\",\"a.list-group-item-warning .list-group-item-"
                        "heading, button.list-group-item-warning .list-group-item-heading\",\"a.list-grou"
                        "p-item-warning:hover, a.list-group-item-warning:focus, button.list-group-item-wa"
                        "rning:hover, button.list-group-item-warning:focus\",\"a.list-group-item-warning."
                        "active, a.list-group-item-warning.active:hover, a.list-group-item-warning.active"
                        ":focus, button.list-group-item-warning.active, button.list-group-item-warning.ac"
                        "tive:hover, button.list-group-item-warning.active:focus\",\".list-group-item-dan"
                        "ger\",\"a.list-group-item-danger, button.list-group-item-danger\",\"a.list-group"
                        "-item-danger .list-group-item-heading, button.list-group-item-danger .list-group"
                        "-item-heading\",\"a.li";
long WebSocketSendLen30   = sizeof(WebSocketSend30) - 1;	 

 

char WebSocketSend31[] = "id-9 index-20 total-26 st-group-item-danger:hover, a.list-group-item-danger:focu"
                        "s, button.list-group-item-danger:hover, button.list-group-item-danger:focus\",\""
                        "a.list-group-item-danger.active, a.list-group-item-danger.active:hover, a.list-g"
                        "roup-item-danger.active:focus, button.list-group-item-danger.active, button.list"
                        "-group-item-danger.active:hover, button.list-group-item-danger.active:focus\",\""
                        ".list-group-item-heading\",\".list-group-item-text\",\".panel\",\".panel-body\","
                        "\".panel-body::before, .panel-body::after\",\".panel-body::after\",\".panel-head"
                        "ing\",\".panel-heading > .dropdown .dropdown-toggle\",\".panel-title\",\".panel-"
                        "title > a, .panel-title > small, .panel-title > .small, .panel-title > small > a"
                        ", .panel-title > .small > a\",\".panel-footer\",\".panel > .list-group, .panel >"
                        " .panel-collapse > .list-group\",\".panel > .list-group .list-group-item, .panel"
                        " > .panel-collapse > .list-group .list-group-item\",\".panel > .list-group:first"
                        "-child .list-group-item:first-child, .panel > .panel-collapse > .list-group:firs"
                        "t-child .list-group-item:first-child\",\".panel > .list-group:last-child .list-g"
                        "roup-item:last-child, .panel > .panel-collapse > .list-group:last-child .list-gr"
                        "oup-item:last-child\",\".panel > .panel-heading + .panel-collapse > .list-group "
                        ".list-group-item:first-child\",\".panel-heading + .list-group .list-group-item:f"
                        "irst-child\",\".list-group + .panel-footer\",\".panel > .table, .panel > .table-"
                        "responsive > .table, .panel > .panel-collapse > .table\",\".panel > .table capti"
                        "on, .panel > .table-responsive > .table caption, .panel > .panel-collapse > .tab"
                        "le caption\",\".panel > .table:first-child, .panel > .table-responsive:first-chi"
                        "ld > .table:first-child\",\".panel > .table:first-child > thead:first-child > tr"
                        ":first-child, .panel > .table:first-child > tbody:first-child > tr:first-child, "
                        ".panel > .table-responsive:first-child > .table:first-child > thead:first-child "
                        "> tr:first-child, .panel > .table-responsive:first-child > .table:first-child > "
                        "tbody:first-child > tr:first-child\",\".panel > .table:first-child > thead:first"
                        "-child > tr:first-child td:first-child, .panel > .table:first-child > thead:firs"
                        "t-child > tr:first-child th:first-child, .panel > .table:first-child > tbody:fir"
                        "st-child > tr:first-child td:first-child, .panel > .table:first-child > tbody:fi"
                        "rst-child > tr:first-child th:first-child, .panel > .table-responsive:first-chil"
                        "d > .table:first-child > thead:first-child > tr:first-child td:first-child, .pan"
                        "el > .table-responsive:first-child > .table:first-child > thead:first-child > tr"
                        ":first-child th:first-child, .panel > .table-responsive:first-child > .table:fir"
                        "st-child > tbody:first-child > tr:first-child td:first-child, .panel > .table-re"
                        "sponsive:first-child > .table:first-child > tbody:first-child > tr:first-child t"
                        "h:first-child\",\".panel > .table:first-child > thead:first-child > tr:first-chi"
                        "ld td:last-child, .panel > .table:first-child > thead:first-child > tr:first-chi"
                        "ld th:last-child, .panel > .table:first-child > tbody:first-child > tr:first-chi"
                        "ld td:last-child, .panel > .table:first-child > tbody:first-child > tr:first-chi"
                        "ld th:last-child, .panel ";
long WebSocketSendLen31   = sizeof(WebSocketSend31) - 1;	 

 

char WebSocketSend32[] = "id-9 index-21 total-26 > .table-responsive:first-child > .table:first-child > th"
                        "ead:first-child > tr:first-child td:last-child, .panel > .table-responsive:first"
                        "-child > .table:first-child > thead:first-child > tr:first-child th:last-child, "
                        ".panel > .table-responsive:first-child > .table:first-child > tbody:first-child "
                        "> tr:first-child td:last-child, .panel > .table-responsive:first-child > .table:"
                        "first-child > tbody:first-child > tr:first-child th:last-child\",\".panel > .tab"
                        "le:last-child, .panel > .table-responsive:last-child > .table:last-child\",\".pa"
                        "nel > .table:last-child > tbody:last-child > tr:last-child, .panel > .table:last"
                        "-child > tfoot:last-child > tr:last-child, .panel > .table-responsive:last-child"
                        " > .table:last-child > tbody:last-child > tr:last-child, .panel > .table-respons"
                        "ive:last-child > .table:last-child > tfoot:last-child > tr:last-child\",\".panel"
                        " > .table:last-child > tbody:last-child > tr:last-child td:first-child, .panel >"
                        " .table:last-child > tbody:last-child > tr:last-child th:first-child, .panel > ."
                        "table:last-child > tfoot:last-child > tr:last-child td:first-child, .panel > .ta"
                        "ble:last-child > tfoot:last-child > tr:last-child th:first-child, .panel > .tabl"
                        "e-responsive:last-child > .table:last-child > tbody:last-child > tr:last-child t"
                        "d:first-child, .panel > .table-responsive:last-child > .table:last-child > tbody"
                        ":last-child > tr:last-child th:first-child, .panel > .table-responsive:last-chil"
                        "d > .table:last-child > tfoot:last-child > tr:last-child td:first-child, .panel "
                        "> .table-responsive:last-child > .table:last-child > tfoot:last-child > tr:last-"
                        "child th:first-child\",\".panel > .table:last-child > tbody:last-child > tr:last"
                        "-child td:last-child, .panel > .table:last-child > tbody:last-child > tr:last-ch"
                        "ild th:last-child, .panel > .table:last-child > tfoot:last-child > tr:last-child"
                        " td:last-child, .panel > .table:last-child > tfoot:last-child > tr:last-child th"
                        ":last-child, .panel > .table-responsive:last-child > .table:last-child > tbody:l"
                        "ast-child > tr:last-child td:last-child, .panel > .table-responsive:last-child >"
                        " .table:last-child > tbody:last-child > tr:last-child th:last-child, .panel > .t"
                        "able-responsive:last-child > .table:last-child > tfoot:last-child > tr:last-chil"
                        "d td:last-child, .panel > .table-responsive:last-child > .table:last-child > tfo"
                        "ot:last-child > tr:last-child th:last-child\",\".panel > .panel-body + .table, ."
                        "panel > .panel-body + .table-responsive, .panel > .table + .panel-body, .panel >"
                        " .table-responsive + .panel-body\",\".panel > .table > tbody:first-child > tr:fi"
                        "rst-child th, .panel > .table > tbody:first-child > tr:first-child td\",\".panel"
                        " > .table-bordered, .panel > .table-responsive > .table-bordered\",\".panel > .t"
                        "able-bordered > thead > tr > th:first-child, .panel > .table-bordered > thead > "
                        "tr > td:first-child, .panel > .table-bordered > tbody > tr > th:first-child, .pa"
                        "nel > .table-bordered > tbody > tr > td:first-child, .panel > .table-bordered > "
                        "tfoot > tr > th:first-child, .panel > .table-bordered > tfoot > tr > td:first-ch"
                        "ild, .panel > .table-responsive > .table-bordered > thead > tr > th:fir";
long WebSocketSendLen32   = sizeof(WebSocketSend32) - 1;	 

 

char WebSocketSend33[] = "id-9 index-22 total-26 st-child, .panel > .table-responsive > .table-bordered > "
                        "thead > tr > td:first-child, .panel > .table-responsive > .table-bordered > tbod"
                        "y > tr > th:first-child, .panel > .table-responsive > .table-bordered > tbody > "
                        "tr > td:first-child, .panel > .table-responsive > .table-bordered > tfoot > tr >"
                        " th:first-child, .panel > .table-responsive > .table-bordered > tfoot > tr > td:"
                        "first-child\",\".panel > .table-bordered > thead > tr > th:last-child, .panel > "
                        ".table-bordered > thead > tr > td:last-child, .panel > .table-bordered > tbody >"
                        " tr > th:last-child, .panel > .table-bordered > tbody > tr > td:last-child, .pan"
                        "el > .table-bordered > tfoot > tr > th:last-child, .panel > .table-bordered > tf"
                        "oot > tr > td:last-child, .panel > .table-responsive > .table-bordered > thead >"
                        " tr > th:last-child, .panel > .table-responsive > .table-bordered > thead > tr >"
                        " td:last-child, .panel > .table-responsive > .table-bordered > tbody > tr > th:l"
                        "ast-child, .panel > .table-responsive > .table-bordered > tbody > tr > td:last-c"
                        "hild, .panel > .table-responsive > .table-bordered > tfoot > tr > th:last-child,"
                        " .panel > .table-responsive > .table-bordered > tfoot > tr > td:last-child\",\"."
                        "panel > .table-bordered > thead > tr:first-child > td, .panel > .table-bordered "
                        "> thead > tr:first-child > th, .panel > .table-bordered > tbody > tr:first-child"
                        " > td, .panel > .table-bordered > tbody > tr:first-child > th, .panel > .table-r"
                        "esponsive > .table-bordered > thead > tr:first-child > td, .panel > .table-respo"
                        "nsive > .table-bordered > thead > tr:first-child > th, .panel > .table-responsiv"
                        "e > .table-bordered > tbody > tr:first-child > td, .panel > .table-responsive > "
                        ".table-bordered > tbody > tr:first-child > th\",\".panel > .table-bordered > tbo"
                        "dy > tr:last-child > td, .panel > .table-bordered > tbody > tr:last-child > th, "
                        ".panel > .table-bordered > tfoot > tr:last-child > td, .panel > .table-bordered "
                        "> tfoot > tr:last-child > th, .panel > .table-responsive > .table-bordered > tbo"
                        "dy > tr:last-child > td, .panel > .table-responsive > .table-bordered > tbody > "
                        "tr:last-child > th, .panel > .table-responsive > .table-bordered > tfoot > tr:la"
                        "st-child > td, .panel > .table-responsive > .table-bordered > tfoot > tr:last-ch"
                        "ild > th\",\".panel > .table-responsive\",\".panel-group\",\".panel-group .panel"
                        "\",\".panel-group .panel + .panel\",\".panel-group .panel-heading\",\".panel-gro"
                        "up .panel-heading + .panel-collapse > .panel-body, .panel-group .panel-heading +"
                        " .panel-collapse > .list-group\",\".panel-group .panel-footer\",\".panel-group ."
                        "panel-footer + .panel-collapse .panel-body\",\".panel-default\",\".panel-default"
                        " > .panel-heading\",\".panel-default > .panel-heading + .panel-collapse > .panel"
                        "-body\",\".panel-default > .panel-heading .badge\",\".panel-default > .panel-foo"
                        "ter + .panel-collapse > .panel-body\",\".panel-primary\",\".panel-primary > .pan"
                        "el-heading\",\".panel-primary > .panel-heading + .panel-collapse > .panel-body\""
                        ",\".panel-primary > .panel-heading .badge\",\".panel-primary > .panel-footer + ."
                        "panel-collapse > .panel-body\",\".panel-success\",\".panel-success > .panel-head"
                        "ing\",\".panel-success ";
long WebSocketSendLen33   = sizeof(WebSocketSend33) - 1;	 

 

char WebSocketSend34[] = "id-9 index-23 total-26 > .panel-heading + .panel-collapse > .panel-body\",\".pan"
                        "el-success > .panel-heading .badge\",\".panel-success > .panel-footer + .panel-c"
                        "ollapse > .panel-body\",\".panel-info\",\".panel-info > .panel-heading\",\".pane"
                        "l-info > .panel-heading + .panel-collapse > .panel-body\",\".panel-info > .panel"
                        "-heading .badge\",\".panel-info > .panel-footer + .panel-collapse > .panel-body\""
                        ",\".panel-warning\",\".panel-warning > .panel-heading\",\".panel-warning > .pane"
                        "l-heading + .panel-collapse > .panel-body\",\".panel-warning > .panel-heading .b"
                        "adge\",\".panel-warning > .panel-footer + .panel-collapse > .panel-body\",\".pan"
                        "el-danger\",\".panel-danger > .panel-heading\",\".panel-danger > .panel-heading "
                        "+ .panel-collapse > .panel-body\",\".panel-danger > .panel-heading .badge\",\".p"
                        "anel-danger > .panel-footer + .panel-collapse > .panel-body\",\".embed-responsiv"
                        "e\",\".embed-responsive .embed-responsive-item, .embed-responsive iframe, .embed"
                        "-responsive embed, .embed-responsive object, .embed-responsive video\",\".embed-"
                        "responsive-16by9\",\".embed-responsive-4by3\",\".well\",\".well blockquote\",\"."
                        "well-lg\",\".well-sm\",\".close\",\".close:hover, .close:focus\",\"button.close\""
                        ",\".modal-open\",\".modal\",\".modal.fade .modal-dialog\",\".modal.in .modal-dia"
                        "log\",\".modal-open .modal\",\".modal-dialog\",\".modal-content\",\".modal-backd"
                        "rop\",\".modal-backdrop.fade\",\".modal-backdrop.in\",\".modal-header\",\".modal"
                        "-header .close\",\".modal-title\",\".modal-body\",\".modal-footer\",\".modal-foo"
                        "ter::before, .modal-footer::after\",\".modal-footer::after\",\".modal-footer .bt"
                        "n + .btn\",\".modal-footer .btn-group .btn + .btn\",\".modal-footer .btn-block +"
                        " .btn-block\",\".modal-scrollbar-measure\",\"(min-width: 768px)\",\".modal-dialo"
                        "g\",\".modal-content\",\".modal-sm\",\"(min-width: 992px)\",\".modal-lg\",\".too"
                        "ltip\",\".tooltip.in\",\".tooltip.top\",\".tooltip.right\",\".tooltip.bottom\",\""
                        ".tooltip.left\",\".tooltip-inner\",\".tooltip-arrow\",\".tooltip.top .tooltip-ar"
                        "row\",\".tooltip.top-left .tooltip-arrow\",\".tooltip.top-right .tooltip-arrow\""
                        ",\".tooltip.right .tooltip-arrow\",\".tooltip.left .tooltip-arrow\",\".tooltip.b"
                        "ottom .tooltip-arrow\",\".tooltip.bottom-left .tooltip-arrow\",\".tooltip.bottom"
                        "-right .tooltip-arrow\",\".popover\",\".popover.top\",\".popover.right\",\".popo"
                        "ver.bottom\",\".popover.left\",\".popover-title\",\".popover-content\",\".popove"
                        "r > .arrow, .popover > .arrow::after\",\".popover > .arrow\",\".popover > .arrow"
                        "::after\",\".popover.top > .arrow\",\".popover.top > .arrow::after\",\".popover."
                        "right > .arrow\",\".popover.right > .arrow::after\",\".popover.bottom > .arrow\""
                        ",\".popover.bottom > .arrow::after\",\".popover.left > .arrow\",\".popover.left "
                        "> .arrow::after\",\".carousel\",\".carousel-inner\",\".carousel-inner > .item\","
                        "\".carousel-inner > .item > img, .carousel-inner > .item > a > img\",\"not all, "
                        "(-webkit-transform-3d)\",\".carousel-inner > .item\",\".carousel-inner > .item.n"
                        "ext, .carousel-inner > .item.active.right\",\".carousel-inner > .item.prev, .car"
                        "ousel-inner > .item.active.left\",\".carousel-inner > .item.next.left, .carousel"
                        "-inner > .item.prev.right, .carousel-inner > .item.active\",\".carousel-inner > "
                        ".active, .carousel-inner > .next, .carousel-inner > .prev\",\".carousel-inner > "
                        ".active\",\".c";
long WebSocketSendLen34   = sizeof(WebSocketSend34) - 1;	 

 

char WebSocketSend35[] = "id-9 index-24 total-26 arousel-inner > .next, .carousel-inner > .prev\",\".carou"
                        "sel-inner > .next\",\".carousel-inner > .prev\",\".carousel-inner > .next.left, "
                        ".carousel-inner > .prev.right\",\".carousel-inner > .active.left\",\".carousel-i"
                        "nner > .active.right\",\".carousel-control\",\".carousel-control.left\",\".carou"
                        "sel-control.right\",\".carousel-control:hover, .carousel-control:focus\",\".caro"
                        "usel-control .icon-prev, .carousel-control .icon-next, .carousel-control .glyphi"
                        "con-chevron-left, .carousel-control .glyphicon-chevron-right\",\".carousel-contr"
                        "ol .icon-prev, .carousel-control .glyphicon-chevron-left\",\".carousel-control ."
                        "icon-next, .carousel-control .glyphicon-chevron-right\",\".carousel-control .ico"
                        "n-prev, .carousel-control .icon-next\",\".carousel-control .icon-prev::before\","
                        "\".carousel-control .icon-next::before\",\".carousel-indicators\",\".carousel-in"
                        "dicators li\",\".carousel-indicators .active\",\".carousel-caption\",\".carousel"
                        "-caption .btn\",\"screen and (min-width: 768px)\",\".carousel-control .glyphicon"
                        "-chevron-left, .carousel-control .glyphicon-chevron-right, .carousel-control .ic"
                        "on-prev, .carousel-control .icon-next\",\".carousel-control .glyphicon-chevron-l"
                        "eft, .carousel-control .icon-prev\",\".carousel-control .glyphicon-chevron-right"
                        ", .carousel-control .icon-next\",\".carousel-caption\",\".carousel-indicators\","
                        "\".clearfix::before, .clearfix::after\",\".clearfix::after\",\".center-block\",\""
                        ".pull-right\",\".pull-left\",\".hide\",\".show\",\".invisible\",\".text-hide\",\""
                        ".hidden\",\".affix\",\".visible-xs\",\".visible-sm\",\".visible-md\",\".visible-"
                        "lg\",\".visible-xs-block, .visible-xs-inline, .visible-xs-inline-block, .visible"
                        "-sm-block, .visible-sm-inline, .visible-sm-inline-block, .visible-md-block, .vis"
                        "ible-md-inline, .visible-md-inline-block, .visible-lg-block, .visible-lg-inline,"
                        " .visible-lg-inline-block\",\"(max-width: 767px)\",\".visible-xs\",\"table.visib"
                        "le-xs\",\"tr.visible-xs\",\"th.visible-xs, td.visible-xs\",\"(max-width: 767px)\""
                        ",\".visible-xs-block\",\"(max-width: 767px)\",\".visible-xs-inline\",\"(max-widt"
                        "h: 767px)\",\".visible-xs-inline-block\",\"(max-width: 991px) and (min-width: 76"
                        "8px)\",\".visible-sm\",\"table.visible-sm\",\"tr.visible-sm\",\"th.visible-sm, t"
                        "d.visible-sm\",\"(max-width: 991px) and (min-width: 768px)\",\".visible-sm-block"
                        "\",\"(max-width: 991px) and (min-width: 768px)\",\".visible-sm-inline\",\"(max-w"
                        "idth: 991px) and (min-width: 768px)\",\".visible-sm-inline-block\",\"(max-width:"
                        " 1199px) and (min-width: 992px)\",\".visible-md\",\"table.visible-md\",\"tr.visi"
                        "ble-md\",\"th.visible-md, td.visible-md\",\"(max-width: 1199px) and (min-width: "
                        "992px)\",\".visible-md-block\",\"(max-width: 1199px) and (min-width: 992px)\",\""
                        ".visible-md-inline\",\"(max-width: 1199px) and (min-width: 992px)\",\".visible-m"
                        "d-inline-block\",\"(min-width: 1200px)\",\".visible-lg\",\"table.visible-lg\",\""
                        "tr.visible-lg\",\"th.visible-lg, td.visible-lg\",\"(min-width: 1200px)\",\".visi"
                        "ble-lg-block\",\"(min-width: 1200px)\",\".visible-lg-inline\",\"(min-width: 1200"
                        "px)\",\".visible-lg-inline-block\",\"(max-width: 767px)\",\".hidden-xs\",\"(max-"
                        "width: 991px) and (min-width: 768px)\",\".hidden-sm\",\"(max-width: 1199px) and "
                        "(min-width: 992px)\",\".hidden-md\",\"(min-width: 1200px)\",\".hidden-lg\",\".vi"
                        "si";
long WebSocketSendLen35   = sizeof(WebSocketSend35) - 1;	 

 

char WebSocketSend36[] = "id-0 index-0 total-1 {\"name\":\"microsoft.visualstudio.web.browserlink.sourcema"
                        "ppingextensionfactory.getCssMappingData\",\"args\":[\"http://localhost:60680/css"
                        "/owl.carousel.min.css\",[\".owl-carousel .animated\",\".owl-carousel .owl-animat"
                        "ed-in\",\".owl-carousel .owl-animated-out\",\".owl-carousel .fadeOut\",\".owl-he"
                        "ight\",\".owl-carousel\",\".owl-carousel .owl-stage\",\".owl-carousel .owl-stage"
                        "::after\",\".owl-carousel .owl-stage-outer\",\".owl-carousel .owl-controls .owl-"
                        "dot, .owl-carousel .owl-controls .owl-nav .owl-next, .owl-carousel .owl-controls"
                        " .owl-nav .owl-prev\",\".owl-carousel.owl-loaded\",\".owl-carousel.owl-loading\""
                        ",\".owl-carousel.owl-hidden\",\".owl-carousel .owl-refresh .owl-item\",\".owl-ca"
                        "rousel .owl-item\",\".owl-carousel .owl-item img\",\".owl-carousel.owl-text-sele"
                        "ct-on .owl-item\",\".owl-carousel .owl-grab\",\".owl-carousel.owl-rtl\",\".owl-c"
                        "arousel.owl-rtl .owl-item\",\".no-js .owl-carousel\",\".owl-carousel .owl-item ."
                        "owl-lazy\",\".owl-carousel .owl-item img\",\".owl-carousel .owl-video-wrapper\","
                        "\".owl-carousel .owl-video-play-icon\",\".owl-carousel .owl-video-play-icon:hove"
                        "r\",\".owl-carousel .owl-video-playing .owl-video-play-icon, .owl-carousel .owl-"
                        "video-playing .owl-video-tn\",\".owl-carousel .owl-video-tn\",\".owl-carousel .o"
                        "wl-video-frame\"]],\"callbackId\":10}";
long WebSocketSendLen36   = sizeof(WebSocketSend36) - 1;	 

 

char WebSocketSend37[] = "id-13 index-0 total-3 {\"name\":\"microsoft.visualstudio.web.browserlink.sourcem"
                        "appingextensionfactory.getCssMappingData\",\"args\":[\"http://localhost:60680/cs"
                        "s/style.css\",[\"body\",\"a\",\"a:hover, a:active, a:focus\",\"p\",\"h1, h2, h3,"
                        " h4, h5, h6\",\"::-webkit-selection\",\"::selection\",\"#fh5co-header\",\"#fh5co"
                        "-header .navbar\",\"#fh5co-header #navbar .navbar-right\",\"screen and (max-widt"
                        "h: 992px)\",\"#fh5co-header #navbar .navbar-right\",\"#fh5co-header #navbar li a"
                        "\",\"screen and (max-width: 992px)\",\"#fh5co-header #navbar li a\",\"#fh5co-hea"
                        "der #navbar li a span\",\"#fh5co-header #navbar li a span::before\",\"#fh5co-hea"
                        "der #navbar li a:hover\",\"#fh5co-header #navbar li a:hover span::before\",\"#fh"
                        "5co-header #navbar li.active a\",\"screen and (max-width: 480px)\",\"#fh5co-head"
                        "er #navbar li.active a\",\"#fh5co-header #navbar li.active a span::before\",\"sc"
                        "reen and (max-width: 480px)\",\"#fh5co-header #navbar li.active a span::before\""
                        ",\"#fh5co-header #navbar li.call-to-action a\",\"#fh5co-header #navbar li.call-t"
                        "o-action a:hover\",\"#fh5co-header #navbar li.call-to-action a span::before\",\""
                        "#fh5co-header .navbar-brand\",\"#fh5co-header .navbar-brand > span\",\"screen an"
                        "d (max-width: 992px)\",\"#fh5co-header .navbar-brand\",\"#fh5co-header.navbar-fi"
                        "xed-top\",\"#fh5co-header.navbar-fixed-top .navbar-brand\",\"#fh5co-header.navba"
                        "r-fixed-top #navbar li a\",\"#fh5co-header.navbar-fixed-top #navbar li a:hover\""
                        ",\"#fh5co-header.navbar-fixed-top #navbar li.active a\",\"screen and (max-width:"
                        " 768px)\",\"#fh5co-header.navbar-fixed-top #navbar li.active a\",\"#fh5co-header"
                        ".navbar-fixed-top #navbar li.active a span::before\",\"screen and (max-width: 76"
                        "8px)\",\"#fh5co-header.navbar-fixed-top #navbar li.active a span::before\",\"#fh"
                        "5co-header.navbar-fixed-top #navbar li.call-to-action a\",\"#fh5co-header.navbar"
                        "-fixed-top #navbar li.call-to-action a:hover\",\"#fh5co-header.navbar-fixed-top "
                        "#navbar li.call-to-action a span::before\",\"#fh5co-header .navbar-default\",\"s"
                        "creen and (max-width: 768px)\",\"#fh5co-header .navbar-default\",\"#fh5co-header"
                        " .navbar-default .brand-slogan\",\"#fh5co-header .navbar-default .brand-slogan e"
                        "m\",\"#fh5co-home\",\"#fh5co-home a\",\"#fh5co-home a:hover\",\"#fh5co-home .gra"
                        "dient\",\"#fh5co-home, #fh5co-home .text-wrap\",\"#fh5co-home .text-wrap\",\"#fh"
                        "5co-home .text-inner\",\"#fh5co-home .text-inner h1\",\"#fh5co-home .text-inner "
                        "h2\",\"#fh5co-home .text-inner .call-to-action\",\"#fh5co-home .text-inner .call"
                        "-to-action a\",\"#fh5co-home .text-inner .call-to-action a.demo\",\"screen and ("
                        "max-width: 768px)\",\"#fh5co-home .text-inner .call-to-action a.demo\",\"#fh5co-"
                        "home .text-inner .call-to-action a.demo:hover\",\"#fh5co-home .text-inner .call-"
                        "to-action a.download\",\"#fh5co-services, #fh5co-testimony, #fh5co-explore, #fh5"
                        "co-faq, #fh5co-team, #fh5co-trusted, #fh5co-footer\",\"screen and (max-width: 76"
                        "8px)\",\"#fh5co-services, #fh5co-testimony, #fh5co-explore, #fh5co-faq, #fh5co-t"
                        "eam, #fh5co-trusted, #fh5co-footer\",\"#fh5co-work, #fh5co-counters\",\"screen a"
                        "nd (max-width: 768px)\",\"#fh5co-work, #fh5co-counters\",\".fh5co-explore\",\".f"
                        "h5co-explore-bg-color\",\".mt\",\".mt h4\",\".mt h4 i\",\".mt > div\",\".mt .lis"
                        "t-nav\",\".mt .list-nav li\",\".mt .list-nav li i\",\"#fh5co-test";
long WebSocketSendLen37   = sizeof(WebSocketSend37) - 1;	 

 

char WebSocketSend38[] = "id-13 index-1 total-3 imony .wrap-testimony\",\"#fh5co-testimony .wrap-testimony"
                        " .testimony-slide\",\"#fh5co-testimony .wrap-testimony .testimony-slide span\",\""
                        "#fh5co-testimony .wrap-testimony .testimony-slide span a.twitter\",\"#fh5co-test"
                        "imony .wrap-testimony .testimony-slide figure\",\"#fh5co-testimony .wrap-testimo"
                        "ny .testimony-slide figure img\",\"#fh5co-testimony .wrap-testimony .testimony-s"
                        "lide blockquote\",\"screen and (max-width: 992px)\",\"#fh5co-testimony .wrap-tes"
                        "timony .testimony-slide blockquote\",\"#fh5co-testimony .wrap-testimony .testimo"
                        "ny-slide blockquote p\",\"#fh5co-testimony .wrap-testimony .testimony-slide bloc"
                        "kquote::after\",\"#fh5co-testimony .wrap-testimony .testimony-slide.active\",\"#"
                        "fh5co-testimony .wrap-testimony .arrow-thumb\",\"#fh5co-testimony .wrap-testimon"
                        "y .arrow-thumb a\",\"#fh5co-testimony .wrap-testimony .arrow-thumb a:hover, #fh5"
                        "co-testimony .wrap-testimony .arrow-thumb a:focus, #fh5co-testimony .wrap-testim"
                        "ony .arrow-thumb a:active\",\".getting-started\",\".getting-started h3\",\".gett"
                        "ing-started p\",\".getting-started .call-to-action\",\"screen and (max-width: 99"
                        "2px)\",\".getting-started .call-to-action\",\".getting-started .call-to-action a"
                        ".sign-up\",\"screen and (max-width: 992px)\",\".getting-started .call-to-action "
                        "a.sign-up\",\".getting-started .call-to-action a.sign-up:hover, .getting-started"
                        " .call-to-action a.sign-up:focus, .getting-started .call-to-action a.sign-up:act"
                        "ive\",\".getting-started .call-to-action a.sign-up:hover\",\".fh5co-pricing\",\""
                        ".fh5co-pricing .pricing\",\".fh5co-pricing .price-box\",\".fh5co-pricing .price-"
                        "box.popular .btn-select-plan\",\".fh5co-pricing .price-box .btn-select-plan\",\""
                        ".fh5co-pricing .pricing-plan\",\".fh5co-pricing .pricing-plan.pricing-plan-offer"
                        "\",\".fh5co-pricing .pricing-plan span\",\".fh5co-pricing .price\",\".fh5co-pric"
                        "ing .price .currency\",\".fh5co-pricing .price small\",\".fh5co-services .box-se"
                        "rvices\",\".fh5co-services .box-services i\",\".fh5co-services .fh5co-post\",\"."
                        "fh5co-services .fh5co-post h3\",\".fh5co-services .call-to-action .btn-learn\",\""
                        "#fh5co-team\",\"#fh5co-team .team-box\",\"screen and (max-width: 992px)\",\"#fh5"
                        "co-team .team-box\",\"#fh5co-team .team-box .user\",\"#fh5co-team .team-box .use"
                        "r img\",\"#fh5co-team .team-box h3\",\"#fh5co-team .team-box .position\",\"#fh5c"
                        "o-team .team-box .social-media\",\"#fh5co-team .team-box .social-media li\",\"#f"
                        "h5co-team .team-box .social-media li a\",\"#fh5co-team .team-box .social-media l"
                        "i a:hover, #fh5co-team .team-box .social-media li a:focus, #fh5co-team .team-box"
                        " .social-media li a:active\",\".box-faq\",\".box-faq h3\",\".partner-logo\",\".s"
                        "ection-heading\",\".section-heading h2\",\"screen and (max-width: 768px)\",\".se"
                        "ction-heading h2\",\".section-heading h3\",\".section-heading h3::after\",\"scre"
                        "en and (max-width: 768px)\",\".section-heading h3\",\"#fh5co-footer\",\"#fh5co-f"
                        "ooter a\",\"#fh5co-footer a:hover\",\"#fh5co-footer .section-title\",\"#fh5co-fo"
                        "oter .section-title::after\",\"#fh5co-footer .copy-right\",\"#fh5co-footer .copy"
                        "-right > a\",\"#fh5co-footer .copy-right::after\",\"#fh5co-footer .contact-info\""
                        ",\"#fh5co-footer .contact-info li\",\"#fh5co-footer .contact-info li i\",\"#fh5c"
                        "o-footer .social-media\",\"#fh5co-footer .soc";
long WebSocketSendLen38   = sizeof(WebSocketSend38) - 1;	 

 

char WebSocketSend39[] = "id-13 index-2 total-3 ial-media li\",\"#fh5co-footer .social-media li a\",\"#fh5"
                        "co-footer .social-media li a:hover, #fh5co-footer .social-media li a:focus, #fh5"
                        "co-footer .social-media li a:active\",\"#fh5co-footer .contact-form .form-group "
                        "input[type=\\\"name\\\"], #fh5co-footer .contact-form .form-group input[type=\\\""
                        "text\\\"], #fh5co-footer .contact-form .form-group input[type=\\\"email\\\"], #f"
                        "h5co-footer .contact-form .form-group textarea\",\"#fh5co-footer .contact-form ."
                        "form-group input[type=\\\"name\\\"]::-webkit-input-placeholder, #fh5co-footer .c"
                        "ontact-form .form-group input[type=\\\"text\\\"]::-webkit-input-placeholder, #fh"
                        "5co-footer .contact-form .form-group input[type=\\\"email\\\"]::-webkit-input-pl"
                        "aceholder, #fh5co-footer .contact-form .form-group textarea::-webkit-input-place"
                        "holder\",\"#fh5co-footer .contact-form .form-group input\",\"#fh5co-footer .cont"
                        "act-form .form-group textarea\",\"#fh5co-footer #btn-submit\",\".btn\",\".fh5co-"
                        "nav-toggle\",\".fh5co-nav-toggle.active i::before, .fh5co-nav-toggle.active i::a"
                        "fter\",\".fh5co-nav-toggle:hover, .fh5co-nav-toggle:focus, .fh5co-nav-toggle:act"
                        "ive\",\".fh5co-nav-toggle i\",\".fh5co-nav-toggle i::before, .fh5co-nav-toggle i"
                        "::after\",\".fh5co-nav-toggle i::before\",\".fh5co-nav-toggle i::after\",\".fh5c"
                        "o-nav-toggle:hover i::before\",\".fh5co-nav-toggle:hover i::after\",\".fh5co-nav"
                        "-toggle.active i\",\".fh5co-nav-toggle.active i::before\",\".fh5co-nav-toggle.ac"
                        "tive i::after\",\".fh5co-nav-toggle\",\"screen and (max-width: 768px)\",\".fh5co"
                        "-nav-toggle\",\".btn\",\".btn.btn-primary\",\".btn.btn-primary:hover, .btn.btn-p"
                        "rimary:active, .btn.btn-primary:focus\",\".btn:hover, .btn:active, .btn:focus\","
                        "\".btn.btn-default:hover, .btn.btn-default:focus, .btn.btn-default:active\",\".s"
                        "ocial\",\".social li\",\".social li a\",\".social li a i\",\".social li a:hover,"
                        " .social li a:active, .social li a:focus\",\".social li a.social-box\",\".social"
                        " li a.social-circle\",\".social li a:hover\",\".social.social-box a\",\".social."
                        "social-circle a\",\"#map\",\"screen and (max-width: 768px)\",\"#map\",\".mfp-wit"
                        "h-zoom .mfp-container, .mfp-with-zoom.mfp-bg\",\".mfp-with-zoom.mfp-ready .mfp-c"
                        "ontainer\",\".mfp-with-zoom.mfp-ready.mfp-bg\",\".mfp-with-zoom.mfp-removing .mf"
                        "p-container, .mfp-with-zoom.mfp-removing.mfp-bg\",\".js .to-animate, .js .to-ani"
                        "mate-2, .js .to-animate-3, .js .single-animate\",\"screen and (max-width: 480px)"
                        "\",\".col-xxs-12\",\".row-bottom-padded-lg\",\"screen and (max-width: 768px)\",\""
                        ".row-bottom-padded-lg\",\".row-bottom-padded-md\",\"screen and (max-width: 768px"
                        ")\",\".row-bottom-padded-md\",\".row-bottom-padded-sm\",\"screen and (max-width:"
                        " 768px)\",\".row-bottom-padded-sm\",\".fh5co-animated\",\".owl-carousel .owl-con"
                        "trols .owl-dot span\",\".owl-carousel .owl-controls .owl-dot span:hover, .owl-ca"
                        "rousel .owl-controls .owl-dot span:focus\",\".owl-carousel .owl-controls .owl-do"
                        "t:hover span, .owl-carousel .owl-controls .owl-dot:focus span\",\".owl-carousel "
                        ".owl-controls .owl-dot.active span\"]],\"callbackId\":12}";
long WebSocketSendLen39   = sizeof(WebSocketSend39) - 1;	 

 

char WebSocketReceive2[] = "{\"C\":\"d-EB181140-F,0|G,5|H,0\",\"M\":[\"{\\\"name\\\":\\\"MadsKristensen.Edit"
                        "orExtensions.BrowserLink.PixelPushing.PixelPushingModeFactory.setPixelPusingMode"
                        "\\\",\\\"args\\\":[true,false],\\\"callbackId\\\":-1}\",\"{\\\"name\\\":\\\"Mads"
                        "Kristensen.EditorExtensions.BrowserLink.Menu.MenuBrowserLinkFactory.setVisibilit"
                        "y\\\",\\\"args\\\":[true],\\\"callbackId\\\":-1}\",\"{\\\"name\\\":\\\"sys.callb"
                        "ack\\\",\\\"args\\\":[1,null],\\\"callbackId\\\":-1}\"]}";
long WebSocketReceiveLen2   = sizeof(WebSocketReceive2) - 1;	 

 

char WebSocketReceive3[] = "{\"C\":\"d-EB181140-F,0|G,6|H,0\",\"M\":[\"{\\\"name\\\":\\\"sys.callback\\\",\\"
                        "\"args\\\":[2,null],\\\"callbackId\\\":-1}\"]}";
long WebSocketReceiveLen3   = sizeof(WebSocketReceive3) - 1;	 

 

char WebSocketReceive4[] = "{\"C\":\"d-EB181140-F,0|G,7|H,0\",\"M\":[\"{\\\"name\\\":\\\"sys.callback\\\",\\"
                        "\"args\\\":[3,{\\\"ranges\\\":[{\\\"start\\\":167,\\\"length\\\":139},{\\\"start"
                        "\\\":308,\\\"length\\\":108},{\\\"start\\\":418,\\\"length\\\":79},{\\\"start\\\""
                        ":499,\\\"length\\\":107},{\\\"start\\\":608,\\\"length\\\":106},{\\\"start\\\":2"
                        "530,\\\"length\\\":149},{\\\"start\\\":2877,\\\"length\\\":68},{\\\"start\\\":36"
                        "35,\\\"length\\\":68},{\\\"start\\\":5095,\\\"length\\\":83},{\\\"start\\\":5908"
                        ",\\\"length\\\":68},{\\\"start\\\":7052,\\\"length\\\":140},{\\\"start\\\":8528,"
                        "\\\"length\\\":65},{\\\"start\\\":10469,\\\"length\\\":71},{\\\"start\\\":12504,"
                        "\\\"length\\\":132},{\\\"start\\\":14322,\\\"length\\\":77},{\\\"start\\\":15845"
                        ",\\\"length\\\":89},{\\\"start\\\":17380,\\\"length\\\":89},{\\\"start\\\":18921"
                        ",\\\"length\\\":92},{\\\"start\\\":20523,\\\"length\\\":83},{\\\"start\\\":21308"
                        ",\\\"length\\\":80},{\\\"start\\\":22146,\\\"length\\\":92},{\\\"start\\\":22784"
                        ",\\\"length\\\":92},{\\\"start\\\":23424,\\\"length\\\":95},{\\\"start\\\":24277"
                        ",\\\"length\\\":86},{\\\"start\\\":24533,\\\"length\\\":71},{\\\"start\\\":25250"
                        ",\\\"length\\\":83},{\\\"start\\\":25805,\\\"length\\\":92},{\\\"start\\\":26543"
                        ",\\\"length\\\":83},{\\\"start\\\":27098,\\\"length\\\":92},{\\\"start\\\":27830"
                        ",\\\"length\\\":86},{\\\"start\\\":28386,\\\"length\\\":95},{\\\"start\\\":29115"
                        ",\\\"length\\\":77},{\\\"start\\\":29656,\\\"length\\\":86},{\\\"start\\\":29914"
                        ",\\\"length\\\":74},{\\\"start\\\":30344,\\\"length\\\":86},{\\\"start\\\":30800"
                        ",\\\"length\\\":95},{\\\"start\\\":31255,\\\"length\\\":86},{\\\"start\\\":31715"
                        ",\\\"length\\\":95},{\\\"start\\\":32168,\\\"length\\\":89},{\\\"start\\\":32629"
                        ",\\\"length\\\":98},{\\\"start\\\":33083,\\\"length\\\":80},{\\\"start\\\":33533"
                        ",\\\"length\\\":89},{\\\"start\\\":36086,\\\"length\\\":146},{\\\"start\\\":3801"
                        "8,\\\"length\\\":168},{\\\"start\\\":39972,\\\"length\\\":168},{\\\"start\\\":41"
                        "012,\\\"length\\\":171},{\\\"start\\\":42055,\\\"length\\\":171},{\\\"start\\\":"
                        "43120,\\\"length\\\":175},{\\\"start\\\":43707,\\\"length\\\":176},{\\\"start\\\""
                        ":44617,\\\"length\\\":77},{\\\"start\\\":45480,\\\"length\\\":101},{\\\"start\\\""
                        ":46373,\\\"length\\\":104},{\\\"start\\\":47255,\\\"length\\\":95},{\\\"start\\\""
                        ":48142,\\\"length\\\":98},{\\\"start\\\":48872,\\\"length\\\":80},{\\\"start\\\""
                        ":49636,\\\"length\\\":104},{\\\"start\\\":50438,\\\"length\\\":107},{\\\"start\\"
                        "\":51229,\\\"length\\\":98},{\\\"start\\\":52017,\\\"length\\\":101},{\\\"start\\"
                        "\":53902,\\\"length\\\":68},{\\\"start\\\":54608,\\\"length\\\":71},{\\\"start\\"
                        "\":55211,\\\"length\\\":74},{\\\"start\\\":55617,\\\"length\\\":71},{\\\"start\\"
                        "\":57016,\\\"length\\\":83},{\\\"start\\\":58427,\\\"length\\\":83},{\\\"start\\"
                        "\":59840,\\\"length\\\":86},{\\\"start\\\":61250,\\\"length\\\":77},{\\\"start\\"
                        "\":61717,\\\"length\\\":74},{\\\"start\\\":63281,\\\"length\\\":86},{\\\"start\\"
                        "\":64209,\\\"length\\\":86},{\\\"start\\\":65143,\\\"length\\\":89},{\\\"start\\"
                        "\":66718,\\\"length\\\":80},{\\\"start\\\":67308,\\\"length\\\":86},{\\\"start\\"
                        "\":67904,\\\"length\\\":86},{\\\"start\\\":68498,\\\"length\\\":89},{\\\"start\\"
                        "\":69089,\\\"length\\\":80},{\\\"start\\\":69675,\\\"length\\\":89},{\\\"start\\"
                        "\":70274,\\\"length\\\":89},{\\\"start\\\":70871,\\\"length\\\":92},{\\\"start\\"
                        "\":71469,\\\"length\\\":83}],\\\"resolvedPath\\\":\\\"C:\\\\\\\\Users\\\\\\\\Nav"
                        "een Reddy Vangala\\\\\\\\Documents\\\\\\\\Visual Studio 2015\\\\\\\\Projects\\\\"
                        "\\\\Dot-net-work\\\\\\\\SampleMasterPage\\\\\\\\SampleMasterPage\\\\\\\\css\\\\\\"
                        "\\animate.css\\\"}],\\\"callbackId\\\":-1}\"]}";
long WebSocketReceiveLen4   = sizeof(WebSocketReceive4) - 1;	 

 

char WebSocketSend40[] = "id-0 index-0 total-1 {\"name\":\"microsoft.visualstudio.web.browserlink.sourcema"
                        "ppingextensionfactory.getChangesInFiles\",\"args\":[[\"https://fonts.googleapis."
                        "com/css?family=PT+Sans:400,700,400italic,700italic\",\"C:\\\\Users\\\\Naveen Red"
                        "dy Vangala\\\\Documents\\\\Visual Studio 2015\\\\Projects\\\\Dot-net-work\\\\Sam"
                        "pleMasterPage\\\\SampleMasterPage\\\\css\\\\animate.css\",\"C:\\\\Users\\\\Navee"
                        "n Reddy Vangala\\\\Documents\\\\Visual Studio 2015\\\\Projects\\\\Dot-net-work\\"
                        "\\SampleMasterPage\\\\SampleMasterPage\\\\css\\\\icomoon.css\",\"C:\\\\Users\\\\"
                        "Naveen Reddy Vangala\\\\Documents\\\\Visual Studio 2015\\\\Projects\\\\Dot-net-w"
                        "ork\\\\SampleMasterPage\\\\SampleMasterPage\\\\css\\\\simple-line-icons.css\",\""
                        "C:\\\\Users\\\\Naveen Reddy Vangala\\\\Documents\\\\Visual Studio 2015\\\\Projec"
                        "ts\\\\Dot-net-work\\\\SampleMasterPage\\\\SampleMasterPage\\\\css\\\\bootstrap.c"
                        "ss\",\"C:\\\\Users\\\\Naveen Reddy Vangala\\\\Documents\\\\Visual Studio 2015\\\\"
                        "Projects\\\\Dot-net-work\\\\SampleMasterPage\\\\SampleMasterPage\\\\css\\\\owl.c"
                        "arousel.min.css\",\"C:\\\\Users\\\\Naveen Reddy Vangala\\\\Documents\\\\Visual S"
                        "tudio 2015\\\\Projects\\\\Dot-net-work\\\\SampleMasterPage\\\\SampleMasterPage\\"
                        "\\css\\\\owl.theme.default.min.css\",\"C:\\\\Users\\\\Naveen Reddy Vangala\\\\Do"
                        "cuments\\\\Visual Studio 2015\\\\Projects\\\\Dot-net-work\\\\SampleMasterPage\\\\"
                        "SampleMasterPage\\\\css\\\\style.css\",\"C:\\\\Users\\\\Naveen Reddy Vangala\\\\"
                        "Documents\\\\Visual Studio 2015\\\\Projects\\\\Dot-net-work\\\\SampleMasterPage\\"
                        "\\SampleMasterPage\\\\Home.Master\",\"C:\\\\Users\\\\Naveen Reddy Vangala\\\\Doc"
                        "uments\\\\Visual Studio 2015\\\\Projects\\\\Dot-net-work\\\\SampleMasterPage\\\\"
                        "SampleMasterPage\\\\Index.aspx\",\"https://fonts.googleapis.com/css?family=Robot"
                        "o:300,400,500,700\"]],\"callbackId\":17}";
long WebSocketSendLen40   = sizeof(WebSocketSend40) - 1;	 

 

char WebSocketSend41[] = "id-18 index-0 total-92 {\"name\":\"webaccessibilitychecker.checkerfactory.Proces"
                        "sResult\",\"args\":[\"{\\\"violations\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\"
                        "\"description\\\":\\\"Ensures the contrast between foreground and background col"
                        "ors meets WCAG 2 AA contrast ratio thresholds\\\",\\\"help\\\":\\\"Elements must"
                        " have sufficient color contrast\\\",\\\"helpUrl\\\":\\\"https://dequeuniversity."
                        "com/rules/axe/2.0/color-contrast?application=axeAPI\\\",\\\"impact\\\":\\\"criti"
                        "cal\\\",\\\"tags\\\":[\\\"wcag2aa\\\",\\\"wcag143\\\"],\\\"nodes\\\":[{\\\"targe"
                        "t\\\":[\\\"#navbar > .nav.navbar-nav.navbar-right > li:nth-of-type(1) > a > span"
                        "\\\"],\\\"html\\\":\\\"<span>Home</span>\\\",\\\"impact\\\":\\\"critical\\\",\\\""
                        "any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\""
                        "message\\\":\\\"Element has insufficient color contrast of 3.95 (foreground colo"
                        "r: #808080, background color: #ffffff, font size: 12.0pt, font weight: normal)\\"
                        "\",\\\"data\\\":{\\\"fgColor\\\":\\\"#808080\\\",\\\"bgColor\\\":\\\"#ffffff\\\""
                        ",\\\"contrastRatio\\\":\\\"3.95\\\",\\\"fontSize\\\":\\\"12.0pt\\\",\\\"fontWeig"
                        "ht\\\":\\\"normal\\\"},\\\"relatedNodes\\\":[{\\\"target\\\":[\\\"#fh5co-header "
                        "> .fluid-container > .navbar.navbar-default\\\"],\\\"html\\\":\\\"<nav class=\\\\"
                        "\\\"navbar navbar-default\\\\\\\">\\\"}]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\""
                        "target\\\":[\\\"#navbar > .nav.navbar-nav.navbar-right > li:nth-of-type(2) > a >"
                        " span\\\"],\\\"html\\\":\\\"<span>Explore</span>\\\",\\\"impact\\\":\\\"critical"
                        "\\\",\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critical"
                        "\\\",\\\"message\\\":\\\"Element has insufficient color contrast of 3.95 (foregr"
                        "ound color: #808080, background color: #ffffff, font size: 12.0pt, font weight: "
                        "normal)\\\",\\\"data\\\":{\\\"fgColor\\\":\\\"#808080\\\",\\\"bgColor\\\":\\\"#f"
                        "fffff\\\",\\\"contrastRatio\\\":\\\"3.95\\\",\\\"fontSize\\\":\\\"12.0pt\\\",\\\""
                        "fontWeight\\\":\\\"normal\\\"},\\\"relatedNodes\\\":[{\\\"target\\\":[\\\"#fh5co"
                        "-header > .fluid-container > .navbar.navbar-default\\\"],\\\"html\\\":\\\"<nav c"
                        "lass=\\\\\\\"navbar navbar-default\\\\\\\">\\\"}]}],\\\"all\\\":[],\\\"none\\\":"
                        "[]},{\\\"target\\\":[\\\"#navbar > .nav.navbar-nav.navbar-right > .active > a > "
                        "span\\\"],\\\"html\\\":\\\"<span>Testimony</span>\\\",\\\"impact\\\":\\\"critica"
                        "l\\\",\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critica"
                        "l\\\",\\\"message\\\":\\\"Element has insufficient color contrast of 3.95 (foreg"
                        "round color: #808080, background color: #ffffff, font size: 12.0pt, font weight:"
                        " normal)\\\",\\\"data\\\":{\\\"fgColor\\\":\\\"#808080\\\",\\\"bgColor\\\":\\\"#"
                        "ffffff\\\",\\\"contrastRatio\\\":\\\"3.95\\\",\\\"fontSize\\\":\\\"12.0pt\\\",\\"
                        "\"fontWeight\\\":\\\"normal\\\"},\\\"relatedNodes\\\":[{\\\"target\\\":[\\\"#fh5"
                        "co-header > .fluid-container > .navbar.navbar-default\\\"],\\\"html\\\":\\\"<nav"
                        " class=\\\\\\\"navbar navbar-default\\\\\\\">\\\"}]}],\\\"all\\\":[],\\\"none\\\""
                        ":[]},{\\\"target\\\":[\\\"#navbar > .nav.navbar-nav.navbar-right > li:nth-of-typ"
                        "e(4) > a > span\\\"],\\\"html\\\":\\\"<span>Pricing</span>\\\",\\\"impact\\\":\\"
                        "\"critical\\\",\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\"
                        "\"critical\\\",\\\"message\\\":\\\"Element has insufficient color contrast of 3."
                        "95 (foreground color: #808080, background color: #ffffff, font size: 12.0pt, fon"
                        "t weight: normal)\\\",\\\"data\\\":{\\\"fgColor\\\":\\\"#808080\\\",\\\"bgColor\\"
                        "\":\\\"#ffffff\\\",\\\"contrastRatio\\\":\\\"3.95\\\",\\\"fontSize\\\":\\\"12.0p"
                        "t\\\",\\\"fontWeight\\\":\\\"normal\\\"},\\\"relatedNodes\\\":[{\\\"target\\\":["
                        "\\\"#fh5co-header > .fluid-container > .navbar.navbar-defau";
long WebSocketSendLen41   = sizeof(WebSocketSend41) - 1;	 

 

char WebSocketSend42[] = "id-18 index-1 total-92 lt\\\"],\\\"html\\\":\\\"<nav class=\\\\\\\"navbar navbar"
                        "-default\\\\\\\">\\\"}]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#"
                        "navbar > .nav.navbar-nav.navbar-right > li:nth-of-type(5) > a > span\\\"],\\\"ht"
                        "ml\\\":\\\"<span>Services</span>\\\",\\\"impact\\\":\\\"critical\\\",\\\"any\\\""
                        ":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message"
                        "\\\":\\\"Element has insufficient color contrast of 3.95 (foreground color: #808"
                        "080, background color: #ffffff, font size: 12.0pt, font weight: normal)\\\",\\\""
                        "data\\\":{\\\"fgColor\\\":\\\"#808080\\\",\\\"bgColor\\\":\\\"#ffffff\\\",\\\"co"
                        "ntrastRatio\\\":\\\"3.95\\\",\\\"fontSize\\\":\\\"12.0pt\\\",\\\"fontWeight\\\":"
                        "\\\"normal\\\"},\\\"relatedNodes\\\":[{\\\"target\\\":[\\\"#fh5co-header > .flui"
                        "d-container > .navbar.navbar-default\\\"],\\\"html\\\":\\\"<nav class=\\\\\\\"na"
                        "vbar navbar-default\\\\\\\">\\\"}]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target"
                        "\\\":[\\\"#navbar > .nav.navbar-nav.navbar-right > li:nth-of-type(6) > a > span\\"
                        "\"],\\\"html\\\":\\\"<span>Team</span>\\\",\\\"impact\\\":\\\"critical\\\",\\\"a"
                        "ny\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"m"
                        "essage\\\":\\\"Element has insufficient color contrast of 3.95 (foreground color"
                        ": #808080, background color: #ffffff, font size: 12.0pt, font weight: normal)\\\""
                        ",\\\"data\\\":{\\\"fgColor\\\":\\\"#808080\\\",\\\"bgColor\\\":\\\"#ffffff\\\",\\"
                        "\"contrastRatio\\\":\\\"3.95\\\",\\\"fontSize\\\":\\\"12.0pt\\\",\\\"fontWeight\\"
                        "\":\\\"normal\\\"},\\\"relatedNodes\\\":[{\\\"target\\\":[\\\"#fh5co-header > .f"
                        "luid-container > .navbar.navbar-default\\\"],\\\"html\\\":\\\"<nav class=\\\\\\\""
                        "navbar navbar-default\\\\\\\">\\\"}]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"targ"
                        "et\\\":[\\\"#navbar > .nav.navbar-nav.navbar-right > li:nth-of-type(7) > a > spa"
                        "n\\\"],\\\"html\\\":\\\"<span>FAQ</span>\\\",\\\"impact\\\":\\\"critical\\\",\\\""
                        "any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\""
                        "message\\\":\\\"Element has insufficient color contrast of 3.95 (foreground colo"
                        "r: #808080, background color: #ffffff, font size: 12.0pt, font weight: normal)\\"
                        "\",\\\"data\\\":{\\\"fgColor\\\":\\\"#808080\\\",\\\"bgColor\\\":\\\"#ffffff\\\""
                        ",\\\"contrastRatio\\\":\\\"3.95\\\",\\\"fontSize\\\":\\\"12.0pt\\\",\\\"fontWeig"
                        "ht\\\":\\\"normal\\\"},\\\"relatedNodes\\\":[{\\\"target\\\":[\\\"#fh5co-header "
                        "> .fluid-container > .navbar.navbar-default\\\"],\\\"html\\\":\\\"<nav class=\\\\"
                        "\\\"navbar navbar-default\\\\\\\">\\\"}]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\""
                        "target\\\":[\\\"#navbar > .nav.navbar-nav.navbar-right > .call-to-action > a > s"
                        "pan\\\"],\\\"html\\\":\\\"<span>Sign up free</span>\\\",\\\"impact\\\":\\\"criti"
                        "cal\\\",\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"criti"
                        "cal\\\",\\\"message\\\":\\\"Element has insufficient color contrast of 3.95 (for"
                        "eground color: #808080, background color: #ffffff, font size: 12.0pt, font weigh"
                        "t: normal)\\\",\\\"data\\\":{\\\"fgColor\\\":\\\"#808080\\\",\\\"bgColor\\\":\\\""
                        "#ffffff\\\",\\\"contrastRatio\\\":\\\"3.95\\\",\\\"fontSize\\\":\\\"12.0pt\\\",\\"
                        "\"fontWeight\\\":\\\"normal\\\"},\\\"relatedNodes\\\":[{\\\"target\\\":[\\\"#fh5"
                        "co-header > .fluid-container > .navbar.navbar-default\\\"],\\\"html\\\":\\\"<nav"
                        " class=\\\\\\\"navbar navbar-default\\\\\\\">\\\"}]}],\\\"all\\\":[],\\\"none\\\""
                        ":[]},{\\\"target\\\":[\\\"#fh5co-testimony > .container > .row > .col-md-12.to-a"
                        "nimate.fadeInUp.animated > .wrap-testimony > .owl-carousel-fullwidth.owl-carouse"
                        "l.owl-theme.owl-responsive--1.owl-loaded > .owl-stage-outer.owl-height > .owl-st"
                        "age > .owl-item.active > .item > .testimony-s";
long WebSocketSendLen42   = sizeof(WebSocketSend42) - 1;	 

 

char WebSocketSend43[] = "id-18 index-2 total-92 lide.active.text-center > blockquote > p\\\"],\\\"html\\\""
                        ":\\\"<p>\\\\\\\"Srimanthudu is a special film for many reasons:) Gained immense "
                        "respect and love from all my fans... Made me more human:)\\\\\\\"</p>\\\",\\\"im"
                        "pact\\\":\\\"critical\\\",\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"im"
                        "pact\\\":\\\"critical\\\",\\\"message\\\":\\\"Element has insufficient color con"
                        "trast of 2.93 (foreground color: #8f989f, background color: #ffffff, font size: "
                        "15.0pt, font weight: normal)\\\",\\\"data\\\":{\\\"fgColor\\\":\\\"#8f989f\\\",\\"
                        "\"bgColor\\\":\\\"#ffffff\\\",\\\"contrastRatio\\\":\\\"2.93\\\",\\\"fontSize\\\""
                        ":\\\"15.0pt\\\",\\\"fontWeight\\\":\\\"normal\\\"},\\\"relatedNodes\\\":[{\\\"ta"
                        "rget\\\":[\\\"body\\\"],\\\"html\\\":\\\"<body>\\\"}]}],\\\"all\\\":[],\\\"none\\"
                        "\":[]},{\\\"target\\\":[\\\"#fh5co-testimony > .container > .row > .col-md-12.to"
                        "-animate.fadeInUp.animated > .wrap-testimony > .owl-carousel-fullwidth.owl-carou"
                        "sel.owl-theme.owl-responsive--1.owl-loaded > .owl-stage-outer.owl-height > .owl-"
                        "stage > .owl-item.active > .item > .testimony-slide.active.text-center > span\\\""
                        "],\\\"html\\\":\\\"<span>Mahesh Babu, via <a href=\\\\\\\"#\\\\\\\" class=\\\\\\"
                        "\"twitter\\\\\\\">Twitter</a></span>\\\",\\\"impact\\\":\\\"critical\\\",\\\"any"
                        "\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"mes"
                        "sage\\\":\\\"Element has insufficient color contrast of 4.00 (foreground color: "
                        "#7f7f7f, background color: #ffffff, font size: 9.0pt, font weight: bold)\\\",\\\""
                        "data\\\":{\\\"fgColor\\\":\\\"#7f7f7f\\\",\\\"bgColor\\\":\\\"#ffffff\\\",\\\"co"
                        "ntrastRatio\\\":\\\"4.00\\\",\\\"fontSize\\\":\\\"9.0pt\\\",\\\"fontWeight\\\":\\"
                        "\"bold\\\"},\\\"relatedNodes\\\":[{\\\"target\\\":[\\\"body\\\"],\\\"html\\\":\\"
                        "\"<body>\\\"}]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-tes"
                        "timony > .container > .row > .col-md-12.to-animate.fadeInUp.animated > .wrap-tes"
                        "timony > .owl-carousel-fullwidth.owl-carousel.owl-theme.owl-responsive--1.owl-lo"
                        "aded > .owl-stage-outer.owl-height > .owl-stage > .owl-item.active > .item > .te"
                        "stimony-slide.active.text-center > span > .twitter\\\"],\\\"html\\\":\\\"<a href"
                        "=\\\\\\\"#\\\\\\\" class=\\\\\\\"twitter\\\\\\\">Twitter</a>\\\",\\\"impact\\\":"
                        "\\\"critical\\\",\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":"
                        "\\\"critical\\\",\\\"message\\\":\\\"Element has insufficient color contrast of "
                        "2.33 (foreground color: #1fb5f6, background color: #ffffff, font size: 9.0pt, fo"
                        "nt weight: normal)\\\",\\\"data\\\":{\\\"fgColor\\\":\\\"#1fb5f6\\\",\\\"bgColor"
                        "\\\":\\\"#ffffff\\\",\\\"contrastRatio\\\":\\\"2.33\\\",\\\"fontSize\\\":\\\"9.0"
                        "pt\\\",\\\"fontWeight\\\":\\\"normal\\\"},\\\"relatedNodes\\\":[{\\\"target\\\":"
                        "[\\\"body\\\"],\\\"html\\\":\\\"<body>\\\"}]}],\\\"all\\\":[],\\\"none\\\":[]},{"
                        "\\\"target\\\":[\\\"#form1 > .getting-started.getting-started-1.animated > .cont"
                        "ainer > .row > .col-md-6.to-animate.fadeInUp.animated > h3\\\"],\\\"html\\\":\\\""
                        "<h3>Getting Started</h3>\\\",\\\"impact\\\":\\\"critical\\\",\\\"any\\\":[{\\\"i"
                        "d\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\""
                        "Element has insufficient color contrast of 2.33 (foreground color: #ffffff, back"
                        "ground color: #1fb5f6, font size: 18.0pt, font weight: normal)\\\",\\\"data\\\":"
                        "{\\\"fgColor\\\":\\\"#ffffff\\\",\\\"bgColor\\\":\\\"#1fb5f6\\\",\\\"contrastRat"
                        "io\\\":\\\"2.33\\\",\\\"fontSize\\\":\\\"18.0pt\\\",\\\"fontWeight\\\":\\\"norma"
                        "l\\\"},\\\"relatedNodes\\\":[{\\\"target\\\":[\\\"#form1 > .getting-started.gett"
                        "ing-started-1.animated\\\"],\\\"html\\\":\\\"<div class=\\\\\\\"getting-started "
                        "getting-st";
long WebSocketSendLen43   = sizeof(WebSocketSend43) - 1;	 

 

char WebSocketSend44[] = "id-18 index-3 total-92 arted-1 animated\\\\\\\">\\\"}]}],\\\"all\\\":[],\\\"none"
                        "\\\":[]},{\\\"target\\\":[\\\"#form1 > .getting-started.getting-started-1.animat"
                        "ed > .container > .row > .col-md-6.to-animate.fadeInUp.animated > p\\\"],\\\"htm"
                        "l\\\":\\\"<p>Far far away, behind the word mountains, far from the countries Vok"
                        "alia and Consonantia, there live the blind texts. </p>\\\",\\\"impact\\\":\\\"cr"
                        "itical\\\",\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"cr"
                        "itical\\\",\\\"message\\\":\\\"Element has insufficient color contrast of 1.96 ("
                        "foreground color: #d2f0fd, background color: #1fb5f6, font size: 12.0pt, font we"
                        "ight: normal)\\\",\\\"data\\\":{\\\"fgColor\\\":\\\"#d2f0fd\\\",\\\"bgColor\\\":"
                        "\\\"#1fb5f6\\\",\\\"contrastRatio\\\":\\\"1.96\\\",\\\"fontSize\\\":\\\"12.0pt\\"
                        "\",\\\"fontWeight\\\":\\\"normal\\\"},\\\"relatedNodes\\\":[{\\\"target\\\":[\\\""
                        "#form1 > .getting-started.getting-started-1.animated\\\"],\\\"html\\\":\\\"<div "
                        "class=\\\\\\\"getting-started getting-started-1 animated\\\\\\\">\\\"}]}],\\\"al"
                        "l\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#form1 > .getting-started.getting"
                        "-started-1.animated > .container > .row > .col-md-6.to-animate-2.fadeInRight.ani"
                        "mated > .call-to-action.text-right > .sign-up\\\"],\\\"html\\\":\\\"<a href=\\\\"
                        "\\\"#\\\\\\\" class=\\\\\\\"sign-up\\\\\\\">Sign Up For Free</a>\\\",\\\"impact\\"
                        "\":\\\"critical\\\",\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\"
                        "\":\\\"critical\\\",\\\"message\\\":\\\"Element has insufficient color contrast "
                        "of 3.52 (foreground color: #ffffff, background color: #ea574c, font size: 15.0pt"
                        ", font weight: normal)\\\",\\\"data\\\":{\\\"fgColor\\\":\\\"#ffffff\\\",\\\"bgC"
                        "olor\\\":\\\"#ea574c\\\",\\\"contrastRatio\\\":\\\"3.52\\\",\\\"fontSize\\\":\\\""
                        "15.0pt\\\",\\\"fontWeight\\\":\\\"normal\\\"},\\\"relatedNodes\\\":[{\\\"target\\"
                        "\":[\\\"#form1 > .getting-started.getting-started-1.animated > .container > .row"
                        " > .col-md-6.to-animate-2.fadeInRight.animated > .call-to-action.text-right > .s"
                        "ign-up\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"sign-up\\\\"
                        "\\\">Sign Up For Free</a>\\\"}]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\""
                        ":[\\\"#fh5co-pricing > .fh5co-pricing > .container > div:nth-of-type(2) > .prici"
                        "ng > div:nth-of-type(1) > .price-box.to-animate-2 > .btn.btn-select-plan.btn-sm\\"
                        "\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"btn btn-select-plan"
                        " btn-sm\\\\\\\">Select Plan</a>\\\",\\\"impact\\\":\\\"critical\\\",\\\"any\\\":"
                        "[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\"
                        "\":\\\"Element has insufficient color contrast of 2.33 (foreground color: #fffff"
                        "f, background color: #1fb5f6, font size: 9.0pt, font weight: normal)\\\",\\\"dat"
                        "a\\\":{\\\"fgColor\\\":\\\"#ffffff\\\",\\\"bgColor\\\":\\\"#1fb5f6\\\",\\\"contr"
                        "astRatio\\\":\\\"2.33\\\",\\\"fontSize\\\":\\\"9.0pt\\\",\\\"fontWeight\\\":\\\""
                        "normal\\\"},\\\"relatedNodes\\\":[{\\\"target\\\":[\\\"#fh5co-pricing > .fh5co-p"
                        "ricing > .container > div:nth-of-type(2) > .pricing > div:nth-of-type(1) > .pric"
                        "e-box.to-animate-2 > .btn.btn-select-plan.btn-sm\\\"],\\\"html\\\":\\\"<a href=\\"
                        "\\\\\"#\\\\\\\" class=\\\\\\\"btn btn-select-plan btn-sm\\\\\\\">Select Plan</a>"
                        "\\\"}]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-pricing > ."
                        "fh5co-pricing > .container > div:nth-of-type(2) > .pricing > div:nth-of-type(2) "
                        "> .price-box.to-animate-2 > .btn.btn-select-plan.btn-sm\\\"],\\\"html\\\":\\\"<a"
                        " href=\\\\\\\"#\\\\\\\" class=\\\\\\\"btn btn-select-plan btn-sm\\\\\\\">Select "
                        "Plan</a>\\\",\\\"impact\\\":\\\"critical\\\",\\\"any\\\":[{\\\"id\\\":\\\"c";
long WebSocketSendLen44   = sizeof(WebSocketSend44) - 1;	 

 

char WebSocketSend45[] = "id-18 index-4 total-92 olor-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"mes"
                        "sage\\\":\\\"Element has insufficient color contrast of 2.33 (foreground color: "
                        "#ffffff, background color: #1fb5f6, font size: 9.0pt, font weight: normal)\\\",\\"
                        "\"data\\\":{\\\"fgColor\\\":\\\"#ffffff\\\",\\\"bgColor\\\":\\\"#1fb5f6\\\",\\\""
                        "contrastRatio\\\":\\\"2.33\\\",\\\"fontSize\\\":\\\"9.0pt\\\",\\\"fontWeight\\\""
                        ":\\\"normal\\\"},\\\"relatedNodes\\\":[{\\\"target\\\":[\\\"#fh5co-pricing > .fh"
                        "5co-pricing > .container > div:nth-of-type(2) > .pricing > div:nth-of-type(2) > "
                        ".price-box.to-animate-2 > .btn.btn-select-plan.btn-sm\\\"],\\\"html\\\":\\\"<a h"
                        "ref=\\\\\\\"#\\\\\\\" class=\\\\\\\"btn btn-select-plan btn-sm\\\\\\\">Select Pl"
                        "an</a>\\\"}]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-prici"
                        "ng > .fh5co-pricing > .container > div:nth-of-type(2) > .pricing > div:nth-of-ty"
                        "pe(3) > .price-box.to-animate-2.popular > .btn.btn-select-plan.btn-sm\\\"],\\\"h"
                        "tml\\\":\\\"<a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"btn btn-select-plan btn-sm\\"
                        "\\\\\">Select Plan</a>\\\",\\\"impact\\\":\\\"critical\\\",\\\"any\\\":[{\\\"id\\"
                        "\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"El"
                        "ement has insufficient color contrast of 3.55 (foreground color: #ffffff, backgr"
                        "ound color: #ff3b30, font size: 9.0pt, font weight: normal)\\\",\\\"data\\\":{\\"
                        "\"fgColor\\\":\\\"#ffffff\\\",\\\"bgColor\\\":\\\"#ff3b30\\\",\\\"contrastRatio\\"
                        "\":\\\"3.55\\\",\\\"fontSize\\\":\\\"9.0pt\\\",\\\"fontWeight\\\":\\\"normal\\\""
                        "},\\\"relatedNodes\\\":[{\\\"target\\\":[\\\"#fh5co-pricing > .fh5co-pricing > ."
                        "container > div:nth-of-type(2) > .pricing > div:nth-of-type(3) > .price-box.to-a"
                        "nimate-2.popular > .btn.btn-select-plan.btn-sm\\\"],\\\"html\\\":\\\"<a href=\\\\"
                        "\\\"#\\\\\\\" class=\\\\\\\"btn btn-select-plan btn-sm\\\\\\\">Select Plan</a>\\"
                        "\"}]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-pricing > .fh"
                        "5co-pricing > .container > div:nth-of-type(2) > .pricing > div:nth-of-type(4) > "
                        ".price-box.to-animate-2 > .btn.btn-select-plan.btn-sm\\\"],\\\"html\\\":\\\"<a h"
                        "ref=\\\\\\\"#\\\\\\\" class=\\\\\\\"btn btn-select-plan btn-sm\\\\\\\">Select Pl"
                        "an</a>\\\",\\\"impact\\\":\\\"critical\\\",\\\"any\\\":[{\\\"id\\\":\\\"color-co"
                        "ntrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Element has insuf"
                        "ficient color contrast of 2.33 (foreground color: #ffffff, background color: #1f"
                        "b5f6, font size: 9.0pt, font weight: normal)\\\",\\\"data\\\":{\\\"fgColor\\\":\\"
                        "\"#ffffff\\\",\\\"bgColor\\\":\\\"#1fb5f6\\\",\\\"contrastRatio\\\":\\\"2.33\\\""
                        ",\\\"fontSize\\\":\\\"9.0pt\\\",\\\"fontWeight\\\":\\\"normal\\\"},\\\"relatedNo"
                        "des\\\":[{\\\"target\\\":[\\\"#fh5co-pricing > .fh5co-pricing > .container > div"
                        ":nth-of-type(2) > .pricing > div:nth-of-type(4) > .price-box.to-animate-2 > .btn"
                        ".btn-select-plan.btn-sm\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" class=\\"
                        "\\\\\"btn btn-select-plan btn-sm\\\\\\\">Select Plan</a>\\\"}]}],\\\"all\\\":[],"
                        "\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-services > .fh5co-services > .conta"
                        "iner > .call-to-action.text-center.to-animate > .btn.btn-learn\\\"],\\\"html\\\""
                        ":\\\"<a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"btn btn-learn\\\\\\\">Learn More</a"
                        ">\\\",\\\"impact\\\":\\\"critical\\\",\\\"any\\\":[{\\\"id\\\":\\\"color-contras"
                        "t\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Element has insufficie"
                        "nt color contrast of 1.97 (foreground color: #ffffff, background color: #50c5f8,"
                        " font size: 10.5pt, font weight: normal)\\\",\\\"data\\\":{\\\"fgColor\\\":\\\"#"
                        "ffffff\\\",\\\"bgColor\\\":\\\"#50c5f8\\\",\\\"contrastRatio\\\":\\\"1.97\\\",\\"
                        "\"font";
long WebSocketSendLen45   = sizeof(WebSocketSend45) - 1;	 

 

char WebSocketSend46[] = "id-18 index-5 total-92 Size\\\":\\\"10.5pt\\\",\\\"fontWeight\\\":\\\"normal\\\""
                        "},\\\"relatedNodes\\\":[{\\\"target\\\":[\\\"#fh5co-services > .fh5co-services >"
                        " .container > .call-to-action.text-center.to-animate > .btn.btn-learn\\\"],\\\"h"
                        "tml\\\":\\\"<a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"btn btn-learn\\\\\\\">Learn "
                        "More</a>\\\"}]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#form1 > ."
                        "getting-started.getting-started-2 > .container > .row > .col-md-6.to-animate-2 >"
                        " .call-to-action.text-right > .sign-up\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\"
                        "\\\\\" class=\\\\\\\"sign-up\\\\\\\">Sign Up For Free</a>\\\",\\\"impact\\\":\\\""
                        "critical\\\",\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\""
                        "critical\\\",\\\"message\\\":\\\"Element has insufficient color contrast of 3.52"
                        " (foreground color: #ffffff, background color: #ea574c, font size: 15.0pt, font "
                        "weight: normal)\\\",\\\"data\\\":{\\\"fgColor\\\":\\\"#ffffff\\\",\\\"bgColor\\\""
                        ":\\\"#ea574c\\\",\\\"contrastRatio\\\":\\\"3.52\\\",\\\"fontSize\\\":\\\"15.0pt\\"
                        "\",\\\"fontWeight\\\":\\\"normal\\\"},\\\"relatedNodes\\\":[{\\\"target\\\":[\\\""
                        "#form1 > .getting-started.getting-started-2 > .container > .row > .col-md-6.to-a"
                        "nimate-2 > .call-to-action.text-right > .sign-up\\\"],\\\"html\\\":\\\"<a href=\\"
                        "\\\\\"#\\\\\\\" class=\\\\\\\"sign-up\\\\\\\">Sign Up For Free</a>\\\"}]}],\\\"a"
                        "ll\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#btn-submit\\\"],\\\"html\\\":\\"
                        "\"<input type=\\\\\\\"submit\\\\\\\" id=\\\\\\\"btn-submit\\\\\\\" class=\\\\\\\""
                        "btn btn-send-message btn-md\\\\\\\" value=\\\\\\\"Send Message\\\\\\\">\\\",\\\""
                        "impact\\\":\\\"critical\\\",\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\""
                        "impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Element has insufficient color c"
                        "ontrast of 3.11 (foreground color: #ffeceb, background color: #ff3b30, font size"
                        ": 10.5pt, font weight: normal)\\\",\\\"data\\\":{\\\"fgColor\\\":\\\"#ffeceb\\\""
                        ",\\\"bgColor\\\":\\\"#ff3b30\\\",\\\"contrastRatio\\\":\\\"3.11\\\",\\\"fontSize"
                        "\\\":\\\"10.5pt\\\",\\\"fontWeight\\\":\\\"normal\\\"},\\\"relatedNodes\\\":[{\\"
                        "\"target\\\":[\\\"#btn-submit\\\"],\\\"html\\\":\\\"<input type=\\\\\\\"submit\\"
                        "\\\\\" id=\\\\\\\"btn-submit\\\\\\\" class=\\\\\\\"btn btn-send-message btn-md\\"
                        "\\\\\" value=\\\\\\\"Send Message\\\\\\\">\\\"}]}],\\\"all\\\":[],\\\"none\\\":["
                        "]}],\\\"html\\\":\\\"<span>Home</span>\\\"},{\\\"id\\\":\\\"html-has-lang\\\",\\"
                        "\"description\\\":\\\"Ensures every HTML document has a lang attribute\\\",\\\"h"
                        "elp\\\":\\\"<html> element must have a lang attribute\\\",\\\"helpUrl\\\":\\\"ht"
                        "tps://dequeuniversity.com/rules/axe/2.0/html-has-lang?application=axeAPI\\\",\\\""
                        "impact\\\":\\\"serious\\\",\\\"tags\\\":[\\\"wcag2a\\\",\\\"wcag311\\\"],\\\"nod"
                        "es\\\":[{\\\"target\\\":[\\\".js.flexbox.canvas.canvastext.webgl.touch.geolocati"
                        "on.postmessage.websqldatabase.indexeddb.hashchange.history.draganddrop.websocket"
                        "s.rgba.hsla.multiplebgs.backgroundsize.borderimage.borderradius.boxshadow.textsh"
                        "adow.opacity.cssanimations.csscolumns.cssgradients.cssreflections.csstransforms."
                        "csstransforms3d.csstransitions.fontface.no-generatedcontent.video.audio.localsto"
                        "rage.sessionstorage.webworkers.applicationcache.svg.inlinesvg.smil.svgclippaths\\"
                        "\"],\\\"html\\\":\\\"<html xmlns=\\\\\\\"http://www.w3.org/1999/xhtml\\\\\\\" cl"
                        "ass=\\\\\\\" js flexbox canvas canvastext webgl touch geolocation postmessage we"
                        "bsqldatabase indexeddb hashchange history draganddrop websockets rgba hsla multi"
                        "plebgs backgroundsize borderimage borderradius boxshadow textshadow opacity cssa"
                        "nimations csscolumns cssgradients cssreflections csstransfo";
long WebSocketSendLen46   = sizeof(WebSocketSend46) - 1;	 

 

char WebSocketSend47[] = "id-18 index-6 total-92 rms csstransforms3d csstransitions fontface no-generatedc"
                        "ontent video audio localstorage sessionstorage webworkers applicationcache svg i"
                        "nlinesvg smil svgclippaths\\\\\\\" style=\\\\\\\"\\\\\\\">\\\",\\\"impact\\\":\\"
                        "\"serious\\\",\\\"any\\\":[{\\\"id\\\":\\\"has-lang\\\",\\\"impact\\\":\\\"serio"
                        "us\\\",\\\"message\\\":\\\"The <html> element does not have a lang attribute\\\""
                        ",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]}],\\"
                        "\"html\\\":\\\"<html xmlns=\\\\\\\"http://www.w3.org/1999/xhtml\\\\\\\" class=\\"
                        "\\\\\" js flexbox canvas canvastext webgl touch geolocation postmessage websqlda"
                        "tabase indexeddb hashchange history draganddrop websockets rgba hsla multiplebgs"
                        " backgroundsize borderimage borderradius boxshadow textshadow opacity cssanimati"
                        "ons csscolumns cssgradients cssreflections csstransforms csstransforms3d csstran"
                        "sitions fontface no-generatedcontent video audio localstorage sessionstorage web"
                        "workers applicationcache svg inlinesvg smil svgclippaths\\\\\\\" style=\\\\\\\"\\"
                        "\\\\\">\\\",\\\"fileName\\\":\\\"C:\\\\\\\\Users\\\\\\\\Naveen Reddy Vangala\\\\"
                        "\\\\Documents\\\\\\\\Visual Studio 2015\\\\\\\\Projects\\\\\\\\Dot-net-work\\\\\\"
                        "\\SampleMasterPage\\\\\\\\SampleMasterPage\\\\\\\\Home.Master\\\",\\\"position\\"
                        "\":134},{\\\"id\\\":\\\"image-alt\\\",\\\"description\\\":\\\"Ensures <img> elem"
                        "ents have alternate text or a role of none or presentation\\\",\\\"help\\\":\\\""
                        "Images must have alternate text\\\",\\\"helpUrl\\\":\\\"https://dequeuniversity."
                        "com/rules/axe/2.0/image-alt?application=axeAPI\\\",\\\"impact\\\":\\\"critical\\"
                        "\",\\\"tags\\\":[\\\"wcag2a\\\",\\\"wcag111\\\",\\\"section508\\\",\\\"section50"
                        "8.22.a\\\"],\\\"nodes\\\":[{\\\"target\\\":[\\\"#map > div > .gm-style > div:nth"
                        "-of-type(2) > a > div > img\\\"],\\\"html\\\":\\\"<img src=\\\\\\\"https://maps."
                        "gstatic.com/mapfiles/api-3/images/google_white5_hdpi.png\\\\\\\" draggable=\\\\\\"
                        "\"false\\\\\\\" style=\\\\\\\"position: absolute; left: 0px; top: 0px; width: 66"
                        "px; height: 26px; user-select: none; border: 0px; padding: 0px; margin: 0px;\\\\"
                        "\\\">\\\",\\\"impact\\\":\\\"critical\\\",\\\"any\\\":[{\\\"id\\\":\\\"has-alt\\"
                        "\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Element does not have an "
                        "alt attribute\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"ari"
                        "a-label\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"aria-label attri"
                        "bute does not exist or is empty\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{"
                        "\\\"id\\\":\\\"aria-labelledby\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\"
                        "\":\\\"aria-labelledby attribute does not exist, references elements that do not"
                        " exist or references elements that are empty or not visible\\\",\\\"data\\\":nul"
                        "l,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"non-empty-title\\\",\\\"impact\\\":\\"
                        "\"critical\\\",\\\"message\\\":\\\"Element has no title attribute or the title a"
                        "ttribute is empty\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\""
                        "role-presentation\\\",\\\"impact\\\":\\\"moderate\\\",\\\"message\\\":\\\"Elemen"
                        "t's default semantics were not overridden with role=\\\\\\\"presentation\\\\\\\""
                        "\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"role-none\\\",\\"
                        "\"impact\\\":\\\"moderate\\\",\\\"message\\\":\\\"Element's default semantics we"
                        "re not overridden with role=\\\\\\\"none\\\\\\\"\\\",\\\"data\\\":null,\\\"relat"
                        "edNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#map > div"
                        " > .gm-style > div:nth-of-type(8) > .gmnoprint > div > div:nth-of-type(1) > div "
                        "> img\\\"],\\\"html\\\":\\\"<img src=\\\\\\\"https://maps.gstatic.c";
long WebSocketSendLen47   = sizeof(WebSocketSend47) - 1;	 

 

char WebSocketSend48[] = "id-18 index-7 total-92 om/mapfiles/api-3/images/tmapctrl_hdpi.png\\\\\\\" dragga"
                        "ble=\\\\\\\"false\\\\\\\" style=\\\\\\\"position: absolute; left: 0px; top: 0px;"
                        " user-select: none; border: 0px; padding: 0px; margin: 0px; max-width: none; wid"
                        "th: 120px; height: 54px;\\\\\\\">\\\",\\\"impact\\\":\\\"critical\\\",\\\"any\\\""
                        ":[{\\\"id\\\":\\\"has-alt\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\"
                        "\"Element does not have an alt attribute\\\",\\\"data\\\":null,\\\"relatedNodes\\"
                        "\":[]},{\\\"id\\\":\\\"aria-label\\\",\\\"impact\\\":\\\"critical\\\",\\\"messag"
                        "e\\\":\\\"aria-label attribute does not exist or is empty\\\",\\\"data\\\":null,"
                        "\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"aria-labelledby\\\",\\\"impact\\\":\\\""
                        "critical\\\",\\\"message\\\":\\\"aria-labelledby attribute does not exist, refer"
                        "ences elements that do not exist or references elements that are empty or not vi"
                        "sible\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"non-empty-t"
                        "itle\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Element has no titl"
                        "e attribute or the title attribute is empty\\\",\\\"data\\\":null,\\\"relatedNod"
                        "es\\\":[]},{\\\"id\\\":\\\"role-presentation\\\",\\\"impact\\\":\\\"moderate\\\""
                        ",\\\"message\\\":\\\"Element's default semantics were not overridden with role=\\"
                        "\\\\\"presentation\\\\\\\"\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"i"
                        "d\\\":\\\"role-none\\\",\\\"impact\\\":\\\"moderate\\\",\\\"message\\\":\\\"Elem"
                        "ent's default semantics were not overridden with role=\\\\\\\"none\\\\\\\"\\\",\\"
                        "\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"t"
                        "arget\\\":[\\\"#map > div > .gm-style > div:nth-of-type(8) > .gmnoprint > div > "
                        "div:nth-of-type(3) > div > img\\\"],\\\"html\\\":\\\"<img src=\\\\\\\"https://ma"
                        "ps.gstatic.com/mapfiles/api-3/images/tmapctrl_hdpi.png\\\\\\\" draggable=\\\\\\\""
                        "false\\\\\\\" style=\\\\\\\"position: absolute; left: 0px; top: -15px; user-sele"
                        "ct: none; border: 0px; padding: 0px; margin: 0px; max-width: none; width: 120px;"
                        " height: 54px;\\\\\\\">\\\",\\\"impact\\\":\\\"critical\\\",\\\"any\\\":[{\\\"id"
                        "\\\":\\\"has-alt\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Element"
                        " does not have an alt attribute\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{"
                        "\\\"id\\\":\\\"aria-label\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\"
                        "\"aria-label attribute does not exist or is empty\\\",\\\"data\\\":null,\\\"rela"
                        "tedNodes\\\":[]},{\\\"id\\\":\\\"aria-labelledby\\\",\\\"impact\\\":\\\"critical"
                        "\\\",\\\"message\\\":\\\"aria-labelledby attribute does not exist, references el"
                        "ements that do not exist or references elements that are empty or not visible\\\""
                        ",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"non-empty-title\\\","
                        "\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Element has no title attribu"
                        "te or the title attribute is empty\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]"
                        "},{\\\"id\\\":\\\"role-presentation\\\",\\\"impact\\\":\\\"moderate\\\",\\\"mess"
                        "age\\\":\\\"Element's default semantics were not overridden with role=\\\\\\\"pr"
                        "esentation\\\\\\\"\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\"
                        "\"role-none\\\",\\\"impact\\\":\\\"moderate\\\",\\\"message\\\":\\\"Element's de"
                        "fault semantics were not overridden with role=\\\\\\\"none\\\\\\\"\\\",\\\"data\\"
                        "\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\""
                        ":[\\\"#map > div > .gm-style > div:nth-of-type(8) > .gm-svpc > div:nth-of-type(2"
                        ") > div:nth-of-type(1) > img\\\"],\\\"html\\\":\\\"<img src=\\\\\\\"https://maps"
                        ".gstatic.com/mapfiles/api-3/images/cb_scout5_hdpi.png\\\\\\\" draggable=\\\\\\\""
                        "false\\\\\\\" style=\\\\\\\"position: a";
long WebSocketSendLen48   = sizeof(WebSocketSend48) - 1;	 

 

char WebSocketSend49[] = "id-18 index-8 total-92 bsolute; left: -147px; top: -26px; width: 215px; height: "
                        "835px; user-select: none; border: 0px; padding: 0px; margin: 0px; max-width: non"
                        "e;\\\\\\\">\\\",\\\"impact\\\":\\\"critical\\\",\\\"any\\\":[{\\\"id\\\":\\\"has"
                        "-alt\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Element does not ha"
                        "ve an alt attribute\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\"
                        "\"aria-label\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"aria-label "
                        "attribute does not exist or is empty\\\",\\\"data\\\":null,\\\"relatedNodes\\\":"
                        "[]},{\\\"id\\\":\\\"aria-labelledby\\\",\\\"impact\\\":\\\"critical\\\",\\\"mess"
                        "age\\\":\\\"aria-labelledby attribute does not exist, references elements that d"
                        "o not exist or references elements that are empty or not visible\\\",\\\"data\\\""
                        ":null,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"non-empty-title\\\",\\\"impact\\\""
                        ":\\\"critical\\\",\\\"message\\\":\\\"Element has no title attribute or the titl"
                        "e attribute is empty\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\\":"
                        "\\\"role-presentation\\\",\\\"impact\\\":\\\"moderate\\\",\\\"message\\\":\\\"El"
                        "ement's default semantics were not overridden with role=\\\\\\\"presentation\\\\"
                        "\\\"\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"role-none\\\""
                        ",\\\"impact\\\":\\\"moderate\\\",\\\"message\\\":\\\"Element's default semantics"
                        " were not overridden with role=\\\\\\\"none\\\\\\\"\\\",\\\"data\\\":null,\\\"re"
                        "latedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]}],\\\"html\\\":\\\"<img src=\\"
                        "\\\\\"https://maps.gstatic.com/mapfiles/api-3/images/google_white5_hdpi.png\\\\\\"
                        "\" draggable=\\\\\\\"false\\\\\\\" style=\\\\\\\"position: absolute; left: 0px; "
                        "top: 0px; width: 66px; height: 26px; user-select: none; border: 0px; padding: 0p"
                        "x; margin: 0px;\\\\\\\">\\\"},{\\\"id\\\":\\\"link-name\\\",\\\"description\\\":"
                        "\\\"Ensures links have discernible text\\\",\\\"help\\\":\\\"Links must have dis"
                        "cernible text\\\",\\\"helpUrl\\\":\\\"https://dequeuniversity.com/rules/axe/2.0/"
                        "link-name?application=axeAPI\\\",\\\"impact\\\":\\\"critical\\\",\\\"tags\\\":[\\"
                        "\"wcag2a\\\",\\\"wcag111\\\",\\\"wcag412\\\",\\\"section508\\\",\\\"section508.2"
                        "2.a\\\"],\\\"nodes\\\":[{\\\"target\\\":[\\\"#fh5co-team > .fh5co-team > .contai"
                        "ner > div:nth-of-type(2) > div:nth-of-type(1) > .team-box.text-center.to-animate"
                        "-2 > .social-media > li:nth-of-type(1) > .facebook\\\"],\\\"html\\\":\\\"<a href"
                        "=\\\\\\\"#\\\\\\\" class=\\\\\\\"facebook\\\\\\\"><i class=\\\\\\\"icon-facebook"
                        "\\\\\\\"></i></a>\\\",\\\"impact\\\":\\\"critical\\\",\\\"any\\\":[{\\\"id\\\":\\"
                        "\"has-visible-text\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Eleme"
                        "nt does not have text that is visible to screen readers\\\",\\\"data\\\":null,\\"
                        "\"relatedNodes\\\":[]},{\\\"id\\\":\\\"aria-label\\\",\\\"impact\\\":\\\"critica"
                        "l\\\",\\\"message\\\":\\\"aria-label attribute does not exist or is empty\\\",\\"
                        "\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"aria-labelledby\\\",\\\""
                        "impact\\\":\\\"critical\\\",\\\"message\\\":\\\"aria-labelledby attribute does n"
                        "ot exist, references elements that do not exist or references elements that are "
                        "empty or not visible\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\\":"
                        "\\\"role-presentation\\\",\\\"impact\\\":\\\"moderate\\\",\\\"message\\\":\\\"El"
                        "ement's default semantics were not overridden with role=\\\\\\\"presentation\\\\"
                        "\\\"\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"role-none\\\""
                        ",\\\"impact\\\":\\\"moderate\\\",\\\"message\\\":\\\"Element's default semantics"
                        " were not overridden with role=\\\\\\\"none\\\\\\\"\\\",\\\"data\\\":null,\\\"re"
                        "latedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\";
long WebSocketSendLen49   = sizeof(WebSocketSend49) - 1;	 

 

char WebSocketSend50[] = "id-18 index-9 total-92 \":\\\"focusable-no-name\\\",\\\"impact\\\":\\\"serious\\"
                        "\",\\\"message\\\":\\\"Element is in tab order and does not have accessible text"
                        "\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-te"
                        "am > .fh5co-team > .container > div:nth-of-type(2) > div:nth-of-type(1) > .team-"
                        "box.text-center.to-animate-2 > .social-media > li:nth-of-type(2) > .twitter\\\"]"
                        ",\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"twitter\\\\\\\"><i cla"
                        "ss=\\\\\\\"icon-twitter\\\\\\\"></i></a>\\\",\\\"impact\\\":\\\"critical\\\",\\\""
                        "any\\\":[{\\\"id\\\":\\\"has-visible-text\\\",\\\"impact\\\":\\\"critical\\\",\\"
                        "\"message\\\":\\\"Element does not have text that is visible to screen readers\\"
                        "\",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"aria-label\\\",\\\""
                        "impact\\\":\\\"critical\\\",\\\"message\\\":\\\"aria-label attribute does not ex"
                        "ist or is empty\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"a"
                        "ria-labelledby\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"aria-labe"
                        "lledby attribute does not exist, references elements that do not exist or refere"
                        "nces elements that are empty or not visible\\\",\\\"data\\\":null,\\\"relatedNod"
                        "es\\\":[]},{\\\"id\\\":\\\"role-presentation\\\",\\\"impact\\\":\\\"moderate\\\""
                        ",\\\"message\\\":\\\"Element's default semantics were not overridden with role=\\"
                        "\\\\\"presentation\\\\\\\"\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"i"
                        "d\\\":\\\"role-none\\\",\\\"impact\\\":\\\"moderate\\\",\\\"message\\\":\\\"Elem"
                        "ent's default semantics were not overridden with role=\\\\\\\"none\\\\\\\"\\\",\\"
                        "\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\"
                        "\":\\\"focusable-no-name\\\",\\\"impact\\\":\\\"serious\\\",\\\"message\\\":\\\""
                        "Element is in tab order and does not have accessible text\\\",\\\"data\\\":null,"
                        "\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-team > .fh5co-team > .con"
                        "tainer > div:nth-of-type(2) > div:nth-of-type(1) > .team-box.text-center.to-anim"
                        "ate-2 > .social-media > li:nth-of-type(3) > .dribbble\\\"],\\\"html\\\":\\\"<a h"
                        "ref=\\\\\\\"#\\\\\\\" class=\\\\\\\"dribbble\\\\\\\"><i class=\\\\\\\"icon-dribb"
                        "ble\\\\\\\"></i></a>\\\",\\\"impact\\\":\\\"critical\\\",\\\"any\\\":[{\\\"id\\\""
                        ":\\\"has-visible-text\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"El"
                        "ement does not have text that is visible to screen readers\\\",\\\"data\\\":null"
                        ",\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"aria-label\\\",\\\"impact\\\":\\\"crit"
                        "ical\\\",\\\"message\\\":\\\"aria-label attribute does not exist or is empty\\\""
                        ",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"aria-labelledby\\\","
                        "\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"aria-labelledby attribute do"
                        "es not exist, references elements that do not exist or references elements that "
                        "are empty or not visible\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\"
                        "\":\\\"role-presentation\\\",\\\"impact\\\":\\\"moderate\\\",\\\"message\\\":\\\""
                        "Element's default semantics were not overridden with role=\\\\\\\"presentation\\"
                        "\\\\\"\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"role-none\\"
                        "\",\\\"impact\\\":\\\"moderate\\\",\\\"message\\\":\\\"Element's default semanti"
                        "cs were not overridden with role=\\\\\\\"none\\\\\\\"\\\",\\\"data\\\":null,\\\""
                        "relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"focusable-no-"
                        "name\\\",\\\"impact\\\":\\\"serious\\\",\\\"message\\\":\\\"Element is in tab or"
                        "der and does not have accessible text\\\",\\\"data\\\":null,\\\"relatedNodes\\\""
                        ":[]}]},{\\\"target\\\":[\\\"#fh5co-team > .fh5co-team > .container > div:nth-of-"
                        "type(2) > div:nth-of-type(1) > .team-box.text-center.to-an";
long WebSocketSendLen50   = sizeof(WebSocketSend50) - 1;	 

 

char WebSocketSend51[] = "id-18 index-10 total-92 imate-2 > .social-media > li:nth-of-type(4) > .codepen\\"
                        "\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"codepen\\\\\\\"><i "
                        "class=\\\\\\\"icon-codepen\\\\\\\"></i></a>\\\",\\\"impact\\\":\\\"critical\\\","
                        "\\\"any\\\":[{\\\"id\\\":\\\"has-visible-text\\\",\\\"impact\\\":\\\"critical\\\""
                        ",\\\"message\\\":\\\"Element does not have text that is visible to screen reader"
                        "s\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"aria-label\\\","
                        "\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"aria-label attribute does no"
                        "t exist or is empty\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\"
                        "\"aria-labelledby\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"aria-l"
                        "abelledby attribute does not exist, references elements that do not exist or ref"
                        "erences elements that are empty or not visible\\\",\\\"data\\\":null,\\\"related"
                        "Nodes\\\":[]},{\\\"id\\\":\\\"role-presentation\\\",\\\"impact\\\":\\\"moderate\\"
                        "\",\\\"message\\\":\\\"Element's default semantics were not overridden with role"
                        "=\\\\\\\"presentation\\\\\\\"\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\"
                        "\"id\\\":\\\"role-none\\\",\\\"impact\\\":\\\"moderate\\\",\\\"message\\\":\\\"E"
                        "lement's default semantics were not overridden with role=\\\\\\\"none\\\\\\\"\\\""
                        ",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[{\\\"i"
                        "d\\\":\\\"focusable-no-name\\\",\\\"impact\\\":\\\"serious\\\",\\\"message\\\":\\"
                        "\"Element is in tab order and does not have accessible text\\\",\\\"data\\\":nul"
                        "l,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-team > .fh5co-team > .c"
                        "ontainer > div:nth-of-type(2) > div:nth-of-type(1) > .team-box.text-center.to-an"
                        "imate-2 > .social-media > li:nth-of-type(5) > .github\\\"],\\\"html\\\":\\\"<a h"
                        "ref=\\\\\\\"#\\\\\\\" class=\\\\\\\"github\\\\\\\"><i class=\\\\\\\"icon-github-"
                        "alt\\\\\\\"></i></a>\\\",\\\"impact\\\":\\\"critical\\\",\\\"any\\\":[{\\\"id\\\""
                        ":\\\"has-visible-text\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"El"
                        "ement does not have text that is visible to screen readers\\\",\\\"data\\\":null"
                        ",\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"aria-label\\\",\\\"impact\\\":\\\"crit"
                        "ical\\\",\\\"message\\\":\\\"aria-label attribute does not exist or is empty\\\""
                        ",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"aria-labelledby\\\","
                        "\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"aria-labelledby attribute do"
                        "es not exist, references elements that do not exist or references elements that "
                        "are empty or not visible\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\"
                        "\":\\\"role-presentation\\\",\\\"impact\\\":\\\"moderate\\\",\\\"message\\\":\\\""
                        "Element's default semantics were not overridden with role=\\\\\\\"presentation\\"
                        "\\\\\"\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"role-none\\"
                        "\",\\\"impact\\\":\\\"moderate\\\",\\\"message\\\":\\\"Element's default semanti"
                        "cs were not overridden with role=\\\\\\\"none\\\\\\\"\\\",\\\"data\\\":null,\\\""
                        "relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"focusable-no-"
                        "name\\\",\\\"impact\\\":\\\"serious\\\",\\\"message\\\":\\\"Element is in tab or"
                        "der and does not have accessible text\\\",\\\"data\\\":null,\\\"relatedNodes\\\""
                        ":[]}]},{\\\"target\\\":[\\\"#fh5co-team > .fh5co-team > .container > div:nth-of-"
                        "type(2) > div:nth-of-type(2) > .team-box.text-center.to-animate-2 > .social-medi"
                        "a > li:nth-of-type(1) > .facebook\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\""
                        " class=\\\\\\\"facebook\\\\\\\"><i class=\\\\\\\"icon-facebook\\\\\\\"></i></a>\\"
                        "\",\\\"impact\\\":\\\"critical\\\",\\\"any\\\":[{\\\"id\\\":\\\"has-visible-text"
                        "\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Element does not have t"
                        "ext that ";
long WebSocketSendLen51   = sizeof(WebSocketSend51) - 1;	 

 

char WebSocketSend52[] = "id-18 index-11 total-92 is visible to screen readers\\\",\\\"data\\\":null,\\\"r"
                        "elatedNodes\\\":[]},{\\\"id\\\":\\\"aria-label\\\",\\\"impact\\\":\\\"critical\\"
                        "\",\\\"message\\\":\\\"aria-label attribute does not exist or is empty\\\",\\\"d"
                        "ata\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"aria-labelledby\\\",\\\"im"
                        "pact\\\":\\\"critical\\\",\\\"message\\\":\\\"aria-labelledby attribute does not"
                        " exist, references elements that do not exist or references elements that are em"
                        "pty or not visible\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\"
                        "\"role-presentation\\\",\\\"impact\\\":\\\"moderate\\\",\\\"message\\\":\\\"Elem"
                        "ent's default semantics were not overridden with role=\\\\\\\"presentation\\\\\\"
                        "\"\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"role-none\\\","
                        "\\\"impact\\\":\\\"moderate\\\",\\\"message\\\":\\\"Element's default semantics "
                        "were not overridden with role=\\\\\\\"none\\\\\\\"\\\",\\\"data\\\":null,\\\"rel"
                        "atedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"focusable-no-nam"
                        "e\\\",\\\"impact\\\":\\\"serious\\\",\\\"message\\\":\\\"Element is in tab order"
                        " and does not have accessible text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]"
                        "}]},{\\\"target\\\":[\\\"#fh5co-team > .fh5co-team > .container > div:nth-of-typ"
                        "e(2) > div:nth-of-type(2) > .team-box.text-center.to-animate-2 > .social-media >"
                        " li:nth-of-type(2) > .twitter\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" cl"
                        "ass=\\\\\\\"twitter\\\\\\\"><i class=\\\\\\\"icon-twitter\\\\\\\"></i></a>\\\",\\"
                        "\"impact\\\":\\\"critical\\\",\\\"any\\\":[{\\\"id\\\":\\\"has-visible-text\\\","
                        "\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Element does not have text t"
                        "hat is visible to screen readers\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]},"
                        "{\\\"id\\\":\\\"aria-label\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\"
                        "\"aria-label attribute does not exist or is empty\\\",\\\"data\\\":null,\\\"rela"
                        "tedNodes\\\":[]},{\\\"id\\\":\\\"aria-labelledby\\\",\\\"impact\\\":\\\"critical"
                        "\\\",\\\"message\\\":\\\"aria-labelledby attribute does not exist, references el"
                        "ements that do not exist or references elements that are empty or not visible\\\""
                        ",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"role-presentation\\\""
                        ",\\\"impact\\\":\\\"moderate\\\",\\\"message\\\":\\\"Element's default semantics"
                        " were not overridden with role=\\\\\\\"presentation\\\\\\\"\\\",\\\"data\\\":nul"
                        "l,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"role-none\\\",\\\"impact\\\":\\\"mode"
                        "rate\\\",\\\"message\\\":\\\"Element's default semantics were not overridden wit"
                        "h role=\\\\\\\"none\\\\\\\"\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\""
                        "all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"focusable-no-name\\\",\\\"impact\\\":\\"
                        "\"serious\\\",\\\"message\\\":\\\"Element is in tab order and does not have acce"
                        "ssible text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\"
                        "\"#fh5co-team > .fh5co-team > .container > div:nth-of-type(2) > div:nth-of-type("
                        "2) > .team-box.text-center.to-animate-2 > .social-media > li:nth-of-type(3) > .d"
                        "ribbble\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"dribbble\\"
                        "\\\\\"><i class=\\\\\\\"icon-dribbble\\\\\\\"></i></a>\\\",\\\"impact\\\":\\\"cr"
                        "itical\\\",\\\"any\\\":[{\\\"id\\\":\\\"has-visible-text\\\",\\\"impact\\\":\\\""
                        "critical\\\",\\\"message\\\":\\\"Element does not have text that is visible to s"
                        "creen readers\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"ari"
                        "a-label\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"aria-label attri"
                        "bute does not exist or is empty\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{"
                        "\\\"id\\\":\\\"aria-labelledby\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\"
                        "\":\\\"aria-";
long WebSocketSendLen52   = sizeof(WebSocketSend52) - 1;	 

 

char WebSocketSend53[] = "id-18 index-12 total-92 labelledby attribute does not exist, references elements"
                        " that do not exist or references elements that are empty or not visible\\\",\\\""
                        "data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"role-presentation\\\",\\\""
                        "impact\\\":\\\"moderate\\\",\\\"message\\\":\\\"Element's default semantics were"
                        " not overridden with role=\\\\\\\"presentation\\\\\\\"\\\",\\\"data\\\":null,\\\""
                        "relatedNodes\\\":[]},{\\\"id\\\":\\\"role-none\\\",\\\"impact\\\":\\\"moderate\\"
                        "\",\\\"message\\\":\\\"Element's default semantics were not overridden with role"
                        "=\\\\\\\"none\\\\\\\"\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\""
                        ":[],\\\"none\\\":[{\\\"id\\\":\\\"focusable-no-name\\\",\\\"impact\\\":\\\"serio"
                        "us\\\",\\\"message\\\":\\\"Element is in tab order and does not have accessible "
                        "text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5c"
                        "o-team > .fh5co-team > .container > div:nth-of-type(2) > div:nth-of-type(2) > .t"
                        "eam-box.text-center.to-animate-2 > .social-media > li:nth-of-type(4) > .codepen\\"
                        "\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"codepen\\\\\\\"><i "
                        "class=\\\\\\\"icon-codepen\\\\\\\"></i></a>\\\",\\\"impact\\\":\\\"critical\\\","
                        "\\\"any\\\":[{\\\"id\\\":\\\"has-visible-text\\\",\\\"impact\\\":\\\"critical\\\""
                        ",\\\"message\\\":\\\"Element does not have text that is visible to screen reader"
                        "s\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"aria-label\\\","
                        "\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"aria-label attribute does no"
                        "t exist or is empty\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\"
                        "\"aria-labelledby\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"aria-l"
                        "abelledby attribute does not exist, references elements that do not exist or ref"
                        "erences elements that are empty or not visible\\\",\\\"data\\\":null,\\\"related"
                        "Nodes\\\":[]},{\\\"id\\\":\\\"role-presentation\\\",\\\"impact\\\":\\\"moderate\\"
                        "\",\\\"message\\\":\\\"Element's default semantics were not overridden with role"
                        "=\\\\\\\"presentation\\\\\\\"\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\"
                        "\"id\\\":\\\"role-none\\\",\\\"impact\\\":\\\"moderate\\\",\\\"message\\\":\\\"E"
                        "lement's default semantics were not overridden with role=\\\\\\\"none\\\\\\\"\\\""
                        ",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[{\\\"i"
                        "d\\\":\\\"focusable-no-name\\\",\\\"impact\\\":\\\"serious\\\",\\\"message\\\":\\"
                        "\"Element is in tab order and does not have accessible text\\\",\\\"data\\\":nul"
                        "l,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-team > .fh5co-team > .c"
                        "ontainer > div:nth-of-type(2) > div:nth-of-type(2) > .team-box.text-center.to-an"
                        "imate-2 > .social-media > li:nth-of-type(5) > .github\\\"],\\\"html\\\":\\\"<a h"
                        "ref=\\\\\\\"#\\\\\\\" class=\\\\\\\"github\\\\\\\"><i class=\\\\\\\"icon-github-"
                        "alt\\\\\\\"></i></a>\\\",\\\"impact\\\":\\\"critical\\\",\\\"any\\\":[{\\\"id\\\""
                        ":\\\"has-visible-text\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"El"
                        "ement does not have text that is visible to screen readers\\\",\\\"data\\\":null"
                        ",\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"aria-label\\\",\\\"impact\\\":\\\"crit"
                        "ical\\\",\\\"message\\\":\\\"aria-label attribute does not exist or is empty\\\""
                        ",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"aria-labelledby\\\","
                        "\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"aria-labelledby attribute do"
                        "es not exist, references elements that do not exist or references elements that "
                        "are empty or not visible\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\"
                        "\":\\\"role-presentation\\\",\\\"impact\\\":\\\"moderate\\\",\\\"message\\\":\\\""
                        "Element's default semantics were not overridden with";
long WebSocketSendLen53   = sizeof(WebSocketSend53) - 1;	 

 

char WebSocketSend54[] = "id-18 index-13 total-92  role=\\\\\\\"presentation\\\\\\\"\\\",\\\"data\\\":null"
                        ",\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"role-none\\\",\\\"impact\\\":\\\"moder"
                        "ate\\\",\\\"message\\\":\\\"Element's default semantics were not overridden with"
                        " role=\\\\\\\"none\\\\\\\"\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"a"
                        "ll\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"focusable-no-name\\\",\\\"impact\\\":\\\""
                        "serious\\\",\\\"message\\\":\\\"Element is in tab order and does not have access"
                        "ible text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\""
                        "#fh5co-team > .fh5co-team > .container > div:nth-of-type(2) > div:nth-of-type(3)"
                        " > .team-box.text-center.to-animate-2 > .social-media > li:nth-of-type(1) > .fac"
                        "ebook\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"facebook\\\\"
                        "\\\"><i class=\\\\\\\"icon-facebook\\\\\\\"></i></a>\\\",\\\"impact\\\":\\\"crit"
                        "ical\\\",\\\"any\\\":[{\\\"id\\\":\\\"has-visible-text\\\",\\\"impact\\\":\\\"cr"
                        "itical\\\",\\\"message\\\":\\\"Element does not have text that is visible to scr"
                        "een readers\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"aria-"
                        "label\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"aria-label attribu"
                        "te does not exist or is empty\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\"
                        "\"id\\\":\\\"aria-labelledby\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\""
                        ":\\\"aria-labelledby attribute does not exist, references elements that do not e"
                        "xist or references elements that are empty or not visible\\\",\\\"data\\\":null,"
                        "\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"role-presentation\\\",\\\"impact\\\":\\"
                        "\"moderate\\\",\\\"message\\\":\\\"Element's default semantics were not overridd"
                        "en with role=\\\\\\\"presentation\\\\\\\"\\\",\\\"data\\\":null,\\\"relatedNodes"
                        "\\\":[]},{\\\"id\\\":\\\"role-none\\\",\\\"impact\\\":\\\"moderate\\\",\\\"messa"
                        "ge\\\":\\\"Element's default semantics were not overridden with role=\\\\\\\"non"
                        "e\\\\\\\"\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"non"
                        "e\\\":[{\\\"id\\\":\\\"focusable-no-name\\\",\\\"impact\\\":\\\"serious\\\",\\\""
                        "message\\\":\\\"Element is in tab order and does not have accessible text\\\",\\"
                        "\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-team > .f"
                        "h5co-team > .container > div:nth-of-type(2) > div:nth-of-type(3) > .team-box.tex"
                        "t-center.to-animate-2 > .social-media > li:nth-of-type(2) > .twitter\\\"],\\\"ht"
                        "ml\\\":\\\"<a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"twitter\\\\\\\"><i class=\\\\"
                        "\\\"icon-twitter\\\\\\\"></i></a>\\\",\\\"impact\\\":\\\"critical\\\",\\\"any\\\""
                        ":[{\\\"id\\\":\\\"has-visible-text\\\",\\\"impact\\\":\\\"critical\\\",\\\"messa"
                        "ge\\\":\\\"Element does not have text that is visible to screen readers\\\",\\\""
                        "data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"aria-label\\\",\\\"impact"
                        "\\\":\\\"critical\\\",\\\"message\\\":\\\"aria-label attribute does not exist or"
                        " is empty\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"aria-la"
                        "belledby\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"aria-labelledby"
                        " attribute does not exist, references elements that do not exist or references e"
                        "lements that are empty or not visible\\\",\\\"data\\\":null,\\\"relatedNodes\\\""
                        ":[]},{\\\"id\\\":\\\"role-presentation\\\",\\\"impact\\\":\\\"moderate\\\",\\\"m"
                        "essage\\\":\\\"Element's default semantics were not overridden with role=\\\\\\\""
                        "presentation\\\\\\\"\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\\":"
                        "\\\"role-none\\\",\\\"impact\\\":\\\"moderate\\\",\\\"message\\\":\\\"Element's "
                        "default semantics were not overridden with role=\\\\\\\"none\\\\\\\"\\\",\\\"dat"
                        "a\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\"
                        "\"focusable-no-name\\\"";
long WebSocketSendLen54   = sizeof(WebSocketSend54) - 1;	 

 

char WebSocketSend55[] = "id-18 index-14 total-92 ,\\\"impact\\\":\\\"serious\\\",\\\"message\\\":\\\"Elem"
                        "ent is in tab order and does not have accessible text\\\",\\\"data\\\":null,\\\""
                        "relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-team > .fh5co-team > .contain"
                        "er > div:nth-of-type(2) > div:nth-of-type(3) > .team-box.text-center.to-animate-"
                        "2 > .social-media > li:nth-of-type(3) > .dribbble\\\"],\\\"html\\\":\\\"<a href="
                        "\\\\\\\"#\\\\\\\" class=\\\\\\\"dribbble\\\\\\\"><i class=\\\\\\\"icon-dribbble\\"
                        "\\\\\"></i></a>\\\",\\\"impact\\\":\\\"critical\\\",\\\"any\\\":[{\\\"id\\\":\\\""
                        "has-visible-text\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Element"
                        " does not have text that is visible to screen readers\\\",\\\"data\\\":null,\\\""
                        "relatedNodes\\\":[]},{\\\"id\\\":\\\"aria-label\\\",\\\"impact\\\":\\\"critical\\"
                        "\",\\\"message\\\":\\\"aria-label attribute does not exist or is empty\\\",\\\"d"
                        "ata\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"aria-labelledby\\\",\\\"im"
                        "pact\\\":\\\"critical\\\",\\\"message\\\":\\\"aria-labelledby attribute does not"
                        " exist, references elements that do not exist or references elements that are em"
                        "pty or not visible\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\"
                        "\"role-presentation\\\",\\\"impact\\\":\\\"moderate\\\",\\\"message\\\":\\\"Elem"
                        "ent's default semantics were not overridden with role=\\\\\\\"presentation\\\\\\"
                        "\"\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"role-none\\\","
                        "\\\"impact\\\":\\\"moderate\\\",\\\"message\\\":\\\"Element's default semantics "
                        "were not overridden with role=\\\\\\\"none\\\\\\\"\\\",\\\"data\\\":null,\\\"rel"
                        "atedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"focusable-no-nam"
                        "e\\\",\\\"impact\\\":\\\"serious\\\",\\\"message\\\":\\\"Element is in tab order"
                        " and does not have accessible text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]"
                        "}]},{\\\"target\\\":[\\\"#fh5co-team > .fh5co-team > .container > div:nth-of-typ"
                        "e(2) > div:nth-of-type(3) > .team-box.text-center.to-animate-2 > .social-media >"
                        " li:nth-of-type(4) > .codepen\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" cl"
                        "ass=\\\\\\\"codepen\\\\\\\"><i class=\\\\\\\"icon-codepen\\\\\\\"></i></a>\\\",\\"
                        "\"impact\\\":\\\"critical\\\",\\\"any\\\":[{\\\"id\\\":\\\"has-visible-text\\\","
                        "\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Element does not have text t"
                        "hat is visible to screen readers\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]},"
                        "{\\\"id\\\":\\\"aria-label\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\"
                        "\"aria-label attribute does not exist or is empty\\\",\\\"data\\\":null,\\\"rela"
                        "tedNodes\\\":[]},{\\\"id\\\":\\\"aria-labelledby\\\",\\\"impact\\\":\\\"critical"
                        "\\\",\\\"message\\\":\\\"aria-labelledby attribute does not exist, references el"
                        "ements that do not exist or references elements that are empty or not visible\\\""
                        ",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"role-presentation\\\""
                        ",\\\"impact\\\":\\\"moderate\\\",\\\"message\\\":\\\"Element's default semantics"
                        " were not overridden with role=\\\\\\\"presentation\\\\\\\"\\\",\\\"data\\\":nul"
                        "l,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"role-none\\\",\\\"impact\\\":\\\"mode"
                        "rate\\\",\\\"message\\\":\\\"Element's default semantics were not overridden wit"
                        "h role=\\\\\\\"none\\\\\\\"\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\""
                        "all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"focusable-no-name\\\",\\\"impact\\\":\\"
                        "\"serious\\\",\\\"message\\\":\\\"Element is in tab order and does not have acce"
                        "ssible text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\"
                        "\"#fh5co-team > .fh5co-team > .container > div:nth-of-type(2) > div:nth-of-type("
                        "3) > .team-box.text-center.to-animate-2 > .social-media";
long WebSocketSendLen55   = sizeof(WebSocketSend55) - 1;	 

 

char WebSocketSend56[] = "id-18 index-15 total-92  > li:nth-of-type(5) > .github\\\"],\\\"html\\\":\\\"<a "
                        "href=\\\\\\\"#\\\\\\\" class=\\\\\\\"github\\\\\\\"><i class=\\\\\\\"icon-github"
                        "-alt\\\\\\\"></i></a>\\\",\\\"impact\\\":\\\"critical\\\",\\\"any\\\":[{\\\"id\\"
                        "\":\\\"has-visible-text\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\""
                        "Element does not have text that is visible to screen readers\\\",\\\"data\\\":nu"
                        "ll,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"aria-label\\\",\\\"impact\\\":\\\"cr"
                        "itical\\\",\\\"message\\\":\\\"aria-label attribute does not exist or is empty\\"
                        "\",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"aria-labelledby\\\""
                        ",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"aria-labelledby attribute d"
                        "oes not exist, references elements that do not exist or references elements that"
                        " are empty or not visible\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id"
                        "\\\":\\\"role-presentation\\\",\\\"impact\\\":\\\"moderate\\\",\\\"message\\\":\\"
                        "\"Element's default semantics were not overridden with role=\\\\\\\"presentation"
                        "\\\\\\\"\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"role-non"
                        "e\\\",\\\"impact\\\":\\\"moderate\\\",\\\"message\\\":\\\"Element's default sema"
                        "ntics were not overridden with role=\\\\\\\"none\\\\\\\"\\\",\\\"data\\\":null,\\"
                        "\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"focusable-n"
                        "o-name\\\",\\\"impact\\\":\\\"serious\\\",\\\"message\\\":\\\"Element is in tab "
                        "order and does not have accessible text\\\",\\\"data\\\":null,\\\"relatedNodes\\"
                        "\":[]}]},{\\\"target\\\":[\\\"#fh5co-footer > .container > .row > div:nth-of-typ"
                        "e(2) > .social-media > li:nth-of-type(1) > .facebook\\\"],\\\"html\\\":\\\"<a hr"
                        "ef=\\\\\\\"#\\\\\\\" class=\\\\\\\"facebook\\\\\\\"><i class=\\\\\\\"icon-facebo"
                        "ok\\\\\\\"></i></a>\\\",\\\"impact\\\":\\\"critical\\\",\\\"any\\\":[{\\\"id\\\""
                        ":\\\"has-visible-text\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"El"
                        "ement does not have text that is visible to screen readers\\\",\\\"data\\\":null"
                        ",\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"aria-label\\\",\\\"impact\\\":\\\"crit"
                        "ical\\\",\\\"message\\\":\\\"aria-label attribute does not exist or is empty\\\""
                        ",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"aria-labelledby\\\","
                        "\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"aria-labelledby attribute do"
                        "es not exist, references elements that do not exist or references elements that "
                        "are empty or not visible\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\"
                        "\":\\\"role-presentation\\\",\\\"impact\\\":\\\"moderate\\\",\\\"message\\\":\\\""
                        "Element's default semantics were not overridden with role=\\\\\\\"presentation\\"
                        "\\\\\"\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"role-none\\"
                        "\",\\\"impact\\\":\\\"moderate\\\",\\\"message\\\":\\\"Element's default semanti"
                        "cs were not overridden with role=\\\\\\\"none\\\\\\\"\\\",\\\"data\\\":null,\\\""
                        "relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"focusable-no-"
                        "name\\\",\\\"impact\\\":\\\"serious\\\",\\\"message\\\":\\\"Element is in tab or"
                        "der and does not have accessible text\\\",\\\"data\\\":null,\\\"relatedNodes\\\""
                        ":[]}]},{\\\"target\\\":[\\\"#fh5co-footer > .container > .row > div:nth-of-type("
                        "2) > .social-media > li:nth-of-type(2) > .twitter\\\"],\\\"html\\\":\\\"<a href="
                        "\\\\\\\"#\\\\\\\" class=\\\\\\\"twitter\\\\\\\"><i class=\\\\\\\"icon-twitter\\\\"
                        "\\\"></i></a>\\\",\\\"impact\\\":\\\"critical\\\",\\\"any\\\":[{\\\"id\\\":\\\"h"
                        "as-visible-text\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Element "
                        "does not have text that is visible to screen readers\\\",\\\"data\\\":null,\\\"r"
                        "elatedNodes\\\":[]},{\\\"id\\\":\\\"aria-label\\\",\\\"impact\\\":\\\"critical\\"
                        "\",\\\"message\\\":\\\"aria-label attribute d";
long WebSocketSendLen56   = sizeof(WebSocketSend56) - 1;	 

 

char WebSocketSend57[] = "id-18 index-16 total-92 oes not exist or is empty\\\",\\\"data\\\":null,\\\"rela"
                        "tedNodes\\\":[]},{\\\"id\\\":\\\"aria-labelledby\\\",\\\"impact\\\":\\\"critical"
                        "\\\",\\\"message\\\":\\\"aria-labelledby attribute does not exist, references el"
                        "ements that do not exist or references elements that are empty or not visible\\\""
                        ",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"role-presentation\\\""
                        ",\\\"impact\\\":\\\"moderate\\\",\\\"message\\\":\\\"Element's default semantics"
                        " were not overridden with role=\\\\\\\"presentation\\\\\\\"\\\",\\\"data\\\":nul"
                        "l,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"role-none\\\",\\\"impact\\\":\\\"mode"
                        "rate\\\",\\\"message\\\":\\\"Element's default semantics were not overridden wit"
                        "h role=\\\\\\\"none\\\\\\\"\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\""
                        "all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"focusable-no-name\\\",\\\"impact\\\":\\"
                        "\"serious\\\",\\\"message\\\":\\\"Element is in tab order and does not have acce"
                        "ssible text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\"
                        "\"#fh5co-footer > .container > .row > div:nth-of-type(2) > .social-media > li:nt"
                        "h-of-type(3) > .dribbble\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" class=\\"
                        "\\\\\"dribbble\\\\\\\"><i class=\\\\\\\"icon-dribbble\\\\\\\"></i></a>\\\",\\\"i"
                        "mpact\\\":\\\"critical\\\",\\\"any\\\":[{\\\"id\\\":\\\"has-visible-text\\\",\\\""
                        "impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Element does not have text that "
                        "is visible to screen readers\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\""
                        "id\\\":\\\"aria-label\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"ar"
                        "ia-label attribute does not exist or is empty\\\",\\\"data\\\":null,\\\"relatedN"
                        "odes\\\":[]},{\\\"id\\\":\\\"aria-labelledby\\\",\\\"impact\\\":\\\"critical\\\""
                        ",\\\"message\\\":\\\"aria-labelledby attribute does not exist, references elemen"
                        "ts that do not exist or references elements that are empty or not visible\\\",\\"
                        "\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"role-presentation\\\",\\"
                        "\"impact\\\":\\\"moderate\\\",\\\"message\\\":\\\"Element's default semantics we"
                        "re not overridden with role=\\\\\\\"presentation\\\\\\\"\\\",\\\"data\\\":null,\\"
                        "\"relatedNodes\\\":[]},{\\\"id\\\":\\\"role-none\\\",\\\"impact\\\":\\\"moderate"
                        "\\\",\\\"message\\\":\\\"Element's default semantics were not overridden with ro"
                        "le=\\\\\\\"none\\\\\\\"\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\"
                        "\":[],\\\"none\\\":[{\\\"id\\\":\\\"focusable-no-name\\\",\\\"impact\\\":\\\"ser"
                        "ious\\\",\\\"message\\\":\\\"Element is in tab order and does not have accessibl"
                        "e text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh"
                        "5co-footer > .container > .row > div:nth-of-type(2) > .social-media > li:nth-of-"
                        "type(4) > .github\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" class=\\\\\\\""
                        "github\\\\\\\"><i class=\\\\\\\"icon-github-alt\\\\\\\"></i></a>\\\",\\\"impact\\"
                        "\":\\\"critical\\\",\\\"any\\\":[{\\\"id\\\":\\\"has-visible-text\\\",\\\"impact"
                        "\\\":\\\"critical\\\",\\\"message\\\":\\\"Element does not have text that is vis"
                        "ible to screen readers\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\\""
                        ":\\\"aria-label\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"aria-lab"
                        "el attribute does not exist or is empty\\\",\\\"data\\\":null,\\\"relatedNodes\\"
                        "\":[]},{\\\"id\\\":\\\"aria-labelledby\\\",\\\"impact\\\":\\\"critical\\\",\\\"m"
                        "essage\\\":\\\"aria-labelledby attribute does not exist, references elements tha"
                        "t do not exist or references elements that are empty or not visible\\\",\\\"data"
                        "\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"role-presentation\\\",\\\"imp"
                        "act\\\":\\\"moderate\\\",\\\"message\\\":\\\"Element's default semantics were no"
                        "t over";
long WebSocketSendLen57   = sizeof(WebSocketSend57) - 1;	 

 

char WebSocketSend58[] = "id-18 index-17 total-92 ridden with role=\\\\\\\"presentation\\\\\\\"\\\",\\\"da"
                        "ta\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"role-none\\\",\\\"impact\\\""
                        ":\\\"moderate\\\",\\\"message\\\":\\\"Element's default semantics were not overr"
                        "idden with role=\\\\\\\"none\\\\\\\"\\\",\\\"data\\\":null,\\\"relatedNodes\\\":"
                        "[]}],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"focusable-no-name\\\",\\\"impa"
                        "ct\\\":\\\"serious\\\",\\\"message\\\":\\\"Element is in tab order and does not "
                        "have accessible text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]}],\\\"html\\"
                        "\":\\\"<a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"facebook\\\\\\\"><i class=\\\\\\\""
                        "icon-facebook\\\\\\\"></i></a>\\\",\\\"fileName\\\":\\\"C:\\\\\\\\Users\\\\\\\\N"
                        "aveen Reddy Vangala\\\\\\\\Documents\\\\\\\\Visual Studio 2015\\\\\\\\Projects\\"
                        "\\\\\\Dot-net-work\\\\\\\\SampleMasterPage\\\\\\\\SampleMasterPage\\\\\\\\Home.M"
                        "aster\\\",\\\"position\\\":12825},{\\\"id\\\":\\\"region\\\",\\\"description\\\""
                        ":\\\"Ensures all content is contained within a landmark region\\\",\\\"help\\\":"
                        "\\\"Content should be contained in a landmark region\\\",\\\"helpUrl\\\":\\\"htt"
                        "ps://dequeuniversity.com/rules/axe/2.0/region?application=axeAPI\\\",\\\"impact\\"
                        "\":\\\"moderate\\\",\\\"tags\\\":[\\\"best-practice\\\"],\\\"nodes\\\":[{\\\"tar"
                        "get\\\":[\\\".js.flexbox.canvas.canvastext.webgl.touch.geolocation.postmessage.w"
                        "ebsqldatabase.indexeddb.hashchange.history.draganddrop.websockets.rgba.hsla.mult"
                        "iplebgs.backgroundsize.borderimage.borderradius.boxshadow.textshadow.opacity.css"
                        "animations.csscolumns.cssgradients.cssreflections.csstransforms.csstransforms3d."
                        "csstransitions.fontface.no-generatedcontent.video.audio.localstorage.sessionstor"
                        "age.webworkers.applicationcache.svg.inlinesvg.smil.svgclippaths\\\"],\\\"html\\\""
                        ":\\\"<html xmlns=\\\\\\\"http://www.w3.org/1999/xhtml\\\\\\\" class=\\\\\\\" js "
                        "flexbox canvas canvastext webgl touch geolocation postmessage websqldatabase ind"
                        "exeddb hashchange history draganddrop websockets rgba hsla multiplebgs backgroun"
                        "dsize borderimage borderradius boxshadow textshadow opacity cssanimations csscol"
                        "umns cssgradients cssreflections csstransforms csstransforms3d csstransitions fo"
                        "ntface no-generatedcontent video audio localstorage sessionstorage webworkers ap"
                        "plicationcache svg inlinesvg smil svgclippaths\\\\\\\" style=\\\\\\\"\\\\\\\">\\"
                        "\",\\\"impact\\\":\\\"moderate\\\",\\\"any\\\":[{\\\"id\\\":\\\"region\\\",\\\"i"
                        "mpact\\\":\\\"moderate\\\",\\\"message\\\":\\\"Content not contained by an ARIA "
                        "landmark\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[{\\\"target\\\":[\\\"#form1"
                        "\\\"],\\\"html\\\":\\\"<form method=\\\\\\\"post\\\\\\\" action=\\\\\\\"./\\\\\\"
                        "\" id=\\\\\\\"form1\\\\\\\">\\\"},{\\\"target\\\":[\\\"#map > div > .gm-style > "
                        "div:nth-of-type(1) > .gm-style-pbc > .gm-style-pbt\\\"],\\\"html\\\":\\\"<p clas"
                        "s=\\\\\\\"gm-style-pbt\\\\\\\">Use two fingers to move the map</p>\\\"},{\\\"tar"
                        "get\\\":[\\\"#map > div > .gm-style > div:nth-of-type(2) > a > div > img\\\"],\\"
                        "\"html\\\":\\\"<img src=\\\\\\\"https://maps.gstatic.com/mapfiles/api-3/images/g"
                        "oogle_white5_hdpi.png\\\\\\\" draggable=\\\\\\\"false\\\\\\\" style=\\\\\\\"posi"
                        "tion: absolute; left: 0px; top: 0px; width: 66px; height: 26px; user-select: non"
                        "e; border: 0px; padding: 0px; margin: 0px;\\\\\\\">\\\"},{\\\"target\\\":[\\\"#m"
                        "ap > div > .gm-style > div:nth-of-type(4) > .gm-style-cc > div:nth-of-type(2) > "
                        "span\\\"],\\\"html\\\":\\\"<span>Map data "
                        "\xc2\xa9"
                        "2017 Google</span>\\\"},{\\\"target\\\":[\\\"#map > div > .gm-style > .gmnoprint"
                        ".gm-style-cc > div:nth-of-type(2) > a\\\"],\\\"html\\";
long WebSocketSendLen58   = sizeof(WebSocketSend58) - 1;	 

 

char WebSocketSend59[] = "id-18 index-18 total-92 \":\\\"<a href=\\\\\\\"https://www.google.com/intl/en-US"
                        "_US/help/terms_maps.html\\\\\\\" target=\\\\\\\"_blank\\\\\\\" style=\\\\\\\"tex"
                        "t-decoration: none; cursor: pointer; color: rgb(68, 68, 68);\\\\\\\">Terms of Us"
                        "e</a>\\\"},{\\\"target\\\":[\\\"#map > div > .gm-style > div:nth-of-type(8) > .g"
                        "mnoprint > div > div:nth-of-type(1) > div > img\\\"],\\\"html\\\":\\\"<img src=\\"
                        "\\\\\"https://maps.gstatic.com/mapfiles/api-3/images/tmapctrl_hdpi.png\\\\\\\" d"
                        "raggable=\\\\\\\"false\\\\\\\" style=\\\\\\\"position: absolute; left: 0px; top:"
                        " 0px; user-select: none; border: 0px; padding: 0px; margin: 0px; max-width: none"
                        "; width: 120px; height: 54px;\\\\\\\">\\\"},{\\\"target\\\":[\\\"#map > div > .g"
                        "m-style > div:nth-of-type(8) > .gmnoprint > div > div:nth-of-type(3) > div > img"
                        "\\\"],\\\"html\\\":\\\"<img src=\\\\\\\"https://maps.gstatic.com/mapfiles/api-3/"
                        "images/tmapctrl_hdpi.png\\\\\\\" draggable=\\\\\\\"false\\\\\\\" style=\\\\\\\"p"
                        "osition: absolute; left: 0px; top: -15px; user-select: none; border: 0px; paddin"
                        "g: 0px; margin: 0px; max-width: none; width: 120px; height: 54px;\\\\\\\">\\\"},"
                        "{\\\"target\\\":[\\\"#map > div > .gm-style > div:nth-of-type(8) > .gm-svpc > di"
                        "v:nth-of-type(2) > div:nth-of-type(1) > img\\\"],\\\"html\\\":\\\"<img src=\\\\\\"
                        "\"https://maps.gstatic.com/mapfiles/api-3/images/cb_scout5_hdpi.png\\\\\\\" drag"
                        "gable=\\\\\\\"false\\\\\\\" style=\\\\\\\"position: absolute; left: -147px; top:"
                        " -26px; width: 215px; height: 835px; user-select: none; border: 0px; padding: 0p"
                        "x; margin: 0px; max-width: none;\\\\\\\">\\\"},{\\\"target\\\":[\\\"#map > div >"
                        " .gm-style > div:nth-of-type(10) > div:nth-of-type(1) > div:nth-of-type(1)\\\"],"
                        "\\\"html\\\":\\\"<div draggable=\\\\\\\"false\\\\\\\" title=\\\\\\\"Show street "
                        "map\\\\\\\" style=\\\\\\\"direction: ltr; overflow: hidden; text-align: center; "
                        "position: relative; color: rgb(0, 0, 0); font-family: Roboto, Arial, sans-serif;"
                        " user-select: none; font-size: 11px; background-color: rgb(255, 255, 255); paddi"
                        "ng: 11px; border-bottom-left-radius: 2px; border-top-left-radius: 2px; -webkit-b"
                        "ackground-clip: padding-box; background-clip: padding-box; box-shadow: rgba(0, 0"
                        ", 0, 0.298039) 0px 1px 4px -1px; min-width: 22px; font-weight: 500;\\\\\\\">\\\""
                        "},{\\\"target\\\":[\\\"#map > div > .gm-style > div:nth-of-type(10) > div:nth-of"
                        "-type(2) > div:nth-of-type(1)\\\"],\\\"html\\\":\\\"<div draggable=\\\\\\\"false"
                        "\\\\\\\" title=\\\\\\\"Show satellite imagery\\\\\\\" style=\\\\\\\"direction: l"
                        "tr; overflow: hidden; text-align: center; position: relative; color: rgb(86, 86,"
                        " 86); font-family: Roboto, Arial, sans-serif; user-select: none; font-size: 11px"
                        "; background-color: rgb(255, 255, 255); padding: 11px; border-bottom-right-radiu"
                        "s: 2px; border-top-right-radius: 2px; -webkit-background-clip: padding-box; back"
                        "ground-clip: padding-box; box-shadow: rgba(0, 0, 0, 0.298039) 0px 1px 4px -1px; "
                        "border-left: 0px; min-width: 40px;\\\\\\\">\\\"},{\\\"target\\\":[\\\"#fh5co-hom"
                        "e > .container > .text-wrap > .text-inner > .row > .col-md-8.col-md-offset-2 > h"
                        "1\\\"],\\\"html\\\":\\\"<h1 class=\\\\\\\"to-animate\\\\\\\" style=\\\\\\\"font-"
                        "size: large; font-weight: bolder; font-family: 'Kristen ITC'; color: #000000; te"
                        "xt-align: center;\\\\\\\">Mahesh Babu (born Mahesh Ghattamaneni on 9 August 1975"
                        ") is an Indian actor, producer, media personality, and philanthropist kno";
long WebSocketSendLen59   = sizeof(WebSocketSend59) - 1;	 

 

char WebSocketSend60[] = "id-18 index-19 total-92 wn for his works in Telugu cinema.</h1>\\\"},{\\\"target"
                        "\\\":[\\\"#fh5co-home > .container > .text-wrap > .text-inner > .row > .col-md-8"
                        ".col-md-offset-2 > h2:nth-of-type(1)\\\"],\\\"html\\\":\\\"<h2 class=\\\\\\\"to-"
                        "animate\\\\\\\"> Mahesh Babu Is A Perfectionist - sukumar</h2>\\\"},{\\\"target\\"
                        "\":[\\\"#fh5co-home > .container > .text-wrap > .text-inner > .row > .col-md-8.c"
                        "ol-md-offset-2 > h2:nth-of-type(2)\\\"],\\\"html\\\":\\\"<h2 class=\\\\\\\"to-an"
                        "imate\\\\\\\"> Mahesh Babu Is One Of The Best Actor In India - Ram Gopal Varma</"
                        "h2>\\\"},{\\\"target\\\":[\\\"#fh5co-home > .container > .text-wrap > .text-inne"
                        "r > .row > .col-md-8.col-md-offset-2 > h2:nth-of-type(3)\\\"],\\\"html\\\":\\\"<"
                        "h2 class=\\\\\\\"to-animate\\\\\\\"> Mahesh Babu Is An Addiction - Puri Jagannna"
                        "th</h2>\\\"},{\\\"target\\\":[\\\"#fh5co-home > .container > .text-wrap > .text-"
                        "inner > .row > .col-md-8.col-md-offset-2 > h2:nth-of-type(4)\\\"],\\\"html\\\":\\"
                        "\"<h2 class=\\\\\\\"to-animate\\\\\\\"> Mahesh Babu Has A Very Great Screen Pres"
                        "ence - Shankar </h2>\\\"},{\\\"target\\\":[\\\"#fh5co-home > .container > .text-"
                        "wrap > .text-inner > .row > .col-md-8.col-md-offset-2 > h2:nth-of-type(5)\\\"],\\"
                        "\"html\\\":\\\"<h2 class=\\\\\\\"to-animate\\\\\\\"> Mahesh Babu Is My favourite"
                        " Actor <br> Movies May Fail But Mahesh Never Fails - Trivikram Srinivas</h2>\\\""
                        "},{\\\"target\\\":[\\\"body > bl > .logo\\\"],\\\"html\\\":\\\"<img src=\\\\\\\""
                        "data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAACgAAAAoCAMAAAC7IEhfAAACplBMVEX///"
                        "//AAB/AAD/fwD/VQD/Pz//VSriVBzdRCLuVSLfTx/hSy3lTCbdTSHfSirgUSjjSCTlTCLkSSjkUCjmTi"
                        "TiTyfoTyfhTifiTCbmTCbjTSThSyXkTCbkSyXjSyXjTiXjTCTjSyTkTSbiTCTlTCTjSyXkTSXkTCTiSy"
                        "fkTCblTSbjTCbkTCbkTCXlTSbjTCbiTSbkTCblTSXkTSXkTSXkTCXjTSXjTSbkTSXjTSXjTSbkTSXkTS"
                        "bjTCbjTSXkTCbkTCbiTSbkTSbjTCbjTSXjTCXjTSbjTCXkTCXjTCXkTCXjTCXjTSXjTCbjTSbkTSbjTC"
                        "bkTSbkTCbjTCbjTSbjTCXkTCbkTSbjTSbjTCXkTSbjTCXjTSXkTSXjTCbkTSb////xZSnkTibrWSjoVC"
                        "ftXijpVifqVyfqWCfqd1rlTibrWijtXSjob1DvYinwZivxZCnlTybyfUr0jmL6z7376OP76uX97+r99P"
                        "L99/T9+ffmUSbpVyfmUCbkUCnqWSfmUSfqfGDmXzzmYT/rWyjrfmLsWyjsXCjsbkbsiG7mZUTnUiftfl"
                        "vtinDtkHjuXyjuYCjulH3vYSjnUyfwYinwZCnnYT/waC3nZEPnZkTxazHxcDjxcDnxcTryeETye0jyfE"
                        "rnZkXyfk3ysJ/zglHzi1/zjF/zjWLztaXztqb0i17kUCr0kmn0u6z1mXH1rZH2poP2yLz2zsP3rY73r5"
                        "D30cf4w674xK741s75zLj50L753NXoVSf65uD73M/74db75Nr75uD75+LobU3obk776ub77Oj77ur859"
                        "z86OD88Ov88e/88/D89fT97+njTyn98ezjUSvlUCb99/X9+Pb9+Pfpdln+9fL+9/X++ff++vj/+/n//P"
                        "v//fz//f3pd1rpeFv//v6yzbn+AAAAX3RSTlMAAQICAwQGCQ8PEBEUFxgZHB4mJiotLTQ1NTg9Q0RKS1"
                        "NUVlpaXmBhYmpwcXJ1d3h9f4CHjo+Xl5uenqSlpqittLW5u7zExsvL0tLY2dvh4eLk6Onq7O/w8fL3+f"
                        "v7/UUm+e4AAAJFSURBVHhehdJlYxQ7GIbhLO5erEhxitNiRU6RLl5cCpQ+mZW6u+Du7u7u7u7ubuefMJ"
                        "kkm2F2u70/JXmvT0kIIVEoqShiFFkijOTQDkuODHOJgJ3DcCt0auZWA+Ec9vQPk4EeHIb4hwuAEA6D/c"
                        "PZQDCHQf7hDCCIw0Bf8PCXy1lpBnQBgRzW9gEPFlJK75zZocPlQC0OK3nDQ7pjFehwJlCBQ9s0Kzz2gS"
                        "rowFQb4Y2G3tu5kK34ShXcCIwioqEAVj2m52Zx9+k9NcFUYIiEAwBc149z7jOXwF2hgGuA/hL2FpDmrw"
                        "R+f2arb6euCegGwiQMNeDZu5T+3J/wnIEnB7RsARcBoRK2N+CReTf10f9snr1T80An0E7Clhxi/j1KmT"
                        "29WVMwDmghYWMBsdSAJ52aCd4AGklYV8CUFwb8dWm7Ca4HAiSsyuED5j6y+a3dChYBVSQsG8PgxXxKX6"
                        "7dksNAXpYHJiK6DJGNF/f48A+wNZetfpwX95gOjCOehnN4ZRP0lj2iIgY3AMMUjAAW5tKjx2G0l0kJ1w"
                        "CDFOwL4HUKZEteKegG+ijY3fIf9zzzwMVANwU7W6CWmcfh021JQCcF21qhlvmG0u9XT6Rp8UAbBZt6QW"
                        "3f7Qu7NL1YoImC9a1Q5QLqKVizeDgHqKF";
long WebSocketSendLen60   = sizeof(WebSocketSend60) - 1;	 

 

char WebSocketSend61[] = "id-18 index-20 total-92 g+WJhagZiyhHVFF8w3R1XBGASMTXSC65LcjlgNMIMq7f+b6KC8cmx78C"
                        "b0K9VNfJvpRt2HTwd5qLtXRqUIj6r3DxsrFBjejWrSPxlC+gYMXlghzrE2l/nse3AksfajAAAAABJRU5"
                        "ErkJggg==\\\\\\\" title=\\\\\\\"Web Essentials\\\\\\\" alt=\\\\\\\"Web Essential"
                        "s\\\\\\\" class=\\\\\\\"logo\\\\\\\" draggable=\\\\\\\"true\\\\\\\">\\\"},{\\\"t"
                        "arget\\\":[\\\"body > bl > blbar > blbutton:nth-of-type(1)\\\"],\\\"html\\\":\\\""
                        "<blbutton title=\\\\\\\"Use CTRL+ALT+D to enable Design Mode\\\\\\\">Design</blb"
                        "utton>\\\"},{\\\"target\\\":[\\\"body > bl > blbar > blbutton:nth-of-type(2)\\\""
                        "],\\\"html\\\":\\\"<blbutton title=\\\\\\\"Use CTRL+ALT+I to enable Inspect Mode"
                        "\\\\\\\">Inspect</blbutton>\\\"},{\\\"target\\\":[\\\"body > bl > blbar > blbutt"
                        "on:nth-of-type(3)\\\"],\\\"html\\\":\\\"<blbutton title=\\\\\\\"Use CTRL+ALT+T t"
                        "o sync the current CSS changes into Visual Studio\\\\\\\">Save F12 changes</blbu"
                        "tton>\\\"},{\\\"target\\\":[\\\"body > bl > blbar > blcheckbox:nth-of-type(1) > "
                        "label\\\"],\\\"html\\\":\\\"<label title=\\\\\\\"Use CTRL+ALT+U to continuously "
                        "sync CSS changes into Visual Studio\\\\\\\" for=\\\\\\\"_0_9008633488402071\\\\\\"
                        "\" style=\\\\\\\"font-weight: normal;\\\\\\\">F12 auto-sync<input type=\\\\\\\"c"
                        "heckbox\\\\\\\" title=\\\\\\\"Use CTRL+ALT+U to continuously sync CSS changes in"
                        "to Visual Studio\\\\\\\" id=\\\\\\\"_0_9008633488402071\\\\\\\"></label>\\\"},{\\"
                        "\"target\\\":[\\\"body > bl > blbar > blcheckbox:nth-of-type(2) > label\\\"],\\\""
                        "html\\\":\\\"<label title=\\\\\\\"This will auto-hide this menu. Click the CTRL "
                        "key to make it visible\\\\\\\" for=\\\\\\\"_0_005383016530676077\\\\\\\" style=\\"
                        "\\\\\"font-weight: normal;\\\\\\\">Auto-hide<input type=\\\\\\\"checkbox\\\\\\\""
                        " title=\\\\\\\"This will auto-hide this menu. Click the CTRL key to make it visi"
                        "ble\\\\\\\" id=\\\\\\\"_0_005383016530676077\\\\\\\"></label>\\\"}]}],\\\"all\\\""
                        ":[],\\\"none\\\":[]}],\\\"html\\\":\\\"<html xmlns=\\\\\\\"http://www.w3.org/199"
                        "9/xhtml\\\\\\\" class=\\\\\\\" js flexbox canvas canvastext webgl touch geolocat"
                        "ion postmessage websqldatabase indexeddb hashchange history draganddrop websocke"
                        "ts rgba hsla multiplebgs backgroundsize borderimage borderradius boxshadow texts"
                        "hadow opacity cssanimations csscolumns cssgradients cssreflections csstransforms"
                        " csstransforms3d csstransitions fontface no-generatedcontent video audio localst"
                        "orage sessionstorage webworkers applicationcache svg inlinesvg smil svgclippaths"
                        "\\\\\\\" style=\\\\\\\"\\\\\\\">\\\",\\\"fileName\\\":\\\"C:\\\\\\\\Users\\\\\\\\"
                        "Naveen Reddy Vangala\\\\\\\\Documents\\\\\\\\Visual Studio 2015\\\\\\\\Projects\\"
                        "\\\\\\Dot-net-work\\\\\\\\SampleMasterPage\\\\\\\\SampleMasterPage\\\\\\\\Home.M"
                        "aster\\\",\\\"position\\\":134}],\\\"passes\\\":[{\\\"id\\\":\\\"aria-required-a"
                        "ttr\\\",\\\"description\\\":\\\"Ensures elements with ARIA roles have all requir"
                        "ed ARIA attributes\\\",\\\"help\\\":\\\"Required ARIA attributes must be provide"
                        "d\\\",\\\"helpUrl\\\":\\\"https://dequeuniversity.com/rules/axe/2.0/aria-require"
                        "d-attr?application=axeAPI\\\",\\\"impact\\\":null,\\\"tags\\\":[\\\"wcag2a\\\",\\"
                        "\"wcag411\\\",\\\"wcag412\\\"],\\\"nodes\\\":[{\\\"target\\\":[\\\"#fh5co-header"
                        "\\\"],\\\"html\\\":\\\"<header role=\\\\\\\"banner\\\\\\\" id=\\\\\\\"fh5co-head"
                        "er\\\\\\\">\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"aria-required-a"
                        "ttr\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"All required ARIA at"
                        "tributes are present\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\""
                        ":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-footer\\\"],\\\"html\\\":\\\"<d"
                        "iv id=\\\\\\\"fh5co-footer\\\\\\\" role=\\\\\\\"contentinfo";
long WebSocketSendLen61   = sizeof(WebSocketSend61) - 1;	 

 

char WebSocketSend62[] = "id-18 index-21 total-92 \\\\\\\">\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\"
                        "\":\\\"aria-required-attr\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\"
                        "\"All required ARIA attributes are present\\\",\\\"data\\\":null,\\\"relatedNode"
                        "s\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]}]},{\\\"id\\\":\\\"aria-required-child"
                        "ren\\\",\\\"description\\\":\\\"Ensures elements with an ARIA role that require "
                        "child roles contain them\\\",\\\"help\\\":\\\"Certain ARIA roles must contain pa"
                        "rticular children\\\",\\\"helpUrl\\\":\\\"https://dequeuniversity.com/rules/axe/"
                        "2.0/aria-required-children?application=axeAPI\\\",\\\"impact\\\":null,\\\"tags\\"
                        "\":[\\\"wcag2a\\\",\\\"wcag131\\\"],\\\"nodes\\\":[{\\\"target\\\":[\\\"#fh5co-h"
                        "eader\\\"],\\\"html\\\":\\\"<header role=\\\\\\\"banner\\\\\\\" id=\\\\\\\"fh5co"
                        "-header\\\\\\\">\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"aria-requi"
                        "red-children\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Required AR"
                        "IA children are present\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\"
                        "\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-footer\\\"],\\\"html\\\":\\\""
                        "<div id=\\\\\\\"fh5co-footer\\\\\\\" role=\\\\\\\"contentinfo\\\\\\\">\\\",\\\"i"
                        "mpact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"aria-required-children\\\",\\\"impac"
                        "t\\\":\\\"critical\\\",\\\"message\\\":\\\"Required ARIA children are present\\\""
                        ",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]}]},{"
                        "\\\"id\\\":\\\"aria-required-parent\\\",\\\"description\\\":\\\"Ensures elements"
                        " with an ARIA role that require parent roles are contained by them\\\",\\\"help\\"
                        "\":\\\"Certain ARIA roles must be contained by particular parents\\\",\\\"helpUr"
                        "l\\\":\\\"https://dequeuniversity.com/rules/axe/2.0/aria-required-parent?applica"
                        "tion=axeAPI\\\",\\\"impact\\\":null,\\\"tags\\\":[\\\"wcag2a\\\",\\\"wcag131\\\""
                        "],\\\"nodes\\\":[{\\\"target\\\":[\\\"#fh5co-header\\\"],\\\"html\\\":\\\"<heade"
                        "r role=\\\\\\\"banner\\\\\\\" id=\\\\\\\"fh5co-header\\\\\\\">\\\",\\\"impact\\\""
                        ":null,\\\"any\\\":[{\\\"id\\\":\\\"aria-required-parent\\\",\\\"impact\\\":\\\"c"
                        "ritical\\\",\\\"message\\\":\\\"Required ARIA parent role present\\\",\\\"data\\"
                        "\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\""
                        ":[\\\"#fh5co-footer\\\"],\\\"html\\\":\\\"<div id=\\\\\\\"fh5co-footer\\\\\\\" r"
                        "ole=\\\\\\\"contentinfo\\\\\\\">\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\""
                        ":\\\"aria-required-parent\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\"
                        "\"Required ARIA parent role present\\\",\\\"data\\\":null,\\\"relatedNodes\\\":["
                        "]}],\\\"all\\\":[],\\\"none\\\":[]}]},{\\\"id\\\":\\\"aria-roles\\\",\\\"descrip"
                        "tion\\\":\\\"Ensures all elements with a role attribute use a valid value\\\",\\"
                        "\"help\\\":\\\"ARIA roles used must conform to valid values\\\",\\\"helpUrl\\\":"
                        "\\\"https://dequeuniversity.com/rules/axe/2.0/aria-roles?application=axeAPI\\\","
                        "\\\"impact\\\":null,\\\"tags\\\":[\\\"wcag2a\\\",\\\"wcag131\\\",\\\"wcag411\\\""
                        ",\\\"wcag412\\\"],\\\"nodes\\\":[{\\\"target\\\":[\\\"#fh5co-header\\\"],\\\"htm"
                        "l\\\":\\\"<header role=\\\\\\\"banner\\\\\\\" id=\\\\\\\"fh5co-header\\\\\\\">\\"
                        "\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\"
                        "\"invalidrole\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"ARIA role "
                        "is valid\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"abstract"
                        "role\\\",\\\"impact\\\":\\\"serious\\\",\\\"message\\\":\\\"Abstract roles are n"
                        "ot used\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#f"
                        "h5co-footer\\\"],\\\"html\\\":\\\"<div id=\\\\\\\"fh5co-footer\\\\\\\" role=\\\\"
                        "\\\"contentinfo\\\\\\\">\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\"
                        "\"none\\\":[{\\\"id\\\":\\\"invalidrole\\\",\\\"impact\\\":\\\"critical\\\",\\\""
                        "message\\\":\\\"ARIA role is valid\\\",\\\"data\\\":nu";
long WebSocketSendLen62   = sizeof(WebSocketSend62) - 1;	 

 

char WebSocketSend63[] = "id-18 index-22 total-92 ll,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"abstractrole"
                        "\\\",\\\"impact\\\":\\\"serious\\\",\\\"message\\\":\\\"Abstract roles are not u"
                        "sed\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]}]},{\\\"id\\\":\\\"aria-vali"
                        "d-attr-value\\\",\\\"description\\\":\\\"Ensures all ARIA attributes have valid "
                        "values\\\",\\\"help\\\":\\\"ARIA attributes must conform to valid values\\\",\\\""
                        "helpUrl\\\":\\\"https://dequeuniversity.com/rules/axe/2.0/aria-valid-attr-value?"
                        "application=axeAPI\\\",\\\"impact\\\":null,\\\"tags\\\":[\\\"wcag2a\\\",\\\"wcag"
                        "131\\\",\\\"wcag411\\\",\\\"wcag412\\\"],\\\"nodes\\\":[{\\\"target\\\":[\\\"#ma"
                        "p > div > .gm-style > div:nth-of-type(8) > .gm-svpc > div:nth-of-type(2) > div:n"
                        "th-of-type(1)\\\"],\\\"html\\\":\\\"<div aria-label=\\\\\\\"Street View Pegman C"
                        "ontrol\\\\\\\" style=\\\\\\\"width: 26px; height: 26px; overflow: hidden; positi"
                        "on: absolute; left: 0px; top: 0px;\\\\\\\">\\\",\\\"impact\\\":null,\\\"any\\\":"
                        "[{\\\"id\\\":\\\"aria-valid-attr-value\\\",\\\"impact\\\":\\\"critical\\\",\\\"m"
                        "essage\\\":\\\"ARIA attribute values are valid\\\",\\\"data\\\":null,\\\"related"
                        "Nodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]}]},{\\\"id\\\":\\\"aria-valid-attr"
                        "\\\",\\\"description\\\":\\\"Ensures attributes that begin with aria- are valid "
                        "ARIA attributes\\\",\\\"help\\\":\\\"ARIA attributes must conform to valid names"
                        "\\\",\\\"helpUrl\\\":\\\"https://dequeuniversity.com/rules/axe/2.0/aria-valid-at"
                        "tr?application=axeAPI\\\",\\\"impact\\\":null,\\\"tags\\\":[\\\"wcag2a\\\",\\\"w"
                        "cag411\\\"],\\\"nodes\\\":[{\\\"target\\\":[\\\"#map > div > .gm-style > div:nth"
                        "-of-type(8) > .gm-svpc > div:nth-of-type(2) > div:nth-of-type(1)\\\"],\\\"html\\"
                        "\":\\\"<div aria-label=\\\\\\\"Street View Pegman Control\\\\\\\" style=\\\\\\\""
                        "width: 26px; height: 26px; overflow: hidden; position: absolute; left: 0px; top:"
                        " 0px;\\\\\\\">\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"aria-valid-a"
                        "ttr\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"ARIA attribute name "
                        "are valid\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"non"
                        "e\\\":[]}]},{\\\"id\\\":\\\"button-name\\\",\\\"description\\\":\\\"Ensures butt"
                        "ons have discernible text\\\",\\\"help\\\":\\\"Buttons must have discernible tex"
                        "t\\\",\\\"helpUrl\\\":\\\"https://dequeuniversity.com/rules/axe/2.0/button-name?"
                        "application=axeAPI\\\",\\\"impact\\\":null,\\\"tags\\\":[\\\"wcag2a\\\",\\\"wcag"
                        "412\\\",\\\"section508\\\",\\\"section508.22.a\\\"],\\\"nodes\\\":[{\\\"target\\"
                        "\":[\\\"#btn-submit\\\"],\\\"html\\\":\\\"<input type=\\\\\\\"submit\\\\\\\" id="
                        "\\\\\\\"btn-submit\\\\\\\" class=\\\\\\\"btn btn-send-message btn-md\\\\\\\" val"
                        "ue=\\\\\\\"Send Message\\\\\\\">\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\""
                        ":\\\"non-empty-if-present\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\"
                        "\"Element has a non-empty value attribute\\\",\\\"data\\\":\\\"Send Message\\\","
                        "\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"focusable"
                        "-no-name\\\",\\\"impact\\\":\\\"serious\\\",\\\"message\\\":\\\"Element is not i"
                        "n tab order or has accessible text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]"
                        "}]}]},{\\\"id\\\":\\\"bypass\\\",\\\"description\\\":\\\"Ensures each page has a"
                        "t least one mechanism for a user to bypass navigation and jump straight to the c"
                        "ontent\\\",\\\"help\\\":\\\"Page must have means to bypass repeated blocks\\\",\\"
                        "\"helpUrl\\\":\\\"https://dequeuniversity.com/rules/axe/2.0/bypass?application=a"
                        "xeAPI\\\",\\\"impact\\\":null,\\\"tags\\\":[\\\"wcag2a\\\",\\\"wcag241\\\",\\\"s"
                        "ection508\\\",\\\"section508.22.o\\\"],\\\"nodes\\\":[{\\\"target\\\":[\\\".js.f"
                        "lexbox.canvas.canvastext.webgl.touch.geolocation.postmessag";
long WebSocketSendLen63   = sizeof(WebSocketSend63) - 1;	 

 

char WebSocketSend64[] = "id-18 index-23 total-92 e.websqldatabase.indexeddb.hashchange.history.draganddro"
                        "p.websockets.rgba.hsla.multiplebgs.backgroundsize.borderimage.borderradius.boxsh"
                        "adow.textshadow.opacity.cssanimations.csscolumns.cssgradients.cssreflections.css"
                        "transforms.csstransforms3d.csstransitions.fontface.no-generatedcontent.video.aud"
                        "io.localstorage.sessionstorage.webworkers.applicationcache.svg.inlinesvg.smil.sv"
                        "gclippaths\\\"],\\\"html\\\":\\\"<html xmlns=\\\\\\\"http://www.w3.org/1999/xhtm"
                        "l\\\\\\\" class=\\\\\\\" js flexbox canvas canvastext webgl touch geolocation po"
                        "stmessage websqldatabase indexeddb hashchange history draganddrop websockets rgb"
                        "a hsla multiplebgs backgroundsize borderimage borderradius boxshadow textshadow "
                        "opacity cssanimations csscolumns cssgradients cssreflections csstransforms csstr"
                        "ansforms3d csstransitions fontface no-generatedcontent video audio localstorage "
                        "sessionstorage webworkers applicationcache svg inlinesvg smil svgclippaths\\\\\\"
                        "\" style=\\\\\\\"\\\\\\\">\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\""
                        "internal-link-present\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Va"
                        "lid skip link found\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\"
                        "\"header-present\\\",\\\"impact\\\":\\\"moderate\\\",\\\"message\\\":\\\"Page ha"
                        "s a header\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"no"
                        "ne\\\":[]}]},{\\\"id\\\":\\\"color-contrast\\\",\\\"description\\\":\\\"Ensures "
                        "the contrast between foreground and background colors meets WCAG 2 AA contrast r"
                        "atio thresholds\\\",\\\"help\\\":\\\"Elements must have sufficient color contras"
                        "t\\\",\\\"helpUrl\\\":\\\"https://dequeuniversity.com/rules/axe/2.0/color-contra"
                        "st?application=axeAPI\\\",\\\"impact\\\":null,\\\"tags\\\":[\\\"wcag2aa\\\",\\\""
                        "wcag143\\\"],\\\"nodes\\\":[{\\\"target\\\":[\\\"#form1\\\"],\\\"html\\\":\\\"<f"
                        "orm method=\\\\\\\"post\\\\\\\" action=\\\\\\\"./\\\\\\\" id=\\\\\\\"form1\\\\\\"
                        "\">\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\""
                        "impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Unable to determine contrast rat"
                        "io\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":["
                        "]},{\\\"target\\\":[\\\"#fh5co-header > .fluid-container > .navbar.navbar-defaul"
                        "t > .navbar-header > .navbar-brand\\\"],\\\"html\\\":\\\"<a class=\\\\\\\"navbar"
                        "-brand\\\\\\\" href=\\\\\\\"index.html\\\\\\\" style=\\\\\\\"font-family: &quot;"
                        "Curlz MT&quot;; font-weight: bold; font-style: oblique; color: rgb(0, 0, 0);\\\\"
                        "\\\">Mahesh Babu</a>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"color-"
                        "contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Element has suf"
                        "ficient color contrast of 21.00\\\",\\\"data\\\":{\\\"fgColor\\\":\\\"#000000\\\""
                        ",\\\"bgColor\\\":\\\"#ffffff\\\",\\\"contrastRatio\\\":\\\"21.00\\\",\\\"fontSiz"
                        "e\\\":\\\"18.0pt\\\",\\\"fontWeight\\\":\\\"bold\\\"},\\\"relatedNodes\\\":[]}],"
                        "\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-testimony > .contain"
                        "er > .row > .col-md-12.to-animate.fadeInUp.animated > .wrap-testimony > .owl-car"
                        "ousel-fullwidth.owl-carousel.owl-theme.owl-responsive--1.owl-loaded > .owl-stage"
                        "-outer.owl-height > .owl-stage > div:nth-of-type(4) > .item > .testimony-slide.a"
                        "ctive.text-center > blockquote > p\\\"],\\\"html\\\":\\\"<p>\\\\\\\"On the eve o"
                        "f Gram Jyothi, Srimanthudu is a Fab movie to catch: focus on rural development &"
                        "amp; Social responsibility. Great Job @urstrulyMahesh\\\\\\\"</p>\\\",\\\"impact"
                        "\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"cri"
                        "ti";
long WebSocketSendLen64   = sizeof(WebSocketSend64) - 1;	 

 

char WebSocketSend65[] = "id-18 index-24 total-92 cal\\\",\\\"message\\\":\\\"Unable to determine contrast"
                        " ratio\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\"
                        "\":[]},{\\\"target\\\":[\\\"#fh5co-testimony > .container > .row > .col-md-12.to"
                        "-animate.fadeInUp.animated > .wrap-testimony > .owl-carousel-fullwidth.owl-carou"
                        "sel.owl-theme.owl-responsive--1.owl-loaded > .owl-stage-outer.owl-height > .owl-"
                        "stage > div:nth-of-type(4) > .item > .testimony-slide.active.text-center > span\\"
                        "\"],\\\"html\\\":\\\"<span> KTR, via <a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"twi"
                        "tter\\\\\\\">Twitter</a></span>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\""
                        ":\\\"color-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Unab"
                        "le to determine contrast ratio\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\"
                        "\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-testimony > .container"
                        " > .row > .col-md-12.to-animate.fadeInUp.animated > .wrap-testimony > .owl-carou"
                        "sel-fullwidth.owl-carousel.owl-theme.owl-responsive--1.owl-loaded > .owl-stage-o"
                        "uter.owl-height > .owl-stage > div:nth-of-type(4) > .item > .testimony-slide.act"
                        "ive.text-center > span > .twitter\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\""
                        " class=\\\\\\\"twitter\\\\\\\">Twitter</a>\\\",\\\"impact\\\":null,\\\"any\\\":["
                        "{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\"
                        "\":\\\"Unable to determine contrast ratio\\\",\\\"data\\\":null,\\\"relatedNodes"
                        "\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-testimony "
                        "> .container > .row > .col-md-12.to-animate.fadeInUp.animated > .wrap-testimony "
                        "> .owl-carousel-fullwidth.owl-carousel.owl-theme.owl-responsive--1.owl-loaded > "
                        ".owl-stage-outer.owl-height > .owl-stage > div:nth-of-type(5) > .item > .testimo"
                        "ny-slide.active.text-center > blockquote > p\\\"],\\\"html\\\":\\\"<p>\\\\\\\"Ot"
                        "her than Super Star @urstrulyMahesh i don't know if i like any body as an actor."
                        "\\\\\\\"</p>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"color-contrast"
                        "\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Unable to determine con"
                        "trast ratio\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"n"
                        "one\\\":[]},{\\\"target\\\":[\\\"#fh5co-testimony > .container > .row > .col-md-"
                        "12.to-animate.fadeInUp.animated > .wrap-testimony > .owl-carousel-fullwidth.owl-"
                        "carousel.owl-theme.owl-responsive--1.owl-loaded > .owl-stage-outer.owl-height > "
                        ".owl-stage > div:nth-of-type(5) > .item > .testimony-slide.active.text-center > "
                        "span\\\"],\\\"html\\\":\\\"<span>Ram Gopal Varma, via <a href=\\\\\\\"#\\\\\\\" "
                        "class=\\\\\\\"twitter\\\\\\\">Twitter</a></span>\\\",\\\"impact\\\":null,\\\"any"
                        "\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"mes"
                        "sage\\\":\\\"Unable to determine contrast ratio\\\",\\\"data\\\":null,\\\"relate"
                        "dNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-test"
                        "imony > .container > .row > .col-md-12.to-animate.fadeInUp.animated > .wrap-test"
                        "imony > .owl-carousel-fullwidth.owl-carousel.owl-theme.owl-responsive--1.owl-loa"
                        "ded > .owl-stage-outer.owl-height > .owl-stage > div:nth-of-type(5) > .item > .t"
                        "estimony-slide.active.text-center > span > .twitter\\\"],\\\"html\\\":\\\"<a hre"
                        "f=\\\\\\\"#\\\\\\\" class=\\\\\\\"twitter\\\\\\\">Twitter</a>\\\",\\\"impact\\\""
                        ":null,\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critica"
                        "l\\\",\\\"message\\\":\\\"Unable to determine contrast ratio\\\",\\\"data\\\":nu"
                        "ll,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\";
long WebSocketSendLen65   = sizeof(WebSocketSend65) - 1;	 

 

char WebSocketSend66[] = "id-18 index-25 total-92 \":[\\\"#fh5co-testimony > .container > .row > .col-md-1"
                        "2.to-animate.fadeInUp.animated > .wrap-testimony > .owl-carousel-fullwidth.owl-c"
                        "arousel.owl-theme.owl-responsive--1.owl-loaded > .owl-stage-outer.owl-height > ."
                        "owl-stage > div:nth-of-type(6) > .item > .testimony-slide.active.text-center > b"
                        "lockquote > p\\\"],\\\"html\\\":\\\"<p>\\\\\\\"Srimanthudu is a special film for"
                        " many reasons:) Gained immense respect and love from all my fans... Made me more"
                        " human:)\\\\\\\"</p>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"color-"
                        "contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Unable to deter"
                        "mine contrast ratio\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":"
                        "[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-testimony > .container > .row > "
                        ".col-md-12.to-animate.fadeInUp.animated > .wrap-testimony > .owl-carousel-fullwi"
                        "dth.owl-carousel.owl-theme.owl-responsive--1.owl-loaded > .owl-stage-outer.owl-h"
                        "eight > .owl-stage > div:nth-of-type(6) > .item > .testimony-slide.active.text-c"
                        "enter > span\\\"],\\\"html\\\":\\\"<span>Mahesh Babu, via <a href=\\\\\\\"#\\\\\\"
                        "\" class=\\\\\\\"twitter\\\\\\\">Twitter</a></span>\\\",\\\"impact\\\":null,\\\""
                        "any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\""
                        "message\\\":\\\"Unable to determine contrast ratio\\\",\\\"data\\\":null,\\\"rel"
                        "atedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-t"
                        "estimony > .container > .row > .col-md-12.to-animate.fadeInUp.animated > .wrap-t"
                        "estimony > .owl-carousel-fullwidth.owl-carousel.owl-theme.owl-responsive--1.owl-"
                        "loaded > .owl-stage-outer.owl-height > .owl-stage > div:nth-of-type(6) > .item >"
                        " .testimony-slide.active.text-center > span > .twitter\\\"],\\\"html\\\":\\\"<a "
                        "href=\\\\\\\"#\\\\\\\" class=\\\\\\\"twitter\\\\\\\">Twitter</a>\\\",\\\"impact\\"
                        "\":null,\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"criti"
                        "cal\\\",\\\"message\\\":\\\"Unable to determine contrast ratio\\\",\\\"data\\\":"
                        "null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":["
                        "\\\"#fh5co-testimony > .container > .row > .col-md-12.to-animate.fadeInUp.animat"
                        "ed > .wrap-testimony > .owl-carousel-fullwidth.owl-carousel.owl-theme.owl-respon"
                        "sive--1.owl-loaded > .owl-stage-outer.owl-height > .owl-stage > div:nth-of-type("
                        "7) > .item > .testimony-slide.active.text-center > blockquote > p\\\"],\\\"html\\"
                        "\":\\\"<p>\\\\\\\"On the eve of Gram Jyothi, Srimanthudu is a Fab movie to catch"
                        ": focus on rural development &amp; Social responsibility. Great Job @urstrulyMah"
                        "esh\\\\\\\"</p>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"color-contr"
                        "ast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Unable to determine "
                        "contrast ratio\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\"
                        "\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-testimony > .container > .row > .col-"
                        "md-12.to-animate.fadeInUp.animated > .wrap-testimony > .owl-carousel-fullwidth.o"
                        "wl-carousel.owl-theme.owl-responsive--1.owl-loaded > .owl-stage-outer.owl-height"
                        " > .owl-stage > div:nth-of-type(7) > .item > .testimony-slide.active.text-center"
                        " > span\\\"],\\\"html\\\":\\\"<span> KTR, via <a href=\\\\\\\"#\\\\\\\" class=\\"
                        "\\\\\"twitter\\\\\\\">Twitter</a></span>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\"
                        "\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":"
                        "\\\"Unable to determine contrast ratio\\\",\\\"data\\\":null,\\\"relatedNodes\\\""
                        ":[]}],\\\"all\\\":[],\\\"none\\";
long WebSocketSendLen66   = sizeof(WebSocketSend66) - 1;	 

 

char WebSocketSend67[] = "id-18 index-26 total-92 \":[]},{\\\"target\\\":[\\\"#fh5co-testimony > .containe"
                        "r > .row > .col-md-12.to-animate.fadeInUp.animated > .wrap-testimony > .owl-caro"
                        "usel-fullwidth.owl-carousel.owl-theme.owl-responsive--1.owl-loaded > .owl-stage-"
                        "outer.owl-height > .owl-stage > div:nth-of-type(7) > .item > .testimony-slide.ac"
                        "tive.text-center > span > .twitter\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\"
                        "\" class=\\\\\\\"twitter\\\\\\\">Twitter</a>\\\",\\\"impact\\\":null,\\\"any\\\""
                        ":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message"
                        "\\\":\\\"Unable to determine contrast ratio\\\",\\\"data\\\":null,\\\"relatedNod"
                        "es\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-pricing "
                        "> .fh5co-pricing > .container > div:nth-of-type(1) > .col-md-12.section-heading."
                        "text-center > .to-animate\\\"],\\\"html\\\":\\\"<h2 class=\\\\\\\"to-animate\\\\"
                        "\\\">Plans Built For Every One</h2>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id"
                        "\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\""
                        "Unable to determine contrast ratio\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]"
                        "}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-pricing > .fh5co-"
                        "pricing > .container > div:nth-of-type(1) > .col-md-12.section-heading.text-cent"
                        "er > .row > .col-md-8.col-md-offset-2.subtext > .to-animate\\\"],\\\"html\\\":\\"
                        "\"<h3 class=\\\\\\\"to-animate\\\\\\\">Far far away, behind the word mountains, "
                        "far from the countries Vokalia and Consonantia, there live the blind texts. Sepa"
                        "rated they live in Bookmarksgrove. </h3>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\"
                        "\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":"
                        "\\\"Unable to determine contrast ratio\\\",\\\"data\\\":null,\\\"relatedNodes\\\""
                        ":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-pricing > .fh5"
                        "co-pricing > .container > div:nth-of-type(2) > .pricing > div:nth-of-type(1) > ."
                        "price-box.to-animate-2 > .pricing-plan\\\"],\\\"html\\\":\\\"<h2 class=\\\\\\\"p"
                        "ricing-plan\\\\\\\">Starter</h2>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\""
                        ":\\\"color-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Unab"
                        "le to determine contrast ratio\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\"
                        "\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-pricing > .fh5co-prici"
                        "ng > .container > div:nth-of-type(2) > .pricing > div:nth-of-type(1) > .price-bo"
                        "x.to-animate-2 > .price\\\"],\\\"html\\\":\\\"<div class=\\\\\\\"price\\\\\\\"><"
                        "sup class=\\\\\\\"currency\\\\\\\">$</sup>9<small>/month</small></div>\\\",\\\"i"
                        "mpact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\"
                        "\"critical\\\",\\\"message\\\":\\\"Unable to determine contrast ratio\\\",\\\"da"
                        "ta\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"targe"
                        "t\\\":[\\\"#fh5co-pricing > .fh5co-pricing > .container > div:nth-of-type(2) > ."
                        "pricing > div:nth-of-type(1) > .price-box.to-animate-2 > .price > .currency\\\"]"
                        ",\\\"html\\\":\\\"<sup class=\\\\\\\"currency\\\\\\\">$</sup>\\\",\\\"impact\\\""
                        ":null,\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critica"
                        "l\\\",\\\"message\\\":\\\"Unable to determine contrast ratio\\\",\\\"data\\\":nu"
                        "ll,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\"
                        "\"#fh5co-pricing > .fh5co-pricing > .container > div:nth-of-type(2) > .pricing >"
                        " div:nth-of-type(1) > .price-box.to-animate-2 > .price > small\\\"],\\\"html\\\""
                        ":\\\"<small>/month</small>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\""
                        "color-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\";
long WebSocketSendLen67   = sizeof(WebSocketSend67) - 1;	 

 

char WebSocketSend68[] = "id-18 index-27 total-92 \":\\\"Unable to determine contrast ratio\\\",\\\"data\\"
                        "\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\""
                        ":[\\\"#fh5co-pricing > .fh5co-pricing > .container > div:nth-of-type(2) > .prici"
                        "ng > div:nth-of-type(1) > .price-box.to-animate-2 > p\\\"],\\\"html\\\":\\\"<p>F"
                        "ar far away, behind the word mountains, far from the countries Vokalia and Conso"
                        "nantia, there live the blind texts. </p>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\"
                        "\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":"
                        "\\\"Unable to determine contrast ratio\\\",\\\"data\\\":null,\\\"relatedNodes\\\""
                        ":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-pricing > .fh5"
                        "co-pricing > .container > div:nth-of-type(2) > .pricing > div:nth-of-type(2) > ."
                        "price-box.to-animate-2 > .pricing-plan\\\"],\\\"html\\\":\\\"<h2 class=\\\\\\\"p"
                        "ricing-plan\\\\\\\">Basic</h2>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":"
                        "\\\"color-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Unabl"
                        "e to determine contrast ratio\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\"
                        "\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-pricing > .fh5co-prici"
                        "ng > .container > div:nth-of-type(2) > .pricing > div:nth-of-type(2) > .price-bo"
                        "x.to-animate-2 > .price\\\"],\\\"html\\\":\\\"<div class=\\\\\\\"price\\\\\\\"><"
                        "sup class=\\\\\\\"currency\\\\\\\">$</sup>27<small>/month</small></div>\\\",\\\""
                        "impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\"
                        "\"critical\\\",\\\"message\\\":\\\"Unable to determine contrast ratio\\\",\\\"da"
                        "ta\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"targe"
                        "t\\\":[\\\"#fh5co-pricing > .fh5co-pricing > .container > div:nth-of-type(2) > ."
                        "pricing > div:nth-of-type(2) > .price-box.to-animate-2 > .price > .currency\\\"]"
                        ",\\\"html\\\":\\\"<sup class=\\\\\\\"currency\\\\\\\">$</sup>\\\",\\\"impact\\\""
                        ":null,\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critica"
                        "l\\\",\\\"message\\\":\\\"Unable to determine contrast ratio\\\",\\\"data\\\":nu"
                        "ll,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\"
                        "\"#fh5co-pricing > .fh5co-pricing > .container > div:nth-of-type(2) > .pricing >"
                        " div:nth-of-type(2) > .price-box.to-animate-2 > .price > small\\\"],\\\"html\\\""
                        ":\\\"<small>/month</small>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\""
                        "color-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Unable to"
                        " determine contrast ratio\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"al"
                        "l\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-pricing > .fh5co-pricing >"
                        " .container > div:nth-of-type(2) > .pricing > div:nth-of-type(2) > .price-box.to"
                        "-animate-2 > p\\\"],\\\"html\\\":\\\"<p>Far far away, behind the word mountains,"
                        " far from the countries Vokalia and Consonantia, there live the blind texts. </p"
                        ">\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"im"
                        "pact\\\":\\\"critical\\\",\\\"message\\\":\\\"Unable to determine contrast ratio"
                        "\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]}"
                        ",{\\\"target\\\":[\\\"#fh5co-pricing > .fh5co-pricing > .container > div:nth-of-"
                        "type(2) > .pricing > div:nth-of-type(3) > .price-box.to-animate-2.popular > .pri"
                        "cing-plan.pricing-plan-offer\\\"],\\\"html\\\":\\\"<h2 class=\\\\\\\"pricing-pla"
                        "n pricing-plan-offer\\\\\\\">Pro <span>Best Offer</span></h2>\\\",\\\"impact\\\""
                        ":null,\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critica"
                        "l\\\",\\\"message\\\":\\\"Unable to determine contrast ratio\\\",";
long WebSocketSendLen68   = sizeof(WebSocketSend68) - 1;	 

 

char WebSocketSend69[] = "id-18 index-28 total-92 \\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":"
                        "[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-pricing > .fh5co-pricing > .cont"
                        "ainer > div:nth-of-type(2) > .pricing > div:nth-of-type(3) > .price-box.to-anima"
                        "te-2.popular > .pricing-plan.pricing-plan-offer > span\\\"],\\\"html\\\":\\\"<sp"
                        "an>Best Offer</span>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"color-"
                        "contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Unable to deter"
                        "mine contrast ratio\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":"
                        "[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-pricing > .fh5co-pricing > .cont"
                        "ainer > div:nth-of-type(2) > .pricing > div:nth-of-type(3) > .price-box.to-anima"
                        "te-2.popular > .price\\\"],\\\"html\\\":\\\"<div class=\\\\\\\"price\\\\\\\"><su"
                        "p class=\\\\\\\"currency\\\\\\\">$</sup>74<small>/month</small></div>\\\",\\\"im"
                        "pact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\""
                        "critical\\\",\\\"message\\\":\\\"Unable to determine contrast ratio\\\",\\\"data"
                        "\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\"
                        "\":[\\\"#fh5co-pricing > .fh5co-pricing > .container > div:nth-of-type(2) > .pri"
                        "cing > div:nth-of-type(3) > .price-box.to-animate-2.popular > .price > .currency"
                        "\\\"],\\\"html\\\":\\\"<sup class=\\\\\\\"currency\\\\\\\">$</sup>\\\",\\\"impac"
                        "t\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"cr"
                        "itical\\\",\\\"message\\\":\\\"Unable to determine contrast ratio\\\",\\\"data\\"
                        "\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\""
                        ":[\\\"#fh5co-pricing > .fh5co-pricing > .container > div:nth-of-type(2) > .prici"
                        "ng > div:nth-of-type(3) > .price-box.to-animate-2.popular > .price > small\\\"],"
                        "\\\"html\\\":\\\"<small>/month</small>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\""
                        "id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\"
                        "\"Unable to determine contrast ratio\\\",\\\"data\\\":null,\\\"relatedNodes\\\":"
                        "[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-pricing > .fh5c"
                        "o-pricing > .container > div:nth-of-type(2) > .pricing > div:nth-of-type(3) > .p"
                        "rice-box.to-animate-2.popular > p\\\"],\\\"html\\\":\\\"<p>Far far away, behind "
                        "the word mountains, far from the countries Vokalia and Consonantia, there live t"
                        "he blind texts. </p>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"color-"
                        "contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Unable to deter"
                        "mine contrast ratio\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":"
                        "[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-pricing > .fh5co-pricing > .cont"
                        "ainer > div:nth-of-type(2) > .pricing > div:nth-of-type(4) > .price-box.to-anima"
                        "te-2 > .pricing-plan\\\"],\\\"html\\\":\\\"<h2 class=\\\\\\\"pricing-plan\\\\\\\""
                        ">Unlimited</h2>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"color-contr"
                        "ast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Unable to determine "
                        "contrast ratio\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\"
                        "\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-pricing > .fh5co-pricing > .container"
                        " > div:nth-of-type(2) > .pricing > div:nth-of-type(4) > .price-box.to-animate-2 "
                        "> .price\\\"],\\\"html\\\":\\\"<div class=\\\\\\\"price\\\\\\\"><sup class=\\\\\\"
                        "\"currency\\\\\\\">$</sup>140<small>/month</small></div>\\\",\\\"impact\\\":null"
                        ",\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critical\\\""
                        ",\\\"message\\\":\\\"Unable to determine contrast ratio\\\",\\\"data\\\":null,\\"
                        "\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh"
                        "5co-pric";
long WebSocketSendLen69   = sizeof(WebSocketSend69) - 1;	 

 

char WebSocketSend70[] = "id-18 index-29 total-92 ing > .fh5co-pricing > .container > div:nth-of-type(2) >"
                        " .pricing > div:nth-of-type(4) > .price-box.to-animate-2 > .price > .currency\\\""
                        "],\\\"html\\\":\\\"<sup class=\\\\\\\"currency\\\\\\\">$</sup>\\\",\\\"impact\\\""
                        ":null,\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critica"
                        "l\\\",\\\"message\\\":\\\"Unable to determine contrast ratio\\\",\\\"data\\\":nu"
                        "ll,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\"
                        "\"#fh5co-pricing > .fh5co-pricing > .container > div:nth-of-type(2) > .pricing >"
                        " div:nth-of-type(4) > .price-box.to-animate-2 > .price > small\\\"],\\\"html\\\""
                        ":\\\"<small>/month</small>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\""
                        "color-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Unable to"
                        " determine contrast ratio\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"al"
                        "l\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-pricing > .fh5co-pricing >"
                        " .container > div:nth-of-type(2) > .pricing > div:nth-of-type(4) > .price-box.to"
                        "-animate-2 > p\\\"],\\\"html\\\":\\\"<p>Far far away, behind the word mountains,"
                        " far from the countries Vokalia and Consonantia, there live the blind texts. </p"
                        ">\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"im"
                        "pact\\\":\\\"critical\\\",\\\"message\\\":\\\"Unable to determine contrast ratio"
                        "\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]}"
                        ",{\\\"target\\\":[\\\"#fh5co-pricing > .fh5co-pricing > .container > div:nth-of-"
                        "type(3) > .col-md-6.col-md-offset-3.to-animate > p\\\"],\\\"html\\\":\\\"<p>Far "
                        "far away, behind the word mountains, far from the countries Vokalia and Consonan"
                        "tia, there live the blind texts. <a href=\\\\\\\"#\\\\\\\">Learn More</a></p>\\\""
                        ",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\"
                        "\":\\\"critical\\\",\\\"message\\\":\\\"Unable to determine contrast ratio\\\",\\"
                        "\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"t"
                        "arget\\\":[\\\"#fh5co-pricing > .fh5co-pricing > .container > div:nth-of-type(3)"
                        " > .col-md-6.col-md-offset-3.to-animate > p > a\\\"],\\\"html\\\":\\\"<a href=\\"
                        "\\\\\"#\\\\\\\">Learn More</a>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":"
                        "\\\"color-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Unabl"
                        "e to determine contrast ratio\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\"
                        "\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-services > .fh5co-serv"
                        "ices > .container > div:nth-of-type(1) > .col-md-12.section-heading.text-center "
                        "> .to-animate\\\"],\\\"html\\\":\\\"<h2 class=\\\\\\\"to-animate\\\\\\\">We Offe"
                        "r Services</h2>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"color-contr"
                        "ast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Unable to determine "
                        "contrast ratio\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\"
                        "\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-services > .fh5co-services > .contain"
                        "er > div:nth-of-type(1) > .col-md-12.section-heading.text-center > .row > .col-m"
                        "d-8.col-md-offset-2.subtext > .to-animate\\\"],\\\"html\\\":\\\"<h3 class=\\\\\\"
                        "\"to-animate\\\\\\\">Far far away, behind the word mountains, far from the count"
                        "ries Vokalia and Consonantia, there live the blind texts. Separated they live in"
                        " Bookmarksgrove. </h3>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"colo"
                        "r-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Unable to det"
                        "ermine contrast ratio\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\""
                        ":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-services ";
long WebSocketSendLen70   = sizeof(WebSocketSend70) - 1;	 

 

char WebSocketSend71[] = "id-18 index-30 total-92 > .fh5co-services > .container > div:nth-of-type(2) > di"
                        "v:nth-of-type(1) > div:nth-of-type(1) > .fh5co-post.to-animate > h3\\\"],\\\"htm"
                        "l\\\":\\\"<h3>Hand-crafted with Detailed</h3>\\\",\\\"impact\\\":null,\\\"any\\\""
                        ":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message"
                        "\\\":\\\"Unable to determine contrast ratio\\\",\\\"data\\\":null,\\\"relatedNod"
                        "es\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-services"
                        " > .fh5co-services > .container > div:nth-of-type(2) > div:nth-of-type(1) > div:"
                        "nth-of-type(1) > .fh5co-post.to-animate > p\\\"],\\\"html\\\":\\\"<p>Far far awa"
                        "y, behind the word mountains, far from the countries Vokalia and Consonantia, th"
                        "ere live the blind texts. Separated they live in.</p>\\\",\\\"impact\\\":null,\\"
                        "\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\"
                        "\"message\\\":\\\"Unable to determine contrast ratio\\\",\\\"data\\\":null,\\\"r"
                        "elatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co"
                        "-services > .fh5co-services > .container > div:nth-of-type(2) > div:nth-of-type("
                        "1) > div:nth-of-type(2) > .fh5co-post.to-animate > h3\\\"],\\\"html\\\":\\\"<h3>"
                        "Light and Fast</h3>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"color-c"
                        "ontrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Unable to determ"
                        "ine contrast ratio\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":["
                        "],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-services > .fh5co-services > .con"
                        "tainer > div:nth-of-type(2) > div:nth-of-type(1) > div:nth-of-type(2) > .fh5co-p"
                        "ost.to-animate > p\\\"],\\\"html\\\":\\\"<p>Far far away, behind the word mounta"
                        "ins, far from the countries Vokalia and Consonantia, there live the blind texts."
                        " Separated they live in.</p>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\"
                        "\"color-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Unable "
                        "to determine contrast ratio\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\""
                        "all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-services > .fh5co-servic"
                        "es > .container > div:nth-of-type(2) > div:nth-of-type(2) > div:nth-of-type(1) >"
                        " .fh5co-post.to-animate > h3\\\"],\\\"html\\\":\\\"<h3>Award-winning Landing Pag"
                        "e</h3>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\"
                        "\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Unable to determine contrast r"
                        "atio\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\""
                        ":[]},{\\\"target\\\":[\\\"#fh5co-services > .fh5co-services > .container > div:n"
                        "th-of-type(2) > div:nth-of-type(2) > div:nth-of-type(1) > .fh5co-post.to-animate"
                        " > p\\\"],\\\"html\\\":\\\"<p>Far far away, behind the word mountains, far from "
                        "the countries Vokalia and Consonantia, there live the blind texts. Separated the"
                        "y live in.</p>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"color-contra"
                        "st\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Unable to determine c"
                        "ontrast ratio\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\""
                        "none\\\":[]},{\\\"target\\\":[\\\"#fh5co-services > .fh5co-services > .container"
                        " > div:nth-of-type(2) > div:nth-of-type(2) > div:nth-of-type(2) > .fh5co-post.to"
                        "-animate > h3\\\"],\\\"html\\\":\\\"<h3>Sleek and Smooth Animation</h3>\\\",\\\""
                        "impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\"
                        "\"critical\\\",\\\"message\\\":\\\"Unable to determine contrast ratio\\\",\\\"da"
                        "ta\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"targe"
                        "t\\\":[\\\"#fh5co-se";
long WebSocketSendLen71   = sizeof(WebSocketSend71) - 1;	 

 

char WebSocketSend72[] = "id-18 index-31 total-92 rvices > .fh5co-services > .container > div:nth-of-type("
                        "2) > div:nth-of-type(2) > div:nth-of-type(2) > .fh5co-post.to-animate > p\\\"],\\"
                        "\"html\\\":\\\"<p>Far far away, behind the word mountains, far from the countrie"
                        "s Vokalia and Consonantia, there live the blind texts. Separated they live in.</"
                        "p>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"i"
                        "mpact\\\":\\\"critical\\\",\\\"message\\\":\\\"Unable to determine contrast rati"
                        "o\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]"
                        "},{\\\"target\\\":[\\\"#fh5co-services > .fh5co-services > .container > div:nth-"
                        "of-type(2) > div:nth-of-type(3) > div:nth-of-type(1) > .fh5co-post.to-animate > "
                        "h3\\\"],\\\"html\\\":\\\"<h3>Satisfied &amp; Happy Clients</h3>\\\",\\\"impact\\"
                        "\":null,\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"criti"
                        "cal\\\",\\\"message\\\":\\\"Unable to determine contrast ratio\\\",\\\"data\\\":"
                        "null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":["
                        "\\\"#fh5co-services > .fh5co-services > .container > div:nth-of-type(2) > div:nt"
                        "h-of-type(3) > div:nth-of-type(1) > .fh5co-post.to-animate > p\\\"],\\\"html\\\""
                        ":\\\"<p>Far far away, behind the word mountains, far from the countries Vokalia "
                        "and Consonantia, there live the blind texts. Separated they live in.</p>\\\",\\\""
                        "impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\"
                        "\"critical\\\",\\\"message\\\":\\\"Unable to determine contrast ratio\\\",\\\"da"
                        "ta\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"targe"
                        "t\\\":[\\\"#fh5co-services > .fh5co-services > .container > div:nth-of-type(2) >"
                        " div:nth-of-type(3) > div:nth-of-type(2) > .fh5co-post.to-animate > h3\\\"],\\\""
                        "html\\\":\\\"<h3>Looks Amazing on Devices</h3>\\\",\\\"impact\\\":null,\\\"any\\"
                        "\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"messa"
                        "ge\\\":\\\"Unable to determine contrast ratio\\\",\\\"data\\\":null,\\\"relatedN"
                        "odes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-servic"
                        "es > .fh5co-services > .container > div:nth-of-type(2) > div:nth-of-type(3) > di"
                        "v:nth-of-type(2) > .fh5co-post.to-animate > p\\\"],\\\"html\\\":\\\"<p>Far far a"
                        "way, behind the word mountains, far from the countries Vokalia and Consonantia, "
                        "there live the blind texts. Separated they live in.</p>\\\",\\\"impact\\\":null,"
                        "\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critical\\\","
                        "\\\"message\\\":\\\"Unable to determine contrast ratio\\\",\\\"data\\\":null,\\\""
                        "relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5c"
                        "o-team > .fh5co-team > .container > div:nth-of-type(1) > .col-md-12.section-head"
                        "ing.text-center > .to-animate\\\"],\\\"html\\\":\\\"<h2 class=\\\\\\\"to-animate"
                        "\\\\\\\">Meet The Team</h2>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\""
                        "color-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Unable to"
                        " determine contrast ratio\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"al"
                        "l\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-team > .fh5co-team > .cont"
                        "ainer > div:nth-of-type(1) > .col-md-12.section-heading.text-center > .row > .co"
                        "l-md-8.col-md-offset-2.subtext > .to-animate\\\"],\\\"html\\\":\\\"<h3 class=\\\\"
                        "\\\"to-animate\\\\\\\">Far far away, behind the word mountains, far from the cou"
                        "ntries Vokalia and Consonantia, there live the blind texts. Separated they live "
                        "in Bookmarksgrove. </h3>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\";
long WebSocketSendLen72   = sizeof(WebSocketSend72) - 1;	 

 

char WebSocketSend73[] = "id-18 index-32 total-92 \":\\\"color-contrast\\\",\\\"impact\\\":\\\"critical\\\""
                        ",\\\"message\\\":\\\"Unable to determine contrast ratio\\\",\\\"data\\\":null,\\"
                        "\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh"
                        "5co-team > .fh5co-team > .container > div:nth-of-type(2) > div:nth-of-type(1) > "
                        ".team-box.text-center.to-animate-2 > h3\\\"],\\\"html\\\":\\\"<h3>Roger Garfield"
                        "</h3>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\"
                        "\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Unable to determine contrast r"
                        "atio\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\""
                        ":[]},{\\\"target\\\":[\\\"#fh5co-team > .fh5co-team > .container > div:nth-of-ty"
                        "pe(2) > div:nth-of-type(1) > .team-box.text-center.to-animate-2 > .position\\\"]"
                        ",\\\"html\\\":\\\"<span class=\\\\\\\"position\\\\\\\">Co-Founder, Lead Develope"
                        "r</span>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\""
                        ",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Unable to determine contras"
                        "t ratio\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\"
                        "\":[]},{\\\"target\\\":[\\\"#fh5co-team > .fh5co-team > .container > div:nth-of-"
                        "type(2) > div:nth-of-type(1) > .team-box.text-center.to-animate-2 > p\\\"],\\\"h"
                        "tml\\\":\\\"<p>Far far away, behind the word mountains, far from the countries V"
                        "okalia and Consonantia, there live the blind texts. Separated they live in Bookm"
                        "arksgrove right at the coast of the Semantics, a large language ocean.</p>\\\",\\"
                        "\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\""
                        ":\\\"critical\\\",\\\"message\\\":\\\"Unable to determine contrast ratio\\\",\\\""
                        "data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"tar"
                        "get\\\":[\\\"#fh5co-team > .fh5co-team > .container > div:nth-of-type(2) > div:n"
                        "th-of-type(2) > .team-box.text-center.to-animate-2 > h3\\\"],\\\"html\\\":\\\"<h"
                        "3>Kevin Steve</h3>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"color-co"
                        "ntrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Unable to determi"
                        "ne contrast ratio\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[]"
                        ",\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-team > .fh5co-team > .container > "
                        "div:nth-of-type(2) > div:nth-of-type(2) > .team-box.text-center.to-animate-2 > ."
                        "position\\\"],\\\"html\\\":\\\"<span class=\\\\\\\"position\\\\\\\">Co-Founder, "
                        "Product Designer</span>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"col"
                        "or-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Unable to de"
                        "termine contrast ratio\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\"
                        "\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-team > .fh5co-team > .contain"
                        "er > div:nth-of-type(2) > div:nth-of-type(2) > .team-box.text-center.to-animate-"
                        "2 > p\\\"],\\\"html\\\":\\\"<p>Far far away, behind the word mountains, far from"
                        " the countries Vokalia and Consonantia, there live the blind texts. Separated th"
                        "ey live in Bookmarksgrove right at the coast of the Semantics, a large language "
                        "ocean.</p>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\"
                        "\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Unable to determine contr"
                        "ast ratio\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"non"
                        "e\\\":[]},{\\\"target\\\":[\\\"#fh5co-team > .fh5co-team > .container > div:nth-"
                        "of-type(2) > div:nth-of-type(3) > .team-box.text-center.to-animate-2 > h3\\\"],\\"
                        "\"html\\\":\\\"<h3>Ross Standford</h3>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\""
                        "id\\\":\\\"color-contrast\\\",\\\"impact\\";
long WebSocketSendLen73   = sizeof(WebSocketSend73) - 1;	 

 

char WebSocketSend74[] = "id-18 index-33 total-92 \":\\\"critical\\\",\\\"message\\\":\\\"Unable to determ"
                        "ine contrast ratio\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":["
                        "],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-team > .fh5co-team > .container >"
                        " div:nth-of-type(2) > div:nth-of-type(3) > .team-box.text-center.to-animate-2 > "
                        ".position\\\"],\\\"html\\\":\\\"<span class=\\\\\\\"position\\\\\\\">Full Stack "
                        "Developer</span>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"color-cont"
                        "rast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Unable to determine"
                        " contrast ratio\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\"
                        "\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-team > .fh5co-team > .container > div"
                        ":nth-of-type(2) > div:nth-of-type(3) > .team-box.text-center.to-animate-2 > p\\\""
                        "],\\\"html\\\":\\\"<p>Far far away, behind the word mountains, far from the coun"
                        "tries Vokalia and Consonantia, there live the blind texts. Separated they live i"
                        "n Bookmarksgrove right at the coast of the Semantics, a large language ocean.</p"
                        ">\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"im"
                        "pact\\\":\\\"critical\\\",\\\"message\\\":\\\"Unable to determine contrast ratio"
                        "\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]}"
                        ",{\\\"target\\\":[\\\"#fh5co-faq > .fh5co-faq > .container > div:nth-of-type(1) "
                        "> .col-md-12.section-heading.text-center > .to-animate\\\"],\\\"html\\\":\\\"<h2"
                        " class=\\\\\\\"to-animate\\\\\\\">Common Questions</h2>\\\",\\\"impact\\\":null,"
                        "\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critical\\\","
                        "\\\"message\\\":\\\"Unable to determine contrast ratio\\\",\\\"data\\\":null,\\\""
                        "relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5c"
                        "o-faq > .fh5co-faq > .container > div:nth-of-type(1) > .col-md-12.section-headin"
                        "g.text-center > .row > .col-md-8.col-md-offset-2.subtext > .to-animate\\\"],\\\""
                        "html\\\":\\\"<h3 class=\\\\\\\"to-animate\\\\\\\">Everything you need to know be"
                        "fore you get started</h3>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"c"
                        "olor-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Unable to "
                        "determine contrast ratio\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all"
                        "\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-faq > .fh5co-faq > .contain"
                        "er > div:nth-of-type(2) > div:nth-of-type(1) > div:nth-of-type(1) > h3\\\"],\\\""
                        "html\\\":\\\"<h3>What is Union?</h3>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"i"
                        "d\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\""
                        "Unable to determine contrast ratio\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]"
                        "}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-faq > .fh5co-faq "
                        "> .container > div:nth-of-type(2) > div:nth-of-type(1) > div:nth-of-type(1) > p\\"
                        "\"],\\\"html\\\":\\\"<p>Far far away, behind the word mountains, far from the co"
                        "untries Vokalia and Consonantia, there live the blind texts. Separated they live"
                        " in Bookmarksgrove right at the coast of the Semantics, a large language ocean.<"
                        "/p>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\""
                        "impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Unable to determine contrast rat"
                        "io\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":["
                        "]},{\\\"target\\\":[\\\"#fh5co-faq > .fh5co-faq > .container > div:nth-of-type(2"
                        ") > div:nth-of-type(1) > div:nth-of-type(2) > h3\\\"],\\\"html\\\":\\\"<h3>I hav"
                        "e technical problem, who do I email? </h3>\\\",\\\"impact\\\":null,\\\"any\\\":["
                        "{\\\"id\\\":\\\"color-contrast\\\",\\\"imp";
long WebSocketSendLen74   = sizeof(WebSocketSend74) - 1;	 

 

char WebSocketSend75[] = "id-18 index-34 total-92 act\\\":\\\"critical\\\",\\\"message\\\":\\\"Unable to d"
                        "etermine contrast ratio\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\"
                        "\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-faq > .fh5co-faq > .container"
                        " > div:nth-of-type(2) > div:nth-of-type(1) > div:nth-of-type(2) > p\\\"],\\\"htm"
                        "l\\\":\\\"<p>Far far away, behind the word mountains, far from the countries Vok"
                        "alia and Consonantia, there live the blind texts. Separated they live in Bookmar"
                        "ksgrove right at the coast of the Semantics, a large language ocean.</p>\\\",\\\""
                        "impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\"
                        "\"critical\\\",\\\"message\\\":\\\"Unable to determine contrast ratio\\\",\\\"da"
                        "ta\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"targe"
                        "t\\\":[\\\"#fh5co-faq > .fh5co-faq > .container > div:nth-of-type(2) > div:nth-o"
                        "f-type(1) > div:nth-of-type(3) > h3\\\"],\\\"html\\\":\\\"<h3>How do I use Bato "
                        "features?</h3>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"color-contra"
                        "st\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Unable to determine c"
                        "ontrast ratio\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\""
                        "none\\\":[]},{\\\"target\\\":[\\\"#fh5co-faq > .fh5co-faq > .container > div:nth"
                        "-of-type(2) > div:nth-of-type(1) > div:nth-of-type(3) > p\\\"],\\\"html\\\":\\\""
                        "<p>Far far away, behind the word mountains, far from the countries Vokalia and C"
                        "onsonantia, there live the blind texts. Separated they live in Bookmarksgrove ri"
                        "ght at the coast of the Semantics, a large language ocean.</p>\\\",\\\"impact\\\""
                        ":null,\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critica"
                        "l\\\",\\\"message\\\":\\\"Unable to determine contrast ratio\\\",\\\"data\\\":nu"
                        "ll,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\"
                        "\"#fh5co-faq > .fh5co-faq > .container > div:nth-of-type(2) > div:nth-of-type(2)"
                        " > div:nth-of-type(1) > h3\\\"],\\\"html\\\":\\\"<h3>What language are available"
                        "?</h3>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\"
                        "\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Unable to determine contrast r"
                        "atio\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\""
                        ":[]},{\\\"target\\\":[\\\"#fh5co-faq > .fh5co-faq > .container > div:nth-of-type"
                        "(2) > div:nth-of-type(2) > div:nth-of-type(1) > p\\\"],\\\"html\\\":\\\"<p>Far f"
                        "ar away, behind the word mountains, far from the countries Vokalia and Consonant"
                        "ia, there live the blind texts. Separated they live in Bookmarksgrove right at t"
                        "he coast of the Semantics, a large language ocean.</p>\\\",\\\"impact\\\":null,\\"
                        "\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\"
                        "\"message\\\":\\\"Unable to determine contrast ratio\\\",\\\"data\\\":null,\\\"r"
                        "elatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co"
                        "-faq > .fh5co-faq > .container > div:nth-of-type(2) > div:nth-of-type(2) > div:n"
                        "th-of-type(2) > h3\\\"],\\\"html\\\":\\\"<h3>Can I have a username that is alrea"
                        "dy taken?</h3>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"color-contra"
                        "st\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Unable to determine c"
                        "ontrast ratio\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\""
                        "none\\\":[]},{\\\"target\\\":[\\\"#fh5co-faq > .fh5co-faq > .container > div:nth"
                        "-of-type(2) > div:nth-of-type(2) > div:nth-of-type(2) > p\\\"],\\\"html\\\":\\\""
                        "<p>Far far away, behind the word mountains, far from the countries Vokalia a";
long WebSocketSendLen75   = sizeof(WebSocketSend75) - 1;	 

 

char WebSocketSend76[] = "id-18 index-35 total-92 nd Consonantia, there live the blind texts. Separated th"
                        "ey live in Bookmarksgrove right at the coast of the Semantics, a large language "
                        "ocean.</p>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\"
                        "\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Unable to determine contr"
                        "ast ratio\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"non"
                        "e\\\":[]},{\\\"target\\\":[\\\"#fh5co-faq > .fh5co-faq > .container > div:nth-of"
                        "-type(2) > div:nth-of-type(2) > div:nth-of-type(3) > h3\\\"],\\\"html\\\":\\\"<h"
                        "3>Is Union free?</h3>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"color"
                        "-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Unable to dete"
                        "rmine contrast ratio\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\""
                        ":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-faq > .fh5co-faq > .container >"
                        " div:nth-of-type(2) > div:nth-of-type(2) > div:nth-of-type(3) > p\\\"],\\\"html\\"
                        "\":\\\"<p>Far far away, behind the word mountains, far from the countries Vokali"
                        "a and Consonantia, there live the blind texts. Separated they live in Bookmarksg"
                        "rove right at the coast of the Semantics, a large language ocean.</p>\\\",\\\"im"
                        "pact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\""
                        "critical\\\",\\\"message\\\":\\\"Unable to determine contrast ratio\\\",\\\"data"
                        "\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\"
                        "\":[\\\"#fh5co-trusted > .fh5co-trusted > .container > div:nth-of-type(1) > .col"
                        "-md-12.section-heading.text-center > .to-animate\\\"],\\\"html\\\":\\\"<h2 class"
                        "=\\\\\\\"to-animate\\\\\\\">Trusted By</h2>\\\",\\\"impact\\\":null,\\\"any\\\":"
                        "[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\"
                        "\":\\\"Unable to determine contrast ratio\\\",\\\"data\\\":null,\\\"relatedNodes"
                        "\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-trusted > "
                        ".fh5co-trusted > .container > div:nth-of-type(1) > .col-md-12.section-heading.te"
                        "xt-center > .row > .col-md-8.col-md-offset-2.subtext > .to-animate\\\"],\\\"html"
                        "\\\":\\\"<h3 class=\\\\\\\"to-animate\\\\\\\">We"
                        "\xe2\x80\x99"
                        "re trusted by these popular companies</h3>\\\",\\\"impact\\\":null,\\\"any\\\":["
                        "{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\"
                        "\":\\\"Unable to determine contrast ratio\\\",\\\"data\\\":null,\\\"relatedNodes"
                        "\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#form1 > .getting"
                        "-started.getting-started-2 > .container > .row > .col-md-6.to-animate > h3\\\"],"
                        "\\\"html\\\":\\\"<h3>Getting Started</h3>\\\",\\\"impact\\\":null,\\\"any\\\":[{"
                        "\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\""
                        ":\\\"Unable to determine contrast ratio\\\",\\\"data\\\":null,\\\"relatedNodes\\"
                        "\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#form1 > .getting-s"
                        "tarted.getting-started-2 > .container > .row > .col-md-6.to-animate > p\\\"],\\\""
                        "html\\\":\\\"<p>Far far away, behind the word mountains, far from the countries "
                        "Vokalia and Consonantia, there live the blind texts. </p>\\\",\\\"impact\\\":nul"
                        "l,\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critical\\\""
                        ",\\\"message\\\":\\\"Unable to determine contrast ratio\\\",\\\"data\\\":null,\\"
                        "\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh"
                        "5co-footer > .container > .row > div:nth-of-type(1) > .section-title\\\"],\\\"ht"
                        "ml\\\":\\\"<h3 class=\\\\\\\"section-title\\\\\\\">About Us</h3>\\\",\\\"impact\\"
                        "\":null,\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"criti"
                        "cal\\\",\\\"message";
long WebSocketSendLen76   = sizeof(WebSocketSend76) - 1;	 

 

char WebSocketSend77[] = "id-18 index-36 total-92 \\\":\\\"Unable to determine contrast ratio\\\",\\\"data"
                        "\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\"
                        "\":[\\\"#fh5co-footer > .container > .row > div:nth-of-type(1) > p:nth-of-type(1"
                        ")\\\"],\\\"html\\\":\\\"<p>Far far away, behind the word mountains, far from the"
                        " countries Vokalia and Consonantia, there live the blind texts. Separated they l"
                        "ive in Bookmarksgrove right at the coast of the Semantics.</p>\\\",\\\"impact\\\""
                        ":null,\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critica"
                        "l\\\",\\\"message\\\":\\\"Unable to determine contrast ratio\\\",\\\"data\\\":nu"
                        "ll,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\"
                        "\"#fh5co-footer > .container > .row > div:nth-of-type(1) > .copy-right\\\"],\\\""
                        "html\\\":\\\"<p class=\\\\\\\"copy-right\\\\\\\">\\\",\\\"impact\\\":null,\\\"an"
                        "y\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"me"
                        "ssage\\\":\\\"Unable to determine contrast ratio\\\",\\\"data\\\":null,\\\"relat"
                        "edNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-foo"
                        "ter > .container > .row > div:nth-of-type(1) > .copy-right > a:nth-of-type(1)\\\""
                        "],\\\"html\\\":\\\"<a href=\\\\\\\"http://freehtml5.co/\\\\\\\" target=\\\\\\\"_"
                        "blank\\\\\\\">FREEHTML5.co</a>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":"
                        "\\\"color-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Unabl"
                        "e to determine contrast ratio\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\"
                        "\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-footer > .container > "
                        ".row > div:nth-of-type(1) > .copy-right > a:nth-of-type(2)\\\"],\\\"html\\\":\\\""
                        "<a href=\\\\\\\"http://unsplash.com/\\\\\\\" target=\\\\\\\"_blank\\\\\\\">Unspl"
                        "ash</a>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\","
                        "\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Unable to determine contrast"
                        " ratio\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\"
                        "\":[]},{\\\"target\\\":[\\\"#fh5co-footer > .container > .row > div:nth-of-type("
                        "1) > .copy-right > a:nth-of-type(3)\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"https:"
                        "//dribbble.com/tibi_neamu\\\\\\\" target=\\\\\\\"_blank\\\\\\\">Tiberiu</a>\\\","
                        "\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\"
                        "\":\\\"critical\\\",\\\"message\\\":\\\"Unable to determine contrast ratio\\\",\\"
                        "\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"t"
                        "arget\\\":[\\\"#fh5co-footer > .container > .row > div:nth-of-type(2) > h3:nth-o"
                        "f-type(1)\\\"],\\\"html\\\":\\\"<h3 class=\\\\\\\"section-title\\\\\\\">Our Addr"
                        "ess</h3>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\""
                        ",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Unable to determine contras"
                        "t ratio\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\"
                        "\":[]},{\\\"target\\\":[\\\"#fh5co-footer > .container > .row > div:nth-of-type("
                        "2) > .contact-info > li:nth-of-type(1)\\\"],\\\"html\\\":\\\"<li><i class=\\\\\\"
                        "\"icon-map-marker\\\\\\\"></i>198 West 21th Street, Suite 721 New York NY 10016<"
                        "/li>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\""
                        "impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Unable to determine contrast rat"
                        "io\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":["
                        "]},{\\\"target\\\":[\\\"#fh5co-footer > .container > .row > div:nth-of-type(2) >"
                        " .contact-info > li:nth-of-type(2)\\\"],\\\"html\\\":\\\"<li><i class=\\\\\\\"ic"
                        "on-phone\\\\\\\"></i>+ 1235 2355 98</li>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\"
                        "\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":"
                        "\\\"";
long WebSocketSendLen77   = sizeof(WebSocketSend77) - 1;	 

 

char WebSocketSend78[] = "id-18 index-37 total-92 Unable to determine contrast ratio\\\",\\\"data\\\":null"
                        ",\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\""
                        "#fh5co-footer > .container > .row > div:nth-of-type(2) > .contact-info > li:nth-"
                        "of-type(3) > a\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\">info@yoursite.com"
                        "</a>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\""
                        "impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Unable to determine contrast rat"
                        "io\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":["
                        "]},{\\\"target\\\":[\\\"#fh5co-footer > .container > .row > div:nth-of-type(2) >"
                        " .contact-info > li:nth-of-type(4) > a\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\"
                        "\\\\\">www.yoursite.com</a>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\""
                        "color-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Unable to"
                        " determine contrast ratio\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"al"
                        "l\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-footer > .container > .row"
                        " > div:nth-of-type(2) > h3:nth-of-type(2)\\\"],\\\"html\\\":\\\"<h3 class=\\\\\\"
                        "\"section-title\\\\\\\">Connect with Us</h3>\\\",\\\"impact\\\":null,\\\"any\\\""
                        ":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message"
                        "\\\":\\\"Unable to determine contrast ratio\\\",\\\"data\\\":null,\\\"relatedNod"
                        "es\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-footer >"
                        " .container > .row > div:nth-of-type(3) > .section-title\\\"],\\\"html\\\":\\\"<"
                        "h3 class=\\\\\\\"section-title\\\\\\\">Drop us a line</h3>\\\",\\\"impact\\\":nu"
                        "ll,\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critical\\"
                        "\",\\\"message\\\":\\\"Unable to determine contrast ratio\\\",\\\"data\\\":null,"
                        "\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#"
                        "name\\\"],\\\"html\\\":\\\"<input type=\\\\\\\"name\\\\\\\" class=\\\\\\\"form-c"
                        "ontrol\\\\\\\" id=\\\\\\\"name\\\\\\\" placeholder=\\\\\\\"Name\\\\\\\">\\\",\\\""
                        "impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\"
                        "\"critical\\\",\\\"message\\\":\\\"Element has sufficient color contrast of 7.46"
                        "\\\",\\\"data\\\":{\\\"fgColor\\\":\\\"#555555\\\",\\\"bgColor\\\":\\\"#ffffff\\"
                        "\",\\\"contrastRatio\\\":\\\"7.46\\\",\\\"fontSize\\\":\\\"10.5pt\\\",\\\"fontWe"
                        "ight\\\":\\\"normal\\\"},\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":["
                        "]},{\\\"target\\\":[\\\"#email\\\"],\\\"html\\\":\\\"<input type=\\\\\\\"email\\"
                        "\\\\\" class=\\\\\\\"form-control\\\\\\\" id=\\\\\\\"email\\\\\\\" placeholder=\\"
                        "\\\\\"Email\\\\\\\">\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"color-"
                        "contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Element has suf"
                        "ficient color contrast of 7.46\\\",\\\"data\\\":{\\\"fgColor\\\":\\\"#555555\\\""
                        ",\\\"bgColor\\\":\\\"#ffffff\\\",\\\"contrastRatio\\\":\\\"7.46\\\",\\\"fontSize"
                        "\\\":\\\"10.5pt\\\",\\\"fontWeight\\\":\\\"normal\\\"},\\\"relatedNodes\\\":[]}]"
                        ",\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#message\\\"],\\\"html\\\""
                        ":\\\"<textarea class=\\\\\\\"form-control\\\\\\\" id=\\\\\\\"message\\\\\\\" row"
                        "s=\\\\\\\"7\\\\\\\" placeholder=\\\\\\\"Message\\\\\\\"></textarea>\\\",\\\"impa"
                        "ct\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"c"
                        "ritical\\\",\\\"message\\\":\\\"Element has sufficient color contrast of 7.46\\\""
                        ",\\\"data\\\":{\\\"fgColor\\\":\\\"#555555\\\",\\\"bgColor\\\":\\\"#ffffff\\\",\\"
                        "\"contrastRatio\\\":\\\"7.46\\\",\\\"fontSize\\\":\\\"10.5pt\\\",\\\"fontWeight\\"
                        "\":\\\"normal\\\"},\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\"
                        "\"target\\\":[\\\"#map > div > .gm-style > div:nth-of-type(1) > .gm-style-pbc > "
                        ".gm-style-pbt\\\"],\\\"html\\\":\\\"<p class=\\\\\\\"gm-style-pbt\\\\\\\">Use tw"
                        "o fingers to move the map</p>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\"";
long WebSocketSendLen78   = sizeof(WebSocketSend78) - 1;	 

 

char WebSocketSend79[] = "id-18 index-38 total-92 :\\\"color-contrast\\\",\\\"impact\\\":\\\"critical\\\","
                        "\\\"message\\\":\\\"Unable to determine contrast ratio\\\",\\\"data\\\":null,\\\""
                        "relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#map "
                        "> div > .gm-style > div:nth-of-type(4) > .gm-style-cc > div:nth-of-type(2) > spa"
                        "n\\\"],\\\"html\\\":\\\"<span>Map data "
                        "\xc2\xa9"
                        "2017 Google</span>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"color-co"
                        "ntrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Unable to determi"
                        "ne contrast ratio\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[]"
                        ",\\\"none\\\":[]},{\\\"target\\\":[\\\"#map > div > .gm-style > .gmnoprint.gm-st"
                        "yle-cc > div:nth-of-type(2) > a\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"https://ww"
                        "w.google.com/intl/en-US_US/help/terms_maps.html\\\\\\\" target=\\\\\\\"_blank\\\\"
                        "\\\" style=\\\\\\\"text-decoration: none; cursor: pointer; color: rgb(68, 68, 68"
                        ");\\\\\\\">Terms of Use</a>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\""
                        "color-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Unable to"
                        " determine contrast ratio\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"al"
                        "l\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#map > div > .gm-style > div:nth-"
                        "of-type(10) > div:nth-of-type(1) > div:nth-of-type(1)\\\"],\\\"html\\\":\\\"<div"
                        " draggable=\\\\\\\"false\\\\\\\" title=\\\\\\\"Show street map\\\\\\\" style=\\\\"
                        "\\\"direction: ltr; overflow: hidden; text-align: center; position: relative; co"
                        "lor: rgb(0, 0, 0); font-family: Roboto, Arial, sans-serif; user-select: none; fo"
                        "nt-size: 11px; background-color: rgb(255, 255, 255); padding: 11px; border-botto"
                        "m-left-radius: 2px; border-top-left-radius: 2px; -webkit-background-clip: paddin"
                        "g-box; background-clip: padding-box; box-shadow: rgba(0, 0, 0, 0.298039) 0px 1px"
                        " 4px -1px; min-width: 22px; font-weight: 500;\\\\\\\">\\\",\\\"impact\\\":null,\\"
                        "\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\"
                        "\"message\\\":\\\"Element has sufficient color contrast of 21.00\\\",\\\"data\\\""
                        ":{\\\"fgColor\\\":\\\"#000000\\\",\\\"bgColor\\\":\\\"#ffffff\\\",\\\"contrastRa"
                        "tio\\\":\\\"21.00\\\",\\\"fontSize\\\":\\\"8.3pt\\\",\\\"fontWeight\\\":\\\"norm"
                        "al\\\"},\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\""
                        ":[\\\"#map > div > .gm-style > div:nth-of-type(10) > div:nth-of-type(2) > div:nt"
                        "h-of-type(1)\\\"],\\\"html\\\":\\\"<div draggable=\\\\\\\"false\\\\\\\" title=\\"
                        "\\\\\"Show satellite imagery\\\\\\\" style=\\\\\\\"direction: ltr; overflow: hid"
                        "den; text-align: center; position: relative; color: rgb(86, 86, 86); font-family"
                        ": Roboto, Arial, sans-serif; user-select: none; font-size: 11px; background-colo"
                        "r: rgb(255, 255, 255); padding: 11px; border-bottom-right-radius: 2px; border-to"
                        "p-right-radius: 2px; -webkit-background-clip: padding-box; background-clip: padd"
                        "ing-box; box-shadow: rgba(0, 0, 0, 0.298039) 0px 1px 4px -1px; border-left: 0px;"
                        " min-width: 40px;\\\\\\\">\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\""
                        "color-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Element h"
                        "as sufficient color contrast of 7.34\\\",\\\"data\\\":{\\\"fgColor\\\":\\\"#5656"
                        "56\\\",\\\"bgColor\\\":\\\"#ffffff\\\",\\\"contrastRatio\\\":\\\"7.34\\\",\\\"fo"
                        "ntSize\\\":\\\"8.3pt\\\",\\\"fontWeight\\\":\\\"normal\\\"},\\\"relatedNodes\\\""
                        ":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-home > .contai"
                        "ner > .text-wrap > .text-inner > .row > .col-md-8.col-md-offset-2 > h1\\\"],\\\""
                        "html\\\":\\\"<h1 class=\\\\\\\"to-animate\\\\\\\" style=\\\\\\\"font-size: larg";
long WebSocketSendLen79   = sizeof(WebSocketSend79) - 1;	 

 

char WebSocketSend80[] = "id-18 index-39 total-92 e; font-weight: bolder; font-family: 'Kristen ITC'; colo"
                        "r: #000000; text-align: center;\\\\\\\">Mahesh Babu (born Mahesh Ghattamaneni on"
                        " 9 August 1975) is an Indian actor, producer, media personality, and philanthrop"
                        "ist known for his works in Telugu cinema.</h1>\\\",\\\"impact\\\":null,\\\"any\\"
                        "\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"messa"
                        "ge\\\":\\\"Unable to determine contrast ratio\\\",\\\"data\\\":null,\\\"relatedN"
                        "odes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-home >"
                        " .container > .text-wrap > .text-inner > .row > .col-md-8.col-md-offset-2 > h2:n"
                        "th-of-type(1)\\\"],\\\"html\\\":\\\"<h2 class=\\\\\\\"to-animate\\\\\\\"> Mahesh"
                        " Babu Is A Perfectionist - sukumar</h2>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\"
                        "\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":"
                        "\\\"Unable to determine contrast ratio\\\",\\\"data\\\":null,\\\"relatedNodes\\\""
                        ":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-home > .contai"
                        "ner > .text-wrap > .text-inner > .row > .col-md-8.col-md-offset-2 > h2:nth-of-ty"
                        "pe(2)\\\"],\\\"html\\\":\\\"<h2 class=\\\\\\\"to-animate\\\\\\\"> Mahesh Babu Is"
                        " One Of The Best Actor In India - Ram Gopal Varma</h2>\\\",\\\"impact\\\":null,\\"
                        "\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\"
                        "\"message\\\":\\\"Unable to determine contrast ratio\\\",\\\"data\\\":null,\\\"r"
                        "elatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co"
                        "-home > .container > .text-wrap > .text-inner > .row > .col-md-8.col-md-offset-2"
                        " > h2:nth-of-type(3)\\\"],\\\"html\\\":\\\"<h2 class=\\\\\\\"to-animate\\\\\\\">"
                        " Mahesh Babu Is An Addiction - Puri Jagannnath</h2>\\\",\\\"impact\\\":null,\\\""
                        "any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\""
                        "message\\\":\\\"Unable to determine contrast ratio\\\",\\\"data\\\":null,\\\"rel"
                        "atedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-h"
                        "ome > .container > .text-wrap > .text-inner > .row > .col-md-8.col-md-offset-2 >"
                        " h2:nth-of-type(4)\\\"],\\\"html\\\":\\\"<h2 class=\\\\\\\"to-animate\\\\\\\"> M"
                        "ahesh Babu Has A Very Great Screen Presence - Shankar </h2>\\\",\\\"impact\\\":n"
                        "ull,\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critical\\"
                        "\",\\\"message\\\":\\\"Unable to determine contrast ratio\\\",\\\"data\\\":null,"
                        "\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#"
                        "fh5co-home > .container > .text-wrap > .text-inner > .row > .col-md-8.col-md-off"
                        "set-2 > h2:nth-of-type(5)\\\"],\\\"html\\\":\\\"<h2 class=\\\\\\\"to-animate\\\\"
                        "\\\"> Mahesh Babu Is My favourite Actor <br> Movies May Fail But Mahesh Never Fa"
                        "ils - Trivikram Srinivas</h2>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\"
                        "\"color-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Unable "
                        "to determine contrast ratio\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\""
                        "all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"body > bl > blbar > blbutton:nt"
                        "h-of-type(1)\\\"],\\\"html\\\":\\\"<blbutton title=\\\\\\\"Use CTRL+ALT+D to ena"
                        "ble Design Mode\\\\\\\">Design</blbutton>\\\",\\\"impact\\\":null,\\\"any\\\":[{"
                        "\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\""
                        ":\\\"Element has sufficient color contrast of 14.73\\\",\\\"data\\\":{\\\"fgColo"
                        "r\\\":\\\"#000000\\\",\\\"bgColor\\\":\\\"#d8d8d8\\\",\\\"contrastRatio\\\":\\\""
                        "14.73\\\",\\\"fontSize\\\":\\\"9.8pt\\\",\\\"fontWeight\\\":\\\"normal\\\"},\\\""
                        "relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"body "
                        "> bl > blbar > blbutton";
long WebSocketSendLen80   = sizeof(WebSocketSend80) - 1;	 

 

char WebSocketSend81[] = "id-18 index-40 total-92 :nth-of-type(2)\\\"],\\\"html\\\":\\\"<blbutton title=\\"
                        "\\\\\"Use CTRL+ALT+I to enable Inspect Mode\\\\\\\">Inspect</blbutton>\\\",\\\"i"
                        "mpact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\"
                        "\"critical\\\",\\\"message\\\":\\\"Element has sufficient color contrast of 14.7"
                        "3\\\",\\\"data\\\":{\\\"fgColor\\\":\\\"#000000\\\",\\\"bgColor\\\":\\\"#d8d8d8\\"
                        "\",\\\"contrastRatio\\\":\\\"14.73\\\",\\\"fontSize\\\":\\\"9.8pt\\\",\\\"fontWe"
                        "ight\\\":\\\"normal\\\"},\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":["
                        "]},{\\\"target\\\":[\\\"body > bl > blbar > blbutton:nth-of-type(3)\\\"],\\\"htm"
                        "l\\\":\\\"<blbutton title=\\\\\\\"Use CTRL+ALT+T to sync the current CSS changes"
                        " into Visual Studio\\\\\\\">Save F12 changes</blbutton>\\\",\\\"impact\\\":null,"
                        "\\\"any\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critical\\\","
                        "\\\"message\\\":\\\"Element has sufficient color contrast of 14.73\\\",\\\"data\\"
                        "\":{\\\"fgColor\\\":\\\"#000000\\\",\\\"bgColor\\\":\\\"#d8d8d8\\\",\\\"contrast"
                        "Ratio\\\":\\\"14.73\\\",\\\"fontSize\\\":\\\"9.8pt\\\",\\\"fontWeight\\\":\\\"no"
                        "rmal\\\"},\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\"
                        "\":[\\\"body > bl > blbar > blcheckbox:nth-of-type(1) > label\\\"],\\\"html\\\":"
                        "\\\"<label title=\\\\\\\"Use CTRL+ALT+U to continuously sync CSS changes into Vi"
                        "sual Studio\\\\\\\" for=\\\\\\\"_0_9008633488402071\\\\\\\" style=\\\\\\\"font-w"
                        "eight: normal;\\\\\\\">F12 auto-sync<input type=\\\\\\\"checkbox\\\\\\\" title=\\"
                        "\\\\\"Use CTRL+ALT+U to continuously sync CSS changes into Visual Studio\\\\\\\""
                        " id=\\\\\\\"_0_9008633488402071\\\\\\\"></label>\\\",\\\"impact\\\":null,\\\"any"
                        "\\\":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"mes"
                        "sage\\\":\\\"Element has sufficient color contrast of 14.73\\\",\\\"data\\\":{\\"
                        "\"fgColor\\\":\\\"#000000\\\",\\\"bgColor\\\":\\\"#d8d8d8\\\",\\\"contrastRatio\\"
                        "\":\\\"14.73\\\",\\\"fontSize\\\":\\\"9.8pt\\\",\\\"fontWeight\\\":\\\"normal\\\""
                        "},\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\""
                        "body > bl > blbar > blcheckbox:nth-of-type(2) > label\\\"],\\\"html\\\":\\\"<lab"
                        "el title=\\\\\\\"This will auto-hide this menu. Click the CTRL key to make it vi"
                        "sible\\\\\\\" for=\\\\\\\"_0_005383016530676077\\\\\\\" style=\\\\\\\"font-weigh"
                        "t: normal;\\\\\\\">Auto-hide<input type=\\\\\\\"checkbox\\\\\\\" title=\\\\\\\"T"
                        "his will auto-hide this menu. Click the CTRL key to make it visible\\\\\\\" id=\\"
                        "\\\\\"_0_005383016530676077\\\\\\\"></label>\\\",\\\"impact\\\":null,\\\"any\\\""
                        ":[{\\\"id\\\":\\\"color-contrast\\\",\\\"impact\\\":\\\"critical\\\",\\\"message"
                        "\\\":\\\"Element has sufficient color contrast of 14.73\\\",\\\"data\\\":{\\\"fg"
                        "Color\\\":\\\"#000000\\\",\\\"bgColor\\\":\\\"#d8d8d8\\\",\\\"contrastRatio\\\":"
                        "\\\"14.73\\\",\\\"fontSize\\\":\\\"9.8pt\\\",\\\"fontWeight\\\":\\\"normal\\\"},"
                        "\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]}]},{\\\"id\\\":\\\"docu"
                        "ment-title\\\",\\\"description\\\":\\\"Ensures each HTML document contains a non"
                        "-empty <title> element\\\",\\\"help\\\":\\\"Documents must have <title> element "
                        "to aid in navigation\\\",\\\"helpUrl\\\":\\\"https://dequeuniversity.com/rules/a"
                        "xe/2.0/document-title?application=axeAPI\\\",\\\"impact\\\":null,\\\"tags\\\":[\\"
                        "\"wcag2a\\\",\\\"wcag242\\\"],\\\"nodes\\\":[{\\\"target\\\":[\\\".js.flexbox.ca"
                        "nvas.canvastext.webgl.touch.geolocation.postmessage.websqldatabase.indexeddb.has"
                        "hchange.history.draganddrop.websockets.rgba.hsla.multiplebgs.backgroundsize.bord"
                        "erimage.borderradius.boxshadow.textshadow.opacity.cssanimations.csscolumns.cssgr"
                        "adients.cssreflections.csstransforms.csstransforms3d.csstransitions";
long WebSocketSendLen81   = sizeof(WebSocketSend81) - 1;	 

 

char WebSocketSend82[] = "id-18 index-41 total-92 .fontface.no-generatedcontent.video.audio.localstorage.s"
                        "essionstorage.webworkers.applicationcache.svg.inlinesvg.smil.svgclippaths\\\"],\\"
                        "\"html\\\":\\\"<html xmlns=\\\\\\\"http://www.w3.org/1999/xhtml\\\\\\\" class=\\"
                        "\\\\\" js flexbox canvas canvastext webgl touch geolocation postmessage websqlda"
                        "tabase indexeddb hashchange history draganddrop websockets rgba hsla multiplebgs"
                        " backgroundsize borderimage borderradius boxshadow textshadow opacity cssanimati"
                        "ons csscolumns cssgradients cssreflections csstransforms csstransforms3d csstran"
                        "sitions fontface no-generatedcontent video audio localstorage sessionstorage web"
                        "workers applicationcache svg inlinesvg smil svgclippaths\\\\\\\" style=\\\\\\\"\\"
                        "\\\\\">\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"doc-has-title\\\",\\"
                        "\"impact\\\":\\\"moderate\\\",\\\"message\\\":\\\"Document has a non-empty <titl"
                        "e> element\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"no"
                        "ne\\\":[]}]},{\\\"id\\\":\\\"duplicate-id\\\",\\\"description\\\":\\\"Ensures ev"
                        "ery id attribute value is unique\\\",\\\"help\\\":\\\"id attribute value must be"
                        " unique\\\",\\\"helpUrl\\\":\\\"https://dequeuniversity.com/rules/axe/2.0/duplic"
                        "ate-id?application=axeAPI\\\",\\\"impact\\\":null,\\\"tags\\\":[\\\"wcag2a\\\",\\"
                        "\"wcag411\\\"],\\\"nodes\\\":[{\\\"target\\\":[\\\"#form1\\\"],\\\"html\\\":\\\""
                        "<form method=\\\\\\\"post\\\\\\\" action=\\\\\\\"./\\\\\\\" id=\\\\\\\"form1\\\\"
                        "\\\">\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"duplicate-id\\\",\\\""
                        "impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Document has no elements that sh"
                        "are the same id attribute\\\",\\\"data\\\":\\\"form1\\\",\\\"relatedNodes\\\":[]"
                        "}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#__VIEWSTATE\\\"],\\\"ht"
                        "ml\\\":\\\"<input type=\\\\\\\"hidden\\\\\\\" name=\\\\\\\"__VIEWSTATE\\\\\\\" i"
                        "d=\\\\\\\"__VIEWSTATE\\\\\\\" value=\\\\\\\"Fcq/rtFyRyZ8HT1iZNMUyIYDST+6I7cqNQ9x"
                        "7EPIlMnZyk/+WVznhG1i2HH172TZA3FCDQswbzB1FGQ141oEc12STao0g+UWHeKq6YBm5WI=\\\\\\\""
                        ">\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"duplicate-id\\\",\\\"impa"
                        "ct\\\":\\\"critical\\\",\\\"message\\\":\\\"Document has no elements that share "
                        "the same id attribute\\\",\\\"data\\\":\\\"__VIEWSTATE\\\",\\\"relatedNodes\\\":"
                        "[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-header\\\"],\\\""
                        "html\\\":\\\"<header role=\\\\\\\"banner\\\\\\\" id=\\\\\\\"fh5co-header\\\\\\\""
                        ">\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"duplicate-id\\\",\\\"impa"
                        "ct\\\":\\\"critical\\\",\\\"message\\\":\\\"Document has no elements that share "
                        "the same id attribute\\\",\\\"data\\\":\\\"fh5co-header\\\",\\\"relatedNodes\\\""
                        ":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#navbar\\\"],\\\"html"
                        "\\\":\\\"<div id=\\\\\\\"navbar\\\\\\\" class=\\\\\\\"navbar-collapse collapse\\"
                        "\\\\\">\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"duplicate-id\\\",\\"
                        "\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Document has no elements that "
                        "share the same id attribute\\\",\\\"data\\\":\\\"navbar\\\",\\\"relatedNodes\\\""
                        ":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-testimony\\\"]"
                        ",\\\"html\\\":\\\"<section id=\\\\\\\"fh5co-testimony\\\\\\\" data-section=\\\\\\"
                        "\"testimony\\\\\\\" class=\\\\\\\"animated\\\\\\\">\\\",\\\"impact\\\":null,\\\""
                        "any\\\":[{\\\"id\\\":\\\"duplicate-id\\\",\\\"impact\\\":\\\"critical\\\",\\\"me"
                        "ssage\\\":\\\"Document has no elements that share the same id attribute\\\",\\\""
                        "data\\\":\\\"fh5co-testimony\\\",\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"no"
                        "ne\\\":[]},{\\\"target\\\":[\\\"#fh5co-pricing\\\"],\\\"html\\\":\\\"<section id"
                        "=\\\\\\\"fh5co-pricing\\\\\\\" data-section=\\\\\\\"pricing\\\\\\\">\\\",\\\"imp"
                        "act\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"";
long WebSocketSendLen82   = sizeof(WebSocketSend82) - 1;	 

 

char WebSocketSend83[] = "id-18 index-42 total-92 duplicate-id\\\",\\\"impact\\\":\\\"critical\\\",\\\"mes"
                        "sage\\\":\\\"Document has no elements that share the same id attribute\\\",\\\"d"
                        "ata\\\":\\\"fh5co-pricing\\\",\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\"
                        "\":[]},{\\\"target\\\":[\\\"#fh5co-services\\\"],\\\"html\\\":\\\"<section id=\\"
                        "\\\\\"fh5co-services\\\\\\\" data-section=\\\\\\\"services\\\\\\\">\\\",\\\"impa"
                        "ct\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"duplicate-id\\\",\\\"impact\\\":\\\"cri"
                        "tical\\\",\\\"message\\\":\\\"Document has no elements that share the same id at"
                        "tribute\\\",\\\"data\\\":\\\"fh5co-services\\\",\\\"relatedNodes\\\":[]}],\\\"al"
                        "l\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-team\\\"],\\\"html\\\":\\\""
                        "<section id=\\\\\\\"fh5co-team\\\\\\\" data-section=\\\\\\\"team\\\\\\\">\\\",\\"
                        "\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"duplicate-id\\\",\\\"impact\\\":\\"
                        "\"critical\\\",\\\"message\\\":\\\"Document has no elements that share the same "
                        "id attribute\\\",\\\"data\\\":\\\"fh5co-team\\\",\\\"relatedNodes\\\":[]}],\\\"a"
                        "ll\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-faq\\\"],\\\"html\\\":\\\""
                        "<section id=\\\\\\\"fh5co-faq\\\\\\\" data-section=\\\\\\\"faq\\\\\\\">\\\",\\\""
                        "impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"duplicate-id\\\",\\\"impact\\\":\\\""
                        "critical\\\",\\\"message\\\":\\\"Document has no elements that share the same id"
                        " attribute\\\",\\\"data\\\":\\\"fh5co-faq\\\",\\\"relatedNodes\\\":[]}],\\\"all\\"
                        "\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-trusted\\\"],\\\"html\\\":\\\""
                        "<section id=\\\\\\\"fh5co-trusted\\\\\\\" data-section=\\\\\\\"trusted\\\\\\\">\\"
                        "\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"duplicate-id\\\",\\\"impact\\"
                        "\":\\\"critical\\\",\\\"message\\\":\\\"Document has no elements that share the "
                        "same id attribute\\\",\\\"data\\\":\\\"fh5co-trusted\\\",\\\"relatedNodes\\\":[]"
                        "}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-footer\\\"],\\\"h"
                        "tml\\\":\\\"<div id=\\\\\\\"fh5co-footer\\\\\\\" role=\\\\\\\"contentinfo\\\\\\\""
                        ">\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"duplicate-id\\\",\\\"impa"
                        "ct\\\":\\\"critical\\\",\\\"message\\\":\\\"Document has no elements that share "
                        "the same id attribute\\\",\\\"data\\\":\\\"fh5co-footer\\\",\\\"relatedNodes\\\""
                        ":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#name\\\"],\\\"html\\"
                        "\":\\\"<input type=\\\\\\\"name\\\\\\\" class=\\\\\\\"form-control\\\\\\\" id=\\"
                        "\\\\\"name\\\\\\\" placeholder=\\\\\\\"Name\\\\\\\">\\\",\\\"impact\\\":null,\\\""
                        "any\\\":[{\\\"id\\\":\\\"duplicate-id\\\",\\\"impact\\\":\\\"critical\\\",\\\"me"
                        "ssage\\\":\\\"Document has no elements that share the same id attribute\\\",\\\""
                        "data\\\":\\\"name\\\",\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},"
                        "{\\\"target\\\":[\\\"#email\\\"],\\\"html\\\":\\\"<input type=\\\\\\\"email\\\\\\"
                        "\" class=\\\\\\\"form-control\\\\\\\" id=\\\\\\\"email\\\\\\\" placeholder=\\\\\\"
                        "\"Email\\\\\\\">\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"duplicate-"
                        "id\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Document has no eleme"
                        "nts that share the same id attribute\\\",\\\"data\\\":\\\"email\\\",\\\"relatedN"
                        "odes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#message\\\"]"
                        ",\\\"html\\\":\\\"<textarea class=\\\\\\\"form-control\\\\\\\" id=\\\\\\\"messag"
                        "e\\\\\\\" rows=\\\\\\\"7\\\\\\\" placeholder=\\\\\\\"Message\\\\\\\"></textarea>"
                        "\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"duplicate-id\\\",\\\"impac"
                        "t\\\":\\\"critical\\\",\\\"message\\\":\\\"Document has no elements that share t"
                        "he same id attribute\\\",\\\"data\\\":\\\"message\\\",\\\"relatedNodes\\\":[]}],"
                        "\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#btn-submit\\\"],\\\"html\\"
                        "\":\\\"<input type=\\\\\\\"submit\\\\\\\" id=\\\\\\\"btn-submit\\\\\\\" class=\\"
                        "\\\\\"btn btn-send-message btn-md\\\\\\\" value=\\\\\\\"Send Message\\\\\\\">\\\""
                        ",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"duplicate-id";
long WebSocketSendLen83   = sizeof(WebSocketSend83) - 1;	 

 

char WebSocketSend84[] = "id-18 index-43 total-92 \\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\""
                        "Document has no elements that share the same id attribute\\\",\\\"data\\\":\\\"b"
                        "tn-submit\\\",\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"tar"
                        "get\\\":[\\\"#map\\\"],\\\"html\\\":\\\"<div id=\\\\\\\"map\\\\\\\" class=\\\\\\"
                        "\"fh5co-map\\\\\\\" style=\\\\\\\"position: relative; overflow: hidden;\\\\\\\">"
                        "\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"duplicate-id\\\",\\\"impac"
                        "t\\\":\\\"critical\\\",\\\"message\\\":\\\"Document has no elements that share t"
                        "he same id attribute\\\",\\\"data\\\":\\\"map\\\",\\\"relatedNodes\\\":[]}],\\\""
                        "all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-home\\\"],\\\"html\\\":\\"
                        "\"<section id=\\\\\\\"fh5co-home\\\\\\\" data-section=\\\\\\\"home\\\\\\\" style"
                        "=\\\\\\\"background-image: url(&quot;images/full_image_3.jpg&quot;); background-"
                        "position: 0px 3388.77px;\\\\\\\" data-stellar-background-ratio=\\\\\\\"0.5\\\\\\"
                        "\">\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"duplicate-id\\\",\\\"im"
                        "pact\\\":\\\"critical\\\",\\\"message\\\":\\\"Document has no elements that shar"
                        "e the same id attribute\\\",\\\"data\\\":\\\"fh5co-home\\\",\\\"relatedNodes\\\""
                        ":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#__VIEWSTATEGENERATOR"
                        "\\\"],\\\"html\\\":\\\"<input type=\\\\\\\"hidden\\\\\\\" name=\\\\\\\"__VIEWSTA"
                        "TEGENERATOR\\\\\\\" id=\\\\\\\"__VIEWSTATEGENERATOR\\\\\\\" value=\\\\\\\"900599"
                        "87\\\\\\\">\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"duplicate-id\\\""
                        ",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Document has no elements th"
                        "at share the same id attribute\\\",\\\"data\\\":\\\"__VIEWSTATEGENERATOR\\\",\\\""
                        "relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#__br"
                        "owserLink_initializationData\\\"],\\\"html\\\":\\\"<script type=\\\\\\\"applicat"
                        "ion/json\\\\\\\" id=\\\\\\\"__browserLink_initializationData\\\\\\\">\\\\n    {\\"
                        "\\\\\"appName\\\\\\\":\\\\\\\"Chrome\\\\\\\",\\\\\\\"requestId\\\\\\\":\\\\\\\"9"
                        "3b210627c764aaabe3ac9c497362927\\\\\\\"}\\\\n</script>\\\",\\\"impact\\\":null,\\"
                        "\"any\\\":[{\\\"id\\\":\\\"duplicate-id\\\",\\\"impact\\\":\\\"critical\\\",\\\""
                        "message\\\":\\\"Document has no elements that share the same id attribute\\\",\\"
                        "\"data\\\":\\\"__browserLink_initializationData\\\",\\\"relatedNodes\\\":[]}],\\"
                        "\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#_0_9008633488402071\\\"],\\\""
                        "html\\\":\\\"<input type=\\\\\\\"checkbox\\\\\\\" title=\\\\\\\"Use CTRL+ALT+U t"
                        "o continuously sync CSS changes into Visual Studio\\\\\\\" id=\\\\\\\"_0_9008633"
                        "488402071\\\\\\\">\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"duplicat"
                        "e-id\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Document has no ele"
                        "ments that share the same id attribute\\\",\\\"data\\\":\\\"_0_9008633488402071\\"
                        "\",\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\"
                        "\"#_0_005383016530676077\\\"],\\\"html\\\":\\\"<input type=\\\\\\\"checkbox\\\\\\"
                        "\" title=\\\\\\\"This will auto-hide this menu. Click the CTRL key to make it vi"
                        "sible\\\\\\\" id=\\\\\\\"_0_005383016530676077\\\\\\\">\\\",\\\"impact\\\":null,"
                        "\\\"any\\\":[{\\\"id\\\":\\\"duplicate-id\\\",\\\"impact\\\":\\\"critical\\\",\\"
                        "\"message\\\":\\\"Document has no elements that share the same id attribute\\\","
                        "\\\"data\\\":\\\"_0_005383016530676077\\\",\\\"relatedNodes\\\":[]}],\\\"all\\\""
                        ":[],\\\"none\\\":[]}]},{\\\"id\\\":\\\"empty-heading\\\",\\\"description\\\":\\\""
                        "Ensures headings have discernible text\\\",\\\"help\\\":\\\"Headings must not be"
                        " empty\\\",\\\"helpUrl\\\":\\\"https://dequeuniversity.com/rules/axe/2.0/empty-h"
                        "eading?application=axeAPI\\\",\\\"impact\\\":null,\\\"tags\\\":[\\\"best-practic"
                        "e\\\"],\\\"nodes\\\":[{\\\"target\\\":[\\\"#form1 > .getting-started.getting-sta"
                        "rted-1.animate";
long WebSocketSendLen84   = sizeof(WebSocketSend84) - 1;	 

 

char WebSocketSend85[] = "id-18 index-44 total-92 d > .container > .row > .col-md-6.to-animate.fadeInUp.an"
                        "imated > h3\\\"],\\\"html\\\":\\\"<h3>Getting Started</h3>\\\",\\\"impact\\\":nu"
                        "ll,\\\"any\\\":[{\\\"id\\\":\\\"has-visible-text\\\",\\\"impact\\\":\\\"critical"
                        "\\\",\\\"message\\\":\\\"Element has text that is visible to screen readers\\\","
                        "\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\""
                        "target\\\":[\\\"#fh5co-pricing > .fh5co-pricing > .container > div:nth-of-type(1"
                        ") > .col-md-12.section-heading.text-center > .to-animate\\\"],\\\"html\\\":\\\"<"
                        "h2 class=\\\\\\\"to-animate\\\\\\\">Plans Built For Every One</h2>\\\",\\\"impac"
                        "t\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"has-visible-text\\\",\\\"impact\\\":\\\""
                        "critical\\\",\\\"message\\\":\\\"Element has text that is visible to screen read"
                        "ers\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":"
                        "[]},{\\\"target\\\":[\\\"#fh5co-pricing > .fh5co-pricing > .container > div:nth-"
                        "of-type(1) > .col-md-12.section-heading.text-center > .row > .col-md-8.col-md-of"
                        "fset-2.subtext > .to-animate\\\"],\\\"html\\\":\\\"<h3 class=\\\\\\\"to-animate\\"
                        "\\\\\">Far far away, behind the word mountains, far from the countries Vokalia a"
                        "nd Consonantia, there live the blind texts. Separated they live in Bookmarksgrov"
                        "e. </h3>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"has-visible-text\\"
                        "\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Element has text that is "
                        "visible to screen readers\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"al"
                        "l\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-pricing > .fh5co-pricing >"
                        " .container > div:nth-of-type(2) > .pricing > div:nth-of-type(1) > .price-box.to"
                        "-animate-2 > .pricing-plan\\\"],\\\"html\\\":\\\"<h2 class=\\\\\\\"pricing-plan\\"
                        "\\\\\">Starter</h2>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"has-vis"
                        "ible-text\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Element has te"
                        "xt that is visible to screen readers\\\",\\\"data\\\":null,\\\"relatedNodes\\\":"
                        "[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-pricing > .fh5c"
                        "o-pricing > .container > div:nth-of-type(2) > .pricing > div:nth-of-type(2) > .p"
                        "rice-box.to-animate-2 > .pricing-plan\\\"],\\\"html\\\":\\\"<h2 class=\\\\\\\"pr"
                        "icing-plan\\\\\\\">Basic</h2>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\"
                        "\"has-visible-text\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Eleme"
                        "nt has text that is visible to screen readers\\\",\\\"data\\\":null,\\\"relatedN"
                        "odes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-pricin"
                        "g > .fh5co-pricing > .container > div:nth-of-type(2) > .pricing > div:nth-of-typ"
                        "e(3) > .price-box.to-animate-2.popular > .pricing-plan.pricing-plan-offer\\\"],\\"
                        "\"html\\\":\\\"<h2 class=\\\\\\\"pricing-plan pricing-plan-offer\\\\\\\">Pro <sp"
                        "an>Best Offer</span></h2>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"h"
                        "as-visible-text\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Element "
                        "has text that is visible to screen readers\\\",\\\"data\\\":null,\\\"relatedNode"
                        "s\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-pricing >"
                        " .fh5co-pricing > .container > div:nth-of-type(2) > .pricing > div:nth-of-type(4"
                        ") > .price-box.to-animate-2 > .pricing-plan\\\"],\\\"html\\\":\\\"<h2 class=\\\\"
                        "\\\"pricing-plan\\\\\\\">Unlimited</h2>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\"
                        "\"id\\\":\\\"has-visible-text\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\""
                        ":\\\"Element has text that is visible to screen readers\\\",\\\"data\\\":null,\\"
                        "\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"t";
long WebSocketSendLen85   = sizeof(WebSocketSend85) - 1;	 

 

char WebSocketSend86[] = "id-18 index-45 total-92 arget\\\":[\\\"#fh5co-services > .fh5co-services > .cont"
                        "ainer > div:nth-of-type(1) > .col-md-12.section-heading.text-center > .to-animat"
                        "e\\\"],\\\"html\\\":\\\"<h2 class=\\\\\\\"to-animate\\\\\\\">We Offer Services</"
                        "h2>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"has-visible-text\\\",\\"
                        "\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Element has text that is visib"
                        "le to screen readers\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\""
                        ":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-services > .fh5co-services > .c"
                        "ontainer > div:nth-of-type(1) > .col-md-12.section-heading.text-center > .row > "
                        ".col-md-8.col-md-offset-2.subtext > .to-animate\\\"],\\\"html\\\":\\\"<h3 class="
                        "\\\\\\\"to-animate\\\\\\\">Far far away, behind the word mountains, far from the"
                        " countries Vokalia and Consonantia, there live the blind texts. Separated they l"
                        "ive in Bookmarksgrove. </h3>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\"
                        "\"has-visible-text\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Eleme"
                        "nt has text that is visible to screen readers\\\",\\\"data\\\":null,\\\"relatedN"
                        "odes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-servic"
                        "es > .fh5co-services > .container > div:nth-of-type(2) > div:nth-of-type(1) > di"
                        "v:nth-of-type(1) > .fh5co-post.to-animate > h3\\\"],\\\"html\\\":\\\"<h3>Hand-cr"
                        "afted with Detailed</h3>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"ha"
                        "s-visible-text\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Element h"
                        "as text that is visible to screen readers\\\",\\\"data\\\":null,\\\"relatedNodes"
                        "\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-services >"
                        " .fh5co-services > .container > div:nth-of-type(2) > div:nth-of-type(1) > div:nt"
                        "h-of-type(2) > .fh5co-post.to-animate > h3\\\"],\\\"html\\\":\\\"<h3>Light and F"
                        "ast</h3>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"has-visible-text\\"
                        "\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Element has text that is "
                        "visible to screen readers\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"al"
                        "l\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-services > .fh5co-services"
                        " > .container > div:nth-of-type(2) > div:nth-of-type(2) > div:nth-of-type(1) > ."
                        "fh5co-post.to-animate > h3\\\"],\\\"html\\\":\\\"<h3>Award-winning Landing Page<"
                        "/h3>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"has-visible-text\\\",\\"
                        "\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Element has text that is visib"
                        "le to screen readers\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\""
                        ":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-services > .fh5co-services > .c"
                        "ontainer > div:nth-of-type(2) > div:nth-of-type(2) > div:nth-of-type(2) > .fh5co"
                        "-post.to-animate > h3\\\"],\\\"html\\\":\\\"<h3>Sleek and Smooth Animation</h3>\\"
                        "\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"has-visible-text\\\",\\\"imp"
                        "act\\\":\\\"critical\\\",\\\"message\\\":\\\"Element has text that is visible to"
                        " screen readers\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\"
                        "\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-services > .fh5co-services > .contain"
                        "er > div:nth-of-type(2) > div:nth-of-type(3) > div:nth-of-type(1) > .fh5co-post."
                        "to-animate > h3\\\"],\\\"html\\\":\\\"<h3>Satisfied &amp; Happy Clients</h3>\\\""
                        ",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"has-visible-text\\\",\\\"impac"
                        "t\\\":\\\"critical\\\",\\\"message\\\":\\\"Element has text that is visible to s"
                        "creen readers\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\""
                        "none\\\":[]},{\\\"target\\\":[\\\"#fh5co";
long WebSocketSendLen86   = sizeof(WebSocketSend86) - 1;	 

 

char WebSocketSend87[] = "id-18 index-46 total-92 -services > .fh5co-services > .container > div:nth-of-ty"
                        "pe(2) > div:nth-of-type(3) > div:nth-of-type(2) > .fh5co-post.to-animate > h3\\\""
                        "],\\\"html\\\":\\\"<h3>Looks Amazing on Devices</h3>\\\",\\\"impact\\\":null,\\\""
                        "any\\\":[{\\\"id\\\":\\\"has-visible-text\\\",\\\"impact\\\":\\\"critical\\\",\\"
                        "\"message\\\":\\\"Element has text that is visible to screen readers\\\",\\\"dat"
                        "a\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target"
                        "\\\":[\\\"#fh5co-team > .fh5co-team > .container > div:nth-of-type(1) > .col-md-"
                        "12.section-heading.text-center > .to-animate\\\"],\\\"html\\\":\\\"<h2 class=\\\\"
                        "\\\"to-animate\\\\\\\">Meet The Team</h2>\\\",\\\"impact\\\":null,\\\"any\\\":[{"
                        "\\\"id\\\":\\\"has-visible-text\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\"
                        "\":\\\"Element has text that is visible to screen readers\\\",\\\"data\\\":null,"
                        "\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#"
                        "fh5co-team > .fh5co-team > .container > div:nth-of-type(1) > .col-md-12.section-"
                        "heading.text-center > .row > .col-md-8.col-md-offset-2.subtext > .to-animate\\\""
                        "],\\\"html\\\":\\\"<h3 class=\\\\\\\"to-animate\\\\\\\">Far far away, behind the"
                        " word mountains, far from the countries Vokalia and Consonantia, there live the "
                        "blind texts. Separated they live in Bookmarksgrove. </h3>\\\",\\\"impact\\\":nul"
                        "l,\\\"any\\\":[{\\\"id\\\":\\\"has-visible-text\\\",\\\"impact\\\":\\\"critical\\"
                        "\",\\\"message\\\":\\\"Element has text that is visible to screen readers\\\",\\"
                        "\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"t"
                        "arget\\\":[\\\"#fh5co-team > .fh5co-team > .container > div:nth-of-type(2) > div"
                        ":nth-of-type(1) > .team-box.text-center.to-animate-2 > h3\\\"],\\\"html\\\":\\\""
                        "<h3>Roger Garfield</h3>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"has"
                        "-visible-text\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Element ha"
                        "s text that is visible to screen readers\\\",\\\"data\\\":null,\\\"relatedNodes\\"
                        "\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-team > .fh5c"
                        "o-team > .container > div:nth-of-type(2) > div:nth-of-type(2) > .team-box.text-c"
                        "enter.to-animate-2 > h3\\\"],\\\"html\\\":\\\"<h3>Kevin Steve</h3>\\\",\\\"impac"
                        "t\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"has-visible-text\\\",\\\"impact\\\":\\\""
                        "critical\\\",\\\"message\\\":\\\"Element has text that is visible to screen read"
                        "ers\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":"
                        "[]},{\\\"target\\\":[\\\"#fh5co-team > .fh5co-team > .container > div:nth-of-typ"
                        "e(2) > div:nth-of-type(3) > .team-box.text-center.to-animate-2 > h3\\\"],\\\"htm"
                        "l\\\":\\\"<h3>Ross Standford</h3>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\"
                        "\":\\\"has-visible-text\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\""
                        "Element has text that is visible to screen readers\\\",\\\"data\\\":null,\\\"rel"
                        "atedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-f"
                        "aq > .fh5co-faq > .container > div:nth-of-type(1) > .col-md-12.section-heading.t"
                        "ext-center > .to-animate\\\"],\\\"html\\\":\\\"<h2 class=\\\\\\\"to-animate\\\\\\"
                        "\">Common Questions</h2>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"ha"
                        "s-visible-text\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Element h"
                        "as text that is visible to screen readers\\\",\\\"data\\\":null,\\\"relatedNodes"
                        "\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-faq > .fh5"
                        "co-faq > .container > div:nth-of-type(1) > .col-md-12.section-heading.text-cente"
                        "r > .row > .col-md-8.col-md-offset-2.subt";
long WebSocketSendLen87   = sizeof(WebSocketSend87) - 1;	 

 

char WebSocketSend88[] = "id-18 index-47 total-92 ext > .to-animate\\\"],\\\"html\\\":\\\"<h3 class=\\\\\\"
                        "\"to-animate\\\\\\\">Everything you need to know before you get started</h3>\\\""
                        ",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"has-visible-text\\\",\\\"impac"
                        "t\\\":\\\"critical\\\",\\\"message\\\":\\\"Element has text that is visible to s"
                        "creen readers\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\""
                        "none\\\":[]},{\\\"target\\\":[\\\"#fh5co-faq > .fh5co-faq > .container > div:nth"
                        "-of-type(2) > div:nth-of-type(1) > div:nth-of-type(1) > h3\\\"],\\\"html\\\":\\\""
                        "<h3>What is Union?</h3>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"has"
                        "-visible-text\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Element ha"
                        "s text that is visible to screen readers\\\",\\\"data\\\":null,\\\"relatedNodes\\"
                        "\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-faq > .fh5co"
                        "-faq > .container > div:nth-of-type(2) > div:nth-of-type(1) > div:nth-of-type(2)"
                        " > h3\\\"],\\\"html\\\":\\\"<h3>I have technical problem, who do I email? </h3>\\"
                        "\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"has-visible-text\\\",\\\"imp"
                        "act\\\":\\\"critical\\\",\\\"message\\\":\\\"Element has text that is visible to"
                        " screen readers\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\"
                        "\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-faq > .fh5co-faq > .container > div:n"
                        "th-of-type(2) > div:nth-of-type(1) > div:nth-of-type(3) > h3\\\"],\\\"html\\\":\\"
                        "\"<h3>How do I use Bato features?</h3>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\""
                        "id\\\":\\\"has-visible-text\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":"
                        "\\\"Element has text that is visible to screen readers\\\",\\\"data\\\":null,\\\""
                        "relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5c"
                        "o-faq > .fh5co-faq > .container > div:nth-of-type(2) > div:nth-of-type(2) > div:"
                        "nth-of-type(1) > h3\\\"],\\\"html\\\":\\\"<h3>What language are available?</h3>\\"
                        "\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"has-visible-text\\\",\\\"imp"
                        "act\\\":\\\"critical\\\",\\\"message\\\":\\\"Element has text that is visible to"
                        " screen readers\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\"
                        "\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-faq > .fh5co-faq > .container > div:n"
                        "th-of-type(2) > div:nth-of-type(2) > div:nth-of-type(2) > h3\\\"],\\\"html\\\":\\"
                        "\"<h3>Can I have a username that is already taken?</h3>\\\",\\\"impact\\\":null,"
                        "\\\"any\\\":[{\\\"id\\\":\\\"has-visible-text\\\",\\\"impact\\\":\\\"critical\\\""
                        ",\\\"message\\\":\\\"Element has text that is visible to screen readers\\\",\\\""
                        "data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"tar"
                        "get\\\":[\\\"#fh5co-faq > .fh5co-faq > .container > div:nth-of-type(2) > div:nth"
                        "-of-type(2) > div:nth-of-type(3) > h3\\\"],\\\"html\\\":\\\"<h3>Is Union free?</"
                        "h3>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"has-visible-text\\\",\\"
                        "\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Element has text that is visib"
                        "le to screen readers\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\""
                        ":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-trusted > .fh5co-trusted > .con"
                        "tainer > div:nth-of-type(1) > .col-md-12.section-heading.text-center > .to-anima"
                        "te\\\"],\\\"html\\\":\\\"<h2 class=\\\\\\\"to-animate\\\\\\\">Trusted By</h2>\\\""
                        ",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"has-visible-text\\\",\\\"impac"
                        "t\\\":\\\"critical\\\",\\\"message\\\":\\\"Element has text that is visible to s"
                        "creen readers\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\""
                        "none\\\":[]},{\\\"target\\\":[\\\"#fh5co-trusted > .fh5co-trusted > .container >"
                        " div:nth-o";
long WebSocketSendLen88   = sizeof(WebSocketSend88) - 1;	 

 

char WebSocketSend89[] = "id-18 index-48 total-92 f-type(1) > .col-md-12.section-heading.text-center > .ro"
                        "w > .col-md-8.col-md-offset-2.subtext > .to-animate\\\"],\\\"html\\\":\\\"<h3 cl"
                        "ass=\\\\\\\"to-animate\\\\\\\">We"
                        "\xe2\x80\x99"
                        "re trusted by these popular companies</h3>\\\",\\\"impact\\\":null,\\\"any\\\":["
                        "{\\\"id\\\":\\\"has-visible-text\\\",\\\"impact\\\":\\\"critical\\\",\\\"message"
                        "\\\":\\\"Element has text that is visible to screen readers\\\",\\\"data\\\":nul"
                        "l,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\""
                        "#form1 > .getting-started.getting-started-2 > .container > .row > .col-md-6.to-a"
                        "nimate > h3\\\"],\\\"html\\\":\\\"<h3>Getting Started</h3>\\\",\\\"impact\\\":nu"
                        "ll,\\\"any\\\":[{\\\"id\\\":\\\"has-visible-text\\\",\\\"impact\\\":\\\"critical"
                        "\\\",\\\"message\\\":\\\"Element has text that is visible to screen readers\\\","
                        "\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\""
                        "target\\\":[\\\"#fh5co-footer > .container > .row > div:nth-of-type(1) > .sectio"
                        "n-title\\\"],\\\"html\\\":\\\"<h3 class=\\\\\\\"section-title\\\\\\\">About Us</"
                        "h3>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"has-visible-text\\\",\\"
                        "\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Element has text that is visib"
                        "le to screen readers\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\""
                        ":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-footer > .container > .row > di"
                        "v:nth-of-type(2) > h3:nth-of-type(1)\\\"],\\\"html\\\":\\\"<h3 class=\\\\\\\"sec"
                        "tion-title\\\\\\\">Our Address</h3>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id"
                        "\\\":\\\"has-visible-text\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\"
                        "\"Element has text that is visible to screen readers\\\",\\\"data\\\":null,\\\"r"
                        "elatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co"
                        "-footer > .container > .row > div:nth-of-type(2) > h3:nth-of-type(2)\\\"],\\\"ht"
                        "ml\\\":\\\"<h3 class=\\\\\\\"section-title\\\\\\\">Connect with Us</h3>\\\",\\\""
                        "impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"has-visible-text\\\",\\\"impact\\\""
                        ":\\\"critical\\\",\\\"message\\\":\\\"Element has text that is visible to screen"
                        " readers\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none"
                        "\\\":[]},{\\\"target\\\":[\\\"#fh5co-footer > .container > .row > div:nth-of-typ"
                        "e(3) > .section-title\\\"],\\\"html\\\":\\\"<h3 class=\\\\\\\"section-title\\\\\\"
                        "\">Drop us a line</h3>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"has-"
                        "visible-text\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Element has"
                        " text that is visible to screen readers\\\",\\\"data\\\":null,\\\"relatedNodes\\"
                        "\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-home > .cont"
                        "ainer > .text-wrap > .text-inner > .row > .col-md-8.col-md-offset-2 > h1\\\"],\\"
                        "\"html\\\":\\\"<h1 class=\\\\\\\"to-animate\\\\\\\" style=\\\\\\\"font-size: lar"
                        "ge; font-weight: bolder; font-family: 'Kristen ITC'; color: #000000; text-align:"
                        " center;\\\\\\\">Mahesh Babu (born Mahesh Ghattamaneni on 9 August 1975) is an I"
                        "ndian actor, producer, media personality, and philanthropist known for his works"
                        " in Telugu cinema.</h1>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"has"
                        "-visible-text\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Element ha"
                        "s text that is visible to screen readers\\\",\\\"data\\\":null,\\\"relatedNodes\\"
                        "\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-home > .cont"
                        "ainer > .text-wrap > .text-inner > .row > .col-md-8.col-md-offset-2 > h2:nth-of-"
                        "type(1)\\\"],\\\"html\\\":\\\"<h2 class=\\\\\\\"to-animate\\\\\\\"> Mahesh Babu "
                        "Is A Perfectionist - sukumar</h2>\\\",\\\"impact\\\":null,\\\"any\\";
long WebSocketSendLen89   = sizeof(WebSocketSend89) - 1;	 

 

char WebSocketSend90[] = "id-18 index-49 total-92 \":[{\\\"id\\\":\\\"has-visible-text\\\",\\\"impact\\\":"
                        "\\\"critical\\\",\\\"message\\\":\\\"Element has text that is visible to screen "
                        "readers\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\"
                        "\":[]},{\\\"target\\\":[\\\"#fh5co-home > .container > .text-wrap > .text-inner "
                        "> .row > .col-md-8.col-md-offset-2 > h2:nth-of-type(2)\\\"],\\\"html\\\":\\\"<h2"
                        " class=\\\\\\\"to-animate\\\\\\\"> Mahesh Babu Is One Of The Best Actor In India"
                        " - Ram Gopal Varma</h2>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"has"
                        "-visible-text\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Element ha"
                        "s text that is visible to screen readers\\\",\\\"data\\\":null,\\\"relatedNodes\\"
                        "\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-home > .cont"
                        "ainer > .text-wrap > .text-inner > .row > .col-md-8.col-md-offset-2 > h2:nth-of-"
                        "type(3)\\\"],\\\"html\\\":\\\"<h2 class=\\\\\\\"to-animate\\\\\\\"> Mahesh Babu "
                        "Is An Addiction - Puri Jagannnath</h2>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\""
                        "id\\\":\\\"has-visible-text\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":"
                        "\\\"Element has text that is visible to screen readers\\\",\\\"data\\\":null,\\\""
                        "relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5c"
                        "o-home > .container > .text-wrap > .text-inner > .row > .col-md-8.col-md-offset-"
                        "2 > h2:nth-of-type(4)\\\"],\\\"html\\\":\\\"<h2 class=\\\\\\\"to-animate\\\\\\\""
                        "> Mahesh Babu Has A Very Great Screen Presence - Shankar </h2>\\\",\\\"impact\\\""
                        ":null,\\\"any\\\":[{\\\"id\\\":\\\"has-visible-text\\\",\\\"impact\\\":\\\"criti"
                        "cal\\\",\\\"message\\\":\\\"Element has text that is visible to screen readers\\"
                        "\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{"
                        "\\\"target\\\":[\\\"#fh5co-home > .container > .text-wrap > .text-inner > .row >"
                        " .col-md-8.col-md-offset-2 > h2:nth-of-type(5)\\\"],\\\"html\\\":\\\"<h2 class=\\"
                        "\\\\\"to-animate\\\\\\\"> Mahesh Babu Is My favourite Actor <br> Movies May Fail"
                        " But Mahesh Never Fails - Trivikram Srinivas</h2>\\\",\\\"impact\\\":null,\\\"an"
                        "y\\\":[{\\\"id\\\":\\\"has-visible-text\\\",\\\"impact\\\":\\\"critical\\\",\\\""
                        "message\\\":\\\"Element has text that is visible to screen readers\\\",\\\"data\\"
                        "\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]}]},{\\\"id\\\":"
                        "\\\"heading-order\\\",\\\"description\\\":\\\"Ensures the order of headings is s"
                        "emantically correct\\\",\\\"help\\\":\\\"Heading levels should only increase by "
                        "one\\\",\\\"helpUrl\\\":\\\"https://dequeuniversity.com/rules/axe/2.0/heading-or"
                        "der?application=axeAPI\\\",\\\"impact\\\":null,\\\"tags\\\":[\\\"best-practice\\"
                        "\"],\\\"nodes\\\":[{\\\"target\\\":[\\\"#form1 > .getting-started.getting-starte"
                        "d-1.animated > .container > .row > .col-md-6.to-animate.fadeInUp.animated > h3\\"
                        "\"],\\\"html\\\":\\\"<h3>Getting Started</h3>\\\",\\\"impact\\\":null,\\\"any\\\""
                        ":[{\\\"id\\\":\\\"heading-order\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\""
                        ":\\\"Heading order valid\\\",\\\"data\\\":3,\\\"relatedNodes\\\":[]}],\\\"all\\\""
                        ":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-pricing > .fh5co-pricing > .con"
                        "tainer > div:nth-of-type(1) > .col-md-12.section-heading.text-center > .to-anima"
                        "te\\\"],\\\"html\\\":\\\"<h2 class=\\\\\\\"to-animate\\\\\\\">Plans Built For Ev"
                        "ery One</h2>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"heading-order\\"
                        "\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Heading order valid\\\",\\\""
                        "data\\\":2,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target"
                        "\\\":[\\\"#fh5co-pricing > .fh5co-pricing > .container > div:nth-of-type(1) > .c"
                        "ol-md";
long WebSocketSendLen90   = sizeof(WebSocketSend90) - 1;	 

 

char WebSocketSend91[] = "id-18 index-50 total-92 -12.section-heading.text-center > .row > .col-md-8.col-m"
                        "d-offset-2.subtext > .to-animate\\\"],\\\"html\\\":\\\"<h3 class=\\\\\\\"to-anim"
                        "ate\\\\\\\">Far far away, behind the word mountains, far from the countries Voka"
                        "lia and Consonantia, there live the blind texts. Separated they live in Bookmark"
                        "sgrove. </h3>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"heading-order"
                        "\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Heading order valid\\\",\\"
                        "\"data\\\":3,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"targ"
                        "et\\\":[\\\"#fh5co-pricing > .fh5co-pricing > .container > div:nth-of-type(2) > "
                        ".pricing > div:nth-of-type(1) > .price-box.to-animate-2 > .pricing-plan\\\"],\\\""
                        "html\\\":\\\"<h2 class=\\\\\\\"pricing-plan\\\\\\\">Starter</h2>\\\",\\\"impact\\"
                        "\":null,\\\"any\\\":[{\\\"id\\\":\\\"heading-order\\\",\\\"impact\\\":\\\"minor\\"
                        "\",\\\"message\\\":\\\"Heading order valid\\\",\\\"data\\\":2,\\\"relatedNodes\\"
                        "\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-pricing > .f"
                        "h5co-pricing > .container > div:nth-of-type(2) > .pricing > div:nth-of-type(2) >"
                        " .price-box.to-animate-2 > .pricing-plan\\\"],\\\"html\\\":\\\"<h2 class=\\\\\\\""
                        "pricing-plan\\\\\\\">Basic</h2>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\""
                        ":\\\"heading-order\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Heading "
                        "order valid\\\",\\\"data\\\":2,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none"
                        "\\\":[]},{\\\"target\\\":[\\\"#fh5co-pricing > .fh5co-pricing > .container > div"
                        ":nth-of-type(2) > .pricing > div:nth-of-type(3) > .price-box.to-animate-2.popula"
                        "r > .pricing-plan.pricing-plan-offer\\\"],\\\"html\\\":\\\"<h2 class=\\\\\\\"pri"
                        "cing-plan pricing-plan-offer\\\\\\\">Pro <span>Best Offer</span></h2>\\\",\\\"im"
                        "pact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"heading-order\\\",\\\"impact\\\":\\\""
                        "minor\\\",\\\"message\\\":\\\"Heading order valid\\\",\\\"data\\\":2,\\\"related"
                        "Nodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-prici"
                        "ng > .fh5co-pricing > .container > div:nth-of-type(2) > .pricing > div:nth-of-ty"
                        "pe(4) > .price-box.to-animate-2 > .pricing-plan\\\"],\\\"html\\\":\\\"<h2 class="
                        "\\\\\\\"pricing-plan\\\\\\\">Unlimited</h2>\\\",\\\"impact\\\":null,\\\"any\\\":"
                        "[{\\\"id\\\":\\\"heading-order\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":"
                        "\\\"Heading order valid\\\",\\\"data\\\":2,\\\"relatedNodes\\\":[]}],\\\"all\\\""
                        ":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-services > .fh5co-services > .c"
                        "ontainer > div:nth-of-type(1) > .col-md-12.section-heading.text-center > .to-ani"
                        "mate\\\"],\\\"html\\\":\\\"<h2 class=\\\\\\\"to-animate\\\\\\\">We Offer Service"
                        "s</h2>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"heading-order\\\",\\"
                        "\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Heading order valid\\\",\\\"data\\"
                        "\":2,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":["
                        "\\\"#fh5co-services > .fh5co-services > .container > div:nth-of-type(1) > .col-m"
                        "d-12.section-heading.text-center > .row > .col-md-8.col-md-offset-2.subtext > .t"
                        "o-animate\\\"],\\\"html\\\":\\\"<h3 class=\\\\\\\"to-animate\\\\\\\">Far far awa"
                        "y, behind the word mountains, far from the countries Vokalia and Consonantia, th"
                        "ere live the blind texts. Separated they live in Bookmarksgrove. </h3>\\\",\\\"i"
                        "mpact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"heading-order\\\",\\\"impact\\\":\\\""
                        "minor\\\",\\\"message\\\":\\\"Heading order valid\\\",\\\"data\\\":3,\\\"related"
                        "Nodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-servi"
                        "ces > .fh5co-services > .container > div:nth-of-type(2) > div:nth-of-type(";
long WebSocketSendLen91   = sizeof(WebSocketSend91) - 1;	 

 

char WebSocketSend92[] = "id-18 index-51 total-92 1) > div:nth-of-type(1) > .fh5co-post.to-animate > h3\\\""
                        "],\\\"html\\\":\\\"<h3>Hand-crafted with Detailed</h3>\\\",\\\"impact\\\":null,\\"
                        "\"any\\\":[{\\\"id\\\":\\\"heading-order\\\",\\\"impact\\\":\\\"minor\\\",\\\"me"
                        "ssage\\\":\\\"Heading order valid\\\",\\\"data\\\":3,\\\"relatedNodes\\\":[]}],\\"
                        "\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-services > .fh5co-serv"
                        "ices > .container > div:nth-of-type(2) > div:nth-of-type(1) > div:nth-of-type(2)"
                        " > .fh5co-post.to-animate > h3\\\"],\\\"html\\\":\\\"<h3>Light and Fast</h3>\\\""
                        ",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"heading-order\\\",\\\"impact\\"
                        "\":\\\"minor\\\",\\\"message\\\":\\\"Heading order valid\\\",\\\"data\\\":3,\\\""
                        "relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5c"
                        "o-services > .fh5co-services > .container > div:nth-of-type(2) > div:nth-of-type"
                        "(2) > div:nth-of-type(1) > .fh5co-post.to-animate > h3\\\"],\\\"html\\\":\\\"<h3"
                        ">Award-winning Landing Page</h3>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\""
                        ":\\\"heading-order\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Heading "
                        "order valid\\\",\\\"data\\\":3,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none"
                        "\\\":[]},{\\\"target\\\":[\\\"#fh5co-services > .fh5co-services > .container > d"
                        "iv:nth-of-type(2) > div:nth-of-type(2) > div:nth-of-type(2) > .fh5co-post.to-ani"
                        "mate > h3\\\"],\\\"html\\\":\\\"<h3>Sleek and Smooth Animation</h3>\\\",\\\"impa"
                        "ct\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"heading-order\\\",\\\"impact\\\":\\\"mi"
                        "nor\\\",\\\"message\\\":\\\"Heading order valid\\\",\\\"data\\\":3,\\\"relatedNo"
                        "des\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-service"
                        "s > .fh5co-services > .container > div:nth-of-type(2) > div:nth-of-type(3) > div"
                        ":nth-of-type(1) > .fh5co-post.to-animate > h3\\\"],\\\"html\\\":\\\"<h3>Satisfie"
                        "d &amp; Happy Clients</h3>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\""
                        "heading-order\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Heading order"
                        " valid\\\",\\\"data\\\":3,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":"
                        "[]},{\\\"target\\\":[\\\"#fh5co-services > .fh5co-services > .container > div:nt"
                        "h-of-type(2) > div:nth-of-type(3) > div:nth-of-type(2) > .fh5co-post.to-animate "
                        "> h3\\\"],\\\"html\\\":\\\"<h3>Looks Amazing on Devices</h3>\\\",\\\"impact\\\":"
                        "null,\\\"any\\\":[{\\\"id\\\":\\\"heading-order\\\",\\\"impact\\\":\\\"minor\\\""
                        ",\\\"message\\\":\\\"Heading order valid\\\",\\\"data\\\":3,\\\"relatedNodes\\\""
                        ":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-team > .fh5co-"
                        "team > .container > div:nth-of-type(1) > .col-md-12.section-heading.text-center "
                        "> .to-animate\\\"],\\\"html\\\":\\\"<h2 class=\\\\\\\"to-animate\\\\\\\">Meet Th"
                        "e Team</h2>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"heading-order\\"
                        "\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Heading order valid\\\",\\\""
                        "data\\\":2,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target"
                        "\\\":[\\\"#fh5co-team > .fh5co-team > .container > div:nth-of-type(1) > .col-md-"
                        "12.section-heading.text-center > .row > .col-md-8.col-md-offset-2.subtext > .to-"
                        "animate\\\"],\\\"html\\\":\\\"<h3 class=\\\\\\\"to-animate\\\\\\\">Far far away,"
                        " behind the word mountains, far from the countries Vokalia and Consonantia, ther"
                        "e live the blind texts. Separated they live in Bookmarksgrove. </h3>\\\",\\\"imp"
                        "act\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"heading-order\\\",\\\"impact\\\":\\\"m"
                        "inor\\\",\\\"message\\\":\\\"Heading order valid\\\",\\\"data\\\":3,\\\"relatedN"
                        "odes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-team >"
                        " .fh5co-team > .cont";
long WebSocketSendLen92   = sizeof(WebSocketSend92) - 1;	 

 

char WebSocketSend93[] = "id-18 index-52 total-92 ainer > div:nth-of-type(2) > div:nth-of-type(1) > .team-"
                        "box.text-center.to-animate-2 > h3\\\"],\\\"html\\\":\\\"<h3>Roger Garfield</h3>\\"
                        "\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"heading-order\\\",\\\"impact"
                        "\\\":\\\"minor\\\",\\\"message\\\":\\\"Heading order valid\\\",\\\"data\\\":3,\\"
                        "\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh"
                        "5co-team > .fh5co-team > .container > div:nth-of-type(2) > div:nth-of-type(2) > "
                        ".team-box.text-center.to-animate-2 > h3\\\"],\\\"html\\\":\\\"<h3>Kevin Steve</h"
                        "3>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"heading-order\\\",\\\"im"
                        "pact\\\":\\\"minor\\\",\\\"message\\\":\\\"Heading order valid\\\",\\\"data\\\":"
                        "3,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\""
                        "#fh5co-team > .fh5co-team > .container > div:nth-of-type(2) > div:nth-of-type(3)"
                        " > .team-box.text-center.to-animate-2 > h3\\\"],\\\"html\\\":\\\"<h3>Ross Standf"
                        "ord</h3>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"heading-order\\\","
                        "\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Heading order valid\\\",\\\"dat"
                        "a\\\":3,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\""
                        ":[\\\"#fh5co-faq > .fh5co-faq > .container > div:nth-of-type(1) > .col-md-12.sec"
                        "tion-heading.text-center > .to-animate\\\"],\\\"html\\\":\\\"<h2 class=\\\\\\\"t"
                        "o-animate\\\\\\\">Common Questions</h2>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\"
                        "\"id\\\":\\\"heading-order\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\""
                        "Heading order valid\\\",\\\"data\\\":2,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],"
                        "\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-faq > .fh5co-faq > .container > div"
                        ":nth-of-type(1) > .col-md-12.section-heading.text-center > .row > .col-md-8.col-"
                        "md-offset-2.subtext > .to-animate\\\"],\\\"html\\\":\\\"<h3 class=\\\\\\\"to-ani"
                        "mate\\\\\\\">Everything you need to know before you get started</h3>\\\",\\\"imp"
                        "act\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"heading-order\\\",\\\"impact\\\":\\\"m"
                        "inor\\\",\\\"message\\\":\\\"Heading order valid\\\",\\\"data\\\":3,\\\"relatedN"
                        "odes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-faq > "
                        ".fh5co-faq > .container > div:nth-of-type(2) > div:nth-of-type(1) > div:nth-of-t"
                        "ype(1) > h3\\\"],\\\"html\\\":\\\"<h3>What is Union?</h3>\\\",\\\"impact\\\":nul"
                        "l,\\\"any\\\":[{\\\"id\\\":\\\"heading-order\\\",\\\"impact\\\":\\\"minor\\\",\\"
                        "\"message\\\":\\\"Heading order valid\\\",\\\"data\\\":3,\\\"relatedNodes\\\":[]"
                        "}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-faq > .fh5co-faq "
                        "> .container > div:nth-of-type(2) > div:nth-of-type(1) > div:nth-of-type(2) > h3"
                        "\\\"],\\\"html\\\":\\\"<h3>I have technical problem, who do I email? </h3>\\\",\\"
                        "\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"heading-order\\\",\\\"impact\\\":"
                        "\\\"minor\\\",\\\"message\\\":\\\"Heading order valid\\\",\\\"data\\\":3,\\\"rel"
                        "atedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-f"
                        "aq > .fh5co-faq > .container > div:nth-of-type(2) > div:nth-of-type(1) > div:nth"
                        "-of-type(3) > h3\\\"],\\\"html\\\":\\\"<h3>How do I use Bato features?</h3>\\\","
                        "\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"heading-order\\\",\\\"impact\\\""
                        ":\\\"minor\\\",\\\"message\\\":\\\"Heading order valid\\\",\\\"data\\\":3,\\\"re"
                        "latedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-"
                        "faq > .fh5co-faq > .container > div:nth-of-type(2) > div:nth-of-type(2) > div:nt"
                        "h-of-type(1) > h3\\\"],\\\"html\\\":\\\"<h3>What language are available?</h3>\\\""
                        ",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"heading-order\\\",\\\"impact\\"
                        "\":\\\"minor\\\",\\\"message\\\":\\\"Heading order valid\\\"";
long WebSocketSendLen93   = sizeof(WebSocketSend93) - 1;	 

 

char WebSocketSend94[] = "id-18 index-53 total-92 ,\\\"data\\\":3,\\\"relatedNodes\\\":[]}],\\\"all\\\":[]"
                        ",\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-faq > .fh5co-faq > .container > di"
                        "v:nth-of-type(2) > div:nth-of-type(2) > div:nth-of-type(2) > h3\\\"],\\\"html\\\""
                        ":\\\"<h3>Can I have a username that is already taken?</h3>\\\",\\\"impact\\\":nu"
                        "ll,\\\"any\\\":[{\\\"id\\\":\\\"heading-order\\\",\\\"impact\\\":\\\"minor\\\",\\"
                        "\"message\\\":\\\"Heading order valid\\\",\\\"data\\\":3,\\\"relatedNodes\\\":[]"
                        "}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-faq > .fh5co-faq "
                        "> .container > div:nth-of-type(2) > div:nth-of-type(2) > div:nth-of-type(3) > h3"
                        "\\\"],\\\"html\\\":\\\"<h3>Is Union free?</h3>\\\",\\\"impact\\\":null,\\\"any\\"
                        "\":[{\\\"id\\\":\\\"heading-order\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\"
                        "\":\\\"Heading order valid\\\",\\\"data\\\":3,\\\"relatedNodes\\\":[]}],\\\"all\\"
                        "\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-trusted > .fh5co-trusted > .c"
                        "ontainer > div:nth-of-type(1) > .col-md-12.section-heading.text-center > .to-ani"
                        "mate\\\"],\\\"html\\\":\\\"<h2 class=\\\\\\\"to-animate\\\\\\\">Trusted By</h2>\\"
                        "\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"heading-order\\\",\\\"impact"
                        "\\\":\\\"minor\\\",\\\"message\\\":\\\"Heading order valid\\\",\\\"data\\\":2,\\"
                        "\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh"
                        "5co-trusted > .fh5co-trusted > .container > div:nth-of-type(1) > .col-md-12.sect"
                        "ion-heading.text-center > .row > .col-md-8.col-md-offset-2.subtext > .to-animate"
                        "\\\"],\\\"html\\\":\\\"<h3 class=\\\\\\\"to-animate\\\\\\\">We"
                        "\xe2\x80\x99"
                        "re trusted by these popular companies</h3>\\\",\\\"impact\\\":null,\\\"any\\\":["
                        "{\\\"id\\\":\\\"heading-order\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\"
                        "\"Heading order valid\\\",\\\"data\\\":3,\\\"relatedNodes\\\":[]}],\\\"all\\\":["
                        "],\\\"none\\\":[]},{\\\"target\\\":[\\\"#form1 > .getting-started.getting-starte"
                        "d-2 > .container > .row > .col-md-6.to-animate > h3\\\"],\\\"html\\\":\\\"<h3>Ge"
                        "tting Started</h3>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"heading-"
                        "order\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Heading order valid\\"
                        "\",\\\"data\\\":3,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\""
                        "target\\\":[\\\"#fh5co-footer > .container > .row > div:nth-of-type(1) > .sectio"
                        "n-title\\\"],\\\"html\\\":\\\"<h3 class=\\\\\\\"section-title\\\\\\\">About Us</"
                        "h3>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"heading-order\\\",\\\"i"
                        "mpact\\\":\\\"minor\\\",\\\"message\\\":\\\"Heading order valid\\\",\\\"data\\\""
                        ":3,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\"
                        "\"#fh5co-footer > .container > .row > div:nth-of-type(2) > h3:nth-of-type(1)\\\""
                        "],\\\"html\\\":\\\"<h3 class=\\\\\\\"section-title\\\\\\\">Our Address</h3>\\\","
                        "\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"heading-order\\\",\\\"impact\\\""
                        ":\\\"minor\\\",\\\"message\\\":\\\"Heading order valid\\\",\\\"data\\\":3,\\\"re"
                        "latedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-"
                        "footer > .container > .row > div:nth-of-type(2) > h3:nth-of-type(2)\\\"],\\\"htm"
                        "l\\\":\\\"<h3 class=\\\\\\\"section-title\\\\\\\">Connect with Us</h3>\\\",\\\"i"
                        "mpact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"heading-order\\\",\\\"impact\\\":\\\""
                        "minor\\\",\\\"message\\\":\\\"Heading order valid\\\",\\\"data\\\":3,\\\"related"
                        "Nodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-foote"
                        "r > .container > .row > div:nth-of-type(3) > .section-title\\\"],\\\"html\\\":\\"
                        "\"<h3 class=\\\\\\\"section-title\\\\\\\">Drop us a line</h3>\\\",\\\"impact\\\""
                        ":null,\\\"any\\\":[{\\\"id\\\":\\\"heading-order\\\",\\\"impact\\\":\\\"minor\\\""
                        ",\\\"message\\\":\\\"Heading order valid\\\",\\\"d";
long WebSocketSendLen94   = sizeof(WebSocketSend94) - 1;	 

 

char WebSocketSend95[] = "id-18 index-54 total-92 ata\\\":3,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"n"
                        "one\\\":[]},{\\\"target\\\":[\\\"#fh5co-home > .container > .text-wrap > .text-i"
                        "nner > .row > .col-md-8.col-md-offset-2 > h1\\\"],\\\"html\\\":\\\"<h1 class=\\\\"
                        "\\\"to-animate\\\\\\\" style=\\\\\\\"font-size: large; font-weight: bolder; font"
                        "-family: 'Kristen ITC'; color: #000000; text-align: center;\\\\\\\">Mahesh Babu "
                        "(born Mahesh Ghattamaneni on 9 August 1975) is an Indian actor, producer, media "
                        "personality, and philanthropist known for his works in Telugu cinema.</h1>\\\",\\"
                        "\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"heading-order\\\",\\\"impact\\\":"
                        "\\\"minor\\\",\\\"message\\\":\\\"Heading order valid\\\",\\\"data\\\":1,\\\"rel"
                        "atedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-h"
                        "ome > .container > .text-wrap > .text-inner > .row > .col-md-8.col-md-offset-2 >"
                        " h2:nth-of-type(1)\\\"],\\\"html\\\":\\\"<h2 class=\\\\\\\"to-animate\\\\\\\"> M"
                        "ahesh Babu Is A Perfectionist - sukumar</h2>\\\",\\\"impact\\\":null,\\\"any\\\""
                        ":[{\\\"id\\\":\\\"heading-order\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\""
                        ":\\\"Heading order valid\\\",\\\"data\\\":2,\\\"relatedNodes\\\":[]}],\\\"all\\\""
                        ":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-home > .container > .text-wrap "
                        "> .text-inner > .row > .col-md-8.col-md-offset-2 > h2:nth-of-type(2)\\\"],\\\"ht"
                        "ml\\\":\\\"<h2 class=\\\\\\\"to-animate\\\\\\\"> Mahesh Babu Is One Of The Best "
                        "Actor In India - Ram Gopal Varma</h2>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\""
                        "id\\\":\\\"heading-order\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"He"
                        "ading order valid\\\",\\\"data\\\":2,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\"
                        "\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-home > .container > .text-wrap > .tex"
                        "t-inner > .row > .col-md-8.col-md-offset-2 > h2:nth-of-type(3)\\\"],\\\"html\\\""
                        ":\\\"<h2 class=\\\\\\\"to-animate\\\\\\\"> Mahesh Babu Is An Addiction - Puri Ja"
                        "gannnath</h2>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"heading-order"
                        "\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Heading order valid\\\",\\"
                        "\"data\\\":2,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"targ"
                        "et\\\":[\\\"#fh5co-home > .container > .text-wrap > .text-inner > .row > .col-md"
                        "-8.col-md-offset-2 > h2:nth-of-type(4)\\\"],\\\"html\\\":\\\"<h2 class=\\\\\\\"t"
                        "o-animate\\\\\\\"> Mahesh Babu Has A Very Great Screen Presence - Shankar </h2>\\"
                        "\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"heading-order\\\",\\\"impact"
                        "\\\":\\\"minor\\\",\\\"message\\\":\\\"Heading order valid\\\",\\\"data\\\":2,\\"
                        "\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh"
                        "5co-home > .container > .text-wrap > .text-inner > .row > .col-md-8.col-md-offse"
                        "t-2 > h2:nth-of-type(5)\\\"],\\\"html\\\":\\\"<h2 class=\\\\\\\"to-animate\\\\\\"
                        "\"> Mahesh Babu Is My favourite Actor <br> Movies May Fail But Mahesh Never Fail"
                        "s - Trivikram Srinivas</h2>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\""
                        "heading-order\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Heading order"
                        " valid\\\",\\\"data\\\":2,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":"
                        "[]}]},{\\\"id\\\":\\\"image-alt\\\",\\\"description\\\":\\\"Ensures <img> elemen"
                        "ts have alternate text or a role of none or presentation\\\",\\\"help\\\":\\\"Im"
                        "ages must have alternate text\\\",\\\"helpUrl\\\":\\\"https://dequeuniversity.co"
                        "m/rules/axe/2.0/image-alt?application=axeAPI\\\",\\\"impact\\\":null,\\\"tags\\\""
                        ":[\\\"wcag2a\\\",\\\"wcag111\\\",\\\"section508\\\",\\\"section508.22.a\\\"],\\\""
                        "nodes\\\":[{\\\"target\\\":[\\\"#fh5co-team > .fh5co-team > .container > div:nth"
                        "-of-type(";
long WebSocketSendLen95   = sizeof(WebSocketSend95) - 1;	 

 

char WebSocketSend96[] = "id-18 index-55 total-92 2) > div:nth-of-type(1) > .team-box.text-center.to-anima"
                        "te-2 > .user > .img-reponsive\\\"],\\\"html\\\":\\\"<img class=\\\\\\\"img-repon"
                        "sive\\\\\\\" src=\\\\\\\"images/person4.jpg\\\\\\\" alt=\\\\\\\"Roger Garfield\\"
                        "\\\\\">\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"has-alt\\\",\\\"imp"
                        "act\\\":\\\"critical\\\",\\\"message\\\":\\\"Element has an alt attribute\\\",\\"
                        "\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"t"
                        "arget\\\":[\\\"#fh5co-team > .fh5co-team > .container > div:nth-of-type(2) > div"
                        ":nth-of-type(2) > .team-box.text-center.to-animate-2 > .user > .img-reponsive\\\""
                        "],\\\"html\\\":\\\"<img class=\\\\\\\"img-reponsive\\\\\\\" src=\\\\\\\"images/p"
                        "erson2.jpg\\\\\\\" alt=\\\\\\\"Roger Garfield\\\\\\\">\\\",\\\"impact\\\":null,\\"
                        "\"any\\\":[{\\\"id\\\":\\\"has-alt\\\",\\\"impact\\\":\\\"critical\\\",\\\"messa"
                        "ge\\\":\\\"Element has an alt attribute\\\",\\\"data\\\":null,\\\"relatedNodes\\"
                        "\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-team > .fh5c"
                        "o-team > .container > div:nth-of-type(2) > div:nth-of-type(3) > .team-box.text-c"
                        "enter.to-animate-2 > .user > .img-reponsive\\\"],\\\"html\\\":\\\"<img class=\\\\"
                        "\\\"img-reponsive\\\\\\\" src=\\\\\\\"images/person3.jpg\\\\\\\" alt=\\\\\\\"Rog"
                        "er Garfield\\\\\\\">\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"has-al"
                        "t\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Element has an alt att"
                        "ribute\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\"
                        "\":[]},{\\\"target\\\":[\\\"#fh5co-trusted > .fh5co-trusted > .container > div:n"
                        "th-of-type(2) > .col-md-2.col-sm-3.col-xs-6.col-sm-offset-0.col-md-offset-1 > .p"
                        "artner-logo.to-animate-2 > .img-responsive\\\"],\\\"html\\\":\\\"<img src=\\\\\\"
                        "\"images/logo1.png\\\\\\\" alt=\\\\\\\"Partners\\\\\\\" class=\\\\\\\"img-respon"
                        "sive\\\\\\\">\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"has-alt\\\",\\"
                        "\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Element has an alt attribute\\"
                        "\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{"
                        "\\\"target\\\":[\\\"#fh5co-trusted > .fh5co-trusted > .container > div:nth-of-ty"
                        "pe(2) > div:nth-of-type(2) > .partner-logo.to-animate-2 > .img-responsive\\\"],\\"
                        "\"html\\\":\\\"<img src=\\\\\\\"images/logo2.png\\\\\\\" alt=\\\\\\\"Partners\\\\"
                        "\\\" class=\\\\\\\"img-responsive\\\\\\\">\\\",\\\"impact\\\":null,\\\"any\\\":["
                        "{\\\"id\\\":\\\"has-alt\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\""
                        "Element has an alt attribute\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\""
                        "all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-trusted > .fh5co-trusted"
                        " > .container > div:nth-of-type(2) > div:nth-of-type(3) > .partner-logo.to-anima"
                        "te-2 > .img-responsive\\\"],\\\"html\\\":\\\"<img src=\\\\\\\"images/logo3.png\\"
                        "\\\\\" alt=\\\\\\\"Partners\\\\\\\" class=\\\\\\\"img-responsive\\\\\\\">\\\",\\"
                        "\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"has-alt\\\",\\\"impact\\\":\\\"cr"
                        "itical\\\",\\\"message\\\":\\\"Element has an alt attribute\\\",\\\"data\\\":nul"
                        "l,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\""
                        "#fh5co-trusted > .fh5co-trusted > .container > div:nth-of-type(2) > div:nth-of-t"
                        "ype(4) > .partner-logo.to-animate-2 > .img-responsive\\\"],\\\"html\\\":\\\"<img"
                        " src=\\\\\\\"images/logo4.png\\\\\\\" alt=\\\\\\\"Partners\\\\\\\" class=\\\\\\\""
                        "img-responsive\\\\\\\">\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"has"
                        "-alt\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Element has an alt "
                        "attribute\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"non"
                        "e\\\":[]},{\\\"target\\\":[\\\"#fh5co-trusted > .fh5co-trusted > .container > di"
                        "v:nth-of-type(2) > .col";
long WebSocketSendLen96   = sizeof(WebSocketSend96) - 1;	 

 

char WebSocketSend97[] = "id-18 index-56 total-92 -md-2.col-sm-12.col-xs-12 > .partner-logo.to-animate-2 >"
                        " .img-responsive\\\"],\\\"html\\\":\\\"<img src=\\\\\\\"images/logo5.png\\\\\\\""
                        " alt=\\\\\\\"Partners\\\\\\\" class=\\\\\\\"img-responsive\\\\\\\">\\\",\\\"impa"
                        "ct\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"has-alt\\\",\\\"impact\\\":\\\"critical"
                        "\\\",\\\"message\\\":\\\"Element has an alt attribute\\\",\\\"data\\\":null,\\\""
                        "relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"body "
                        "> bl > .logo\\\"],\\\"html\\\":\\\"<img src=\\\\\\\"data:image/png;base64,iVBORw"
                        "0KGgoAAAANSUhEUgAAACgAAAAoCAMAAAC7IEhfAAACplBMVEX/////AAB/AAD/fwD/VQD/Pz//VSriVB"
                        "zdRCLuVSLfTx/hSy3lTCbdTSHfSirgUSjjSCTlTCLkSSjkUCjmTiTiTyfoTyfhTifiTCbmTCbjTSThSy"
                        "XkTCbkSyXjSyXjTiXjTCTjSyTkTSbiTCTlTCTjSyXkTSXkTCTiSyfkTCblTSbjTCbkTCbkTCXlTSbjTC"
                        "biTSbkTCblTSXkTSXkTSXkTCXjTSXjTSbkTSXjTSXjTSbkTSXkTSbjTCbjTSXkTCbkTCbiTSbkTSbjTC"
                        "bjTSXjTCXjTSbjTCXkTCXjTCXkTCXjTCXjTSXjTCbjTSbkTSbjTCbkTSbkTCbjTCbjTSbjTCXkTCbkTS"
                        "bjTSbjTCXkTSbjTCXjTSXkTSXjTCbkTSb////xZSnkTibrWSjoVCftXijpVifqVyfqWCfqd1rlTibrWi"
                        "jtXSjob1DvYinwZivxZCnlTybyfUr0jmL6z7376OP76uX97+r99PL99/T9+ffmUSbpVyfmUCbkUCnqWS"
                        "fmUSfqfGDmXzzmYT/rWyjrfmLsWyjsXCjsbkbsiG7mZUTnUiftflvtinDtkHjuXyjuYCjulH3vYSjnUy"
                        "fwYinwZCnnYT/waC3nZEPnZkTxazHxcDjxcDnxcTryeETye0jyfErnZkXyfk3ysJ/zglHzi1/zjF/zjW"
                        "LztaXztqb0i17kUCr0kmn0u6z1mXH1rZH2poP2yLz2zsP3rY73r5D30cf4w674xK741s75zLj50L753N"
                        "XoVSf65uD73M/74db75Nr75uD75+LobU3obk776ub77Oj77ur859z86OD88Ov88e/88/D89fT97+njTy"
                        "n98ezjUSvlUCb99/X9+Pb9+Pfpdln+9fL+9/X++ff++vj/+/n//Pv//fz//f3pd1rpeFv//v6yzbn+AA"
                        "AAX3RSTlMAAQICAwQGCQ8PEBEUFxgZHB4mJiotLTQ1NTg9Q0RKS1NUVlpaXmBhYmpwcXJ1d3h9f4CHjo"
                        "+Xl5uenqSlpqittLW5u7zExsvL0tLY2dvh4eLk6Onq7O/w8fL3+fv7/UUm+e4AAAJFSURBVHhehdJlYx"
                        "Q7GIbhLO5erEhxitNiRU6RLl5cCpQ+mZW6u+Du7u7u7u7ubuefMJkkm2F2u70/JXmvT0kIIVEoqShiFF"
                        "kijOTQDkuODHOJgJ3DcCt0auZWA+Ec9vQPk4EeHIb4hwuAEA6D/cPZQDCHQf7hDCCIw0Bf8PCXy1lpBn"
                        "QBgRzW9gEPFlJK75zZocPlQC0OK3nDQ7pjFehwJlCBQ9s0Kzz2gSrowFQb4Y2G3tu5kK34ShXcCIwioq"
                        "EAVj2m52Zx9+k9NcFUYIiEAwBc149z7jOXwF2hgGuA/hL2FpDmrwR+f2arb6euCegGwiQMNeDZu5T+3J"
                        "/wnIEnB7RsARcBoRK2N+CReTf10f9snr1T80An0E7Clhxi/j1KmT29WVMwDmghYWMBsdSAJ52aCd4AGk"
                        "lYV8CUFwb8dWm7Ca4HAiSsyuED5j6y+a3dChYBVSQsG8PgxXxKX67dksNAXpYHJiK6DJGNF/f48A+wNZ"
                        "etfpwX95gOjCOehnN4ZRP0lj2iIgY3AMMUjAAW5tKjx2G0l0kJ1wCDFOwL4HUKZEteKegG+ijY3fIf9z"
                        "zzwMVANwU7W6CWmcfh021JQCcF21qhlvmG0u9XT6Rp8UAbBZt6QW3f7Qu7NL1YoImC9a1Q5QLqKVizeD"
                        "gHqKFg+WJhagZiyhHVFF8w3R1XBGASMTXSC65LcjlgNMIMq7f+b6KC8cmx78Cb0K9VNfJvpRt2HTwd5q"
                        "LtXRqUIj6r3DxsrFBjejWrSPxlC+gYMXlghzrE2l/nse3AksfajAAAAABJRU5ErkJggg==\\\\\\\" t"
                        "itle=\\\\\\\"Web Essentials\\\\\\\" alt=\\\\\\\"Web Essentials\\\\\\\" class=\\\\"
                        "\\\"logo\\\\\\\" draggable=\\\\\\\"true\\\\\\\">\\\",\\\"impact\\\":null,\\\"any"
                        "\\\":[{\\\"id\\\":\\\"has-alt\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\""
                        ":\\\"Element has an alt attribute\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}"
                        ",{\\\"id\\\":\\\"non-empty-title\\\",\\\"impact\\\":\\\"critical\\\",\\\"message"
                        "\\\":\\\"Element has a title attribute\\\",\\\"data\\\":null,\\\"relatedNodes\\\""
                        ":[]}],\\\"all\\\":[],\\\"none\\\":[]}]},{\\\"id\\\":\\\"image-redundant-alt\\\","
                        "\\\"description\\\":\\\"Ensure button and link text is not repeated as image alt"
                        "ernative\\\",\\\"help\\\":\\\"Text of buttons and links should not be repeated i"
                        "n the image alternative\\\",\\\"helpUrl\\\":\\\"https://dequeuniversity.com/rule"
                        "s/axe/2.0/image-redundant-alt?application=axeAPI\\\",\\\"impact\\\"";
long WebSocketSendLen97   = sizeof(WebSocketSend97) - 1;	 

 

char WebSocketSend98[] = "id-18 index-57 total-92 :null,\\\"tags\\\":[\\\"best-practice\\\"],\\\"nodes\\\""
                        ":[{\\\"target\\\":[\\\"#fh5co-header > .fluid-container > .navbar.navbar-default"
                        " > .navbar-header > .navbar-brand\\\"],\\\"html\\\":\\\"<a class=\\\\\\\"navbar-"
                        "brand\\\\\\\" href=\\\\\\\"index.html\\\\\\\" style=\\\\\\\"font-family: &quot;C"
                        "urlz MT&quot;; font-weight: bold; font-style: oblique; color: rgb(0, 0, 0);\\\\\\"
                        "\">Mahesh Babu</a>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"non"
                        "e\\\":[{\\\"id\\\":\\\"duplicate-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\\""
                        "message\\\":\\\"Element does not duplicate existing text in <img> alt text\\\",\\"
                        "\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#navbar > .nav.n"
                        "avbar-nav.navbar-right > li:nth-of-type(1)\\\"],\\\"html\\\":\\\"<li class=\\\\\\"
                        "\"\\\\\\\"><a href=\\\\\\\"Index.aspx\\\\\\\" data-nav-section=\\\\\\\"home\\\\\\"
                        "\"><span>Home</span></a></li>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\""
                        ":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-label\\\",\\\"impact\\\":\\\"min"
                        "or\\\",\\\"message\\\":\\\"Element does not duplicate existing text in <img> alt"
                        " text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#nav"
                        "bar > .nav.navbar-nav.navbar-right > li:nth-of-type(1) > a\\\"],\\\"html\\\":\\\""
                        "<a href=\\\\\\\"Index.aspx\\\\\\\" data-nav-section=\\\\\\\"home\\\\\\\"><span>H"
                        "ome</span></a>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\""
                        ":[{\\\"id\\\":\\\"duplicate-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\\"messa"
                        "ge\\\":\\\"Element does not duplicate existing text in <img> alt text\\\",\\\"da"
                        "ta\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#navbar > .nav.navba"
                        "r-nav.navbar-right > li:nth-of-type(2)\\\"],\\\"html\\\":\\\"<li><a href=\\\\\\\""
                        "#\\\\\\\" data-nav-section=\\\\\\\"explore\\\\\\\"><span>Explore</span></a></li>"
                        "\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\""
                        ":\\\"duplicate-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"El"
                        "ement does not duplicate existing text in <img> alt text\\\",\\\"data\\\":null,\\"
                        "\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#navbar > .nav.navbar-nav.navbar-r"
                        "ight > li:nth-of-type(2) > a\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" dat"
                        "a-nav-section=\\\\\\\"explore\\\\\\\"><span>Explore</span></a>\\\",\\\"impact\\\""
                        ":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-"
                        "label\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Element does not dupl"
                        "icate existing text in <img> alt text\\\",\\\"data\\\":null,\\\"relatedNodes\\\""
                        ":[]}]},{\\\"target\\\":[\\\"#navbar > .nav.navbar-nav.navbar-right > .active\\\""
                        "],\\\"html\\\":\\\"<li class=\\\\\\\"active\\\\\\\"><a href=\\\\\\\"#\\\\\\\" da"
                        "ta-nav-section=\\\\\\\"testimony\\\\\\\"><span>Testimony</span></a></li>\\\",\\\""
                        "impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"dupl"
                        "icate-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Element doe"
                        "s not duplicate existing text in <img> alt text\\\",\\\"data\\\":null,\\\"relate"
                        "dNodes\\\":[]}]},{\\\"target\\\":[\\\"#navbar > .nav.navbar-nav.navbar-right > ."
                        "active > a\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" data-nav-section=\\\\"
                        "\\\"testimony\\\\\\\"><span>Testimony</span></a>\\\",\\\"impact\\\":null,\\\"any"
                        "\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-label\\\",\\\""
                        "impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Element does not duplicate existing"
                        " text in <img> alt text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"ta"
                        "rget\\\":[\\\"#navbar > .nav.navbar-nav.navbar-right > li:nth-of-type(4)\\\"],\\"
                        "\"html\\\":\\\"<li><a href=\\\\\\\"#\\\\\\\" data-nav-section=\\\\\\\"pricing\\\\"
                        "\\\"><span>Pricing</span></a><";
long WebSocketSendLen98   = sizeof(WebSocketSend98) - 1;	 

 

char WebSocketSend99[] = "id-18 index-58 total-92 /li>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":"
                        "[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-label\\\",\\\"impact\\\":\\\"mino"
                        "r\\\",\\\"message\\\":\\\"Element does not duplicate existing text in <img> alt "
                        "text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#navb"
                        "ar > .nav.navbar-nav.navbar-right > li:nth-of-type(4) > a\\\"],\\\"html\\\":\\\""
                        "<a href=\\\\\\\"#\\\\\\\" data-nav-section=\\\\\\\"pricing\\\\\\\"><span>Pricing"
                        "</span></a>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":["
                        "{\\\"id\\\":\\\"duplicate-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\\"message"
                        "\\\":\\\"Element does not duplicate existing text in <img> alt text\\\",\\\"data"
                        "\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#navbar > .nav.navbar-"
                        "nav.navbar-right > li:nth-of-type(5)\\\"],\\\"html\\\":\\\"<li><a href=\\\\\\\"#"
                        "\\\\\\\" data-nav-section=\\\\\\\"services\\\\\\\"><span>Services</span></a></li"
                        ">\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\""
                        ":\\\"duplicate-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"El"
                        "ement does not duplicate existing text in <img> alt text\\\",\\\"data\\\":null,\\"
                        "\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#navbar > .nav.navbar-nav.navbar-r"
                        "ight > li:nth-of-type(5) > a\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" dat"
                        "a-nav-section=\\\\\\\"services\\\\\\\"><span>Services</span></a>\\\",\\\"impact\\"
                        "\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-im"
                        "g-label\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Element does not du"
                        "plicate existing text in <img> alt text\\\",\\\"data\\\":null,\\\"relatedNodes\\"
                        "\":[]}]},{\\\"target\\\":[\\\"#navbar > .nav.navbar-nav.navbar-right > li:nth-of"
                        "-type(6)\\\"],\\\"html\\\":\\\"<li><a href=\\\\\\\"#\\\\\\\" data-nav-section=\\"
                        "\\\\\"team\\\\\\\"><span>Team</span></a></li>\\\",\\\"impact\\\":null,\\\"any\\\""
                        ":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-label\\\",\\\"imp"
                        "act\\\":\\\"minor\\\",\\\"message\\\":\\\"Element does not duplicate existing te"
                        "xt in <img> alt text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"targe"
                        "t\\\":[\\\"#navbar > .nav.navbar-nav.navbar-right > li:nth-of-type(6) > a\\\"],\\"
                        "\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" data-nav-section=\\\\\\\"team\\\\\\\"><"
                        "span>Team</span></a>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"n"
                        "one\\\":[{\\\"id\\\":\\\"duplicate-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\"
                        "\"message\\\":\\\"Element does not duplicate existing text in <img> alt text\\\""
                        ",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#navbar > .na"
                        "v.navbar-nav.navbar-right > li:nth-of-type(7)\\\"],\\\"html\\\":\\\"<li><a href="
                        "\\\\\\\"#\\\\\\\" data-nav-section=\\\\\\\"faq\\\\\\\"><span>FAQ</span></a></li>"
                        "\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\""
                        ":\\\"duplicate-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"El"
                        "ement does not duplicate existing text in <img> alt text\\\",\\\"data\\\":null,\\"
                        "\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#navbar > .nav.navbar-nav.navbar-r"
                        "ight > li:nth-of-type(7) > a\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" dat"
                        "a-nav-section=\\\\\\\"faq\\\\\\\"><span>FAQ</span></a>\\\",\\\"impact\\\":null,\\"
                        "\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-label\\\""
                        ",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Element does not duplicate exi"
                        "sting text in <img> alt text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\"
                        "\"target\\\":[\\\"#navbar > .nav.navbar-nav.navbar-right > .call-to-action\\\"],"
                        "\\\"html\\\":\\\"<li class=\\\\\\\"call-to-action\\\\\\\"><a href=\\\\\\\"#\\\\\\"
                        "\"><span>Sign up free</span></a></li>\\\",\\\"impa";
long WebSocketSendLen99   = sizeof(WebSocketSend99) - 1;	 

 

char WebSocketSend100[] = "id-18 index-59 total-92 ct\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":["
                        "{\\\"id\\\":\\\"duplicate-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\\"message"
                        "\\\":\\\"Element does not duplicate existing text in <img> alt text\\\",\\\"data"
                        "\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#navbar > .nav.navbar-"
                        "nav.navbar-right > .call-to-action > a\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\"
                        "\\\\\"><span>Sign up free</span></a>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\""
                        "all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-label\\\",\\\"impact\\\":"
                        "\\\"minor\\\",\\\"message\\\":\\\"Element does not duplicate existing text in <i"
                        "mg> alt text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\"
                        "\"#fh5co-testimony > .container > .row > .col-md-12.to-animate.fadeInUp.animated"
                        " > .wrap-testimony > .owl-carousel-fullwidth.owl-carousel.owl-theme.owl-responsi"
                        "ve--1.owl-loaded > .owl-stage-outer.owl-height > .owl-stage > div:nth-of-type(1)"
                        " > .item > .testimony-slide.active.text-center > blockquote > p\\\"],\\\"html\\\""
                        ":\\\"<p>\\\\\\\"On the eve of Gram Jyothi, Srimanthudu is a Fab movie to catch: "
                        "focus on rural development &amp; Social responsibility. Great Job @urstrulyMahes"
                        "h\\\\\\\"</p>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\""
                        ":[{\\\"id\\\":\\\"duplicate-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\\"messa"
                        "ge\\\":\\\"Element does not duplicate existing text in <img> alt text\\\",\\\"da"
                        "ta\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-testimony > ."
                        "container > .row > .col-md-12.to-animate.fadeInUp.animated > .wrap-testimony > ."
                        "owl-carousel-fullwidth.owl-carousel.owl-theme.owl-responsive--1.owl-loaded > .ow"
                        "l-stage-outer.owl-height > .owl-stage > div:nth-of-type(1) > .item > .testimony-"
                        "slide.active.text-center > span > .twitter\\\"],\\\"html\\\":\\\"<a href=\\\\\\\""
                        "#\\\\\\\" class=\\\\\\\"twitter\\\\\\\">Twitter</a>\\\",\\\"impact\\\":null,\\\""
                        "any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-label\\\","
                        "\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Element does not duplicate exis"
                        "ting text in <img> alt text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\"
                        "\"target\\\":[\\\"#fh5co-testimony > .container > .row > .col-md-12.to-animate.f"
                        "adeInUp.animated > .wrap-testimony > .owl-carousel-fullwidth.owl-carousel.owl-th"
                        "eme.owl-responsive--1.owl-loaded > .owl-stage-outer.owl-height > .owl-stage > di"
                        "v:nth-of-type(2) > .item > .testimony-slide.active.text-center > blockquote > p\\"
                        "\"],\\\"html\\\":\\\"<p>\\\\\\\"Other than Super Star @urstrulyMahesh i don't kn"
                        "ow if i like any body as an actor.\\\\\\\"</p>\\\",\\\"impact\\\":null,\\\"any\\"
                        "\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-label\\\",\\\"i"
                        "mpact\\\":\\\"minor\\\",\\\"message\\\":\\\"Element does not duplicate existing "
                        "text in <img> alt text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"tar"
                        "get\\\":[\\\"#fh5co-testimony > .container > .row > .col-md-12.to-animate.fadeIn"
                        "Up.animated > .wrap-testimony > .owl-carousel-fullwidth.owl-carousel.owl-theme.o"
                        "wl-responsive--1.owl-loaded > .owl-stage-outer.owl-height > .owl-stage > div:nth"
                        "-of-type(2) > .item > .testimony-slide.active.text-center > span > .twitter\\\"]"
                        ",\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"twitter\\\\\\\">Twitte"
                        "r</a>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"i"
                        "d\\\":\\\"duplicate-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\"
                        "\"Element does not duplicate existing text in <img> alt text\\\",";
long WebSocketSendLen100   = sizeof(WebSocketSend100) - 1;	 

 

char WebSocketSend101[] = "id-18 index-60 total-92 \\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target"
                        "\\\":[\\\"#fh5co-testimony > .container > .row > .col-md-12.to-animate.fadeInUp."
                        "animated > .wrap-testimony > .owl-carousel-fullwidth.owl-carousel.owl-theme.owl-"
                        "responsive--1.owl-loaded > .owl-stage-outer.owl-height > .owl-stage > .owl-item."
                        "active > .item > .testimony-slide.active.text-center > blockquote > p\\\"],\\\"h"
                        "tml\\\":\\\"<p>\\\\\\\"Srimanthudu is a special film for many reasons:) Gained i"
                        "mmense respect and love from all my fans... Made me more human:)\\\\\\\"</p>\\\""
                        ",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\""
                        "duplicate-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Element"
                        " does not duplicate existing text in <img> alt text\\\",\\\"data\\\":null,\\\"re"
                        "latedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-testimony > .container > .row >"
                        " .col-md-12.to-animate.fadeInUp.animated > .wrap-testimony > .owl-carousel-fullw"
                        "idth.owl-carousel.owl-theme.owl-responsive--1.owl-loaded > .owl-stage-outer.owl-"
                        "height > .owl-stage > .owl-item.active > .item > .testimony-slide.active.text-ce"
                        "nter > span > .twitter\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" class=\\\\"
                        "\\\"twitter\\\\\\\">Twitter</a>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\"
                        "\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-label\\\",\\\"impact\\\":\\\"m"
                        "inor\\\",\\\"message\\\":\\\"Element does not duplicate existing text in <img> a"
                        "lt text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#f"
                        "h5co-testimony > .container > .row > .col-md-12.to-animate.fadeInUp.animated > ."
                        "wrap-testimony > .owl-carousel-fullwidth.owl-carousel.owl-theme.owl-responsive--"
                        "1.owl-loaded > .owl-stage-outer.owl-height > .owl-stage > div:nth-of-type(4) > ."
                        "item > .testimony-slide.active.text-center > blockquote > p\\\"],\\\"html\\\":\\"
                        "\"<p>\\\\\\\"On the eve of Gram Jyothi, Srimanthudu is a Fab movie to catch: foc"
                        "us on rural development &amp; Social responsibility. Great Job @urstrulyMahesh\\"
                        "\\\\\"</p>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{"
                        "\\\"id\\\":\\\"duplicate-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\"
                        "\":\\\"Element does not duplicate existing text in <img> alt text\\\",\\\"data\\"
                        "\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-testimony > .cont"
                        "ainer > .row > .col-md-12.to-animate.fadeInUp.animated > .wrap-testimony > .owl-"
                        "carousel-fullwidth.owl-carousel.owl-theme.owl-responsive--1.owl-loaded > .owl-st"
                        "age-outer.owl-height > .owl-stage > div:nth-of-type(4) > .item > .testimony-slid"
                        "e.active.text-center > span > .twitter\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\"
                        "\\\\\" class=\\\\\\\"twitter\\\\\\\">Twitter</a>\\\",\\\"impact\\\":null,\\\"any"
                        "\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-label\\\",\\\""
                        "impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Element does not duplicate existing"
                        " text in <img> alt text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"ta"
                        "rget\\\":[\\\"#fh5co-testimony > .container > .row > .col-md-12.to-animate.fadeI"
                        "nUp.animated > .wrap-testimony > .owl-carousel-fullwidth.owl-carousel.owl-theme."
                        "owl-responsive--1.owl-loaded > .owl-stage-outer.owl-height > .owl-stage > div:nt"
                        "h-of-type(5) > .item > .testimony-slide.active.text-center > blockquote > p\\\"]"
                        ",\\\"html\\\":\\\"<p>\\\\\\\"Other than Super Star @urstrulyMahesh i don't know "
                        "if i like any body as an actor.\\\\\\\"</p>\\\",\\\"impact\\\":null,\\\"an";
long WebSocketSendLen101   = sizeof(WebSocketSend101) - 1;	 

 

char WebSocketSend102[] = "id-18 index-61 total-92 y\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"du"
                        "plicate-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Element d"
                        "oes not duplicate existing text in <img> alt text\\\",\\\"data\\\":null,\\\"rela"
                        "tedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-testimony > .container > .row > ."
                        "col-md-12.to-animate.fadeInUp.animated > .wrap-testimony > .owl-carousel-fullwid"
                        "th.owl-carousel.owl-theme.owl-responsive--1.owl-loaded > .owl-stage-outer.owl-he"
                        "ight > .owl-stage > div:nth-of-type(5) > .item > .testimony-slide.active.text-ce"
                        "nter > span > .twitter\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" class=\\\\"
                        "\\\"twitter\\\\\\\">Twitter</a>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\"
                        "\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-label\\\",\\\"impact\\\":\\\"m"
                        "inor\\\",\\\"message\\\":\\\"Element does not duplicate existing text in <img> a"
                        "lt text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#f"
                        "h5co-testimony > .container > .row > .col-md-12.to-animate.fadeInUp.animated > ."
                        "wrap-testimony > .owl-carousel-fullwidth.owl-carousel.owl-theme.owl-responsive--"
                        "1.owl-loaded > .owl-stage-outer.owl-height > .owl-stage > div:nth-of-type(6) > ."
                        "item > .testimony-slide.active.text-center > blockquote > p\\\"],\\\"html\\\":\\"
                        "\"<p>\\\\\\\"Srimanthudu is a special film for many reasons:) Gained immense res"
                        "pect and love from all my fans... Made me more human:)\\\\\\\"</p>\\\",\\\"impac"
                        "t\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate"
                        "-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Element does not"
                        " duplicate existing text in <img> alt text\\\",\\\"data\\\":null,\\\"relatedNode"
                        "s\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-testimony > .container > .row > .col-md-"
                        "12.to-animate.fadeInUp.animated > .wrap-testimony > .owl-carousel-fullwidth.owl-"
                        "carousel.owl-theme.owl-responsive--1.owl-loaded > .owl-stage-outer.owl-height > "
                        ".owl-stage > div:nth-of-type(6) > .item > .testimony-slide.active.text-center > "
                        "span > .twitter\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"tw"
                        "itter\\\\\\\">Twitter</a>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],"
                        "\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-label\\\",\\\"impact\\\":\\\"minor\\"
                        "\",\\\"message\\\":\\\"Element does not duplicate existing text in <img> alt tex"
                        "t\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-t"
                        "estimony > .container > .row > .col-md-12.to-animate.fadeInUp.animated > .wrap-t"
                        "estimony > .owl-carousel-fullwidth.owl-carousel.owl-theme.owl-responsive--1.owl-"
                        "loaded > .owl-stage-outer.owl-height > .owl-stage > div:nth-of-type(7) > .item >"
                        " .testimony-slide.active.text-center > blockquote > p\\\"],\\\"html\\\":\\\"<p>\\"
                        "\\\\\"On the eve of Gram Jyothi, Srimanthudu is a Fab movie to catch: focus on r"
                        "ural development &amp; Social responsibility. Great Job @urstrulyMahesh\\\\\\\"<"
                        "/p>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\"
                        "\":\\\"duplicate-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\""
                        "Element does not duplicate existing text in <img> alt text\\\",\\\"data\\\":null"
                        ",\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-testimony > .container >"
                        " .row > .col-md-12.to-animate.fadeInUp.animated > .wrap-testimony > .owl-carouse"
                        "l-fullwidth.owl-carousel.owl-theme.owl-responsive--1.owl-loaded > .owl-stage-out"
                        "er.owl-height > .owl-stage > div:nth-of-type(7) > .item > .testimony-slide.activ"
                        "e.tex";
long WebSocketSendLen102   = sizeof(WebSocketSend102) - 1;	 

 

char WebSocketSend103[] = "id-18 index-62 total-92 t-center > span > .twitter\\\"],\\\"html\\\":\\\"<a href"
                        "=\\\\\\\"#\\\\\\\" class=\\\\\\\"twitter\\\\\\\">Twitter</a>\\\",\\\"impact\\\":"
                        "null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-l"
                        "abel\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Element does not dupli"
                        "cate existing text in <img> alt text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":"
                        "[]}]},{\\\"target\\\":[\\\"#form1 > .getting-started.getting-started-1.animated "
                        "> .container > .row > .col-md-6.to-animate.fadeInUp.animated > p\\\"],\\\"html\\"
                        "\":\\\"<p>Far far away, behind the word mountains, far from the countries Vokali"
                        "a and Consonantia, there live the blind texts. </p>\\\",\\\"impact\\\":null,\\\""
                        "any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-label\\\","
                        "\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Element does not duplicate exis"
                        "ting text in <img> alt text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\"
                        "\"target\\\":[\\\"#form1 > .getting-started.getting-started-1.animated > .contai"
                        "ner > .row > .col-md-6.to-animate-2.fadeInRight.animated > .call-to-action.text-"
                        "right > .sign-up\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"s"
                        "ign-up\\\\\\\">Sign Up For Free</a>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"a"
                        "ll\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-label\\\",\\\"impact\\\":\\"
                        "\"minor\\\",\\\"message\\\":\\\"Element does not duplicate existing text in <img"
                        "> alt text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\""
                        "#fh5co-pricing > .fh5co-pricing > .container > div:nth-of-type(2) > .pricing > d"
                        "iv:nth-of-type(1) > .price-box.to-animate-2 > p\\\"],\\\"html\\\":\\\"<p>Far far"
                        " away, behind the word mountains, far from the countries Vokalia and Consonantia"
                        ", there live the blind texts. </p>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"al"
                        "l\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-label\\\",\\\"impact\\\":\\"
                        "\"minor\\\",\\\"message\\\":\\\"Element does not duplicate existing text in <img"
                        "> alt text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\""
                        "#fh5co-pricing > .fh5co-pricing > .container > div:nth-of-type(2) > .pricing > d"
                        "iv:nth-of-type(1) > .price-box.to-animate-2 > .btn.btn-select-plan.btn-sm\\\"],\\"
                        "\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"btn btn-select-plan btn-s"
                        "m\\\\\\\">Select Plan</a>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],"
                        "\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-label\\\",\\\"impact\\\":\\\"minor\\"
                        "\",\\\"message\\\":\\\"Element does not duplicate existing text in <img> alt tex"
                        "t\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-p"
                        "ricing > .fh5co-pricing > .container > div:nth-of-type(2) > .pricing > div:nth-o"
                        "f-type(2) > .price-box.to-animate-2 > p\\\"],\\\"html\\\":\\\"<p>Far far away, b"
                        "ehind the word mountains, far from the countries Vokalia and Consonantia, there "
                        "live the blind texts. </p>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[]"
                        ",\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-label\\\",\\\"impact\\\":\\\"minor\\"
                        "\",\\\"message\\\":\\\"Element does not duplicate existing text in <img> alt tex"
                        "t\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-p"
                        "ricing > .fh5co-pricing > .container > div:nth-of-type(2) > .pricing > div:nth-o"
                        "f-type(2) > .price-box.to-animate-2 > .btn.btn-select-plan.btn-sm\\\"],\\\"html\\"
                        "\":\\\"<a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"btn btn-select-plan btn-sm\\\\\\\""
                        ">Select Plan</a>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\"
                        "\":[{\\\"id\\\":\\\"duplicate-img-label\\\",\\\"impa";
long WebSocketSendLen103   = sizeof(WebSocketSend103) - 1;	 

 

char WebSocketSend104[] = "id-18 index-63 total-92 ct\\\":\\\"minor\\\",\\\"message\\\":\\\"Element does no"
                        "t duplicate existing text in <img> alt text\\\",\\\"data\\\":null,\\\"relatedNod"
                        "es\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-pricing > .fh5co-pricing > .container >"
                        " div:nth-of-type(2) > .pricing > div:nth-of-type(3) > .price-box.to-animate-2.po"
                        "pular > p\\\"],\\\"html\\\":\\\"<p>Far far away, behind the word mountains, far "
                        "from the countries Vokalia and Consonantia, there live the blind texts. </p>\\\""
                        ",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\""
                        "duplicate-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Element"
                        " does not duplicate existing text in <img> alt text\\\",\\\"data\\\":null,\\\"re"
                        "latedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-pricing > .fh5co-pricing > .con"
                        "tainer > div:nth-of-type(2) > .pricing > div:nth-of-type(3) > .price-box.to-anim"
                        "ate-2.popular > .btn.btn-select-plan.btn-sm\\\"],\\\"html\\\":\\\"<a href=\\\\\\"
                        "\"#\\\\\\\" class=\\\\\\\"btn btn-select-plan btn-sm\\\\\\\">Select Plan</a>\\\""
                        ",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\""
                        "duplicate-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Element"
                        " does not duplicate existing text in <img> alt text\\\",\\\"data\\\":null,\\\"re"
                        "latedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-pricing > .fh5co-pricing > .con"
                        "tainer > div:nth-of-type(2) > .pricing > div:nth-of-type(4) > .price-box.to-anim"
                        "ate-2 > p\\\"],\\\"html\\\":\\\"<p>Far far away, behind the word mountains, far "
                        "from the countries Vokalia and Consonantia, there live the blind texts. </p>\\\""
                        ",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\""
                        "duplicate-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Element"
                        " does not duplicate existing text in <img> alt text\\\",\\\"data\\\":null,\\\"re"
                        "latedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-pricing > .fh5co-pricing > .con"
                        "tainer > div:nth-of-type(2) > .pricing > div:nth-of-type(4) > .price-box.to-anim"
                        "ate-2 > .btn.btn-select-plan.btn-sm\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\"
                        "\" class=\\\\\\\"btn btn-select-plan btn-sm\\\\\\\">Select Plan</a>\\\",\\\"impa"
                        "ct\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicat"
                        "e-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Element does no"
                        "t duplicate existing text in <img> alt text\\\",\\\"data\\\":null,\\\"relatedNod"
                        "es\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-pricing > .fh5co-pricing > .container >"
                        " div:nth-of-type(3) > .col-md-6.col-md-offset-3.to-animate > p\\\"],\\\"html\\\""
                        ":\\\"<p>Far far away, behind the word mountains, far from the countries Vokalia "
                        "and Consonantia, there live the blind texts. <a href=\\\\\\\"#\\\\\\\">Learn Mor"
                        "e</a></p>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\"
                        "\"id\\\":\\\"duplicate-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\""
                        ":\\\"Element does not duplicate existing text in <img> alt text\\\",\\\"data\\\""
                        ":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-pricing > .fh5co-pr"
                        "icing > .container > div:nth-of-type(3) > .col-md-6.col-md-offset-3.to-animate >"
                        " p > a\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\">Learn More</a>\\\",\\\"im"
                        "pact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplic"
                        "ate-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Element does "
                        "not duplicate existing text in <img> alt text\\\",\\\"data\\\":null,\\\"relatedN"
                        "odes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-services > .fh5co-services > .contain"
                        "er > div:nth-of-type(2) > div:";
long WebSocketSendLen104   = sizeof(WebSocketSend104) - 1;	 

 

char WebSocketSend105[] = "id-18 index-64 total-92 nth-of-type(1) > div:nth-of-type(1) > .fh5co-post.to-ani"
                        "mate > p\\\"],\\\"html\\\":\\\"<p>Far far away, behind the word mountains, far f"
                        "rom the countries Vokalia and Consonantia, there live the blind texts. Separated"
                        " they live in.</p>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"non"
                        "e\\\":[{\\\"id\\\":\\\"duplicate-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\\""
                        "message\\\":\\\"Element does not duplicate existing text in <img> alt text\\\",\\"
                        "\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-services "
                        "> .fh5co-services > .container > div:nth-of-type(2) > div:nth-of-type(1) > div:n"
                        "th-of-type(2) > .fh5co-post.to-animate > p\\\"],\\\"html\\\":\\\"<p>Far far away"
                        ", behind the word mountains, far from the countries Vokalia and Consonantia, the"
                        "re live the blind texts. Separated they live in.</p>\\\",\\\"impact\\\":null,\\\""
                        "any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-label\\\","
                        "\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Element does not duplicate exis"
                        "ting text in <img> alt text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\"
                        "\"target\\\":[\\\"#fh5co-services > .fh5co-services > .container > div:nth-of-ty"
                        "pe(2) > div:nth-of-type(2) > div:nth-of-type(1) > .fh5co-post.to-animate > p\\\""
                        "],\\\"html\\\":\\\"<p>Far far away, behind the word mountains, far from the coun"
                        "tries Vokalia and Consonantia, there live the blind texts. Separated they live i"
                        "n.</p>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\""
                        "id\\\":\\\"duplicate-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":"
                        "\\\"Element does not duplicate existing text in <img> alt text\\\",\\\"data\\\":"
                        "null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-services > .fh5co-se"
                        "rvices > .container > div:nth-of-type(2) > div:nth-of-type(2) > div:nth-of-type("
                        "2) > .fh5co-post.to-animate > p\\\"],\\\"html\\\":\\\"<p>Far far away, behind th"
                        "e word mountains, far from the countries Vokalia and Consonantia, there live the"
                        " blind texts. Separated they live in.</p>\\\",\\\"impact\\\":null,\\\"any\\\":[]"
                        ",\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-label\\\",\\\"impact"
                        "\\\":\\\"minor\\\",\\\"message\\\":\\\"Element does not duplicate existing text "
                        "in <img> alt text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\"
                        "\":[\\\"#fh5co-services > .fh5co-services > .container > div:nth-of-type(2) > di"
                        "v:nth-of-type(3) > div:nth-of-type(1) > .fh5co-post.to-animate > p\\\"],\\\"html"
                        "\\\":\\\"<p>Far far away, behind the word mountains, far from the countries Voka"
                        "lia and Consonantia, there live the blind texts. Separated they live in.</p>\\\""
                        ",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\""
                        "duplicate-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Element"
                        " does not duplicate existing text in <img> alt text\\\",\\\"data\\\":null,\\\"re"
                        "latedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-services > .fh5co-services > .c"
                        "ontainer > div:nth-of-type(2) > div:nth-of-type(3) > div:nth-of-type(2) > .fh5co"
                        "-post.to-animate > p\\\"],\\\"html\\\":\\\"<p>Far far away, behind the word moun"
                        "tains, far from the countries Vokalia and Consonantia, there live the blind text"
                        "s. Separated they live in.</p>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\""
                        ":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-label\\\",\\\"impact\\\":\\\"min"
                        "or\\\",\\\"message\\\":\\\"Element does not duplicate existing text in <img> alt"
                        " text\\\",\\\"data\\\":nul";
long WebSocketSendLen105   = sizeof(WebSocketSend105) - 1;	 

 

char WebSocketSend106[] = "id-18 index-65 total-92 l,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co"
                        "-services > .fh5co-services > .container > .call-to-action.text-center.to-animat"
                        "e > .btn.btn-learn\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" class=\\\\\\\""
                        "btn btn-learn\\\\\\\">Learn More</a>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\""
                        "all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-label\\\",\\\"impact\\\":"
                        "\\\"minor\\\",\\\"message\\\":\\\"Element does not duplicate existing text in <i"
                        "mg> alt text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\"
                        "\"#fh5co-team > .fh5co-team > .container > div:nth-of-type(2) > div:nth-of-type("
                        "1) > .team-box.text-center.to-animate-2 > p\\\"],\\\"html\\\":\\\"<p>Far far awa"
                        "y, behind the word mountains, far from the countries Vokalia and Consonantia, th"
                        "ere live the blind texts. Separated they live in Bookmarksgrove right at the coa"
                        "st of the Semantics, a large language ocean.</p>\\\",\\\"impact\\\":null,\\\"any"
                        "\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-label\\\",\\\""
                        "impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Element does not duplicate existing"
                        " text in <img> alt text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"ta"
                        "rget\\\":[\\\"#fh5co-team > .fh5co-team > .container > div:nth-of-type(2) > div:"
                        "nth-of-type(1) > .team-box.text-center.to-animate-2 > .social-media > li:nth-of-"
                        "type(1)\\\"],\\\"html\\\":\\\"<li><a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"facebo"
                        "ok\\\\\\\"><i class=\\\\\\\"icon-facebook\\\\\\\"></i></a></li>\\\",\\\"impact\\"
                        "\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-im"
                        "g-label\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Element does not du"
                        "plicate existing text in <img> alt text\\\",\\\"data\\\":null,\\\"relatedNodes\\"
                        "\":[]}]},{\\\"target\\\":[\\\"#fh5co-team > .fh5co-team > .container > div:nth-o"
                        "f-type(2) > div:nth-of-type(1) > .team-box.text-center.to-animate-2 > .social-me"
                        "dia > li:nth-of-type(1) > .facebook\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\"
                        "\" class=\\\\\\\"facebook\\\\\\\"><i class=\\\\\\\"icon-facebook\\\\\\\"></i></a"
                        ">\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\""
                        ":\\\"duplicate-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"El"
                        "ement does not duplicate existing text in <img> alt text\\\",\\\"data\\\":null,\\"
                        "\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-team > .fh5co-team > .conta"
                        "iner > div:nth-of-type(2) > div:nth-of-type(1) > .team-box.text-center.to-animat"
                        "e-2 > .social-media > li:nth-of-type(2)\\\"],\\\"html\\\":\\\"<li><a href=\\\\\\"
                        "\"#\\\\\\\" class=\\\\\\\"twitter\\\\\\\"><i class=\\\\\\\"icon-twitter\\\\\\\">"
                        "</i></a></li>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\""
                        ":[{\\\"id\\\":\\\"duplicate-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\\"messa"
                        "ge\\\":\\\"Element does not duplicate existing text in <img> alt text\\\",\\\"da"
                        "ta\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-team > .fh5co"
                        "-team > .container > div:nth-of-type(2) > div:nth-of-type(1) > .team-box.text-ce"
                        "nter.to-animate-2 > .social-media > li:nth-of-type(2) > .twitter\\\"],\\\"html\\"
                        "\":\\\"<a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"twitter\\\\\\\"><i class=\\\\\\\""
                        "icon-twitter\\\\\\\"></i></a>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\""
                        ":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-label\\\",\\\"impact\\\":\\\"min"
                        "or\\\",\\\"message\\\":\\\"Element does not duplicate existing text in <img> alt"
                        " text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5"
                        "co-team > .fh5co-team > .container > div:nth-of-type(2) > div:nth-of-type(1)";
long WebSocketSendLen106   = sizeof(WebSocketSend106) - 1;	 

 

char WebSocketSend107[] = "id-18 index-66 total-92  > .team-box.text-center.to-animate-2 > .social-media > "
                        "li:nth-of-type(3)\\\"],\\\"html\\\":\\\"<li><a href=\\\\\\\"#\\\\\\\" class=\\\\"
                        "\\\"dribbble\\\\\\\"><i class=\\\\\\\"icon-dribbble\\\\\\\"></i></a></li>\\\",\\"
                        "\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"du"
                        "plicate-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Element d"
                        "oes not duplicate existing text in <img> alt text\\\",\\\"data\\\":null,\\\"rela"
                        "tedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-team > .fh5co-team > .container >"
                        " div:nth-of-type(2) > div:nth-of-type(1) > .team-box.text-center.to-animate-2 > "
                        ".social-media > li:nth-of-type(3) > .dribbble\\\"],\\\"html\\\":\\\"<a href=\\\\"
                        "\\\"#\\\\\\\" class=\\\\\\\"dribbble\\\\\\\"><i class=\\\\\\\"icon-dribbble\\\\\\"
                        "\"></i></a>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":["
                        "{\\\"id\\\":\\\"duplicate-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\\"message"
                        "\\\":\\\"Element does not duplicate existing text in <img> alt text\\\",\\\"data"
                        "\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-team > .fh5co-t"
                        "eam > .container > div:nth-of-type(2) > div:nth-of-type(1) > .team-box.text-cent"
                        "er.to-animate-2 > .social-media > li:nth-of-type(4)\\\"],\\\"html\\\":\\\"<li><a"
                        " href=\\\\\\\"#\\\\\\\" class=\\\\\\\"codepen\\\\\\\"><i class=\\\\\\\"icon-code"
                        "pen\\\\\\\"></i></a></li>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],"
                        "\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-label\\\",\\\"impact\\\":\\\"minor\\"
                        "\",\\\"message\\\":\\\"Element does not duplicate existing text in <img> alt tex"
                        "t\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-t"
                        "eam > .fh5co-team > .container > div:nth-of-type(2) > div:nth-of-type(1) > .team"
                        "-box.text-center.to-animate-2 > .social-media > li:nth-of-type(4) > .codepen\\\""
                        "],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"codepen\\\\\\\"><i cl"
                        "ass=\\\\\\\"icon-codepen\\\\\\\"></i></a>\\\",\\\"impact\\\":null,\\\"any\\\":[]"
                        ",\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-label\\\",\\\"impact"
                        "\\\":\\\"minor\\\",\\\"message\\\":\\\"Element does not duplicate existing text "
                        "in <img> alt text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\"
                        "\":[\\\"#fh5co-team > .fh5co-team > .container > div:nth-of-type(2) > div:nth-of"
                        "-type(1) > .team-box.text-center.to-animate-2 > .social-media > li:nth-of-type(5"
                        ")\\\"],\\\"html\\\":\\\"<li><a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"github\\\\\\"
                        "\"><i class=\\\\\\\"icon-github-alt\\\\\\\"></i></a></li>\\\",\\\"impact\\\":nul"
                        "l,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-labe"
                        "l\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Element does not duplicat"
                        "e existing text in <img> alt text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}"
                        "]},{\\\"target\\\":[\\\"#fh5co-team > .fh5co-team > .container > div:nth-of-type"
                        "(2) > div:nth-of-type(1) > .team-box.text-center.to-animate-2 > .social-media > "
                        "li:nth-of-type(5) > .github\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" clas"
                        "s=\\\\\\\"github\\\\\\\"><i class=\\\\\\\"icon-github-alt\\\\\\\"></i></a>\\\",\\"
                        "\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"du"
                        "plicate-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Element d"
                        "oes not duplicate existing text in <img> alt text\\\",\\\"data\\\":null,\\\"rela"
                        "tedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-team > .fh5co-team > .container >"
                        " div:nth-of-type(2) > div:nth-of-type(2) > .team-box.text-center.to-animate-2 > "
                        "p\\\"],\\\"html\\\":\\\"<p>Far far away, behind the word mountains, far from the"
                        " countries Vokalia and Consona";
long WebSocketSendLen107   = sizeof(WebSocketSend107) - 1;	 

 

char WebSocketSend108[] = "id-18 index-67 total-92 ntia, there live the blind texts. Separated they live in"
                        " Bookmarksgrove right at the coast of the Semantics, a large language ocean.</p>"
                        "\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\""
                        ":\\\"duplicate-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"El"
                        "ement does not duplicate existing text in <img> alt text\\\",\\\"data\\\":null,\\"
                        "\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-team > .fh5co-team > .conta"
                        "iner > div:nth-of-type(2) > div:nth-of-type(2) > .team-box.text-center.to-animat"
                        "e-2 > .social-media > li:nth-of-type(1)\\\"],\\\"html\\\":\\\"<li><a href=\\\\\\"
                        "\"#\\\\\\\" class=\\\\\\\"facebook\\\\\\\"><i class=\\\\\\\"icon-facebook\\\\\\\""
                        "></i></a></li>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\""
                        ":[{\\\"id\\\":\\\"duplicate-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\\"messa"
                        "ge\\\":\\\"Element does not duplicate existing text in <img> alt text\\\",\\\"da"
                        "ta\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-team > .fh5co"
                        "-team > .container > div:nth-of-type(2) > div:nth-of-type(2) > .team-box.text-ce"
                        "nter.to-animate-2 > .social-media > li:nth-of-type(1) > .facebook\\\"],\\\"html\\"
                        "\":\\\"<a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"facebook\\\\\\\"><i class=\\\\\\\""
                        "icon-facebook\\\\\\\"></i></a>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\""
                        ":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-label\\\",\\\"impact\\\":\\\"min"
                        "or\\\",\\\"message\\\":\\\"Element does not duplicate existing text in <img> alt"
                        " text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5"
                        "co-team > .fh5co-team > .container > div:nth-of-type(2) > div:nth-of-type(2) > ."
                        "team-box.text-center.to-animate-2 > .social-media > li:nth-of-type(2)\\\"],\\\"h"
                        "tml\\\":\\\"<li><a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"twitter\\\\\\\"><i class"
                        "=\\\\\\\"icon-twitter\\\\\\\"></i></a></li>\\\",\\\"impact\\\":null,\\\"any\\\":"
                        "[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-label\\\",\\\"impa"
                        "ct\\\":\\\"minor\\\",\\\"message\\\":\\\"Element does not duplicate existing tex"
                        "t in <img> alt text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target"
                        "\\\":[\\\"#fh5co-team > .fh5co-team > .container > div:nth-of-type(2) > div:nth-"
                        "of-type(2) > .team-box.text-center.to-animate-2 > .social-media > li:nth-of-type"
                        "(2) > .twitter\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"twi"
                        "tter\\\\\\\"><i class=\\\\\\\"icon-twitter\\\\\\\"></i></a>\\\",\\\"impact\\\":n"
                        "ull,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-la"
                        "bel\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Element does not duplic"
                        "ate existing text in <img> alt text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":["
                        "]}]},{\\\"target\\\":[\\\"#fh5co-team > .fh5co-team > .container > div:nth-of-ty"
                        "pe(2) > div:nth-of-type(2) > .team-box.text-center.to-animate-2 > .social-media "
                        "> li:nth-of-type(3)\\\"],\\\"html\\\":\\\"<li><a href=\\\\\\\"#\\\\\\\" class=\\"
                        "\\\\\"dribbble\\\\\\\"><i class=\\\\\\\"icon-dribbble\\\\\\\"></i></a></li>\\\","
                        "\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\""
                        "duplicate-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Element"
                        " does not duplicate existing text in <img> alt text\\\",\\\"data\\\":null,\\\"re"
                        "latedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-team > .fh5co-team > .container"
                        " > div:nth-of-type(2) > div:nth-of-type(2) > .team-box.text-center.to-animate-2 "
                        "> .social-media > li:nth-of-type(3) > .dribbble\\\"],\\\"html\\\":\\\"<a href=\\"
                        "\\\\\"#\\\\\\\" class=\\\\\\\"dribbble\\\\\\\"><i class=\\\\\\\"icon-dribbble\\\\"
                        "\\\"></i></a>\\\",\\";
long WebSocketSendLen108   = sizeof(WebSocketSend108) - 1;	 

 

char WebSocketSend109[] = "id-18 index-68 total-92 \"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none"
                        "\\\":[{\\\"id\\\":\\\"duplicate-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\\"m"
                        "essage\\\":\\\"Element does not duplicate existing text in <img> alt text\\\",\\"
                        "\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-team > .f"
                        "h5co-team > .container > div:nth-of-type(2) > div:nth-of-type(2) > .team-box.tex"
                        "t-center.to-animate-2 > .social-media > li:nth-of-type(4)\\\"],\\\"html\\\":\\\""
                        "<li><a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"codepen\\\\\\\"><i class=\\\\\\\"ico"
                        "n-codepen\\\\\\\"></i></a></li>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\"
                        "\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-label\\\",\\\"impact\\\":\\\"m"
                        "inor\\\",\\\"message\\\":\\\"Element does not duplicate existing text in <img> a"
                        "lt text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#f"
                        "h5co-team > .fh5co-team > .container > div:nth-of-type(2) > div:nth-of-type(2) >"
                        " .team-box.text-center.to-animate-2 > .social-media > li:nth-of-type(4) > .codep"
                        "en\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"codepen\\\\\\\""
                        "><i class=\\\\\\\"icon-codepen\\\\\\\"></i></a>\\\",\\\"impact\\\":null,\\\"any\\"
                        "\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-label\\\",\\\"i"
                        "mpact\\\":\\\"minor\\\",\\\"message\\\":\\\"Element does not duplicate existing "
                        "text in <img> alt text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"tar"
                        "get\\\":[\\\"#fh5co-team > .fh5co-team > .container > div:nth-of-type(2) > div:n"
                        "th-of-type(2) > .team-box.text-center.to-animate-2 > .social-media > li:nth-of-t"
                        "ype(5)\\\"],\\\"html\\\":\\\"<li><a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"github\\"
                        "\\\\\"><i class=\\\\\\\"icon-github-alt\\\\\\\"></i></a></li>\\\",\\\"impact\\\""
                        ":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-"
                        "label\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Element does not dupl"
                        "icate existing text in <img> alt text\\\",\\\"data\\\":null,\\\"relatedNodes\\\""
                        ":[]}]},{\\\"target\\\":[\\\"#fh5co-team > .fh5co-team > .container > div:nth-of-"
                        "type(2) > div:nth-of-type(2) > .team-box.text-center.to-animate-2 > .social-medi"
                        "a > li:nth-of-type(5) > .github\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" "
                        "class=\\\\\\\"github\\\\\\\"><i class=\\\\\\\"icon-github-alt\\\\\\\"></i></a>\\"
                        "\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\"
                        "\"duplicate-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Eleme"
                        "nt does not duplicate existing text in <img> alt text\\\",\\\"data\\\":null,\\\""
                        "relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-team > .fh5co-team > .contain"
                        "er > div:nth-of-type(2) > div:nth-of-type(3) > .team-box.text-center.to-animate-"
                        "2 > p\\\"],\\\"html\\\":\\\"<p>Far far away, behind the word mountains, far from"
                        " the countries Vokalia and Consonantia, there live the blind texts. Separated th"
                        "ey live in Bookmarksgrove right at the coast of the Semantics, a large language "
                        "ocean.</p>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{"
                        "\\\"id\\\":\\\"duplicate-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\"
                        "\":\\\"Element does not duplicate existing text in <img> alt text\\\",\\\"data\\"
                        "\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-team > .fh5co-tea"
                        "m > .container > div:nth-of-type(2) > div:nth-of-type(3) > .team-box.text-center"
                        ".to-animate-2 > .social-media > li:nth-of-type(1)\\\"],\\\"html\\\":\\\"<li><a h"
                        "ref=\\\\\\\"#\\\\\\\" class=\\\\\\\"facebook\\\\\\\"><i class=\\\\\\\"icon-faceb"
                        "ook\\\\\\\"></i></a></li>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],"
                        "\\\"none\\";
long WebSocketSendLen109   = sizeof(WebSocketSend109) - 1;	 

 

char WebSocketSend110[] = "id-18 index-69 total-92 \":[{\\\"id\\\":\\\"duplicate-img-label\\\",\\\"impact\\"
                        "\":\\\"minor\\\",\\\"message\\\":\\\"Element does not duplicate existing text in"
                        " <img> alt text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\""
                        ":[\\\"#fh5co-team > .fh5co-team > .container > div:nth-of-type(2) > div:nth-of-t"
                        "ype(3) > .team-box.text-center.to-animate-2 > .social-media > li:nth-of-type(1) "
                        "> .facebook\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"facebo"
                        "ok\\\\\\\"><i class=\\\\\\\"icon-facebook\\\\\\\"></i></a>\\\",\\\"impact\\\":nu"
                        "ll,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-lab"
                        "el\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Element does not duplica"
                        "te existing text in <img> alt text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]"
                        "}]},{\\\"target\\\":[\\\"#fh5co-team > .fh5co-team > .container > div:nth-of-typ"
                        "e(2) > div:nth-of-type(3) > .team-box.text-center.to-animate-2 > .social-media >"
                        " li:nth-of-type(2)\\\"],\\\"html\\\":\\\"<li><a href=\\\\\\\"#\\\\\\\" class=\\\\"
                        "\\\"twitter\\\\\\\"><i class=\\\\\\\"icon-twitter\\\\\\\"></i></a></li>\\\",\\\""
                        "impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"dupl"
                        "icate-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Element doe"
                        "s not duplicate existing text in <img> alt text\\\",\\\"data\\\":null,\\\"relate"
                        "dNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-team > .fh5co-team > .container > d"
                        "iv:nth-of-type(2) > div:nth-of-type(3) > .team-box.text-center.to-animate-2 > .s"
                        "ocial-media > li:nth-of-type(2) > .twitter\\\"],\\\"html\\\":\\\"<a href=\\\\\\\""
                        "#\\\\\\\" class=\\\\\\\"twitter\\\\\\\"><i class=\\\\\\\"icon-twitter\\\\\\\"></"
                        "i></a>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\""
                        "id\\\":\\\"duplicate-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":"
                        "\\\"Element does not duplicate existing text in <img> alt text\\\",\\\"data\\\":"
                        "null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-team > .fh5co-team >"
                        " .container > div:nth-of-type(2) > div:nth-of-type(3) > .team-box.text-center.to"
                        "-animate-2 > .social-media > li:nth-of-type(3)\\\"],\\\"html\\\":\\\"<li><a href"
                        "=\\\\\\\"#\\\\\\\" class=\\\\\\\"dribbble\\\\\\\"><i class=\\\\\\\"icon-dribbble"
                        "\\\\\\\"></i></a></li>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\""
                        "none\\\":[{\\\"id\\\":\\\"duplicate-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\"
                        "\"message\\\":\\\"Element does not duplicate existing text in <img> alt text\\\""
                        ",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-team >"
                        " .fh5co-team > .container > div:nth-of-type(2) > div:nth-of-type(3) > .team-box."
                        "text-center.to-animate-2 > .social-media > li:nth-of-type(3) > .dribbble\\\"],\\"
                        "\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"dribbble\\\\\\\"><i class"
                        "=\\\\\\\"icon-dribbble\\\\\\\"></i></a>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\"
                        "\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-label\\\",\\\"impact\\\""
                        ":\\\"minor\\\",\\\"message\\\":\\\"Element does not duplicate existing text in <"
                        "img> alt text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":["
                        "\\\"#fh5co-team > .fh5co-team > .container > div:nth-of-type(2) > div:nth-of-typ"
                        "e(3) > .team-box.text-center.to-animate-2 > .social-media > li:nth-of-type(4)\\\""
                        "],\\\"html\\\":\\\"<li><a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"codepen\\\\\\\"><"
                        "i class=\\\\\\\"icon-codepen\\\\\\\"></i></a></li>\\\",\\\"impact\\\":null,\\\"a"
                        "ny\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-label\\\",\\"
                        "\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Element does not duplicate existi"
                        "ng text in <img> alt text\\\",\\\"data\\\":nu";
long WebSocketSendLen110   = sizeof(WebSocketSend110) - 1;	 

 

char WebSocketSend111[] = "id-18 index-70 total-92 ll,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5c"
                        "o-team > .fh5co-team > .container > div:nth-of-type(2) > div:nth-of-type(3) > .t"
                        "eam-box.text-center.to-animate-2 > .social-media > li:nth-of-type(4) > .codepen\\"
                        "\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"codepen\\\\\\\"><i "
                        "class=\\\\\\\"icon-codepen\\\\\\\"></i></a>\\\",\\\"impact\\\":null,\\\"any\\\":"
                        "[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-label\\\",\\\"impa"
                        "ct\\\":\\\"minor\\\",\\\"message\\\":\\\"Element does not duplicate existing tex"
                        "t in <img> alt text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target"
                        "\\\":[\\\"#fh5co-team > .fh5co-team > .container > div:nth-of-type(2) > div:nth-"
                        "of-type(3) > .team-box.text-center.to-animate-2 > .social-media > li:nth-of-type"
                        "(5)\\\"],\\\"html\\\":\\\"<li><a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"github\\\\"
                        "\\\"><i class=\\\\\\\"icon-github-alt\\\\\\\"></i></a></li>\\\",\\\"impact\\\":n"
                        "ull,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-la"
                        "bel\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Element does not duplic"
                        "ate existing text in <img> alt text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":["
                        "]}]},{\\\"target\\\":[\\\"#fh5co-team > .fh5co-team > .container > div:nth-of-ty"
                        "pe(2) > div:nth-of-type(3) > .team-box.text-center.to-animate-2 > .social-media "
                        "> li:nth-of-type(5) > .github\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" cl"
                        "ass=\\\\\\\"github\\\\\\\"><i class=\\\\\\\"icon-github-alt\\\\\\\"></i></a>\\\""
                        ",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\""
                        "duplicate-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Element"
                        " does not duplicate existing text in <img> alt text\\\",\\\"data\\\":null,\\\"re"
                        "latedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-faq > .fh5co-faq > .container >"
                        " div:nth-of-type(2) > div:nth-of-type(1) > div:nth-of-type(1) > p\\\"],\\\"html\\"
                        "\":\\\"<p>Far far away, behind the word mountains, far from the countries Vokali"
                        "a and Consonantia, there live the blind texts. Separated they live in Bookmarksg"
                        "rove right at the coast of the Semantics, a large language ocean.</p>\\\",\\\"im"
                        "pact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplic"
                        "ate-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Element does "
                        "not duplicate existing text in <img> alt text\\\",\\\"data\\\":null,\\\"relatedN"
                        "odes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-faq > .fh5co-faq > .container > div:n"
                        "th-of-type(2) > div:nth-of-type(1) > div:nth-of-type(2) > p\\\"],\\\"html\\\":\\"
                        "\"<p>Far far away, behind the word mountains, far from the countries Vokalia and"
                        " Consonantia, there live the blind texts. Separated they live in Bookmarksgrove "
                        "right at the coast of the Semantics, a large language ocean.</p>\\\",\\\"impact\\"
                        "\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-im"
                        "g-label\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Element does not du"
                        "plicate existing text in <img> alt text\\\",\\\"data\\\":null,\\\"relatedNodes\\"
                        "\":[]}]},{\\\"target\\\":[\\\"#fh5co-faq > .fh5co-faq > .container > div:nth-of-"
                        "type(2) > div:nth-of-type(1) > div:nth-of-type(3) > p\\\"],\\\"html\\\":\\\"<p>F"
                        "ar far away, behind the word mountains, far from the countries Vokalia and Conso"
                        "nantia, there live the blind texts. Separated they live in Bookmarksgrove right "
                        "at the coast of the Semantics, a large language ocean.</p>\\\",\\\"impact\\\":nu"
                        "ll,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-lab"
                        "el\\\",\\";
long WebSocketSendLen111   = sizeof(WebSocketSend111) - 1;	 

 

char WebSocketSend112[] = "id-18 index-71 total-92 \"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Element d"
                        "oes not duplicate existing text in <img> alt text\\\",\\\"data\\\":null,\\\"rela"
                        "tedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-faq > .fh5co-faq > .container > d"
                        "iv:nth-of-type(2) > div:nth-of-type(2) > div:nth-of-type(1) > p\\\"],\\\"html\\\""
                        ":\\\"<p>Far far away, behind the word mountains, far from the countries Vokalia "
                        "and Consonantia, there live the blind texts. Separated they live in Bookmarksgro"
                        "ve right at the coast of the Semantics, a large language ocean.</p>\\\",\\\"impa"
                        "ct\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicat"
                        "e-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Element does no"
                        "t duplicate existing text in <img> alt text\\\",\\\"data\\\":null,\\\"relatedNod"
                        "es\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-faq > .fh5co-faq > .container > div:nth"
                        "-of-type(2) > div:nth-of-type(2) > div:nth-of-type(2) > p\\\"],\\\"html\\\":\\\""
                        "<p>Far far away, behind the word mountains, far from the countries Vokalia and C"
                        "onsonantia, there live the blind texts. Separated they live in Bookmarksgrove ri"
                        "ght at the coast of the Semantics, a large language ocean.</p>\\\",\\\"impact\\\""
                        ":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-"
                        "label\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Element does not dupl"
                        "icate existing text in <img> alt text\\\",\\\"data\\\":null,\\\"relatedNodes\\\""
                        ":[]}]},{\\\"target\\\":[\\\"#fh5co-faq > .fh5co-faq > .container > div:nth-of-ty"
                        "pe(2) > div:nth-of-type(2) > div:nth-of-type(3) > p\\\"],\\\"html\\\":\\\"<p>Far"
                        " far away, behind the word mountains, far from the countries Vokalia and Consona"
                        "ntia, there live the blind texts. Separated they live in Bookmarksgrove right at"
                        " the coast of the Semantics, a large language ocean.</p>\\\",\\\"impact\\\":null"
                        ",\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-label"
                        "\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Element does not duplicate"
                        " existing text in <img> alt text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]"
                        "},{\\\"target\\\":[\\\"#form1 > .getting-started.getting-started-2 > .container "
                        "> .row > .col-md-6.to-animate > p\\\"],\\\"html\\\":\\\"<p>Far far away, behind "
                        "the word mountains, far from the countries Vokalia and Consonantia, there live t"
                        "he blind texts. </p>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"n"
                        "one\\\":[{\\\"id\\\":\\\"duplicate-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\"
                        "\"message\\\":\\\"Element does not duplicate existing text in <img> alt text\\\""
                        ",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#form1 > .get"
                        "ting-started.getting-started-2 > .container > .row > .col-md-6.to-animate-2 > .c"
                        "all-to-action.text-right > .sign-up\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\"
                        "\" class=\\\\\\\"sign-up\\\\\\\">Sign Up For Free</a>\\\",\\\"impact\\\":null,\\"
                        "\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-label\\\""
                        ",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Element does not duplicate exi"
                        "sting text in <img> alt text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\"
                        "\"target\\\":[\\\"#fh5co-footer > .container > .row > div:nth-of-type(1) > p:nth"
                        "-of-type(1)\\\"],\\\"html\\\":\\\"<p>Far far away, behind the word mountains, fa"
                        "r from the countries Vokalia and Consonantia, there live the blind texts. Separa"
                        "ted they live in Bookmarksgrove right at the coast of the Semantics.</p>\\\",\\\""
                        "impact\\\":null,\\\"any\\\":[],\\\"";
long WebSocketSendLen112   = sizeof(WebSocketSend112) - 1;	 

 

char WebSocketSend113[] = "id-18 index-72 total-92 all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-l"
                        "abel\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Element does not dupli"
                        "cate existing text in <img> alt text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":"
                        "[]}]},{\\\"target\\\":[\\\"#fh5co-footer > .container > .row > div:nth-of-type(1"
                        ") > .copy-right\\\"],\\\"html\\\":\\\"<p class=\\\\\\\"copy-right\\\\\\\">\\\",\\"
                        "\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"du"
                        "plicate-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Element d"
                        "oes not duplicate existing text in <img> alt text\\\",\\\"data\\\":null,\\\"rela"
                        "tedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-footer > .container > .row > div:"
                        "nth-of-type(1) > .copy-right > a:nth-of-type(1)\\\"],\\\"html\\\":\\\"<a href=\\"
                        "\\\\\"http://freehtml5.co/\\\\\\\" target=\\\\\\\"_blank\\\\\\\">FREEHTML5.co</a"
                        ">\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\""
                        ":\\\"duplicate-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"El"
                        "ement does not duplicate existing text in <img> alt text\\\",\\\"data\\\":null,\\"
                        "\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-footer > .container > .row "
                        "> div:nth-of-type(1) > .copy-right > a:nth-of-type(2)\\\"],\\\"html\\\":\\\"<a h"
                        "ref=\\\\\\\"http://unsplash.com/\\\\\\\" target=\\\\\\\"_blank\\\\\\\">Unsplash<"
                        "/a>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\"
                        "\":\\\"duplicate-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\""
                        "Element does not duplicate existing text in <img> alt text\\\",\\\"data\\\":null"
                        ",\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-footer > .container > .r"
                        "ow > div:nth-of-type(1) > .copy-right > a:nth-of-type(3)\\\"],\\\"html\\\":\\\"<"
                        "a href=\\\\\\\"https://dribbble.com/tibi_neamu\\\\\\\" target=\\\\\\\"_blank\\\\"
                        "\\\">Tiberiu</a>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\"
                        "\":[{\\\"id\\\":\\\"duplicate-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\\"mes"
                        "sage\\\":\\\"Element does not duplicate existing text in <img> alt text\\\",\\\""
                        "data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-footer > .c"
                        "ontainer > .row > div:nth-of-type(2) > .contact-info > li:nth-of-type(1)\\\"],\\"
                        "\"html\\\":\\\"<li><i class=\\\\\\\"icon-map-marker\\\\\\\"></i>198 West 21th St"
                        "reet, Suite 721 New York NY 10016</li>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\"
                        "\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-label\\\",\\\"impact\\\""
                        ":\\\"minor\\\",\\\"message\\\":\\\"Element does not duplicate existing text in <"
                        "img> alt text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":["
                        "\\\"#fh5co-footer > .container > .row > div:nth-of-type(2) > .contact-info > li:"
                        "nth-of-type(2)\\\"],\\\"html\\\":\\\"<li><i class=\\\\\\\"icon-phone\\\\\\\"></i"
                        ">+ 1235 2355 98</li>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"n"
                        "one\\\":[{\\\"id\\\":\\\"duplicate-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\"
                        "\"message\\\":\\\"Element does not duplicate existing text in <img> alt text\\\""
                        ",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-footer"
                        " > .container > .row > div:nth-of-type(2) > .contact-info > li:nth-of-type(3)\\\""
                        "],\\\"html\\\":\\\"<li><i class=\\\\\\\"icon-envelope\\\\\\\"></i><a href=\\\\\\"
                        "\"#\\\\\\\">info@yoursite.com</a></li>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\"
                        "\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-label\\\",\\\"impact\\\""
                        ":\\\"minor\\\",\\\"message\\\":\\\"Element does not duplicate existing text in <"
                        "img> alt text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":["
                        "\\\"#fh5co-footer > .container > .row > div:nth-of-type(2) > .contac";
long WebSocketSendLen113   = sizeof(WebSocketSend113) - 1;	 

 

char WebSocketSend114[] = "id-18 index-73 total-92 t-info > li:nth-of-type(3) > a\\\"],\\\"html\\\":\\\"<a "
                        "href=\\\\\\\"#\\\\\\\">info@yoursite.com</a>\\\",\\\"impact\\\":null,\\\"any\\\""
                        ":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-label\\\",\\\"imp"
                        "act\\\":\\\"minor\\\",\\\"message\\\":\\\"Element does not duplicate existing te"
                        "xt in <img> alt text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"targe"
                        "t\\\":[\\\"#fh5co-footer > .container > .row > div:nth-of-type(2) > .contact-inf"
                        "o > li:nth-of-type(4)\\\"],\\\"html\\\":\\\"<li><i class=\\\\\\\"icon-globe2\\\\"
                        "\\\"></i><a href=\\\\\\\"#\\\\\\\">www.yoursite.com</a></li>\\\",\\\"impact\\\":"
                        "null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-l"
                        "abel\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Element does not dupli"
                        "cate existing text in <img> alt text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":"
                        "[]}]},{\\\"target\\\":[\\\"#fh5co-footer > .container > .row > div:nth-of-type(2"
                        ") > .contact-info > li:nth-of-type(4) > a\\\"],\\\"html\\\":\\\"<a href=\\\\\\\""
                        "#\\\\\\\">www.yoursite.com</a>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\""
                        ":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-label\\\",\\\"impact\\\":\\\"min"
                        "or\\\",\\\"message\\\":\\\"Element does not duplicate existing text in <img> alt"
                        " text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5"
                        "co-footer > .container > .row > div:nth-of-type(2) > .social-media > li:nth-of-t"
                        "ype(1)\\\"],\\\"html\\\":\\\"<li><a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"faceboo"
                        "k\\\\\\\"><i class=\\\\\\\"icon-facebook\\\\\\\"></i></a></li>\\\",\\\"impact\\\""
                        ":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-"
                        "label\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Element does not dupl"
                        "icate existing text in <img> alt text\\\",\\\"data\\\":null,\\\"relatedNodes\\\""
                        ":[]}]},{\\\"target\\\":[\\\"#fh5co-footer > .container > .row > div:nth-of-type("
                        "2) > .social-media > li:nth-of-type(1) > .facebook\\\"],\\\"html\\\":\\\"<a href"
                        "=\\\\\\\"#\\\\\\\" class=\\\\\\\"facebook\\\\\\\"><i class=\\\\\\\"icon-facebook"
                        "\\\\\\\"></i></a>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none"
                        "\\\":[{\\\"id\\\":\\\"duplicate-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\\"m"
                        "essage\\\":\\\"Element does not duplicate existing text in <img> alt text\\\",\\"
                        "\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-footer > "
                        ".container > .row > div:nth-of-type(2) > .social-media > li:nth-of-type(2)\\\"],"
                        "\\\"html\\\":\\\"<li><a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"twitter\\\\\\\"><i "
                        "class=\\\\\\\"icon-twitter\\\\\\\"></i></a></li>\\\",\\\"impact\\\":null,\\\"any"
                        "\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-label\\\",\\\""
                        "impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Element does not duplicate existing"
                        " text in <img> alt text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"ta"
                        "rget\\\":[\\\"#fh5co-footer > .container > .row > div:nth-of-type(2) > .social-m"
                        "edia > li:nth-of-type(2) > .twitter\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\"
                        "\" class=\\\\\\\"twitter\\\\\\\"><i class=\\\\\\\"icon-twitter\\\\\\\"></i></a>\\"
                        "\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\"
                        "\"duplicate-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Eleme"
                        "nt does not duplicate existing text in <img> alt text\\\",\\\"data\\\":null,\\\""
                        "relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-footer > .container > .row > "
                        "div:nth-of-type(2) > .social-media > li:nth-of-type(3)\\\"],\\\"html\\\":\\\"<li"
                        "><a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"dribbble\\\\\\\"><i class=\\\\\\\"icon-"
                        "dribbble\\\\\\\"></i></a></li>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\""
                        ":[],\\\"none\\\":[{\\\"id\\\":\\\"duplica";
long WebSocketSendLen114   = sizeof(WebSocketSend114) - 1;	 

 

char WebSocketSend115[] = "id-18 index-74 total-92 te-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\\"messag"
                        "e\\\":\\\"Element does not duplicate existing text in <img> alt text\\\",\\\"dat"
                        "a\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-footer > .cont"
                        "ainer > .row > div:nth-of-type(2) > .social-media > li:nth-of-type(3) > .dribbbl"
                        "e\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"dribbble\\\\\\\""
                        "><i class=\\\\\\\"icon-dribbble\\\\\\\"></i></a>\\\",\\\"impact\\\":null,\\\"any"
                        "\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-label\\\",\\\""
                        "impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Element does not duplicate existing"
                        " text in <img> alt text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"ta"
                        "rget\\\":[\\\"#fh5co-footer > .container > .row > div:nth-of-type(2) > .social-m"
                        "edia > li:nth-of-type(4)\\\"],\\\"html\\\":\\\"<li><a href=\\\\\\\"#\\\\\\\" cla"
                        "ss=\\\\\\\"github\\\\\\\"><i class=\\\\\\\"icon-github-alt\\\\\\\"></i></a></li>"
                        "\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\""
                        ":\\\"duplicate-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"El"
                        "ement does not duplicate existing text in <img> alt text\\\",\\\"data\\\":null,\\"
                        "\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-footer > .container > .row "
                        "> div:nth-of-type(2) > .social-media > li:nth-of-type(4) > .github\\\"],\\\"html"
                        "\\\":\\\"<a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"github\\\\\\\"><i class=\\\\\\\""
                        "icon-github-alt\\\\\\\"></i></a>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\"
                        "\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-label\\\",\\\"impact\\\":\\\"m"
                        "inor\\\",\\\"message\\\":\\\"Element does not duplicate existing text in <img> a"
                        "lt text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#m"
                        "ap > div > .gm-style > div:nth-of-type(1) > .gm-style-pbc > .gm-style-pbt\\\"],\\"
                        "\"html\\\":\\\"<p class=\\\\\\\"gm-style-pbt\\\\\\\">Use two fingers to move the"
                        " map</p>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\"
                        "\"id\\\":\\\"duplicate-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\""
                        ":\\\"Element does not duplicate existing text in <img> alt text\\\",\\\"data\\\""
                        ":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#map > div > .gm-style > d"
                        "iv:nth-of-type(2) > a\\\"],\\\"html\\\":\\\"<a target=\\\\\\\"_blank\\\\\\\" hre"
                        "f=\\\\\\\"https://maps.google.com/maps?ll=40.69847,-73.951442&amp;z=7&amp;t=m&am"
                        "p;hl=en-US&amp;gl=US&amp;mapclient=apiv3\\\\\\\" title=\\\\\\\"Click to see this"
                        " area on Google Maps\\\\\\\" style=\\\\\\\"position: static; overflow: visible; "
                        "float: none; display: inline;\\\\\\\">\\\",\\\"impact\\\":null,\\\"any\\\":[],\\"
                        "\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"duplicate-img-label\\\",\\\"impact\\\""
                        ":\\\"minor\\\",\\\"message\\\":\\\"Element does not duplicate existing text in <"
                        "img> alt text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":["
                        "\\\"#map > div > .gm-style > .gmnoprint.gm-style-cc > div:nth-of-type(2) > a\\\""
                        "],\\\"html\\\":\\\"<a href=\\\\\\\"https://www.google.com/intl/en-US_US/help/ter"
                        "ms_maps.html\\\\\\\" target=\\\\\\\"_blank\\\\\\\" style=\\\\\\\"text-decoration"
                        ": none; cursor: pointer; color: rgb(68, 68, 68);\\\\\\\">Terms of Use</a>\\\",\\"
                        "\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"du"
                        "plicate-img-label\\\",\\\"impact\\\":\\\"minor\\\",\\\"message\\\":\\\"Element d"
                        "oes not duplicate existing text in <img> alt text\\\",\\\"data\\\":null,\\\"rela"
                        "tedNodes\\\":[]}]}]},{\\\"id\\\":\\\"label-title-only\\\",\\\"description\\\":\\"
                        "\"Ensures that every form element is not solely labeled using the title or aria-"
                        "describedby attributes\\\",\\\"help\\\":\\\"Form elements";
long WebSocketSendLen115   = sizeof(WebSocketSend115) - 1;	 

 

char WebSocketSend116[] = "id-18 index-75 total-92  should have a visible label\\\",\\\"helpUrl\\\":\\\"htt"
                        "ps://dequeuniversity.com/rules/axe/2.0/label-title-only?application=axeAPI\\\",\\"
                        "\"impact\\\":null,\\\"tags\\\":[\\\"best-practice\\\"],\\\"nodes\\\":[{\\\"targe"
                        "t\\\":[\\\"#name\\\"],\\\"html\\\":\\\"<input type=\\\\\\\"name\\\\\\\" class=\\"
                        "\\\\\"form-control\\\\\\\" id=\\\\\\\"name\\\\\\\" placeholder=\\\\\\\"Name\\\\\\"
                        "\">\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\"
                        "\":\\\"title-only\\\",\\\"impact\\\":\\\"serious\\\",\\\"message\\\":\\\"Form el"
                        "ement does not solely use title attribute for its label\\\",\\\"data\\\":null,\\"
                        "\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#email\\\"],\\\"html\\\":\\\"<inpu"
                        "t type=\\\\\\\"email\\\\\\\" class=\\\\\\\"form-control\\\\\\\" id=\\\\\\\"email"
                        "\\\\\\\" placeholder=\\\\\\\"Email\\\\\\\">\\\",\\\"impact\\\":null,\\\"any\\\":"
                        "[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"title-only\\\",\\\"impact\\\":\\"
                        "\"serious\\\",\\\"message\\\":\\\"Form element does not solely use title attribu"
                        "te for its label\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\""
                        ":[\\\"#message\\\"],\\\"html\\\":\\\"<textarea class=\\\\\\\"form-control\\\\\\\""
                        " id=\\\\\\\"message\\\\\\\" rows=\\\\\\\"7\\\\\\\" placeholder=\\\\\\\"Message\\"
                        "\\\\\"></textarea>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"non"
                        "e\\\":[{\\\"id\\\":\\\"title-only\\\",\\\"impact\\\":\\\"serious\\\",\\\"message"
                        "\\\":\\\"Form element does not solely use title attribute for its label\\\",\\\""
                        "data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#_0_90086334884020"
                        "71\\\"],\\\"html\\\":\\\"<input type=\\\\\\\"checkbox\\\\\\\" title=\\\\\\\"Use "
                        "CTRL+ALT+U to continuously sync CSS changes into Visual Studio\\\\\\\" id=\\\\\\"
                        "\"_0_9008633488402071\\\\\\\">\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\""
                        ":[],\\\"none\\\":[{\\\"id\\\":\\\"title-only\\\",\\\"impact\\\":\\\"serious\\\","
                        "\\\"message\\\":\\\"Form element does not solely use title attribute for its lab"
                        "el\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#_0_005"
                        "383016530676077\\\"],\\\"html\\\":\\\"<input type=\\\\\\\"checkbox\\\\\\\" title"
                        "=\\\\\\\"This will auto-hide this menu. Click the CTRL key to make it visible\\\\"
                        "\\\" id=\\\\\\\"_0_005383016530676077\\\\\\\">\\\",\\\"impact\\\":null,\\\"any\\"
                        "\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"title-only\\\",\\\"impact\\\""
                        ":\\\"serious\\\",\\\"message\\\":\\\"Form element does not solely use title attr"
                        "ibute for its label\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]}]},{\\\"id\\"
                        "\":\\\"label\\\",\\\"description\\\":\\\"Ensures every form element has a label\\"
                        "\",\\\"help\\\":\\\"Form elements must have labels\\\",\\\"helpUrl\\\":\\\"https"
                        "://dequeuniversity.com/rules/axe/2.0/label?application=axeAPI\\\",\\\"impact\\\""
                        ":null,\\\"tags\\\":[\\\"wcag2a\\\",\\\"wcag332\\\",\\\"wcag131\\\",\\\"section50"
                        "8\\\",\\\"section508.22.n\\\"],\\\"nodes\\\":[{\\\"target\\\":[\\\"#name\\\"],\\"
                        "\"html\\\":\\\"<input type=\\\\\\\"name\\\\\\\" class=\\\\\\\"form-control\\\\\\"
                        "\" id=\\\\\\\"name\\\\\\\" placeholder=\\\\\\\"Name\\\\\\\">\\\",\\\"impact\\\":"
                        "null,\\\"any\\\":[{\\\"id\\\":\\\"explicit-label\\\",\\\"impact\\\":\\\"critical"
                        "\\\",\\\"message\\\":\\\"Form element has an explicit <label>\\\",\\\"data\\\":n"
                        "ull,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"multi"
                        "ple-label\\\",\\\"impact\\\":\\\"serious\\\",\\\"message\\\":\\\"Form element do"
                        "es not have multiple <label> elements\\\",\\\"data\\\":null,\\\"relatedNodes\\\""
                        ":[{\\\"target\\\":[\\\"#fh5co-footer > .container > .row > div:nth-of-type(3) > "
                        "div:nth-of-type(1) > .sr-only\\\"],\\\"html\\\":\\\"<label for=\\\\\\\"name\\\\\\"
                        "\" class=\\\\\\\"sr-only\\\\\\\">Name</label>\\\"}]}]},{\\\"target\\\":[\\\"#ema"
                        "il\\\"],\\\"html\\\":\\\"<input type=\\\\\\\"email\\\\\\\" clas";
long WebSocketSendLen116   = sizeof(WebSocketSend116) - 1;	 

 

char WebSocketSend117[] = "id-18 index-76 total-92 s=\\\\\\\"form-control\\\\\\\" id=\\\\\\\"email\\\\\\\" "
                        "placeholder=\\\\\\\"Email\\\\\\\">\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\"
                        "\":\\\"explicit-label\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Fo"
                        "rm element has an explicit <label>\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]"
                        "}],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"multiple-label\\\",\\\"impact\\\""
                        ":\\\"serious\\\",\\\"message\\\":\\\"Form element does not have multiple <label>"
                        " elements\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[{\\\"target\\\":[\\\"#fh5c"
                        "o-footer > .container > .row > div:nth-of-type(3) > div:nth-of-type(2) > .sr-onl"
                        "y\\\"],\\\"html\\\":\\\"<label for=\\\\\\\"email\\\\\\\" class=\\\\\\\"sr-only\\"
                        "\\\\\">Email</label>\\\"}]}]},{\\\"target\\\":[\\\"#message\\\"],\\\"html\\\":\\"
                        "\"<textarea class=\\\\\\\"form-control\\\\\\\" id=\\\\\\\"message\\\\\\\" rows=\\"
                        "\\\\\"7\\\\\\\" placeholder=\\\\\\\"Message\\\\\\\"></textarea>\\\",\\\"impact\\"
                        "\":null,\\\"any\\\":[{\\\"id\\\":\\\"explicit-label\\\",\\\"impact\\\":\\\"criti"
                        "cal\\\",\\\"message\\\":\\\"Form element has an explicit <label>\\\",\\\"data\\\""
                        ":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"mul"
                        "tiple-label\\\",\\\"impact\\\":\\\"serious\\\",\\\"message\\\":\\\"Form element "
                        "does not have multiple <label> elements\\\",\\\"data\\\":null,\\\"relatedNodes\\"
                        "\":[{\\\"target\\\":[\\\"#fh5co-footer > .container > .row > div:nth-of-type(3) "
                        "> div:nth-of-type(3) > .sr-only\\\"],\\\"html\\\":\\\"<label for=\\\\\\\"message"
                        "\\\\\\\" class=\\\\\\\"sr-only\\\\\\\">Message</label>\\\"}]}]},{\\\"target\\\":"
                        "[\\\"#_0_9008633488402071\\\"],\\\"html\\\":\\\"<input type=\\\\\\\"checkbox\\\\"
                        "\\\" title=\\\\\\\"Use CTRL+ALT+U to continuously sync CSS changes into Visual S"
                        "tudio\\\\\\\" id=\\\\\\\"_0_9008633488402071\\\\\\\">\\\",\\\"impact\\\":null,\\"
                        "\"any\\\":[{\\\"id\\\":\\\"implicit-label\\\",\\\"impact\\\":\\\"critical\\\",\\"
                        "\"message\\\":\\\"Form element has an implicit (wrapped) <label>\\\",\\\"data\\\""
                        ":null,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"explicit-label\\\",\\\"impact\\\""
                        ":\\\"critical\\\",\\\"message\\\":\\\"Form element has an explicit <label>\\\",\\"
                        "\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"non-empty-title\\\",\\\""
                        "impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Element has a title attribute\\\""
                        ",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[{\\\"i"
                        "d\\\":\\\"multiple-label\\\",\\\"impact\\\":\\\"serious\\\",\\\"message\\\":\\\""
                        "Form element does not have multiple <label> elements\\\",\\\"data\\\":null,\\\"r"
                        "elatedNodes\\\":[{\\\"target\\\":[\\\"body > bl > blbar > blcheckbox:nth-of-type"
                        "(1) > label\\\"],\\\"html\\\":\\\"<label title=\\\\\\\"Use CTRL+ALT+U to continu"
                        "ously sync CSS changes into Visual Studio\\\\\\\" for=\\\\\\\"_0_900863348840207"
                        "1\\\\\\\" style=\\\\\\\"font-weight: normal;\\\\\\\">F12 auto-sync<input type=\\"
                        "\\\\\"checkbox\\\\\\\" title=\\\\\\\"Use CTRL+ALT+U to continuously sync CSS cha"
                        "nges into Visual Studio\\\\\\\" id=\\\\\\\"_0_9008633488402071\\\\\\\"></label>\\"
                        "\"}]}]},{\\\"target\\\":[\\\"#_0_005383016530676077\\\"],\\\"html\\\":\\\"<input"
                        " type=\\\\\\\"checkbox\\\\\\\" title=\\\\\\\"This will auto-hide this menu. Clic"
                        "k the CTRL key to make it visible\\\\\\\" id=\\\\\\\"_0_005383016530676077\\\\\\"
                        "\">\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"implicit-label\\\",\\\""
                        "impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Form element has an implicit (wr"
                        "apped) <label>\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id\\\":\\\"ex"
                        "plicit-label\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Form elemen"
                        "t has an explicit <label>\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]},{\\\"id"
                        "\\\":\\\"non-empty-title\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\""
                        "Elemen";
long WebSocketSendLen117   = sizeof(WebSocketSend117) - 1;	 

 

char WebSocketSend118[] = "id-18 index-77 total-92 t has a title attribute\\\",\\\"data\\\":null,\\\"relate"
                        "dNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"multiple-label\\\","
                        "\\\"impact\\\":\\\"serious\\\",\\\"message\\\":\\\"Form element does not have mu"
                        "ltiple <label> elements\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[{\\\"target\\"
                        "\":[\\\"body > bl > blbar > blcheckbox:nth-of-type(2) > label\\\"],\\\"html\\\":"
                        "\\\"<label title=\\\\\\\"This will auto-hide this menu. Click the CTRL key to ma"
                        "ke it visible\\\\\\\" for=\\\\\\\"_0_005383016530676077\\\\\\\" style=\\\\\\\"fo"
                        "nt-weight: normal;\\\\\\\">Auto-hide<input type=\\\\\\\"checkbox\\\\\\\" title=\\"
                        "\\\\\"This will auto-hide this menu. Click the CTRL key to make it visible\\\\\\"
                        "\" id=\\\\\\\"_0_005383016530676077\\\\\\\"></label>\\\"}]}]}]},{\\\"id\\\":\\\""
                        "link-in-text-block\\\",\\\"description\\\":\\\"Links can be distinguished withou"
                        "t relying on color\\\",\\\"help\\\":\\\"Links must be distinguished from surroun"
                        "ding text in a way that does not rely on color\\\",\\\"helpUrl\\\":\\\"https://d"
                        "equeuniversity.com/rules/axe/2.0/link-in-text-block?application=axeAPI\\\",\\\"i"
                        "mpact\\\":null,\\\"tags\\\":[\\\"experimental\\\",\\\"wcag2a\\\",\\\"wcag141\\\""
                        "],\\\"nodes\\\":[{\\\"target\\\":[\\\"#fh5co-testimony > .container > .row > .co"
                        "l-md-12.to-animate.fadeInUp.animated > .wrap-testimony > .owl-carousel-fullwidth"
                        ".owl-carousel.owl-theme.owl-responsive--1.owl-loaded > .owl-stage-outer.owl-heig"
                        "ht > .owl-stage > .owl-item.active > .item > .testimony-slide.active.text-center"
                        " > span > .twitter\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" class=\\\\\\\""
                        "twitter\\\\\\\">Twitter</a>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":["
                        "{\\\"id\\\":\\\"link-in-text-block\\\",\\\"impact\\\":\\\"critical\\\",\\\"messa"
                        "ge\\\":\\\"Links can be distinguished from surrounding text in a way that does n"
                        "ot rely on color\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"none\\\":[]"
                        "},{\\\"target\\\":[\\\"#fh5co-testimony > .container > .row > .col-md-12.to-anim"
                        "ate.fadeInUp.animated > .wrap-testimony > .owl-carousel-fullwidth.owl-carousel.o"
                        "wl-theme.owl-responsive--1.owl-loaded > .owl-stage-outer.owl-height > .owl-stage"
                        " > div:nth-of-type(4) > .item > .testimony-slide.active.text-center > span > .tw"
                        "itter\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"twitter\\\\\\"
                        "\">Twitter</a>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[{\\\"id\\\":\\"
                        "\"link-in-text-block\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Lin"
                        "ks can be distinguished from surrounding text in a way that does not rely on col"
                        "or\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"none\\\":[]},{\\\"target\\"
                        "\":[\\\"#fh5co-testimony > .container > .row > .col-md-12.to-animate.fadeInUp.an"
                        "imated > .wrap-testimony > .owl-carousel-fullwidth.owl-carousel.owl-theme.owl-re"
                        "sponsive--1.owl-loaded > .owl-stage-outer.owl-height > .owl-stage > div:nth-of-t"
                        "ype(5) > .item > .testimony-slide.active.text-center > span > .twitter\\\"],\\\""
                        "html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"twitter\\\\\\\">Twitter</a>"
                        "\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[{\\\"id\\\":\\\"link-in-tex"
                        "t-block\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Links can be dis"
                        "tinguished from surrounding text in a way that does not rely on color\\\",\\\"da"
                        "ta\\\":null,\\\"relatedNodes\\\":[]}],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5"
                        "co-testimony > .container > .row > .col-md-12.to-animate.fadeInUp.animated > .wr"
                        "ap-testimony > .owl-carousel-fullwidth.owl-carousel.owl-theme.owl-";
long WebSocketSendLen118   = sizeof(WebSocketSend118) - 1;	 

 

char WebSocketSend119[] = "id-18 index-78 total-92 responsive--1.owl-loaded > .owl-stage-outer.owl-height >"
                        " .owl-stage > div:nth-of-type(6) > .item > .testimony-slide.active.text-center >"
                        " span > .twitter\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"t"
                        "witter\\\\\\\">Twitter</a>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[{"
                        "\\\"id\\\":\\\"link-in-text-block\\\",\\\"impact\\\":\\\"critical\\\",\\\"messag"
                        "e\\\":\\\"Links can be distinguished from surrounding text in a way that does no"
                        "t rely on color\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"none\\\":[]}"
                        ",{\\\"target\\\":[\\\"#fh5co-testimony > .container > .row > .col-md-12.to-anima"
                        "te.fadeInUp.animated > .wrap-testimony > .owl-carousel-fullwidth.owl-carousel.ow"
                        "l-theme.owl-responsive--1.owl-loaded > .owl-stage-outer.owl-height > .owl-stage "
                        "> div:nth-of-type(7) > .item > .testimony-slide.active.text-center > span > .twi"
                        "tter\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"twitter\\\\\\"
                        "\">Twitter</a>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[{\\\"id\\\":\\"
                        "\"link-in-text-block\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Lin"
                        "ks can be distinguished from surrounding text in a way that does not rely on col"
                        "or\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"none\\\":[]},{\\\"target\\"
                        "\":[\\\"#fh5co-pricing > .fh5co-pricing > .container > div:nth-of-type(3) > .col"
                        "-md-6.col-md-offset-3.to-animate > p > a\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#"
                        "\\\\\\\">Learn More</a>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[{\\\""
                        "id\\\":\\\"link-in-text-block\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\""
                        ":\\\"Links can be distinguished from surrounding text in a way that does not rel"
                        "y on color\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"none\\\":[]},{\\\""
                        "target\\\":[\\\"#fh5co-footer > .container > .row > div:nth-of-type(1) > .copy-r"
                        "ight > a:nth-of-type(1)\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"http://freehtml5.c"
                        "o/\\\\\\\" target=\\\\\\\"_blank\\\\\\\">FREEHTML5.co</a>\\\",\\\"impact\\\":nul"
                        "l,\\\"any\\\":[],\\\"all\\\":[{\\\"id\\\":\\\"link-in-text-block\\\",\\\"impact\\"
                        "\":\\\"critical\\\",\\\"message\\\":\\\"Links can be distinguished from surround"
                        "ing text in a way that does not rely on color\\\",\\\"data\\\":null,\\\"relatedN"
                        "odes\\\":[]}],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-footer > .container >"
                        " .row > div:nth-of-type(1) > .copy-right > a:nth-of-type(2)\\\"],\\\"html\\\":\\"
                        "\"<a href=\\\\\\\"http://unsplash.com/\\\\\\\" target=\\\\\\\"_blank\\\\\\\">Uns"
                        "plash</a>\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[{\\\"id\\\":\\\"li"
                        "nk-in-text-block\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Links c"
                        "an be distinguished from surrounding text in a way that does not rely on color\\"
                        "\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"none\\\":[]},{\\\"target\\\":"
                        "[\\\"#fh5co-footer > .container > .row > div:nth-of-type(1) > .copy-right > a:nt"
                        "h-of-type(3)\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"https://dribbble.com/tibi_nea"
                        "mu\\\\\\\" target=\\\\\\\"_blank\\\\\\\">Tiberiu</a>\\\",\\\"impact\\\":null,\\\""
                        "any\\\":[],\\\"all\\\":[{\\\"id\\\":\\\"link-in-text-block\\\",\\\"impact\\\":\\"
                        "\"critical\\\",\\\"message\\\":\\\"Links can be distinguished from surrounding t"
                        "ext in a way that does not rely on color\\\",\\\"data\\\":null,\\\"relatedNodes\\"
                        "\":[]}],\\\"none\\\":[]}]},{\\\"id\\\":\\\"link-name\\\",\\\"description\\\":\\\""
                        "Ensures links have discernible text\\\",\\\"help\\\":\\\"Links must have discern"
                        "ible text\\\",\\\"helpUrl\\\":\\\"https://dequeuniversity.com/rules/axe/2.0/link"
                        "-name?application=axeAPI\\\",\\\"impact\\\":null,\\\"tags\\\":[\\\"wcag2a\\\"";
long WebSocketSendLen119   = sizeof(WebSocketSend119) - 1;	 

 

char WebSocketSend120[] = "id-18 index-79 total-92 ,\\\"wcag111\\\",\\\"wcag412\\\",\\\"section508\\\",\\\""
                        "section508.22.a\\\"],\\\"nodes\\\":[{\\\"target\\\":[\\\"#fh5co-header > .fluid-"
                        "container > .navbar.navbar-default > .navbar-header > .navbar-brand\\\"],\\\"htm"
                        "l\\\":\\\"<a class=\\\\\\\"navbar-brand\\\\\\\" href=\\\\\\\"index.html\\\\\\\" "
                        "style=\\\\\\\"font-family: &quot;Curlz MT&quot;; font-weight: bold; font-style: "
                        "oblique; color: rgb(0, 0, 0);\\\\\\\">Mahesh Babu</a>\\\",\\\"impact\\\":null,\\"
                        "\"any\\\":[{\\\"id\\\":\\\"has-visible-text\\\",\\\"impact\\\":\\\"critical\\\","
                        "\\\"message\\\":\\\"Element has text that is visible to screen readers\\\",\\\"d"
                        "ata\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":"
                        "\\\"focusable-no-name\\\",\\\"impact\\\":\\\"serious\\\",\\\"message\\\":\\\"Ele"
                        "ment is not in tab order or has accessible text\\\",\\\"data\\\":null,\\\"relate"
                        "dNodes\\\":[]}]},{\\\"target\\\":[\\\"#navbar > .nav.navbar-nav.navbar-right > l"
                        "i:nth-of-type(1) > a\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"Index.aspx\\\\\\\" da"
                        "ta-nav-section=\\\\\\\"home\\\\\\\"><span>Home</span></a>\\\",\\\"impact\\\":nul"
                        "l,\\\"any\\\":[{\\\"id\\\":\\\"has-visible-text\\\",\\\"impact\\\":\\\"critical\\"
                        "\",\\\"message\\\":\\\"Element has text that is visible to screen readers\\\",\\"
                        "\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\"
                        "\":\\\"focusable-no-name\\\",\\\"impact\\\":\\\"serious\\\",\\\"message\\\":\\\""
                        "Element is not in tab order or has accessible text\\\",\\\"data\\\":null,\\\"rel"
                        "atedNodes\\\":[]}]},{\\\"target\\\":[\\\"#navbar > .nav.navbar-nav.navbar-right "
                        "> li:nth-of-type(2) > a\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" data-nav"
                        "-section=\\\\\\\"explore\\\\\\\"><span>Explore</span></a>\\\",\\\"impact\\\":nul"
                        "l,\\\"any\\\":[{\\\"id\\\":\\\"has-visible-text\\\",\\\"impact\\\":\\\"critical\\"
                        "\",\\\"message\\\":\\\"Element has text that is visible to screen readers\\\",\\"
                        "\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\"
                        "\":\\\"focusable-no-name\\\",\\\"impact\\\":\\\"serious\\\",\\\"message\\\":\\\""
                        "Element is not in tab order or has accessible text\\\",\\\"data\\\":null,\\\"rel"
                        "atedNodes\\\":[]}]},{\\\"target\\\":[\\\"#navbar > .nav.navbar-nav.navbar-right "
                        "> .active > a\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" data-nav-section=\\"
                        "\\\\\"testimony\\\\\\\"><span>Testimony</span></a>\\\",\\\"impact\\\":null,\\\"a"
                        "ny\\\":[{\\\"id\\\":\\\"has-visible-text\\\",\\\"impact\\\":\\\"critical\\\",\\\""
                        "message\\\":\\\"Element has text that is visible to screen readers\\\",\\\"data\\"
                        "\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"f"
                        "ocusable-no-name\\\",\\\"impact\\\":\\\"serious\\\",\\\"message\\\":\\\"Element "
                        "is not in tab order or has accessible text\\\",\\\"data\\\":null,\\\"relatedNode"
                        "s\\\":[]}]},{\\\"target\\\":[\\\"#navbar > .nav.navbar-nav.navbar-right > li:nth"
                        "-of-type(4) > a\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" data-nav-section"
                        "=\\\\\\\"pricing\\\\\\\"><span>Pricing</span></a>\\\",\\\"impact\\\":null,\\\"an"
                        "y\\\":[{\\\"id\\\":\\\"has-visible-text\\\",\\\"impact\\\":\\\"critical\\\",\\\""
                        "message\\\":\\\"Element has text that is visible to screen readers\\\",\\\"data\\"
                        "\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"f"
                        "ocusable-no-name\\\",\\\"impact\\\":\\\"serious\\\",\\\"message\\\":\\\"Element "
                        "is not in tab order or has accessible text\\\",\\\"data\\\":null,\\\"relatedNode"
                        "s\\\":[]}]},{\\\"target\\\":[\\\"#navbar > .nav.navbar-nav.navbar-right > li:nth"
                        "-of-type(5) > a\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" data-nav-section"
                        "=\\\\\\\"services\\\\\\\"><span>Services</span></a>\\\",\\\"impact\\\":null,\\\""
                        "any\\\":[{\\\"id\\\":\\\"has-visible-text\\\",";
long WebSocketSendLen120   = sizeof(WebSocketSend120) - 1;	 

 

char WebSocketSend121[] = "id-18 index-80 total-92 \\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Elem"
                        "ent has text that is visible to screen readers\\\",\\\"data\\\":null,\\\"related"
                        "Nodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"focusable-no-name\\\""
                        ",\\\"impact\\\":\\\"serious\\\",\\\"message\\\":\\\"Element is not in tab order "
                        "or has accessible text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"tar"
                        "get\\\":[\\\"#navbar > .nav.navbar-nav.navbar-right > li:nth-of-type(6) > a\\\"]"
                        ",\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" data-nav-section=\\\\\\\"team\\\\\\\""
                        "><span>Team</span></a>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"has-"
                        "visible-text\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Element has"
                        " text that is visible to screen readers\\\",\\\"data\\\":null,\\\"relatedNodes\\"
                        "\":[]}],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"focusable-no-name\\\",\\\"i"
                        "mpact\\\":\\\"serious\\\",\\\"message\\\":\\\"Element is not in tab order or has"
                        " accessible text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\""
                        ":[\\\"#navbar > .nav.navbar-nav.navbar-right > li:nth-of-type(7) > a\\\"],\\\"ht"
                        "ml\\\":\\\"<a href=\\\\\\\"#\\\\\\\" data-nav-section=\\\\\\\"faq\\\\\\\"><span>"
                        "FAQ</span></a>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"has-visible-"
                        "text\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Element has text th"
                        "at is visible to screen readers\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],"
                        "\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"focusable-no-name\\\",\\\"impact\\\""
                        ":\\\"serious\\\",\\\"message\\\":\\\"Element is not in tab order or has accessib"
                        "le text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#n"
                        "avbar > .nav.navbar-nav.navbar-right > .call-to-action > a\\\"],\\\"html\\\":\\\""
                        "<a href=\\\\\\\"#\\\\\\\"><span>Sign up free</span></a>\\\",\\\"impact\\\":null,"
                        "\\\"any\\\":[{\\\"id\\\":\\\"has-visible-text\\\",\\\"impact\\\":\\\"critical\\\""
                        ",\\\"message\\\":\\\"Element has text that is visible to screen readers\\\",\\\""
                        "data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\""
                        ":\\\"focusable-no-name\\\",\\\"impact\\\":\\\"serious\\\",\\\"message\\\":\\\"El"
                        "ement is not in tab order or has accessible text\\\",\\\"data\\\":null,\\\"relat"
                        "edNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-testimony > .container > .row > .c"
                        "ol-md-12.to-animate.fadeInUp.animated > .wrap-testimony > .owl-carousel-fullwidt"
                        "h.owl-carousel.owl-theme.owl-responsive--1.owl-loaded > .owl-stage-outer.owl-hei"
                        "ght > .owl-stage > div:nth-of-type(1) > .item > .testimony-slide.active.text-cen"
                        "ter > span > .twitter\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" class=\\\\"
                        "\\\"twitter\\\\\\\">Twitter</a>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\""
                        ":\\\"has-visible-text\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"El"
                        "ement has text that is visible to screen readers\\\",\\\"data\\\":null,\\\"relat"
                        "edNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"focusable-no-name\\"
                        "\",\\\"impact\\\":\\\"serious\\\",\\\"message\\\":\\\"Element is not in tab orde"
                        "r or has accessible text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"t"
                        "arget\\\":[\\\"#fh5co-testimony > .container > .row > .col-md-12.to-animate.fade"
                        "InUp.animated > .wrap-testimony > .owl-carousel-fullwidth.owl-carousel.owl-theme"
                        ".owl-responsive--1.owl-loaded > .owl-stage-outer.owl-height > .owl-stage > div:n"
                        "th-of-type(2) > .item > .testimony-slide.active.text-center > span > .twitter\\\""
                        "],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"twitter\\\\\\\">Twitt"
                        "er</a>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"has-visible-text\\\""
                        ",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"E";
long WebSocketSendLen121   = sizeof(WebSocketSend121) - 1;	 

 

char WebSocketSend122[] = "id-18 index-81 total-92 lement has text that is visible to screen readers\\\",\\"
                        "\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\"
                        "\":\\\"focusable-no-name\\\",\\\"impact\\\":\\\"serious\\\",\\\"message\\\":\\\""
                        "Element is not in tab order or has accessible text\\\",\\\"data\\\":null,\\\"rel"
                        "atedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-testimony > .container > .row > "
                        ".col-md-12.to-animate.fadeInUp.animated > .wrap-testimony > .owl-carousel-fullwi"
                        "dth.owl-carousel.owl-theme.owl-responsive--1.owl-loaded > .owl-stage-outer.owl-h"
                        "eight > .owl-stage > .owl-item.active > .item > .testimony-slide.active.text-cen"
                        "ter > span > .twitter\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" class=\\\\"
                        "\\\"twitter\\\\\\\">Twitter</a>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\""
                        ":\\\"has-visible-text\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"El"
                        "ement has text that is visible to screen readers\\\",\\\"data\\\":null,\\\"relat"
                        "edNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"focusable-no-name\\"
                        "\",\\\"impact\\\":\\\"serious\\\",\\\"message\\\":\\\"Element is not in tab orde"
                        "r or has accessible text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"t"
                        "arget\\\":[\\\"#fh5co-testimony > .container > .row > .col-md-12.to-animate.fade"
                        "InUp.animated > .wrap-testimony > .owl-carousel-fullwidth.owl-carousel.owl-theme"
                        ".owl-responsive--1.owl-loaded > .owl-stage-outer.owl-height > .owl-stage > div:n"
                        "th-of-type(4) > .item > .testimony-slide.active.text-center > span > .twitter\\\""
                        "],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"twitter\\\\\\\">Twitt"
                        "er</a>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"has-visible-text\\\""
                        ",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Element has text that is vi"
                        "sible to screen readers\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\"
                        "\":[],\\\"none\\\":[{\\\"id\\\":\\\"focusable-no-name\\\",\\\"impact\\\":\\\"ser"
                        "ious\\\",\\\"message\\\":\\\"Element is not in tab order or has accessible text\\"
                        "\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-test"
                        "imony > .container > .row > .col-md-12.to-animate.fadeInUp.animated > .wrap-test"
                        "imony > .owl-carousel-fullwidth.owl-carousel.owl-theme.owl-responsive--1.owl-loa"
                        "ded > .owl-stage-outer.owl-height > .owl-stage > div:nth-of-type(5) > .item > .t"
                        "estimony-slide.active.text-center > span > .twitter\\\"],\\\"html\\\":\\\"<a hre"
                        "f=\\\\\\\"#\\\\\\\" class=\\\\\\\"twitter\\\\\\\">Twitter</a>\\\",\\\"impact\\\""
                        ":null,\\\"any\\\":[{\\\"id\\\":\\\"has-visible-text\\\",\\\"impact\\\":\\\"criti"
                        "cal\\\",\\\"message\\\":\\\"Element has text that is visible to screen readers\\"
                        "\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[{\\\""
                        "id\\\":\\\"focusable-no-name\\\",\\\"impact\\\":\\\"serious\\\",\\\"message\\\":"
                        "\\\"Element is not in tab order or has accessible text\\\",\\\"data\\\":null,\\\""
                        "relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-testimony > .container > .row"
                        " > .col-md-12.to-animate.fadeInUp.animated > .wrap-testimony > .owl-carousel-ful"
                        "lwidth.owl-carousel.owl-theme.owl-responsive--1.owl-loaded > .owl-stage-outer.ow"
                        "l-height > .owl-stage > div:nth-of-type(6) > .item > .testimony-slide.active.tex"
                        "t-center > span > .twitter\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" class"
                        "=\\\\\\\"twitter\\\\\\\">Twitter</a>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"i"
                        "d\\\":\\\"has-visible-text\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\"
                        "\"Element has text that is visible to screen readers\\\",\\\"data\\\":null,\\\"r"
                        "elatedNodes\\\":[]}],\\\"all\\";
long WebSocketSendLen122   = sizeof(WebSocketSend122) - 1;	 

 

char WebSocketSend123[] = "id-18 index-82 total-92 \":[],\\\"none\\\":[{\\\"id\\\":\\\"focusable-no-name\\\""
                        ",\\\"impact\\\":\\\"serious\\\",\\\"message\\\":\\\"Element is not in tab order "
                        "or has accessible text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"tar"
                        "get\\\":[\\\"#fh5co-testimony > .container > .row > .col-md-12.to-animate.fadeIn"
                        "Up.animated > .wrap-testimony > .owl-carousel-fullwidth.owl-carousel.owl-theme.o"
                        "wl-responsive--1.owl-loaded > .owl-stage-outer.owl-height > .owl-stage > div:nth"
                        "-of-type(7) > .item > .testimony-slide.active.text-center > span > .twitter\\\"]"
                        ",\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"twitter\\\\\\\">Twitte"
                        "r</a>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"has-visible-text\\\","
                        "\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Element has text that is vis"
                        "ible to screen readers\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\"
                        "\":[],\\\"none\\\":[{\\\"id\\\":\\\"focusable-no-name\\\",\\\"impact\\\":\\\"ser"
                        "ious\\\",\\\"message\\\":\\\"Element is not in tab order or has accessible text\\"
                        "\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#form1 > .g"
                        "etting-started.getting-started-1.animated > .container > .row > .col-md-6.to-ani"
                        "mate-2.fadeInRight.animated > .call-to-action.text-right > .sign-up\\\"],\\\"htm"
                        "l\\\":\\\"<a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"sign-up\\\\\\\">Sign Up For Fr"
                        "ee</a>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"has-visible-text\\\""
                        ",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Element has text that is vi"
                        "sible to screen readers\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\"
                        "\":[],\\\"none\\\":[{\\\"id\\\":\\\"focusable-no-name\\\",\\\"impact\\\":\\\"ser"
                        "ious\\\",\\\"message\\\":\\\"Element is not in tab order or has accessible text\\"
                        "\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-pric"
                        "ing > .fh5co-pricing > .container > div:nth-of-type(2) > .pricing > div:nth-of-t"
                        "ype(1) > .price-box.to-animate-2 > .btn.btn-select-plan.btn-sm\\\"],\\\"html\\\""
                        ":\\\"<a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"btn btn-select-plan btn-sm\\\\\\\">"
                        "Select Plan</a>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"has-visible"
                        "-text\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Element has text t"
                        "hat is visible to screen readers\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]"
                        ",\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"focusable-no-name\\\",\\\"impact\\"
                        "\":\\\"serious\\\",\\\"message\\\":\\\"Element is not in tab order or has access"
                        "ible text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\""
                        "#fh5co-pricing > .fh5co-pricing > .container > div:nth-of-type(2) > .pricing > d"
                        "iv:nth-of-type(2) > .price-box.to-animate-2 > .btn.btn-select-plan.btn-sm\\\"],\\"
                        "\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"btn btn-select-plan btn-s"
                        "m\\\\\\\">Select Plan</a>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"h"
                        "as-visible-text\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Element "
                        "has text that is visible to screen readers\\\",\\\"data\\\":null,\\\"relatedNode"
                        "s\\\":[]}],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"focusable-no-name\\\",\\"
                        "\"impact\\\":\\\"serious\\\",\\\"message\\\":\\\"Element is not in tab order or "
                        "has accessible text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target"
                        "\\\":[\\\"#fh5co-pricing > .fh5co-pricing > .container > div:nth-of-type(2) > .p"
                        "ricing > div:nth-of-type(3) > .price-box.to-animate-2.popular > .btn.btn-select-"
                        "plan.btn-sm\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"btn bt"
                        "n-select-plan btn-sm\\\\\\\">Select Plan</a>\\\",\\\"impact\\\":null,\\\"any\\\""
                        ":[{\\\"id\\\":\\\"has-";
long WebSocketSendLen123   = sizeof(WebSocketSend123) - 1;	 

 

char WebSocketSend124[] = "id-18 index-83 total-92 visible-text\\\",\\\"impact\\\":\\\"critical\\\",\\\"mes"
                        "sage\\\":\\\"Element has text that is visible to screen readers\\\",\\\"data\\\""
                        ":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"foc"
                        "usable-no-name\\\",\\\"impact\\\":\\\"serious\\\",\\\"message\\\":\\\"Element is"
                        " not in tab order or has accessible text\\\",\\\"data\\\":null,\\\"relatedNodes\\"
                        "\":[]}]},{\\\"target\\\":[\\\"#fh5co-pricing > .fh5co-pricing > .container > div"
                        ":nth-of-type(2) > .pricing > div:nth-of-type(4) > .price-box.to-animate-2 > .btn"
                        ".btn-select-plan.btn-sm\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\" class=\\"
                        "\\\\\"btn btn-select-plan btn-sm\\\\\\\">Select Plan</a>\\\",\\\"impact\\\":null"
                        ",\\\"any\\\":[{\\\"id\\\":\\\"has-visible-text\\\",\\\"impact\\\":\\\"critical\\"
                        "\",\\\"message\\\":\\\"Element has text that is visible to screen readers\\\",\\"
                        "\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\"
                        "\":\\\"focusable-no-name\\\",\\\"impact\\\":\\\"serious\\\",\\\"message\\\":\\\""
                        "Element is not in tab order or has accessible text\\\",\\\"data\\\":null,\\\"rel"
                        "atedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-pricing > .fh5co-pricing > .cont"
                        "ainer > div:nth-of-type(3) > .col-md-6.col-md-offset-3.to-animate > p > a\\\"],\\"
                        "\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\\">Learn More</a>\\\",\\\"impact\\\":null,"
                        "\\\"any\\\":[{\\\"id\\\":\\\"has-visible-text\\\",\\\"impact\\\":\\\"critical\\\""
                        ",\\\"message\\\":\\\"Element has text that is visible to screen readers\\\",\\\""
                        "data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\""
                        ":\\\"focusable-no-name\\\",\\\"impact\\\":\\\"serious\\\",\\\"message\\\":\\\"El"
                        "ement is not in tab order or has accessible text\\\",\\\"data\\\":null,\\\"relat"
                        "edNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-services > .fh5co-services > .cont"
                        "ainer > .call-to-action.text-center.to-animate > .btn.btn-learn\\\"],\\\"html\\\""
                        ":\\\"<a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"btn btn-learn\\\\\\\">Learn More</a"
                        ">\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"has-visible-text\\\",\\\""
                        "impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Element has text that is visible"
                        " to screen readers\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":["
                        "],\\\"none\\\":[{\\\"id\\\":\\\"focusable-no-name\\\",\\\"impact\\\":\\\"serious"
                        "\\\",\\\"message\\\":\\\"Element is not in tab order or has accessible text\\\","
                        "\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#form1 > .gett"
                        "ing-started.getting-started-2 > .container > .row > .col-md-6.to-animate-2 > .ca"
                        "ll-to-action.text-right > .sign-up\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"#\\\\\\"
                        "\" class=\\\\\\\"sign-up\\\\\\\">Sign Up For Free</a>\\\",\\\"impact\\\":null,\\"
                        "\"any\\\":[{\\\"id\\\":\\\"has-visible-text\\\",\\\"impact\\\":\\\"critical\\\","
                        "\\\"message\\\":\\\"Element has text that is visible to screen readers\\\",\\\"d"
                        "ata\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":"
                        "\\\"focusable-no-name\\\",\\\"impact\\\":\\\"serious\\\",\\\"message\\\":\\\"Ele"
                        "ment is not in tab order or has accessible text\\\",\\\"data\\\":null,\\\"relate"
                        "dNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-footer > .container > .row > div:nt"
                        "h-of-type(1) > .copy-right > a:nth-of-type(1)\\\"],\\\"html\\\":\\\"<a href=\\\\"
                        "\\\"http://freehtml5.co/\\\\\\\" target=\\\\\\\"_blank\\\\\\\">FREEHTML5.co</a>\\"
                        "\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"has-visible-text\\\",\\\"imp"
                        "act\\\":\\\"critical\\\",\\\"message\\\":\\\"Element has text that is visible to"
                        " screen readers\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\"
                        "\"none\\\":[{\\\"id\\\":\\\"focusable-no-name\\\",\\\"impact\\\":\\\"serious\\\""
                        ",\\\"message\\\"";
long WebSocketSendLen124   = sizeof(WebSocketSend124) - 1;	 

 

char WebSocketSend125[] = "id-18 index-84 total-92 :\\\"Element is not in tab order or has accessible text\\"
                        "\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-foot"
                        "er > .container > .row > div:nth-of-type(1) > .copy-right > a:nth-of-type(2)\\\""
                        "],\\\"html\\\":\\\"<a href=\\\\\\\"http://unsplash.com/\\\\\\\" target=\\\\\\\"_"
                        "blank\\\\\\\">Unsplash</a>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\""
                        "has-visible-text\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Element"
                        " has text that is visible to screen readers\\\",\\\"data\\\":null,\\\"relatedNod"
                        "es\\\":[]}],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"focusable-no-name\\\",\\"
                        "\"impact\\\":\\\"serious\\\",\\\"message\\\":\\\"Element is not in tab order or "
                        "has accessible text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target"
                        "\\\":[\\\"#fh5co-footer > .container > .row > div:nth-of-type(1) > .copy-right >"
                        " a:nth-of-type(3)\\\"],\\\"html\\\":\\\"<a href=\\\\\\\"https://dribbble.com/tib"
                        "i_neamu\\\\\\\" target=\\\\\\\"_blank\\\\\\\">Tiberiu</a>\\\",\\\"impact\\\":nul"
                        "l,\\\"any\\\":[{\\\"id\\\":\\\"has-visible-text\\\",\\\"impact\\\":\\\"critical\\"
                        "\",\\\"message\\\":\\\"Element has text that is visible to screen readers\\\",\\"
                        "\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\"
                        "\":\\\"focusable-no-name\\\",\\\"impact\\\":\\\"serious\\\",\\\"message\\\":\\\""
                        "Element is not in tab order or has accessible text\\\",\\\"data\\\":null,\\\"rel"
                        "atedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-footer > .container > .row > div"
                        ":nth-of-type(2) > .contact-info > li:nth-of-type(3) > a\\\"],\\\"html\\\":\\\"<a"
                        " href=\\\\\\\"#\\\\\\\">info@yoursite.com</a>\\\",\\\"impact\\\":null,\\\"any\\\""
                        ":[{\\\"id\\\":\\\"has-visible-text\\\",\\\"impact\\\":\\\"critical\\\",\\\"messa"
                        "ge\\\":\\\"Element has text that is visible to screen readers\\\",\\\"data\\\":n"
                        "ull,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"focus"
                        "able-no-name\\\",\\\"impact\\\":\\\"serious\\\",\\\"message\\\":\\\"Element is n"
                        "ot in tab order or has accessible text\\\",\\\"data\\\":null,\\\"relatedNodes\\\""
                        ":[]}]},{\\\"target\\\":[\\\"#fh5co-footer > .container > .row > div:nth-of-type("
                        "2) > .contact-info > li:nth-of-type(4) > a\\\"],\\\"html\\\":\\\"<a href=\\\\\\\""
                        "#\\\\\\\">www.yoursite.com</a>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":"
                        "\\\"has-visible-text\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Ele"
                        "ment has text that is visible to screen readers\\\",\\\"data\\\":null,\\\"relate"
                        "dNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"focusable-no-name\\"
                        "\",\\\"impact\\\":\\\"serious\\\",\\\"message\\\":\\\"Element is not in tab orde"
                        "r or has accessible text\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"t"
                        "arget\\\":[\\\"#map > div > .gm-style > div:nth-of-type(2) > a\\\"],\\\"html\\\""
                        ":\\\"<a target=\\\\\\\"_blank\\\\\\\" href=\\\\\\\"https://maps.google.com/maps?"
                        "ll=40.69847,-73.951442&amp;z=7&amp;t=m&amp;hl=en-US&amp;gl=US&amp;mapclient=apiv"
                        "3\\\\\\\" title=\\\\\\\"Click to see this area on Google Maps\\\\\\\" style=\\\\"
                        "\\\"position: static; overflow: visible; float: none; display: inline;\\\\\\\">\\"
                        "\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"has-visible-text\\\",\\\"imp"
                        "act\\\":\\\"critical\\\",\\\"message\\\":\\\"Element has text that is visible to"
                        " screen readers\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\"
                        "\"none\\\":[{\\\"id\\\":\\\"focusable-no-name\\\",\\\"impact\\\":\\\"serious\\\""
                        ",\\\"message\\\":\\\"Element is not in tab order or has accessible text\\\",\\\""
                        "data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#map > div > .gm-s"
                        "tyle > .gmnoprint.gm-style-cc > div:nth-of-type(2) > a\\\"],\\\"html\\\"";
long WebSocketSendLen125   = sizeof(WebSocketSend125) - 1;	 

 

char WebSocketSend126[] = "id-18 index-85 total-92 :\\\"<a href=\\\\\\\"https://www.google.com/intl/en-US_U"
                        "S/help/terms_maps.html\\\\\\\" target=\\\\\\\"_blank\\\\\\\" style=\\\\\\\"text-"
                        "decoration: none; cursor: pointer; color: rgb(68, 68, 68);\\\\\\\">Terms of Use<"
                        "/a>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"has-visible-text\\\",\\"
                        "\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Element has text that is visib"
                        "le to screen readers\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\""
                        ":[],\\\"none\\\":[{\\\"id\\\":\\\"focusable-no-name\\\",\\\"impact\\\":\\\"serio"
                        "us\\\",\\\"message\\\":\\\"Element is not in tab order or has accessible text\\\""
                        ",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]}]},{\\\"id\\\":\\\"list\\\",\\\"des"
                        "cription\\\":\\\"Ensures that lists are structured correctly\\\",\\\"help\\\":\\"
                        "\"<ul> and <ol> must only directly contain <li>, <script> or <template> elements"
                        "\\\",\\\"helpUrl\\\":\\\"https://dequeuniversity.com/rules/axe/2.0/list?applicat"
                        "ion=axeAPI\\\",\\\"impact\\\":null,\\\"tags\\\":[\\\"wcag2a\\\",\\\"wcag131\\\"]"
                        ",\\\"nodes\\\":[{\\\"target\\\":[\\\"#navbar > .nav.navbar-nav.navbar-right\\\"]"
                        ",\\\"html\\\":\\\"<ul class=\\\\\\\"nav navbar-nav navbar-right\\\\\\\">\\\",\\\""
                        "impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"only"
                        "-listitems\\\",\\\"impact\\\":\\\"serious\\\",\\\"message\\\":\\\"List element o"
                        "nly has direct children that are allowed inside <li> elements\\\",\\\"data\\\":n"
                        "ull,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-team > .fh5co-team > "
                        ".container > div:nth-of-type(2) > div:nth-of-type(1) > .team-box.text-center.to-"
                        "animate-2 > .social-media\\\"],\\\"html\\\":\\\"<ul class=\\\\\\\"social-media\\"
                        "\\\\\">\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\""
                        "id\\\":\\\"only-listitems\\\",\\\"impact\\\":\\\"serious\\\",\\\"message\\\":\\\""
                        "List element only has direct children that are allowed inside <li> elements\\\","
                        "\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-team > "
                        ".fh5co-team > .container > div:nth-of-type(2) > div:nth-of-type(2) > .team-box.t"
                        "ext-center.to-animate-2 > .social-media\\\"],\\\"html\\\":\\\"<ul class=\\\\\\\""
                        "social-media\\\\\\\">\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\""
                        "none\\\":[{\\\"id\\\":\\\"only-listitems\\\",\\\"impact\\\":\\\"serious\\\",\\\""
                        "message\\\":\\\"List element only has direct children that are allowed inside <l"
                        "i> elements\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\"
                        "\"#fh5co-team > .fh5co-team > .container > div:nth-of-type(2) > div:nth-of-type("
                        "3) > .team-box.text-center.to-animate-2 > .social-media\\\"],\\\"html\\\":\\\"<u"
                        "l class=\\\\\\\"social-media\\\\\\\">\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\""
                        "all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"only-listitems\\\",\\\"impact\\\":\\\"s"
                        "erious\\\",\\\"message\\\":\\\"List element only has direct children that are al"
                        "lowed inside <li> elements\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}]},{\\\""
                        "target\\\":[\\\"#fh5co-footer > .container > .row > div:nth-of-type(2) > .contac"
                        "t-info\\\"],\\\"html\\\":\\\"<ul class=\\\\\\\"contact-info\\\\\\\">\\\",\\\"imp"
                        "act\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\"none\\\":[{\\\"id\\\":\\\"only-li"
                        "stitems\\\",\\\"impact\\\":\\\"serious\\\",\\\"message\\\":\\\"List element only"
                        " has direct children that are allowed inside <li> elements\\\",\\\"data\\\":null"
                        ",\\\"relatedNodes\\\":[]}]},{\\\"target\\\":[\\\"#fh5co-footer > .container > .r"
                        "ow > div:nth-of-type(2) > .social-media\\\"],\\\"html\\\":\\\"<ul class=\\\\\\\""
                        "social-media\\\\\\\">\\\",\\\"impact\\\":null,\\\"any\\\":[],\\\"all\\\":[],\\\""
                        "none\\\":[{\\\"id\\\":\\\"only-listitems\\\",\\\"impact\\\":\\\"";
long WebSocketSendLen126   = sizeof(WebSocketSend126) - 1;	 

 

char WebSocketSend127[] = "id-18 index-86 total-92 serious\\\",\\\"message\\\":\\\"List element only has di"
                        "rect children that are allowed inside <li> elements\\\",\\\"data\\\":null,\\\"re"
                        "latedNodes\\\":[]}]}]},{\\\"id\\\":\\\"listitem\\\",\\\"description\\\":\\\"Ensu"
                        "res <li> elements are used semantically\\\",\\\"help\\\":\\\"<li> elements must "
                        "be contained in a <ul> or <ol>\\\",\\\"helpUrl\\\":\\\"https://dequeuniversity.c"
                        "om/rules/axe/2.0/listitem?application=axeAPI\\\",\\\"impact\\\":null,\\\"tags\\\""
                        ":[\\\"wcag2a\\\",\\\"wcag131\\\"],\\\"nodes\\\":[{\\\"target\\\":[\\\"#navbar > "
                        ".nav.navbar-nav.navbar-right > li:nth-of-type(1)\\\"],\\\"html\\\":\\\"<li class"
                        "=\\\\\\\"\\\\\\\"><a href=\\\\\\\"Index.aspx\\\\\\\" data-nav-section=\\\\\\\"ho"
                        "me\\\\\\\"><span>Home</span></a></li>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\""
                        "id\\\":\\\"listitem\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"List"
                        " item has a <ul>, <ol> or role=\\\\\\\"list\\\\\\\" parent element\\\",\\\"data\\"
                        "\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\""
                        ":[\\\"#navbar > .nav.navbar-nav.navbar-right > li:nth-of-type(2)\\\"],\\\"html\\"
                        "\":\\\"<li><a href=\\\\\\\"#\\\\\\\" data-nav-section=\\\\\\\"explore\\\\\\\"><s"
                        "pan>Explore</span></a></li>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\""
                        "listitem\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"List item has a"
                        " <ul>, <ol> or role=\\\\\\\"list\\\\\\\" parent element\\\",\\\"data\\\":null,\\"
                        "\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#na"
                        "vbar > .nav.navbar-nav.navbar-right > .active\\\"],\\\"html\\\":\\\"<li class=\\"
                        "\\\\\"active\\\\\\\"><a href=\\\\\\\"#\\\\\\\" data-nav-section=\\\\\\\"testimon"
                        "y\\\\\\\"><span>Testimony</span></a></li>\\\",\\\"impact\\\":null,\\\"any\\\":[{"
                        "\\\"id\\\":\\\"listitem\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\""
                        "List item has a <ul>, <ol> or role=\\\\\\\"list\\\\\\\" parent element\\\",\\\"d"
                        "ata\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"targ"
                        "et\\\":[\\\"#navbar > .nav.navbar-nav.navbar-right > li:nth-of-type(4)\\\"],\\\""
                        "html\\\":\\\"<li><a href=\\\\\\\"#\\\\\\\" data-nav-section=\\\\\\\"pricing\\\\\\"
                        "\"><span>Pricing</span></a></li>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\""
                        ":\\\"listitem\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"List item "
                        "has a <ul>, <ol> or role=\\\\\\\"list\\\\\\\" parent element\\\",\\\"data\\\":nu"
                        "ll,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\"
                        "\"#navbar > .nav.navbar-nav.navbar-right > li:nth-of-type(5)\\\"],\\\"html\\\":\\"
                        "\"<li><a href=\\\\\\\"#\\\\\\\" data-nav-section=\\\\\\\"services\\\\\\\"><span>"
                        "Services</span></a></li>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"li"
                        "stitem\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"List item has a <"
                        "ul>, <ol> or role=\\\\\\\"list\\\\\\\" parent element\\\",\\\"data\\\":null,\\\""
                        "relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#navb"
                        "ar > .nav.navbar-nav.navbar-right > li:nth-of-type(6)\\\"],\\\"html\\\":\\\"<li>"
                        "<a href=\\\\\\\"#\\\\\\\" data-nav-section=\\\\\\\"team\\\\\\\"><span>Team</span"
                        "></a></li>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"listitem\\\",\\\""
                        "impact\\\":\\\"critical\\\",\\\"message\\\":\\\"List item has a <ul>, <ol> or ro"
                        "le=\\\\\\\"list\\\\\\\" parent element\\\",\\\"data\\\":null,\\\"relatedNodes\\\""
                        ":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#navbar > .nav.navbar"
                        "-nav.navbar-right > li:nth-of-type(7)\\\"],\\\"html\\\":\\\"<li><a href=\\\\\\\""
                        "#\\\\\\\" data-nav-section=\\\\\\\"faq\\\\\\\"><span>FAQ</span></a></li>\\\",\\\""
                        "impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"listitem\\\",\\\"impact\\\":\\\"cri"
                        "tical\\\",\\\"message\\\":\\\"List item has a <ul>, <ol> or role=\\\\\\\"list\\\\"
                        "\\\" pare";
long WebSocketSendLen127   = sizeof(WebSocketSend127) - 1;	 

 

char WebSocketSend128[] = "id-18 index-87 total-92 nt element\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]"
                        "}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#navbar > .nav.navbar-na"
                        "v.navbar-right > .call-to-action\\\"],\\\"html\\\":\\\"<li class=\\\\\\\"call-to"
                        "-action\\\\\\\"><a href=\\\\\\\"#\\\\\\\"><span>Sign up free</span></a></li>\\\""
                        ",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"listitem\\\",\\\"impact\\\":\\"
                        "\"critical\\\",\\\"message\\\":\\\"List item has a <ul>, <ol> or role=\\\\\\\"li"
                        "st\\\\\\\" parent element\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"al"
                        "l\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-team > .fh5co-team > .cont"
                        "ainer > div:nth-of-type(2) > div:nth-of-type(1) > .team-box.text-center.to-anima"
                        "te-2 > .social-media > li:nth-of-type(1)\\\"],\\\"html\\\":\\\"<li><a href=\\\\\\"
                        "\"#\\\\\\\" class=\\\\\\\"facebook\\\\\\\"><i class=\\\\\\\"icon-facebook\\\\\\\""
                        "></i></a></li>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"listitem\\\""
                        ",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"List item has a <ul>, <ol> "
                        "or role=\\\\\\\"list\\\\\\\" parent element\\\",\\\"data\\\":null,\\\"relatedNod"
                        "es\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-team > ."
                        "fh5co-team > .container > div:nth-of-type(2) > div:nth-of-type(1) > .team-box.te"
                        "xt-center.to-animate-2 > .social-media > li:nth-of-type(2)\\\"],\\\"html\\\":\\\""
                        "<li><a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"twitter\\\\\\\"><i class=\\\\\\\"ico"
                        "n-twitter\\\\\\\"></i></a></li>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\""
                        ":\\\"listitem\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"List item "
                        "has a <ul>, <ol> or role=\\\\\\\"list\\\\\\\" parent element\\\",\\\"data\\\":nu"
                        "ll,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\"
                        "\"#fh5co-team > .fh5co-team > .container > div:nth-of-type(2) > div:nth-of-type("
                        "1) > .team-box.text-center.to-animate-2 > .social-media > li:nth-of-type(3)\\\"]"
                        ",\\\"html\\\":\\\"<li><a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"dribbble\\\\\\\"><"
                        "i class=\\\\\\\"icon-dribbble\\\\\\\"></i></a></li>\\\",\\\"impact\\\":null,\\\""
                        "any\\\":[{\\\"id\\\":\\\"listitem\\\",\\\"impact\\\":\\\"critical\\\",\\\"messag"
                        "e\\\":\\\"List item has a <ul>, <ol> or role=\\\\\\\"list\\\\\\\" parent element"
                        "\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]}"
                        ",{\\\"target\\\":[\\\"#fh5co-team > .fh5co-team > .container > div:nth-of-type(2"
                        ") > div:nth-of-type(1) > .team-box.text-center.to-animate-2 > .social-media > li"
                        ":nth-of-type(4)\\\"],\\\"html\\\":\\\"<li><a href=\\\\\\\"#\\\\\\\" class=\\\\\\"
                        "\"codepen\\\\\\\"><i class=\\\\\\\"icon-codepen\\\\\\\"></i></a></li>\\\",\\\"im"
                        "pact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"listitem\\\",\\\"impact\\\":\\\"criti"
                        "cal\\\",\\\"message\\\":\\\"List item has a <ul>, <ol> or role=\\\\\\\"list\\\\\\"
                        "\" parent element\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[]"
                        ",\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-team > .fh5co-team > .container > "
                        "div:nth-of-type(2) > div:nth-of-type(1) > .team-box.text-center.to-animate-2 > ."
                        "social-media > li:nth-of-type(5)\\\"],\\\"html\\\":\\\"<li><a href=\\\\\\\"#\\\\"
                        "\\\" class=\\\\\\\"github\\\\\\\"><i class=\\\\\\\"icon-github-alt\\\\\\\"></i><"
                        "/a></li>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"listitem\\\",\\\"i"
                        "mpact\\\":\\\"critical\\\",\\\"message\\\":\\\"List item has a <ul>, <ol> or rol"
                        "e=\\\\\\\"list\\\\\\\" parent element\\\",\\\"data\\\":null,\\\"relatedNodes\\\""
                        ":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-team > .fh5co-"
                        "team > .container > div:nth-of-type(2) > div:nth-of-type(2) > .team-box.text-cen"
                        "ter.to-animate-2 > .social-media > li:nth-of-type(1)\\\"],\\\"html\\\":\\\"<li><"
                        "a href=\\\\\\\"#";
long WebSocketSendLen128   = sizeof(WebSocketSend128) - 1;	 

 

char WebSocketSend129[] = "id-18 index-88 total-92 \\\\\\\" class=\\\\\\\"facebook\\\\\\\"><i class=\\\\\\\""
                        "icon-facebook\\\\\\\"></i></a></li>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id"
                        "\\\":\\\"listitem\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"List i"
                        "tem has a <ul>, <ol> or role=\\\\\\\"list\\\\\\\" parent element\\\",\\\"data\\\""
                        ":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":"
                        "[\\\"#fh5co-team > .fh5co-team > .container > div:nth-of-type(2) > div:nth-of-ty"
                        "pe(2) > .team-box.text-center.to-animate-2 > .social-media > li:nth-of-type(2)\\"
                        "\"],\\\"html\\\":\\\"<li><a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"twitter\\\\\\\""
                        "><i class=\\\\\\\"icon-twitter\\\\\\\"></i></a></li>\\\",\\\"impact\\\":null,\\\""
                        "any\\\":[{\\\"id\\\":\\\"listitem\\\",\\\"impact\\\":\\\"critical\\\",\\\"messag"
                        "e\\\":\\\"List item has a <ul>, <ol> or role=\\\\\\\"list\\\\\\\" parent element"
                        "\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]}"
                        ",{\\\"target\\\":[\\\"#fh5co-team > .fh5co-team > .container > div:nth-of-type(2"
                        ") > div:nth-of-type(2) > .team-box.text-center.to-animate-2 > .social-media > li"
                        ":nth-of-type(3)\\\"],\\\"html\\\":\\\"<li><a href=\\\\\\\"#\\\\\\\" class=\\\\\\"
                        "\"dribbble\\\\\\\"><i class=\\\\\\\"icon-dribbble\\\\\\\"></i></a></li>\\\",\\\""
                        "impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"listitem\\\",\\\"impact\\\":\\\"cri"
                        "tical\\\",\\\"message\\\":\\\"List item has a <ul>, <ol> or role=\\\\\\\"list\\\\"
                        "\\\" parent element\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":"
                        "[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-team > .fh5co-team > .container "
                        "> div:nth-of-type(2) > div:nth-of-type(2) > .team-box.text-center.to-animate-2 >"
                        " .social-media > li:nth-of-type(4)\\\"],\\\"html\\\":\\\"<li><a href=\\\\\\\"#\\"
                        "\\\\\" class=\\\\\\\"codepen\\\\\\\"><i class=\\\\\\\"icon-codepen\\\\\\\"></i><"
                        "/a></li>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"listitem\\\",\\\"i"
                        "mpact\\\":\\\"critical\\\",\\\"message\\\":\\\"List item has a <ul>, <ol> or rol"
                        "e=\\\\\\\"list\\\\\\\" parent element\\\",\\\"data\\\":null,\\\"relatedNodes\\\""
                        ":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-team > .fh5co-"
                        "team > .container > div:nth-of-type(2) > div:nth-of-type(2) > .team-box.text-cen"
                        "ter.to-animate-2 > .social-media > li:nth-of-type(5)\\\"],\\\"html\\\":\\\"<li><"
                        "a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"github\\\\\\\"><i class=\\\\\\\"icon-gith"
                        "ub-alt\\\\\\\"></i></a></li>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\"
                        "\"listitem\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"List item has"
                        " a <ul>, <ol> or role=\\\\\\\"list\\\\\\\" parent element\\\",\\\"data\\\":null,"
                        "\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#"
                        "fh5co-team > .fh5co-team > .container > div:nth-of-type(2) > div:nth-of-type(3) "
                        "> .team-box.text-center.to-animate-2 > .social-media > li:nth-of-type(1)\\\"],\\"
                        "\"html\\\":\\\"<li><a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"facebook\\\\\\\"><i c"
                        "lass=\\\\\\\"icon-facebook\\\\\\\"></i></a></li>\\\",\\\"impact\\\":null,\\\"any"
                        "\\\":[{\\\"id\\\":\\\"listitem\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\"
                        "\":\\\"List item has a <ul>, <ol> or role=\\\\\\\"list\\\\\\\" parent element\\\""
                        ",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\"
                        "\"target\\\":[\\\"#fh5co-team > .fh5co-team > .container > div:nth-of-type(2) > "
                        "div:nth-of-type(3) > .team-box.text-center.to-animate-2 > .social-media > li:nth"
                        "-of-type(2)\\\"],\\\"html\\\":\\\"<li><a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"tw"
                        "itter\\\\\\\"><i class=\\\\\\\"icon-twitter\\\\\\\"></i></a></li>\\\",\\\"impact"
                        "\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"listitem\\\",\\\"impact\\\":\\\"critical\\"
                        "\",\\\"message\\\":\\\"List item has a";
long WebSocketSendLen129   = sizeof(WebSocketSend129) - 1;	 

 

char WebSocketSend130[] = "id-18 index-89 total-92  <ul>, <ol> or role=\\\\\\\"list\\\\\\\" parent element\\"
                        "\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{"
                        "\\\"target\\\":[\\\"#fh5co-team > .fh5co-team > .container > div:nth-of-type(2) "
                        "> div:nth-of-type(3) > .team-box.text-center.to-animate-2 > .social-media > li:n"
                        "th-of-type(3)\\\"],\\\"html\\\":\\\"<li><a href=\\\\\\\"#\\\\\\\" class=\\\\\\\""
                        "dribbble\\\\\\\"><i class=\\\\\\\"icon-dribbble\\\\\\\"></i></a></li>\\\",\\\"im"
                        "pact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"listitem\\\",\\\"impact\\\":\\\"criti"
                        "cal\\\",\\\"message\\\":\\\"List item has a <ul>, <ol> or role=\\\\\\\"list\\\\\\"
                        "\" parent element\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[]"
                        ",\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-team > .fh5co-team > .container > "
                        "div:nth-of-type(2) > div:nth-of-type(3) > .team-box.text-center.to-animate-2 > ."
                        "social-media > li:nth-of-type(4)\\\"],\\\"html\\\":\\\"<li><a href=\\\\\\\"#\\\\"
                        "\\\" class=\\\\\\\"codepen\\\\\\\"><i class=\\\\\\\"icon-codepen\\\\\\\"></i></a"
                        "></li>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"listitem\\\",\\\"imp"
                        "act\\\":\\\"critical\\\",\\\"message\\\":\\\"List item has a <ul>, <ol> or role="
                        "\\\\\\\"list\\\\\\\" parent element\\\",\\\"data\\\":null,\\\"relatedNodes\\\":["
                        "]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-team > .fh5co-te"
                        "am > .container > div:nth-of-type(2) > div:nth-of-type(3) > .team-box.text-cente"
                        "r.to-animate-2 > .social-media > li:nth-of-type(5)\\\"],\\\"html\\\":\\\"<li><a "
                        "href=\\\\\\\"#\\\\\\\" class=\\\\\\\"github\\\\\\\"><i class=\\\\\\\"icon-github"
                        "-alt\\\\\\\"></i></a></li>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\""
                        "listitem\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"List item has a"
                        " <ul>, <ol> or role=\\\\\\\"list\\\\\\\" parent element\\\",\\\"data\\\":null,\\"
                        "\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh"
                        "5co-footer > .container > .row > div:nth-of-type(2) > .contact-info > li:nth-of-"
                        "type(1)\\\"],\\\"html\\\":\\\"<li><i class=\\\\\\\"icon-map-marker\\\\\\\"></i>1"
                        "98 West 21th Street, Suite 721 New York NY 10016</li>\\\",\\\"impact\\\":null,\\"
                        "\"any\\\":[{\\\"id\\\":\\\"listitem\\\",\\\"impact\\\":\\\"critical\\\",\\\"mess"
                        "age\\\":\\\"List item has a <ul>, <ol> or role=\\\\\\\"list\\\\\\\" parent eleme"
                        "nt\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":["
                        "]},{\\\"target\\\":[\\\"#fh5co-footer > .container > .row > div:nth-of-type(2) >"
                        " .contact-info > li:nth-of-type(2)\\\"],\\\"html\\\":\\\"<li><i class=\\\\\\\"ic"
                        "on-phone\\\\\\\"></i>+ 1235 2355 98</li>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\"
                        "\"id\\\":\\\"listitem\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"Li"
                        "st item has a <ul>, <ol> or role=\\\\\\\"list\\\\\\\" parent element\\\",\\\"dat"
                        "a\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target"
                        "\\\":[\\\"#fh5co-footer > .container > .row > div:nth-of-type(2) > .contact-info"
                        " > li:nth-of-type(3)\\\"],\\\"html\\\":\\\"<li><i class=\\\\\\\"icon-envelope\\\\"
                        "\\\"></i><a href=\\\\\\\"#\\\\\\\">info@yoursite.com</a></li>\\\",\\\"impact\\\""
                        ":null,\\\"any\\\":[{\\\"id\\\":\\\"listitem\\\",\\\"impact\\\":\\\"critical\\\","
                        "\\\"message\\\":\\\"List item has a <ul>, <ol> or role=\\\\\\\"list\\\\\\\" pare"
                        "nt element\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"no"
                        "ne\\\":[]},{\\\"target\\\":[\\\"#fh5co-footer > .container > .row > div:nth-of-t"
                        "ype(2) > .contact-info > li:nth-of-type(4)\\\"],\\\"html\\\":\\\"<li><i class=\\"
                        "\\\\\"icon-globe2\\\\\\\"></i><a href=\\\\\\\"#\\\\\\\">www.yoursite.com</a></li"
                        ">\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"listitem\\\",\\\"impact\\"
                        "\":\\\"critical\\\",\\\"message\\";
long WebSocketSendLen130   = sizeof(WebSocketSend130) - 1;	 

 

char WebSocketSend131[] = "id-18 index-90 total-92 \":\\\"List item has a <ul>, <ol> or role=\\\\\\\"list\\"
                        "\\\\\" parent element\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\""
                        ":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-footer > .container > .row > di"
                        "v:nth-of-type(2) > .social-media > li:nth-of-type(1)\\\"],\\\"html\\\":\\\"<li><"
                        "a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"facebook\\\\\\\"><i class=\\\\\\\"icon-fa"
                        "cebook\\\\\\\"></i></a></li>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\"
                        "\"listitem\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"List item has"
                        " a <ul>, <ol> or role=\\\\\\\"list\\\\\\\" parent element\\\",\\\"data\\\":null,"
                        "\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#"
                        "fh5co-footer > .container > .row > div:nth-of-type(2) > .social-media > li:nth-o"
                        "f-type(2)\\\"],\\\"html\\\":\\\"<li><a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"twit"
                        "ter\\\\\\\"><i class=\\\\\\\"icon-twitter\\\\\\\"></i></a></li>\\\",\\\"impact\\"
                        "\":null,\\\"any\\\":[{\\\"id\\\":\\\"listitem\\\",\\\"impact\\\":\\\"critical\\\""
                        ",\\\"message\\\":\\\"List item has a <ul>, <ol> or role=\\\\\\\"list\\\\\\\" par"
                        "ent element\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"n"
                        "one\\\":[]},{\\\"target\\\":[\\\"#fh5co-footer > .container > .row > div:nth-of-"
                        "type(2) > .social-media > li:nth-of-type(3)\\\"],\\\"html\\\":\\\"<li><a href=\\"
                        "\\\\\"#\\\\\\\" class=\\\\\\\"dribbble\\\\\\\"><i class=\\\\\\\"icon-dribbble\\\\"
                        "\\\"></i></a></li>\\\",\\\"impact\\\":null,\\\"any\\\":[{\\\"id\\\":\\\"listitem"
                        "\\\",\\\"impact\\\":\\\"critical\\\",\\\"message\\\":\\\"List item has a <ul>, <"
                        "ol> or role=\\\\\\\"list\\\\\\\" parent element\\\",\\\"data\\\":null,\\\"relate"
                        "dNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]},{\\\"target\\\":[\\\"#fh5co-foot"
                        "er > .container > .row > div:nth-of-type(2) > .social-media > li:nth-of-type(4)\\"
                        "\"],\\\"html\\\":\\\"<li><a href=\\\\\\\"#\\\\\\\" class=\\\\\\\"github\\\\\\\">"
                        "<i class=\\\\\\\"icon-github-alt\\\\\\\"></i></a></li>\\\",\\\"impact\\\":null,\\"
                        "\"any\\\":[{\\\"id\\\":\\\"listitem\\\",\\\"impact\\\":\\\"critical\\\",\\\"mess"
                        "age\\\":\\\"List item has a <ul>, <ol> or role=\\\\\\\"list\\\\\\\" parent eleme"
                        "nt\\\",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":["
                        "]}]},{\\\"id\\\":\\\"meta-viewport-large\\\",\\\"description\\\":\\\"Ensures <me"
                        "ta name=\\\\\\\"viewport\\\\\\\"> can scale a significant amount\\\",\\\"help\\\""
                        ":\\\"Users should be able to zoom and scale the text up to 500%\\\",\\\"helpUrl\\"
                        "\":\\\"https://dequeuniversity.com/rules/axe/2.0/meta-viewport-large?application"
                        "=axeAPI\\\",\\\"impact\\\":null,\\\"tags\\\":[\\\"best-practice\\\"],\\\"nodes\\"
                        "\":[{\\\"target\\\":[\\\".js.flexbox.canvas.canvastext.webgl.touch.geolocation.p"
                        "ostmessage.websqldatabase.indexeddb.hashchange.history.draganddrop.websockets.rg"
                        "ba.hsla.multiplebgs.backgroundsize.borderimage.borderradius.boxshadow.textshadow"
                        ".opacity.cssanimations.csscolumns.cssgradients.cssreflections.csstransforms.csst"
                        "ransforms3d.csstransitions.fontface.no-generatedcontent.video.audio.localstorage"
                        ".sessionstorage.webworkers.applicationcache.svg.inlinesvg.smil.svgclippaths > he"
                        "ad > meta:nth-of-type(3)\\\"],\\\"html\\\":\\\"<meta name=\\\\\\\"viewport\\\\\\"
                        "\" content=\\\\\\\"width=device-width, initial-scale=1\\\\\\\">\\\",\\\"impact\\"
                        "\":null,\\\"any\\\":[{\\\"id\\\":\\\"meta-viewport-large\\\",\\\"impact\\\":\\\""
                        "minor\\\",\\\"message\\\":\\\"<meta> tag does not prevent significant zooming\\\""
                        ",\\\"data\\\":null,\\\"relatedNodes\\\":[]}],\\\"all\\\":[],\\\"none\\\":[]}]},{"
                        "\\\"id\\\":\\\"meta-viewport\\\",\\\"description\\\":\\\"Ensures <meta name=\\\\"
                        "\\\"viewport\\\\\\\"> does not disable text scaling and zoo";
long WebSocketSendLen131   = sizeof(WebSocketSend131) - 1;	 

 

char WebSocketReceive5[] = "{\"C\":\"d-EB181140-F,0|G,8|H,0\",\"M\":[\"{\\\"name\\\":\\\"sys.callback\\\",\\"
                        "\"args\\\":[4,{\\\"ranges\\\":[{\\\"start\\\":411,\\\"length\\\":301},{\\\"start"
                        "\\\":714,\\\"length\\\":41},{\\\"start\\\":756,\\\"length\\\":41},{\\\"start\\\""
                        ":798,\\\"length\\\":43},{\\\"start\\\":842,\\\"length\\\":46},{\\\"start\\\":889"
                        ",\\\"length\\\":41},{\\\"start\\\":931,\\\"length\\\":40},{\\\"start\\\":972,\\\""
                        "length\\\":42},{\\\"start\\\":1015,\\\"length\\\":40},{\\\"start\\\":1056,\\\"le"
                        "ngth\\\":40},{\\\"start\\\":1097,\\\"length\\\":44},{\\\"start\\\":1142,\\\"leng"
                        "th\\\":38},{\\\"start\\\":1181,\\\"length\\\":43},{\\\"start\\\":1225,\\\"length"
                        "\\\":41},{\\\"start\\\":1267,\\\"length\\\":41},{\\\"start\\\":1309,\\\"length\\"
                        "\":42},{\\\"start\\\":1352,\\\"length\\\":41},{\\\"start\\\":1394,\\\"length\\\""
                        ":47},{\\\"start\\\":1442,\\\"length\\\":48},{\\\"start\\\":1491,\\\"length\\\":4"
                        "5},{\\\"start\\\":1537,\\\"length\\\":42},{\\\"start\\\":1580,\\\"length\\\":39}"
                        ",{\\\"start\\\":1620,\\\"length\\\":40},{\\\"start\\\":1661,\\\"length\\\":43},{"
                        "\\\"start\\\":1705,\\\"length\\\":40},{\\\"start\\\":1746,\\\"length\\\":42},{\\"
                        "\"start\\\":1789,\\\"length\\\":43},{\\\"start\\\":1833,\\\"length\\\":40},{\\\""
                        "start\\\":1874,\\\"length\\\":44},{\\\"start\\\":1919,\\\"length\\\":55},{\\\"st"
                        "art\\\":1975,\\\"length\\\":53},{\\\"start\\\":2029,\\\"length\\\":41},{\\\"star"
                        "t\\\":2071,\\\"length\\\":49},{\\\"start\\\":2121,\\\"length\\\":43},{\\\"start\\"
                        "\":2165,\\\"length\\\":48},{\\\"start\\\":2214,\\\"length\\\":43},{\\\"start\\\""
                        ":2258,\\\"length\\\":44},{\\\"start\\\":2303,\\\"length\\\":40},{\\\"start\\\":2"
                        "344,\\\"length\\\":40},{\\\"start\\\":2385,\\\"length\\\":46},{\\\"start\\\":243"
                        "2,\\\"length\\\":46},{\\\"start\\\":2479,\\\"length\\\":47},{\\\"start\\\":2527,"
                        "\\\"length\\\":45},{\\\"start\\\":2573,\\\"length\\\":42},{\\\"start\\\":2616,\\"
                        "\"length\\\":43},{\\\"start\\\":2660,\\\"length\\\":39},{\\\"start\\\":2700,\\\""
                        "length\\\":40},{\\\"start\\\":2741,\\\"length\\\":40},{\\\"start\\\":2782,\\\"le"
                        "ngth\\\":44},{\\\"start\\\":2827,\\\"length\\\":41},{\\\"start\\\":2869,\\\"leng"
                        "th\\\":42},{\\\"start\\\":2912,\\\"length\\\":40},{\\\"start\\\":2953,\\\"length"
                        "\\\":40},{\\\"start\\\":2994,\\\"length\\\":42},{\\\"start\\\":3037,\\\"length\\"
                        "\":47},{\\\"start\\\":3085,\\\"length\\\":46},{\\\"start\\\":3132,\\\"length\\\""
                        ":46},{\\\"start\\\":3179,\\\"length\\\":49},{\\\"start\\\":3229,\\\"length\\\":4"
                        "7},{\\\"start\\\":3277,\\\"length\\\":50},{\\\"start\\\":3328,\\\"length\\\":40}"
                        ",{\\\"start\\\":3369,\\\"length\\\":42},{\\\"start\\\":3412,\\\"length\\\":43},{"
                        "\\\"start\\\":3456,\\\"length\\\":42},{\\\"start\\\":3499,\\\"length\\\":48},{\\"
                        "\"start\\\":3548,\\\"length\\\":41},{\\\"start\\\":3590,\\\"length\\\":41},{\\\""
                        "start\\\":3632,\\\"length\\\":45},{\\\"start\\\":3678,\\\"length\\\":42},{\\\"st"
                        "art\\\":3721,\\\"length\\\":46},{\\\"start\\\":3768,\\\"length\\\":42},{\\\"star"
                        "t\\\":3811,\\\"length\\\":40},{\\\"start\\\":3852,\\\"length\\\":40},{\\\"start\\"
                        "\":3893,\\\"length\\\":51},{\\\"start\\\":3945,\\\"length\\\":50},{\\\"start\\\""
                        ":3996,\\\"length\\\":50},{\\\"start\\\":4047,\\\"length\\\":42},{\\\"start\\\":4"
                        "090,\\\"length\\\":49},{\\\"start\\\":4140,\\\"length\\\":49},{\\\"start\\\":419"
                        "0,\\\"length\\\":44},{\\\"start\\\":4235,\\\"length\\\":41},{\\\"start\\\":4277,"
                        "\\\"length\\\":42},{\\\"start\\\":4320,\\\"length\\\":41},{\\\"start\\\":4362,\\"
                        "\"length\\\":43},{\\\"start\\\":4406,\\\"length\\\":49},{\\\"start\\\":4456,\\\""
                        "length\\\":48},{\\\"start\\\":4505,\\\"length\\\":41},{\\\"start\\\":4547,\\\"le"
                        "ngth\\\":48},{\\\"start\\\":4596,\\\"length\\\":49},{\\\"start\\\":4646,\\\"leng"
                        "th\\\":47},{\\\"start\\\":4694,\\\"length\\\":48},{\\\"start\\\":4743,\\\"length"
                        "\\\":48},{\\\"start\\\":4792,\\\"length\\\":48},{\\\"start\\\":4841,\\\"length\\"
                        "\":51},{\\\"start\\\":4893,\\\"length\\\":47},{\\\"start\\\":4941,\\\"length\\\""
                        ":46},{\\\"start\\\":4988,\\\"length\\\":50},{\\\"start\\\":5039,\\\"length\\\":5"
                        "0},{\\\"start\\\":5090,\\\"length\\\":40},{\\\"start\\\":5131,\\\"length\\\":46}"
                        ",{\\\"start\\\":5178,\\\"length\\\":47},{\\\"start\\\":5226,\\\"length\\\":44},{"
                        "\\\"start\\\":5271,\\\"length\\\":46},{\\\"start\\\":5318,\\\"length\\\":48},{\\"
                        "\"start\\\":5367,\\\"length\\\":41},{\\\"start\\\":5409,\\\"length\\\":43},{\\\""
                        "start\\\":5453,\\\"length\\\":44},{\\\"start\\\":5498,\\\"length\\\":40},{\\\"st"
                        "art\\\":5539,\\\"length\\\":41},{\\\"start\\\":5581,\\\"length\\\":44},{\\\"star"
                        "t\\\":5626,\\\"length\\\":54},{\\\"start\\\":5681,\\\"length\\\":40},{\\\"start\\"
                        "\":5722,\\\"length\\\":40},{\\\"start\\\":5763,\\\"length\\\":40},{\\\"start\\\""
                        ":5804,\\\"length\\\":39},{\\\"start\\\":5844,\\\"length\\\":45},{\\\"start\\\":5"
                        "890,\\\"length\\\":56},{\\\"start\\\":5947,\\\"length\\\":43},{\\\"start\\\":599"
                        "1,\\\"length\\\":41},{\\\"start\\\":6033,\\\"length\\\":44},{\\\"start\\\":6078,"
                        "\\\"length\\\":42},{\\\"start\\\":6121,\\\"length\\\":43},{\\\"start\\\":6165,\\"
                        "\"length\\\":42},{\\\"start\\\":6208,\\\"length\\\":46},{\\\"start\\\":6255,\\\""
                        "length\\\":48},{\\\"start\\\":6304,\\\"length\\\":43},{\\\"start\\\":6348,\\\"le"
                        "ngth\\\":49},{\\\"start\\\":6398,\\\"length\\\":42},{\\\"start\\\":6441,\\\"leng"
                        "th\\\":47},{\\\"start\\\":6489,\\\"length\\\":44},{\\\"start\\\":6534,\\\"length"
                        "\\\":44},{\\\"start\\\":6579,\\\"length\\\":45},{\\\"start\\\":6625,\\\"length\\"
                        "\":47},{\\\"start\\\":6673,\\\"length\\\":50},{\\\"start\\\":6724,\\\"length\\\""
                        ":51},{\\\"start\\\":6776,\\\"length\\\":48},{\\\"start\\\":6825,\\\"length\\\":3"
                        "9},{\\\"start\\\":6865,\\\"length\\\":40},{\\\"start\\\":6906,\\\"length\\\":41}"
                        ",{\\\"start\\\":6948,\\\"length\\\":44},{\\\"start\\\":6993,\\\"length\\\":47},{"
                        "\\\"start\\\":7041,\\\"length\\\":49},{\\\"start\\\":7091,\\\"length\\\":45},{\\"
                        "\"start\\\":7137,\\\"length\\\":43},{\\\"start\\\":7181,\\\"length\\\":44},{\\\""
                        "start\\\":7226,\\\"length\\\":51},{\\\"start\\\":7278,\\\"length\\\":46},{\\\"st"
                        "art\\\":7325,\\\"length\\\":49},{\\\"start\\\":7375,\\\"length\\\":43},{\\\"star"
                        "t\\\":7419,\\\"length\\\":42},{\\\"start\\\":7462,\\\"length\\\":49},{\\\"start\\"
                        "\":7512,\\\"length\\\":42},{\\\"start\\\":7555,\\\"length\\\":43},{\\\"start\\\""
                        ":7599,\\\"length\\\":41},{\\\"start\\\":7641,\\\"length\\\":44},{\\\"start\\\":7"
                        "686,\\\"length\\\":46},{\\\"start\\\":7733,\\\"length\\\":48},{\\\"start\\\":778"
                        "2,\\\"length\\\":43},{\\\"start\\\":7826,\\\"length\\\":44},{\\\"start\\\":7871,"
                        "\\\"length\\\":46},{\\\"start\\\":7918,\\\"length\\\":42},{\\\"start\\\":7961,\\"
                        "\"length\\\":43},{\\\"start\\\":8005,\\\"length\\\":47},{\\\"start\\\":8053,\\\""
                        "length\\\":40},{\\\"start\\\":8094,\\\"length\\\":39},{\\\"start\\\":8134,\\\"le"
                        "ngth\\\":41},{\\\"start\\\":8176,\\\"length\\\":44},{\\\"start\\\":8221,\\\"leng"
                        "th\\\":42},{\\\"start\\\":8264,\\\"length\\\":47},{\\\"start\\\":8312,\\\"length"
                        "\\\":48},{\\\"start\\\":8361,\\\"length\\\":47},{\\\"start\\\":8409,\\\"length\\"
                        "\":45},{\\\"start\\\":8455,\\\"length\\\":47},{\\\"start\\\":8503,\\\"length\\\""
                        ":53},{\\\"start\\\":8557,\\\"length\\\":54},{\\\"start\\\":8612,\\\"length\\\":5"
                        "1},{\\\"start\\\":8664,\\\"length\\\":53},{\\\"start\\\":8718,\\\"length\\\":41}"
                        ",{\\\"start\\\":8760,\\\"length\\\":42},{\\\"start\\\":8803,\\\"length\\\":41},{"
                        "\\\"start\\\":8845,\\\"length\\\":42},{\\\"start\\\":8888,\\\"length\\\":45},{\\"
                        "\"start\\\":8934,\\\"length\\\":46},{\\\"start\\\":8981,\\\"length\\\":41},{\\\""
                        "start\\\":9023,\\\"length\\\":41},{\\\"start\\\":9065,\\\"length\\\":41},{\\\"st"
                        "art\\\":9107,\\\"length\\\":40},{\\\"start\\\":9148,\\\"length\\\":41},{\\\"star"
                        "t\\\":9190,\\\"length\\\":41},{\\\"start\\\":9232,\\\"length\\\":39},{\\\"start\\"
                        "\":9272,\\\"length\\\":44},{\\\"start\\\":9317,\\\"length\\\":40},{\\\"start\\\""
                        ":9358,\\\"length\\\":43},{\\\"start\\\":9402,\\\"length\\\":45},{\\\"start\\\":9"
                        "448,\\\"length\\\":44},{\\\"start\\\":9493,\\\"length\\\":40},{\\\"start\\\":953"
                        "4,\\\"length\\\":42},{\\\"start\\\":9577,\\\"length\\\":40},{\\\"start\\\":9618,"
                        "\\\"length\\\":43},{\\\"start\\\":9662,\\\"length\\\":43},{\\\"start\\\":9706,\\"
                        "\"length\\\":43},{\\\"start\\\":9750,\\\"length\\\":43},{\\\"start\\\":9794,\\\""
                        "length\\\":49},{\\\"start\\\":9844,\\\"length\\\":45},{\\\"start\\\":9890,\\\"le"
                        "ngth\\\":41},{\\\"start\\\":9932,\\\"length\\\":41},{\\\"start\\\":9974,\\\"leng"
                        "th\\\":41},{\\\"start\\\":10016,\\\"length\\\":45},{\\\"start\\\":10062,\\\"leng"
                        "th\\\":52},{\\\"start\\\":10115,\\\"length\\\":54},{\\\"start\\\":10170,\\\"leng"
                        "th\\\":47},{\\\"start\\\":10218,\\\"length\\\":41},{\\\"start\\\":10260,\\\"leng"
                        "th\\\":46},{\\\"start\\\":10307,\\\"length\\\":44},{\\\"start\\\":10352,\\\"leng"
                        "th\\\":46},{\\\"start\\\":10399,\\\"length\\\":47},{\\\"start\\\":10447,\\\"leng"
                        "th\\\":44},{\\\"start\\\":10492,\\\"length\\\":40},{\\\"start\\\":10533,\\\"leng"
                        "th\\\":44},{\\\"start\\\":10578,\\\"length\\\":45},{\\\"start\\\":10624,\\\"leng"
                        "th\\\":45},{\\\"start\\\":10670,\\\"length\\\":44},{\\\"start\\\":10715,\\\"leng"
                        "th\\\":43},{\\\"start\\\":10759,\\\"length\\\":44},{\\\"start\\\":10804,\\\"leng"
                        "th\\\":44},{\\\"start\\\":10849,\\\"length\\\":47},{\\\"start\\\":10897,\\\"leng"
                        "th\\\":40},{\\\"start\\\":10938,\\\"length\\\":41},{\\\"start\\\":10980,\\\"leng"
                        "th\\\":41},{\\\"start\\\":11022,\\\"length\\\":45},{\\\"start\\\":11068,\\\"leng"
                        "th\\\":46},{\\\"start\\\":11115,\\\"length\\\":45},{\\\"start\\\":11161,\\\"leng"
                        "th\\\":46},{\\\"start\\\":11208,\\\"length\\\":40},{\\\"start\\\":11249,\\\"leng"
                        "th\\\":41},{\\\"start\\\":11291,\\\"length\\\":43},{\\\"start\\\":11335,\\\"leng"
                        "th\\\":45},{\\\"start\\\":11381,\\\"length\\\":45},{\\\"start\\\":11427,\\\"leng"
                        "th\\\":41},{\\\"start\\\":11469,\\\"length\\\":47},{\\\"start\\\":11517,\\\"leng"
                        "th\\\":44},{\\\"start\\\":11562,\\\"length\\\":51},{\\\"start\\\":11614,\\\"leng"
                        "th\\\":49},{\\\"start\\\":11664,\\\"length\\\":43},{\\\"start\\\":11708,\\\"leng"
                        "th\\\":47},{\\\"start\\\":11756,\\\"length\\\":44},{\\\"start\\\":11801,\\\"leng"
                        "th\\\":40},{\\\"start\\\":11842,\\\"length\\\":42},{\\\"start\\\":11885,\\\"leng"
                        "th\\\":43},{\\\"start\\\":11929,\\\"length\\\":47},{\\\"start\\\":11977,\\\"leng"
                        "th\\\":46},{\\\"start\\\":12024,\\\"length\\\":46},{\\\"start\\\":12071,\\\"leng"
                        "th\\\":45},{\\\"start\\\":12117,\\\"length\\\":42},{\\\"start\\\":12160,\\\"leng"
                        "th\\\":47},{\\\"start\\\":12208,\\\"length\\\":40},{\\\"start\\\":12249,\\\"leng"
                        "th\\\":44},{\\\"start\\\":12294,\\\"length\\\":47},{\\\"start\\\":12342,\\\"leng"
                        "th\\\":53},{\\\"start\\\":12396,\\\"length\\\":54},{\\\"start\\\":12451,\\\"leng"
                        "th\\\":51},{\\\"start\\\":12503,\\\"length\\\":53},{\\\"start\\\":12557,\\\"leng"
                        "th\\\":46},{\\\"start\\\":12604,\\\"length\\\":47},{\\\"start\\\":12652,\\\"leng"
                        "th\\\":44},{\\\"start\\\":12697,\\\"length\\\":46},{\\\"start\\\":12744,\\\"leng"
                        "th\\\":43},{\\\"start\\\":12788,\\\"length\\\":42},{\\\"start\\\":12831,\\\"leng"
                        "th\\\":42},{\\\"start\\\":12874,\\\"length\\\":42},{\\\"start\\\":12917,\\\"leng"
                        "th\\\":48},{\\\"start\\\":12966,\\\"length\\\":44},{\\\"start\\\":13011,\\\"leng"
                        "th\\\":46},{\\\"start\\\":13058,\\\"length\\\":47},{\\\"start\\\":13106,\\\"leng"
                        "th\\\":43},{\\\"start\\\":13150,\\\"length\\\":42},{\\\"start\\\":13193,\\\"leng"
                        "th\\\":46},{\\\"start\\\":13240,\\\"length\\\":41},{\\\"start\\\":13282,\\\"leng"
                        "th\\\":46},{\\\"start\\\":13329,\\\"length\\\":44},{\\\"start\\\":13374,\\\"leng"
                        "th\\\":49},{\\\"start\\\":13424,\\\"length\\\":43},{\\\"start\\\":13468,\\\"leng"
                        "th\\\":43},{\\\"start\\\":13512,\\\"length\\\":41},{\\\"start\\\":13554,\\\"leng"
                        "th\\\":43},{\\\"start\\\":13598,\\\"length\\\":46},{\\\"start\\\":13645,\\\"leng"
                        "th\\\":42},{\\\"start\\\":13688,\\\"length\\\":50},{\\\"start\\\":13739,\\\"leng"
                        "th\\\":44},{\\\"start\\\":13784,\\\"length\\\":40},{\\\"start\\\":13825,\\\"leng"
                        "th\\\":50},{\\\"start\\\":13876,\\\"length\\\":45},{\\\"start\\\":13922,\\\"leng"
                        "th\\\":51},{\\\"start\\\":13974,\\\"length\\\":50},{\\\"start\\\":14025,\\\"leng"
                        "th\\\":47},{\\\"start\\\":14073,\\\"length\\\":50},{\\\"start\\\":14124,\\\"leng"
                        "th\\\":40},{\\\"start\\\":14165,\\\"length\\\":45},{\\\"start\\\":14211,\\\"leng"
                        "th\\\":48},{\\\"start\\\":14260,\\\"length\\\":42},{\\\"start\\\":14303,\\\"leng"
                        "th\\\":44},{\\\"start\\\":14348,\\\"length\\\":40},{\\\"start\\\":14389,\\\"leng"
                        "th\\\":47},{\\\"start\\\":14437,\\\"length\\\":47},{\\\"start\\\":14485,\\\"leng"
                        "th\\\":45},{\\\"start\\\":14531,\\\"length\\\":42},{\\\"start\\\":14574,\\\"leng"
                        "th\\\":48},{\\\"start\\\":14623,\\\"length\\\":47},{\\\"start\\\":14671,\\\"leng"
                        "th\\\":52},{\\\"start\\\":14724,\\\"length\\\":42},{\\\"start\\\":14767,\\\"leng"
                        "th\\\":46},{\\\"start\\\":14814,\\\"length\\\":53},{\\\"start\\\":14868,\\\"leng"
                        "th\\\":42},{\\\"start\\\":14911,\\\"length\\\":42},{\\\"start\\\":14954,\\\"leng"
                        "th\\\":55},{\\\"start\\\":15010,\\\"length\\\":56},{\\\"start\\\":15067,\\\"leng"
                        "th\\\":53},{\\\"start\\\":15121,\\\"length\\\":55},{\\\"start\\\":15177,\\\"leng"
                        "th\\\":41},{\\\"start\\\":15219,\\\"length\\\":40},{\\\"start\\\":15260,\\\"leng"
                        "th\\\":43},{\\\"start\\\":15304,\\\"length\\\":46},{\\\"start\\\":15351,\\\"leng"
                        "th\\\":44},{\\\"start\\\":15396,\\\"length\\\":46},{\\\"start\\\":15443,\\\"leng"
                        "th\\\":46},{\\\"start\\\":15490,\\\"length\\\":46},{\\\"start\\\":15537,\\\"leng"
                        "th\\\":47},{\\\"start\\\":15585,\\\"length\\\":42},{\\\"start\\\":15628,\\\"leng"
                        "th\\\":48},{\\\"start\\\":15677,\\\"length\\\":50},{\\\"start\\\":15728,\\\"leng"
                        "th\\\":44},{\\\"start\\\":15773,\\\"length\\\":46},{\\\"start\\\":15820,\\\"leng"
                        "th\\\":48},{\\\"start\\\":15869,\\\"length\\\":49},{\\\"start\\\":15919,\\\"leng"
                        "th\\\":56},{\\\"start\\\":15976,\\\"length\\\":48},{\\\"start\\\":16025,\\\"leng"
                        "th\\\":43},{\\\"start\\\":16069,\\\"length\\\":55},{\\\"start\\\":16125,\\\"leng"
                        "th\\\":47},{\\\"start\\\":16173,\\\"length\\\":53},{\\\"start\\\":16227,\\\"leng"
                        "th\\\":45},{\\\"start\\\":16273,\\\"length\\\":56},{\\\"start\\\":16330,\\\"leng"
                        "th\\\":48},{\\\"start\\\":16379,\\\"length\\\":39},{\\\"start\\\":16419,\\\"leng"
                        "th\\\":40},{\\\"start\\\":16460,\\\"length\\\":39},{\\\"start\\\":16500,\\\"leng"
                        "th\\\":42},{\\\"start\\\":16543,\\\"length\\\":39},{\\\"start\\\":16583,\\\"leng"
                        "th\\\":39},{\\\"start\\\":16623,\\\"length\\\":41},{\\\"start\\\":16665,\\\"leng"
                        "th\\\":39},{\\\"start\\\":16705,\\\"length\\\":39},{\\\"start\\\":16745,\\\"leng"
                        "th\\\":39},{\\\"start\\\":16785,\\\"length\\\":39},{\\\"start\\\":16825,\\\"leng"
                        "th\\\":42},{\\\"start\\\":16868,\\\"length\\\":39},{\\\"start\\\":16908,\\\"leng"
                        "th\\\":41},{\\\"start\\\":16950,\\\"length\\\":39},{\\\"start\\\":16990,\\\"leng"
                        "th\\\":39},{\\\"start\\\":17030,\\\"length\\\":43},{\\\"start\\\":17074,\\\"leng"
                        "th\\\":39},{\\\"start\\\":17114,\\\"length\\\":41},{\\\"start\\\":17156,\\\"leng"
                        "th\\\":45},{\\\"start\\\":17202,\\\"length\\\":50},{\\\"start\\\":17253,\\\"leng"
                        "th\\\":51},{\\\"start\\\":17305,\\\"length\\\":51},{\\\"start\\\":17357,\\\"leng"
                        "th\\\":52},{\\\"start\\\":17410,\\\"length\\\":52},{\\\"start\\\":17463,\\\"leng"
                        "th\\\":53},{\\\"start\\\":17517,\\\"length\\\":45},{\\\"start\\\":17563,\\\"leng"
                        "th\\\":47},{\\\"start\\\":17611,\\\"length\\\":50},{\\\"start\\\":17662,\\\"leng"
                        "th\\\":43},{\\\"start\\\":17706,\\\"length\\\":40},{\\\"start\\\":17747,\\\"leng"
                        "th\\\":47},{\\\"start\\\":17795,\\\"length\\\":48},{\\\"start\\\":17844,\\\"leng"
                        "th\\\":43},{\\\"start\\\":17888,\\\"length\\\":50},{\\\"start\\\":17939,\\\"leng"
                        "th\\\":45},{\\\"start\\\":17985,\\\"length\\\":42},{\\\"start\\\":18028,\\\"leng"
                        "th\\\":39},{\\\"start\\\":18068,\\\"length\\\":45},{\\\"start\\\":18114,\\\"leng"
                        "th\\\":52},{\\\"start\\\":18167,\\\"length\\\":42},{\\\"start\\\":18210,\\\"leng"
                        "th\\\":49},{\\\"start\\\":18260,\\\"length\\\":51},{\\\"start\\\":18312,\\\"leng"
                        "th\\\":49},{\\\"start\\\":18362,\\\"length\\\":51},{\\\"start\\\":18414,\\\"leng"
                        "th\\\":52},{\\\"start\\\":18467,\\\"length\\\":41},{\\\"start\\\":18509,\\\"leng"
                        "th\\\":43},{\\\"start\\\":18553,\\\"length\\\":43},{\\\"start\\\":18597,\\\"leng"
                        "th\\\":41},{\\\"start\\\":18639,\\\"length\\\":44},{\\\"start\\\":18684,\\\"leng"
                        "th\\\":41},{\\\"start\\\":18726,\\\"length\\\":46},{\\\"start\\\":18773,\\\"leng"
                        "th\\\":42},{\\\"start\\\":18816,\\\"length\\\":42},{\\\"start\\\":18859,\\\"leng"
                        "th\\\":40},{\\\"start\\\":18900,\\\"length\\\":42},{\\\"start\\\":18943,\\\"leng"
                        "th\\\":44},{\\\"start\\\":18988,\\\"length\\\":41},{\\\"start\\\":19030,\\\"leng"
                        "th\\\":42},{\\\"start\\\":19073,\\\"length\\\":43},{\\\"start\\\":19117,\\\"leng"
                        "th\\\":39},{\\\"start\\\":19157,\\\"length\\\":38},{\\\"start\\\":19196,\\\"leng"
                        "th\\\":41},{\\\"start\\\":19238,\\\"length\\\":42},{\\\"start\\\":19281,\\\"leng"
                        "th\\\":45},{\\\"start\\\":19327,\\\"length\\\":50},{\\\"start\\\":19378,\\\"leng"
                        "th\\\":56},{\\\"start\\\":19435,\\\"length\\\":55},{\\\"start\\\":19491,\\\"leng"
                        "th\\\":55},{\\\"start\\\":19547,\\\"length\\\":47},{\\\"start\\\":19595,\\\"leng"
                        "th\\\":48},{\\\"start\\\":19644,\\\"length\\\":46},{\\\"start\\\":19691,\\\"leng"
                        "th\\\":48},{\\\"start\\\":19740,\\\"length\\\":39},{\\\"start\\\":19780,\\\"leng"
                        "th\\\":48},{\\\"start\\\":19829,\\\"length\\\":49},{\\\"start\\\":19879,\\\"leng"
                        "th\\\":49},{\\\"start\\\":19929,\\\"length\\\":41},{\\\"start\\\":19971,\\\"leng"
                        "th\\\":51},{\\\"start\\\":20023,\\\"length\\\":45},{\\\"start\\\":20069,\\\"leng"
                        "th\\\":42},{\\\"start\\\":20112,\\\"length\\\":40},{\\\"start\\\":20153,\\\"leng"
                        "th\\\":47},{\\\"start\\\":20201,\\\"length\\\":46},{\\\"start\\\":20248,\\\"leng"
                        "th\\\":50},{\\\"start\\\":20299,\\\"length\\\":48},{\\\"start\\\":20348,\\\"leng"
                        "th\\\":41},{\\\"start\\\":20390,\\\"length\\\":42},{\\\"start\\\":20433,\\\"leng"
                        "th\\\":42},{\\\"start\\\":20476,\\\"length\\\":49},{\\\"start\\\":20526,\\\"leng"
                        "th\\\":54},{\\\"start\\\":20581,\\\"length\\\":47},{\\\"start\\\":20629,\\\"leng"
                        "th\\\":45},{\\\"start\\\":20675,\\\"length\\\":40},{\\\"start\\\":20716,\\\"leng"
                        "th\\\":46},{\\\"start\\\":20763,\\\"length\\\":50},{\\\"start\\\":20814,\\\"leng"
                        "th\\\":42},{\\\"start\\\":20857,\\\"length\\\":42},{\\\"start\\\":20900,\\\"leng"
                        "th\\\":44},{\\\"start\\\":20945,\\\"length\\\":39},{\\\"start\\\":20985,\\\"leng"
                        "th\\\":44},{\\\"start\\\":21030,\\\"length\\\":41},{\\\"start\\\":21072,\\\"leng"
                        "th\\\":39},{\\\"start\\\":21112,\\\"length\\\":41},{\\\"start\\\":21154,\\\"leng"
                        "th\\\":40},{\\\"start\\\":21195,\\\"length\\\":41},{\\\"start\\\":21237,\\\"leng"
                        "th\\\":43},{\\\"start\\\":21281,\\\"length\\\":50},{\\\"start\\\":21332,\\\"leng"
                        "th\\\":41},{\\\"start\\\":21374,\\\"length\\\":48},{\\\"start\\\":21423,\\\"leng"
                        "th\\\":43},{\\\"start\\\":21467,\\\"length\\\":46},{\\\"start\\\":21514,\\\"leng"
                        "th\\\":39},{\\\"start\\\":21554,\\\"length\\\":39},{\\\"start\\\":21594,\\\"leng"
                        "th\\\":40},{\\\"start\\\":21635,\\\"length\\\":40},{\\\"start\\\":21676,\\\"leng"
                        "th\\\":43},{\\\"start\\\":21720,\\\"length\\\":46},{\\\"start\\\":21767,\\\"leng"
                        "th\\\":46},{\\\"start\\\":21814,\\\"length\\\":44},{\\\"start\\\":21859,\\\"leng"
                        "th\\\":46},{\\\"start\\\":21906,\\\"length\\\":47},{\\\"start\\\":21954,\\\"leng"
                        "th\\\":48},{\\\"start\\\":22003,\\\"length\\\":53},{\\\"start\\\":22057,\\\"leng"
                        "th\\\":48},{\\\"start\\\":22106,\\\"length\\\":48},{\\\"start\\\":22155,\\\"leng"
                        "th\\\":50},{\\\"start\\\":22206,\\\"length\\\":50},{\\\"start\\\":22257,\\\"leng"
                        "th\\\":46},{\\\"start\\\":22304,\\\"length\\\":48},{\\\"start\\\":22353,\\\"leng"
                        "th\\\":48},{\\\"start\\\":22402,\\\"length\\\":48},{\\\"start\\\":22451,\\\"leng"
                        "th\\\":48},{\\\"start\\\":22500,\\\"length\\\":47},{\\\"start\\\":22548,\\\"leng"
                        "th\\\":40},{\\\"start\\\":22589,\\\"length\\\":43},{\\\"start\\\":22633,\\\"leng"
                        "th\\\":44},{\\\"start\\\":22678,\\\"length\\\":45},{\\\"start\\\":22724,\\\"leng"
                        "th\\\":45},{\\\"start\\\":22770,\\\"length\\\":45},{\\\"start\\\":22816,\\\"leng"
                        "th\\\":46},{\\\"start\\\":22863,\\\"length\\\":43},{\\\"start\\\":22907,\\\"leng"
                        "th\\\":50},{\\\"start\\\":22958,\\\"length\\\":38},{\\\"start\\\":22997,\\\"leng"
                        "th\\\":41},{\\\"start\\\":23039,\\\"length\\\":42},{\\\"start\\\":23082,\\\"leng"
                        "th\\\":38},{\\\"start\\\":23121,\\\"length\\\":46},{\\\"start\\\":23168,\\\"leng"
                        "th\\\":39},{\\\"start\\\":23208,\\\"length\\\":47},{\\\"start\\\":23256,\\\"leng"
                        "th\\\":55},{\\\"start\\\":23312,\\\"length\\\":45},{\\\"start\\\":23358,\\\"leng"
                        "th\\\":49},{\\\"start\\\":23408,\\\"length\\\":38},{\\\"start\\\":23447,\\\"leng"
                        "th\\\":42},{\\\"start\\\":23490,\\\"length\\\":42},{\\\"start\\\":23533,\\\"leng"
                        "th\\\":47},{\\\"start\\\":23581,\\\"length\\\":40},{\\\"start\\\":23622,\\\"leng"
                        "th\\\":49},{\\\"start\\\":23672,\\\"length\\\":42},{\\\"start\\\":23715,\\\"leng"
                        "th\\\":43},{\\\"start\\\":23759,\\\"length\\\":47},{\\\"start\\\":23807,\\\"leng"
                        "th\\\":42},{\\\"start\\\":23850,\\\"length\\\":46},{\\\"start\\\":23897,\\\"leng"
                        "th\\\":43},{\\\"start\\\":23941,\\\"length\\\":45},{\\\"start\\\":23987,\\\"leng"
                        "th\\\":52},{\\\"start\\\":24040,\\\"length\\\":40},{\\\"start\\\":24081,\\\"leng"
                        "th\\\":44},{\\\"start\\\":24126,\\\"length\\\":49},{\\\"start\\\":24176,\\\"leng"
                        "th\\\":39},{\\\"start\\\":24216,\\\"length\\\":46},{\\\"start\\\":24263,\\\"leng"
                        "th\\\":40},{\\\"start\\\":24304,\\\"length\\\":46},{\\\"start\\\":24351,\\\"leng"
                        "th\\\":42},{\\\"start\\\":24394,\\\"length\\\":40},{\\\"start\\\":24435,\\\"leng"
                        "th\\\":47},{\\\"start\\\":24483,\\\"length\\\":40},{\\\"start\\\":24524,\\\"leng"
                        "th\\\":46},{\\\"start\\\":24571,\\\"length\\\":42},{\\\"start\\\":24614,\\\"leng"
                        "th\\\":49},{\\\"start\\\":24664,\\\"length\\\":43},{\\\"start\\\":24708,\\\"leng"
                        "th\\\":49},{\\\"start\\\":24758,\\\"length\\\":47},{\\\"start\\\":24806,\\\"leng"
                        "th\\\":43},{\\\"start\\\":24850,\\\"length\\\":45},{\\\"start\\\":24896,\\\"leng"
                        "th\\\":45},{\\\"start\\\":24942,\\\"length\\\":46},{\\\"start\\\":24989,\\\"leng"
                        "th\\\":48},{\\\"start\\\":25038,\\\"length\\\":41},{\\\"start\\\":25080,\\\"leng"
                        "th\\\":45},{\\\"start\\\":25126,\\\"length\\\":38},{\\\"start\\\":25165,\\\"leng"
                        "th\\\":46},{\\\"start\\\":25212,\\\"length\\\":47},{\\\"start\\\":25260,\\\"leng"
                        "th\\\":49},{\\\"start\\\":25310,\\\"length\\\":46},{\\\"start\\\":25357,\\\"leng"
                        "th\\\":45},{\\\"start\\\":25403,\\\"length\\\":46},{\\\"start\\\":25450,\\\"leng"
                        "th\\\":42},{\\\"start\\\":25493,\\\"length\\\":49},{\\\"start\\\":25543,\\\"leng"
                        "th\\\":46},{\\\"start\\\":25590,\\\"length\\\":45},{\\\"start\\\":25636,\\\"leng"
                        "th\\\":43},{\\\"start\\\":25680,\\\"length\\\":39},{\\\"start\\\":25720,\\\"leng"
                        "th\\\":43},{\\\"start\\\":25764,\\\"length\\\":45},{\\\"start\\\":25810,\\\"leng"
                        "th\\\":38},{\\\"start\\\":25849,\\\"length\\\":39},{\\\"start\\\":25889,\\\"leng"
                        "th\\\":42},{\\\"start\\\":25932,\\\"length\\\":42},{\\\"start\\\":25975,\\\"leng"
                        "th\\\":44},{\\\"start\\\":26020,\\\"length\\\":46},{\\\"start\\\":26067,\\\"leng"
                        "th\\\":50},{\\\"start\\\":26118,\\\"length\\\":44},{\\\"start\\\":26163,\\\"leng"
                        "th\\\":44},{\\\"start\\\":26208,\\\"length\\\":43},{\\\"start\\\":26252,\\\"leng"
                        "th\\\":42},{\\\"start\\\":26295,\\\"length\\\":48},{\\\"start\\\":26344,\\\"leng"
                        "th\\\":47},{\\\"start\\\":26392,\\\"length\\\":44},{\\\"start\\\":26437,\\\"leng"
                        "th\\\":45},{\\\"start\\\":26483,\\\"length\\\":51},{\\\"start\\\":26535,\\\"leng"
                        "th\\\":43},{\\\"start\\\":26579,\\\"length\\\":40},{\\\"start\\\":26620,\\\"leng"
                        "th\\\":47},{\\\"start\\\":26668,\\\"length\\\":46},{\\\"start\\\":26715,\\\"leng"
                        "th\\\":47},{\\\"start\\\":26763,\\\"length\\\":45},{\\\"start\\\":26809,\\\"leng"
                        "th\\\":41},{\\\"start\\\":26851,\\\"length\\\":40},{\\\"start\\\":26892,\\\"leng"
                        "th\\\":43},{\\\"start\\\":26936,\\\"length\\\":44},{\\\"start\\\":26981,\\\"leng"
                        "th\\\":47},{\\\"start\\\":27029,\\\"length\\\":51},{\\\"start\\\":27081,\\\"leng"
                        "th\\\":48},{\\\"start\\\":27130,\\\"length\\\":47},{\\\"start\\\":27178,\\\"leng"
                        "th\\\":46},{\\\"start\\\":27225,\\\"length\\\":47},{\\\"start\\\":27273,\\\"leng"
                        "th\\\":49},{\\\"start\\\":27323,\\\"length\\\":49},{\\\"start\\\":27373,\\\"leng"
                        "th\\\":42},{\\\"start\\\":27416,\\\"length\\\":46},{\\\"start\\\":27463,\\\"leng"
                        "th\\\":53},{\\\"start\\\":27517,\\\"length\\\":47},{\\\"start\\\":27565,\\\"leng"
                        "th\\\":44},{\\\"start\\\":27610,\\\"length\\\":43},{\\\"start\\\":27654,\\\"leng"
                        "th\\\":45},{\\\"start\\\":27700,\\\"length\\\":46},{\\\"start\\\":27747,\\\"leng"
                        "th\\\":39},{\\\"start\\\":27787,\\\"length\\\":41},{\\\"start\\\":27829,\\\"leng"
                        "th\\\":43},{\\\"start\\\":27873,\\\"length\\\":41},{\\\"start\\\":27915,\\\"leng"
                        "th\\\":42},{\\\"start\\\":27958,\\\"length\\\":42},{\\\"start\\\":28001,\\\"leng"
                        "th\\\":48},{\\\"start\\\":28050,\\\"length\\\":38},{\\\"start\\\":28089,\\\"leng"
                        "th\\\":49},{\\\"start\\\":28139,\\\"length\\\":44},{\\\"start\\\":28184,\\\"leng"
                        "th\\\":48},{\\\"start\\\":28233,\\\"length\\\":45},{\\\"start\\\":28279,\\\"leng"
                        "th\\\":48},{\\\"start\\\":28328,\\\"length\\\":45},{\\\"start\\\":28374,\\\"leng"
                        "th\\\":58},{\\\"start\\\":28433,\\\"length\\\":45},{\\\"start\\\":28479,\\\"leng"
                        "th\\\":48},{\\\"start\\\":28528,\\\"length\\\":45},{\\\"start\\\":28574,\\\"leng"
                        "th\\\":51},{\\\"start\\\":28626,\\\"length\\\":45},{\\\"start\\\":28672,\\\"leng"
                        "th\\\":49},{\\\"start\\\":28722,\\\"length\\\":49},{\\\"start\\\":28772,\\\"leng"
                        "th\\\":44},{\\\"start\\\":28817,\\\"length\\\":48},{\\\"start\\\":28866,\\\"leng"
                        "th\\\":50},{\\\"start\\\":28917,\\\"length\\\":47},{\\\"start\\\":28965,\\\"leng"
                        "th\\\":49},{\\\"start\\\":29015,\\\"length\\\":42},{\\\"start\\\":29058,\\\"leng"
                        "th\\\":50},{\\\"start\\\":29109,\\\"length\\\":41},{\\\"start\\\":29151,\\\"leng"
                        "th\\\":49},{\\\"start\\\":29201,\\\"length\\\":47},{\\\"start\\\":29249,\\\"leng"
                        "th\\\":47},{\\\"start\\\":29297,\\\"length\\\":51},{\\\"start\\\":29349,\\\"leng"
                        "th\\\":47},{\\\"start\\\":29397,\\\"length\\\":50},{\\\"start\\\":29448,\\\"leng"
                        "th\\\":47},{\\\"start\\\":29496,\\\"length\\\":49},{\\\"start\\\":29546,\\\"leng"
                        "th\\\":45},{\\\"start\\\":29592,\\\"length\\\":47},{\\\"start\\\":29640,\\\"leng"
                        "th\\\":47},{\\\"start\\\":29688,\\\"length\\\":48},{\\\"start\\\":29737,\\\"leng"
                        "th\\\":47},{\\\"start\\\":29785,\\\"length\\\":51},{\\\"start\\\":29837,\\\"leng"
                        "th\\\":49},{\\\"start\\\":29887,\\\"length\\\":48},{\\\"start\\\":29936,\\\"leng"
                        "th\\\":50},{\\\"start\\\":29987,\\\"length\\\":48},{\\\"start\\\":30036,\\\"leng"
                        "th\\\":45},{\\\"start\\\":30082,\\\"length\\\":46},{\\\"start\\\":30129,\\\"leng"
                        "th\\\":52},{\\\"start\\\":30182,\\\"length\\\":38},{\\\"start\\\":30221,\\\"leng"
                        "th\\\":45},{\\\"start\\\":30267,\\\"length\\\":47},{\\\"start\\\":30315,\\\"leng"
                        "th\\\":49},{\\\"start\\\":30365,\\\"length\\\":56},{\\\"start\\\":30422,\\\"leng"
                        "th\\\":46},{\\\"start\\\":30469,\\\"length\\\":47},{\\\"start\\\":30517,\\\"leng"
                        "th\\\":42},{\\\"start\\\":30560,\\\"length\\\":42},{\\\"start\\\":30603,\\\"leng"
                        "th\\\":43},{\\\"start\\\":30647,\\\"length\\\":41},{\\\"start\\\":30689,\\\"leng"
                        "th\\\":53},{\\\"start\\\":30743,\\\"length\\\":46},{\\\"start\\\":30790,\\\"leng"
                        "th\\\":38},{\\\"start\\\":30829,\\\"length\\\":42},{\\\"start\\\":30872,\\\"leng"
                        "th\\\":41},{\\\"start\\\":30914,\\\"length\\\":42},{\\\"start\\\":30957,\\\"leng"
                        "th\\\":51},{\\\"start\\\":31009,\\\"length\\\":52},{\\\"start\\\":31062,\\\"leng"
                        "th\\\":52},{\\\"start\\\":31115,\\\"length\\\":52},{\\\"start\\\":31168,\\\"leng"
                        "th\\\":44},{\\\"start\\\":31213,\\\"length\\\":43},{\\\"start\\\":31257,\\\"leng"
                        "th\\\":45},{\\\"start\\\":31303,\\\"length\\\":41},{\\\"start\\\":31345,\\\"leng"
                        "th\\\":39},{\\\"start\\\":31385,\\\"length\\\":46},{\\\"start\\\":31432,\\\"leng"
                        "th\\\":48},{\\\"start\\\":31481,\\\"length\\\":41},{\\\"start\\\":31523,\\\"leng"
                        "th\\\":41},{\\\"start\\\":31565,\\\"length\\\":45},{\\\"start\\\":31611,\\\"leng"
                        "th\\\":45},{\\\"start\\\":31657,\\\"length\\\":40},{\\\"start\\\":31698,\\\"leng"
                        "th\\\":46},{\\\"start\\\":31745,\\\"length\\\":41},{\\\"start\\\":31787,\\\"leng"
                        "th\\\":42},{\\\"start\\\":31830,\\\"length\\\":42},{\\\"start\\\":31873,\\\"leng"
                        "th\\\":41},{\\\"start\\\":31915,\\\"length\\\":41},{\\\"start\\\":31957,\\\"leng"
                        "th\\\":41},{\\\"start\\\":31999,\\\"length\\\":42},{\\\"start\\\":32042,\\\"leng"
                        "th\\\":42},{\\\"start\\\":32085,\\\"length\\\":42},{\\\"start\\\":32128,\\\"leng"
                        "th\\\":43},{\\\"start\\\":32172,\\\"length\\\":42},{\\\"start\\\":32215,\\\"leng"
                        "th\\\":46},{\\\"start\\\":32262,\\\"length\\\":42},{\\\"start\\\":32305,\\\"leng"
                        "th\\\":41},{\\\"start\\\":32347,\\\"length\\\":44},{\\\"start\\\":32392,\\\"leng"
                        "th\\\":43},{\\\"start\\\":32436,\\\"length\\\":42},{\\\"start\\\":32479,\\\"leng"
                        "th\\\":40},{\\\"start\\\":32520,\\\"length\\\":43},{\\\"start\\\":32564,\\\"leng"
                        "th\\\":43},{\\\"start\\\":32608,\\\"length\\\":42},{\\\"start\\\":32651,\\\"leng"
                        "th\\\":40},{\\\"start\\\":32692,\\\"length\\\":42},{\\\"start\\\":32735,\\\"leng"
                        "th\\\":45},{\\\"start\\\":32781,\\\"length\\\":49},{\\\"start\\\":32831,\\\"leng"
                        "th\\\":47},{\\\"start\\\":32879,\\\"length\\\":48},{\\\"start\\\":32928,\\\"leng"
                        "th\\\":48},{\\\"start\\\":32977,\\\"length\\\":41},{\\\"start\\\":33019,\\\"leng"
                        "th\\\":43},{\\\"start\\\":33063,\\\"length\\\":41},{\\\"start\\\":33105,\\\"leng"
                        "th\\\":43},{\\\"start\\\":33149,\\\"length\\\":41},{\\\"start\\\":33191,\\\"leng"
                        "th\\\":47},{\\\"start\\\":33239,\\\"length\\\":42},{\\\"start\\\":33282,\\\"leng"
                        "th\\\":43},{\\\"start\\\":33326,\\\"length\\\":44},{\\\"start\\\":33371,\\\"leng"
                        "th\\\":42},{\\\"start\\\":33414,\\\"length\\\":47},{\\\"start\\\":33462,\\\"leng"
                        "th\\\":48},{\\\"start\\\":33511,\\\"length\\\":48},{\\\"start\\\":33560,\\\"leng"
                        "th\\\":48},{\\\"start\\\":33609,\\\"length\\\":47},{\\\"start\\\":33657,\\\"leng"
                        "th\\\":48},{\\\"start\\\":33706,\\\"length\\\":48},{\\\"start\\\":33755,\\\"leng"
                        "th\\\":48},{\\\"start\\\":33804,\\\"length\\\":46},{\\\"start\\\":33851,\\\"leng"
                        "th\\\":42},{\\\"start\\\":33894,\\\"length\\\":45},{\\\"start\\\":33940,\\\"leng"
                        "th\\\":42},{\\\"start\\\":33983,\\\"length\\\":40},{\\\"start\\\":34024,\\\"leng"
                        "th\\\":41},{\\\"start\\\":34066,\\\"length\\\":40},{\\\"start\\\":34107,\\\"leng"
                        "th\\\":48},{\\\"start\\\":34156,\\\"length\\\":48},{\\\"start\\\":34205,\\\"leng"
                        "th\\\":44},{\\\"start\\\":34250,\\\"length\\\":42},{\\\"start\\\":34293,\\\"leng"
                        "th\\\":43},{\\\"start\\\":34337,\\\"length\\\":44},{\\\"start\\\":34382,\\\"leng"
                        "th\\\":41},{\\\"start\\\":34424,\\\"length\\\":48},{\\\"start\\\":34473,\\\"leng"
                        "th\\\":41},{\\\"start\\\":34515,\\\"length\\\":39},{\\\"start\\\":34555,\\\"leng"
                        "th\\\":42},{\\\"start\\\":34598,\\\"length\\\":48},{\\\"start\\\":34647,\\\"leng"
                        "th\\\":50},{\\\"start\\\":34698,\\\"length\\\":43},{\\\"start\\\":34742,\\\"leng"
                        "th\\\":45},{\\\"start\\\":34788,\\\"length\\\":45},{\\\"start\\\":34834,\\\"leng"
                        "th\\\":46},{\\\"start\\\":34881,\\\"length\\\":40},{\\\"start\\\":34922,\\\"leng"
                        "th\\\":44},{\\\"start\\\":34967,\\\"length\\\":40},{\\\"start\\\":35008,\\\"leng"
                        "th\\\":46},{\\\"start\\\":35055,\\\"length\\\":49},{\\\"start\\\":35105,\\\"leng"
                        "th\\\":42},{\\\"start\\\":35148,\\\"length\\\":42},{\\\"start\\\":35191,\\\"leng"
                        "th\\\":40},{\\\"start\\\":35232,\\\"length\\\":42},{\\\"start\\\":35275,\\\"leng"
                        "th\\\":42},{\\\"start\\\":35318,\\\"length\\\":43},{\\\"start\\\":35362,\\\"leng"
                        "th\\\":48},{\\\"start\\\":35411,\\\"length\\\":49},{\\\"start\\\":35461,\\\"leng"
                        "th\\\":40},{\\\"start\\\":35502,\\\"length\\\":41},{\\\"start\\\":35544,\\\"leng"
                        "th\\\":43},{\\\"start\\\":35588,\\\"length\\\":39},{\\\"start\\\":35628,\\\"leng"
                        "th\\\":39},{\\\"start\\\":35668,\\\"length\\\":46},{\\\"start\\\":35715,\\\"leng"
                        "th\\\":47},{\\\"start\\\":35763,\\\"length\\\":45},{\\\"start\\\":35809,\\\"leng"
                        "th\\\":41},{\\\"start\\\":35851,\\\"length\\\":47},{\\\"start\\\":35899,\\\"leng"
                        "th\\\":48},{\\\"start\\\":35948,\\\"length\\\":45},{\\\"start\\\":35994,\\\"leng"
                        "th\\\":47},{\\\"start\\\":36042,\\\"length\\\":42},{\\\"start\\\":36085,\\\"leng"
                        "th\\\":40},{\\\"start\\\":36126,\\\"length\\\":49},{\\\"start\\\":36176,\\\"leng"
                        "th\\\":48},{\\\"start\\\":36225,\\\"length\\\":41},{\\\"start\\\":36267,\\\"leng"
                        "th\\\":42},{\\\"start\\\":36310,\\\"length\\\":43},{\\\"start\\\":36354,\\\"leng"
                        "th\\\":42},{\\\"start\\\":36397,\\\"length\\\":39},{\\\"start\\\":36437,\\\"leng"
                        "th\\\":39},{\\\"start\\\":36477,\\\"length\\\":41},{\\\"start\\\":36519,\\\"leng"
                        "th\\\":42},{\\\"start\\\":36562,\\\"length\\\":42},{\\\"start\\\":36605,\\\"leng"
                        "th\\\":44},{\\\"start\\\":36650,\\\"length\\\":44},{\\\"start\\\":36695,\\\"leng"
                        "th\\\":44},{\\\"start\\\":36740,\\\"length\\\":41},{\\\"start\\\":36782,\\\"leng"
                        "th\\\":42},{\\\"start\\\":36825,\\\"length\\\":42},{\\\"start\\\":36868,\\\"leng"
                        "th\\\":42},{\\\"start\\\":36911,\\\"length\\\":40},{\\\"start\\\":36952,\\\"leng"
                        "th\\\":42},{\\\"start\\\":36995,\\\"length\\\":41},{\\\"start\\\":37037,\\\"leng"
                        "th\\\":44},{\\\"start\\\":37082,\\\"length\\\":42},{\\\"start\\\":37125,\\\"leng"
                        "th\\\":42},{\\\"start\\\":37168,\\\"length\\\":40},{\\\"start\\\":37209,\\\"leng"
                        "th\\\":44},{\\\"start\\\":37254,\\\"length\\\":49},{\\\"start\\\":37304,\\\"leng"
                        "th\\\":41},{\\\"start\\\":37346,\\\"length\\\":40},{\\\"start\\\":37387,\\\"leng"
                        "th\\\":44}],\\\"resolvedPath\\\":\\\"C:\\\\\\\\Users\\\\\\\\Naveen Reddy Vangala"
                        "\\\\\\\\Documents\\\\\\\\Visual Studio 2015\\\\\\\\Projects\\\\\\\\Dot-net-work\\"
                        "\\\\\\SampleMasterPage\\\\\\\\SampleMasterPage\\\\\\\\css\\\\\\\\icomoon.css\\\""
                        "}],\\\"callbackId\\\":-1}\"]}";
long WebSocketReceiveLen5   = sizeof(WebSocketReceive5) - 1;	 

 

char WebSocketReceive6[] = "{\"C\":\"d-EB181140-F,0|G,9|H,0\",\"M\":[\"{\\\"name\\\":\\\"sys.callback\\\",\\"
                        "\"args\\\":[6,{\\\"ranges\\\":[{\\\"start\\\":837,\\\"length\\\":3328},{\\\"star"
                        "t\\\":4166,\\\"length\\\":41},{\\\"start\\\":4208,\\\"length\\\":43},{\\\"start\\"
                        "\":4252,\\\"length\\\":48},{\\\"start\\\":4301,\\\"length\\\":48},{\\\"start\\\""
                        ":4350,\\\"length\\\":51},{\\\"start\\\":4402,\\\"length\\\":50},{\\\"start\\\":4"
                        "453,\\\"length\\\":42},{\\\"start\\\":4496,\\\"length\\\":43},{\\\"start\\\":454"
                        "0,\\\"length\\\":46},{\\\"start\\\":4587,\\\"length\\\":42},{\\\"start\\\":4630,"
                        "\\\"length\\\":45},{\\\"start\\\":4676,\\\"length\\\":44},{\\\"start\\\":4721,\\"
                        "\"length\\\":45},{\\\"start\\\":4767,\\\"length\\\":40},{\\\"start\\\":4808,\\\""
                        "length\\\":49},{\\\"start\\\":4858,\\\"length\\\":46},{\\\"start\\\":4905,\\\"le"
                        "ngth\\\":47},{\\\"start\\\":4953,\\\"length\\\":44},{\\\"start\\\":4998,\\\"leng"
                        "th\\\":43},{\\\"start\\\":5042,\\\"length\\\":41},{\\\"start\\\":5084,\\\"length"
                        "\\\":41},{\\\"start\\\":5126,\\\"length\\\":53},{\\\"start\\\":5180,\\\"length\\"
                        "\":44},{\\\"start\\\":5225,\\\"length\\\":47},{\\\"start\\\":5273,\\\"length\\\""
                        ":47},{\\\"start\\\":5321,\\\"length\\\":48},{\\\"start\\\":5370,\\\"length\\\":4"
                        "5},{\\\"start\\\":5416,\\\"length\\\":52},{\\\"start\\\":5469,\\\"length\\\":54}"
                        ",{\\\"start\\\":5524,\\\"length\\\":55},{\\\"start\\\":5580,\\\"length\\\":54},{"
                        "\\\"start\\\":5635,\\\"length\\\":42},{\\\"start\\\":5678,\\\"length\\\":42},{\\"
                        "\"start\\\":5721,\\\"length\\\":41},{\\\"start\\\":5763,\\\"length\\\":42},{\\\""
                        "start\\\":5806,\\\"length\\\":43},{\\\"start\\\":5850,\\\"length\\\":54},{\\\"st"
                        "art\\\":5905,\\\"length\\\":51},{\\\"start\\\":5957,\\\"length\\\":42},{\\\"star"
                        "t\\\":6000,\\\"length\\\":45},{\\\"start\\\":6046,\\\"length\\\":45},{\\\"start\\"
                        "\":6092,\\\"length\\\":42},{\\\"start\\\":6135,\\\"length\\\":43},{\\\"start\\\""
                        ":6179,\\\"length\\\":43},{\\\"start\\\":6223,\\\"length\\\":41},{\\\"start\\\":6"
                        "265,\\\"length\\\":43},{\\\"start\\\":6309,\\\"length\\\":48},{\\\"start\\\":635"
                        "8,\\\"length\\\":41},{\\\"start\\\":6400,\\\"length\\\":46},{\\\"start\\\":6447,"
                        "\\\"length\\\":48},{\\\"start\\\":6496,\\\"length\\\":43},{\\\"start\\\":6540,\\"
                        "\"length\\\":50},{\\\"start\\\":6591,\\\"length\\\":47},{\\\"start\\\":6639,\\\""
                        "length\\\":46},{\\\"start\\\":6686,\\\"length\\\":47},{\\\"start\\\":6734,\\\"le"
                        "ngth\\\":42},{\\\"start\\\":6777,\\\"length\\\":52},{\\\"start\\\":6830,\\\"leng"
                        "th\\\":41},{\\\"start\\\":6872,\\\"length\\\":45},{\\\"start\\\":6918,\\\"length"
                        "\\\":50},{\\\"start\\\":6969,\\\"length\\\":52},{\\\"start\\\":7022,\\\"length\\"
                        "\":41},{\\\"start\\\":7064,\\\"length\\\":42},{\\\"start\\\":7107,\\\"length\\\""
                        ":43},{\\\"start\\\":7151,\\\"length\\\":43},{\\\"start\\\":7195,\\\"length\\\":4"
                        "3},{\\\"start\\\":7239,\\\"length\\\":43},{\\\"start\\\":7283,\\\"length\\\":43}"
                        ",{\\\"start\\\":7327,\\\"length\\\":44},{\\\"start\\\":7372,\\\"length\\\":44},{"
                        "\\\"start\\\":7417,\\\"length\\\":45},{\\\"start\\\":7463,\\\"length\\\":40},{\\"
                        "\"start\\\":7504,\\\"length\\\":44},{\\\"start\\\":7549,\\\"length\\\":44},{\\\""
                        "start\\\":7594,\\\"length\\\":46},{\\\"start\\\":7641,\\\"length\\\":42},{\\\"st"
                        "art\\\":7684,\\\"length\\\":47},{\\\"start\\\":7732,\\\"length\\\":43},{\\\"star"
                        "t\\\":7776,\\\"length\\\":41},{\\\"start\\\":7818,\\\"length\\\":41},{\\\"start\\"
                        "\":7860,\\\"length\\\":41},{\\\"start\\\":7902,\\\"length\\\":43},{\\\"start\\\""
                        ":7946,\\\"length\\\":41},{\\\"start\\\":7988,\\\"length\\\":40},{\\\"start\\\":8"
                        "029,\\\"length\\\":44},{\\\"start\\\":8074,\\\"length\\\":40},{\\\"start\\\":811"
                        "5,\\\"length\\\":47},{\\\"start\\\":8163,\\\"length\\\":44},{\\\"start\\\":8208,"
                        "\\\"length\\\":46},{\\\"start\\\":8255,\\\"length\\\":46},{\\\"start\\\":8302,\\"
                        "\"length\\\":50},{\\\"start\\\":8353,\\\"length\\\":43},{\\\"start\\\":8397,\\\""
                        "length\\\":40},{\\\"start\\\":8438,\\\"length\\\":48},{\\\"start\\\":8487,\\\"le"
                        "ngth\\\":48},{\\\"start\\\":8536,\\\"length\\\":43},{\\\"start\\\":8580,\\\"leng"
                        "th\\\":45},{\\\"start\\\":8626,\\\"length\\\":42},{\\\"start\\\":8669,\\\"length"
                        "\\\":40},{\\\"start\\\":8710,\\\"length\\\":44},{\\\"start\\\":8755,\\\"length\\"
                        "\":42},{\\\"start\\\":8798,\\\"length\\\":52},{\\\"start\\\":8851,\\\"length\\\""
                        ":48},{\\\"start\\\":8900,\\\"length\\\":44},{\\\"start\\\":8945,\\\"length\\\":4"
                        "6},{\\\"start\\\":8992,\\\"length\\\":42},{\\\"start\\\":9035,\\\"length\\\":43}"
                        ",{\\\"start\\\":9079,\\\"length\\\":45},{\\\"start\\\":9125,\\\"length\\\":46},{"
                        "\\\"start\\\":9172,\\\"length\\\":43},{\\\"start\\\":9216,\\\"length\\\":41},{\\"
                        "\"start\\\":9258,\\\"length\\\":41},{\\\"start\\\":9300,\\\"length\\\":41},{\\\""
                        "start\\\":9342,\\\"length\\\":41},{\\\"start\\\":9384,\\\"length\\\":42},{\\\"st"
                        "art\\\":9427,\\\"length\\\":47},{\\\"start\\\":9475,\\\"length\\\":51},{\\\"star"
                        "t\\\":9527,\\\"length\\\":47},{\\\"start\\\":9575,\\\"length\\\":50},{\\\"start\\"
                        "\":9626,\\\"length\\\":46},{\\\"start\\\":9673,\\\"length\\\":46},{\\\"start\\\""
                        ":9720,\\\"length\\\":41},{\\\"start\\\":9762,\\\"length\\\":44},{\\\"start\\\":9"
                        "807,\\\"length\\\":50},{\\\"start\\\":9858,\\\"length\\\":51},{\\\"start\\\":991"
                        "0,\\\"length\\\":49},{\\\"start\\\":9960,\\\"length\\\":50},{\\\"start\\\":10011"
                        ",\\\"length\\\":52},{\\\"start\\\":10064,\\\"length\\\":48},{\\\"start\\\":10113"
                        ",\\\"length\\\":45},{\\\"start\\\":10159,\\\"length\\\":45},{\\\"start\\\":10205"
                        ",\\\"length\\\":47},{\\\"start\\\":10253,\\\"length\\\":45},{\\\"start\\\":10299"
                        ",\\\"length\\\":41},{\\\"start\\\":10341,\\\"length\\\":42},{\\\"start\\\":10384"
                        ",\\\"length\\\":40},{\\\"start\\\":10425,\\\"length\\\":43},{\\\"start\\\":10469"
                        ",\\\"length\\\":48},{\\\"start\\\":10518,\\\"length\\\":43},{\\\"start\\\":10562"
                        ",\\\"length\\\":51},{\\\"start\\\":10614,\\\"length\\\":49},{\\\"start\\\":10664"
                        ",\\\"length\\\":45},{\\\"start\\\":10710,\\\"length\\\":40},{\\\"start\\\":10751"
                        ",\\\"length\\\":41},{\\\"start\\\":10793,\\\"length\\\":42},{\\\"start\\\":10836"
                        ",\\\"length\\\":41},{\\\"start\\\":10878,\\\"length\\\":40},{\\\"start\\\":10919"
                        ",\\\"length\\\":41},{\\\"start\\\":10961,\\\"length\\\":41},{\\\"start\\\":11003"
                        ",\\\"length\\\":46},{\\\"start\\\":11050,\\\"length\\\":46},{\\\"start\\\":11097"
                        ",\\\"length\\\":50},{\\\"start\\\":11148,\\\"length\\\":53},{\\\"start\\\":11202"
                        ",\\\"length\\\":47},{\\\"start\\\":11250,\\\"length\\\":48},{\\\"start\\\":11299"
                        ",\\\"length\\\":42},{\\\"start\\\":11342,\\\"length\\\":44},{\\\"start\\\":11387"
                        ",\\\"length\\\":43},{\\\"start\\\":11431,\\\"length\\\":45},{\\\"start\\\":11477"
                        ",\\\"length\\\":41},{\\\"start\\\":11519,\\\"length\\\":50},{\\\"start\\\":11570"
                        ",\\\"length\\\":48},{\\\"start\\\":11619,\\\"length\\\":43},{\\\"start\\\":11663"
                        ",\\\"length\\\":48},{\\\"start\\\":11712,\\\"length\\\":43},{\\\"start\\\":11756"
                        ",\\\"length\\\":50},{\\\"start\\\":11807,\\\"length\\\":51},{\\\"start\\\":11859"
                        ",\\\"length\\\":52},{\\\"start\\\":11912,\\\"length\\\":53},{\\\"start\\\":11966"
                        ",\\\"length\\\":52},{\\\"start\\\":12019,\\\"length\\\":53},{\\\"start\\\":12073"
                        ",\\\"length\\\":50},{\\\"start\\\":12124,\\\"length\\\":49},{\\\"start\\\":12174"
                        ",\\\"length\\\":50},{\\\"start\\\":12225,\\\"length\\\":49},{\\\"start\\\":12275"
                        ",\\\"length\\\":52},{\\\"start\\\":12328,\\\"length\\\":51},{\\\"start\\\":12380"
                        ",\\\"length\\\":53},{\\\"start\\\":12434,\\\"length\\\":54},{\\\"start\\\":12489"
                        ",\\\"length\\\":51},{\\\"start\\\":12541,\\\"length\\\":55},{\\\"start\\\":12597"
                        ",\\\"length\\\":51},{\\\"start\\\":12649,\\\"length\\\":51}],\\\"resolvedPath\\\""
                        ":\\\"C:\\\\\\\\Users\\\\\\\\Naveen Reddy Vangala\\\\\\\\Documents\\\\\\\\Visual "
                        "Studio 2015\\\\\\\\Projects\\\\\\\\Dot-net-work\\\\\\\\SampleMasterPage\\\\\\\\S"
                        "ampleMasterPage\\\\\\\\css\\\\\\\\simple-line-icons.css\\\"}],\\\"callbackId\\\""
                        ":-1}\"]}";
long WebSocketReceiveLen6   = sizeof(WebSocketReceive6) - 1;	 

 

char WebSocketReceive7[] = "{\"C\":\"d-EB181140-F,0|G,A|H,0\",\"M\":[\"{\\\"name\\\":\\\"sys.callback\\\",\\"
                        "\"args\\\":[8,{\\\"ranges\\\":[null,{\\\"start\\\":365,\\\"length\\\":21},{\\\"s"
                        "tart\\\":388,\\\"length\\\":124},{\\\"start\\\":514,\\\"length\\\":87},{\\\"star"
                        "t\\\":603,\\\"length\\\":55},{\\\"start\\\":660,\\\"length\\\":39},{\\\"start\\\""
                        ":701,\\\"length\\\":38},{\\\"start\\\":741,\\\"length\\\":35},{\\\"start\\\":778"
                        ",\\\"length\\\":44},{\\\"start\\\":824,\\\"length\\\":34},{\\\"start\\\":860,\\\""
                        "length\\\":29},{\\\"start\\\":891,\\\"length\\\":44},{\\\"start\\\":937,\\\"leng"
                        "th\\\":43},{\\\"start\\\":982,\\\"length\\\":27},{\\\"start\\\":1011,\\\"length\\"
                        "\":98},{\\\"start\\\":1111,\\\"length\\\":22},{\\\"start\\\":1135,\\\"length\\\""
                        ":26},{\\\"start\\\":1163,\\\"length\\\":20},{\\\"start\\\":1185,\\\"length\\\":3"
                        "8},{\\\"start\\\":1225,\\\"length\\\":30},{\\\"start\\\":1257,\\\"length\\\":46}"
                        ",{\\\"start\\\":1305,\\\"length\\\":25},{\\\"start\\\":1332,\\\"length\\\":79},{"
                        "\\\"start\\\":1413,\\\"length\\\":93},{\\\"start\\\":1508,\\\"length\\\":31},{\\"
                        "\"start\\\":1541,\\\"length\\\":42},{\\\"start\\\":1585,\\\"length\\\":129},{\\\""
                        "start\\\":1716,\\\"length\\\":61},{\\\"start\\\":1861,\\\"length\\\":32},{\\\"st"
                        "art\\\":1895,\\\"length\\\":87},{\\\"start\\\":1984,\\\"length\\\":116},{\\\"sta"
                        "rt\\\":2102,\\\"length\\\":84},{\\\"start\\\":2188,\\\"length\\\":131},{\\\"star"
                        "t\\\":2321,\\\"length\\\":92},{\\\"start\\\":2415,\\\"length\\\":37},{\\\"start\\"
                        "\":2454,\\\"length\\\":30},{\\\"start\\\":2486,\\\"length\\\":33},{\\\"start\\\""
                        ":2521,\\\"length\\\":59},{\\\"start\\\":2582,\\\"length\\\":24},{\\\"start\\\":2"
                        "694,\\\"length\\\":1150},null,{\\\"start\\\":2880,\\\"length\\\":52},{\\\"start\\"
                        "\":2936,\\\"length\\\":53},{\\\"start\\\":2993,\\\"length\\\":58},{\\\"start\\\""
                        ":3055,\\\"length\\\":73},{\\\"start\\\":3132,\\\"length\\\":81},{\\\"start\\\":3"
                        "217,\\\"length\\\":44},{\\\"start\\\":3265,\\\"length\\\":45},{\\\"start\\\":331"
                        "4,\\\"length\\\":41},{\\\"start\\\":3359,\\\"length\\\":50},{\\\"start\\\":3413,"
                        "\\\"length\\\":43},{\\\"start\\\":3460,\\\"length\\\":32},{\\\"start\\\":3496,\\"
                        "\"length\\\":85},{\\\"start\\\":3585,\\\"length\\\":40},{\\\"start\\\":3629,\\\""
                        "length\\\":54},{\\\"start\\\":3686,\\\"length\\\":67},{\\\"start\\\":3757,\\\"le"
                        "ngth\\\":85},{\\\"start\\\":4403,\\\"length\\\":252},{\\\"start\\\":4657,\\\"len"
                        "gth\\\":48},{\\\"start\\\":4707,\\\"length\\\":44},{\\\"start\\\":4753,\\\"lengt"
                        "h\\\":69},{\\\"start\\\":4824,\\\"length\\\":47},{\\\"start\\\":4873,\\\"length\\"
                        "\":47},{\\\"start\\\":4922,\\\"length\\\":50},{\\\"start\\\":4974,\\\"length\\\""
                        ":48},{\\\"start\\\":5024,\\\"length\\\":47},{\\\"start\\\":5073,\\\"length\\\":4"
                        "7},{\\\"start\\\":5122,\\\"length\\\":48},{\\\"start\\\":5172,\\\"length\\\":47}"
                        ",{\\\"start\\\":5221,\\\"length\\\":46},{\\\"start\\\":5269,\\\"length\\\":52},{"
                        "\\\"start\\\":5323,\\\"length\\\":46},{\\\"start\\\":5371,\\\"length\\\":46},{\\"
                        "\"start\\\":5419,\\\"length\\\":50},{\\\"start\\\":5471,\\\"length\\\":44},{\\\""
                        "start\\\":5517,\\\"length\\\":49},{\\\"start\\\":5568,\\\"length\\\":44},{\\\"st"
                        "art\\\":5614,\\\"length\\\":48},{\\\"start\\\":5664,\\\"length\\\":49},{\\\"star"
                        "t\\\":5715,\\\"length\\\":50},{\\\"start\\\":5767,\\\"length\\\":45},{\\\"start\\"
                        "\":5814,\\\"length\\\":48},{\\\"start\\\":5864,\\\"length\\\":45},{\\\"start\\\""
                        ":5911,\\\"length\\\":47},{\\\"start\\\":5960,\\\"length\\\":46},{\\\"start\\\":6"
                        "008,\\\"length\\\":46},{\\\"start\\\":6056,\\\"length\\\":46},{\\\"start\\\":610"
                        "4,\\\"length\\\":46},{\\\"start\\\":6152,\\\"length\\\":54},{\\\"start\\\":6208,"
                        "\\\"length\\\":50},{\\\"start\\\":6260,\\\"length\\\":48},{\\\"start\\\":6310,\\"
                        "\"length\\\":47},{\\\"start\\\":6359,\\\"length\\\":53},{\\\"start\\\":6414,\\\""
                        "length\\\":48},{\\\"start\\\":6464,\\\"length\\\":49},{\\\"start\\\":6515,\\\"le"
                        "ngth\\\":50},{\\\"start\\\":6567,\\\"length\\\":46},{\\\"start\\\":6615,\\\"leng"
                        "th\\\":46},{\\\"start\\\":6663,\\\"length\\\":52},{\\\"start\\\":6717,\\\"length"
                        "\\\":52},{\\\"start\\\":6771,\\\"length\\\":53},{\\\"start\\\":6826,\\\"length\\"
                        "\":51},{\\\"start\\\":6879,\\\"length\\\":48},{\\\"start\\\":6929,\\\"length\\\""
                        ":49},{\\\"start\\\":6980,\\\"length\\\":45},{\\\"start\\\":7027,\\\"length\\\":4"
                        "6},{\\\"start\\\":7075,\\\"length\\\":46},{\\\"start\\\":7123,\\\"length\\\":50}"
                        ",{\\\"start\\\":7175,\\\"length\\\":47},{\\\"start\\\":7224,\\\"length\\\":48},{"
                        "\\\"start\\\":7274,\\\"length\\\":46},{\\\"start\\\":7322,\\\"length\\\":46},{\\"
                        "\"start\\\":7370,\\\"length\\\":48},{\\\"start\\\":7420,\\\"length\\\":53},{\\\""
                        "start\\\":7475,\\\"length\\\":52},{\\\"start\\\":7529,\\\"length\\\":52},{\\\"st"
                        "art\\\":7583,\\\"length\\\":54},{\\\"start\\\":7639,\\\"length\\\":53},{\\\"star"
                        "t\\\":7694,\\\"length\\\":55},{\\\"start\\\":7751,\\\"length\\\":46},{\\\"start\\"
                        "\":7799,\\\"length\\\":53},{\\\"start\\\":7854,\\\"length\\\":54},{\\\"start\\\""
                        ":7910,\\\"length\\\":56},{\\\"start\\\":7968,\\\"length\\\":49},{\\\"start\\\":8"
                        "019,\\\"length\\\":52},{\\\"start\\\":8073,\\\"length\\\":48},{\\\"start\\\":812"
                        "3,\\\"length\\\":46},{\\\"start\\\":8171,\\\"length\\\":46},{\\\"start\\\":8219,"
                        "\\\"length\\\":47},{\\\"start\\\":8268,\\\"length\\\":47},{\\\"start\\\":8317,\\"
                        "\"length\\\":46},{\\\"start\\\":8365,\\\"length\\\":55},{\\\"start\\\":8422,\\\""
                        "length\\\":55},{\\\"start\\\":8479,\\\"length\\\":50},{\\\"start\\\":8531,\\\"le"
                        "ngth\\\":46},{\\\"start\\\":8579,\\\"length\\\":47},{\\\"start\\\":8628,\\\"leng"
                        "th\\\":46},{\\\"start\\\":8676,\\\"length\\\":49},{\\\"start\\\":8727,\\\"length"
                        "\\\":54},{\\\"start\\\":8783,\\\"length\\\":54},{\\\"start\\\":8839,\\\"length\\"
                        "\":47},{\\\"start\\\":8888,\\\"length\\\":54},{\\\"start\\\":8944,\\\"length\\\""
                        ":55},{\\\"start\\\":9001,\\\"length\\\":51},{\\\"start\\\":9054,\\\"length\\\":5"
                        "2},{\\\"start\\\":9108,\\\"length\\\":53},{\\\"start\\\":9163,\\\"length\\\":49}"
                        ",{\\\"start\\\":9214,\\\"length\\\":55},{\\\"start\\\":9271,\\\"length\\\":51},{"
                        "\\\"start\\\":9324,\\\"length\\\":52},{\\\"start\\\":9378,\\\"length\\\":55},{\\"
                        "\"start\\\":9435,\\\"length\\\":51},{\\\"start\\\":9488,\\\"length\\\":52},{\\\""
                        "start\\\":9542,\\\"length\\\":52},{\\\"start\\\":9596,\\\"length\\\":53},{\\\"st"
                        "art\\\":9651,\\\"length\\\":50},{\\\"start\\\":9703,\\\"length\\\":52},{\\\"star"
                        "t\\\":9757,\\\"length\\\":51},{\\\"start\\\":9810,\\\"length\\\":53},{\\\"start\\"
                        "\":9865,\\\"length\\\":54},{\\\"start\\\":9921,\\\"length\\\":58},{\\\"start\\\""
                        ":9981,\\\"length\\\":46},{\\\"start\\\":10029,\\\"length\\\":46},{\\\"start\\\":"
                        "10077,\\\"length\\\":46},{\\\"start\\\":10125,\\\"length\\\":50},{\\\"start\\\":"
                        "10177,\\\"length\\\":51},{\\\"start\\\":10230,\\\"length\\\":54},{\\\"start\\\":"
                        "10286,\\\"length\\\":47},{\\\"start\\\":10335,\\\"length\\\":50},{\\\"start\\\":"
                        "10387,\\\"length\\\":48},{\\\"start\\\":10437,\\\"length\\\":49},{\\\"start\\\":"
                        "10488,\\\"length\\\":48},{\\\"start\\\":10538,\\\"length\\\":52},{\\\"start\\\":"
                        "10592,\\\"length\\\":54},{\\\"start\\\":10648,\\\"length\\\":49},{\\\"start\\\":"
                        "10699,\\\"length\\\":55},{\\\"start\\\":10756,\\\"length\\\":54},{\\\"start\\\":"
                        "10812,\\\"length\\\":53},{\\\"start\\\":10867,\\\"length\\\":57},{\\\"start\\\":"
                        "10926,\\\"length\\\":59},{\\\"start\\\":10987,\\\"length\\\":45},{\\\"start\\\":"
                        "11034,\\\"length\\\":50},{\\\"start\\\":11086,\\\"length\\\":46},{\\\"start\\\":"
                        "11134,\\\"length\\\":53},{\\\"start\\\":11189,\\\"length\\\":51},{\\\"start\\\":"
                        "11242,\\\"length\\\":53},{\\\"start\\\":11297,\\\"length\\\":52},{\\\"start\\\":"
                        "11351,\\\"length\\\":51},{\\\"start\\\":11404,\\\"length\\\":49},{\\\"start\\\":"
                        "11455,\\\"length\\\":51},{\\\"start\\\":11508,\\\"length\\\":60},{\\\"start\\\":"
                        "11570,\\\"length\\\":59},{\\\"start\\\":11631,\\\"length\\\":57},{\\\"start\\\":"
                        "11690,\\\"length\\\":59},{\\\"start\\\":11751,\\\"length\\\":47},{\\\"start\\\":"
                        "11800,\\\"length\\\":48},{\\\"start\\\":11850,\\\"length\\\":47},{\\\"start\\\":"
                        "11899,\\\"length\\\":48},{\\\"start\\\":11949,\\\"length\\\":51},{\\\"start\\\":"
                        "12002,\\\"length\\\":52},{\\\"start\\\":12056,\\\"length\\\":51},{\\\"start\\\":"
                        "12109,\\\"length\\\":51},{\\\"start\\\":12162,\\\"length\\\":53},{\\\"start\\\":"
                        "12217,\\\"length\\\":46},{\\\"start\\\":12265,\\\"length\\\":47},{\\\"start\\\":"
                        "12314,\\\"length\\\":49},{\\\"start\\\":12365,\\\"length\\\":45},{\\\"start\\\":"
                        "12412,\\\"length\\\":45},{\\\"start\\\":12459,\\\"length\\\":46},{\\\"start\\\":"
                        "12507,\\\"length\\\":58},{\\\"start\\\":12567,\\\"length\\\":62},{\\\"start\\\":"
                        "12631,\\\"length\\\":55},{\\\"start\\\":12688,\\\"length\\\":59},{\\\"start\\\":"
                        "12749,\\\"length\\\":60},{\\\"start\\\":12811,\\\"length\\\":64},{\\\"start\\\":"
                        "12877,\\\"length\\\":51},{\\\"start\\\":12930,\\\"length\\\":48},{\\\"start\\\":"
                        "12980,\\\"length\\\":55},{\\\"start\\\":13037,\\\"length\\\":53},{\\\"start\\\":"
                        "13092,\\\"length\\\":48},{\\\"start\\\":13142,\\\"length\\\":47},{\\\"start\\\":"
                        "13191,\\\"length\\\":49},{\\\"start\\\":13242,\\\"length\\\":52},{\\\"start\\\":"
                        "13296,\\\"length\\\":48},{\\\"start\\\":13346,\\\"length\\\":46},{\\\"start\\\":"
                        "13394,\\\"length\\\":46},{\\\"start\\\":13442,\\\"length\\\":47},{\\\"start\\\":"
                        "13491,\\\"length\\\":48},{\\\"start\\\":13541,\\\"length\\\":48},{\\\"start\\\":"
                        "13591,\\\"length\\\":46},{\\\"start\\\":13639,\\\"length\\\":53},{\\\"start\\\":"
                        "13694,\\\"length\\\":54},{\\\"start\\\":13750,\\\"length\\\":55},{\\\"start\\\":"
                        "13807,\\\"length\\\":53},{\\\"start\\\":13862,\\\"length\\\":53},{\\\"start\\\":"
                        "13917,\\\"length\\\":53},{\\\"start\\\":13972,\\\"length\\\":50},{\\\"start\\\":"
                        "14024,\\\"length\\\":49},{\\\"start\\\":14075,\\\"length\\\":48},{\\\"start\\\":"
                        "14125,\\\"length\\\":52},{\\\"start\\\":14179,\\\"length\\\":50},{\\\"start\\\":"
                        "14231,\\\"length\\\":51},{\\\"start\\\":14284,\\\"length\\\":47},{\\\"start\\\":"
                        "14333,\\\"length\\\":47},{\\\"start\\\":14382,\\\"length\\\":50},{\\\"start\\\":"
                        "14434,\\\"length\\\":50},{\\\"start\\\":14486,\\\"length\\\":51},{\\\"start\\\":"
                        "14539,\\\"length\\\":54},{\\\"start\\\":14595,\\\"length\\\":53},{\\\"start\\\":"
                        "14650,\\\"length\\\":51},{\\\"start\\\":14703,\\\"length\\\":51},{\\\"start\\\":"
                        "14756,\\\"length\\\":51},{\\\"start\\\":14809,\\\"length\\\":56},{\\\"start\\\":"
                        "14867,\\\"length\\\":59},{\\\"start\\\":14928,\\\"length\\\":56},{\\\"start\\\":"
                        "14986,\\\"length\\\":54},{\\\"start\\\":15042,\\\"length\\\":54},{\\\"start\\\":"
                        "15098,\\\"length\\\":56},{\\\"start\\\":15156,\\\"length\\\":44},{\\\"start\\\":"
                        "15202,\\\"length\\\":51},{\\\"start\\\":15255,\\\"length\\\":51},{\\\"start\\\":"
                        "15308,\\\"length\\\":50},{\\\"start\\\":15360,\\\"length\\\":46},{\\\"start\\\":"
                        "15408,\\\"length\\\":47},{\\\"start\\\":15457,\\\"length\\\":47},{\\\"start\\\":"
                        "15506,\\\"length\\\":51},{\\\"start\\\":15559,\\\"length\\\":46},{\\\"start\\\":"
                        "15607,\\\"length\\\":47},{\\\"start\\\":15656,\\\"length\\\":46},{\\\"start\\\":"
                        "15704,\\\"length\\\":48},{\\\"start\\\":15754,\\\"length\\\":48},{\\\"start\\\":"
                        "15804,\\\"length\\\":54},{\\\"start\\\":15860,\\\"length\\\":46},{\\\"start\\\":"
                        "15908,\\\"length\\\":52},{\\\"start\\\":15962,\\\"length\\\":45},{\\\"start\\\":"
                        "16009,\\\"length\\\":47},{\\\"start\\\":16058,\\\"length\\\":47},{\\\"start\\\":"
                        "16107,\\\"length\\\":51},{\\\"start\\\":16160,\\\"length\\\":46},{\\\"start\\\":"
                        "16208,\\\"length\\\":51},{\\\"start\\\":16261,\\\"length\\\":52},{\\\"start\\\":"
                        "16315,\\\"length\\\":50},{\\\"start\\\":16367,\\\"length\\\":49},{\\\"start\\\":"
                        "16418,\\\"length\\\":45},{\\\"start\\\":16465,\\\"length\\\":45},{\\\"start\\\":"
                        "16512,\\\"length\\\":45},{\\\"start\\\":16559,\\\"length\\\":45},{\\\"start\\\":"
                        "16606,\\\"length\\\":47},{\\\"start\\\":16655,\\\"length\\\":45},{\\\"start\\\":"
                        "16702,\\\"length\\\":47},{\\\"start\\\":16751,\\\"length\\\":51},{\\\"start\\\":"
                        "16804,\\\"length\\\":58},{\\\"start\\\":16864,\\\"length\\\":51},{\\\"start\\\":"
                        "16917,\\\"length\\\":59},{\\\"start\\\":16978,\\\"length\\\":57},{\\\"start\\\":"
                        "17037,\\\"length\\\":56},{\\\"start\\\":17095,\\\"length\\\":54},{\\\"start\\\":"
                        "17151,\\\"length\\\":45},{\\\"start\\\":17198,\\\"length\\\":47},{\\\"start\\\":"
                        "17247,\\\"length\\\":52},{\\\"start\\\":17301,\\\"length\\\":51},{\\\"start\\\":"
                        "17354,\\\"length\\\":52},{\\\"start\\\":17408,\\\"length\\\":57},{\\\"start\\\":"
                        "17467,\\\"length\\\":58},{\\\"start\\\":17527,\\\"length\\\":61},{\\\"start\\\":"
                        "17590,\\\"length\\\":65},{\\\"start\\\":17657,\\\"length\\\":59},{\\\"start\\\":"
                        "17718,\\\"length\\\":63},{\\\"start\\\":17783,\\\"length\\\":60},{\\\"start\\\":"
                        "17845,\\\"length\\\":56},{\\\"start\\\":17903,\\\"length\\\":55},{\\\"start\\\":"
                        "17960,\\\"length\\\":57},{\\\"start\\\":18019,\\\"length\\\":54},{\\\"start\\\":"
                        "18075,\\\"length\\\":49},{\\\"start\\\":18126,\\\"length\\\":53},{\\\"start\\\":"
                        "18181,\\\"length\\\":51},{\\\"start\\\":18234,\\\"length\\\":51},{\\\"start\\\":"
                        "18287,\\\"length\\\":52},{\\\"start\\\":18341,\\\"length\\\":51},{\\\"start\\\":"
                        "18394,\\\"length\\\":49},{\\\"start\\\":18445,\\\"length\\\":96},null,{\\\"start"
                        "\\\":18657,\\\"length\\\":71},{\\\"start\\\":18730,\\\"length\\\":158},{\\\"star"
                        "t\\\":18890,\\\"length\\\":105},{\\\"start\\\":18997,\\\"length\\\":48},{\\\"sta"
                        "rt\\\":19046,\\\"length\\\":68},{\\\"start\\\":19115,\\\"length\\\":105},{\\\"st"
                        "art\\\":19222,\\\"length\\\":23},{\\\"start\\\":19247,\\\"length\\\":33},{\\\"st"
                        "art\\\":19282,\\\"length\\\":72},{\\\"start\\\":19356,\\\"length\\\":38},{\\\"st"
                        "art\\\":19396,\\\"length\\\":311},{\\\"start\\\":19709,\\\"length\\\":37},{\\\"s"
                        "tart\\\":19748,\\\"length\\\":95},{\\\"start\\\":19845,\\\"length\\\":152},{\\\""
                        "start\\\":19999,\\\"length\\\":154},{\\\"start\\\":20155,\\\"length\\\":38},{\\\""
                        "start\\\":20195,\\\"length\\\":138},{\\\"start\\\":20334,\\\"length\\\":325},{\\"
                        "\"start\\\":20661,\\\"length\\\":72},{\\\"start\\\":20734,\\\"length\\\":152},{\\"
                        "\"start\\\":20888,\\\"length\\\":72},{\\\"start\\\":20961,\\\"length\\\":152},{\\"
                        "\"start\\\":21115,\\\"length\\\":30},{\\\"start\\\":21147,\\\"length\\\":30},{\\"
                        "\"start\\\":21179,\\\"length\\\":30},{\\\"start\\\":21211,\\\"length\\\":30},{\\"
                        "\"start\\\":21243,\\\"length\\\":30},{\\\"start\\\":21275,\\\"length\\\":30},{\\"
                        "\"start\\\":21307,\\\"length\\\":25},{\\\"start\\\":21334,\\\"length\\\":91},{\\"
                        "\"start\\\":21426,\\\"length\\\":64},{\\\"start\\\":21456,\\\"length\\\":32},{\\"
                        "\"start\\\":21492,\\\"length\\\":35},{\\\"start\\\":21529,\\\"length\\\":61},{\\"
                        "\"start\\\":21592,\\\"length\\\":34},{\\\"start\\\":21628,\\\"length\\\":36},{\\"
                        "\"start\\\":21666,\\\"length\\\":38},{\\\"start\\\":21706,\\\"length\\\":40},{\\"
                        "\"start\\\":21748,\\\"length\\\":39},{\\\"start\\\":21789,\\\"length\\\":48},{\\"
                        "\"start\\\":21839,\\\"length\\\":61},{\\\"start\\\":21902,\\\"length\\\":50},{\\"
                        "\"start\\\":21954,\\\"length\\\":33},{\\\"start\\\":21989,\\\"length\\\":35},{\\"
                        "\"start\\\":22026,\\\"length\\\":64},{\\\"start\\\":22092,\\\"length\\\":35},{\\"
                        "\"start\\\":22129,\\\"length\\\":64},{\\\"start\\\":22195,\\\"length\\\":32},{\\"
                        "\"start\\\":22229,\\\"length\\\":58},{\\\"start\\\":22289,\\\"length\\\":35},{\\"
                        "\"start\\\":22326,\\\"length\\\":64},{\\\"start\\\":22392,\\\"length\\\":34},{\\"
                        "\"start\\\":22428,\\\"length\\\":62},{\\\"start\\\":22492,\\\"length\\\":30},{\\"
                        "\"start\\\":22524,\\\"length\\\":44},{\\\"start\\\":22570,\\\"length\\\":71},{\\"
                        "\"start\\\":22643,\\\"length\\\":44},{\\\"start\\\":22689,\\\"length\\\":71},{\\"
                        "\"start\\\":22762,\\\"length\\\":41},{\\\"start\\\":22805,\\\"length\\\":65},{\\"
                        "\"start\\\":22872,\\\"length\\\":44},{\\\"start\\\":22918,\\\"length\\\":71},{\\"
                        "\"start\\\":22991,\\\"length\\\":43},{\\\"start\\\":23036,\\\"length\\\":69},{\\"
                        "\"start\\\":23107,\\\"length\\\":98},{\\\"start\\\":23207,\\\"length\\\":50},{\\"
                        "\"start\\\":23258,\\\"length\\\":50},{\\\"start\\\":23310,\\\"length\\\":57},{\\"
                        "\"start\\\":23369,\\\"length\\\":76},{\\\"start\\\":23446,\\\"length\\\":89},{\\"
                        "\"start\\\":23537,\\\"length\\\":46},{\\\"start\\\":23585,\\\"length\\\":34},{\\"
                        "\"start\\\":23621,\\\"length\\\":27},{\\\"start\\\":23650,\\\"length\\\":24},{\\"
                        "\"start\\\":23676,\\\"length\\\":87},{\\\"start\\\":23764,\\\"length\\\":42},{\\"
                        "\"start\\\":23807,\\\"length\\\":256},{\\\"start\\\":23837,\\\"length\\\":174},{"
                        "\\\"start\\\":24014,\\\"length\\\":47},{\\\"start\\\":24065,\\\"length\\\":95},{"
                        "\\\"start\\\":24162,\\\"length\\\":33},{\\\"start\\\":24197,\\\"length\\\":111},"
                        "{\\\"start\\\":24309,\\\"length\\\":99},{\\\"start\\\":24409,\\\"length\\\":136}"
                        ",{\\\"start\\\":24546,\\\"length\\\":105},{\\\"start\\\":24653,\\\"length\\\":16"
                        "2},{\\\"start\\\":24816,\\\"length\\\":231},{\\\"start\\\":25048,\\\"length\\\":"
                        "236},{\\\"start\\\":25286,\\\"length\\\":80},{\\\"start\\\":25368,\\\"length\\\""
                        ":90},{\\\"start\\\":25460,\\\"length\\\":115},{\\\"start\\\":25577,\\\"length\\\""
                        ":158},{\\\"start\\\":25736,\\\"length\\\":85},{\\\"start\\\":25823,\\\"length\\\""
                        ":251},{\\\"start\\\":26075,\\\"length\\\":144},{\\\"start\\\":26221,\\\"length\\"
                        "\":62},{\\\"start\\\":26285,\\\"length\\\":102},{\\\"start\\\":26388,\\\"length\\"
                        "\":73},{\\\"start\\\":26462,\\\"length\\\":35},{\\\"start\\\":26498,\\\"length\\"
                        "\":66},{\\\"start\\\":26528,\\\"length\\\":34},{\\\"start\\\":26565,\\\"length\\"
                        "\":66},{\\\"start\\\":26595,\\\"length\\\":34},{\\\"start\\\":26632,\\\"length\\"
                        "\":68},{\\\"start\\\":26663,\\\"length\\\":35},{\\\"start\\\":26702,\\\"length\\"
                        "\":108},{\\\"start\\\":26811,\\\"length\\\":85},{\\\"start\\\":26897,\\\"length\\"
                        "\":41},{\\\"start\\\":26940,\\\"length\\\":53},{\\\"start\\\":26994,\\\"length\\"
                        "\":61},{\\\"start\\\":27056,\\\"length\\\":29},{\\\"start\\\":27087,\\\"length\\"
                        "\":628},{\\\"start\\\":27717,\\\"length\\\":152},{\\\"start\\\":27871,\\\"length"
                        "\\\":32},{\\\"start\\\":27905,\\\"length\\\":33},{\\\"start\\\":27940,\\\"length"
                        "\\\":27},{\\\"start\\\":27969,\\\"length\\\":33},{\\\"start\\\":28004,\\\"length"
                        "\\\":33},{\\\"start\\\":28039,\\\"length\\\":27},{\\\"start\\\":28068,\\\"length"
                        "\\\":33},{\\\"start\\\":28103,\\\"length\\\":33},{\\\"start\\\":28138,\\\"length"
                        "\\\":27},{\\\"start\\\":28167,\\\"length\\\":34},{\\\"start\\\":28203,\\\"length"
                        "\\\":34},{\\\"start\\\":28239,\\\"length\\\":29},{\\\"start\\\":28270,\\\"length"
                        "\\\":33},{\\\"start\\\":28305,\\\"length\\\":37},{\\\"start\\\":28344,\\\"length"
                        "\\\":38},{\\\"start\\\":28384,\\\"length\\\":32},{\\\"start\\\":28418,\\\"length"
                        "\\\":38},{\\\"start\\\":28458,\\\"length\\\":38},{\\\"start\\\":28498,\\\"length"
                        "\\\":32},{\\\"start\\\":28532,\\\"length\\\":38},{\\\"start\\\":28572,\\\"length"
                        "\\\":38},{\\\"start\\\":28612,\\\"length\\\":32},{\\\"start\\\":28646,\\\"length"
                        "\\\":39},{\\\"start\\\":28687,\\\"length\\\":39},{\\\"start\\\":28728,\\\"length"
                        "\\\":34},{\\\"start\\\":28764,\\\"length\\\":32},{\\\"start\\\":28798,\\\"length"
                        "\\\":36},{\\\"start\\\":28836,\\\"length\\\":37},{\\\"start\\\":28875,\\\"length"
                        "\\\":31},{\\\"start\\\":28908,\\\"length\\\":37},{\\\"start\\\":28947,\\\"length"
                        "\\\":37},{\\\"start\\\":28986,\\\"length\\\":31},{\\\"start\\\":29019,\\\"length"
                        "\\\":37},{\\\"start\\\":29058,\\\"length\\\":37},{\\\"start\\\":29097,\\\"length"
                        "\\\":31},{\\\"start\\\":29130,\\\"length\\\":38},{\\\"start\\\":29170,\\\"length"
                        "\\\":38},{\\\"start\\\":29210,\\\"length\\\":33},{\\\"start\\\":29245,\\\"length"
                        "\\\":39},{\\\"start\\\":29286,\\\"length\\\":45},{\\\"start\\\":29333,\\\"length"
                        "\\\":46},{\\\"start\\\":29381,\\\"length\\\":40},{\\\"start\\\":29423,\\\"length"
                        "\\\":46},{\\\"start\\\":29471,\\\"length\\\":46},{\\\"start\\\":29519,\\\"length"
                        "\\\":40},{\\\"start\\\":29561,\\\"length\\\":46},{\\\"start\\\":29609,\\\"length"
                        "\\\":46},{\\\"start\\\":29657,\\\"length\\\":40},{\\\"start\\\":29699,\\\"length"
                        "\\\":47},{\\\"start\\\":29748,\\\"length\\\":47},{\\\"start\\\":29797,\\\"length"
                        "\\\":42},{\\\"start\\\":29841,\\\"length\\\":2464},{\\\"start\\\":29871,\\\"leng"
                        "th\\\":156},{\\\"start\\\":30031,\\\"length\\\":36},{\\\"start\\\":30071,\\\"len"
                        "gth\\\":37},{\\\"start\\\":30112,\\\"length\\\":31},{\\\"start\\\":30147,\\\"len"
                        "gth\\\":37},{\\\"start\\\":30188,\\\"length\\\":37},{\\\"start\\\":30229,\\\"len"
                        "gth\\\":31},{\\\"start\\\":30264,\\\"length\\\":37},{\\\"start\\\":30305,\\\"len"
                        "gth\\\":37},{\\\"start\\\":30346,\\\"length\\\":31},{\\\"start\\\":30381,\\\"len"
                        "gth\\\":38},{\\\"start\\\":30423,\\\"length\\\":38},{\\\"start\\\":30465,\\\"len"
                        "gth\\\":33},{\\\"start\\\":30502,\\\"length\\\":37},{\\\"start\\\":30543,\\\"len"
                        "gth\\\":41},{\\\"start\\\":30588,\\\"length\\\":42},{\\\"start\\\":30634,\\\"len"
                        "gth\\\":36},{\\\"start\\\":30674,\\\"length\\\":42},{\\\"start\\\":30720,\\\"len"
                        "gth\\\":42},{\\\"start\\\":30766,\\\"length\\\":36},{\\\"start\\\":30806,\\\"len"
                        "gth\\\":42},{\\\"start\\\":30852,\\\"length\\\":42},{\\\"start\\\":30898,\\\"len"
                        "gth\\\":36},{\\\"start\\\":30938,\\\"length\\\":43},{\\\"start\\\":30985,\\\"len"
                        "gth\\\":43},{\\\"start\\\":31032,\\\"length\\\":38},{\\\"start\\\":31074,\\\"len"
                        "gth\\\":36},{\\\"start\\\":31114,\\\"length\\\":40},{\\\"start\\\":31158,\\\"len"
                        "gth\\\":41},{\\\"start\\\":31203,\\\"length\\\":35},{\\\"start\\\":31242,\\\"len"
                        "gth\\\":41},{\\\"start\\\":31287,\\\"length\\\":41},{\\\"start\\\":31332,\\\"len"
                        "gth\\\":35},{\\\"start\\\":31371,\\\"length\\\":41},{\\\"start\\\":31416,\\\"len"
                        "gth\\\":41},{\\\"start\\\":31461,\\\"length\\\":35},{\\\"start\\\":31500,\\\"len"
                        "gth\\\":42},{\\\"start\\\":31546,\\\"length\\\":42},{\\\"start\\\":31592,\\\"len"
                        "gth\\\":37},{\\\"start\\\":31633,\\\"length\\\":43},{\\\"start\\\":31680,\\\"len"
                        "gth\\\":49},{\\\"start\\\":31733,\\\"length\\\":50},{\\\"start\\\":31787,\\\"len"
                        "gth\\\":44},{\\\"start\\\":31835,\\\"length\\\":50},{\\\"start\\\":31889,\\\"len"
                        "gth\\\":50},{\\\"start\\\":31943,\\\"length\\\":44},{\\\"start\\\":31991,\\\"len"
                        "gth\\\":50},{\\\"start\\\":32045,\\\"length\\\":50},{\\\"start\\\":32099,\\\"len"
                        "gth\\\":44},{\\\"start\\\":32147,\\\"length\\\":51},{\\\"start\\\":32202,\\\"len"
                        "gth\\\":51},{\\\"start\\\":32257,\\\"length\\\":46},{\\\"start\\\":32306,\\\"len"
                        "gth\\\":2464},{\\\"start\\\":32336,\\\"length\\\":156},{\\\"start\\\":32496,\\\""
                        "length\\\":36},{\\\"start\\\":32536,\\\"length\\\":37},{\\\"start\\\":32577,\\\""
                        "length\\\":31},{\\\"start\\\":32612,\\\"length\\\":37},{\\\"start\\\":32653,\\\""
                        "length\\\":37},{\\\"start\\\":32694,\\\"length\\\":31},{\\\"start\\\":32729,\\\""
                        "length\\\":37},{\\\"start\\\":32770,\\\"length\\\":37},{\\\"start\\\":32811,\\\""
                        "length\\\":31},{\\\"start\\\":32846,\\\"length\\\":38},{\\\"start\\\":32888,\\\""
                        "length\\\":38},{\\\"start\\\":32930,\\\"length\\\":33},{\\\"start\\\":32967,\\\""
                        "length\\\":37},{\\\"start\\\":33008,\\\"length\\\":41},{\\\"start\\\":33053,\\\""
                        "length\\\":42},{\\\"start\\\":33099,\\\"length\\\":36},{\\\"start\\\":33139,\\\""
                        "length\\\":42},{\\\"start\\\":33185,\\\"length\\\":42},{\\\"start\\\":33231,\\\""
                        "length\\\":36},{\\\"start\\\":33271,\\\"length\\\":42},{\\\"start\\\":33317,\\\""
                        "length\\\":42},{\\\"start\\\":33363,\\\"length\\\":36},{\\\"start\\\":33403,\\\""
                        "length\\\":43},{\\\"start\\\":33450,\\\"length\\\":43},{\\\"start\\\":33497,\\\""
                        "length\\\":38},{\\\"start\\\":33539,\\\"length\\\":36},{\\\"start\\\":33579,\\\""
                        "length\\\":40},{\\\"start\\\":33623,\\\"length\\\":41},{\\\"start\\\":33668,\\\""
                        "length\\\":35},{\\\"start\\\":33707,\\\"length\\\":41},{\\\"start\\\":33752,\\\""
                        "length\\\":41},{\\\"start\\\":33797,\\\"length\\\":35},{\\\"start\\\":33836,\\\""
                        "length\\\":41},{\\\"start\\\":33881,\\\"length\\\":41},{\\\"start\\\":33926,\\\""
                        "length\\\":35},{\\\"start\\\":33965,\\\"length\\\":42},{\\\"start\\\":34011,\\\""
                        "length\\\":42},{\\\"start\\\":34057,\\\"length\\\":37},{\\\"start\\\":34098,\\\""
                        "length\\\":43},{\\\"start\\\":34145,\\\"length\\\":49},{\\\"start\\\":34198,\\\""
                        "length\\\":50},{\\\"start\\\":34252,\\\"length\\\":44},{\\\"start\\\":34300,\\\""
                        "length\\\":50},{\\\"start\\\":34354,\\\"length\\\":50},{\\\"start\\\":34408,\\\""
                        "length\\\":44},{\\\"start\\\":34456,\\\"length\\\":50},{\\\"start\\\":34510,\\\""
                        "length\\\":50},{\\\"start\\\":34564,\\\"length\\\":44},{\\\"start\\\":34612,\\\""
                        "length\\\":51},{\\\"start\\\":34667,\\\"length\\\":51},{\\\"start\\\":34722,\\\""
                        "length\\\":46},{\\\"start\\\":34771,\\\"length\\\":2465},{\\\"start\\\":34802,\\"
                        "\"length\\\":156},{\\\"start\\\":34962,\\\"length\\\":36},{\\\"start\\\":35002,\\"
                        "\"length\\\":37},{\\\"start\\\":35043,\\\"length\\\":31},{\\\"start\\\":35078,\\"
                        "\"length\\\":37},{\\\"start\\\":35119,\\\"length\\\":37},{\\\"start\\\":35160,\\"
                        "\"length\\\":31},{\\\"start\\\":35195,\\\"length\\\":37},{\\\"start\\\":35236,\\"
                        "\"length\\\":37},{\\\"start\\\":35277,\\\"length\\\":31},{\\\"start\\\":35312,\\"
                        "\"length\\\":38},{\\\"start\\\":35354,\\\"length\\\":38},{\\\"start\\\":35396,\\"
                        "\"length\\\":33},{\\\"start\\\":35433,\\\"length\\\":37},{\\\"start\\\":35474,\\"
                        "\"length\\\":41},{\\\"start\\\":35519,\\\"length\\\":42},{\\\"start\\\":35565,\\"
                        "\"length\\\":36},{\\\"start\\\":35605,\\\"length\\\":42},{\\\"start\\\":35651,\\"
                        "\"length\\\":42},{\\\"start\\\":35697,\\\"length\\\":36},{\\\"start\\\":35737,\\"
                        "\"length\\\":42},{\\\"start\\\":35783,\\\"length\\\":42},{\\\"start\\\":35829,\\"
                        "\"length\\\":36},{\\\"start\\\":35869,\\\"length\\\":43},{\\\"start\\\":35916,\\"
                        "\"length\\\":43},{\\\"start\\\":35963,\\\"length\\\":38},{\\\"start\\\":36005,\\"
                        "\"length\\\":36},{\\\"start\\\":36045,\\\"length\\\":40},{\\\"start\\\":36089,\\"
                        "\"length\\\":41},{\\\"start\\\":36134,\\\"length\\\":35},{\\\"start\\\":36173,\\"
                        "\"length\\\":41},{\\\"start\\\":36218,\\\"length\\\":41},{\\\"start\\\":36263,\\"
                        "\"length\\\":35},{\\\"start\\\":36302,\\\"length\\\":41},{\\\"start\\\":36347,\\"
                        "\"length\\\":41},{\\\"start\\\":36392,\\\"length\\\":35},{\\\"start\\\":36431,\\"
                        "\"length\\\":42},{\\\"start\\\":36477,\\\"length\\\":42},{\\\"start\\\":36523,\\"
                        "\"length\\\":37},{\\\"start\\\":36564,\\\"length\\\":43},{\\\"start\\\":36611,\\"
                        "\"length\\\":49},{\\\"start\\\":36664,\\\"length\\\":50},{\\\"start\\\":36718,\\"
                        "\"length\\\":44},{\\\"start\\\":36766,\\\"length\\\":50},{\\\"start\\\":36820,\\"
                        "\"length\\\":50},{\\\"start\\\":36874,\\\"length\\\":44},{\\\"start\\\":36922,\\"
                        "\"length\\\":50},{\\\"start\\\":36976,\\\"length\\\":50},{\\\"start\\\":37030,\\"
                        "\"length\\\":44},{\\\"start\\\":37078,\\\"length\\\":51},{\\\"start\\\":37133,\\"
                        "\"length\\\":51},{\\\"start\\\":37188,\\\"length\\\":46},{\\\"start\\\":37237,\\"
                        "\"length\\\":42},{\\\"start\\\":37281,\\\"length\\\":92},{\\\"start\\\":37375,\\"
                        "\"length\\\":26},{\\\"start\\\":37403,\\\"length\\\":67},{\\\"start\\\":37471,\\"
                        "\"length\\\":251},{\\\"start\\\":37723,\\\"length\\\":87},{\\\"start\\\":37811,\\"
                        "\"length\\\":313},{\\\"start\\\":38125,\\\"length\\\":56},{\\\"start\\\":38182,\\"
                        "\"length\\\":43},{\\\"start\\\":38227,\\\"length\\\":234},{\\\"start\\\":38463,\\"
                        "\"length\\\":45},{\\\"start\\\":38509,\\\"length\\\":238},{\\\"start\\\":38748,\\"
                        "\"length\\\":100},null,{\\\"start\\\":38929,\\\"length\\\":64},{\\\"start\\\":38"
                        "995,\\\"length\\\":88},{\\\"start\\\":39085,\\\"length\\\":110},{\\\"start\\\":3"
                        "9197,\\\"length\\\":427},{\\\"start\\\":39626,\\\"length\\\":254},{\\\"start\\\""
                        ":39882,\\\"length\\\":439},{\\\"start\\\":40323,\\\"length\\\":259},{\\\"start\\"
                        "\":40584,\\\"length\\\":403},{\\\"start\\\":40989,\\\"length\\\":244},{\\\"start"
                        "\\\":41235,\\\"length\\\":439},{\\\"start\\\":41676,\\\"length\\\":259},{\\\"sta"
                        "rt\\\":41937,\\\"length\\\":427},{\\\"start\\\":42366,\\\"length\\\":254},{\\\"s"
                        "tart\\\":42622,\\\"length\\\":62},{\\\"start\\\":42685,\\\"length\\\":1816},{\\\""
                        "start\\\":42726,\\\"length\\\":167},{\\\"start\\\":42896,\\\"length\\\":54},{\\\""
                        "start\\\":42953,\\\"length\\\":315},{\\\"start\\\":43271,\\\"length\\\":56},{\\\""
                        "start\\\":43330,\\\"length\\\":436},{\\\"start\\\":43769,\\\"length\\\":431},{\\"
                        "\"start\\\":44203,\\\"length\\\":296},{\\\"start\\\":44503,\\\"length\\\":68},{\\"
                        "\"start\\\":44573,\\\"length\\\":190},{\\\"start\\\":44765,\\\"length\\\":96},{\\"
                        "\"start\\\":44863,\\\"length\\\":115},{\\\"start\\\":44980,\\\"length\\\":111},{"
                        "\\\"start\\\":45093,\\\"length\\\":40},{\\\"start\\\":45135,\\\"length\\\":56},{"
                        "\\\"start\\\":45193,\\\"length\\\":50},{\\\"start\\\":45245,\\\"length\\\":179},"
                        "{\\\"start\\\":45426,\\\"length\\\":110},{\\\"start\\\":45538,\\\"length\\\":600"
                        "},{\\\"start\\\":46139,\\\"length\\\":242},{\\\"start\\\":46502,\\\"length\\\":5"
                        "9},{\\\"start\\\":46562,\\\"length\\\":129},{\\\"start\\\":46692,\\\"length\\\":"
                        "84},{\\\"start\\\":46778,\\\"length\\\":41},{\\\"start\\\":46821,\\\"length\\\":"
                        "52},{\\\"start\\\":46875,\\\"length\\\":2338},{\\\"start\\\":46933,\\\"length\\\""
                        ":176},{\\\"start\\\":47112,\\\"length\\\":1048},{\\\"start\\\":48163,\\\"length\\"
                        "\":1048},{\\\"start\\\":49214,\\\"length\\\":38},{\\\"start\\\":49254,\\\"length"
                        "\\\":104},{\\\"start\\\":49359,\\\"length\\\":137},{\\\"start\\\":49498,\\\"leng"
                        "th\\\":206},{\\\"start\\\":49706,\\\"length\\\":62},{\\\"start\\\":49770,\\\"len"
                        "gth\\\":192},{\\\"start\\\":49964,\\\"length\\\":108},{\\\"start\\\":50074,\\\"l"
                        "ength\\\":236},{\\\"start\\\":50312,\\\"length\\\":147},{\\\"start\\\":50461,\\\""
                        "length\\\":143},{\\\"start\\\":50606,\\\"length\\\":109},{\\\"start\\\":50716,\\"
                        "\"length\\\":451},{\\\"start\\\":51169,\\\"length\\\":225},{\\\"start\\\":51396,"
                        "\\\"length\\\":188},{\\\"start\\\":51586,\\\"length\\\":364},{\\\"start\\\":5195"
                        "2,\\\"length\\\":130},{\\\"start\\\":52083,\\\"length\\\":75},{\\\"start\\\":521"
                        "59,\\\"length\\\":102},{\\\"start\\\":52262,\\\"length\\\":135},{\\\"start\\\":5"
                        "2399,\\\"length\\\":230},{\\\"start\\\":52631,\\\"length\\\":188},{\\\"start\\\""
                        ":52821,\\\"length\\\":364},{\\\"start\\\":53187,\\\"length\\\":135},{\\\"start\\"
                        "\":53323,\\\"length\\\":75},{\\\"start\\\":53399,\\\"length\\\":102},{\\\"start\\"
                        "\":53502,\\\"length\\\":140},{\\\"start\\\":53644,\\\"length\\\":39},{\\\"start\\"
                        "\":53684,\\\"length\\\":56},{\\\"start\\\":53742,\\\"length\\\":200},{\\\"start\\"
                        "\":53944,\\\"length\\\":376},{\\\"start\\\":54322,\\\"length\\\":376},{\\\"start"
                        "\\\":54700,\\\"length\\\":303},{\\\"start\\\":55004,\\\"length\\\":167},{\\\"sta"
                        "rt\\\":55172,\\\"length\\\":207},{\\\"start\\\":55380,\\\"length\\\":107},{\\\"s"
                        "tart\\\":55488,\\\"length\\\":57},{\\\"start\\\":55547,\\\"length\\\":303},{\\\""
                        "start\\\":55851,\\\"length\\\":167},{\\\"start\\\":56019,\\\"length\\\":207},{\\"
                        "\"start\\\":56227,\\\"length\\\":107},{\\\"start\\\":56335,\\\"length\\\":57},{\\"
                        "\"start\\\":56394,\\\"length\\\":283},{\\\"start\\\":56678,\\\"length\\\":165},{"
                        "\\\"start\\\":56844,\\\"length\\\":205},{\\\"start\\\":57050,\\\"length\\\":105}"
                        ",{\\\"start\\\":57156,\\\"length\\\":55},{\\\"start\\\":57213,\\\"length\\\":61}"
                        ",{\\\"start\\\":57275,\\\"length\\\":66},{\\\"start\\\":57343,\\\"length\\\":93}"
                        ",{\\\"start\\\":57438,\\\"length\\\":1164},{\\\"start\\\":57468,\\\"length\\\":1"
                        "07},{\\\"start\\\":57578,\\\"length\\\":104},{\\\"start\\\":57685,\\\"length\\\""
                        ":66},{\\\"start\\\":57754,\\\"length\\\":86},{\\\"start\\\":57843,\\\"length\\\""
                        ":156},{\\\"start\\\":58002,\\\"length\\\":64},{\\\"start\\\":58069,\\\"length\\\""
                        ":83},{\\\"start\\\":58155,\\\"length\\\":147},{\\\"start\\\":58305,\\\"length\\\""
                        ":84},{\\\"start\\\":58392,\\\"length\\\":138},{\\\"start\\\":58533,\\\"length\\\""
                        ":67},{\\\"start\\\":58604,\\\"length\\\":180},{\\\"start\\\":58785,\\\"length\\\""
                        ":75},{\\\"start\\\":58861,\\\"length\\\":77},{\\\"start\\\":58939,\\\"length\\\""
                        ":109},{\\\"start\\\":59049,\\\"length\\\":53},{\\\"start\\\":59103,\\\"length\\\""
                        ":137},{\\\"start\\\":59133,\\\"length\\\":105},{\\\"start\\\":59241,\\\"length\\"
                        "\":72},{\\\"start\\\":59314,\\\"length\\\":134},{\\\"start\\\":59344,\\\"length\\"
                        "\":102},{\\\"start\\\":59449,\\\"length\\\":127},{\\\"start\\\":59479,\\\"length"
                        "\\\":95},{\\\"start\\\":59578,\\\"length\\\":443},{\\\"start\\\":60022,\\\"lengt"
                        "h\\\":196},{\\\"start\\\":60219,\\\"length\\\":78},{\\\"start\\\":60298,\\\"leng"
                        "th\\\":180},{\\\"start\\\":60479,\\\"length\\\":175},{\\\"start\\\":60656,\\\"le"
                        "ngth\\\":68},{\\\"start\\\":60726,\\\"length\\\":79},{\\\"start\\\":60806,\\\"le"
                        "ngth\\\":111},{\\\"start\\\":60918,\\\"length\\\":91},{\\\"start\\\":61010,\\\"l"
                        "ength\\\":151},{\\\"start\\\":61162,\\\"length\\\":365},{\\\"start\\\":61528,\\\""
                        "length\\\":108},{\\\"start\\\":61637,\\\"length\\\":626},{\\\"start\\\":62264,\\"
                        "\"length\\\":64},{\\\"start\\\":62330,\\\"length\\\":85},{\\\"start\\\":62416,\\"
                        "\"length\\\":111},{\\\"start\\\":62528,\\\"length\\\":91},{\\\"start\\\":62620,\\"
                        "\"length\\\":151},{\\\"start\\\":62772,\\\"length\\\":365},{\\\"start\\\":63138,"
                        "\\\"length\\\":108},{\\\"start\\\":63247,\\\"length\\\":632},{\\\"start\\\":6388"
                        "0,\\\"length\\\":67},{\\\"start\\\":63949,\\\"length\\\":85},{\\\"start\\\":6403"
                        "5,\\\"length\\\":111},{\\\"start\\\":64147,\\\"length\\\":91},{\\\"start\\\":642"
                        "39,\\\"length\\\":151},{\\\"start\\\":64391,\\\"length\\\":365},{\\\"start\\\":6"
                        "4757,\\\"length\\\":108},{\\\"start\\\":64866,\\\"length\\\":632},{\\\"start\\\""
                        ":65499,\\\"length\\\":67},{\\\"start\\\":65568,\\\"length\\\":82},{\\\"start\\\""
                        ":65651,\\\"length\\\":105},{\\\"start\\\":65757,\\\"length\\\":88},{\\\"start\\\""
                        ":65846,\\\"length\\\":142},{\\\"start\\\":65989,\\\"length\\\":338},{\\\"start\\"
                        "\":66328,\\\"length\\\":99},{\\\"start\\\":66428,\\\"length\\\":578},{\\\"start\\"
                        "\":67007,\\\"length\\\":64},{\\\"start\\\":67073,\\\"length\\\":85},{\\\"start\\"
                        "\":67159,\\\"length\\\":111},{\\\"start\\\":67271,\\\"length\\\":91},{\\\"start\\"
                        "\":67363,\\\"length\\\":151},{\\\"start\\\":67515,\\\"length\\\":365},{\\\"start"
                        "\\\":67881,\\\"length\\\":108},{\\\"start\\\":67990,\\\"length\\\":632},{\\\"sta"
                        "rt\\\":68623,\\\"length\\\":67},{\\\"start\\\":68692,\\\"length\\\":84},{\\\"sta"
                        "rt\\\":68777,\\\"length\\\":109},{\\\"start\\\":68887,\\\"length\\\":90},{\\\"st"
                        "art\\\":68978,\\\"length\\\":148},{\\\"start\\\":69127,\\\"length\\\":356},{\\\""
                        "start\\\":69484,\\\"length\\\":105},{\\\"start\\\":69590,\\\"length\\\":614},{\\"
                        "\"start\\\":70205,\\\"length\\\":66},{\\\"start\\\":70273,\\\"length\\\":74},{\\"
                        "\"start\\\":70348,\\\"length\\\":181},{\\\"start\\\":70530,\\\"length\\\":94},{\\"
                        "\"start\\\":70625,\\\"length\\\":117},{\\\"start\\\":70743,\\\"length\\\":171},{"
                        "\\\"start\\\":70916,\\\"length\\\":120},{\\\"start\\\":71038,\\\"length\\\":115}"
                        ",{\\\"start\\\":71155,\\\"length\\\":114},{\\\"start\\\":71271,\\\"length\\\":47"
                        "},{\\\"start\\\":71320,\\\"length\\\":46},{\\\"start\\\":71368,\\\"length\\\":11"
                        "2},{\\\"start\\\":71482,\\\"length\\\":142},{\\\"start\\\":71625,\\\"length\\\":"
                        "26},{\\\"start\\\":71653,\\\"length\\\":30},{\\\"start\\\":71684,\\\"length\\\":"
                        "34},{\\\"start\\\":71720,\\\"length\\\":40},{\\\"start\\\":71762,\\\"length\\\":"
                        "49},{\\\"start\\\":71813,\\\"length\\\":312},{\\\"start\\\":72127,\\\"length\\\""
                        ":237},{\\\"start\\\":72366,\\\"length\\\":44},{\\\"start\\\":72412,\\\"length\\\""
                        ":40},{\\\"start\\\":72454,\\\"length\\\":478},{\\\"start\\\":72933,\\\"length\\\""
                        ":55},{\\\"start\\\":72989,\\\"length\\\":108},{\\\"start\\\":73098,\\\"length\\\""
                        ":169},{\\\"start\\\":73269,\\\"length\\\":136},{\\\"start\\\":73407,\\\"length\\"
                        "\":187},{\\\"start\\\":73596,\\\"length\\\":128},{\\\"start\\\":73725,\\\"length"
                        "\\\":256},{\\\"start\\\":73983,\\\"length\\\":44},{\\\"start\\\":74028,\\\"lengt"
                        "h\\\":27},{\\\"start\\\":74057,\\\"length\\\":50},{\\\"start\\\":74109,\\\"lengt"
                        "h\\\":49},{\\\"start\\\":74160,\\\"length\\\":143},{\\\"start\\\":74305,\\\"leng"
                        "th\\\":103},{\\\"start\\\":74410,\\\"length\\\":58},{\\\"start\\\":74470,\\\"len"
                        "gth\\\":149},{\\\"start\\\":74620,\\\"length\\\":124},{\\\"start\\\":74746,\\\"l"
                        "ength\\\":168},{\\\"start\\\":74776,\\\"length\\\":64},{\\\"start\\\":74843,\\\""
                        "length\\\":69},{\\\"start\\\":74915,\\\"length\\\":108},{\\\"start\\\":75024,\\\""
                        "length\\\":86},{\\\"start\\\":75111,\\\"length\\\":256},{\\\"start\\\":75369,\\\""
                        "length\\\":143},{\\\"start\\\":75514,\\\"length\\\":37},{\\\"start\\\":75552,\\\""
                        "length\\\":77},{\\\"start\\\":75630,\\\"length\\\":37},{\\\"start\\\":75668,\\\""
                        "length\\\":88},{\\\"start\\\":75757,\\\"length\\\":99},{\\\"start\\\":75858,\\\""
                        "length\\\":98},{\\\"start\\\":75958,\\\"length\\\":51},{\\\"start\\\":76010,\\\""
                        "length\\\":135},{\\\"start\\\":76147,\\\"length\\\":160},{\\\"start\\\":76309,\\"
                        "\"length\\\":42},{\\\"start\\\":76353,\\\"length\\\":89},{\\\"start\\\":76444,\\"
                        "\"length\\\":210},{\\\"start\\\":76656,\\\"length\\\":136},{\\\"start\\\":76794,"
                        "\\\"length\\\":86},{\\\"start\\\":76882,\\\"length\\\":83},{\\\"start\\\":76967,"
                        "\\\"length\\\":139},{\\\"start\\\":77108,\\\"length\\\":148},{\\\"start\\\":7725"
                        "7,\\\"length\\\":93},{\\\"start\\\":77352,\\\"length\\\":33},{\\\"start\\\":7738"
                        "7,\\\"length\\\":100},{\\\"start\\\":77489,\\\"length\\\":90},{\\\"start\\\":775"
                        "81,\\\"length\\\":172},{\\\"start\\\":77754,\\\"length\\\":117},{\\\"start\\\":7"
                        "7872,\\\"length\\\":57},{\\\"start\\\":77930,\\\"length\\\":58},{\\\"start\\\":7"
                        "7989,\\\"length\\\":204},{\\\"start\\\":78195,\\\"length\\\":85},{\\\"start\\\":"
                        "78281,\\\"length\\\":156},{\\\"start\\\":78438,\\\"length\\\":152},{\\\"start\\\""
                        ":78592,\\\"length\\\":98},{\\\"start\\\":78692,\\\"length\\\":230},{\\\"start\\\""
                        ":78924,\\\"length\\\":143},{\\\"start\\\":79069,\\\"length\\\":109},{\\\"start\\"
                        "\":79179,\\\"length\\\":117},{\\\"start\\\":79297,\\\"length\\\":57},{\\\"start\\"
                        "\":79355,\\\"length\\\":66},{\\\"start\\\":79423,\\\"length\\\":314},{\\\"start\\"
                        "\":79739,\\\"length\\\":85},{\\\"start\\\":79825,\\\"length\\\":85},{\\\"start\\"
                        "\":79911,\\\"length\\\":116},{\\\"start\\\":80029,\\\"length\\\":91},{\\\"start\\"
                        "\":80121,\\\"length\\\":193},{\\\"start\\\":80316,\\\"length\\\":102},{\\\"start"
                        "\\\":80420,\\\"length\\\":221},{\\\"start\\\":80642,\\\"length\\\":192},{\\\"sta"
                        "rt\\\":80835,\\\"length\\\":193},{\\\"start\\\":81029,\\\"length\\\":102},{\\\"s"
                        "tart\\\":81133,\\\"length\\\":414},{\\\"start\\\":81549,\\\"length\\\":53},{\\\""
                        "start\\\":81604,\\\"length\\\":389},{\\\"start\\\":81995,\\\"length\\\":51},{\\\""
                        "start\\\":82048,\\\"length\\\":81},{\\\"start\\\":82130,\\\"length\\\":49},{\\\""
                        "start\\\":82180,\\\"length\\\":55},{\\\"start\\\":82236,\\\"length\\\":110},{\\\""
                        "start\\\":82347,\\\"length\\\":104},{\\\"start\\\":82452,\\\"length\\\":115},{\\"
                        "\"start\\\":82569,\\\"length\\\":67},{\\\"start\\\":82637,\\\"length\\\":61},{\\"
                        "\"start\\\":82699,\\\"length\\\":29},{\\\"start\\\":82729,\\\"length\\\":53},{\\"
                        "\"start\\\":82783,\\\"length\\\":79},{\\\"start\\\":82863,\\\"length\\\":98},{\\"
                        "\"start\\\":82962,\\\"length\\\":44},{\\\"start\\\":83007,\\\"length\\\":161},{\\"
                        "\"start\\\":83169,\\\"length\\\":116},{\\\"start\\\":83286,\\\"length\\\":102},{"
                        "\\\"start\\\":83389,\\\"length\\\":42},{\\\"start\\\":83433,\\\"length\\\":46},{"
                        "\\\"start\\\":83480,\\\"length\\\":56},{\\\"start\\\":83537,\\\"length\\\":130},"
                        "{\\\"start\\\":83668,\\\"length\\\":66},{\\\"start\\\":83735,\\\"length\\\":220}"
                        ",{\\\"start\\\":83957,\\\"length\\\":34},{\\\"start\\\":83992,\\\"length\\\":45}"
                        ",{\\\"start\\\":84038,\\\"length\\\":44},{\\\"start\\\":84083,\\\"length\\\":142"
                        "},{\\\"start\\\":84227,\\\"length\\\":36},{\\\"start\\\":84264,\\\"length\\\":63"
                        "},{\\\"start\\\":84329,\\\"length\\\":58},{\\\"start\\\":84388,\\\"length\\\":68"
                        "},{\\\"start\\\":84457,\\\"length\\\":105},{\\\"start\\\":84563,\\\"length\\\":7"
                        "2},{\\\"start\\\":84636,\\\"length\\\":215},{\\\"start\\\":84666,\\\"length\\\":"
                        "95},{\\\"start\\\":84764,\\\"length\\\":85},{\\\"start\\\":84853,\\\"length\\\":"
                        "68},{\\\"start\\\":84922,\\\"length\\\":107},{\\\"start\\\":85030,\\\"length\\\""
                        ":274},{\\\"start\\\":85305,\\\"length\\\":459},{\\\"start\\\":85335,\\\"length\\"
                        "\":135},{\\\"start\\\":85473,\\\"length\\\":289},{\\\"start\\\":85766,\\\"length"
                        "\\\":45},{\\\"start\\\":85812,\\\"length\\\":44},{\\\"start\\\":85858,\\\"length"
                        "\\\":107},{\\\"start\\\":85967,\\\"length\\\":109},{\\\"start\\\":86077,\\\"leng"
                        "th\\\":67},{\\\"start\\\":86145,\\\"length\\\":32},{\\\"start\\\":86178,\\\"leng"
                        "th\\\":69},{\\\"start\\\":86208,\\\"length\\\":37},{\\\"start\\\":86249,\\\"leng"
                        "th\\\":81},{\\\"start\\\":86331,\\\"length\\\":39},{\\\"start\\\":86371,\\\"leng"
                        "th\\\":69},{\\\"start\\\":86401,\\\"length\\\":37},{\\\"start\\\":86442,\\\"leng"
                        "th\\\":216},{\\\"start\\\":86659,\\\"length\\\":85},{\\\"start\\\":86745,\\\"len"
                        "gth\\\":41},{\\\"start\\\":86787,\\\"length\\\":43},{\\\"start\\\":86831,\\\"len"
                        "gth\\\":478},{\\\"start\\\":86861,\\\"length\\\":80},{\\\"start\\\":86944,\\\"le"
                        "ngth\\\":148},{\\\"start\\\":87095,\\\"length\\\":50},{\\\"start\\\":87148,\\\"l"
                        "ength\\\":159},{\\\"start\\\":87311,\\\"length\\\":98},{\\\"start\\\":87410,\\\""
                        "length\\\":172},{\\\"start\\\":87476,\\\"length\\\":104},{\\\"start\\\":87584,\\"
                        "\"length\\\":179},{\\\"start\\\":87764,\\\"length\\\":215},{\\\"start\\\":87794,"
                        "\\\"length\\\":183},{\\\"start\\\":87981,\\\"length\\\":64},{\\\"start\\\":88046"
                        ",\\\"length\\\":78},{\\\"start\\\":88076,\\\"length\\\":46},{\\\"start\\\":88126"
                        ",\\\"length\\\":102},{\\\"start\\\":88229,\\\"length\\\":101},{\\\"start\\\":882"
                        "59,\\\"length\\\":69},{\\\"start\\\":88332,\\\"length\\\":56},{\\\"start\\\":883"
                        "90,\\\"length\\\":82},{\\\"start\\\":88474,\\\"length\\\":112},{\\\"start\\\":88"
                        "587,\\\"length\\\":69},{\\\"start\\\":88657,\\\"length\\\":41},{\\\"start\\\":88"
                        "699,\\\"length\\\":138},{\\\"start\\\":88729,\\\"length\\\":106},{\\\"start\\\":"
                        "88839,\\\"length\\\":260},{\\\"start\\\":89100,\\\"length\\\":38},{\\\"start\\\""
                        ":89139,\\\"length\\\":98},{\\\"start\\\":89238,\\\"length\\\":59},{\\\"start\\\""
                        ":89298,\\\"length\\\":71},{\\\"start\\\":89328,\\\"length\\\":39},{\\\"start\\\""
                        ":89371,\\\"length\\\":39},{\\\"start\\\":89411,\\\"length\\\":90},{\\\"start\\\""
                        ":89502,\\\"length\\\":558},{\\\"start\\\":89532,\\\"length\\\":185},{\\\"start\\"
                        "\":89720,\\\"length\\\":132},{\\\"start\\\":89855,\\\"length\\\":70},{\\\"start\\"
                        "\":89928,\\\"length\\\":130},{\\\"start\\\":90061,\\\"length\\\":205},{\\\"start"
                        "\\\":90091,\\\"length\\\":49},{\\\"start\\\":90143,\\\"length\\\":39},{\\\"start"
                        "\\\":90185,\\\"length\\\":79},{\\\"start\\\":90268,\\\"length\\\":389},{\\\"star"
                        "t\\\":90658,\\\"length\\\":1164},{\\\"start\\\":90688,\\\"length\\\":107},{\\\"s"
                        "tart\\\":90798,\\\"length\\\":104},{\\\"start\\\":90905,\\\"length\\\":66},{\\\""
                        "start\\\":90974,\\\"length\\\":86},{\\\"start\\\":91063,\\\"length\\\":156},{\\\""
                        "start\\\":91222,\\\"length\\\":64},{\\\"start\\\":91289,\\\"length\\\":83},{\\\""
                        "start\\\":91375,\\\"length\\\":147},{\\\"start\\\":91525,\\\"length\\\":84},{\\\""
                        "start\\\":91612,\\\"length\\\":138},{\\\"start\\\":91753,\\\"length\\\":67},{\\\""
                        "start\\\":91823,\\\"length\\\":152},{\\\"start\\\":91853,\\\"length\\\":54},{\\\""
                        "start\\\":91910,\\\"length\\\":63},{\\\"start\\\":91976,\\\"length\\\":218},{\\\""
                        "start\\\":92006,\\\"length\\\":186},{\\\"start\\\":92196,\\\"length\\\":113},{\\"
                        "\"start\\\":92311,\\\"length\\\":206},{\\\"start\\\":92519,\\\"length\\\":60},{\\"
                        "\"start\\\":92580,\\\"length\\\":102},{\\\"start\\\":92683,\\\"length\\\":102},{"
                        "\\\"start\\\":92787,\\\"length\\\":63},{\\\"start\\\":92851,\\\"length\\\":114},"
                        "{\\\"start\\\":92881,\\\"length\\\":82},{\\\"start\\\":92967,\\\"length\\\":214}"
                        ",{\\\"start\\\":92997,\\\"length\\\":46},{\\\"start\\\":93047,\\\"length\\\":73}"
                        ",{\\\"start\\\":93123,\\\"length\\\":56},{\\\"start\\\":93182,\\\"length\\\":73}"
                        ",{\\\"start\\\":93256,\\\"length\\\":48},{\\\"start\\\":93305,\\\"length\\\":127"
                        "},{\\\"start\\\":93433,\\\"length\\\":47},{\\\"start\\\":93481,\\\"length\\\":55"
                        "},{\\\"start\\\":93537,\\\"length\\\":138},{\\\"start\\\":93676,\\\"length\\\":1"
                        "87},{\\\"start\\\":93864,\\\"length\\\":197},{\\\"start\\\":94062,\\\"length\\\""
                        ":56},{\\\"start\\\":94119,\\\"length\\\":104},{\\\"start\\\":94224,\\\"length\\\""
                        ":70},{\\\"start\\\":94295,\\\"length\\\":91},{\\\"start\\\":94387,\\\"length\\\""
                        ":181},{\\\"start\\\":94569,\\\"length\\\":829},{\\\"start\\\":94599,\\\"length\\"
                        "\":80},{\\\"start\\\":94682,\\\"length\\\":186},{\\\"start\\\":94871,\\\"length\\"
                        "\":256},{\\\"start\\\":95130,\\\"length\\\":266},{\\\"start\\\":95399,\\\"length"
                        "\\\":47},{\\\"start\\\":95447,\\\"length\\\":53},{\\\"start\\\":95501,\\\"length"
                        "\\\":44},{\\\"start\\\":95546,\\\"length\\\":83},{\\\"start\\\":95630,\\\"length"
                        "\\\":207},{\\\"start\\\":95839,\\\"length\\\":70},{\\\"start\\\":95910,\\\"lengt"
                        "h\\\":51},{\\\"start\\\":95962,\\\"length\\\":124},{\\\"start\\\":96087,\\\"leng"
                        "th\\\":50},{\\\"start\\\":96138,\\\"length\\\":58},{\\\"start\\\":96197,\\\"leng"
                        "th\\\":138},{\\\"start\\\":96336,\\\"length\\\":187},{\\\"start\\\":96524,\\\"le"
                        "ngth\\\":197},{\\\"start\\\":96722,\\\"length\\\":56},{\\\"start\\\":96779,\\\"l"
                        "ength\\\":104},{\\\"start\\\":96884,\\\"length\\\":70},{\\\"start\\\":96955,\\\""
                        "length\\\":91},{\\\"start\\\":97047,\\\"length\\\":181},{\\\"start\\\":97229,\\\""
                        "length\\\":1032},{\\\"start\\\":97259,\\\"length\\\":100},{\\\"start\\\":97362,\\"
                        "\"length\\\":94},{\\\"start\\\":97459,\\\"length\\\":83},{\\\"start\\\":97545,\\"
                        "\"length\\\":186},{\\\"start\\\":97734,\\\"length\\\":256},{\\\"start\\\":97993,"
                        "\\\"length\\\":266},{\\\"start\\\":98262,\\\"length\\\":50},{\\\"start\\\":98313"
                        ",\\\"length\\\":53},{\\\"start\\\":98367,\\\"length\\\":47},{\\\"start\\\":98415"
                        ",\\\"length\\\":83},{\\\"start\\\":98499,\\\"length\\\":207},{\\\"start\\\":9870"
                        "8,\\\"length\\\":130},{\\\"start\\\":98839,\\\"length\\\":45},{\\\"start\\\":988"
                        "85,\\\"length\\\":82},{\\\"start\\\":98968,\\\"length\\\":43},{\\\"start\\\":990"
                        "13,\\\"length\\\":99},{\\\"start\\\":99113,\\\"length\\\":39},{\\\"start\\\":991"
                        "53,\\\"length\\\":248},{\\\"start\\\":99402,\\\"length\\\":156},{\\\"start\\\":9"
                        "9559,\\\"length\\\":138},{\\\"start\\\":99698,\\\"length\\\":203},{\\\"start\\\""
                        ":99902,\\\"length\\\":299},{\\\"start\\\":100202,\\\"length\\\":298},{\\\"start\\"
                        "\":100502,\\\"length\\\":120},{\\\"start\\\":100623,\\\"length\\\":144},{\\\"sta"
                        "rt\\\":100768,\\\"length\\\":144},{\\\"start\\\":100914,\\\"length\\\":115},{\\\""
                        "start\\\":101030,\\\"length\\\":144},{\\\"start\\\":101175,\\\"length\\\":144},{"
                        "\\\"start\\\":101321,\\\"length\\\":89},{\\\"start\\\":101411,\\\"length\\\":65}"
                        ",{\\\"start\\\":101477,\\\"length\\\":31},{\\\"start\\\":101509,\\\"length\\\":3"
                        "2},{\\\"start\\\":101542,\\\"length\\\":156},{\\\"start\\\":101699,\\\"length\\\""
                        ":98},{\\\"start\\\":101798,\\\"length\\\":57},{\\\"start\\\":101856,\\\"length\\"
                        "\":64},{\\\"start\\\":101921,\\\"length\\\":172},{\\\"start\\\":102095,\\\"lengt"
                        "h\\\":225},{\\\"start\\\":102321,\\\"length\\\":33},{\\\"start\\\":102355,\\\"le"
                        "ngth\\\":50},{\\\"start\\\":102407,\\\"length\\\":91},{\\\"start\\\":102500,\\\""
                        "length\\\":47},{\\\"start\\\":102548,\\\"length\\\":87},{\\\"start\\\":102637,\\"
                        "\"length\\\":47},{\\\"start\\\":102685,\\\"length\\\":87},{\\\"start\\\":102774,"
                        "\\\"length\\\":47},{\\\"start\\\":102822,\\\"length\\\":87},{\\\"start\\\":10291"
                        "1,\\\"length\\\":44},{\\\"start\\\":102956,\\\"length\\\":81},{\\\"start\\\":103"
                        "039,\\\"length\\\":47},{\\\"start\\\":103087,\\\"length\\\":87},{\\\"start\\\":1"
                        "03176,\\\"length\\\":46},{\\\"start\\\":103223,\\\"length\\\":85},{\\\"start\\\""
                        ":103310,\\\"length\\\":270},{\\\"start\\\":103581,\\\"length\\\":33},{\\\"start\\"
                        "\":103615,\\\"length\\\":50},{\\\"start\\\":103666,\\\"length\\\":106},{\\\"star"
                        "t\\\":103773,\\\"length\\\":115},{\\\"start\\\":103889,\\\"length\\\":45},{\\\"s"
                        "tart\\\":103935,\\\"length\\\":59},{\\\"start\\\":103995,\\\"length\\\":52},{\\\""
                        "start\\\":104049,\\\"length\\\":91},{\\\"start\\\":104142,\\\"length\\\":129},{\\"
                        "\"start\\\":104272,\\\"length\\\":51},{\\\"start\\\":104324,\\\"length\\\":78},{"
                        "\\\"start\\\":104403,\\\"length\\\":48},{\\\"start\\\":104452,\\\"length\\\":76}"
                        ",{\\\"start\\\":104529,\\\"length\\\":44},{\\\"start\\\":104574,\\\"length\\\":2"
                        "77},{\\\"start\\\":104615,\\\"length\\\":65},{\\\"start\\\":104683,\\\"length\\\""
                        ":105},{\\\"start\\\":104791,\\\"length\\\":58},{\\\"start\\\":104853,\\\"length\\"
                        "\":297},{\\\"start\\\":105151,\\\"length\\\":136},{\\\"start\\\":105288,\\\"leng"
                        "th\\\":57},{\\\"start\\\":105347,\\\"length\\\":85},{\\\"start\\\":105434,\\\"le"
                        "ngth\\\":105},{\\\"start\\\":105540,\\\"length\\\":48},{\\\"start\\\":105589,\\\""
                        "length\\\":43},{\\\"start\\\":105633,\\\"length\\\":47},{\\\"start\\\":105681,\\"
                        "\"length\\\":37},{\\\"start\\\":105720,\\\"length\\\":65},{\\\"start\\\":105786,"
                        "\\\"length\\\":125},{\\\"start\\\":105913,\\\"length\\\":90},{\\\"start\\\":1060"
                        "04,\\\"length\\\":50},{\\\"start\\\":106055,\\\"length\\\":48},{\\\"start\\\":10"
                        "6105,\\\"length\\\":87},{\\\"start\\\":106193,\\\"length\\\":47},{\\\"start\\\":"
                        "106241,\\\"length\\\":45},{\\\"start\\\":106288,\\\"length\\\":90},{\\\"start\\\""
                        ":106379,\\\"length\\\":50},{\\\"start\\\":106430,\\\"length\\\":48},{\\\"start\\"
                        "\":106480,\\\"length\\\":89},{\\\"start\\\":106570,\\\"length\\\":49},{\\\"start"
                        "\\\":106620,\\\"length\\\":47},{\\\"start\\\":106923,\\\"length\\\":231},{\\\"st"
                        "art\\\":107156,\\\"length\\\":379},{\\\"start\\\":107537,\\\"length\\\":702},{\\"
                        "\"start\\\":108241,\\\"length\\\":229},{\\\"start\\\":108472,\\\"length\\\":54},"
                        "{\\\"start\\\":108527,\\\"length\\\":657},{\\\"start\\\":109186,\\\"length\\\":5"
                        "1},{\\\"start\\\":109238,\\\"length\\\":654},{\\\"start\\\":109894,\\\"length\\\""
                        ":54},{\\\"start\\\":109949,\\\"length\\\":657},{\\\"start\\\":110608,\\\"length\\"
                        "\":53},{\\\"start\\\":110662,\\\"length\\\":656},{\\\"start\\\":111320,\\\"lengt"
                        "h\\\":30},{\\\"start\\\":111351,\\\"length\\\":39},{\\\"start\\\":111392,\\\"len"
                        "gth\\\":54},{\\\"start\\\":111448,\\\"length\\\":33},{\\\"start\\\":111483,\\\"l"
                        "ength\\\":35},{\\\"start\\\":111519,\\\"length\\\":50},{\\\"start\\\":111571,\\\""
                        "length\\\":60},{\\\"start\\\":111633,\\\"length\\\":59},{\\\"start\\\":111694,\\"
                        "\"length\\\":88},{\\\"start\\\":111784,\\\"length\\\":43},{\\\"start\\\":111829,"
                        "\\\"length\\\":43},{\\\"start\\\":111874,\\\"length\\\":57},{\\\"start\\\":11193"
                        "3,\\\"length\\\":54},{\\\"start\\\":111989,\\\"length\\\":57},{\\\"start\\\":112"
                        "048,\\\"length\\\":157},{\\\"start\\\":112206,\\\"length\\\":95},{\\\"start\\\":"
                        "112302,\\\"length\\\":120},{\\\"start\\\":112424,\\\"length\\\":60},{\\\"start\\"
                        "\":112485,\\\"length\\\":110},{\\\"start\\\":112596,\\\"length\\\":181},{\\\"sta"
                        "rt\\\":112779,\\\"length\\\":61},{\\\"start\\\":112842,\\\"length\\\":165},{\\\""
                        "start\\\":113008,\\\"length\\\":188},{\\\"start\\\":113197,\\\"length\\\":179},{"
                        "\\\"start\\\":113377,\\\"length\\\":172},{\\\"start\\\":113550,\\\"length\\\":55"
                        "7},{\\\"start\\\":114108,\\\"length\\\":173},{\\\"start\\\":114283,\\\"length\\\""
                        ":75},{\\\"start\\\":114360,\\\"length\\\":79},{\\\"start\\\":114440,\\\"length\\"
                        "\":129},{\\\"start\\\":114570,\\\"length\\\":191},{\\\"start\\\":114762,\\\"leng"
                        "th\\\":314},{\\\"start\\\":115078,\\\"length\\\":72},{\\\"start\\\":115152,\\\"l"
                        "ength\\\":73},{\\\"start\\\":115226,\\\"length\\\":123},{\\\"start\\\":115350,\\"
                        "\"length\\\":179},{\\\"start\\\":115530,\\\"length\\\":296},{\\\"start\\\":11582"
                        "8,\\\"length\\\":75},{\\\"start\\\":115905,\\\"length\\\":79},{\\\"start\\\":115"
                        "985,\\\"length\\\":129},{\\\"start\\\":116115,\\\"length\\\":191},{\\\"start\\\""
                        ":116307,\\\"length\\\":314},{\\\"start\\\":116623,\\\"length\\\":74},{\\\"start\\"
                        "\":116699,\\\"length\\\":77},{\\\"start\\\":116777,\\\"length\\\":127},{\\\"star"
                        "t\\\":116905,\\\"length\\\":187},{\\\"start\\\":117093,\\\"length\\\":308},{\\\""
                        "start\\\":117403,\\\"length\\\":67},{\\\"start\\\":117472,\\\"length\\\":65},{\\"
                        "\"start\\\":117539,\\\"length\\\":212},{\\\"start\\\":117753,\\\"length\\\":32},"
                        "{\\\"start\\\":117786,\\\"length\\\":75},{\\\"start\\\":117862,\\\"length\\\":36"
                        "},{\\\"start\\\":117900,\\\"length\\\":143},{\\\"start\\\":118044,\\\"length\\\""
                        ":65},{\\\"start\\\":118111,\\\"length\\\":90},{\\\"start\\\":118202,\\\"length\\"
                        "\":136},{\\\"start\\\":118340,\\\"length\\\":167},{\\\"start\\\":118509,\\\"leng"
                        "th\\\":84},{\\\"start\\\":118594,\\\"length\\\":141},{\\\"start\\\":118736,\\\"l"
                        "ength\\\":226},{\\\"start\\\":118963,\\\"length\\\":231},{\\\"start\\\":119195,\\"
                        "\"length\\\":147},{\\\"start\\\":119344,\\\"length\\\":84},{\\\"start\\\":119430"
                        ",\\\"length\\\":54},{\\\"start\\\":119486,\\\"length\\\":111},{\\\"start\\\":119"
                        "598,\\\"length\\\":160},{\\\"start\\\":119759,\\\"length\\\":155},{\\\"start\\\""
                        ":119915,\\\"length\\\":393},{\\\"start\\\":120309,\\\"length\\\":809},{\\\"start"
                        "\\\":121119,\\\"length\\\":802},{\\\"start\\\":121922,\\\"length\\\":158},{\\\"s"
                        "tart\\\":122081,\\\"length\\\":385},{\\\"start\\\":122467,\\\"length\\\":784},{\\"
                        "\"start\\\":123252,\\\"length\\\":777},{\\\"start\\\":124030,\\\"length\\\":178}"
                        ",{\\\"start\\\":124209,\\\"length\\\":133},{\\\"start\\\":124343,\\\"length\\\":"
                        "87},{\\\"start\\\":124431,\\\"length\\\":812},{\\\"start\\\":125244,\\\"length\\"
                        "\":801},{\\\"start\\\":126046,\\\"length\\\":550},{\\\"start\\\":126597,\\\"leng"
                        "th\\\":542},{\\\"start\\\":127140,\\\"length\\\":63},{\\\"start\\\":127205,\\\"l"
                        "ength\\\":39},{\\\"start\\\":127245,\\\"length\\\":65},{\\\"start\\\":127311,\\\""
                        "length\\\":51},{\\\"start\\\":127363,\\\"length\\\":51},{\\\"start\\\":127415,\\"
                        "\"length\\\":154},{\\\"start\\\":127570,\\\"length\\\":47},{\\\"start\\\":127618"
                        ",\\\"length\\\":93},{\\\"start\\\":127713,\\\"length\\\":40},{\\\"start\\\":1277"
                        "54,\\\"length\\\":104},{\\\"start\\\":127859,\\\"length\\\":93},{\\\"start\\\":1"
                        "27953,\\\"length\\\":89},{\\\"start\\\":128043,\\\"length\\\":95},{\\\"start\\\""
                        ":128140,\\\"length\\\":43},{\\\"start\\\":128184,\\\"length\\\":104},{\\\"start\\"
                        "\":128289,\\\"length\\\":96},{\\\"start\\\":128386,\\\"length\\\":86},{\\\"start"
                        "\\\":128473,\\\"length\\\":98},{\\\"start\\\":128573,\\\"length\\\":43},{\\\"sta"
                        "rt\\\":128617,\\\"length\\\":107},{\\\"start\\\":128725,\\\"length\\\":96},{\\\""
                        "start\\\":128822,\\\"length\\\":89},{\\\"start\\\":128912,\\\"length\\\":98},{\\"
                        "\"start\\\":129012,\\\"length\\\":40},{\\\"start\\\":129053,\\\"length\\\":104},"
                        "{\\\"start\\\":129158,\\\"length\\\":93},{\\\"start\\\":129252,\\\"length\\\":86"
                        "},{\\\"start\\\":129339,\\\"length\\\":95},{\\\"start\\\":129436,\\\"length\\\":"
                        "43},{\\\"start\\\":129480,\\\"length\\\":107},{\\\"start\\\":129588,\\\"length\\"
                        "\":96},{\\\"start\\\":129685,\\\"length\\\":89},{\\\"start\\\":129775,\\\"length"
                        "\\\":98},{\\\"start\\\":129875,\\\"length\\\":42},{\\\"start\\\":129918,\\\"leng"
                        "th\\\":106},{\\\"start\\\":130025,\\\"length\\\":95},{\\\"start\\\":130121,\\\"l"
                        "ength\\\":88},{\\\"start\\\":130210,\\\"length\\\":97},{\\\"start\\\":130309,\\\""
                        "length\\\":108},{\\\"start\\\":130418,\\\"length\\\":246},{\\\"start\\\":130666,"
                        "\\\"length\\\":53},{\\\"start\\\":130721,\\\"length\\\":49},{\\\"start\\\":13077"
                        "2,\\\"length\\\":259},{\\\"start\\\":131032,\\\"length\\\":79},{\\\"start\\\":13"
                        "1113,\\\"length\\\":51},{\\\"start\\\":131166,\\\"length\\\":50},{\\\"start\\\":"
                        "131218,\\\"length\\\":173},{\\\"start\\\":131392,\\\"length\\\":134},{\\\"start\\"
                        "\":131528,\\\"length\\\":117},{\\\"start\\\":131647,\\\"length\\\":35},{\\\"star"
                        "t\\\":131684,\\\"length\\\":180},{\\\"start\\\":131865,\\\"length\\\":364},{\\\""
                        "start\\\":132230,\\\"length\\\":162},{\\\"start\\\":132394,\\\"length\\\":64},{\\"
                        "\"start\\\":132460,\\\"length\\\":70},{\\\"start\\\":132532,\\\"length\\\":296},"
                        "{\\\"start\\\":132830,\\\"length\\\":127},{\\\"start\\\":132958,\\\"length\\\":6"
                        "6},{\\\"start\\\":133025,\\\"length\\\":67},{\\\"start\\\":133094,\\\"length\\\""
                        ":96},{\\\"start\\\":133192,\\\"length\\\":44},{\\\"start\\\":133238,\\\"length\\"
                        "\":53},{\\\"start\\\":133293,\\\"length\\\":54},{\\\"start\\\":133349,\\\"length"
                        "\\\":88},{\\\"start\\\":133438,\\\"length\\\":79},{\\\"start\\\":133518,\\\"leng"
                        "th\\\":38},{\\\"start\\\":133557,\\\"length\\\":69},{\\\"start\\\":133627,\\\"le"
                        "ngth\\\":61},{\\\"start\\\":133689,\\\"length\\\":59},{\\\"start\\\":133750,\\\""
                        "length\\\":117},{\\\"start\\\":133869,\\\"length\\\":255},{\\\"start\\\":133899,"
                        "\\\"length\\\":60},{\\\"start\\\":133963,\\\"length\\\":122},{\\\"start\\\":1340"
                        "89,\\\"length\\\":33},{\\\"start\\\":134125,\\\"length\\\":65},{\\\"start\\\":13"
                        "4155,\\\"length\\\":33},{\\\"start\\\":134191,\\\"length\\\":509},{\\\"start\\\""
                        ":134701,\\\"length\\\":60},{\\\"start\\\":134762,\\\"length\\\":54},{\\\"start\\"
                        "\":134817,\\\"length\\\":56},{\\\"start\\\":134874,\\\"length\\\":56},{\\\"start"
                        "\\\":134931,\\\"length\\\":56},{\\\"start\\\":134989,\\\"length\\\":143},{\\\"st"
                        "art\\\":135134,\\\"length\\\":117},{\\\"start\\\":135253,\\\"length\\\":131},{\\"
                        "\"start\\\":135385,\\\"length\\\":139},{\\\"start\\\":135525,\\\"length\\\":139}"
                        ",{\\\"start\\\":135665,\\\"length\\\":135},{\\\"start\\\":135801,\\\"length\\\":"
                        "134},{\\\"start\\\":135936,\\\"length\\\":134},{\\\"start\\\":136071,\\\"length\\"
                        "\":139},{\\\"start\\\":136211,\\\"length\\\":139},{\\\"start\\\":136352,\\\"leng"
                        "th\\\":767},{\\\"start\\\":137120,\\\"length\\\":37},{\\\"start\\\":137158,\\\"l"
                        "ength\\\":39},{\\\"start\\\":137198,\\\"length\\\":39},{\\\"start\\\":137238,\\\""
                        "length\\\":39},{\\\"start\\\":137279,\\\"length\\\":166},{\\\"start\\\":137447,\\"
                        "\"length\\\":41},{\\\"start\\\":137490,\\\"length\\\":163},{\\\"start\\\":137655"
                        ",\\\"length\\\":43},{\\\"start\\\":137700,\\\"length\\\":64},{\\\"start\\\":1377"
                        "66,\\\"length\\\":173},{\\\"start\\\":137940,\\\"length\\\":136},{\\\"start\\\":"
                        "138077,\\\"length\\\":173},{\\\"start\\\":138251,\\\"length\\\":131},{\\\"start\\"
                        "\":138383,\\\"length\\\":176},{\\\"start\\\":138560,\\\"length\\\":136},{\\\"sta"
                        "rt\\\":138697,\\\"length\\\":172},{\\\"start\\\":138870,\\\"length\\\":131},{\\\""
                        "start\\\":139003,\\\"length\\\":35},{\\\"start\\\":139040,\\\"length\\\":76},{\\"
                        "\"start\\\":139117,\\\"length\\\":188},{\\\"start\\\":139306,\\\"length\\\":139}"
                        ",null,{\\\"start\\\":139504,\\\"length\\\":437},{\\\"start\\\":139944,\\\"length"
                        "\\\":173},{\\\"start\\\":140120,\\\"length\\\":174},{\\\"start\\\":140297,\\\"le"
                        "ngth\\\":202},{\\\"start\\\":140502,\\\"length\\\":97},{\\\"start\\\":140600,\\\""
                        "length\\\":40},{\\\"start\\\":140641,\\\"length\\\":99},{\\\"start\\\":140741,\\"
                        "\"length\\\":41},{\\\"start\\\":140783,\\\"length\\\":42},{\\\"start\\\":140826,"
                        "\\\"length\\\":74},{\\\"start\\\":140901,\\\"length\\\":49},{\\\"start\\\":14095"
                        "1,\\\"length\\\":49},{\\\"start\\\":141002,\\\"length\\\":237},{\\\"start\\\":14"
                        "1240,\\\"length\\\":476},{\\\"start\\\":141717,\\\"length\\\":503},{\\\"start\\\""
                        ":142221,\\\"length\\\":151},{\\\"start\\\":142373,\\\"length\\\":243},{\\\"start"
                        "\\\":142617,\\\"length\\\":110},{\\\"start\\\":142728,\\\"length\\\":113},{\\\"s"
                        "tart\\\":142842,\\\"length\\\":133},{\\\"start\\\":142976,\\\"length\\\":59},{\\"
                        "\"start\\\":143036,\\\"length\\\":59},{\\\"start\\\":143097,\\\"length\\\":186},"
                        "{\\\"start\\\":143284,\\\"length\\\":251},{\\\"start\\\":143536,\\\"length\\\":1"
                        "02},{\\\"start\\\":143640,\\\"length\\\":228},{\\\"start\\\":143869,\\\"length\\"
                        "\":47},{\\\"start\\\":143918,\\\"length\\\":625},{\\\"start\\\":143959,\\\"lengt"
                        "h\\\":236},{\\\"start\\\":144198,\\\"length\\\":103},{\\\"start\\\":144304,\\\"l"
                        "ength\\\":105},{\\\"start\\\":144413,\\\"length\\\":80},{\\\"start\\\":144497,\\"
                        "\"length\\\":44},{\\\"start\\\":144544,\\\"length\\\":71},{\\\"start\\\":144616,"
                        "\\\"length\\\":34},{\\\"start\\\":144652,\\\"length\\\":78},{\\\"start\\\":14473"
                        "2,\\\"length\\\":42},{\\\"start\\\":144776,\\\"length\\\":40},{\\\"start\\\":144"
                        "818,\\\"length\\\":37},{\\\"start\\\":144857,\\\"length\\\":38},{\\\"start\\\":1"
                        "44897,\\\"length\\\":36},{\\\"start\\\":144935,\\\"length\\\":118},{\\\"start\\\""
                        ":145055,\\\"length\\\":39},{\\\"start\\\":145096,\\\"length\\\":29},{\\\"start\\"
                        "\":145168,\\\"length\\\":43},{\\\"start\\\":145213,\\\"length\\\":43},{\\\"start"
                        "\\\":145258,\\\"length\\\":43},{\\\"start\\\":145303,\\\"length\\\":43},{\\\"sta"
                        "rt\\\":145348,\\\"length\\\":290},{\\\"start\\\":145640,\\\"length\\\":271},{\\\""
                        "start\\\":145670,\\\"length\\\":48},{\\\"start\\\":145722,\\\"length\\\":53},{\\"
                        "\"start\\\":145779,\\\"length\\\":54},{\\\"start\\\":145837,\\\"length\\\":72},{"
                        "\\\"start\\\":145912,\\\"length\\\":86},{\\\"start\\\":145942,\\\"length\\\":54}"
                        ",{\\\"start\\\":146000,\\\"length\\\":88},{\\\"start\\\":146030,\\\"length\\\":5"
                        "6},{\\\"start\\\":146090,\\\"length\\\":100},{\\\"start\\\":146120,\\\"length\\\""
                        ":68},{\\\"start\\\":146192,\\\"length\\\":294},{\\\"start\\\":146245,\\\"length\\"
                        "\":48},{\\\"start\\\":146297,\\\"length\\\":53},{\\\"start\\\":146354,\\\"length"
                        "\\\":54},{\\\"start\\\":146412,\\\"length\\\":72},{\\\"start\\\":146487,\\\"leng"
                        "th\\\":109},{\\\"start\\\":146540,\\\"length\\\":54},{\\\"start\\\":146598,\\\"l"
                        "ength\\\":111},{\\\"start\\\":146651,\\\"length\\\":56},{\\\"start\\\":146711,\\"
                        "\"length\\\":123},{\\\"start\\\":146764,\\\"length\\\":68},{\\\"start\\\":146836"
                        ",\\\"length\\\":295},{\\\"start\\\":146890,\\\"length\\\":48},{\\\"start\\\":146"
                        "942,\\\"length\\\":53},{\\\"start\\\":146999,\\\"length\\\":54},{\\\"start\\\":1"
                        "47057,\\\"length\\\":72},{\\\"start\\\":147132,\\\"length\\\":110},{\\\"start\\\""
                        ":147186,\\\"length\\\":54},{\\\"start\\\":147244,\\\"length\\\":112},{\\\"start\\"
                        "\":147298,\\\"length\\\":56},{\\\"start\\\":147358,\\\"length\\\":124},{\\\"star"
                        "t\\\":147412,\\\"length\\\":68},{\\\"start\\\":147484,\\\"length\\\":272},{\\\"s"
                        "tart\\\":147515,\\\"length\\\":48},{\\\"start\\\":147567,\\\"length\\\":53},{\\\""
                        "start\\\":147624,\\\"length\\\":54},{\\\"start\\\":147682,\\\"length\\\":72},{\\"
                        "\"start\\\":147757,\\\"length\\\":87},{\\\"start\\\":147788,\\\"length\\\":54},{"
                        "\\\"start\\\":147846,\\\"length\\\":89},{\\\"start\\\":147877,\\\"length\\\":56}"
                        ",{\\\"start\\\":147937,\\\"length\\\":101},{\\\"start\\\":147968,\\\"length\\\":"
                        "68},{\\\"start\\\":148040,\\\"length\\\":78},{\\\"start\\\":148070,\\\"length\\\""
                        ":46},{\\\"start\\\":148119,\\\"length\\\":101},{\\\"start\\\":148172,\\\"length\\"
                        "\":46},{\\\"start\\\":148221,\\\"length\\\":102},{\\\"start\\\":148275,\\\"lengt"
                        "h\\\":46},{\\\"start\\\":148324,\\\"length\\\":79},{\\\"start\\\":148355,\\\"len"
                        "gth\\\":46},{\\\"start\\\":148404,\\\"length\\\":46},{\\\"start\\\":148452,\\\"l"
                        "ength\\\":273},{\\\"start\\\":148469,\\\"length\\\":51},{\\\"start\\\":148524,\\"
                        "\"length\\\":56},{\\\"start\\\":148584,\\\"length\\\":57},{\\\"start\\\":148645,"
                        "\\\"length\\\":78},{\\\"start\\\":148726,\\\"length\\\":52},{\\\"start\\\":14877"
                        "9,\\\"length\\\":76},{\\\"start\\\":148796,\\\"length\\\":57},{\\\"start\\\":148"
                        "857,\\\"length\\\":53},{\\\"start\\\":148911,\\\"length\\\":78},{\\\"start\\\":1"
                        "48928,\\\"length\\\":59},{\\\"start\\\":148991,\\\"length\\\":59},{\\\"start\\\""
                        ":149051,\\\"length\\\":90},{\\\"start\\\":149068,\\\"length\\\":71},{\\\"start\\"
                        "\":149143,\\\"length\\\":68},{\\\"start\\\":149160,\\\"length\\\":49}],\\\"resol"
                        "vedPath\\\":\\\"C:\\\\\\\\Users\\\\\\\\Naveen Reddy Vangala\\\\\\\\Documents\\\\"
                        "\\\\Visual Studio 2015\\\\\\\\Projects\\\\\\\\Dot-net-work\\\\\\\\SampleMasterPa"
                        "ge\\\\\\\\SampleMasterPage\\\\\\\\css\\\\\\\\bootstrap.css\\\"}],\\\"callbackId\\"
                        "\":-1}\"]}";
long WebSocketReceiveLen7   = sizeof(WebSocketReceive7) - 1;	 


# 10 "globals.h" 2







 
 







# 3 "c:\\users\\naveen reddy vangala\\documents\\vugen\\scripts\\sample 2\\\\combined_sample 2.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "c:\\users\\naveen reddy vangala\\documents\\vugen\\scripts\\sample 2\\\\combined_sample 2.c" 2

# 1 "Action.c" 1
Action()
{

	web_url("index.htm", 
		"URL=http://127.0.0.1:1080/WebTours/index.htm", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("returnCookies", 
		"URL=http://external-rules.foxydeal.com/inline/returnCookies", 
		"Method=GET", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=https://translate.googleapis.com/translate_a/l?client=chrome&hl=en&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw&alpha=1", "Referer=", "ENDITEM", 
		"LAST");

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_add_cookie("AMCV_9E1005A551ED61CA0A490D45%40AdobeOrg=-1176276602%7CMCAID%7C2C3BDD42051D383E-4000013480001994%7CMCIDTS%7C17179%7CMCMID%7C51456790579850249483626593230670422722%7CMCAAMLH-1484846344%7C9%7CMCAAMB-1484846344%7CNRX38WO0n5BH8Th-nqAG_A%7CMCOPTOUT-1484248744s%7CNONE; DOMAIN=sstats.adobe.com");

	web_add_cookie("s_pers=%20cpn%3D%7C1642007944553%3B%20ppn%3Dacrobat.adobe.com%253Alanding%253Aacrobat-pro-chrome-extension%7C1642007944555%3B%20s_nr%3D1484241544560-New%7C1515777544560%3B%20s_vs%3D1%7C1484243345110%3B; DOMAIN=sstats.adobe.com");

	web_add_cookie("mbox=session#0aabdf8e2e0b44858558600e194399c2#1484243406|PC#0aabdf8e2e0b44858558600e194399c2.28_73#1547486346; DOMAIN=sstats.adobe.com");

	web_add_cookie("s_vi=[CS]v1|2C3BDD42051D383E-4000013480001994[CE]; DOMAIN=sstats.adobe.com");

	web_url("seed", 
		"URL=https://clients4.google.com/chrome-variations/seed?osname=win", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=https://sstats.adobe.com/b/ss/adbcreatepdfplugin.prod/1/JS-1.6/s83269798203661?AQB=1&ndh=1&pf=1&t=24%2F0%2F2017%2020%3A7%3A33%202%20360&fid=050FD01EA11D12D1-2C5CD877843B8EA7&ce=UTF-8&pageName=DCBrowserExt%3AShim%3AVersion%3AUnknown%3AOp&g=chrome-extension%3A%2F%2Fefaidnbmnnnibpcajpcglclefindmkaj%2F_generated_background_page.html&v1=15.1.0.4&v2=sideload&v3=prod&v4=not_set&s=1536x864&c=24&j=1.6&v=N&k=Y&bh=8&AQE=1", "Referer=", "ENDITEM", 
		"Url=https://sstats.adobe.com/b/ss/adbcreatepdfplugin.prod/1/JS-1.6/s81311375978397?AQB=1&ndh=1&pf=1&t=24%2F0%2F2017%2020%3A7%3A33%202%20360&fid=050FD01EA11D12D1-2C5CD877843B8EA7&ce=UTF-8&pageName=DCBrowserExt%3AExtension%3AStartup%3AOp&g=chrome-extension%3A%2F%2Fefaidnbmnnnibpcajpcglclefindmkaj%2F_generated_background_page.html&v1=15.1.0.4&v2=sideload&v3=prod&v4=unknown&AQE=1", "Referer=", "ENDITEM", 
		"Url=https://sstats.adobe.com/b/ss/adbcreatepdfplugin.prod/1/JS-1.6/s84177452217142?AQB=1&ndh=1&pf=1&t=24%2F0%2F2017%2020%3A7%3A33%202%20360&fid=050FD01EA11D12D1-2C5CD877843B8EA7&ce=UTF-8&pageName=DCBrowserExt%3AOS%3Awin%3AOp&g=chrome-extension%3A%2F%2Fefaidnbmnnnibpcajpcglclefindmkaj%2F_generated_background_page.html&v1=15.1.0.4&v2=sideload&v3=prod&v4=unknown&AQE=1", "Referer=", "ENDITEM", 
		"Url=https://sstats.adobe.com/b/ss/adbcreatepdfplugin.prod/1/JS-1.6/s82574694937991?AQB=1&ndh=1&pf=1&t=24%2F0%2F2017%2020%3A7%3A34%202%20360&fid=050FD01EA11D12D1-2C5CD877843B8EA7&ce=UTF-8&pageName=DCBrowserExt%3AShim%3AVersion%3A13.0%3AOp&g=chrome-extension%3A%2F%2Fefaidnbmnnnibpcajpcglclefindmkaj%2F_generated_background_page.html&v1=15.1.0.4&v2=sideload&v3=prod&v4=unknown&AQE=1", "Referer=", "ENDITEM", 
		"LAST");

	web_url("login.pl", 
		"URL=http://127.0.0.1:1080/cgi-bin/login.pl?username=&password=&getInfo=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/WebTours/home.html", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_0.pb", "Referer=", "ENDITEM", 
		"LAST");

	web_custom_request("query", 
		"URL=https://clients1.google.com/tbproxy/af/query?client=Google%20Chrome", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/proto", 
		"Referer=", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"EncType=text/proto", 
		"BodyBinary=\n\\x176.1.1715.1442/en (GGLL)\\x13\\x19\\x0C\\x89\\xBA\\x89\\xD6\\xE8\\xD2\\xAD#-\\xE7\\x8D@\\x0E$#-\\xCEALz$#-86\\x89\\x87$#-kh\\x9An$#-O\\x9E'\\xF8$#-c\\x93'\\x87$#-\\xA2Y\\xB8I$\\x14", 
		"EXTRARES", 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_ext_variation_0.pb", "Referer=", "ENDITEM", 
		"LAST");

	lr_think_time(18);

	web_submit_data("login.pl_2", 
		"Action=http://127.0.0.1:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/login.pl?username=&password=&getInfo=true", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=username", "Value=abc", "ENDITEM", 
		"Name=password", "Value=123", "ENDITEM", 
		"Name=passwordConfirm", "Value=123", "ENDITEM", 
		"Name=firstName", "Value=hello", "ENDITEM", 
		"Name=lastName", "Value=world", "ENDITEM", 
		"Name=address1", "Value=street", "ENDITEM", 
		"Name=address2", "Value=city", "ENDITEM", 
		"Name=register.x", "Value=50", "ENDITEM", 
		"Name=register.y", "Value=6", "ENDITEM", 
		"LAST");

	web_image("button_next.gif", 
		"Src=/WebTours/images/button_next.gif", 
		"Snapshot=t29.inf", 
		"LAST");

	web_image("Search Flights Button", 
		"Alt=Search Flights Button", 
		"Snapshot=t30.inf", 
		"LAST");

	web_custom_request("query_2", 
		"URL=https://clients1.google.com/tbproxy/af/query?client=Google%20Chrome", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/proto", 
		"Referer=", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		"EncType=text/proto", 
		"BodyBinary=\n\\x176.1.1715.1442/en (GGLL)\\x13\\x19\\xEB\\x08\\x1D\\x1D5k\\xF6\\x7F#-Tb)\\xAD$#-{\\x9D\\xC4\\xA5$#-\\x1F;9\\x85$#-\\xDA\\x85\\x99a$#-\\xA9\\x8EJ\\xBD$\\x14", 
		"LAST");

	lr_think_time(10);

	web_submit_data("reservations.pl", 
		"Action=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=advanceDiscount", "Value=0", "ENDITEM", 
		"Name=depart", "Value=Denver", "ENDITEM", 
		"Name=departDate", "Value=01/25/2017", "ENDITEM", 
		"Name=arrive", "Value=London", "ENDITEM", 
		"Name=returnDate", "Value=01/26/2017", "ENDITEM", 
		"Name=numPassengers", "Value=1", "ENDITEM", 
		"Name=seatPref", "Value=None", "ENDITEM", 
		"Name=seatType", "Value=Coach", "ENDITEM", 
		"Name=findFlights.x", "Value=65", "ENDITEM", 
		"Name=findFlights.y", "Value=8", "ENDITEM", 
		"Name=.cgifields", "Value=roundtrip", "ENDITEM", 
		"Name=.cgifields", "Value=seatType", "ENDITEM", 
		"Name=.cgifields", "Value=seatPref", "ENDITEM", 
		"LAST");

	lr_think_time(11);

	web_submit_form("reservations.pl_2", 
		"Snapshot=t33.inf", 
		"ITEMDATA", 
		"Name=outboundFlight", "Value=022;320;01/25/2017", "ENDITEM", 
		"Name=reserveFlights.x", "Value=62", "ENDITEM", 
		"Name=reserveFlights.y", "Value=5", "ENDITEM", 
		"LAST");

	lr_think_time(12);

	web_submit_form("reservations.pl_3", 
		"Snapshot=t34.inf", 
		"ITEMDATA", 
		"Name=firstName", "Value=hello", "ENDITEM", 
		"Name=lastName", "Value=world", "ENDITEM", 
		"Name=address1", "Value=street", "ENDITEM", 
		"Name=address2", "Value=city", "ENDITEM", 
		"Name=pass1", "Value=hello world", "ENDITEM", 
		"Name=creditCard", "Value=2564415638", "ENDITEM", 
		"Name=expDate", "Value=2/18", "ENDITEM", 
		"Name=saveCC", "Value=<OFF>", "ENDITEM", 
		"LAST");

	web_url("welcome.pl", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		"LAST");

	return 0;
}
# 5 "c:\\users\\naveen reddy vangala\\documents\\vugen\\scripts\\sample 2\\\\combined_sample 2.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "c:\\users\\naveen reddy vangala\\documents\\vugen\\scripts\\sample 2\\\\combined_sample 2.c" 2

