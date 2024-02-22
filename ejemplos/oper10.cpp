#include <iostream>
using namespace std;
int producto(int a, int b);
int main()
{
    try
    {
        int valor = producto(2, 6);
        cout << valor << endl;
    }
    catch (const char *dato)
    {
        cout << dato << endl;
    }

    return 0;
}
int producto(int a, int b)
{
    if (a < 0 || b < 0)
    {
        throw "Error, numero negativo";
    }
    return a * b;
}