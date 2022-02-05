#include <iostream>
using namespace std;
int main()
{
    int i = 10, j = 20, k;
    //  10    9      19      9    19  10  18
    k = i-- - i++ + --j + --i - j-- + ++i - j++;
    //  9     10      19  9   18      10  19
    cout << i << endl;
    cout << j << endl;
    cout << k << endl;
    return 0;
}