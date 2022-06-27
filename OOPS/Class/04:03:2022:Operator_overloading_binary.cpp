#include <iostream>
using namespace std;
class complex
{
    int x, y;

public:
    complex() // default
    {
        x = 0;
        y = 0;
    }
    complex(int a, int b = 6) // parmetrized constructor with default argument
    {
        x = a;
        y = b;
    }
    complex operator+(complex z); // complex add(complex z)
    void display()
    {
        cout << "x=" << x << "\t"
             << "y=" << y << endl;
    }
};
complex complex::operator+(complex z)
{
    complex res;
    res.x = x + z.x;
    res.y = y + z.y;
    return res;
}
int main()
{
    int a, b;
    cout << "enter the first complex number\n";
    cin >> a >> b;
    complex c1(a, b); // dynamic initilization
    cout << "enter the second complex number\n";
    cin >> a >> b;
    complex c2(a, b);
    complex c3;
    cout << "complex numbers are\n";
    c1.display();
    c2.display();
    // c3=c1.add(c2);
    c3 = c1 + c2; // c3=c1.operator +(c2); //c3=c2+c1 ===> c3=c2.operator+(c1);
    cout << "result is \n";
    c3.display();
    return 0;
}
