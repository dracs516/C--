#include <iostream>
using namespace std;

class A
{
    int a;

public:
    // void setData(int a)
    // {
    //     this->a = a;
    // }
    A &setData(int a)
    {
        this->a = a;
        return *this;
    }
    void getData()
    {
        cout << "The value of a is: " << a << endl;
    }
};

int main()
{
    A a;
    // a.setData(12);
    // a.getData();
    a.setData(12).getData();
    return 0;
}