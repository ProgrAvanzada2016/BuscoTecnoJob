/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   dtAcepto.h
 * Author: GrupoProgAvanzada2016
 *
 * Created on 12 de junio de 2016, 16:40
 */

#ifndef DTACEPTO_H
#define DTACEPTO_H

#include <iostream>
#include <stdio.h>
#include <string>
#include "dtDate.h"
using namespace std;

class dtAcepto {
    private:
        float sueldo;
        dtDate fechaAcepto; 
public:
    dtAcepto(); //constructor por defecto
    dtAcepto(const dtAcepto& orig);//constructor por copia
    dtAcepto(float sueldo,dtDate fechaAcepto);//constructor por parametro
    float getSueldo()const;
    dtDate getFechaAcepto()const;
    virtual ~dtAcepto();

};

#endif /* DTACEPTO_H */

