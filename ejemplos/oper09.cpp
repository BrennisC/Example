#include <iostream>
using namespace std;
int main()
{
    try
    {
        int *p;
        while (true)
        {
            p = new int[1000000];
        }
    }
    catch (bad_alloc &excep)
    {
        cout << "Error: " << excep.what();
    }
    return 0;
}