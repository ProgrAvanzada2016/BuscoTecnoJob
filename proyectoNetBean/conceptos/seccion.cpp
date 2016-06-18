/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   seccion.cpp
 * Author: GrupoProgAvanzada2016
 * 
 * Created on 12 de junio de 2016, 15:47
 */

#include "seccion.h"

seccion::seccion() {
}

seccion::seccion(const seccion& orig) {
    this->nombre=nombre;
    this->interno=interno;
}

seccion::seccion(string nombre,int interno){
    this->nombre=nombre;
    this->interno=interno;
}

//geters
string seccion::getNombre(){
    return this->nombre;
}

 int seccion::getInterno(){
    return this->interno;
 }
 //setters
 
void seccion::setNombre(){
    this->nombre=nombre;
}

void seccion::setInterno(){
    this->interno=interno;
}

seccion::~seccion() {
}

