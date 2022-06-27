// Develop a program to demonstrate multiple catch

#include <iostream>
using namespace std;

int main()
{
    try
    {
        char c;
        int a = 10;
        int b = 0;
        if (b == 0)
            throw c;
        c = a / b;
    }
    catch (int e)
    {
        cout << "Exception occured: int type" << e << endl;
    }
    catch (...)
    {
        cout << "Exception occured: else type" << endl;
    }
    return 0;
}