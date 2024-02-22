#include <iostream>
using namespace std;
class Class
{
public:
    string texto = "Hola como estas.";
    Class()
    {
        cout << "Object constructed!" << endl;
    }
    ~Class()
    {
        cout << "Object destructed! " << endl;
    }
    void saludar();
};
void Class ::saludar()
{
    cout << texto << endl;
}
int main()
{
    Class *ptr;
    ptr = new Class();
    ptr->saludar();
    return 0;
}