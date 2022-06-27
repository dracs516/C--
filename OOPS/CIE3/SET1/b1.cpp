// Write a program to input from the keyboard and write to a file
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string name;
    string address;
    string phone;
    string email;
    string date;
    string time;
    string message;

    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your address: ";
    cin >> address;
    cout << "Enter your phone number: ";
    cin >> phone;
    cout << "Enter your email: ";
    cin >> email;
    cout << "Enter your date: ";
    cin >> date;
    cout << "Enter your time: ";
    cin >> time;
    cout << "Enter your message: ";
    cin >> message;

    ofstream outfile;
    outfile.open("b1.txt");
    outfile << "Name: " << name << endl;
    outfile << "Address: " << address << endl;
    outfile << "Phone: " << phone << endl;
    outfile << "Email: " << email << endl;
    outfile << "Date: " << date << endl;
    outfile << "Time: " << time << endl;
    outfile << "Message: " << message << endl;
    outfile.close();

    return 0;
}