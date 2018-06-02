
############# Target type (Debug/Release) ##################
############################################################
CPPCompileDebug=-g
CPPCompileRelease=-O
LinkDebug=-g
LinkRelease=-O

CleanupFlagForSimulink=
SIMULINK_CONFIG=False
ifeq ($(SIMULINK_CONFIG),True)
CleanupFlagForSimulink=-DOM_WITH_CLEANUP
endif

ConfigurationCPPCompileSwitches=   $(INCLUDE_QUALIFIER). $(INCLUDE_QUALIFIER)$(OMROOT) $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/oxf $(DEFINE_QUALIFIER)CYGWIN $(INST_FLAGS) $(INCLUDE_PATH) $(INST_INCLUDES) -Wno-write-strings $(CPPCompileDebug) -c  $(CleanupFlagForSimulink)
ConfigurationCCCompileSwitches=$(INCLUDE_PATH) -c 

#########################################
###### Predefined macros ################
RM=/bin/rm -rf
INCLUDE_QUALIFIER=-I
DEFINE_QUALIFIER=-D
CC=g++
LIB_CMD=ar
LINK_CMD=g++
LIB_FLAGS=rvu
LINK_FLAGS= $(LinkDebug)   

#########################################
####### Context macros ##################

FLAGSFILE=
RULESFILE=
OMROOT="C:/PLB/Exec/Rhp830/Share"
RHPROOT="C:/PLB/Exec/Rhp830"

CPP_EXT=.cpp
H_EXT=.h
OBJ_EXT=.o
EXE_EXT=.exe
LIB_EXT=.a

INSTRUMENTATION=None

TIME_MODEL=RealTime

TARGET_TYPE=Executable

TARGET_NAME=Cmp_Code

all : $(TARGET_NAME)$(EXE_EXT) Cmp_Code.mak

TARGET_MAIN=MainCmp_Code

LIBS=

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/Cygwin

ADDITIONAL_OBJS=

OBJS= \
  Flying_Camera.o \
  Flight_Mgt.o \
  Communication.o \
  Electric_Power.o \
  Quadricopter.o \
  Camera.o \
  Operator.o \
  P1_Design.o




#########################################
####### Predefined macros ###############
$(OBJS) : $(INST_LIBS) $(OXF_LIBS)

ifeq ($(INSTRUMENTATION),Animation)

