// Design a class named PersonData with the following member variables lastName,
// firstName, address, city, state and phone. Write the appropriate constructor, accessor and
// mutator functions for these member variables. Next, design a class named CustomerData,
// which is derived from the PersonData class. The CustomerData class should have the
// following member variables: customerNumber, email id. The customerNumber variable will
// be used to hold a unique integer for each customer. Write appropriate constructors, accessor
// and mutator functions for these member variables. Demonstrate an object of the
// CustomerData class in a simple program.

#include <iostream>
#include <string>
using namespace std;

class PersonData
{
    string lastName;
    string firstName;
    string address;
    string city;
    string state;
    int phone;

public:
    void set_data();
    void display();

    PersonData()
    {
        cout << "Enter the last name: ";
        cin >> lastName;
        cout << "Enter the first name: ";
        cin >> firstName;
        cout << "Enter the address: ";
        cin >> address;
        cout << "Enter the city: ";
        cin >> city;
        cout << "Enter the state: ";
        cin >> state;
        cout << "Enter the phone number: ";
        cin >> phone;
    }
};

class CustomerData : public PersonData
{
    int customerNumber;
    string emailid;

public:
    void read_data();
    void show();

    CustomerData()
    {
        cout << "Enter the customer number: ";
        cin >> customerNumber;
        cout << "Enter the email id: ";
        cin >> emailid;
    }
};

void PersonData::display()
{
    cout << "------------------------------------------\n";
    cout << "Customer Details:";
    cout << "Name: " << lastName << " " << firstName << endl;
    cout << "Address: " << address << endl;
    cout << "City: " << city << endl;
    cout << "State: " << state << endl;
    cout << "Phone: " << phone << endl;
}

void CustomerData::show()
{
    cout << "Customer Number: " << customerNumber << endl;
    cout << "Email id: " << emailid << endl;
    cout << "------------------------------------------\n";
}

void PersonData::set_data()
{
}

void CustomerData::read_data()
{
}

int main()
{
    CustomerData c1;
    c1.display();
    c1.show();
    return 0;
}