/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   carrera.cpp
 * Author: GrupoProgAvanzada2016
 * 
 * Created on 12 de junio de 2016, 17:17
 */

#include "carrera.h"

carrera::carrera() {
}

carrera::carrera(const carrera& orig) {
    this->codigo=orig.codigo;
    this->nombre=orig.nombre;
}

 carrera::carrera(string codigo,string nombre){
    this->codigo=codigo;
    this->nombre=nombre;
 }
    //getters
 string carrera::getCodigo(){
     return this->codigo;
    }
 string carrera::getNombre(){
    return this->nombre;
 }
    //setters
void carrera::setCodigo(string codigo){
    this->codigo=codigo;
}

void carrera::setNombre(nombre){
    this->nombre=nombre;
}

carrera::~carrera() {
}

