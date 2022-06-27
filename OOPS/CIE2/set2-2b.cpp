// Develop a program to perform obj3=obj1-obj2; and obj=obj1-7; where obj1, obj2, obj3 and obj are objects of class example with one integer and float member variables  using - operator overloading.
#include <iostream>
using namespace std;

class example
{
public:
    int x;
    float y;

    example() {}

    example(int a, float b)
    {
        x = a;
        y = b;
    }

    friend example operator-(example obj1, example obj2)
    {
        example obj3;
        obj3.x = obj1.x - obj2.x;
        obj3.y = obj1.y - obj2.y;
    }
    friend example operator-(example obj1, int obj2)
    {
        example obj3;
        obj3.y = obj1.y - obj2;
        obj3.x = obj1.x - obj2;
    }
};

int main()
{
    example obj1(12, 23), obj2(23, 45), obj3, obj;
    obj3 = obj1 - obj2;
    obj = obj1 - 7;
}