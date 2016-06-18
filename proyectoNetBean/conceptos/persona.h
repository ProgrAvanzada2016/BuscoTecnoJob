/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Persona.h
 * Author: emi
 *
 * Created on 1 de junio de 2016, 03:22 PM
 */

#ifndef PERSONA_H
#define PERSONA_H

#include <string>
#include "date.h"
using namespace std;

class Persona {
    private:
        string ci;
        string nombre;
        string apellido;
        date fechaNac;

public:
    Persona(string ci, string nom, string ape, date fec);
    Persona(const Persona& orig);
        string getCi();
        void setCi(string ci);
        string getNombre();
        void setNombre(string nom);
        string getApellido();
        void setApellido(string ape);
        void getfecha();
        
    

};

#endif /* PERSONA_H */
