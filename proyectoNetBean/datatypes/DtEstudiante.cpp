/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DtEstudiante.cpp
 * Author: GrupoProgAvanzada3
 * 
 * Created on 2 de junio de 2016, 05:46 PM
 */

#include "DtEstudiante.h"

DtEstudiante::DtEstudiante() {
}

DtEstudiante::DtEstudiante(const DtEstudiante& orig) {
}

DtEstudiante::~DtEstudiante() {
}


string DtEstudiante::GetApellido() const {
    return apellido;
}



string DtEstudiante::GetNombre() const {
    return nombre;
}



string DtEstudiante::GetCi() const {
    return ci;
}

