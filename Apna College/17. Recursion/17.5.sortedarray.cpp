#include <iostream>
using namespace std;

bool sort(int arr[], int n)
{
    if (n == 1)
    {
        return true;
    }
    else
    {
        return (arr[0] < arr[1] && sort(arr + 1, n - 1));
    }
}

int main()
{
    int n;

    cout << "Define the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << sort(arr, n) << endl;

    return 0;
}