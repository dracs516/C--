#include <iostream>
using namespace std;

template <class T>
class abhay
{
public:
    T data;
    abhay(T a)
    {
        data = a;
    }
    void display();
};

template <class T>
void abhay<T>::display()
{
    cout << "data is: " << data << endl;
}

template <class T>
void display(T a)
{
    cout << "data is here: " << a << endl;
}

int main()
{
    abhay<int> a(12);
    a.display();
    display(13.4);
}