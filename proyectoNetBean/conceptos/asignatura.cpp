/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   asignatura.cpp
 * Author: GrupoProgAvanzada2016
 * 
 * Created on 12 de junio de 2016, 17:19
 */

#include "asignatura.h"

asignatura::asignatura() {
}

asignatura::asignatura(const asignatura& orig) {
    this->codigo = orig.codigo;
    this->nombre = orig.nombre;
    this->creditos = orig.creditos;
}

asignatura::asignatura(string codigo, string nombre, int creditos) {
    this->codigo = codigo;
    this->nombre = nombre;
    this->creditos = creditos;
}

//getters

string asignatura::getCodigo() {
    return this->codigo;
}

string asignatura::getNombre() {
    return this->nombre;
}

int asignatura::getCreditos() {
    return this->creditos;
}

//setters

void setCodigo(string codigo) {
    this->codigo = codigo;
}

void setNombre(string nombre) {
    this->nombre = nombre;
}

void setCreditos(int creditos) {
    this->creditos = creditos;
}

asignatura::~asignatura() {
}

