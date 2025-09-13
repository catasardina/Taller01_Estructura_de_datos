#include <iostream>
using namespace std;
#include "ListaCursos.h"

ListaCursos:: ListaCursos(){
    head = nullptr;
}

void ListaCursos::addCurso(Curso c){
    NodoC* nuevo = new NodoC(c);
    
    if (head == nullptr){
        head = nuevo;
    } else {
        NodoC* temp = head; 
        while(temp->siguiente != nullptr){
            temp = temp->siguiente;
        }
        temp->siguiente = nuevo;
    }
    
    cout << "Curso " << c.getNombre() << " agregado exitosamente." << endl;
}
Curso* ListaCursos::BuscarXCodigo(string codigo){
    NodoC * temp = head;
    while(temp!= nullptr){
        if(temp -> curso.getCodigo()==codigo){
            return &(temp -> curso);
        }
        temp=temp->siguiente;
    }
    return nullptr;
}
bool ListaCursos::deleteXCodigo(string codigo){
    NodoC* temp= head;
    NodoC* anterior=nullptr;
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
    NodoC* temp = head;
    while(temp!= nullptr){
        //rellenar
        cout<<"Curso: "<< temp->curso.getNombre()<<"- codigo: "<<temp->curso.getCodigo()<<endl;
        temp = temp->siguiente;

    }

}

ListaCursos::~ListaCursos(){
    NodoC* temp= head;
    while(temp!=nullptr){
        NodoC* siguiente = temp->siguiente;
        delete temp;
        temp = siguiente;
    }

}