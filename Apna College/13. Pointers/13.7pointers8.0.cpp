// passing pointers in function is calling by reference
#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 2;
    int b = 4;

    //either create two new pointers as such::::

    // int *aptr = &a;
    // int *bptr = &b;
    // swap(aptr, bptr);

    //or do this::::

    swap(&a, &b);
    cout << a << " " << b << endl;
    return 0;
}