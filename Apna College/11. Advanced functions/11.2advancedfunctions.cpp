//every type to decimal

#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n1)
{
    int ans = 0;
    int b = 1;
    while (n1 > 0)
    {
        int r = n1 % 10;
        ans = ans + b * r;
        b = b * 2;
        n1 = n1 / 10;
    }
    return ans;
}

int octalToDecimal(int n2)
{
    int ans = 0;
    int o = 1;
    while (n2 > 0)
    {
        int r = n2 % 10;
        ans = ans + o * r;
        o = o * 8;
        n2 = n2 / 10;
    }
    return ans;
}

int hexadecimalToDecimal(string n3)
{
    int ans = 0;
    int h = 1;
    int s = n3.size();
    for (int i = s - 1; i >= 0; i--)
    {
        if (n3[i] >= '0' && n3[i] <= '9')
        {
            ans = ans + h * (n3[i] - '0');
        }
        else if (n3[i] >= 'A' && n3[i] <= 'F')
        {
            ans = ans + h * (n3[i] - 'A' + 10);
        }
        h = h * 16;
    }
    return ans;
}

void decimalToBinary(int n4)
{
    int i = 0;
    int ans[32];
    while (n4 > 0)
    {
        ans[i] = n4 % 2;
        n4 = n4 / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        cout << ans[j];
    }
}

void decimalToOctal(int n4)
{
    int i = 0;
    int ans[32];
    while (n4 > 0)
    {
        ans[i] = n4 % 8;
        n4 = n4 / 8;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        cout << ans[j];
    }
}

void decimalToHexadecimal(int n4)
{
    int i = 0;
    int temp;
    char ans[32];
    while (n4 > 0)
    {
        temp = n4 % 16;
        if (temp < 10)
        {
            ans[i] = temp + '0';
        }

        else
        {
            ans[i] = temp + 'A';
        }
        i++;
        n4 = n4 / 16;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout << ans[j];
    }
}

int main()
{
    int n1, n2, n4;
    string n3;
    cout << "********************************************" << endl;
    cout << "Enter Binary Number: ";
    cin >> n1;
    cout << "Enter Octal Number: ";
    cin >> n2;
    cout << "Enter Hexadecimal Number: ";
    cin >> n3;
    cout << "Enter Decimal Number: ";
    cin >> n4;
    cout << "********************************************" << endl;
    cout << "Binary to Decimal is: " << binaryToDecimal(n1) << endl;
    cout << "Octal to Decimal is: " << octalToDecimal(n2) << endl;
    cout << "Hexadecimal to Decimal is: " << hexadecimalToDecimal(n3) << endl;
    decimalToBinary(n4);
    cout << endl;
    decimalToOctal(n4);
    cout << endl;
    decimalToHexadecimal(n4);
    cout << endl;
    cout << "********************************************";
    return 0;
}