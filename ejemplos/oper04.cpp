#include <iostream>
using namespace std;
class Perro
{
private:
    string nombre, raza;

public:
    Perro(string, string);
    ~Perro();
    void mostrarDatos();
    void jugar();
};
Perro::Perro(string nombre, string raza)
{
    this->nombre = nombre;
    this->raza = raza;
}
Perro ::~Perro()
{
}
void Perro ::mostrarDatos()
{
    cout << "Nombre : " << nombre << endl;
    cout << "Raza: " << raza << endl;
}
void Perro::jugar()
{
    cout << "El perro " << nombre << " esta jugando " << endl;
}
int main()
{
    Perro p1("Fido", "Doberman");
    p1.mostrarDatos();
    p1.jugar();
    return 0;
}