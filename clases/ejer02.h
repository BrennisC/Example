/* Crea una clase base Personae con atributos como nombre y saud. Luego, define subclases como Guerrero, Mage y Arquero que hereden de Personae y añadan habilidades específicas para cada tipo de personaje. */
#include <iostream>
using namespace std;
class Charater
{
protected:
    string name;
    int health;

public:
    Charater(string _name, int _health) : name(_name), health(_health) {}
};
class Mage : public Charater
{
private:
    string power;

public:
    Mage(string name, int health, string _power) : Charater(name, health), power(_power) {}
    void greet()
    {
        cout << "My name is : " << name << " , health is " << health << " and my power is " << power << endl;
    }
};
class Goalkeeper : public Charater
{
private:
    int precision;

public:
    Goalkeeper(string name, int health, int _precision) : Charater(name, health), precision(_precision) {}
    void information()
    {
        cout << "My name is " << name << ", health is " << health << "  and my precision is " << precision << endl;
    }
};
class Warrior : public Charater
{
private:
    string ability;

public:
    Warrior(string name, int health, string _ability) : Charater(name, health), ability(_ability) {}
    void show()
    {
        cout << "My name is " << name << " , health is " << health << " and my ability is " << ability << endl;
    }
};