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
#include <list>
#include "../datatypes/date.h"
#include "../datatypes/dtRango.h"
#include "../datatypes/DtEstudiante.h"

using namespace std;

class oferta {
            private:
                double nroExp;
                string titulo;
                string descripcion;
                dtRango rangoSalarial;
                int horas;
                date fechaInicio;
                date fechaFin;
                int cantPuestos;
    
                        
            public:
                   //Constructores
                   oferta();
                   oferta(const oferta& orig);
                   oferta(string nroExp, string titulo, string descripcion,dtRango rangoSalarial,int horas,date fechaInicio,date fechaFin,int cantPuestos);
                   virtual ~oferta();
                   
                   //Geters y Seters
                   string GetNroExp();
                   void SetNroExp(string val);
                   string GetTitulo();
                   void SetTitulo(string val);
                   string GetDescripcion();
                   void SetDescripcion(string val);
                   dtRango GetRangoSalarial();
                   SetRangoSalarial(DtRango val);
                   int GetHoras();
                   void SetHoras(int val);
                   date GetFechaInicio();
                   void SetFechaInicio(int val);
                   date GetFechaFin();
                   void SetFechaFin(int val);
                   int GetCantPuestos();
                   void SetCantPuestos(int val);
                   
                   //Operaciones 
                   bool ofertaActiva();
                  
                   list <DtEstudiante> GetListaEstOf();
                   
                   dtOferta crearDtOferta();
                   
                   void Modificar(string titulo, string descripcion,dtRango rangoSalarial,int horas,date fechaInicio,date fechaFin,int cantPuestos);
                   
                   void InscribeEstudianteOferta(Estudiante e);
                   
                   void AltaEntrevista(string ci,date fecha);
}

#endif /* OFERTA_H */

