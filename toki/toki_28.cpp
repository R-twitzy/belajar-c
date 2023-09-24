#include <iostream>

using namespace std;

int main()
{
    int i, j, k, n, m, p, tmp;

    cin >> n >> m >> p;

    int A[n][m],
        B[m][p];

    // proses input matriks A
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> A[i][j];
        }
    }

    // proses input matriks B
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
        {
            cin >> B[i][j];
        }
    }

    // output hasil
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < p; j++)
        {
            tmp = 0;
            for (k = 0; k < m; k++)
            {
                tmp += A[i][k] * B[k][j];
            }
            cout << tmp << ' ';
        }
        cout << endl;
    }
}