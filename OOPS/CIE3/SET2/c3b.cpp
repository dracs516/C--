// Write a program to read the file input.txt and display it on the console
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin;
    string line;
    fin.open("input.txt");
    if (fin.is_open())
    {
        while (getline(fin, line))
        {
            cout << line << endl;
        }
    }
    fin.close();

    return 0;
}