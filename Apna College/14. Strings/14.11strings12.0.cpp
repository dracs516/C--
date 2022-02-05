#include <iostream>
using namespace std;
int main()
{
    string s1 = "786";
    int x = stoi(s1);
    cout << x + 2 << endl;
    int y = 786;
    cout << to_string(x) + "2" << endl;
    return 0;
}