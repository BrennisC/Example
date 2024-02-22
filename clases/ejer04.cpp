#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
class Saiyajin
{
private:
    string nombre;
    int edad;

public:
    Saiyajin(string _nombre, int _edad) : nombre(_nombre), edad(_edad) {}
    virtual void presentarse();
};
void Saiyajin ::presentarse()
{
    cout << "Mi nombre es " << nombre << " y tengo " << edad << endl;
}
class Goku : public Saiyajin
{
private:
    string ataque;
    int cantidad_poder;

public:
    Goku(string nombre, int edad, string _ataque, int _cantidad_poder) : Saiyajin(nombre, edad), ataque(_ataque), cantidad_poder(_cantidad_poder) {}
    void presentarse() override
    {
        Saiyajin::presentarse();
        cout << "Mi ataque especial es " << ataque << endl;
    }
    void getvolar(int cantidad_poder)
    {
        int contador = 0;
        cout << "Ingrese la cantidad de poder : ";
        cin >> cantidad_poder;
        while (cantidad_poder <= 10006)
        {
            cout << "Goku es mas que ese poder ingrese mas : " << endl;
            cin >> cantidad_poder;
            contador++;
        }
        cout << "Goku alcanzo una fase Dios ." << endl;
    }
};
class Vegetta : public Saiyajin
{
private:
    string personalidad;
    int cantidad_poder;

public:
    Vegetta(string nombre, int edad, string _personalidad, int _cantidad_poder) : Saiyajin(nombre, edad), personalidad(_personalidad), cantidad_poder(_cantidad_poder) {}
    void presentarse() override
    {
        Saiyajin::presentarse();
        cout << "Y mi presensonalidad es " << personalidad << endl;
    }
    void poderMaximo();
};
void Vegetta ::poderMaximo()
{
    {
        int contador = 0;
        cout << "Ingrese la cantidad de poder para destruir la tierra: ";
        cin >> cantidad_poder;

        while (cantidad_poder <= 100)
        {
            cout << "El poder no es suficiente para destruir la tierra. Ingrese una cantidad mayor: ";
            cin >> cantidad_poder;
            contador++;
        }

        cout << "La tierra fue destruida. Se necesitaron " << contador << " intentos." << endl;
    }
}
int main()
{
    Goku g1("Goku", 38, "caneja", 10006);
    g1.presentarse();
    g1.getvolar(10006);
    cout << "\n\n";
    Vegetta v1("Vegetta", 40, "orgulloso", 15560);
    v1.presentarse();
    v1.poderMaximo();
    return 0;
}