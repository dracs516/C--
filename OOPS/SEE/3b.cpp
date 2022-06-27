// Write a program to input a m*n matrix and display the same by overloading << and >> operator.

#include <iostream>
#include <string.h>
using namespace std;

class matrix
{
    int m, n;
    int **a;

public:
    matrix()
    {
        m = n = 0;
        a = NULL;
    }
    matrix(int m, int n)
    {
        this->m = m;
        this->n = n;
        a = new int *[m];
        for (int i = 0; i < m; i++)

            a[i] = new int[n];
    }
    ~matrix()
    {
        for (int i = 0; i < m; i++)
            delete[] a[i];
        delete[] a;
    }
    void input()
    {
        cout << "Enter the number of rows and columns: ";
        cin >> m >> n;
        a = new int *[m];
        for (int i = 0; i < m; i++)
            a[i] = new int[n];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << "Enter the element: ";
                cin >> a[i][j];
            }
        }
    }
    void display()
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }
    friend ostream &operator<<(ostream &, matrix &);
    friend istream &operator>>(istream &, matrix &);
};

ostream &operator<<(ostream &out, matrix &m)
{
    for (int i = 0; i < m.m; i++)
    {
        for (int j = 0; j < m.n; j++)
            out << m.a[i][j] << " ";
        out << endl;
    }
    return out;
}

istream &operator>>(istream &in, matrix &m)
{
    for (int i = 0; i < m.m; i++)
    {
        for (int j = 0; j < m.n; j++)
        {
            in >> m.a[i][j];
        }
    }
    return in;
}

int main()
{
    matrix m;
    m.input();
    m.display();
    return 0;
}