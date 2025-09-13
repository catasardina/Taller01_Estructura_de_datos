#include<iostream>
using namespace std;
#include "Alumno.h"

//Nodo para la lista enlazada
struct Nodo{ 
    Alumno alumno;
    Nodo* siguiente;
    Nodo(const Alumno& a) : alumno(a), siguiente(nullptr) {}
};
class ListaAlumnos{
    private:
        Nodo* head;
    public:
        ListaAlumnos();
        void addAlumno(Alumno a);
        Alumno* buscarAlumnoId(string id);
        bool deleteAlumnoId(string id);
        void mostrarAlumnos() const;
        void mostrarPorCarrera(string carrera) const;
        ~ListaAlumnos();
};
