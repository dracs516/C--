// Design a C++ friend function to perform the summation of 2 numbers with member functions get_data, summation and display data

#include <iostream>
using namespace std;

class summation
{
    int num;

public:
    void get_data()
    {
        cout << "enter the nums:" << endl;
        cin >> num;
    }
    void display()
    {
        cout << "num: " << num << endl;
    }
    friend void summationm(summation s1, summation s2);
};

void summationm(summation s1, summation s2)
{
    cout << "sum is:" << s1.num + s2.num << endl;
}

int main()
{
    summation p, q;
    p.get_data();
    q.get_data();
    p.display();
    q.display();
    summationm(p, q);
    return 0;
}