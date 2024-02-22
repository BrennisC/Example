#include <iostream>
#include <vector>
using namespace std;
void AdivinarPalabra(vector<char> &, string &);
int main()
{
    setlocale(LC_ALL, "es_ES.UTF-8");
    vector<char> textos = {'b', 'r', '_', 'n', 'n', '_', 's'};
    string palabra_adivinar = "brennis";
    AdivinarPalabra(textos, palabra_adivinar);
    return 0;
}
void AdivinarPalabra(vector<char> &textos, string &palabra_advinar)
{
    cout << "Juego de Adivinanzas" << endl;
    char caracter;
    for (size_t i = 0; i < textos.size(); i++)
    {
        for (char texto : textos)
        {
            cout << texto << " ";
        }
        cout << "\n";
        cout << "Ingrese un carácter: ";
        cin >> caracter;

        bool encontrado = false;
        for (size_t j = 0; j < palabra_advinar.length(); j++)
        {
            if (caracter == palabra_advinar[j] && textos[i] == '_')
            {
                textos[i] = caracter;
                encontrado = true;
                break;
            }
        }
        if (!encontrado)
        {
            cout << "No se ha encontrado el carácter en la palabra.\n";
        }
    }
    cout << "¡Congratulaciones! Ha adivinado la palabra correctamente!\nLa palabra era " << palabra_advinar << endl;
    cout << "La palabra era " << palabra_advinar << endl;
}