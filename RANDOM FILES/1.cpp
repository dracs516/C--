#include <iostream>
using namespace std;

class time1
{
public:
    int hr, min;
    void setData()
    {
        cin >> hr >> min;
        if (hr > 23 || min > 59 || hr < 0 || min < 0)
        {
            cout << "Wrong time";
        }
        return;
    }
    void display()
    {
        printf("%02d %02d", hr, min);
    }
    time1 operator+(time1 t2)
    {
        time1 t3;
        t3.hr = hr + t2.hr;
        t3.min = min + t2.min;
        if (t3.min > 59)
        {
            t3.hr = t3.hr + 1;
            t3.min = t3.min - 60;
        }
        if (t3.hr > 23)
        {
            t3.hr = t3.hr - 24;
        }
        return t3;
    }
};

int main()
{
    time1 t1, t2;
    t1.setData();
    t2.setData();
    time1 t3;
    t3 = t1 + t2;
    t3.display();
    return 0;
}