#include <iostream>
#include <string>
using namespace std;
class Cita
{
private:
    struct Agendas_Citas
    {
        string nombre;
        int edad;
        string lugar;
    };
    Agendas_Citas persona[20];
    int cantidad;

public:
    Cita() : cantidad(0){};
    void encuentro();
};
class Fecha
{
private:
    struct Date
    {
        int año;
        int mes;
        int dia;
        int hora;
    };
    Date date[20];
    int cantidad_fecha;

public:
    Fecha() : cantidad_fecha(0) {}
    void fechaEncuentro();
};
void Cita ::encuentro()
{
    for (cantidad = 0; cantidad < 20; cantidad++)
    {
        cout << "Ingrese su nombre: ";
        cin >> persona[cantidad].nombre;
        cout << "Ingrese su edad: ";
        cin >> persona[cantidad].nombre;
        cout << "Ingrese su lugar: ";
        getline(cin, persona[cantidad].nombre);
    }
}
void Fecha ::fechaEncuentro()
{
    for (cantidad_fecha = 0; cantidad_fecha < 20; cantidad_fecha++)
    {
        }
}
int main()
{
    Cita lista;
    char opcion;
    while (opcion == 's' || opcion == 'S')
    {
        lista.encuentro();
        cout << "Deseas ingresar a otra persona: ";
        cin >> opcion;
    }

    return 0;
}