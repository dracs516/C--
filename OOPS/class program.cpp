#include <iostream>
#include <string.h>
using namespace std;

class person
{
private:
    string name;
    char gen;
    int age;

public:
    person()
    {
    }
    person(string n, char g, int a)
    {
        name = n;
        gen = g;
        age = a;
    }
    void display()
    {
        cout << "\nName: " << name << endl;
        cout << "Gender: ";
        if (gen == 'm' || gen == 'M')
        {
            cout << "Male" << endl;
        }
        else
        {
            cout << "Female" << endl;
        }
        cout << "Age: " << age << endl;
    }
};
class student : public person
{
private:
    string usn;
    int sem;
    float cgpa;

public:
    student() : person()
    {
    }
    student(string u, int s, float c, string n, char g, int a) : person(n, g, a)
    {
        usn = u;
        sem = s;
        cgpa = c;
    }
    void diaplay()
    {
    person:
        display();
        cout << "USN: " << usn << endl;
        cout << "Semester: " << sem << endl;
        cout << "CGPA: " << cgpa << endl;
    }
    float operator+(student s2)
    {
        return (cgpa + s2.cgpa) / 2;
    }
    friend void announce(student s1);
};
void announce(student s1)
{
    float s = s1.cgpa + .2;
    cout << "cgpa after activites: " << s << endl;
}
int main()
{
    int n = 2;
    student s[n];
    string name, usn;
    int sem, age;
    float cgpa;
    char gen;
    for (int i = 0; i < n; i++)
    {
        cout << "name: ";
        cin >> name;
        cout << "gender(m-male, f-female): ";
        cin >> gen;
        cout << "usn: ";
        cin >> usn;
        cout << "sem: ";
        cin >> sem;
        cout << "cgpa: ";
        cin >> cgpa;
        cout << "age: ";
        cin >> age;

        s[i] = student(usn, sem, cgpa, name, gen, age);
    }
    for (int i = 0; i < n; i++)
    {
        s[i].diaplay();
        cout << "announced cgpa: ";
        announce(s[i]);
    }
    cout << "average cgpa: " << s[0] + s[1] << endl;
    return 0;
}