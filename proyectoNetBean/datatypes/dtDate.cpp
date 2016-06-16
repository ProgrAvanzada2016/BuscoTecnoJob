/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   dtDate.cpp
 * Author: GrupoProgAvanzada2016
 * 
 * Created on 12 de junio de 2016, 13:24
 */

#include "dtDate.h"   //FALTA CONTROL SOLICITADO CON EXCEPTION
#include <stdexcept>



 dtDate::dtDate() {
}

 dtDate::dtDate(const dtDate&fecha) {
    this->dd = fecha.dd;
    this->mm = fecha.mm;
    this->aaaa = fecha.aaaa;
}

 dtDate::dtDate(int d, int m, int a) {
     
        if((d>=1&&d<=31)&&(m>=1&&m<=12)&&(a>=1900)){
            this->dd = d;
            this->mm = m;
            this->aaaa = a;
        }
        else{
           throw std::invalid_argument("Valores de fecha no son correctos"); 
        }
 }
     
 
 
int dtDate::getDay() {
    return this->dd;
}

int dtDate::getMonth() {
    return this->mm;
}

int dtDate::getYear() {
    return this->aaaa;
}

dtDate::~dtDate() {
}



