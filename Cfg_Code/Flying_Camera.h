/*********************************************************************
	Rhapsody	: 8.3 
	Login		: Philippe Leblanc
	Component	: Cmp_Code 
	Configuration 	: Cfg_Code
	Model Element	: Flying_Camera
//!	Generated Date	: Tue, 29, May 2018  
	File Path	: Cmp_Code/Cfg_Code/Flying_Camera.h
*********************************************************************/

#ifndef Flying_Camera_H
#define Flying_Camera_H

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
//## classInstance cam
#include "Camera.h"
//## classInstance com
#include "Communication.h"
//## classInstance ep
#include "Electric_Power.h"
//## classInstance fm
#include "Flight_Mgt.h"
//## classInstance qc
#include "Quadricopter.h"
//## link itsPilot
class Operator;

//## package P1_Design

//## class Flying_Camera
// Drone system carrying a camera to take pictures and videos remotely.
class Flying_Camera : public OMReactive {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Flying_Camera(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Flying_Camera();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Camera* getCam() const;
    
    //## auto_generated
    Communication* getCom() const;
    
    //## auto_generated
    Electric_Power* getEp() const;
    
    //## auto_generated
    Flight_Mgt* getFm() const;
    
    //## auto_generated
    Operator* getItsPilot() const;
    
    //## auto_generated
    void setItsPilot(Operator* p_Operator);
    
    //## auto_generated
    Quadricopter* getQc() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Camera cam;		//## classInstance cam
    
    Communication com;		//## classInstance com
    
    Electric_Power ep;		//## classInstance ep
    
    Flight_Mgt fm;		//## classInstance fm
    
    Operator* itsPilot;		//## link itsPilot
    
    Quadricopter qc;		//## classInstance qc
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsPilot(Operator* p_Operator);
    
    //## auto_generated
    void _setItsPilot(Operator* p_Operator);
    
    //## auto_generated
    void _clearItsPilot();
    
    //## auto_generated
    void setActiveContext(IOxfActive* theActiveContext, bool activeInstance);
    
    //## auto_generated
    virtual void destroy();
};

#endif
/*********************************************************************
	File Path	: Cmp_Code/Cfg_Code/Flying_Camera.h
*********************************************************************/
