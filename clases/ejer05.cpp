#include <iostream>
using namespace std;
class Alienigena
{
private:
    string nombre;
    string habilidad;

public:
    Alienigena(string _nombre, string _habilidad) : nombre(_nombre), habilidad(_habilidad) {}
    virtual void presentarse();
    virtual void OmitrixTransformar();
};
void Alienigena ::presentarse()
{
    cout << "Mi nombre es " << nombre << " y mi habilidad  es " << habilidad;
}
void Alienigena ::OmitrixTransformar()
{
}
class CuatroBrazos : public Alienigena
{
private:
    int destruccion;

public:
    CuatroBrazos(string nombre, string habilidad, int _destruccion) : Alienigena(nombre, habilidad), destruccion(_destruccion) {}
    void OmitrixTransformar() override;
    void presentarse() override
    {
        Alienigena::presentarse();
        cout << "\tMi poder de destruccion es " << destruccion << endl;
    }
    void getLanzar(int &destruccion)
    {
        int contador = 0;
        cout << "Ingresa el nivel de destruccion para una enemigo " << endl;
        cin >> destruccion;
        while (destruccion <= 1000)
        {
            cout << "El poder no es suficiente. " << endl;
            cin >> destruccion;
            contador++;
        }
        cout << "Lograste derrotar al enemigo. " << endl;
    }
};

void CuatroBrazos::OmitrixTransformar()
{
    int contador = 0;
    for (int i = 0; i < 2; i++)
    {
        cout << "Ingrese el numero de vueltas para transformarse: " << endl;
        cin >> i;
    }
}
int main()
{
    int a = 245;
    CuatroBrazos cb1("CuatroBrazos", "Fuerza", a);
    cb1.OmitrixTransformar();
    cb1.presentarse();
    cb1.getLanzar(a);
    return 0;
}