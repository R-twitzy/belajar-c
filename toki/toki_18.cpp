#include <iostream>

using namespace std;

int main()
{
    int n, kecil, besar, tmp;

    cin >> n >> kecil;

    besar = kecil;

    for (size_t i = 1; i < n; i++)
    {
        cin >> tmp;
        if (tmp < kecil)
        {
            kecil = tmp;
        }
        else if (tmp > besar)
        {
            besar = tmp;
        }
    }
    cout << besar << ' ' << kecil << endl;
}