#include<iostream>
using namespace std;
#include "ListaAlumnos.h";

ListaAlumnos::ListaAlumnos()[
    head= nullptr;
]
//Funcion para agregar alumnos a la lista 
void ListaAlumnos::addAlumno(ALumno a){
    Nodo* nuevoAlumno = new Nodo(a);
    if(head == nullptr){
        head = nuevo;
    }else {
        Nodo* temp = head; //recorremos
        while (temp->siguiente !=nullptr){
            temp = temo-> siguiente;
        }
        temp-> siguiente = nuevoAlumno;
        
    }

}
