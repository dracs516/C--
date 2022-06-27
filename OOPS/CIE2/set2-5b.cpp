// Write appropriate constructor code  to get the following output for multilevel inheritance
// Hello first base class
// Hi  second base class
// Hi third base class
// I am in  child class

#include <iostream>
using namespace std;

class first
{
public:
    first()
    {
        cout << "Hello first base class" << endl;
    }
};
class second
{
public:
    second()
    {

        cout << "Hi  second base class" << endl;
    }
};
class third
{
public:
    third()
    {

        cout << "Hi third base class" << endl;
    }
};
class child : public first, public second, public third
{
public:
    child()
    {
        cout << "I am in  child class" << endl;
    }
};

int main()
{
    child c1;
    return 0;
}