/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ControladorOferta.cpp
 * Author: Alejandra
 * 
 * Created on 16 de junio de 2016, 19:22
 */

#include "ControladorOferta.h"
#include "../manejadores/ManejadorOferta.h"

using namespace std;


ControladorOferta::ControladorOferta() {
}

ControladorOferta::~ControladorOferta() {
}


oferta* ControladorOferta::getOferta(double nroExp) {
    return ManejadorOferta::getInstancia()->getOferta(nroExp);
}

void ControladorOferta::insertarOferta(DtOferta dte) {
    oferta* o = new oferta();
 //   o->Setci(dte.GetCi());
  //  o->Setnombre(dte.GetNombre());
   // o->Setapellido(dte.GetApellido());
            
    ManejadorOferta::getInstancia()->insertarOferta(o);
}

list<DtOferta*>* ControladorOferta::listarOferta() {
    return ManejadorOferta::getInstancia()->listarOfertas();
}


DtOferta* ControladorOferta::getDtOferta(double nroExp){
    return ManejadorOferta::getInstancia()->getOferta(nroExp)->getDataType();
}
