#include <iostream>
using namespace std;
int main()
{
    string s1 = "nincompoop";
    cout << s1.find("com") << endl;
    s1.insert(2, "lol");
    cout << s1 << endl;
    cout << s1.length(); //s1.size()
    return 0;
}