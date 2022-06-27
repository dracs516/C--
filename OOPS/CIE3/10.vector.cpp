#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec1;
    vector<int> vec2(4);
    vector<int> vec3(vec2);

    int element, size;

    cout << "Enter the size of vector: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element to be pushed: ";
        cin >> element;
        vec1.push_back(element);
    }

    vector<int>::iterator i_vec2 = vec2.begin();
    vec2.insert(i_vec2, 5, 45);

    vector<int>::iterator i_vec3 = vec3.begin();
    vec3.insert(i_vec3, 5, 69);

    display(vec1);
    display(vec2);
    display(vec3);

    return 0;
}