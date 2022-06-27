// Define a class to represent a bank account. Include the following members:
// Data members :
// a) Name of the depositor
// b) Account Number
// c) Type of account
// d)Balance amount in the account
// Member Functions:
// a) To Assign initial values
// b) To deposit an amount
// c) To withdraw an amount after checking the Balance
// d) To display name and balance
// Write a main program to test the program

#include <iostream>
using namespace std;

class bankAccount
{
    string name;
    int accNo;
    string accType;
    float balance;

public:
    void assign()
    {
        cout << "Enter the name of the depositor: ";
        cin >> name;
        cout << "Enter the account number: ";
        cin >> accNo;
        cout << "Enter the type of account: ";
        cin >> accType;
        cout << "Enter the balance amount: ";
        cin >> balance;
    }

    void deposit()
    {
        float amount;
        cout << "Enter the amount to be deposited: ";
        cin >> amount;
        balance += amount;
    }

    void withdraw()
    {
        float amount;
        cout << "Enter the amount to be withdrawn: ";
        cin >> amount;
        if (balance >= amount)
        {
            balance -= amount;
        }
        else
        {
            cout << "Insufficient balance";
        }
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accNo << endl;
        cout << "Account Type: " << accType << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    bankAccount b;
    b.assign();
    b.display();
    b.deposit();
    b.display();
    b.withdraw();
    b.display();
    return 0;
}