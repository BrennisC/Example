#include <iostream>
using namespace std;

float triangulo(float altura, float base)
{
    float area;
    area = altura * base / 2;

    return area;
}

int main()
{
    cout << "Triangle #1 " << triangulo(6.5, 17.9) << endl;
    cout << "Triangle #2 " << triangulo(1.2, 18) << endl;
    cout << "Triangle #3 " << triangulo(1.9, 1.8) << endl;
    return 0;
}