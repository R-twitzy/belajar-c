#include <iostream>

using namespace std;

int main()
{
    int n, array[1001] = {0}, modus, frekuensi_modus = 0, tmp;

    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        cin >> tmp;
        array[tmp]++;
    }
    for (size_t i = 0; i <= 1000; i++)
    {
        if (array[i] >= frekuensi_modus)
        {
            frekuensi_modus = array[i];

            modus = i;
        }
    }

    cout << modus;
}