/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   encargado.h
 * Author: GrupoProgAvanzada2016
 *
 * Created on 12 de junio de 2016, 14:22
 */

#ifndef ENCARGADO_H
#define ENCARGADO_H

#include "persona.h"
#include <iostream>
#include <stdio.h>
#include <string>
#include "dtDate.h"
using namespace std;

class encargado : public persona {
    private:
public:
    encargado();
    encargado(const encargado& orig);
    encargado(string cedula,string nombre,string apellido,dtDate fecha);
    virtual ~encargado();
    
};

#endif /* ENCARGADO_H */

