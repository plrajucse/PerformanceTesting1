//#include "BORLAND 0.1\\BOR_ModuleApproach.h"
#include "BOR_ModuleApproach.h"
vuser_end()
{
	/***** LogOut *****/
	LogOut();
	
	web_cleanup_cookies();
	web_cache_cleanup();	

	return 0;
}