#include <iostream>
using namespace std;
int sumar(int);
int main()
{
    int numero_elementos;
    do
    {
        cout << "Ingrese el numero de elementos : ";
        cin >> numero_elementos;
    } while (numero_elementos <= 0);
    cout << "\nLa suma es : " << sumar(numero_elementos) << endl;

    return 0;
}
int sumar(int n)
{
    int suma = 0;
    if (suma == 1)
    {
        return 1;
    }
    else
    {
        suma = n + sumar(n - 1);
    }
    return suma;
}