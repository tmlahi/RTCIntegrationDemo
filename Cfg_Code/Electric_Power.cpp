/********************************************************************
	Rhapsody	: 8.3 
	Login		: Philippe Leblanc
	Component	: Cmp_Code 
	Configuration 	: Cfg_Code
	Model Element	: Electric_Power
//!	Generated Date	: Tue, 29, May 2018  
	File Path	: Cmp_Code/Cfg_Code/Electric_Power.cpp
*********************************************************************/

//## auto_generated
#include <oxf/omthread.h>
//## auto_generated
#include "Electric_Power.h"
//## package P1_Design

//## class Electric_Power
Electric_Power::Electric_Power(IOxfActive* theActiveContext) : Charge(100) {
    setActiveContext(theActiveContext, false);
    initStatechart();
}

Electric_Power::~Electric_Power() {
}

bool Electric_Power::providePower(int pw) {
    //#[ operation providePower(int)
    if (Charge > pw) {Charge = Charge - pw;}
    else {Charge = 0;}
    return (Charge > 0);
    //#]
}

void Electric_Power::recharge() {
    //#[ operation recharge()
    if (Charge < 100) {Charge++;}
    //#]
}

int Electric_Power::getCharge() const {
    return Charge;
}

void Electric_Power::setCharge(int p_Charge) {
    Charge = p_Charge;
}

int Electric_Power::getChargeTime() const {
    return ChargeTime;
}

void Electric_Power::setChargeTime(int p_ChargeTime) {
    ChargeTime = p_ChargeTime;
}

bool Electric_Power::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Electric_Power::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void Electric_Power::rootState_entDef() {
    {
        rootState_subState = ready;
        rootState_active = ready;
    }
}

IOxfReactive::TakeEventStatus Electric_Power::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    return res;
}

/*********************************************************************
	File Path	: Cmp_Code/Cfg_Code/Electric_Power.cpp
*********************************************************************/
