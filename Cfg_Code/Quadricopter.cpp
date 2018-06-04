/********************************************************************
	Rhapsody	: 8.3 
	Login		: Philippe Leblanc
	Component	: Cmp_Code 
	Configuration 	: Cfg_Code
	Model Element	: Quadricopter
//!	Generated Date	: Tue, 30, May 2018  
	File Path	: Cmp_Code/Cfg_Code/Quadricopter.cpp
*********************************************************************/

//## auto_generated
#include <oxf/omthread.h>
//## auto_generated
#include "Quadricopter.h"
//## link itsEP
#include "Electric_Power.h"
//## package P1_Design

//## class Quadricopter
Quadricopter::Quadricopter(IOxfActive* theActiveContext) {
    setActiveContext(theActiveContext, false);
    itsEP = NULL;
    initStatechart();
}

Quadricopter::~Quadricopter() {
    cleanUpRelations();
}

Electric_Power* Quadricopter::getItsEP() const {
    return itsEP;
}

void Quadricopter::setItsEP(Electric_Power* p_Electric_Power) {
    itsEP = p_Electric_Power;
}

bool Quadricopter::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Quadricopter::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void Quadricopter::cleanUpRelations() {
    if(itsEP != NULL)
        {
            itsEP = NULL;
        }
}

void Quadricopter::rootState_entDef() {
    {
        rootState_subState = ready;
        rootState_active = ready;
    }
}

IOxfReactive::TakeEventStatus Quadricopter::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    return res;
}

/*********************************************************************
	File Path	: Cmp_Code/Cfg_Code/Quadricopter.cpp
*********************************************************************/
