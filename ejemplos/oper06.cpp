#include <iostream>
using namespace std;
class Grupo
{
protected:
    string codigo;
    int integrantes;
    int pago;

public:
    Grupo(string codigo, int integrantes, int pago)
    {
        this->codigo = codigo;
        this->integrantes = integrantes;
        this->pago = pago;
    }
    string getCodigo() { return codigo; }
    int getIntegrantes() { return integrantes; }
    int getPago() { return pago; }
};
class Marketing : public Grupo
{
private:
    int popularidad;

public:
    Marketing(string codigo, int integrantes, int pago, int popularidad) : Grupo(codigo, integrantes, pago)
    {
        this->popularidad = popularidad;
    }
    int getPopularidad() { return popularidad; }
};
class Economia : public Grupo
{
private:
    int dinero_total;

public:
    Economia(string codigo, int popularidad, int pago, int dinero_total) : Grupo(codigo, popularidad, pago)
    {
        this->dinero_total = dinero_total;
    }
    int getDinero_total() { return dinero_total; }
};
class Programadores : public Grupo
{
private:
    string lenguaje;

public:
    Programadores(string codigo, int popularidad, int pago, string lenguaje) : Grupo(codigo, popularidad, pago)
    {
        this->lenguaje = lenguaje;
    }
    string getLenjuage() { return lenguaje; }
};
class Empresa
{
    Grupo *grupos[9]; // 0 - Marketing , 1 - Economia , 2 - Programadores
public:
    Empresa()
    {
        for (int i = 0; 0 < 9; i++)
        {
            grupos[i] = NULL;
        }
    }
    void agregarGrupo(Grupo *g)
    {
        for (int i = 0; i < 9; i++)
        {
            if (grupos[i] == NULL)
            {
                grupos[i] = g;
                break;
            }
        }
    }
};
int main()
{
    return 0;
}