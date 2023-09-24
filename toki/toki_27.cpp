#include <iostream>

using namespace std;

int main()
{
    int i, j, n, m;

    cin >> n >> m;

    int A[n][m],
        R[m][n];

    // proses input matriks A
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> A[i][j];
        }
    }

    // proses rotasi
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            R[j][i] = A[i][j];
        }
    }

    // proses output rotasi
    for (i = 0; i < m; i++)
    {
        for (j = n-1; j >= 0; j--)
        {
            cout << R[i][j] <<' ';
        }
        cout << endl;
    }
}