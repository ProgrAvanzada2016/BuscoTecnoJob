/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   IcontroladorEstudiante.h
 * Author: GrupoProgAvanzada3
 *
 * Created on 1 de junio de 2016, 03:41 PM
 */

#ifndef ICONTROLADORESTUDIANTE_H
#define ICONTROLADORESTUDIANTE_H

#include <map>
#include <list>
#include <string>
#include "../conceptos/Estudiante.h"
using namespace std;


class IcontroladorEstudiante {
public:
   
//    virtual void insertarEstudiante(DtEstudiante) = 0;
//    virtual list<DtEstudiante*> listarEstudiantes() = 0;
//    virtual DtEstudiante* getDataEstudiante(string) = 0;
    
    virtual void insertarEstudiante(DtEstudiante) = 0;
    virtual list<DtEstudiante*>* listarEstudiantes() = 0;
    virtual DtEstudiante* getDataEstudiante(string) = 0;
//    virtual Estudiante* getEstudiante(string) = 0;
    
private:

};

#endif /* ICONTROLADORESTUDIANTE_H */

 
    