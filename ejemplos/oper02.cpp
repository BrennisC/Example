#include <iostream>
using namespace std;
class Base
{
private:
    int x, y;

public:
    Base();
    void setPunto(int, int);
    int getPuntox();
    int getPuntoy();
};
Base ::Base()
{
}
void Base ::setPunto(int x, int y)
{
    this->x = x;
    this->y = y;
}
int Base::getPuntox() { return x; }
int Base::getPuntoy() { return y; }
int main()
{
    int a, b;
    Base b1;
    cout << "Ingrese el valor de x: ";
    cin >> a;
    cout << "Ingrese el valord de y: ";
    cin >> b;
    b1.setPunto(a, b);
    cout << b1.getPuntox() << endl;
    cout << b1.getPuntoy() << endl;
    return 0;
}