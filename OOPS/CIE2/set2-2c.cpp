#include <iostream>
using namespace std;

class demo
{
public:
    int *x;
    demo()
    {
        cout << "lado chus";
    }
    demo(int val)
    {
        x = new int(val);
        cout << *x;
    }
};
int main()
{
    demo d1;
    demo d2(20);
}
