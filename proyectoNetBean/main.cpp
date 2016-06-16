/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: GrupoProgAvanzada3
 *
 * Created on 1 de junio de 2016, 03:21 PM
 */

#include <cstdlib>
#include <cstdio>
#include "conceptos/Persona.h"
#include "manejadores/ManejadorEstudiante.h"
#include "fabricas/fabrica.h"


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    printf("Inicializando:\n");
    IcontroladorEstudiante* ice = Fabrica::getIControladorEstudiantes();
    
    ice->insertarEstudiante(DtEstudiante("1","Julio","Cortaza"));
    ice->insertarEstudiante(DtEstudiante("2","Leo","Masliah"));
    ice->insertarEstudiante(DtEstudiante("3","Fyodor","Dostoyevsky"));
    ice->insertarEstudiante(DtEstudiante("324","Charles","Bukowski"));
    ice->insertarEstudiante(DtEstudiante("12351","Eduardo","Galeano"));
    ice->insertarEstudiante(DtEstudiante("1234","Hernan","Casciari"));
    ice->insertarEstudiante(DtEstudiante("97237","Jared","Diamond"));
    ice->insertarEstudiante(DtEstudiante("5893","Jorge Luis","Borges"));
    
   
    
//    for (Estudiante* est : estudiantes) {
//        cout << est->Getci() << ":" <<  est->Getnombre() << ":" << est->Setapellido() << endl;
//    }
    
    list<DtEstudiante*>* estudiantes = ice->listarEstudiantes();

    for (std::list<DtEstudiante*>::iterator it=estudiantes->begin(); it!=estudiantes->end(); ++it){
        DtEstudiante* est = *it;
//        cout << est->Getci() << ":" <<  est->Getnombre() << ":" << est->Setapellido() << endl;
        printf("Estudiante:%s, Nombre:%s, Apellido:%s\n", est->GetCi().data(), est->GetNombre().data(), est->GetApellido().data());
    }
   
    
//    requiere tener el estandar c++11!!
//    printf("\nOtra forma de recorrrer\n");
//    for (DtEstudiante* est : *estudiantes) {
//        printf("Estudiante:%s, Nombre:%s, Apellido:%s\n", est->GetCi().data(), est->GetNombre().data(), est->GetApellido().data());
//    }

    
    return 0;
}

