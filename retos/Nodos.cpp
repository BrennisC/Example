#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
struct Nodo
{
    char dato;
    Nodo *siguiente;
};
void menu();
void insertaCola(Nodo *&, Nodo *&, char);
bool cola_vacia(Nodo *);
void suprimirCola(Nodo *&, Nodo *&, char &);
int main()
{
    menu();
    return 0;
}
void menu()
{
    Nodo *frente = NULL;
    Nodo *fin = NULL;
    int opc;
    char dato;
    do
    {
        cout << "[1] Ingresa elemento para insertar en la cola: \n";
        cout << "[2] Mostrar elementos de la cola : \n";
        cout << "[3] Salir: \n";
        cout << "Ingresa su opcion: ";
        cin >> opc;
        switch (opc)
        {
        case 1:
            cout << "[1] Ingresa elemento para insertar en la cola: \n";
            cin >> dato;
            insertaCola(frente, fin, dato);
            break;
        case 2:
            cout << " [2] Mostrar los elementos de la cola: \n";
            suprimirCola(frente, fin, dato);
            if (frente != NULL)
            {
                cout << dato << " , ";
            }
            else
            {
                cout << dato << " . ";
            }
        getch();
        break;
        case 3:
            cout << "[3] Salir: \n";
        break;
        }
        system("cls");
    } while (opc != 3);
}
void insertaCola(Nodo *&frente, Nodo *&fin, char n)
{
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = NULL;
    if (cola_vacia(frente))
    {
        frente = nuevo_nodo;
    }
    else
    {
        fin->siguiente = nuevo_nodo;
    }
    fin = nuevo_nodo;
    cout << "Elemento" << n << " insertado correctamente: \n";
}
bool cola_vacia(Nodo *frente)
{
    return (frente == NULL) ? true : false;
}
void suprimirCola(Nodo *&frente, Nodo *&fin, char &n)
{
    n = frente->dato;
    Nodo *aux = frente;
    if (frente == fin)
    {
        frente = NULL;
        fin = NULL;
    }
    else
    {
        frente->siguiente = frente;
    }
    delete aux;
}