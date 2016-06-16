/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ManejadorEstudiantes.h
 * Author: emi
 *
 * Created on 1 de junio de 2016, 03:45 PM
 */

#ifndef MANEJADORESTUDIANTES_H
#define MANEJADORESTUDIANTES_H

#include <map>
#include <list>
#include <string>
#include "../conceptos/Estudiante.h"

using namespace std;

class ManejadorEstudiantes {
public:
    static ManejadorEstudiantes* getInstancia();
    
    void insertarEstudiante(Estudiante*);
    list<DtEstudiante*>* listarEstudiantes();
    Estudiante* getEstudiante(string);
private:
    static ManejadorEstudiantes* instancia;
    map<string, Estudiante*> estudiantes;
    
};

#endif /* MANEJADORESTUDIANTES_H */

