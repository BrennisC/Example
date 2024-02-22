#include <iostream>
#include <vector>
#include <string>
using namespace std;
void contador(string &);
int main()
{
    string texto;
    cout << "Ingrese su palabra: ";
    getline(cin, texto);
    contador(texto);
    return 0;
}
void contador(string &texto)
{
    int contador_vocales = 0;
    int contador_consonates = 0;

    for (size_t i = 0; i < texto.length(); i++)
    {
        if (texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u')
        {
            contador_vocales++;
        }
        else if ((texto[i] >= 'a' && texto[i] >= 'A') || (texto[i] >= 'z') && (texto[i] <= 'Z'))
        {
            contador_consonates++;
        }
    }
    cout << "El numero de vocales son : " << contador_vocales << endl;
    cout << "El numero de consonantes son: " << contador_consonates << endl;
}