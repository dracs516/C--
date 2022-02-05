#include <iostream>
using namespace std;

int main()
{
    char button;
    cout << "Input a character: ";
    cin >> button;

    switch (button)
    {
    case 'a':
        cout << "Hello" << endl; //if break is not given then it prints all the cout statements even if it dissatisfies the case condition
        break;
    case 'b':
        cout << "Hola" << endl;
        break;
    case 'c':
        cout << "Namaste" << endl;
        break;
    case 'd':
        cout << "Paranam" << endl;
        break;
    case 'e':
        cout << "Pranipat" << endl;
        break;

    default:
        cout << "No more languages";
        break;
    }
    return 0;
}