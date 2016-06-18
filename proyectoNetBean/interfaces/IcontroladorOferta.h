/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   IcontroladorOferta.h
 * Author: Alejandra
 *
 * Created on 16 de junio de 2016, 19:53
 */

#ifndef ICONTROLADOROFERTA_H
#define ICONTROLADOROFERTA_H
#include <map>
#include <list>
#include <string>
#include "../conceptos/oferta.h"
using namespace std;


#endif /* ICONTROLADOROFERTA_H */




class IcontroladorOferta {
public:
   
   virtual void insertarOferta(DtOferta) = 0;
   virtual list<DtOferta*>* listarOferta() = 0;
   virtual DtOferta* getDtOferta(string) = 0; 
   virtual Oferta* getOferta(string) = 0;
    
   
    //FUNCIONES PARA ALTA DE ENTREVISTA(ale)
    listaOfertasActivas (): Set (DtOferta){
    }
    
    obtenerListaEstOf(Nro_exp:string):Set(DtEstudiante){
    }
    
    altaEntrevista(ci,fecha){
    }
    
private:

};

#endif /* ICONTROLADORESTUDIANTE_H */

