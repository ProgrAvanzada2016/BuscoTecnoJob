/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   inscripcion.cpp
 * Author: GrupoProgAvanzada2016
 * 
 * Created on 12 de junio de 2016, 17:42
 */

#include "inscripcion.h"

inscripcion::inscripcion() {
}

inscripcion::inscripcion(const inscripcion& orig) {
}

inscripcion::inscripcion(date fecha, date **entrevistas){
    this->fecha=fecha;
    this->entrevistas=entrevistas;
}


inscripcion::date getFecha(){
    return this->fecha;
}


inscripcion::date** getEntrevistas(){
    return this->entrevistas;
}
 void setFecha(date fecha){
     this->fecha=fecha;
 }
 
void setEntrevistas(date **entrevistas){
    this->entrevistas=entrevistas;
}

inscripcion::~inscripcion() {
}

