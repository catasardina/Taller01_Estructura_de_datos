#include<iostream>
using namespace std;
#include "Alumno.h"

Alumno::Alumno(string id, string nombre, string carrera, string fechaIngreso){
    this->id = id;
    this->nombre = nombre;
    this->carrera = carrera;
    this->fechaIngreso =fechaIngreso;
}
string Alumno::getId() const{
    return id;
}
string Alumno::getNombre() const{
    return nombre;
}
string Alumno::getCarrera() const{
    return carrera;
}
string Alumno:: getFechaIngreso()const{
    return fechaIngreso;
}
Alumno::~Alumno(){
    
}
