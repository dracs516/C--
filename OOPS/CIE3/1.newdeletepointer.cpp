#include <iostream>
using namespace std;

int main()
{
    int a = 12;
    int *p = &a;
    cout << "a=" << a << endl;
    cout << "p=" << p << endl;
    cout << "*p=" << *p << endl;
    cout << "&a=" << &a << endl;
    cout << "&p=" << &p << endl;
    cout << "&*p=" << &*p << endl;
    cout << "sizeof(a)=" << sizeof(a) << endl;
    cout << "sizeof(p)=" << sizeof(p) << endl;
    cout << "sizeof(*p)=" << sizeof(*p) << endl;
    cout << "sizeof(&a)=" << sizeof(&a) << endl;
    cout << "sizeof(&p)=" << sizeof(&p) << endl;
    cout << "sizeof(&*p)=" << sizeof(&*p) << endl
         << endl;

    int *p2 = new int(40);
    delete p2;
    cout << "p2=" << p2 << endl;
    cout << "*p2=" << *p2 << endl;

    int *arr = new int[5];

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    delete[] arr;

    cout << "arr[0]=" << arr[0] << endl;
    cout << "arr[1]=" << arr[1] << endl;
    cout << "arr[2]=" << arr[2] << endl;
    cout << "arr[3]=" << arr[3] << endl;
    cout << "arr[4]=" << arr[4] << endl;

    return 0;
}