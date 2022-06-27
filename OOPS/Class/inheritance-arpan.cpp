#include <iostream>
#include <string.h>
using namespace std;

class animal
{
    string name;
    string ancestors;
    string clss;

public:
    void getdata(string name, string ancestors, string clss)
    {
        this->name = name;
        this->ancestors = ancestors;
        this->clss = clss;
    }
    void print()
    {
        cout << "<-----------------animal info------------------>\n";
        cout << "NAME: " << this->name << endl;
        cout << "ANCESTORS: " << this->ancestors << endl;
        cout << "CLASS: " << this->clss << endl;
    }
};
class cat : public animal
{
    string local_name;
    int legs;
    string food;
    string behav;

public:
    void getdata(string local_name, string food, string behav, int legs)
    {
        this->local_name = local_name;
        this->food = food;
        this->behav = behav;
        this->legs = legs;
    }
    void print()
    {
        animal::print();
        cout << "LOCAL NAME: " << this->local_name << endl;
        cout << "FOOD: " << this->food << endl;
        cout << "LEGS: " << this->legs << endl;
        cout << "BEHAVIOR: " << this->behav << endl;
    }
};

class dog : public animal
{
    string local_name;
    int legs;
    string food;
    string behav;

public:
    void getdata(string local_name, string food, string behav, int legs)
    {
        this->local_name = local_name;
        this->food = food;
        this->behav = behav;
        this->legs = legs;
    }
    void print()
    {
        animal::print();
        cout << "LOCAL NAME: " << this->local_name << endl;
        cout << "FOOD: " << this->food << endl;
        cout << "LEGS: " << this->legs << endl;
        cout << "BEHAVIOR: " << this->behav << endl;
    }
};
int main()
{
    // animal ct,dg;
    // ct.getdata("felis catus","leopards","vertebrates-mammals");
    // dg.getdata("canis lupus familiaris","wolves","vertebrates-mammals");
    cat c;
    c.animal::getdata("felis catus", "leopards", "vertebrates-mammals");
    c.getdata("cat", "fish", "bad_towards_humans", 4);
    c.print();
    return 0;
}