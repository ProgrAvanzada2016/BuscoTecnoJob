/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ControladorEstudiante.cpp
 * Author: GrupoProgAvanzada3
 * 
 * Created on 1 de junio de 2016, 03:24 PM
 */

#include "ControladorEstudiante.h"
#include "../manejadores/ManejadorEstudiantes.h"
using namespace std;


ControladorEstudiante::ControladorEstudiante() {
}

ControladorEstudiante::~ControladorEstudiante() {

}

Estudiante* ControladorEstudiante::getEstudiante(string ci) {
    return ManejadorEstudiantes::getInstancia()->getEstudiante(ci);
}

void ControladorEstudiante::insertarEstudiante(DtEstudiante dte) {
    Estudiante* e = new Estudiante();
    e->Setci(dte.GetCi());
    e->Setnombre(dte.GetNombre());
    e->Setapellido(dte.GetApellido());
            
    ManejadorEstudiantes::getInstancia()->insertarEstudiante(e);
}

list<DtEstudiante*>* ControladorEstudiante::listarEstudiantes() {
    return ManejadorEstudiantes::getInstancia()->listarEstudiantes();
}


DtEstudiante* ControladorEstudiante::getDataEstudiante(string ci){
    return ManejadorEstudiantes::getInstancia()->getEstudiante(ci)->getDataType();
}











