/********************************************************************
	Rhapsody	: 8.3 
	Login		: Philippe Leblanc
	Component	: Cmp_Code 
	Configuration 	: Cfg_Code
	Model Element	: Camera
//!	Generated Date	: Tue, 29, May 2018  
	File Path	: Cmp_Code/Cfg_Code/Camera.cpp
*********************************************************************/

//## auto_generated
#include <oxf/omthread.h>
//## auto_generated
#include "Camera.h"
//## link itsEP
#include "Electric_Power.h"
//## package P1_Design

//## class Camera
Camera::Camera(IOxfActive* theActiveContext) : imageSize(1600), maxSpace(50000) {
    setActiveContext(theActiveContext, false);
    itsEP = NULL;
    initStatechart();
}

Camera::~Camera() {
    cleanUpRelations();
}

void Camera::sendPicture() {
    //#[ operation sendPicture()
    freeSpace = freeSpace + imageSize;
    return;
    //#]
}

bool Camera::takePicture() {
    //#[ operation takePicture()
    if (freeSpace > imageSize) {freeSpace = freeSpace - imageSize;}
    else return false;
    return true;
    //#]
}

int Camera::getFreeSpace() const {
    return freeSpace;
}

void Camera::setFreeSpace(int p_freeSpace) {
    freeSpace = p_freeSpace;
}

int Camera::getImageSize() const {
    return imageSize;
}

void Camera::setImageSize(int p_imageSize) {
    imageSize = p_imageSize;
}

const int Camera::getMaxSpace() const {
    return maxSpace;
}

Electric_Power* Camera::getItsEP() const {
    return itsEP;
}

void Camera::setItsEP(Electric_Power* p_Electric_Power) {
    itsEP = p_Electric_Power;
}

bool Camera::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Camera::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void Camera::cleanUpRelations() {
    if(itsEP != NULL)
        {
            itsEP = NULL;
        }
}

void Camera::rootState_entDef() {
    {
        rootState_subState = ready;
        rootState_active = ready;
    }
}

IOxfReactive::TakeEventStatus Camera::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    return res;
}

/*********************************************************************
	File Path	: Cmp_Code/Cfg_Code/Camera.cpp
*********************************************************************/
