#include <iostream>

using namespace std;

int main()
{
    int N;

    cin >> N;

    int arr[N][N];

    for (int i = 0; i < N; i++)
    {
        arr[N - 1][i] = i + 1;
    }

    for (int a = N - 2; a >= 0; a--)
    {
        for (int j = 0; j < N; j++)
        {
            arr[a][j] = arr[a + 1][j] + arr[a + 1][j + 1];
        }
    }

    // print
    int tmp = 1;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < tmp; j++)
        {
            cout << arr[i][j] << " ";
        }
        tmp++;
        cout << endl;
    }
}