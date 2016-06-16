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
using namespace std;

class Persona {
    private:
        string ci;
        string nombre;
        string apellido;

public:
    Persona();
    Persona(const Persona& orig);
        string Getci() { return ci; }
        void Setci(string val) { ci = val; }
        string Getnombre() { return nombre; }
        void Setnombre(string val) { nombre = val; }
        string Getapellido() { return apellido; }
        void Setapellido(string val) { this->apellido = val; }
        
    

};

#endif /* PERSONA_H */

