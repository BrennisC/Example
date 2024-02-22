#include <iostream>
using namespace std;
long long factorial(int);
int main()
{
    int a;
    long long b;

    cout << "Ingrese su numero : \n";
    cin >> a;
    b = factorial(a);
    cout << "El factorial de " << a << "! es " << b;
    return 0;
}
long long factorial(int a)
{
    if (a == 1)
    {
        return 1;
    }
    else
    {
        return a * factorial(a - 1);
    }
}