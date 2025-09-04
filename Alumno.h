#pragma once
#include <iostream>
using namespace std;

class Alumno{
    private:
        string id;
        string nombre;
        string carrera;
        string fechaIngreso;
    public:
        Alumno(string id, string nombre, string carrera, string fechaIngreso ){};
        string getId() const;
        string getNombre()const;
        string getCarrera() const;
        string getFechaIngreso()const;
        ~Alumno(){};
        
};