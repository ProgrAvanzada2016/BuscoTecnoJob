/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   dtOferta.h
 * Author: santiago
 *
 * Created on June 17, 2016, 5:12 PM
 */

#ifndef DTOFERTA_H
#define DTOFERTA_H
#include <string>

using namespace std;

class dtOferta {
public:
    dtOferta();
    dtOferta(const dtOferta& orig);
    dtOferta(string nroExp, string titulo, string descripcion, dtRango rangoSalarial, int horas, date fechaI, date fechaF, int puestos);
    
    string getNroExp();
    string getTitulo();
    string getDescripcion();
    dtRango getRangoSalarial();
    int getHoras();
    date getFechaInicio();
    date getFechaFin();
    int getCantPuestos();
    
    virtual ~dtOferta();
private:
    string nroExp;
    string titulo;
    string descripcion;
    dtRango rangoSalarial;
    int horas;
    date fechaInicio;
    date fechaFin;
    int cantPuestos;
};

#endif /* DTOFERTA_H */

