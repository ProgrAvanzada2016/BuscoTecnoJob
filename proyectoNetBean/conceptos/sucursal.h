/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   sucursal.h
 * Author: GrupoProgAvanzada2016
 *
 * Created on 12 de junio de 2016, 16:33
 */

#ifndef SUCURSAL_H
#define SUCURSAL_H

#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

class sucursal {
    private:
        string nombre;
        string telefono;
        string direccion;
public:
    sucursal();
    sucursal(const sucursal& orig);
    sucursal(string nombre,string telefono, string direccion);
    
    //geters
    string getNombre();
    string getTelefono();
    string getDireccion();
    //setters
    void setNombre(string nombre);
    void setTelefono(string telefono);
    void setDireccion(string direccion);
    
    virtual ~sucursal();

};

#endif /* SUCURSAL_H */

