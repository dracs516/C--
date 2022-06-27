// Design a Function template for finding the minimum value contained in an array. Write main function to find the minimum value of integer array and minimum value of floating point numbers in a n array.

#include <iostream>
using namespace std;

template <class T>
T min(T a[], int n)
{
    T min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    float b[] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.0};
    cout << "Minimum value of integer array: " << min(a, 10) << endl;
    cout << "Minimum value of floating point array: " << min(b, 10) << endl;
    return 0;
}