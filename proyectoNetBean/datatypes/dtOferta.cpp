/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   dtOferta.cpp
 * Author: santiago
 * 
 * Created on June 17, 2016, 5:12 PM
 */

#include "dtOferta.h"

//Constructores
dtOferta::dtOferta() {
}

dtOferta::dtOferta(const dtOferta& orig) {
    this->nroExp = orig.nroExp;
    this->titulo = orig.titulo;
    this->descripcion = orig.descripcion;
    this->horas = orig.horas;
    this->rangoSalarial = orig.rangoSalarial;
    this->fechaInicio = orig.fechaInicio;
    this->fechaFin = orig.fechaFin;
    this->cantPuestos = orig.cantPuestos;
}

dtOferta::dtOferta(string nroExp, string titulo, string descripcion, dtRango rangoSalarial, int horas, date fechaI, date fechaF, int puestos) { 
    this->nroExp = nroExp;
    this->titulo = titulo;
    this->descripcion = descripcion;
    this->horas = horas;
    this->rangoSalarial = rangoSalarial;
    this->fechaInicio = fechaI;
    this->fechaFin = fechaF;
    this->cantPuestos = puestos;
}


//Geters
string dtOferta::getNroExp(){ 
    return this->nroExp;
}

string dtOferta::getTitulo(){ 
    return this->titulo;
}

string dtOferta::getDescripcion(){ 
    return this->descripcion;
}

dtRango dtOferta::getRangoSalarial(){ 
    return this->rangoSalarial;
}

int dtOferta::getHoras(){ 
    return this->horas;
}

date dtOferta::getFechaInicio(){ 
    return this->fechaInicio;
}

date dtOferta::getFechaFin(){ 
    return this->fechaFin;
}

int dtOferta::getCantPuestos(){ 
    return this->cantPuestos;
}


//Destructor
dtOferta::~dtOferta() {
}

