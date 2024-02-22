#include <iostream>
using namespace std;
class People
{
private:
    string name;
    int age;

public:
    People(string, int);
    void mostrarDatos();
};
class Student : public People
{
private:
    string codeStudent;
    float score;

public:
    Student(string, int, string, float);
    void mostrarStudent();
};
People::People(string name, int age)
{
    this->name = name;
    this->age = age;
}
Student::Student(string name, int age, string _codeStudent, float _score) : People(name, age)
{
    codeStudent = _codeStudent;
    score = _score;
}
void People::mostrarDatos()
{
    cout << "Mi nombre es : " << name << endl;
    cout << "Mi edad es : " << age << endl;
}
void Student::mostrarStudent()
{
    mostrarDatos();
    cout << "Mi codigo: " << codeStudent;
    cout << " Mi puntaje es de: " << score << endl;
}

int main()
{
    People p1("Brennis", 20);
    p1.mostrarDatos();
    cout << endl;
    Student s1("Brennis", 35, "1768945", 8.5f);
    s1.mostrarStudent();
    return 0;
}