#include<iostream>
using namespace std;
#include "Alumno.h"
#include "Curso.h"
//nodo para la lista de inscripciones
struct NodoI{
    Alumno alumno;
    Curso curso;
    float[20] notas;
    int cantNotas;
    NodoI* siguiente;

    NodoI(ALumno* a, Curso* c){
        alumno=a;
        curso = c;
        cantNotas = 0;
        siguiente = nullptr;
    }
};
class ListaInscripciones{
    private:
        NodoI* head;
    public:
        ListaInscripciones();
        void addAlumno(Alumno* alumno, Curso* curso);
        bool deleteInscripcion(string idA, string codigoC);
        void addNota(string idA, string codigoC, float nota);
        void mostrarInscripcion() const;
        float promedioAlumno(string idA, string codigoC) const;
        ~ListaInscripciones();
        

};
