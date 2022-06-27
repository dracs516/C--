// Using STL create a list and perform the following operations push_back,Push_front,pop_front,pop_back,reverse and sort.

#include <iostream>
#include <list>
using namespace std;

void display(list<int> &l)
{
    list<int>::iterator it;
    for (it = l.begin(); it != l.end(); it++)
    {
        cout << *it << endl;
    }
    cout << endl;
}

int main()
{
    list<int> l;
    l.push_back(90);
    l.push_front(20);
    l.push_front(80);
    l.push_front(50);
    l.push_front(60);
    display(l);
    l.pop_front();
    display(l);
    l.pop_back();
    display(l);
    l.reverse();
    display(l);
    l.sort();
    display(l);

    return 0;
}