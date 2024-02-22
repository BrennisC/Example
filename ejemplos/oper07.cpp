#include <iostream>
using namespace std;
class DragonBall
{
private:
    string nombre;
    int poder;

public:
    DragonBall();
    DragonBall(string nombre, int poder)
    {
        this->nombre = nombre;
        this->poder = poder;
    }
    void mostrar();
    void saud(DragonBall &);
};
class KameHouse : public DragonBall
{
private:
    string color;
    string parte;

public:
    KameHouse(string nombre, int poder, string color, string parte) : DragonBall(nombre, poder)
    {
        this->color = color;
        this->parte = parte;
    }
    void ubicacionDormir();
};
void DragonBall ::mostrar()
{
    cout << "El nombre : " << nombre << endl;
    cout << "Poder : " << poder << endl;
}
void DragonBall::saud(DragonBall &b1)
{
    int curacion;
    cin >> curacion;
    cout << "Tiene una vida de " << curacion << endl;
    if (curacion > 10)
    {
        cout << "Tienes buena saud.\n";
    }
    else if (curacion < 10)
    {
        cout << "Cuidado de queda poca saud.\n";
    }
    else if (curacion == 0)
    {
        cout << "💀Muere el dragón💀";
    }
    else
    {
        cout << "No hay vida negativa.\n";
    }
}
void KameHouse::ubicacionDormir()
{
    DragonBall ::mostrar();
    cout << "Color de cama: " << color << endl;
    cout << "Parte donde duermes" << parte << endl;
}
int main()
{
    DragonBall b1("Goku", 9001);
    b1.mostrar();
    DragonBall b2("Vegeta", 1000);
    b2.mostrar();
    cout << "Sus vidas son: " << endl;
    b1.saud(b1);
    b2.saud(b2);
    cout << "Donde duermen." << endl;
    KameHouse k1("Brennis", 9001, "azul", "arriba");
    k1.ubicacionDormir();
    return 0;
}