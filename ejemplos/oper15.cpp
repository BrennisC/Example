#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;

class Alumnos
{
private:
    string nombre;
    string codigo;
    int edad;

public:
    Alumnos(string nombre, string codigo, int edad)
    {
        this->nombre = nombre;
        this->codigo = codigo;
        this->edad = edad;
    }

    virtual void presentarse()
    {
        cout << "Mi nombre: " << nombre << endl;
        cout << "Mi código: " << codigo << endl;
        cout << "Mi edad: " << edad << endl;
    }
};

class AlumnosA : public Alumnos
{
private:
    char seccion;

public:
    AlumnosA(string nombre, string codigo, int edad, char seccion) : Alumnos(nombre, codigo, edad)
    {
        this->seccion = seccion;
    }

    void presentarse() override
    {
        cout << "Mi sección: " << seccion << endl;
        Alumnos::presentarse();
    }
};

int main()
{
    setlocale(LC_ALL, "es_ES.UTF-8");
    int cantidad_alumnos;
    cout << "Ingrese la cantidad de alumnos: ";
    cin >> cantidad_alumnos;
    vector<Alumnos *> registro;
    for (int i = 0; i < cantidad_alumnos; i++)
    {
        string nombre, codigo;
        int edad;
        char seccion;
        cout << "Ingrese su nombre : " << i + 1 << endl;
        cin >> nombre;
        cout << "Ingrese su codigo: " << i + 1 << endl;
        cin >> codigo;
        cout << "Ingrese su edad: " << i + 1 << endl;
        cin >> edad;
        cout << "Ingrese su seccion: " << i + 1 << endl;
        cin >> seccion;

        registro.push_back(new AlumnosA(nombre, codigo, edad, seccion));
    }
    system("cls");
    for (auto &mostrar : registro)
    {
        cout << "Los Datos de los alumnos: " << endl;
        mostrar->presentarse();
        cout << endl;
    }
    for (auto &mostrar : registro)
    {
        delete mostrar;
    }
    return 0;
}
