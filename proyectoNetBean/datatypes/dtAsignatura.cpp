/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   dtAsignatura.cpp
 * Author: santiago
 * 
 * Created on June 17, 2016, 2:45 PM
 */

#include "dtAsignatura.h"


//Constructores
dtAsignatura::dtAsignatura() {
}

dtAsignatura::dtAsignatura(const dtAsignatura& orig) {
    this->codigo = orig.codigo;
    this->nombre = orig.nombre;
    this->creditos = orig.creditos;
}

dtAsignatura::dtAsignatura(string codigo, string nombre, int creditos){ 
    this->codigo = codigo;
    this->nombre = nombre;
    this->creditos = creditos;
}

//Geters
string dtAsignatura::GetCodigo(){ 
    return this->codigo;
}

string dtAsignatura::GetNombre(){ 
    return this->nombre;
}

int dtAsignatura::GetCreditos() { 
    return this->creditos;
}

//Destructor
dtAsignatura::~dtAsignatura() {
}

