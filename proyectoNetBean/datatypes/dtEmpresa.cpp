/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   dtEmpresa.cpp
 * Author: clobes
 * 
 * Created on 17 de junio de 2016, 09:39 PM
 */

#include "dtEmpresa.h"

dtEmpresa::dtEmpresa(string rut, string nom) {
    this->rut=rut;
    this->nombre=nom;
}

dtEmpresa::dtEmpresa(const dtEmpresa& orig) {
    this->rut=orig.rut;
    this->nombre=orig.nombre;
}

dtEmpresa::~dtEmpresa() {
}

string dtEmpresa::getNombre(){
    return this->nombre;
}

string dtEmpresa::getRut(){
    return this->rut;
}