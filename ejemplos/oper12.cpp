#include <iostream>
#include <string>
using namespace std;

class ListadeObjetos
{
private:
    struct Objeto
    {
        int codigo;
        string nombre;
    };

    Objeto personas[20];
    int cantidadPersonas;

public:
    ListadeObjetos() : cantidadPersonas(0) {}
    void nuevoObjetoLista();
    void mostrar();
};

void ListadeObjetos::nuevoObjetoLista()
{
    if (cantidadPersonas < 20)
    {
        cout << "Ingrese su codigo : ";
        cin >> personas[cantidadPersonas].codigo;

        cout << "Ingrese su nombre : ";
        cin >> personas[cantidadPersonas].nombre;

        cantidadPersonas++;
    }
    else
    {
        cout << "No hay lugares disponibles." << endl;
    }
}

void ListadeObjetos::mostrar()
{
    for (int i = 0; i < cantidadPersonas; i++)
    {
        cout << "Persona " << i + 1 << ":" << endl;
        cout << "  Nombre: " << personas[i].nombre << endl;
        cout << "  Código: " << personas[i].codigo << endl;
    }
}

int main()
{
    ListadeObjetos lista;
    char continuar = 's';

    while (continuar == 's' || continuar == 'S')
    {
        lista.nuevoObjetoLista();
        cout << "¿Desea ingresar otra persona? (s/n): ";
        cin >> continuar;
    }

    cout << "Lista de personas:" << endl;
    lista.mostrar();

    return 0;
}
