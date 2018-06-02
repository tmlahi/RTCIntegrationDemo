/*********************************************************************
	Rhapsody	: 8.3 
	Login		: Philippe Leblanc
	Component	: Cmp_Code 
	Configuration 	: Cfg_Code
	Model Element	: Flight_Mgt
//!	Generated Date	: Tue, 29, May 2018  
	File Path	: Cmp_Code/Cfg_Code/Flight_Mgt.h
*********************************************************************/

#ifndef Flight_Mgt_H
#define Flight_Mgt_H

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
//## link itsEP
class Electric_Power;

//## package P1_Design

//## class Flight_Mgt
class Flight_Mgt : public OMReactive {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Flight_Mgt(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Flight_Mgt();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Electric_Power* getItsEP() const;
    
    //## auto_generated
    void setItsEP(Electric_Power* p_Electric_Power);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Electric_Power* itsEP;		//## link itsEP
    
    ////    Framework operations    ////

public :

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
    enum Flight_Mgt_Enum {
        OMNonState = 0,
        ready = 1
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

inline bool Flight_Mgt::rootState_IN() const {
    return true;
}

inline bool Flight_Mgt::ready_IN() const {
    return rootState_subState == ready;
}

#endif
/*********************************************************************
	File Path	: Cmp_Code/Cfg_Code/Flight_Mgt.h
*********************************************************************/
