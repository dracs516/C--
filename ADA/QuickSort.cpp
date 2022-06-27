#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int l, int r)
{
    int pivot = arr[r];
    int i = l - 1;

    for (int j = l; j < r; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, r);
    return i + 1;
}

void quickSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int pivot = partition(arr, l, r);
        quickSort(arr, l, pivot - 1);
        quickSort(arr, pivot + 1, r);
    }
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr_length;
    cout << "Enter the size of the array: ";
    cin >> arr_length;
    int arr[arr_length];
    // int arr[] = {34, 67, 12, 3, 57, 9, 3, 12};
    for (int i = 0; i < arr_length; i++)
    {
        arr[i] = rand();
    }
    print(arr, arr_length);
    clock_t start = clock();
    quickSort(arr, 0, arr_length - 1);
    clock_t end = clock();
    cout << endl;
    print(arr, arr_length);
    cout << endl;
    cout << std::fixed << "Time taken for quick sort is: " << (((double)end - (double)start) / (double)CLOCKS_PER_SEC) << endl;
    return 0;
}