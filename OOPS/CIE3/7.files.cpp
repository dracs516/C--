#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    // string s = "Hello World. This is my first files program.";
    string s1;

    // ofstream outfile("7.files.txt");
    // outfile << s;

    // outfile.close();

    ifstream infile;
    infile.open("7.files.txt");
    // infile >> s1;

    while (infile.eof() == 0)
    {
        getline(infile, s1);
        cout << s1 << endl;
    }

    infile.close();
    return 0;
}