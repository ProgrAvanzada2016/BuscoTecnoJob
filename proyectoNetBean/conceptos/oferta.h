/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   oferta.h
 * Author: GrupoProgAvanzada2016
 *
 * Created on 12 de junio de 2016, 15:38
 */

#ifndef OFERTA_H
#define OFERTA_H

#include <iostream>
#include <stdio.h>
#include <string>
#include "dtDate.h"
#include "dtRango.h"
using namespace std;


class oferta {
            private:
                double nroExp;
                string titulo;
                string descripcion;
                dtRango rangoSalarial;
                int horas;
                dtDate fechaInicio;
                dtDate fechaFin;
                int cantPuestos;
                
                
            public:
                   oferta();
                   oferta(const oferta& orig);
                   oferta(double nroExp, string titulo, string descripcion,dtRango rangoSalarial,int horas,dtDate fechaInicio,dtDate fechaFin,int cantPuestos);
                   virtual ~oferta();
};

#endif /* OFERTA_H */

