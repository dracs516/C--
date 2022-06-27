// Define a class Fuel with the following specifications
// Data members: Fuel_Type, Quantity
// Member Function:  set_Fuel()
// Develop a C++ program that throws an exception when Fuel_Type is “Petrol” and Quantity exceeds 50.

#include <iostream>
#include <string>
#include <exception>

using namespace std;

class Fuel
{
public:
    string fuel_type;
    int quantity;
    void set_fuel()
    {
        cout << "Enter the fuel type: ";
        cin >> fuel_type;
        cout << "Enter the quantity: ";
        cin >> quantity;
    }
};

int main()
{
    try
    {

        Fuel f1;
        f1.set_fuel();
        if (f1.fuel_type == "Petrol" && f1.quantity > 50)
        {
            throw 50;
        }
    }
    catch (int x)
    {
        cout << "Quantity exceeds 50" << endl;
    }
    return 0;
}