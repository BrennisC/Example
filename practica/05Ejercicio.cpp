#include <iostream>
#include <cmath>
using namespace std; 
int main(){
    cout<<"\n********Calculo_de_Pitagoras********\n";
    int x, y;
    cout<<"Ingrese el valor de la primer cateto: ";
    cin>>x;

    cout<<"Ingrese el valor del segundo cateto: ";
    cin>>y;
    
    cout<<"El valor de la hipotenusa es :  "<<pow(x,2)<<" + "<<pow(y,2)<<" es:  "<<pow(x,2) + pow(y,2);

    return 0;
}