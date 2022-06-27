// Develop a program to read the data stored in two separate files and write the data of first file into a third file also append the content of second file to the same file.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("b1.txt");
    ifstream in2("PUT.txt");
    ofstream out("third.txt", ios::app);
    string line;

    while (getline(in, line))
    {
        out << line << endl;
    }
    while (getline(in2, line))
    {
        out << line << endl;
    }
    in.close();
    in2.close();
    out.close();
    return 0;
}