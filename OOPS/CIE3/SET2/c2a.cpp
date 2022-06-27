// Create a class called worker with member variables wid, name and no_of_hrs of work. Write a program to read and write the worker information from a file “workerdata” if the file exists

#include <iostream>
#include <fstream>
using namespace std;

class worker
{
public:
    int wid;
    string name;
    int no_of_hrs;

    worker()
    {
        cout << "Enter worker id: ";
        cin >> wid;
        cout << "Enter worker name: ";
        cin >> name;
        cout << "Enter no of hrs: ";
        cin >> no_of_hrs;
    }
};

int main()
{
    worker w;
    ofstream fout;
    fout.open("workerdata.txt", ios::app);
    fout << endl;
    fout << "Worker ID: " << w.wid << endl;
    fout << "Worker Name: " << w.name << endl;
    fout << "Worker Working Hours: " << w.no_of_hrs << endl
         << endl;

    fout.close();

    ifstream fin;
    string line;
    fin.open("workerdata.txt");
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
