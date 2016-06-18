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


void ControladorOferta::insertarOferta(dtOferta dte) {
    oferta* o = new oferta();
    o->SetNroExp(dte.getNroExp());
    o->SetTitulo(dte.getTitulo()); 
    o->SetDescripcion(dte.getDescripcion());
    o->SetRangoSalarial(dte.getRangoSalarial());               
    o->SetHoras(dte.getHoras());              
    o->SetFechaInicio(dte.getFechaInicio());             
    o->SetFechaFin(dte.GetFechaFin());               
    o->SetCantPuestos(dte.GetCantPuestos());      
}           
                 
                      
    ManejadorOferta::getInstancia()->insertarOferta(o);
}

list<DtOferta*>* ControladorOferta::listarOferta() {
    return ManejadorOferta::getInstancia()->listarOfertas();
}


dtOferta* ControladorOferta::getDtOferta(double nroExp){
    return ManejadorOferta::getInstancia()->getOferta(nroExp)->getDataType();
}

oferta* ControladorOferta::getOferta(double nroExp) {
    return ManejadorOferta::getInstancia()->getOferta(nroExp);
}


 //FUNCIONES PARA ALTA DE ENTREVISTA(ale)
    listaOfertasActivas (): Set (DtOferta){
    }
    
    obtenerListaEstOf(Nro_exp:string):Set(DtEstudiante){
    }
    
    altaEntrevista(ci,fecha){
    }