#include <iostream>
using namespace std;

int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}

int main()
{
    int n;
    cout << "Enter the nth value: ";
    cin >> n;
    cout << "The fibonacci series is: " << endl
         << fib(n) << endl;
}