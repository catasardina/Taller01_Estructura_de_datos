#include<iostream>
using namespace std;
#include "Alumno.h"
#include "Curso.h"
//nodo para la lista de inscripciones
struct NodoI{
    Alumno alumno;
    Curso curso;
    float notas [20];
    int cantNotas;
    NodoI* siguiente;

    NodoI(const Alumno* a, const Curso* c)
        : alumno(*a), curso(*c), cantNotas(0), siguiente(nullptr) {}
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
        void mostrarCursosDeAlumno(string idAlumno) const;
        float promedioGeneralAlumno(string idAlumno) const;
        ~ListaInscripciones();
        

};