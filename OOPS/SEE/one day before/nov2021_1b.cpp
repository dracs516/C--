// Write a C++ program to generate power of a number given upto a limit by defining a BaseNumber and PowerRaised.

#include <iostream>
using namespace std;

class BaseNumber
{
    int base;
    int power;

public:
    BaseNumber()
    {
        base = 0;
        power = 0;
    }
    BaseNumber(int b, int p)
    {
        base = b;
        power = p;
    }
    void get_base()
    {
        cout << "Enter the base: ";
        cin >> base;
    }
    void get_power()
    {
        cout << "Enter the power: ";
        cin >> power;
    }
    void display()
    {
        cout << "Base: " << base << endl;
        cout << "Power: " << power << endl;
    }
    friend ostream &operator<<(ostream &, BaseNumber &);
    friend istream &operator>>(istream &, BaseNumber &);
};

ostream &operator<<(ostream &out, BaseNumber &b)
{
    out << "Base: " << b.base << endl;
    out << "Power: " << b.power << endl;
    return out;
}

istream &operator>>(istream &in, BaseNumber &b)
{
    in >> b.base >> b.power;

    return in;
}

int main()
{
    BaseNumber b;
    b.get_base();
    b.get_power();
    b.display();

    return 0;
}