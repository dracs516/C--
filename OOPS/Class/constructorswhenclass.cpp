#include <iostream>
using namespace std;
class stu1
{
    int marks;
    int id;

public:
    stu1(int a, int b)
    {
        marks = a;
        id = b;
        cout << "----------------------------------------\n";
        cout << "The marks and id is being set" << endl;
        cout << "----------------------------------------\n";
    }
    void display1()
    {
        cout << "----------------------------------------\n";
        cout << "The marks and id of student 1 is " << marks << " " << id << endl;
        cout << "----------------------------------------\n";
    }
};
class stu2
{
    int mark;
    int Id;

public:
    stu2(int c, int d)
    {
        mark = c;
        Id = d;
        cout << "----------------------------------------\n";
        cout << "The marks and id is being set" << endl;
        cout << "----------------------------------------\n";
    }
    void display2()
    {
        cout << "----------------------------------------\n";
        cout << "The marks and id of student 2 is " << mark << " " << Id << endl;
        cout << "----------------------------------------\n";
    }
};
class stu : public stu1, public stu2
{
    int mark2;
    int id2;

public:
    stu(int l, int m, int n, int o, int p, int q) : stu1(l, m), stu2(n, o)
    {
        mark2 = p;
        id2 = q;
        cout << "----------------------------------------\n";
        cout << "The mark and id is being set\n";
        cout << "----------------------------------------\n";
    }
    void display3()
    {
        cout << "----------------------------------------\n";
        cout << "The mark and id of student 3 is " << mark2 << " " << id2 << endl;
        cout << "----------------------------------------\n";
    }
};
int main()
{
    stu d(98, 23, 88, 45, 78, 55);
    d.display1();
    d.display2();
    d.display3();
    return 0;
}