#include <iostream>
using namespace std;

int count1(int n)
{
    int count = 0;
    while (n != 0) //while(n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}

int main()
{
    cout << count1(15) << endl;
    return 0;
}