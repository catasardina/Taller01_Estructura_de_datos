#pragma once
#include<iostream>
using namespace std;

class Curso{
    private:
        string codigo;
        string nombre;
        int cantMaxEstudiantes;
        string carrera;
        string nombreProfesor;
    public:
        Curso(string codigo,string nombre, int cantMaxEstudiantes, string carrera, string nombreProfesor);
        string getCodigo()const;
        string getNombre()const;
        int getCantMaxEstudiantes()const;
        string getCarrera()const;
        string getNombreProfesor()const;
        ~Curso();

};