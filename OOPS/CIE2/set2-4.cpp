// Design a class num with member variable int no. In the main method create two objects of class num. Write appropriate member function to input and display the member variables. Also write function to overload the operator >  for comparing whether  the first  object is greater than second object  or not. Infer the difference of making the operator overloading function as a member function and friend function by writing both the functions
#include <iostream>
using namespace std;

class num
{
    int no;

public:
    void input()
    {
        cout << "Enter the value: ";
        cin >> no;
    }
    void display()
    {
        cout << "The value is: " << no << endl;
    }

    // num operator>(num n2)
    // {
    //     if (no > n2.no)
    //         cout << "first num greater";

    //     else
    //         cout << "second num greater";
    // }

    friend num operator>(num, num);
};

num operator>(num n1, num n2)
{
    if (n1.no > n2.no)
        cout << "first num greater";

    else
        cout << "second num greater";
}

int main()
{
    num n1, n2;
    n1.input();
    n2.input();
    n1.display();
    n2.display();
    n1 > n2;
}