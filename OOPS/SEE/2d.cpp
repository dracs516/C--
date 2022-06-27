// int main()
// {
// Demo d1(10,20) ;
// cout << endl <<"D1 Object: " << endl;
// cout << "Value after initialization : " ;
// d1.Display();
// Demo d2 = Demo(d1);
// cout << endl << "D2 Object: " << endl;
// cout << "Value after initialization : ";
// d2.Display();
// return 0;
// }
// Complete the given program

#include <iostream>
using namespace std;

class Demo
{
    int a, b;

public:
    Demo()
    {
        a = 0;
        b = 0;
    }
    Demo(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    Demo(const Demo &d)
    {
        a = d.a;
        b = d.b;
    }

    void Display()
    {
        cout << "a = " << a << " b = " << b << endl;
    }
};

int main()
{
    Demo d1(10, 20);
    cout << endl
         << "D1 Object: " << endl;
    cout << "Value after initialization : ";
    d1.Display();

    // Demo d2(d1);
    Demo d2 = Demo(d1);
    cout << endl
         << "D2 Object: " << endl;
    cout << "Value after initialization : ";
    d2.Display();
    return 0;
}
