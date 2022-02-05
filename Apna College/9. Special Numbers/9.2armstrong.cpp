#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int num = 0;
    int original_n = n;
    while (n > 0)
    {
        int lastdigit = n % 10;
        num = num + pow(lastdigit, 3);
        n = n / 10;
    }
    if (num == original_n)
    {
        cout << "Armstrong";
    }
    else
    {
        cout << "Not armstrong";
    }
    return 0;
}