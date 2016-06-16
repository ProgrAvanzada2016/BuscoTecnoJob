/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   carrera.h
 * Author: GrupoProgAvanzada2016
 *
 * Created on 12 de junio de 2016, 17:17
 */

#ifndef CARRERA_H
#define CARRERA_H

#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

class carrera {
private:
        string codigo;
        string nombre;
public:
    carrera();
    carrera(const carrera& orig);
    carrera(string codigo,string nombre);
    virtual ~carrera();

};

#endif /* CARRERA_H */

