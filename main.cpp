#include <iostream>
#include "ListaAlumnos.h"
#include "ListaCursos.h"
#include "Inscripcion.h"
using namespace std;

int main() {
    ListaAlumnos listaAlumnos;
    ListaCursos listaCursos;
    ListaInscripciones listaInscripciones;

    int op;
    do {
        cout << "=== SISTEMA DE GESTION DE NOTAS ===" << endl;
        cout << "1. Gestion de alumnos" << endl;
        cout << "2. Gestion de cursos" << endl;
        cout << "3. Gestionar inscripciones" << endl;
        cout << "4. Gestionar Notas" << endl;
        cout << "5. Reportes" << endl;
        cout << "0. Salir" << endl;
        cout << "Ingrese su opcion: ";
        cin >> op;

        if (cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Error: Ingrese solo numeros del 0 al 5." << endl;
        op = -1;
        continue;
        }

        switch (op) {
        case 1: { 
            int opAl;
            cout << "=== Gestion de Alumnos ===" << endl;
            cout << "1. Ingresar Alumno" << endl;
            cout << "2. Mostrar alumnos" << endl;
            cout << "3. Buscar Alumno" << endl;
            cout << "4. Eliminar Alumno" << endl;
            cout << "Ingrese su opcion: ";
            cin >> opAl;

            if (opAl == 1) {
                string id, nombre, carrera, fecha;
                cout << "Ingrese el id del alumno: ";
                cin >> id;
                cout << "Ingrese el nombre: ";
                cin >> nombre;
                cout << "Ingrese la carrera: ";
                cin >> carrera;
                cout << "Ingrese la fecha de ingreso: ";
                cin >> fecha;
                listaAlumnos.addAlumno(Alumno(id, nombre, carrera, fecha));

            } else if (opAl == 2) {
                listaAlumnos.mostrarAlumnos();

            } else if (opAl == 3) {
                string id;
                cout << "Ingrese ID: ";
                cin >> id;
                Alumno* a = listaAlumnos.buscarAlumnoId(id);
                if (a) {
                    cout << "Encontrado -> " << a->getNombre()
                        << " (" << a->getCarrera() << ")" << endl;
                } else {
                    cout << "Alumno no encontrado" << endl;
                }

            } else if (opAl == 4) {
                string id;
                cout << "Ingrese ID: ";
                cin >> id;
                if (listaAlumnos.deleteAlumnoId(id)) {
                    cout << "Alumno eliminado." << endl;
                } else {
                    cout << "Alumno no encontrado." << endl;
                }
            }
            break;
        }

        case 2: {
            int opC;
            cout << "=== Gestion de Cursos ===" << endl;
            cout << "1. Crear Curso" << endl;
            cout << "2. Mostrar cursos" << endl;
            cout << "3. Buscar curso" << endl;
            cout << "4. Eliminar curso" << endl;
            cout << "Ingrese su opcion: ";
            cin >> opC;

            if (opC == 1) {
                string codigo, nombre, carrera, profesor;
                int max;
                cout << "Ingrese el Codigo: ";
                cin >> codigo;
                cout << "Ingrese el Nombre: ";
                cin >> nombre;
                cout << "Ingrese la Max Estudiantes: ";
                cin >> max;
                cout << "Ingrese la Carrera: ";
                cin >> carrera;
                cout << "Ingrese el Profesor: ";
                cin >> profesor;
                listaCursos.addCurso(Curso(codigo, nombre, max, carrera, profesor));

            } else if (opC == 2) {
                listaCursos.mostrarCursos();

            } else if (opC == 3) {
                string cod;
                cout << "Ingrese Codigo: ";
                cin >> cod;
                Curso* c = listaCursos.BuscarXCodigo(cod);
                if (c) {
                    cout << "Encontrado -> " << c->getNombre()
                        << " (" << c->getCarrera() << ")" << endl;
                } else {
                    cout << "Curso no encontrado" << endl;
                }

            } else if (opC == 4) {
                string cod;
                cout << "Ingrese Codigo: ";
                cin >> cod;
                if (listaCursos.deleteXCodigo(cod)) {
                    cout << "Curso eliminado." << endl;
                } else {
                    cout << "Curso no encontrado." << endl;
                }
            }
            break;
        }

        case 3: { 
            cout << "=== Gestion de Inscripciones ===" << endl;
            string id, codigo;
            cout << "Ingrese id alumno: ";
            cin >> id;
            cout << "Ingrese codigo del curso: ";
            cin >> codigo;

            Alumno* alumno = listaAlumnos.buscarAlumnoId(id);
            Curso* curso = listaCursos.BuscarXCodigo(codigo);

            if (alumno && curso) {
                if (alumno->getCarrera() == curso->getCarrera()) {
                    listaInscripciones.addAlumno(alumno, curso);
                } else {
                    cout << "Error: carrera del alumno y curso no coinciden." << endl;
                }
            } else {
                cout << "El alumno o el curso no son validos." << endl;
            }
            break;
        }

        case 4: {
            cout << "=== Gestion de Notas ===" << endl;
            string id, codigo;
            float nota;
            cout << "Ingrese id alumno: ";
            cin >> id;
            cout << "Ingrese Codigo de curso: ";
            cin >> codigo;
            cout << "Ingrese la nota: ";
            cin >> nota;
            listaInscripciones.addNota(id, codigo, nota);
            break;
        }

        case 5: { 
            int opR;
            cout << "=== Reportes ===" << endl;
            cout << "1. Alumnos por carrera" << endl;
            cout << "2. Cursos de un alumno" << endl;
            cout << "3. Promedio alumno en curso" << endl;
            cout << "4. Promedio general alumno" << endl;
            cout << "5. Mostrar todas las inscripciones" << endl;
            cout << "Ingrese su opcion: ";
            cin >> opR;

            if (opR == 1) {
                string carrera;
                cout << "Ingrese la Carrera: ";
                cin >> carrera;
                listaAlumnos.mostrarPorCarrera(carrera);

            } else if (opR == 2) {
                string id;
                cout << "Ingrese id Alumno: ";
                cin >> id;
                listaInscripciones.mostrarCursosDeAlumno(id);

            } else if (opR == 3) {
                string id, codigo;
                cout << "Ingrese id alumno: ";
                cin >> id;
                cout << "Ingrese Codigo del curso: ";
                cin >> codigo;
                cout << "Promedio: " << listaInscripciones.promedioAlumno(id, codigo) << endl;

            } else if (opR == 4) {
                string id;
                cout << "Ingrese id alumno: ";
                cin >> id;
                cout << "Promedio general: "
                    << listaInscripciones.promedioGeneralAlumno(id) << endl;

            } else if (opR == 5) {
                listaInscripciones.mostrarInscripcion();
            }
            break;
        }

        case 0:
            cout << "Has salido del sistema. Chao!" << endl;
            break;

        default:
            cout << "Opcion no valida, reintente." << endl;
        }

    } while (op != 0);

    return 0;
}