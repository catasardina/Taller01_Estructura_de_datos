#include<iostream>
using namespace std;
#include "Curso.h"

Curso::Curso(string codigo, string nombre, int cantMaxEstudiantes,string carrera, string nombreProfesor){
    this -> codigo = codigo;
    this->nombre = nombre;
    this->cantMaxEstudiantes= cantMaxEstudiantes;
    this->carrera = carrera;
    this->nombreProfesor=nombreProfesor;
}
string Curso::getCodigo() const{
    return codigo;
}
string Curso::getNombre() const{
    return nombre;
}
int Curso::getCantMaxEstudiantes() const{
    return cantMaxEstudiantes;
}
string Curso::getCarrera() const{
    return carrera;
}
string Curso::getNombreProfesor() const{
    return nombreProfesor;
}
Curso::~Curso(){
    
}