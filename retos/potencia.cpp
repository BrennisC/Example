#include <iostream>
using namespace std;
long potencia(int, int);
int main()
{
    int base, exponente;
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese el exponente: ";
    cin >> exponente;

    cout << "\nLa potencia de " << base << " elevado a " << exponente << " es: " << potencia(base, exponente) << endl;
    return 0;
}
long potencia(int x, int y)
{
    int pot;
    if (y == 1)
    {
        pot = x;
    }
    else
    {
        pot = x * potencia(x, y - 1);
    }
    return pot;
}