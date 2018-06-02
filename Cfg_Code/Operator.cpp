/********************************************************************
	Rhapsody	: 8.3 
	Login		: Philippe Leblanc
	Component	: Cmp_Code 
	Configuration 	: Cfg_Code
	Model Element	: Operator
//!	Generated Date	: Tue, 29, May 2018  
	File Path	: Cmp_Code/Cfg_Code/Operator.cpp
*********************************************************************/

//## auto_generated
#include "Operator.h"
//## link itsFlying_Camera
#include "Flying_Camera.h"
//## package P1_Design

//## actor Operator
Operator::Operator() {
    itsFlying_Camera = NULL;
}

Operator::~Operator() {
    cleanUpRelations();
}

Flying_Camera* Operator::getItsFlying_Camera() const {
    return itsFlying_Camera;
}

void Operator::setItsFlying_Camera(Flying_Camera* p_Flying_Camera) {
    if(p_Flying_Camera != NULL)
        {
            p_Flying_Camera->_setItsPilot(this);
        }
    _setItsFlying_Camera(p_Flying_Camera);
}

void Operator::cleanUpRelations() {
    if(itsFlying_Camera != NULL)
        {
            Operator* p_Operator = itsFlying_Camera->getItsPilot();
            if(p_Operator != NULL)
                {
                    itsFlying_Camera->__setItsPilot(NULL);
                }
            itsFlying_Camera = NULL;
        }
}

void Operator::__setItsFlying_Camera(Flying_Camera* p_Flying_Camera) {
    itsFlying_Camera = p_Flying_Camera;
}

void Operator::_setItsFlying_Camera(Flying_Camera* p_Flying_Camera) {
    if(itsFlying_Camera != NULL)
        {
            itsFlying_Camera->__setItsPilot(NULL);
        }
    __setItsFlying_Camera(p_Flying_Camera);
}

void Operator::_clearItsFlying_Camera() {
    itsFlying_Camera = NULL;
}

/*********************************************************************
	File Path	: Cmp_Code/Cfg_Code/Operator.cpp
*********************************************************************/
