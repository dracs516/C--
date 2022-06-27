// Design a Function template for finding average of values in an array. Write main function to find the average value of float array and average of integer array
#include <iostream>
using namespace std;

template <class T>
T avg(T arr[], int n)
{
    T sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum / n;
}

int main()
{
    int a[] = {10, 20, 30, 40, 50};
    float b[] = {10.5, 20.5, 30.5, 40.5, 50.5};
    cout << "Average of integer array: " << avg(a, 5) << endl;
    cout << "Average of float array: " << avg(b, 5) << endl;
    return 0;
}