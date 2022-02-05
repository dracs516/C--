#include <iostream>
using namespace std;
class person
{
    string name;
    int age;
    string gender;

public:
    inline void setdata()
    {
        cout << "enter the first name,age and gender of the person\n";
        cin >> name >> age >> gender;
    }
    inline void getdata()
    {
        cout << "<---------person's info---------->\n";
        cout << "NAME:" << name << endl;
        cout << "AGE:" << age << endl;
        cout << "GENDER:" << gender << endl;
    }
};
class student : public person
{
    int usn;
    int sem;
    float cgpa;

public:
    friend void calculate(student &obj);
    void setdata()
    {
        person::setdata();
        cout << "enter the usn ,sem,cgpa \n";
        cin >> usn >> sem >> cgpa;
    }
    inline void getdata()
    {
        person::getdata();
        cout << "USN:" << usn << endl;
        cout << "SEM:" << sem << endl;
        cout << "CGPA:" << cgpa << endl;
    }
    float operator+(student obj)
    {

        cgpa = (cgpa + obj.cgpa) / 2;
        return cgpa;
    }
};
void calculate(student &obj)
{
    int sports, phy, chem;
    cout << "enter the marks you got in phy,sports,chem out of ten\n";
    cin >> sports >> phy >> chem;
    float avg = (float)(sports + phy + chem + obj.cgpa) / 4;
    obj.cgpa = avg;
}
int main()
{
    student arpan, arpan2;
    arpan.setdata();
    calculate(arpan);
    arpan.getdata();
    arpan2.setdata();
    calculate(arpan2);
    arpan2.getdata();
    cout << "average cgpa:" << arpan + arpan2 << endl;
    arpan.getdata();
    return 0;
}