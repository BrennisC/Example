#include <iostream>
#include <sstream>
using namespace std;
void convertirDecimal(int numeroDecimal)
{

    cout << "Octal: 0" << oct << numeroDecimal << dec << endl;

    cout << "Hexadecimal: 0x" << hex << numeroDecimal << dec << endl;
}

int main()
{
    int numeroDecimal;
    cout << "Ingresa un numero decimal: ";
    cin >> numeroDecimal;

    convertirDecimal(numeroDecimal);

    return 0;
}