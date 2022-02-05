#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int search)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int search;
    cout << "Enter the value you want to search: ";
    cin >> search;

    cout << "The value is present in " << linearSearch(arr, n, search) + 1 << "th position of array";
    return 0;
}