/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   date.h
 * Author: GrupoProgAvanzada2016
 *
 * Created on 12 de junio de 2016, 13:24
 */


#ifndef date_H
#define date_H

#include <iostream>
#include <stdio.h>
#include <string>


class date {
    private:
            int dd;
            int mm;
            int aaaa;
    public:
            date(); //constructor por defecto
            date(const date& orig); //constructor por copia
            date(int d,int m,int a); //constructor por parÃ¡metro
            int getDay();    //geters
            int getMonth();
            int getYear();
            ~date(); //destructor
};

#endif /* date_H */