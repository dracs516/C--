#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int k;
    cin >> k;

    //r and c values can be such that u can choose either the top right positoion in the matrix or th ebottom left corner of the matrix f0r the methods to be successful
    //for the top right position :
    int r = 0;
    int c = m - 1;

    while (r < n && c >= 0)
    {
        if (arr[r][c] == k)
        {
            cout << "Element found";
            return 0;
        }
        else if (arr[r][c] > k)
        {
            //for bottom left
            // r--
            c--;
        }
        else
        {
            //for bottom left
            //c++
            r++;
        }
    }
    cout << "Element not present in the matrix";

    return 0;
}