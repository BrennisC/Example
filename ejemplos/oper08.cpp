#include <iostream>
using namespace std;
int main()
{
    try
    {
        int num = 0;
        if (num < 0)
        {
            throw "Error de existencia";
        }
        if (num == 0)
        {
            throw 'a';
        }
        cout << num << endl;
    }
    catch (const char *dato)
    {
        cout << dato << endl;
    }
    catch (int dato)
    {
        cout << "Error numero: " << dato << endl;
    }
    catch (...)
    {
        cout << "Error" << endl;
    }
    return 0;
}