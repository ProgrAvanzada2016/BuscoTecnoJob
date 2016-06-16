/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ManejadorOferta.h
 * Author: Alejandra
 *
 * Created on 16 de junio de 2016, 19:55
 */

#ifndef MANEJADOROFERTA_H
#define MANEJADOROFERTA_H


#include <map>
#include <list>
#include <string>
#include "../proyectoNetBean/conceptos/oferta.h"

using namespace std;

class ManejadorOferta {
public:
    static ManejadorOferta* getInstancia();
    
private:
    static ManejadorOferta* instancia;
    map<string, oferta*> oferta;
};

#endif /* MANEJADOROFERTA_H */




