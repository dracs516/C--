#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1 = "abcd";
    string s2 = "abcd";
    if (!s1.compare(s2))
    {
        cout << "Strings are equal";
    }
    // if (s1.compare(s2) == 0)
    // {
    //     cout << "Strings are equal";
    // }
    cout << s2.compare(s1) << endl;
    return 0;
}