#include <iostream>

using namespace std;

int main()
{
    int i, j;
    string A[3][3],
        T[3][3];

    // proses input matriks A
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> A[i][j];
        }
    }

    // proses tranpose
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            T[j][i] = A[i][j];
        }
    }

    // proses output tranpose
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << T[i][j] <<' ';
        }
        cout << endl;
    }
}