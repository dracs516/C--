#include <iostream>
#include <math.h>
using namespace std;

int pow(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    else
    {
        return n * pow(n, p - 1);
    }
}

int main()
{
    int n, p;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter the power: ";
    cin >> p;

    cout << "The value of n^p is: " << pow(n, p) << endl;
    return 0;
}