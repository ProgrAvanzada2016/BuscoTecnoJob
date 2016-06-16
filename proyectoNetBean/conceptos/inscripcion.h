/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   inscripcion.h
 * Author: GrupoProgAvanzada2016
 *
 * Created on 12 de junio de 2016, 17:42
 */

#ifndef INSCRIPCION_H
#define INSCRIPCION_H

class inscripcion {
private:
    dtDate fecha;
    dtDate ** entrevistas;//PREGUNTAR SI ESTO ESTA BIEN!!
public:
    inscripcion();
    inscripcion(const inscripcion& orig);
    virtual ~inscripcion();
private:

};

#endif /* INSCRIPCION_H */

