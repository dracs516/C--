// class Student
// {
// int Roll;
// char Name[];
// float Marks;
// };
// Write default constructors, parameterized constructors, and destructors for the
// given class.

#include <iostream>
#include <string.h>
using namespace std;

class Student
{
    int roll;
    char name[50];
    float marks;

public:
    Student()
    {
        cout << "Default constructor" << endl;
        roll = 0;
        strcpy(name, " ");
        marks = 0;
    }

    Student(int roll, char name[], float marks)
    {
        this->roll = roll;
        strcpy(this->name, name);
        this->marks = marks;
    }

    ~Student()
    {
        cout << "Destructor" << endl;
    }

    void display()
    {
        cout << "Roll: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s1;
    Student s2(101, "Suresh", 29.5);
    s1.display();
    s2.display();
    return 0;
}