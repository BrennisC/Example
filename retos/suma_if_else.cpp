#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int num1, num2;
    char simb;
    cout << "Ingrese su primer numero: ";
    cin >> num1;
    cout << "Ingrese su segundo numero: ";
    cin >> num2;

    cout << "Ingrese la operacion a realizar: ";
    cin >> simb;

    if (simb == '+')
    {
        cout << num1 + num2;
    }
    else if (simb == '-')
    {
        cout << num1 - num2;
    }
    return 0;
}