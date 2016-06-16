/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   fabrica.h
 * Author: GrupoProgAvanzada3
 *
 * Created on 2 de junio de 2016, 05:39 PM
 */

#ifndef FABRICA_H
#define FABRICA_H

#include "../interfaces/IcontroladorEstudiante.h"

class Fabrica {
public:
    static IcontroladorEstudiante* getIControladorEstudiantes();
    static IcontroladorOferta* getIControladorOferta();
private:

};

#endif /* FABRICA_H */

