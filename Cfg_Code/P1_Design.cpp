/********************************************************************
	Rhapsody	: 8.3 
	Login		: Philippe Leblanc
	Component	: Cmp_Code 
	Configuration 	: Cfg_Code
	Model Element	: P1_Design
//!	Generated Date	: Tue, 29, May 2018  
	File Path	: Cmp_Code/Cfg_Code/P1_Design.cpp
*********************************************************************/

//## auto_generated
#include "P1_Design.h"
//## auto_generated
#include "Camera.h"
//## auto_generated
#include "Communication.h"
//## auto_generated
#include "Electric_Power.h"
//## auto_generated
#include "Flight_Mgt.h"
//## auto_generated
#include "Flying_Camera.h"
//## auto_generated
#include "Quadricopter.h"
//## package P1_Design



//## event cmd_On()
cmd_On::cmd_On() {
    setId(cmd_On_P1_Design_id);
}

bool cmd_On::isTypeOf(const short id) const {
    return (cmd_On_P1_Design_id==id);
}

//## event cmd_Off()
cmd_Off::cmd_Off() {
    setId(cmd_Off_P1_Design_id);
}

bool cmd_Off::isTypeOf(const short id) const {
    return (cmd_Off_P1_Design_id==id);
}

/*********************************************************************
	File Path	: Cmp_Code/Cfg_Code/P1_Design.cpp
*********************************************************************/
