#include <iostream>
using namespace std;
class Pokemon
{
private:
    string nombre;
    float poder;

public:
    Pokemon();
    Pokemon(string, float);
    void mostrar();
    void saud(Pokemon &);
    void atacar(Pokemon &);
};
Pokemon::Pokemon(string nombre, float poder)
{
    this->nombre = nombre;
    this->poder = poder;
}
void Pokemon::mostrar() { cout << "Nombre del pokemon es " << nombre << " "
                               << "y su poder es de " << poder << endl; }
void Pokemon::saud(Pokemon &p1)
{
    int saud;
    cout << "Ingresa la saud: " << endl;
    cin >> saud;
    cout << "Tienes una saud de " << saud << endl;
}
void Pokemon ::atacar(Pokemon &p2)
{
    int poder;
    cout << "Ingrese el ataque: ";
    cin >> poder;
    cout << "El ataque del pokemon " << poder << endl;
    if (poder > 10)
        cout << "Un ataque fuerte " << endl;
    else if (poder < 10)
        cout << "Un ataque mediano " << endl;
    else
        cout << "Una ataque muy bajo " << endl;
}
int main()
{
    Pokemon p1("Bulbasaur", 80.f), p2("Squirtle", 95.f);
    cout << "Informacion de Bulbasaur:" << endl;
    p1.mostrar();
    p1.saud(p1);
    cout << "Informacion de Squirtle:" << endl;
    p2.mostrar();
    p2.saud(p2);
    cout << "\n\nBulbasaur vs Squirtle" << endl;
    p1.atacar(p1);
    p2.atacar(p2);
    return 0;
}