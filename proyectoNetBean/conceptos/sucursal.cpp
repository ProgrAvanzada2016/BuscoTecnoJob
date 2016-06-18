/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   sucursal.cpp
 * Author: GrupoProgAvanzada2016
 * 
 * Created on 12 de junio de 2016, 16:33
 */

#include "sucursal.h"

sucursal::sucursal() {
}

sucursal::sucursal(const sucursal& orig) {
    this->nombre=orig.nombre;
    this->telefono=orig.telefono;
    this->direccion=orig.direccion;
}

sucursal::sucursal(string nombre,string telefono, string direccion){
    this->nombre=nombre;
    this->telefono=telefono;
    this->direccion=direccion;   
}

   
    //geters
string sucursal::getNombre(){
    return this->nombre;
}

string sucursal::getTelefono(){
    return this->telefono;
}

string sucursal::getDireccion(){
    return this->direccion;
}

    //setters
void sucursal::setNombre(string nombre){
    this->nombre=nombre;
    }

void sucursal::setTelefono(string telefono){
    this->telefono=telefono;
}

void sucursal::setDireccion(string direccion){
    this->direccion=direccion;
}
    

sucursal::~sucursal() {
}

