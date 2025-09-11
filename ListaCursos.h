#include <iostream>
using namespace std;
#include "Curso.h"

struct NodoC {
    Curso curso;
    NodoC* siguiente;
    NoodC (Curso c){
        curso = c;
        siguiente =nullptr;
    }
};
class ListaCursos{
    private:
    NocoC* head;
    public:
    ListaCursos();
    void addCurso(Curso c);
    Curso* BuscarXCodigo(string codigo);
    bool deleteXCodigo(string codigo);
    void mostrarCursos() const;
    ~ListaCursos();
};

