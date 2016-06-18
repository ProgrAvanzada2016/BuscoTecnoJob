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
#include "../conceptos/oferta.h"
#include "../datatypes/dtOferta.h"

using namespace std;


ControladorOferta::ControladorOferta() {
}

ControladorOferta::~ControladorOferta() {
}


oferta* ControladorOferta::getOferta(double nroExp) {
    return ManejadorOferta::getInstancia()->getOferta(nroExp);
}

void ControladorOferta::insertarOferta(dtOferta dte) {
    oferta* o = new oferta();
    o->SetNroExp(dte.GetCi());
  //  o->Setnombre(dte.GetNombre());
   // o->Setapellido(dte.GetApellido());
   string GetNroExp();
                   void SetNroExp(string val);
                   string GetTitulo();
                   void SetTitulo(string val);
                   string GetDescripcion();
                   void SetDescripcion(string val);
                   dtRango GetRangoSalarial();
                   dtRango SetRangoSalarial(DtRango val);
                   int GetHoras();
                   void SetHoras(int val);
                   dtDate GetFechaInicio();
                   void SetFechaInicio(int val);
                   dtDate GetFechaFin();
                   void SetFechaFin(int val);
                   int GetCantPuestos();
                   void SetCantPuestos(int val);
    
    ManejadorOferta::getInstancia()->insertarOferta(o);
}

list<DtOferta*>* ControladorOferta::listarOferta() {
    return ManejadorOferta::getInstancia()->listarOfertas();
}


dtOferta* ControladorOferta::getDtOferta(double nroExp){
    return ManejadorOferta::getInstancia()->getOferta(nroExp)->getDataType();
}
