/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ControladorOferta.h
 * Author: Alejandra
 *
 * Created on 16 de junio de 2016, 19:22
 */

#ifndef CONTROLADOROFERTA_H
#define CONTROLADOROFERTA_H
using namespace std;
#include "../interfaces/IcontroladorOferta.h"


class ControladorOferta: public IcontroladorOferta {
public:
    ControladorOferta();
   
    virtual ~ControladorOferta();
    
    
    virtual void insertarOferta(dtOferta dte);
    virtual list<dtOferta*>* listarOfertas();
    virtual dtOferta* getDtOfertta(double nroExp);
    virtual oferta* getOferta(double nroExp);
    
       
    //FUNCIONES PARA ALTA DE ENTREVISTA(ale)
    listaOfertasActivas (): Set (DtOferta){
    }
    
    obtenerListaEstOf(Nro_exp:string):Set(DtEstudiante){
    }
    
    altaEntrevista(ci,fecha){
    }
    
private:
      

};

#endif /* CONTROLADOROFERTA_H */




    
    

