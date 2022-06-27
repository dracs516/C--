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

    complex operator+(complex c2)
    {
        complex c3;
        c3.real = real + c2.real;
        c3.img = img + c2.img;
        return c3;
    }

    void display()
    {
        cout << real << " + " << img << "i";
    }
};

int main()
{
    complex c1, c2, c3;
    c1.set(23, 12);
    c2.set(12, 38);
    c3 = c1 + c2;
    c3.display();
    cout << endl;
}