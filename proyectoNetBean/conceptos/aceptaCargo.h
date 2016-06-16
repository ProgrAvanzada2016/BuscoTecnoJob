/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   aceptaCargo.h
 * Author: GrupoProgAvanzada2016
 *
 * Created on 12 de junio de 2016, 17:39
 */

#ifndef ACEPTACARGO_H
#define ACEPTACARGO_H

#include <iostream>
#include <stdio.h>
#include <string>
#include "dtAcepto.h"
using namespace std;

class aceptaCargo {
private:
    dtAcepto datos;
public:
    aceptaCargo();
    aceptaCargo(const aceptaCargo& orig);
    aceptaCargo(dtAcepto datos);
    virtual ~aceptaCargo();


};

#endif /* ACEPTACARGO_H */

