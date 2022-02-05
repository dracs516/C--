#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string s = "7534865382912837";

    sort(s.begin(), s.end(), greater<int>());
    cout << s << endl;

    //manual:::::
    // sort(s.begin(), s.end());
    // cout << s << endl;
    // for (int i = s.length(); i >= 0; i--)
    // {
    //     cout << s[i];
    // }
    return 0;
}