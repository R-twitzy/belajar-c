#include <iostream>

using namespace std;

int main()
{
    int n, tmp, jumlah = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        jumlah += tmp;
    }

    cout << jumlah << endl;

    return 0;
}