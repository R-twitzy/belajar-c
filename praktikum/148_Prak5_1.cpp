#include <iostream>

using namespace std;

void printTengah(int arr[], int size)
{
    int indexTengah = size / 2;

    cout << arr[indexTengah - 1] << arr[indexTengah] << arr[indexTengah + 1] << endl;
}

int main()
{
    int T;

    cin >> T;

    int A[T];

    for (int i = 0; i < T; i++)
    {
        cin >> A[i];
    }

    printTengah(A, T);

    return 0;
}