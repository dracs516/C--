#include <iostream>
using namespace std;

int main()
{
    try
    {
        int a, b;
        cin >> a >> b;
        if (b == 0)
            throw 0;
        cout << a / b << endl;
    }
    catch (int x)
    {
        cout << "Exception occured: " << x << endl;
    }
    return 0;
}