/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   EstudianteController.cpp
 * Author: emi
 * 
 * Created on 1 de junio de 2016, 03:24 PM
 */

#include "EstudianteController.h"
#include "../manejadores/ManejadorEstudiantes.h"
using namespace std;


EstudianteController::EstudianteController() {
}

EstudianteController::~EstudianteController() {

}

Estudiante* EstudianteController::getEstudiante(string ci) {
    return ManejadorEstudiantes::getInstancia()->getEstudiante(ci);
}

void EstudianteController::insertarEstudiante(DtEstudiante dte) {
    Estudiante* e = new Estudiante();
    e->Setci(dte.GetCi());
    e->Setnombre(dte.GetNombre());
    e->Setapellido(dte.GetApellido());
            
    ManejadorEstudiantes::getInstancia()->insertarEstudiante(e);
}

list<DtEstudiante*>* EstudianteController::listarEstudiantes() {
    return ManejadorEstudiantes::getInstancia()->listarEstudiantes();
}


DtEstudiante* EstudianteController::getDataEstudiante(string ci){
    return ManejadorEstudiantes::getInstancia()->getEstudiante(ci)->getDataType();
}











