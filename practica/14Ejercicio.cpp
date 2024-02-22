#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;
int main()
{
    ofstream fichero;
    char nombre[50];
    char c;

    cout << "Nombre del fichero: ";
    cin >> nombre;
    fichero.open(nombre, ios::out);
    if (!fichero.good())
    {
        cout << "Error al abrir el fichero.";
        exit(-1);
    }
    cout << "Escriba texto: control + z para terminar\n";
    while (cin.get(c))
    {
        fichero.put(c);
    }
    fichero.close();

    cout << "Lectura y escritura del archivo anterior\n";
    ifstream fichero1(nombre, ios::out);
    while (fichero1.get(c))
    {
        cout.put(c);
    }
    fichero1.close();
    return 0;
}