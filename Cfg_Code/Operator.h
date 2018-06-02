/*********************************************************************
	Rhapsody	: 8.3 
	Login		: Philippe Leblanc
	Component	: Cmp_Code 
	Configuration 	: Cfg_Code
	Model Element	: Operator
//!	Generated Date	: Tue, 29, May 2018  
	File Path	: Cmp_Code/Cfg_Code/Operator.h
*********************************************************************/

#ifndef Operator_H
#define Operator_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include "P1_Design.h"
//## link itsFlying_Camera
class Flying_Camera;

//## package P1_Design

//## actor Operator
class Operator {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Operator();
    
    //## auto_generated
    ~Operator();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Flying_Camera* getItsFlying_Camera() const;
    
    //## auto_generated
    void setItsFlying_Camera(Flying_Camera* p_Flying_Camera);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Flying_Camera* itsFlying_Camera;		//## link itsFlying_Camera
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsFlying_Camera(Flying_Camera* p_Flying_Camera);
    
    //## auto_generated
    void _setItsFlying_Camera(Flying_Camera* p_Flying_Camera);
    
    //## auto_generated
    void _clearItsFlying_Camera();
};

#endif
/*********************************************************************
	File Path	: Cmp_Code/Cfg_Code/Operator.h
*********************************************************************/
