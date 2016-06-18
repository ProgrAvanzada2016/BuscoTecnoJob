/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   empresa.h
 * Author: GrupoProgAvanzada2016
 *
 * Created on 12 de junio de 2016, 16:36
 */

#ifndef EMPRESA_H
#define EMPRESA_H

#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

class empresa {
    private:
        string rut;
        string nombre;
public:
    empresa();
    empresa(const empresa& orig);
    empresa(string rut,string nombre);
    string getRut();
    string getNombre();
    void setRut();
    void setNombre();  
    virtual ~empresa();

};

#endif /* EMPRESA_H */

