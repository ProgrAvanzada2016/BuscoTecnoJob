/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   seccion.h
 * Author: GrupoProgAvanzada2016
 *
 * Created on 12 de junio de 2016, 15:47
 */

#ifndef SECCION_H
#define SECCION_H
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

class seccion {
    private:
            string nombre;
            int interno;
    public:
            seccion();
            seccion(const seccion& orig);
            seccion(string nombre,int interno);
            string getNombre();
            int getInterno();
            void setNombre();
            void setInterno();
            virtual ~seccion();
            
};

#endif /* SECCION_H */

