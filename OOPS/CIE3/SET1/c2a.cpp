// Develop a C++ program to write the object of the class containing name, USN, and CGPA as data members to a file “PUT.TXT” and also read the file content and print the details onto the console

#include <iostream>
#include <fstream>
using namespace std;

class Student
{
public:
    string name;
    string usn;
    float cgpa;

    Student()
    {
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter the USN: ";
        cin >> usn;
        cout << "Enter the CGPA: ";
        cin >> cgpa;
    }
};

int main()
{
    Student s1;
    ofstream outfile;
    outfile.open("PUT.TXT", ios::app);

    outfile << s1.name << endl;
    outfile << s1.usn << endl;
    outfile << s1.cgpa << endl;
    outfile.close();

    ifstream infile;
    infile.open("PUT.TXT");
    string line;
    while (getline(infile, line))
    {
        cout << line << endl;
    }
    infile.close();
    return 0;
}