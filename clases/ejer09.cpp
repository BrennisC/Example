#include <iostream>
using namespace std;
class Miclase
{
private:
    int dato;

public:
    Miclase() : dato(0) {}
    friend void informacion(Miclase &);
    void mostrar()
    {
        cout << dato << endl;
    }
};
void informacion(Miclase &objeto)
{
    objeto.dato = 23;
}
int main()
{
    Miclase objeto;
    objeto.mostrar();
    informacion(objeto);
    objeto.mostrar();
    return 0;
}