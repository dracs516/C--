#include <iostream>
using namespace std;

class baseClass
{
public:
    int var_base;
    void getData()
    {
        cout << "The value of var_base is: " << var_base << endl;
    }
};

class derivedClass : public baseClass
{
public:
    int var_derived;
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
    derived_class_pointer = &derived_class_object;

    base_class_pointer->var_base = 12;
    derived_class_pointer->var_base = 23;
    derived_class_pointer->var_derived = 34;
    // base_class_pointer->var_derived = 34; //not legal
    base_class_pointer->getData();
    derived_class_pointer->getData();
    return 0;
}