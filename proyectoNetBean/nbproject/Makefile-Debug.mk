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
CND_PLATFORM=Cygwin-Windows
CND_DLIB_EXT=dll
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/conceptos/Estudiante.o \
	${OBJECTDIR}/conceptos/EstudianteEmiliano.o \
	${OBJECTDIR}/conceptos/Persona.o \
	${OBJECTDIR}/conceptos/PersonaEmiliano.o \
	${OBJECTDIR}/conceptos/aceptaCargo.o \
	${OBJECTDIR}/conceptos/aprobacion.o \
	${OBJECTDIR}/conceptos/asignatura.o \
	${OBJECTDIR}/conceptos/carrera.o \
	${OBJECTDIR}/conceptos/date.o \
	${OBJECTDIR}/conceptos/empresa.o \
	${OBJECTDIR}/conceptos/encargado.o \
	${OBJECTDIR}/conceptos/estudiante.o \
	${OBJECTDIR}/conceptos/inscripcion.o \
	${OBJECTDIR}/conceptos/oferta.o \
	${OBJECTDIR}/conceptos/persona.o \
	${OBJECTDIR}/conceptos/seccion.o \
	${OBJECTDIR}/conceptos/sucursal.o \
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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/proyectonetbean.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/proyectonetbean.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/proyectonetbean ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/conceptos/Estudiante.o: conceptos/Estudiante.cpp 
	${MKDIR} -p ${OBJECTDIR}/conceptos
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/conceptos/Estudiante.o conceptos/Estudiante.cpp

${OBJECTDIR}/conceptos/EstudianteEmiliano.o: conceptos/EstudianteEmiliano.cpp 
	${MKDIR} -p ${OBJECTDIR}/conceptos
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/conceptos/EstudianteEmiliano.o conceptos/EstudianteEmiliano.cpp

${OBJECTDIR}/conceptos/Persona.o: conceptos/Persona.cpp 
	${MKDIR} -p ${OBJECTDIR}/conceptos
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/conceptos/Persona.o conceptos/Persona.cpp

${OBJECTDIR}/conceptos/PersonaEmiliano.o: conceptos/PersonaEmiliano.cpp 
	${MKDIR} -p ${OBJECTDIR}/conceptos
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/conceptos/PersonaEmiliano.o conceptos/PersonaEmiliano.cpp

${OBJECTDIR}/conceptos/aceptaCargo.o: conceptos/aceptaCargo.cpp 
	${MKDIR} -p ${OBJECTDIR}/conceptos
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/conceptos/aceptaCargo.o conceptos/aceptaCargo.cpp

${OBJECTDIR}/conceptos/aprobacion.o: conceptos/aprobacion.cpp 
	${MKDIR} -p ${OBJECTDIR}/conceptos
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/conceptos/aprobacion.o conceptos/aprobacion.cpp

${OBJECTDIR}/conceptos/asignatura.o: conceptos/asignatura.cpp 
	${MKDIR} -p ${OBJECTDIR}/conceptos
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/conceptos/asignatura.o conceptos/asignatura.cpp

${OBJECTDIR}/conceptos/carrera.o: conceptos/carrera.cpp 
	${MKDIR} -p ${OBJECTDIR}/conceptos
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/conceptos/carrera.o conceptos/carrera.cpp

${OBJECTDIR}/conceptos/date.o: conceptos/date.cpp 
	${MKDIR} -p ${OBJECTDIR}/conceptos
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/conceptos/date.o conceptos/date.cpp

${OBJECTDIR}/conceptos/empresa.o: conceptos/empresa.cpp 
	${MKDIR} -p ${OBJECTDIR}/conceptos
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/conceptos/empresa.o conceptos/empresa.cpp

${OBJECTDIR}/conceptos/encargado.o: conceptos/encargado.cpp 
	${MKDIR} -p ${OBJECTDIR}/conceptos
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/conceptos/encargado.o conceptos/encargado.cpp

${OBJECTDIR}/conceptos/estudiante.o: conceptos/estudiante.cpp 
	${MKDIR} -p ${OBJECTDIR}/conceptos
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/conceptos/estudiante.o conceptos/estudiante.cpp

${OBJECTDIR}/conceptos/inscripcion.o: conceptos/inscripcion.cpp 
	${MKDIR} -p ${OBJECTDIR}/conceptos
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/conceptos/inscripcion.o conceptos/inscripcion.cpp

${OBJECTDIR}/conceptos/oferta.o: conceptos/oferta.cpp 
	${MKDIR} -p ${OBJECTDIR}/conceptos
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/conceptos/oferta.o conceptos/oferta.cpp

${OBJECTDIR}/conceptos/persona.o: conceptos/persona.cpp 
	${MKDIR} -p ${OBJECTDIR}/conceptos
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/conceptos/persona.o conceptos/persona.cpp

${OBJECTDIR}/conceptos/seccion.o: conceptos/seccion.cpp 
	${MKDIR} -p ${OBJECTDIR}/conceptos
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/conceptos/seccion.o conceptos/seccion.cpp

${OBJECTDIR}/conceptos/sucursal.o: conceptos/sucursal.cpp 
	${MKDIR} -p ${OBJECTDIR}/conceptos
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/conceptos/sucursal.o conceptos/sucursal.cpp

${OBJECTDIR}/controladores/EstudianteController.o: controladores/EstudianteController.cpp 
	${MKDIR} -p ${OBJECTDIR}/controladores
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/controladores/EstudianteController.o controladores/EstudianteController.cpp

${OBJECTDIR}/datatypes/DtEstudiante.o: datatypes/DtEstudiante.cpp 
	${MKDIR} -p ${OBJECTDIR}/datatypes
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/datatypes/DtEstudiante.o datatypes/DtEstudiante.cpp

${OBJECTDIR}/fabricas/fabrica.o: fabricas/fabrica.cpp 
	${MKDIR} -p ${OBJECTDIR}/fabricas
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/fabricas/fabrica.o fabricas/fabrica.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

${OBJECTDIR}/manejadores/ManejadorEstudiantes.o: manejadores/ManejadorEstudiantes.cpp 
	${MKDIR} -p ${OBJECTDIR}/manejadores
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/manejadores/ManejadorEstudiantes.o manejadores/ManejadorEstudiantes.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/proyectonetbean.exe

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
