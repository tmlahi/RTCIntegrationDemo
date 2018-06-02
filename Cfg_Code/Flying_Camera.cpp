/********************************************************************
	Rhapsody	: 8.3 
	Login		: Philippe Leblanc
	Component	: Cmp_Code 
	Configuration 	: Cfg_Code
	Model Element	: Flying_Camera
//!	Generated Date	: Tue, 29, May 2018  
	File Path	: Cmp_Code/Cfg_Code/Flying_Camera.cpp
*********************************************************************/

//## auto_generated
#include <oxf/omthread.h>
//## auto_generated
#include "Flying_Camera.h"
//## link itsPilot
#include "Operator.h"
//## package P1_Design

//## class Flying_Camera
Flying_Camera::Flying_Camera(IOxfActive* theActiveContext) {
    setActiveContext(theActiveContext, false);
    {
        {
            cam.setShouldDelete(false);
        }
        {
            com.setShouldDelete(false);
        }
        {
            fm.setShouldDelete(false);
        }
        {
            qc.setShouldDelete(false);
        }
        {
            ep.setShouldDelete(false);
        }
    }
    itsPilot = NULL;
    initRelations();
}

Flying_Camera::~Flying_Camera() {
    cleanUpRelations();
}

Camera* Flying_Camera::getCam() const {
    return (Camera*) &cam;
}

Communication* Flying_Camera::getCom() const {
    return (Communication*) &com;
}

Electric_Power* Flying_Camera::getEp() const {
    return (Electric_Power*) &ep;
}

Flight_Mgt* Flying_Camera::getFm() const {
    return (Flight_Mgt*) &fm;
}

Operator* Flying_Camera::getItsPilot() const {
    return itsPilot;
}

void Flying_Camera::setItsPilot(Operator* p_Operator) {
    if(p_Operator != NULL)
        {
            p_Operator->_setItsFlying_Camera(this);
        }
    _setItsPilot(p_Operator);
}

Quadricopter* Flying_Camera::getQc() const {
    return (Quadricopter*) &qc;
}

bool Flying_Camera::startBehavior() {
    bool done = true;
    done &= cam.startBehavior();
    done &= com.startBehavior();
    done &= ep.startBehavior();
    done &= fm.startBehavior();
    done &= qc.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void Flying_Camera::initRelations() {
    com.setItsFM(&fm);
    com.setItsEP(&ep);
    fm.setItsEP(&ep);
    qc.setItsEP(&ep);
    cam.setItsEP(&ep);
    com.setItsCam(&cam);
    com.setItsQC(&qc);
}

void Flying_Camera::cleanUpRelations() {
    if(itsPilot != NULL)
        {
            Flying_Camera* p_Flying_Camera = itsPilot->getItsFlying_Camera();
            if(p_Flying_Camera != NULL)
                {
                    itsPilot->__setItsFlying_Camera(NULL);
                }
            itsPilot = NULL;
        }
}

void Flying_Camera::__setItsPilot(Operator* p_Operator) {
    itsPilot = p_Operator;
}

void Flying_Camera::_setItsPilot(Operator* p_Operator) {
    if(itsPilot != NULL)
        {
            itsPilot->__setItsFlying_Camera(NULL);
        }
    __setItsPilot(p_Operator);
}

void Flying_Camera::_clearItsPilot() {
    itsPilot = NULL;
}

void Flying_Camera::setActiveContext(IOxfActive* theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        cam.setActiveContext(theActiveContext, false);
        com.setActiveContext(theActiveContext, false);
        fm.setActiveContext(theActiveContext, false);
        qc.setActiveContext(theActiveContext, false);
        ep.setActiveContext(theActiveContext, false);
    }
}

void Flying_Camera::destroy() {
    cam.destroy();
    com.destroy();
    ep.destroy();
    fm.destroy();
    qc.destroy();
    OMReactive::destroy();
}

/*********************************************************************
	File Path	: Cmp_Code/Cfg_Code/Flying_Camera.cpp
*********************************************************************/
