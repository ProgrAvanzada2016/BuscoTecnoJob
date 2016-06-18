/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   aprobacion.cpp
 * Author: GrupoProgAvanzada2016
 * 
 * Created on 12 de junio de 2016, 17:45
 */

#include "aprobacion.h"

aprobacion::aprobacion() {
}

aprobacion::aprobacion(const aprobacion& orig) {
    this->fechaApro=orig.fechaApro;
    this->nota=orig.nota;
}

aprobacion::aprobacion(date fechaApro, int nota){
    this->fechaApro=fechaApro;
    this->nota=nota;
}
    //getters
date aprobacion::getFechaApro(){
 return this->fechaApro;
}
    
int aprobacion::getNota(){
    this->nota;
}
    
    //setters
void aprobacion::setFechaApro(date fechaApro){
    this->fechaApro=fechaApro;
    }

void aprobacion::setNota(int nota){
this->nota=nota;
}

aprobacion::~aprobacion() {
}

