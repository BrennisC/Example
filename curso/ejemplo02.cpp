#include <iostream>
#include <ctime>
#include <cstdlib>
#include <unistd.h>

using namespace std;

int suma(int x, int y)
{
    return x + y;
}

int resta(int x, int y)
{
    return x - y;
}

int multiplicacion(int x, int y)
{
    return x * y;
}

int division(int x, int y)
{
    if (y != 0)
    {
        return x / y;
    }
    else
    {
        return 0;
    }
}

void realizarOperacion(int numPreguntas)
{

    int x, y;

    int maxNum = 9;
    if (numPreguntas > 5)
    {
        maxNum = 99;
    }
    if (numPreguntas > 10)
    {
        maxNum = 999;
    }

    x = rand() % (maxNum + 1);
    y = rand() % (maxNum + 1);

    int operacion = rand() % 4;
    int resultado;
    switch (operacion)
    {
    case 0:
        resultado = suma(x, y);
        cout << x << " + " << y << " = ?";
        break;
    case 1:
        resultado = resta(x, y);
        cout << x << " - " << y << " = ?";
        break;
    case 2:
        resultado = multiplicacion(x, y);
        cout << x << " * " << y << " = ?";
        break;
    case 3:
        resultado = division(x, y);
        cout << x << " / " << y << " = ?";
        break;
    }

    sleep(3);

    system("cls");

    int respuesta;
    cout << "Cual es el resultado? ";
    cin >> respuesta;

    if (respuesta == resultado)
    {
        cout << "Correcto" << endl;
    }
    else
    {
        cout << "Incorrecto. La respuesta era: " << resultado << endl;
    }
}

int main()
{

    srand(time(0));

    int numPreguntas = 0;
    int numAciertos = 0;

    while (numPreguntas < 10)
    {
        realizarOperacion(numPreguntas);

        numPreguntas++;

        if (numAciertos % 5 == 0 && numAciertos != 0)
        {
            cout << "Has acertado " << numAciertos << " operaciones! Aumentamos el rango de números!" << endl;
        }
    }

    cout << "Juego terminado! Has acertado ";
}