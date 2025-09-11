#include "Inscripcion.h"

ListaInscripciones::ListaInscripciones(){
    head = nullptr;
}
void ListaInscripciones::addAlumno(ALumno* alumno, Curso* curso){
    if(alumno == nullptr || curso == nullptr){
        cout<<"Alumno o curso no validos"<< endl;
        return;
    }
    NodoI* nuevo = new NodoI(alumno,curso)
    if(head==nullptr){
        head = nuevo;
    }else{
        NodoI* temp = cabeza;
        while(temp->siguiente!=nullptr){
            temp = temp->siguiente;
        }
        temp->siguiente = nuevo;
    }
    cout<<"Alumno "<<alumno->getNombre()<< "Fue incrito en: "<<curso->getNombre()<< endl;
    
}
bool ListaInscripciones::deleteInscripcion(string idA,string codigoC){
    NodoI* temp = head;
    NodoI* anterior = nullptr;
    while(temp!=nullptr){
        if(temp->alumno->getId() == idA && temp->curso->getCodigo()==codigoC){
            if(anterior == nullptr){
                head = temp->siguiente;
            }else{
                anterior-> siguiente = temp-> siguiente;
            }
            delete temp;
            return true;
        }
        anterior = temp;
        temp = temp-> siguiente;
    }
    return false;
}
void ListaInscripciones::addNota(string idA, string codigoC, float nota){
    NodoI* temp = head;
    while(temp!= nullptr){
        if( temp->alumno->getId() == idA && temp->curso.getCodigo==codigoC){
            if(nota < 1.0 || nota>7.0){
                cout << "Nota no valida" << endl;
                return;
            }
            if(temp-> cantNotas < 20){
                temp-> notas[temp->cantNotas] = nota;
                temp-> cantNotas++;
                cout << "Nota " << nota << " agregada a " << temp->alumno->getNombre()
                    << " en curso " << temp->curso->getNombre() << endl;
            }else{
                cout<<"Maximo de notas alcanzado"<< endl;
            }
            return;
        }
        temp = temp->siguiente;
    }
    cout<< "Inscripcion no valida"<<endl;
}
void ListaInscripciones::mostrarInscripcion() const{
    NodoI* temp = head;
    while(temp!= nullptr){
        cout << "Alumno: " << temp->alumno->getNombre()<< " Curso: " << temp->curso->getNombre()
            << " Notas: ";
            for (int i=0 ; i<temp->cantNotas; i++){
                cout << temp->notas[i];
            }
            cout<<endl;
            temp = temp->siguiente;
    }
}
float ListaInscripciones::promedioAlumno(string idA, string codigoC)const{
    NodoI* temp = head;
    while(temp!= nullptr){
        if(temp-> alumno->getId() == idA && temp->curso->getCodigo()==codigoC){
            if(temp->cantNotas == 0) return 0.0;
            float suma = 0;
            for ( int i = 0; i<temp->cantNotas; i++){
                suma +=temp->notas[i];
            }
            return suma / temp-> cantNotas;
        }
        temp = temp->siguiente;
    }
    return 0.0;
}
ListaInscripciones::~ListaInscripciones(){
    NodoI* temp = head;
    while(temp!= nullptr){
        NodoI* siguiente = temp->siguiente;
        delete temp;
        temp = siguiente;
    }
}
