
#include "date.h"
using namespace std;

persona::persona(string ci, string nom, string ape, date fec){
  this->ci=ci;
  this-> nombre=nom;
  this->apellido=ape;
  this->fechaNac=fec;
}
persona::persona(const Persona& orig){
  this->ci=orig.ci;
  this-> nombre=orig.nombre;
  this->apellido=orig.apellido;
  this->fechaNac=orig.fechaNac;
}
string persona::getCi(){return this->ci;}
void persona::setCi(string ci){ this->ci=ci;}
string persona::getNombre(){return this->nombre;}
void persona::setNombre(string nom){this->nombre=nom;}
string persona::getApellido(){return this->apellido;}
void persona::setApellido(string ape){this->apellido;}
void persona::getfecha(){return this->fechaNac;}
