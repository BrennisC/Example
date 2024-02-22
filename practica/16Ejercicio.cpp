#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
void heterograma(string &);
void isograma(string &);
void pangrama(string &);
int main()
{
    string frase;
    setlocale(LC_ALL, "es_ES,UTF-8");
    cout << "Ingrese una oracíon: ";
    getline(cin, frase);
    heterograma(frase);
    isograma(frase);
    pangrama(frase);
    return 0;
}
void heterograma(string &frase)
{
    for (size_t i = 0; i < frase.length(); i++)
    {
        if (frase[i])
        {
        }
    }
}