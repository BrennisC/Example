#include <iostream>
#include <string>
using namespace std;
void Comparacion(string, string);
void mostrar(string, string);
int main()
{
    string texto1 = "Me llamo brennis";
    string texto2 = "Me llamo brannes";

    Comparacion(texto1, texto2);
    mostrar(texto1, texto2);
}
void Comparacion(string texto1, string texto2)
{
    bool comparacion = true;
    if (texto1.length() == texto2.length())
    {
        for (auto caracter1 : texto1)
        {
            for (auto caracter2 : texto2)
            {
                caracter1 = caracter2 - 1;
            }
        }
        comparacion;
    }
    else if (texto1.length() != texto2.length())
    {
        cout << "Ingrese una palabra que concide en caracteres iguales.";
    }
}
void mostrar(string texto1, string texto2)
{
    for (int i = 0; i < texto1.length(); i++)
    {
        cout << " " << texto1[i] << " ";
        if (i < texto2.length() - 1)
        {
            cout << texto2[i];
        }
    }
}