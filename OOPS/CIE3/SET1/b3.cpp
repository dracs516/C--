// Write a C++ program to copy the contents of one file to another.

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream infile;
    ofstream outfile;
    infile.open("b1.txt");
    outfile.open("b2.txt", ios::app);
    string line;
    while (getline(infile, line))
    {
        outfile << line << endl;
    }
    infile.close();
    outfile.close();
}