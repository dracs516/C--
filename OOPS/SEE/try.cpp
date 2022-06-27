#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int N;
        cin >> N;
        int arr[N];
        cin >> arr[i];
    }
    for (int i = 0; i < T; i++)
    {
        cout << arr[i] << endl;
    }
    int count[T];
    for (int i = 0; i < T; i++)
    {
        count[i] = 0;
    }
    int temp;
    for (int i = 0; i < T; i++)
    {
        if (arr[i] > arr[i + 1] && count[i] == 0)
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
            count[i] = count[i] + 1;
        }
    }
    for (int i = 0; i < T; i++)
    {
        if (count[i] == 1 || count[i] == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}