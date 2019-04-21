/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 971
   ------------------------------------------------------------------------------- */
   
/**********************************************************************************************************
Script for Borland Application
***********************************************************************************************************

Project Name: Borland
Project ID:
Client Name: Gopi Reddy .Y
Author:  P.L.Raju
	      Performance Testing Centre of Excellence
	      Shaft Software Solutions Pvt. Limited
	      plrajudec18@shaft.com
	      
Version :  Components modified and scripted
          1.Done few corelations with respect to p_l_id.
          2.Transaction function added inorder to findout respose time for a particular request.
          3.Done Text Verification, to check whether particular text is available or not.
          4.Done parametrization inorder to capture Url,Username and Password.

Author:  Raju
	      Performance Testing Centre of Excellence
	      Shaft Software Solutions Pvt. Limited
	      plraju1990@gmail.com

Risk and Mitigation : 1. Change in exception in borlan_Stage_14_16
		   Solution : Re - record exception and correlate "LNEXP_RX_DETAIL"
		      
Transaction Foramat : lr_start_transaction("BOR_SC001_T001_Transname");

Use: Borland 0.02 code base

Components Affected
************************************************************************************************************/   
//#include "BORLAND 0.1\\BOR_ModuleApproach.h"
#include "BOR_ModuleApproach.h"
vuser_init()
{
	/***** Launch*****/	
	launch();
	
	/***** LogIn *****/
	logIn();
	
	return 0;
}