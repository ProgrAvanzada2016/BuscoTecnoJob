/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ManejadorOferta.cpp
 * Author: Alejandra
 * 
 * Created on 16 de junio de 2016, 19:55
 */

#include "ManejadorOferta.h"

ManejadorOferta* ManejadorOferta::instancia = NULL;  

ManejadorOferta* ManejadorOferta::getInstancia() {
    if (!instancia){
        instancia = new ManejadorOferta;   
    }
    return instancia;
}

oferta* ManejadorOferta::getEstudiante(string ci) {
    return oferta.find(ci)->second;
}
