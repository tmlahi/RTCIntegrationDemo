/*********************************************************************
	Rhapsody	: 8.3 
	Login		: Philippe Leblanc
	Component	: Cmp_Code 
	Configuration 	: Cfg_Code
	Model Element	: Communication
//!	Generated Date	: Tue, 29, May 2018  
	File Path	: Cmp_Code/Cfg_Code/Communication.h
*********************************************************************/

#ifndef Communication_H
#define Communication_H

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
//## link itsCam
class Camera;

//## link itsEP
class Electric_Power;

//## link itsFM
class Flight_Mgt;

//## link itsQC
class Quadricopter;

//## package P1_Design

//## class Communication
class Communication : public OMReactive {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Communication(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Communication();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Camera* getItsCam() const;
    
    //## auto_generated
    void setItsCam(Camera* p_Camera);
    
    //## auto_generated
    Electric_Power* getItsEP() const;
    
    //## auto_generated
    void setItsEP(Electric_Power* p_Electric_Power);
    
    //## auto_generated
    Flight_Mgt* getItsFM() const;
    
    //## auto_generated
    void setItsFM(Flight_Mgt* p_Flight_Mgt);
    
    //## auto_generated
    Quadricopter* getItsQC() const;
    
    //## auto_generated
    void setItsQC(Quadricopter* p_Quadricopter);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Camera* itsCam;		//## link itsCam
    
    Electric_Power* itsEP;		//## link itsEP
    
    Flight_Mgt* itsFM;		//## link itsFM
    
    Quadricopter* itsQC;		//## link itsQC
    
    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // on:
    //## statechart_method
    inline bool on_IN() const;
    
    // off:
    //## statechart_method
    inline bool off_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Communication_Enum {
        OMNonState = 0,
        on = 1,
        off = 2
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

inline bool Communication::rootState_IN() const {
    return true;
}

inline bool Communication::on_IN() const {
    return rootState_subState == on;
}

inline bool Communication::off_IN() const {
    return rootState_subState == off;
}

#endif
/*********************************************************************
	File Path	: Cmp_Code/Cfg_Code/Communication.h
*********************************************************************/
