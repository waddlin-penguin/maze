#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux
CND_DLIB_EXT=so
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/drawing/grid_drawer.o \
	${OBJECTDIR}/generation_logic/maze_algorithm.o \
	${OBJECTDIR}/generation_logic/randomized_kruskal.o \
	${OBJECTDIR}/graph/graph.o \
	${OBJECTDIR}/main_ui/main.o \
	${OBJECTDIR}/main_ui/user_prompter.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/maze

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/maze: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/maze ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/drawing/grid_drawer.o: drawing/grid_drawer.cpp
	${MKDIR} -p ${OBJECTDIR}/drawing
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/drawing/grid_drawer.o drawing/grid_drawer.cpp

${OBJECTDIR}/generation_logic/maze_algorithm.o: generation_logic/maze_algorithm.cpp
	${MKDIR} -p ${OBJECTDIR}/generation_logic
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/generation_logic/maze_algorithm.o generation_logic/maze_algorithm.cpp

${OBJECTDIR}/generation_logic/randomized_kruskal.o: generation_logic/randomized_kruskal.cpp
	${MKDIR} -p ${OBJECTDIR}/generation_logic
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/generation_logic/randomized_kruskal.o generation_logic/randomized_kruskal.cpp

${OBJECTDIR}/graph/graph.o: graph/graph.cpp
	${MKDIR} -p ${OBJECTDIR}/graph
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/graph/graph.o graph/graph.cpp

${OBJECTDIR}/main_ui/main.o: main_ui/main.cpp
	${MKDIR} -p ${OBJECTDIR}/main_ui
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main_ui/main.o main_ui/main.cpp

${OBJECTDIR}/main_ui/user_prompter.o: main_ui/user_prompter.cpp
	${MKDIR} -p ${OBJECTDIR}/main_ui
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main_ui/user_prompter.o main_ui/user_prompter.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
