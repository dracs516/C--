//set bit
//set=1
//unset=0
#include <iostream>
using namespace std;

int setBit(int n, int pos)
{
    return (n | (1 << pos));
}

int main()
{
    cout << setBit(5, 1) << endl;
    return 0;
}