#include <iostream>
using namespace std;

class vehicle
{
    int registration_number;
    static int count;

public:
    void setregno()
    {
        cin >> registration_number;
    }

    void getregno()
    {
        cout << "The registration no. of the vehicle is: " << registration_number << endl;
    }

    static void getVehilcecount()
    {
        cout << "The Vehicle count in the garage is: " << count << endl;
    }

    vehicle()
    {
        cout << "Enter the registration no. for vehicle " << count + 1 << ": ";
        setregno();
        getregno();
        count++;
        cout << "The Vehicle count in the garage is: " << count << endl;
    }

    ~vehicle()
    {
        count--;
        cout << "The Vehicle count in the garage is: " << count << endl;
    }
};

int vehicle ::count = 0;

int main()
{
    vehicle v[5];
    // {
    //     int n;

    //     cout << "Enter the no. of vehicles from 1 to 5: ";
    //     cin >> n;

    //     for (int i = 0; i < n; i++)
    //     {
    //         v[i].setregno();
    //     }
    //     for (int i = 0; i < n; i++)
    //     {
    //         v[i].getregno();
    //     }
    // }
    return 0;
}