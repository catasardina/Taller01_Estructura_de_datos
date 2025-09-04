#include<iostream>
using namespace std;
#include "Alumno.h";

Alumno::Alumno(string id, string nombre, string carrera, string fechaIngreso){
    id = "";
    nombre = "";
    carrera = "";
    fechaIngreso ="";
}
string Alumno::getId() const{
    return id;
}
