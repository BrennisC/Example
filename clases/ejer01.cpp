#include <iostream>
#include "ejer01.h"
using namespace std;
int main()
{
    cout << "Triangle" << endl;
    Triangle t1(2, 4, 7);
    t1.area();
    t1.perimetry();
    cout << "Rectangulo" << endl;
    Rectangulo r1(2, 4, 5);
    r1.area();
    r1.perimetry();
    return 0;
}