#include <iostream>
using namespace std;

int sum(int n)
{
    if (n != 1)
    {
        return n + sum(n - 1);
    }
    else
    {
        return 1;
    }
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    printf("The sum is: %d", sum(n));
    printf("\n");
    return 0;
}