/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   dtEmpresa.h
 * Author: clobes
 *
 * Created on 17 de junio de 2016, 09:39 PM
 */

#ifndef DTEMPRESA_H
#define DTEMPRESA_H

#include <string>
using namespace std;

class dtEmpresa {
public:
    dtEmpresa(string rut, string nombre);
    dtEmpresa(const dtEmpresa& orig);
    virtual ~dtEmpresa();
    //geters
    string getRut();
    string getNombre();
private:
    string rut;
    string nombre;
};

#endif /* DTEMPRESA_H */

