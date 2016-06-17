/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   dtEstudianteInfo.cpp
 * Author: santiago
 * 
 * Created on June 17, 2016, 9:23 AM
 */

#include "dtEstudianteInfo.h"

dtEstudianteInfo::dtEstudianteInfo() {
}

dtEstudianteInfo::dtEstudianteInfo(const DtEstudiante& orig) {
}

dtEstudianteInfo::~dtEstudianteInfo() {
}


string dtEstudianteInfo::GetApellido() const {
    return this->apellido;
}



string dtEstudianteInfo::GetNombre() const {
    return this->nombre;
}



string dtEstudianteInfo::GetCi() const {
    return this->ci;
}

