#include <iostream>
using namespace std;
void increment(int a)
{
    a++;
}
int main()
{
    int a = 2;
    increment(a);
    cout << a << endl; //it wont increase the value of a as in functions, actual variables are not passed but just the values are passed
    return 0;
}