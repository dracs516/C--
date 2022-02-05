#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= n; j++) // instead of adding if condition, you can directly put the comdition j<=i in the for loop for columns
        {
            if (j <= i)
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }
    return 0;
}