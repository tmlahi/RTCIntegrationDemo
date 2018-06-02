/********************************************************************
	Rhapsody	: 8.3 
	Login		: Philippe Leblanc
	Component	: Cmp_Code 
	Configuration 	: Cfg_Code
	Model Element	: Flight_Mgt
//!	Generated Date	: Tue, 29, May 2018  
	File Path	: Cmp_Code/Cfg_Code/Flight_Mgt.cpp
*********************************************************************/

//## auto_generated
#include <oxf/omthread.h>
//## auto_generated
#include "Flight_Mgt.h"
//## link itsEP
#include "Electric_Power.h"
//## package P1_Design

//## class Flight_Mgt
Flight_Mgt::Flight_Mgt(IOxfActive* theActiveContext) {
    setActiveContext(theActiveContext, false);
    itsEP = NULL;
    initStatechart();
}

Flight_Mgt::~Flight_Mgt() {
    cleanUpRelations();
}

Electric_Power* Flight_Mgt::getItsEP() const {
    return itsEP;
}

void Flight_Mgt::setItsEP(Electric_Power* p_Electric_Power) {
    itsEP = p_Electric_Power;
}

bool Flight_Mgt::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Flight_Mgt::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void Flight_Mgt::cleanUpRelations() {
    if(itsEP != NULL)
        {
            itsEP = NULL;
        }
}

void Flight_Mgt::rootState_entDef() {
    {
        rootState_subState = ready;
        rootState_active = ready;
    }
}

IOxfReactive::TakeEventStatus Flight_Mgt::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    return res;
}

/*********************************************************************
	File Path	: Cmp_Code/Cfg_Code/Flight_Mgt.cpp
*********************************************************************/
