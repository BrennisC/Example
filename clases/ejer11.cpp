#include <iostream>
using namespace std;
class Class
{
private:
    int valor1;
    int valor2;

public:
    Class(int v, int w) : valor1(v), valor2(w) {}
    friend Class operator+(Class &c1, Class &c2)
    {
        return Class(c1.valor1 + c1.valor2, c2.valor1 + c2.valor2);
    }
    void setVal1(int newvalor1);
    void setVal2(int newvalor2);
    int getValor1()
    {
        return valor1;
    }
    int getValor2()
    {
        return valor2;
    }
    void mostrar()
    {
        cout << "La suma es " << valor1 + valor2 << endl;
    }
};
void Class::setVal1(int newvalor1)
{
    cout << "El nuevo valor1 es : " << newvalor1 << endl;
    valor1 = newvalor1;
}
void Class ::setVal2(int newvalor2)
{
    cout << "El nuevo valor2 es : " << newvalor2 << endl;
    valor2 = newvalor2;
}
int main()
{
    Class cs1(5, 7);
    cout << cs1.getValor1() + cs1.getValor2() << endl;
    cs1.mostrar();
    cs1.setVal1(5);
    cs1.setVal2(8);
    cs1.mostrar();
    Class cs2(7, 5);
    cs2.mostrar();
    Class sumar = cs1 + cs2;
    sumar.mostrar();
    return 0;
}