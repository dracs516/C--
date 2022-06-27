#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int testcase;
    int sum = 0;
    for (int i = 0; i < testcase; i++)
    {
        int N, G;
        cin >> N;
        cin >> G;
        int arr[G];
        for (int j = 0; j < G; j++)
        {
            cin >> arr[i];
        }
        for (int k = 0; k < G - 1; k++)
        {
            for (l = 0; l < G - k - 1; l++)
            {
                if (arr[l] > arr[l + 1])
                    swap(arr[l], arr[l + 1]);
            }
        }

        for (int j = 0; j < N; j++)
        {
            sum += arr[j];
        }
        cout << sum;
    }
    return 0;
}