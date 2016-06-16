/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   dtRango.h
 * Author: GrupoProgAvanzada2016
 *
 * Created on 12 de junio de 2016, 16:02
 */

#ifndef DTRANGO_H
#define DTRANGO_H

class dtRango {
    private:
        int minimo;
        int maximo;
public:
    dtRango(); //constructor por defecto
    dtRango(const dtRango& orig); //constructor por copia
    dtRango(int minimo,int maximo); //constructor por parametros.
    //getters
    int getMinimo();
    int getMaximo();
    virtual ~dtRango(); //destructor
};

#endif /* DTRANGO_H */

