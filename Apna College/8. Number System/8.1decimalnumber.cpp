#include <iostream>
using namespace std;
int main()
{
    int n, r[20], i = 0;
    cout << "Enter decimal number: " << endl;
    cin >> n;

    while (n > 0)
    {
        r[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        cout << r[j];
    return 0;
}