// Details of Employees
// Id Name Age Salary
// 101 Suresh 29 45000
// 102 Mukesh 31 51000
// 103 Ramesh 28 47000
// Develop a program to obtain the above given output using array of objects.

#include <iostream>
using namespace std;

class employee
{
public:
    int id;
    string name;
    int age;
    float salary;

    employee() {}

    employee(int id, string name, int age, float salary)
    {
        this->id = id;
        this->name = name;
        this->age = age;
        this->salary = salary;
    }
};

int main()
{
    employee emp[3];
    emp[0] = employee(101, "Suresh", 29, 45000);
    emp[1] = employee(102, "Mukesh", 31, 51000);
    emp[2] = employee(103, "Ramesh", 28, 47000);

    cout << "Details of Employees" << endl;
    cout << "Id\tName\tAge\tSalary" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << emp[i].id << "\t" << emp[i].name << "\t" << emp[i].age << "\t" << emp[i].salary << endl;
    }
}