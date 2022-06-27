#include <iostream>
using namespace std;

class baseClass
{
public:
    int var_base = 1;
    virtual void getData()
    {
        cout << "The value of var_base is: " << var_base << endl;
    }
};

class derivedClass : public baseClass
{
public:
    int var_derived = 2;
    void getData()
    {
        cout << "The value of var_base is: " << var_base << endl;
        cout << "The value of var_derived is: " << var_derived << endl;
    }
};

int main()
{
    baseClass *base_class_pointer;
    baseClass base_class_object;
    derivedClass *derived_class_pointer;
    derivedClass derived_class_object;

    base_class_pointer = &derived_class_object;
    base_class_pointer->getData();
}