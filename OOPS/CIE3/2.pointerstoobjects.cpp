#include <iostream>
using namespace std;

class complex
{
    int r, i;

public:
    void getData()
    {
        cout << "The real part is: " << r << endl;
        cout << "The imaginary part is: " << i << endl;
    }
    void setData(int r, int i)
    {
        this->r = r;
        this->i = i;
    }
};

int main()
{
    complex c1;
    c1.setData(12, 34);
    c1.getData();
    complex *p = &c1;
    (*p).getData();
    p->getData();

    complex *p2 = new complex;
    p2->setData(23, 12);
    p2->getData();
    return 0;
}