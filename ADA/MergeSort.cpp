#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void merge(int arr[], int l, int mid, int r)
{
    int subArrayLeft = mid - l + 1;
    int subArrayRight = r - mid;

    int leftArray[subArrayLeft];
    int rightArray[subArrayRight];

    for (int i = 0; i < subArrayLeft; i++)
    {
        leftArray[i] = arr[l + i];
    }

    for (int i = 0; i < subArrayRight; i++)
    {
        rightArray[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = l;

    while (i < subArrayLeft && j < subArrayRight)
    {
        if (leftArray[i] <= rightArray[j])
        {
            arr[k] = leftArray[i];
            i++;
        }
        else
        {
            arr[k] = rightArray[j];
            j++;
        }
        k++;
    }

    while (i < subArrayLeft)
    {
        arr[k] = leftArray[i];
        i++;
        k++;
    }

    while (j < subArrayRight)
    {
        arr[k] = rightArray[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);

        merge(arr, l, mid, r);
    }
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
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
    mergeSort(arr, 0, arr_length - 1);
    clock_t end = clock();

    cout << endl;
    print(arr, arr_length);
    cout << endl;

    cout << std::fixed << "Time taken for merge sort is: " << (((double)end - (double)start) / (double)CLOCKS_PER_SEC) << endl;
    return 0;
}