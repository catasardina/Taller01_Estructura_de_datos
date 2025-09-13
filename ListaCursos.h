#include <iostream>
using namespace std;
#include "Curso.h"

struct NodoC {
    Curso curso;
    NodoC* siguiente;
    NodoC(const Curso& c) : curso(c), siguiente(nullptr) {}
};
class ListaCursos{
    private:
    NodoC* head;
    public:
    ListaCursos();
    void addCurso(Curso c);
    Curso* BuscarXCodigo(string codigo);
    bool deleteXCodigo(string codigo);
    void mostrarCursos() const;
    ~ListaCursos();
};

