/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   empresa.cpp
 * Author: GrupoProgAvanzada2016
 * 
 * Created on 12 de junio de 2016, 16:36
 */

#include "empresa.h"

empresa::empresa() {
}

empresa::empresa(const empresa& orig) {
    this->rut = orig.rut;
    this->nombre = orig.nombre;
}

empresa::empresa(string rut, string nombre) {
    this->rut = rut;
    this->nombre = nombre;
}

string empresa::getRut() {
    return this->rut;
}

string empresa::getNombre() {
    return this->nombre;
}

void empresa::setRut(string rut) {
    this->rut = rut;
}

void empresa::getNombre(string nombre) {
    this->nombre = nombre;
}

empresa::~empresa() {
}

