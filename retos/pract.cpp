#include <iostream>
#include <conio.h>
using namespace std;
long factorial(int);
int main()
{
    cout << "El factorial es : " << factorial(15) << endl;
    return 0;
}
long factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        n *= factorial(n - 1);
    }
}