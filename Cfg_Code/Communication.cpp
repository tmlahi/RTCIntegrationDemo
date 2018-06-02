/********************************************************************
	Rhapsody	: 8.3 
	Login		: Philippe Leblanc
	Component	: Cmp_Code 
	Configuration 	: Cfg_Code
	Model Element	: Communication
//!	Generated Date	: Tue, 29, May 2018  
	File Path	: Cmp_Code/Cfg_Code/Communication.cpp
*********************************************************************/

//## auto_generated
#include <oxf/omthread.h>
//## auto_generated
#include "Communication.h"
//## link itsCam
#include "Camera.h"
//## link itsEP
#include "Electric_Power.h"
//## link itsFM
#include "Flight_Mgt.h"
//## link itsQC
#include "Quadricopter.h"
//## package P1_Design

//## class Communication
Communication::Communication(IOxfActive* theActiveContext) {
    setActiveContext(theActiveContext, false);
    itsCam = NULL;
    itsEP = NULL;
    itsFM = NULL;
    itsQC = NULL;
    initStatechart();
}

Communication::~Communication() {
    cleanUpRelations();
}

Camera* Communication::getItsCam() const {
    return itsCam;
}

void Communication::setItsCam(Camera* p_Camera) {
    itsCam = p_Camera;
}

Electric_Power* Communication::getItsEP() const {
    return itsEP;
}

void Communication::setItsEP(Electric_Power* p_Electric_Power) {
    itsEP = p_Electric_Power;
}

Flight_Mgt* Communication::getItsFM() const {
    return itsFM;
}

void Communication::setItsFM(Flight_Mgt* p_Flight_Mgt) {
    itsFM = p_Flight_Mgt;
}

Quadricopter* Communication::getItsQC() const {
    return itsQC;
}

void Communication::setItsQC(Quadricopter* p_Quadricopter) {
    itsQC = p_Quadricopter;
}

bool Communication::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Communication::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void Communication::cleanUpRelations() {
    if(itsCam != NULL)
        {
            itsCam = NULL;
        }
    if(itsEP != NULL)
        {
            itsEP = NULL;
        }
    if(itsFM != NULL)
        {
            itsFM = NULL;
        }
    if(itsQC != NULL)
        {
            itsQC = NULL;
        }
}

void Communication::rootState_entDef() {
    {
        rootState_subState = off;
        rootState_active = off;
    }
}

IOxfReactive::TakeEventStatus Communication::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State off
        case off:
        {
            if(IS_EVENT_TYPE_OF(cmd_On_P1_Design_id))
                {
                    rootState_subState = on;
                    rootState_active = on;
                    res = eventConsumed;
                }
            
        }
        break;
        // State on
        case on:
        {
            if(IS_EVENT_TYPE_OF(cmd_Off_P1_Design_id))
                {
                    rootState_subState = off;
                    rootState_active = off;
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

/*********************************************************************
	File Path	: Cmp_Code/Cfg_Code/Communication.cpp
*********************************************************************/
