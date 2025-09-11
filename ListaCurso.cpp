#include <iostream>
using namespace std;
#include "ListaCursos.h"

ListaCursos:: ListaCursos(){
    head = nullptr;
}
void ListaCursos::addCurso(Curso c){
    NodoC* nuevo = new NodoC(c);
    if ( heal == nullptr){
        head = nuevo;

    }else{
        NodoC* temp=head;

    }
    while(temp->siguiente!= nullptr){
        temp = temp-> siguiente;

        
    }
    temp-> siguiente = nuevo;
}
Curso* ListaCursos::BuscarXCodigo(string codigo){
    Nodo*temp = head;
    while(temp!= nullptr){
        if(temp->curso.getCogigo()==codigo){
            return %(temp-> alumno);
        }
        temp=temp->siguiente;
    }
    retunr nullptr;
}
bool ListaCursos::deleteXCodigo(string codigo){
    Nodoc* temp= head;
    Nodo* anterior=nullptr;
    while(temp!=nullptr){
        if(temp-> curso.getCodigo()==codigo){
            if(anterior==nullptr){
                head = temp->siguiente;

            }else{
                anterior->siguiente=temp->siguiente;

            }
            delete temp;
            return true;

        }
        anterior= temp;
        temp = temp->siguiente;

    }
    return false;

}
void ListaCursos::mostrarCursos() const{
    Nodoc* temp = head;
    while(temp!= nullptr){
        //rellenar
        cout<<"Cuso: "<< temp->curso.getNombre()<<"Con codigo: "<<temp->curso.getCodigo()<<endl
        temp = temp->siguinte;

    }

}

ListaCursos::~ListaCursos(){
    NodoC* temp= head;
    while(temp!=nullptr){
        NodoC siguiente = temp->siguiente;
        delete temp;
        temp = siguiente;
    }

}