#include <iostream>
using namespace std;

class A
{
public:
    int a = 1;
};
class B : public A
{
public:
    int b = 2;
};
class C : public A
{
public:
    int c = 3;
};
class D : public A
{
public:
    int d = 4;
};

int main()
{
    B o;
    C p;
    D q;

    cout << o.a << endl;
    cout << o.b << endl;
    cout << p.a << endl;
    cout << p.c << endl;
    cout << q.a << endl;
    cout << q.d << endl;
}