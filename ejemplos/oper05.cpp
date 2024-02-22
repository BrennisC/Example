#include <iostream>
using namespace std;
class Persona
{
private:
    string nombre;
    int edad;

public:
    Persona(string, int);
    virtual void mostrarDatos();
};
class Alumno : public Persona
{
private:
    float notafinal;

public:
    Alumno(string, int, float);
    void mostrarDatos();
};
class Profesor : public Persona
{
private:
    string materia;

public:
    Profesor(string, int, string);
    void mostrarDatos();
};
Persona::Persona(string nombre, int edad)
{
    this->nombre = nombre;
    this->edad = edad;
}
void Persona ::mostrarDatos()
{
    cout << "Mi nombre es: " << nombre << endl;
    cout << "Mi edad es : " << edad << endl;
}
Alumno ::Alumno(string nombre, int edad, float notafinal) : Persona(nombre, edad)
{
    this->notafinal = notafinal;
}
void Alumno ::mostrarDatos()
{
    Persona::mostrarDatos();
    cout << "Mi nota final es " << notafinal << endl;
}
Profesor ::Profesor(string nombre, int edad, string materia) : Persona(nombre, edad)
{
    this->materia = materia;
}
void Profesor ::mostrarDatos()
{
    Persona ::mostrarDatos();
    cout << "Dicto la materia de " << materia;
}
int main()
{
    Persona p1("Brennis", 20);
    p1.mostrarDatos();
    Alumno a1("Brennis", 25, 15);
    a1.mostrarDatos();
    Profesor pr1("Pedro", 29, "Ciencias Sociales");
    pr1.mostrarDatos();

    return 0;
}