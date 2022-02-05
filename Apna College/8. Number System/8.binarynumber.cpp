#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a binary number: ";
    cin >> n;
    int d, r;
    int base = 1;
    while (n > 0)
    {
        r = n % 10;
        d = d + (r * base);
        n = n / 10;
        base = base * 2;
    }
    cout << "decimal= " << d << endl;

    return 0;
}