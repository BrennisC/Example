#include <iostream>
#include <conio.h>
using namespace std;
void mostrarMatriz(int m[][3], int, int);
void calcularCuadrado(int m[][3], int, int);
void mostrarMatrizaElevada(int m[][3], int, int);
int main()
{
    const int NFILAS = 2;
    const int NCOL = 3;
    int m[NFILAS][NCOL] = {{1, 2, 3}, {4, 5, 6}};
    mostrarMatriz(m, NFILAS, NCOL);
    calcularCuadrado(m, NFILAS, NCOL);
    mostrarMatrizaElevada(m, NFILAS, NCOL);

    return 0;
}
void mostrarMatriz(int m[][3], int nfilas, int ncol)
{
    cout << "Mostrando matriz original: \n";
    for (int i = 0; i < nfilas; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}
void calcularCuadrado(int m[][3], int nfilas, int ncol)
{
    for (int i = 0; i < nfilas; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            m[i][j] *= m[i][j];
        }
    }
}
void mostrarMatrizaElevada(int m[][3], int nfilas, int ncol)
{
    cout << "\nMostrando la matriz eleveda al cuadrado: \n";
    for (int i = 0; i < nfilas; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << "\n";
    }
}