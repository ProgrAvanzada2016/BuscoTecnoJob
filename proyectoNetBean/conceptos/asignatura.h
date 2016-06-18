/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   asignatura.h
 * Author: GrupoProgAvanzada2016
 *
 * Created on 12 de junio de 2016, 17:19
 */

#ifndef ASIGNATURA_H
#define ASIGNATURA_H


#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

class asignatura {
private:
       string codigo;
       string nombre;
       int creditos;
public:
    asignatura();
    asignatura(const asignatura& orig);
    asignatura(string codigo, string nombre, int creditos);
    //getters
    string getCodigo();
    string getNombre();
    int getCreditos();
    //setters
    void setCodigo(string codigo);
    void setNombre(string nombre);
    void setCreditos(int creditos);
    
    virtual ~asignatura();
private:

};

#endif /* ASIGNATURA_H */

