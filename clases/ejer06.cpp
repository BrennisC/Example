#include <iostream>
using namespace std;
class Pokemon
{
private:
    string nombre;
    int edad;

public:
    Pokemon(string _nombre, int _edad) : nombre(_nombre), edad(_edad) {}
    virtual void presentarse()
    {
        cout << "Mi nombre es " << nombre << " y mi edad es " << edad << endl;
    }
    virtual void Evolucionar() {}
};
class Pikachu : public Pokemon
{
private:
    int habilidad;

public:
    Pikachu(string nombre, int edad, int _habilidad) : Pokemon(nombre, edad), habilidad(_habilidad) {}
    void presentarse() override;
    void Evolucionar() override;
    void getCombatir(int);
};
void Pikachu ::presentarse()
{
    Pokemon::presentarse();
    cout << "Y mi poder es " << habilidad << endl;
}
void Pikachu ::Evolucionar()
{
    // 112
    char letra;
    cout << "Ingresa su caracter para evolucionar " << endl;
    cin >> letra;
    if (letra == 'p')
    {
        cout << "Evoluciono en Raichu " << endl;
    }
    else
    {
        cout << "No se logro evolucionar " << endl;
    }
}
void Pikachu ::getCombatir(int habilidad)
{
    int contador = 0;
    cout << "Ingrese su la cantidad de su poder " << endl;
    cin >> habilidad;
    while (habilidad <= 100)
    {
        cout << "No tienes suficiente poder " << endl;
        cin >> habilidad;
        contador++;
    }
    cout << "Lograste impresionar a tu entrenador " << endl;
}
int main()
{
    Pikachu p1("Pikachu", 5, 45);
    p1.presentarse();
    p1.Evolucionar();
    p1.getCombatir(45);
    return 0;
}