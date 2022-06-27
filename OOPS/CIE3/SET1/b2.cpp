// Write a C++ to create a vector container of type integer and perform the following operations:
// Insert at the front
// Find the size of the vector
// Insert a value at 6th position in the vector
// Remove2nd and 4th element from the vector
// Delete the element at the end of the vector

#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    vector<int> v1;
    int element;
    int size;
    vector<int>::iterator iter = v1.begin();
    cout << "Enter the number of elements: ";
    cin >> size;
    cout << "Enter the elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> element;
        v1.insert(v1.begin(), element);
    }
    display(v1);
    cout << endl;
    cout << "size: " << v1.size() << endl;
    display(v1);
    cout << endl;
    v1.insert(v1.begin() + 5, 6);
    cout << endl;

    display(v1);
    v1.erase(v1.begin() + 1);
    cout << endl;
    display(v1);
    v1.erase(v1.begin() + 3);
    cout << endl;
    display(v1);
    v1.erase(v1.end() - 1);
    cout << endl;
    display(v1);
}