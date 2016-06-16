/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ManejadorEstudiantes.cpp
 * Author: GrupoProgAvanzada3
 * 
 * Created on 1 de junio de 2016, 03:45 PM
 */

#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;
#include "ManejadorEstudiante.h"

ManejadorEstudiante* ManejadorEstudiante::instancia = NULL;  

ManejadorEstudiante* ManejadorEstudiante::getInstancia() {
    if (!instancia){
        instancia = new ManejadorEstudiante;   
    }
    return instancia;
}

Estudiante* ManejadorEstudiante::getEstudiante(string ci) {
    return estudiantes.find(ci)->second;
}

/*void ManejadorEstudiantes::insertarEstudiante(Estudiante* e) {
      estudiantes.insert ( std::pair<string,Estudiante*>(e->Getci(),e) );
}

list<DtEstudiante*>* ManejadorEstudiantes::listarEstudiantes() {
    list<DtEstudiante*>* result = new list<DtEstudiante*>;
    for (std::map<string, Estudiante*>::iterator it=estudiantes.begin(); it!=estudiantes.end(); ++it){
        result->push_front(it->second->getDataType());
    }
    return result;    
}

