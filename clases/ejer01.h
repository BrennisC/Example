/* Define una clase base llamada FiguraGeometrica con métodos para calcular el área y el perímetro. Luego, crea subclases como Rectangulo, Circulo y Triangle que hereden de la clase base y sobrescriban los métodos para calcular el area y el perímetro según la figura. */
#include <iostream>
using namespace std;
class FigureGeometric
{
protected:
    int b;
    int a;
    int c;

public:
    FigureGeometric(int _a, int _b, int _c) : a(_a), b(_b), c(_c) {}
    virtual void area()
    {
        cout << "The area is : " << (a * b) / 2 << endl;
    }
    virtual void perimetry()
    {
        cout << "The perimetry is: " << a + b + c << endl;
    }
};
class Triangle : public FigureGeometric
{
public:
    Triangle(int a, int b, int c) : FigureGeometric(a, b, c) {}
};
class Rectangulo : public FigureGeometric
{
public:
    Rectangulo(int a, int b, int c) : FigureGeometric(a, b, c) {}
    void area() override
    {
        cout << "The area is : " << a * b << endl;
    }
    void perimetry() override
    {
        cout << "The perimetry is : " << 2 * (a + b) << endl;
    }
};
