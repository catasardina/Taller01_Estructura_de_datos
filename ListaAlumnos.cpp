#include<iostream>
using namespace std;
#include "ListaAlumnos.h"

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
//Funcion para buscar por id
Alumno* ListaAlumnos::buscarAlumnoId(string id){
    Nodo* temp = head;
    while(temp != nullptr){
        if(temp -> alumno.getId)==id){
            //obtiene lo que esta adentro 
            return &(temp->alumno);
        }
        temp = temp -> siguiente;

    }
    retunr nullptr;//por si no lo encuentra
}
//eliminar por id
bool ListaAlumno::deleteAlumnoId(string id){
    Nodo* temp = head;
    Nodo* anterior = nullptr;
    while(temp!= nullptr){
        if(temp->alumno.getId()==id){
            if(anterior == nullptr){
                head = temp -> siguiente;

            }else{
                anterior-> siguiente = temp->siguiente;
            }
            delete temp;
            return true;
        }
        anterior = temp;
        temp = temp-> siguiente;

    }
    return false;
}
//mostrar alumnos
void ListaAlumnos::mostrarAlumnos() const {
    Nodo* temp = head;
    //mostramos cada lumno de la lista hasta que se acaben
    while(temp!= nullptr){
        cout<< " Alumno: " << temp->alumno.getNombre()<< "Id: "<<temp->alumno.getId()<<"Carrera: "<< temp->alumno.getCarrera()
        <<"Con fecha de ingreso: "<< temp->alumno.getFechaIngreso() <<endl
    temp = temp->siguiente;
    }
}
ListaAlumno::~ListaAlumno()
{
    Nodo* temp head;
    while(temp!= nullptr){
        Nodo siguiente = temp-> siguiente;
        detele temp;
        temp = siguiente;
    }
}
void ListaAlumnos::mostrarPorCarrera(string carrera) const {
    Nodo* temp = cabeza;
    cout << "Alumnos de la carrera " << carrera << ":\n";
    while (temp != nullptr) {
        if (temp->alumno.getCarrera() == carrera) {
            cout << "ID: " << temp->alumno.getId()<< ", Nombre: " << temp->alumno.getNombre()<< ", Fecha Ingreso: " << temp->alumno.getFechaIngreso()
                << endl;
        }
        temp = temp->siguiente;
    }
}
