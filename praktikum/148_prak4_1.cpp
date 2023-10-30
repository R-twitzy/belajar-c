#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n][n];

    // input matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << endl; // buat ngasi bates antara input output ajh

    // output matrix (diputar 90 degrees searah jarum jam)
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            cout << arr[j][i] << ' ';
        }
        cout << endl;
    }

    return 0;
}