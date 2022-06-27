// Consider a Student class with suitable attributes and member functions to facilitate Arrays within Student Class. Prompt the student to enter USN and marks and calculate the total marks. Use suitable functions get_marks() and calculate_marks() to write a C++ program.
#include <iostream>
using namespace std;
class Student
{
    string usn;
    int marks[5];
    int total;

public:
    Student()
    {
        total = 0;
    }
    void get_marks()
    {
        cout << "Enter the USN: ";
        cin >> usn;
        cout << "Enter the marks: ";
        for (int i = 0; i < 5; i++)
            cin >> marks[i];
    }
    void calculate_marks()
    {
        for (int i = 0; i < 5; i++)
            total += marks[i];
    }
    void display()
    {
        cout << "USN: " << usn << endl;
        cout << "Marks: ";
        for (int i = 0; i < 5; i++)
            cout << marks[i] << " ";
        cout << endl;
        cout << "Total: " << total << endl;
    }
};

int main()
{
    Student s;
    s.get_marks();
    s.calculate_marks();
    s.display();
    return 0;
}
