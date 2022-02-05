#include <iostream>
using namespace std;

int increase(int n, int k)
{
    if (k == n)
    {
        return k;
    }

    cout << k << " ";
    return increase(n, k + 1);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Ascending Order:" << endl
         << increase(n, 1) << endl;
    return 0;
}