#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
using namespace std;
class Archivo
{
public:
    ofstream archivo;
    void Crear_Archivo()
    {
        this->archivo.open("example.txt", ios::out);
        if (this->archivo.fail())
        {
            cout << "Error al crear archivo\n";
        }
        else
        {
            cout << "Se ha creado correctamente \n";
            this->archivo << "Hola";
            this->archivo.close();
        }
    }

    void Agregar()
    {
        char cadena[50];
        cout << "Ingrese una frase: \n";
        cin.get(cadena, 50, '\n');
        this->archivo.open("example.txt", ios::app);
        if (this->archivo.fail())
        {
            cout << "Error! \n";
        }
        else
        {
            cout << "Texto añadido \n";
            this->archivo << cadena << endl;
            this->archivo.close();
        }
    }

    void Mostrar()
    {
        this->archivo.open("example.txt");
        string buffer;
        this->archivo, buffer;
        cout << buffer << endl;
        while (!this->archivo.eof())
        {
            this->archivo, buffer;
            cout << buffer << endl;
        }
        this->archivo.close();
    }
};
int main()
{
    setlocale(LC_ALL, "es_ES,UTF-8");
    Archivo uno;
    uno.Agregar();
    uno.Mostrar();
    getch();
    return 0;
}