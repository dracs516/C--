#include <iostream>
#define N 3
using namespace std;

class MATRIX
{
    int mat[3][3];

public:
    void read()
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cin >> mat[i][j];
            }
        }
    }

    // MATRIX operator==(MATRIX x)
    // {
    // }

    MATRIX operator+(MATRIX x)
    {
        int matadd[10][10];

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                matadd[i][j] = mat[i][j] + x.mat[i][j];
            }
        }

        for (int i = 0; i < N; i++)
        {

            for (int j = 0; j < N; j++)
            {
                cout << matadd[i][j] << ' ';
            }
            cout << endl;
        }
    }

    MATRIX operator-(MATRIX x)
    {
        int matsub[10][10];

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                matsub[i][j] = mat[i][j] - x.mat[i][j];
            }
        }

        for (int i = 0; i < N; i++)
        {

            for (int j = 0; j < N; j++)
            {
                cout << matsub[i][j] << ' ';
            }
            cout << endl;
        }
    }
};

int main()
{
    MATRIX m1, m2;

    cout << "Enter matrix 1 data: ";
    m1.read();
    cout << "Enter matrix 2 data: ";
    m2.read();

    // m1 == m2;

    cout << "The sum of matrices is: \n";
    m1 + m2;
    cout << "The difference of matrices is: \n";
    m1 - m2;
}