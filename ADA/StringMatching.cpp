#include <iostream>
#include <time.h>
using namespace std;
int str_mat(string a, string b)
{
    for (int i = 0; i <= (a.length() - b.length()); i++)
    {
        int j = 0;
        while (j < b.length() && b[j] == a[i + j])
        {
            j++;
        }
        if (j == b.length())
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    string str1, str2;
    cout << "Sring 1:";
    getline(cin, str1);
    // cin >> str1;
    cout << "Sring 2:";
    // cin >> str2;
    getline(cin, str2);
    clock_t start = clock();
    int x = str_mat(str1, str2);
    clock_t end = clock();
    if (x == -1)
    {
        cout << "Pattern not found" << endl;
    }
    else
    {
        cout << "Pattern found at index: " << x << endl;
    }
    cout << std::fixed << "Time taken for selection sort is: " << (((double)end - (double)start) / (double)CLOCKS_PER_SEC) << endl;
    return 0;
}