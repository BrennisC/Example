#include <iostream>
using namespace std;
int main()
{
    int n;
    do
    {
        cout << "Ingrese su numero: ";
        cin >> n;

        for (int i = 0; i < 12; i++)
        {
            cout << n << "La multiplicacion es " << n << " * " << i << " es " << n * i << endl;
        }
    }while(true);

    return 0;
}