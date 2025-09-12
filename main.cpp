#include <iostream>
#include "ListaAlumnos.h"
#include "ListaCursos.h"
#include "Inscripcion.h"
using namespace std;

int main(){
    ListaAlumnos listaAlumnos;
    ListaCursos listacursos;
    ListaInscripciones listaInscripciones;
    int op;
    do{
        cout<<"SISTEMA DE GESTION DE NOTAS"<<endl;
        cout<<"1. Gestion de alumnos"<<endl;
        cout<<"2. Gestion de cursos"<<endl;
        cout<<"3. Gestionar inscipciones"<<endl;
        cout<<"4. Gestionar Notas"<<endl;
        cout<<"5. Reportes"<<endl;
        cout<< "Ingrese su opcion: ";
        cin >> op;

        switch (op)
        {
        case 1:{
            int op;
            cout << "Bienvenido a gestion de Alumnos" endl;
            break;
        }
        case 2:
            break;
        case 3:
            cout<< "Bienvenido a Gestion de inscripciones";
            string id;
            string codigo;
            cout<< "Ingrese id alumno: "<< endl;
            cin >> id;
            cout<< "Ingrese codigo del curso: ";
            cin>> codigo;
            Alumno* alumno = listaAlumnos.buscarAlumnoId(id);
            Curso* curso=listacursos.BuscarXCodigo(codigo);
            if(alumno && curso){
                if(a->getCarrera() == c->getCarrera()){
                    listaInscripciones.addAlumno(alumno,curso);
                }else{
                    cout<<"Error";
                }
            }else{
                cout<<"EL alumno o el curso no son validos" endl;
            }
            break;
        case 4: {
            cout<<" GESTION DE NOTAS" endl;
            string id;
            string codigo;
            float nota;
            cout<<"Ingrese id alumno: ";
            cin>> id;
            cout<<"Ingrese Codigo de curso: ";
            cin>> codigo;
            cout<< "Ingrese la nota: ";
            cin>>nota;
            listaInscripciones.addNota(id,codigo,nota);
            break;
        }
        case 5:{
            break;

        }
        case 0:{
            cout <<"Has salido del sistema chao"<< endl;
            break;
        }
        default:
            cout<< "Opcion no valida reintente" endl;
        }
    } while(op!=0);
    return 0;
}
