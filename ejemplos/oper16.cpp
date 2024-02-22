#include <iostream>
#include <vector>
using namespace std;
class Alumnos
{
private:
    string nombre;
    vector<double> Registro_notas;

public:
    Alumnos(string nombre, vector<double> Registro_notas)
    {
        this->nombre = nombre;
        this->Registro_notas = Registro_notas;
    }
    virtual void Crear_lista()
    {
        int tanamio;
        cout << "Su nombre es: " << nombre;
        cout << "Ingrese su cantidad de notas : \n";
        cin >> tanamio;
        Registro_notas.resize(tanamio);
        for (int i = 0; i < tanamio; i++)
        {
            cout << "Ingrese la nota" << i + 1 << ": ";
            cin >> Registro_notas[i];
            cout << "\n";
        }
    }
};
int main()
{
    vector<Alumnos *> listas_alumnos;
    int cantidad;
    cout << "Ingrese la cantidad de alumnos : ";
    cin >> cantidad;
    for (int i = 0; i < cantidad; i++)
    {
        string nombre;
        vector<double> registro_notas;
        cout << "Ingrese su nombre : " << i + 1;
        cin >> nombre;
        listas_alumnos.push_back(new Alumnos(nombre, registro_notas));
    }
    for (auto &notas : listas_alumnos)
    {
        notas->Crear_lista();
    }
    return 0;
}