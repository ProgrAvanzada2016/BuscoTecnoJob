/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   dtEstudianteInfo.h
 * Author: santiago
 *
 * Created on June 17, 2016, 9:23 AM
 */

#ifndef DTESTUDIANTEINFO_H
#define DTESTUDIANTEINFO_H
#include <string>
#include <list>

using namespace std;

class dtEstudianteInfo {
public:
    dtEstudianteInfo();
    dtEstudianteInfo(const DtEstudiante& orig);
    virtual ~dtEstudianteInfo();
    
    dtEstudianteInfo(string ci, string nombre, string apellido) :
        ci(ci), nombre(nombre), apellido(apellido) {
    }

    string GetApellido() const;
    string GetNombre() const;
    string GetCi() const;
    
    
private:
    string ci;
    string nombre;
    string apellido;
    date fechaNac;
    string telefono;
    int creditos;
    list<dtAsignatura*> listaAsignaturasAprob;
    list<dtOferta*> listaOferta;
};


#endif /* DTESTUDIANTEINFO_H */

