#include <iostream>
#include <conio.h>
using namespace std;
void menu();
void matriz(int m[][3], int, int);
int main()
{

    return 0;
}
void menu();
{ 
    cout << "\t\tLA MATRIZ: ";
}
void matriz(int m[][3], int x, int y)
{
    cout << "Ingrese su numero de filas: ";
    cin >> x;

    cout << "Ingrese su numero de columnas: ";
    cin >> y;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << m[i][3];
        }
    }
}