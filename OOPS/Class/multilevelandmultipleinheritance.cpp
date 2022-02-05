#include <iostream>
using namespace std;
class student
{
protected:
    int rno;

public:
    void getrno(int a)
    {
        rno = a;
    }
    void disprno()
    {
        cout << "The roll number of the student is " << rno << endl;
    }
};
class test : public student
{
protected:
    int m1, m2;

public:
    void getmark(int l, int m)
    {
        m1 = l;
        m2 = m;
    }
    void displaymark()
    {
        cout << "----------------------------------------------------\n";
        cout << "The marks of the student in c++ is:::: " << m1 << endl;
        cout << "The marks of the student in c:::: " << m2 << endl;
    }
};
class sports
{
protected:
    int rating;

public:
    void getrating(int z)
    {
        rating = z;
    }
    void displayrating()
    {
        cout << "The sports rating is " << rating << endl;
    }
};
class result : public test, public sports
{
    float tot;

public:
    void displaytot()
    {
        tot = (float)(m1 + m2 + rating) / 3;
        displaymark();
        displayrating();
        disprno();
        cout << "The total rating of the student is " << tot << endl;
        cout << "----------------------------------------------------\n";
    }
};
int main()
{
    result abhay;
    abhay.getrno(02);
    abhay.getmark(89, 69);
    abhay.getrating(80.0);
    abhay.displaytot();
    return 0;
}