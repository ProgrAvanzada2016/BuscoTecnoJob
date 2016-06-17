/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   dtDate.h
 * Author: GrupoProgAvanzada2016
 *
 * Created on 12 de junio de 2016, 13:24
 */


#ifndef dtDate_H
#define dtDate_H

#include <iostream>
#include <stdio.h>
#include <string>


class dtDate {
    private:
            int dd;
            int mm;
            int aaaa;
    public:
            dtDate(); //constructor por defecto
            dtDate(const dtDate& orig); //constructor por copia
            dtDate(int d,int m,int a); //constructor por parametro
            //getters
            int getDay();    
            int getMonth();
            int getYear();
          
            ~dtDate(); //destructor
};

#endif /* dtDate_H */