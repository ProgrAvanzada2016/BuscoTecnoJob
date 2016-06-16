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
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/conceptos/Estudiante.o \
	${OBJECTDIR}/conceptos/Persona.o \
	${OBJECTDIR}/controladores/EstudianteController.o \
	${OBJECTDIR}/datatypes/DtEstudiante.o \
	${OBJECTDIR}/fabricas/fabrica.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/manejadores/ManejadorEstudiantes.o


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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/laboratoriopa

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/laboratoriopa: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/laboratoriopa ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/conceptos/Estudiante.o: conceptos/Estudiante.cpp 
	${MKDIR} -p ${OBJECTDIR}/conceptos
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/conceptos/Estudiante.o conceptos/Estudiante.cpp

${OBJECTDIR}/conceptos/Persona.o: conceptos/Persona.cpp 
	${MKDIR} -p ${OBJECTDIR}/conceptos
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/conceptos/Persona.o conceptos/Persona.cpp

${OBJECTDIR}/controladores/EstudianteController.o: controladores/EstudianteController.cpp 
	${MKDIR} -p ${OBJECTDIR}/controladores
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/controladores/EstudianteController.o controladores/EstudianteController.cpp

${OBJECTDIR}/datatypes/DtEstudiante.o: datatypes/DtEstudiante.cpp 
	${MKDIR} -p ${OBJECTDIR}/datatypes
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/datatypes/DtEstudiante.o datatypes/DtEstudiante.cpp

${OBJECTDIR}/fabricas/fabrica.o: fabricas/fabrica.cpp 
	${MKDIR} -p ${OBJECTDIR}/fabricas
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/fabricas/fabrica.o fabricas/fabrica.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

${OBJECTDIR}/manejadores/ManejadorEstudiantes.o: manejadores/ManejadorEstudiantes.cpp 
	${MKDIR} -p ${OBJECTDIR}/manejadores
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/manejadores/ManejadorEstudiantes.o manejadores/ManejadorEstudiantes.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/laboratoriopa

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
