/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   dtAcepto.cpp
 * Author: GrupoProgAvanzada2016
 * 
 * Created on 12 de junio de 2016, 16:40
 */

#include "dtAcepto.h"
#include "dtDate.h"

dtAcepto::dtAcepto() {
}

dtAcepto::dtAcepto(const dtAcepto& orig) {
}

dtAcepto::dtAcepto(float sueldo, dtDate fechaAcepto){
    this->fechaAcepto=fechaAcepto;
    this->sueldo=sueldo;
}

  
float dtAcepto::getSueldo()const{
return sueldo;
}


dtDate getFechaAcepto()const{
return fechaAcepto;
}

dtAcepto::~dtAcepto() {
}


    
   
    float getSueldo()const;
    dtDate getFechaAcepto()const;