#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Alumnos
{
private:
    struct Estudiante
    {
        string nombre;
        string codigo;
    };
    Estudiante datos[5];
    int cantidad;

public:
    Alumnos() : cantidad(0) {}
    void Presentarse();
    void mostrar();
};
class AlumnosA
{
private:
    string seccion;
    Alumnos claseA;

public:
    AlumnosA() : claseA(claseA), seccion(seccion) {}
    virtual void Presentarse();
    string getSeccion() const { return seccion; }
    Alumnos getAlumnos() { return claseA; }
};
void Alumnos ::Presentarse()
{
    if (cantidad < 5)
    {
        cout << "Ingrese su nombre : " << endl;
        cin >> datos[cantidad].nombre;
        cout << "Ingrese su codigo : " << endl;
        cin >> datos[cantidad].codigo;
        cantidad++;
    }
    else
    {
        cout << "Alumnos completos " << endl;
    }
}
void Alumnos ::mostrar()
{
    for (int i = 0; i < cantidad; i++)
    {
        cout << "Alumno " << i + 1 << endl;
        cout << "Nombre: " << datos[i].nombre << endl;
        cout << "Codigo: " << datos[i].codigo << endl;
    }
}
void AlumnosA ::Presentarse()
{
    cout << "Ingrese su seccion: ";
    cin >> seccion;
    for (int i = 0; i < 20; i++)
    {
        claseA;
    }
}
int main()
{
    Alumnos lista_alumnos;
    char continuar = 's';
    while (continuar == 's' || continuar == 'S')
    {
        lista_alumnos.Presentarse();
        cout << "Deseas agregar a uno: ";
        cin >> continuar;
    }
    cout << "Los alumnos son: " << endl;
    lista_alumnos.mostrar();
    return 0;
}