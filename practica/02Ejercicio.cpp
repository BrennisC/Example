#include <iostream>
using namespace std;
const int alumnos = 3;
struct Estudiantes
{
    string nombre;
    int edad;
    double calificacion;
}registro[];
int main()
{
    for (int i = 0; i < alumnos;i++)
    {
        cout<<"Ingrese su nombre ";
        cin>>registro[i].nombre;

        cout<<"Ingrese su edad: ";
        cin>>registro[i].edad;

        cout<<"Ingrese su calificacion: ";
        cin>>registro[i].calificacion;
    }
    for(int i = 0; i < alumnos;i++)
    {
        cout<<"Nombre: "<<registro[i].nombre;
        cout<<"Edad: "<<registro[i].edad;
        cout<<"Calificacion: "<<registro[i].calificacion;
    }
}
