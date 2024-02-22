#include <iostream>
using namespace std;
class Naruto
{
private:
    string nombre;
    string aldea;
    int chacra;

public:
    Naruto(string _nombre, string _aldea, int _chacra) : nombre(_nombre), aldea(_aldea), chacra(_chacra) {}
    virtual void presentarse()
    {
        cout << "Mi nombre es " << nombre << ", mi aldea es " << aldea << " y mi chacra es " << chacra << endl;
    }
    int getChacra()
    {
        return chacra;
    }
};
class Sasuke : public Naruto
{
private:
    int Sharingan;

public:
    Sasuke(string nombre, string aldea, int chacra, int _Sharingan) : Naruto(nombre, aldea, chacra), Sharingan(_Sharingan) {}
    void presentarse() override
    {
        Naruto ::presentarse();
        cout << "Mi sharingan es " << Sharingan << endl;
    }
    void nivelChacra(int subirNivel)
    {
        int chacra = getChacra();
        subirNivel += chacra;
        if (subirNivel >= 50)
        {
            cout << "Puedes usar tu chacra " << endl;
        }
        else
        {
            cout << "Todavia no lo puedes usar " << endl;
        }
    }
    void mostraSharingan()
    {
        if (Sharingan >= 34)
        {
            cout << "Tienes un ojo prodijio " << endl;
        }
        else
        {
            cout << "Te falta entrenar " << endl;
        }
    }
};

int main()
{
    Sasuke s1("Sasuke", "Oculta de la Hoja", 78, 56);
    s1.presentarse();
    s1.nivelChacra(45);
    s1.mostraSharingan();
    return 0;
}