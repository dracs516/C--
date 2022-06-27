// Create a class employee with member variables id, name and phone no. Write a main method to create an object of the employee class and to read and display the member variables of the object by overloading the stream insertion and extraction operator.
#include <iostream>
using namespace std;

class employee
{

    int id;
    string name;
    int num;

public:
    friend ostream &operator<<(ostream &obj, employee &emp)
    {
        obj << emp.id;
        obj << emp.name;
        obj << emp.num;
        return obj;
    }
    friend istream &operator>>(istream &obj, employee &emp)
    {
        obj >> emp.id;
        obj >> emp.name;
        obj >> emp.num;
        return obj;
    }
};

int main()
{
    employee emp;
    cin >> emp;
    cout << emp;
}