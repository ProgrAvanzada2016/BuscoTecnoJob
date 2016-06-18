/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   oferta.cpp
 * Author: GrupoProgAvanzada2016
 * 
 * Created on 12 de junio de 2016, 15:38
 */
#include "oferta.h"

oferta::oferta() {
}

oferta::oferta(const oferta& orig) {

    this->nroExp = orig.nroExp;
    this->titulo = orig.titulo;
    this->descripcion = orig.descripcion;
    this->rangoSalarial = orig.rangoSalarial;
    this->horas = orig.horas;
    this->fechaInicio = orig.fechaInicio;
    this->fechaFin = orig.fechaFin;
    this->cantPuestos = orig.cantPuestos; 
    
}

oferta::oferta(string nroExp, string titulo, string descripcion,dtRango rangoSalarial,int horas,dtDate fechaInicio,dtDate fechaFin,int cantPuestos){
    
    this->nroExp = nroExp;
    this->titulo = titulo;
    this->descripcion = descripcion;
    this->rangoSalarial = rangoSalarial;
    this->horas = horas;
    this->fechaInicio = fechaInicio;
    this->fechaFin = fechaFin;
    this->cantPuestos = cantPuestos; 
    
}

oferta::~oferta() {
    
}

string oferta::GetNroExp(){
    
    return this->nroExp;
    
}

void oferta::SetNroExp(string val){

    this->nroExp = val;
    
}
string oferta::GetTitulo(){
    
    return this->titulo;
    
}
void oferta::SetTitulo(string val){
    
    this->titulo = val;
    
}

string oferta::GetDescripcion(){
    
    return this->descripcion;
    
}

void oferta::SetDescripcion(string val){
    
    this->descripcion = val;

}

dtRango oferta::GetRangoSalarial(){
    
    return this->rangoSalarial;


}

dtRango oferta::SetRangoSalarial(DtRango val){

    this->rangoSalarial = val;
}

int oferta::GetHoras(){
    
    return this->horas;
    
}

void oferta::SetHoras(int val){
    
    this->horas = val;

}

dtDate oferta::GetFechaInicio(){

    return this->fechaInicio;
}
void oferta::SetFechaInicio(int val){

    this->fechaInicio = val;
}

dtDate oferta::GetFechaFin(){
    
    return this->fechaFin;

}

void oferta::SetFechaFin(int val){

    this->fechaFin = val;

}

int oferta::GetCantPuestos(){

    return this->cantPuestos;
    
}

void oferta::SetCantPuestos(int val){

    this->cantPuestos = val;
    
}


bool oferta::ofertaActiva(){
    
    
}

dtOferta oferta::crearDtOferta(){


}

DtOferta oferta::crearDtOferta(){


}

void oferta::Modificar(string titulo, string descripcion, dtRango rangoSalarial, int horas, dtDate fechaInicio, dtDate fechaFin, int cantPuestos){

    SetTitulo(titulo);
    SetDescripcion(descripcion);
    SetRangoSalarial(DtRango rangoSalarial);
    SetHoras(horas);
    SetFechaInicio(fechaInicio);
    SetFechaFin(fechaFin);
    SetCantPuestos(cantPuestos);
    
        
}

 void oferta::InscribeEstudianteOferta(DtEstudiante e){
 
 }
                   
 void oferta::AltaEntrevista(string ci,date fecha){
 
 
 }