INST_FLAGS=$(DEFINE_QUALIFIER)OMANIMATOR $(DEFINE_QUALIFIER)__USE_W32_SOCKETS 
INST_INCLUDES=$(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/aom $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/tom
INST_LIBS=$(OMROOT)/LangCpp/lib/cygwinaomanimx64$(LIB_EXT) $(OMROOT)/LangCpp/lib/cygwinoxsiminstx64$(LIB_EXT)
OXF_LIBS=$(OMROOT)/LangCpp/lib/cygwinoxfinstx64$(LIB_EXT) $(OMROOT)/LangCpp/lib/cygwinomcomapplx64$(LIB_EXT)
SOCK_LIB=-lws2_32

else
ifeq ($(INSTRUMENTATION),Tracing)

INST_FLAGS=$(DEFINE_QUALIFIER)OMTRACER 
INST_INCLUDES=$(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/aom $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/tom
INST_LIBS=$(OMROOT)/LangCpp/lib/cygwintomtracex64$(LIB_EXT) $(OMROOT)/LangCpp/lib/cygwinaomtracex64$(LIB_EXT) $(OMROOT)/LangCpp/lib/cygwinoxsiminstx64$(LIB_EXT)
OXF_LIBS=$(OMROOT)/LangCpp/lib/cygwinoxfinstx64$(LIB_EXT) $(OMROOT)/LangCpp/lib/cygwinomcomapplx64$(LIB_EXT)
SOCK_LIB=-lws2_32

else
ifeq ($(INSTRUMENTATION),None)

INST_FLAGS= 
INST_INCLUDES=
INST_LIBS=$(OMROOT)/LangCpp/lib/cygwinoxsimx64$(LIB_EXT)
OXF_LIBS=$(OMROOT)/LangCpp/lib/cygwinoxfx64$(LIB_EXT)
SOCK_LIB=-lws2_32

else
	@echo An invalid Instrumentation $(INSTRUMENTATION) is specified.
	exit
endif
endif
endif

.SUFFIXES: $(CPP_EXT)

#####################################################################
##################### Context dependencies and commands #############






Flying_Camera.o : Flying_Camera.cpp Flying_Camera.h    P1_Design.h Operator.h Camera.h Communication.h Flight_Mgt.h Quadricopter.h Electric_Power.h 
	@echo Compiling Flying_Camera.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Flying_Camera.o Flying_Camera.cpp




Flight_Mgt.o : Flight_Mgt.cpp Flight_Mgt.h    P1_Design.h Electric_Power.h 
	@echo Compiling Flight_Mgt.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Flight_Mgt.o Flight_Mgt.cpp




Communication.o : Communication.cpp Communication.h    P1_Design.h Electric_Power.h Flight_Mgt.h Quadricopter.h Camera.h 
	@echo Compiling Communication.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Communication.o Communication.cpp




Electric_Power.o : Electric_Power.cpp Electric_Power.h    P1_Design.h 
	@echo Compiling Electric_Power.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Electric_Power.o Electric_Power.cpp




Quadricopter.o : Quadricopter.cpp Quadricopter.h    P1_Design.h Electric_Power.h 
	@echo Compiling Quadricopter.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Quadricopter.o Quadricopter.cpp




Camera.o : Camera.cpp Camera.h    P1_Design.h Electric_Power.h 
	@echo Compiling Camera.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Camera.o Camera.cpp




Operator.o : Operator.cpp Operator.h    P1_Design.h Flying_Camera.h 
	@echo Compiling Operator.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o Operator.o Operator.cpp




P1_Design.o : P1_Design.cpp P1_Design.h    Flying_Camera.h Flight_Mgt.h Communication.h Electric_Power.h Quadricopter.h Camera.h 
	@echo Compiling P1_Design.cpp
	@$(CC) $(ConfigurationCPPCompileSwitches)  -o P1_Design.o P1_Design.cpp







$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS)
	@echo Compiling $(TARGET_MAIN)$(CPP_EXT)
	@$(CC) $(ConfigurationCPPCompileSwitches) -o  $(TARGET_MAIN)$(OBJ_EXT) $(TARGET_MAIN)$(CPP_EXT)

####################################################################
############## Predefined Instructions #############################
$(TARGET_NAME)$(EXE_EXT): $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) Cmp_Code.mak
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	@$(LINK_CMD)  $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(OXF_LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(INST_LIBS) \
	$(SOCK_LIB) \
	$(LINK_FLAGS) -o $(TARGET_NAME)$(EXE_EXT)

$(TARGET_NAME)$(LIB_EXT) : $(OBJS) $(ADDITIONAL_OBJS) Cmp_Code.mak
	@echo Building library $@
	@$(LIB_CMD) $(LIB_FLAGS) $(TARGET_NAME)$(LIB_EXT) $(OBJS) $(ADDITIONAL_OBJS)



clean:
	@echo Cleanup
	$(RM) Flying_Camera.o
	$(RM) Flight_Mgt.o
	$(RM) Communication.o
	$(RM) Electric_Power.o
	$(RM) Quadricopter.o
	$(RM) Camera.o
	$(RM) Operator.o
	$(RM) P1_Design.o
	$(RM) $(TARGET_MAIN)$(OBJ_EXT) $(ADDITIONAL_OBJS)
	$(RM) $(TARGET_NAME)$(LIB_EXT)
	$(RM) $(TARGET_NAME)$(EXE_EXT)

