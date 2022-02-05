#include <iostream>
using namespace std;

int decrease(int n)
{
    if (n == 1)
    {
        return 1;
    }

    cout << n << " ";
    return decrease(n - 1);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Descending Order: " << endl
         << decrease(n) << endl;
    return 0;
}