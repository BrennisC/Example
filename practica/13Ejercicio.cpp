#include <iostream>
#include <string>
using namespace std;

class Entity
{
private:
    string m_Name;
    int m_Age;

public:
    Entity(const string &name) : m_Name(name), m_Age(-1) {}
    Entity(int age) : m_Name("Unkonown"), m_Age(age) {}
};
void PrintEntitu(const Entity &entity)
{
}
int main()
{
    Entity a("Cherno");
    Entity b(22);
    cin.get();
    return 0;
}