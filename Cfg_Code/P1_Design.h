/*********************************************************************
	Rhapsody	: 8.3 
	Login		: Philippe Leblanc
	Component	: Cmp_Code 
	Configuration 	: Cfg_Code
	Model Element	: P1_Design
//!	Generated Date	: Tue, 29, May 2018  
	File Path	: Cmp_Code/Cfg_Code/P1_Design.h
*********************************************************************/

#ifndef P1_Design_H
#define P1_Design_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include <oxf/event.h>
//## auto_generated
class Camera;

//## auto_generated
class Communication;

//## auto_generated
class Electric_Power;

//## auto_generated
class Flight_Mgt;

//## auto_generated
class Flying_Camera;

//## auto_generated
class Quadricopter;

//#[ ignore
#define cmd_On_P1_Design_id 11201

#define cmd_Off_P1_Design_id 11202
//#]

//## package P1_Design



//## event cmd_On()
class cmd_On : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    cmd_On();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event cmd_Off()
class cmd_Off : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    cmd_Off();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#endif
/*********************************************************************
	File Path	: Cmp_Code/Cfg_Code/P1_Design.h
*********************************************************************/
