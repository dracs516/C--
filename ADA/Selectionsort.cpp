#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void print(int size, int arr[])
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        swap(&arr[min_index], &arr[i]);
    }
}

int main()
{
    int arr_length;
    cout << "Enter the size of array: ";
    cin >> arr_length;
    int arr[arr_length];
    for (int i = 0; i < arr_length; i++)
    {
        arr[i] = rand();
    }
    print(arr_length, arr);
    clock_t start = clock();
    selection_sort(arr, arr_length);
    clock_t end = clock();
    print(arr_length, arr);

    cout << std::fixed << "Time taken for selection sort is: " << (((double)end - (double)start) / (double)CLOCKS_PER_SEC) << endl;
    return 0;
}