#include <iostream>
using namespace std; 
int main (){
    float tm;

    cout<<"Ingrese su temperatura: ";
    cin>>tm;

    if(tm>=20){
        cout<<"Puedes ir a jugar futbol";
    }else if(tm>=10){
        cout<<"Puedes ir a jugar voley";
    }else if (tm>=5){
        cout<<"Puedes ir a esquiar";
    }else{
        cout<<"No puedes hacer nada el clima es muy frio";
    }

    return 0;
}