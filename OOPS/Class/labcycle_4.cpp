#include <iostream>
using namespace std;

class matrix
{
    int n, m;
    int mat[10][10];

public:
    void read(int r, int c)
    {
        n = r;
        m = c;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << "Enter the data at " << i + 1 << " * " << j + 1 << endl;
                cin >> mat[i][j];
            }
        }
    }

    void display()
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {

                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

    friend matrix transpose(matrix mat, int, int);
};

matrix transpose(matrix o1, int n, int m)
{
    matrix temp;
    temp.n = m;
    temp.m = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            temp.mat[j][i] = o1.mat[i][j];
            // cout << mat[j][i] << " ";
        }
    }
    // cout << endl;
    return temp;
}

int main()
{
    int r, c;
    cout << "Enter the row and column for the matrix: ";
    cin >> r >> c;
    matrix o1, m2;
    o1.read(r, c);
    o1.display();
    m2 = transpose(o1, r, c);
    m2.display();
}