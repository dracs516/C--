#include <iostream>
using namespace std;

template <class T>
class vector
{
public:
    T *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }

    T dotProduct(vector &v)
    {
        T dot_product = 0;
        for (int i = 0; i < size; i++)
        {
            dot_product += this->arr[i] * v.arr[i];
        }
        return dot_product;
    }
};

int main()
{
    vector<float> v1(3);

    v1.arr[0] = 1.4;
    v1.arr[1] = 3.3;
    v1.arr[2] = 0.1;

    vector<float> v2(3);

    v2.arr[0] = 0.1;
    v2.arr[1] = 1.90;
    v2.arr[2] = 4.1;

    float dot_product = v1.dotProduct(v2);
    cout << dot_product << endl;

    return 0;
}