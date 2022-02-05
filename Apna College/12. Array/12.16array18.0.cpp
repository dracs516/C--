//maximum sum of subarray with time complexity o[n]
//kadane's algorithm
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int maxSum = INT_MIN;
    int currSum = 0;
    for (int i = 0; i < n; i++)
    {
        currSum += a[i];
        if (currSum < 0)
        {
            currSum = 0;
        }
        maxSum = max(currSum, maxSum);
    }
    cout << maxSum << endl;
    return 0;
}