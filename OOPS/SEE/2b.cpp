// Can a nonmember function access private variables of a class? Justify your answer with an example program.

// // Answer:
// // Yes, a nonmember function can access private variables of a class.
// // Example:

#include <iostream>
using namespace std;

class student
{
    int rollNo;
    string name;
    int age;
    float marks;

public:
    void assign()
    {
        cout << "Enter the roll number: ";
        cin >> rollNo;
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter the age: ";
        cin >> age;
        cout << "Enter the marks: ";
        cin >> marks;
    }

    friend void display(student);
};

void display(student s)
{
    cout << "Roll Number: " << s.rollNo << endl;
    cout << "Name: " << s.name << endl;
    cout << "Age: " << s.age << endl;
    cout << "Marks: " << s.marks << endl;
}

int main()
{
    student s;
    s.assign();
    display(s);
    return 0;
}
