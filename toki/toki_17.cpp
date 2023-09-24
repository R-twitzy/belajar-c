#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (size_t i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            cout << n / i << endl;
        }
    }
    cout << 1 << endl;
    return 0;
}