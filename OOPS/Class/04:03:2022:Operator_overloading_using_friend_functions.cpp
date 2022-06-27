#include <iostream>
using namespace std;

class complex
{
    int real, img;

public:
    complex()
    {
        real = 0;
        img = 0;
    }

    void set(int r, int i)
    {
        real = r;
        img = i;
    }

    void display()
    {
        cout << real << " + " << img << "i";
    }

    friend complex operator+(complex c1, complex c2);
};

complex operator+(complex c1, complex c2)
{
    complex c3;
    c3.real = c1.real + c2.real;
    c3.img = c1.img + c2.img;
    return c3;
}

int main()
{
    complex c1, c2, c3;
    c1.set(23, 12);
    c2.set(12, 38);
    c3 = c1 + c2;
    c3.display();
    cout << endl;
}