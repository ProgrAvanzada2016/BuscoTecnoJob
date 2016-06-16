/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ControladorEstudiante.h
 * Author: GrupoProgAvanzada3
 *
 * Created on 1 de junio de 2016, 03:24 PM
 */

#ifndef ESTUDIANTECONTROLLER_H
#define ESTUDIANTECONTROLLER_H
using namespace std;

#include "../interfaces/IcontroladorEstudiante.h"

class ControladorEstudiante : public IcontroladorEstudiante {
public:
    ControladorEstudiante();
    virtual ~ControladorEstudiante();


    virtual void insertarEstudiante(DtEstudiante);
    virtual list<DtEstudiante*>* listarEstudiantes();
    virtual DtEstudiante* getDataEstudiante(string);
    virtual Estudiante* getEstudiante(string);

private:
    
    

};

#endif /* ESTUDIANTECONTROLLER_H */

