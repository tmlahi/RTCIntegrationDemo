/********************************************************************
	Rhapsody	: 8.3 
	Login		: Philippe Leblanc
	Component	: Cmp_Code 
	Configuration 	: Cfg_Code
	Model Element	: Cfg_Code
//!	Generated Date	: Tue, 29, May 2018  
	File Path	: Cmp_Code/Cfg_Code/MainCmp_Code.cpp
*********************************************************************/

//## auto_generated
#include "MainCmp_Code.h"
//## auto_generated
#include "Flight_Mgt.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize())
        {
            Flight_Mgt * p_Flight_Mgt;
            p_Flight_Mgt = new Flight_Mgt;
            p_Flight_Mgt->startBehavior();
            //#[ configuration Cmp_Code::Cfg_Code 
            //#]
            OXF::start();
            delete p_Flight_Mgt;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: Cmp_Code/Cfg_Code/MainCmp_Code.cpp
*********************************************************************/
