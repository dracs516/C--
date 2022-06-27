#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, N, G;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> N;
        cin >> G;
        long arr[G];
        for (int j = 0; j < G; j++)
        {
            cin >> arr[j];
        }
        sort(arr, arr + G);
        // for (int j = 0; j < G - 1; j++)
        // {
        //     for (int k = 0; k < G - j - 1; k++)
        //     {
        //         if (arr[k] > arr[k + 1])
        //         {
        //             int temp = arr[k];
        //             arr[k] = arr[k + 1];
        //             arr[k + 1] = temp;
        //         }
        //     }
        // }

        long sum = 0;
        for (int x = 0; x < N; x++)
        {
            sum = sum + arr[x];
        }
        cout << sum << endl;
    }
    return 0;
}