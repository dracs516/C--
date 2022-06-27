#include <iostream>
using namespace std;

class Employee
{
public:
    int id;
    float salary;
    Employee(int empId)
    {
        id = empId;
        salary = 10000;
    }
    Employee() {}
};

class Programmer : public Employee
{
public:
    int languageKnown = 310;
    Programmer(int empId)
    {
        id = empId;
    }
    void getID()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee Abhay(1), Suyash(2);
    cout << Abhay.salary << endl;
    cout << Suyash.salary << endl;
    Programmer Coder(3);
    cout << Coder.languageKnown << endl;
    Coder.getID();
    return 0;
}