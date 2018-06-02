/*********************************************************************
	Rhapsody	: 8.3 
	Login		: Philippe Leblanc
	Component	: Cmp_Code 
	Configuration 	: Cfg_Code
	Model Element	: Electric_Power
//!	Generated Date	: Tue, 29, May 2018  
	File Path	: Cmp_Code/Cfg_Code/Electric_Power.h
*********************************************************************/

#ifndef Electric_Power_H
#define Electric_Power_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include "P1_Design.h"
//## auto_generated
#include <oxf/omreactive.h>
//## auto_generated
#include <oxf/state.h>
//## auto_generated
#include <oxf/event.h>
//## package P1_Design

//## class Electric_Power
class Electric_Power : public OMReactive {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Electric_Power(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    virtual ~Electric_Power();
    
    ////    Operations    ////
    
    //## operation providePower(int)
    virtual bool providePower(int pw);
    
    //## operation recharge()
    virtual void recharge();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getCharge() const;
    
    //## auto_generated
    void setCharge(int p_Charge);
    
    //## auto_generated
    int getChargeTime() const;
    
    //## auto_generated
    void setChargeTime(int p_ChargeTime);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    ////    Attributes    ////

public :

    int Charge;		//## attribute Charge
    
    int ChargeTime;		//## attribute ChargeTime
    
    ////    Framework operations    ////
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // ready:
    //## statechart_method
    inline bool ready_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Electric_Power_Enum {
        OMNonState = 0,
        ready = 1
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

inline bool Electric_Power::rootState_IN() const {
    return true;
}

inline bool Electric_Power::ready_IN() const {
    return rootState_subState == ready;
}

#endif
/*********************************************************************
	File Path	: Cmp_Code/Cfg_Code/Electric_Power.h
*********************************************************************/
