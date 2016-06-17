/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   dtAsignatura.h
 * Author: santiago
 *
 * Created on June 17, 2016, 2:45 PM
 */

#ifndef DTASIGNATURA_H
#define DTASIGNATURA_H
#include <string>

using namespace std;

class dtAsignatura {
public:
    dtAsignatura();
    dtAsignatura(const dtAsignatura& orig);
    dtAsignatura(string codigo, string nombre, int creditos);
    
    string GetCodigo();
    string GetNombre();
    int GetCreditos();
    
    virtual ~dtAsignatura();
private:
    string codigo;
    string nombre;
    int creditos;
};

#endif /* DTASIGNATURA_H */

