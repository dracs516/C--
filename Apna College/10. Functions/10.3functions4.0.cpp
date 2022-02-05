#include <iostream>
using namespace std;

void fibbonacci(int n)
{
    int n1 = 0;
    int n2 = 1;
    int num;
    for (int i = 1; i <= n; i++)
    {
        cout << n1 << endl;
        num = n1 + n2;
        n1 = n2;
        n2 = num;
    }
}

int main()
{
    int n;
    cin >> n;

    fibbonacci(n);
    return 0;
}