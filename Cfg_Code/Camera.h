/*********************************************************************
	Rhapsody	: 8.3 
	Login		: Philippe Leblanc
	Component	: Cmp_Code 
	Configuration 	: Cfg_Code
	Model Element	: Camera
//!	Generated Date	: Tue, 29, May 2018  
	File Path	: Cmp_Code/Cfg_Code/Camera.h
*********************************************************************/

#ifndef Camera_H
#define Camera_H

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

//## class Camera
class Camera : public OMReactive {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Camera(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    virtual ~Camera();
    
    ////    Operations    ////
    
    //## operation sendPicture()
    virtual void sendPicture();
    
    //## operation takePicture()
    virtual bool takePicture();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getFreeSpace() const;
    
    //## auto_generated
    void setFreeSpace(int p_freeSpace);
    
    //## auto_generated
    int getImageSize() const;
    
    //## auto_generated
    void setImageSize(int p_imageSize);
    
    //## auto_generated
    const int getMaxSpace() const;
    
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
    
    ////    Attributes    ////

public :

    int freeSpace;		//## attribute freeSpace
    
    int imageSize;		//## attribute imageSize
    
    const int maxSpace;		//## attribute maxSpace
    
    ////    Relations and components    ////

protected :

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
    enum Camera_Enum {
        OMNonState = 0,
        ready = 1
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

inline bool Camera::rootState_IN() const {
    return true;
}

inline bool Camera::ready_IN() const {
    return rootState_subState == ready;
}

#endif
/*********************************************************************
	File Path	: Cmp_Code/Cfg_Code/Camera.h
*********************************************************************/
